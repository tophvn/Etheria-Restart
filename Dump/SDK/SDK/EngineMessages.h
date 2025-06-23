
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


static_assert(sizeof(FEngineServiceNotification) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEngineServiceTerminate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FEngineServiceExecuteCommand) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEngineServiceAuthGrant) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEngineServiceAuthDeny) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEngineServicePong) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FEngineServicePing) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(FEngineServiceNotification, Text) == 0x0000);
static_assert(offsetof(FEngineServiceTerminate, username) == 0x0000);
static_assert(offsetof(FEngineServiceExecuteCommand, Command) == 0x0000);
static_assert(offsetof(FEngineServiceExecuteCommand, username) == 0x0010);
static_assert(offsetof(FEngineServiceAuthGrant, username) == 0x0000);
static_assert(offsetof(FEngineServiceAuthGrant, UserToGrant) == 0x0010);
static_assert(offsetof(FEngineServiceAuthDeny, username) == 0x0000);
static_assert(offsetof(FEngineServiceAuthDeny, UserToDeny) == 0x0010);
static_assert(offsetof(FEngineServicePong, CurrentLevel) == 0x0000);
static_assert(offsetof(FEngineServicePong, InstanceId) == 0x0018);
static_assert(offsetof(FEngineServicePong, InstanceType) == 0x0028);
static_assert(offsetof(FEngineServicePong, SessionId) == 0x0038);
