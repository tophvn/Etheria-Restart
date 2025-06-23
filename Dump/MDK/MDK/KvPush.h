
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KvPush.KvPushFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKvPushFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KvPush.KvPushFunctionLibrary.StartPushService
	// void StartPushService();                                                                                                 // [0x1111ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.ScheduleLocalNotificationFromNow
	// int32_t ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow, FText& Title, FText& Body, FText& Action, FString ActivationEvent); // [0x1111910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.ScheduleLocalNotificationBadgeFromNow
	// void ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, FString ActivationEvent);                           // [0x1111840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.ScheduleLocalNotificationBadgeAtTime
	// int32_t ScheduleLocalNotificationBadgeAtTime(FDateTime& FireDateTime, FString ActivationEvent);                          // [0x1111740] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.ScheduleLocalNotificationAtTime
	// int32_t ScheduleLocalNotificationAtTime(FDateTime& FireDateTime, FText& Title, FText& Body, FText& Action, FString ActivationEvent); // [0x1111490] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.GetLocalNotificationEnabled
	// EKvLocalPushEnable GetLocalNotificationEnabled();                                                                        // [0x1111460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.GetLaunchNotification
	// void GetLaunchNotification(bool& NotificationLaunchedApp, FString& ActivationEvent, int32_t& FireDate);                  // [0x1111320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.ClearAllLocalNotifications
	// void ClearAllLocalNotifications();                                                                                       // [0x1111300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.CancelLocalNotificationById
	// void CancelLocalNotificationById(int32_t NotificationId);                                                                // [0x1111280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.CancelLocalNotification
	// void CancelLocalNotification(FString ActivationEvent);                                                                   // [0x11111f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KvPush.KvPushFunctionLibrary.AskForPermissions
	// void AskForPermissions();                                                                                                // [0x11111d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KvPush.KvPushSettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UKvPushSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     AndroidChannelName                                          OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(int32_t)                                   AndroidChannelLevel                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FText)                                     DefaultTitle                                                OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             PermissionWidgetClass                                       OFFSET(get<T>, {0x60, 40, 0, 0})
};

/// Enum /Script/KvPush.EKvLocalPushEnable
/// Size: 0x03
enum class EKvLocalPushEnable : uint8_t
{
	EKvLocalPushEnable__Enabled                                                      = 0,
	EKvLocalPushEnable__Disabled                                                     = 1,
	EKvLocalPushEnable__Unknown                                                      = 2
};

