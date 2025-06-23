
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UKV_FetchLevelDataAsset;

/// Enum /Script/KV_EdenToolRuntime.ELevelFetchRule
/// Size: 0x01 (1 bytes)
enum class ELevelFetchRule : uint8_t
{
	ELevelFetchRule__R_General                                                       = 0,
	ELevelFetchRule__R_Scenario                                                      = 1
};

#pragma pack(pop)


static_assert(sizeof(FFetchItem) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UKV_FetchLevelDataAsset) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(offsetof(FFetchItem, SourceLevel) == 0x0000);
static_assert(offsetof(FFetchItem, OverrideName) == 0x0028);
static_assert(offsetof(UKV_FetchLevelDataAsset, Items) == 0x0030);
static_assert(offsetof(UKV_FetchLevelDataAsset, FetchRule) == 0x0040);
static_assert(offsetof(UKV_FetchLevelDataAsset, MasterLevel) == 0x0048);
