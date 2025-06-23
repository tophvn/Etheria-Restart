
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UMaterialShaderQualitySettings;
class UShaderPlatformQualitySettings;

/// Enum /Script/MaterialShaderQualitySettings.EMobileShadowQuality
/// Size: 0x01 (1 bytes)
enum class EMobileShadowQuality : uint8_t
{
	EMobileShadowQuality__NoFiltering                                                = 0,
	EMobileShadowQuality__PCF_1x1                                                    = 1,
	EMobileShadowQuality__PCF_2x2                                                    = 2,
	EMobileShadowQuality__PCF_3x3                                                    = 3
};

#pragma pack(pop)


static_assert(sizeof(UMaterialShaderQualitySettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FMaterialQualityOverrides) == 0x0009); // 9 bytes (0x000000 - 0x000009)
static_assert(sizeof(UShaderPlatformQualitySettings) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(offsetof(UMaterialShaderQualitySettings, ForwardSettingMap) == 0x0028);
static_assert(offsetof(FMaterialQualityOverrides, MobileShadowQuality) == 0x0008);
static_assert(offsetof(UShaderPlatformQualitySettings, QualityOverrides) == 0x0028);
