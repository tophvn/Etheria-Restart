
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UXDLivePatchRuntimeStateBase;
class UXDLivePatchRuntimeState_BackgroundDownload;
class UXDLivePatchRuntimeState_DiffPakInfo;
class UXDLivePatchRuntimeState_Download;
class UXDLivePatchRuntimeState_MountPak;
class UXDLivePatchRuntimeState_RequestServer;
class UXDLivePatchSettings;

/// Enum /Script/XDLivePatchRuntime.EXDLivePatchMsgCode
/// Size: 0x01 (1 bytes)
enum class EXDLivePatchMsgCode : uint8_t
{
	EV_ConnectError                                                                  = 0,
	EV_InvalidURL                                                                    = 1,
	EV_OpenVersionListError                                                          = 2,
	EV_ServerConfigError                                                             = 3,
	EV_MinRequire                                                                    = 4,
	EV_NeedDownload                                                                  = 5,
	EV_SpaceNotEnough                                                                = 6,
	EV_Md5Fail                                                                       = 7,
	EV_BeginDownload                                                                 = 8,
	EV_Md5Verify                                                                     = 9,
	EV_HotUpdateFinish                                                               = 10,
	EV_ShowNotice                                                                    = 11,
	EV_StartPSOPrecompile                                                            = 12,
	EV_EndPSOPrecompile                                                              = 13,
	EV_BaseVerifyFail                                                                = 14,
	EV_RestartApp                                                                    = 15,
	EV_WritePakFail                                                                  = 16,
	EV_MaxCode                                                                       = 17
};

/// Enum /Script/XDLivePatchRuntime.EXDLivePatchRuntimeState
/// Size: 0x01 (1 bytes)
enum class EXDLivePatchRuntimeState : uint8_t
{
	EV_None                                                                          = 0,
	EV_RequestServer                                                                 = 1,
	EV_DiffPakInfo                                                                   = 2,
	EV_Download                                                                      = 3,
	EV_BackgroundDownload                                                            = 4,
	EV_VerifyAndMount                                                                = 5,
	EV_PrecompilePSOCache                                                            = 6,
	EV_Finish                                                                        = 7
};

/// Enum /Script/XDLivePatchRuntime.EXDLivePatchUserType
/// Size: 0x01 (1 bytes)
enum class EXDLivePatchUserType : uint8_t
{
	EV_ConfirmDownload                                                               = 0,
	EV_GoAPPStore                                                                    = 1,
	EV_NeedConnect                                                                   = 2,
	EV_NoWifi                                                                        = 3,
	EV_Space                                                                         = 4,
	EV_UpdateFinish                                                                  = 5,
	EV_ClearPaks                                                                     = 6,
	EV_VerifyError                                                                   = 7,
	EV_MaxUseType                                                                    = 8
};

/// Enum /Script/XDLivePatchRuntime.EPlatform
/// Size: 0x01 (1 bytes)
enum class EPlatform : uint8_t
{
	EPlatform__Android                                                               = 0,
	EPlatform__IOS                                                                   = 1,
	EPlatform__Windows                                                               = 2
};

#pragma pack(pop)


static_assert(sizeof(UXDLivePatchRuntimeStateBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UXDLivePatchRuntimeState_Download) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UXDLivePatchRuntimeState_BackgroundDownload) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(UXDLivePatchRuntimeState_DiffPakInfo) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UXDLivePatchRuntimeState_MountPak) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UXDLivePatchRuntimeState_RequestServer) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UXDLivePatchSettings) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(offsetof(UXDLivePatchSettings, CDNHostAddress) == 0x0028);
static_assert(offsetof(UXDLivePatchSettings, Channel) == 0x0038);
static_assert(offsetof(UXDLivePatchSettings, CDNChannel) == 0x0048);
static_assert(offsetof(UXDLivePatchSettings, VersionFileName) == 0x0058);
static_assert(offsetof(UXDLivePatchSettings, EditorPlatform) == 0x0087);
