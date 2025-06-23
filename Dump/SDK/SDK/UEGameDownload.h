
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UBGDownloadGroup;
class UFGDownload;
class UFGDownloadGroup;
class UGameDownloadManager;

/// Enum /Script/UEGameDownload.EFGDownloadErrorCode
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class EDownloadType : uint8_t
{
	EDownloadType__E_none                                                            = 0,
	EDownloadType__E_BasePak                                                         = 1,
	EDownloadType__E_Localization                                                    = 2
};

/// Enum /Script/UEGameDownload.EFGDownloadStatus
/// Size: 0x01 (1 bytes)
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

#pragma pack(pop)


static_assert(sizeof(UBGDownloadGroup) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UFGDownload) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UFGDownloadGroup) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UGameDownloadManager) == 0x0168); // 360 bytes (0x000028 - 0x000168)
static_assert(offsetof(UFGDownloadGroup, ToDownloadList) == 0x0028);
static_assert(offsetof(UGameDownloadManager, DownloadingRequestFGGroup) == 0x0150);
static_assert(offsetof(UGameDownloadManager, DownloadingRequestBGGroup) == 0x0158);
