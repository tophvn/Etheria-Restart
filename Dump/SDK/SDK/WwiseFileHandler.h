
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "WwiseSoundEngine.h"

#pragma pack(push, 0x1)

class UWwiseExternalSourceStatics;

/// Enum /Script/WwiseFileHandler.EWwiseLanguageRequirement
/// Size: 0x01 (1 bytes)
enum class EWwiseLanguageRequirement : uint8_t
{
	EWwiseLanguageRequirement__IsDefault                                             = 0,
	EWwiseLanguageRequirement__IsOptional                                            = 1,
	EWwiseLanguageRequirement__SFX                                                   = 2
};

/// Enum /Script/WwiseFileHandler.EWwiseSoundBankType
/// Size: 0x01 (1 bytes)
enum class EWwiseSoundBankType : uint8_t
{
	EWwiseSoundBankType__User                                                        = 0,
	EWwiseSoundBankType__Event                                                       = 30,
	EWwiseSoundBankType__Bus                                                         = 31
};

#pragma pack(pop)


static_assert(sizeof(UWwiseExternalSourceStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FWwiseExternalSourceCookedData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWwiseLanguageCookedData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWwiseMediaCookedData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWwiseSoundBankCookedData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(offsetof(FWwiseExternalSourceCookedData, DebugName) == 0x0004);
static_assert(offsetof(FWwiseLanguageCookedData, LanguageName) == 0x0004);
static_assert(offsetof(FWwiseLanguageCookedData, LanguageRequirement) == 0x000C);
static_assert(offsetof(FWwiseMediaCookedData, MediaPathName) == 0x0004);
static_assert(offsetof(FWwiseMediaCookedData, DebugName) == 0x0018);
static_assert(offsetof(FWwiseSoundBankCookedData, SoundBankPathName) == 0x0004);
static_assert(offsetof(FWwiseSoundBankCookedData, SoundBankType) == 0x0012);
static_assert(offsetof(FWwiseSoundBankCookedData, DebugName) == 0x0014);
