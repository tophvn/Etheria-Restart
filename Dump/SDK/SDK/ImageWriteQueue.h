
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

class UImageWriteBlueprintLibrary;

/// Enum /Script/ImageWriteQueue.EDesiredImageFormat
/// Size: 0x01 (1 bytes)
enum class EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG                                                         = 0,
	EDesiredImageFormat__JPG                                                         = 1,
	EDesiredImageFormat__BMP                                                         = 2,
	EDesiredImageFormat__EXR                                                         = 3
};

#pragma pack(pop)


static_assert(sizeof(UImageWriteBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FImageWriteOptions) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FImageWriteOptions, Format) == 0x0000);
