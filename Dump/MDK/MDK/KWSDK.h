
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/KWSDK.KWSDKSetting
/// Size: 0x0048 (0x000000 - 0x000048)
class FKWSDKSetting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EKWSDKServer)                              Server                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   ProjectID                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   AndroidAppKey                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   IOSAppKey                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   WindowsAppKey                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/KWSDK.KWSDKSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UKWSDKSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FKWSDKSetting>)                     KWSDKSettings                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Enum /Script/KWSDK.EKWSDKServer
/// Size: 0x04
enum class EKWSDKServer : uint8_t
{
	EKWSDKServer__None                                                               = 0,
	EKWSDKServer__Staging                                                            = 1,
	EKWSDKServer__Prod                                                               = 2,
	EKWSDKServer__Oversea                                                            = 3
};

