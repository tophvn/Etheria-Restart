
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "WwiseFileHandler.h"

#pragma pack(push, 0x1)

class UWwiseEventInfoLibrary;
class UWwiseGroupValueInfoLibrary;
class UWwiseObjectInfoLibrary;

/// Enum /Script/WwiseResourceLoader.EWwiseEventDestroyOptions
/// Size: 0x01 (1 bytes)
enum class EWwiseEventDestroyOptions : uint8_t
{
	EWwiseEventDestroyOptions__StopEventOnDestroy                                    = 0,
	EWwiseEventDestroyOptions__WaitForEventEnd                                       = 1
};

/// Enum /Script/WwiseResourceLoader.EWwiseEventSwitchContainerLoading
/// Size: 0x01 (1 bytes)
enum class EWwiseEventSwitchContainerLoading : uint8_t
{
	EWwiseEventSwitchContainerLoading__AlwaysLoad                                    = 0,
	EWwiseEventSwitchContainerLoading__LoadOnReference                               = 1
};

/// Enum /Script/WwiseResourceLoader.EWwiseGroupType
/// Size: 0x01 (1 bytes)
enum class EWwiseGroupType : uint8_t
{
	EWwiseGroupType__Switch                                                          = 0,
	EWwiseGroupType__State                                                           = 1,
	EWwiseGroupType__Unknown                                                         = 255
};

/// Enum /Script/WwiseResourceLoader.EWwiseReloadLanguage
/// Size: 0x01 (1 bytes)
enum class EWwiseReloadLanguage : uint8_t
{
	Manual                                                                           = 0,
	Immediate                                                                        = 1,
	Safe                                                                             = 2
};

#pragma pack(pop)


static_assert(sizeof(UWwiseEventInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWwiseGroupValueInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWwiseObjectInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FWwiseAcousticTextureCookedData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWwiseAuxBusCookedData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FWwiseSwitchContainerLeafCookedData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FWwiseEventCookedData) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FWwiseGroupValueCookedData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FWwiseObjectInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWwiseEventInfo) == 0x0024); // 36 bytes (0x000020 - 0x000024)
static_assert(sizeof(FWwiseGameParameterCookedData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWwiseGroupValueInfo) == 0x0024); // 36 bytes (0x000020 - 0x000024)
static_assert(sizeof(FWwiseInitBankCookedData) == 0x0040); // 64 bytes (0x00001C - 0x000040)
static_assert(sizeof(FWwiseLanguageId) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWwiseLocalizedAuxBusCookedData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWwiseLocalizedEventCookedData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWwiseShareSetCookedData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FWwiseLocalizedShareSetCookedData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWwiseLocalizedSoundBankCookedData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWwisePlatformId) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FWwiseSharedGroupValueKey) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWwiseSharedLanguageId) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FWwiseSharedPlatformId) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWwiseTriggerCookedData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(FWwiseAcousticTextureCookedData, DebugName) == 0x0004);
static_assert(offsetof(FWwiseAuxBusCookedData, SoundBanks) == 0x0008);
static_assert(offsetof(FWwiseAuxBusCookedData, Media) == 0x0018);
static_assert(offsetof(FWwiseAuxBusCookedData, DebugName) == 0x0028);
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, SoundBanks) == 0x0050);
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, Media) == 0x0060);
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, ExternalSources) == 0x0070);
static_assert(offsetof(FWwiseEventCookedData, SoundBanks) == 0x0008);
static_assert(offsetof(FWwiseEventCookedData, Media) == 0x0018);
static_assert(offsetof(FWwiseEventCookedData, ExternalSources) == 0x0028);
static_assert(offsetof(FWwiseEventCookedData, SwitchContainerLeaves) == 0x0038);
static_assert(offsetof(FWwiseEventCookedData, DestroyOptions) == 0x0098);
static_assert(offsetof(FWwiseEventCookedData, DebugName) == 0x009C);
static_assert(offsetof(FWwiseGroupValueCookedData, Type) == 0x0000);
static_assert(offsetof(FWwiseGroupValueCookedData, DebugName) == 0x000C);
static_assert(offsetof(FWwiseObjectInfo, WwiseGuid) == 0x0000);
static_assert(offsetof(FWwiseObjectInfo, WwiseName) == 0x0014);
static_assert(offsetof(FWwiseEventInfo, SwitchContainerLoading) == 0x0020);
static_assert(offsetof(FWwiseEventInfo, DestroyOptions) == 0x0021);
static_assert(offsetof(FWwiseGameParameterCookedData, DebugName) == 0x0004);
static_assert(offsetof(FWwiseInitBankCookedData, Media) == 0x0020);
static_assert(offsetof(FWwiseInitBankCookedData, Language) == 0x0030);
static_assert(offsetof(FWwiseLanguageId, LanguageName) == 0x0004);
static_assert(offsetof(FWwiseLocalizedAuxBusCookedData, AuxBusLanguageMap) == 0x0000);
static_assert(offsetof(FWwiseLocalizedAuxBusCookedData, DebugName) == 0x0050);
static_assert(offsetof(FWwiseLocalizedEventCookedData, EventLanguageMap) == 0x0000);
static_assert(offsetof(FWwiseLocalizedEventCookedData, DebugName) == 0x0050);
static_assert(offsetof(FWwiseShareSetCookedData, SoundBanks) == 0x0008);
static_assert(offsetof(FWwiseShareSetCookedData, Media) == 0x0018);
static_assert(offsetof(FWwiseShareSetCookedData, DebugName) == 0x0028);
static_assert(offsetof(FWwiseLocalizedShareSetCookedData, ShareSetLanguageMap) == 0x0000);
static_assert(offsetof(FWwiseLocalizedShareSetCookedData, DebugName) == 0x0050);
static_assert(offsetof(FWwiseLocalizedSoundBankCookedData, SoundBankLanguageMap) == 0x0000);
static_assert(offsetof(FWwiseLocalizedSoundBankCookedData, DebugName) == 0x0050);
static_assert(offsetof(FWwisePlatformId, PlatformGuid) == 0x0000);
static_assert(offsetof(FWwisePlatformId, PlatformName) == 0x0010);
static_assert(offsetof(FWwiseSharedLanguageId, LanguageRequirement) == 0x0010);
static_assert(offsetof(FWwiseTriggerCookedData, DebugName) == 0x0004);
