
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "Chaos.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AChaosSolverActor;
class UChaosDebugDrawComponent;
class UChaosEventListenerComponent;
class UChaosGameplayEventDispatcher;
class UChaosNotifyHandlerInterface;
class UChaosSolver;
class UChaosSolverEngineBlueprintLibrary;
class UChaosSolverSettings;

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x01 (1 bytes)
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit                                  = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation                          = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation     = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay      = 3,
	EClusterConnectionTypeEnum__Chaos_None                                           = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max                 = 5
};

#pragma pack(pop)


static_assert(sizeof(UChaosDebugDrawComponent) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UChaosEventListenerComponent) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(FChaosHandlerSet) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FBreakEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UChaosGameplayEventDispatcher) == 0x0270); // 624 bytes (0x0000B8 - 0x000270)
static_assert(sizeof(UChaosNotifyHandlerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosSolverEngineBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosSolver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FChaosDebugSubstepControl) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(AChaosSolverActor) == 0x0318); // 792 bytes (0x000220 - 0x000318)
static_assert(sizeof(UChaosSolverSettings) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(FChaosPhysicsCollisionInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FChaosBreakEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(UChaosGameplayEventDispatcher, CollisionEventRegistrations) == 0x01C8);
static_assert(offsetof(UChaosGameplayEventDispatcher, BreakEventRegistrations) == 0x0218);
static_assert(offsetof(AChaosSolverActor, Properties) == 0x0220);
static_assert(offsetof(AChaosSolverActor, ClusterUnionConnectionType) == 0x029C);
static_assert(offsetof(AChaosSolverActor, CollisionFilterSettings) == 0x02A0);
static_assert(offsetof(AChaosSolverActor, BreakingFilterSettings) == 0x02B4);
static_assert(offsetof(AChaosSolverActor, TrailingFilterSettings) == 0x02C8);
static_assert(offsetof(AChaosSolverActor, ChaosDebugSubstepControl) == 0x02E4);
static_assert(offsetof(AChaosSolverActor, SpriteComponent) == 0x02E8);
static_assert(offsetof(AChaosSolverActor, GameplayEventDispatcherComponent) == 0x0308);
static_assert(offsetof(UChaosSolverSettings, DefaultChaosSolverActorClass) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Component) == 0x0000);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherComponent) == 0x0008);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Location) == 0x0010);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Normal) == 0x001C);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AccumulatedImpulse) == 0x0028);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Velocity) == 0x0034);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherVelocity) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AngularVelocity) == 0x004C);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherAngularVelocity) == 0x0058);
static_assert(offsetof(FChaosBreakEvent, Component) == 0x0000);
static_assert(offsetof(FChaosBreakEvent, Location) == 0x0008);
static_assert(offsetof(FChaosBreakEvent, Velocity) == 0x0014);
static_assert(offsetof(FChaosBreakEvent, AngularVelocity) == 0x0020);
