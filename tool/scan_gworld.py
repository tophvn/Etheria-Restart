# ==============================================================================
# SCAN GWORLD (Quét tìm GWorld)
# ==============================================================================
# Script này quét bộ nhớ của game để tìm một chuỗi byte (signature) đã biết
# nhằm xác định địa chỉ của đối tượng GWorld. GWorld là một con trỏ toàn cục
# cung cấp quyền truy cập vào đối tượng thế giới chính của game và các actor.

import pymem
import pymem.process
import psutil
import struct

def get_process_by_name(name):
    """Find a process PID by its name."""
    for proc in psutil.process_iter(['pid', 'name']):
        if proc.info['name'] and name.lower() in proc.info['name'].lower():
            return proc.info['pid']
    return None

def parse_pattern(pattern_str):
    """Parse a pattern string like '48 8D ? ? ?' into bytes and mask."""
    pattern = []
    mask = []
    for byte in pattern_str.split():
        if byte == "??" or byte == "?":
            pattern.append(0x00)
            mask.append('?')
        else:
            pattern.append(int(byte, 16))
            mask.append('x')
    return bytes(pattern), ''.join(mask)

def find_gworld(pm, module):
    """Find the GWorld address using a generic LEA pattern and validation."""
    print("\nScanning for GWorld with validation logic...")
    # A generic pattern for LEA RAX, [rip+offset]
    pattern_str = "48 8D 0D ? ? ? ?"
    pattern_bytes, mask = parse_pattern(pattern_str)
    
    # Get all module memory at once to speed up scanning
    try:
        module_bytes = pm.read_bytes(module.lpBaseOfDll, module.SizeOfImage)
    except pymem.exception.MemoryReadError:
        print(f"Error: Could not read memory of module {module.name}. Try running as administrator.")
        return None
        
    pattern_len = len(mask)
    
    # Iterate through all matches of the LEA pattern
    for i in range(len(module_bytes) - pattern_len):
        if all(mask[j] == '?' or pattern_bytes[j] == module_bytes[i + j] for j in range(pattern_len)):
            instruction_addr = module.lpBaseOfDll + i
            rel_offset = struct.unpack("<i", module_bytes[i + 3:i + 7])[0]
            gworld_ptr_addr = instruction_addr + 7 + rel_offset

            # --- Validation checks ---
            try:
                # 1. Read the potential UWorld pointer from the address we found.
                uworld_addr = pm.read_longlong(gworld_ptr_addr)
                
                # 2. A valid UWorld pointer should not be null and should look like a heap address.
                if uworld_addr == 0 or uworld_addr < 0x100000000:
                    continue
                
                # 3. From UWorld, get PersistentLevel pointer (offset 0x30).
                persistent_level_addr = pm.read_longlong(uworld_addr + 0x30)
                if persistent_level_addr == 0 or persistent_level_addr < 0x100000000:
                    continue

                # 4. From ULevel, get the TArray<AActor*> Actors.Count (offset 0x98 for array + 0x8 for count).
                actor_count = pm.read_int(persistent_level_addr + 0xA0) # 0x98 + 8
                
                # 5. A valid game world should have a reasonable number of actors.
                if 1 < actor_count < 20000: # Usually there's at least one actor (e.g. GameMode)
                    print(f"  [+] Possible GWorld Found:")
                    print(f"      - Instruction at: {hex(instruction_addr)}")
                    print(f"      - GWorld Ptr at:  {hex(gworld_ptr_addr)}")
                    print(f"      - UWorld at:      {hex(uworld_addr)}")
                    print(f"      - Actor Count:    {actor_count}")
                    return gworld_ptr_addr

            except pymem.exception.MemoryReadError:
                # This is expected for many invalid pointers, just ignore and continue.
                continue
    
    return None


if __name__ == "__main__":
    # Change this to your game's process name
    process_name = "GameUE_cpp-Win64-Shipping.exe"
    
    print(f"Searching for process: {process_name}")
    pid = get_process_by_name(process_name)
    
    if not pid:
        print(f"Process '{process_name}' not found. Make sure the game is running.")
        exit(1)
        
    print(f"Process found! PID: {pid}")
    
    try:
        pm = pymem.Pymem(pid)
        module = pymem.process.module_from_name(pm.process_handle, process_name)
        
        print(f"Scanning module: {module.name} (Base: {hex(module.lpBaseOfDll)}, Size: {hex(module.SizeOfImage)})")
        
        gworld_addr = find_gworld(pm, module)
        
        if gworld_addr:
            print(f"\n[SUCCESS] Validated GWorld Pointer Address found at: 0x{gworld_addr:X}")
            
            # Read the actual UWorld address for final display
            uworld_addr = pm.read_longlong(gworld_addr)
            print(f"          The UWorld object is at: 0x{uworld_addr:X}")
        else:
            print("\n[FAILED] Could not find a valid GWorld pointer. The game might be protected or the offsets/structs are different.")
            
        pm.close_process()
    except (pymem.exception.ProcessNotFound, pymem.exception.CouldNotOpenProcess):
        print(f"Error: Could not open process with PID {pid}. Try running the script as an administrator.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}") 