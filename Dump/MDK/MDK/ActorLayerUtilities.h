
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ActorLayerUtilities.LayersBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	// void RemoveActorFromLayer(class AActor* InActor, FActorLayer& Layer);                                                    // [0xcb30f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	// TArray<AActor*> GetActors(class UObject* WorldContextObject, FActorLayer& ActorLayer);                                   // [0xcb2fd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	// void AddActorToLayer(class AActor* InActor, FActorLayer& Layer);                                                         // [0xcb2f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ActorLayerUtilities.ActorLayer
/// Size: 0x0008 (0x000000 - 0x000008)
class FActorLayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

