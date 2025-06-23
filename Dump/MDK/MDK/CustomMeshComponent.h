
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CustomMeshComponent.CustomMeshComponent
/// Size: 0x0010 (0x000490 - 0x0004A0)
class UCustomMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:


	/// Functions
	// Function /Script/CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	// bool SetCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0x13f8c40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	// void ClearCustomMeshTriangles();                                                                                         // [0x13f8c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	// void AddCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0x13f8b70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CustomMeshComponent.CustomMeshTriangle
/// Size: 0x0024 (0x000000 - 0x000024)
class FCustomMeshTriangle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FVector)                                   Vertex0                                                     OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Vertex1                                                     OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   Vertex2                                                     OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

