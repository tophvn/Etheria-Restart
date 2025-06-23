
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"

#pragma pack(push, 0x1)


/// Enum /Script/MediaUtils.EMediaPlayerOptionBooleanOverride
/// Size: 0x01 (1 bytes)
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting                         = 0,
	EMediaPlayerOptionBooleanOverride__Enabled                                       = 1,
	EMediaPlayerOptionBooleanOverride__Disabled                                      = 2
};

#pragma pack(pop)


static_assert(sizeof(FMediaPlayerTrackOptions) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMediaPlayerOptions) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FMediaPlayerOptions, Tracks) == 0x0000);
static_assert(offsetof(FMediaPlayerOptions, SeekTime) == 0x0020);
static_assert(offsetof(FMediaPlayerOptions, PlayOnOpen) == 0x0028);
static_assert(offsetof(FMediaPlayerOptions, Loop) == 0x0029);
