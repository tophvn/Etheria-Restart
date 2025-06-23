
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)


#pragma pack(pop)


static_assert(sizeof(FSessionServiceLogUnsubscribe) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSessionServiceLogSubscribe) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSessionServiceLog) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FSessionServicePong) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FSessionServicePing) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FSessionServiceLog, Category) == 0x0000);
static_assert(offsetof(FSessionServiceLog, Data) == 0x0008);
static_assert(offsetof(FSessionServiceLog, InstanceId) == 0x0018);
static_assert(offsetof(FSessionServicePong, BuildDate) == 0x0008);
static_assert(offsetof(FSessionServicePong, DeviceName) == 0x0018);
static_assert(offsetof(FSessionServicePong, InstanceId) == 0x0028);
static_assert(offsetof(FSessionServicePong, InstanceName) == 0x0038);
static_assert(offsetof(FSessionServicePong, PlatformName) == 0x0048);
static_assert(offsetof(FSessionServicePong, SessionId) == 0x0058);
static_assert(offsetof(FSessionServicePong, SessionName) == 0x0068);
static_assert(offsetof(FSessionServicePong, SessionOwner) == 0x0078);
static_assert(offsetof(FSessionServicePing, username) == 0x0000);
