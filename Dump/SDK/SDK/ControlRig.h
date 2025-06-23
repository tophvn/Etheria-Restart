
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AnimationCore.h"
#include "AnimGraphRuntime.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LevelSequence.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "PropertyPath.h"
#include "RigVM.h"

#pragma pack(push, 0x1)

class AControlRigControlActor;
class AControlRigGizmoActor;
class UAdditiveControlRig;
class UControlRig;
class UControlRigAnimInstance;
class UControlRigBlueprintGeneratedClass;
class UControlRigComponent;
class UControlRigGizmoLibrary;
class UControlRigLayerInstance;
class UControlRigNumericalValidationPass;
class UControlRigObjectHolder;
class UControlRigSequence;
class UControlRigSequencerAnimInstance;
class UControlRigSettings;
class UControlRigValidationPass;
class UControlRigValidator;
class UFKControlRig;
class UMovieSceneControlRigParameterSection;
class UMovieSceneControlRigParameterTrack;

/// Enum /Script/ControlRig.EControlRigComponentMapDirection
/// Size: 0x01 (1 bytes)
enum class EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input                                          = 0,
	EControlRigComponentMapDirection__Output                                         = 1
};

/// Enum /Script/ControlRig.EControlRigComponentSpace
/// Size: 0x01 (1 bytes)
enum class EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace                                            = 0,
	EControlRigComponentSpace__ActorSpace                                            = 1,
	EControlRigComponentSpace__ComponentSpace                                        = 2,
	EControlRigComponentSpace__RigSpace                                              = 3,
	EControlRigComponentSpace__LocalSpace                                            = 4,
	EControlRigComponentSpace__Max                                                   = 5
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x01 (1 bytes)
enum class ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime                                                       = 0,
	ERigExecutionType__Editing                                                       = 1,
	ERigExecutionType__Max                                                           = 2
};

/// Enum /Script/ControlRig.EBoneGetterSetterMode
/// Size: 0x01 (1 bytes)
enum class EBoneGetterSetterMode : uint8_t
{
	EBoneGetterSetterMode__LocalSpace                                                = 0,
	EBoneGetterSetterMode__GlobalSpace                                               = 1,
	EBoneGetterSetterMode__Max                                                       = 2
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x01 (1 bytes)
enum class ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial                                                    = 0,
	ETransformGetterType__Current                                                    = 1,
	ETransformGetterType__Max                                                        = 2
};

/// Enum /Script/ControlRig.EControlRigClampSpatialMode
/// Size: 0x01 (1 bytes)
enum class EControlRigClampSpatialMode : uint8_t
{
	EControlRigClampSpatialMode__Plane                                               = 0,
	EControlRigClampSpatialMode__Cylinder                                            = 1,
	EControlRigClampSpatialMode__Sphere                                              = 2
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x01 (1 bytes)
enum class ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace                                                  = 0,
	ETransformSpaceMode__GlobalSpace                                                 = 1,
	ETransformSpaceMode__BaseSpace                                                   = 2,
	ETransformSpaceMode__BaseJoint                                                   = 3,
	ETransformSpaceMode__Max                                                         = 4
};

/// Enum /Script/ControlRig.EControlRigDrawSettings
/// Size: 0x01 (1 bytes)
enum class EControlRigDrawSettings : uint8_t
{
	EControlRigDrawSettings__Points                                                  = 0,
	EControlRigDrawSettings__Lines                                                   = 1,
	EControlRigDrawSettings__LineStrip                                               = 2,
	EControlRigDrawSettings__DynamicMesh                                             = 3
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x01 (1 bytes)
enum class EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes                                               = 0,
	EControlRigDrawHierarchyMode__Max                                                = 1
};

/// Enum /Script/ControlRig.EControlRigAnimEasingType
/// Size: 0x01 (1 bytes)
enum class EControlRigAnimEasingType : uint8_t
{
	EControlRigAnimEasingType__Linear                                                = 0,
	EControlRigAnimEasingType__QuadraticEaseIn                                       = 1,
	EControlRigAnimEasingType__QuadraticEaseOut                                      = 2,
	EControlRigAnimEasingType__QuadraticEaseInOut                                    = 3,
	EControlRigAnimEasingType__CubicEaseIn                                           = 4,
	EControlRigAnimEasingType__CubicEaseOut                                          = 5,
	EControlRigAnimEasingType__CubicEaseInOut                                        = 6,
	EControlRigAnimEasingType__QuarticEaseIn                                         = 7,
	EControlRigAnimEasingType__QuarticEaseOut                                        = 8,
	EControlRigAnimEasingType__QuarticEaseInOut                                      = 9,
	EControlRigAnimEasingType__QuinticEaseIn                                         = 10,
	EControlRigAnimEasingType__QuinticEaseOut                                        = 11,
	EControlRigAnimEasingType__QuinticEaseInOut                                      = 12,
	EControlRigAnimEasingType__SineEaseIn                                            = 13,
	EControlRigAnimEasingType__SineEaseOut                                           = 14,
	EControlRigAnimEasingType__SineEaseInOut                                         = 15,
	EControlRigAnimEasingType__CircularEaseIn                                        = 16,
	EControlRigAnimEasingType__CircularEaseOut                                       = 17,
	EControlRigAnimEasingType__CircularEaseInOut                                     = 18,
	EControlRigAnimEasingType__ExponentialEaseIn                                     = 19,
	EControlRigAnimEasingType__ExponentialEaseOut                                    = 20,
	EControlRigAnimEasingType__ExponentialEaseInOut                                  = 21,
	EControlRigAnimEasingType__ElasticEaseIn                                         = 22,
	EControlRigAnimEasingType__ElasticEaseOut                                        = 23,
	EControlRigAnimEasingType__ElasticEaseInOut                                      = 24,
	EControlRigAnimEasingType__BackEaseIn                                            = 25,
	EControlRigAnimEasingType__BackEaseOut                                           = 26,
	EControlRigAnimEasingType__BackEaseInOut                                         = 27,
	EControlRigAnimEasingType__BounceEaseIn                                          = 28,
	EControlRigAnimEasingType__BounceEaseOut                                         = 29,
	EControlRigAnimEasingType__BounceEaseInOut                                       = 30
};

/// Enum /Script/ControlRig.EControlRigRotationOrder
/// Size: 0x01 (1 bytes)
enum class EControlRigRotationOrder : uint8_t
{
	EControlRigRotationOrder__XYZ                                                    = 0,
	EControlRigRotationOrder__XZY                                                    = 1,
	EControlRigRotationOrder__YXZ                                                    = 2,
	EControlRigRotationOrder__YZX                                                    = 3,
	EControlRigRotationOrder__ZXY                                                    = 4,
	EControlRigRotationOrder__ZYX                                                    = 5
};

/// Enum /Script/ControlRig.ECRSimPointIntegrateType
/// Size: 0x01 (1 bytes)
enum class ECRSimPointIntegrateType : uint8_t
{
	ECRSimPointIntegrateType__Verlet                                                 = 0,
	ECRSimPointIntegrateType__SemiExplicitEuler                                      = 1
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x01 (1 bytes)
enum class ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance                                                   = 0,
	ECRSimConstraintType__DistanceFromA                                              = 1,
	ECRSimConstraintType__DistanceFromB                                              = 2,
	ECRSimConstraintType__Plane                                                      = 3
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x01 (1 bytes)
enum class ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction                                                  = 0
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x01 (1 bytes)
enum class ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane                                                   = 0,
	ECRSimSoftCollisionType__Sphere                                                  = 1,
	ECRSimSoftCollisionType__Cone                                                    = 2
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
/// Size: 0x01 (1 bytes)
enum class EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace                                             = 0,
	EControlRigFKRigExecuteMode__Additive                                            = 1,
	EControlRigFKRigExecuteMode__Max                                                 = 2
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x01 (1 bytes)
enum class ERigBoneType : uint8_t
{
	ERigBoneType__Imported                                                           = 0,
	ERigBoneType__User                                                               = 1
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x01 (1 bytes)
enum class ERigControlAxis : uint8_t
{
	ERigControlAxis__X                                                               = 0,
	ERigControlAxis__Y                                                               = 1,
	ERigControlAxis__Z                                                               = 2
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x01 (1 bytes)
enum class ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial                                                    = 0,
	ERigControlValueType__Current                                                    = 1,
	ERigControlValueType__Minimum                                                    = 2,
	ERigControlValueType__Maximum                                                    = 3
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x01 (1 bytes)
enum class ERigControlType : uint8_t
{
	ERigControlType__Bool                                                            = 0,
	ERigControlType__Float                                                           = 1,
	ERigControlType__Integer                                                         = 2,
	ERigControlType__Vector2D                                                        = 3,
	ERigControlType__Position                                                        = 4,
	ERigControlType__Scale                                                           = 5,
	ERigControlType__Rotator                                                         = 6,
	ERigControlType__Transform                                                       = 7,
	ERigControlType__TransformNoScale                                                = 8,
	ERigControlType__EulerTransform                                                  = 9
};

/// Enum /Script/ControlRig.ERigHierarchyImportMode
/// Size: 0x01 (1 bytes)
enum class ERigHierarchyImportMode : uint8_t
{
	ERigHierarchyImportMode__Append                                                  = 0,
	ERigHierarchyImportMode__Replace                                                 = 1,
	ERigHierarchyImportMode__ReplaceLocalTransform                                   = 2,
	ERigHierarchyImportMode__ReplaceGlobalTransform                                  = 3,
	ERigHierarchyImportMode__Max                                                     = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey
/// Size: 0x01 (1 bytes)
enum class EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare                                                     = 0,
	EControlRigSetKey__Always                                                        = 1,
	EControlRigSetKey__Never                                                         = 2
};

/// Enum /Script/ControlRig.ERigEvent
/// Size: 0x01 (1 bytes)
enum class ERigEvent : uint8_t
{
	ERigEvent__None                                                                  = 0,
	ERigEvent__RequestAutoKey                                                        = 1,
	ERigEvent__Max                                                                   = 2
};

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x01 (1 bytes)
enum class ERigElementType : uint8_t
{
	ERigElementType__None                                                            = 0,
	ERigElementType__Bone                                                            = 1,
	ERigElementType__Space                                                           = 2,
	ERigElementType__Control                                                         = 4,
	ERigElementType__Curve                                                           = 8,
	ERigElementType__All                                                             = 15
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x01 (1 bytes)
enum class ERigSpaceType : uint8_t
{
	ERigSpaceType__Global                                                            = 0,
	ERigSpaceType__Bone                                                              = 1,
	ERigSpaceType__Control                                                           = 2,
	ERigSpaceType__Space                                                             = 3
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x01 (1 bytes)
enum class EAimMode : uint8_t
{
	EAimMode__AimAtTarget                                                            = 0,
	EAimMode__OrientToTarget                                                         = 1
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x01 (1 bytes)
enum class EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override                                                    = 0,
	EApplyTransformMode__Additive                                                    = 1,
	EApplyTransformMode__Max                                                         = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugPointMode
/// Size: 0x01 (1 bytes)
enum class ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point                                                    = 0,
	ERigUnitDebugPointMode__Vector                                                   = 1,
	ERigUnitDebugPointMode__Max                                                      = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugTransformMode
/// Size: 0x01 (1 bytes)
enum class ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point                                                = 0,
	ERigUnitDebugTransformMode__Axes                                                 = 1,
	ERigUnitDebugTransformMode__Box                                                  = 2,
	ERigUnitDebugTransformMode__Max                                                  = 3
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x01 (1 bytes)
enum class EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front                                                 = 0,
	EControlRigCurveAlignment__Stretched                                             = 1
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x01 (1 bytes)
enum class EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction                                                 = 0,
	EControlRigVectorKind__Location                                                  = 1
};

/// Enum /Script/ControlRig.ERBFVectorDistanceType
/// Size: 0x01 (1 bytes)
enum class ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean                                                = 0,
	ERBFVectorDistanceType__Manhattan                                                = 1,
	ERBFVectorDistanceType__ArcLength                                                = 2
};

/// Enum /Script/ControlRig.ERBFQuatDistanceType
/// Size: 0x01 (1 bytes)
enum class ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean                                                  = 0,
	ERBFQuatDistanceType__ArcLength                                                  = 1,
	ERBFQuatDistanceType__SwingAngle                                                 = 2,
	ERBFQuatDistanceType__TwistAngle                                                 = 3
};

/// Enum /Script/ControlRig.ERBFKernelType
/// Size: 0x01 (1 bytes)
enum class ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian                                                         = 0,
	ERBFKernelType__Exponential                                                      = 1,
	ERBFKernelType__Linear                                                           = 2,
	ERBFKernelType__Cubic                                                            = 3,
	ERBFKernelType__Quintic                                                          = 4
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x01 (1 bytes)
enum class EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal                                         = 0,
	EControlRigModifyBoneMode__OverrideGlobal                                        = 1,
	EControlRigModifyBoneMode__AdditiveLocal                                         = 2,
	EControlRigModifyBoneMode__AdditiveGlobal                                        = 3,
	EControlRigModifyBoneMode__Max                                                   = 4
};

/// Enum /Script/ControlRig.ERigUnitVisualDebugPointMode
/// Size: 0x01 (1 bytes)
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point                                              = 0,
	ERigUnitVisualDebugPointMode__Vector                                             = 1,
	ERigUnitVisualDebugPointMode__Max                                                = 2
};

/// Enum /Script/ControlRig.EControlRigState
/// Size: 0x01 (1 bytes)
enum class EControlRigState : uint8_t
{
	EControlRigState__Init                                                           = 0,
	EControlRigState__Update                                                         = 1,
	EControlRigState__Invalid                                                        = 2
};

#pragma pack(pop)


static_assert(sizeof(FRigElement) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigBone) == 0x00E0); // 224 bytes (0x000018 - 0x0000E0)
static_assert(sizeof(FRigBoneHierarchy) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigSpace) == 0x0090); // 144 bytes (0x000018 - 0x000090)
static_assert(sizeof(FRigSpaceHierarchy) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigControlValueStorage) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(FRigControlValue) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigControl) == 0x02F0); // 752 bytes (0x000018 - 0x0002F0)
static_assert(sizeof(FRigControlHierarchy) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FRigCurve) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FRigCurveContainer) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigHierarchyContainer) == 0x0368); // 872 bytes (0x000000 - 0x000368)
static_assert(sizeof(FControlRigDrawInstruction) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FControlRigDrawContainer) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigElementKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigInfluenceEntry) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigInfluenceMap) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRigInfluenceMapPerEvent) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UControlRig) == 0x0650); // 1616 bytes (0x000028 - 0x000650)
static_assert(sizeof(UAdditiveControlRig) == 0x0660); // 1632 bytes (0x000650 - 0x000660)
static_assert(sizeof(UControlRigAnimInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UControlRigBlueprintGeneratedClass) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(FControlRigComponentMappedElement) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UControlRigComponent) == 0x0560); // 1376 bytes (0x000468 - 0x000560)
static_assert(sizeof(AControlRigControlActor) == 0x02B0); // 688 bytes (0x000220 - 0x0002B0)
static_assert(sizeof(AControlRigGizmoActor) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(FControlRigGizmoDefinition) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UControlRigGizmoLibrary) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UControlRigLayerInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UControlRigValidationPass) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCachedRigElement) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigPoseElement) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigPose) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UControlRigNumericalValidationPass) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UControlRigObjectHolder) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UControlRigSequence) == 0x0220); // 544 bytes (0x0001C8 - 0x000220)
static_assert(sizeof(UControlRigSequencerAnimInstance) == 0x02D0); // 720 bytes (0x0002C0 - 0x0002D0)
static_assert(sizeof(UControlRigSettings) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UControlRigValidator) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UFKControlRig) == 0x0668); // 1640 bytes (0x000650 - 0x000668)
static_assert(sizeof(FChannelMapInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEnumParameterNameAndCurve) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FIntegerParameterNameAndCurve) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(UMovieSceneControlRigParameterSection) == 0x0348); // 840 bytes (0x000148 - 0x000348)
static_assert(sizeof(UMovieSceneControlRigParameterTrack) == 0x00B0); // 176 bytes (0x000078 - 0x0000B0)
static_assert(sizeof(FConstraintNodeData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FAnimationHierarchy) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FControlRigIOSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FAnimNode_ControlRigBase) == 0x0170); // 368 bytes (0x000058 - 0x000170)
static_assert(sizeof(FAnimNode_ControlRig) == 0x0368); // 872 bytes (0x000170 - 0x000368)
static_assert(sizeof(FAnimNode_ControlRig_ExternalSource) == 0x0178); // 376 bytes (0x000170 - 0x000178)
static_assert(sizeof(FControlRigAnimInstanceProxy) == 0x0800); // 2048 bytes (0x000760 - 0x000800)
static_assert(sizeof(FControlRigComponentMappedCurve) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigComponentMappedBone) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigComponentMappedComponent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FControlRigExecuteContext) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FControlRigDrawInterface) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FGizmoActorCreationParam) == 0x0120); // 288 bytes (0x000000 - 0x000120)
static_assert(sizeof(FControlRigLayerInstanceProxy) == 0x0800); // 2048 bytes (0x000760 - 0x000800)
static_assert(sizeof(FAnimNode_ControlRigInputPose) == 0x0030); // 48 bytes (0x000010 - 0x000030)
static_assert(sizeof(FCRFourPointBezier) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FControlRigSequenceObjectReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FControlRigSequenceObjectReferences) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigSequenceObjectReferenceMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FControlRigSequencerAnimInstanceProxy) == 0x0CB0); // 3248 bytes (0x000A00 - 0x000CB0)
static_assert(sizeof(FControlRigSettingsPerPinBool) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FControlRigValidationContext) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCRSimContainer) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCRSimLinearSpring) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCRSimPoint) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCRSimPointConstraint) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FCRSimPointForce) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCRSimSoftCollision) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FCRSimPointContainer) == 0x0078); // 120 bytes (0x000018 - 0x000078)
static_assert(sizeof(FMovieSceneControlRigInstanceData) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FMovieSceneControlRigParameterTemplate) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(FRigHierarchyRef) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRigMirrorSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigHierarchyCopyPasteContent) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigEventContext) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigElementKeyCollection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigControlModifiedContext) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigInfluenceEntryModifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnitMutable) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigUnit_SimBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_AccumulateVectorRange) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_AccumulateFloatRange) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AccumulateTransformLerp) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_AccumulateQuatLerp) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_AccumulateVectorLerp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_AccumulateFloatLerp) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AccumulateTransformMul) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_AccumulateQuatMul) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_AccumulateVectorMul) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_AccumulateFloatMul) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AccumulateVectorAdd) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_AccumulateFloatAdd) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AddBoneTransform) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_HighlevelBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_AimItem_Target) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FRigUnit_AimBone_DebugSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_AimItem) == 0x0150); // 336 bytes (0x000068 - 0x000150)
static_assert(sizeof(FRigUnit_AimBone_Target) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigUnit_AimBone) == 0x0150); // 336 bytes (0x000068 - 0x000150)
static_assert(sizeof(FRigUnit_HighlevelBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_AimBoneMath) == 0x0140); // 320 bytes (0x000008 - 0x000140)
static_assert(sizeof(FAimTarget) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_AimConstraint_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_AimConstraint) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_AlphaInterpVector) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FRigUnit_AlphaInterp) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FRigUnit_AnimBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_AnimEasing) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_AnimEasingType) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_AnimEvalRichCurve) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_AnimRichCurve) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_ApplyFK) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_BeginExecution) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FBlendTarget) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_BlendTransform) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_Harmonics_TargetItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_BoneHarmonics_WorkData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_ItemHarmonics) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(sizeof(FRigUnit_BoneHarmonics_BoneTarget) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_BoneHarmonics) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(sizeof(FRigUnit_ControlName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_SpaceName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_BoneName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_Item) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_CCDIK_RotationLimitPerItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_CCDIK_WorkData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRigUnit_CCDIKPerItem) == 0x0140); // 320 bytes (0x000068 - 0x000140)
static_assert(sizeof(FRigUnit_CCDIK_RotationLimit) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_CCDIK) == 0x0140); // 320 bytes (0x000068 - 0x000140)
static_assert(sizeof(FRigUnit_ChainHarmonics_Reach) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigUnit_ChainHarmonics_Wave) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_ChainHarmonics_Pendulum) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FRigUnit_ChainHarmonics_WorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_ChainHarmonicsPerItem) == 0x0270); // 624 bytes (0x000068 - 0x000270)
static_assert(sizeof(FRigUnit_ChainHarmonics) == 0x0270); // 624 bytes (0x000068 - 0x000270)
static_assert(sizeof(FRigUnit_CollectionBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_CollectionLoop) == 0x00F8); // 248 bytes (0x000068 - 0x0000F8)
static_assert(sizeof(FRigUnit_CollectionBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_CollectionItemAtIndex) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionCount) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_CollectionReverse) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionDifference) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionIntersection) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionUnion) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionItems) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionReplaceItems) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_CollectionChildren) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_CollectionNameSearch) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_CollectionChain) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_Control) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_Control_StaticMesh) == 0x0100); // 256 bytes (0x0000D0 - 0x000100)
static_assert(sizeof(FRigUnit_ToSwingAndTwist) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_ConvertQuaternionToVector) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertRotationToVector) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ConvertVectorToQuaternion) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertVectorToRotation) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ConvertQuaternion) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertRotation) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertVectorRotation) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertEulerTransform) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_ConvertTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_DebugBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_DebugBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_DebugBezierItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugBezier) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_DebugHierarchy) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_DebugLineItemSpace) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugLine) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugLineStripItemSpace) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugLineStrip) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugPointMutable) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugPoint) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_DebugArcItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugArc) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugRectangleItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugRectangle) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_DebugTransformArrayMutable_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_DebugTransformArrayMutable) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_DebugTransformMutableItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugTransformMutable) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugTransform) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_DeltaFromPreviousTransform) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_DeltaFromPreviousQuat) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_DeltaFromPreviousVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_DeltaFromPreviousFloat) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_DistributeRotation_Rotation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_DistributeRotation_WorkData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_DistributeRotationForCollection) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DistributeRotation) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(sizeof(FRigUnit_DrawContainerSetTransform) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_DrawContainerSetThickness) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FRigUnit_DrawContainerSetColor) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FRigUnit_DrawContainerGetInstruction) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_FABRIK_WorkData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRigUnit_FABRIKPerItem) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_FABRIK) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_FitChainToCurve_Rotation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_FitChainToCurve_DebugSettings) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_FitChainToCurve_WorkData) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigUnit_FitChainToCurvePerItem) == 0x0200); // 512 bytes (0x000068 - 0x000200)
static_assert(sizeof(FRigUnit_FitChainToCurve) == 0x0200); // 512 bytes (0x000068 - 0x000200)
static_assert(sizeof(FRigUnit_MapRange_Float) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_Clamp_Float) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_BinaryFloatOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_Divide_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Subtract_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Add_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Multiply_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_ForLoopCount) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FRigUnit_GetBoneTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetControlInitialTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetControlTransform) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_GetControlRotator) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_GetControlVector) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_GetControlVector2D) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_GetControlInteger) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_GetControlFloat) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_GetControlBool) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_GetCurveValue) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_GetDeltaTime) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_GetInitialBoneTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetJointTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_GetRelativeBoneTransform) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_GetRelativeTransformForItem) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_GetSpaceTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetWorldTime) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_HierarchyBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_HierarchyGetSiblings) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_HierarchyGetChildren) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_HierarchyGetParents) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_HierarchyGetParent) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_InverseExecution) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigUnit_IsInteracting) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_ItemBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_ItemReplace) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ItemExists) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ItemBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_KalmanTransform) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_KalmanVector) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_KalmanFloat) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathBoolBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathBoolNotEquals) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolEquals) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolBinaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolOr) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolNand) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolAnd) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolNot) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolConstant) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolConstFalse) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolConstTrue) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathColorBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathColorLerp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathColorBinaryOp) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorMul) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorSub) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorAdd) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorFromFloat) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathFloatBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathFloatLawOfCosine) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathFloatUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatAtan) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatAcos) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatAsin) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatTan) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatCos) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatSin) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatRad) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatDeg) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatSelectBool) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatIsNearlyEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatIsNearlyZero) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatLessEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatGreaterEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatLess) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatGreater) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatNotEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatRemap) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathFloatLerp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatClamp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatSign) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatToInt) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatRound) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatCeil) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatFloor) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatAbs) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatNegate) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatSqrt) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatBinaryOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatPow) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMax) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMod) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatDiv) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMul) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatSub) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatAdd) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatConstant) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatConstTwoPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatConstHalfPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatConstPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathIntLessEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntGreaterEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntLess) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntGreater) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntNotEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntClamp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntSign) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntToFloat) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntAbs) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntNegate) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntBinaryOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntPow) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMax) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMod) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntDiv) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMul) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntSub) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntAdd) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathQuaternionRotationOrder) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathQuaternionBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathQuaternionSwingTwist) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_MathQuaternionGetAxis) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionRotateVector) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionUnaryOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionUnit) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionDot) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionSelectBool) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionNotEquals) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionEquals) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionSlerp) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_MathQuaternionInverse) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionBinaryOp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionMul) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionToRotator) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionToEuler) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionScale) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionToAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromTwoVectors) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromRotator) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromEuler) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathRBFInterpolateBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorWorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorBase) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FMathRBFInterpolateVectorXform_Target) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorXform) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateVectorQuat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorQuat) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateVectorColor_Target) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorColor) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateVectorVector_Target) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorVector) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateVectorFloat_Target) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorFloat) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatWorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatBase) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateQuatXform_Target) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatXform) == 0x0110); // 272 bytes (0x0000D0 - 0x000110)
static_assert(sizeof(FMathRBFInterpolateQuatQuat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatQuat) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateQuatColor_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatColor) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateQuatVector_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatVector) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateQuatFloat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatFloat) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FRigUnit_MathTransformBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathTransformClampSpatially) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_MathTransformFromSRT) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_MathTransformTransformVector) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_MathTransformRotateVector) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_MathTransformSelectBool) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformLerp) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_MathTransformUnaryOp) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_MathTransformInverse) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FRigUnit_MathTransformMakeAbsolute) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformMakeRelative) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformBinaryOp) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformMul) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformToEulerTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_MathTransformFromEulerTransform) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_MathVectorBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathIntersectPlane) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_MathVectorClampSpatially) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_MathVectorMakeBezierFourPoint) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_MathVectorBezierFourPoint) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_MathVectorOrthogonal) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorParallel) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorAngle) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorMirror) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorClampLength) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorSetLength) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorUnaryOp) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorUnit) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorDot) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorBinaryOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorCross) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorDistance) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorLength) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathVectorLengthSquared) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathVectorRad) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorDeg) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorSelectBool) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorIsNearlyEqual) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorIsNearlyZero) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorNotEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorRemap) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_MathVectorLerp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorClamp) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_MathVectorSign) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorRound) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorCeil) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorFloor) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorAbs) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorNegate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorMax) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorMin) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorMod) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorDiv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorScale) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorMul) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorSub) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorAdd) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorFromFloat) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms_PerBone) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_ModifyTransforms_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms_WorkData) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_ModifyTransforms_PerItem) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_ModifyTransforms) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_MultiFABRIK_EndEffector) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigUnit_MultiFABRIK_WorkData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_MultiFABRIK) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_NameBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_Contains) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_StartsWith) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_EndsWith) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_NameReplace) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_NameTruncate) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_NameConcat) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_NoiseVector) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_NoiseFloat) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_OffsetTransformForItem) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_ParentSwitchConstraint) == 0x0160); // 352 bytes (0x000068 - 0x000160)
static_assert(sizeof(FRigUnit_SimBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_PointSimulation_BoneTarget) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigUnit_PointSimulation_DebugSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_PointSimulation_WorkData) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FRigUnit_PointSimulation) == 0x0200); // 512 bytes (0x000068 - 0x000200)
static_assert(sizeof(FRigUnit_PrepareForExecution) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigUnit_EndProfilingTimer) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_StartProfilingTimer) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_ProjectTransformToNewParent) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_PropagateTransform) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_QuaternionToAngle) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_QuaternionFromAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_QuaternionToAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_UnaryQuaternionOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_InverseQuaterion) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_BinaryQuaternionOp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MultiplyQuaternion) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FRigUnit_RandomVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_RandomFloat) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_SendEvent) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FRigUnit_SequenceExecution) == 0x01E8); // 488 bytes (0x000008 - 0x0001E8)
static_assert(sizeof(FRigUnit_SetBoneInitialTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetBoneRotation) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetBoneTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetBoneTranslation) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetControlColor) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_SetControlOffset) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_SetControlTransform) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_SetMultiControlRotator_Entry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigUnit_SetMultiControlRotator) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlRotator) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_SetControlVector) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_SetMultiControlVector2D_Entry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_SetMultiControlVector2D) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlVector2D) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetMultiControlInteger_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlInteger) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlInteger) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetMultiControlFloat_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlFloat) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlFloat) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetMultiControlBool_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlBool) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_SetControlBool) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_SetControlVisibility) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetCurveValue) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_SetRelativeBoneTransform) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_SetRelativeTransformForItem) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetSpaceInitialTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetSpaceTransform) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_SetScale) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetRotation) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FRigUnit_SetTranslation) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetTransform) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_SlideChain_WorkData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigUnit_SlideChainPerItem) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(FRigUnit_SlideChain) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(FRigUnit_SpringIK_DebugSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_SpringIK_WorkData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FRigUnit_SpringIK) == 0x01D0); // 464 bytes (0x000068 - 0x0001D0)
static_assert(sizeof(FRigUnit_SecondsToFrames) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_FramesToSeconds) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_Timeline) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_TimeOffsetTransform) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_TimeOffsetVector) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_TimeOffsetFloat) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_BinaryTransformOp) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_GetRelativeTransform) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FRigUnit_MultiplyTransform) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FConstraintTarget) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_TransformConstraint_WorkData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_TransformConstraintPerItem) == 0x0140); // 320 bytes (0x000068 - 0x000140)
static_assert(sizeof(FRigUnit_TransformConstraint) == 0x0130); // 304 bytes (0x000068 - 0x000130)
static_assert(sizeof(FRigUnit_TwistBones_WorkData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigUnit_TwistBonesPerItem) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_TwistBones) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_TwoBoneIKFK) == 0x0220); // 544 bytes (0x000068 - 0x000220)
static_assert(sizeof(FRigUnit_TwoBoneIKSimpleTransforms) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_TwoBoneIKSimpleVectors) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_TwoBoneIKSimple_DebugSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_TwoBoneIKSimplePerItem) == 0x01B0); // 432 bytes (0x000068 - 0x0001B0)
static_assert(sizeof(FRigUnit_TwoBoneIKSimple) == 0x0190); // 400 bytes (0x000068 - 0x000190)
static_assert(sizeof(FRigUnit_Distance_VectorVector) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_BinaryVectorOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_Divide_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_Subtract_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_Add_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_Multiply_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_VerletIntegrateVector) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_VisualDebugTransformItemSpace) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_VisualDebugTransform) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_VisualDebugQuatItemSpace) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_VisualDebugQuat) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_VisualDebugVectorItemSpace) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_VisualDebugVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_SphereTraceWorld) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_ToRigSpace_Rotation) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ToWorldSpace_Rotation) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ToRigSpace_Location) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ToWorldSpace_Location) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ToRigSpace_Transform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_ToWorldSpace_Transform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FStructReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FRigElement, Name) == 0x0008);
static_assert(offsetof(FRigBone, ParentName) == 0x0018);
static_assert(offsetof(FRigBone, InitialTransform) == 0x0030);
static_assert(offsetof(FRigBone, GlobalTransform) == 0x0060);
static_assert(offsetof(FRigBone, LocalTransform) == 0x0090);
static_assert(offsetof(FRigBone, Dependents) == 0x00C0);
static_assert(offsetof(FRigBone, Type) == 0x00D0);
static_assert(offsetof(FRigBoneHierarchy, Bones) == 0x0020);
static_assert(offsetof(FRigBoneHierarchy, NameToIndexMapping) == 0x0030);
static_assert(offsetof(FRigBoneHierarchy, Selection) == 0x0080);
static_assert(offsetof(FRigSpace, SpaceType) == 0x0018);
static_assert(offsetof(FRigSpace, ParentName) == 0x001C);
static_assert(offsetof(FRigSpace, InitialTransform) == 0x0030);
static_assert(offsetof(FRigSpace, LocalTransform) == 0x0060);
static_assert(offsetof(FRigSpaceHierarchy, Spaces) == 0x0020);
static_assert(offsetof(FRigSpaceHierarchy, NameToIndexMapping) == 0x0030);
static_assert(offsetof(FRigSpaceHierarchy, Selection) == 0x0080);
static_assert(offsetof(FRigControlValue, FloatStorage) == 0x0000);
static_assert(offsetof(FRigControlValue, Storage) == 0x0050);
static_assert(offsetof(FRigControl, ControlType) == 0x0018);
static_assert(offsetof(FRigControl, DisplayName) == 0x001C);
static_assert(offsetof(FRigControl, ParentName) == 0x0024);
static_assert(offsetof(FRigControl, SpaceName) == 0x0030);
static_assert(offsetof(FRigControl, OffsetTransform) == 0x0040);
static_assert(offsetof(FRigControl, InitialValue) == 0x0070);
static_assert(offsetof(FRigControl, Value) == 0x00F0);
static_assert(offsetof(FRigControl, PrimaryAxis) == 0x0170);
static_assert(offsetof(FRigControl, MinimumValue) == 0x0180);
static_assert(offsetof(FRigControl, MaximumValue) == 0x0200);
static_assert(offsetof(FRigControl, GizmoName) == 0x0284);
static_assert(offsetof(FRigControl, GizmoTransform) == 0x0290);
static_assert(offsetof(FRigControl, GizmoColor) == 0x02C0);
static_assert(offsetof(FRigControl, Dependents) == 0x02D0);
static_assert(offsetof(FRigControl, ControlEnum) == 0x02E8);
static_assert(offsetof(FRigControlHierarchy, Controls) == 0x0098);
static_assert(offsetof(FRigControlHierarchy, NameToIndexMapping) == 0x00A8);
static_assert(offsetof(FRigControlHierarchy, Selection) == 0x00F8);
static_assert(offsetof(FRigCurveContainer, Curves) == 0x0020);
static_assert(offsetof(FRigCurveContainer, NameToIndexMapping) == 0x0030);
static_assert(offsetof(FRigCurveContainer, Selection) == 0x0080);
static_assert(offsetof(FRigHierarchyContainer, BoneHierarchy) == 0x0000);
static_assert(offsetof(FRigHierarchyContainer, SpaceHierarchy) == 0x0098);
static_assert(offsetof(FRigHierarchyContainer, ControlHierarchy) == 0x0128);
static_assert(offsetof(FRigHierarchyContainer, CurveContainer) == 0x0230);
static_assert(offsetof(FControlRigDrawInstruction, Name) == 0x0000);
static_assert(offsetof(FControlRigDrawInstruction, PrimitiveType) == 0x0008);
static_assert(offsetof(FControlRigDrawInstruction, Positions) == 0x0010);
static_assert(offsetof(FControlRigDrawInstruction, Color) == 0x0020);
static_assert(offsetof(FControlRigDrawInstruction, Transform) == 0x0040);
static_assert(offsetof(FControlRigDrawContainer, Instructions) == 0x0008);
static_assert(offsetof(FRigElementKey, Type) == 0x0000);
static_assert(offsetof(FRigElementKey, Name) == 0x0004);
static_assert(offsetof(FRigInfluenceEntry, Source) == 0x0000);
static_assert(offsetof(FRigInfluenceEntry, AffectedList) == 0x0010);
static_assert(offsetof(FRigInfluenceMap, EventName) == 0x0000);
static_assert(offsetof(FRigInfluenceMap, Entries) == 0x0008);
static_assert(offsetof(FRigInfluenceMap, KeyToIndex) == 0x0018);
static_assert(offsetof(FRigInfluenceMapPerEvent, Maps) == 0x0000);
static_assert(offsetof(FRigInfluenceMapPerEvent, EventToIndex) == 0x0010);
static_assert(offsetof(UControlRig, ExecutionType) == 0x0045);
static_assert(offsetof(UControlRig, VM) == 0x0048);
static_assert(offsetof(UControlRig, Hierarchy) == 0x0050);
static_assert(offsetof(UControlRig, GizmoLibrary) == 0x03B8);
static_assert(offsetof(UControlRig, InputProperties) == 0x03F0);
static_assert(offsetof(UControlRig, OutputProperties) == 0x0440);
static_assert(offsetof(UControlRig, DrawContainer) == 0x0490);
static_assert(offsetof(UControlRig, DataSourceRegistry) == 0x04C0);
static_assert(offsetof(UControlRig, EventQueue) == 0x04C8);
static_assert(offsetof(UControlRig, Influences) == 0x0550);
static_assert(offsetof(UControlRig, InteractionRig) == 0x05B0);
static_assert(offsetof(UControlRig, InteractionRigClass) == 0x05B8);
static_assert(offsetof(UControlRig, AssetUserData) == 0x05C0);
static_assert(offsetof(FControlRigComponentMappedElement, ComponentReference) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedElement, TransformName) == 0x002C);
static_assert(offsetof(FControlRigComponentMappedElement, ElementType) == 0x0034);
static_assert(offsetof(FControlRigComponentMappedElement, ElementName) == 0x0038);
static_assert(offsetof(FControlRigComponentMappedElement, Direction) == 0x0040);
static_assert(offsetof(FControlRigComponentMappedElement, Offset) == 0x0050);
static_assert(offsetof(FControlRigComponentMappedElement, Space) == 0x0084);
static_assert(offsetof(FControlRigComponentMappedElement, SceneComponent) == 0x0088);
static_assert(offsetof(UControlRigComponent, ControlRigClass) == 0x0468);
static_assert(offsetof(UControlRigComponent, MappedElements) == 0x04C0);
static_assert(offsetof(UControlRigComponent, ControlRig) == 0x04D8);
static_assert(offsetof(AControlRigControlActor, ActorToTrack) == 0x0220);
static_assert(offsetof(AControlRigControlActor, ControlRigClass) == 0x0228);
static_assert(offsetof(AControlRigControlActor, MaterialOverride) == 0x0238);
static_assert(offsetof(AControlRigControlActor, ColorParameter) == 0x0240);
static_assert(offsetof(AControlRigControlActor, ActorRootComponent) == 0x0258);
static_assert(offsetof(AControlRigControlActor, ControlRig) == 0x0260);
static_assert(offsetof(AControlRigControlActor, ControlNames) == 0x0268);
static_assert(offsetof(AControlRigControlActor, GizmoTransforms) == 0x0278);
static_assert(offsetof(AControlRigControlActor, Components) == 0x0288);
static_assert(offsetof(AControlRigControlActor, Materials) == 0x0298);
static_assert(offsetof(AControlRigControlActor, ColorParameterName) == 0x02A8);
static_assert(offsetof(AControlRigGizmoActor, ActorRootComponent) == 0x0220);
static_assert(offsetof(AControlRigGizmoActor, StaticMeshComponent) == 0x0228);
static_assert(offsetof(AControlRigGizmoActor, ControlName) == 0x0234);
static_assert(offsetof(AControlRigGizmoActor, ColorParameterName) == 0x023C);
static_assert(offsetof(FControlRigGizmoDefinition, GizmoName) == 0x0000);
static_assert(offsetof(FControlRigGizmoDefinition, StaticMesh) == 0x0008);
static_assert(offsetof(FControlRigGizmoDefinition, Transform) == 0x0030);
static_assert(offsetof(UControlRigGizmoLibrary, DefaultGizmo) == 0x0030);
static_assert(offsetof(UControlRigGizmoLibrary, DefaultMaterial) == 0x0090);
static_assert(offsetof(UControlRigGizmoLibrary, MaterialColorParameter) == 0x00B8);
static_assert(offsetof(UControlRigGizmoLibrary, Gizmos) == 0x00C0);
static_assert(offsetof(FCachedRigElement, Key) == 0x0000);
static_assert(offsetof(FRigPoseElement, Index) == 0x0000);
static_assert(offsetof(FRigPoseElement, GlobalTransform) == 0x0020);
static_assert(offsetof(FRigPoseElement, LocalTransform) == 0x0050);
static_assert(offsetof(FRigPose, Elements) == 0x0000);
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameA) == 0x003C);
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameB) == 0x0044);
static_assert(offsetof(UControlRigNumericalValidationPass, Pose) == 0x0050);
static_assert(offsetof(UControlRigObjectHolder, Objects) == 0x0028);
static_assert(offsetof(UControlRigSequence, LastExportedToAnimationSequence) == 0x01C8);
static_assert(offsetof(UControlRigSequence, LastExportedUsingSkeletalMesh) == 0x01F0);
static_assert(offsetof(UControlRigValidator, Passes) == 0x0028);
static_assert(offsetof(UFKControlRig, IsControlActive) == 0x0650);
static_assert(offsetof(UFKControlRig, ApplyMode) == 0x0660);
static_assert(offsetof(FChannelMapInfo, ChannelTypeName) == 0x0010);
static_assert(offsetof(FEnumParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FEnumParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(FIntegerParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FIntegerParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRig) == 0x0148);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlsMask) == 0x0150);
static_assert(offsetof(UMovieSceneControlRigParameterSection, TransformMask) == 0x0160);
static_assert(offsetof(UMovieSceneControlRigParameterSection, BoneFilter) == 0x0168);
static_assert(offsetof(UMovieSceneControlRigParameterSection, Weight) == 0x01D0);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlChannelMap) == 0x0270);
static_assert(offsetof(UMovieSceneControlRigParameterSection, EnumParameterNamesAndCurves) == 0x02C0);
static_assert(offsetof(UMovieSceneControlRigParameterSection, IntegerParameterNamesAndCurves) == 0x02D0);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, ControlRig) == 0x0088);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, SectionToKey) == 0x0090);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, Sections) == 0x0098);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, TrackName) == 0x00A8);
static_assert(offsetof(FConstraintNodeData, RelativeParent) == 0x0000);
static_assert(offsetof(FConstraintNodeData, ConstraintOffset) == 0x0030);
static_assert(offsetof(FConstraintNodeData, LinkedNode) == 0x0090);
static_assert(offsetof(FConstraintNodeData, Constraints) == 0x0098);
static_assert(offsetof(FAnimationHierarchy, UserData) == 0x0078);
static_assert(offsetof(FAnimNode_ControlRigBase, Source) == 0x0058);
static_assert(offsetof(FAnimNode_ControlRigBase, ControlRigBoneMapping) == 0x0068);
static_assert(offsetof(FAnimNode_ControlRigBase, ControlRigCurveMapping) == 0x00B8);
static_assert(offsetof(FAnimNode_ControlRigBase, InputToCurveMappingUIDs) == 0x0108);
static_assert(offsetof(FAnimNode_ControlRigBase, NodeMappingContainer) == 0x0158);
static_assert(offsetof(FAnimNode_ControlRigBase, InputSettings) == 0x0160);
static_assert(offsetof(FAnimNode_ControlRigBase, OutputSettings) == 0x0162);
static_assert(offsetof(FAnimNode_ControlRig, ControlRigClass) == 0x0170);
static_assert(offsetof(FAnimNode_ControlRig, ControlRig) == 0x0178);
static_assert(offsetof(FAnimNode_ControlRig, AlphaInputType) == 0x0184);
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBias) == 0x0188);
static_assert(offsetof(FAnimNode_ControlRig, AlphaBoolBlend) == 0x0190);
static_assert(offsetof(FAnimNode_ControlRig, AlphaCurveName) == 0x01D8);
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBiasClamp) == 0x01E0);
static_assert(offsetof(FAnimNode_ControlRig, InputMapping) == 0x0210);
static_assert(offsetof(FAnimNode_ControlRig, OutputMapping) == 0x0260);
static_assert(offsetof(FAnimNode_ControlRig_ExternalSource, ControlRig) == 0x0170);
static_assert(offsetof(FControlRigComponentMappedCurve, Source) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedCurve, Target) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedBone, Source) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedBone, Target) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedComponent, Component) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedComponent, ElementName) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedComponent, ElementType) == 0x0010);
static_assert(offsetof(FControlRigComponentMappedComponent, Direction) == 0x0011);
static_assert(offsetof(FAnimNode_ControlRigInputPose, InputPose) == 0x0010);
static_assert(offsetof(FCRFourPointBezier, A) == 0x0000);
static_assert(offsetof(FCRFourPointBezier, B) == 0x000C);
static_assert(offsetof(FCRFourPointBezier, C) == 0x0018);
static_assert(offsetof(FCRFourPointBezier, D) == 0x0024);
static_assert(offsetof(FControlRigSequenceObjectReference, ControlRigClass) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferences, Array) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferenceMap, BindingIds) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferenceMap, References) == 0x0010);
static_assert(offsetof(FControlRigSettingsPerPinBool, Values) == 0x0000);
static_assert(offsetof(FCRSimPoint, Position) == 0x0010);
static_assert(offsetof(FCRSimPoint, LinearVelocity) == 0x001C);
static_assert(offsetof(FCRSimPointConstraint, Type) == 0x0000);
static_assert(offsetof(FCRSimPointConstraint, DataA) == 0x000C);
static_assert(offsetof(FCRSimPointConstraint, DataB) == 0x0018);
static_assert(offsetof(FCRSimPointForce, ForceType) == 0x0000);
static_assert(offsetof(FCRSimPointForce, Vector) == 0x0004);
static_assert(offsetof(FCRSimSoftCollision, Transform) == 0x0000);
static_assert(offsetof(FCRSimSoftCollision, ShapeType) == 0x0030);
static_assert(offsetof(FCRSimSoftCollision, FalloffType) == 0x003C);
static_assert(offsetof(FCRSimPointContainer, Points) == 0x0018);
static_assert(offsetof(FCRSimPointContainer, Springs) == 0x0028);
static_assert(offsetof(FCRSimPointContainer, Forces) == 0x0038);
static_assert(offsetof(FCRSimPointContainer, CollisionVolumes) == 0x0048);
static_assert(offsetof(FCRSimPointContainer, Constraints) == 0x0058);
static_assert(offsetof(FCRSimPointContainer, PreviousStep) == 0x0068);
static_assert(offsetof(FMovieSceneControlRigInstanceData, BoneFilter) == 0x0010);
static_assert(offsetof(FMovieSceneControlRigInstanceData, Weight) == 0x0078);
static_assert(offsetof(FMovieSceneControlRigInstanceData, Operand) == 0x0118);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Enums) == 0x0080);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Integers) == 0x0090);
static_assert(offsetof(FRigMirrorSettings, MirrorAxis) == 0x0000);
static_assert(offsetof(FRigMirrorSettings, AxisToFlip) == 0x0001);
static_assert(offsetof(FRigMirrorSettings, OldName) == 0x0008);
static_assert(offsetof(FRigMirrorSettings, NewName) == 0x0018);
static_assert(offsetof(FRigHierarchyCopyPasteContent, Types) == 0x0000);
static_assert(offsetof(FRigHierarchyCopyPasteContent, Contents) == 0x0010);
static_assert(offsetof(FRigHierarchyCopyPasteContent, LocalTransforms) == 0x0020);
static_assert(offsetof(FRigHierarchyCopyPasteContent, GlobalTransforms) == 0x0030);
static_assert(offsetof(FRigInfluenceEntryModifier, AffectedList) == 0x0000);
static_assert(offsetof(FRigUnitMutable, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, Value) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, Minimum) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, Maximum) == 0x0020);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, AccumulatedMinimum) == 0x002C);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, AccumulatedMaximum) == 0x0038);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, TargetValue) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, InitialValue) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, Result) == 0x0080);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, AccumulatedValue) == 0x00B0);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, TargetValue) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, InitialValue) == 0x0020);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, Result) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, AccumulatedValue) == 0x0050);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, TargetValue) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, InitialValue) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, Result) == 0x0028);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, AccumulatedValue) == 0x0034);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, Multiplier) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, InitialValue) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, Result) == 0x0080);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, AccumulatedValue) == 0x00B0);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, Multiplier) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, InitialValue) == 0x0020);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, Result) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, AccumulatedValue) == 0x0050);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, Multiplier) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, InitialValue) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, Result) == 0x0024);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, AccumulatedValue) == 0x0030);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, Increment) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, InitialValue) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, Result) == 0x0024);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, AccumulatedValue) == 0x0030);
static_assert(offsetof(FRigUnit_AddBoneTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_AddBoneTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_AddBoneTransform, CachedBone) == 0x00A8);
static_assert(offsetof(FRigUnit_AimItem_Target, Axis) == 0x0004);
static_assert(offsetof(FRigUnit_AimItem_Target, Target) == 0x0010);
static_assert(offsetof(FRigUnit_AimItem_Target, Kind) == 0x001C);
static_assert(offsetof(FRigUnit_AimItem_Target, Space) == 0x0020);
static_assert(offsetof(FRigUnit_AimBone_DebugSettings, WorldOffset) == 0x0010);
static_assert(offsetof(FRigUnit_AimItem, Item) == 0x0068);
static_assert(offsetof(FRigUnit_AimItem, Primary) == 0x0074);
static_assert(offsetof(FRigUnit_AimItem, Secondary) == 0x00A0);
static_assert(offsetof(FRigUnit_AimItem, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_AimItem, CachedItem) == 0x0110);
static_assert(offsetof(FRigUnit_AimItem, PrimaryCachedSpace) == 0x0124);
static_assert(offsetof(FRigUnit_AimItem, SecondaryCachedSpace) == 0x0138);
static_assert(offsetof(FRigUnit_AimBone_Target, Axis) == 0x0004);
static_assert(offsetof(FRigUnit_AimBone_Target, Target) == 0x0010);
static_assert(offsetof(FRigUnit_AimBone_Target, Kind) == 0x001C);
static_assert(offsetof(FRigUnit_AimBone_Target, Space) == 0x0020);
static_assert(offsetof(FRigUnit_AimBone, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_AimBone, Primary) == 0x0070);
static_assert(offsetof(FRigUnit_AimBone, Secondary) == 0x0098);
static_assert(offsetof(FRigUnit_AimBone, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_AimBone, CachedBoneIndex) == 0x0110);
static_assert(offsetof(FRigUnit_AimBone, PrimaryCachedSpace) == 0x0124);
static_assert(offsetof(FRigUnit_AimBone, SecondaryCachedSpace) == 0x0138);
static_assert(offsetof(FRigUnit_AimBoneMath, InputTransform) == 0x0010);
static_assert(offsetof(FRigUnit_AimBoneMath, Primary) == 0x0040);
static_assert(offsetof(FRigUnit_AimBoneMath, Secondary) == 0x006C);
static_assert(offsetof(FRigUnit_AimBoneMath, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_AimBoneMath, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_AimBoneMath, PrimaryCachedSpace) == 0x0110);
static_assert(offsetof(FRigUnit_AimBoneMath, SecondaryCachedSpace) == 0x0124);
static_assert(offsetof(FAimTarget, Transform) == 0x0010);
static_assert(offsetof(FAimTarget, AlignVector) == 0x0040);
static_assert(offsetof(FRigUnit_AimConstraint_WorkData, ConstraintData) == 0x0000);
static_assert(offsetof(FRigUnit_AimConstraint, Joint) == 0x0068);
static_assert(offsetof(FRigUnit_AimConstraint, AimMode) == 0x0070);
static_assert(offsetof(FRigUnit_AimConstraint, UpMode) == 0x0071);
static_assert(offsetof(FRigUnit_AimConstraint, AimVector) == 0x0074);
static_assert(offsetof(FRigUnit_AimConstraint, UpVector) == 0x0080);
static_assert(offsetof(FRigUnit_AimConstraint, AimTargets) == 0x0090);
static_assert(offsetof(FRigUnit_AimConstraint, UpTargets) == 0x00A0);
static_assert(offsetof(FRigUnit_AimConstraint, WorkData) == 0x00B0);
static_assert(offsetof(FRigUnit_AlphaInterpVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_AlphaInterpVector, InRange) == 0x0020);
static_assert(offsetof(FRigUnit_AlphaInterpVector, OutRange) == 0x0028);
static_assert(offsetof(FRigUnit_AlphaInterpVector, Result) == 0x0048);
static_assert(offsetof(FRigUnit_AlphaInterpVector, ScaleBiasClamp) == 0x0054);
static_assert(offsetof(FRigUnit_AlphaInterp, InRange) == 0x0018);
static_assert(offsetof(FRigUnit_AlphaInterp, OutRange) == 0x0020);
static_assert(offsetof(FRigUnit_AlphaInterp, ScaleBiasClamp) == 0x0044);
static_assert(offsetof(FRigUnit_AnimEasing, Type) == 0x000C);
static_assert(offsetof(FRigUnit_AnimEasingType, Type) == 0x0008);
static_assert(offsetof(FRigUnit_AnimEvalRichCurve, Curve) == 0x0010);
static_assert(offsetof(FRigUnit_AnimRichCurve, Curve) == 0x0008);
static_assert(offsetof(FRigUnit_ApplyFK, Joint) == 0x0068);
static_assert(offsetof(FRigUnit_ApplyFK, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_ApplyFK, Filter) == 0x00A0);
static_assert(offsetof(FRigUnit_ApplyFK, ApplyTransformMode) == 0x00A9);
static_assert(offsetof(FRigUnit_ApplyFK, ApplyTransformSpace) == 0x00AA);
static_assert(offsetof(FRigUnit_ApplyFK, BaseTransform) == 0x00B0);
static_assert(offsetof(FRigUnit_ApplyFK, BaseJoint) == 0x00E0);
static_assert(offsetof(FRigUnit_BeginExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FBlendTarget, Transform) == 0x0000);
static_assert(offsetof(FRigUnit_BlendTransform, Source) == 0x0010);
static_assert(offsetof(FRigUnit_BlendTransform, Targets) == 0x0040);
static_assert(offsetof(FRigUnit_BlendTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_Harmonics_TargetItem, Item) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, WaveTime) == 0x0010);
static_assert(offsetof(FRigUnit_ItemHarmonics, Targets) == 0x0068);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveSpeed) == 0x0078);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveFrequency) == 0x0084);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveAmplitude) == 0x0090);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveOffset) == 0x009C);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveNoise) == 0x00A8);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveEase) == 0x00B4);
static_assert(offsetof(FRigUnit_ItemHarmonics, RotationOrder) == 0x00C0);
static_assert(offsetof(FRigUnit_ItemHarmonics, WorkData) == 0x00C8);
static_assert(offsetof(FRigUnit_BoneHarmonics_BoneTarget, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics, Bones) == 0x0068);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveSpeed) == 0x0078);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveFrequency) == 0x0084);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveAmplitude) == 0x0090);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveOffset) == 0x009C);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveNoise) == 0x00A8);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveEase) == 0x00B4);
static_assert(offsetof(FRigUnit_BoneHarmonics, RotationOrder) == 0x00C0);
static_assert(offsetof(FRigUnit_BoneHarmonics, WorkData) == 0x00C8);
static_assert(offsetof(FRigUnit_ControlName, Control) == 0x0008);
static_assert(offsetof(FRigUnit_SpaceName, Space) == 0x0008);
static_assert(offsetof(FRigUnit_BoneName, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_Item, Item) == 0x0008);
static_assert(offsetof(FRigUnit_CCDIK_RotationLimitPerItem, Item) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, Chain) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedItems) == 0x0010);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitIndex) == 0x0020);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitsPerItem) == 0x0030);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedEffector) == 0x0040);
static_assert(offsetof(FRigUnit_CCDIKPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_CCDIKPerItem, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_CCDIKPerItem, RotationLimits) == 0x00C8);
static_assert(offsetof(FRigUnit_CCDIKPerItem, WorkData) == 0x00E0);
static_assert(offsetof(FRigUnit_CCDIK_RotationLimit, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_CCDIK, EffectorBone) == 0x0070);
static_assert(offsetof(FRigUnit_CCDIK, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_CCDIK, RotationLimits) == 0x00C8);
static_assert(offsetof(FRigUnit_CCDIK, WorkData) == 0x00E0);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachTarget) == 0x0004);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachAxis) == 0x0010);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachEase) == 0x0024);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveFrequency) == 0x0004);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveAmplitude) == 0x0010);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveOffset) == 0x001C);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveNoise) == 0x0028);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveEase) == 0x003C);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumGravity) == 0x0008);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumEase) == 0x0024);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, UnwindAxis) == 0x0028);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Time) == 0x0000);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Items) == 0x0010);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Ratio) == 0x0020);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, LocalTip) == 0x0030);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumTip) == 0x0040);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumPosition) == 0x0050);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumVelocity) == 0x0060);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, HierarchyLine) == 0x0070);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, VelocityLines) == 0x0080);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, ChainRoot) == 0x0068);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Speed) == 0x0074);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Reach) == 0x0080);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Wave) == 0x00A8);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WaveCurve) == 0x00E8);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Pendulum) == 0x0170);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, DrawWorldOffset) == 0x01B0);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WorkData) == 0x01E0);
static_assert(offsetof(FRigUnit_ChainHarmonics, ChainRoot) == 0x0068);
static_assert(offsetof(FRigUnit_ChainHarmonics, Speed) == 0x0070);
static_assert(offsetof(FRigUnit_ChainHarmonics, Reach) == 0x007C);
static_assert(offsetof(FRigUnit_ChainHarmonics, Wave) == 0x00A4);
static_assert(offsetof(FRigUnit_ChainHarmonics, WaveCurve) == 0x00E8);
static_assert(offsetof(FRigUnit_ChainHarmonics, Pendulum) == 0x0170);
static_assert(offsetof(FRigUnit_ChainHarmonics, DrawWorldOffset) == 0x01B0);
static_assert(offsetof(FRigUnit_ChainHarmonics, WorkData) == 0x01E0);
static_assert(offsetof(FRigUnit_CollectionLoop, Collection) == 0x0068);
static_assert(offsetof(FRigUnit_CollectionLoop, Item) == 0x0078);
static_assert(offsetof(FRigUnit_CollectionLoop, Completed) == 0x0098);
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Item) == 0x001C);
static_assert(offsetof(FRigUnit_CollectionCount, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReverse, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReverse, Reversed) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionDifference, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionDifference, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionDifference, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionIntersection, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionIntersection, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionIntersection, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionUnion, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionUnion, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionUnion, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionItems, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionItems, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Old) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, New) == 0x0020);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Collection) == 0x0030);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, CachedCollection) == 0x0040);
static_assert(offsetof(FRigUnit_CollectionChildren, Parent) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChildren, TypeToSearch) == 0x0016);
static_assert(offsetof(FRigUnit_CollectionChildren, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionChildren, CachedCollection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionNameSearch, PartialName) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionNameSearch, TypeToSearch) == 0x0010);
static_assert(offsetof(FRigUnit_CollectionNameSearch, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionNameSearch, CachedCollection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionChain, FirstItem) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChain, LastItem) == 0x0014);
static_assert(offsetof(FRigUnit_CollectionChain, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionChain, CachedCollection) == 0x0038);
static_assert(offsetof(FRigUnit_Control, Transform) == 0x0008);
static_assert(offsetof(FRigUnit_Control, Base) == 0x0030);
static_assert(offsetof(FRigUnit_Control, InitTransform) == 0x0060);
static_assert(offsetof(FRigUnit_Control, Result) == 0x0090);
static_assert(offsetof(FRigUnit_Control, Filter) == 0x00C0);
static_assert(offsetof(FRigUnit_Control_StaticMesh, MeshTransform) == 0x00D0);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, TwistAxis) == 0x0020);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Swing) == 0x0030);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Twist) == 0x0040);
static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertRotationToVector, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertRotationToVector, Result) == 0x0014);
static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Result) == 0x0014);
static_assert(offsetof(FRigUnit_ConvertQuaternion, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertQuaternion, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertRotation, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertRotation, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertEulerTransform, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertEulerTransform, Result) == 0x0030);
static_assert(offsetof(FRigUnit_ConvertTransform, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertTransform, Result) == 0x0040);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Bezier) == 0x0068);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugBezier, Bezier) == 0x0068);
static_assert(offsetof(FRigUnit_DebugBezier, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugBezier, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugBezier, WorldOffset) == 0x00C0);
static_assert(offsetof(FRigUnit_DebugHierarchy, Color) == 0x006C);
static_assert(offsetof(FRigUnit_DebugHierarchy, WorldOffset) == 0x0080);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, A) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, B) == 0x0074);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, Color) == 0x0080);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, Space) == 0x0094);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugLine, A) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLine, B) == 0x0074);
static_assert(offsetof(FRigUnit_DebugLine, Color) == 0x0080);
static_assert(offsetof(FRigUnit_DebugLine, Space) == 0x0094);
static_assert(offsetof(FRigUnit_DebugLine, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Points) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Color) == 0x0078);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Space) == 0x008C);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugLineStrip, Points) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLineStrip, Color) == 0x0078);
static_assert(offsetof(FRigUnit_DebugLineStrip, Space) == 0x008C);
static_assert(offsetof(FRigUnit_DebugLineStrip, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugPointMutable, Vector) == 0x0068);
static_assert(offsetof(FRigUnit_DebugPointMutable, Mode) == 0x0074);
static_assert(offsetof(FRigUnit_DebugPointMutable, Color) == 0x0078);
static_assert(offsetof(FRigUnit_DebugPointMutable, Space) == 0x0090);
static_assert(offsetof(FRigUnit_DebugPointMutable, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugPoint, Vector) == 0x0008);
static_assert(offsetof(FRigUnit_DebugPoint, Mode) == 0x0014);
static_assert(offsetof(FRigUnit_DebugPoint, Color) == 0x0018);
static_assert(offsetof(FRigUnit_DebugPoint, Space) == 0x0030);
static_assert(offsetof(FRigUnit_DebugPoint, WorldOffset) == 0x0040);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Space) == 0x00C4);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugArc, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugArc, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugArc, Space) == 0x00C4);
static_assert(offsetof(FRigUnit_DebugArc, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugRectangle, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugRectangle, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugRectangle, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugRectangle, WorldOffset) == 0x00C0);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable_WorkData, DrawTransforms) == 0x0000);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Transforms) == 0x0068);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Mode) == 0x0078);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Color) == 0x007C);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Space) == 0x0094);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, WorkData) == 0x00D8);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Mode) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Color) == 0x00A4);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Space) == 0x00BC);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Mode) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Color) == 0x00A4);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Space) == 0x00BC);
static_assert(offsetof(FRigUnit_DebugTransformMutable, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugTransform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_DebugTransform, Mode) == 0x0040);
static_assert(offsetof(FRigUnit_DebugTransform, Color) == 0x0044);
static_assert(offsetof(FRigUnit_DebugTransform, Space) == 0x005C);
static_assert(offsetof(FRigUnit_DebugTransform, WorldOffset) == 0x0070);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, Delta) == 0x0040);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, PreviousValue) == 0x0070);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, Cache) == 0x00A0);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, Value) == 0x0010);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, Delta) == 0x0020);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, PreviousValue) == 0x0030);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, Cache) == 0x0040);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, Delta) == 0x0014);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, PreviousValue) == 0x0020);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, Cache) == 0x002C);
static_assert(offsetof(FRigUnit_DistributeRotation_Rotation, Rotation) == 0x0000);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationA) == 0x0010);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationB) == 0x0020);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationT) == 0x0030);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemLocalTransforms) == 0x0040);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Items) == 0x0068);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Rotations) == 0x0078);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, RotationEaseType) == 0x0088);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, WorkData) == 0x0090);
static_assert(offsetof(FRigUnit_DistributeRotation, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_DistributeRotation, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_DistributeRotation, Rotations) == 0x0078);
static_assert(offsetof(FRigUnit_DistributeRotation, RotationEaseType) == 0x0088);
static_assert(offsetof(FRigUnit_DistributeRotation, WorkData) == 0x0098);
static_assert(offsetof(FRigUnit_DrawContainerSetTransform, InstructionName) == 0x0068);
static_assert(offsetof(FRigUnit_DrawContainerSetTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DrawContainerSetThickness, InstructionName) == 0x0068);
static_assert(offsetof(FRigUnit_DrawContainerSetColor, InstructionName) == 0x0068);
static_assert(offsetof(FRigUnit_DrawContainerSetColor, Color) == 0x0070);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, InstructionName) == 0x0008);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Color) == 0x0010);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, Chain) == 0x0000);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedItems) == 0x0010);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedEffector) == 0x0020);
static_assert(offsetof(FRigUnit_FABRIKPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_FABRIKPerItem, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_FABRIKPerItem, WorkData) == 0x00C0);
static_assert(offsetof(FRigUnit_FABRIK, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_FABRIK, EffectorBone) == 0x0070);
static_assert(offsetof(FRigUnit_FABRIK, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_FABRIK, WorkData) == 0x00C0);
static_assert(offsetof(FRigUnit_FitChainToCurve_Rotation, Rotation) == 0x0000);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, CurveColor) == 0x0008);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, SegmentsColor) == 0x0018);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, WorldOffset) == 0x0030);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemPositions) == 0x0008);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemSegments) == 0x0018);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurvePositions) == 0x0028);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurveSegments) == 0x0038);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CachedItems) == 0x0048);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationA) == 0x0058);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationB) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationT) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemLocalTransforms) == 0x0088);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Bezier) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Alignment) == 0x00A8);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PrimaryAxis) == 0x00B8);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, SecondaryAxis) == 0x00C4);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PoleVectorPosition) == 0x00D0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Rotations) == 0x00E0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, RotationEaseType) == 0x00F0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, DebugSettings) == 0x0100);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, WorkData) == 0x0160);
static_assert(offsetof(FRigUnit_FitChainToCurve, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurve, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_FitChainToCurve, Bezier) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurve, Alignment) == 0x00A8);
static_assert(offsetof(FRigUnit_FitChainToCurve, PrimaryAxis) == 0x00B8);
static_assert(offsetof(FRigUnit_FitChainToCurve, SecondaryAxis) == 0x00C4);
static_assert(offsetof(FRigUnit_FitChainToCurve, PoleVectorPosition) == 0x00D0);
static_assert(offsetof(FRigUnit_FitChainToCurve, Rotations) == 0x00E0);
static_assert(offsetof(FRigUnit_FitChainToCurve, RotationEaseType) == 0x00F0);
static_assert(offsetof(FRigUnit_FitChainToCurve, DebugSettings) == 0x0100);
static_assert(offsetof(FRigUnit_FitChainToCurve, WorkData) == 0x0160);
static_assert(offsetof(FRigUnit_ForLoopCount, Completed) == 0x0078);
static_assert(offsetof(FRigUnit_GetBoneTransform, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetBoneTransform, CachedBone) == 0x0050);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, CachedControlIndex) == 0x0050);
static_assert(offsetof(FRigUnit_GetControlTransform, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlTransform, Minimum) == 0x0050);
static_assert(offsetof(FRigUnit_GetControlTransform, Maximum) == 0x0080);
static_assert(offsetof(FRigUnit_GetControlTransform, CachedControlIndex) == 0x00B0);
static_assert(offsetof(FRigUnit_GetControlRotator, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlRotator, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlRotator, Rotator) == 0x0014);
static_assert(offsetof(FRigUnit_GetControlRotator, Minimum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlRotator, Maximum) == 0x002C);
static_assert(offsetof(FRigUnit_GetControlRotator, CachedControlIndex) == 0x0038);
static_assert(offsetof(FRigUnit_GetControlVector, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlVector, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlVector, Vector) == 0x0014);
static_assert(offsetof(FRigUnit_GetControlVector, Minimum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlVector, Maximum) == 0x002C);
static_assert(offsetof(FRigUnit_GetControlVector, CachedControlIndex) == 0x0038);
static_assert(offsetof(FRigUnit_GetControlVector2D, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlVector2D, Vector) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlVector2D, Minimum) == 0x0018);
static_assert(offsetof(FRigUnit_GetControlVector2D, Maximum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlVector2D, CachedControlIndex) == 0x0028);
static_assert(offsetof(FRigUnit_GetControlInteger, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlInteger, CachedControlIndex) == 0x001C);
static_assert(offsetof(FRigUnit_GetControlFloat, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlFloat, CachedControlIndex) == 0x001C);
static_assert(offsetof(FRigUnit_GetControlBool, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlBool, CachedControlIndex) == 0x0014);
static_assert(offsetof(FRigUnit_GetCurveValue, Curve) == 0x0008);
static_assert(offsetof(FRigUnit_GetCurveValue, CachedCurveIndex) == 0x0014);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, CachedBone) == 0x0050);
static_assert(offsetof(FRigUnit_GetJointTransform, Joint) == 0x0068);
static_assert(offsetof(FRigUnit_GetJointTransform, Type) == 0x0070);
static_assert(offsetof(FRigUnit_GetJointTransform, TransformSpace) == 0x0071);
static_assert(offsetof(FRigUnit_GetJointTransform, BaseTransform) == 0x0080);
static_assert(offsetof(FRigUnit_GetJointTransform, BaseJoint) == 0x00B0);
static_assert(offsetof(FRigUnit_GetJointTransform, Output) == 0x00C0);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedBone) == 0x0050);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedSpace) == 0x0064);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Child) == 0x0008);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Parent) == 0x0018);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, RelativeTransform) == 0x0030);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedChild) == 0x0060);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedParent) == 0x0074);
static_assert(offsetof(FRigUnit_GetSpaceTransform, Space) == 0x0008);
static_assert(offsetof(FRigUnit_GetSpaceTransform, SpaceType) == 0x0010);
static_assert(offsetof(FRigUnit_GetSpaceTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetSpaceTransform, CachedSpaceIndex) == 0x0050);
static_assert(offsetof(FRigUnit_GetTransform, Item) == 0x0008);
static_assert(offsetof(FRigUnit_GetTransform, Space) == 0x0014);
static_assert(offsetof(FRigUnit_GetTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetTransform, CachedIndex) == 0x0050);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, Item) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, Siblings) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedItem) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedSiblings) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, Parent) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, Children) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedParent) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedChildren) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetParents, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParents, Parents) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedChild) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedParents) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetParent, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParent, Parent) == 0x0014);
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedChild) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedParent) == 0x0034);
static_assert(offsetof(FRigUnit_InverseExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_ItemReplace, Item) == 0x0008);
static_assert(offsetof(FRigUnit_ItemReplace, Old) == 0x0014);
static_assert(offsetof(FRigUnit_ItemReplace, New) == 0x001C);
static_assert(offsetof(FRigUnit_ItemReplace, Result) == 0x0024);
static_assert(offsetof(FRigUnit_ItemExists, Item) == 0x0008);
static_assert(offsetof(FRigUnit_ItemExists, CachedIndex) == 0x0018);
static_assert(offsetof(FRigUnit_KalmanTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_KalmanTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_KalmanTransform, Buffer) == 0x0080);
static_assert(offsetof(FRigUnit_KalmanVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_KalmanVector, Result) == 0x0018);
static_assert(offsetof(FRigUnit_KalmanVector, Buffer) == 0x0028);
static_assert(offsetof(FRigUnit_KalmanFloat, Buffer) == 0x0018);
static_assert(offsetof(FRigUnit_MathColorLerp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathColorLerp, B) == 0x0018);
static_assert(offsetof(FRigUnit_MathColorLerp, Result) == 0x002C);
static_assert(offsetof(FRigUnit_MathColorBinaryOp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathColorBinaryOp, B) == 0x0018);
static_assert(offsetof(FRigUnit_MathColorBinaryOp, Result) == 0x0028);
static_assert(offsetof(FRigUnit_MathColorFromFloat, Result) == 0x000C);
static_assert(offsetof(FRigUnit_MathQuaternionRotationOrder, RotationOrder) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, Input) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, TwistAxis) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, Swing) == 0x0030);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, Twist) == 0x0040);
static_assert(offsetof(FRigUnit_MathQuaternionGetAxis, Quaternion) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionGetAxis, Axis) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionGetAxis, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathQuaternionRotateVector, Quaternion) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionRotateVector, Vector) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionRotateVector, Result) == 0x002C);
static_assert(offsetof(FRigUnit_MathQuaternionUnaryOp, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionUnaryOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionDot, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionDot, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSelectBool, IfTrue) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionSelectBool, IfFalse) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSelectBool, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathQuaternionNotEquals, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionNotEquals, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionEquals, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionEquals, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSlerp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionSlerp, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSlerp, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathQuaternionBinaryOp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionBinaryOp, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionBinaryOp, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathQuaternionToRotator, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToRotator, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionToEuler, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToEuler, RotationOrder) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionToEuler, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathQuaternionScale, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToAxisAndAngle, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToAxisAndAngle, Axis) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromTwoVectors, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromTwoVectors, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathQuaternionFromTwoVectors, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromRotator, Rotator) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromRotator, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromEuler, Euler) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromEuler, RotationOrder) == 0x0014);
static_assert(offsetof(FRigUnit_MathQuaternionFromEuler, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromAxisAndAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromAxisAndAngle, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, Input) == 0x0008);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, DistanceFunction) == 0x0014);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, SmoothingFunction) == 0x0015);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, WorkData) == 0x0020);
static_assert(offsetof(FMathRBFInterpolateVectorXform_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorXform_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorXform, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorXform, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorQuat_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorQuat_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorQuat, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorQuat, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorColor_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorColor_Target, Value) == 0x000C);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorColor, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorColor, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorVector_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorVector_Target, Value) == 0x000C);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorVector, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorVector, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorFloat_Target, Target) == 0x0000);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorFloat, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, Input) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, DistanceFunction) == 0x0020);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, SmoothingFunction) == 0x0021);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, TwistAxis) == 0x002C);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, WorkData) == 0x0040);
static_assert(offsetof(FMathRBFInterpolateQuatXform_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatXform_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatXform, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatXform, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatQuat_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatQuat_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatQuat, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatQuat, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatColor_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatColor_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatColor, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatColor, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatVector_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatVector_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatVector, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatVector, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatFloat_Target, Target) == 0x0000);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatFloat, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Axis) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Type) == 0x0041);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Space) == 0x0050);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, DebugColor) == 0x0084);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Location) == 0x0008);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Rotation) == 0x0014);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, RotationOrder) == 0x0020);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Scale) == 0x0024);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Transform) == 0x0030);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, EulerTransform) == 0x0060);
static_assert(offsetof(FRigUnit_MathTransformTransformVector, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformTransformVector, Location) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformTransformVector, Result) == 0x004C);
static_assert(offsetof(FRigUnit_MathTransformRotateVector, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformRotateVector, Direction) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformRotateVector, Result) == 0x004C);
static_assert(offsetof(FRigUnit_MathTransformSelectBool, IfTrue) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformSelectBool, IfFalse) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformSelectBool, Result) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformLerp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformLerp, B) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformLerp, Result) == 0x0080);
static_assert(offsetof(FRigUnit_MathTransformUnaryOp, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformUnaryOp, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformMakeAbsolute, Local) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformMakeAbsolute, Parent) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformMakeAbsolute, Global) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformMakeRelative, Global) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformMakeRelative, Parent) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformMakeRelative, Local) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformBinaryOp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformBinaryOp, B) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformBinaryOp, Result) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformToEulerTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformToEulerTransform, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformFromEulerTransform, EulerTransform) == 0x0008);
static_assert(offsetof(FRigUnit_MathTransformFromEulerTransform, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathIntersectPlane, Start) == 0x0008);
static_assert(offsetof(FRigUnit_MathIntersectPlane, Direction) == 0x0014);
static_assert(offsetof(FRigUnit_MathIntersectPlane, PlanePoint) == 0x0020);
static_assert(offsetof(FRigUnit_MathIntersectPlane, PlaneNormal) == 0x002C);
static_assert(offsetof(FRigUnit_MathIntersectPlane, Result) == 0x0038);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Axis) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Type) == 0x0015);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Space) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, DebugColor) == 0x0054);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Result) == 0x0068);
static_assert(offsetof(FRigUnit_MathVectorMakeBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Result) == 0x003C);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Tangent) == 0x0048);
static_assert(offsetof(FRigUnit_MathVectorOrthogonal, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorOrthogonal, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorParallel, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorParallel, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorAngle, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorAngle, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorMirror, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorMirror, Normal) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorMirror, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorClampLength, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorClampLength, Result) == 0x001C);
static_assert(offsetof(FRigUnit_MathVectorSetLength, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorSetLength, Result) == 0x0018);
static_assert(offsetof(FRigUnit_MathVectorUnaryOp, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorUnaryOp, Result) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorDot, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorDot, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorBinaryOp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBinaryOp, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorBinaryOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorDistance, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorDistance, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorLength, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorLengthSquared, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorSelectBool, IfTrue) == 0x000C);
static_assert(offsetof(FRigUnit_MathVectorSelectBool, IfFalse) == 0x0018);
static_assert(offsetof(FRigUnit_MathVectorSelectBool, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathVectorIsNearlyEqual, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorIsNearlyEqual, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorIsNearlyZero, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorNotEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorNotEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorRemap, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorRemap, SourceMinimum) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorRemap, SourceMaximum) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorRemap, TargetMinimum) == 0x002C);
static_assert(offsetof(FRigUnit_MathVectorRemap, TargetMaximum) == 0x0038);
static_assert(offsetof(FRigUnit_MathVectorRemap, Result) == 0x0048);
static_assert(offsetof(FRigUnit_MathVectorLerp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorLerp, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorLerp, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathVectorClamp, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorClamp, Minimum) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorClamp, Maximum) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorClamp, Result) == 0x002C);
static_assert(offsetof(FRigUnit_MathVectorScale, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorScale, Result) == 0x0018);
static_assert(offsetof(FRigUnit_MathVectorFromFloat, Result) == 0x000C);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ModifyTransforms_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, BoneToModify) == 0x0068);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, Mode) == 0x0084);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, WorkData) == 0x0088);
static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, Item) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ModifyTransforms, ItemToModify) == 0x0068);
static_assert(offsetof(FRigUnit_ModifyTransforms, Mode) == 0x0084);
static_assert(offsetof(FRigUnit_ModifyTransforms, WorkData) == 0x0088);
static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, Location) == 0x0008);
static_assert(offsetof(FRigUnit_MultiFABRIK, RootBone) == 0x0068);
static_assert(offsetof(FRigUnit_MultiFABRIK, Effectors) == 0x0070);
static_assert(offsetof(FRigUnit_MultiFABRIK, WorkData) == 0x0090);
static_assert(offsetof(FRigUnit_Contains, Name) == 0x0008);
static_assert(offsetof(FRigUnit_Contains, Search) == 0x0010);
static_assert(offsetof(FRigUnit_StartsWith, Name) == 0x0008);
static_assert(offsetof(FRigUnit_StartsWith, Start) == 0x0010);
static_assert(offsetof(FRigUnit_EndsWith, Name) == 0x0008);
static_assert(offsetof(FRigUnit_EndsWith, Ending) == 0x0010);
static_assert(offsetof(FRigUnit_NameReplace, Name) == 0x0008);
static_assert(offsetof(FRigUnit_NameReplace, Old) == 0x0010);
static_assert(offsetof(FRigUnit_NameReplace, New) == 0x0018);
static_assert(offsetof(FRigUnit_NameReplace, Result) == 0x0020);
static_assert(offsetof(FRigUnit_NameTruncate, Name) == 0x0008);
static_assert(offsetof(FRigUnit_NameTruncate, Remainder) == 0x0018);
static_assert(offsetof(FRigUnit_NameTruncate, Chopped) == 0x0020);
static_assert(offsetof(FRigUnit_NameConcat, A) == 0x0008);
static_assert(offsetof(FRigUnit_NameConcat, B) == 0x0010);
static_assert(offsetof(FRigUnit_NameConcat, Result) == 0x0018);
static_assert(offsetof(FRigUnit_NoiseVector, Position) == 0x0008);
static_assert(offsetof(FRigUnit_NoiseVector, Speed) == 0x0014);
static_assert(offsetof(FRigUnit_NoiseVector, Frequency) == 0x0020);
static_assert(offsetof(FRigUnit_NoiseVector, Result) == 0x0034);
static_assert(offsetof(FRigUnit_NoiseVector, Time) == 0x0040);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, Item) == 0x0068);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, OffsetTransform) == 0x0080);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, CachedIndex) == 0x00B8);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Subject) == 0x0068);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Parents) == 0x0078);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, InitialGlobalTransform) == 0x0090);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Transform) == 0x00D0);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedSubject) == 0x0104);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedParent) == 0x0118);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, RelativeOffset) == 0x0130);
static_assert(offsetof(FRigUnit_PointSimulation_BoneTarget, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, Color) == 0x0010);
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, WorldOffset) == 0x0020);
static_assert(offsetof(FRigUnit_PointSimulation_WorkData, Simulation) == 0x0000);
static_assert(offsetof(FRigUnit_PointSimulation_WorkData, BoneIndices) == 0x0078);
static_assert(offsetof(FRigUnit_PointSimulation, Points) == 0x0068);
static_assert(offsetof(FRigUnit_PointSimulation, Links) == 0x0078);
static_assert(offsetof(FRigUnit_PointSimulation, Forces) == 0x0088);
static_assert(offsetof(FRigUnit_PointSimulation, CollisionVolumes) == 0x0098);
static_assert(offsetof(FRigUnit_PointSimulation, IntegratorType) == 0x00AC);
static_assert(offsetof(FRigUnit_PointSimulation, BoneTargets) == 0x00B8);
static_assert(offsetof(FRigUnit_PointSimulation, PrimaryAimAxis) == 0x00CC);
static_assert(offsetof(FRigUnit_PointSimulation, SecondaryAimAxis) == 0x00D8);
static_assert(offsetof(FRigUnit_PointSimulation, DebugSettings) == 0x00F0);
static_assert(offsetof(FRigUnit_PointSimulation, Bezier) == 0x0140);
static_assert(offsetof(FRigUnit_PointSimulation, WorkData) == 0x0170);
static_assert(offsetof(FRigUnit_PrepareForExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_EndProfilingTimer, Prefix) == 0x0070);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Child) == 0x0008);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, OldParent) == 0x0018);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, NewParent) == 0x0028);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Transform) == 0x0040);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedChild) == 0x0070);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedOldParent) == 0x0084);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedNewParent) == 0x0098);
static_assert(offsetof(FRigUnit_PropagateTransform, Item) == 0x0068);
static_assert(offsetof(FRigUnit_PropagateTransform, CachedIndex) == 0x0078);
static_assert(offsetof(FRigUnit_QuaternionToAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_QuaternionToAngle, Argument) == 0x0020);
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Result) == 0x0020);
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Argument) == 0x0010);
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Axis) == 0x0020);
static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Argument) == 0x0010);
static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument0) == 0x0010);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument1) == 0x0020);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Result) == 0x0030);
static_assert(offsetof(FRigUnit_RandomVector, Result) == 0x0018);
static_assert(offsetof(FRigUnit_RandomVector, LastResult) == 0x0024);
static_assert(offsetof(FRigUnit_SendEvent, Event) == 0x0068);
static_assert(offsetof(FRigUnit_SendEvent, Item) == 0x006C);
static_assert(offsetof(FRigUnit_SequenceExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_SequenceExecution, A) == 0x0068);
static_assert(offsetof(FRigUnit_SequenceExecution, B) == 0x00C8);
static_assert(offsetof(FRigUnit_SequenceExecution, C) == 0x0128);
static_assert(offsetof(FRigUnit_SequenceExecution, D) == 0x0188);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Space) == 0x00D0);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, CachedBone) == 0x00D4);
static_assert(offsetof(FRigUnit_SetBoneRotation, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneRotation, Rotation) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneRotation, Space) == 0x0080);
static_assert(offsetof(FRigUnit_SetBoneRotation, CachedBone) == 0x008C);
static_assert(offsetof(FRigUnit_SetBoneTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneTransform, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_SetBoneTransform, Space) == 0x00D0);
static_assert(offsetof(FRigUnit_SetBoneTransform, CachedBone) == 0x00DC);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Translation) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Space) == 0x007C);
static_assert(offsetof(FRigUnit_SetBoneTranslation, CachedBone) == 0x0088);
static_assert(offsetof(FRigUnit_SetControlColor, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlColor, Color) == 0x0070);
static_assert(offsetof(FRigUnit_SetControlColor, CachedControlIndex) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlOffset, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlOffset, Offset) == 0x0070);
static_assert(offsetof(FRigUnit_SetControlOffset, Space) == 0x00A0);
static_assert(offsetof(FRigUnit_SetControlOffset, CachedControlIndex) == 0x00A4);
static_assert(offsetof(FRigUnit_SetControlTransform, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlTransform, Space) == 0x00B0);
static_assert(offsetof(FRigUnit_SetControlTransform, CachedControlIndex) == 0x00B4);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Rotator) == 0x0008);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Space) == 0x0014);
static_assert(offsetof(FRigUnit_SetMultiControlRotator, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlRotator, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlRotator, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlRotator, Rotator) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlRotator, Space) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlRotator, CachedControlIndex) == 0x0084);
static_assert(offsetof(FRigUnit_SetControlVector, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlVector, Vector) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlVector, Space) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlVector, CachedControlIndex) == 0x0084);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Vector) == 0x0008);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlVector2D, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlVector2D, Vector) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlVector2D, CachedControlIndex) == 0x007C);
static_assert(offsetof(FRigUnit_SetMultiControlInteger_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlInteger, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlInteger, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlInteger, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlInteger, CachedControlIndex) == 0x0078);
static_assert(offsetof(FRigUnit_SetMultiControlFloat_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlFloat, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlFloat, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlFloat, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlFloat, CachedControlIndex) == 0x0078);
static_assert(offsetof(FRigUnit_SetMultiControlBool_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlBool, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlBool, CachedControlIndices) == 0x0078);
static_assert(offsetof(FRigUnit_SetControlBool, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlBool, CachedControlIndex) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlVisibility, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlVisibility, Pattern) == 0x0078);
static_assert(offsetof(FRigUnit_SetControlVisibility, CachedControlIndices) == 0x0090);
static_assert(offsetof(FRigUnit_SetCurveValue, Curve) == 0x0068);
static_assert(offsetof(FRigUnit_SetCurveValue, CachedCurveIndex) == 0x0074);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Space) == 0x0070);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedBone) == 0x00B8);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedSpaceIndex) == 0x00CC);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Child) == 0x0068);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Parent) == 0x0074);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, RelativeTransform) == 0x0090);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedChild) == 0x00C8);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedParent) == 0x00DC);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, SpaceName) == 0x0068);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Space) == 0x00D0);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, CachedSpaceIndex) == 0x00D4);
static_assert(offsetof(FRigUnit_SetSpaceTransform, Space) == 0x0068);
static_assert(offsetof(FRigUnit_SetSpaceTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetSpaceTransform, SpaceType) == 0x00B0);
static_assert(offsetof(FRigUnit_SetSpaceTransform, CachedSpaceIndex) == 0x00B4);
static_assert(offsetof(FRigUnit_SetScale, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetScale, Space) == 0x0074);
static_assert(offsetof(FRigUnit_SetScale, Scale) == 0x0078);
static_assert(offsetof(FRigUnit_SetScale, CachedIndex) == 0x008C);
static_assert(offsetof(FRigUnit_SetRotation, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetRotation, Space) == 0x0074);
static_assert(offsetof(FRigUnit_SetRotation, Rotation) == 0x0080);
static_assert(offsetof(FRigUnit_SetRotation, CachedIndex) == 0x0098);
static_assert(offsetof(FRigUnit_SetTranslation, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetTranslation, Space) == 0x0074);
static_assert(offsetof(FRigUnit_SetTranslation, Translation) == 0x0078);
static_assert(offsetof(FRigUnit_SetTranslation, CachedIndex) == 0x008C);
static_assert(offsetof(FRigUnit_SetTransform, Item) == 0x0068);
static_assert(offsetof(FRigUnit_SetTransform, Space) == 0x0074);
static_assert(offsetof(FRigUnit_SetTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetTransform, CachedIndex) == 0x00B8);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, ItemSegments) == 0x0008);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, CachedItems) == 0x0018);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, Transforms) == 0x0028);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, BlendedTransforms) == 0x0038);
static_assert(offsetof(FRigUnit_SlideChainPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_SlideChainPerItem, WorkData) == 0x0080);
static_assert(offsetof(FRigUnit_SlideChain, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_SlideChain, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_SlideChain, WorkData) == 0x0080);
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, Color) == 0x0008);
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, WorldOffset) == 0x0020);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, BoneIndices) == 0x0000);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, CachedPoleVector) == 0x0010);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Transforms) == 0x0028);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Simulation) == 0x0038);
static_assert(offsetof(FRigUnit_SpringIK, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_SpringIK, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_SpringIK, PoleVector) == 0x0090);
static_assert(offsetof(FRigUnit_SpringIK, PoleVectorKind) == 0x009D);
static_assert(offsetof(FRigUnit_SpringIK, PoleVectorSpace) == 0x00A0);
static_assert(offsetof(FRigUnit_SpringIK, PrimaryAxis) == 0x00A8);
static_assert(offsetof(FRigUnit_SpringIK, SecondaryAxis) == 0x00B4);
static_assert(offsetof(FRigUnit_SpringIK, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_SpringIK, WorkData) == 0x0120);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, Buffer) == 0x0080);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, DeltaTimes) == 0x0090);
static_assert(offsetof(FRigUnit_TimeOffsetVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_TimeOffsetVector, Result) == 0x0020);
static_assert(offsetof(FRigUnit_TimeOffsetVector, Buffer) == 0x0030);
static_assert(offsetof(FRigUnit_TimeOffsetVector, DeltaTimes) == 0x0040);
static_assert(offsetof(FRigUnit_TimeOffsetFloat, Buffer) == 0x0020);
static_assert(offsetof(FRigUnit_TimeOffsetFloat, DeltaTimes) == 0x0030);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument0) == 0x0010);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument1) == 0x0040);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Result) == 0x0070);
static_assert(offsetof(FConstraintTarget, Transform) == 0x0000);
static_assert(offsetof(FConstraintTarget, Filter) == 0x0035);
static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintData) == 0x0000);
static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintDataToTargets) == 0x0010);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, Item) == 0x0068);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseTransformSpace) == 0x0074);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseTransform) == 0x0080);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseItem) == 0x00B0);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, Targets) == 0x00C0);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, WorkData) == 0x00D8);
static_assert(offsetof(FRigUnit_TransformConstraint, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseTransformSpace) == 0x0070);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseTransform) == 0x0080);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseBone) == 0x00B0);
static_assert(offsetof(FRigUnit_TransformConstraint, Targets) == 0x00B8);
static_assert(offsetof(FRigUnit_TransformConstraint, WorkData) == 0x00D0);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemRatios) == 0x0010);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemTransforms) == 0x0020);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, TwistAxis) == 0x0078);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, PoleAxis) == 0x0084);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, TwistEaseType) == 0x0090);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, WorkData) == 0x00A0);
static_assert(offsetof(FRigUnit_TwistBones, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_TwistBones, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_TwistBones, TwistAxis) == 0x0078);
static_assert(offsetof(FRigUnit_TwistBones, PoleAxis) == 0x0084);
static_assert(offsetof(FRigUnit_TwistBones, TwistEaseType) == 0x0090);
static_assert(offsetof(FRigUnit_TwistBones, WorkData) == 0x00A0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJoint) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJoint) == 0x0070);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, PoleTarget) == 0x0078);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndEffector) == 0x0090);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointFKTransform) == 0x00D0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointFKTransform) == 0x0100);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointFKTransform) == 0x0130);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointIKTransform) == 0x0170);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointIKTransform) == 0x01A0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointIKTransform) == 0x01D0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Root) == 0x0010);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PoleVector) == 0x0040);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Effector) == 0x0050);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PrimaryAxis) == 0x0080);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, SecondaryAxis) == 0x008C);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Elbow) == 0x00B0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Root) == 0x0008);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, PoleVector) == 0x0014);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Effector) == 0x0020);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Elbow) == 0x0040);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple_DebugSettings, WorldOffset) == 0x0010);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemA) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemB) == 0x0074);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, EffectorItem) == 0x0080);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, Effector) == 0x0090);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PrimaryAxis) == 0x00C0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, SecondaryAxis) == 0x00CC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVector) == 0x00DC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorKind) == 0x00E8);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorSpace) == 0x00EC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, DebugSettings) == 0x0120);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemAIndex) == 0x0160);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemBIndex) == 0x0174);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedEffectorItemIndex) == 0x0188);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedPoleVectorSpaceIndex) == 0x019C);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneA) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneB) == 0x0070);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, EffectorBone) == 0x0078);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, Effector) == 0x0080);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PrimaryAxis) == 0x00B0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, SecondaryAxis) == 0x00BC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVector) == 0x00CC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVectorKind) == 0x00D8);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVectorSpace) == 0x00DC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, DebugSettings) == 0x0100);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneAIndex) == 0x0140);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneBIndex) == 0x0154);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedEffectorBoneIndex) == 0x0168);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedPoleVectorSpaceIndex) == 0x017C);
static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument0) == 0x0008);
static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument1) == 0x0014);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument0) == 0x0008);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument1) == 0x0014);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Target) == 0x0008);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Position) == 0x0020);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Velocity) == 0x002C);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Acceleration) == 0x0038);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Point) == 0x0044);
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Space) == 0x004C);
static_assert(offsetof(FRigUnit_VisualDebugTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugTransform, BoneSpace) == 0x004C);
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Space) == 0x002C);
static_assert(offsetof(FRigUnit_VisualDebugQuat, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugQuat, BoneSpace) == 0x002C);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Value) == 0x0008);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Mode) == 0x0015);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Color) == 0x0018);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Space) == 0x0030);
static_assert(offsetof(FRigUnit_VisualDebugVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_VisualDebugVector, Mode) == 0x0015);
static_assert(offsetof(FRigUnit_VisualDebugVector, Color) == 0x0018);
static_assert(offsetof(FRigUnit_VisualDebugVector, BoneSpace) == 0x0030);
static_assert(offsetof(FRigUnit_SphereTraceWorld, Start) == 0x0008);
static_assert(offsetof(FRigUnit_SphereTraceWorld, End) == 0x0014);
static_assert(offsetof(FRigUnit_SphereTraceWorld, Channel) == 0x0020);
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitLocation) == 0x002C);
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitNormal) == 0x0038);
static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Rotation) == 0x0010);
static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Global) == 0x0020);
static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, Rotation) == 0x0010);
static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, World) == 0x0020);
static_assert(offsetof(FRigUnit_ToRigSpace_Location, Location) == 0x0008);
static_assert(offsetof(FRigUnit_ToRigSpace_Location, Global) == 0x0014);
static_assert(offsetof(FRigUnit_ToWorldSpace_Location, Location) == 0x0008);
static_assert(offsetof(FRigUnit_ToWorldSpace_Location, World) == 0x0014);
static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Global) == 0x0040);
static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, World) == 0x0040);
