import pymem
import pymem.process
import struct
import json
import sys
import os

PROCESS_NAME = "GameUE_cpp-Win64-Shipping.exe"
DUMP_OUTPUT = "GNames_dump.txt"
# Địa chỉ GNames VA lấy từ tool: 0x7ff69fed18c0 (mới nhất)
GNAMES_VA = 0x7ff69fed18c0

# Nâng cấp: Đọc pointer table, với mỗi pointer đọc FNameEntry
# FNameEntry: +0x00: Flags (2 bytes), +0x02: Len (2 bytes), +0x04: String (Len bytes, ASCII/UTF-16)
def read_gnames(pm, gnames_addr, max_chunks=2048, chunk_size=0x400):
    names = []
    for i in range(max_chunks):
        try:
            chunk_ptr = pm.read_ulonglong(gnames_addr + i * 8)
            if not chunk_ptr:
                continue
            for j in range(chunk_size):
                try:
                    entry_ptr = pm.read_ulonglong(chunk_ptr + j * 8)
                    if not entry_ptr:
                        continue
                    # Đọc FNameEntry tại entry_ptr
                    entry = pm.read_bytes(entry_ptr, 4)
                    flags = struct.unpack('<H', entry[:2])[0]
                    name_len = struct.unpack('<H', entry[2:4])[0]
                    if name_len == 0 or name_len > 256:
                        continue
                    is_wide = (flags & 1) != 0
                    if is_wide:
                        name_bytes = pm.read_bytes(entry_ptr + 4, name_len * 2)
                        name = name_bytes.decode('utf-16', errors='ignore')
                    else:
                        name_bytes = pm.read_bytes(entry_ptr + 4, name_len)
                        name = name_bytes.decode('utf-8', errors='ignore')
                    # Lọc tên rác
                    if not name or not name.isprintable() or len(name) < 2:
                        continue
                    names.append((i * chunk_size + j, name))
                except Exception:
                    continue
        except Exception:
            continue
    return names

def main():
    print(f"[!] Sử dụng GNames VA cứng: 0x{GNAMES_VA:X}")
    print(f"[!] Đang attach process {PROCESS_NAME} ...")
    pm = pymem.Pymem(PROCESS_NAME)
    print(f"[!] Đang đọc GNames ...")
    names = read_gnames(pm, GNAMES_VA)
    print(f"[+] Đã dump {len(names)} tên!")
    with open(DUMP_OUTPUT, "w", encoding="utf-8") as f:
        for idx, name in names:
            f.write(f"{idx}: {name}\n")
    print(f"[+] Đã lưu vào {DUMP_OUTPUT}")

if __name__ == "__main__":
    main() 