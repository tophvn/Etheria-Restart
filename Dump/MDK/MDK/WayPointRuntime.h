
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/WayPointRuntime.WayPointFactory
/// Size: 0x00E0 (0x000028 - 0x000108)
class UWayPointFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:


	/// Functions
	// Function /Script/WayPointRuntime.WayPointFactory.TryGetWayPointPath
	// TArray<FVector> TryGetWayPointPath(FVector Start, FVector End, float& Len, class AActor* Actor);                         // [0xc51d00] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/WayPointRuntime.WayPointFactory.TryGetBezierWayPointPath
	// TArray<FVector> TryGetBezierWayPointPath(FVector Start, FVector End, float& Len, class AActor* Actor);                   // [0xc51b30] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/WayPointRuntime.WayPointFactory.Init
	// void Init(class UWorld* CurrWorld);                                                                                      // [0xc51a80] Final|Native|Public  
};

/// Class /Script/WayPointRuntime.WayPointObject
/// Size: 0x0038 (0x000220 - 0x000258)
class AWayPointObject : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(class UBillboardComponent*)                BillboardComponent                                          OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(TArray<class AWayPointObject*>)            LinkList                                                    OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(TArray<class AWayPointObject*>)            BeLinkedList                                                OFFSET(get<T>, {0x240, 16, 0, 0})
	DMember(int32_t)                                   ZoneId                                                      OFFSET(get<int32_t>, {0x250, 4, 0, 0})
	DMember(float)                                     AutoStickGround                                             OFFSET(get<float>, {0x254, 4, 0, 0})
};

/// Class /Script/WayPointRuntime.WayPointRouteVisualizer
/// Size: 0x0068 (0x000028 - 0x000090)
class UWayPointRouteVisualizer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/WayPointRuntime.WayPointSearchEffect
/// Size: 0x00B0 (0x000220 - 0x0002D0)
class AWayPointSearchEffect : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FVector)                                   StartPosOffset                                              OFFSET(getStruct<T>, {0x220, 12, 0, 0})
	DMember(int32_t)                                   EndThreshold                                                OFFSET(get<int32_t>, {0x22C, 4, 0, 0})
	DMember(float)                                     SurvivalTime                                                OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(float)                                     PointZoneSafeDis                                            OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(float)                                     DestroyLineSpeed                                            OFFSET(get<float>, {0x238, 4, 0, 0})
	CMember(class UStaticMesh*)                        SplineStaticMesh                                            OFFSET(get<T>, {0x240, 8, 0, 0})
	DMember(float)                                     MeshX                                                       OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     MeshY                                                       OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(float)                                     MaterialSpeed                                               OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(float)                                     MaxMeshLen                                                  OFFSET(get<float>, {0x254, 4, 0, 0})


	/// Functions
	// Function /Script/WayPointRuntime.WayPointSearchEffect.TickTelescopic
	// void TickTelescopic();                                                                                                   // [0xc51b10] Final|Native|Protected 
	// Function /Script/WayPointRuntime.WayPointSearchEffect.IndentationSpline4
	// void IndentationSpline4(float DeltaTime);                                                                                // [0xc51970] Final|Native|Protected 
	// Function /Script/WayPointRuntime.WayPointSearchEffect.IndentationSpline3
	// void IndentationSpline3(float DeltaTime);                                                                                // [0xc518f0] Final|Native|Protected 
	// Function /Script/WayPointRuntime.WayPointSearchEffect.IndentationSpline2
	// void IndentationSpline2(float DeltaTime);                                                                                // [0xc51870] Final|Native|Protected 
	// Function /Script/WayPointRuntime.WayPointSearchEffect.IndentationSpline
	// void IndentationSpline(int32_t idx);                                                                                     // [0xc519f0] Final|Native|Protected 
	// Function /Script/WayPointRuntime.WayPointSearchEffect.CreateSplineMeshComponent
	// class USplineMeshComponent* CreateSplineMeshComponent(FVector& StartPos, FVector& StartTangent, FVector& EndPos, FVector& EndTangent, FVector& UpDir); // [0xc51680] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/WayPointRuntime.WayPointSearchEffect.CreateSplineMeshBpScript
	// void CreateSplineMeshBpScript();                                                                                         // [0xc51660] Final|Native|Public  
	// Function /Script/WayPointRuntime.WayPointSearchEffect.CreateSplineMesh
	// void CreateSplineMesh(TArray<FVector>& line, class AActor* Player);                                                      // [0xc51560] Final|Native|Public|HasOutParms 
	// Function /Script/WayPointRuntime.WayPointSearchEffect.CreateSplineInstMesh
	// void CreateSplineInstMesh(TArray<FVector>& line, class AActor* Player);                                                  // [0xc51460] Final|Native|Public|HasOutParms 
	// Function /Script/WayPointRuntime.WayPointSearchEffect.CleanupSplineMesh
	// void CleanupSplineMesh();                                                                                                // [0xc51440] Native|Protected     
};

/// Class /Script/WayPointRuntime.WayPointZoneActor
/// Size: 0x0020 (0x000220 - 0x000240)
class AWayPointZoneActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(int32_t)                                   ZoneId                                                      OFFSET(get<int32_t>, {0x220, 4, 0, 0})
	CMember(TArray<class AWayPointZoneActor*>)         ZoneFortressLinkList                                        OFFSET(get<T>, {0x228, 16, 0, 0})
};

