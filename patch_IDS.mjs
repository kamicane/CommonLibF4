#!/usr/bin/env node

import fs from 'fs';
import path from 'path';
import readline from 'readline';

const OG_RTTI_HEADER = './.tmp_OG_IDS/RTTI_IDs.h';
const AE_RTTI_HEADER = './.tmp_XSE_AE_IDS/IDs_RTTI.h';
const NG_RTTI_HEADER = './.tmp_NG_IDS/RTTI_IDs.h';

const OG_VTABLE_HEADER = './.tmp_OG_IDS/VTABLE_IDs.h';
const AE_VTABLE_HEADER = './.tmp_XSE_AE_IDS/IDs_VTABLE.h';
const NG_VTABLE_HEADER = './.tmp_NG_IDS/VTABLE_IDs.h';

const LOCAL_RTTI_HEADER = './include/RE/RTTI_IDs.hpp';
const LOCAL_VTABLE_HEADER = './include/RE/VTABLE_IDs.hpp';

const OUT_DIR = './.tmp_patched_ids';

// Reusable regexes for parsing
const RTTI_ID_REGEX = /inline\s+constexpr\s+REL::ID\s+([^\s\{]+)\s*\{([^}]*)\}/;
const RTTI_RELOCATION_ID_REGEX = /inline\s+constexpr\s+REL::RelocationID\s+([^\s\{]+)\s*\{([^}]*)\}/;

// Matches: inline constexpr std::array<REL::ID, N> Name { REL::ID(...), REL::ID(...), ... };
// Only match std::array<REL::ID, N> entries (ignore REL::RelocationID arrays)
const VTABLE_ID_REGEX = /^\s*inline\s+constexpr\s+std::array\s*<\s*REL::ID\s*,\s*(\d+)\s*>\s+([^\s\{]+)\s*\{\s*([^}]*)\s*\}\s*;/;

// Matches: inline constexpr std::array<REL::RelocationID, N> Name { REL::RelocationID(a,b), REL::RelocationID(c,d), ... };
// Captures: (1) element count N, (2) Name, (3) brace contents
const VTABLE_RELOCATION_ID_REGEX = /^\s*inline\s+constexpr\s+std::array\s*<\s*REL::RelocationID\s*,\s*(\d+)\s*>\s+([^\s\{]+)\s*\{\s*([^}]*)\s*\}\s*;/;

function extractNumbers(text) {
	const nums = Array.from(text.matchAll(/(\d+)/g)).map(m => parseInt(m[1]));
	return nums;
}

async function buildSingleIdRTTIMap(headerPath) {
	const map = new Map();
	const readStream = fs.createReadStream(headerPath, { encoding: 'utf8' });
	const lineReader = readline.createInterface({ input: readStream, crlfDelay: Infinity });
	let lineNumber = 0;

	for await (const line of lineReader) {
		lineNumber++;
		const match = line.match(RTTI_ID_REGEX);
		if (!match) {
			// if (line.trim().length) console.warn(`Line ${lineNumber} in ${filePath} did not match REL::ID pattern: ${line.trim()}`);
			continue;
		}
		const name = match[1].trim();
		const nums = extractNumbers(match[2]);
		if (nums.length === 0) {
			console.warn(`No numeric id found for ${name} in ${headerPath} at line ${lineNumber}: ${line.trim()}`);
			continue;
		}
		// const obj = Object.create(null);
		// obj[key] = ;
		map.set(name, nums[0]);
	}
	return map;
}

async function buildSingleIdVTABLEMap(headerPath) {
	const map = new Map();
	const readStream = fs.createReadStream(headerPath, { encoding: 'utf8' });
	const lineReader = readline.createInterface({ input: readStream, crlfDelay: Infinity });
	let lineNumber = 0;

	for await (const line of lineReader) {
		lineNumber++;
		const match = line.match(VTABLE_ID_REGEX);
		if (!match) {
			// skip non-matching lines silently
			continue;
		}

		const name = match[2].trim();
		const nums = extractNumbers(match[3]);
		if (nums.length === 0) {
			console.warn(`No numeric id found for ${name} in ${headerPath} at line ${lineNumber}: ${line.trim()}`);
			continue;
		}

		map.set(name, nums);
	}

	return map;
}

async function buildMultiIdVTABLEMap(headerPath) {
	const map = new Map();
	const readStream = fs.createReadStream(headerPath, { encoding: 'utf8' });
	const lineReader = readline.createInterface({ input: readStream, crlfDelay: Infinity });
	let lineNumber = 0;

	for await (const line of lineReader) {
		lineNumber++;
		// Try relocation-array form first (REL::RelocationID array)
		let match = line.match(VTABLE_RELOCATION_ID_REGEX);
		if (match) {
			const elementCount = parseInt(match[1], 10);
			const name = match[2].trim();
			const contents = match[3];
			const nums = extractNumbers(contents);

			if (nums.length === 0) {
				console.warn(`No numeric ids found for ${name} in ${headerPath} at line ${lineNumber}: ${line.trim()}`);
				continue;
			}

			const pairs = [];
			const expected = elementCount * 2;
			if (nums.length < expected) {
				console.warn(`Line ${lineNumber} in ${headerPath}: expected ${expected} numbers for ${name}, found ${nums.length}`);
			}

			const pairCount = Math.floor(nums.length / 2);
			for (let i = 0; i < pairCount; i++) {

				const ogValue = nums[i * 2];
				const ngValue = nums[i * 2 + 1];
				pairs.push({ og: ogValue, ng: ngValue });
			}

			map.set(name, pairs);
			continue;
		}

		// Fallback: plain REL::ID array entries (std::array<REL::ID, N>)
		match = line.match(VTABLE_ID_REGEX);
		if (match) {
			const elementCount = parseInt(match[1], 10);
			const name = match[2].trim();
			const contents = match[3];
			const nums = extractNumbers(contents);

			if (nums.length === 0) {
				console.warn(`No numeric ids found for ${name} in ${headerPath} at line ${lineNumber}: ${line.trim()}`);
				continue;
			}

			if (nums.length < elementCount) {
				console.warn(`Line ${lineNumber} in ${headerPath}: expected ${elementCount} ids for ${name}, found ${nums.length}`);
			}

			const entries = nums.map(n => ({ og: n }));
			map.set(name, entries);
			continue;
		}

		// non-matching lines are ignored
	}

	return map;
}

async function buildMultiIdRTTIMap(headerPath) {
	const map = new Map();
	const readStream = fs.createReadStream(headerPath, { encoding: 'utf8' });
	const lineReader = readline.createInterface({ input: readStream, crlfDelay: Infinity });
	let lineNumber = 0;

	for await (const line of lineReader) {
		lineNumber++;
		let match = line.match(RTTI_RELOCATION_ID_REGEX);
		if (match) {
			const name = match[1].trim();
			const nums = extractNumbers(match[2]);
			if (nums.length >= 2) map.set(name, { og: nums[0], ng: nums[1] });
			else console.warn(`Line ${lineNumber} in ${headerPath}: expected >=2 ids for ${name} (RelocationID), found ${nums.length}`);
			continue;
		}
		match = line.match(RTTI_ID_REGEX);
		if (match) {
			const name = match[1].trim();
			const nums = extractNumbers(match[2]);
			if (nums.length >= 1) {
				if (!map.has(name)) map.set(name, { og: nums[0] });
			} else {
				console.warn(`Line ${lineNumber} in ${headerPath}: no numeric id found for ${name} (REL::ID)`);
			}
			continue;
		}
		// if (line.trim().length) console.warn(`Line ${lineNumber} in ${headerPath} did not match any expected patterns: ${line.trim()}`);
	}
	return map;
}

function ensureOut() {
	if (!fs.existsSync(OUT_DIR)) fs.mkdirSync(OUT_DIR, { recursive: true });
}

function mapToObject(map) {
	const obj = Object.create(null);
	for (const [k, v] of map) obj[k] = v;
	return obj;
}

async function parseVTABLEHeaders() {
	// Read base maps (OG/AE/NG are single-ID arrays; local is array of {og, ng})
	const ogMap = await buildSingleIdVTABLEMap(OG_VTABLE_HEADER);
	const aeMap = await buildSingleIdVTABLEMap(AE_VTABLE_HEADER);
	const ngMap = await buildSingleIdVTABLEMap(NG_VTABLE_HEADER);
	const localMap = await buildMultiIdVTABLEMap(LOCAL_VTABLE_HEADER);

	ensureOut();
	fs.writeFileSync(path.join(OUT_DIR, 'og_vtable_map.json'), JSON.stringify(mapToObject(ogMap), null, 2));
	fs.writeFileSync(path.join(OUT_DIR, 'ae_vtable_map.json'), JSON.stringify(mapToObject(aeMap), null, 2));
	fs.writeFileSync(path.join(OUT_DIR, 'ng_vtable_map.json'), JSON.stringify(mapToObject(ngMap), null, 2));
	fs.writeFileSync(path.join(OUT_DIR, 'local_vtable_map.json'), JSON.stringify(mapToObject(localMap), null, 2));

	const combinedMap = new Map();

	for (const [name, localEntries] of localMap) {
		let ogEntries = ogMap.get(name) || [];
		let aeEntries = aeMap.get(name) || [];
		let ngEntries = ngMap.get(name) || [];

		if (ngEntries.length != localEntries.length) ngEntries = [];
		if (aeEntries.length != localEntries.length) aeEntries = [];

		const combinedEntries = [];

		for (const [idx, localEntry] of localEntries.entries()) {
			combinedEntries.push({ og: localEntry.og, ng: ngEntries[idx], ae: aeEntries[idx]});
		}
		combinedMap.set(name, combinedEntries);
	}

	fs.writeFileSync(path.join(OUT_DIR, 'combined_vtable_map.json'), JSON.stringify(mapToObject(combinedMap), null, 2));

	let header = `#pragma once

namespace RE
{
	namespace VTABLE
	{
`;

	for (const [name, entries] of combinedMap) {
		const hasAe = entries.some(e => e.ae != null);
		const hasNg = entries.some(e => e.ng != null);

		const useRelocation = hasAe || hasNg;

		// If every entry has og==ng==ae (all three equal), emit plain REL::ID entries instead
		const allSameTriples = useRelocation && entries.length > 0 && entries.every(e => e.ae != null && e.og === e.ng && e.og === e.ae);

		if (!allSameTriples && useRelocation) {
			header += `		inline constexpr std::array<REL::RelocationID, ${entries.length}> ${name}{ `;
			const parts = entries.map(e => {
				const og = e.og;
				const ng = e.ng ?? 0;
				if (e.ae != null) return `REL::RelocationID(${og}, ${ng}, ${e.ae})`;
				return `REL::RelocationID(${og}, ${ng})`;
			});
			header += parts.join(', ') + ` }` + `;\n`;
		} else {
			header += `		inline constexpr std::array<REL::ID, ${entries.length}> ${name}{ `;
			const parts = entries.map(e => `REL::ID(${e.og})`);
			header += parts.join(', ') + ` }` + `;\n`;
		}
	}

	header += `	}
}
`;

	fs.writeFileSync(path.join(OUT_DIR, 'VTABLE_IDs.hpp'), header, 'utf8');

	console.log('Wrote VTABLE maps and rebuilt header to', OUT_DIR);
}

async function parseRTTIHeaders() {
	const ogMap = await buildSingleIdRTTIMap(OG_RTTI_HEADER);
	const aeMap = await buildSingleIdRTTIMap(AE_RTTI_HEADER);
	const ngMap = await buildSingleIdRTTIMap(NG_RTTI_HEADER);

	const localMap = await buildMultiIdRTTIMap(LOCAL_RTTI_HEADER);

	ensureOut();
	fs.writeFileSync(path.join(OUT_DIR, 'og_rtti_map.json'), JSON.stringify(mapToObject(ogMap), null, 2));
	fs.writeFileSync(path.join(OUT_DIR, 'ae_rtti_map.json'), JSON.stringify(mapToObject(aeMap), null, 2));
	fs.writeFileSync(path.join(OUT_DIR, 'ng_rtti_map.json'), JSON.stringify(mapToObject(ngMap), null, 2));

	fs.writeFileSync(path.join(OUT_DIR, 'local_rtti_map.json'), JSON.stringify(mapToObject(localMap), null, 2));

	// Build combined map using localMap as base; add `ae` when present in aeMap
	let count = 0;
	const combinedMap = new Map();

	for (const [name, localEntry] of localMap) {

		const aeEntry = aeMap.get(name);
		const ogEntry = ogMap.get(name);
		const ngEntry = ngMap.get(name);

		if (ngEntry == null && localEntry.ng != null) {
			console.warn(`NG--: ${name}`);
		}

		if (ogEntry != null && ogEntry !== localEntry.og) {
			console.warn(`OG!=: ${name}`);
		}

		if (ngEntry != null && localEntry.ng != null && ngEntry !== localEntry.ng) {
			console.warn(`NG!=: ${name} ${ngEntry} => ${localEntry.ng}`);
		}

		if (ngEntry != null && localEntry.ng == null && localEntry.og !== ngEntry) {
			console.warn(`NG++ ${name} ${ngEntry}`);
		}

		if (ngEntry != null && aeEntry != null && aeEntry === ngEntry) {
			// console.warn(`NG==`);
		}

		if (ogEntry != null && aeEntry != null && aeEntry === ogEntry) {
			// console.warn(`===`);
		}

		const newEntry = { og: localEntry.og };

		if (aeEntry != null) {
			newEntry.ae = aeEntry;
		}

		if (ngEntry != null) {
			newEntry.ng = ngEntry;
		}

		combinedMap.set(name, newEntry);
	}

	fs.writeFileSync(path.join(OUT_DIR, 'combined_map.json'), JSON.stringify(mapToObject(combinedMap), null, 2));

	let header = `#pragma once

namespace RE
{
	namespace RTTI
	{
`

	for (const [name, entry] of combinedMap) {
		if (entry.ae != null) {
			header += `		inline constexpr REL::RelocationID ${name}{ ${entry.og}, ${entry.ng ?? 0}, ${entry.ae} };\n`
		}

		else if (entry.ng != null) {
			header += `		inline constexpr REL::RelocationID ${name}{ ${entry.og}, ${entry.ng} };\n`
		}

		else {
			header += `		inline constexpr REL::ID ${name}{ ${entry.og} };\n`
		}
	}

	header += `	}
}`

	fs.writeFileSync(path.join(OUT_DIR, 'RTTI_IDs.hpp'), header, 'utf-8')

	console.log('Wrote maps to', OUT_DIR)
}

parseVTABLEHeaders();
