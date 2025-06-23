
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AnimationCore.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAnimNotify_PlayMontageNotify;
class UAnimNotify_PlayMontageNotifyWindow;
class UAnimSequencerInstance;
class UKismetAnimationLibrary;
class UPlayMontageCallbackProxy;
class USequencerAnimationSupport;

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x01 (1 bytes)
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner                                                       = 0,
	ESphericalLimitType__Outer                                                       = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x01 (1 bytes)
enum class AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component                                                  = 0,
	AnimPhysSimSpaceType__Actor                                                      = 1,
	AnimPhysSimSpaceType__World                                                      = 2,
	AnimPhysSimSpaceType__RootRelative                                               = 3,
	AnimPhysSimSpaceType__BoneRelative                                               = 4
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x01 (1 bytes)
enum class AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free                                               = 0,
	AnimPhysLinearConstraintType__Limited                                            = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x01 (1 bytes)
enum class AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular                                           = 0,
	AnimPhysAngularConstraintType__Cone                                              = 1
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x01 (1 bytes)
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend                                          = 0,
	EBlendListTransitionType__Inertialization                                        = 1
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x01 (1 bytes)
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone                                                     = 0,
	EDrivenDestinationMode__MorphTarget                                              = 1,
	EDrivenDestinationMode__MaterialParameter                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x01 (1 bytes)
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput                                          = 0,
	EDrivenBoneModificationMode__ReplaceComponent                                    = 1,
	EDrivenBoneModificationMode__AddToRefPose                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x01 (1 bytes)
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None                                                    = 0,
	EConstraintOffsetOption__Offset_RefPose                                          = 1
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x01 (1 bytes)
enum class CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate                                                    = 0,
	CopyBoneDeltaMode__Copy                                                          = 1
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x01 (1 bytes)
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear                                                      = 0,
	EInterpolationBlend__Cubic                                                       = 1,
	EInterpolationBlend__Sinusoidal                                                  = 2,
	EInterpolationBlend__EaseInOutExponent2                                          = 3,
	EInterpolationBlend__EaseInOutExponent3                                          = 4,
	EInterpolationBlend__EaseInOutExponent4                                          = 5,
	EInterpolationBlend__EaseInOutExponent5                                          = 6
};

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode
/// Size: 0x01 (1 bytes)
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                                                                       = 0,
	BMM_Replace                                                                      = 1,
	BMM_Additive                                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x01 (1 bytes)
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add                                                       = 0,
	EModifyCurveApplyMode__Scale                                                     = 1,
	EModifyCurveApplyMode__Blend                                                     = 2,
	EModifyCurveApplyMode__WeightedMovingAverage                                     = 3,
	EModifyCurveApplyMode__RemapCurve                                                = 4
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x01 (1 bytes)
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses                                                    = 0,
	EPoseDriverOutput__DriveCurves                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x01 (1 bytes)
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation                                                      = 0,
	EPoseDriverSource__Translation                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x01 (1 bytes)
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist                                                   = 0,
	EPoseDriverType__SwingOnly                                                       = 1,
	EPoseDriverType__Translation                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x01 (1 bytes)
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot                                               = 0,
	ESnapshotSourceMode__SnapshotPin                                                 = 1
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x01 (1 bytes)
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                                                                   = 0,
	EIT_Additive                                                                     = 1
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x01 (1 bytes)
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace                                                 = 0,
	ESimulationSpace__WorldSpace                                                     = 1,
	ESimulationSpace__BaseBoneSpace                                                  = 2
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x01 (1 bytes)
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue                                = 0,
	EScaleChainInitialLength__Distance                                               = 1,
	EScaleChainInitialLength__ChainLength                                            = 2
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x01 (1 bytes)
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset                                                     = 0,
	ESequenceEvalReinit__StartPosition                                               = 1,
	ESequenceEvalReinit__ExplicitTime                                                = 2
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x01 (1 bytes)
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None                                                            = 0,
	ESplineBoneAxis__X                                                               = 1,
	ESplineBoneAxis__Y                                                               = 2,
	ESplineBoneAxis__Z                                                               = 3
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x01 (1 bytes)
enum class ERotationComponent : uint8_t
{
	ERotationComponent__EulerX                                                       = 0,
	ERotationComponent__EulerY                                                       = 1,
	ERotationComponent__EulerZ                                                       = 2,
	ERotationComponent__QuaternionAngle                                              = 3,
	ERotationComponent__SwingAngle                                                   = 4,
	ERotationComponent__TwistAngle                                                   = 5
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType
/// Size: 0x01 (1 bytes)
enum class EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear                                                          = 0,
	EEasingFuncType__Sinusoidal                                                      = 1,
	EEasingFuncType__Cubic                                                           = 2,
	EEasingFuncType__QuadraticInOut                                                  = 3,
	EEasingFuncType__CubicInOut                                                      = 4,
	EEasingFuncType__HermiteCubic                                                    = 5,
	EEasingFuncType__QuarticInOut                                                    = 6,
	EEasingFuncType__QuinticInOut                                                    = 7,
	EEasingFuncType__CircularIn                                                      = 8,
	EEasingFuncType__CircularOut                                                     = 9,
	EEasingFuncType__CircularInOut                                                   = 10,
	EEasingFuncType__ExpIn                                                           = 11,
	EEasingFuncType__ExpOut                                                          = 12,
	EEasingFuncType__ExpInOut                                                        = 13,
	EEasingFuncType__CustomCurve                                                     = 14
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
/// Size: 0x01 (1 bytes)
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne                                       = 0,
	ERBFNormalizeMethod__AlwaysNormalize                                             = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian                                       = 2,
	ERBFNormalizeMethod__NoNormalization                                             = 3
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x01 (1 bytes)
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean                                                    = 0,
	ERBFDistanceMethod__Quaternion                                                   = 1,
	ERBFDistanceMethod__SwingAngle                                                   = 2,
	ERBFDistanceMethod__TwistAngle                                                   = 3,
	ERBFDistanceMethod__DefaultMethod                                                = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x01 (1 bytes)
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian                                                       = 0,
	ERBFFunctionType__Exponential                                                    = 1,
	ERBFFunctionType__Linear                                                         = 2,
	ERBFFunctionType__Cubic                                                          = 3,
	ERBFFunctionType__Quintic                                                        = 4,
	ERBFFunctionType__DefaultFunction                                                = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType
/// Size: 0x01 (1 bytes)
enum class ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive                                                         = 0,
	ERBFSolverType__Interpolative                                                    = 1
};

#pragma pack(pop)


static_assert(sizeof(UAnimSequencerInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UAnimNotify_PlayMontageNotify) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAnimNotify_PlayMontageNotifyWindow) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UKismetAnimationLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPlayMontageCallbackProxy) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(USequencerAnimationSupport) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAnimSequencerInstanceProxy) == 0x0A00); // 2560 bytes (0x000760 - 0x000A00)
static_assert(sizeof(FAnimNode_SkeletalControlBase) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FAnimNode_BlendSpacePlayer) == 0x00E8); // 232 bytes (0x000038 - 0x0000E8)
static_assert(sizeof(FAnimNode_AimOffsetLookAt) == 0x01C0); // 448 bytes (0x0000E8 - 0x0001C0)
static_assert(sizeof(FAnimPhysConstraintSetup) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAnimPhysSphericalLimit) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FAnimPhysPlanarLimit) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRotationRetargetingInfo) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FAnimNode_AnimDynamics) == 0x0440); // 1088 bytes (0x0000C8 - 0x000440)
static_assert(sizeof(FAnimNode_ApplyAdditive) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FAngularRangeLimit) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAnimNode_ApplyLimits) == 0x00E8); // 232 bytes (0x0000C8 - 0x0000E8)
static_assert(sizeof(FBlendBoneByChannelEntry) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FAnimNode_BlendBoneByChannel) == 0x0068); // 104 bytes (0x000010 - 0x000068)
static_assert(sizeof(FAnimNode_BlendListBase) == 0x0098); // 152 bytes (0x000010 - 0x000098)
static_assert(sizeof(FAnimNode_BlendListByBool) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FAnimNode_BlendListByEnum) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(FAnimNode_BlendListByInt) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FAnimNode_BlendSpaceEvaluator) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(FAnimNode_BoneDrivenController) == 0x0118); // 280 bytes (0x0000C8 - 0x000118)
static_assert(sizeof(FSocketReference) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FBoneSocketTarget) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FAnimNode_CCDIK) == 0x0180); // 384 bytes (0x0000C8 - 0x000180)
static_assert(sizeof(FConstraint) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FAnimNode_Constraint) == 0x0108); // 264 bytes (0x0000C8 - 0x000108)
static_assert(sizeof(FAnimNode_CopyBone) == 0x00F0); // 240 bytes (0x0000C8 - 0x0000F0)
static_assert(sizeof(FAnimNode_CopyBoneDelta) == 0x00F8); // 248 bytes (0x0000C8 - 0x0000F8)
static_assert(sizeof(FAnimNode_CopyPoseFromMesh) == 0x01D8); // 472 bytes (0x000010 - 0x0001D8)
static_assert(sizeof(FAnimNode_CurveSource) == 0x0040); // 64 bytes (0x000010 - 0x000040)
static_assert(sizeof(FAnimNode_Fabrik) == 0x0190); // 400 bytes (0x0000C8 - 0x000190)
static_assert(sizeof(FAnimNode_HandIKRetargeting) == 0x0120); // 288 bytes (0x0000C8 - 0x000120)
static_assert(sizeof(FAnimNode_LayeredBoneBlend) == 0x00C0); // 192 bytes (0x000010 - 0x0000C0)
static_assert(sizeof(FAnimLegIKDefinition) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FAnimNode_LegIK) == 0x00F8); // 248 bytes (0x0000C8 - 0x0000F8)
static_assert(sizeof(FAnimLegIKData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FIKChain) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FIKChainLink) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FAnimNode_LookAt) == 0x01B0); // 432 bytes (0x0000C8 - 0x0001B0)
static_assert(sizeof(FAnimNode_MakeDynamicAdditive) == 0x0038); // 56 bytes (0x000010 - 0x000038)
static_assert(sizeof(FAnimNode_ModifyBone) == 0x0108); // 264 bytes (0x0000C8 - 0x000108)
static_assert(sizeof(FAnimNode_ModifyCurve) == 0x0058); // 88 bytes (0x000010 - 0x000058)
static_assert(sizeof(FAnimNode_MultiWayBlend) == 0x0050); // 80 bytes (0x000010 - 0x000050)
static_assert(sizeof(FAnimNode_ObserveBone) == 0x0100); // 256 bytes (0x0000C8 - 0x000100)
static_assert(sizeof(FAnimNode_PoseHandler) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(FAnimNode_PoseBlendNode) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(FAnimNode_PoseByName) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(FPoseDriverTransform) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPoseDriverTarget) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FRBFParams) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FAnimNode_PoseDriver) == 0x0138); // 312 bytes (0x000080 - 0x000138)
static_assert(sizeof(FAnimNode_PoseSnapshot) == 0x0090); // 144 bytes (0x000010 - 0x000090)
static_assert(sizeof(FRandomPlayerSequenceEntry) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FAnimNode_RandomPlayer) == 0x0078); // 120 bytes (0x000010 - 0x000078)
static_assert(sizeof(FAnimNode_MeshSpaceRefPose) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FAnimNode_RefPose) == 0x0018); // 24 bytes (0x000010 - 0x000018)
static_assert(sizeof(FAnimNode_ResetRoot) == 0x00D8); // 216 bytes (0x0000C8 - 0x0000D8)
static_assert(sizeof(FSimSpaceSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAnimNode_RigidBody) == 0x0650); // 1616 bytes (0x0000C8 - 0x000650)
static_assert(sizeof(FAnimNode_RotateRootBone) == 0x00A0); // 160 bytes (0x000010 - 0x0000A0)
static_assert(sizeof(FAnimNode_RotationMultiplier) == 0x00F0); // 240 bytes (0x0000C8 - 0x0000F0)
static_assert(sizeof(FAnimNode_RotationOffsetBlendSpace) == 0x0190); // 400 bytes (0x0000E8 - 0x000190)
static_assert(sizeof(FAnimNode_ScaleChainLength) == 0x0078); // 120 bytes (0x000010 - 0x000078)
static_assert(sizeof(FAnimNode_SequenceEvaluator) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FAnimNode_Slot) == 0x0048); // 72 bytes (0x000010 - 0x000048)
static_assert(sizeof(FAnimNode_SplineIK) == 0x0270); // 624 bytes (0x0000C8 - 0x000270)
static_assert(sizeof(FSplineIKCachedBoneData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FAnimNode_SpringBone) == 0x0128); // 296 bytes (0x0000C8 - 0x000128)
static_assert(sizeof(FAnimNode_StateResult) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRotationLimit) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAnimNode_Trail) == 0x0260); // 608 bytes (0x0000C8 - 0x000260)
static_assert(sizeof(FReferenceBoneFrame) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnimNode_TwistCorrectiveNode) == 0x0138); // 312 bytes (0x0000C8 - 0x000138)
static_assert(sizeof(FAnimNode_TwoBoneIK) == 0x01E0); // 480 bytes (0x0000C8 - 0x0001E0)
static_assert(sizeof(FAnimNode_TwoWayBlend) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FPositionHistory) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRBFEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRBFTarget) == 0x00A0); // 160 bytes (0x000010 - 0x0000A0)
static_assert(offsetof(UAnimNotify_PlayMontageNotify, NotifyName) == 0x0038);
static_assert(offsetof(UAnimNotify_PlayMontageNotifyWindow, NotifyName) == 0x0030);
static_assert(offsetof(FAnimNode_SkeletalControlBase, ComponentPose) == 0x0010);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaInputType) == 0x0028);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBias) == 0x0030);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaBoolBlend) == 0x0038);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaCurveName) == 0x0080);
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBiasClamp) == 0x0088);
static_assert(offsetof(FAnimNode_BlendSpacePlayer, BlendSpace) == 0x0050);
static_assert(offsetof(FAnimNode_BlendSpacePlayer, PreviousBlendSpace) == 0x00E0);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, BasePose) == 0x0150);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SourceSocketName) == 0x0164);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, PivotSocketName) == 0x016C);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, LookAtLocation) == 0x0174);
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SocketAxis) == 0x0180);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearXLimitType) == 0x0000);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearYLimitType) == 0x0001);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearZLimitType) == 0x0002);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMin) == 0x0004);
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMax) == 0x0010);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularConstraintType) == 0x001C);
static_assert(offsetof(FAnimPhysConstraintSetup, TwistAxis) == 0x001D);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTargetAxis) == 0x001E);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMin) == 0x0024);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMax) == 0x0030);
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTarget) == 0x003C);
static_assert(offsetof(FAnimPhysSphericalLimit, DrivingBone) == 0x0000);
static_assert(offsetof(FAnimPhysSphericalLimit, SphereLocalOffset) == 0x0010);
static_assert(offsetof(FAnimPhysSphericalLimit, LimitType) == 0x0020);
static_assert(offsetof(FAnimPhysPlanarLimit, DrivingBone) == 0x0000);
static_assert(offsetof(FAnimPhysPlanarLimit, PlaneTransform) == 0x0010);
static_assert(offsetof(FRotationRetargetingInfo, Source) == 0x0010);
static_assert(offsetof(FRotationRetargetingInfo, Target) == 0x0040);
static_assert(offsetof(FRotationRetargetingInfo, RotationComponent) == 0x0070);
static_assert(offsetof(FRotationRetargetingInfo, TwistAxis) == 0x0074);
static_assert(offsetof(FRotationRetargetingInfo, EasingType) == 0x0094);
static_assert(offsetof(FRotationRetargetingInfo, CustomCurve) == 0x0098);
static_assert(offsetof(FAnimNode_AnimDynamics, RelativeSpaceBone) == 0x0130);
static_assert(offsetof(FAnimNode_AnimDynamics, BoundBone) == 0x0140);
static_assert(offsetof(FAnimNode_AnimDynamics, ChainEnd) == 0x0150);
static_assert(offsetof(FAnimNode_AnimDynamics, BoxExtents) == 0x0160);
static_assert(offsetof(FAnimNode_AnimDynamics, LocalJointOffset) == 0x016C);
static_assert(offsetof(FAnimNode_AnimDynamics, GravityOverride) == 0x017C);
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearAccScale) == 0x0194);
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearVelScale) == 0x01A0);
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentAppliedLinearAccClamp) == 0x01AC);
static_assert(offsetof(FAnimNode_AnimDynamics, ConstraintSetup) == 0x01C4);
static_assert(offsetof(FAnimNode_AnimDynamics, SphericalLimits) == 0x0210);
static_assert(offsetof(FAnimNode_AnimDynamics, ExternalForce) == 0x0224);
static_assert(offsetof(FAnimNode_AnimDynamics, PlanarLimits) == 0x0230);
static_assert(offsetof(FAnimNode_AnimDynamics, CollisionType) == 0x0240);
static_assert(offsetof(FAnimNode_AnimDynamics, SimulationSpace) == 0x0241);
static_assert(offsetof(FAnimNode_AnimDynamics, RetargetingSettings) == 0x0250);
static_assert(offsetof(FAnimNode_ApplyAdditive, Base) == 0x0010);
static_assert(offsetof(FAnimNode_ApplyAdditive, Additive) == 0x0020);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBias) == 0x0034);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaBoolBlend) == 0x0040);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaCurveName) == 0x0088);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBiasClamp) == 0x0090);
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaInputType) == 0x00C4);
static_assert(offsetof(FAngularRangeLimit, LimitMin) == 0x0000);
static_assert(offsetof(FAngularRangeLimit, LimitMax) == 0x000C);
static_assert(offsetof(FAngularRangeLimit, Bone) == 0x0018);
static_assert(offsetof(FAnimNode_ApplyLimits, AngularRangeLimits) == 0x00C8);
static_assert(offsetof(FAnimNode_ApplyLimits, AngularOffsets) == 0x00D8);
static_assert(offsetof(FBlendBoneByChannelEntry, SourceBone) == 0x0000);
static_assert(offsetof(FBlendBoneByChannelEntry, TargetBone) == 0x0010);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, A) == 0x0010);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, B) == 0x0020);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, BoneDefinitions) == 0x0030);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, AlphaScaleBias) == 0x0058);
static_assert(offsetof(FAnimNode_BlendBoneByChannel, TransformsSpace) == 0x0060);
static_assert(offsetof(FAnimNode_BlendListBase, BlendPose) == 0x0010);
static_assert(offsetof(FAnimNode_BlendListBase, BlendTime) == 0x0020);
static_assert(offsetof(FAnimNode_BlendListBase, TransitionType) == 0x0030);
static_assert(offsetof(FAnimNode_BlendListBase, BlendType) == 0x0031);
static_assert(offsetof(FAnimNode_BlendListBase, CustomBlendCurve) == 0x0038);
static_assert(offsetof(FAnimNode_BlendListBase, BlendProfile) == 0x0040);
static_assert(offsetof(FAnimNode_BlendListByEnum, EnumToPoseIndex) == 0x0098);
static_assert(offsetof(FAnimNode_BoneDrivenController, SourceBone) == 0x00C8);
static_assert(offsetof(FAnimNode_BoneDrivenController, DrivingCurve) == 0x00D8);
static_assert(offsetof(FAnimNode_BoneDrivenController, ParameterName) == 0x00F4);
static_assert(offsetof(FAnimNode_BoneDrivenController, TargetBone) == 0x00FC);
static_assert(offsetof(FAnimNode_BoneDrivenController, DestinationMode) == 0x010C);
static_assert(offsetof(FAnimNode_BoneDrivenController, ModificationMode) == 0x010D);
static_assert(offsetof(FAnimNode_BoneDrivenController, SourceComponent) == 0x010E);
static_assert(offsetof(FSocketReference, SocketName) == 0x0030);
static_assert(offsetof(FBoneSocketTarget, BoneReference) == 0x0004);
static_assert(offsetof(FBoneSocketTarget, SocketReference) == 0x0020);
static_assert(offsetof(FAnimNode_CCDIK, EffectorLocation) == 0x00C8);
static_assert(offsetof(FAnimNode_CCDIK, EffectorLocationSpace) == 0x00D4);
static_assert(offsetof(FAnimNode_CCDIK, EffectorTarget) == 0x00E0);
static_assert(offsetof(FAnimNode_CCDIK, TipBone) == 0x0140);
static_assert(offsetof(FAnimNode_CCDIK, RootBone) == 0x0150);
static_assert(offsetof(FAnimNode_CCDIK, RotationLimitPerJoints) == 0x0170);
static_assert(offsetof(FConstraint, TargetBone) == 0x0000);
static_assert(offsetof(FConstraint, OffsetOption) == 0x0010);
static_assert(offsetof(FConstraint, TransformType) == 0x0011);
static_assert(offsetof(FConstraint, PerAxis) == 0x0012);
static_assert(offsetof(FAnimNode_Constraint, BoneToModify) == 0x00C8);
static_assert(offsetof(FAnimNode_Constraint, ConstraintSetup) == 0x00D8);
static_assert(offsetof(FAnimNode_Constraint, ConstraintWeights) == 0x00E8);
static_assert(offsetof(FAnimNode_CopyBone, SourceBone) == 0x00C8);
static_assert(offsetof(FAnimNode_CopyBone, TargetBone) == 0x00D8);
static_assert(offsetof(FAnimNode_CopyBone, ControlSpace) == 0x00EB);
static_assert(offsetof(FAnimNode_CopyBoneDelta, SourceBone) == 0x00C8);
static_assert(offsetof(FAnimNode_CopyBoneDelta, TargetBone) == 0x00D8);
static_assert(offsetof(FAnimNode_CopyBoneDelta, CopyMode) == 0x00EB);
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, SourceMeshComponent) == 0x0010);
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, RootBoneToCopy) == 0x001C);
static_assert(offsetof(FAnimNode_CurveSource, SourcePose) == 0x0010);
static_assert(offsetof(FAnimNode_CurveSource, SourceBinding) == 0x0020);
static_assert(offsetof(FAnimNode_Fabrik, EffectorTransform) == 0x00D0);
static_assert(offsetof(FAnimNode_Fabrik, EffectorTarget) == 0x0100);
static_assert(offsetof(FAnimNode_Fabrik, TipBone) == 0x0160);
static_assert(offsetof(FAnimNode_Fabrik, RootBone) == 0x0170);
static_assert(offsetof(FAnimNode_Fabrik, EffectorTransformSpace) == 0x0188);
static_assert(offsetof(FAnimNode_Fabrik, EffectorRotationSource) == 0x0189);
static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandFK) == 0x00C8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandFK) == 0x00D8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandIK) == 0x00E8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandIK) == 0x00F8);
static_assert(offsetof(FAnimNode_HandIKRetargeting, IKBonesToMove) == 0x0108);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BasePose) == 0x0010);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendPoses) == 0x0020);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, LayerSetup) == 0x0030);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendWeights) == 0x0040);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, CurveBlendOption) == 0x0052);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, PerBoneBlendWeights) == 0x0060);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, SkeletonGuid) == 0x0070);
static_assert(offsetof(FAnimNode_LayeredBoneBlend, VirtualBoneGuid) == 0x0080);
static_assert(offsetof(FAnimLegIKDefinition, IKFootBone) == 0x0000);
static_assert(offsetof(FAnimLegIKDefinition, FKFootBone) == 0x0010);
static_assert(offsetof(FAnimLegIKDefinition, FootBoneForwardAxis) == 0x0028);
static_assert(offsetof(FAnimLegIKDefinition, HingeRotationAxis) == 0x0029);
static_assert(offsetof(FAnimNode_LegIK, LegsDefinition) == 0x00D0);
static_assert(offsetof(FAnimNode_LookAt, BoneToModify) == 0x00C8);
static_assert(offsetof(FAnimNode_LookAt, LookAtTarget) == 0x00E0);
static_assert(offsetof(FAnimNode_LookAt, LookAtLocation) == 0x0140);
static_assert(offsetof(FAnimNode_LookAt, LookAt_Axis) == 0x014C);
static_assert(offsetof(FAnimNode_LookAt, InterpolationType) == 0x015D);
static_assert(offsetof(FAnimNode_LookAt, LookUp_Axis) == 0x0160);
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, Base) == 0x0010);
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, Additive) == 0x0020);
static_assert(offsetof(FAnimNode_ModifyBone, BoneToModify) == 0x00C8);
static_assert(offsetof(FAnimNode_ModifyBone, Translation) == 0x00D8);
static_assert(offsetof(FAnimNode_ModifyBone, Rotation) == 0x00E4);
static_assert(offsetof(FAnimNode_ModifyBone, Scale) == 0x00F0);
static_assert(offsetof(FAnimNode_ModifyBone, TranslationMode) == 0x00FC);
static_assert(offsetof(FAnimNode_ModifyBone, RotationMode) == 0x00FD);
static_assert(offsetof(FAnimNode_ModifyBone, ScaleMode) == 0x00FE);
static_assert(offsetof(FAnimNode_ModifyBone, TranslationSpace) == 0x00FF);
static_assert(offsetof(FAnimNode_ModifyBone, RotationSpace) == 0x0100);
static_assert(offsetof(FAnimNode_ModifyBone, ScaleSpace) == 0x0101);
static_assert(offsetof(FAnimNode_ModifyCurve, SourcePose) == 0x0010);
static_assert(offsetof(FAnimNode_ModifyCurve, CurveValues) == 0x0020);
static_assert(offsetof(FAnimNode_ModifyCurve, CurveNames) == 0x0030);
static_assert(offsetof(FAnimNode_ModifyCurve, ApplyMode) == 0x0054);
static_assert(offsetof(FAnimNode_MultiWayBlend, Poses) == 0x0010);
static_assert(offsetof(FAnimNode_MultiWayBlend, DesiredAlphas) == 0x0020);
static_assert(offsetof(FAnimNode_MultiWayBlend, AlphaScaleBias) == 0x0040);
static_assert(offsetof(FAnimNode_ObserveBone, BoneToObserve) == 0x00C8);
static_assert(offsetof(FAnimNode_ObserveBone, DisplaySpace) == 0x00D8);
static_assert(offsetof(FAnimNode_ObserveBone, Translation) == 0x00DC);
static_assert(offsetof(FAnimNode_ObserveBone, Rotation) == 0x00E8);
static_assert(offsetof(FAnimNode_ObserveBone, Scale) == 0x00F4);
static_assert(offsetof(FAnimNode_PoseHandler, PoseAsset) == 0x0038);
static_assert(offsetof(FAnimNode_PoseBlendNode, SourcePose) == 0x0080);
static_assert(offsetof(FAnimNode_PoseBlendNode, BlendOption) == 0x0090);
static_assert(offsetof(FAnimNode_PoseBlendNode, CustomCurve) == 0x0098);
static_assert(offsetof(FAnimNode_PoseByName, PoseName) == 0x0080);
static_assert(offsetof(FPoseDriverTransform, TargetTranslation) == 0x0000);
static_assert(offsetof(FPoseDriverTransform, TargetRotation) == 0x000C);
static_assert(offsetof(FPoseDriverTarget, BoneTransforms) == 0x0000);
static_assert(offsetof(FPoseDriverTarget, TargetRotation) == 0x0010);
static_assert(offsetof(FPoseDriverTarget, DistanceMethod) == 0x0020);
static_assert(offsetof(FPoseDriverTarget, FunctionType) == 0x0021);
static_assert(offsetof(FPoseDriverTarget, CustomCurve) == 0x0028);
static_assert(offsetof(FPoseDriverTarget, DrivenName) == 0x00A8);
static_assert(offsetof(FRBFParams, SolverType) == 0x0004);
static_assert(offsetof(FRBFParams, Function) == 0x000D);
static_assert(offsetof(FRBFParams, DistanceMethod) == 0x000E);
static_assert(offsetof(FRBFParams, TwistAxis) == 0x000F);
static_assert(offsetof(FRBFParams, NormalizeMethod) == 0x0014);
static_assert(offsetof(FRBFParams, MedianReference) == 0x0018);
static_assert(offsetof(FAnimNode_PoseDriver, SourcePose) == 0x0080);
static_assert(offsetof(FAnimNode_PoseDriver, SourceBones) == 0x0090);
static_assert(offsetof(FAnimNode_PoseDriver, OnlyDriveBones) == 0x00A0);
static_assert(offsetof(FAnimNode_PoseDriver, PoseTargets) == 0x00B0);
static_assert(offsetof(FAnimNode_PoseDriver, EvalSpaceBone) == 0x00F0);
static_assert(offsetof(FAnimNode_PoseDriver, RBFParams) == 0x0100);
static_assert(offsetof(FAnimNode_PoseDriver, DriveSource) == 0x012C);
static_assert(offsetof(FAnimNode_PoseDriver, DriveOutput) == 0x012D);
static_assert(offsetof(FAnimNode_PoseSnapshot, SnapshotName) == 0x0010);
static_assert(offsetof(FAnimNode_PoseSnapshot, Snapshot) == 0x0018);
static_assert(offsetof(FAnimNode_PoseSnapshot, Mode) == 0x0050);
static_assert(offsetof(FRandomPlayerSequenceEntry, Sequence) == 0x0000);
static_assert(offsetof(FRandomPlayerSequenceEntry, BlendIn) == 0x0020);
static_assert(offsetof(FAnimNode_RandomPlayer, Entries) == 0x0010);
static_assert(offsetof(FAnimNode_RefPose, RefPoseType) == 0x0010);
static_assert(offsetof(FSimSpaceSettings, ExternalLinearDragV) == 0x001C);
static_assert(offsetof(FSimSpaceSettings, ExternalLinearVelocity) == 0x0028);
static_assert(offsetof(FSimSpaceSettings, ExternalAngularVelocity) == 0x0034);
static_assert(offsetof(FAnimNode_RigidBody, OverridePhysicsAsset) == 0x00C8);
static_assert(offsetof(FAnimNode_RigidBody, OverrideWorldGravity) == 0x0168);
static_assert(offsetof(FAnimNode_RigidBody, ExternalForce) == 0x0174);
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearAccScale) == 0x0180);
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearVelScale) == 0x018C);
static_assert(offsetof(FAnimNode_RigidBody, ComponentAppliedLinearAccClamp) == 0x0198);
static_assert(offsetof(FAnimNode_RigidBody, SimSpaceSettings) == 0x01A4);
static_assert(offsetof(FAnimNode_RigidBody, BaseBoneRef) == 0x01E8);
static_assert(offsetof(FAnimNode_RigidBody, OverlapChannel) == 0x01F8);
static_assert(offsetof(FAnimNode_RigidBody, SimulationSpace) == 0x01F9);
static_assert(offsetof(FAnimNode_RotateRootBone, BasePose) == 0x0010);
static_assert(offsetof(FAnimNode_RotateRootBone, PitchScaleBiasClamp) == 0x0028);
static_assert(offsetof(FAnimNode_RotateRootBone, YawScaleBiasClamp) == 0x0058);
static_assert(offsetof(FAnimNode_RotateRootBone, MeshToComponent) == 0x0088);
static_assert(offsetof(FAnimNode_RotationMultiplier, TargetBone) == 0x00C8);
static_assert(offsetof(FAnimNode_RotationMultiplier, SourceBone) == 0x00D8);
static_assert(offsetof(FAnimNode_RotationMultiplier, RotationAxisToRefer) == 0x00EC);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, BasePose) == 0x00E8);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBias) == 0x0100);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaBoolBlend) == 0x0108);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaCurveName) == 0x0150);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBiasClamp) == 0x0158);
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaInputType) == 0x018C);
static_assert(offsetof(FAnimNode_ScaleChainLength, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainStartBone) == 0x0024);
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainEndBone) == 0x0034);
static_assert(offsetof(FAnimNode_ScaleChainLength, TargetLocation) == 0x0044);
static_assert(offsetof(FAnimNode_ScaleChainLength, AlphaScaleBias) == 0x0058);
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainInitialLength) == 0x0060);
static_assert(offsetof(FAnimNode_SequenceEvaluator, Sequence) == 0x0038);
static_assert(offsetof(FAnimNode_SequenceEvaluator, ReinitializationBehavior) == 0x0046);
static_assert(offsetof(FAnimNode_Slot, Source) == 0x0010);
static_assert(offsetof(FAnimNode_Slot, SlotName) == 0x0020);
static_assert(offsetof(FAnimNode_SplineIK, StartBone) == 0x00C8);
static_assert(offsetof(FAnimNode_SplineIK, EndBone) == 0x00D8);
static_assert(offsetof(FAnimNode_SplineIK, BoneAxis) == 0x00E8);
static_assert(offsetof(FAnimNode_SplineIK, ControlPoints) == 0x00F0);
static_assert(offsetof(FAnimNode_SplineIK, TwistBlend) == 0x0110);
static_assert(offsetof(FSplineIKCachedBoneData, Bone) == 0x0000);
static_assert(offsetof(FAnimNode_SpringBone, SpringBone) == 0x00C8);
static_assert(offsetof(FRotationLimit, LimitMin) == 0x0000);
static_assert(offsetof(FRotationLimit, LimitMax) == 0x000C);
static_assert(offsetof(FAnimNode_Trail, TrailBone) == 0x0100);
static_assert(offsetof(FAnimNode_Trail, ChainBoneAxis) == 0x0114);
static_assert(offsetof(FAnimNode_Trail, TrailRelaxationSpeed) == 0x0120);
static_assert(offsetof(FAnimNode_Trail, RelaxationSpeedScaleInputProcessor) == 0x01A8);
static_assert(offsetof(FAnimNode_Trail, RotationLimits) == 0x01D8);
static_assert(offsetof(FAnimNode_Trail, RotationOffsets) == 0x01E8);
static_assert(offsetof(FAnimNode_Trail, PlanarLimits) == 0x01F8);
static_assert(offsetof(FAnimNode_Trail, FakeVelocity) == 0x020C);
static_assert(offsetof(FAnimNode_Trail, BaseJoint) == 0x0218);
static_assert(offsetof(FReferenceBoneFrame, Bone) == 0x0000);
static_assert(offsetof(FReferenceBoneFrame, Axis) == 0x0010);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, BaseFrame) == 0x00C8);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistFrame) == 0x00E8);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistPlaneNormalAxis) == 0x0108);
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, Curve) == 0x0124);
static_assert(offsetof(FAnimNode_TwoBoneIK, IKBone) == 0x00C8);
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocation) == 0x00E0);
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorTarget) == 0x00F0);
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocation) == 0x0150);
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTarget) == 0x0160);
static_assert(offsetof(FAnimNode_TwoBoneIK, TwistAxis) == 0x01C0);
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocationSpace) == 0x01D0);
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocationSpace) == 0x01D1);
static_assert(offsetof(FAnimNode_TwoWayBlend, A) == 0x0010);
static_assert(offsetof(FAnimNode_TwoWayBlend, B) == 0x0020);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaInputType) == 0x0030);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBias) == 0x0038);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaBoolBlend) == 0x0040);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaCurveName) == 0x0088);
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBiasClamp) == 0x0090);
static_assert(offsetof(FPositionHistory, Positions) == 0x0000);
static_assert(offsetof(FRBFEntry, Values) == 0x0000);
static_assert(offsetof(FRBFTarget, CustomCurve) == 0x0018);
static_assert(offsetof(FRBFTarget, DistanceMethod) == 0x0098);
static_assert(offsetof(FRBFTarget, FunctionType) == 0x0099);
