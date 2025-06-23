
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/LuminRuntimeSettings.LocalizedIconInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FLocalizedIconInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   LanguageCode                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDirectoryPath)                            IconModelPath                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FDirectoryPath)                            IconPortalPath                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/LuminRuntimeSettings.LocalizedIconInfos
/// Size: 0x0010 (0x000000 - 0x000010)
class FLocalizedIconInfos : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FLocalizedIconInfo>)                IconData                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LuminRuntimeSettings.LuminComponentSubElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FLuminComponentSubElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ELuminComponentSubElementType)             ElementType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/LuminRuntimeSettings.LuminComponentElement
/// Size: 0x0048 (0x000000 - 0x000048)
class FLuminComponentElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   VisibleName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ExecutableName                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(ELuminComponentType)                       ComponentType                                               OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<FLuminComponentSubElement>)         ExtraComponentSubElements                                   OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/LuminRuntimeSettings.LocalizedAppName
/// Size: 0x0020 (0x000000 - 0x000020)
class FLocalizedAppName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   LanguageCode                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   AppName                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Class /Script/LuminRuntimeSettings.LuminRuntimeSettings
/// Size: 0x0120 (0x000028 - 0x000148)
class ULuminRuntimeSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FString)                                   PackageName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   ApplicationDisplayName                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(ELuminFrameTimingHint)                     FrameTimingHint                                             OFFSET(get<T>, {0x48, 1, 0, 0})
	DMember(bool)                                      bProtectedContent                                           OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bManualCallToAppReady                                       OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      bUseMobileRendering                                         OFFSET(get<bool>, {0x4B, 1, 0, 0})
	DMember(bool)                                      bUseVulkan                                                  OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FFilePath)                                 Certificate                                                 OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FDirectoryPath)                            IconModelPath                                               OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FDirectoryPath)                            IconPortalPath                                              OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FLocalizedIconInfos)                       LocalizedIconInfos                                          OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(int32_t)                                   VersionCode                                                 OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   MinimumAPILevel                                             OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	CMember(TArray<ELuminPrivilege>)                   AppPrivileges                                               OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FLuminComponentSubElement>)         ExtraComponentSubElements                                   OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FLuminComponentElement>)            ExtraComponentElements                                      OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   SpatializationPlugin                                        OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FString)                                   ReverbPlugin                                                OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   OcclusionPlugin                                             OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	DMember(int32_t)                                   SoundCueCookQualityIndex                                    OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bRemoveDebugInfo                                            OFFSET(get<bool>, {0xFC, 1, 0, 0})
	SMember(FDirectoryPath)                            VulkanValidationLayerLibs                                   OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bFrameVignette                                              OFFSET(get<bool>, {0x110, 1, 0, 0})
	CMember(TArray<FLocalizedAppName>)                 LocalizedAppNames                                           OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Enum /Script/LuminRuntimeSettings.ELuminPrivilege
/// Size: 0x43
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
/// Size: 0x04
enum class ELuminFrameTimingHint : uint8_t
{
	ELuminFrameTimingHint__Unspecified                                               = 0,
	ELuminFrameTimingHint__Maximum                                                   = 1,
	ELuminFrameTimingHint__FPS                                                       = 2,
	ELuminFrameTimingHint__FPS4                                                      = 3
};

/// Enum /Script/LuminRuntimeSettings.ELuminComponentType
/// Size: 0x06
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
/// Size: 0x05
enum class ELuminComponentSubElementType : uint8_t
{
	ELuminComponentSubElementType__FileExtension                                     = 0,
	ELuminComponentSubElementType__MimeType                                          = 1,
	ELuminComponentSubElementType__Mode                                              = 2,
	ELuminComponentSubElementType__MusicAttribute                                    = 3,
	ELuminComponentSubElementType__Schema                                            = 4
};

