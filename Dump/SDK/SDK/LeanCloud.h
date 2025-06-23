
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class ULeanCloudSettings;

#pragma pack(pop)


static_assert(sizeof(FLCAppConfigSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLCApplicationSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(ULeanCloudSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(FLCApplicationSettings, AppId) == 0x0000);
static_assert(offsetof(FLCApplicationSettings, AppKey) == 0x0010);
static_assert(offsetof(FLCApplicationSettings, ServerURL) == 0x0020);
static_assert(offsetof(FLCApplicationSettings, Config) == 0x0030);
static_assert(offsetof(ULeanCloudSettings, Applications) == 0x0028);
