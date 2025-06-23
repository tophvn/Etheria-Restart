
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UNavRelevantComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bAttachToOwnersRoot                                         OFFSET(get<bool>, {0xD4, 1, 1, 0})
	CMember(class UObject*)                            CachedNavParent                                             OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	// void SetNavigationRelevancy(bool bRelevant);                                                                             // [0x3528160] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x0060 (0x0000E0 - 0x000140)
class UNavModifierComponent : public UNavRelevantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FVector)                                   FailsafeExtent                                              OFFSET(getStruct<T>, {0xE8, 12, 0, 0})
	DMember(bool)                                      bIncludeAgentHeight                                         OFFSET(get<bool>, {0xF4, 1, 1, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x35280d0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSupportedAreaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   AreaClassName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   AreaID                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0208 (0x000220 - 0x000428)
class ANavigationData : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(class UPrimitiveComponent*)                RenderingComp                                               OFFSET(get<T>, {0x228, 8, 0, 0})
	SMember(FNavDataConfig)                            NavDataConfig                                               OFFSET(getStruct<T>, {0x230, 120, 0, 0})
	DMember(bool)                                      bEnableDrawing                                              OFFSET(get<bool>, {0x2A8, 1, 1, 0})
	DMember(bool)                                      bForceRebuildOnLoad                                         OFFSET(get<bool>, {0x2A8, 1, 1, 1})
	DMember(bool)                                      bAutoDestroyWhenNoNavigation                                OFFSET(get<bool>, {0x2A8, 1, 1, 2})
	DMember(bool)                                      bCanBeMainNavData                                           OFFSET(get<bool>, {0x2A8, 1, 1, 3})
	DMember(bool)                                      bCanSpawnOnRebuild                                          OFFSET(get<bool>, {0x2A8, 1, 1, 4})
	DMember(bool)                                      bRebuildAtRuntime                                           OFFSET(get<bool>, {0x2A8, 1, 1, 5})
	CMember(ERuntimeGenerationType)                    RuntimeGeneration                                           OFFSET(get<T>, {0x2AC, 1, 0, 0})
	DMember(float)                                     ObservedPathsTickInterval                                   OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(uint32_t)                                  DataVersion                                                 OFFSET(get<uint32_t>, {0x2B4, 4, 0, 0})
	CMember(TArray<FSupportedAreaData>)                SupportedAreas                                              OFFSET(get<T>, {0x3C0, 16, 0, 0})
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0000 (0x000428 - 0x000428)
class AAbstractNavData : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdManagerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0018 (0x000030 - 0x000048)
class UNavArea : public UNavAreaBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     DefaultCost                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FixedAreaEnteringCost                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FColor)                                    DrawColor                                                   OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bSupportsAgent0                                             OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bSupportsAgent1                                             OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(bool)                                      bSupportsAgent2                                             OFFSET(get<bool>, {0x40, 1, 1, 2})
	DMember(bool)                                      bSupportsAgent3                                             OFFSET(get<bool>, {0x40, 1, 1, 3})
	DMember(bool)                                      bSupportsAgent4                                             OFFSET(get<bool>, {0x40, 1, 1, 4})
	DMember(bool)                                      bSupportsAgent5                                             OFFSET(get<bool>, {0x40, 1, 1, 5})
	DMember(bool)                                      bSupportsAgent6                                             OFFSET(get<bool>, {0x40, 1, 1, 6})
	DMember(bool)                                      bSupportsAgent7                                             OFFSET(get<bool>, {0x40, 1, 1, 7})
	DMember(bool)                                      bSupportsAgent8                                             OFFSET(get<bool>, {0x41, 1, 1, 0})
	DMember(bool)                                      bSupportsAgent9                                             OFFSET(get<bool>, {0x41, 1, 1, 1})
	DMember(bool)                                      bSupportsAgent10                                            OFFSET(get<bool>, {0x41, 1, 1, 2})
	DMember(bool)                                      bSupportsAgent11                                            OFFSET(get<bool>, {0x41, 1, 1, 3})
	DMember(bool)                                      bSupportsAgent12                                            OFFSET(get<bool>, {0x41, 1, 1, 4})
	DMember(bool)                                      bSupportsAgent13                                            OFFSET(get<bool>, {0x41, 1, 1, 5})
	DMember(bool)                                      bSupportsAgent14                                            OFFSET(get<bool>, {0x41, 1, 1, 6})
	DMember(bool)                                      bSupportsAgent15                                            OFFSET(get<bool>, {0x41, 1, 1, 7})
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Default : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_LowHeight : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Null : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Obstacle : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavAreaMeta : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UClass*)                             Agent0Area                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UClass*)                             Agent1Area                                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UClass*)                             Agent2Area                                                  OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UClass*)                             Agent3Area                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UClass*)                             Agent4Area                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UClass*)                             Agent5Area                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UClass*)                             Agent6Area                                                  OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UClass*)                             Agent7Area                                                  OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UClass*)                             Agent8Area                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UClass*)                             Agent9Area                                                  OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UClass*)                             Agent10Area                                                 OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class UClass*)                             Agent11Area                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UClass*)                             Agent12Area                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             Agent13Area                                                 OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             Agent14Area                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UClass*)                             Agent15Area                                                 OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0014 (0x000000 - 0x000014)
class FNavCollisionCylinder : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavCollisionBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UNavCollision : public UNavCollisionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FNavCollisionCylinder>)             CylinderCollision                                           OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FNavCollisionBox>)                  BoxCollision                                                OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bGatherConvexGeometry                                       OFFSET(get<bool>, {0xA8, 1, 1, 0})
	DMember(bool)                                      bCreateOnClient                                             OFFSET(get<bool>, {0xA8, 1, 1, 1})
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0000 (0x000428 - 0x000428)
class ANavigationGraph : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0000 (0x000220 - 0x000220)
class ANavigationGraphNode : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavGraphNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            Owner                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0028 (0x0001F8 - 0x000220)
class UNavigationGraphNodeComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FNavGraphNode)                             Node                                                        OFFSET(getStruct<T>, {0x1F8, 24, 0, 0})
	CMember(class UNavigationGraphNodeComponent*)      NextNodeComponent                                           OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(class UNavigationGraphNodeComponent*)      PrevNodeComponent                                           OFFSET(get<T>, {0x218, 8, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UNavigationInvokerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     TileGenerationRadius                                        OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     TileRemovalRadius                                           OFFSET(get<float>, {0xB4, 4, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0060 (0x000028 - 0x000088)
class UNavigationPath : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  PathUpdatedNotifier                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FVector>)                           PathPoints                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<ENavigationOptionFlag>)        RecalculateOnInvalidation                                   OFFSET(get<T>, {0x48, 1, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	// bool IsValid();                                                                                                          // [0x3525270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	// bool IsStringPulled();                                                                                                   // [0x1602ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	// bool IsPartial();                                                                                                        // [0x3525240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	// float GetPathLength();                                                                                                   // [0x3524b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	// float GetPathCost();                                                                                                     // [0x35248a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	// FString GetDebugString();                                                                                                // [0x3524790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	// void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                              // [0x3524330] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	// void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                              // [0x3524250] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavigationPathGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavigationFilterArea : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TravelCostOverride                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EnteringCostOverride                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIsExcluded                                                 OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bOverrideTravelCost                                         OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bOverrideEnteringCost                                       OFFSET(get<bool>, {0x10, 1, 1, 2})
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (0x000000 - 0x000004)
class FNavigationFilterFlags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bNavFlag0                                                   OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bNavFlag1                                                   OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bNavFlag2                                                   OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bNavFlag3                                                   OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      bNavFlag4                                                   OFFSET(get<bool>, {0x0, 1, 1, 4})
	DMember(bool)                                      bNavFlag5                                                   OFFSET(get<bool>, {0x0, 1, 1, 5})
	DMember(bool)                                      bNavFlag6                                                   OFFSET(get<bool>, {0x0, 1, 1, 6})
	DMember(bool)                                      bNavFlag7                                                   OFFSET(get<bool>, {0x0, 1, 1, 7})
	DMember(bool)                                      bNavFlag8                                                   OFFSET(get<bool>, {0x1, 1, 1, 0})
	DMember(bool)                                      bNavFlag9                                                   OFFSET(get<bool>, {0x1, 1, 1, 1})
	DMember(bool)                                      bNavFlag10                                                  OFFSET(get<bool>, {0x1, 1, 1, 2})
	DMember(bool)                                      bNavFlag11                                                  OFFSET(get<bool>, {0x1, 1, 1, 3})
	DMember(bool)                                      bNavFlag12                                                  OFFSET(get<bool>, {0x1, 1, 1, 4})
	DMember(bool)                                      bNavFlag13                                                  OFFSET(get<bool>, {0x1, 1, 1, 5})
	DMember(bool)                                      bNavFlag14                                                  OFFSET(get<bool>, {0x1, 1, 1, 6})
	DMember(bool)                                      bNavFlag15                                                  OFFSET(get<bool>, {0x1, 1, 1, 7})
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0020 (0x000028 - 0x000048)
class UNavigationQueryFilter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FNavigationFilterArea>)             Areas                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FNavigationFilterFlags)                    IncludeFlags                                                OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FNavigationFilterFlags)                    ExcludeFlags                                                OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x15B8 (0x000028 - 0x0015E0)
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	CMember(class ANavigationData*)                    MainNavData                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class ANavigationData*)                    AbstractNavData                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     DefaultAgentName                                            OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             CrowdManagerClass                                           OFFSET(get<T>, {0x40, 40, 0, 0})
	DMember(bool)                                      bAutoCreateNavigationData                                   OFFSET(get<bool>, {0x68, 1, 1, 0})
	DMember(bool)                                      bSpawnNavDataInNavBoundsLevel                               OFFSET(get<bool>, {0x68, 1, 1, 1})
	DMember(bool)                                      bAllowClientSideNavigation                                  OFFSET(get<bool>, {0x68, 1, 1, 2})
	DMember(bool)                                      bShouldDiscardSubLevelNavData                               OFFSET(get<bool>, {0x68, 1, 1, 3})
	DMember(bool)                                      bTickWhilePaused                                            OFFSET(get<bool>, {0x68, 1, 1, 4})
	DMember(bool)                                      bSupportRebuilding                                          OFFSET(get<bool>, {0x68, 1, 1, 5})
	DMember(bool)                                      bInitialBuildingLocked                                      OFFSET(get<bool>, {0x68, 1, 1, 6})
	DMember(bool)                                      bSkipAgentHeightCheckWhenPickingNavData                     OFFSET(get<bool>, {0x69, 1, 1, 0})
	DMember(bool)                                      bGenerateNavigationOnlyAroundNavigationInvokers             OFFSET(get<bool>, {0x69, 1, 1, 1})
	DMember(float)                                     ActiveTilesUpdateInterval                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	CMember(ENavDataGatheringModeConfig)               DataGatheringMode                                           OFFSET(get<T>, {0x70, 1, 0, 0})
	DMember(float)                                     DirtyAreaWarningSizeThreshold                               OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(TArray<FNavDataConfig>)                    SupportedAgents                                             OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgentsMask                                         OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	CMember(TArray<class ANavigationData*>)            NavDataSet                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<class ANavigationData*>)            NavDataRegistrationQueue                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNavDataRegisteredEvent                                    OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNavigationGenerationFinishedDelegate                      OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FNavigationSystemRunMode)                  OperationMode                                               OFFSET(getStruct<T>, {0x1BC, 1, 0, 0})
	DMember(float)                                     DirtyAreasUpdateFreq                                        OFFSET(get<float>, {0x15BC, 4, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	// void UnregisterNavigationInvoker(class AActor* Invoker);                                                                 // [0x35261a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	// void SimpleMoveToLocation(class AController* Controller, FVector& Goal);                                                 // [0x35260e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	// void SimpleMoveToActor(class AController* Controller, class AActor* Goal);                                               // [0x3416050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	// void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                                 // [0x3526050] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	// void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);                                                      // [0x3525fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	// void ResetMaxSimultaneousTileGenerationJobsCount();                                                                      // [0x3525fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	// void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);              // [0x3525ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	// FVector ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x3525cb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	// void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);                                                   // [0x3525c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	// bool NavigationRaycast(class UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, class UClass* FilterClass, class AController* Querier); // [0x35259f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	// bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);                    // [0x35258e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	// bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x35256e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	// bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x35254c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	// bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x35252a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	// bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x35252a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	// bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);                                                  // [0x35251b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	// bool IsNavigationBeingBuilt(class UObject* WorldContextObject);                                                          // [0x3525120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	// FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x3524f40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	// FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x3524d60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	// TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathLength, class ANavigationData* NavData, class UClass* FilterClass); // [0x3524b30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	// TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathCost, class ANavigationData* NavData, class UClass* FilterClass); // [0x35248d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	// class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);                                       // [0x3524810] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	// class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass); // [0x35245c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	// class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass); // [0x35243b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0008 (0x000050 - 0x000058)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bStrictlyStatic                                             OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bCreateOnClient                                             OFFSET(get<bool>, {0x50, 1, 1, 1})
	DMember(bool)                                      bAutoSpawnMissingNavData                                    OFFSET(get<bool>, {0x50, 1, 1, 2})
	DMember(bool)                                      bSpawnNavDataInNavBoundsLevel                               OFFSET(get<bool>, {0x50, 1, 1, 3})
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x00F0 (0x000220 - 0x000310)
class ANavigationTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UCapsuleComponent*)                  CapsuleComponent                                            OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UNavigationInvokerComponent*)        InvokerComponent                                            OFFSET(get<T>, {0x238, 8, 0, 0})
	DMember(bool)                                      bActAsNavigationInvoker                                     OFFSET(get<bool>, {0x240, 1, 1, 0})
	SMember(FNavAgentProperties)                       NavAgentProps                                               OFFSET(getStruct<T>, {0x248, 48, 0, 0})
	SMember(FVector)                                   QueryingExtent                                              OFFSET(getStruct<T>, {0x278, 12, 0, 0})
	CMember(class ANavigationData*)                    MyNavData                                                   OFFSET(get<T>, {0x288, 8, 0, 0})
	SMember(FVector)                                   ProjectedLocation                                           OFFSET(getStruct<T>, {0x290, 12, 0, 0})
	DMember(bool)                                      bProjectedLocationValid                                     OFFSET(get<bool>, {0x29C, 1, 1, 0})
	DMember(bool)                                      bSearchStart                                                OFFSET(get<bool>, {0x29C, 1, 1, 1})
	DMember(float)                                     CostLimitFactor                                             OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     MinimumCostLimit                                            OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(bool)                                      bBacktracking                                               OFFSET(get<bool>, {0x2A8, 1, 1, 0})
	DMember(bool)                                      bUseHierarchicalPathfinding                                 OFFSET(get<bool>, {0x2A8, 1, 1, 1})
	DMember(bool)                                      bGatherDetailedInfo                                         OFFSET(get<bool>, {0x2A8, 1, 1, 2})
	DMember(bool)                                      bDrawDistanceToWall                                         OFFSET(get<bool>, {0x2A8, 1, 1, 3})
	DMember(bool)                                      bShowNodePool                                               OFFSET(get<bool>, {0x2A8, 1, 1, 4})
	DMember(bool)                                      bShowBestPath                                               OFFSET(get<bool>, {0x2A8, 1, 1, 5})
	DMember(bool)                                      bShowDiffWithPreviousStep                                   OFFSET(get<bool>, {0x2A8, 1, 1, 6})
	DMember(bool)                                      bShouldBeVisibleInGame                                      OFFSET(get<bool>, {0x2A8, 1, 1, 7})
	CMember(TEnumAsByte<ENavCostDisplay>)              CostDisplayMode                                             OFFSET(get<T>, {0x2AC, 1, 0, 0})
	SMember(FVector2D)                                 TextCanvasOffset                                            OFFSET(getStruct<T>, {0x2B0, 8, 0, 0})
	DMember(bool)                                      bPathExist                                                  OFFSET(get<bool>, {0x2B8, 1, 1, 0})
	DMember(bool)                                      bPathIsPartial                                              OFFSET(get<bool>, {0x2B8, 1, 1, 1})
	DMember(bool)                                      bPathSearchOutOfNodes                                       OFFSET(get<bool>, {0x2B8, 1, 1, 2})
	DMember(float)                                     PathfindingTime                                             OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(float)                                     PathCost                                                    OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(int32_t)                                   PathfindingSteps                                            OFFSET(get<int32_t>, {0x2C4, 4, 0, 0})
	CMember(class ANavigationTestingActor*)            OtherActor                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(int32_t)                                   ShowStepIndex                                               OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	DMember(float)                                     OffsetFromCornersDistance                                   OFFSET(get<float>, {0x2DC, 4, 0, 0})
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0018 (0x000468 - 0x000480)
class UNavLinkComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(TArray<FNavigationLink>)                   Links                                                       OFFSET(get<T>, {0x470, 16, 0, 0})
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x00B0 (0x0000E0 - 0x000190)
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(uint32_t)                                  NavLinkUserId                                               OFFSET(get<uint32_t>, {0xE8, 4, 0, 0})
	CMember(class UClass*)                             EnabledAreaClass                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UClass*)                             DisabledAreaClass                                           OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	SMember(FVector)                                   LinkRelativeStart                                           OFFSET(getStruct<T>, {0x104, 12, 0, 0})
	SMember(FVector)                                   LinkRelativeEnd                                             OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	CMember(TEnumAsByte<ENavLinkDirection>)            LinkDirection                                               OFFSET(get<T>, {0x11C, 1, 0, 0})
	DMember(bool)                                      bLinkEnabled                                                OFFSET(get<bool>, {0x120, 1, 1, 0})
	DMember(bool)                                      bNotifyWhenEnabled                                          OFFSET(get<bool>, {0x120, 1, 1, 1})
	DMember(bool)                                      bNotifyWhenDisabled                                         OFFSET(get<bool>, {0x120, 1, 1, 2})
	DMember(bool)                                      bCreateBoxObstacle                                          OFFSET(get<bool>, {0x120, 1, 1, 3})
	SMember(FVector)                                   ObstacleOffset                                              OFFSET(getStruct<T>, {0x124, 12, 0, 0})
	SMember(FVector)                                   ObstacleExtent                                              OFFSET(getStruct<T>, {0x130, 12, 0, 0})
	CMember(class UClass*)                             ObstacleAreaClass                                           OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(float)                                     BroadcastRadius                                             OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     BroadcastInterval                                           OFFSET(get<float>, {0x14C, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            BroadcastChannel                                            OFFSET(get<T>, {0x150, 1, 0, 0})
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkCustomInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkHostInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0008 (0x000468 - 0x000470)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavLinkTrivial : public UNavLinkDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0008 (0x000258 - 0x000260)
class ANavMeshBoundsVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0x258, 4, 0, 0})
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0018 (0x000468 - 0x000480)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0018 (0x000258 - 0x000270)
class ANavModifierVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0x260, 8, 0, 0})
	DMember(bool)                                      bMaskFillCollisionUnderneathForNavmesh                      OFFSET(get<bool>, {0x268, 1, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x3528040] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavNodeInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0010 (0x000220 - 0x000230)
class ANavSystemConfigOverride : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UNavigationSystemConfig*)            NavigationSystemConfig                                      OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(ENavSystemOverridePolicy)                  OverridePolicy                                              OFFSET(get<T>, {0x228, 1, 0, 0})
	DMember(bool)                                      bLoadOnClient                                               OFFSET(get<bool>, {0x229, 1, 1, 0})
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0008 (0x000468 - 0x000470)
class UNavTestRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0000 (0x000048 - 0x000048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x00B0 (0x000428 - 0x0004D8)
class ARecastNavMesh : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	DMember(bool)                                      bDrawTriangleEdges                                          OFFSET(get<bool>, {0x428, 1, 1, 0})
	DMember(bool)                                      bDrawPolyEdges                                              OFFSET(get<bool>, {0x428, 1, 1, 1})
	DMember(bool)                                      bDrawFilledPolys                                            OFFSET(get<bool>, {0x428, 1, 1, 2})
	DMember(bool)                                      bDrawNavMeshEdges                                           OFFSET(get<bool>, {0x428, 1, 1, 3})
	DMember(bool)                                      bDrawTileBounds                                             OFFSET(get<bool>, {0x428, 1, 1, 4})
	DMember(bool)                                      bDrawPathCollidingGeometry                                  OFFSET(get<bool>, {0x428, 1, 1, 5})
	DMember(bool)                                      bDrawTileLabels                                             OFFSET(get<bool>, {0x428, 1, 1, 6})
	DMember(bool)                                      bDrawPolygonLabels                                          OFFSET(get<bool>, {0x428, 1, 1, 7})
	DMember(bool)                                      bDrawDefaultPolygonCost                                     OFFSET(get<bool>, {0x429, 1, 1, 0})
	DMember(bool)                                      bDrawLabelsOnPathNodes                                      OFFSET(get<bool>, {0x429, 1, 1, 1})
	DMember(bool)                                      bDrawNavLinks                                               OFFSET(get<bool>, {0x429, 1, 1, 2})
	DMember(bool)                                      bDrawFailedNavLinks                                         OFFSET(get<bool>, {0x429, 1, 1, 3})
	DMember(bool)                                      bDrawClusters                                               OFFSET(get<bool>, {0x429, 1, 1, 4})
	DMember(bool)                                      bDrawOctree                                                 OFFSET(get<bool>, {0x429, 1, 1, 5})
	DMember(bool)                                      bDrawOctreeDetails                                          OFFSET(get<bool>, {0x429, 1, 1, 6})
	DMember(bool)                                      bDrawMarkedForbiddenPolys                                   OFFSET(get<bool>, {0x429, 1, 1, 7})
	DMember(bool)                                      bDistinctlyDrawTilesBeingBuilt                              OFFSET(get<bool>, {0x42A, 1, 1, 0})
	DMember(float)                                     DrawOffset                                                  OFFSET(get<float>, {0x42C, 4, 0, 0})
	DMember(bool)                                      bFixedTilePoolSize                                          OFFSET(get<bool>, {0x430, 1, 1, 0})
	DMember(int32_t)                                   TilePoolSize                                                OFFSET(get<int32_t>, {0x434, 4, 0, 0})
	DMember(float)                                     TileSizeUU                                                  OFFSET(get<float>, {0x438, 4, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0x43C, 4, 0, 0})
	DMember(float)                                     CellHeight                                                  OFFSET(get<float>, {0x440, 4, 0, 0})
	DMember(float)                                     AgentRadius                                                 OFFSET(get<float>, {0x444, 4, 0, 0})
	DMember(float)                                     AgentHeight                                                 OFFSET(get<float>, {0x448, 4, 0, 0})
	DMember(float)                                     AgentMaxSlope                                               OFFSET(get<float>, {0x44C, 4, 0, 0})
	DMember(float)                                     AgentMaxStepHeight                                          OFFSET(get<float>, {0x450, 4, 0, 0})
	DMember(float)                                     MinRegionArea                                               OFFSET(get<float>, {0x454, 4, 0, 0})
	DMember(float)                                     MergeRegionSize                                             OFFSET(get<float>, {0x458, 4, 0, 0})
	DMember(float)                                     MaxSimplificationError                                      OFFSET(get<float>, {0x45C, 4, 0, 0})
	DMember(int32_t)                                   MaxSimultaneousTileGenerationJobsCount                      OFFSET(get<int32_t>, {0x460, 4, 0, 0})
	DMember(int32_t)                                   TileNumberHardLimit                                         OFFSET(get<int32_t>, {0x464, 4, 0, 0})
	DMember(int32_t)                                   PolyRefTileBits                                             OFFSET(get<int32_t>, {0x468, 4, 0, 0})
	DMember(int32_t)                                   PolyRefNavPolyBits                                          OFFSET(get<int32_t>, {0x46C, 4, 0, 0})
	DMember(int32_t)                                   PolyRefSaltBits                                             OFFSET(get<int32_t>, {0x470, 4, 0, 0})
	SMember(FVector)                                   NavMeshOriginOffset                                         OFFSET(getStruct<T>, {0x474, 12, 0, 0})
	DMember(float)                                     DefaultDrawDistance                                         OFFSET(get<float>, {0x480, 4, 0, 0})
	DMember(float)                                     DefaultMaxSearchNodes                                       OFFSET(get<float>, {0x484, 4, 0, 0})
	DMember(float)                                     DefaultMaxHierarchicalSearchNodes                           OFFSET(get<float>, {0x488, 4, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          RegionPartitioning                                          OFFSET(get<T>, {0x48C, 1, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          LayerPartitioning                                           OFFSET(get<T>, {0x48D, 1, 0, 0})
	DMember(int32_t)                                   RegionChunkSplits                                           OFFSET(get<int32_t>, {0x490, 4, 0, 0})
	DMember(int32_t)                                   LayerChunkSplits                                            OFFSET(get<int32_t>, {0x494, 4, 0, 0})
	DMember(bool)                                      bSortNavigationAreasByCost                                  OFFSET(get<bool>, {0x498, 1, 1, 0})
	DMember(bool)                                      bPerformVoxelFiltering                                      OFFSET(get<bool>, {0x498, 1, 1, 1})
	DMember(bool)                                      bMarkLowHeightAreas                                         OFFSET(get<bool>, {0x498, 1, 1, 2})
	DMember(bool)                                      bUseExtraTopCellWhenMarkingAreas                            OFFSET(get<bool>, {0x498, 1, 1, 3})
	DMember(bool)                                      bFilterLowSpanSequences                                     OFFSET(get<bool>, {0x498, 1, 1, 4})
	DMember(bool)                                      bFilterLowSpanFromTileCache                                 OFFSET(get<bool>, {0x498, 1, 1, 5})
	DMember(bool)                                      bDoFullyAsyncNavDataGathering                               OFFSET(get<bool>, {0x498, 1, 1, 6})
	DMember(bool)                                      bUseBetterOffsetsFromCorners                                OFFSET(get<bool>, {0x498, 1, 1, 7})
	DMember(bool)                                      bStoreEmptyTileLayers                                       OFFSET(get<bool>, {0x499, 1, 1, 0})
	DMember(bool)                                      bUseVirtualFilters                                          OFFSET(get<bool>, {0x499, 1, 1, 1})
	DMember(bool)                                      bAllowNavLinkAsPathEnd                                      OFFSET(get<bool>, {0x499, 1, 1, 2})
	DMember(bool)                                      bUseVoxelCache                                              OFFSET(get<bool>, {0x499, 1, 1, 3})
	DMember(float)                                     TileSetUpdateInterval                                       OFFSET(get<float>, {0x49C, 4, 0, 0})
	DMember(float)                                     HeuristicScale                                              OFFSET(get<float>, {0x4A0, 4, 0, 0})
	DMember(float)                                     VerticalDeviationFromGroundCompensation                     OFFSET(get<float>, {0x4A4, 4, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	// bool K2_ReplaceAreaInTileBounds(FBox Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);           // [0x3527ea0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0010 (0x000030 - 0x000040)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavGraphEdge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0008 (0x000068 - 0x000070)
class FNavLinkCustomInstanceData : public FActorComponentInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(uint32_t)                                  NavLinkUserId                                               OFFSET(get<uint32_t>, {0x68, 4, 0, 0})
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (0x000000 - 0x000040)
class FRecastNavMeshGenerationProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   TilePoolSize                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     TileSizeUU                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CellHeight                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AgentRadius                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AgentHeight                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AgentMaxSlope                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     AgentMaxStepHeight                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinRegionArea                                               OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MergeRegionSize                                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MaxSimplificationError                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   TileNumberHardLimit                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          RegionPartitioning                                          OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          LayerPartitioning                                           OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(int32_t)                                   RegionChunkSplits                                           OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   LayerChunkSplits                                            OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bSortNavigationAreasByCost                                  OFFSET(get<bool>, {0x3C, 1, 1, 0})
	DMember(bool)                                      bPerformVoxelFiltering                                      OFFSET(get<bool>, {0x3C, 1, 1, 1})
	DMember(bool)                                      bMarkLowHeightAreas                                         OFFSET(get<bool>, {0x3C, 1, 1, 2})
	DMember(bool)                                      bUseExtraTopCellWhenMarkingAreas                            OFFSET(get<bool>, {0x3C, 1, 1, 3})
	DMember(bool)                                      bFilterLowSpanSequences                                     OFFSET(get<bool>, {0x3C, 1, 1, 4})
	DMember(bool)                                      bFilterLowSpanFromTileCache                                 OFFSET(get<bool>, {0x3C, 1, 1, 5})
	DMember(bool)                                      bFixedTilePoolSize                                          OFFSET(get<bool>, {0x3C, 1, 1, 6})
};

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x04
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x03
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x03
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x03
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2
};

