
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/PatrolRuntime.PatrolMonsterLimitVolumeBase
/// Size: 0x0000 (0x000220 - 0x000220)
class APatrolMonsterLimitVolumeBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Class /Script/PatrolRuntime.PatrolObjectBase
/// Size: 0x0008 (0x000220 - 0x000228)
class APatrolObjectBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
};

/// Struct /Script/PatrolRuntime.PatrolRoutePointSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FPatrolRoutePointSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      IsBornPoint                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   MonsterID                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      IsMonsterRotate                                             OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(class APatrolMonsterLimitVolumeBase*)      MonsterLimitVolume                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      IsFollowGround                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/PatrolRuntime.PatrolPointLink
/// Size: 0x0010 (0x000000 - 0x000010)
class FPatrolPointLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class APatrolRoutePoint*)                  PatrolPoint                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EPatrolDirection)                          RealDirection                                               OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Class /Script/PatrolRuntime.PatrolRoutePoint
/// Size: 0x0078 (0x000228 - 0x0002A0)
class APatrolRoutePoint : public APatrolObjectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FPatrolRoutePointSettings)                 PatrolRoutePointSettings                                    OFFSET(getStruct<T>, {0x228, 32, 0, 0})
	CMember(TArray<FPatrolPointLink>)                  PatrolPointLinks                                            OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(TArray<FPatrolPointLink>)                  BackwardPatrolPointLinks                                    OFFSET(get<T>, {0x258, 16, 0, 0})
	CMember(TArray<FPatrolPointLink>)                  CachedPatrolPointLinks                                      OFFSET(get<T>, {0x268, 16, 0, 0})
	CMember(class UArrowComponent*)                    ArrowComponent                                              OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UBillboardComponent*)                BillboardComponent                                          OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class AActor*)                             groundActor                                                 OFFSET(get<T>, {0x288, 8, 0, 0})
	SMember(FVector)                                   GroundOffset                                                OFFSET(getStruct<T>, {0x290, 12, 0, 0})


	/// Functions
	// Function /Script/PatrolRuntime.PatrolRoutePoint.GetPatrolPointSettings
	// FPatrolRoutePointSettings GetPatrolPointSettings();                                                                      // [0xc4aac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PatrolRuntime.PatrolRoutePoint.GetNextPatrolRoutePoints
	// TArray<APatrolRoutePoint*> GetNextPatrolRoutePoints();                                                                   // [0xc4aa40] Final|Native|Public|BlueprintCallable 
	// Function /Script/PatrolRuntime.PatrolRoutePoint.GetNextPatrolPointLinks
	// TArray<FPatrolPointLink> GetNextPatrolPointLinks();                                                                      // [0xc4aa00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PatrolRuntime.PatrolRoutePoint.GetMonsterRotation
	// FRotator GetMonsterRotation();                                                                                           // [0xc4a9c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PatrolRuntime.PatrolRoutePoint.GetBackWardPatrolRoutePoints
	// TArray<APatrolRoutePoint*> GetBackWardPatrolRoutePoints();                                                               // [0xc4a900] Final|Native|Public|BlueprintCallable 
	// Function /Script/PatrolRuntime.PatrolRoutePoint.GetBackwardPatrolPointLinks
	// TArray<FPatrolPointLink> GetBackwardPatrolPointLinks();                                                                  // [0xc4a980] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/PatrolRuntime.PatrolPointPathData
/// Size: 0x0030 (0x000000 - 0x000030)
class FPatrolPointPathData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     VerticalOffset                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<class APatrolRoutePoint*>)  FirstPoint                                                  OFFSET(get<T>, {0x4, 8, 0, 0})
	SMember(FVector)                                   FirstPointPos                                               OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	CMember(TWeakObjectPtr<class APatrolRoutePoint*>)  SecondPoint                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FVector)                                   SecondPointPos                                              OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(bool)                                      bBidirectional                                              OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/PatrolRuntime.VisitedPath
/// Size: 0x0010 (0x000000 - 0x000010)
class FVisitedPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<class APatrolRoutePoint*>)  FirstPoint                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<class APatrolRoutePoint*>)  SecondPoint                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/PatrolRuntime.PatrolRouteVisualizer
/// Size: 0x0038 (0x000028 - 0x000060)
class UPatrolRouteVisualizer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FPatrolPointPathData>)              PatrolPointsPathData                                        OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FVisitedPath>)                      VisitedPaths                                                OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Enum /Script/PatrolRuntime.EPatrolDirection
/// Size: 0x04
enum class EPatrolDirection : uint8_t
{
	EPatrolDirection__Default                                                        = 0,
	EPatrolDirection__Bidirectional                                                  = 1,
	EPatrolDirection__Forward                                                        = 2,
	EPatrolDirection__Backward                                                       = 3
};

/// Enum /Script/PatrolRuntime.EPatrolPointType
/// Size: 0x04
enum class EPatrolPointType : uint8_t
{
	EPatrolPointType__Normal                                                         = 0,
	EPatrolPointType__BornPoint                                                      = 1,
	EPatrolPointType__StayIdle                                                       = 2,
	EPatrolPointType__StayAndPlayAction                                              = 3
};

