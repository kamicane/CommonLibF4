#pragma once

#include "RE/Bethesda/BSTEvent.hpp"

namespace RE
{
	struct TESLoadGameEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESLoadGameEvent>* GetEventSource()
		{
			using func_t = decltype(&TESLoadGameEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESLoadGameEvent::GetEventSource };
			return func();
		}
	};

	static_assert(sizeof(TESLoadGameEvent) == 0x1);

	class BGSSaveLoadFileEntry
	{
	public:
		const char* fileName;			// 00
		const char* playerName;			// 08
		const char* playerTitle;		// 10
		const char* location;			// 18
		const char* playTime;			// 20
		const char* raceName;			// 28
		std::int32_t version;			// 30
		std::uint32_t saveGameNumber;	// 34
		std::uint32_t playerLevel;		// 38
		float levelProgress;			// 3C
		float levelThreshold;			// 40
		std::uint32_t screenshotWidth;	// 44
		std::uint32_t screenshotHeight; // 48
		std::uint32_t screenshotOffset; // 4C
		std::uint64_t fileTime;			// 50
		std::uint64_t saveTime;			// 58
		std::int32_t deviceID;			// 60
		bool loaded;					// 64
		bool corrupt;					// 65
		bool needsSync;					// 66
	};

	static_assert(sizeof(BGSSaveLoadFileEntry) == 0x68);
}
