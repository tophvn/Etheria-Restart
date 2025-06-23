
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

class UAppleImageInterface;
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy;

/// Enum /Script/AppleImageUtils.EAppleTextureType
/// Size: 0x01 (1 bytes)
enum class EAppleTextureType : uint8_t
{
	EAppleTextureType__Unknown                                                       = 0,
	EAppleTextureType__Image                                                         = 1,
	EAppleTextureType__PixelBuffer                                                   = 2,
	EAppleTextureType__Surface                                                       = 3,
	EAppleTextureType__MetalTexture                                                  = 4
};

/// Enum /Script/AppleImageUtils.ETextureRotationDirection
/// Size: 0x01 (1 bytes)
enum class ETextureRotationDirection : uint8_t
{
	ETextureRotationDirection__None                                                  = 0,
	ETextureRotationDirection__Left                                                  = 1,
	ETextureRotationDirection__Right                                                 = 2,
	ETextureRotationDirection__Down                                                  = 3,
	ETextureRotationDirection__LeftMirrored                                          = 4,
	ETextureRotationDirection__RightMirrored                                         = 5,
	ETextureRotationDirection__DownMirrored                                          = 6,
	ETextureRotationDirection__UpMirrored                                            = 7
};

#pragma pack(pop)


static_assert(sizeof(FAppleImageUtilsImageConversionResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UAppleImageInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FAppleImageUtilsImageConversionResult, Error) == 0x0000);
static_assert(offsetof(FAppleImageUtilsImageConversionResult, ImageData) == 0x0010);
static_assert(offsetof(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, ConversionResult) == 0x0060);
