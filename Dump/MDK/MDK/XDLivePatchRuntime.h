
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/XDLivePatchRuntime.XDLivePatchRuntimeStateBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UXDLivePatchRuntimeStateBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/XDLivePatchRuntime.XDLivePatchRuntimeState_Download
/// Size: 0x0038 (0x000038 - 0x000070)
class UXDLivePatchRuntimeState_Download : public UXDLivePatchRuntimeStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/XDLivePatchRuntime.XDLivePatchRuntimeState_Download.OnMd5VerifyFinished
	// void OnMd5VerifyFinished(FString Result);                                                                                // [0x115d930] Final|Native|Public  
};

/// Class /Script/XDLivePatchRuntime.XDLivePatchRuntimeState_BackgroundDownload
/// Size: 0x0018 (0x000070 - 0x000088)
class UXDLivePatchRuntimeState_BackgroundDownload : public UXDLivePatchRuntimeState_Download
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/XDLivePatchRuntime.XDLivePatchRuntimeState_DiffPakInfo
/// Size: 0x0000 (0x000038 - 0x000038)
class UXDLivePatchRuntimeState_DiffPakInfo : public UXDLivePatchRuntimeStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/XDLivePatchRuntime.XDLivePatchRuntimeState_MountPak
/// Size: 0x0008 (0x000038 - 0x000040)
class UXDLivePatchRuntimeState_MountPak : public UXDLivePatchRuntimeStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/XDLivePatchRuntime.XDLivePatchRuntimeState_RequestServer
/// Size: 0x0000 (0x000038 - 0x000038)
class UXDLivePatchRuntimeState_RequestServer : public UXDLivePatchRuntimeStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/XDLivePatchRuntime.XDLivePatchSettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UXDLivePatchSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   CDNHostAddress                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Channel                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   CDNChannel                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   VersionFileName                                             OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   BinaryVersion                                               OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   LimitVersion                                                OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      UseResume                                                   OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(int32_t)                                   SliceSize                                                   OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      UseMultiThread                                              OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(int32_t)                                   MaxPreMountFailure                                          OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bCheckBasePak                                               OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      EnabledEditorHotPatch                                       OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      EnabledHotPatch                                             OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(bool)                                      EnabledEditorPackageUpdate                                  OFFSET(get<bool>, {0x83, 1, 0, 0})
	DMember(bool)                                      EnabledPackageUpdate                                        OFFSET(get<bool>, {0x84, 1, 0, 0})
	DMember(bool)                                      EnableBackgroundDownload                                    OFFSET(get<bool>, {0x85, 1, 0, 0})
	DMember(bool)                                      UseSliceDownload                                            OFFSET(get<bool>, {0x86, 1, 0, 0})
	CMember(EPlatform)                                 EditorPlatform                                              OFFSET(get<T>, {0x87, 1, 0, 0})
};

/// Enum /Script/XDLivePatchRuntime.EXDLivePatchMsgCode
/// Size: 0x18
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
/// Size: 0x08
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
/// Size: 0x09
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
/// Size: 0x03
enum class EPlatform : uint8_t
{
	EPlatform__Android                                                               = 0,
	EPlatform__IOS                                                                   = 1,
	EPlatform__Windows                                                               = 2
};

