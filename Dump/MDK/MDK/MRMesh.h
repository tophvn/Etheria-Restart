
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x89d6b0] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0x89bc50] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0x1635730] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0xc8b010] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x1221a60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0xc8b150] Native|Public        
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x24ddc40] Native|Public        
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0078 (0x0001F8 - 0x000270)
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FMulticastInlineDelegate)                  OnMeshTrackerUpdated                                        OFFSET(getStruct<T>, {0x1F8, 16, 0, 0})
	DMember(bool)                                      ScanWorld                                                   OFFSET(get<bool>, {0x208, 1, 0, 0})
	DMember(bool)                                      RequestNormals                                              OFFSET(get<bool>, {0x209, 1, 0, 0})
	DMember(bool)                                      RequestVertexConfidence                                     OFFSET(get<bool>, {0x20A, 1, 0, 0})
	CMember(EMeshTrackerVertexColorMode)               VertexColorMode                                             OFFSET(get<T>, {0x20B, 1, 0, 0})
	CMember(TArray<FColor>)                            BlockVertexColors                                           OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceZero                               OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceOne                                OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	DMember(float)                                     UpdateInterval                                              OFFSET(get<float>, {0x240, 4, 0, 0})
	CMember(class UMRMeshComponent*)                   MRMesh                                                      OFFSET(get<T>, {0x248, 8, 0, 0})


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x24ddd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x24ddcd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x00B8 (0x000468 - 0x000520)
class UMRMeshComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UMaterialInterface*)                 WireframeMaterial                                           OFFSET(get<T>, {0x480, 8, 0, 0})
	DMember(bool)                                      bCreateMeshProxySections                                    OFFSET(get<bool>, {0x488, 1, 0, 0})
	DMember(bool)                                      bUpdateNavMeshOnMeshUpdate                                  OFFSET(get<bool>, {0x489, 1, 0, 0})
	DMember(bool)                                      bNeverCreateCollisionMesh                                   OFFSET(get<bool>, {0x48A, 1, 0, 0})
	CMember(class UBodySetup*)                         CachedBodySetup                                             OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(TArray<class UBodySetup*>)                 BodySetups                                                  OFFSET(get<T>, {0x498, 16, 0, 0})


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0xb4b400] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x24ddfc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x24ddf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x24ddea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x24dde80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x24dde50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x24dde30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x24dde10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x24dddf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x24ddc10] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
class FMRMeshConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x03
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

