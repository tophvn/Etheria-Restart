
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

class UEtheriaDeviceLibrary;
class UGamePrefs;

/// Enum /Script/GameCommon.ELoginType
/// Size: 0x01 (1 bytes)
enum class ELoginType : uint8_t
{
	ELoginType__LT_Default                                                           = 0,
	ELoginType__LT_TapTap                                                            = 1,
	ELoginType__LT_Google                                                            = 2,
	ELoginType__LT_Apple                                                             = 3,
	ELoginType__LT_Phone                                                             = 4,
	ELoginType__LT_Email                                                             = 5,
	ELoginType__LT_Guest                                                             = 6,
	ELoginType__LT_Develop                                                           = 7
};

/// Enum /Script/GameCommon.EChanType
/// Size: 0x01 (1 bytes)
enum class EChanType : uint8_t
{
	EChanType__AT_Default                                                            = 0,
	EChanType__AT_Platform                                                           = 1,
	EChanType__AT_Develop                                                            = 2
};

/// Enum /Script/GameCommon.EGameZoneType
/// Size: 0x01 (1 bytes)
enum class EGameZoneType : uint8_t
{
	EGameZoneType__devel                                                             = 0,
	EGameZoneType__mainland                                                          = 1,
	EGameZoneType__northeast_asia                                                    = 2,
	EGameZoneType__europe_america                                                    = 3,
	EGameZoneType__rest_of_the_world                                                 = 4,
	EGameZoneType__vn                                                                = 5
};

#pragma pack(pop)


static_assert(sizeof(UEtheriaDeviceLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGamePrefs) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FChannelInfoStruct) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FZoneInfoStruct) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(offsetof(FChannelInfoStruct, ID) == 0x0008);
static_assert(offsetof(FChannelInfoStruct, Name) == 0x0018);
static_assert(offsetof(FChannelInfoStruct, root_addr) == 0x0030);
static_assert(offsetof(FChannelInfoStruct, channelType) == 0x0041);
static_assert(offsetof(FChannelInfoStruct, LoginTypes) == 0x0048);
static_assert(offsetof(FZoneInfoStruct, Name) == 0x000C);
static_assert(offsetof(FZoneInfoStruct, XDDataAddr) == 0x0010);
