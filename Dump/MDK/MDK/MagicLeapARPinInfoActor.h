
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x008C (0x000238 - 0x0002C4)
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 708;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x238, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Right                                                       OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Forward                                                     OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Up                                                          OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class USphereComponent*)                   ValidRadiusVisualizer                                       OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class USceneComponent*)                    AxisRoot                                                    OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class USceneComponent*)                    VisualizerRoot                                              OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UTextRenderComponent*)               TypeValue                                                   OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UTextRenderComponent*)               TransErrValue                                               OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UTextRenderComponent*)               RotErrValue                                                 OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UTextRenderComponent*)               ConfidenceValue                                             OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UTextRenderComponent*)               TransErrLabel                                               OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UTextRenderComponent*)               RotErrLabel                                                 OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UTextRenderComponent*)               ConfidenceLabel                                             OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UTextRenderComponent*)               PinIDValue                                                  OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class USceneComponent*)                    InfoRoot                                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class USceneComponent*)                    Root                                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(float)                                     RotationSmoothSpeed                                         OFFSET(get<float>, {0x2C0, 4, 0, 0})


	/// Functions
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
	// void UpdatePinState();                                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x198a600] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
	// void OnUpdateARPinState();                                                                                               // [0x198a600] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x198a600] Event|Public|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
	// void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint);                                                       // [0x198a600] Final|HasDefaults    
};

