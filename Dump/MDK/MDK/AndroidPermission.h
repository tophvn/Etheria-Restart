
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AndroidPermission.AndroidPermissionCallbackProxy
/// Size: 0x0020 (0x000028 - 0x000048)
class UAndroidPermissionCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMulticastInlineDelegate)                  OnPermissionsGrantedDynamicDelegate                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	// bool CheckPermission(FString permission);                                                                                // [0x132ed20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	// class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<FString>& Permissions);                                 // [0x13e4480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

