
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

class UOpenColorIOBlueprintLibrary;
class UOpenColorIOColorTransform;
class UOpenColorIOConfiguration;
class UOpenColorIODisplayExtensionWrapper;

#pragma pack(pop)


static_assert(sizeof(UOpenColorIOBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOpenColorIOColorTransform) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(FOpenColorIOColorSpace) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UOpenColorIOConfiguration) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UOpenColorIODisplayExtensionWrapper) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FOpenColorIOColorConversionSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FOpenColorIODisplayConfiguration) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(UOpenColorIOColorTransform, ConfigurationOwner) == 0x0028);
static_assert(offsetof(UOpenColorIOColorTransform, SourceColorSpace) == 0x0030);
static_assert(offsetof(UOpenColorIOColorTransform, DestinationColorSpace) == 0x0040);
static_assert(offsetof(FOpenColorIOColorSpace, ColorSpaceName) == 0x0000);
static_assert(offsetof(FOpenColorIOColorSpace, FamilyName) == 0x0018);
static_assert(offsetof(UOpenColorIOConfiguration, ConfigurationFile) == 0x0028);
static_assert(offsetof(UOpenColorIOConfiguration, DesiredColorSpaces) == 0x0038);
static_assert(offsetof(UOpenColorIOConfiguration, ColorTransforms) == 0x0048);
static_assert(offsetof(FOpenColorIOColorConversionSettings, ConfigurationSource) == 0x0000);
static_assert(offsetof(FOpenColorIOColorConversionSettings, SourceColorSpace) == 0x0008);
static_assert(offsetof(FOpenColorIOColorConversionSettings, DestinationColorSpace) == 0x0030);
static_assert(offsetof(FOpenColorIODisplayConfiguration, ColorConfiguration) == 0x0008);
