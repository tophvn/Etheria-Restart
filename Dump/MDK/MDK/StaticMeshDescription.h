
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MeshDescription

/// Class /Script/StaticMeshDescription.StaticMeshDescription
/// Size: 0x0000 (0x000390 - 0x000390)
class UStaticMeshDescription : public UMeshDescriptionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:


	/// Functions
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	// void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex);                             // [0x2afe7b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	// void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName);                                   // [0x2afe6d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	// FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex);                                      // [0x2afe5f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.CreateCube
	// void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ); // [0x2afe2b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/StaticMeshDescription.UVMapSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FUVMapSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Size                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector2D)                                 UVTile                                                      OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
};

