
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCollectionEngine
/// dependency: MeshDescription

/// Class /Script/EditableMesh.EditableMeshAdapter
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableMeshAdapter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EditableMesh.EditableGeometryCollectionAdapter
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UGeometryCollection*)                GeometryCollection                                          OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UGeometryCollection*)                OriginalGeometryCollection                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   GeometryCollectionLODIndex                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/EditableMesh.EditableMesh
/// Size: 0x06E0 (0x000028 - 0x000708)
class UEditableMesh : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1800;

public:
	CMember(TArray<class UEditableMeshAdapter*>)       Adapters                                                    OFFSET(get<T>, {0x3B8, 16, 0, 0})
	DMember(int32_t)                                   TextureCoordinateCount                                      OFFSET(get<int32_t>, {0x3D0, 4, 0, 0})
	DMember(int32_t)                                   PendingCompactCounter                                       OFFSET(get<int32_t>, {0x51C, 4, 0, 0})
	DMember(int32_t)                                   SubdivisionCount                                            OFFSET(get<int32_t>, {0x520, 4, 0, 0})


	/// Functions
	// Function /Script/EditableMesh.EditableMesh.WeldVertices
	// void WeldVertices(TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);                                              // [0xa8e3b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TryToRemoveVertex
	// void TryToRemoveVertex(FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);                           // [0xa8e280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TryToRemovePolygonEdge
	// void TryToRemovePolygonEdge(FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);                      // [0xa8e150] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TriangulatePolygons
	// void TriangulatePolygons(TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);                    // [0xa8e030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TessellatePolygons
	// void TessellatePolygons(TArray<FPolygonID>& PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs); // [0xa8ded0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.StartModification
	// void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);              // [0xa8de00] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygons
	// void SplitPolygons(TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);                            // [0xa8dcc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygonalMesh
	// void SplitPolygonalMesh(FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs); // [0xa8daf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitEdge
	// void SplitEdge(FEdgeID EdgeID, TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);                               // [0xa8d990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesCornerSharpness
	// void SetVerticesCornerSharpness(TArray<FVertexID>& VertexIDs, TArray<float>& VerticesNewCornerSharpness);                // [0xa8d870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesAttributes
	// void SetVerticesAttributes(TArray<FAttributesForVertex>& AttributesForVertices);                                         // [0xa8d7a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVertexInstancesAttributes
	// void SetVertexInstancesAttributes(TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);                   // [0xa8d6d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetTextureCoordinateCount
	// void SetTextureCoordinateCount(int32_t NumTexCoords);                                                                    // [0xa8d640] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetSubdivisionCount
	// void SetSubdivisionCount(int32_t NewSubdivisionCount);                                                                   // [0xa8d5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	// void SetPolygonsVertexAttributes(TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);                      // [0xa8d420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	// void SetEdgesHardnessAutomatically(TArray<FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge);                            // [0xa8d320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardness
	// void SetEdgesHardness(TArray<FEdgeID>& EdgeIDs, TArray<bool>& EdgesNewIsHard);                                           // [0xa8d200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	// void SetEdgesCreaseSharpness(TArray<FEdgeID>& EdgeIDs, TArray<float>& EdgesNewCreaseSharpness);                          // [0xa8d0e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesAttributes
	// void SetEdgesAttributes(TArray<FAttributesForEdge>& AttributesForEdges);                                                 // [0xa8d010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowUndo
	// void SetAllowUndo(bool bInAllowUndo);                                                                                    // [0xa8cf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowSpatialDatabase
	// void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);                                                              // [0xa8cef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowCompact
	// void SetAllowCompact(bool bInAllowCompact);                                                                              // [0xa8ce60] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	// void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(FPlane& InPlane, TArray<FPolygonID>& OutPolygons);     // [0xa8cd60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	// void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(FVector LineSegmentStart, FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons); // [0xa8cc10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	// void SearchSpatialDatabaseForPolygonsInVolume(TArray<FPlane>& Planes, TArray<FPolygonID>& OutPolygons);                  // [0xa8caf0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.RevertInstance
	// class UEditableMesh* RevertInstance();                                                                                   // [0xa8cac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.Revert
	// void Revert();                                                                                                           // [0x9a7970] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.RebuildRenderMesh
	// void RebuildRenderMesh();                                                                                                // [0xa8caa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.QuadrangulateMesh
	// void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);                                                            // [0xa8c9f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.PropagateInstanceChanges
	// void PropagateInstanceChanges();                                                                                         // [0x9a7970] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.MoveVertices
	// void MoveVertices(TArray<FVertexToMove>& VerticesToMove);                                                                // [0xa8c940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.MakeVertexID
	// FVertexID MakeVertexID(int32_t VertexIndex);                                                                             // [0xa8c8c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonID
	// FPolygonID MakePolygonID(int32_t PolygonIndex);                                                                          // [0xa8c8c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonGroupID
	// FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex);                                                           // [0xa8c8c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakeEdgeID
	// FEdgeID MakeEdgeID(int32_t EdgeIndex);                                                                                   // [0xa8c8c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.IsValidVertex
	// bool IsValidVertex(FVertexID VertexID);                                                                                  // [0xa8c830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygonGroup
	// bool IsValidPolygonGroup(FPolygonGroupID PolygonGroupID);                                                                // [0xa8c7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygon
	// bool IsValidPolygon(FPolygonID PolygonID);                                                                               // [0xa8c710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidEdge
	// bool IsValidEdge(FEdgeID EdgeID);                                                                                        // [0xa8c680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsUndoAllowed
	// bool IsUndoAllowed();                                                                                                    // [0xa8c660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	// bool IsSpatialDatabaseAllowed();                                                                                         // [0xa8c640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsPreviewingSubdivisions
	// bool IsPreviewingSubdivisions();                                                                                         // [0xa8c610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsOrphanedVertex
	// bool IsOrphanedVertex(FVertexID VertexID);                                                                               // [0xa8c580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCompactAllowed
	// bool IsCompactAllowed();                                                                                                 // [0xa8c560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCommittedAsInstance
	// bool IsCommittedAsInstance();                                                                                            // [0xa8c530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCommitted
	// bool IsCommitted();                                                                                                      // [0xa8c500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsBeingModified
	// bool IsBeingModified();                                                                                                  // [0xa8c4d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.InvalidVertexID
	// FVertexID InvalidVertexID();                                                                                             // [0xa8c4b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonID
	// FPolygonID InvalidPolygonID();                                                                                           // [0xa8c490] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonGroupID
	// FPolygonGroupID InvalidPolygonGroupID();                                                                                 // [0xa8c470] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidEdgeID
	// FEdgeID InvalidEdgeID();                                                                                                 // [0xa8c450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InsetPolygons
	// void InsetPolygons(TArray<FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs); // [0xa8c210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.InsertEdgeLoop
	// void InsertEdgeLoop(FEdgeID EdgeID, TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);                              // [0xa8c0b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.InitializeAdapters
	// void InitializeAdapters();                                                                                               // [0xa8c090] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.GetVertexPairEdge
	// FEdgeID GetVertexPairEdge(FVertexID VertexID, FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed);                  // [0xa8bf60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceVertex
	// FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                   // [0xa8bec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceCount
	// int32_t GetVertexInstanceCount();                                                                                        // [0xa8be90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0xa8bda0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	// int32_t GetVertexInstanceConnectedPolygonCount(FVertexInstanceID VertexInstanceID);                                      // [0xa8bd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	// FPolygonID GetVertexInstanceConnectedPolygon(FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber);        // [0xa8bc30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexCount
	// int32_t GetVertexCount();                                                                                                // [0xa8bc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedPolygons
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                         // [0xa8bb10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdges
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs);                                  // [0xa8ba20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	// int32_t GetVertexConnectedEdgeCount(FVertexID VertexID);                                                                 // [0xa8b990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdge
	// FEdgeID GetVertexConnectedEdge(FVertexID VertexID, int32_t ConnectedEdgeNumber);                                         // [0xa8b8b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexAdjacentVertices
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                             // [0xa8b7c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetTextureCoordinateCount
	// int32_t GetTextureCoordinateCount();                                                                                     // [0xa8b790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionLimitData
	// FSubdivisionLimitData GetSubdivisionLimitData();                                                                         // [0xa8b750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionCount
	// int32_t GetSubdivisionCount();                                                                                           // [0xa8b720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	// int32_t GetPolygonTriangulatedTriangleCount(FPolygonID PolygonID);                                                       // [0xa8b690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	// FTriangleID GetPolygonTriangulatedTriangle(FPolygonID PolygonID, int32_t PolygonTriangleNumber);                         // [0xa8b5b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	// void GetPolygonPerimeterVertices(FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs);                 // [0xa8b4c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	// void GetPolygonPerimeterVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs); // [0xa8b3d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	// FVertexInstanceID GetPolygonPerimeterVertexInstance(FPolygonID PolygonID, int32_t PolygonVertexNumber);                  // [0xa8b2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	// int32_t GetPolygonPerimeterVertexCount(FPolygonID PolygonID);                                                            // [0xa8b090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	// FVertexID GetPolygonPerimeterVertex(FPolygonID PolygonID, int32_t PolygonVertexNumber);                                  // [0xa8b210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs);                        // [0xa8b120] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	// int32_t GetPolygonPerimeterEdgeCount(FPolygonID PolygonID);                                                              // [0xa8b090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	// FEdgeID GetPolygonPerimeterEdge(FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon); // [0xa8af60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonInGroup
	// FPolygonID GetPolygonInGroup(FPolygonGroupID PolygonGroupID, int32_t PolygonNumber);                                     // [0xa8ae80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonGroupCount
	// int32_t GetPolygonGroupCount();                                                                                          // [0xa8ae50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCountInGroup
	// int32_t GetPolygonCountInGroup(FPolygonGroupID PolygonGroupID);                                                          // [0xa8adc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCount
	// int32_t GetPolygonCount();                                                                                               // [0xa8ad90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons);                          // [0xa8aca0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetGroupForPolygon
	// FPolygonGroupID GetGroupForPolygon(FPolygonID PolygonID);                                                                // [0xa8ac00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	// FPolygonGroupID GetFirstValidPolygonGroup();                                                                             // [0xa8abc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertices
	// void GetEdgeVertices(FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1);                          // [0xa8aa90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertex
	// FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t EdgeVertexNumber);                                                       // [0xa8a9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	// FEdgeID GetEdgeThatConnectsVertices(FVertexID VertexID0, FVertexID VertexID1);                                           // [0xa8a8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeLoopElements
	// void GetEdgeLoopElements(FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs);                                                  // [0xa8a7e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeCount
	// int32_t GetEdgeCount();                                                                                                  // [0xa8a7b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                               // [0xa8a6c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	// int32_t GetEdgeConnectedPolygonCount(FEdgeID EdgeID);                                                                    // [0xa8a630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	// FPolygonID GetEdgeConnectedPolygon(FEdgeID EdgeID, int32_t ConnectedPolygonNumber);                                      // [0xa8a550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	// void GeneratePolygonTangentsAndNormals(TArray<FPolygonID>& PolygonIDs);                                                  // [0xa8a4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.FlipPolygons
	// void FlipPolygons(TArray<FPolygonID>& PolygonIDs);                                                                       // [0xa8a3f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	// int32_t FindPolygonPerimeterVertexNumberForVertex(FPolygonID PolygonID, FVertexID VertexID);                             // [0xa8a310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	// int32_t FindPolygonPerimeterEdgeNumberForVertices(FPolygonID PolygonID, FVertexID EdgeVertexID0, FVertexID EdgeVertexID1); // [0xa8a1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonLoop
	// void FindPolygonLoop(FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit); // [0xa89fd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ExtrudePolygons
	// void ExtrudePolygons(TArray<FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons); // [0xa89e10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ExtendVertices
	// void ExtendVertices(TArray<FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs); // [0xa89c60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ExtendEdges
	// void ExtendEdges(TArray<FEdgeID>& EdgeIDs, bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);                 // [0xa89b00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.EndModification
	// void EndModification(bool bFromUndo);                                                                                    // [0xa89a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexInstances
	// void DeleteVertexInstances(TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);          // [0xa89970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	// void DeleteVertexAndConnectedEdgesAndPolygons(FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0xa897a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygons
	// void DeletePolygons(TArray<FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0xa895a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygonGroups
	// void DeletePolygonGroups(TArray<FPolygonGroupID>& PolygonGroupIDs);                                                      // [0xa894f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteOrphanVertices
	// void DeleteOrphanVertices(TArray<FVertexID>& VertexIDsToDelete);                                                         // [0xa89440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdges
	// void DeleteEdges(TArray<FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices);                                        // [0xa89340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	// void DeleteEdgeAndConnectedPolygons(FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0xa89170] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateVertices
	// void CreateVertices(TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);                      // [0xa89030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateVertexInstances
	// void CreateVertexInstances(TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs); // [0xa88ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygons
	// void CreatePolygons(TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs); // [0xa88d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygonGroups
	// void CreatePolygonGroups(TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs); // [0xa88be0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	// void CreateMissingPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);                           // [0xa88af0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateEmptyVertexRange
	// void CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);                            // [0xa88a00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateEdges
	// void CreateEdges(TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);                                  // [0xa888c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	// void ComputePolygonsSharedEdges(TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs);                      // [0xa887a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonPlane
	// FPlane ComputePolygonPlane(FPolygonID PolygonID);                                                                        // [0xa88700] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonNormal
	// FVector ComputePolygonNormal(FPolygonID PolygonID);                                                                      // [0xa88660] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonCenter
	// FVector ComputePolygonCenter(FPolygonID PolygonID);                                                                      // [0xa885c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	// FBoxSphereBounds ComputeBoundingBoxAndSphere();                                                                          // [0xa88570] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBox
	// FBox ComputeBoundingBox();                                                                                               // [0xa88520] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.CommitInstance
	// class UEditableMesh* CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo);                                   // [0xa88480] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.Commit
	// void Commit();                                                                                                           // [0xa88460] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	// void ChangePolygonsVertexInstances(TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);                // [0xa88340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.BevelPolygons
	// void BevelPolygons(TArray<FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs); // [0xa88150] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	// void AssignPolygonsToPolygonGroups(TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups); // [0xa88050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.AnyChangesToUndo
	// bool AnyChangesToUndo();                                                                                                 // [0xa88020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EditableMesh.EditableMeshFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableMeshFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EditableMesh.EditableMeshFactory.MakeEditableMesh
	// class UEditableMesh* MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex);                  // [0xa91850] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/EditableMesh.EditableStaticMeshAdapter
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UStaticMesh*)                        OriginalStaticMesh                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   StaticMeshLODIndex                                          OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/EditableMesh.AdaptorPolygon2Group
/// Size: 0x0048 (0x000000 - 0x000048)
class FAdaptorPolygon2Group : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  RenderingSectionIndex                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxTriangles                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/EditableMesh.AdaptorTriangleID
/// Size: 0x0000 (0x000004 - 0x000004)
class FAdaptorTriangleID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/EditableMesh.AdaptorPolygon
/// Size: 0x0018 (0x000000 - 0x000018)
class FAdaptorPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FPolygonGroupID)                           PolygonGroupID                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FAdaptorTriangleID>)                TriangulatedPolygonTriangleIndices                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.PolygonGroupForPolygon
/// Size: 0x0008 (0x000000 - 0x000008)
class FPolygonGroupForPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FPolygonID)                                PolygonID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPolygonGroupID)                           PolygonGroupID                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/EditableMesh.MeshElementAttributeValue
/// Size: 0x0050 (0x000000 - 0x000050)
class FMeshElementAttributeValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/EditableMesh.MeshElementAttributeData
/// Size: 0x0060 (0x000000 - 0x000060)
class FMeshElementAttributeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     AttributeName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   AttributeIndex                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FMeshElementAttributeValue)                AttributeValue                                              OFFSET(getStruct<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/EditableMesh.MeshElementAttributeList
/// Size: 0x0010 (0x000000 - 0x000010)
class FMeshElementAttributeList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMeshElementAttributeData>)         Attributes                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EditableMesh.PolygonGroupToCreate
/// Size: 0x0018 (0x000000 - 0x000018)
class FPolygonGroupToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMeshElementAttributeList)                 PolygonGroupAttributes                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPolygonGroupID)                           OriginalPolygonGroupID                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/EditableMesh.VertexToMove
/// Size: 0x0010 (0x000000 - 0x000010)
class FVertexToMove : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVertexID)                                 VertexID                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   NewVertexPosition                                           OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/EditableMesh.VertexIndexAndInstanceID
/// Size: 0x0008 (0x000000 - 0x000008)
class FVertexIndexAndInstanceID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ContourIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVertexInstanceID)                         VertexInstanceID                                            OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/EditableMesh.VertexInstancesForPolygonHole
/// Size: 0x0010 (0x000000 - 0x000010)
class FVertexInstancesForPolygonHole : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVertexIndexAndInstanceID>)         VertexIndicesAndInstanceIDs                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EditableMesh.ChangeVertexInstancesForPolygon
/// Size: 0x0028 (0x000000 - 0x000028)
class FChangeVertexInstancesForPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPolygonID)                                PolygonID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FVertexIndexAndInstanceID>)         PerimeterVertexIndicesAndInstanceIDs                        OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVertexInstancesForPolygonHole>)    VertexIndicesAndInstanceIDsForEachHole                      OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygonHole
/// Size: 0x0010 (0x000000 - 0x000010)
class FVertexAttributesForPolygonHole : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMeshElementAttributeList>)         VertexAttributeList                                         OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygon
/// Size: 0x0028 (0x000000 - 0x000028)
class FVertexAttributesForPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPolygonID)                                PolygonID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FMeshElementAttributeList>)         PerimeterVertexAttributeLists                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVertexAttributesForPolygonHole>)   VertexAttributeListsForEachHole                             OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/EditableMesh.AttributesForEdge
/// Size: 0x0018 (0x000000 - 0x000018)
class FAttributesForEdge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FEdgeID)                                   EdgeID                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 EdgeAttributes                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.AttributesForVertexInstance
/// Size: 0x0018 (0x000000 - 0x000018)
class FAttributesForVertexInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVertexInstanceID)                         VertexInstanceID                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 VertexInstanceAttributes                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.AttributesForVertex
/// Size: 0x0018 (0x000000 - 0x000018)
class FAttributesForVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVertexID)                                 VertexID                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 VertexAttributes                                            OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.VertexPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FVertexPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FVertexID)                                 VertexID0                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVertexID)                                 VertexID1                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/EditableMesh.PolygonToSplit
/// Size: 0x0018 (0x000000 - 0x000018)
class FPolygonToSplit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FPolygonID)                                PolygonID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FVertexPair>)                       VertexPairsToSplitAt                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.VertexAndAttributes
/// Size: 0x0018 (0x000000 - 0x000018)
class FVertexAndAttributes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVertexInstanceID)                         VertexInstanceID                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVertexID)                                 VertexID                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 PolygonVertexAttributes                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.PolygonToCreate
/// Size: 0x0020 (0x000000 - 0x000020)
class FPolygonToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FPolygonGroupID)                           PolygonGroupID                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FVertexAndAttributes>)              PerimeterVertices                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FPolygonID)                                OriginalPolygonID                                           OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	CMember(EPolygonEdgeHardness)                      PolygonEdgeHardness                                         OFFSET(get<T>, {0x1C, 1, 0, 0})
};

/// Struct /Script/EditableMesh.EdgeToCreate
/// Size: 0x0020 (0x000000 - 0x000020)
class FEdgeToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVertexID)                                 VertexID0                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVertexID)                                 VertexID1                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 EdgeAttributes                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FEdgeID)                                   OriginalEdgeID                                              OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/EditableMesh.VertexInstanceToCreate
/// Size: 0x0020 (0x000000 - 0x000020)
class FVertexInstanceToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVertexID)                                 VertexID                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 VertexInstanceAttributes                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FVertexInstanceID)                         OriginalVertexInstanceID                                    OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/EditableMesh.VertexToCreate
/// Size: 0x0018 (0x000000 - 0x000018)
class FVertexToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMeshElementAttributeList)                 VertexAttributes                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVertexID)                                 OriginalVertexID                                            OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/EditableMesh.SubdividedQuadVertex
/// Size: 0x0034 (0x000000 - 0x000034)
class FSubdividedQuadVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(int32_t)                                   VertexPositionIndex                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 TextureCoordinate0                                          OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FVector2D)                                 TextureCoordinate1                                          OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FColor)                                    VertexColor                                                 OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FVector)                                   VertexNormal                                                OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   VertexTangent                                               OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     VertexBinormalSign                                          OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/EditableMesh.SubdividedQuad
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FSubdividedQuad : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSubdividedQuadVertex)                     QuadVertex0                                                 OFFSET(getStruct<T>, {0x0, 52, 0, 0})
	SMember(FSubdividedQuadVertex)                     QuadVertex1                                                 OFFSET(getStruct<T>, {0x34, 52, 0, 0})
	SMember(FSubdividedQuadVertex)                     QuadVertex2                                                 OFFSET(getStruct<T>, {0x68, 52, 0, 0})
	SMember(FSubdividedQuadVertex)                     QuadVertex3                                                 OFFSET(getStruct<T>, {0x9C, 52, 0, 0})
};

/// Struct /Script/EditableMesh.SubdivisionLimitSection
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubdivisionLimitSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSubdividedQuad>)                   SubdividedQuads                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EditableMesh.SubdividedWireEdge
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubdividedWireEdge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   EdgeVertex0PositionIndex                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EdgeVertex1PositionIndex                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/EditableMesh.SubdivisionLimitData
/// Size: 0x0030 (0x000000 - 0x000030)
class FSubdivisionLimitData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           VertexPositions                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FSubdivisionLimitSection>)          Sections                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FSubdividedWireEdge>)               SubdividedWireEdges                                         OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/EditableMesh.RenderingPolygonGroup
/// Size: 0x0048 (0x000000 - 0x000048)
class FRenderingPolygonGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  RenderingSectionIndex                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxTriangles                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/EditableMesh.RenderingPolygon
/// Size: 0x0018 (0x000000 - 0x000018)
class FRenderingPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FPolygonGroupID)                           PolygonGroupID                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FTriangleID>)                       TriangulatedPolygonTriangleIndices                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/EditableMesh.ETriangleTessellationMode
/// Size: 0x02
enum class ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles                                        = 0,
	ETriangleTessellationMode__FourTriangles                                         = 1
};

/// Enum /Script/EditableMesh.EInsetPolygonsMode
/// Size: 0x03
enum class EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All                                                          = 0,
	EInsetPolygonsMode__CenterPolygonOnly                                            = 1,
	EInsetPolygonsMode__SidePolygonsOnly                                             = 2
};

/// Enum /Script/EditableMesh.EPolygonEdgeHardness
/// Size: 0x04
enum class EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft                                               = 0,
	EPolygonEdgeHardness__NewEdgesHard                                               = 1,
	EPolygonEdgeHardness__AllEdgesSoft                                               = 2,
	EPolygonEdgeHardness__AllEdgesHard                                               = 3
};

/// Enum /Script/EditableMesh.EMeshElementAttributeType
/// Size: 0x08
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
/// Size: 0x02
enum class EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange                                            = 0,
	EMeshTopologyChange__TopologyChange                                              = 1
};

/// Enum /Script/EditableMesh.EMeshModificationType
/// Size: 0x03
enum class EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim                                              = 0,
	EMeshModificationType__Interim                                                   = 1,
	EMeshModificationType__Final                                                     = 2
};

