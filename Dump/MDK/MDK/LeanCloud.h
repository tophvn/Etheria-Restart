
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/LeanCloud.LCAppConfigSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLCAppConfigSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    HTTPRequestTimeoutInterval                                  OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsProduction                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/LeanCloud.LCApplicationSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FLCApplicationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   AppId                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   AppKey                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ServerURL                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FLCAppConfigSettings)                      Config                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/LeanCloud.LeanCloudSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class ULeanCloudSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FLCApplicationSettings>)            Applications                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

