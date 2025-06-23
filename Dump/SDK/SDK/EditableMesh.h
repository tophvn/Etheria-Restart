
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "GeometryCollectionEngine.h"
#include "MeshDescription.h"

#pragma pack(push, 0x1)

class UEditableGeometryCollectionAdapter;
class UEditableMesh;
class UEditableMeshAdapter;
class UEditableMeshFactory;
class UEditableStaticMeshAdapter;

/// Enum /Script/EditableMesh.ETriangleTessellationMode
/// Size: 0x01 (1 bytes)
enum class ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles                                        = 0,
	ETriangleTessellationMode__FourTriangles                                         = 1
};

/// Enum /Script/EditableMesh.EInsetPolygonsMode
/// Size: 0x01 (1 bytes)
enum class EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All                                                          = 0,
	EInsetPolygonsMode__CenterPolygonOnly                                            = 1,
	EInsetPolygonsMode__SidePolygonsOnly                                             = 2
};

/// Enum /Script/EditableMesh.EPolygonEdgeHardness
/// Size: 0x01 (1 bytes)
enum class EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft                                               = 0,
	EPolygonEdgeHardness__NewEdgesHard                                               = 1,
	EPolygonEdgeHardness__AllEdgesSoft                                               = 2,
	EPolygonEdgeHardness__AllEdgesHard                                               = 3
};

/// Enum /Script/EditableMesh.EMeshElementAttributeType
/// Size: 0x01 (1 bytes)
enum class EMeshElementAttributeType : uint8_t
{
	EMeshElementAttributeType__None                                                  = 0,
	EMeshElementAttributeType__FVector4                                              = 1,
	EMeshElementAttributeType__FVector                                               = 2,
	EMeshElementAttributeType__FVector2D                                             = 3,
	EMeshElementAttributeType__Float                                                 = 4,
	EMeshElementAttributeType__Int                                                   = 5,
	EMeshElementAttributeType__Bool                                                  = 6,
	EMeshElementAttributeType__FName                                                 = 7
};

/// Enum /Script/EditableMesh.EMeshTopologyChange
/// Size: 0x01 (1 bytes)
enum class EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange                                            = 0,
	EMeshTopologyChange__TopologyChange                                              = 1
};

/// Enum /Script/EditableMesh.EMeshModificationType
/// Size: 0x01 (1 bytes)
enum class EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim                                              = 0,
	EMeshModificationType__Interim                                                   = 1,
	EMeshModificationType__Final                                                     = 2
};

#pragma pack(pop)


static_assert(sizeof(UEditableMeshAdapter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEditableGeometryCollectionAdapter) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(UEditableMesh) == 0x0708); // 1800 bytes (0x000028 - 0x000708)
static_assert(sizeof(UEditableMeshFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEditableStaticMeshAdapter) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(FAdaptorPolygon2Group) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAdaptorTriangleID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FAdaptorPolygon) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPolygonGroupForPolygon) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMeshElementAttributeValue) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMeshElementAttributeData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMeshElementAttributeList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPolygonGroupToCreate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVertexToMove) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVertexIndexAndInstanceID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FVertexInstancesForPolygonHole) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FChangeVertexInstancesForPolygon) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FVertexAttributesForPolygonHole) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVertexAttributesForPolygon) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAttributesForEdge) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAttributesForVertexInstance) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAttributesForVertex) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVertexPair) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPolygonToSplit) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVertexAndAttributes) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPolygonToCreate) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEdgeToCreate) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVertexInstanceToCreate) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVertexToCreate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSubdividedQuadVertex) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FSubdividedQuad) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FSubdivisionLimitSection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSubdividedWireEdge) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FSubdivisionLimitData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRenderingPolygonGroup) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRenderingPolygon) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UEditableGeometryCollectionAdapter, GeometryCollection) == 0x0028);
static_assert(offsetof(UEditableGeometryCollectionAdapter, OriginalGeometryCollection) == 0x0030);
static_assert(offsetof(UEditableMesh, Adapters) == 0x03B8);
static_assert(offsetof(UEditableStaticMeshAdapter, StaticMesh) == 0x0028);
static_assert(offsetof(UEditableStaticMeshAdapter, OriginalStaticMesh) == 0x0030);
static_assert(offsetof(FAdaptorPolygon, PolygonGroupID) == 0x0000);
static_assert(offsetof(FAdaptorPolygon, TriangulatedPolygonTriangleIndices) == 0x0008);
static_assert(offsetof(FPolygonGroupForPolygon, PolygonID) == 0x0000);
static_assert(offsetof(FPolygonGroupForPolygon, PolygonGroupID) == 0x0004);
static_assert(offsetof(FMeshElementAttributeData, AttributeName) == 0x0000);
static_assert(offsetof(FMeshElementAttributeData, AttributeValue) == 0x0010);
static_assert(offsetof(FMeshElementAttributeList, Attributes) == 0x0000);
static_assert(offsetof(FPolygonGroupToCreate, PolygonGroupAttributes) == 0x0000);
static_assert(offsetof(FPolygonGroupToCreate, OriginalPolygonGroupID) == 0x0010);
static_assert(offsetof(FVertexToMove, VertexID) == 0x0000);
static_assert(offsetof(FVertexToMove, NewVertexPosition) == 0x0004);
static_assert(offsetof(FVertexIndexAndInstanceID, VertexInstanceID) == 0x0004);
static_assert(offsetof(FVertexInstancesForPolygonHole, VertexIndicesAndInstanceIDs) == 0x0000);
static_assert(offsetof(FChangeVertexInstancesForPolygon, PolygonID) == 0x0000);
static_assert(offsetof(FChangeVertexInstancesForPolygon, PerimeterVertexIndicesAndInstanceIDs) == 0x0008);
static_assert(offsetof(FChangeVertexInstancesForPolygon, VertexIndicesAndInstanceIDsForEachHole) == 0x0018);
static_assert(offsetof(FVertexAttributesForPolygonHole, VertexAttributeList) == 0x0000);
static_assert(offsetof(FVertexAttributesForPolygon, PolygonID) == 0x0000);
static_assert(offsetof(FVertexAttributesForPolygon, PerimeterVertexAttributeLists) == 0x0008);
static_assert(offsetof(FVertexAttributesForPolygon, VertexAttributeListsForEachHole) == 0x0018);
static_assert(offsetof(FAttributesForEdge, EdgeID) == 0x0000);
static_assert(offsetof(FAttributesForEdge, EdgeAttributes) == 0x0008);
static_assert(offsetof(FAttributesForVertexInstance, VertexInstanceID) == 0x0000);
static_assert(offsetof(FAttributesForVertexInstance, VertexInstanceAttributes) == 0x0008);
static_assert(offsetof(FAttributesForVertex, VertexID) == 0x0000);
static_assert(offsetof(FAttributesForVertex, VertexAttributes) == 0x0008);
static_assert(offsetof(FVertexPair, VertexID0) == 0x0000);
static_assert(offsetof(FVertexPair, VertexID1) == 0x0004);
static_assert(offsetof(FPolygonToSplit, PolygonID) == 0x0000);
static_assert(offsetof(FPolygonToSplit, VertexPairsToSplitAt) == 0x0008);
static_assert(offsetof(FVertexAndAttributes, VertexInstanceID) == 0x0000);
static_assert(offsetof(FVertexAndAttributes, VertexID) == 0x0004);
static_assert(offsetof(FVertexAndAttributes, PolygonVertexAttributes) == 0x0008);
static_assert(offsetof(FPolygonToCreate, PolygonGroupID) == 0x0000);
static_assert(offsetof(FPolygonToCreate, PerimeterVertices) == 0x0008);
static_assert(offsetof(FPolygonToCreate, OriginalPolygonID) == 0x0018);
static_assert(offsetof(FPolygonToCreate, PolygonEdgeHardness) == 0x001C);
static_assert(offsetof(FEdgeToCreate, VertexID0) == 0x0000);
static_assert(offsetof(FEdgeToCreate, VertexID1) == 0x0004);
static_assert(offsetof(FEdgeToCreate, EdgeAttributes) == 0x0008);
static_assert(offsetof(FEdgeToCreate, OriginalEdgeID) == 0x0018);
static_assert(offsetof(FVertexInstanceToCreate, VertexID) == 0x0000);
static_assert(offsetof(FVertexInstanceToCreate, VertexInstanceAttributes) == 0x0008);
static_assert(offsetof(FVertexInstanceToCreate, OriginalVertexInstanceID) == 0x0018);
static_assert(offsetof(FVertexToCreate, VertexAttributes) == 0x0000);
static_assert(offsetof(FVertexToCreate, OriginalVertexID) == 0x0010);
static_assert(offsetof(FSubdividedQuadVertex, TextureCoordinate0) == 0x0004);
static_assert(offsetof(FSubdividedQuadVertex, TextureCoordinate1) == 0x000C);
static_assert(offsetof(FSubdividedQuadVertex, VertexColor) == 0x0014);
static_assert(offsetof(FSubdividedQuadVertex, VertexNormal) == 0x0018);
static_assert(offsetof(FSubdividedQuadVertex, VertexTangent) == 0x0024);
static_assert(offsetof(FSubdividedQuad, QuadVertex0) == 0x0000);
static_assert(offsetof(FSubdividedQuad, QuadVertex1) == 0x0034);
static_assert(offsetof(FSubdividedQuad, QuadVertex2) == 0x0068);
static_assert(offsetof(FSubdividedQuad, QuadVertex3) == 0x009C);
static_assert(offsetof(FSubdivisionLimitSection, SubdividedQuads) == 0x0000);
static_assert(offsetof(FSubdivisionLimitData, VertexPositions) == 0x0000);
static_assert(offsetof(FSubdivisionLimitData, Sections) == 0x0010);
static_assert(offsetof(FSubdivisionLimitData, SubdividedWireEdges) == 0x0020);
static_assert(offsetof(FRenderingPolygon, PolygonGroupID) == 0x0000);
static_assert(offsetof(FRenderingPolygon, TriangulatedPolygonTriangleIndices) == 0x0008);
