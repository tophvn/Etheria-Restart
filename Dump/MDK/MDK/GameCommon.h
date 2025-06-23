
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GameCommon.EtheriaDeviceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEtheriaDeviceLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetScreenWidth
	// int32_t GetScreenWidth();                                                                                                // [0x1114240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetScreenHeight
	// int32_t GetScreenHeight();                                                                                               // [0x1114210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetProjectName
	// FString GetProjectName();                                                                                                // [0x1114190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetPlatform
	// FString GetPlatform();                                                                                                   // [0x1114110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetOSVersion
	// FString GetOSVersion();                                                                                                  // [0x1114090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetMachineId
	// FString GetMachineId();                                                                                                  // [0x1114010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetLoginId
	// FString GetLoginId();                                                                                                    // [0x1113d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetIpv6
	// FString GetIpv6();                                                                                                       // [0x1113f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetIpv4
	// FString GetIpv4();                                                                                                       // [0x1113f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetGPU
	// FString GetGPU();                                                                                                        // [0x1113e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetEngineVersion
	// FString GetEngineVersion();                                                                                              // [0x1113e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetDeviceId
	// FString GetDeviceId();                                                                                                   // [0x1113d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetCPU
	// FString GetCPU();                                                                                                        // [0x1113c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetCompatibleEngineVersion
	// FString GetCompatibleEngineVersion();                                                                                    // [0x1113d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetBuildVersion
	// FString GetBuildVersion();                                                                                               // [0x1113c10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.EtheriaDeviceLibrary.GetBatteryLevel
	// int32_t GetBatteryLevel();                                                                                               // [0x1113be0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameCommon.GamePrefs
/// Size: 0x0000 (0x000028 - 0x000028)
class UGamePrefs : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameCommon.GamePrefs.UnsetValue
	// void UnsetValue(FString Key);                                                                                            // [0x11144a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.GamePrefs.SetValueStr
	// void SetValueStr(FString Key, FString Value);                                                                            // [0x11143b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.GamePrefs.SavePrefs
	// void SavePrefs();                                                                                                        // [0x1114390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.GamePrefs.LoadPrefs
	// void LoadPrefs();                                                                                                        // [0x1114370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameCommon.GamePrefs.GetValueStr
	// bool GetValueStr(FString Key, FString& Value);                                                                           // [0x1114270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/GameCommon.ChannelInfoStruct
/// Size: 0x0050 (0x000008 - 0x000058)
class FChannelInfoStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   zone_id                                                     OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FString>)                           root_addr                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      is_google                                                   OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(EChanType)                                 channelType                                                 OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(TArray<ELoginType>)                        LoginTypes                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/GameCommon.ZoneInfoStruct
/// Size: 0x0018 (0x000008 - 0x000020)
class FZoneInfoStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EGameZoneType)                             Name                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(bool)                                      is_oversea                                                  OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      is_auto_match_language                                      OFFSET(get<bool>, {0xE, 1, 0, 0})
	SMember(FString)                                   XDDataAddr                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/GameCommon.ELoginType
/// Size: 0x08
enum class ELoginType : uint8_t
{
	ELoginType__LT_Default                                                           = 0,
	ELoginType__LT_TapTap                                                            = 1,
	ELoginType__LT_Google                                                            = 2,
	ELoginType__LT_Apple                                                             = 3,
	ELoginType__LT_Phone                                                             = 4,
	ELoginType__LT_Email                                                             = 5,
	ELoginType__LT_Guest                                                             = 6,
	ELoginType__LT_Develop                                                           = 7
};

/// Enum /Script/GameCommon.EChanType
/// Size: 0x03
enum class EChanType : uint8_t
{
	EChanType__AT_Default                                                            = 0,
	EChanType__AT_Platform                                                           = 1,
	EChanType__AT_Develop                                                            = 2
};

/// Enum /Script/GameCommon.EGameZoneType
/// Size: 0x06
enum class EGameZoneType : uint8_t
{
	EGameZoneType__devel                                                             = 0,
	EGameZoneType__mainland                                                          = 1,
	EGameZoneType__northeast_asia                                                    = 2,
	EGameZoneType__europe_america                                                    = 3,
	EGameZoneType__rest_of_the_world                                                 = 4,
	EGameZoneType__vn                                                                = 5
};

