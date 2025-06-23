
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

class AAbstractNavData;
class ANavMeshBoundsVolume;
class ANavModifierVolume;
class ANavSystemConfigOverride;
class ANavigationData;
class ANavigationGraph;
class ANavigationGraphNode;
class ANavigationTestingActor;
class ARecastNavMesh;
class UCrowdManagerBase;
class UNavArea;
class UNavAreaMeta;
class UNavAreaMeta_SwitchByAgent;
class UNavArea_Default;
class UNavArea_LowHeight;
class UNavArea_Null;
class UNavArea_Obstacle;
class UNavCollision;
class UNavLinkComponent;
class UNavLinkCustomComponent;
class UNavLinkCustomInterface;
class UNavLinkHostInterface;
class UNavLinkRenderingComponent;
class UNavLinkTrivial;
class UNavMeshRenderingComponent;
class UNavModifierComponent;
class UNavNodeInterface;
class UNavRelevantComponent;
class UNavTestRenderingComponent;
class UNavigationGraphNodeComponent;
class UNavigationInvokerComponent;
class UNavigationPath;
class UNavigationPathGenerator;
class UNavigationQueryFilter;
class UNavigationSystemModuleConfig;
class UNavigationSystemV1;
class URecastFilter_UseDefaultArea;
class URecastNavMeshDataChunk;

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x01 (1 bytes)
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x01 (1 bytes)
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x01 (1 bytes)
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x01 (1 bytes)
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2
};

#pragma pack(pop)


static_assert(sizeof(UNavRelevantComponent) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UNavModifierComponent) == 0x0140); // 320 bytes (0x0000E0 - 0x000140)
static_assert(sizeof(FSupportedAreaData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ANavigationData) == 0x0428); // 1064 bytes (0x000220 - 0x000428)
static_assert(sizeof(AAbstractNavData) == 0x0428); // 1064 bytes (0x000428 - 0x000428)
static_assert(sizeof(UCrowdManagerBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavArea) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UNavArea_Default) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_LowHeight) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Null) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Obstacle) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavAreaMeta) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavAreaMeta_SwitchByAgent) == 0x00C8); // 200 bytes (0x000048 - 0x0000C8)
static_assert(sizeof(FNavCollisionCylinder) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNavCollisionBox) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNavCollision) == 0x00D8); // 216 bytes (0x000070 - 0x0000D8)
static_assert(sizeof(ANavigationGraph) == 0x0428); // 1064 bytes (0x000428 - 0x000428)
static_assert(sizeof(ANavigationGraphNode) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(FNavGraphNode) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNavigationGraphNodeComponent) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(UNavigationInvokerComponent) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UNavigationPath) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UNavigationPathGenerator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNavigationFilterArea) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavigationFilterFlags) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UNavigationQueryFilter) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UNavigationSystemV1) == 0x15E0); // 5600 bytes (0x000028 - 0x0015E0)
static_assert(sizeof(UNavigationSystemModuleConfig) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(ANavigationTestingActor) == 0x0310); // 784 bytes (0x000220 - 0x000310)
static_assert(sizeof(UNavLinkComponent) == 0x0480); // 1152 bytes (0x000468 - 0x000480)
static_assert(sizeof(UNavLinkCustomComponent) == 0x0190); // 400 bytes (0x0000E0 - 0x000190)
static_assert(sizeof(UNavLinkCustomInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavLinkHostInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavLinkRenderingComponent) == 0x0470); // 1136 bytes (0x000468 - 0x000470)
static_assert(sizeof(UNavLinkTrivial) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(ANavMeshBoundsVolume) == 0x0260); // 608 bytes (0x000258 - 0x000260)
static_assert(sizeof(UNavMeshRenderingComponent) == 0x0480); // 1152 bytes (0x000468 - 0x000480)
static_assert(sizeof(ANavModifierVolume) == 0x0270); // 624 bytes (0x000258 - 0x000270)
static_assert(sizeof(UNavNodeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANavSystemConfigOverride) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UNavTestRenderingComponent) == 0x0470); // 1136 bytes (0x000468 - 0x000470)
static_assert(sizeof(URecastFilter_UseDefaultArea) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(ARecastNavMesh) == 0x04D8); // 1240 bytes (0x000428 - 0x0004D8)
static_assert(sizeof(URecastNavMeshDataChunk) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FNavGraphEdge) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavLinkCustomInstanceData) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FRecastNavMeshGenerationProperties) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(UNavRelevantComponent, CachedNavParent) == 0x00D8);
static_assert(offsetof(UNavModifierComponent, AreaClass) == 0x00E0);
static_assert(offsetof(UNavModifierComponent, FailsafeExtent) == 0x00E8);
static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0x0000);
static_assert(offsetof(FSupportedAreaData, AreaClass) == 0x0018);
static_assert(offsetof(ANavigationData, RenderingComp) == 0x0228);
static_assert(offsetof(ANavigationData, NavDataConfig) == 0x0230);
static_assert(offsetof(ANavigationData, RuntimeGeneration) == 0x02AC);
static_assert(offsetof(ANavigationData, SupportedAreas) == 0x03C0);
static_assert(offsetof(UNavArea, DrawColor) == 0x0038);
static_assert(offsetof(UNavArea, SupportedAgents) == 0x003C);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent0Area) == 0x0048);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent1Area) == 0x0050);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent2Area) == 0x0058);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent3Area) == 0x0060);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent4Area) == 0x0068);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent5Area) == 0x0070);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent6Area) == 0x0078);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent7Area) == 0x0080);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent8Area) == 0x0088);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent9Area) == 0x0090);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent10Area) == 0x0098);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent11Area) == 0x00A0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent12Area) == 0x00A8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent13Area) == 0x00B0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent14Area) == 0x00B8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent15Area) == 0x00C0);
static_assert(offsetof(FNavCollisionCylinder, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Extent) == 0x000C);
static_assert(offsetof(UNavCollision, CylinderCollision) == 0x0080);
static_assert(offsetof(UNavCollision, BoxCollision) == 0x0090);
static_assert(offsetof(UNavCollision, AreaClass) == 0x00A0);
static_assert(offsetof(FNavGraphNode, Owner) == 0x0000);
static_assert(offsetof(UNavigationGraphNodeComponent, Node) == 0x01F8);
static_assert(offsetof(UNavigationGraphNodeComponent, NextNodeComponent) == 0x0210);
static_assert(offsetof(UNavigationGraphNodeComponent, PrevNodeComponent) == 0x0218);
static_assert(offsetof(UNavigationPath, PathPoints) == 0x0038);
static_assert(offsetof(UNavigationPath, RecalculateOnInvalidation) == 0x0048);
static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0x0000);
static_assert(offsetof(UNavigationQueryFilter, Areas) == 0x0028);
static_assert(offsetof(UNavigationQueryFilter, IncludeFlags) == 0x0038);
static_assert(offsetof(UNavigationQueryFilter, ExcludeFlags) == 0x003C);
static_assert(offsetof(UNavigationSystemV1, MainNavData) == 0x0028);
static_assert(offsetof(UNavigationSystemV1, AbstractNavData) == 0x0030);
static_assert(offsetof(UNavigationSystemV1, DefaultAgentName) == 0x0038);
static_assert(offsetof(UNavigationSystemV1, CrowdManagerClass) == 0x0040);
static_assert(offsetof(UNavigationSystemV1, DataGatheringMode) == 0x0070);
static_assert(offsetof(UNavigationSystemV1, SupportedAgents) == 0x0078);
static_assert(offsetof(UNavigationSystemV1, SupportedAgentsMask) == 0x0088);
static_assert(offsetof(UNavigationSystemV1, NavDataSet) == 0x0090);
static_assert(offsetof(UNavigationSystemV1, NavDataRegistrationQueue) == 0x00A0);
static_assert(offsetof(UNavigationSystemV1, OperationMode) == 0x01BC);
static_assert(offsetof(ANavigationTestingActor, CapsuleComponent) == 0x0230);
static_assert(offsetof(ANavigationTestingActor, InvokerComponent) == 0x0238);
static_assert(offsetof(ANavigationTestingActor, NavAgentProps) == 0x0248);
static_assert(offsetof(ANavigationTestingActor, QueryingExtent) == 0x0278);
static_assert(offsetof(ANavigationTestingActor, MyNavData) == 0x0288);
static_assert(offsetof(ANavigationTestingActor, ProjectedLocation) == 0x0290);
static_assert(offsetof(ANavigationTestingActor, CostDisplayMode) == 0x02AC);
static_assert(offsetof(ANavigationTestingActor, TextCanvasOffset) == 0x02B0);
static_assert(offsetof(ANavigationTestingActor, OtherActor) == 0x02C8);
static_assert(offsetof(ANavigationTestingActor, FilterClass) == 0x02D0);
static_assert(offsetof(UNavLinkComponent, Links) == 0x0470);
static_assert(offsetof(UNavLinkCustomComponent, EnabledAreaClass) == 0x00F0);
static_assert(offsetof(UNavLinkCustomComponent, DisabledAreaClass) == 0x00F8);
static_assert(offsetof(UNavLinkCustomComponent, SupportedAgents) == 0x0100);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeStart) == 0x0104);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeEnd) == 0x0110);
static_assert(offsetof(UNavLinkCustomComponent, LinkDirection) == 0x011C);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleOffset) == 0x0124);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleExtent) == 0x0130);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleAreaClass) == 0x0140);
static_assert(offsetof(UNavLinkCustomComponent, BroadcastChannel) == 0x0150);
static_assert(offsetof(ANavMeshBoundsVolume, SupportedAgents) == 0x0258);
static_assert(offsetof(ANavModifierVolume, AreaClass) == 0x0260);
static_assert(offsetof(ANavSystemConfigOverride, NavigationSystemConfig) == 0x0220);
static_assert(offsetof(ANavSystemConfigOverride, OverridePolicy) == 0x0228);
static_assert(offsetof(ARecastNavMesh, NavMeshOriginOffset) == 0x0474);
static_assert(offsetof(ARecastNavMesh, RegionPartitioning) == 0x048C);
static_assert(offsetof(ARecastNavMesh, LayerPartitioning) == 0x048D);
static_assert(offsetof(FRecastNavMeshGenerationProperties, RegionPartitioning) == 0x0030);
static_assert(offsetof(FRecastNavMeshGenerationProperties, LayerPartitioning) == 0x0031);
