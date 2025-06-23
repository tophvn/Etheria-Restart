
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMagicLeapSharedWorldSharedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGuid>)                             PinIDs                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
/// Size: 0x00D0 (0x000308 - 0x0003D8)
class AMagicLeapSharedWorldGameMode : public AGameMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	SMember(FMagicLeapSharedWorldSharedData)           SharedWorldData                                             OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNewLocalDataFromClients                                   OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	DMember(float)                                     PinSelectionConfidenceThreshold                             OFFSET(get<float>, {0x328, 4, 0, 0})
	CMember(class AMagicLeapSharedWorldPlayerController*) ChosenOne                                                OFFSET(get<T>, {0x3D0, 8, 0, 0})


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	// bool SendSharedWorldDataToClients();                                                                                     // [0x13057e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	// void SelectChosenOne();                                                                                                  // [0x13057c0] BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	// void MagicLeapOnNewLocalDataFromClients__DelegateSignature();                                                            // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
	// void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);                                      // [0x13056a0] BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
/// Size: 0x0010 (0x000000 - 0x000010)
class FMagicLeapSharedWorldAlignmentTransforms : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTransform>)                        AlignmentTransforms                                         OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
/// Size: 0x0040 (0x000290 - 0x0002D0)
class AMagicLeapSharedWorldGameState : public AGameState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FMagicLeapSharedWorldSharedData)           SharedWorldData                                             OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMagicLeapSharedWorldAlignmentTransforms)  AlignmentTransforms                                         OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSharedWorldDataUpdated                                    OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAlignmentTransformsUpdated                                OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	// void OnReplicate_SharedWorldData();                                                                                      // [0x13057a0] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	// void OnReplicate_AlignmentTransforms();                                                                                  // [0x1305780] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	// void MagicLeapSharedWorldEvent__DelegateSignature();                                                                     // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
	// FTransform CalculateXRCameraRootTransform();                                                                             // [0x1305550] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
/// Size: 0x0018 (0x000570 - 0x000588)
class AMagicLeapSharedWorldPlayerController : public APlayerController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
	// void ServerSetLocalWorldData(FMagicLeapSharedWorldLocalData LocalWorldReplicationData);                                  // [0x13058b0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
	// void ServerSetAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms);                       // [0x1305810] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
	// bool IsChosenOne();                                                                                                      // [0x1305750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
	// void ClientSetChosenOne(bool bChosenOne);                                                                                // [0x1305610] Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
	// void ClientMarkReadyForSendingLocalData();                                                                               // [0x13055f0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
	// bool CanSendLocalDataToServer();                                                                                         // [0x13055c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData
/// Size: 0x0024 (0x000000 - 0x000024)
class FMagicLeapSharedWorldPinData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FGuid)                                     PinId                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMagicLeapARPinState)                      PinState                                                    OFFSET(getStruct<T>, {0x10, 20, 0, 0})
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMagicLeapSharedWorldLocalData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMagicLeapSharedWorldPinData>)      LocalPins                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

