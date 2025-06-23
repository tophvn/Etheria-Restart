
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GameHotPatcher.GameHotPatcherBridge
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameHotPatcherBridge : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.UseSliceDownload
	// bool UseSliceDownload();                                                                                                 // [0x11493d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.UserConfirmLocalizationDownload
	// bool UserConfirmLocalizationDownload(TArray<int32_t> chunkIds);                                                          // [0x1149430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.UserConfirmDownload
	// bool UserConfirmDownload();                                                                                              // [0x1149400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.TryResetHotUpdate
	// void TryResetHotUpdate();                                                                                                // [0x11493b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.TryRefreshCurrentState
	// void TryRefreshCurrentState();                                                                                           // [0x1149390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.SyncMountRecord
	// void SyncMountRecord();                                                                                                  // [0x1149370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.StartHotUpdate
	// void StartHotUpdate(FDelegateProperty Notify);                                                                           // [0x11492e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.SetHotPatchNotify
	// void SetHotPatchNotify(FDelegateProperty Notify);                                                                        // [0x1149250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.RestartApp
	// void RestartApp();                                                                                                       // [0x1149230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.ResetCDNHostAddress
	// void ResetCDNHostAddress(TArray<FString>& URLs);                                                                         // [0x1149170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.ReporteSDKEventWithParam
	// void ReporteSDKEventWithParam(FString EventName, TMap<FString, FString>& Param);                                         // [0x1149010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.ReporteSDKEvent
	// void ReporteSDKEvent(FString EventName);                                                                                 // [0x1148f80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.NeedRestartApp
	// bool NeedRestartApp();                                                                                                   // [0x1148cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.NeedCheckHotUpdate
	// bool NeedCheckHotUpdate();                                                                                               // [0x1148ca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.MountPak
	// bool MountPak(FString pakPath, int32_t Order);                                                                           // [0x1148bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.IsPakInFolder
	// bool IsPakInFolder(FString Filename, FString folderName);                                                                // [0x1148ad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.HasHotUpdated
	// bool HasHotUpdated();                                                                                                    // [0x1148aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetWarmupProgressStr
	// FString GetWarmupProgressStr();                                                                                          // [0x1148a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetWarmupProgress
	// int32_t GetWarmupProgress();                                                                                             // [0x11489f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetVersionConfigFileName
	// FString GetVersionConfigFileName();                                                                                      // [0x1148970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetUrl
	// FString GetUrl(FString str, bool bRandom);                                                                               // [0x1148850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetTotalPaksSize
	// int64_t GetTotalPaksSize();                                                                                              // [0x1148820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetTotalDownloadStr
	// FString GetTotalDownloadStr();                                                                                           // [0x11487a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetTotalDownloadPakNum
	// int32_t GetTotalDownloadPakNum();                                                                                        // [0x1148770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetTimeout
	// float GetTimeout();                                                                                                      // [0x1148740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetSliceDownloadSize
	// int32_t GetSliceDownloadSize();                                                                                          // [0x1148710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetRemainDownloadPakNum
	// int32_t GetRemainDownloadPakNum();                                                                                       // [0x11486e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetPreMountPackPath
	// FString GetPreMountPackPath(FString Filename);                                                                           // [0x11481e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetPreMountPackFolderPath
	// FString GetPreMountPackFolderPath();                                                                                     // [0x1148160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetPlatformName
	// FString GetPlatformName();                                                                                               // [0x1148660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetPakOrderFromPakFilePath
	// int32_t GetPakOrderFromPakFilePath(FString PakFilePath);                                                                 // [0x11485c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetMountPatchConfigPath
	// FString GetMountPatchConfigPath();                                                                                       // [0x1148540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetLocalVersion
	// int32_t GetLocalVersion();                                                                                               // [0x1148470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetLocalizationMap
	// TMap<FString, FLocalizationDefineStruct> GetLocalizationMap();                                                           // [0x11484a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDownloadSpeed
	// int32_t GetDownloadSpeed();                                                                                              // [0x1148440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDownloadProgressStr
	// FString GetDownloadProgressStr();                                                                                        // [0x11483c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDownloadProgress
	// int32_t GetDownloadProgress();                                                                                           // [0x1148390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDownloadPatchFilePath
	// FString GetDownloadPatchFilePath();                                                                                      // [0x1148310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDownloadPackPath
	// FString GetDownloadPackPath(FString Filename);                                                                           // [0x11481e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDownloadPackFolderPath
	// FString GetDownloadPackFolderPath();                                                                                     // [0x1148160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDownloadCacheFilePath
	// FString GetDownloadCacheFilePath();                                                                                      // [0x11480e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDisplayVersion
	// FString GetDisplayVersion();                                                                                             // [0x1148060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDisplayBinary
	// FString GetDisplayBinary();                                                                                              // [0x1147fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDiskNeedSizeMB
	// float GetDiskNeedSizeMB();                                                                                               // [0x1147fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetDiskFreeSizeMB
	// float GetDiskFreeSizeMB();                                                                                               // [0x1147f80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetCurrentStateType
	// TEnumAsByte<EHotPatchState> GetCurrentStateType();                                                                       // [0x1147f50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetCurrentLocalizationTapKey
	// FString GetCurrentLocalizationTapKey();                                                                                  // [0x1147ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetCurrentLocalizationId
	// int32_t GetCurrentLocalizationId();                                                                                      // [0x1147ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetCurrentLocalizationDefine
	// FLocalizationDefineStruct GetCurrentLocalizationDefine();                                                                // [0x1147cd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetCurrentLocalizationBackendKey
	// FString GetCurrentLocalizationBackendKey();                                                                              // [0x1147c50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetChunkDefineMap
	// TMap<int32_t, FChunkDefineStruct> GetChunkDefineMap();                                                                   // [0x1147bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetChannel
	// FString GetChannel();                                                                                                    // [0x1147b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetBinaryVersion
	// FString GetBinaryVersion();                                                                                              // [0x1147ab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetBGDownloadPackFolderPath
	// FString GetBGDownloadPackFolderPath();                                                                                   // [0x1147990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.GetBackendLocalizationId
	// int32_t GetBackendLocalizationId(FString BackendName);                                                                   // [0x1147a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.ExitApp
	// void ExitApp();                                                                                                          // [0x1147970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.EnablePackageUpdate
	// bool EnablePackageUpdate();                                                                                              // [0x1147910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.EnabledHotPatch
	// bool EnabledHotPatch();                                                                                                  // [0x1147940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.DeletePakInDisk
	// bool DeletePakInDisk(FString Filename);                                                                                  // [0x1147870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameHotPatcher.GameHotPatcherBridge.ClearAllPaks
	// void ClearAllPaks();                                                                                                     // [0x1147850] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameHotPatcher.GameHotPatchConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameHotPatchConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   GameHotPatchCDN                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameHotPatcher.HotPatchBaseState
/// Size: 0x0010 (0x000028 - 0x000038)
class UHotPatchBaseState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/GameHotPatcher.HotPatchDownloadState
/// Size: 0x0038 (0x000038 - 0x000070)
class UHotPatchDownloadState : public UHotPatchBaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/GameHotPatcher.HotPatchDownloadState.OnMd5VeryfyFinished
	// void OnMd5VeryfyFinished(FString Result);                                                                                // [0x1148df0] Final|Native|Public  
};

/// Class /Script/GameHotPatcher.HotPatchBackgroundDownload
/// Size: 0x0028 (0x000070 - 0x000098)
class UHotPatchBackgroundDownload : public UHotPatchDownloadState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/GameHotPatcher.HotPatchDiffPakInfoState
/// Size: 0x0000 (0x000038 - 0x000038)
class UHotPatchDiffPakInfoState : public UHotPatchBaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/GameHotPatcher.HotPatchMaterialWarmupState
/// Size: 0x0030 (0x000038 - 0x000068)
class UHotPatchMaterialWarmupState : public UHotPatchBaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:


	/// Functions
	// Function /Script/GameHotPatcher.HotPatchMaterialWarmupState.OnWarmupAdditionFinish
	// void OnWarmupAdditionFinish(FString Type);                                                                               // [0x1148e90] Final|Native|Private 
	// Function /Script/GameHotPatcher.HotPatchMaterialWarmupState.OnMaterialWarmupFinish
	// void OnMaterialWarmupFinish(FString Type);                                                                               // [0x1148d00] Final|Native|Private 
};

/// Class /Script/GameHotPatcher.HotPatchMountPakState
/// Size: 0x0008 (0x000038 - 0x000040)
class UHotPatchMountPakState : public UHotPatchBaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/GameHotPatcher.RequestServerState
/// Size: 0x0000 (0x000038 - 0x000038)
class URequestServerState : public UHotPatchBaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/GameHotPatcher.HotPatchSelectLocalizationState
/// Size: 0x0050 (0x000038 - 0x000088)
class UHotPatchSelectLocalizationState : public UHotPatchBaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/GameHotPatcher.ChunkDefineStruct
/// Size: 0x0038 (0x000008 - 0x000040)
class FChunkDefineStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   pak_key                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      is_default_chunk                                            OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      hard_request                                                OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      is_localization                                             OFFSET(get<bool>, {0x26, 1, 0, 0})
	DMember(bool)                                      is_default_localization                                     OFFSET(get<bool>, {0x27, 1, 0, 0})
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/GameHotPatcher.LocalizationDefineStruct
/// Size: 0x0068 (0x000008 - 0x000070)
class FLocalizationDefineStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   UnrealKey                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   WeblateKey                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   ChunkId                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   EnglishName                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   Backend                                                     OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   TapCdkeyLang                                                OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     NameCulture                                                 OFFSET(getStruct<T>, {0x68, 8, 0, 0})
};

/// Enum /Script/GameHotPatcher.EHotPatchMsgCode
/// Size: 0x19
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
/// Size: 0x09
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
/// Size: 0x09
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

