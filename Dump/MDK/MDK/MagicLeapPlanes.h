
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesComponent
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UMagicLeapPlanesComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(TArray<EMagicLeapPlaneQueryFlags>)         QueryFlags                                                  OFFSET(get<T>, {0x1F8, 16, 0, 0})
	CMember(class UBoxComponent*)                      SearchVolume                                                OFFSET(get<T>, {0x208, 8, 0, 0})
	DMember(int32_t)                                   MaxResults                                                  OFFSET(get<int32_t>, {0x210, 4, 0, 0})
	DMember(float)                                     MinHolePerimeter                                            OFFSET(get<float>, {0x214, 4, 0, 0})
	DMember(float)                                     MinPlaneArea                                                OFFSET(get<float>, {0x218, 4, 0, 0})
	CMember(EMagicLeapPlaneQueryType)                  QueryType                                                   OFFSET(get<T>, {0x21C, 1, 0, 0})
	DMember(float)                                     SimilarityThreshold                                         OFFSET(get<float>, {0x220, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlanesQueryResult                                         OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPersistentPlanesQueryResult                               OFFSET(getStruct<T>, {0x238, 16, 0, 0})


	/// Functions
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
	// bool RequestPlanesAsync();                                                                                               // [0x132df90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
	// void ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags>& InPriority, TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>& OutReorderedFlags); // [0x132de10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
	// bool RemovePersistentQuery(FGuid Handle);                                                                                // [0x132dd70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
	// void RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>& OutFlags); // [0x132dbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
	// bool PlanesQueryBeginAsync(FMagicLeapPlanesQuery& Query, FDelegateProperty& ResultDelegate);                             // [0x132da90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
	// bool PlanesPersistentQueryBeginAsync(FMagicLeapPlanesQuery& Query, FGuid& Handle, FDelegateProperty& ResultDelegate);    // [0x132d8e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
	// bool IsTrackerValid();                                                                                                   // [0x132d8b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
	// FTransform GetContentScale(class AActor* ContentActor, FMagicLeapPlaneResult& PlaneResult);                              // [0x132d760] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
	// bool DestroyTracker();                                                                                                   // [0x132d730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
	// bool CreateTracker();                                                                                                    // [0x132d700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
	// FGuid AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType);                                                  // [0x132d670] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPolygon
/// Size: 0x0010 (0x000000 - 0x000010)
class FMagicLeapPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVector>)                           Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundary
/// Size: 0x0020 (0x000000 - 0x000020)
class FMagicLeapPlaneBoundary : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FMagicLeapPolygon)                         Polygon                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMagicLeapPolygon>)                 Holes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneBoundaries
/// Size: 0x0020 (0x000000 - 0x000020)
class FMagicLeapPlaneBoundaries : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMagicLeapPlaneBoundary>)           Boundaries                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlaneResult
/// Size: 0x0060 (0x000000 - 0x000060)
class FMagicLeapPlaneResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   PlanePosition                                               OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FRotator)                                  PlaneOrientation                                            OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FRotator)                                  ContentOrientation                                          OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector2D)                                 PlaneDimensions                                             OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	CMember(TArray<EMagicLeapPlaneQueryFlags>)         PlaneFlags                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FGuid)                                     InnerID                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/MagicLeapPlanes.MagicLeapPlanesQuery
/// Size: 0x0060 (0x000000 - 0x000060)
class FMagicLeapPlanesQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<EMagicLeapPlaneQueryFlags>)         Flags                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UBoxComponent*)                      SearchVolume                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   MaxResults                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     MinHoleLength                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinPlaneArea                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   SearchVolumePosition                                        OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FQuat)                                     SearchVolumeOrientation                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FVector)                                   SearchVolumeExtents                                         OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	DMember(float)                                     SimilarityThreshold                                         OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bSearchVolumeTrackingSpace                                  OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bResultTrackingSpace                                        OFFSET(get<bool>, {0x51, 1, 0, 0})
};

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryFlags
/// Size: 0x09
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	EMagicLeapPlaneQueryFlags__Vertical                                              = 0,
	EMagicLeapPlaneQueryFlags__Horizontal                                            = 1,
	EMagicLeapPlaneQueryFlags__Arbitrary                                             = 2,
	EMagicLeapPlaneQueryFlags__OrientToGravity                                       = 3,
	EMagicLeapPlaneQueryFlags__PreferInner                                           = 4,
	EMagicLeapPlaneQueryFlags__Ceiling                                               = 5,
	EMagicLeapPlaneQueryFlags__Floor                                                 = 6,
	EMagicLeapPlaneQueryFlags__Wall                                                  = 7,
	EMagicLeapPlaneQueryFlags__Polygons                                              = 8
};

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryType
/// Size: 0x02
enum class EMagicLeapPlaneQueryType : uint8_t
{
	EMagicLeapPlaneQueryType__Bulk                                                   = 0,
	EMagicLeapPlaneQueryType__Delta                                                  = 1
};

