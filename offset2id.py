#!/usr/bin/env python3
import struct
import argparse
import os
import sys

AE_BIN = r"C:/Users/kamicane/MO2Data/Fallout4/mods/Address Library for F4SE Plugins/F4SE/Plugins/version-1-11-191-0.bin"
OG_BIN = r"C:/Users/kamicane/MO2Data/Fallout4/mods/Address Library for F4SE Plugins/F4SE/Plugins/version-1-10-163-0.bin"
NG_BIN = r"C:/Users/kamicane/MO2Data/Fallout4/mods/Address Library for F4SE Plugins/F4SE/Plugins/version-1-10-984-0.bin"

def load_bin(path):
    id_by_off = {}
    with open(path, "rb") as f:
        count = struct.unpack("<Q", f.read(8))[0]
        for _ in range(count):
            id_, off = struct.unpack("<QQ", f.read(16))
            id_by_off[off] = id_
    return id_by_off

def main():
    p = argparse.ArgumentParser(description="Produce REL::RelocationID initializer from offsets (name first)")
    p.add_argument("name", help="symbol name to emit")
    p.add_argument("offsets", nargs="*", help="offsets in OG NG AE order (hex or dec)")
    args = p.parse_args()

    bins = {
        "OG": OG_BIN,
        "NG": NG_BIN,
        "AE": AE_BIN,
    }

    maps = {}
    for label, path in bins.items():
        if os.path.exists(path):
            maps[label] = load_bin(path)
        else:
            print(f"Warning: bin not found for {label}: {path}", file=sys.stderr)
            maps[label] = {}

    # Interpret provided offsets as OG, NG, AE in order. Missing offsets => use 0.
    provided = [int(s, 0) for s in args.offsets]
    ids = []
    labels = ("OG", "NG", "AE")
    for i, label in enumerate(labels):
        if i < len(provided):
            rva = provided[i]
            id_ = maps[label].get(rva, 0)
        else:
            id_ = 0
        ids.append(id_)

    # Print the initializer line
    name = args.name
    print(f"inline constexpr REL::RelocationID {name}{{ {ids[0]}, {ids[1]}, {ids[2]} }};")

if __name__ == "__main__":
    main()
