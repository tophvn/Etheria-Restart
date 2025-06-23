
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "GameplayTags.h"
#include "GameplayTasks.h"
#include "NavigationSystem.h"

#pragma pack(push, 0x1)

class AAIController;
class ADetourCrowdAIController;
class AEQSTestingPawn;
class AGridPathAIController;
class ANavLinkProxy;
class UAIAsyncTaskBlueprintProxy;
class UAIBlueprintHelperLibrary;
class UAIDataProvider;
class UAIDataProvider_QueryParams;
class UAIDataProvider_Random;
class UAIHotSpotManager;
class UAIPerceptionComponent;
class UAIPerceptionListenerInterface;
class UAIPerceptionStimuliSourceComponent;
class UAIPerceptionSystem;
class UAIResourceInterface;
class UAIResource_Logic;
class UAIResource_Movement;
class UAISense;
class UAISenseBlueprintListener;
class UAISenseConfig;
class UAISenseConfig_Blueprint;
class UAISenseConfig_Damage;
class UAISenseConfig_Hearing;
class UAISenseConfig_Prediction;
class UAISenseConfig_Sight;
class UAISenseConfig_Team;
class UAISenseConfig_Touch;
class UAISenseEvent;
class UAISenseEvent_Damage;
class UAISenseEvent_Hearing;
class UAISense_Blueprint;
class UAISense_Damage;
class UAISense_Hearing;
class UAISense_Prediction;
class UAISense_Sight;
class UAISense_Team;
class UAISense_Touch;
class UAISightTargetInterface;
class UAISubsystem;
class UAISystem;
class UAITask;
class UAITask_LockLogic;
class UAITask_MoveTo;
class UAITask_RunEQS;
class UBTAuxiliaryNode;
class UBTCompositeNode;
class UBTComposite_Selector;
class UBTComposite_Sequence;
class UBTComposite_SimpleParallel;
class UBTDecorator;
class UBTDecorator_Blackboard;
class UBTDecorator_BlackboardBase;
class UBTDecorator_BlueprintBase;
class UBTDecorator_CheckGameplayTagsOnActor;
class UBTDecorator_CompareBBEntries;
class UBTDecorator_ConditionalLoop;
class UBTDecorator_ConeCheck;
class UBTDecorator_Cooldown;
class UBTDecorator_DoesPathExist;
class UBTDecorator_ForceSuccess;
class UBTDecorator_IsAtLocation;
class UBTDecorator_IsBBEntryOfClass;
class UBTDecorator_KeepInCone;
class UBTDecorator_Loop;
class UBTDecorator_ReachedMoveGoal;
class UBTDecorator_SetTagCooldown;
class UBTDecorator_TagCooldown;
class UBTDecorator_TimeLimit;
class UBTFunctionLibrary;
class UBTNode;
class UBTService;
class UBTService_BlackboardBase;
class UBTService_BlueprintBase;
class UBTService_DefaultFocus;
class UBTService_RunEQS;
class UBTTaskNode;
class UBTTask_BlackboardBase;
class UBTTask_BlueprintBase;
class UBTTask_FinishWithResult;
class UBTTask_GameplayTaskBase;
class UBTTask_MakeNoise;
class UBTTask_MoveDirectlyToward;
class UBTTask_MoveTo;
class UBTTask_PawnActionBase;
class UBTTask_PlayAnimation;
class UBTTask_PlaySound;
class UBTTask_PushPawnAction;
class UBTTask_RotateToFaceBBEntry;
class UBTTask_RunBehavior;
class UBTTask_RunBehaviorDynamic;
class UBTTask_RunEQSQuery;
class UBTTask_SetTagCooldown;
class UBTTask_Wait;
class UBTTask_WaitBlackboardTime;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBehaviorTreeManager;
class UBehaviorTreeTypes;
class UBlackboardAssetProvider;
class UBlackboardComponent;
class UBlackboardData;
class UBlackboardKeyType;
class UBlackboardKeyType_Bool;
class UBlackboardKeyType_Class;
class UBlackboardKeyType_Enum;
class UBlackboardKeyType_Float;
class UBlackboardKeyType_Int;
class UBlackboardKeyType_Name;
class UBlackboardKeyType_NativeEnum;
class UBlackboardKeyType_Object;
class UBlackboardKeyType_Rotator;
class UBlackboardKeyType_String;
class UBlackboardKeyType_Vector;
class UBrainComponent;
class UCrowdAgentInterface;
class UCrowdFollowingComponent;
class UCrowdManager;
class UEQSQueryResultSourceInterface;
class UEQSRenderingComponent;
class UEnvQuery;
class UEnvQueryContext;
class UEnvQueryContext_BlueprintBase;
class UEnvQueryContext_Item;
class UEnvQueryContext_Querier;
class UEnvQueryDebugHelpers;
class UEnvQueryGenerator;
class UEnvQueryGenerator_ActorsOfClass;
class UEnvQueryGenerator_BlueprintBase;
class UEnvQueryGenerator_Composite;
class UEnvQueryGenerator_Cone;
class UEnvQueryGenerator_CurrentLocation;
class UEnvQueryGenerator_Donut;
class UEnvQueryGenerator_OnCircle;
class UEnvQueryGenerator_PathingGrid;
class UEnvQueryGenerator_ProjectedPoints;
class UEnvQueryGenerator_SimpleGrid;
class UEnvQueryInstanceBlueprintWrapper;
class UEnvQueryItemType;
class UEnvQueryItemType_Actor;
class UEnvQueryItemType_ActorBase;
class UEnvQueryItemType_Direction;
class UEnvQueryItemType_Point;
class UEnvQueryItemType_VectorBase;
class UEnvQueryManager;
class UEnvQueryNode;
class UEnvQueryOption;
class UEnvQueryTest;
class UEnvQueryTest_Distance;
class UEnvQueryTest_Dot;
class UEnvQueryTest_GameplayTags;
class UEnvQueryTest_Overlap;
class UEnvQueryTest_Pathfinding;
class UEnvQueryTest_PathfindingBatch;
class UEnvQueryTest_Project;
class UEnvQueryTest_Random;
class UEnvQueryTest_Trace;
class UEnvQueryTest_Volume;
class UEnvQueryTypes;
class UGenericTeamAgentInterface;
class UGridPathFollowingComponent;
class UNavFilter_AIControllerDefault;
class UNavLocalGridManager;
class UPathFollowingComponent;
class UPathFollowingManager;
class UPawnAction;
class UPawnAction_BlueprintBase;
class UPawnAction_Move;
class UPawnAction_Repeat;
class UPawnAction_Sequence;
class UPawnAction_Wait;
class UPawnActionsComponent;
class UPawnSensingComponent;
class UVisualLoggerExtension;

/// Enum /Script/AIModule.EPathFollowingResult
/// Size: 0x01 (1 bytes)
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success                                                    = 0,
	EPathFollowingResult__Blocked                                                    = 1,
	EPathFollowingResult__OffPath                                                    = 2,
	EPathFollowingResult__Aborted                                                    = 3,
	EPathFollowingResult__Skipped_DEPRECATED                                         = 4,
	EPathFollowingResult__Invalid                                                    = 5
};

/// Enum /Script/AIModule.EEnvQueryStatus
/// Size: 0x01 (1 bytes)
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing                                                      = 0,
	EEnvQueryStatus__Success                                                         = 1,
	EEnvQueryStatus__Failed                                                          = 2,
	EEnvQueryStatus__Aborted                                                         = 3,
	EEnvQueryStatus__OwnerLost                                                       = 4,
	EEnvQueryStatus__MissingParam                                                    = 5
};

/// Enum /Script/AIModule.EAISenseNotifyType
/// Size: 0x01 (1 bytes)
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception                                            = 0,
	EAISenseNotifyType__OnPerceptionChange                                           = 1
};

/// Enum /Script/AIModule.EAITaskPriority
/// Size: 0x01 (1 bytes)
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest                                                          = 0,
	EAITaskPriority__Low                                                             = 64,
	EAITaskPriority__AutonomousAI                                                    = 127,
	EAITaskPriority__High                                                            = 192,
	EAITaskPriority__Ultimate                                                        = 254
};

/// Enum /Script/AIModule.EGenericAICheck
/// Size: 0x01 (1 bytes)
enum class EGenericAICheck : uint8_t
{
	EGenericAICheck__Less                                                            = 0,
	EGenericAICheck__LessOrEqual                                                     = 1,
	EGenericAICheck__Equal                                                           = 2,
	EGenericAICheck__NotEqual                                                        = 3,
	EGenericAICheck__GreaterOrEqual                                                  = 4,
	EGenericAICheck__Greater                                                         = 5,
	EGenericAICheck__IsTrue                                                          = 6
};

/// Enum /Script/AIModule.EAILockSource
/// Size: 0x01 (1 bytes)
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation                                                         = 0,
	EAILockSource__Logic                                                             = 1,
	EAILockSource__Script                                                            = 2,
	EAILockSource__Gameplay                                                          = 3
};

/// Enum /Script/AIModule.EAIRequestPriority
/// Size: 0x01 (1 bytes)
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript                                                   = 0,
	EAIRequestPriority__Logic                                                        = 1,
	EAIRequestPriority__HardScript                                                   = 2,
	EAIRequestPriority__Reaction                                                     = 3,
	EAIRequestPriority__Ultimate                                                     = 4
};

/// Enum /Script/AIModule.EPawnActionEventType
/// Size: 0x01 (1 bytes)
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid                                                    = 0,
	EPawnActionEventType__FailedToStart                                              = 1,
	EPawnActionEventType__InstantAbort                                               = 2,
	EPawnActionEventType__FinishedAborting                                           = 3,
	EPawnActionEventType__FinishedExecution                                          = 4,
	EPawnActionEventType__Push                                                       = 5
};

/// Enum /Script/AIModule.EPawnActionResult
/// Size: 0x01 (1 bytes)
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted                                                    = 0,
	EPawnActionResult__InProgress                                                    = 1,
	EPawnActionResult__Success                                                       = 2,
	EPawnActionResult__Failed                                                        = 3,
	EPawnActionResult__Aborted                                                       = 4
};

/// Enum /Script/AIModule.EPawnActionAbortState
/// Size: 0x01 (1 bytes)
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted                                              = 0,
	EPawnActionAbortState__NotBeingAborted                                           = 1,
	EPawnActionAbortState__MarkPendingAbort                                          = 2,
	EPawnActionAbortState__LatentAbortInProgress                                     = 3,
	EPawnActionAbortState__AbortDone                                                 = 4
};

/// Enum /Script/AIModule.FAIDistanceType
/// Size: 0x01 (1 bytes)
enum class FAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D                                                      = 0,
	FAIDistanceType__Distance2D                                                      = 1,
	FAIDistanceType__DistanceZ                                                       = 2
};

/// Enum /Script/AIModule.EAIOptionFlag
/// Size: 0x01 (1 bytes)
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default                                                           = 0,
	EAIOptionFlag__Enable                                                            = 1,
	EAIOptionFlag__Disable                                                           = 2
};

/// Enum /Script/AIModule.EBTFlowAbortMode
/// Size: 0x01 (1 bytes)
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None                                                           = 0,
	EBTFlowAbortMode__LowerPriority                                                  = 1,
	EBTFlowAbortMode__Self                                                           = 2,
	EBTFlowAbortMode__Both                                                           = 3
};

/// Enum /Script/AIModule.EBTNodeResult
/// Size: 0x01 (1 bytes)
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded                                                         = 0,
	EBTNodeResult__Failed                                                            = 1,
	EBTNodeResult__Aborted                                                           = 2,
	EBTNodeResult__InProgress                                                        = 3
};

/// Enum /Script/AIModule.ETextKeyOperation
/// Size: 0x01 (1 bytes)
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal                                                         = 0,
	ETextKeyOperation__NotEqual                                                      = 1,
	ETextKeyOperation__Contain                                                       = 2,
	ETextKeyOperation__NotContain                                                    = 3
};

/// Enum /Script/AIModule.EArithmeticKeyOperation
/// Size: 0x01 (1 bytes)
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal                                                   = 0,
	EArithmeticKeyOperation__NotEqual                                                = 1,
	EArithmeticKeyOperation__Less                                                    = 2,
	EArithmeticKeyOperation__LessOrEqual                                             = 3,
	EArithmeticKeyOperation__Greater                                                 = 4,
	EArithmeticKeyOperation__GreaterOrEqual                                          = 5
};

/// Enum /Script/AIModule.EBasicKeyOperation
/// Size: 0x01 (1 bytes)
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set                                                          = 0,
	EBasicKeyOperation__NotSet                                                       = 1
};

/// Enum /Script/AIModule.EBTParallelMode
/// Size: 0x01 (1 bytes)
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground                                                 = 0,
	EBTParallelMode__WaitForBackground                                               = 1
};

/// Enum /Script/AIModule.EBTDecoratorLogic
/// Size: 0x01 (1 bytes)
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid                                                       = 0,
	EBTDecoratorLogic__Test                                                          = 1,
	EBTDecoratorLogic__And                                                           = 2,
	EBTDecoratorLogic__Or                                                            = 3,
	EBTDecoratorLogic__Not                                                           = 4
};

/// Enum /Script/AIModule.EBTChildIndex
/// Size: 0x01 (1 bytes)
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode                                                         = 0,
	EBTChildIndex__TaskNode                                                          = 1
};

/// Enum /Script/AIModule.EBTBlackboardRestart
/// Size: 0x01 (1 bytes)
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange                                                = 0,
	EBTBlackboardRestart__ResultChange                                               = 1
};

/// Enum /Script/AIModule.EBlackBoardEntryComparison
/// Size: 0x01 (1 bytes)
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal                                                = 0,
	EBlackBoardEntryComparison__NotEqual                                             = 1
};

/// Enum /Script/AIModule.EPathExistanceQueryType
/// Size: 0x01 (1 bytes)
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D                                        = 0,
	EPathExistanceQueryType__HierarchicalQuery                                       = 1,
	EPathExistanceQueryType__RegularPathFinding                                      = 2
};

/// Enum /Script/AIModule.EPointOnCircleSpacingMethod
/// Size: 0x01 (1 bytes)
enum class EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween                                      = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints                                    = 1
};

/// Enum /Script/AIModule.EEQSNormalizationType
/// Size: 0x01 (1 bytes)
enum class EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute                                                  = 0,
	EEQSNormalizationType__RelativeToScores                                          = 1
};

/// Enum /Script/AIModule.EEnvTestDistance
/// Size: 0x01 (1 bytes)
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D                                                     = 0,
	EEnvTestDistance__Distance2D                                                     = 1,
	EEnvTestDistance__DistanceZ                                                      = 2,
	EEnvTestDistance__DistanceAbsoluteZ                                              = 3
};

/// Enum /Script/AIModule.EEnvTestDot
/// Size: 0x01 (1 bytes)
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D                                                               = 0,
	EEnvTestDot__Dot2D                                                               = 1
};

/// Enum /Script/AIModule.EEnvTestPathfinding
/// Size: 0x01 (1 bytes)
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist                                                   = 0,
	EEnvTestPathfinding__PathCost                                                    = 1,
	EEnvTestPathfinding__PathLength                                                  = 2
};

/// Enum /Script/AIModule.EEnvQueryTestClamping
/// Size: 0x01 (1 bytes)
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None                                                      = 0,
	EEnvQueryTestClamping__SpecifiedValue                                            = 1,
	EEnvQueryTestClamping__FilterThreshold                                           = 2
};

/// Enum /Script/AIModule.EEnvDirection
/// Size: 0x01 (1 bytes)
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints                                                         = 0,
	EEnvDirection__Rotation                                                          = 1
};

/// Enum /Script/AIModule.EEnvOverlapShape
/// Size: 0x01 (1 bytes)
enum class EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box                                                            = 0,
	EEnvOverlapShape__Sphere                                                         = 1,
	EEnvOverlapShape__Capsule                                                        = 2
};

/// Enum /Script/AIModule.EEnvTraceShape
/// Size: 0x01 (1 bytes)
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line                                                             = 0,
	EEnvTraceShape__Box                                                              = 1,
	EEnvTraceShape__Sphere                                                           = 2,
	EEnvTraceShape__Capsule                                                          = 3
};

/// Enum /Script/AIModule.EEnvQueryTrace
/// Size: 0x01 (1 bytes)
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None                                                             = 0,
	EEnvQueryTrace__Navigation                                                       = 1,
	EEnvQueryTrace__Geometry                                                         = 2,
	EEnvQueryTrace__NavigationOverLedges                                             = 3
};

/// Enum /Script/AIModule.EAIParamType
/// Size: 0x01 (1 bytes)
enum class EAIParamType : uint8_t
{
	EAIParamType__Float                                                              = 0,
	EAIParamType__Int                                                                = 1,
	EAIParamType__Bool                                                               = 2
};

/// Enum /Script/AIModule.EEnvQueryParam
/// Size: 0x01 (1 bytes)
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float                                                            = 0,
	EEnvQueryParam__Int                                                              = 1,
	EEnvQueryParam__Bool                                                             = 2
};

/// Enum /Script/AIModule.EEnvQueryRunMode
/// Size: 0x01 (1 bytes)
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult                                                   = 0,
	EEnvQueryRunMode__RandomBest5Pct                                                 = 1,
	EEnvQueryRunMode__RandomBest25Pct                                                = 2,
	EEnvQueryRunMode__AllMatching                                                    = 3
};

/// Enum /Script/AIModule.EEnvTestScoreOperator
/// Size: 0x01 (1 bytes)
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore                                              = 0,
	EEnvTestScoreOperator__MinScore                                                  = 1,
	EEnvTestScoreOperator__MaxScore                                                  = 2,
	EEnvTestScoreOperator__Multiply                                                  = 3
};

/// Enum /Script/AIModule.EEnvTestFilterOperator
/// Size: 0x01 (1 bytes)
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass                                                  = 0,
	EEnvTestFilterOperator__AnyPass                                                  = 1
};

/// Enum /Script/AIModule.EEnvTestCost
/// Size: 0x01 (1 bytes)
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low                                                                = 0,
	EEnvTestCost__Medium                                                             = 1,
	EEnvTestCost__High                                                               = 2
};

/// Enum /Script/AIModule.EEnvTestWeight
/// Size: 0x01 (1 bytes)
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None                                                             = 0,
	EEnvTestWeight__Square                                                           = 1,
	EEnvTestWeight__Inverse                                                          = 2,
	EEnvTestWeight__Unused                                                           = 3,
	EEnvTestWeight__Constant                                                         = 4,
	EEnvTestWeight__Skip                                                             = 5
};

/// Enum /Script/AIModule.EEnvTestScoreEquation
/// Size: 0x01 (1 bytes)
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear                                                    = 0,
	EEnvTestScoreEquation__Square                                                    = 1,
	EEnvTestScoreEquation__InverseLinear                                             = 2,
	EEnvTestScoreEquation__SquareRoot                                                = 3,
	EEnvTestScoreEquation__Constant                                                  = 4
};

/// Enum /Script/AIModule.EEnvTestFilterType
/// Size: 0x01 (1 bytes)
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum                                                      = 0,
	EEnvTestFilterType__Maximum                                                      = 1,
	EEnvTestFilterType__Range                                                        = 2,
	EEnvTestFilterType__Match                                                        = 3
};

/// Enum /Script/AIModule.EEnvTestPurpose
/// Size: 0x01 (1 bytes)
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter                                                          = 0,
	EEnvTestPurpose__Score                                                           = 1,
	EEnvTestPurpose__FilterAndScore                                                  = 2
};

/// Enum /Script/AIModule.EEnvQueryHightlightMode
/// Size: 0x01 (1 bytes)
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All                                                     = 0,
	EEnvQueryHightlightMode__Best5Pct                                                = 1,
	EEnvQueryHightlightMode__Best25Pct                                               = 2
};

/// Enum /Script/AIModule.ETeamAttitude
/// Size: 0x01 (1 bytes)
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly                                                          = 0,
	ETeamAttitude__Neutral                                                           = 1,
	ETeamAttitude__Hostile                                                           = 2
};

/// Enum /Script/AIModule.EPathFollowingRequestResult
/// Size: 0x01 (1 bytes)
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed                                              = 0,
	EPathFollowingRequestResult__AlreadyAtGoal                                       = 1,
	EPathFollowingRequestResult__RequestSuccessful                                   = 2
};

/// Enum /Script/AIModule.EPathFollowingAction
/// Size: 0x01 (1 bytes)
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error                                                      = 0,
	EPathFollowingAction__NoMove                                                     = 1,
	EPathFollowingAction__DirectMove                                                 = 2,
	EPathFollowingAction__PartialPath                                                = 3,
	EPathFollowingAction__PathToGoal                                                 = 4
};

/// Enum /Script/AIModule.EPathFollowingStatus
/// Size: 0x01 (1 bytes)
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle                                                       = 0,
	EPathFollowingStatus__Waiting                                                    = 1,
	EPathFollowingStatus__Paused                                                     = 2,
	EPathFollowingStatus__Moving                                                     = 3
};

/// Enum /Script/AIModule.EPawnActionFailHandling
/// Size: 0x01 (1 bytes)
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess                                          = 0,
	EPawnActionFailHandling__IgnoreFailure                                           = 1
};

/// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy
/// Size: 0x01 (1 bytes)
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering                             = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances                                   = 1
};

/// Enum /Script/AIModule.EPawnActionMoveMode
/// Size: 0x01 (1 bytes)
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding                                              = 0,
	EPawnActionMoveMode__StraightLine                                                = 1
};

#pragma pack(pop)


static_assert(sizeof(UAIAsyncTaskBlueprintProxy) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UAIBlueprintHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AAIController) == 0x0328); // 808 bytes (0x000298 - 0x000328)
static_assert(sizeof(UAIDataProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIDataProvider_QueryParams) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UAIDataProvider_Random) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UAIHotSpotManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIPerceptionComponent) == 0x0190); // 400 bytes (0x0000B0 - 0x000190)
static_assert(sizeof(UAIPerceptionListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIPerceptionStimuliSourceComponent) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(UAISubsystem) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UAIPerceptionSystem) == 0x0130); // 304 bytes (0x000038 - 0x000130)
static_assert(sizeof(UAIResourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIResource_Movement) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIResource_Logic) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAISense) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UAISense_Blueprint) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(FAIDamageEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAISense_Damage) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(FAINoiseEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAISense_Hearing) == 0x00E8); // 232 bytes (0x000080 - 0x0000E8)
static_assert(sizeof(FAIPredictionEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UAISense_Prediction) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UAISense_Sight) == 0x0170); // 368 bytes (0x000080 - 0x000170)
static_assert(sizeof(FAITeamStimulusEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UAISense_Team) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(FAITouchEvent) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAISense_Touch) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UAISenseBlueprintListener) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UAISenseConfig) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UAISenseConfig_Blueprint) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UAISenseConfig_Damage) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FAISenseAffiliationFilter) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UAISenseConfig_Hearing) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UAISenseConfig_Prediction) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAISenseConfig_Sight) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(sizeof(UAISenseConfig_Team) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAISenseConfig_Touch) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UAISenseEvent) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAISenseEvent_Damage) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UAISenseEvent_Hearing) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UAISightTargetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAISystem) == 0x0130); // 304 bytes (0x000058 - 0x000130)
static_assert(sizeof(UAITask) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UAITask_LockLogic) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FAIMoveRequest) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UAITask_MoveTo) == 0x0110); // 272 bytes (0x000070 - 0x000110)
static_assert(sizeof(UAITask_RunEQS) == 0x00E8); // 232 bytes (0x000070 - 0x0000E8)
static_assert(sizeof(FBTDecoratorLogic) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UBehaviorTree) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UBrainComponent) == 0x0108); // 264 bytes (0x0000B0 - 0x000108)
static_assert(sizeof(UBehaviorTreeComponent) == 0x0298); // 664 bytes (0x000108 - 0x000298)
static_assert(sizeof(FBehaviorTreeTemplateInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UBehaviorTreeManager) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UBehaviorTreeTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlackboardAssetProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlackboardComponent) == 0x01B8); // 440 bytes (0x0000B0 - 0x0001B8)
static_assert(sizeof(FBlackboardEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UBlackboardData) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UBlackboardKeyType) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Bool) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Class) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBlackboardKeyType_Enum) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UBlackboardKeyType_Float) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Int) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_Name) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_NativeEnum) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UBlackboardKeyType_Object) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBlackboardKeyType_Rotator) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBlackboardKeyType_String) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UBlackboardKeyType_Vector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UBTNode) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UBTAuxiliaryNode) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FBTCompositeChild) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UBTCompositeNode) == 0x0090); // 144 bytes (0x000058 - 0x000090)
static_assert(sizeof(UBTComposite_Selector) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UBTComposite_Sequence) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UBTComposite_SimpleParallel) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UBTDecorator) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(FBlackboardKeySelector) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UBTDecorator_BlackboardBase) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(UBTDecorator_Blackboard) == 0x00C0); // 192 bytes (0x000090 - 0x0000C0)
static_assert(sizeof(UBTDecorator_BlueprintBase) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(UBTDecorator_CheckGameplayTagsOnActor) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UBTDecorator_CompareBBEntries) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(UBTDecorator_ConditionalLoop) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UBTDecorator_ConeCheck) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(UBTDecorator_Cooldown) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UBTDecorator_DoesPathExist) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UBTDecorator_ForceSuccess) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FAIDataProviderValue) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAIDataProviderTypedValue) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FAIDataProviderFloatValue) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBTDecorator_IsAtLocation) == 0x00D8); // 216 bytes (0x000090 - 0x0000D8)
static_assert(sizeof(UBTDecorator_IsBBEntryOfClass) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UBTDecorator_KeepInCone) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UBTDecorator_Loop) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UBTDecorator_ReachedMoveGoal) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UBTDecorator_SetTagCooldown) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UBTDecorator_TagCooldown) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UBTDecorator_TimeLimit) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UBTFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBTService) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UBTService_BlackboardBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UBTService_BlueprintBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UBTService_DefaultFocus) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FAIDynamicParam) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FEQSParametrizedQueryExecutionRequest) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UBTService_RunEQS) == 0x00F0); // 240 bytes (0x000098 - 0x0000F0)
static_assert(sizeof(UBTTaskNode) == 0x0070); // 112 bytes (0x000058 - 0x000070)
static_assert(sizeof(UBTTask_BlackboardBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(FIntervalCountdown) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UBTTask_BlueprintBase) == 0x00A8); // 168 bytes (0x000070 - 0x0000A8)
static_assert(sizeof(UBTTask_FinishWithResult) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_GameplayTaskBase) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_MakeNoise) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_MoveTo) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UBTTask_MoveDirectlyToward) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UBTTask_PawnActionBase) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UBTTask_PlayAnimation) == 0x00B0); // 176 bytes (0x000070 - 0x0000B0)
static_assert(sizeof(UBTTask_PlaySound) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_PushPawnAction) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_RotateToFaceBBEntry) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(UBTTask_RunBehavior) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_RunBehaviorDynamic) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(FEnvNamedValue) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBTTask_RunEQSQuery) == 0x0150); // 336 bytes (0x000098 - 0x000150)
static_assert(sizeof(UBTTask_SetTagCooldown) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UBTTask_Wait) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBTTask_WaitBlackboardTime) == 0x00A0); // 160 bytes (0x000078 - 0x0000A0)
static_assert(sizeof(UCrowdAgentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPathFollowingComponent) == 0x0250); // 592 bytes (0x0000B0 - 0x000250)
static_assert(sizeof(UCrowdFollowingComponent) == 0x0298); // 664 bytes (0x000250 - 0x000298)
static_assert(sizeof(FCrowdAvoidanceConfig) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FCrowdAvoidanceSamplingPattern) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UCrowdManager) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(ADetourCrowdAIController) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(UEnvQuery) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UEnvQueryContext) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryContext_BlueprintBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEnvQueryContext_Item) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryContext_Querier) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryDebugHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnvQueryNode) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEnvQueryGenerator) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FAIDataProviderBoolValue) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UEnvQueryGenerator_ActorsOfClass) == 0x00D0); // 208 bytes (0x000050 - 0x0000D0)
static_assert(sizeof(UEnvQueryGenerator_BlueprintBase) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UEnvQueryGenerator_Composite) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(FEnvTraceData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UEnvQueryGenerator_ProjectedPoints) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UEnvQueryGenerator_Cone) == 0x0170); // 368 bytes (0x000080 - 0x000170)
static_assert(sizeof(UEnvQueryGenerator_CurrentLocation) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(FAIDataProviderIntValue) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FEnvDirection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UEnvQueryGenerator_Donut) == 0x01D0); // 464 bytes (0x000080 - 0x0001D0)
static_assert(sizeof(UEnvQueryGenerator_OnCircle) == 0x0210); // 528 bytes (0x000080 - 0x000210)
static_assert(sizeof(UEnvQueryGenerator_SimpleGrid) == 0x00F8); // 248 bytes (0x000080 - 0x0000F8)
static_assert(sizeof(UEnvQueryGenerator_PathingGrid) == 0x0170); // 368 bytes (0x0000F8 - 0x000170)
static_assert(sizeof(UEnvQueryInstanceBlueprintWrapper) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UEnvQueryItemType) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_VectorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_ActorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_Actor) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_Direction) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryItemType_Point) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FEnvQueryInstanceCache) == 0x0178); // 376 bytes (0x000000 - 0x000178)
static_assert(sizeof(UEnvQueryManager) == 0x0140); // 320 bytes (0x000038 - 0x000140)
static_assert(sizeof(UEnvQueryOption) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UEnvQueryTest) == 0x01F8); // 504 bytes (0x000030 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_Distance) == 0x0208); // 520 bytes (0x0001F8 - 0x000208)
static_assert(sizeof(UEnvQueryTest_Dot) == 0x0240); // 576 bytes (0x0001F8 - 0x000240)
static_assert(sizeof(UEnvQueryTest_GameplayTags) == 0x0268); // 616 bytes (0x0001F8 - 0x000268)
static_assert(sizeof(FEnvOverlapData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UEnvQueryTest_Overlap) == 0x0218); // 536 bytes (0x0001F8 - 0x000218)
static_assert(sizeof(UEnvQueryTest_Pathfinding) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(UEnvQueryTest_PathfindingBatch) == 0x02B8); // 696 bytes (0x000280 - 0x0002B8)
static_assert(sizeof(UEnvQueryTest_Project) == 0x0228); // 552 bytes (0x0001F8 - 0x000228)
static_assert(sizeof(UEnvQueryTest_Random) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_Trace) == 0x02D8); // 728 bytes (0x0001F8 - 0x0002D8)
static_assert(sizeof(UEnvQueryTest_Volume) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(UEnvQueryTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEQSQueryResultSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEQSRenderingComponent) == 0x04A0); // 1184 bytes (0x000468 - 0x0004A0)
static_assert(sizeof(AEQSTestingPawn) == 0x0550); // 1360 bytes (0x0004B8 - 0x000550)
static_assert(sizeof(UGenericTeamAgentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AGridPathAIController) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(UGridPathFollowingComponent) == 0x0280); // 640 bytes (0x000250 - 0x000280)
static_assert(sizeof(UNavFilter_AIControllerDefault) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(ANavLinkProxy) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(UNavLocalGridManager) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UPathFollowingManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPawnAction) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UPawnAction_BlueprintBase) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(UPawnAction_Move) == 0x00E8); // 232 bytes (0x000098 - 0x0000E8)
static_assert(sizeof(UPawnAction_Repeat) == 0x00B8); // 184 bytes (0x000098 - 0x0000B8)
static_assert(sizeof(UPawnAction_Sequence) == 0x00C0); // 192 bytes (0x000098 - 0x0000C0)
static_assert(sizeof(UPawnAction_Wait) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(FPawnActionStack) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPawnActionEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPawnActionsComponent) == 0x00E8); // 232 bytes (0x0000B0 - 0x0000E8)
static_assert(sizeof(UPawnSensingComponent) == 0x00F8); // 248 bytes (0x0000B0 - 0x0000F8)
static_assert(sizeof(UVisualLoggerExtension) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAIRequestID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAIStimulus) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FActorPerceptionUpdateInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAIDataProviderStructValue) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FActorPerceptionBlueprintInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAISightEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEnvQueryRequest) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FEnvQueryResult) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGenericTeamId) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(AAIController, PathFollowingComponent) == 0x02D8);
static_assert(offsetof(AAIController, BrainComponent) == 0x02E0);
static_assert(offsetof(AAIController, PerceptionComponent) == 0x02E8);
static_assert(offsetof(AAIController, ActionsComp) == 0x02F0);
static_assert(offsetof(AAIController, Blackboard) == 0x02F8);
static_assert(offsetof(AAIController, CachedGameplayTasksComponent) == 0x0300);
static_assert(offsetof(AAIController, DefaultNavigationFilterClass) == 0x0308);
static_assert(offsetof(UAIDataProvider_QueryParams, ParamName) == 0x0028);
static_assert(offsetof(UAIPerceptionComponent, SensesConfig) == 0x00B0);
static_assert(offsetof(UAIPerceptionComponent, DominantSense) == 0x00C0);
static_assert(offsetof(UAIPerceptionComponent, AIOwner) == 0x00D8);
static_assert(offsetof(UAIPerceptionStimuliSourceComponent, RegisterAsSourceForSenses) == 0x00B8);
static_assert(offsetof(UAISubsystem, AISystem) == 0x0030);
static_assert(offsetof(UAIPerceptionSystem, Senses) == 0x0088);
static_assert(offsetof(UAISense, NotifyType) == 0x002C);
static_assert(offsetof(UAISense, PerceptionSystemInstance) == 0x0038);
static_assert(offsetof(UAISense_Blueprint, ListenerDataType) == 0x0080);
static_assert(offsetof(UAISense_Blueprint, ListenerContainer) == 0x0088);
static_assert(offsetof(UAISense_Blueprint, UnprocessedEvents) == 0x0098);
static_assert(offsetof(FAIDamageEvent, Location) == 0x0004);
static_assert(offsetof(FAIDamageEvent, HitLocation) == 0x0010);
static_assert(offsetof(FAIDamageEvent, DamagedActor) == 0x0020);
static_assert(offsetof(FAIDamageEvent, Instigator) == 0x0028);
static_assert(offsetof(UAISense_Damage, RegisteredEvents) == 0x0080);
static_assert(offsetof(FAINoiseEvent, NoiseLocation) == 0x0004);
static_assert(offsetof(FAINoiseEvent, Instigator) == 0x0018);
static_assert(offsetof(FAINoiseEvent, Tag) == 0x0020);
static_assert(offsetof(UAISense_Hearing, NoiseEvents) == 0x0080);
static_assert(offsetof(FAIPredictionEvent, Requestor) == 0x0000);
static_assert(offsetof(FAIPredictionEvent, PredictedActor) == 0x0008);
static_assert(offsetof(UAISense_Prediction, RegisteredEvents) == 0x0080);
static_assert(offsetof(FAITeamStimulusEvent, Broadcaster) == 0x0028);
static_assert(offsetof(FAITeamStimulusEvent, Enemy) == 0x0030);
static_assert(offsetof(UAISense_Team, RegisteredEvents) == 0x0080);
static_assert(offsetof(FAITouchEvent, TouchReceiver) == 0x0010);
static_assert(offsetof(FAITouchEvent, OtherActor) == 0x0018);
static_assert(offsetof(UAISense_Touch, RegisteredEvents) == 0x0080);
static_assert(offsetof(UAISenseConfig, DebugColor) == 0x0028);
static_assert(offsetof(UAISenseConfig_Blueprint, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Damage, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Hearing, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Hearing, DetectionByAffiliation) == 0x005C);
static_assert(offsetof(UAISenseConfig_Sight, Implementation) == 0x0048);
static_assert(offsetof(UAISenseConfig_Sight, DetectionByAffiliation) == 0x005C);
static_assert(offsetof(UAISenseEvent_Damage, Event) == 0x0028);
static_assert(offsetof(UAISenseEvent_Hearing, Event) == 0x0028);
static_assert(offsetof(UAISystem, PerceptionSystemClassName) == 0x0058);
static_assert(offsetof(UAISystem, HotSpotManagerClassName) == 0x0070);
static_assert(offsetof(UAISystem, DefaultSightCollisionChannel) == 0x009C);
static_assert(offsetof(UAISystem, BehaviorTreeManager) == 0x00A0);
static_assert(offsetof(UAISystem, EnvironmentQueryManager) == 0x00A8);
static_assert(offsetof(UAISystem, PerceptionSystem) == 0x00B0);
static_assert(offsetof(UAISystem, AllProxyObjects) == 0x00B8);
static_assert(offsetof(UAISystem, HotSpotManager) == 0x00C8);
static_assert(offsetof(UAISystem, NavLocalGrids) == 0x00D0);
static_assert(offsetof(UAITask, OwnerController) == 0x0068);
static_assert(offsetof(FAIMoveRequest, GoalActor) == 0x0000);
static_assert(offsetof(UAITask_MoveTo, MoveRequest) == 0x0090);
static_assert(offsetof(FBTDecoratorLogic, Operation) == 0x0000);
static_assert(offsetof(UBehaviorTree, RootNode) == 0x0030);
static_assert(offsetof(UBehaviorTree, BlackboardAsset) == 0x0038);
static_assert(offsetof(UBehaviorTree, RootDecorators) == 0x0040);
static_assert(offsetof(UBehaviorTree, RootDecoratorOps) == 0x0050);
static_assert(offsetof(UBrainComponent, BlackboardComp) == 0x00B8);
static_assert(offsetof(UBrainComponent, AIOwner) == 0x00C0);
static_assert(offsetof(UBehaviorTreeComponent, NodeInstances) == 0x0128);
static_assert(offsetof(UBehaviorTreeComponent, DefaultBehaviorTreeAsset) == 0x0278);
static_assert(offsetof(FBehaviorTreeTemplateInfo, Asset) == 0x0000);
static_assert(offsetof(FBehaviorTreeTemplateInfo, Template) == 0x0008);
static_assert(offsetof(UBehaviorTreeManager, LoadedTemplates) == 0x0030);
static_assert(offsetof(UBehaviorTreeManager, ActiveComponents) == 0x0040);
static_assert(offsetof(UBlackboardComponent, BrainComp) == 0x00B0);
static_assert(offsetof(UBlackboardComponent, DefaultBlackboardAsset) == 0x00B8);
static_assert(offsetof(UBlackboardComponent, BlackboardAsset) == 0x00C0);
static_assert(offsetof(UBlackboardComponent, KeyInstances) == 0x00E8);
static_assert(offsetof(FBlackboardEntry, entryName) == 0x0000);
static_assert(offsetof(FBlackboardEntry, KeyType) == 0x0008);
static_assert(offsetof(UBlackboardData, Parent) == 0x0030);
static_assert(offsetof(UBlackboardData, Keys) == 0x0038);
static_assert(offsetof(UBlackboardKeyType_Class, BaseClass) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_Enum, EnumType) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_Enum, EnumName) == 0x0038);
static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumName) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumType) == 0x0040);
static_assert(offsetof(UBlackboardKeyType_Object, BaseClass) == 0x0030);
static_assert(offsetof(UBlackboardKeyType_String, StringValue) == 0x0030);
static_assert(offsetof(UBTNode, NodeName) == 0x0030);
static_assert(offsetof(UBTNode, TreeAsset) == 0x0040);
static_assert(offsetof(UBTNode, ParentNode) == 0x0048);
static_assert(offsetof(FBTCompositeChild, ChildComposite) == 0x0000);
static_assert(offsetof(FBTCompositeChild, ChildTask) == 0x0008);
static_assert(offsetof(FBTCompositeChild, Decorators) == 0x0010);
static_assert(offsetof(FBTCompositeChild, DecoratorOps) == 0x0020);
static_assert(offsetof(UBTCompositeNode, Children) == 0x0058);
static_assert(offsetof(UBTCompositeNode, Services) == 0x0068);
static_assert(offsetof(UBTComposite_SimpleParallel, FinishMode) == 0x0090);
static_assert(offsetof(UBTDecorator, FlowAbortMode) == 0x0064);
static_assert(offsetof(FBlackboardKeySelector, AllowedTypes) == 0x0000);
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyName) == 0x0010);
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyType) == 0x0018);
static_assert(offsetof(UBTDecorator_BlackboardBase, BlackboardKey) == 0x0068);
static_assert(offsetof(UBTDecorator_Blackboard, StringValue) == 0x0098);
static_assert(offsetof(UBTDecorator_Blackboard, CachedDescription) == 0x00A8);
static_assert(offsetof(UBTDecorator_Blackboard, NotifyObserver) == 0x00B9);
static_assert(offsetof(UBTDecorator_BlueprintBase, AIOwner) == 0x0068);
static_assert(offsetof(UBTDecorator_BlueprintBase, ActorOwner) == 0x0070);
static_assert(offsetof(UBTDecorator_BlueprintBase, ObservedKeyNames) == 0x0078);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, ActorToCheck) == 0x0068);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, TagsToMatch) == 0x0090);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, GameplayTags) == 0x0098);
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, CachedDescription) == 0x00B8);
static_assert(offsetof(UBTDecorator_CompareBBEntries, Operator) == 0x0068);
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyA) == 0x0070);
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyB) == 0x0098);
static_assert(offsetof(UBTDecorator_ConeCheck, ConeOrigin) == 0x0070);
static_assert(offsetof(UBTDecorator_ConeCheck, ConeDirection) == 0x0098);
static_assert(offsetof(UBTDecorator_ConeCheck, Observed) == 0x00C0);
static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyA) == 0x0068);
static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyB) == 0x0090);
static_assert(offsetof(UBTDecorator_DoesPathExist, PathQueryType) == 0x00BC);
static_assert(offsetof(UBTDecorator_DoesPathExist, FilterClass) == 0x00C0);
static_assert(offsetof(FAIDataProviderValue, DataBinding) == 0x0010);
static_assert(offsetof(FAIDataProviderValue, DataField) == 0x0018);
static_assert(offsetof(FAIDataProviderTypedValue, PropertyType) == 0x0020);
static_assert(offsetof(UBTDecorator_IsAtLocation, ParametrizedAcceptableRadius) == 0x0098);
static_assert(offsetof(UBTDecorator_IsAtLocation, GeometricDistanceType) == 0x00D0);
static_assert(offsetof(UBTDecorator_IsBBEntryOfClass, TestClass) == 0x0090);
static_assert(offsetof(UBTDecorator_KeepInCone, ConeOrigin) == 0x0070);
static_assert(offsetof(UBTDecorator_KeepInCone, Observed) == 0x0098);
static_assert(offsetof(UBTDecorator_SetTagCooldown, CooldownTag) == 0x0068);
static_assert(offsetof(UBTDecorator_TagCooldown, CooldownTag) == 0x0068);
static_assert(offsetof(UBTService_BlackboardBase, BlackboardKey) == 0x0070);
static_assert(offsetof(UBTService_BlueprintBase, AIOwner) == 0x0070);
static_assert(offsetof(UBTService_BlueprintBase, ActorOwner) == 0x0078);
static_assert(offsetof(FAIDynamicParam, ParamName) == 0x0000);
static_assert(offsetof(FAIDynamicParam, ParamType) == 0x0008);
static_assert(offsetof(FAIDynamicParam, BBKey) == 0x0010);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryTemplate) == 0x0000);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryConfig) == 0x0008);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, EQSQueryBlackboardKey) == 0x0018);
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, RunMode) == 0x0040);
static_assert(offsetof(UBTService_RunEQS, EQSRequest) == 0x0098);
static_assert(offsetof(UBTTaskNode, Services) == 0x0058);
static_assert(offsetof(UBTTask_BlackboardBase, BlackboardKey) == 0x0070);
static_assert(offsetof(UBTTask_BlueprintBase, AIOwner) == 0x0070);
static_assert(offsetof(UBTTask_BlueprintBase, ActorOwner) == 0x0078);
static_assert(offsetof(UBTTask_BlueprintBase, TickInterval) == 0x0080);
static_assert(offsetof(UBTTask_FinishWithResult, Result) == 0x0070);
static_assert(offsetof(UBTTask_MoveTo, FilterClass) == 0x00A0);
static_assert(offsetof(UBTTask_PlayAnimation, AnimationToPlay) == 0x0070);
static_assert(offsetof(UBTTask_PlayAnimation, MyOwnerComp) == 0x0080);
static_assert(offsetof(UBTTask_PlayAnimation, CachedSkelMesh) == 0x0088);
static_assert(offsetof(UBTTask_PlaySound, SoundToPlay) == 0x0070);
static_assert(offsetof(UBTTask_PushPawnAction, Action) == 0x0070);
static_assert(offsetof(UBTTask_RunBehavior, BehaviorAsset) == 0x0070);
static_assert(offsetof(UBTTask_RunBehaviorDynamic, InjectionTag) == 0x0070);
static_assert(offsetof(UBTTask_RunBehaviorDynamic, DefaultBehaviorAsset) == 0x0078);
static_assert(offsetof(UBTTask_RunBehaviorDynamic, BehaviorAsset) == 0x0080);
static_assert(offsetof(FEnvNamedValue, ParamName) == 0x0000);
static_assert(offsetof(FEnvNamedValue, ParamType) == 0x0008);
static_assert(offsetof(UBTTask_RunEQSQuery, QueryTemplate) == 0x0098);
static_assert(offsetof(UBTTask_RunEQSQuery, QueryParams) == 0x00A0);
static_assert(offsetof(UBTTask_RunEQSQuery, QueryConfig) == 0x00B0);
static_assert(offsetof(UBTTask_RunEQSQuery, RunMode) == 0x00C0);
static_assert(offsetof(UBTTask_RunEQSQuery, EQSQueryBlackboardKey) == 0x00C8);
static_assert(offsetof(UBTTask_RunEQSQuery, EQSRequest) == 0x00F8);
static_assert(offsetof(UBTTask_SetTagCooldown, CooldownTag) == 0x0070);
static_assert(offsetof(UBTTask_WaitBlackboardTime, BlackboardKey) == 0x0078);
static_assert(offsetof(UPathFollowingComponent, MovementComp) == 0x00E8);
static_assert(offsetof(UPathFollowingComponent, MyNavData) == 0x00F8);
static_assert(offsetof(UCrowdFollowingComponent, CrowdAgentMoveDirection) == 0x0268);
static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Angles) == 0x0000);
static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Radii) == 0x0010);
static_assert(offsetof(UCrowdManager, MyNavData) == 0x0028);
static_assert(offsetof(UCrowdManager, AvoidanceConfig) == 0x0030);
static_assert(offsetof(UCrowdManager, SamplingPatterns) == 0x0040);
static_assert(offsetof(UEnvQuery, QueryName) == 0x0030);
static_assert(offsetof(UEnvQuery, options) == 0x0038);
static_assert(offsetof(UEnvQueryGenerator, OptionName) == 0x0030);
static_assert(offsetof(UEnvQueryGenerator, ItemType) == 0x0040);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchedActorClass) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, GenerateOnlyActorsInRadius) == 0x0058);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchRadius) == 0x0090);
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchCenter) == 0x00C8);
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratorsActionDescription) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, Context) == 0x0068);
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratedItemType) == 0x0070);
static_assert(offsetof(UEnvQueryGenerator_Composite, Generators) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_Composite, ForcedItemType) == 0x0068);
static_assert(offsetof(FEnvTraceData, NavigationFilter) == 0x0008);
static_assert(offsetof(FEnvTraceData, TraceChannel) == 0x0028);
static_assert(offsetof(FEnvTraceData, SerializedChannel) == 0x0029);
static_assert(offsetof(FEnvTraceData, TraceShape) == 0x002A);
static_assert(offsetof(FEnvTraceData, TraceMode) == 0x002B);
static_assert(offsetof(UEnvQueryGenerator_ProjectedPoints, ProjectionData) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_Cone, AlignedPointsDistance) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_Cone, ConeDegrees) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_Cone, AngleStep) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_Cone, Range) == 0x0128);
static_assert(offsetof(UEnvQueryGenerator_Cone, CenterActor) == 0x0160);
static_assert(offsetof(UEnvQueryGenerator_CurrentLocation, QueryContext) == 0x0050);
static_assert(offsetof(FEnvDirection, LineFrom) == 0x0000);
static_assert(offsetof(FEnvDirection, LineTo) == 0x0008);
static_assert(offsetof(FEnvDirection, Rotation) == 0x0010);
static_assert(offsetof(FEnvDirection, DirMode) == 0x0018);
static_assert(offsetof(UEnvQueryGenerator_Donut, InnerRadius) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_Donut, OuterRadius) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_Donut, NumberOfRings) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_Donut, PointsPerRing) == 0x0128);
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcDirection) == 0x0160);
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcAngle) == 0x0180);
static_assert(offsetof(UEnvQueryGenerator_Donut, Center) == 0x01C0);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleRadius) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, SpaceBetween) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, NumberOfPoints) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, PointOnCircleSpacingMethod) == 0x0128);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcDirection) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcAngle) == 0x0150);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenter) == 0x0190);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenterZOffset) == 0x01A0);
static_assert(offsetof(UEnvQueryGenerator_OnCircle, TraceData) == 0x01D8);
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GridSize) == 0x0080);
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, SpaceBetween) == 0x00B8);
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GenerateAround) == 0x00F0);
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, PathToItem) == 0x00F8);
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, NavigationFilter) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, ScanRangeMultiplier) == 0x0138);
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, ItemType) == 0x0058);
static_assert(offsetof(FEnvQueryInstanceCache, Template) == 0x0000);
static_assert(offsetof(UEnvQueryManager, InstanceCache) == 0x00A8);
static_assert(offsetof(UEnvQueryManager, LocalContexts) == 0x00B8);
static_assert(offsetof(UEnvQueryManager, GCShieldedWrappers) == 0x00C8);
static_assert(offsetof(UEnvQueryOption, Generator) == 0x0028);
static_assert(offsetof(UEnvQueryOption, Tests) == 0x0030);
static_assert(offsetof(UEnvQueryTest, TestPurpose) == 0x0034);
static_assert(offsetof(UEnvQueryTest, TestComment) == 0x0038);
static_assert(offsetof(UEnvQueryTest, MultipleContextFilterOp) == 0x0048);
static_assert(offsetof(UEnvQueryTest, MultipleContextScoreOp) == 0x0049);
static_assert(offsetof(UEnvQueryTest, FilterType) == 0x004A);
static_assert(offsetof(UEnvQueryTest, BoolValue) == 0x0050);
static_assert(offsetof(UEnvQueryTest, FloatValueMin) == 0x0088);
static_assert(offsetof(UEnvQueryTest, FloatValueMax) == 0x00C0);
static_assert(offsetof(UEnvQueryTest, ScoringEquation) == 0x00F9);
static_assert(offsetof(UEnvQueryTest, ClampMinType) == 0x00FA);
static_assert(offsetof(UEnvQueryTest, ClampMaxType) == 0x00FB);
static_assert(offsetof(UEnvQueryTest, NormalizationType) == 0x00FC);
static_assert(offsetof(UEnvQueryTest, ScoreClampMin) == 0x0100);
static_assert(offsetof(UEnvQueryTest, ScoreClampMax) == 0x0138);
static_assert(offsetof(UEnvQueryTest, ScoringFactor) == 0x0170);
static_assert(offsetof(UEnvQueryTest, ReferenceValue) == 0x01A8);
static_assert(offsetof(UEnvQueryTest_Distance, TestMode) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Distance, DistanceTo) == 0x0200);
static_assert(offsetof(UEnvQueryTest_Dot, LineA) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Dot, LineB) == 0x0218);
static_assert(offsetof(UEnvQueryTest_Dot, TestMode) == 0x0238);
static_assert(offsetof(UEnvQueryTest_GameplayTags, TagQueryToMatch) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_GameplayTags, TagsToMatch) == 0x0241);
static_assert(offsetof(UEnvQueryTest_GameplayTags, GameplayTags) == 0x0248);
static_assert(offsetof(FEnvOverlapData, ShapeOffset) == 0x000C);
static_assert(offsetof(FEnvOverlapData, OverlapChannel) == 0x0018);
static_assert(offsetof(FEnvOverlapData, OverlapShape) == 0x0019);
static_assert(offsetof(UEnvQueryTest_Overlap, OverlapData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Pathfinding, TestMode) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Pathfinding, Context) == 0x0200);
static_assert(offsetof(UEnvQueryTest_Pathfinding, PathFromContext) == 0x0208);
static_assert(offsetof(UEnvQueryTest_Pathfinding, SkipUnreachable) == 0x0240);
static_assert(offsetof(UEnvQueryTest_Pathfinding, FilterClass) == 0x0278);
static_assert(offsetof(UEnvQueryTest_PathfindingBatch, ScanRangeMultiplier) == 0x0280);
static_assert(offsetof(UEnvQueryTest_Project, ProjectionData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Trace, TraceData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Trace, TraceFromContext) == 0x0228);
static_assert(offsetof(UEnvQueryTest_Trace, ItemHeightOffset) == 0x0260);
static_assert(offsetof(UEnvQueryTest_Trace, ContextHeightOffset) == 0x0298);
static_assert(offsetof(UEnvQueryTest_Trace, Context) == 0x02D0);
static_assert(offsetof(UEnvQueryTest_Volume, VolumeContext) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_Volume, VolumeClass) == 0x0200);
static_assert(offsetof(AEQSTestingPawn, QueryTemplate) == 0x04C0);
static_assert(offsetof(AEQSTestingPawn, QueryParams) == 0x04C8);
static_assert(offsetof(AEQSTestingPawn, QueryConfig) == 0x04D8);
static_assert(offsetof(AEQSTestingPawn, HighlightMode) == 0x04F0);
static_assert(offsetof(AEQSTestingPawn, QueryingMode) == 0x04F8);
static_assert(offsetof(AEQSTestingPawn, NavAgentProperties) == 0x0500);
static_assert(offsetof(UGridPathFollowingComponent, GridManager) == 0x0250);
static_assert(offsetof(ANavLinkProxy, PointLinks) == 0x0230);
static_assert(offsetof(ANavLinkProxy, SegmentLinks) == 0x0240);
static_assert(offsetof(ANavLinkProxy, SmartLinkComp) == 0x0250);
static_assert(offsetof(UPawnAction, ChildAction) == 0x0028);
static_assert(offsetof(UPawnAction, ParentAction) == 0x0030);
static_assert(offsetof(UPawnAction, OwnerComponent) == 0x0038);
static_assert(offsetof(UPawnAction, Instigator) == 0x0040);
static_assert(offsetof(UPawnAction, BrainComp) == 0x0048);
static_assert(offsetof(UPawnAction_Move, GoalActor) == 0x0098);
static_assert(offsetof(UPawnAction_Move, GoalLocation) == 0x00A0);
static_assert(offsetof(UPawnAction_Move, FilterClass) == 0x00B0);
static_assert(offsetof(UPawnAction_Repeat, ActionToRepeat) == 0x0098);
static_assert(offsetof(UPawnAction_Repeat, RecentActionCopy) == 0x00A0);
static_assert(offsetof(UPawnAction_Repeat, ChildFailureHandlingMode) == 0x00A8);
static_assert(offsetof(UPawnAction_Sequence, ActionSequence) == 0x0098);
static_assert(offsetof(UPawnAction_Sequence, ChildFailureHandlingMode) == 0x00A8);
static_assert(offsetof(UPawnAction_Sequence, RecentActionCopy) == 0x00B0);
static_assert(offsetof(FPawnActionStack, TopAction) == 0x0000);
static_assert(offsetof(FPawnActionEvent, Action) == 0x0000);
static_assert(offsetof(UPawnActionsComponent, ControlledPawn) == 0x00B0);
static_assert(offsetof(UPawnActionsComponent, ActionStacks) == 0x00B8);
static_assert(offsetof(UPawnActionsComponent, ActionEvents) == 0x00C8);
static_assert(offsetof(UPawnActionsComponent, CurrentAction) == 0x00D8);
static_assert(offsetof(FAIStimulus, StimulusLocation) == 0x000C);
static_assert(offsetof(FAIStimulus, ReceiverLocation) == 0x0018);
static_assert(offsetof(FAIStimulus, Tag) == 0x0024);
static_assert(offsetof(FActorPerceptionUpdateInfo, Target) == 0x0004);
static_assert(offsetof(FActorPerceptionUpdateInfo, Stimulus) == 0x000C);
static_assert(offsetof(FActorPerceptionBlueprintInfo, Target) == 0x0000);
static_assert(offsetof(FActorPerceptionBlueprintInfo, LastSensedStimuli) == 0x0008);
static_assert(offsetof(FAISightEvent, SeenActor) == 0x0008);
static_assert(offsetof(FAISightEvent, Observer) == 0x0010);
static_assert(offsetof(FEnvQueryRequest, QueryTemplate) == 0x0000);
static_assert(offsetof(FEnvQueryRequest, Owner) == 0x0008);
static_assert(offsetof(FEnvQueryRequest, World) == 0x0010);
static_assert(offsetof(FEnvQueryResult, ItemType) == 0x0010);
