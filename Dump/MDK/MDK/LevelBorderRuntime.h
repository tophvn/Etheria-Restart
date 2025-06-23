
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/LevelBorderRuntime.LevelBorderPoint
/// Size: 0x0018 (0x000220 - 0x000238)
class ALevelBorderPoint : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(class UBillboardComponent*)                BillboardComponent                                          OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UArrowComponent*)                    ArrowComponent                                              OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class AActor*)                             groundActor                                                 OFFSET(get<T>, {0x230, 8, 0, 0})
};

/// Class /Script/LevelBorderRuntime.LevelBorderRouteVisualizer
/// Size: 0x0030 (0x000028 - 0x000058)
class ULevelBorderRouteVisualizer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<class ALevelBorderPoint*>)          LevelBorderPointsPathData                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/LevelBorderRuntime.Vec2d
/// Size: 0x0008 (0x000000 - 0x000008)
class FVec2d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

