
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

class UGameHotPatchConfig;
class UGameHotPatcherBridge;
class UHotPatchBackgroundDownload;
class UHotPatchBaseState;
class UHotPatchDiffPakInfoState;
class UHotPatchDownloadState;
class UHotPatchMaterialWarmupState;
class UHotPatchMountPakState;
class UHotPatchSelectLocalizationState;
class URequestServerState;

/// Enum /Script/GameHotPatcher.EHotPatchMsgCode
/// Size: 0x01 (1 bytes)
enum class EHotPatchMsgCode : uint8_t
{
	E_ConnectError                                                                   = 0,
	E_InvalidURL                                                                     = 1,
	E_OpenVersionListError                                                           = 2,
	E_ServerConfigError                                                              = 3,
	E_MinRequire                                                                     = 4,
	E_OpenLocalizationOpt                                                            = 5,
	E_NeedDownload                                                                   = 6,
	E_SpaceNotEnough                                                                 = 7,
	E_Md5Fail                                                                        = 8,
	E_BeginDownload                                                                  = 9,
	E_Md5Verify                                                                      = 10,
	E_HotUpdateFinish                                                                = 11,
	E_ShowNotice                                                                     = 12,
	E_StartMateralWarmup                                                             = 13,
	E_EndMateralWarmup                                                               = 14,
	E_BaseVerifyFail                                                                 = 15,
	E_RestartApp                                                                     = 16,
	E_WritePakFail                                                                   = 17,
	E_MaxCode                                                                        = 18
};

/// Enum /Script/GameHotPatcher.EHotPatchState
/// Size: 0x01 (1 bytes)
enum class EHotPatchState : uint8_t
{
	E_None                                                                           = 0,
	E_RequestServer                                                                  = 1,
	E_LocalizationOpt                                                                = 2,
	E_DiffPakInfo                                                                    = 3,
	E_Download                                                                       = 4,
	E_BackgroundDownload                                                             = 5,
	E_VerifyAndMount                                                                 = 6,
	E_MaterialWarmup                                                                 = 7,
	E_Finish                                                                         = 8
};

/// Enum /Script/GameHotPatcher.EHotPatchUserType
/// Size: 0x01 (1 bytes)
enum class EHotPatchUserType : uint8_t
{
	E_ConfirmDownload                                                                = 0,
	E_GoAPPStore                                                                     = 1,
	E_NeedConnect                                                                    = 2,
	E_NoWifi                                                                         = 3,
	E_Space                                                                          = 4,
	E_UpdateFinish                                                                   = 5,
	E_ClearPaks                                                                      = 6,
	E_VerifyError                                                                    = 7,
	E_MaxUseType                                                                     = 8
};

#pragma pack(pop)


static_assert(sizeof(UGameHotPatcherBridge) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameHotPatchConfig) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UHotPatchBaseState) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UHotPatchDownloadState) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UHotPatchBackgroundDownload) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UHotPatchDiffPakInfoState) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UHotPatchMaterialWarmupState) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UHotPatchMountPakState) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(URequestServerState) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UHotPatchSelectLocalizationState) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(FChunkDefineStruct) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FLocalizationDefineStruct) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(offsetof(UGameHotPatchConfig, GameHotPatchCDN) == 0x0028);
static_assert(offsetof(FChunkDefineStruct, pak_key) == 0x0010);
static_assert(offsetof(FChunkDefineStruct, Name) == 0x0028);
static_assert(offsetof(FLocalizationDefineStruct, UnrealKey) == 0x0010);
static_assert(offsetof(FLocalizationDefineStruct, WeblateKey) == 0x0020);
static_assert(offsetof(FLocalizationDefineStruct, EnglishName) == 0x0038);
static_assert(offsetof(FLocalizationDefineStruct, Backend) == 0x0048);
static_assert(offsetof(FLocalizationDefineStruct, TapCdkeyLang) == 0x0058);
static_assert(offsetof(FLocalizationDefineStruct, NameCulture) == 0x0068);
