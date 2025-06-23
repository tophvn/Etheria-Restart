
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/UEGameDownload.BGDownloadGroup
/// Size: 0x0038 (0x000028 - 0x000060)
class UBGDownloadGroup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/UEGameDownload.FGDownload
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UFGDownload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/UEGameDownload.FGDownloadGroup
/// Size: 0x0050 (0x000028 - 0x000078)
class UFGDownloadGroup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<class UFGDownload*>)                ToDownloadList                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/UEGameDownload.GameDownloadManager
/// Size: 0x0140 (0x000028 - 0x000168)
class UGameDownloadManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(class UFGDownloadGroup*)                   DownloadingRequestFGGroup                                   OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UBGDownloadGroup*)                   DownloadingRequestBGGroup                                   OFFSET(get<T>, {0x158, 8, 0, 0})


	/// Functions
	// Function /Script/UEGameDownload.GameDownloadManager.StopDownload
	// void StopDownload(int32_t groupId);                                                                                      // [0x1213140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.StopAndClearAllDownload
	// void StopAndClearAllDownload();                                                                                          // [0x1213120] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.StartDownloadGroups
	// bool StartDownloadGroups(TArray<int32_t> groupIds, bool Foreground);                                                     // [0x1212fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.StartDownload
	// bool StartDownload(int32_t groupId, bool Foreground);                                                                    // [0x1212f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.SetNetChangeEthernetCallBack
	// void SetNetChangeEthernetCallBack(FDelegateProperty& OnNetTypeChangeEthernetRef);                                        // [0x1212e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.SetLimitSpeed
	// void SetLimitSpeed(bool enable, int32_t speedBytePerSec);                                                                // [0x1212d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.SetDownloadData
	// void SetDownloadData(FString JsonData);                                                                                  // [0x1212ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.SetDownloadCallBack
	// void SetDownloadCallBack(FDelegateProperty& OnDownloadCompleteRef, FDelegateProperty& OnDownloadPercentChangedRef);      // [0x1212bc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.SetChunkIdsToGroup
	// void SetChunkIdsToGroup(TSet<int32_t> chunkIds, int32_t groupId);                                                        // [0x1212a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.ResumeDownload
	// void ResumeDownload();                                                                                                   // [0x1212a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.NeedToDownload
	// bool NeedToDownload(int32_t groupId);                                                                                    // [0x1212960] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.IsDwpActived
	// bool IsDwpActived();                                                                                                     // [0x1212940] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.IsDownloading
	// bool IsDownloading();                                                                                                    // [0x1212910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UEGameDownload.GameDownloadManager.IsChunkExist
	// bool IsChunkExist(int32_t ChunkId, bool forceStreamed);                                                                  // [0x1212840] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.Int64Division
	// float Int64Division(int64_t A, int64_t B);                                                                               // [0x1212770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UEGameDownload.GameDownloadManager.Init
	// bool Init();                                                                                                             // [0x1212740] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.GetNeedDownloadChunkIdToPakSize
	// bool GetNeedDownloadChunkIdToPakSize(TArray<int32_t>& chunkIds, TArray<int64_t>& pakSizes);                              // [0x1212620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.GetInstance
	// class UGameDownloadManager* GetInstance();                                                                               // [0x12125f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UEGameDownload.GameDownloadManager.GetGroupTotalSize
	// int64_t GetGroupTotalSize(int32_t groupId);                                                                              // [0x1212450] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.GetGroupsFileSize
	// int64_t GetGroupsFileSize(TArray<int32_t> groupIds);                                                                     // [0x12124f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.GetGroupDownloadedSize
	// int64_t GetGroupDownloadedSize(int32_t groupId);                                                                         // [0x12123b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.GetChunkIdToPakSize
	// bool GetChunkIdToPakSize(TArray<int32_t>& chunkIds, TArray<int64_t>& pakSizes);                                          // [0x1212290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.CheckGroupFilesValid
	// bool CheckGroupFilesValid(TArray<int32_t> groupIds, FString& Msg);                                                       // [0x1212130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.CheckChunkFileValid
	// bool CheckChunkFileValid(int32_t ChunkId);                                                                               // [0x1212090] Final|Native|Public|BlueprintCallable 
	// Function /Script/UEGameDownload.GameDownloadManager.CheckAndCacheInvalidChunksWithGroups
	// bool CheckAndCacheInvalidChunksWithGroups(TArray<int32_t> groupIds, int64_t& Size);                                      // [0x1211f40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Enum /Script/UEGameDownload.EFGDownloadErrorCode
/// Size: 0x08
enum class EFGDownloadErrorCode : uint8_t
{
	EFGDownloadErrorCode__E_none                                                     = 0,
	EFGDownloadErrorCode__E_uknown                                                   = 1,
	EFGDownloadErrorCode__E_netError                                                 = 2,
	EFGDownloadErrorCode__E_nonWifi                                                  = 3,
	EFGDownloadErrorCode__E_space                                                    = 4,
	EFGDownloadErrorCode__E_fileOccupied                                             = 5,
	EFGDownloadErrorCode__E_md5                                                      = 6,
	EFGDownloadErrorCode__E_mount                                                    = 7
};

/// Enum /Script/UEGameDownload.EDownloadType
/// Size: 0x03
enum class EDownloadType : uint8_t
{
	EDownloadType__E_none                                                            = 0,
	EDownloadType__E_BasePak                                                         = 1,
	EDownloadType__E_Localization                                                    = 2
};

/// Enum /Script/UEGameDownload.EFGDownloadStatus
/// Size: 0x08
enum class EFGDownloadStatus : uint8_t
{
	EFGDownloadStatus__E_none                                                        = 0,
	EFGDownloadStatus__E_remote                                                      = 1,
	EFGDownloadStatus__E_partial                                                     = 2,
	EFGDownloadStatus__E_downloading                                                 = 3,
	EFGDownloadStatus__E_cached                                                      = 4,
	EFGDownloadStatus__E_verifing                                                    = 5,
	EFGDownloadStatus__E_mounted                                                     = 6,
	EFGDownloadStatus__E_error                                                       = 7
};

