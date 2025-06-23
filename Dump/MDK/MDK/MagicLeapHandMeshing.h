
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MRMesh

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMagicLeapHandMeshingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
	// void SetUseWeightedNormals(bool bInUseWeightedNormals);                                                                  // [0x1331460] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
	// bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x1331330] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
	// bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x13311a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
	// bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x13313d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
	// bool DestroyClient();                                                                                                    // [0x1331300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
	// bool CreateClient();                                                                                                     // [0x13312d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
	// bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x1331240] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMeshBlock
/// Size: 0x0028 (0x000000 - 0x000028)
class FMagicLeapHandMeshBlock : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   IndexCount                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   VertexCount                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FVector>)                           Vertex                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           Index                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMesh
/// Size: 0x0018 (0x000000 - 0x000018)
class FMagicLeapHandMesh : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataCount                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FMagicLeapHandMeshBlock>)           Data                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

