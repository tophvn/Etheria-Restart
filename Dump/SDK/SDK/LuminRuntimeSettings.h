
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

class ULuminRuntimeSettings;

/// Enum /Script/LuminRuntimeSettings.ELuminPrivilege
/// Size: 0x01 (1 bytes)
enum class ELuminPrivilege : uint8_t
{
	ELuminPrivilege__Invalid                                                         = 0,
	ELuminPrivilege__BatteryInfo                                                     = 1,
	ELuminPrivilege__CameraCapture                                                   = 2,
	ELuminPrivilege__ComputerVision                                                  = 3,
	ELuminPrivilege__WorldReconstruction                                             = 4,
	ELuminPrivilege__InAppPurchase                                                   = 5,
	ELuminPrivilege__AudioCaptureMic                                                 = 6,
	ELuminPrivilege__DrmCertificates                                                 = 7,
	ELuminPrivilege__Occlusion                                                       = 8,
	ELuminPrivilege__LowLatencyLightwear                                             = 9,
	ELuminPrivilege__Internet                                                        = 10,
	ELuminPrivilege__IdentityRead                                                    = 11,
	ELuminPrivilege__BackgroundDownload                                              = 12,
	ELuminPrivilege__BackgroundUpload                                                = 13,
	ELuminPrivilege__MediaDrm                                                        = 14,
	ELuminPrivilege__Media                                                           = 15,
	ELuminPrivilege__MediaMetadata                                                   = 16,
	ELuminPrivilege__PowerInfo                                                       = 17,
	ELuminPrivilege__LocalAreaNetwork                                                = 18,
	ELuminPrivilege__VoiceInput                                                      = 19,
	ELuminPrivilege__Documents                                                       = 20,
	ELuminPrivilege__ConnectBackgroundMusicService                                   = 21,
	ELuminPrivilege__RegisterBackgroundMusicService                                  = 22,
	ELuminPrivilege__PcfRead                                                         = 23,
	ELuminPrivilege__PwFoundObjRead                                                  = 23,
	ELuminPrivilege__NormalNotificationsUsage                                        = 24,
	ELuminPrivilege__MusicService                                                    = 25,
	ELuminPrivilege__ControllerPose                                                  = 26,
	ELuminPrivilege__GesturesSubscribe                                               = 27,
	ELuminPrivilege__GesturesConfig                                                  = 28,
	ELuminPrivilege__AddressBookRead                                                 = 29,
	ELuminPrivilege__AddressBookWrite                                                = 30,
	ELuminPrivilege__AddressBookBasicAccess                                          = 31,
	ELuminPrivilege__CoarseLocation                                                  = 32,
	ELuminPrivilege__FineLocation                                                    = 33,
	ELuminPrivilege__HandMesh                                                        = 34,
	ELuminPrivilege__WifiStatusRead                                                  = 35,
	ELuminPrivilege__SocialConnectionsInvitesAccess                                  = 36,
	ELuminPrivilege__SocialConnectionsSelectAccess                                   = 37,
	ELuminPrivilege__SecureBrowserWindow                                             = 38,
	ELuminPrivilege__BluetoothAdapterExternalApp                                     = 39,
	ELuminPrivilege__BluetoothAdapterUser                                            = 40,
	ELuminPrivilege__BluetoothGattWrite                                              = 41
};

/// Enum /Script/LuminRuntimeSettings.ELuminFrameTimingHint
/// Size: 0x01 (1 bytes)
enum class ELuminFrameTimingHint : uint8_t
{
	ELuminFrameTimingHint__Unspecified                                               = 0,
	ELuminFrameTimingHint__Maximum                                                   = 1,
	ELuminFrameTimingHint__FPS                                                       = 2,
	ELuminFrameTimingHint__FPS4                                                      = 3
};

/// Enum /Script/LuminRuntimeSettings.ELuminComponentType
/// Size: 0x01 (1 bytes)
enum class ELuminComponentType : uint8_t
{
	ELuminComponentType__Universe                                                    = 0,
	ELuminComponentType__Fullscreen                                                  = 1,
	ELuminComponentType__SearchProvider                                              = 2,
	ELuminComponentType__MusicService                                                = 3,
	ELuminComponentType__Console                                                     = 4,
	ELuminComponentType__SystemUI                                                    = 5
};

/// Enum /Script/LuminRuntimeSettings.ELuminComponentSubElementType
/// Size: 0x01 (1 bytes)
enum class ELuminComponentSubElementType : uint8_t
{
	ELuminComponentSubElementType__FileExtension                                     = 0,
	ELuminComponentSubElementType__MimeType                                          = 1,
	ELuminComponentSubElementType__Mode                                              = 2,
	ELuminComponentSubElementType__MusicAttribute                                    = 3,
	ELuminComponentSubElementType__Schema                                            = 4
};

#pragma pack(pop)


static_assert(sizeof(FLocalizedIconInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLocalizedIconInfos) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLuminComponentSubElement) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLuminComponentElement) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FLocalizedAppName) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ULuminRuntimeSettings) == 0x0148); // 328 bytes (0x000028 - 0x000148)
static_assert(offsetof(FLocalizedIconInfo, LanguageCode) == 0x0000);
static_assert(offsetof(FLocalizedIconInfo, IconModelPath) == 0x0010);
static_assert(offsetof(FLocalizedIconInfo, IconPortalPath) == 0x0020);
static_assert(offsetof(FLocalizedIconInfos, IconData) == 0x0000);
static_assert(offsetof(FLuminComponentSubElement, ElementType) == 0x0000);
static_assert(offsetof(FLuminComponentSubElement, Value) == 0x0008);
static_assert(offsetof(FLuminComponentElement, Name) == 0x0000);
static_assert(offsetof(FLuminComponentElement, VisibleName) == 0x0010);
static_assert(offsetof(FLuminComponentElement, ExecutableName) == 0x0020);
static_assert(offsetof(FLuminComponentElement, ComponentType) == 0x0030);
static_assert(offsetof(FLuminComponentElement, ExtraComponentSubElements) == 0x0038);
static_assert(offsetof(FLocalizedAppName, LanguageCode) == 0x0000);
static_assert(offsetof(FLocalizedAppName, AppName) == 0x0010);
static_assert(offsetof(ULuminRuntimeSettings, PackageName) == 0x0028);
static_assert(offsetof(ULuminRuntimeSettings, ApplicationDisplayName) == 0x0038);
static_assert(offsetof(ULuminRuntimeSettings, FrameTimingHint) == 0x0048);
static_assert(offsetof(ULuminRuntimeSettings, Certificate) == 0x0050);
static_assert(offsetof(ULuminRuntimeSettings, IconModelPath) == 0x0060);
static_assert(offsetof(ULuminRuntimeSettings, IconPortalPath) == 0x0070);
static_assert(offsetof(ULuminRuntimeSettings, LocalizedIconInfos) == 0x0080);
static_assert(offsetof(ULuminRuntimeSettings, AppPrivileges) == 0x0098);
static_assert(offsetof(ULuminRuntimeSettings, ExtraComponentSubElements) == 0x00A8);
static_assert(offsetof(ULuminRuntimeSettings, ExtraComponentElements) == 0x00B8);
static_assert(offsetof(ULuminRuntimeSettings, SpatializationPlugin) == 0x00C8);
static_assert(offsetof(ULuminRuntimeSettings, ReverbPlugin) == 0x00D8);
static_assert(offsetof(ULuminRuntimeSettings, OcclusionPlugin) == 0x00E8);
static_assert(offsetof(ULuminRuntimeSettings, VulkanValidationLayerLibs) == 0x0100);
static_assert(offsetof(ULuminRuntimeSettings, LocalizedAppNames) == 0x0118);
