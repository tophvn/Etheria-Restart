
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LipSyncRuntime.h"
#include "MediaAssets.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "Slate.h"

#pragma pack(push, 0x1)

class UMovieSceneSubtitleSection;
class UMovieSceneSubtitleTrack;
class UStoryline;
class UStorylineAction;
class UStorylineActionInterface;
class UStorylineAnimAction;
class UStorylineAsideAction;
class UStorylineAutoLookAtAction;
class UStorylineBattleAppear;
class UStorylineBattleCutsceneStartNext;
class UStorylineBattleDie;
class UStorylineCameraAction;
class UStorylineCameraLookAtAction;
class UStorylineCameraMoveAction;
class UStorylineChangeBattleABP;
class UStorylineCommandAction;
class UStorylineCondition;
class UStorylineConditionUnit;
class UStorylineContext;
class UStorylineCrackScreenAction;
class UStorylineDialogAction;
class UStorylineEventConditionUnit;
class UStorylineExpressionAction;
class UStorylineFadeAction;
class UStorylineFirstPlayConditionUnit;
class UStorylineFriControlAction;
class UStorylineFunctionLibrary;
class UStorylineGetPropAction;
class UStorylineMovieAction;
class UStorylineNPCControlAction;
class UStorylineNPCDeployAction;
class UStorylineNode;
class UStorylinePopUIAction;
class UStorylinePostProcessAction;
class UStorylinePresetSeq;
class UStorylinePreviewContext;
class UStorylineProducts;
class UStorylineSceneInteractAction;
class UStorylineSceneMovieAction;
class UStorylineSelectionConditionUnit;
class UStorylineSequenceAction;
class UStorylineShowBattleFigure;
class UStorylineShowBattleUI;
class UStorylineShowPvpCountdownUI;
class UStorylineSoundAction;
class UStorylineStateConditionUnit;
class UStorylineUnitMoveAction;

/// Enum /Script/StorylineRuntime.EStoryMode
/// Size: 0x01 (1 bytes)
enum class EStoryMode : uint8_t
{
	EStoryMode__Story_3D                                                             = 0,
	EStoryMode__Story_2D                                                             = 1,
	EStoryMode__Story_3DWith2D                                                       = 2,
	EStoryMode__Story_Alone                                                          = 3
};

/// Enum /Script/StorylineRuntime.EStoryFriEndState
/// Size: 0x01 (1 bytes)
enum class EStoryFriEndState : uint8_t
{
	EStoryFriEndState__General                                                       = 0,
	EStoryFriEndState__Switch                                                        = 1
};

/// Enum /Script/StorylineRuntime.EStoryHomeEndState
/// Size: 0x01 (1 bytes)
enum class EStoryHomeEndState : uint8_t
{
	EStoryHomeEndState__Sofa                                                         = 0,
	EStoryHomeEndState__Closet                                                       = 1,
	EStoryHomeEndState__Console                                                      = 2,
	EStoryHomeEndState__Friday                                                       = 3,
	EStoryHomeEndState__Gacha                                                        = 4,
	EStoryHomeEndState__EdenLink                                                     = 5,
	EStoryHomeEndState__Teatable                                                     = 6,
	EStoryHomeEndState__ShowCase                                                     = 7
};

/// Enum /Script/StorylineRuntime.EStoryEndState
/// Size: 0x01 (1 bytes)
enum class EStoryEndState : uint8_t
{
	EStoryEndState__General                                                          = 0,
	EStoryEndState__Hide                                                             = 1,
	EStoryEndState__Rope                                                             = 2,
	EStoryEndState__Keep                                                             = 3
};

/// Enum /Script/StorylineRuntime.EStoryCameraMoveSpace
/// Size: 0x01 (1 bytes)
enum class EStoryCameraMoveSpace : uint8_t
{
	EStoryCameraMoveSpace__Camera                                                    = 0,
	EStoryCameraMoveSpace__World                                                     = 1
};

/// Enum /Script/StorylineRuntime.EStoryCameraMoveType
/// Size: 0x01 (1 bytes)
enum class EStoryCameraMoveType : uint8_t
{
	EStoryCameraMoveType__Circle                                                     = 0,
	EStoryCameraMoveType__Line                                                       = 1
};

/// Enum /Script/StorylineRuntime.EStoryNPCDeployMethod
/// Size: 0x01 (1 bytes)
enum class EStoryNPCDeployMethod : uint8_t
{
	EStoryNPCDeployMethod__Template                                                  = 0,
	EStoryNPCDeployMethod__Storyline                                                 = 1
};

/// Enum /Script/StorylineRuntime.EStoryNPCControlState
/// Size: 0x01 (1 bytes)
enum class EStoryNPCControlState : uint8_t
{
	EStoryNPCControlState__Show                                                      = 0,
	EStoryNPCControlState__Hide                                                      = 1,
	EStoryNPCControlState__Destroy                                                   = 2
};

/// Enum /Script/StorylineRuntime.EStorySceneInteractType
/// Size: 0x01 (1 bytes)
enum class EStorySceneInteractType : uint8_t
{
	EStorySceneInteractType__FreeMove                                                = 0,
	EStorySceneInteractType__Control                                                 = 1,
	EStorySceneInteractType__Hide                                                    = 2,
	EStorySceneInteractType__SingleRope                                              = 3,
	EStorySceneInteractType__RepeatRope                                              = 4,
	EStorySceneInteractType__Interact                                                = 5,
	EStorySceneInteractType__RemoteTrigger                                           = 6,
	EStorySceneInteractType__FollowCamera                                            = 7,
	EStorySceneInteractType__ControlCamera                                           = 8,
	EStorySceneInteractType__DisableInput                                            = 9,
	EStorySceneInteractType__EnableInput                                             = 10,
	EStorySceneInteractType__InteractExec                                            = 11
};

/// Enum /Script/StorylineRuntime.EStoryFriControlType
/// Size: 0x01 (1 bytes)
enum class EStoryFriControlType : uint8_t
{
	EStoryFriControlType__TurnOn                                                     = 0,
	EStoryFriControlType__TurnOff                                                    = 1,
	EStoryFriControlType__FlyTo                                                      = 2
};

/// Enum /Script/StorylineRuntime.EStoryUnitMoveActionType
/// Size: 0x01 (1 bytes)
enum class EStoryUnitMoveActionType : uint8_t
{
	EStoryUnitMoveActionType__AutoMove                                               = 0,
	EStoryUnitMoveActionType__Direct                                                 = 1,
	EStoryUnitMoveActionType__SimpleMove                                             = 2
};

/// Enum /Script/StorylineRuntime.ECameraGenderType
/// Size: 0x01 (1 bytes)
enum class ECameraGenderType : uint8_t
{
	ECameraGenderType__Default                                                       = 0,
	ECameraGenderType__Boy                                                           = 1,
	ECameraGenderType__Girl                                                          = 2,
	ECameraGenderType__Both                                                          = 3
};

/// Enum /Script/StorylineRuntime.EStoryLightAdjustType
/// Size: 0x01 (1 bytes)
enum class EStoryLightAdjustType : uint8_t
{
	EStoryLightAdjustType__NPC                                                       = 0,
	EStoryLightAdjustType__Manual                                                    = 1
};

/// Enum /Script/StorylineRuntime.EStoryCameraActionType
/// Size: 0x01 (1 bytes)
enum class EStoryCameraActionType : uint8_t
{
	EStoryCameraActionType__Sequence                                                 = 0,
	EStoryCameraActionType__Direct                                                   = 1,
	EStoryCameraActionType__Templete                                                 = 2,
	EStoryCameraActionType__FollowPlayer                                             = 3,
	EStoryCameraActionType__CloseUp                                                  = 4
};

/// Enum /Script/StorylineRuntime.EStorySoundType
/// Size: 0x01 (1 bytes)
enum class EStorySoundType : uint8_t
{
	EStorySoundType__Default                                                         = 0,
	EStorySoundType__Attach                                                          = 1,
	EStorySoundType__BGM                                                             = 2
};

/// Enum /Script/StorylineRuntime.EStoryAnimType
/// Size: 0x01 (1 bytes)
enum class EStoryAnimType : uint8_t
{
	EStoryAnimType__None                                                             = 0,
	EStoryAnimType__Idle                                                             = 1,
	EStoryAnimType__Act                                                              = 2,
	EStoryAnimType__Battle                                                           = 3,
	EStoryAnimType__Montage                                                          = 4
};

/// Enum /Script/StorylineRuntime.EDialogImgSide
/// Size: 0x01 (1 bytes)
enum class EDialogImgSide : uint8_t
{
	EDialogImgSide__Left                                                             = 0,
	EDialogImgSide__Right                                                            = 1,
	EDialogImgSide__Holo                                                             = 2,
	EDialogImgSide__LeftWithHolo                                                     = 3,
	EDialogImgSide__RightWithHolo                                                    = 4,
	EDialogImgSide__HoloWithLast                                                     = 5
};

/// Enum /Script/StorylineRuntime.EStoryEventType
/// Size: 0x01 (1 bytes)
enum class EStoryEventType : uint8_t
{
	EStoryEventType__ESET_Permanent                                                  = 0,
	EStoryEventType__ESET_Immediate                                                  = 1
};

/// Enum /Script/StorylineRuntime.EStoryActionType
/// Size: 0x01 (1 bytes)
enum class EStoryActionType : uint8_t
{
	EStoryActionType__Story_3D                                                       = 0,
	EStoryActionType__Story_2D                                                       = 1,
	EStoryActionType__Story_3DWith2D                                                 = 2,
	EStoryActionType__Story_Alone                                                    = 3
};

/// Enum /Script/StorylineRuntime.EStoryStateValueType
/// Size: 0x01 (1 bytes)
enum class EStoryStateValueType : uint8_t
{
	EStoryStateValueType__T_Bool                                                     = 0,
	EStoryStateValueType__T_Int                                                      = 1,
	EStoryStateValueType__T_Float                                                    = 2
};

/// Enum /Script/StorylineRuntime.EStoryStateValueOp
/// Size: 0x01 (1 bytes)
enum class EStoryStateValueOp : uint8_t
{
	EStoryStateValueOp__Equal                                                        = 0,
	EStoryStateValueOp__Less                                                         = 1,
	EStoryStateValueOp__LEqual                                                       = 2,
	EStoryStateValueOp__Greater                                                      = 3,
	EStoryStateValueOp__GEqual                                                       = 4,
	EStoryStateValueOp__NotEqual                                                     = 5
};

#pragma pack(pop)


static_assert(sizeof(FMovieSceneSubtitleData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMovieSceneSubtitleSection) == 0x0110); // 272 bytes (0x0000E8 - 0x000110)
static_assert(sizeof(UMovieSceneSubtitleTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FNPCInfo) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UStoryline) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(UStorylineAction) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UStorylineDialogAction) == 0x00E0); // 224 bytes (0x000050 - 0x0000E0)
static_assert(sizeof(FAppearSetting) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UStorylineBattleAppear) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UStorylineBattleDie) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UStorylineChangeBattleABP) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UStorylineBattleCutsceneStartNext) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UStorylineShowBattleUI) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UStorylineShowPvpCountdownUI) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UStorylineShowBattleFigure) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UStorylinePresetSeq) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UStorylineCrackScreenAction) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UStorylineAnimAction) == 0x00E8); // 232 bytes (0x000050 - 0x0000E8)
static_assert(sizeof(UStorylineExpressionAction) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(UStorylineAutoLookAtAction) == 0x0088); // 136 bytes (0x000050 - 0x000088)
static_assert(sizeof(UStorylineAsideAction) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UStorylineCommandAction) == 0x00B0); // 176 bytes (0x000050 - 0x0000B0)
static_assert(sizeof(UStorylineFadeAction) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(FPPParamControlData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UStorylinePostProcessAction) == 0x00C0); // 192 bytes (0x000050 - 0x0000C0)
static_assert(sizeof(UStorylineMovieAction) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(UStorylineSceneMovieAction) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UStorylineSoundAction) == 0x00B8); // 184 bytes (0x000050 - 0x0000B8)
static_assert(sizeof(UStorylineSequenceAction) == 0x00F0); // 240 bytes (0x000050 - 0x0000F0)
static_assert(sizeof(UStorylineCameraAction) == 0x06D0); // 1744 bytes (0x000050 - 0x0006D0)
static_assert(sizeof(UStorylineUnitMoveAction) == 0x0098); // 152 bytes (0x000050 - 0x000098)
static_assert(sizeof(UStorylineFriControlAction) == 0x00E0); // 224 bytes (0x000050 - 0x0000E0)
static_assert(sizeof(UStorylineSceneInteractAction) == 0x00B8); // 184 bytes (0x000050 - 0x0000B8)
static_assert(sizeof(UStorylineNPCControlAction) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UStorylineNPCDeployAction) == 0x00B0); // 176 bytes (0x000050 - 0x0000B0)
static_assert(sizeof(UStorylineCameraMoveAction) == 0x0088); // 136 bytes (0x000050 - 0x000088)
static_assert(sizeof(UStorylineCameraLookAtAction) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UStorylinePopUIAction) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UStorylineGetPropAction) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UStorylineActionInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStorylineCondition) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UStorylineConditionUnit) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStorylineEventConditionUnit) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UStorylineSelectionConditionUnit) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UStorylineStateConditionUnit) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UStorylineFirstPlayConditionUnit) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UStorylineContext) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UStorylineFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStorylineProducts) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStorylineNode) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UStorylinePreviewContext) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(FMovieSceneSubtitleTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FStoryEventInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FStorylineTableStruct_Copy) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(offsetof(FMovieSceneSubtitleData, SubtitleText) == 0x0008);
static_assert(offsetof(UMovieSceneSubtitleSection, SubtitleData) == 0x00E8);
static_assert(offsetof(UMovieSceneSubtitleTrack, Sections) == 0x0080);
static_assert(offsetof(FNPCInfo, Asset) == 0x0000);
static_assert(offsetof(FNPCInfo, Transform) == 0x0010);
static_assert(offsetof(UStoryline, NPCs) == 0x0030);
static_assert(offsetof(UStoryline, Data) == 0x0080);
static_assert(offsetof(UStoryline, EndState) == 0x0093);
static_assert(offsetof(UStoryline, FriEndState) == 0x0098);
static_assert(offsetof(UStoryline, HomeEndState) == 0x00A3);
static_assert(offsetof(UStoryline, PlayerInitIdle) == 0x00B8);
static_assert(offsetof(UStoryline, Mode) == 0x00CE);
static_assert(offsetof(UStorylineAction, Color) == 0x003C);
static_assert(offsetof(UStorylineDialogAction, Justification) == 0x0058);
static_assert(offsetof(UStorylineDialogAction, OptionConfigIds) == 0x0060);
static_assert(offsetof(UStorylineDialogAction, OptionStyleIds) == 0x0070);
static_assert(offsetof(UStorylineDialogAction, OptionRequireFlowNodes) == 0x0080);
static_assert(offsetof(UStorylineDialogAction, OptionGenders) == 0x0090);
static_assert(offsetof(UStorylineDialogAction, GameWorldTime) == 0x00A8);
static_assert(offsetof(UStorylineDialogAction, SpeakNPCName) == 0x00B8);
static_assert(offsetof(UStorylineDialogAction, LipSeq) == 0x00D0);
static_assert(offsetof(UStorylineDialogAction, ImgSide) == 0x00D9);
static_assert(offsetof(FAppearSetting, fx_tag) == 0x0010);
static_assert(offsetof(FAppearSetting, fx_name) == 0x0020);
static_assert(offsetof(FAppearSetting, dissolve_name) == 0x0038);
static_assert(offsetof(UStorylineBattleAppear, AppearSettings) == 0x0050);
static_assert(offsetof(UStorylineBattleDie, NPCName) == 0x0050);
static_assert(offsetof(UStorylineChangeBattleABP, NPCName) == 0x0050);
static_assert(offsetof(UStorylineChangeBattleABP, AnimInstance) == 0x0060);
static_assert(offsetof(UStorylinePresetSeq, PresetTag) == 0x0050);
static_assert(offsetof(UStorylineAnimAction, NPCName) == 0x0050);
static_assert(offsetof(UStorylineAnimAction, AnimType) == 0x0060);
static_assert(offsetof(UStorylineAnimAction, IdleName) == 0x0068);
static_assert(offsetof(UStorylineAnimAction, ActName) == 0x0078);
static_assert(offsetof(UStorylineAnimAction, Asset) == 0x0088);
static_assert(offsetof(UStorylineAnimAction, HeadAdditiveRotator) == 0x0094);
static_assert(offsetof(UStorylineAnimAction, SpineAdditiveRotator) == 0x00A0);
static_assert(offsetof(UStorylineAnimAction, BlendMode) == 0x00B0);
static_assert(offsetof(UStorylineAnimAction, CustomBlendCurve) == 0x00B8);
static_assert(offsetof(UStorylineAnimAction, BattleAnim) == 0x00C0);
static_assert(offsetof(UStorylineAnimAction, MontageAsset) == 0x00C8);
static_assert(offsetof(UStorylineAnimAction, MontageStartSection) == 0x00D8);
static_assert(offsetof(UStorylineExpressionAction, NPCName) == 0x0050);
static_assert(offsetof(UStorylineExpressionAction, ExpressionName) == 0x0060);
static_assert(offsetof(UStorylineAutoLookAtAction, NPCName) == 0x0050);
static_assert(offsetof(UStorylineAutoLookAtAction, LookAtTarget) == 0x0060);
static_assert(offsetof(UStorylineAutoLookAtAction, LookAtBone) == 0x0070);
static_assert(offsetof(UStorylineAsideAction, Justification) == 0x0058);
static_assert(offsetof(UStorylineCommandAction, Command) == 0x0050);
static_assert(offsetof(UStorylineCommandAction, Payload) == 0x0060);
static_assert(offsetof(UStorylineFadeAction, FadeColor) == 0x0060);
static_assert(offsetof(UStorylineFadeAction, BlendMode) == 0x0070);
static_assert(offsetof(UStorylineFadeAction, CustomBlendCurve) == 0x0078);
static_assert(offsetof(FPPParamControlData, BlendMode) == 0x000C);
static_assert(offsetof(FPPParamControlData, CustomBlendCurve) == 0x0010);
static_assert(offsetof(UStorylinePostProcessAction, EffectName) == 0x0050);
static_assert(offsetof(UStorylinePostProcessAction, ParamsControl) == 0x0068);
static_assert(offsetof(UStorylineMovieAction, Asset) == 0x0058);
static_assert(offsetof(UStorylineSceneMovieAction, Player) == 0x0050);
static_assert(offsetof(UStorylineSceneMovieAction, Source) == 0x0058);
static_assert(offsetof(UStorylineSoundAction, SoundName) == 0x0050);
static_assert(offsetof(UStorylineSoundAction, SoundEvent) == 0x0060);
static_assert(offsetof(UStorylineSoundAction, Type) == 0x0088);
static_assert(offsetof(UStorylineSoundAction, NPCName) == 0x0090);
static_assert(offsetof(UStorylineSoundAction, BGMLayer) == 0x00A0);
static_assert(offsetof(UStorylineSequenceAction, SequenceName) == 0x0050);
static_assert(offsetof(UStorylineSequenceAction, SequenceAsset) == 0x0060);
static_assert(offsetof(UStorylineSequenceAction, BindingMap) == 0x0088);
static_assert(offsetof(UStorylineSequenceAction, CameraTrackName) == 0x00D8);
static_assert(offsetof(UStorylineCameraAction, Type) == 0x0050);
static_assert(offsetof(UStorylineCameraAction, BlendMode) == 0x0051);
static_assert(offsetof(UStorylineCameraAction, CustomBlendCurve) == 0x0058);
static_assert(offsetof(UStorylineCameraAction, TargetNPCName) == 0x0068);
static_assert(offsetof(UStorylineCameraAction, CameraName) == 0x0078);
static_assert(offsetof(UStorylineCameraAction, SequenceName) == 0x0088);
static_assert(offsetof(UStorylineCameraAction, SequenceAsset) == 0x0098);
static_assert(offsetof(UStorylineCameraAction, DirectCameraTransform) == 0x00D0);
static_assert(offsetof(UStorylineCameraAction, Shake) == 0x0108);
static_assert(offsetof(UStorylineCameraAction, PPSetting) == 0x0120);
static_assert(offsetof(UStorylineCameraAction, RefNPCName) == 0x0678);
static_assert(offsetof(UStorylineCameraAction, RefBoneName) == 0x0688);
static_assert(offsetof(UStorylineCameraAction, LightAdjustType) == 0x069D);
static_assert(offsetof(UStorylineCameraAction, LightAimNPCName) == 0x06A0);
static_assert(offsetof(UStorylineCameraAction, GenderType) == 0x06B4);
static_assert(offsetof(UStorylineCameraAction, GirlExtraRot) == 0x06B8);
static_assert(offsetof(UStorylineCameraAction, GirlExtraVec) == 0x06C4);
static_assert(offsetof(UStorylineUnitMoveAction, Type) == 0x0050);
static_assert(offsetof(UStorylineUnitMoveAction, UnitName) == 0x0058);
static_assert(offsetof(UStorylineUnitMoveAction, DestLocation) == 0x0068);
static_assert(offsetof(UStorylineUnitMoveAction, DestRotation) == 0x0074);
static_assert(offsetof(UStorylineUnitMoveAction, DestZoneName) == 0x0080);
static_assert(offsetof(UStorylineFriControlAction, Type) == 0x0050);
static_assert(offsetof(UStorylineFriControlAction, FlyToTransform) == 0x0060);
static_assert(offsetof(UStorylineFriControlAction, FlyToSequenceName) == 0x0090);
static_assert(offsetof(UStorylineFriControlAction, FlyToSequenceAsset) == 0x00A0);
static_assert(offsetof(UStorylineFriControlAction, FriTrackName) == 0x00C8);
static_assert(offsetof(UStorylineSceneInteractAction, Type) == 0x0050);
static_assert(offsetof(UStorylineSceneInteractAction, Payload) == 0x0060);
static_assert(offsetof(UStorylineNPCControlAction, Controls) == 0x0050);
static_assert(offsetof(UStorylineNPCDeployAction, method) == 0x0050);
static_assert(offsetof(UStorylineNPCDeployAction, Slot2NPC) == 0x0058);
static_assert(offsetof(UStorylineCameraMoveAction, Type) == 0x0050);
static_assert(offsetof(UStorylineCameraMoveAction, Center) == 0x005C);
static_assert(offsetof(UStorylineCameraMoveAction, LineMoveSpace) == 0x007C);
static_assert(offsetof(UStorylineCameraLookAtAction, NPCName) == 0x0058);
static_assert(offsetof(UStorylineCameraLookAtAction, BoneName) == 0x0068);
static_assert(offsetof(UStorylineGetPropAction, Props) == 0x0050);
static_assert(offsetof(UStorylineCondition, Conditions) == 0x0028);
static_assert(offsetof(UStorylineEventConditionUnit, Events) == 0x0028);
static_assert(offsetof(UStorylineSelectionConditionUnit, NodeFlag) == 0x0030);
static_assert(offsetof(UStorylineStateConditionUnit, StateName) == 0x0028);
static_assert(offsetof(UStorylineStateConditionUnit, ValueType) == 0x0038);
static_assert(offsetof(UStorylineStateConditionUnit, Op) == 0x0044);
static_assert(offsetof(UStorylineNode, Actions) == 0x0028);
static_assert(offsetof(UStorylineNode, EnterConditions) == 0x0038);
static_assert(offsetof(UStorylineNode, NodeFlag) == 0x0048);
static_assert(offsetof(UStorylineNode, Nexts) == 0x0058);
static_assert(offsetof(UStorylineNode, TriggerEvents) == 0x0068);
static_assert(offsetof(UStorylinePreviewContext, Storyline) == 0x0028);
static_assert(offsetof(UStorylinePreviewContext, StartNodeData) == 0x0030);
static_assert(offsetof(FMovieSceneSubtitleTemplate, Section) == 0x0020);
static_assert(offsetof(FStoryEventInfo, EventName) == 0x0000);
static_assert(offsetof(FStoryEventInfo, Type) == 0x0010);
static_assert(offsetof(FStorylineTableStruct_Copy, Note) == 0x0010);
static_assert(offsetof(FStorylineTableStruct_Copy, Name) == 0x0020);
static_assert(offsetof(FStorylineTableStruct_Copy, Chat) == 0x0030);
static_assert(offsetof(FStorylineTableStruct_Copy, SpineAltas) == 0x0040);
static_assert(offsetof(FStorylineTableStruct_Copy, SpineSkeleton) == 0x0050);
static_assert(offsetof(FStorylineTableStruct_Copy, Anim) == 0x0060);
static_assert(offsetof(FStorylineTableStruct_Copy, AudioName) == 0x0070);
static_assert(offsetof(FStorylineTableStruct_Copy, SpeakNPCName) == 0x0080);
