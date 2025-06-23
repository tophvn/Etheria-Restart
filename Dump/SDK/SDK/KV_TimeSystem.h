
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

class UKV_TimeLibrary;

/// Enum /Script/KV_TimeSystem.EKV_MeasureFormatWidth
/// Size: 0x01 (1 bytes)
enum class EKV_MeasureFormatWidth : uint8_t
{
	EKV_MeasureFormatWidth__Wide                                                     = 0,
	EKV_MeasureFormatWidth__Short                                                    = 1,
	EKV_MeasureFormatWidth__Narrow                                                   = 2,
	EKV_MeasureFormatWidth__Numeric                                                  = 3
};

/// Enum /Script/KV_TimeSystem.EKV_DateTimeID
/// Size: 0x01 (1 bytes)
enum class EKV_DateTimeID : uint8_t
{
	EKV_DateTimeID__Local                                                            = 0,
	EKV_DateTimeID__Remote                                                           = 1,
	EKV_DateTimeID__Max                                                              = 2
};

/// Enum /Script/KV_TimeSystem.EKV_TimeZoneID
/// Size: 0x01 (1 bytes)
enum class EKV_TimeZoneID : uint8_t
{
	EKV_TimeZoneID__UTC                                                              = 0,
	EKV_TimeZoneID__Local                                                            = 1,
	EKV_TimeZoneID__Remote                                                           = 2,
	EKV_TimeZoneID__Max                                                              = 3
};

/// Enum /Script/KV_TimeSystem.EKV_TimeZoneType
/// Size: 0x01 (1 bytes)
enum class EKV_TimeZoneType : uint8_t
{
	EKV_TimeZoneType__Local                                                          = 0,
	EKV_TimeZoneType__Remote                                                         = 1,
	EKV_TimeZoneType__LocalUTC                                                       = 2,
	EKV_TimeZoneType__RemoteUTC                                                      = 3,
	EKV_TimeZoneType__Max                                                            = 4
};

#pragma pack(pop)


static_assert(sizeof(UKV_TimeLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
