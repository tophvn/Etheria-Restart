#pragma once
#include <cstdint>

namespace Offsets
{
    // Tìm thấy bằng IDA, trỏ đến FUObjectArray.ObjObjects
    constexpr uintptr_t GObjects = 0x55B9E98;

    // Offset từ AWorldSettings đến TimeDilation, thường là hằng số cho UE 4.26
    constexpr uintptr_t TimeDilation = 0x2A4; // Cập nhật offset chính xác hơn cho UE4.26

    // Tìm thấy bằng file dump OffsetsInfo.json
    constexpr uintptr_t ProcessEvent = 0x196A9A0; 

    // Offset từ PlayerController
    constexpr uintptr_t PlayerCameraManager = 0x2C0;
    constexpr uintptr_t AcknowledgedPawn = 0x2B0;
}

// Sửa các offset này dựa trên file dump của bạn
#define PLAYER_CLASS_NAME "APlayerCharacter" // Tên class player trong dump
#define HEALTH_OFFSET 0x3F4 // Offset property Health
#define SPEED_OFFSET  0x2C0 // Offset property Speed (ví dụ, chỉnh lại nếu cần)
#define PLAYER_CONTROLLER_CLASS "PlayerController" 