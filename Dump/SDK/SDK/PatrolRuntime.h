
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class APatrolMonsterLimitVolumeBase;
class APatrolObjectBase;
class APatrolRoutePoint;
class UPatrolRouteVisualizer;

/// Enum /Script/PatrolRuntime.EPatrolDirection
/// Size: 0x01 (1 bytes)
enum class EPatrolDirection : uint8_t
{
	EPatrolDirection__Default                                                        = 0,
	EPatrolDirection__Bidirectional                                                  = 1,
	EPatrolDirection__Forward                                                        = 2,
	EPatrolDirection__Backward                                                       = 3
};

/// Enum /Script/PatrolRuntime.EPatrolPointType
/// Size: 0x01 (1 bytes)
enum class EPatrolPointType : uint8_t
{
	EPatrolPointType__Normal                                                         = 0,
	EPatrolPointType__BornPoint                                                      = 1,
	EPatrolPointType__StayIdle                                                       = 2,
	EPatrolPointType__StayAndPlayAction                                              = 3
};

#pragma pack(pop)


static_assert(sizeof(APatrolMonsterLimitVolumeBase) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(APatrolObjectBase) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(FPatrolRoutePointSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPatrolPointLink) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(APatrolRoutePoint) == 0x02A0); // 672 bytes (0x000228 - 0x0002A0)
static_assert(sizeof(FPatrolPointPathData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FVisitedPath) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPatrolRouteVisualizer) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(offsetof(FPatrolRoutePointSettings, MonsterLimitVolume) == 0x0010);
static_assert(offsetof(FPatrolPointLink, PatrolPoint) == 0x0000);
static_assert(offsetof(FPatrolPointLink, RealDirection) == 0x0008);
static_assert(offsetof(APatrolRoutePoint, PatrolRoutePointSettings) == 0x0228);
static_assert(offsetof(APatrolRoutePoint, PatrolPointLinks) == 0x0248);
static_assert(offsetof(APatrolRoutePoint, BackwardPatrolPointLinks) == 0x0258);
static_assert(offsetof(APatrolRoutePoint, CachedPatrolPointLinks) == 0x0268);
static_assert(offsetof(APatrolRoutePoint, ArrowComponent) == 0x0278);
static_assert(offsetof(APatrolRoutePoint, BillboardComponent) == 0x0280);
static_assert(offsetof(APatrolRoutePoint, groundActor) == 0x0288);
static_assert(offsetof(APatrolRoutePoint, GroundOffset) == 0x0290);
static_assert(offsetof(FPatrolPointPathData, FirstPoint) == 0x0004);
static_assert(offsetof(FPatrolPointPathData, FirstPointPos) == 0x000C);
static_assert(offsetof(FPatrolPointPathData, SecondPoint) == 0x0018);
static_assert(offsetof(FPatrolPointPathData, SecondPointPos) == 0x0020);
static_assert(offsetof(FVisitedPath, FirstPoint) == 0x0000);
static_assert(offsetof(FVisitedPath, SecondPoint) == 0x0008);
static_assert(offsetof(UPatrolRouteVisualizer, PatrolPointsPathData) == 0x0038);
static_assert(offsetof(UPatrolRouteVisualizer, VisitedPaths) == 0x0048);
