
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x0090 (0x0000B0 - 0x000140)
class UVRNotificationsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMulticastInlineDelegate)                  HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate       OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HMDTrackingInitializedDelegate                              OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HMDRecenteredDelegate                                       OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HMDLostDelegate                                             OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HMDReconnectedDelegate                                      OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HMDConnectCanceledDelegate                                  OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HMDPutOnHeadDelegate                                        OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HMDRemovedFromHeadDelegate                                  OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VRControllerRecenteredDelegate                              OFFSET(getStruct<T>, {0x130, 16, 0, 0})
};

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	// void UpdateExternalTrackingHMDPosition(FTransform& ExternalTrackingTransform);                                           // [0x251a820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
	// void SetXRTimedInputActionDelegate(FName& ActionName, FDelegateProperty& InDelegate);                                    // [0x251a700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
	// void SetXRDisconnectDelegate(FDelegateProperty& InDisconnectedDelegate);                                                 // [0x251a660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	// void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);                                                 // [0x251a5a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	// void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);                                                          // [0x251a4b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	// void SetSpectatorScreenTexture(class UTexture* InTexture);                                                               // [0x251a3a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	// void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // [0x251a190] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	// void SetSpectatorScreenMode(ESpectatorScreenMode Mode);                                                                  // [0x251a120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	// void SetClippingPlanes(float Near, float Far);                                                                           // [0x2519c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	// void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> options);                               // [0x2519b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	// bool IsSpectatorScreenModeControllable();                                                                                // [0x2519af0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	// bool IsInLowPersistenceMode();                                                                                           // [0xea9ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	// bool IsHeadMountedDisplayEnabled();                                                                                      // [0x2519790] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	// bool IsHeadMountedDisplayConnected();                                                                                    // [0x2519760] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	// bool IsDeviceTracking(FXRDeviceId& XRDeviceId);                                                                          // [0x25196c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	// bool HasValidTrackingPosition();                                                                                         // [0x2519670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
	// int32_t GetXRSystemFlags();                                                                                              // [0x2519640] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	// float GetWorldToMetersScale(class UObject* WorldContext);                                                                // [0x25195b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	// void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);                                                                  // [0x2519450] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
	// FString GetVersionString();                                                                                              // [0x2519530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	// FTransform GetTrackingToWorldTransform(class UObject* WorldContext);                                                     // [0x2519390] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	// void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // [0x2518fb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	// TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();                                                                     // [0x2518f70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	// float GetScreenPercentage();                                                                                             // [0x2518f40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	// void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // [0x2518cd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	// float GetPixelDensity();                                                                                                 // [0x2518ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	// void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);                                       // [0x2518af0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	// int32_t GetNumOfTrackingSensors();                                                                                       // [0x2518ac0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
	// void GetMotionControllerData(class UObject* WorldContext, EControllerHand Hand, FXRMotionControllerData& MotionControllerData); // [0x2518920] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	// TEnumAsByte<EHMDWornState> GetHMDWornState();                                                                            // [0x25187d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	// FName GetHMDDeviceName();                                                                                                // [0x2518790] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
	// void GetHMDData(class UObject* WorldContext, FXRHMDData& HMDData);                                                       // [0x25186b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	// void GetDeviceWorldPose(class UObject* WorldContext, FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position); // [0x2518480] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	// void GetDevicePose(FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position); // [0x2518290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
	// bool GetControllerTransformForTime(class UObject* WorldContext, int32_t ControllerIndex, FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec); // [0x2517f10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	// TArray<FXRDeviceId> EnumerateTrackedDevices(FName SystemId, EXRTrackedDeviceType DeviceType);                            // [0x2517dc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	// void EnableLowPersistenceMode(bool bEnable);                                                                             // [0x2517aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	// bool EnableHMD(bool bEnable);                                                                                            // [0x2517a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
	// void DisconnectRemoteXRDevice();                                                                                         // [0x25179f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
	// TEnumAsByte<EXRDeviceConnectionResult> ConnectRemoteXRDevice(FString IpAddress, int32_t BitRate);                        // [0x2517670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
	// bool ConfigureGestures(FXRGestureConfig& GestureConfig);                                                                 // [0x25175d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
	// void ClearXRTimedInputActionDelegate(FName& ActionPath);                                                                 // [0x2517550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	// void CalibrateExternalTrackingToHMD(FTransform& ExternalTrackingTransform);                                              // [0x2517460] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x00B8 (0x000468 - 0x000520)
class UMotionControllerComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	DMember(int32_t)                                   PlayerIndex                                                 OFFSET(get<int32_t>, {0x468, 4, 0, 0})
	CMember(EControllerHand)                           Hand                                                        OFFSET(get<T>, {0x46C, 1, 0, 0})
	SMember(FName)                                     MotionSource                                                OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	DMember(bool)                                      bDisableLowLatencyUpdate                                    OFFSET(get<bool>, {0x478, 1, 1, 0})
	CMember(ETrackingStatus)                           CurrentTrackingStatus                                       OFFSET(get<T>, {0x47C, 1, 0, 0})
	DMember(bool)                                      bDisplayDeviceModel                                         OFFSET(get<bool>, {0x47D, 1, 0, 0})
	SMember(FName)                                     DisplayModelSource                                          OFFSET(getStruct<T>, {0x480, 8, 0, 0})
	CMember(class UStaticMesh*)                        CustomDisplayMesh                                           OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         DisplayMeshMaterialOverrides                                OFFSET(get<T>, {0x490, 16, 0, 0})
	CMember(class UPrimitiveComponent*)                DisplayComponent                                            OFFSET(get<T>, {0x500, 8, 0, 0})


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x251a520] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// void SetTrackingMotionSource(FName NewSource);                                                                           // [0x251a420] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	// void SetShowDeviceModel(bool bShowControllerModel);                                                                      // [0x251a090] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	// void SetDisplayModelSource(FName NewDisplayModelSource);                                                                 // [0x2519dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	// void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);                                                            // [0x2519d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x2519be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// void OnMotionControllerUpdated();                                                                                        // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	// bool IsTracked();                                                                                                        // [0x24dde10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// EControllerHand GetTrackingSource();                                                                                     // [0x2519360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x2518bc0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x2518800] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	// void SetIsControllerMotionTrackingEnabledByDefault(bool enable);                                                         // [0x2519e50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	// bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, FName SourceName);                                            // [0x2519a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	// bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand);                                        // [0x2519950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	// bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);                   // [0x25198c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	// bool IsMotionTrackedDeviceCountManagementNecessary();                                                                    // [0x2519890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	// bool IsMotionSourceTracking(int32_t PlayerIndex, FName SourceName);                                                      // [0x25197c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	// int32_t GetMotionTrackingEnabledControllerCount();                                                                       // [0x2518a90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	// int32_t GetMaximumMotionTrackedControllerCount();                                                                        // [0x25188f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	// FName GetActiveTrackingSystemName();                                                                                     // [0x2517ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	// TArray<FName> EnumerateMotionSources();                                                                                  // [0x2517d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	// bool EnableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                                // [0x2517c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	// bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);                                            // [0x2517ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	// bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                      // [0x2517b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	// void DisableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                               // [0x2517930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	// void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);                                           // [0x2517870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	// void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);                                                   // [0x25177f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	// void DisableMotionTrackingOfAllControllers();                                                                            // [0x25177d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	// void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                     // [0x2517750] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	// class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId); // [0x2517220] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	// class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform); // [0x2516bb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0030 (0x000030 - 0x000060)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnModelLoaded                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoadFailure                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(class UPrimitiveComponent*)                SpawnedComponent                                            OFFSET(get<T>, {0x58, 8, 0, 0})


	/// Functions
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	// class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, class UPrimitiveComponent*& NewComponent); // [0x2516f80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	// class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, class UPrimitiveComponent*& NewComponent); // [0x2516980] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	// void ShowLoadingScreen();                                                                                                // [0x251a800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	// void SetLoadingScreen(class UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // [0x2519ed0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	// void HideLoadingScreen();                                                                                                // [0x25196a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	// void ClearLoadingScreenSplashes();                                                                                       // [0x2517530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	// void AddLoadingScreenSplash(class UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd); // [0x2516d80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FXRMotionControllerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     DeviceName                                                  OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FGuid)                                     ApplicationInstanceID                                       OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	CMember(EXRVisualType)                             DeviceVisualType                                            OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(EControllerHand)                           HandIndex                                                   OFFSET(get<T>, {0x1D, 1, 0, 0})
	CMember(ETrackingStatus)                           TrackingStatus                                              OFFSET(get<T>, {0x1E, 1, 0, 0})
	SMember(FVector)                                   GripPosition                                                OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FQuat)                                     GripRotation                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FVector)                                   AimPosition                                                 OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FQuat)                                     AimRotation                                                 OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TArray<FVector>)                           HandKeyPositions                                            OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FQuat>)                             HandKeyRotations                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<float>)                             HandKeyRadii                                                OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bIsGrasped                                                  OFFSET(get<bool>, {0x90, 1, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0040 (0x000000 - 0x000040)
class FXRHMDData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     DeviceName                                                  OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FGuid)                                     ApplicationInstanceID                                       OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	CMember(ETrackingStatus)                           TrackingStatus                                              OFFSET(get<T>, {0x1C, 1, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x000C (0x000000 - 0x00000C)
class FXRDeviceId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     SystemName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   DeviceID                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (0x000000 - 0x000006)
class FXRGestureConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(bool)                                      bTap                                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHold                                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(ESpatialInputGestureAxis)                  AxisGesture                                                 OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisX                                            OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisY                                            OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bNavigationAxisZ                                            OFFSET(get<bool>, {0x5, 1, 0, 0})
};

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x02
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x26
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x06
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Other                                                      = 3,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x08
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x05
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x05
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x03
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x04
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2,
	EHMDTrackingOrigin__Unbounded                                                    = 3
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x03
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x03
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x04
enum class ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3
};

