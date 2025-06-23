
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AkAudio.h"
#include "CinematicCamera.h"
#include "CoreUObject.h"
#include "CustomPreview.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "EthInput.h"
#include "GameCommon.h"
#include "GameFlowsheetRuntime.h"
#include "GameplayTags.h"
#include "Gauntlet.h"
#include "InputCore.h"
#include "KV_ObjectPool.h"
#include "KV_Sequence.h"
#include "LevelSequence.h"
#include "MediaAssets.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "NavigationSystem.h"
#include "Paper2D.h"
#include "ProceduralMeshComponent.h"
#include "RuntimeLogViewer.h"
#include "SignificanceManager.h"
#include "Slate.h"
#include "SlateCore.h"
#include "SpinePlugin.h"
#include "StorylineRuntime.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "XDMaterialLib.h"

#pragma pack(push, 0x1)

class AAccessVolume;
class AAudioIndoorVolume;
class ABattleActor;
class ABattleCameraActor;
class ABattleEnvRoot;
class ABattleSequenceConfigManager;
class ACameraManager;
class ACameraMotion_AgtSkill;
class ACameraMotion_Base;
class ACameraMotion_HitAway;
class ACameraMotion_SkillPerform;
class ACameraMotion_SkillSway;
class ACheatActor;
class AContextManager;
class ADetailMapCollection;
class ADirectionTriggerBox;
class AFollowCameraScheduler;
class AGMActor;
class AGUIDActor;
class AGameSignificance;
class AGameUEGameModeBase;
class AGeneralPlayerController;
class AGlobalEffect;
class AGlowTextHelper;
class AHotUpdateHandler;
class ALuaActor;
class ALuaBridge;
class AMapNavPoint;
class AMapRefNavPoint;
class AMediaAssistActor;
class AMessageOverlay;
class AMiniMapVolume;
class AMovieSceneClockSourceActor;
class ANPCManager;
class AOverscreenFx;
class AOverscreenScaleFx;
class APlanarCaptureShadow;
class APlayerStartConfigActor;
class APostProcessController;
class ARecombineActorsDriver;
class AScenePawn;
class AScenePreviewStarter;
class ASceneVehiclePawn;
class AScreenBrokenCapture;
class AScreenshot;
class AScrollScene;
class AScrollSceneCell;
class ASequenceHandler;
class ASequenceManager;
class ASpecialTerrainBase;
class AStoryNPCTemplete;
class AStorySoundInjectListener;
class AStorylinePreviewManager;
class AWiremapActor;
class AWwiseAudioManager;
class UAIVehicleMovementComponent;
class UActorEffect;
class UActorEffectComponent;
class UActorOutline;
class UActorPool;
class UActorUtils;
class UAnimFXNotify_Event;
class UAnimNotifyState_AnimateSprite;
class UAnimNotifyState_SoftParticleTimedEffect;
class UAnimNotifyState_SoftParticleTrail;
class UAnimNotify_AnimateSprite;
class UAnimNotify_CvEvent;
class UAnimNotify_Event;
class UAnimNotify_FakePlaySoftParticleEffect;
class UAnimNotify_PlaySoftParticleEffect;
class UAnimNotify_SlomoEvent;
class UAnimNotify_Sound;
class UAnimTextBlock;
class UAnimUtils;
class UAnimateSpriteComponent;
class UAnimateSpriteInstance;
class UAnnouncementEvent;
class UAssetCacheLibrary;
class UAutomationAgent;
class UAutomationController;
class UAutomationHelperLibrary;
class UBaseInputComponent;
class UBatchTaskItem_OpenUI;
class UBattleAnimComponent;
class UBattleCameraShake;
class UBattleMaterialComponent;
class UBattleSequenceCameraModifier;
class UBattleSequenceLibrary;
class UBattleSequenceTransformModifier;
class UBattleSequenceTransformState;
class UBeginGameCommand;
class UBlueprintableBoxComponent;
class UBlueprintableSphereComponent;
class UBuildInfoLibrary;
class UCDKeyReq;
class UCameraAdaptorComponent;
class UCameraLibrary;
class UCameraMaskTransparencyComponent;
class UCameraUtils;
class UCharacterAnimInstance;
class UCheatSecretWidget;
class UClassifiedWidgetPool;
class UCleanupState;
class UCloseStageAsync;
class UCompositEventNode;
class UCompositEventObject;
class UContextContainer;
class UContinueState;
class UCpp2BpUtils;
class UCustomButton;
class UCustomDebugShapeComponent;
class UCustomListView;
class UCustomNavModifierComponent;
class UCustomRichTextBlock;
class UCustomRichTextBlockDecorator;
class UCustomRichTextBlockImageDecorator;
class UCustomSafeZone;
class UCustomScrollBox;
class UDevLoginCtrl;
class UDialogCloseEvent;
class UDialogControlCommand;
class UDialogCtrl;
class UDialogEvent;
class UEdenCustomPreview;
class UEdenSafeZone;
class UEdenSafeZoneSlot;
class UEdenScenarioRecorder;
class UEdenTowerRecorder;
class UEffectUtils;
class UEnterBattleSequenceUserData;
class UEntryEv;
class UEthInputComponent;
class UEthInputSettingLibrary;
class UEtheriaDeviceInfoLibrary;
class UEtheriaReportAgent;
class UEtheriaSharingLibrary;
class UEtheriaSoundLibrary;
class UEtheriaSoundSettingConfigs;
class UEventListenerObject;
class UFaceLookAtComponent;
class UFadeRequest;
class UFadeWidget;
class UFileUtils;
class UFloatMovementComponent;
class UFollowCameraState;
class UFramePlayComponent;
class UFriWayPointComponent;
class UGameCommand;
class UGameConfig;
class UGameLifeCycleLibrary;
class UGameNavigationSwitcher;
class UGameNetworkSettings;
class UGameStateMachine;
class UGameStateObject;
class UGameStateObjectBase;
class UGameStateQueue;
class UGameStaticLibrary;
class UGameTriggerAgentComponent;
class UGameTriggerContext;
class UGameTriggerContextProxy;
class UGameTriggerDecorator;
class UGameTriggerLibrary;
class UGameUEInstance;
class UGameUEUserSettings;
class UGameplayControlLibrary;
class UGameplayPrefs;
class UGameplayState;
class UGeneralMovementBaseComponent;
class UGeneralPlayerMovementComponent;
class UGeneralWiremapEdge;
class UGlobalAssetCache;
class UGlobalLoadWidget;
class UGlobalWidget;
class UGuidIndexObject;
class UGyroMotionComponent;
class UHideArrowComponent;
class UHotInputComponent;
class UHotInputInfo;
class UHttpLibrary;
class UHyperLinkRichTextBlockDecorator;
class UInitServerState;
class UInitState;
class UInit_FinishState;
class UInit_LuaModuleState;
class UInit_LuaPackState;
class UInit_ProtoState;
class UInputWidget;
class UJumpStartArrowComponent;
class ULateTickComponent;
class ULayerManager;
class ULevelBorderComponent;
class ULevelBorderGroup;
class ULevelHandleProxy;
class ULevelLibrary;
class ULevelListener;
class ULevelManager;
class ULevelReplay;
class ULevelSequenceDirectorProxy;
class ULinkDrawComponent;
class ULogin_AuthState;
class ULogin_BaseState;
class ULogin_DefaultLoginState;
class ULogin_DialState;
class ULogin_LoginState;
class ULogin_MaintainState;
class ULogin_RecommendState;
class ULogin_RedirectState;
class ULogin_RegistIntroState;
class ULogin_RegisterState;
class ULogin_SelectPlatformState;
class ULogin_ServerListState;
class ULogin_SignInState;
class ULogin_VerifyState;
class ULogin_WaitVerifyState;
class ULuaActorComponent;
class ULuaAssistComponent;
class ULuaInstanceObject;
class ULuaLevelSequenceDirector;
class ULuaPacked;
class ULuaSceneComponent;
class ULuaSettings;
class ULuaSignificanceComponent;
class ULuaStageWidget;
class ULuaTimerProxy;
class UMaintainBlockEvent;
class UMapVehicleAnimInstance;
class UMaterialCurveTable;
class UMaterialMapTable;
class UMaterialModifyComponent;
class UMaterialModifyObject;
class UMathUtils;
class UMediaAssistObject;
class UMediaPlayComponent;
class UMediaState;
class UMediaStateComponent;
class UMediaStateMachine;
class UMediaStateRuntime;
class UMediaTransit;
class UMeshHelpLibrary;
class UMiniMapFogLayerWidget;
class UMiniMapMarkerComponent;
class UMiniMapMarkerInterface;
class UMiniMapWidget;
class UMonsterAnimInstance;
class UMonsterDetectionViewComponent;
class UMotorMovementComponent;
class UMotorSpeedControlComponent;
class UMovableGeoNavModifierComponent;
class UMovieLoadScript;
class UMultiMediaPlayer;
class UMultiWiremapEdge;
class UMyDataTableUtils;
class UNetworkCongestWidget;
class UNotifyProxyComponent;
class UObjectHelperLibrary;
class UOneVetoRule;
class UOpenStageAsync;
class UOpenTapBillboardCtrl;
class UOverlayMessage;
class UOverlayMessageLayout;
class UOwnerCaptureComponent;
class UPatchEvent;
class UPatchState;
class UPatchUpdateEv;
class UPathObject;
class UPathingUtils;
class UPayCallBackCtrl;
class UPlatformSDKLoginEv;
class UPlatformSelectEvent;
class UPlayState;
class UPooledObject;
class UPostConstruct;
class UPreviewSkeletalMeshComponent;
class UProjectConfig;
class UQuery;
class UQueryEval;
class UQueryEval_Angle;
class UQueryEval_Distance;
class UQueryEval_Insight;
class UQueryEval_Navigation;
class UQuickBlackScreen;
class URadioButton;
class URealmCtrl;
class URealmListEvent;
class URecoverState;
class URegionData;
class URegionProxy;
class URegisterCommand;
class URegisterCtrl;
class URelogin_AuthState;
class URelogin_BaseState;
class URelogin_DialState;
class URelogin_SignInState;
class URelogin_VerifyState;
class URenderTargetHelperLibrary;
class UReplayNavigator;
class URequestPayCtrl;
class UReturnState;
class URidderAnimInstance;
class URootMotionAccumulate;
class USDKLoginCtrl;
class USaveGameBase;
class USaveGameCrypto;
class USaveUtils;
class UScenarioReplay;
class USceneAccessSystem;
class USceneCacheSystem;
class USceneCameraSettingComponent;
class USceneCommandExecute;
class USceneCommandQueue;
class USceneCommandSystem;
class USceneCustomData;
class USceneFlowDecorate;
class USceneFlowSystem;
class USceneFlowWalker;
class USceneFlowWalker_Common;
class USceneFlowWalker_PathCost;
class USceneFlowWorker;
class USceneFlowWorker_Dummy;
class USceneFlowWorker_Logical;
class USceneInputComponent;
class USceneInputSystem;
class USceneObjectState;
class USceneObjectSystem;
class UScenePawnState;
class UScenePreview;
class USceneSequenceModifierBase;
class USceneStageBase;
class USceneSubsystem;
class USceneSubsystemManager;
class USceneSystemEvent;
class USceneSystemState;
class USceneTaskObject;
class USceneTaskPool;
class USceneTaskSystem;
class USceneUnitLookAtComponent;
class USceneUtils;
class UScreenProjector;
class UScriptDestroy;
class UScrollSceneCellFactory;
class USecretBook;
class USelectPlatformCtrl;
class USequenceProcessInfo;
class UServerClassify;
class UServerData;
class UServerFlagConfig;
class USettingServerIdCtrl;
class USharedStageWidget;
class USignificanceComponent;
class USimpleFade;
class USimpleMechanismComponent;
class USimpleMovementComponent;
class USkinDataAsset;
class USkinDataAssetBase;
class USkinLibrary;
class USlotLibrary;
class USneakAttackSequenceModifier;
class USpineDataAsset;
class USpineHelperLibrary;
class USpineImageRenderComponent;
class USpineMaterialSet;
class USpineTextRenderComponent;
class USplashMovieState;
class USplashState;
class UStageLibrary;
class UStageLoadScript;
class UStageLoadState;
class UStageManager;
class UStageScript;
class UStageTask;
class UStageVisitor;
class UStageWidget;
class UStartupState;
class UStateMachine_Game;
class UStateMachine_Main;
class UStateQueue_Init;
class UStateQueue_Login;
class UStateQueue_Relogin;
class UStateQueue_Restart;
class UStoryAnimBlendWeight;
class UStoryAnimInstance;
class UStoryNPCSlotComponent;
class UStoryPostAnimInstance;
class UStoryTempleteCameraComponent;
class UStringHelper;
class USubworld;
class USubworldManager;
class USuspendState;
class USysBus;
class USysCtrl;
class USysEvent;
class UTapBillboardBadgeEvent;
class UTapDBTrackEventCtrl;
class UTapSDKLibrary;
class UTaskBatchedUI;
class UTaskCleanMode;
class UTaskCloseStage;
class UTaskLayoutUI;
class UTaskOpenStage;
class UTaskResetAllUI;
class UTextHelperLibrary;
class UTextureUtils;
class UTowerClueDataAsset;
class UTowerReplay;
class UTraceItemRemain;
class UTransitionWidget;
class UUIManager;
class UUIScript;
class UULookAtUtils;
class UUnLuaUtils;
class UUnitPreviewAnimInstance;
class UUnitSkeletalMeshComponent;
class UUnluaWidgetComponent;
class UUpdateState;
class UUpdateTraceItem;
class UValidateState;
class UVehicleMovementComponent;
class UVersionState;
class UViewContext;
class UViewFramework;
class UVirtualKeyboardZone;
class UVirtualKeyboardZoneSlot;
class UWidgetLoadScript;
class UWidgetUtils;
class UWiremapAnimPool;
class UWiremapEdge;
class UWiremapEdgeAnim;
class UWiremapEdgeFactory;
class UWiremapMeshBuilder;
class UWiremapRenderComponent;
class UWiremapVertex;
class UWorldTraceComponent;
class UWorldTraceWidget;
class UWwiseAudioLibrary;
class UXDDataPushDataCtrl;
class UXDSilentLibrary;

/// Enum /Script/GameUE.EStageRes
/// Size: 0x01 (1 bytes)
enum class EStageRes : uint8_t
{
	EStageRes__Succeed                                                               = 0,
	EStageRes__Failed                                                                = 1,
	EStageRes__Canceled                                                              = 2
};

/// Enum /Script/GameUE.EUIStyle
/// Size: 0x01 (1 bytes)
enum class EUIStyle : uint8_t
{
	EUIStyle__Common                                                                 = 0,
	EUIStyle__FullScreen                                                             = 1,
	EUIStyle__Complex                                                                = 2,
	EUIStyle__Overlay                                                                = 3,
	EUIStyle__None                                                                   = 4
};

/// Enum /Script/GameUE.ESceneBlockType
/// Size: 0x01 (1 bytes)
enum class ESceneBlockType : uint8_t
{
	ESceneBlockType__NeverBlock                                                      = 0,
	ESceneBlockType__Translucent                                                     = 1,
	ESceneBlockType__ShouldBlock                                                     = 2
};

/// Enum /Script/GameUE.ESubworldLevelControl
/// Size: 0x01 (1 bytes)
enum class ESubworldLevelControl : uint8_t
{
	ESubworldLevelControl__Inherit                                                   = 0,
	ESubworldLevelControl__Unload                                                    = 1,
	ESubworldLevelControl__Invisible                                                 = 2,
	ESubworldLevelControl__Visible                                                   = 3
};

/// Enum /Script/GameUE.EAnimEvent
/// Size: 0x01 (1 bytes)
enum class EAnimEvent : uint8_t
{
	EAnimEvent__Forward                                                              = 0,
	EAnimEvent__ForwardEnd                                                           = 1,
	EAnimEvent__Back                                                                 = 2,
	EAnimEvent__BackEnd                                                              = 3,
	EAnimEvent__Damage                                                               = 4,
	EAnimEvent__Heal                                                                 = 5,
	EAnimEvent__Buff                                                                 = 6,
	EAnimEvent__Shake                                                                = 7,
	EAnimEvent__Throw                                                                = 8,
	EAnimEvent__Fx                                                                   = 9,
	EAnimEvent__Seq                                                                  = 10,
	EAnimEvent__Death                                                                = 11,
	EAnimEvent__Up                                                                   = 12,
	EAnimEvent__Fall                                                                 = 13,
	EAnimEvent__AgentRise                                                            = 14,
	EAnimEvent__AgentFall                                                            = 15,
	EAnimEvent__IdleSway                                                             = 16,
	EAnimEvent_____EnvEvent___                                                       = 17,
	EAnimEvent__TargetNum                                                            = 18,
	EAnimEvent__BuffEnd                                                              = 19,
	EAnimEvent__Shield                                                               = 20,
	EAnimEvent__SkillReady_CameraShake                                               = 21,
	EAnimEvent__Skill_Fake_Finish                                                    = 22,
	EAnimEvent__HitSlomo                                                             = 23,
	EAnimEvent__RotateBackForRanger                                                  = 24,
	EAnimEvent__AnimStartPosition                                                    = 25,
	EAnimEvent__FakeDamage                                                           = 26,
	EAnimEvent__HurtMaxAmplitude                                                     = 27
};

/// Enum /Script/GameUE.EAnimateSpriteSlot
/// Size: 0x01 (1 bytes)
enum class EAnimateSpriteSlot : uint8_t
{
	EAnimateSpriteSlot__Default                                                      = 0,
	EAnimateSpriteSlot__AnimSequence                                                 = 1,
	EAnimateSpriteSlot__Scene                                                        = 2,
	EAnimateSpriteSlot__Storyline                                                    = 3,
	EAnimateSpriteSlot__Sequence                                                     = 4,
	EAnimateSpriteSlot__Max                                                          = 5
};

/// Enum /Script/GameUE.EHurtAnimType
/// Size: 0x01 (1 bytes)
enum class EHurtAnimType : uint8_t
{
	EHurtAnimType__Hurt1                                                             = 0,
	EHurtAnimType__Hurt2                                                             = 1,
	EHurtAnimType__NoHurt                                                            = 2,
	EHurtAnimType__Random                                                            = 3
};

/// Enum /Script/GameUE.EBattleRelativeTransformSpace
/// Size: 0x01 (1 bytes)
enum class EBattleRelativeTransformSpace : uint8_t
{
	EBattleRelativeTransformSpace__RTS_World                                         = 0,
	EBattleRelativeTransformSpace__RTS_BattleLocal                                   = 1
};

/// Enum /Script/GameUE.EGamePlatformType
/// Size: 0x01 (1 bytes)
enum class EGamePlatformType : uint8_t
{
	EGamePlatformType__Windows                                                       = 0,
	EGamePlatformType__Mac                                                           = 1,
	EGamePlatformType__Android                                                       = 2,
	EGamePlatformType__IOS                                                           = 3,
	EGamePlatformType__Unknown                                                       = 4
};

/// Enum /Script/GameUE.EGameBuildConfigure
/// Size: 0x01 (1 bytes)
enum class EGameBuildConfigure : uint8_t
{
	EGameBuildConfigure__Debug                                                       = 0,
	EGameBuildConfigure__Development                                                 = 1,
	EGameBuildConfigure__Test                                                        = 2,
	EGameBuildConfigure__Shipping                                                    = 3
};

/// Enum /Script/GameUE.ECameraAdaptType
/// Size: 0x04 (4 bytes)
enum class ECameraAdaptType : uint32_t
{
	ECameraAdaptType__General                                                        = 0,
	ECameraAdaptType__Horizontal                                                     = 1,
	ECameraAdaptType__Vertical                                                       = 2,
	ECameraAdaptType__Clipping                                                       = 3
};

/// Enum /Script/GameUE.ECameraPriority
/// Size: 0x01 (1 bytes)
enum class ECameraPriority : uint8_t
{
	ECameraPriority__Priority_Base                                                   = 0,
	ECameraPriority__Priority_Story                                                  = 1,
	ECameraPriority__Priority_UI                                                     = 10
};

/// Enum /Script/GameUE.EBattleUnitSide
/// Size: 0x01 (1 bytes)
enum class EBattleUnitSide : uint8_t
{
	EBattleUnitSide__None                                                            = 0,
	EBattleUnitSide__FriendSide                                                      = 1,
	EBattleUnitSide__EnemySide                                                       = 2
};

/// Enum /Script/GameUE.EPullAwayDirection
/// Size: 0x04 (4 bytes)
enum class EPullAwayDirection : uint32_t
{
	EPullAwayDirection__CameraLocalSpace                                             = 0,
	EPullAwayDirection__BlendByDirectionAlpha                                        = 1
};

/// Enum /Script/GameUE.ECameraLookAtType
/// Size: 0x01 (1 bytes)
enum class ECameraLookAtType : uint8_t
{
	ECameraLookAtType__None                                                          = 0,
	ECameraLookAtType__LookAtMidPoint                                                = 1,
	ECameraLookAtType__LookAtMidAngle                                                = 2
};

/// Enum /Script/GameUE.EEnterStateResetFlag
/// Size: 0x01 (1 bytes)
enum class EEnterStateResetFlag : uint8_t
{
	EEnterStateResetFlag__RESET_None                                                 = 0,
	EEnterStateResetFlag__RESET_ActionType                                           = 1,
	EEnterStateResetFlag__RESET_StateType                                            = 2,
	EEnterStateResetFlag__RESET_SkillId                                              = 4,
	EEnterStateResetFlag__RESET_Stage                                                = 8,
	EEnterStateResetFlag__RESET_Branch                                               = 16,
	EEnterStateResetFlag__RESET_Break                                                = 32
};

/// Enum /Script/GameUE.ECompositEventOp
/// Size: 0x01 (1 bytes)
enum class ECompositEventOp : uint8_t
{
	ECompositEventOp__Op_Base                                                        = 0,
	ECompositEventOp__Op_State                                                       = 1,
	ECompositEventOp__Op_And                                                         = 2,
	ECompositEventOp__Op_Or                                                          = 3,
	ECompositEventOp__Op_Output                                                      = 4
};

/// Enum /Script/GameUE.EInputActionName
/// Size: 0x01 (1 bytes)
enum class EInputActionName : uint8_t
{
	EInputActionName__MoveForward                                                    = 0,
	EInputActionName__MoveRight                                                      = 1,
	EInputActionName__Scale                                                          = 2,
	EInputActionName__TurnRateRight                                                  = 3,
	EInputActionName__TurnRateUp                                                     = 4,
	EInputActionName__Alt                                                            = 5,
	EInputActionName__MouseRight                                                     = 6,
	EInputActionName__MouseLeftPressed                                               = 7,
	EInputActionName__MouseLeftReleased                                              = 8,
	EInputActionName__MouseX                                                         = 9,
	EInputActionName__MouseY                                                         = 10,
	EInputActionName__GamePadFaceButtonBottom                                        = 11,
	EInputActionName__GamePadFaceButtonRight                                         = 12,
	EInputActionName__GamePadFaceButtonTop                                           = 13,
	EInputActionName__GamePadFaceButtonLeft                                          = 14,
	EInputActionName__GamePadDPadUp                                                  = 15,
	EInputActionName__GamePadDPadRight                                               = 16,
	EInputActionName__GamePadDPadDown                                                = 17,
	EInputActionName__GamePadDPadLeft                                                = 18,
	EInputActionName__GamePadLB                                                      = 19,
	EInputActionName__GamePadRB                                                      = 20,
	EInputActionName__GamePadLT                                                      = 21,
	EInputActionName__GamePadRT                                                      = 22,
	EInputActionName__GamePadLS                                                      = 23,
	EInputActionName__GamePadRS                                                      = 24,
	EInputActionName__GamePadStart                                                   = 25,
	EInputActionName__GamePadSelect                                                  = 26,
	EInputActionName__GamePadX                                                       = 27,
	EInputActionName__GamePadY                                                       = 28,
	EInputActionName__GamePadA                                                       = 29,
	EInputActionName__GamePadB                                                       = 30
};

/// Enum /Script/GameUE.EGamePadModel
/// Size: 0x01 (1 bytes)
enum class EGamePadModel : uint8_t
{
	EGamePadModel__None                                                              = 0,
	EGamePadModel__XBox                                                              = 1,
	EGamePadModel__PS                                                                = 2
};

/// Enum /Script/GameUE.EInputModel
/// Size: 0x01 (1 bytes)
enum class EInputModel : uint8_t
{
	EInputModel__TOUCH                                                               = 0,
	EInputModel__KEYBOARD                                                            = 1,
	EInputModel__GAMEPAD                                                             = 2
};

/// Enum /Script/GameUE.EGameCommandType
/// Size: 0x01 (1 bytes)
enum class EGameCommandType : uint8_t
{
	EGameCommandType__CMD_DialogControl                                              = 0,
	EGameCommandType__CMD_BeginGame                                                  = 1,
	EGameCommandType__CMD_Suspended                                                  = 2,
	EGameCommandType__CMD_Awoken                                                     = 3,
	EGameCommandType__CMD_Register                                                   = 4,
	EGameCommandType__CMD_PlatformLogin                                              = 5,
	EGameCommandType__CMD_Restart                                                    = 6
};

/// Enum /Script/GameUE.EGameplay_RequestState
/// Size: 0x01 (1 bytes)
enum class EGameplay_RequestState : uint8_t
{
	EGameplay_RequestState__RS_None                                                  = 0,
	EGameplay_RequestState__RS_WaitResponse                                          = 1,
	EGameplay_RequestState__RS_Succeed                                               = 2,
	EGameplay_RequestState__RS_Failed                                                = 3
};

/// Enum /Script/GameUE.EUnitMoveMode
/// Size: 0x01 (1 bytes)
enum class EUnitMoveMode : uint8_t
{
	EUnitMoveMode__Walk                                                              = 0,
	EUnitMoveMode__AutoMove                                                          = 1,
	EUnitMoveMode__RootMotion                                                        = 2
};

/// Enum /Script/GameUE.EFixedCacheType
/// Size: 0x01 (1 bytes)
enum class EFixedCacheType : uint8_t
{
	EFixedCacheType__BaseAssets                                                      = 1,
	EFixedCacheType__Scenario                                                        = 2,
	EFixedCacheType__GlobalEnums                                                     = 3,
	EFixedCacheType__FreeTypeBegin                                                   = 50,
	EFixedCacheType__FreeTypeEnd                                                     = 200
};

/// Enum /Script/GameUE.EGameLayer
/// Size: 0x01 (1 bytes)
enum class EGameLayer : uint8_t
{
	EGameLayer__Layer_World                                                          = 0,
	EGameLayer__Layer_Game                                                           = 1,
	EGameLayer__Layer_Tips                                                           = 2,
	EGameLayer__Layer_Guide                                                          = 3,
	EGameLayer__Layer_GamePopup                                                      = 4,
	EGameLayer__Layer_GlobalEffect                                                   = 5,
	EGameLayer__Layer_GameInputBlock                                                 = 6,
	EGameLayer__Layer_Loader                                                         = 7,
	EGameLayer__Layer_BelowSystem                                                    = 8,
	EGameLayer__Layer_System                                                         = 9,
	EGameLayer__Layer_OverSystem                                                     = 10,
	EGameLayer__Layer_AfkWidget                                                      = 11,
	EGameLayer__Layer_Notice                                                         = 12,
	EGameLayer__Layer_Max                                                            = 13
};

/// Enum /Script/GameUE.ELevelNavMode
/// Size: 0x01 (1 bytes)
enum class ELevelNavMode : uint8_t
{
	ELevelNavMode__None                                                              = 0,
	ELevelNavMode__Static                                                            = 1,
	ELevelNavMode__DynamicModifiersOnly                                              = 2,
	ELevelNavMode__Dynamic                                                           = 3
};

/// Enum /Script/GameUE.ELevelGender
/// Size: 0x01 (1 bytes)
enum class ELevelGender : uint8_t
{
	ELevelGender__Female                                                             = 0,
	ELevelGender__Male                                                               = 1
};

/// Enum /Script/GameUE.ERunModel
/// Size: 0x01 (1 bytes)
enum class ERunModel : uint8_t
{
	ERunModel__Editor                                                                = 0,
	ERunModel__Development                                                           = 1,
	ERunModel__Shipping                                                              = 2
};

/// Enum /Script/GameUE.ELevelType
/// Size: 0x01 (1 bytes)
enum class ELevelType : uint8_t
{
	ELevelType__Default                                                              = 0,
	ELevelType__Dynamic                                                              = 1,
	ELevelType__DynamicStandalone                                                    = 2
};

/// Enum /Script/GameUE.EPlatformForLua
/// Size: 0x01 (1 bytes)
enum class EPlatformForLua : uint8_t
{
	EPlatformForLua__PLATFORM_UNDEFINE_LUA                                           = 0,
	EPlatformForLua__PLATFORM_IOS_LUA                                                = 1,
	EPlatformForLua__PLATFORM_ANDROID_LUA                                            = 2,
	EPlatformForLua__PLATFORM_WINDOWS_LUA                                            = 3
};

/// Enum /Script/GameUE.EMechanismTriggerType
/// Size: 0x01 (1 bytes)
enum class EMechanismTriggerType : uint8_t
{
	EMechanismTriggerType__Direct                                                    = 0,
	EMechanismTriggerType__UI                                                        = 1,
	EMechanismTriggerType__Monster                                                   = 2
};

/// Enum /Script/GameUE.EDungeonUnitGenerateType
/// Size: 0x01 (1 bytes)
enum class EDungeonUnitGenerateType : uint8_t
{
	EDungeonUnitGenerateType__Default                                                = 0,
	EDungeonUnitGenerateType__Trigger                                                = 1,
	EDungeonUnitGenerateType__AfterBattle                                            = 2
};

/// Enum /Script/GameUE.EMonsterGenerateType
/// Size: 0x01 (1 bytes)
enum class EMonsterGenerateType : uint8_t
{
	EMonsterGenerateType__Default                                                    = 0,
	EMonsterGenerateType__Trigger                                                    = 1,
	EMonsterGenerateType__PreGenerator                                               = 2
};

/// Enum /Script/GameUE.EMonsterPatrolType
/// Size: 0x01 (1 bytes)
enum class EMonsterPatrolType : uint8_t
{
	EMonsterPatrolType__Random                                                       = 0,
	EMonsterPatrolType__WayPoints                                                    = 1
};

/// Enum /Script/GameUE.EMapNavPointType
/// Size: 0x01 (1 bytes)
enum class EMapNavPointType : uint8_t
{
	EMapNavPointType__None                                                           = 0,
	EMapNavPointType__Start                                                          = 1,
	EMapNavPointType__End                                                            = 2,
	EMapNavPointType__Straigtht                                                      = 3,
	EMapNavPointType__Circle                                                         = 4,
	EMapNavPointType__Custom                                                         = 5
};

/// Enum /Script/GameUE.EMarkerType
/// Size: 0x01 (1 bytes)
enum class EMarkerType : uint8_t
{
	EMarkerType__Default                                                             = 0,
	EMarkerType__Trigger                                                             = 1,
	EMarkerType__Monster                                                             = 2,
	EMarkerType__TaskPointer                                                         = 3,
	EMarkerType__TaskArea                                                            = 4,
	EMarkerType__Interact                                                            = 5,
	EMarkerType__Tower                                                               = 6
};

/// Enum /Script/GameUE.EMovableGeoType
/// Size: 0x01 (1 bytes)
enum class EMovableGeoType : uint8_t
{
	EMovableGeoType__Spline                                                          = 0,
	EMovableGeoType__Rotate                                                          = 1
};

/// Enum /Script/GameUE.EPlatformLoginType
/// Size: 0x01 (1 bytes)
enum class EPlatformLoginType : uint8_t
{
	EPlatformLoginType__Taptap                                                       = 0,
	EPlatformLoginType__Google                                                       = 1,
	EPlatformLoginType__Apple                                                        = 2,
	EPlatformLoginType__Phone                                                        = 3,
	EPlatformLoginType__Email                                                        = 4,
	EPlatformLoginType__Guest                                                        = 5,
	EPlatformLoginType__Max                                                          = 6
};

/// Enum /Script/GameUE.EPlatformInterface
/// Size: 0x01 (1 bytes)
enum class EPlatformInterface : uint8_t
{
	EPlatformInterface__Taptap                                                       = 0,
	EPlatformInterface__Google                                                       = 1,
	EPlatformInterface__Apple                                                        = 2,
	EPlatformInterface__Develop                                                      = 3,
	EPlatformInterface__Phone                                                        = 4,
	EPlatformInterface__Email                                                        = 5,
	EPlatformInterface__Guest                                                        = 6,
	EPlatformInterface__Max                                                          = 7
};

/// Enum /Script/GameUE.EQueryFilterMethod
/// Size: 0x01 (1 bytes)
enum class EQueryFilterMethod : uint8_t
{
	EQueryFilterMethod__Filter_Less                                                  = 0,
	EQueryFilterMethod__Filter_LessEq                                                = 1,
	EQueryFilterMethod__Filter_Least                                                 = 2,
	EQueryFilterMethod__Filter_Greater                                               = 3,
	EQueryFilterMethod__Filter_GreaterEq                                             = 4,
	EQueryFilterMethod__Filter_Greatest                                              = 5,
	EQueryFilterMethod__Filter_Equal                                                 = 6,
	EQueryFilterMethod__Filter_True                                                  = 7,
	EQueryFilterMethod__Filter_False                                                 = 8,
	EQueryFilterMethod__Filter_AllBit                                                = 9,
	EQueryFilterMethod__Filter_AnyBit                                                = 10,
	EQueryFilterMethod__Filter_NonBit                                                = 11
};

/// Enum /Script/GameUE.EScenarioActionType
/// Size: 0x01 (1 bytes)
enum class EScenarioActionType : uint8_t
{
	EScenarioActionType__General                                                     = 0,
	EScenarioActionType__Ride                                                        = 1,
	EScenarioActionType__Leap                                                        = 2,
	EScenarioActionType__Crash                                                       = 3
};

/// Enum /Script/GameUE.EObjectFocusType
/// Size: 0x01 (1 bytes)
enum class EObjectFocusType : uint8_t
{
	EObjectFocusType__Time                                                           = 0,
	EObjectFocusType__Area                                                           = 1
};

/// Enum /Script/GameUE.EArmControlOption
/// Size: 0x01 (1 bytes)
enum class EArmControlOption : uint8_t
{
	EArmControlOption__ArmPitchAutoRecover                                           = 0,
	EArmControlOption__ArmLengthAutoRecover                                          = 1,
	EArmControlOption__ArmLength                                                     = 2,
	EArmControlOption__ArmYaw                                                        = 3,
	EArmControlOption__ArmPitch                                                      = 4,
	EArmControlOption__ArmSocketOffset                                               = 5,
	EArmControlOption__ArmLocation                                                   = 6,
	EArmControlOption__ArmSlide                                                      = 7,
	EArmControlOption__ArmZoom                                                       = 8
};

/// Enum /Script/GameUE.ESceneBattleResult
/// Size: 0x01 (1 bytes)
enum class ESceneBattleResult : uint8_t
{
	ESceneBattleResult__Res_None                                                     = 0,
	ESceneBattleResult__Res_Win                                                      = 1,
	ESceneBattleResult__Res_Lose                                                     = 2,
	ESceneBattleResult__Res_Remove                                                   = 3,
	ESceneBattleResult__Res_Failed                                                   = 4
};

/// Enum /Script/GameUE.ESceneTaskType
/// Size: 0x01 (1 bytes)
enum class ESceneTaskType : uint8_t
{
	ESceneTaskType__TYPE_General                                                     = 0,
	ESceneTaskType__TYPE_Storyline                                                   = 1,
	ESceneTaskType__TYPE_Battle                                                      = 2,
	ESceneTaskType__TYPE_Guide                                                       = 3,
	ESceneTaskType__TYPE_Remote                                                      = 4
};

/// Enum /Script/GameUE.ESignificanceEval
/// Size: 0x01 (1 bytes)
enum class ESignificanceEval : uint8_t
{
	ESignificanceEval__ByArea                                                        = 0,
	ESignificanceEval__ByDistance                                                    = 1
};

/// Enum /Script/GameUE.ESkinMode
/// Size: 0x01 (1 bytes)
enum class ESkinMode : uint8_t
{
	ESkinMode__Battle                                                                = 0,
	ESkinMode__BattleShadow                                                          = 1,
	ESkinMode__Preview                                                               = 2,
	ESkinMode__ArenaDeploy                                                           = 3,
	ESkinMode__ClothPreview                                                          = 4,
	ESkinMode__Cloth                                                                 = 5
};

/// Enum /Script/GameUE.EStorySoundInjectType
/// Size: 0x01 (1 bytes)
enum class EStorySoundInjectType : uint8_t
{
	EStorySoundInjectType__BGM                                                       = 0,
	EStorySoundInjectType__SoundEffect                                               = 1
};

/// Enum /Script/GameUE.EStorySoundTriggerType
/// Size: 0x01 (1 bytes)
enum class EStorySoundTriggerType : uint8_t
{
	EStorySoundTriggerType__Start                                                    = 0,
	EStorySoundTriggerType__End                                                      = 1,
	EStorySoundTriggerType__Dialog                                                   = 2,
	EStorySoundTriggerType__Sequence                                                 = 3
};

/// Enum /Script/GameUE.EStoryNPCState
/// Size: 0x01 (1 bytes)
enum class EStoryNPCState : uint8_t
{
	EStoryNPCState__UnSpawn                                                          = 0,
	EStoryNPCState__Hide                                                             = 1,
	EStoryNPCState__Spawn                                                            = 2
};

/// Enum /Script/GameUE.ETapBillboardEnum
/// Size: 0x01 (1 bytes)
enum class ETapBillboardEnum : uint8_t
{
	ETapBillboardEnum__NORMAL                                                        = 0,
	ETapBillboardEnum__SPLASH                                                        = 1,
	ETapBillboardEnum__MARQUEE                                                       = 2
};

/// Enum /Script/GameUE.EServerSort
/// Size: 0x01 (1 bytes)
enum class EServerSort : uint8_t
{
	EServerSort__SERVER_ID_ASC                                                       = 0,
	EServerSort__SERVER_ID_DESC                                                      = 1,
	EServerSort__OPEN_DATE_DESC                                                      = 2
};

/// Enum /Script/GameUE.ESysCtrl
/// Size: 0x01 (1 bytes)
enum class ESysCtrl : uint8_t
{
	ESysCtrl__SC_DEV_LOGIN                                                           = 0,
	ESysCtrl__SC_REALM                                                               = 1,
	ESysCtrl__SC_BEGIN                                                               = 2,
	ESysCtrl__SC_PATCH                                                               = 3,
	ESysCtrl__SC_REGIST                                                              = 4,
	ESysCtrl__SC_DIALOG                                                              = 5,
	ESysCtrl__SC_CANCEL_REG                                                          = 6,
	ESysCtrl__SC_CLEANUP                                                             = 7,
	ESysCtrl__SC_SDK_LOGIN                                                           = 8,
	ESysCtrl__SC_ACCOUNT_CENTER                                                      = 9,
	ESysCtrl__SC_SDK_LOGOUT                                                          = 10,
	ESysCtrl__SC_SDK_AccountType                                                     = 11,
	ESysCtrl__SC_SDK_Request_Pay                                                     = 12,
	ESysCtrl__SC_SDK_Pay_Call_Back                                                   = 13,
	ESysCtrl__SC_SDK_TapDB_Track_Event                                               = 14,
	ESysCtrl__SC_Setting_Server_Id                                                   = 15,
	ESysCtrl__SC_SDK_Open_TapBillboard                                               = 16,
	ESysCtrl__SC_XDData_Push_Data_Event                                              = 17,
	ESysCtrl__SC_SDK_Account_Cancellation                                            = 18,
	ESysCtrl__SC_Request_Maintenance                                                 = 19,
	ESysCtrl__SC_Select_Platform                                                     = 20,
	ESysCtrl__SC_IntroOK                                                             = 21,
	ESysCtrl__SC_SplashFinish                                                        = 22,
	ESysCtrl__SC_GameLogOut                                                          = 23,
	ESysCtrl__SC_SDK_Support                                                         = 24
};

/// Enum /Script/GameUE.EDialogStyle
/// Size: 0x01 (1 bytes)
enum class EDialogStyle : uint8_t
{
	EDialogStyle__Style_Ok                                                           = 0,
	EDialogStyle__Style_OkCancel                                                     = 1,
	EDialogStyle__Style_Yes                                                          = 2,
	EDialogStyle__Style_YesNo                                                        = 3,
	EDialogStyle__Style_OkNClose                                                     = 4
};

/// Enum /Script/GameUE.ESysEv
/// Size: 0x01 (1 bytes)
enum class ESysEv : uint8_t
{
	ESysEv__SE_DIALOG                                                                = 0,
	ESysEv__SE_PLAY                                                                  = 1,
	ESysEv__SE_PATCH                                                                 = 2,
	ESysEv__SE_PATCHUP                                                               = 3,
	ESysEv__SE_ENTRY                                                                 = 4,
	ESysEv__SE_REALM                                                                 = 5,
	ESysEv__SE_SELECT_PLATFORM                                                       = 6,
	ESysEv__SE_CLOSE_PLATFORM                                                        = 7,
	ESysEv__SE_MAINTAIN_BLOCK                                                        = 8,
	ESysEv__SE_PRE_SDK_LOGIN                                                         = 9,
	ESysEv__SE_DEV_LOGIN                                                             = 10,
	ESysEv__SE_LOGIN_VIEW                                                            = 11,
	ESysEv__SE_RESTART_VIEW                                                          = 12,
	ESysEv__SE_INIT                                                                  = 13,
	ESysEv__SE_DIALOG_CLOSE                                                          = 14,
	ESysEv__SE_ERROR_CHECKPATCH                                                      = 15,
	ESysEv__SE_ERROR_INSTALLPATCH                                                    = 16,
	ESysEv__SE_REGISTER                                                              = 17,
	ESysEv__SE_REGISTER_FAIL                                                         = 18,
	ESysEv__SE_REGISTER_SUCC                                                         = 19,
	ESysEv__SE_SPLASH                                                                = 20,
	ESysEv__SE_TAPBILLBOARD_BADGE                                                    = 21,
	ESysEv__SE_OPEN_ANNOUNCEMENT                                                     = 22,
	ESysEv__SE_LOGIN_RESTART                                                         = 23
};

/// Enum /Script/GameUE.EUIMemoryOpt
/// Size: 0x01 (1 bytes)
enum class EUIMemoryOpt : uint8_t
{
	EUIMemoryOpt__Opt_None                                                           = 0,
	EUIMemoryOpt__Opt_Cached                                                         = 1,
	EUIMemoryOpt__Opt_Transition                                                     = 2
};

/// Enum /Script/GameUE.EUIRenderOpt
/// Size: 0x01 (1 bytes)
enum class EUIRenderOpt : uint8_t
{
	EUIRenderOpt__Opt_None                                                           = 0,
	EUIRenderOpt__Opt_BlockScene                                                     = 1
};

/// Enum /Script/GameUE.EPreviewUIState
/// Size: 0x01 (1 bytes)
enum class EPreviewUIState : uint8_t
{
	EPreviewUIState__Idle                                                            = 0,
	EPreviewUIState__G                                                               = 1,
	EPreviewUIState__Chip                                                            = 2
};

/// Enum /Script/GameUE.EOffScreenLayoutMethod
/// Size: 0x01 (1 bytes)
enum class EOffScreenLayoutMethod : uint8_t
{
	EOffScreenLayoutMethod__Layout_Anchored                                          = 0,
	EOffScreenLayoutMethod__Layout_Border                                            = 1,
	EOffScreenLayoutMethod__Layout_Box                                               = 2,
	EOffScreenLayoutMethod__Layout_Circle                                            = 3,
	EOffScreenLayoutMethod__Layout_Oval                                              = 4
};

#pragma pack(pop)


static_assert(sizeof(AAccessVolume) == 0x0278); // 632 bytes (0x000258 - 0x000278)
static_assert(sizeof(UActorEffect) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULuaActorComponent) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UActorEffectComponent) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UActorPool) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UActorUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVehicleMovementComponent) == 0x0490); // 1168 bytes (0x000138 - 0x000490)
static_assert(sizeof(UAIVehicleMovementComponent) == 0x0490); // 1168 bytes (0x000490 - 0x000490)
static_assert(sizeof(UAnimateSpriteInstance) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UAnimateSpriteComponent) == 0x02D0); // 720 bytes (0x0001F8 - 0x0002D0)
static_assert(sizeof(UAnimNotify_Event) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UAnimFXNotify_Event) == 0x00B0); // 176 bytes (0x000070 - 0x0000B0)
static_assert(sizeof(UAnimNotify_AnimateSprite) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UAnimNotify_CvEvent) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UAnimNotify_PlaySoftParticleEffect) == 0x00C0); // 192 bytes (0x000038 - 0x0000C0)
static_assert(sizeof(UAnimNotify_FakePlaySoftParticleEffect) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UAnimNotify_SlomoEvent) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UAnimNotify_Sound) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UAnimNotifyState_AnimateSprite) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAnimNotifyState_SoftParticleTimedEffect) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UAnimNotifyState_SoftParticleTrail) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UAnimTextBlock) == 0x0320); // 800 bytes (0x000148 - 0x000320)
static_assert(sizeof(UAnimUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAssetCacheLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AAudioIndoorVolume) == 0x0280); // 640 bytes (0x000258 - 0x000280)
static_assert(sizeof(UAutomationAgent) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UAutomationController) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAutomationHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHotInputInfo) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UBaseInputComponent) == 0x02E0); // 736 bytes (0x0000B0 - 0x0002E0)
static_assert(sizeof(ALuaActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(FSimpleOscillator) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(ABattleActor) == 0x0340); // 832 bytes (0x000220 - 0x000340)
static_assert(sizeof(UBattleAnimComponent) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(ABattleCameraActor) == 0x07B0); // 1968 bytes (0x0007A0 - 0x0007B0)
static_assert(sizeof(UBattleCameraShake) == 0x0190); // 400 bytes (0x000178 - 0x000190)
static_assert(sizeof(ABattleEnvRoot) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(FDissolveParamInfo) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FMaterialParamValueMap) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(UBattleMaterialComponent) == 0x0390); // 912 bytes (0x0000B0 - 0x000390)
static_assert(sizeof(UBattleSequenceCameraModifier) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(ABattleSequenceConfigManager) == 0x03B0); // 944 bytes (0x000220 - 0x0003B0)
static_assert(sizeof(UBattleSequenceLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBattleSequenceTransformModifier) == 0x03C0); // 960 bytes (0x0000D8 - 0x0003C0)
static_assert(sizeof(FTransformInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UBattleSequenceTransformState) == 0x01A0); // 416 bytes (0x000028 - 0x0001A0)
static_assert(sizeof(UBlueprintableBoxComponent) == 0x0490); // 1168 bytes (0x000490 - 0x000490)
static_assert(sizeof(UBlueprintableSphereComponent) == 0x0490); // 1168 bytes (0x000490 - 0x000490)
static_assert(sizeof(UBuildInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCameraAdaptorComponent) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UCameraLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCameraManaged) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCameraBlend) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(ACameraManager) == 0x0300); // 768 bytes (0x000220 - 0x000300)
static_assert(sizeof(UCameraMaskTransparencyComponent) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(ACameraMotion_Base) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(FCameraAgtSkillData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(ACameraMotion_AgtSkill) == 0x02D0); // 720 bytes (0x000228 - 0x0002D0)
static_assert(sizeof(FCameraHitAwayData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(ACameraMotion_HitAway) == 0x02E0); // 736 bytes (0x000228 - 0x0002E0)
static_assert(sizeof(FCameraSkillPerformData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(ACameraMotion_SkillPerform) == 0x02F0); // 752 bytes (0x000228 - 0x0002F0)
static_assert(sizeof(FCameraSkillSwayData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FCameraDistanceData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCameraRotateData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(ACameraMotion_SkillSway) == 0x0398); // 920 bytes (0x000228 - 0x000398)
static_assert(sizeof(UCameraUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCDKeyReq) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FCharacterAction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UCharacterAnimInstance) == 0x03E0); // 992 bytes (0x0002B8 - 0x0003E0)
static_assert(sizeof(UCheatSecretWidget) == 0x02A0); // 672 bytes (0x000280 - 0x0002A0)
static_assert(sizeof(ACheatActor) == 0x02F0); // 752 bytes (0x000220 - 0x0002F0)
static_assert(sizeof(UGameStateObjectBase) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UGameStateObject) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UCleanupState) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UCloseStageAsync) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FEventItem) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UCompositEventNode) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UEventListenerObject) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UCompositEventObject) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UContextContainer) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(AContextManager) == 0x0280); // 640 bytes (0x000220 - 0x000280)
static_assert(sizeof(FContinueStateDialogInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UContinueState) == 0x00B0); // 176 bytes (0x000050 - 0x0000B0)
static_assert(sizeof(UCpp2BpUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCustomButton) == 0x05A0); // 1440 bytes (0x000588 - 0x0005A0)
static_assert(sizeof(UCustomDebugShapeComponent) == 0x0490); // 1168 bytes (0x000468 - 0x000490)
static_assert(sizeof(UCustomListView) == 0x0B10); // 2832 bytes (0x000AF8 - 0x000B10)
static_assert(sizeof(UCustomNavModifierComponent) == 0x01A0); // 416 bytes (0x000140 - 0x0001A0)
static_assert(sizeof(UCustomRichTextBlock) == 0x0880); // 2176 bytes (0x000148 - 0x000880)
static_assert(sizeof(UCustomRichTextBlockDecorator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCustomRichTextBlockImageDecorator) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCustomSafeZone) == 0x0158); // 344 bytes (0x000158 - 0x000158)
static_assert(sizeof(UCustomScrollBox) == 0x0CA0); // 3232 bytes (0x000C58 - 0x000CA0)
static_assert(sizeof(ADetailMapCollection) == 0x02D0); // 720 bytes (0x000220 - 0x0002D0)
static_assert(sizeof(ADirectionTriggerBox) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(UEdenSafeZone) == 0x0178); // 376 bytes (0x000140 - 0x000178)
static_assert(sizeof(UEdenSafeZoneSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UEdenScenarioRecorder) == 0x00E0); // 224 bytes (0x000098 - 0x0000E0)
static_assert(sizeof(UEdenTowerRecorder) == 0x00D8); // 216 bytes (0x000090 - 0x0000D8)
static_assert(sizeof(UEffectUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnterBattleSequenceUserData) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(USequenceProcessInfo) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UEtheriaDeviceInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEtheriaReportAgent) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UEtheriaSharingLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEtheriaSoundLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEthInputComponent) == 0x0248); // 584 bytes (0x0000B0 - 0x000248)
static_assert(sizeof(UEthInputSettingLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFaceLookAtComponent) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(UFadeRequest) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFadeWidget) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(UFileUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FFloorResult) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(UGeneralMovementBaseComponent) == 0x03B8); // 952 bytes (0x000138 - 0x0003B8)
static_assert(sizeof(UFloatMovementComponent) == 0x03D0); // 976 bytes (0x0003B8 - 0x0003D0)
static_assert(sizeof(FFollowCameraStateQueue) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AFollowCameraScheduler) == 0x02A8); // 680 bytes (0x000220 - 0x0002A8)
static_assert(sizeof(FFollowCameraSetting) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UFollowCameraState) == 0x0240); // 576 bytes (0x000028 - 0x000240)
static_assert(sizeof(FFrameState) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UFramePlayComponent) == 0x0290); // 656 bytes (0x0001F8 - 0x000290)
static_assert(sizeof(UFriWayPointComponent) == 0x0240); // 576 bytes (0x000230 - 0x000240)
static_assert(sizeof(UGameCommand) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDialogControlCommand) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UBeginGameCommand) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(URegisterCommand) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UGameConfig) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UGameLifeCycleLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameNavigationSwitcher) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(FPlatformedNetWorkInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPlatformSupportInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTapSDKSupportParams) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FXDSDKSupportLanguage) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UGameNetworkSettings) == 0x0128); // 296 bytes (0x000028 - 0x000128)
static_assert(sizeof(UGameplayControlLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayPrefs) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayState) == 0x0180); // 384 bytes (0x000028 - 0x000180)
static_assert(sizeof(FSignificanceConfig) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(AGameSignificance) == 0x02E0); // 736 bytes (0x000220 - 0x0002E0)
static_assert(sizeof(UGameStateMachine) == 0x0128); // 296 bytes (0x000050 - 0x000128)
static_assert(sizeof(UGameStateQueue) == 0x0088); // 136 bytes (0x000050 - 0x000088)
static_assert(sizeof(UGameStaticLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameTriggerAgentComponent) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UGameTriggerContext) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UGameTriggerContextProxy) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(UGameTriggerDecorator) == 0x02E0); // 736 bytes (0x0001F8 - 0x0002E0)
static_assert(sizeof(UGameTriggerLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULateTickComponent) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(AGameUEGameModeBase) == 0x0310); // 784 bytes (0x0002C0 - 0x000310)
static_assert(sizeof(UGameUEInstance) == 0x0260); // 608 bytes (0x0001A8 - 0x000260)
static_assert(sizeof(UEtheriaSoundSettingConfigs) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGameUEUserSettings) == 0x02C8); // 712 bytes (0x000180 - 0x0002C8)
static_assert(sizeof(AGeneralPlayerController) == 0x0570); // 1392 bytes (0x000570 - 0x000570)
static_assert(sizeof(UGeneralPlayerMovementComponent) == 0x0430); // 1072 bytes (0x0003B8 - 0x000430)
static_assert(sizeof(UGlobalAssetCache) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AGlobalEffect) == 0x03E0); // 992 bytes (0x000220 - 0x0003E0)
static_assert(sizeof(UGlobalWidget) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(UGlobalLoadWidget) == 0x02F8); // 760 bytes (0x000280 - 0x0002F8)
static_assert(sizeof(AGlowTextHelper) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(AGMActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(AGUIDActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UGyroMotionComponent) == 0x0100); // 256 bytes (0x0000B0 - 0x000100)
static_assert(sizeof(UHideArrowComponent) == 0x0490); // 1168 bytes (0x000480 - 0x000490)
static_assert(sizeof(UHotInputComponent) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(AHotUpdateHandler) == 0x03E0); // 992 bytes (0x000220 - 0x0003E0)
static_assert(sizeof(UHttpLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHyperLinkRichTextBlockDecorator) == 0x0750); // 1872 bytes (0x000028 - 0x000750)
static_assert(sizeof(UEdenCustomPreview) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMiniMapMarkerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInit_FinishState) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UInit_LuaModuleState) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UInit_LuaPackState) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UInit_ProtoState) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UInitServerState) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UInitState) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UInputWidget) == 0x0168); // 360 bytes (0x000128 - 0x000168)
static_assert(sizeof(UPooledObject) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTraceItemRemain) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUpdateTraceItem) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UJumpStartArrowComponent) == 0x0480); // 1152 bytes (0x000480 - 0x000480)
static_assert(sizeof(ULayerManager) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(ULevelBorderComponent) == 0x0470); // 1136 bytes (0x000468 - 0x000470)
static_assert(sizeof(ULevelBorderGroup) == 0x0480); // 1152 bytes (0x000468 - 0x000480)
static_assert(sizeof(ULevelHandleProxy) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULevelLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULevelListener) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULevelManager) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(FLevelReplayCommand) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ULevelReplay) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FScenarioReplayCommand) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UScenarioReplay) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UTowerReplay) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(ULevelSequenceDirectorProxy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULinkDrawComponent) == 0x0270); // 624 bytes (0x0001F8 - 0x000270)
static_assert(sizeof(ULogin_BaseState) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(ULogin_AuthState) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(ULogin_DefaultLoginState) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(ULogin_DialState) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(ULogin_LoginState) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(ULogin_MaintainState) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(ULogin_RecommendState) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(ULogin_RedirectState) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(ULogin_RegisterState) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(ULogin_RegistIntroState) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(ULogin_SelectPlatformState) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(ULogin_ServerListState) == 0x00C8); // 200 bytes (0x000058 - 0x0000C8)
static_assert(sizeof(ULogin_SignInState) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(ULogin_VerifyState) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(ULogin_WaitVerifyState) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(ULuaAssistComponent) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(ALuaBridge) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(ULuaInstanceObject) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ULuaLevelSequenceDirector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ULuaPacked) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(ULuaSceneComponent) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(ULuaSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USignificanceComponent) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(ULuaSignificanceComponent) == 0x00F0); // 240 bytes (0x0000D8 - 0x0000F0)
static_assert(sizeof(UStageWidget) == 0x02C0); // 704 bytes (0x0002A8 - 0x0002C0)
static_assert(sizeof(ULuaStageWidget) == 0x02D8); // 728 bytes (0x0002C0 - 0x0002D8)
static_assert(sizeof(ULuaTimerProxy) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(AMapNavPoint) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(sizeof(AMapRefNavPoint) == 0x0250); // 592 bytes (0x000220 - 0x000250)
static_assert(sizeof(UMapVehicleAnimInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UMaterialCurveTable) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(UMaterialMapTable) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(FMaterialTargetCache) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UMaterialModifyComponent) == 0x0188); // 392 bytes (0x0000B0 - 0x000188)
static_assert(sizeof(FModifyTarget) == 0x0118); // 280 bytes (0x000000 - 0x000118)
static_assert(sizeof(UMaterialModifyObject) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UMathUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMediaAssistActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UMediaAssistObject) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMediaPlayComponent) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(UMediaState) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMediaTransit) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UMediaStateComponent) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(UMediaStateRuntime) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UMediaStateMachine) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UMeshHelpLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMessageOverlay) == 0x02A0); // 672 bytes (0x000220 - 0x0002A0)
static_assert(sizeof(FFogDrawCommandBatch) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMiniMapFogLayerWidget) == 0x0458); // 1112 bytes (0x0002C0 - 0x000458)
static_assert(sizeof(UMiniMapMarkerComponent) == 0x0500); // 1280 bytes (0x000490 - 0x000500)
static_assert(sizeof(AMiniMapVolume) == 0x0278); // 632 bytes (0x000220 - 0x000278)
static_assert(sizeof(FMiniMapMarker) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMiniMapBgInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMiniMapWidget) == 0x03A8); // 936 bytes (0x0002C0 - 0x0003A8)
static_assert(sizeof(UMonsterAnimInstance) == 0x02D0); // 720 bytes (0x0002B8 - 0x0002D0)
static_assert(sizeof(UMonsterDetectionViewComponent) == 0x04A0); // 1184 bytes (0x000468 - 0x0004A0)
static_assert(sizeof(UMotorMovementComponent) == 0x04B0); // 1200 bytes (0x000490 - 0x0004B0)
static_assert(sizeof(UMotorSpeedControlComponent) == 0x0110); // 272 bytes (0x0000B0 - 0x000110)
static_assert(sizeof(FCustomBoxDesc) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCustomRotBoxDesc) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UMovableGeoNavModifierComponent) == 0x05B0); // 1456 bytes (0x000468 - 0x0005B0)
static_assert(sizeof(UStageLoadScript) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMovieLoadScript) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(AMovieSceneClockSourceActor) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(FSubtitleItem) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UMultiMediaPlayer) == 0x0230); // 560 bytes (0x000028 - 0x000230)
static_assert(sizeof(UMyDataTableUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNetworkCongestWidget) == 0x02A8); // 680 bytes (0x0002A8 - 0x0002A8)
static_assert(sizeof(UNotifyProxyComponent) == 0x0110); // 272 bytes (0x0000B0 - 0x000110)
static_assert(sizeof(FStoryNPCGenerateInfo) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(ANPCManager) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(UObjectHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOneVetoRule) == 0x0180); // 384 bytes (0x000028 - 0x000180)
static_assert(sizeof(UOpenStageAsync) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UOverlayMessage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOverlayMessageLayout) == 0x02C0); // 704 bytes (0x000280 - 0x0002C0)
static_assert(sizeof(AOverscreenFx) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(AOverscreenScaleFx) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UOwnerCaptureComponent) == 0x08B0); // 2224 bytes (0x0008B0 - 0x0008B0)
static_assert(sizeof(USysEvent) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPatchEvent) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UPatchState) == 0x0078); // 120 bytes (0x000050 - 0x000078)
static_assert(sizeof(UPathingUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPathObject) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(APlanarCaptureShadow) == 0x0268); // 616 bytes (0x000220 - 0x000268)
static_assert(sizeof(APlayerStartConfigActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UPlayState) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UPostConstruct) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(APostProcessController) == 0x02D0); // 720 bytes (0x000220 - 0x0002D0)
static_assert(sizeof(UPreviewSkeletalMeshComponent) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(UProjectConfig) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UQuery) == 0x0228); // 552 bytes (0x000028 - 0x000228)
static_assert(sizeof(UQueryEval) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UQueryEval_Distance) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UQueryEval_Navigation) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UQueryEval_Angle) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UActorOutline) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UQueryEval_Insight) == 0x0670); // 1648 bytes (0x000028 - 0x000670)
static_assert(sizeof(UTransitionWidget) == 0x02A0); // 672 bytes (0x000280 - 0x0002A0)
static_assert(sizeof(UQuickBlackScreen) == 0x02A0); // 672 bytes (0x0002A0 - 0x0002A0)
static_assert(sizeof(URadioButton) == 0x09A0); // 2464 bytes (0x000140 - 0x0009A0)
static_assert(sizeof(USysCtrl) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(URealmCtrl) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(URealmListEvent) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(FControlActorInfo) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(ARecombineActorsDriver) == 0x0390); // 912 bytes (0x000220 - 0x000390)
static_assert(sizeof(URecoverState) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UServerData) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(URegionData) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(URegionProxy) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(URelogin_BaseState) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(URelogin_AuthState) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(URelogin_DialState) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(URelogin_SignInState) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(URelogin_VerifyState) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(URenderTargetHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UReplayNavigator) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UReturnState) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(URidderAnimInstance) == 0x0300); // 768 bytes (0x0002B8 - 0x000300)
static_assert(sizeof(URootMotionAccumulate) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(USaveGameBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USaveGameCrypto) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USaveUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USceneSubsystem) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(USceneAccessSystem) == 0x0158); // 344 bytes (0x000058 - 0x000158)
static_assert(sizeof(USceneCacheSystem) == 0x00F8); // 248 bytes (0x000058 - 0x0000F8)
static_assert(sizeof(USceneCameraSettingComponent) == 0x0320); // 800 bytes (0x000280 - 0x000320)
static_assert(sizeof(USceneCommandExecute) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FSceneCommand) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(USceneCommandQueue) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(USceneCommandSystem) == 0x00B0); // 176 bytes (0x000058 - 0x0000B0)
static_assert(sizeof(USceneCustomData) == 0x01E0); // 480 bytes (0x000030 - 0x0001E0)
static_assert(sizeof(USceneFlowDecorate) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USceneFlowSystem) == 0x01A8); // 424 bytes (0x000058 - 0x0001A8)
static_assert(sizeof(USceneFlowWalker) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USceneFlowWalker_PathCost) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USceneFlowWalker_Common) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USceneFlowWorker) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(USceneFlowWorker_Logical) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(USceneFlowWorker_Dummy) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(USceneInputComponent) == 0x02E0); // 736 bytes (0x0002E0 - 0x0002E0)
static_assert(sizeof(USceneInputSystem) == 0x00F0); // 240 bytes (0x000058 - 0x0000F0)
static_assert(sizeof(USceneObjectState) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UGuidIndexObject) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSceneActorBucket) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(USceneObjectSystem) == 0x0168); // 360 bytes (0x000058 - 0x000168)
static_assert(sizeof(AScenePawn) == 0x02A0); // 672 bytes (0x000280 - 0x0002A0)
static_assert(sizeof(UScenePawnState) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UScenePreview) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(AScenePreviewStarter) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(USceneSequenceModifierBase) == 0x0180); // 384 bytes (0x0000D8 - 0x000180)
static_assert(sizeof(UStageScript) == 0x0190); // 400 bytes (0x000028 - 0x000190)
static_assert(sizeof(USceneStageBase) == 0x0390); // 912 bytes (0x000190 - 0x000390)
static_assert(sizeof(USceneSubsystemManager) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(USceneSystemEvent) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FTypedStateCollection) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(USceneSystemState) == 0x01C8); // 456 bytes (0x000028 - 0x0001C8)
static_assert(sizeof(USceneTaskObject) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(USceneTaskPool) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(USceneTaskSystem) == 0x00E0); // 224 bytes (0x000058 - 0x0000E0)
static_assert(sizeof(USceneUnitLookAtComponent) == 0x0158); // 344 bytes (0x0000B0 - 0x000158)
static_assert(sizeof(USceneUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ASceneVehiclePawn) == 0x02F0); // 752 bytes (0x0002A0 - 0x0002F0)
static_assert(sizeof(AScreenBrokenCapture) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(sizeof(UScreenProjector) == 0x0160); // 352 bytes (0x000028 - 0x000160)
static_assert(sizeof(AScreenshot) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(UScriptDestroy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FScrollCellInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(AScrollScene) == 0x0280); // 640 bytes (0x000220 - 0x000280)
static_assert(sizeof(AScrollSceneCell) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(UScrollSceneCellFactory) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FSecretSet) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(USecretBook) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(ASequenceHandler) == 0x0318); // 792 bytes (0x000220 - 0x000318)
static_assert(sizeof(ASequenceManager) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(sizeof(UServerFlagConfig) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USharedStageWidget) == 0x02B8); // 696 bytes (0x0002A8 - 0x0002B8)
static_assert(sizeof(USimpleFade) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(USimpleMechanismComponent) == 0x0490); // 1168 bytes (0x000490 - 0x000490)
static_assert(sizeof(USimpleMovementComponent) == 0x03C0); // 960 bytes (0x0003B8 - 0x0003C0)
static_assert(sizeof(FSkeletalSkinAsset) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FParticleSkinAsset) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(USkinDataAssetBase) == 0x0138); // 312 bytes (0x000030 - 0x000138)
static_assert(sizeof(FBattleCapsuleShape) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USkinDataAsset) == 0x0290); // 656 bytes (0x000138 - 0x000290)
static_assert(sizeof(USkinLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USlotLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USneakAttackSequenceModifier) == 0x0210); // 528 bytes (0x0000D8 - 0x000210)
static_assert(sizeof(ASpecialTerrainBase) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(USpineDataAsset) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(USpineMaterialSet) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(USpineHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USpineImageRenderComponent) == 0x0570); // 1392 bytes (0x0004F8 - 0x000570)
static_assert(sizeof(USpineTextRenderComponent) == 0x04E0); // 1248 bytes (0x0004B8 - 0x0004E0)
static_assert(sizeof(USplashMovieState) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(USplashState) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UStageLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStageLoadState) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UStageManager) == 0x0148); // 328 bytes (0x000028 - 0x000148)
static_assert(sizeof(UStageTask) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UStageVisitor) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UStartupState) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UStateMachine_Game) == 0x0128); // 296 bytes (0x000128 - 0x000128)
static_assert(sizeof(UStateMachine_Main) == 0x0128); // 296 bytes (0x000128 - 0x000128)
static_assert(sizeof(UStateQueue_Init) == 0x0090); // 144 bytes (0x000088 - 0x000090)
static_assert(sizeof(UStateQueue_Login) == 0x0150); // 336 bytes (0x000088 - 0x000150)
static_assert(sizeof(UStateQueue_Relogin) == 0x00E0); // 224 bytes (0x000088 - 0x0000E0)
static_assert(sizeof(UStateQueue_Restart) == 0x00D8); // 216 bytes (0x000088 - 0x0000D8)
static_assert(sizeof(UStoryAnimBlendWeight) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UStoryAnimInstance) == 0x04A0); // 1184 bytes (0x0002B8 - 0x0004A0)
static_assert(sizeof(AStorylinePreviewManager) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UStoryNPCSlotComponent) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(AStoryNPCTemplete) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(UStoryPostAnimInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(AStorySoundInjectListener) == 0x0390); // 912 bytes (0x000220 - 0x000390)
static_assert(sizeof(UStoryTempleteCameraComponent) == 0x08F0); // 2288 bytes (0x0008D8 - 0x0008F0)
static_assert(sizeof(UStringHelper) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USubworld) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(USubworldManager) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(sizeof(USuspendState) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(USysBus) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UDevLoginCtrl) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(USDKLoginCtrl) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USettingServerIdCtrl) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(URegisterCtrl) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UDialogCtrl) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(URequestPayCtrl) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UPayCallBackCtrl) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UTapDBTrackEventCtrl) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UXDDataPushDataCtrl) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(sizeof(USelectPlatformCtrl) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UOpenTapBillboardCtrl) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UServerClassify) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UPlatformSDKLoginEv) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UEntryEv) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UPatchUpdateEv) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UDialogEvent) == 0x00A8); // 168 bytes (0x000040 - 0x0000A8)
static_assert(sizeof(UDialogCloseEvent) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UPlatformSelectEvent) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UMaintainBlockEvent) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UTapBillboardBadgeEvent) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UAnnouncementEvent) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UTapSDKLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBatchTaskItem_OpenUI) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FBatchedOp) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UTaskBatchedUI) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UTaskCleanMode) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UTaskCloseStage) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UTaskLayoutUI) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UTaskOpenStage) == 0x00C0); // 192 bytes (0x000038 - 0x0000C0)
static_assert(sizeof(UTaskResetAllUI) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UTextHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTextureUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTowerClueAsset) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UTowerClueDataAsset) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UUIManager) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UClassifiedWidgetPool) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FWidgetSlot) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UUIScript) == 0x0240); // 576 bytes (0x000028 - 0x000240)
static_assert(sizeof(UULookAtUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FUnitPreviewAnimInstanceProxy) == 0x07C0); // 1984 bytes (0x000760 - 0x0007C0)
static_assert(sizeof(UUnitPreviewAnimInstance) == 0x0AB0); // 2736 bytes (0x0002B8 - 0x000AB0)
static_assert(sizeof(UUnitSkeletalMeshComponent) == 0x0F10); // 3856 bytes (0x000F00 - 0x000F10)
static_assert(sizeof(UUnLuaUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUnluaWidgetComponent) == 0x0610); // 1552 bytes (0x0005B8 - 0x000610)
static_assert(sizeof(UUpdateState) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UValidateState) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UVersionState) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UViewContext) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UViewFramework) == 0x0130); // 304 bytes (0x000028 - 0x000130)
static_assert(sizeof(UVirtualKeyboardZone) == 0x0170); // 368 bytes (0x000140 - 0x000170)
static_assert(sizeof(UVirtualKeyboardZoneSlot) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UWidgetLoadScript) == 0x0110); // 272 bytes (0x000050 - 0x000110)
static_assert(sizeof(UWidgetUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWiremapAnimPool) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(AWiremapActor) == 0x03F0); // 1008 bytes (0x000220 - 0x0003F0)
static_assert(sizeof(UWiremapEdge) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UGeneralWiremapEdge) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(UMultiWiremapEdge) == 0x00C0); // 192 bytes (0x000050 - 0x0000C0)
static_assert(sizeof(UWiremapEdgeFactory) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UWiremapEdgeAnim) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UWiremapMeshBuilder) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UWiremapRenderComponent) == 0x0510); // 1296 bytes (0x0004F8 - 0x000510)
static_assert(sizeof(UWiremapVertex) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UWorldTraceComponent) == 0x0270); // 624 bytes (0x0001F8 - 0x000270)
static_assert(sizeof(FComponentWidget) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UWorldTraceWidget) == 0x0388); // 904 bytes (0x0002C0 - 0x000388)
static_assert(sizeof(UWwiseAudioLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FWwiseMediaState) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWwiseBGMState) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAudioStateStruct) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FMusicModifyState) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AWwiseAudioManager) == 0x0428); // 1064 bytes (0x000220 - 0x000428)
static_assert(sizeof(UXDSilentLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOneVetoStruct) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAutomationNotify) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FBattleSequenceConfig) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FBattleSequenceMasterData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBattleSequenceInstanceData) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FCameraDetail) == 0x05F0); // 1520 bytes (0x000000 - 0x0005F0)
static_assert(sizeof(FLineViewInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInputCastDataTable) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FGameTriggerRequirementStruct) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FLevelStruct) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FFogDrawCommand) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSubtitleRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRegionDefination) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FCameraSkinAsset) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FSlotSlice) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FStageStruct) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FStoryAloneTableStruct) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FStorySoundInjectTableStruct) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FInjectSoundInfo) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FWeightedReplaceText) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCharacterWeight) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FStringCheck) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSubworldStruct) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FTextbookStruct) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FUIStruct) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(offsetof(AAccessVolume, Guid) == 0x0264);
static_assert(offsetof(UActorEffect, ScriptName) == 0x0028);
static_assert(offsetof(UActorEffectComponent, EffectTimeline) == 0x00B0);
static_assert(offsetof(UActorPool, Class) == 0x0028);
static_assert(offsetof(UActorPool, PooledActors) == 0x0030);
static_assert(offsetof(UVehicleMovementComponent, RootMotionParams) == 0x0170);
static_assert(offsetof(UVehicleMovementComponent, StartPointSymbol) == 0x01E8);
static_assert(offsetof(UVehicleMovementComponent, StartNavPoint) == 0x01F8);
static_assert(offsetof(UVehicleMovementComponent, NavPointDict) == 0x0200);
static_assert(offsetof(UAnimateSpriteInstance, DefaultFlipBook) == 0x0028);
static_assert(offsetof(UAnimateSpriteInstance, CurrentFlipBook) == 0x0030);
static_assert(offsetof(UAnimateSpriteInstance, TransFlipBook) == 0x0038);
static_assert(offsetof(UAnimateSpriteInstance, AimFlipBook) == 0x0040);
static_assert(offsetof(UAnimateSpriteInstance, CurrentSprite) == 0x0048);
static_assert(offsetof(UAnimateSpriteComponent, DefaultFlipBook) == 0x0200);
static_assert(offsetof(UAnimateSpriteComponent, DefaultTransFlipBook) == 0x0208);
static_assert(offsetof(UAnimateSpriteComponent, TargetComponent) == 0x0210);
static_assert(offsetof(UAnimateSpriteComponent, SlotAnimSpriteInstances) == 0x0218);
static_assert(offsetof(UAnimateSpriteComponent, SlotStates) == 0x0268);
static_assert(offsetof(UAnimateSpriteComponent, ActivedSlot) == 0x02B8);
static_assert(offsetof(UAnimNotify_Event, NotifyName) == 0x0038);
static_assert(offsetof(UAnimNotify_Event, AnimEvent) == 0x0048);
static_assert(offsetof(UAnimNotify_Event, HurtType) == 0x004A);
static_assert(offsetof(UAnimNotify_Event, AkEvent) == 0x0058);
static_assert(offsetof(UAnimFXNotify_Event, PSTemplate) == 0x0070);
static_assert(offsetof(UAnimFXNotify_Event, SocketName) == 0x0098);
static_assert(offsetof(UAnimFXNotify_Event, Socket2Name) == 0x00A0);
static_assert(offsetof(UAnimNotify_AnimateSprite, flipbook) == 0x0040);
static_assert(offsetof(UAnimNotify_CvEvent, Event) == 0x0040);
static_assert(offsetof(UAnimNotify_PlaySoftParticleEffect, PSTemplate) == 0x0038);
static_assert(offsetof(UAnimNotify_PlaySoftParticleEffect, LocationOffset) == 0x0070);
static_assert(offsetof(UAnimNotify_PlaySoftParticleEffect, RotationOffset) == 0x007C);
static_assert(offsetof(UAnimNotify_PlaySoftParticleEffect, Scale) == 0x0088);
static_assert(offsetof(UAnimNotify_PlaySoftParticleEffect, SocketName) == 0x00B8);
static_assert(offsetof(UAnimNotify_SlomoEvent, SlomoCurve) == 0x0040);
static_assert(offsetof(UAnimNotify_Sound, Sound) == 0x0038);
static_assert(offsetof(UAnimNotify_Sound, AttachName) == 0x004C);
static_assert(offsetof(UAnimNotifyState_AnimateSprite, flipbook) == 0x0038);
static_assert(offsetof(UAnimNotifyState_SoftParticleTimedEffect, PSTemplate) == 0x0030);
static_assert(offsetof(UAnimNotifyState_SoftParticleTimedEffect, SocketName) == 0x0068);
static_assert(offsetof(UAnimNotifyState_SoftParticleTimedEffect, LocationOffset) == 0x0070);
static_assert(offsetof(UAnimNotifyState_SoftParticleTimedEffect, RotationOffset) == 0x007C);
static_assert(offsetof(UAnimNotifyState_SoftParticleTrail, PSTemplate) == 0x0030);
static_assert(offsetof(UAnimNotifyState_SoftParticleTrail, FirstSocketName) == 0x0068);
static_assert(offsetof(UAnimNotifyState_SoftParticleTrail, SecondSocketName) == 0x0070);
static_assert(offsetof(UAnimNotifyState_SoftParticleTrail, WidthScaleMode) == 0x0078);
static_assert(offsetof(UAnimNotifyState_SoftParticleTrail, WidthScaleCurve) == 0x007C);
static_assert(offsetof(UAnimTextBlock, ColorAndOpacity) == 0x0158);
static_assert(offsetof(UAnimTextBlock, Font) == 0x0190);
static_assert(offsetof(UAnimTextBlock, StrikeBrush) == 0x01F0);
static_assert(offsetof(UAnimTextBlock, ShadowOffset) == 0x02C0);
static_assert(offsetof(UAnimTextBlock, ShadowColorAndOpacity) == 0x02C8);
static_assert(offsetof(UAnimTextBlock, TextTransformPolicy) == 0x02ED);
static_assert(offsetof(AAudioIndoorVolume, Guid) == 0x0258);
static_assert(offsetof(AAudioIndoorVolume, PlayerTag) == 0x0270);
static_assert(offsetof(UAutomationAgent, Account) == 0x0030);
static_assert(offsetof(UAutomationAgent, Password) == 0x0040);
static_assert(offsetof(UAutomationAgent, channelId) == 0x0058);
static_assert(offsetof(UHotInputInfo, Widget) == 0x0028);
static_assert(offsetof(UHotInputInfo, Anchor) == 0x0034);
static_assert(offsetof(UHotInputInfo, Offset) == 0x0044);
static_assert(offsetof(UBaseInputComponent, InputComponent) == 0x00C8);
static_assert(offsetof(UBaseInputComponent, WidgetInteractComponent) == 0x00D0);
static_assert(offsetof(ABattleActor, ZOscillation) == 0x0224);
static_assert(offsetof(ABattleActor, YawOscillation) == 0x022C);
static_assert(offsetof(ABattleActor, BodyComponent) == 0x0238);
static_assert(offsetof(ABattleActor, DecalComponent) == 0x0240);
static_assert(offsetof(ABattleCameraActor, CameraAdaptorComponent) == 0x07A0);
static_assert(offsetof(ABattleCameraActor, Root) == 0x07A8);
static_assert(offsetof(UBattleCameraShake, AttenuationBlendCurve) == 0x0179);
static_assert(offsetof(FDissolveParamInfo, DissolveType) == 0x0008);
static_assert(offsetof(FDissolveParamInfo, DissolveMaterials) == 0x0020);
static_assert(offsetof(FDissolveParamInfo, MaterialMapToReplace) == 0x0030);
static_assert(offsetof(FDissolveParamInfo, MeshToIgnore) == 0x0080);
static_assert(offsetof(FMaterialParamValueMap, ScalarParamValueMap) == 0x0000);
static_assert(offsetof(FMaterialParamValueMap, VectorParamValueMap) == 0x0050);
static_assert(offsetof(FMaterialParamValueMap, TextureParamValueMap) == 0x00A0);
static_assert(offsetof(UBattleMaterialComponent, DissolveParamMap) == 0x00B0);
static_assert(offsetof(UBattleMaterialComponent, SimpleFxParamMap) == 0x0100);
static_assert(offsetof(UBattleMaterialComponent, CachedSimpleFxParamMap) == 0x0150);
static_assert(offsetof(UBattleMaterialComponent, ScalarParamValueMap) == 0x01A0);
static_assert(offsetof(UBattleMaterialComponent, VectorParamValueMap) == 0x01F0);
static_assert(offsetof(UBattleMaterialComponent, TextureParamValueMap) == 0x0240);
static_assert(offsetof(UBattleSequenceTransformModifier, State) == 0x0110);
static_assert(offsetof(FTransformInfo, Position) == 0x0000);
static_assert(offsetof(FTransformInfo, Rotator) == 0x000C);
static_assert(offsetof(FTransformInfo, Scale) == 0x0018);
static_assert(offsetof(FTransformInfo, Transform) == 0x0030);
static_assert(offsetof(UBattleSequenceTransformState, BindingMap) == 0x0028);
static_assert(offsetof(UBattleSequenceTransformState, OriginTransform) == 0x0078);
static_assert(offsetof(UBattleSequenceTransformState, ResultTransform) == 0x00C8);
static_assert(offsetof(UCameraAdaptorComponent, AdaptType) == 0x00B4);
static_assert(offsetof(FCameraManaged, CameraActor) == 0x0000);
static_assert(offsetof(FCameraBlend, CameraActor) == 0x0000);
static_assert(offsetof(ACameraManager, ManagedCameras) == 0x0220);
static_assert(offsetof(ACameraManager, PendingRelease) == 0x0230);
static_assert(offsetof(ACameraManager, CameraCandidates) == 0x0240);
static_assert(offsetof(ACameraManager, PendingBlends) == 0x0290);
static_assert(offsetof(ACameraManager, NamedCameras) == 0x02A0);
static_assert(offsetof(ACameraManager, CurrentCamera) == 0x02F0);
static_assert(offsetof(UCameraMaskTransparencyComponent, DMI) == 0x00B8);
static_assert(offsetof(FCameraAgtSkillData, ForwardCurve) == 0x0010);
static_assert(offsetof(FCameraAgtSkillData, BackCurve) == 0x0011);
static_assert(offsetof(ACameraMotion_AgtSkill, NodeData) == 0x0228);
static_assert(offsetof(ACameraMotion_AgtSkill, TargetSide) == 0x024C);
static_assert(offsetof(ACameraMotion_AgtSkill, CasterSide) == 0x024D);
static_assert(offsetof(ACameraMotion_AgtSkill, CasterAgtActor) == 0x0250);
static_assert(offsetof(FCameraHitAwayData, PullAwayCurve) == 0x0010);
static_assert(offsetof(FCameraHitAwayData, RecoverCurve) == 0x0011);
static_assert(offsetof(FCameraHitAwayData, PullAwayDirectionType) == 0x0018);
static_assert(offsetof(ACameraMotion_HitAway, NodeData) == 0x0228);
static_assert(offsetof(ACameraMotion_HitAway, FriendAoeLoc) == 0x0250);
static_assert(offsetof(ACameraMotion_HitAway, EnemyAoeLoc) == 0x025C);
static_assert(offsetof(FCameraSkillPerformData, CasterAimedBone) == 0x0010);
static_assert(offsetof(FCameraSkillPerformData, TargetAimedBone) == 0x0020);
static_assert(offsetof(FCameraSkillPerformData, LookAtType) == 0x0030);
static_assert(offsetof(ACameraMotion_SkillPerform, NodeData) == 0x0228);
static_assert(offsetof(ACameraMotion_SkillPerform, CasterUnitSide) == 0x0269);
static_assert(offsetof(ACameraMotion_SkillPerform, CameraInitLoc) == 0x026C);
static_assert(offsetof(ACameraMotion_SkillPerform, CameraInitRot) == 0x0278);
static_assert(offsetof(ACameraMotion_SkillPerform, CameraParallelLoc) == 0x0284);
static_assert(offsetof(FCameraSkillSwayData, RotateCurve) == 0x000C);
static_assert(offsetof(FCameraSkillSwayData, AttachAimedBone) == 0x0020);
static_assert(offsetof(FCameraSkillSwayData, ForwardCurve) == 0x0044);
static_assert(offsetof(FCameraSkillSwayData, BackCurve) == 0x0054);
static_assert(offsetof(FCameraDistanceData, BlendCurve) == 0x0008);
static_assert(offsetof(FCameraRotateData, TargetLoc) == 0x0008);
static_assert(offsetof(FCameraRotateData, BlendCurve) == 0x0014);
static_assert(offsetof(ACameraMotion_SkillSway, HeadEndHeightOffsetMap) == 0x0228);
static_assert(offsetof(ACameraMotion_SkillSway, NodeData) == 0x0278);
static_assert(offsetof(ACameraMotion_SkillSway, DistanceDatas) == 0x02D0);
static_assert(offsetof(ACameraMotion_SkillSway, RotateDatas) == 0x02E0);
static_assert(offsetof(ACameraMotion_SkillSway, TargetInitLoc) == 0x02F0);
static_assert(offsetof(UCharacterAnimInstance, EnteredAction) == 0x02BC);
static_assert(offsetof(UCharacterAnimInstance, NameToBoneTransform) == 0x02E0);
static_assert(offsetof(UCharacterAnimInstance, ActiveCurveMap) == 0x0330);
static_assert(offsetof(UCharacterAnimInstance, BattleActor) == 0x0388);
static_assert(offsetof(ACheatActor, SecretWidgetClass) == 0x0220);
static_assert(offsetof(ACheatActor, TouchCheatWidget) == 0x0228);
static_assert(offsetof(UGameStateObjectBase, GameplayState) == 0x0028);
static_assert(offsetof(UGameStateObjectBase, StateName) == 0x0030);
static_assert(offsetof(UCleanupState, NextState) == 0x0050);
static_assert(offsetof(UCloseStageAsync, CloseProc) == 0x0050);
static_assert(offsetof(FEventItem, EventName) == 0x0000);
static_assert(offsetof(FEventItem, EventParam) == 0x0010);
static_assert(offsetof(UCompositEventNode, OpCode) == 0x0028);
static_assert(offsetof(UCompositEventNode, EventItem) == 0x0030);
static_assert(offsetof(UCompositEventNode, Children) == 0x0050);
static_assert(offsetof(UEventListenerObject, LuaScriptPath) == 0x0030);
static_assert(offsetof(UCompositEventObject, AllNodes) == 0x0040);
static_assert(offsetof(UContextContainer, ContextMap) == 0x0030);
static_assert(offsetof(UContextContainer, ContextArray) == 0x0080);
static_assert(offsetof(AContextManager, ContextClasses) == 0x0220);
static_assert(offsetof(AContextManager, Spaces) == 0x0230);
static_assert(offsetof(FContinueStateDialogInfo, DialogTitle) == 0x0000);
static_assert(offsetof(FContinueStateDialogInfo, DialogMessage) == 0x0018);
static_assert(offsetof(FContinueStateDialogInfo, DialogYes) == 0x0030);
static_assert(offsetof(FContinueStateDialogInfo, DialogNo) == 0x0048);
static_assert(offsetof(UContinueState, NextStateName) == 0x0050);
static_assert(offsetof(UContinueState, DialogInfoMap) == 0x0060);
static_assert(offsetof(UCustomNavModifierComponent, ModifierTags) == 0x0140);
static_assert(offsetof(UCustomRichTextBlock, Text) == 0x0148);
static_assert(offsetof(UCustomRichTextBlock, TextStyleSet) == 0x0160);
static_assert(offsetof(UCustomRichTextBlock, DecoratorClasses) == 0x0168);
static_assert(offsetof(UCustomRichTextBlock, DefaultTextStyleOverride) == 0x0180);
static_assert(offsetof(UCustomRichTextBlock, TextTransformPolicy) == 0x04E8);
static_assert(offsetof(UCustomRichTextBlock, DefaultTextStyle) == 0x04F0);
static_assert(offsetof(UCustomRichTextBlock, InstanceDecorators) == 0x0850);
static_assert(offsetof(UCustomRichTextBlockImageDecorator, ImageSet) == 0x0028);
static_assert(offsetof(ADetailMapCollection, FloorOrder) == 0x0220);
static_assert(offsetof(ADetailMapCollection, MapBgs) == 0x0230);
static_assert(offsetof(ADetailMapCollection, FloorAreas) == 0x0280);
static_assert(offsetof(UEdenSafeZone, FixedSafeMargin) == 0x0140);
static_assert(offsetof(UEdenSafeZone, FixedUnsafeMargin) == 0x0150);
static_assert(offsetof(UEdenSafeZoneSlot, SafeAreaScale) == 0x0038);
static_assert(offsetof(UEdenSafeZoneSlot, HAlign) == 0x0048);
static_assert(offsetof(UEdenSafeZoneSlot, VAlign) == 0x0049);
static_assert(offsetof(UEdenSafeZoneSlot, Padding) == 0x004C);
static_assert(offsetof(UEdenScenarioRecorder, InitialLevel) == 0x00A0);
static_assert(offsetof(UEdenScenarioRecorder, ScriptPath) == 0x00C8);
static_assert(offsetof(UEdenScenarioRecorder, ReplStageActor) == 0x00D8);
static_assert(offsetof(UEdenTowerRecorder, InitialLevel) == 0x0098);
static_assert(offsetof(UEdenTowerRecorder, ScriptPath) == 0x00C0);
static_assert(offsetof(UEdenTowerRecorder, ReplStageActor) == 0x00D0);
static_assert(offsetof(UEnterBattleSequenceUserData, PlayerTrackName) == 0x0028);
static_assert(offsetof(UEnterBattleSequenceUserData, MonsterTrackName) == 0x0038);
static_assert(offsetof(UEnterBattleSequenceUserData, CameraTrackName) == 0x0048);
static_assert(offsetof(UEnterBattleSequenceUserData, MonsterSeqStartTrans) == 0x0070);
static_assert(offsetof(UEnterBattleSequenceUserData, PlayerSeqStartTrans) == 0x00A0);
static_assert(offsetof(UEnterBattleSequenceUserData, SeqCameraBlendEndTrans) == 0x00D0);
static_assert(offsetof(UEnterBattleSequenceUserData, SeqAttackerMoveStartLoc) == 0x0100);
static_assert(offsetof(UEnterBattleSequenceUserData, SeqAttackerMoveEndLoc) == 0x010C);
static_assert(offsetof(USequenceProcessInfo, OutputDir) == 0x0028);
static_assert(offsetof(USequenceProcessInfo, PlayerTrackName) == 0x0038);
static_assert(offsetof(USequenceProcessInfo, MonsterTrackName) == 0x0048);
static_assert(offsetof(USequenceProcessInfo, CameraTrackName) == 0x0058);
static_assert(offsetof(UEthInputComponent, TipWidget) == 0x00C8);
static_assert(offsetof(UEthInputComponent, InputComponent) == 0x00D0);
static_assert(offsetof(UEthInputComponent, InputModel) == 0x00D8);
static_assert(offsetof(UEthInputComponent, GamePadModel) == 0x00D9);
static_assert(offsetof(UEthInputComponent, TipWidgetObj) == 0x00F0);
static_assert(offsetof(UFaceLookAtComponent, LookAtRotLimit) == 0x00B4);
static_assert(offsetof(UFaceLookAtComponent, LookTarget) == 0x00C0);
static_assert(offsetof(UFaceLookAtComponent, SkeletalComponent) == 0x00C8);
static_assert(offsetof(UFaceLookAtComponent, AnimInstance) == 0x00D0);
static_assert(offsetof(UFaceLookAtComponent, CurHeadAdditiveRot) == 0x00D8);
static_assert(offsetof(UFaceLookAtComponent, CurSpineAdditiveRot) == 0x00E4);
static_assert(offsetof(FFloorResult, Floor) == 0x0000);
static_assert(offsetof(UGeneralMovementBaseComponent, NavExtend) == 0x0144);
static_assert(offsetof(UGeneralMovementBaseComponent, NavFilterClass) == 0x0158);
static_assert(offsetof(UGeneralMovementBaseComponent, FloorResult) == 0x0250);
static_assert(offsetof(UGeneralMovementBaseComponent, BorderActor) == 0x03B0);
static_assert(offsetof(FFollowCameraStateQueue, States) == 0x0000);
static_assert(offsetof(AFollowCameraScheduler, StateClass) == 0x0220);
static_assert(offsetof(AFollowCameraScheduler, Stage) == 0x0228);
static_assert(offsetof(AFollowCameraScheduler, DefaultArm) == 0x0230);
static_assert(offsetof(AFollowCameraScheduler, DefaultCamera) == 0x0238);
static_assert(offsetof(AFollowCameraScheduler, StateQueues) == 0x0248);
static_assert(offsetof(FFollowCameraSetting, Box) == 0x0088);
static_assert(offsetof(FFollowCameraSetting, box1) == 0x0090);
static_assert(offsetof(FFollowCameraSetting, Box2) == 0x0098);
static_assert(offsetof(UFollowCameraState, Stage) == 0x0030);
static_assert(offsetof(UFollowCameraState, DefaultArm) == 0x0038);
static_assert(offsetof(UFollowCameraState, DefaultCamera) == 0x0040);
static_assert(offsetof(UFollowCameraState, Arm) == 0x0048);
static_assert(offsetof(UFollowCameraState, SettingArm) == 0x0050);
static_assert(offsetof(UFollowCameraState, Camera) == 0x0058);
static_assert(offsetof(UFollowCameraState, ExtraSetting) == 0x0060);
static_assert(offsetof(UFollowCameraState, PreState) == 0x0100);
static_assert(offsetof(UFollowCameraState, R_CameraTrans) == 0x0110);
static_assert(offsetof(UFramePlayComponent, StateMap) == 0x01F8);
static_assert(offsetof(UFramePlayComponent, InitialStateName) == 0x0248);
static_assert(offsetof(UFramePlayComponent, MaterialParameterName) == 0x0254);
static_assert(offsetof(UFramePlayComponent, LowQualityParameterName) == 0x025C);
static_assert(offsetof(UFramePlayComponent, MaterialInstance) == 0x0268);
static_assert(offsetof(UFramePlayComponent, CurrentState) == 0x0270);
static_assert(offsetof(UFramePlayComponent, DesiredState) == 0x0278);
static_assert(offsetof(UGameCommand, CommandType) == 0x0028);
static_assert(offsetof(URegisterCommand, Name) == 0x0030);
static_assert(offsetof(UGameConfig, CongestWidgetClass) == 0x0030);
static_assert(offsetof(UGameConfig, BlockNameCultures) == 0x0058);
static_assert(offsetof(UGameConfig, DefaultNameCulture) == 0x0068);
static_assert(offsetof(UGameConfig, DefaultLogoCulture) == 0x0070);
static_assert(offsetof(UGameConfig, LuaTimerProxy) == 0x0078);
static_assert(offsetof(UGameNavigationSwitcher, DynamicNavData) == 0x0080);
static_assert(offsetof(FPlatformedNetWorkInfo, Channel) == 0x0000);
static_assert(offsetof(FPlatformedNetWorkInfo, RealChannel) == 0x0010);
static_assert(offsetof(FPlatformedNetWorkInfo, XDDataPushAddr) == 0x0020);
static_assert(offsetof(FPlatformSupportInfo, ProductId) == 0x0000);
static_assert(offsetof(FPlatformSupportInfo, ServerURL) == 0x0010);
static_assert(offsetof(FTapSDKSupportParams, TSSKey) == 0x0000);
static_assert(offsetof(FTapSDKSupportParams, TSSValue) == 0x0010);
static_assert(offsetof(FXDSDKSupportLanguage, UELang) == 0x0000);
static_assert(offsetof(UGameNetworkSettings, XDDataAddr) == 0x0030);
static_assert(offsetof(UGameNetworkSettings, CDKeyAddr) == 0x0040);
static_assert(offsetof(UGameNetworkSettings, CDKeyAddrOverSea) == 0x0050);
static_assert(offsetof(UGameNetworkSettings, IOSPlatformNetWorks) == 0x0060);
static_assert(offsetof(UGameNetworkSettings, AndroidPlatformNetWorks) == 0x0070);
static_assert(offsetof(UGameNetworkSettings, WindowsPlatformNetWorks) == 0x0080);
static_assert(offsetof(UGameNetworkSettings, MacPlatformNetWorks) == 0x0090);
static_assert(offsetof(UGameNetworkSettings, SupportInfoCN) == 0x00A0);
static_assert(offsetof(UGameNetworkSettings, SupportInfoOverSea) == 0x00C0);
static_assert(offsetof(UGameNetworkSettings, TapSDKSupportParams) == 0x00E0);
static_assert(offsetof(UGameNetworkSettings, TapSDKSupportParamsOverSea) == 0x00F0);
static_assert(offsetof(UGameNetworkSettings, XDSDKDefaultLang) == 0x0100);
static_assert(offsetof(UGameNetworkSettings, XDSDKSupportLangs) == 0x0118);
static_assert(offsetof(UGameplayState, WorldContextObject) == 0x0170);
static_assert(offsetof(FSignificanceConfig, GroupName) == 0x0000);
static_assert(offsetof(FSignificanceConfig, EvalFunction) == 0x0008);
static_assert(offsetof(FSignificanceConfig, HighEndUpper) == 0x0010);
static_assert(offsetof(FSignificanceConfig, MiddleEndUpper) == 0x0020);
static_assert(offsetof(FSignificanceConfig, LowEndUpper) == 0x0030);
static_assert(offsetof(AGameSignificance, SignificanceManager) == 0x02B8);
static_assert(offsetof(AGameSignificance, GroupInfos) == 0x02C8);
static_assert(offsetof(UGameStateMachine, entryName) == 0x0060);
static_assert(offsetof(UGameStateMachine, ChildObjectMap) == 0x00B8);
static_assert(offsetof(UGameStateMachine, CommandQueue) == 0x0108);
static_assert(offsetof(UGameStateMachine, CurrentChildName) == 0x0118);
static_assert(offsetof(UGameStateQueue, ChildObjectQueue) == 0x0060);
static_assert(offsetof(UGameStateQueue, CommandQueue) == 0x0078);
static_assert(offsetof(UGameTriggerAgentComponent, AgentTag) == 0x00B0);
static_assert(offsetof(UGameTriggerContextProxy, RequirementTable) == 0x0028);
static_assert(offsetof(UGameTriggerDecorator, ExcludeContexts) == 0x01F8);
static_assert(offsetof(UGameTriggerDecorator, DependentContexts) == 0x0218);
static_assert(offsetof(UGameTriggerDecorator, DesireAgents) == 0x0238);
static_assert(offsetof(ULateTickComponent, ViewFramework) == 0x00B0);
static_assert(offsetof(ULateTickComponent, OwnerActor) == 0x00B8);
static_assert(offsetof(AGameUEGameModeBase, Bus) == 0x02C0);
static_assert(offsetof(AGameUEGameModeBase, Overlays) == 0x02C8);
static_assert(offsetof(AGameUEGameModeBase, ViewFramework) == 0x02D8);
static_assert(offsetof(AGameUEGameModeBase, LateTickComponent) == 0x02E0);
static_assert(offsetof(AGameUEGameModeBase, AfkWidgetClass) == 0x02E8);
static_assert(offsetof(AGameUEGameModeBase, AfkWidget) == 0x02F8);
static_assert(offsetof(UGameUEInstance, SysBus) == 0x01A8);
static_assert(offsetof(UGameUEInstance, StateObjectClass) == 0x01B0);
static_assert(offsetof(UGameUEInstance, StateMachineClass) == 0x01D8);
static_assert(offsetof(UGameUEInstance, ViewFrameworkClass) == 0x0200);
static_assert(offsetof(UGameUEInstance, ViewFramework) == 0x0228);
static_assert(offsetof(UGameUEInstance, NavigationSwitcher) == 0x0230);
static_assert(offsetof(UGameUEInstance, AutomationScript) == 0x0238);
static_assert(offsetof(UGameUEUserSettings, SoundConfigs) == 0x0180);
static_assert(offsetof(UGameUEUserSettings, GameInputCustomKeyboard) == 0x01A8);
static_assert(offsetof(UGameUEUserSettings, GameInputCustomGamepad) == 0x0208);
static_assert(offsetof(UGameUEUserSettings, GameInputCustomTouch) == 0x0268);
static_assert(offsetof(UGeneralPlayerMovementComponent, TryGuranteeSafeRange) == 0x03F4);
static_assert(offsetof(AGlobalEffect, FadeWidgetClass) == 0x0220);
static_assert(offsetof(AGlobalEffect, HighlightMaterial) == 0x0228);
static_assert(offsetof(AGlobalEffect, OriginMaterial) == 0x0230);
static_assert(offsetof(AGlobalEffect, Requests) == 0x0238);
static_assert(offsetof(AGlobalEffect, RequestTemp) == 0x0248);
static_assert(offsetof(AGlobalEffect, Highlights) == 0x0258);
static_assert(offsetof(AGlobalEffect, OriginPrimitives) == 0x0268);
static_assert(offsetof(AGlobalEffect, CaptureComponent) == 0x0278);
static_assert(offsetof(AGlobalEffect, OriginRenderTarget) == 0x0280);
static_assert(offsetof(AGlobalEffect, OriginRenderMaterial) == 0x0288);
static_assert(offsetof(AGlobalEffect, OriginRenderBrush) == 0x0290);
static_assert(offsetof(AGlobalEffect, PostProcess) == 0x0360);
static_assert(offsetof(AGlobalEffect, FadeWidget) == 0x0378);
static_assert(offsetof(AGlobalEffect, CameraShakes) == 0x0388);
static_assert(offsetof(UGlobalLoadWidget, TextWeights) == 0x0288);
static_assert(offsetof(UGlobalLoadWidget, LoadScript) == 0x02E0);
static_assert(offsetof(AGUIDActor, Guid) == 0x0220);
static_assert(offsetof(UGyroMotionComponent, RotateFactor) == 0x00B0);
static_assert(offsetof(UGyroMotionComponent, RotateRange) == 0x00B8);
static_assert(offsetof(UGyroMotionComponent, MotionRotation) == 0x00E0);
static_assert(offsetof(UGyroMotionComponent, CameraComponent) == 0x00F0);
static_assert(offsetof(AHotUpdateHandler, CurrentFileDes) == 0x0228);
static_assert(offsetof(UHyperLinkRichTextBlockDecorator, HL_Style) == 0x0030);
static_assert(offsetof(UInitServerState, NextStateName) == 0x0050);
static_assert(offsetof(UInitState, NextStateName) == 0x0050);
static_assert(offsetof(ULayerManager, DynamicLayers) == 0x0038);
static_assert(offsetof(ULevelBorderComponent, ParentGroup) == 0x0468);
static_assert(offsetof(ULevelBorderGroup, PointList) == 0x0468);
static_assert(offsetof(FLevelReplayCommand, CommandName) == 0x0000);
static_assert(offsetof(FLevelReplayCommand, TargetGuid) == 0x000C);
static_assert(offsetof(ULevelReplay, ReplayCommands) == 0x0030);
static_assert(offsetof(FScenarioReplayCommand, CommandName) == 0x0000);
static_assert(offsetof(FScenarioReplayCommand, TargetGuid) == 0x000C);
static_assert(offsetof(UScenarioReplay, ReplayCommands) == 0x0038);
static_assert(offsetof(UTowerReplay, TowerLevelReplays) == 0x0030);
static_assert(offsetof(ULinkDrawComponent, StaticMesh) == 0x0200);
static_assert(offsetof(ULinkDrawComponent, SplineMaterial) == 0x0208);
static_assert(offsetof(ULinkDrawComponent, LinkActor) == 0x0210);
static_assert(offsetof(ULinkDrawComponent, LinkTarget) == 0x0238);
static_assert(offsetof(ULinkDrawComponent, SplineMeshs) == 0x0260);
static_assert(offsetof(ULogin_ServerListState, TitleText) == 0x0060);
static_assert(offsetof(ULogin_ServerListState, LinkText) == 0x0070);
static_assert(offsetof(ULogin_ServerListState, LinkAddr) == 0x0080);
static_assert(offsetof(ULogin_ServerListState, Content) == 0x0090);
static_assert(offsetof(ALuaBridge, DefaultInstanceClass) == 0x0220);
static_assert(offsetof(ULuaInstanceObject, Payload) == 0x0028);
static_assert(offsetof(ULuaPacked, LuaInfos) == 0x0030);
static_assert(offsetof(USignificanceComponent, SignificanceGroupName) == 0x00B0);
static_assert(offsetof(ULuaSignificanceComponent, LuaFilePath) == 0x00E0);
static_assert(offsetof(UStageWidget, UIScript) == 0x02B0);
static_assert(offsetof(UStageWidget, DestroyScope) == 0x02B8);
static_assert(offsetof(ULuaStageWidget, LuaFilePath) == 0x02C8);
static_assert(offsetof(AMapNavPoint, PointType) == 0x0220);
static_assert(offsetof(AMapNavPoint, ChildPoints) == 0x0228);
static_assert(offsetof(AMapNavPoint, PointOnwerSymbol) == 0x0238);
static_assert(offsetof(AMapNavPoint, TransformComponent) == 0x0248);
static_assert(offsetof(AMapNavPoint, RailSplineComponent) == 0x0250);
static_assert(offsetof(AMapRefNavPoint, PointType) == 0x0220);
static_assert(offsetof(AMapRefNavPoint, ChildPoints) == 0x0228);
static_assert(offsetof(AMapRefNavPoint, PointOnwerSymbol) == 0x0238);
static_assert(offsetof(UMaterialCurveTable, ScalarParameters) == 0x0030);
static_assert(offsetof(UMaterialCurveTable, VectorParameters) == 0x0080);
static_assert(offsetof(UMaterialMapTable, Fallback) == 0x0080);
static_assert(offsetof(FMaterialTargetCache, Component) == 0x0000);
static_assert(offsetof(FMaterialTargetCache, Material) == 0x0010);
static_assert(offsetof(UMaterialModifyComponent, ModifyObjects) == 0x00B0);
static_assert(offsetof(UMaterialModifyComponent, NewModifyObjects) == 0x00C0);
static_assert(offsetof(UMaterialModifyComponent, MaterialCache) == 0x0170);
static_assert(offsetof(FModifyTarget, Component) == 0x0000);
static_assert(offsetof(FModifyTarget, OverrideMaterial) == 0x0010);
static_assert(offsetof(FModifyTarget, MaterialLookupTable) == 0x0018);
static_assert(offsetof(UMaterialModifyObject, ModifyTargets) == 0x0050);
static_assert(offsetof(UMediaPlayComponent, MediaPlayer) == 0x00B8);
static_assert(offsetof(UMediaPlayComponent, MediaSource) == 0x00C0);
static_assert(offsetof(UMediaState, StateName) == 0x0028);
static_assert(offsetof(UMediaState, MediaSource) == 0x0030);
static_assert(offsetof(UMediaTransit, FromState) == 0x0028);
static_assert(offsetof(UMediaTransit, ToState) == 0x0030);
static_assert(offsetof(UMediaStateComponent, MediaPlayer) == 0x00B0);
static_assert(offsetof(UMediaStateComponent, StateMachineClass) == 0x00B8);
static_assert(offsetof(UMediaStateComponent, StateMachine) == 0x00C0);
static_assert(offsetof(UMediaStateRuntime, MediaState) == 0x0028);
static_assert(offsetof(UMediaStateRuntime, Transits) == 0x0030);
static_assert(offsetof(UMediaStateMachine, CurrentMediaState) == 0x0028);
static_assert(offsetof(UMediaStateMachine, EntryState) == 0x0030);
static_assert(offsetof(UMediaStateMachine, CurrentStateName) == 0x0038);
static_assert(offsetof(UMediaStateMachine, BuildStateArray) == 0x0040);
static_assert(offsetof(UMediaStateMachine, BuildTransitArray) == 0x0050);
static_assert(offsetof(UMediaStateMachine, MediaStates) == 0x0060);
static_assert(offsetof(UMediaStateMachine, MediaPlayer) == 0x00B0);
static_assert(offsetof(AMessageOverlay, CustomLayerClass) == 0x0220);
static_assert(offsetof(AMessageOverlay, CustomLayers) == 0x0230);
static_assert(offsetof(AMessageOverlay, MessageLayout) == 0x0240);
static_assert(offsetof(AMessageOverlay, ClassMap) == 0x0248);
static_assert(offsetof(UMiniMapFogLayerWidget, DrawFogTexture) == 0x02C8);
static_assert(offsetof(UMiniMapFogLayerWidget, SmoothDrawFogTexture) == 0x02D0);
static_assert(offsetof(UMiniMapFogLayerWidget, SmoothBlendParamName) == 0x02F0);
static_assert(offsetof(UMiniMapFogLayerWidget, CurVolume) == 0x0310);
static_assert(offsetof(UMiniMapFogLayerWidget, DMI) == 0x0318);
static_assert(offsetof(UMiniMapFogLayerWidget, RT) == 0x0320);
static_assert(offsetof(UMiniMapFogLayerWidget, PreRT) == 0x0328);
static_assert(offsetof(UMiniMapFogLayerWidget, RTCanvas) == 0x0330);
static_assert(offsetof(UMiniMapFogLayerWidget, RTContext) == 0x0340);
static_assert(offsetof(UMiniMapFogLayerWidget, FogDrawBatchQueue) == 0x0378);
static_assert(offsetof(UMiniMapMarkerComponent, Type) == 0x0492);
static_assert(offsetof(UMiniMapMarkerComponent, MarkerCls) == 0x0498);
static_assert(offsetof(UMiniMapMarkerComponent, OuterMarkerCls) == 0x04A0);
static_assert(offsetof(AMiniMapVolume, BgWidget) == 0x0220);
static_assert(offsetof(AMiniMapVolume, ParallelVolumes) == 0x0228);
static_assert(offsetof(FMiniMapMarker, Widget) == 0x0000);
static_assert(offsetof(FMiniMapMarker, OuterWidget) == 0x0008);
static_assert(offsetof(FMiniMapMarker, Owner) == 0x0010);
static_assert(offsetof(FMiniMapBgInfo, Widget) == 0x0000);
static_assert(offsetof(UMiniMapWidget, Markers) == 0x02C8);
static_assert(offsetof(UMiniMapWidget, PlayerMarker) == 0x0318);
static_assert(offsetof(UMiniMapWidget, CurVolume) == 0x0320);
static_assert(offsetof(UMiniMapWidget, BorderCanvas) == 0x0328);
static_assert(offsetof(UMiniMapWidget, ContainerCanvas) == 0x0330);
static_assert(offsetof(UMiniMapWidget, DrawCanvas) == 0x0338);
static_assert(offsetof(UMiniMapWidget, BGDrawCanvas) == 0x0340);
static_assert(offsetof(UMiniMapWidget, MarkerDrawCanvas) == 0x0348);
static_assert(offsetof(UMiniMapWidget, DrawCanvasSlot) == 0x0350);
static_assert(offsetof(UMiniMapWidget, BgInfo) == 0x0358);
static_assert(offsetof(UMiniMapWidget, ParallelBgInfos) == 0x0368);
static_assert(offsetof(UMiniMapWidget, FogWidget) == 0x0378);
static_assert(offsetof(UMonsterAnimInstance, AdditiveFaceRot) == 0x02C4);
static_assert(offsetof(UMonsterDetectionViewComponent, SocketName) == 0x0468);
static_assert(offsetof(UMonsterDetectionViewComponent, SkeletalComponent) == 0x0480);
static_assert(offsetof(UMonsterDetectionViewComponent, FaceLookAtComponent) == 0x0488);
static_assert(offsetof(UMonsterDetectionViewComponent, TargetSeen) == 0x0490);
static_assert(offsetof(FCustomBoxDesc, Center) == 0x0000);
static_assert(offsetof(FCustomBoxDesc, Extent) == 0x000C);
static_assert(offsetof(FCustomRotBoxDesc, Box) == 0x0000);
static_assert(offsetof(FCustomRotBoxDesc, Rot) == 0x0018);
static_assert(offsetof(UMovableGeoNavModifierComponent, Bounds_BuildData) == 0x0498);
static_assert(offsetof(UMovableGeoNavModifierComponent, ComponentBounds_BuildData) == 0x04B0);
static_assert(offsetof(UMovableGeoNavModifierComponent, IndexTransforms) == 0x04C0);
static_assert(offsetof(UMovableGeoNavModifierComponent, OwnerOriginTrans) == 0x0510);
static_assert(offsetof(UMovableGeoNavModifierComponent, RotGeoStopPoints) == 0x0540);
static_assert(offsetof(UMovableGeoNavModifierComponent, MovableType) == 0x0550);
static_assert(offsetof(UMovableGeoNavModifierComponent, DesireComponentTag) == 0x0554);
static_assert(offsetof(UMovableGeoNavModifierComponent, CustomModifyShapeAtIndex) == 0x0560);
static_assert(offsetof(UStageLoadScript, StageMangr) == 0x0028);
static_assert(offsetof(UStageLoadScript, StageTo) == 0x0030);
static_assert(offsetof(UStageLoadScript, StageFrom) == 0x0038);
static_assert(offsetof(UMovieLoadScript, MediaFile) == 0x0060);
static_assert(offsetof(FSubtitleItem, Text) == 0x0008);
static_assert(offsetof(UMultiMediaPlayer, MediaSource) == 0x00D8);
static_assert(offsetof(UMultiMediaPlayer, MediaPlayer) == 0x00E0);
static_assert(offsetof(UMultiMediaPlayer, Sounds) == 0x00E8);
static_assert(offsetof(UMultiMediaPlayer, RateRange) == 0x00FC);
static_assert(offsetof(UMultiMediaPlayer, Subtitles) == 0x0110);
static_assert(offsetof(UMultiMediaPlayer, CustomSubtitle) == 0x0120);
static_assert(offsetof(UMultiMediaPlayer, World) == 0x0170);
static_assert(offsetof(UMultiMediaPlayer, SoundComponents) == 0x0178);
static_assert(offsetof(UMultiMediaPlayer, SoundTimeOffset) == 0x0188);
static_assert(offsetof(FStoryNPCGenerateInfo, Guid) == 0x0000);
static_assert(offsetof(FStoryNPCGenerateInfo, NPC) == 0x0010);
static_assert(offsetof(FStoryNPCGenerateInfo, DefaultAnim) == 0x0038);
static_assert(offsetof(FStoryNPCGenerateInfo, DefaultTransform) == 0x0050);
static_assert(offsetof(FStoryNPCGenerateInfo, DefaultState) == 0x0080);
static_assert(offsetof(FStoryNPCGenerateInfo, SlotName) == 0x0088);
static_assert(offsetof(ANPCManager, NPCs) == 0x0220);
static_assert(offsetof(UOpenStageAsync, InstanceData) == 0x0040);
static_assert(offsetof(UOpenStageAsync, OpenProc) == 0x0058);
static_assert(offsetof(UOverlayMessageLayout, Overlay) == 0x0288);
static_assert(offsetof(UOverlayMessageLayout, PendingQueue) == 0x0290);
static_assert(offsetof(UOverlayMessageLayout, ActiveQueue) == 0x02A0);
static_assert(offsetof(UOverlayMessageLayout, ActiveWidgets) == 0x02B0);
static_assert(offsetof(AOverscreenScaleFx, DesignSize) == 0x0220);
static_assert(offsetof(USysEvent, Message) == 0x0030);
static_assert(offsetof(UPatchState, NextStateName) == 0x0058);
static_assert(offsetof(UPathObject, WayPoints) == 0x0028);
static_assert(offsetof(UPathObject, WayDistance) == 0x0038);
static_assert(offsetof(UPathObject, OriginPoint) == 0x0048);
static_assert(offsetof(UPathObject, TargetPoint) == 0x0054);
static_assert(offsetof(APlanarCaptureShadow, ProceduralShadowMesh) == 0x0220);
static_assert(offsetof(APlanarCaptureShadow, CaptureComponent2D) == 0x0228);
static_assert(offsetof(APlanarCaptureShadow, RenderTargetSize) == 0x0238);
static_assert(offsetof(APlanarCaptureShadow, ShadowMaterial) == 0x0240);
static_assert(offsetof(APlanarCaptureShadow, TextParameterName) == 0x0248);
static_assert(offsetof(APlanarCaptureShadow, CameraActor) == 0x0250);
static_assert(offsetof(APlanarCaptureShadow, DMI) == 0x0258);
static_assert(offsetof(APlanarCaptureShadow, RT) == 0x0260);
static_assert(offsetof(APlayerStartConfigActor, LuaConfigPath) == 0x0220);
static_assert(offsetof(APostProcessController, PostProcessActor) == 0x0220);
static_assert(offsetof(APostProcessController, PostProcessMatrials) == 0x0228);
static_assert(offsetof(APostProcessController, DMIs) == 0x0278);
static_assert(offsetof(APostProcessController, SnapShootProcessCamera) == 0x02C8);
static_assert(offsetof(UProjectConfig, Channel) == 0x0028);
static_assert(offsetof(UProjectConfig, Version) == 0x0038);
static_assert(offsetof(UProjectConfig, CurrentCulture) == 0x0048);
static_assert(offsetof(UQuery, EvaluatorClasses) == 0x0028);
static_assert(offsetof(UQuery, Evaluators) == 0x0078);
static_assert(offsetof(UQuery, EvalContext) == 0x00C8);
static_assert(offsetof(UQueryEval_Distance, ContextName) == 0x0028);
static_assert(offsetof(UQueryEval_Distance, OtherActor) == 0x0030);
static_assert(offsetof(UQueryEval_Navigation, ContextName) == 0x0028);
static_assert(offsetof(UQueryEval_Navigation, OtherActor) == 0x0030);
static_assert(offsetof(UQueryEval_Angle, ContextName) == 0x0028);
static_assert(offsetof(UQueryEval_Angle, OtherActor) == 0x0030);
static_assert(offsetof(UQueryEval_Insight, ContextName) == 0x0028);
static_assert(offsetof(UQueryEval_Insight, CameraActor) == 0x0030);
static_assert(offsetof(URadioButton, groupId) == 0x0140);
static_assert(offsetof(URadioButton, WidgetStyle) == 0x0160);
static_assert(offsetof(URadioButton, HorizontalAlignment) == 0x0970);
static_assert(offsetof(URealmCtrl, Selection) == 0x0030);
static_assert(offsetof(URealmCtrl, UserId) == 0x0040);
static_assert(offsetof(URealmListEvent, Servers) == 0x0048);
static_assert(offsetof(FControlActorInfo, OriginLoc) == 0x0000);
static_assert(offsetof(FControlActorInfo, OffsetLoc) == 0x000C);
static_assert(offsetof(ARecombineActorsDriver, ControlInfos) == 0x02D0);
static_assert(offsetof(ARecombineActorsDriver, ControlActors) == 0x0320);
static_assert(offsetof(ARecombineActorsDriver, BlendMode) == 0x0330);
static_assert(offsetof(ARecombineActorsDriver, CustomBlendCurve) == 0x0338);
static_assert(offsetof(ARecombineActorsDriver, StepLODSetting) == 0x0340);
static_assert(offsetof(UServerData, ServerName) == 0x0030);
static_assert(offsetof(UServerData, CharacterName) == 0x0048);
static_assert(offsetof(UServerData, RegionData) == 0x0060);
static_assert(offsetof(URegionData, regionName) == 0x0030);
static_assert(offsetof(URegionData, AbbrName) == 0x0048);
static_assert(offsetof(URegionData, RegionColor) == 0x0058);
static_assert(offsetof(URegionData, ServerData) == 0x0070);
static_assert(offsetof(URegionProxy, WithRole) == 0x0060);
static_assert(offsetof(URegionProxy, RegionList) == 0x0070);
static_assert(offsetof(URegionProxy, CurrentServer) == 0x0080);
static_assert(offsetof(UReplayNavigator, TargetActor) == 0x0028);
static_assert(offsetof(UReplayNavigator, TargetPosition) == 0x0034);
static_assert(offsetof(UReplayNavigator, TargetExtend) == 0x0040);
static_assert(offsetof(UReplayNavigator, TargetVolume) == 0x0050);
static_assert(offsetof(UReplayNavigator, TargetComponent) == 0x0058);
static_assert(offsetof(UReplayNavigator, Path) == 0x0098);
static_assert(offsetof(URidderAnimInstance, IKOffsetRightHand) == 0x02D8);
static_assert(offsetof(URidderAnimInstance, IKOffsetLeftHand) == 0x02E4);
static_assert(offsetof(URidderAnimInstance, ParamAction) == 0x02F0);
static_assert(offsetof(URootMotionAccumulate, AnimAsset) == 0x0028);
static_assert(offsetof(URootMotionAccumulate, RootMotionParams) == 0x0030);
static_assert(offsetof(USaveGameBase, SaveString) == 0x0028);
static_assert(offsetof(USaveGameCrypto, Data) == 0x0028);
static_assert(offsetof(USceneSubsystem, SceneScriptObject) == 0x0028);
static_assert(offsetof(USceneSubsystem, SubsystemManager) == 0x0030);
static_assert(offsetof(USceneSubsystem, SystemState) == 0x0038);
static_assert(offsetof(USceneAccessSystem, AccessVolumes) == 0x0068);
static_assert(offsetof(USceneAccessSystem, Attachment) == 0x00B8);
static_assert(offsetof(USceneAccessSystem, AccessState) == 0x0108);
static_assert(offsetof(USceneCameraSettingComponent, Camera) == 0x0280);
static_assert(offsetof(USceneCameraSettingComponent, BlendMode) == 0x0290);
static_assert(offsetof(USceneCameraSettingComponent, CustomBlendCurve) == 0x0298);
static_assert(offsetof(USceneCameraSettingComponent, FocusObject) == 0x02C0);
static_assert(offsetof(USceneCameraSettingComponent, ObjectFocusType) == 0x02C9);
static_assert(offsetof(USceneCommandExecute, CommandTargetGuid) == 0x002C);
static_assert(offsetof(USceneCommandExecute, GuidStr) == 0x0040);
static_assert(offsetof(USceneCommandExecute, CommandExecuteContext) == 0x0050);
static_assert(offsetof(FSceneCommand, CommandName) == 0x0000);
static_assert(offsetof(FSceneCommand, TargetGuid) == 0x000C);
static_assert(offsetof(USceneCommandQueue, ExecMap) == 0x0038);
static_assert(offsetof(USceneCommandQueue, CurrentExecuteCommand) == 0x0088);
static_assert(offsetof(USceneCommandQueue, CommandQueue) == 0x0090);
static_assert(offsetof(USceneCommandSystem, ExecuteClassMap) == 0x0058);
static_assert(offsetof(USceneCommandSystem, PrivateCommandQueue) == 0x00A8);
static_assert(offsetof(USceneCustomData, SubSceneName) == 0x0034);
static_assert(offsetof(USceneCustomData, GuidLibrary) == 0x0040);
static_assert(offsetof(USceneCustomData, StringLibrary) == 0x0090);
static_assert(offsetof(USceneCustomData, SavePoints) == 0x00E0);
static_assert(offsetof(USceneCustomData, ReversedGuidLibrary) == 0x0140);
static_assert(offsetof(USceneCustomData, ReversedStringLibrary) == 0x0190);
static_assert(offsetof(USceneFlowSystem, WorkerClasses) == 0x0058);
static_assert(offsetof(USceneFlowSystem, DefaultWorkerClass) == 0x0068);
static_assert(offsetof(USceneFlowSystem, FlowSheet) == 0x0080);
static_assert(offsetof(USceneFlowSystem, FlowGraphRoot) == 0x0088);
static_assert(offsetof(USceneFlowSystem, FlowGraphWorkers) == 0x0090);
static_assert(offsetof(USceneFlowSystem, CurrentActiveWorker) == 0x00A0);
static_assert(offsetof(USceneFlowSystem, WorkerTypeMap) == 0x0100);
static_assert(offsetof(USceneFlowSystem, WorkerStateMap) == 0x0150);
static_assert(offsetof(USceneFlowWorker, DecorateClasses) == 0x0028);
static_assert(offsetof(USceneFlowWorker, DataType) == 0x0038);
static_assert(offsetof(USceneFlowWorker, NodeData) == 0x0040);
static_assert(offsetof(USceneFlowWorker, SceneContext) == 0x0048);
static_assert(offsetof(USceneFlowWorker, System) == 0x0050);
static_assert(offsetof(USceneFlowWorker, Decorates) == 0x0058);
static_assert(offsetof(USceneFlowWorker, Preposes) == 0x0080);
static_assert(offsetof(USceneFlowWorker, Postposes) == 0x0090);
static_assert(offsetof(USceneInputSystem, PlayerController) == 0x0068);
static_assert(offsetof(USceneInputSystem, InputComponent) == 0x0070);
static_assert(offsetof(USceneInputSystem, LastSlideValue) == 0x0078);
static_assert(offsetof(USceneInputSystem, SlideValue) == 0x0080);
static_assert(offsetof(USceneInputSystem, InputAxis) == 0x0088);
static_assert(offsetof(USceneObjectState, ObjectGuid) == 0x002C);
static_assert(offsetof(USceneObjectState, CachedTypeName) == 0x003C);
static_assert(offsetof(USceneObjectSystem, ObjectClasses) == 0x0058);
static_assert(offsetof(USceneObjectSystem, ClassifiedActors) == 0x00B8);
static_assert(offsetof(USceneObjectSystem, ActorByGuid) == 0x0108);
static_assert(offsetof(USceneObjectSystem, TaggedActors) == 0x0158);
static_assert(offsetof(AScenePawn, LuaFilePath) == 0x0288);
static_assert(offsetof(AScenePawn, MasterMeshComponent) == 0x0298);
static_assert(offsetof(UScenePawnState, Transform) == 0x0030);
static_assert(offsetof(UScenePreview, CustomScript) == 0x0030);
static_assert(offsetof(UScenePreview, OverrideStartPosition) == 0x0094);
static_assert(offsetof(UScenePreview, OverrideStartRotation) == 0x00A0);
static_assert(offsetof(UScenePreview, OverridePlayer) == 0x00B0);
static_assert(offsetof(UScenePreview, GeoLevel) == 0x00C0);
static_assert(offsetof(UScenePreview, InitialLevel) == 0x0110);
static_assert(offsetof(USceneSequenceModifierBase, BindActors) == 0x00D8);
static_assert(offsetof(USceneSequenceModifierBase, BindActorsByTag) == 0x0128);
static_assert(offsetof(UStageScript, StageManager) == 0x0028);
static_assert(offsetof(UStageScript, Subworld) == 0x0030);
static_assert(offsetof(UStageScript, InstanceData) == 0x0038);
static_assert(offsetof(UStageScript, StageDetailName) == 0x0120);
static_assert(offsetof(UStageScript, UIScripts) == 0x0130);
static_assert(offsetof(UStageScript, ReservedUIScripts) == 0x0140);
static_assert(offsetof(USceneStageBase, SubsystemArray) == 0x0190);
static_assert(offsetof(USceneStageBase, SubsystemInvoke) == 0x01A0);
static_assert(offsetof(USceneStageBase, SubsystemStateClass) == 0x01B0);
static_assert(offsetof(USceneStageBase, SubsystemEventClass) == 0x01B8);
static_assert(offsetof(USceneStageBase, SubsystemManager) == 0x01C8);
static_assert(offsetof(USceneStageBase, SubsystemState) == 0x01D0);
static_assert(offsetof(USceneStageBase, SubsystemEvent) == 0x01D8);
static_assert(offsetof(USceneStageBase, WorldContextActor) == 0x01E0);
static_assert(offsetof(USceneStageBase, PauseObjectFlag) == 0x01F0);
static_assert(offsetof(USceneStageBase, Id2Guid) == 0x0240);
static_assert(offsetof(USceneStageBase, Guid2Id) == 0x0290);
static_assert(offsetof(USceneStageBase, Id2String) == 0x02E0);
static_assert(offsetof(USceneStageBase, String2Id) == 0x0330);
static_assert(offsetof(USceneStageBase, WorldContextClass) == 0x0380);
static_assert(offsetof(USceneSubsystemManager, Subsystems) == 0x0028);
static_assert(offsetof(USceneSubsystemManager, SceneScriptObject) == 0x0038);
static_assert(offsetof(USceneSubsystemManager, SystemState) == 0x0040);
static_assert(offsetof(FTypedStateCollection, StateById) == 0x0000);
static_assert(offsetof(USceneSystemState, EventNotifier) == 0x0028);
static_assert(offsetof(USceneSystemState, StateClassMap) == 0x0030);
static_assert(offsetof(USceneSystemState, PawnStateMap) == 0x0080);
static_assert(offsetof(USceneSystemState, ObjectByGuid) == 0x00D0);
static_assert(offsetof(USceneSystemState, TypedObjectState) == 0x0120);
static_assert(offsetof(USceneSystemState, RecentBattleResult) == 0x0170);
static_assert(offsetof(USceneTaskObject, StageScriptObject) == 0x0028);
static_assert(offsetof(USceneTaskObject, SceneTaskType) == 0x0030);
static_assert(offsetof(USceneTaskPool, ObjectClass) == 0x0068);
static_assert(offsetof(USceneTaskSystem, TaskObjectPool) == 0x0058);
static_assert(offsetof(USceneTaskSystem, QueuedTasks) == 0x00A8);
static_assert(offsetof(USceneTaskSystem, RandomTasks) == 0x00B8);
static_assert(offsetof(USceneTaskSystem, RunningTask) == 0x00C8);
static_assert(offsetof(USceneUnitLookAtComponent, Unit) == 0x00B8);
static_assert(offsetof(USceneUnitLookAtComponent, ABP) == 0x00C0);
static_assert(offsetof(USceneUnitLookAtComponent, MeshComp) == 0x00C8);
static_assert(offsetof(USceneUnitLookAtComponent, MatEye_L) == 0x00D0);
static_assert(offsetof(USceneUnitLookAtComponent, MatEye_R) == 0x00D8);
static_assert(offsetof(USceneUnitLookAtComponent, LookAtTarget) == 0x00E0);
static_assert(offsetof(ASceneVehiclePawn, MotoMesh) == 0x02A0);
static_assert(offsetof(ASceneVehiclePawn, RidderMesh) == 0x02A8);
static_assert(offsetof(ASceneVehiclePawn, AnimInstance) == 0x02B0);
static_assert(offsetof(ASceneVehiclePawn, RidderAnimInstance) == 0x02B8);
static_assert(offsetof(UScreenProjector, World) == 0x0028);
static_assert(offsetof(UScreenProjector, Player) == 0x0030);
static_assert(offsetof(AScreenshot, TextureTarget) == 0x0220);
static_assert(offsetof(AScreenshot, Material) == 0x0228);
static_assert(offsetof(AScreenshot, MaterialParamName) == 0x0230);
static_assert(offsetof(FScrollCellInfo, Cell) == 0x0000);
static_assert(offsetof(AScrollScene, PresetCell) == 0x0220);
static_assert(offsetof(AScrollScene, CellFactoryClass) == 0x0228);
static_assert(offsetof(AScrollScene, CellFactory) == 0x0230);
static_assert(offsetof(AScrollScene, BuiltCells) == 0x0240);
static_assert(offsetof(AScrollSceneCell, Entrance) == 0x0228);
static_assert(offsetof(AScrollSceneCell, Exit) == 0x0238);
static_assert(offsetof(AScrollSceneCell, SceneRoot) == 0x0240);
static_assert(offsetof(UScrollSceneCellFactory, CellPool) == 0x0028);
static_assert(offsetof(FSecretSet, BookNames) == 0x0000);
static_assert(offsetof(FSecretSet, Secrets) == 0x0010);
static_assert(offsetof(USecretBook, CookedSecretSet) == 0x0028);
static_assert(offsetof(USecretBook, RuntimeSecretSet) == 0x0038);
static_assert(offsetof(ASequenceHandler, Sequence) == 0x0260);
static_assert(offsetof(ASequenceHandler, SequenceActor) == 0x0268);
static_assert(offsetof(ASequenceHandler, Player) == 0x0270);
static_assert(offsetof(ASequenceHandler, Setting) == 0x0278);
static_assert(offsetof(ASequenceHandler, PostProcess) == 0x0290);
static_assert(offsetof(ASequenceHandler, ClockSourceActor) == 0x0298);
static_assert(offsetof(ASequenceHandler, AudioAssets) == 0x02A0);
static_assert(offsetof(ASequenceHandler, AutoBindRecordMap) == 0x02B0);
static_assert(offsetof(ASequenceManager, Handlers) == 0x0238);
static_assert(offsetof(ASequenceManager, PendingDestroy) == 0x0248);
static_assert(offsetof(USharedStageWidget, AssignedOuter) == 0x02A8);
static_assert(offsetof(FSkeletalSkinAsset, Transform) == 0x0000);
static_assert(offsetof(FSkeletalSkinAsset, SkeletalMesh) == 0x0030);
static_assert(offsetof(FSkeletalSkinAsset, SocketName) == 0x0038);
static_assert(offsetof(FParticleSkinAsset, Transform) == 0x0000);
static_assert(offsetof(FParticleSkinAsset, ParticleSystem) == 0x0030);
static_assert(offsetof(FParticleSkinAsset, SocketName) == 0x0038);
static_assert(offsetof(USkinDataAssetBase, FSkeletalSkinAssets) == 0x0038);
static_assert(offsetof(USkinDataAssetBase, FParticleAssets) == 0x0048);
static_assert(offsetof(USkinDataAssetBase, SkeletalMesh) == 0x0058);
static_assert(offsetof(USkinDataAssetBase, MaterialMap) == 0x0060);
static_assert(offsetof(USkinDataAssetBase, BattleAnimInstance) == 0x00B8);
static_assert(offsetof(USkinDataAssetBase, PreviewAnimInstance) == 0x00E0);
static_assert(offsetof(USkinDataAssetBase, PreviewIdleAnimSequence) == 0x0108);
static_assert(offsetof(USkinDataAssetBase, ClothPreviewAnimInstance) == 0x0130);
static_assert(offsetof(FBattleCapsuleShape, RelativeLocation) == 0x000C);
static_assert(offsetof(USkinDataAsset, SubSkinDataAssets) == 0x0138);
static_assert(offsetof(USkinDataAsset, BattleScale) == 0x0148);
static_assert(offsetof(USkinDataAsset, BattleFinalCamera) == 0x0160);
static_assert(offsetof(USkinDataAsset, BattleFinalLightRot) == 0x0194);
static_assert(offsetof(USkinDataAsset, BattleCapsuleShape) == 0x01A0);
static_assert(offsetof(USkinDataAsset, PreviewRotator) == 0x01B8);
static_assert(offsetof(USkinDataAsset, PageUnitRotator) == 0x01C8);
static_assert(offsetof(USkinDataAsset, PageCameraLocation) == 0x0218);
static_assert(offsetof(USkinDataAsset, AgtLocation) == 0x0268);
static_assert(offsetof(USkinDataAsset, NearAgtLocation) == 0x0274);
static_assert(offsetof(USkinDataAsset, NearAgtRotator) == 0x0280);
static_assert(offsetof(USneakAttackSequenceModifier, PlayerTrackName) == 0x0138);
static_assert(offsetof(USneakAttackSequenceModifier, CameraTrackName) == 0x0148);
static_assert(offsetof(USneakAttackSequenceModifier, MonsterTrackName) == 0x0158);
static_assert(offsetof(USneakAttackSequenceModifier, PlayerStartRot) == 0x0168);
static_assert(offsetof(USneakAttackSequenceModifier, PlayerEndRot) == 0x0174);
static_assert(offsetof(USneakAttackSequenceModifier, MonsterStartRot) == 0x0180);
static_assert(offsetof(USneakAttackSequenceModifier, MonsterEndRot) == 0x018C);
static_assert(offsetof(USneakAttackSequenceModifier, CameraBlendStartTrans) == 0x01A0);
static_assert(offsetof(USneakAttackSequenceModifier, CameraBlendEndTrans) == 0x01D0);
static_assert(offsetof(USneakAttackSequenceModifier, SeqPlayerMoveEndLoc) == 0x0204);
static_assert(offsetof(ASpecialTerrainBase, GroupMap) == 0x0220);
static_assert(offsetof(USpineDataAsset, Atlas) == 0x0030);
static_assert(offsetof(USpineDataAsset, SkeletonData) == 0x0038);
static_assert(offsetof(USpineDataAsset, ScaleFactor) == 0x0040);
static_assert(offsetof(USpineMaterialSet, NormalBlendMaterial) == 0x0030);
static_assert(offsetof(USpineMaterialSet, AdditiveBlendMaterial) == 0x0038);
static_assert(offsetof(USpineMaterialSet, MultiplyBlendMaterial) == 0x0040);
static_assert(offsetof(USpineMaterialSet, ScreenBlendMaterial) == 0x0048);
static_assert(offsetof(USpineImageRenderComponent, MaterialTemplate) == 0x04F8);
static_assert(offsetof(USpineImageRenderComponent, TextureParameterName) == 0x0500);
static_assert(offsetof(USpineImageRenderComponent, TextureAsset) == 0x0508);
static_assert(offsetof(USpineImageRenderComponent, ImageSize) == 0x0510);
static_assert(offsetof(USpineImageRenderComponent, ImagePivot) == 0x0518);
static_assert(offsetof(USpineImageRenderComponent, ImageShear) == 0x0520);
static_assert(offsetof(USpineImageRenderComponent, TintColor) == 0x0528);
static_assert(offsetof(USpineImageRenderComponent, DMI) == 0x0540);
static_assert(offsetof(USpineImageRenderComponent, SpineSkeletonComponent) == 0x0548);
static_assert(offsetof(USpineTextRenderComponent, SpineSkeletonComponent) == 0x04C0);
static_assert(offsetof(USplashMovieState, NextStateName) == 0x0050);
static_assert(offsetof(USplashState, NextStateName) == 0x0050);
static_assert(offsetof(UStageManager, TypeCache) == 0x0028);
static_assert(offsetof(UStageManager, WorldContextObject) == 0x00D0);
static_assert(offsetof(UStageManager, WorkingList) == 0x00D8);
static_assert(offsetof(UStageManager, PendingList) == 0x00E8);
static_assert(offsetof(UStageManager, Temporary) == 0x00F8);
static_assert(offsetof(UStageManager, LoadingScript) == 0x0108);
static_assert(offsetof(UStageManager, StageStack) == 0x0110);
static_assert(offsetof(UStageManager, Closing) == 0x0120);
static_assert(offsetof(UStageManager, PrepassTask) == 0x0130);
static_assert(offsetof(UStartupState, NextStateName) == 0x0050);
static_assert(offsetof(UStateQueue_Init, NextState) == 0x0088);
static_assert(offsetof(UStateQueue_Login, NextState) == 0x00F0);
static_assert(offsetof(UStateQueue_Relogin, ReturnState) == 0x009C);
static_assert(offsetof(UStateQueue_Relogin, RecoverState) == 0x00A4);
static_assert(offsetof(UStateQueue_Relogin, Text_Retry) == 0x00B0);
static_assert(offsetof(UStateQueue_Relogin, Text_Giveup) == 0x00C8);
static_assert(offsetof(UStateQueue_Restart, NextState) == 0x009C);
static_assert(offsetof(UStateQueue_Restart, Text_Retry) == 0x00A8);
static_assert(offsetof(UStateQueue_Restart, Text_Giveup) == 0x00C0);
static_assert(offsetof(UStoryAnimInstance, BlinkAnims) == 0x02B8);
static_assert(offsetof(UStoryAnimInstance, BlinkIntervals) == 0x0308);
static_assert(offsetof(UStoryAnimInstance, BlinkWeights) == 0x0358);
static_assert(offsetof(UStoryAnimInstance, BlinkSlot) == 0x03A8);
static_assert(offsetof(UStoryAnimInstance, EyeFlashAnim) == 0x03D0);
static_assert(offsetof(UStoryAnimInstance, LeftEyeKeyWord) == 0x03E8);
static_assert(offsetof(UStoryAnimInstance, RightEyeKeyWord) == 0x03F8);
static_assert(offsetof(UStoryAnimInstance, AttributeCurveMap) == 0x0410);
static_assert(offsetof(UStoryAnimInstance, BlinkBlendState) == 0x0488);
static_assert(offsetof(UStoryAnimInstance, EyeFlashBlendState) == 0x0490);
static_assert(offsetof(AStorylinePreviewManager, PreviewStoryline) == 0x0220);
static_assert(offsetof(AStorylinePreviewManager, PreviewStartNode) == 0x0228);
static_assert(offsetof(UStoryNPCSlotComponent, NPCName) == 0x01F8);
static_assert(offsetof(AStoryNPCTemplete, StorylineIds) == 0x0228);
static_assert(offsetof(AStorySoundInjectListener, SoundInjectTable) == 0x0220);
static_assert(offsetof(UStoryTempleteCameraComponent, CameraName) == 0x08D8);
static_assert(offsetof(USubworld, CustomDatas) == 0x0038);
static_assert(offsetof(USubworld, LevelManager) == 0x00D8);
static_assert(offsetof(USubworld, StageManager) == 0x00E0);
static_assert(offsetof(USubworld, SubworldManager) == 0x00E8);
static_assert(offsetof(USubworld, ManageObject) == 0x00F0);
static_assert(offsetof(USubworld, WorldContext) == 0x00F8);
static_assert(offsetof(USubworldManager, Subworlds) == 0x00A0);
static_assert(offsetof(USubworldManager, MasterSubworld) == 0x00F0);
static_assert(offsetof(USubworldManager, WorldContext) == 0x00F8);
static_assert(offsetof(USysBus, Events) == 0x0028);
static_assert(offsetof(USysBus, Controls) == 0x0038);
static_assert(offsetof(UDevLoginCtrl, UserId) == 0x0030);
static_assert(offsetof(UDevLoginCtrl, Password) == 0x0040);
static_assert(offsetof(URegisterCtrl, Name) == 0x0038);
static_assert(offsetof(URequestPayCtrl, Amount) == 0x0030);
static_assert(offsetof(UPayCallBackCtrl, Amount) == 0x0038);
static_assert(offsetof(UTapDBTrackEventCtrl, EventName) == 0x0030);
static_assert(offsetof(UTapDBTrackEventCtrl, PropertiesStr) == 0x0040);
static_assert(offsetof(UXDDataPushDataCtrl, TagName) == 0x0030);
static_assert(offsetof(UXDDataPushDataCtrl, EventName) == 0x0040);
static_assert(offsetof(UXDDataPushDataCtrl, MapStringValues) == 0x0050);
static_assert(offsetof(UXDDataPushDataCtrl, MapIntValues) == 0x00A0);
static_assert(offsetof(UServerClassify, TabName) == 0x0038);
static_assert(offsetof(UEntryEv, BillboardContent) == 0x0048);
static_assert(offsetof(UDialogEvent, Style) == 0x0044);
static_assert(offsetof(UDialogEvent, Title) == 0x0048);
static_assert(offsetof(UDialogEvent, Content) == 0x0060);
static_assert(offsetof(UDialogEvent, OptYesText) == 0x0078);
static_assert(offsetof(UDialogEvent, OptNoText) == 0x0090);
static_assert(offsetof(UMaintainBlockEvent, MaintainTitle) == 0x0040);
static_assert(offsetof(UMaintainBlockEvent, MaintainLinkText) == 0x0050);
static_assert(offsetof(UMaintainBlockEvent, MaintainLinkAddr) == 0x0060);
static_assert(offsetof(UMaintainBlockEvent, MaintainContent) == 0x0070);
static_assert(offsetof(UAnnouncementEvent, AnnoucementContents) == 0x0040);
static_assert(offsetof(UBatchTaskItem_OpenUI, InstanceData) == 0x0030);
static_assert(offsetof(UBatchTaskItem_OpenUI, UIScript) == 0x0040);
static_assert(offsetof(FBatchedOp, OpenUI) == 0x0000);
static_assert(offsetof(UTaskBatchedUI, TargetStageScript) == 0x0040);
static_assert(offsetof(UTaskBatchedUI, TransitionWidget) == 0x0048);
static_assert(offsetof(UTaskBatchedUI, BatchOps) == 0x0050);
static_assert(offsetof(UTaskBatchedUI, TransitionWidgetAssetId) == 0x0060);
static_assert(offsetof(UTaskCloseStage, LoadState) == 0x0050);
static_assert(offsetof(UTaskCloseStage, LoadScript) == 0x0058);
static_assert(offsetof(UTaskCloseStage, TargetStage) == 0x0060);
static_assert(offsetof(UTaskOpenStage, InstanceData) == 0x0068);
static_assert(offsetof(UTaskOpenStage, StageHandler) == 0x0070);
static_assert(offsetof(UTaskOpenStage, LoadState) == 0x0078);
static_assert(offsetof(UTaskOpenStage, LoadScript) == 0x0080);
static_assert(offsetof(UTaskOpenStage, NewStage) == 0x0088);
static_assert(offsetof(UTowerClueDataAsset, TowerClues) == 0x0030);
static_assert(offsetof(UUIManager, ActiveUIs) == 0x0078);
static_assert(offsetof(UUIManager, TouchInterface) == 0x0088);
static_assert(offsetof(UUIManager, DefaultScriptClass) == 0x0090);
static_assert(offsetof(UUIManager, SharedWidgets) == 0x0098);
static_assert(offsetof(UUIManager, CachedTop) == 0x00E8);
static_assert(offsetof(UUIManager, WorldContextObject) == 0x00F0);
static_assert(offsetof(UClassifiedWidgetPool, WidgetClass) == 0x0028);
static_assert(offsetof(FWidgetSlot, SlotName) == 0x0000);
static_assert(offsetof(FWidgetSlot, Widget) == 0x0010);
static_assert(offsetof(UUIScript, StageScript) == 0x0090);
static_assert(offsetof(UUIScript, Subworld) == 0x0098);
static_assert(offsetof(UUIScript, SubworldParent) == 0x00A0);
static_assert(offsetof(UUIScript, WidgetSlots) == 0x00A8);
static_assert(offsetof(UUIScript, WidgetArray) == 0x00B8);
static_assert(offsetof(UUIScript, TouchInterface) == 0x00C8);
static_assert(offsetof(UUIScript, InstanceData) == 0x00D0);
static_assert(offsetof(UUIScript, AssignedSharedWidgets) == 0x00D8);
static_assert(offsetof(UUIScript, SceneBlockType) == 0x0128);
static_assert(offsetof(UUIScript, WeakContextObject) == 0x0178);
static_assert(offsetof(UUIScript, ReservedWidgetPool) == 0x01A0);
static_assert(offsetof(UUIScript, WidgetClassMap) == 0x01F0);
static_assert(offsetof(UUnitPreviewAnimInstance, MachineName) == 0x02B8);
static_assert(offsetof(UUnitPreviewAnimInstance, Proxy) == 0x02E0);
static_assert(offsetof(UValidateState, NextStateName) == 0x0050);
static_assert(offsetof(UVersionState, UpdateStateName) == 0x0050);
static_assert(offsetof(UVersionState, NextStateName) == 0x0058);
static_assert(offsetof(UViewContext, WorldContext) == 0x0028);
static_assert(offsetof(UViewFramework, SubworldManager) == 0x0028);
static_assert(offsetof(UViewFramework, StageManager) == 0x0030);
static_assert(offsetof(UViewFramework, LevelManager) == 0x0038);
static_assert(offsetof(UViewFramework, UIManager) == 0x0040);
static_assert(offsetof(UViewFramework, LayerManager) == 0x0048);
static_assert(offsetof(UViewFramework, SubworldManagerClass) == 0x0050);
static_assert(offsetof(UViewFramework, StageManagerClass) == 0x0058);
static_assert(offsetof(UViewFramework, LevelManagerClass) == 0x0060);
static_assert(offsetof(UViewFramework, UIManagerClass) == 0x0068);
static_assert(offsetof(UViewFramework, LayerManagerClass) == 0x0070);
static_assert(offsetof(UViewFramework, SubworldConfig) == 0x0078);
static_assert(offsetof(UViewFramework, StageConfig) == 0x00A0);
static_assert(offsetof(UViewFramework, LevelConfig) == 0x00C8);
static_assert(offsetof(UViewFramework, UIConfig) == 0x00F0);
static_assert(offsetof(UViewFramework, Controller) == 0x0120);
static_assert(offsetof(UVirtualKeyboardZoneSlot, Padding) == 0x0038);
static_assert(offsetof(UVirtualKeyboardZoneSlot, HAlign) == 0x0048);
static_assert(offsetof(UVirtualKeyboardZoneSlot, VAlign) == 0x0049);
static_assert(offsetof(UWidgetLoadScript, LoadWidget) == 0x0058);
static_assert(offsetof(UWidgetLoadScript, LoadWidgetClass) == 0x0060);
static_assert(offsetof(UWidgetLoadScript, TextBook) == 0x0068);
static_assert(offsetof(UWidgetLoadScript, TextWeights) == 0x0070);
static_assert(offsetof(UWiremapAnimPool, AnimInPool) == 0x0028);
static_assert(offsetof(UWiremapAnimPool, AnimClass) == 0x0038);
static_assert(offsetof(AWiremapActor, WiremapRenderComponent) == 0x0220);
static_assert(offsetof(AWiremapActor, WiremapEdgeFactoryClasses) == 0x0228);
static_assert(offsetof(AWiremapActor, NormalVector) == 0x027C);
static_assert(offsetof(AWiremapActor, WiremapEdgeFactories) == 0x0288);
static_assert(offsetof(AWiremapActor, Edges) == 0x02D8);
static_assert(offsetof(AWiremapActor, Vertexes) == 0x0328);
static_assert(offsetof(AWiremapActor, TickEdges) == 0x0378);
static_assert(offsetof(AWiremapActor, TickPendings) == 0x0388);
static_assert(offsetof(AWiremapActor, AnimPools) == 0x0398);
static_assert(offsetof(UWiremapEdge, Vertex0) == 0x0030);
static_assert(offsetof(UWiremapEdge, Vertex1) == 0x0038);
static_assert(offsetof(UWiremapEdge, Animation) == 0x0040);
static_assert(offsetof(UGeneralWiremapEdge, TintColor) == 0x0054);
static_assert(offsetof(UGeneralWiremapEdge, Material) == 0x0068);
static_assert(offsetof(UMultiWiremapEdge, Widths) == 0x0058);
static_assert(offsetof(UMultiWiremapEdge, Colors) == 0x0068);
static_assert(offsetof(UMultiWiremapEdge, Materials) == 0x0078);
static_assert(offsetof(UMultiWiremapEdge, Values) == 0x0088);
static_assert(offsetof(UMultiWiremapEdge, VisibleForLayers) == 0x0098);
static_assert(offsetof(UMultiWiremapEdge, Color) == 0x00AC);
static_assert(offsetof(UWiremapEdgeFactory, WiremapEdgeClass) == 0x0028);
static_assert(offsetof(UWiremapRenderComponent, NormalVector) == 0x04FC);
static_assert(offsetof(UWiremapRenderComponent, MeshBuilder) == 0x0508);
static_assert(offsetof(UWiremapVertex, Position) == 0x002C);
static_assert(offsetof(UWiremapVertex, WireEdges) == 0x0038);
static_assert(offsetof(UWorldTraceComponent, OnScreenWidget) == 0x01F8);
static_assert(offsetof(UWorldTraceComponent, OnScreenPivot) == 0x0200);
static_assert(offsetof(UWorldTraceComponent, OnScreenSize) == 0x0208);
static_assert(offsetof(UWorldTraceComponent, AnchorWorldOffset) == 0x0214);
static_assert(offsetof(UWorldTraceComponent, OffScreenWidget) == 0x0220);
static_assert(offsetof(UWorldTraceComponent, OffScreenPivot) == 0x0228);
static_assert(offsetof(UWorldTraceComponent, OffScreenSize) == 0x0230);
static_assert(offsetof(UWorldTraceComponent, OffScreenLayoutMethod) == 0x0238);
static_assert(offsetof(UWorldTraceComponent, Anchor) == 0x023C);
static_assert(offsetof(UWorldTraceComponent, Position) == 0x0244);
static_assert(offsetof(UWorldTraceComponent, Extend) == 0x024C);
static_assert(offsetof(UWorldTraceComponent, Border) == 0x0258);
static_assert(offsetof(FComponentWidget, Component) == 0x0000);
static_assert(offsetof(FComponentWidget, WorldLocation) == 0x0008);
static_assert(offsetof(FComponentWidget, UniformCoord) == 0x0014);
static_assert(offsetof(FComponentWidget, OnScreenWidget) == 0x0020);
static_assert(offsetof(FComponentWidget, OffScreenWidget) == 0x0028);
static_assert(offsetof(UWorldTraceWidget, ContainerCanvas) == 0x02C0);
static_assert(offsetof(UWorldTraceWidget, AllComponents) == 0x02C8);
static_assert(offsetof(UWorldTraceWidget, WidgetPools) == 0x0318);
static_assert(offsetof(UWorldTraceWidget, WidgetRemains) == 0x0368);
static_assert(offsetof(FWwiseMediaState, MediaEvent) == 0x0000);
static_assert(offsetof(FWwiseBGMState, StateName) == 0x0004);
static_assert(offsetof(FWwiseBGMState, AkPlayEvent) == 0x0018);
static_assert(offsetof(FWwiseBGMState, AkStopEvent) == 0x0020);
static_assert(offsetof(FAudioStateStruct, StateName) == 0x0008);
static_assert(offsetof(FAudioStateStruct, Category) == 0x0010);
static_assert(offsetof(FAudioStateStruct, States) == 0x0018);
static_assert(offsetof(FMusicModifyState, Object) == 0x0000);
static_assert(offsetof(FMusicModifyState, Modifier) == 0x0008);
static_assert(offsetof(AWwiseAudioManager, AkBGMEvent) == 0x0220);
static_assert(offsetof(AWwiseAudioManager, AkStopBGMEvent) == 0x0228);
static_assert(offsetof(AWwiseAudioManager, LayerDefines) == 0x0230);
static_assert(offsetof(AWwiseAudioManager, AudioStates) == 0x0238);
static_assert(offsetof(AWwiseAudioManager, IndoorState) == 0x0240);
static_assert(offsetof(AWwiseAudioManager, OutdoorState) == 0x0248);
static_assert(offsetof(AWwiseAudioManager, NonModifyBGM) == 0x0250);
static_assert(offsetof(AWwiseAudioManager, SharedSoundEffect) == 0x0258);
static_assert(offsetof(AWwiseAudioManager, AkMediaListener) == 0x0268);
static_assert(offsetof(AWwiseAudioManager, MediaSound) == 0x0270);
static_assert(offsetof(AWwiseAudioManager, MediaState) == 0x0278);
static_assert(offsetof(AWwiseAudioManager, LayeredBGMState) == 0x0288);
static_assert(offsetof(AWwiseAudioManager, CurrentBGMEvent) == 0x0298);
static_assert(offsetof(AWwiseAudioManager, StateStruct) == 0x02A0);
static_assert(offsetof(AWwiseAudioManager, IndoorRooms) == 0x02F0);
static_assert(offsetof(AWwiseAudioManager, IndoorRoomState) == 0x0340);
static_assert(offsetof(AWwiseAudioManager, MusicModifiers) == 0x0348);
static_assert(offsetof(AWwiseAudioManager, MusicModifier) == 0x0358);
static_assert(offsetof(AWwiseAudioManager, CurrStopBGMEvent) == 0x0360);
static_assert(offsetof(AWwiseAudioManager, SharedSoundEventMap) == 0x0368);
static_assert(offsetof(FOneVetoStruct, RuleName) == 0x0008);
static_assert(offsetof(FOneVetoStruct, VetoTopics) == 0x0010);
static_assert(offsetof(FBattleSequenceMasterData, Points) == 0x0000);
static_assert(offsetof(FBattleSequenceInstanceData, Masters) == 0x0000);
static_assert(offsetof(FBattleSequenceInstanceData, CasterStartPosition) == 0x005C);
static_assert(offsetof(FBattleSequenceInstanceData, CasterForwardVector) == 0x0068);
static_assert(offsetof(FBattleSequenceInstanceData, VictimStartPosition) == 0x0074);
static_assert(offsetof(FBattleSequenceInstanceData, VictimStartRotation) == 0x0080);
static_assert(offsetof(FBattleSequenceInstanceData, EnvRoot) == 0x0098);
static_assert(offsetof(FBattleSequenceInstanceData, BattleCamera) == 0x00A0);
static_assert(offsetof(FBattleSequenceInstanceData, BodyMaterial) == 0x00A8);
static_assert(offsetof(FCameraDetail, ViewInfo) == 0x0000);
static_assert(offsetof(FInputCastDataTable, ActionKey) == 0x0008);
static_assert(offsetof(FInputCastDataTable, ActionName) == 0x0020);
static_assert(offsetof(FInputCastDataTable, Icon) == 0x0028);
static_assert(offsetof(FInputCastDataTable, GamePadModel) == 0x0038);
static_assert(offsetof(FGameTriggerRequirementStruct, ContextTag) == 0x0008);
static_assert(offsetof(FGameTriggerRequirementStruct, Dependencies) == 0x0010);
static_assert(offsetof(FGameTriggerRequirementStruct, Excludes) == 0x0030);
static_assert(offsetof(FLevelStruct, LevelName) == 0x0008);
static_assert(offsetof(FLevelStruct, LevelPackage) == 0x0010);
static_assert(offsetof(FLevelStruct, LevelType) == 0x0020);
static_assert(offsetof(FLevelStruct, Navigation) == 0x0024);
static_assert(offsetof(FLevelStruct, NavigationMode) == 0x002C);
static_assert(offsetof(FLevelStruct, Prepose) == 0x0038);
static_assert(offsetof(FLevelStruct, SourceStatement) == 0x0058);
static_assert(offsetof(FSubtitleRow, StartTime) == 0x0008);
static_assert(offsetof(FSubtitleRow, EndTime) == 0x0018);
static_assert(offsetof(FSubtitleRow, Text) == 0x0028);
static_assert(offsetof(FRegionDefination, RegionColor) == 0x000C);
static_assert(offsetof(FRegionDefination, RegionAbbr) == 0x0020);
static_assert(offsetof(FRegionDefination, regionName) == 0x0030);
static_assert(offsetof(FRegionDefination, ServerCode) == 0x0050);
static_assert(offsetof(FCameraSkinAsset, CstTransform) == 0x0000);
static_assert(offsetof(FCameraSkinAsset, AgtTransform) == 0x0030);
static_assert(offsetof(FCameraSkinAsset, CameraTransform) == 0x0060);
static_assert(offsetof(FStageStruct, Name) == 0x0010);
static_assert(offsetof(FStageStruct, UIList) == 0x0028);
static_assert(offsetof(FStageStruct, Actor) == 0x0038);
static_assert(offsetof(FStageStruct, LoadingActor) == 0x0048);
static_assert(offsetof(FStoryAloneTableStruct, DesireSubLevel) == 0x0008);
static_assert(offsetof(FStoryAloneTableStruct, StoryToPlay) == 0x0018);
static_assert(offsetof(FStoryAloneTableStruct, EnterLoadingText) == 0x0040);
static_assert(offsetof(FStorySoundInjectTableStruct, StorylineName) == 0x0010);
static_assert(offsetof(FStorySoundInjectTableStruct, TriggerType) == 0x0020);
static_assert(offsetof(FStorySoundInjectTableStruct, SequenceAsset) == 0x0028);
static_assert(offsetof(FStorySoundInjectTableStruct, InjectType) == 0x0050);
static_assert(offsetof(FStorySoundInjectTableStruct, BGMStates) == 0x0058);
static_assert(offsetof(FStorySoundInjectTableStruct, BGMLayers) == 0x0068);
static_assert(offsetof(FStorySoundInjectTableStruct, SoundEffectEvent) == 0x0078);
static_assert(offsetof(FInjectSoundInfo, InjectType) == 0x0000);
static_assert(offsetof(FInjectSoundInfo, BGMStates) == 0x0008);
static_assert(offsetof(FInjectSoundInfo, BGMLayers) == 0x0018);
static_assert(offsetof(FInjectSoundInfo, SoundEffectEvent) == 0x0028);
static_assert(offsetof(FInjectSoundInfo, RowName) == 0x0050);
static_assert(offsetof(FWeightedReplaceText, Text) == 0x0000);
static_assert(offsetof(FWeightedReplaceText, Placeholder) == 0x0010);
static_assert(offsetof(FCharacterWeight, Range) == 0x0000);
static_assert(offsetof(FStringCheck, Message) == 0x0010);
static_assert(offsetof(FSubworldStruct, World) == 0x000C);
static_assert(offsetof(FSubworldStruct, LevelList) == 0x0018);
static_assert(offsetof(FSubworldStruct, CustomDatas) == 0x0028);
static_assert(offsetof(FTextbookStruct, PackName) == 0x0008);
static_assert(offsetof(FTextbookStruct, Title) == 0x0018);
static_assert(offsetof(FTextbookStruct, Body1) == 0x0030);
static_assert(offsetof(FTextbookStruct, Body2) == 0x0048);
static_assert(offsetof(FUIStruct, RenderOpt) == 0x001C);
static_assert(offsetof(FUIStruct, MemoryOpt) == 0x001D);
static_assert(offsetof(FUIStruct, Widgets) == 0x0020);
static_assert(offsetof(FUIStruct, SharedWidgets) == 0x0030);
static_assert(offsetof(FUIStruct, ScriptPath) == 0x0040);
static_assert(offsetof(FUIStruct, JoystickStyle) == 0x0050);
static_assert(offsetof(FUIStruct, PerfTag) == 0x0060);
static_assert(offsetof(FUIStruct, TransitionWidgetClass) == 0x0068);
