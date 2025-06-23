
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

class UKvPushFunctionLibrary;
class UKvPushSettings;

/// Enum /Script/KvPush.EKvLocalPushEnable
/// Size: 0x01 (1 bytes)
enum class EKvLocalPushEnable : uint8_t
{
	EKvLocalPushEnable__Enabled                                                      = 0,
	EKvLocalPushEnable__Disabled                                                     = 1,
	EKvLocalPushEnable__Unknown                                                      = 2
};

#pragma pack(pop)


static_assert(sizeof(UKvPushFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKvPushSettings) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(offsetof(UKvPushSettings, AndroidChannelName) == 0x0028);
static_assert(offsetof(UKvPushSettings, DefaultTitle) == 0x0048);
static_assert(offsetof(UKvPushSettings, PermissionWidgetClass) == 0x0060);
