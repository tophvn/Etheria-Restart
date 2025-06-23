
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UAnimSequencerInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     NotifyName                                                  OFFSET(getStruct<T>, {0x38, 8, 0, 0})
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     NotifyName                                                  OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // [0x2860360] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	// void K2_StartProfilingTimer();                                                                                           // [0x2860340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	// FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // [0x2860060] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	// float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);                                     // [0x285ff40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// FTransform K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree); // [0x285fca0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	// float K2_EndProfilingTimer(bool bLog, FString LogPrefix);                                                                // [0x285fbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	// float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // [0x285f8c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	// FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo); // [0x285f7b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	// float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve); // [0x285f350] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	// float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // [0x285f130] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPlayMontageCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnCompleted                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBlendOut                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterrupted                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyBegin                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyEnd                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                   // [0x28616d0] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x28615e0] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x2861510] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x2861440] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x28612b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencerAnimationSupport : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x02A0 (0x000760 - 0x000A00)
class FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2560;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00B8 (0x000010 - 0x0000C8)
class FAnimNode_SkeletalControlBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FComponentSpacePoseLink)                   ComponentPose                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     ActualAlpha                                                 OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x38, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x88, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x00B0 (0x000038 - 0x0000E8)
class FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bResetPlayTimeWhenBlendSpaceChanges                         OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(float)                                     StartPosition                                               OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(class UBlendSpaceBase*)                    BlendSpace                                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UBlendSpaceBase*)                    PreviousBlendSpace                                          OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x00D8 (0x0000E8 - 0x0001C0)
class FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x160, 4, 0, 0})
	SMember(FName)                                     SourceSocketName                                            OFFSET(getStruct<T>, {0x164, 8, 0, 0})
	SMember(FName)                                     PivotSocketName                                             OFFSET(getStruct<T>, {0x16C, 8, 0, 0})
	SMember(FVector)                                   LookAtLocation                                              OFFSET(getStruct<T>, {0x174, 12, 0, 0})
	SMember(FVector)                                   SocketAxis                                                  OFFSET(getStruct<T>, {0x180, 12, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x18C, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x0048 (0x000000 - 0x000048)
class FAnimPhysConstraintSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(AnimPhysLinearConstraintType)              LinearXLimitType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(AnimPhysLinearConstraintType)              LinearYLimitType                                            OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(AnimPhysLinearConstraintType)              LinearZLimitType                                            OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FVector)                                   LinearAxesMin                                               OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   LinearAxesMax                                               OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(AnimPhysAngularConstraintType)             AngularConstraintType                                       OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(AnimPhysTwistAxis)                         TwistAxis                                                   OFFSET(get<T>, {0x1D, 1, 0, 0})
	CMember(AnimPhysTwistAxis)                         AngularTargetAxis                                           OFFSET(get<T>, {0x1E, 1, 0, 0})
	DMember(float)                                     ConeAngle                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   AngularLimitsMin                                            OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FVector)                                   AngularLimitsMax                                            OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   AngularTarget                                               OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0024 (0x000000 - 0x000024)
class FAnimPhysSphericalLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   SphereLocalOffset                                           OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     LimitRadius                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(ESphericalLimitType)                       LimitType                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0040 (0x000000 - 0x000040)
class FAnimPhysPlanarLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FTransform)                                PlaneTransform                                              OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RotationRetargetingInfo
/// Size: 0x0130 (0x000000 - 0x000130)
class FRotationRetargetingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FTransform)                                Source                                                      OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                Target                                                      OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	CMember(ERotationComponent)                        RotationComponent                                           OFFSET(get<T>, {0x70, 1, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	DMember(bool)                                      bUseAbsoluteAngle                                           OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     SourceMinimum                                               OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(EEasingFuncType)                           EasingType                                                  OFFSET(get<T>, {0x94, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        CustomCurve                                                 OFFSET(getStruct<T>, {0x98, 136, 0, 0})
	DMember(bool)                                      bFlipEasing                                                 OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(float)                                     EasingWeight                                                OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bClamp                                                      OFFSET(get<bool>, {0x128, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0378 (0x0000C8 - 0x000440)
class FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	DMember(float)                                     LinearDampingOverride                                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     AngularDampingOverride                                      OFFSET(get<float>, {0xCC, 4, 0, 0})
	SMember(FBoneReference)                            RelativeSpaceBone                                           OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FBoneReference)                            BoundBone                                                   OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FBoneReference)                            ChainEnd                                                    OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FVector)                                   BoxExtents                                                  OFFSET(getStruct<T>, {0x160, 12, 0, 0})
	SMember(FVector)                                   LocalJointOffset                                            OFFSET(getStruct<T>, {0x16C, 12, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	DMember(float)                                     LinearSpringConstant                                        OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     AngularSpringConstant                                       OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     WindScale                                                   OFFSET(get<float>, {0x190, 4, 0, 0})
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x194, 12, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x1A0, 12, 0, 0})
	SMember(FVector)                                   ComponentAppliedLinearAccClamp                              OFFSET(getStruct<T>, {0x1AC, 12, 0, 0})
	DMember(float)                                     AngularBiasOverride                                         OFFSET(get<float>, {0x1B8, 4, 0, 0})
	DMember(int32_t)                                   NumSolverIterationsPreUpdate                                OFFSET(get<int32_t>, {0x1BC, 4, 0, 0})
	DMember(int32_t)                                   NumSolverIterationsPostUpdate                               OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})
	SMember(FAnimPhysConstraintSetup)                  ConstraintSetup                                             OFFSET(getStruct<T>, {0x1C4, 72, 0, 0})
	CMember(TArray<FAnimPhysSphericalLimit>)           SphericalLimits                                             OFFSET(get<T>, {0x210, 16, 0, 0})
	DMember(float)                                     SphereCollisionRadius                                       OFFSET(get<float>, {0x220, 4, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x224, 12, 0, 0})
	CMember(TArray<FAnimPhysPlanarLimit>)              PlanarLimits                                                OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(AnimPhysCollisionType)                     CollisionType                                               OFFSET(get<T>, {0x240, 1, 0, 0})
	CMember(AnimPhysSimSpaceType)                      SimulationSpace                                             OFFSET(get<T>, {0x241, 1, 0, 0})
	DMember(bool)                                      bUseSphericalLimits                                         OFFSET(get<bool>, {0x244, 1, 1, 0})
	DMember(bool)                                      bUsePlanarLimit                                             OFFSET(get<bool>, {0x244, 1, 1, 1})
	DMember(bool)                                      bDoUpdate                                                   OFFSET(get<bool>, {0x244, 1, 1, 2})
	DMember(bool)                                      bDoEval                                                     OFFSET(get<bool>, {0x244, 1, 1, 3})
	DMember(bool)                                      bOverrideLinearDamping                                      OFFSET(get<bool>, {0x244, 1, 1, 4})
	DMember(bool)                                      bOverrideAngularBias                                        OFFSET(get<bool>, {0x244, 1, 1, 5})
	DMember(bool)                                      bOverrideAngularDamping                                     OFFSET(get<bool>, {0x244, 1, 1, 6})
	DMember(bool)                                      bEnableWind                                                 OFFSET(get<bool>, {0x244, 1, 1, 7})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0x245, 1, 1, 1})
	DMember(bool)                                      bLinearSpring                                               OFFSET(get<bool>, {0x245, 1, 1, 2})
	DMember(bool)                                      bAngularSpring                                              OFFSET(get<bool>, {0x245, 1, 1, 3})
	DMember(bool)                                      bChain                                                      OFFSET(get<bool>, {0x245, 1, 1, 4})
	SMember(FRotationRetargetingInfo)                  RetargetingSettings                                         OFFSET(getStruct<T>, {0x250, 304, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00B8 (0x000010 - 0x0000C8)
class FAnimNode_ApplyAdditive : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FPoseLink)                                 Base                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 Additive                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x40, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0xC4, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0xC5, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x0028 (0x000000 - 0x000028)
class FAngularRangeLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   LimitMin                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   LimitMax                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FBoneReference)                            Bone                                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
class FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FAngularRangeLimit>)                AngularRangeLimits                                          OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FVector>)                           AngularOffsets                                              OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x0024 (0x000000 - 0x000024)
class FBlendBoneByChannelEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bBlendTranslation                                           OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bBlendRotation                                              OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bBlendScale                                                 OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0058 (0x000010 - 0x000068)
class FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPoseLink)                                 A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FBlendBoneByChannelEntry>)          BoneDefinitions                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            TransformsSpace                                             OFFSET(get<T>, {0x60, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0088 (0x000010 - 0x000098)
class FAnimNode_BlendListBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FPoseLink>)                         BlendPose                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             BlendTime                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(EBlendListTransitionType)                  TransitionType                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(EAlphaBlendOption)                         BlendType                                                   OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(bool)                                      bResetChildOnActivation                                     OFFSET(get<bool>, {0x32, 1, 0, 0})
	CMember(class UCurveFloat*)                        CustomBlendCurve                                            OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UBlendProfile*)                      BlendProfile                                                OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x0008 (0x000098 - 0x0000A0)
class FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bActiveValue                                                OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x0018 (0x000098 - 0x0000B0)
class FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<int32_t>)                           EnumToPoseIndex                                             OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(char)                                      ActiveEnumValue                                             OFFSET(get<char>, {0xA8, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x0008 (0x000098 - 0x0000A0)
class FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(int32_t)                                   ActiveChildIndex                                            OFFSET(get<int32_t>, {0x98, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(float)                                     NormalizedTime                                              OFFSET(get<float>, {0xE8, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0050 (0x0000C8 - 0x000118)
class FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(class UCurveFloat*)                        DrivingCurve                                                OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     RangeMin                                                    OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     RangeMax                                                    OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     RemappedMin                                                 OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     RemappedMax                                                 OFFSET(get<float>, {0xF0, 4, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0xF4, 8, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xFC, 16, 0, 0})
	CMember(EDrivenDestinationMode)                    DestinationMode                                             OFFSET(get<T>, {0x10C, 1, 0, 0})
	CMember(EDrivenBoneModificationMode)               ModificationMode                                            OFFSET(get<T>, {0x10D, 1, 0, 0})
	CMember(TEnumAsByte<EComponentType>)               SourceComponent                                             OFFSET(get<T>, {0x10E, 1, 0, 0})
	DMember(bool)                                      bUseRange                                                   OFFSET(get<bool>, {0x10F, 1, 1, 0})
	DMember(bool)                                      bAffectTargetTranslationX                                   OFFSET(get<bool>, {0x10F, 1, 1, 1})
	DMember(bool)                                      bAffectTargetTranslationY                                   OFFSET(get<bool>, {0x10F, 1, 1, 2})
	DMember(bool)                                      bAffectTargetTranslationZ                                   OFFSET(get<bool>, {0x10F, 1, 1, 3})
	DMember(bool)                                      bAffectTargetRotationX                                      OFFSET(get<bool>, {0x10F, 1, 1, 4})
	DMember(bool)                                      bAffectTargetRotationY                                      OFFSET(get<bool>, {0x10F, 1, 1, 5})
	DMember(bool)                                      bAffectTargetRotationZ                                      OFFSET(get<bool>, {0x10F, 1, 1, 6})
	DMember(bool)                                      bAffectTargetScaleX                                         OFFSET(get<bool>, {0x10F, 1, 1, 7})
	DMember(bool)                                      bAffectTargetScaleY                                         OFFSET(get<bool>, {0x110, 1, 1, 0})
	DMember(bool)                                      bAffectTargetScaleZ                                         OFFSET(get<bool>, {0x110, 1, 1, 1})
};

/// Struct /Script/AnimGraphRuntime.SocketReference
/// Size: 0x0040 (0x000000 - 0x000040)
class FSocketReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.BoneSocketTarget
/// Size: 0x0060 (0x000000 - 0x000060)
class FBoneSocketTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bUseSocket                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FBoneReference)                            BoneReference                                               OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FSocketReference)                          SocketReference                                             OFFSET(getStruct<T>, {0x20, 64, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CCDIK
/// Size: 0x00B8 (0x0000C8 - 0x000180)
class FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FVector)                                   EffectorLocation                                            OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorLocationSpace                                       OFFSET(get<T>, {0xD4, 1, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0xE0, 96, 0, 0})
	SMember(FBoneReference)                            TipBone                                                     OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FBoneReference)                            RootBone                                                    OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x164, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0x168, 1, 0, 0})
	DMember(bool)                                      bEnableRotationLimit                                        OFFSET(get<bool>, {0x169, 1, 0, 0})
	CMember(TArray<float>)                             RotationLimitPerJoints                                      OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x001C (0x000000 - 0x00001C)
class FConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EConstraintOffsetOption)                   OffsetOption                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(ETransformConstraintType)                  TransformType                                               OFFSET(get<T>, {0x11, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      PerAxis                                                     OFFSET(getStruct<T>, {0x12, 3, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0040 (0x0000C8 - 0x000108)
class FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FConstraint>)                       ConstraintSetup                                             OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<float>)                             ConstraintWeights                                           OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
class FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bCopyTranslation                                            OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bCopyRotation                                               OFFSET(get<bool>, {0xE9, 1, 0, 0})
	DMember(bool)                                      bCopyScale                                                  OFFSET(get<bool>, {0xEA, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            ControlSpace                                                OFFSET(get<T>, {0xEB, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x0030 (0x0000C8 - 0x0000F8)
class FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bCopyTranslation                                            OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bCopyRotation                                               OFFSET(get<bool>, {0xE9, 1, 0, 0})
	DMember(bool)                                      bCopyScale                                                  OFFSET(get<bool>, {0xEA, 1, 0, 0})
	CMember(CopyBoneDeltaMode)                         CopyMode                                                    OFFSET(get<T>, {0xEB, 1, 0, 0})
	DMember(float)                                     TranslationMultiplier                                       OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     RotationMultiplier                                          OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0xF4, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x01C8 (0x000010 - 0x0001D8)
class FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(TWeakObjectPtr<class USkeletalMeshComponent*>) SourceMeshComponent                                     OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bUseAttachedParent                                          OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bCopyCurves                                                 OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bCopyCustomAttributes                                       OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bUseMeshPose                                                OFFSET(get<bool>, {0x1A, 1, 1, 0})
	SMember(FName)                                     RootBoneToCopy                                              OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0030 (0x000010 - 0x000040)
class FAnimNode_CurveSource : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     SourceBinding                                               OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   CurveSource                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x00C8 (0x0000C8 - 0x000190)
class FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0x100, 96, 0, 0})
	SMember(FBoneReference)                            TipBone                                                     OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FBoneReference)                            RootBone                                                    OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x184, 4, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorTransformSpace                                      OFFSET(get<T>, {0x188, 1, 0, 0})
	CMember(TEnumAsByte<EBoneRotationSource>)          EffectorRotationSource                                      OFFSET(get<T>, {0x189, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0058 (0x0000C8 - 0x000120)
class FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FBoneReference)                            RightHandFK                                                 OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FBoneReference)                            LeftHandFK                                                  OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FBoneReference)                            RightHandIK                                                 OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FBoneReference)                            LeftHandIK                                                  OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    IKBonesToMove                                               OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(float)                                     HandFKWeight                                                OFFSET(get<float>, {0x118, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00B0 (0x000010 - 0x0000C0)
class FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FPoseLink>)                         BlendPoses                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FInputBlendPose>)                   LayerSetup                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             BlendWeights                                                OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bMeshSpaceRotationBlend                                     OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bMeshSpaceScaleBlend                                        OFFSET(get<bool>, {0x51, 1, 0, 0})
	CMember(TEnumAsByte<ECurveBlendOption>)            CurveBlendOption                                            OFFSET(get<T>, {0x52, 1, 0, 0})
	DMember(bool)                                      bBlendRootMotionBasedOnRootBone                             OFFSET(get<bool>, {0x53, 1, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(TArray<FPerBoneBlendWeight>)               PerBoneBlendWeights                                         OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FGuid)                                     SkeletonGuid                                                OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FGuid)                                     VirtualBoneGuid                                             OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x002C (0x000000 - 0x00002C)
class FAnimLegIKDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     MinRotationAngle                                            OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        FootBoneForwardAxis                                         OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(bool)                                      bEnableRotationLimit                                        OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bEnableKneeTwistCorrection                                  OFFSET(get<bool>, {0x2B, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x0030 (0x0000C8 - 0x0000F8)
class FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(float)                                     ReachPrecision                                              OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	CMember(TArray<FAnimLegIKDefinition>)              LegsDefinition                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FAnimLegIKData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0038 (0x000000 - 0x000038)
class FIKChain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x003C (0x000000 - 0x00003C)
class FIKChainLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x00E8 (0x0000C8 - 0x0001B0)
class FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FBoneSocketTarget)                         LookAtTarget                                                OFFSET(getStruct<T>, {0xE0, 96, 0, 0})
	SMember(FVector)                                   LookAtLocation                                              OFFSET(getStruct<T>, {0x140, 12, 0, 0})
	SMember(FAxis)                                     LookAt_Axis                                                 OFFSET(getStruct<T>, {0x14C, 16, 0, 0})
	DMember(bool)                                      bUseLookUpAxis                                              OFFSET(get<bool>, {0x15C, 1, 0, 0})
	CMember(TEnumAsByte<EInterpolationBlend>)          InterpolationType                                           OFFSET(get<T>, {0x15D, 1, 0, 0})
	SMember(FAxis)                                     LookUp_Axis                                                 OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	DMember(float)                                     LookAtClamp                                                 OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     InterpolationTime                                           OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     InterpolationTriggerThreashold                              OFFSET(get<float>, {0x178, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0028 (0x000010 - 0x000038)
class FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPoseLink)                                 Base                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 Additive                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bMeshSpaceAdditive                                          OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0040 (0x0000C8 - 0x000108)
class FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xE4, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0xF0, 12, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        TranslationMode                                             OFFSET(get<T>, {0xFC, 1, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        RotationMode                                                OFFSET(get<T>, {0xFD, 1, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        ScaleMode                                                   OFFSET(get<T>, {0xFE, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            TranslationSpace                                            OFFSET(get<T>, {0xFF, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            RotationSpace                                               OFFSET(get<T>, {0x100, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            ScaleSpace                                                  OFFSET(get<T>, {0x101, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x0048 (0x000010 - 0x000058)
class FAnimNode_ModifyCurve : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             CurveValues                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FName>)                             CurveNames                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(EModifyCurveApplyMode)                     ApplyMode                                                   OFFSET(get<T>, {0x54, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0040 (0x000010 - 0x000050)
class FAnimNode_MultiWayBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FPoseLink>)                         Poses                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             DesiredAlphas                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bAdditiveNode                                               OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bNormalizeAlpha                                             OFFSET(get<bool>, {0x49, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0038 (0x0000C8 - 0x000100)
class FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FBoneReference)                            BoneToObserve                                               OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            DisplaySpace                                                OFFSET(get<T>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bRelativeToRefPose                                          OFFSET(get<bool>, {0xD9, 1, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0xDC, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xE8, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0xF4, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0048 (0x000038 - 0x000080)
class FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UPoseAsset*)                         PoseAsset                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x0020 (0x000080 - 0x0000A0)
class FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0x90, 1, 0, 0})
	CMember(class UCurveFloat*)                        CustomCurve                                                 OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x0018 (0x000080 - 0x000098)
class FAnimNode_PoseByName : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     PoseName                                                    OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	DMember(float)                                     PoseWeight                                                  OFFSET(get<float>, {0x88, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0018 (0x000000 - 0x000018)
class FPoseDriverTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   TargetTranslation                                           OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FPoseDriverTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FPoseDriverTransform>)              BoneTransforms                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     TargetScale                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(ERBFFunctionType)                          FunctionType                                                OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(bool)                                      bApplyCustomCurve                                           OFFSET(get<bool>, {0x22, 1, 0, 0})
	SMember(FRichCurve)                                CustomCurve                                                 OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FName)                                     DrivenName                                                  OFFSET(getStruct<T>, {0xA8, 8, 0, 0})
	DMember(bool)                                      bIsHidden                                                   OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x002C (0x000000 - 0x00002C)
class FRBFParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(int32_t)                                   TargetDimensions                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(ERBFSolverType)                            SolverType                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bAutomaticRadius                                            OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(ERBFFunctionType)                          Function                                                    OFFSET(get<T>, {0xD, 1, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0xE, 1, 0, 0})
	CMember(TEnumAsByte<EBoneAxis>)                    TwistAxis                                                   OFFSET(get<T>, {0xF, 1, 0, 0})
	DMember(float)                                     WeightThreshold                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(ERBFNormalizeMethod)                       NormalizeMethod                                             OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FVector)                                   MedianReference                                             OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(float)                                     MedianMin                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MedianMax                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x00B8 (0x000080 - 0x000138)
class FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    SourceBones                                                 OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    OnlyDriveBones                                              OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FPoseDriverTarget>)                 PoseTargets                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FBoneReference)                            EvalSpaceBone                                               OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FRBFParams)                                RBFParams                                                   OFFSET(getStruct<T>, {0x100, 44, 0, 0})
	CMember(EPoseDriverSource)                         DriveSource                                                 OFFSET(get<T>, {0x12C, 1, 0, 0})
	CMember(EPoseDriverOutput)                         DriveOutput                                                 OFFSET(get<T>, {0x12D, 1, 0, 0})
	DMember(bool)                                      bOnlyDriveSelectedBones                                     OFFSET(get<bool>, {0x12E, 1, 1, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x130, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x0080 (0x000010 - 0x000090)
class FAnimNode_PoseSnapshot : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     SnapshotName                                                OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FPoseSnapshot)                             Snapshot                                                    OFFSET(getStruct<T>, {0x18, 56, 0, 0})
	CMember(ESnapshotSourceMode)                       Mode                                                        OFFSET(get<T>, {0x50, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0050 (0x000000 - 0x000050)
class FRandomPlayerSequenceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UAnimSequence*)                      Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     ChanceToPlay                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MinLoopCount                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxLoopCount                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     MinPlayRate                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxPlayRate                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FAlphaBlend)                               BlendIn                                                     OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0068 (0x000010 - 0x000078)
class FAnimNode_RandomPlayer : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FRandomPlayerSequenceEntry>)        Entries                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bShuffleMode                                                OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0000 (0x000010 - 0x000010)
class FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0008 (0x000010 - 0x000018)
class FAnimNode_RefPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TEnumAsByte<ERefPoseType>)                 RefPoseType                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ResetRoot
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Struct /Script/AnimGraphRuntime.SimSpaceSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FSimSpaceSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     MasterAlpha                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     VelocityScaleZ                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxLinearVelocity                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxAngularVelocity                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxLinearAcceleration                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxAngularAcceleration                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ExternalLinearDrag                                          OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector)                                   ExternalLinearDragV                                         OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FVector)                                   ExternalLinearVelocity                                      OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FVector)                                   ExternalAngularVelocity                                     OFFSET(getStruct<T>, {0x34, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody
/// Size: 0x0588 (0x0000C8 - 0x000650)
class FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(class UPhysicsAsset*)                      OverridePhysicsAsset                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FVector)                                   OverrideWorldGravity                                        OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x174, 12, 0, 0})
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x180, 12, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x18C, 12, 0, 0})
	SMember(FVector)                                   ComponentAppliedLinearAccClamp                              OFFSET(getStruct<T>, {0x198, 12, 0, 0})
	SMember(FSimSpaceSettings)                         SimSpaceSettings                                            OFFSET(getStruct<T>, {0x1A4, 64, 0, 0})
	DMember(float)                                     CachedBoundsScale                                           OFFSET(get<float>, {0x1E4, 4, 0, 0})
	SMember(FBoneReference)                            BaseBoneRef                                                 OFFSET(getStruct<T>, {0x1E8, 16, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(ESimulationSpace)                          SimulationSpace                                             OFFSET(get<T>, {0x1F9, 1, 0, 0})
	DMember(bool)                                      bForceDisableCollisionBetweenConstraintBodies               OFFSET(get<bool>, {0x1FA, 1, 0, 0})
	DMember(bool)                                      bEnableWorldGeometry                                        OFFSET(get<bool>, {0x1FC, 1, 1, 0})
	DMember(bool)                                      bOverrideWorldGravity                                       OFFSET(get<bool>, {0x1FC, 1, 1, 1})
	DMember(bool)                                      bTransferBoneVelocities                                     OFFSET(get<bool>, {0x1FC, 1, 1, 2})
	DMember(bool)                                      bFreezeIncomingPoseOnStart                                  OFFSET(get<bool>, {0x1FC, 1, 1, 3})
	DMember(bool)                                      bClampLinearTranslationLimitToRefPose                       OFFSET(get<bool>, {0x1FC, 1, 1, 4})
	DMember(float)                                     WorldSpaceMinimumScale                                      OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     EvaluationResetTime                                         OFFSET(get<float>, {0x204, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x0090 (0x000010 - 0x0000A0)
class FAnimNode_RotateRootBone : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     Pitch                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      PitchScaleBiasClamp                                         OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	SMember(FInputScaleBiasClamp)                      YawScaleBiasClamp                                           OFFSET(getStruct<T>, {0x58, 48, 0, 0})
	SMember(FRotator)                                  MeshToComponent                                             OFFSET(getStruct<T>, {0x88, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
class FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0xE8, 4, 0, 0})
	CMember(TEnumAsByte<EBoneAxis>)                    RotationAxisToRefer                                         OFFSET(get<T>, {0xEC, 1, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 OFFSET(get<bool>, {0xED, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x00A8 (0x0000E8 - 0x000190)
class FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0xFC, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x108, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x150, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x158, 48, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x18C, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x18D, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0068 (0x000010 - 0x000078)
class FAnimNode_ScaleChainLength : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FPoseLink)                                 InputPose                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     DefaultChainLength                                          OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FBoneReference)                            ChainStartBone                                              OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	SMember(FBoneReference)                            ChainEndBone                                                OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x44, 12, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	CMember(EScaleChainInitialLength)                  ChainInitialLength                                          OFFSET(get<T>, {0x60, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0018 (0x000038 - 0x000050)
class FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UAnimSequenceBase*)                  Sequence                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(float)                                     ExplicitTime                                                OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bShouldLoop                                                 OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bTeleportToExplicitTime                                     OFFSET(get<bool>, {0x45, 1, 0, 0})
	CMember(TEnumAsByte<ESequenceEvalReinit>)          ReinitializationBehavior                                    OFFSET(get<T>, {0x46, 1, 0, 0})
	DMember(float)                                     StartPosition                                               OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0038 (0x000010 - 0x000048)
class FAnimNode_Slot : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bAlwaysUpdateSourcePose                                     OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x01A8 (0x0000C8 - 0x000270)
class FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FBoneReference)                            StartBone                                                   OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FBoneReference)                            EndBone                                                     OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(ESplineBoneAxis)                           BoneAxis                                                    OFFSET(get<T>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bAutoCalculateSpline                                        OFFSET(get<bool>, {0xE9, 1, 0, 0})
	DMember(int32_t)                                   PointCount                                                  OFFSET(get<int32_t>, {0xEC, 4, 0, 0})
	CMember(TArray<FTransform>)                        ControlPoints                                               OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     TwistStart                                                  OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     TwistEnd                                                    OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FAlphaBlend)                               TwistBlend                                                  OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Stretch                                                     OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x144, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0014 (0x000000 - 0x000014)
class FSplineIKCachedBoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FBoneReference)                            Bone                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   RefSkeletonIndex                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x0060 (0x0000C8 - 0x000128)
class FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FBoneReference)                            SpringBone                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(float)                                     MaxDisplacement                                             OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     SpringStiffness                                             OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     SpringDamping                                               OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     ErrorResetThresh                                            OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(bool)                                      bLimitDisplacement                                          OFFSET(get<bool>, {0x124, 1, 1, 0})
	DMember(bool)                                      bTranslateX                                                 OFFSET(get<bool>, {0x124, 1, 1, 1})
	DMember(bool)                                      bTranslateY                                                 OFFSET(get<bool>, {0x124, 1, 1, 2})
	DMember(bool)                                      bTranslateZ                                                 OFFSET(get<bool>, {0x124, 1, 1, 3})
	DMember(bool)                                      bRotateX                                                    OFFSET(get<bool>, {0x124, 1, 1, 4})
	DMember(bool)                                      bRotateY                                                    OFFSET(get<bool>, {0x124, 1, 1, 5})
	DMember(bool)                                      bRotateZ                                                    OFFSET(get<bool>, {0x124, 1, 1, 6})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_StateResult
/// Size: 0x0000 (0x000030 - 0x000030)
class FAnimNode_StateResult : public FAnimNode_Root
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/AnimGraphRuntime.RotationLimit
/// Size: 0x0018 (0x000000 - 0x000018)
class FRotationLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   LimitMin                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   LimitMax                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x0198 (0x0000C8 - 0x000260)
class FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FBoneReference)                            TrailBone                                                   OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	DMember(int32_t)                                   ChainLength                                                 OFFSET(get<int32_t>, {0x110, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        ChainBoneAxis                                               OFFSET(get<T>, {0x114, 1, 0, 0})
	DMember(bool)                                      bInvertChainBoneAxis                                        OFFSET(get<bool>, {0x115, 1, 1, 0})
	DMember(bool)                                      bLimitStretch                                               OFFSET(get<bool>, {0x115, 1, 1, 1})
	DMember(bool)                                      bLimitRotation                                              OFFSET(get<bool>, {0x115, 1, 1, 2})
	DMember(bool)                                      bUsePlanarLimit                                             OFFSET(get<bool>, {0x115, 1, 1, 3})
	DMember(bool)                                      bActorSpaceFakeVel                                          OFFSET(get<bool>, {0x115, 1, 1, 4})
	DMember(bool)                                      bReorientParentToChild                                      OFFSET(get<bool>, {0x115, 1, 1, 5})
	DMember(float)                                     MaxDeltaTime                                                OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     RelaxationSpeedScale                                        OFFSET(get<float>, {0x11C, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        TrailRelaxationSpeed                                        OFFSET(getStruct<T>, {0x120, 136, 0, 0})
	SMember(FInputScaleBiasClamp)                      RelaxationSpeedScaleInputProcessor                          OFFSET(getStruct<T>, {0x1A8, 48, 0, 0})
	CMember(TArray<FRotationLimit>)                    RotationLimits                                              OFFSET(get<T>, {0x1D8, 16, 0, 0})
	CMember(TArray<FVector>)                           RotationOffsets                                             OFFSET(get<T>, {0x1E8, 16, 0, 0})
	CMember(TArray<FAnimPhysPlanarLimit>)              PlanarLimits                                                OFFSET(get<T>, {0x1F8, 16, 0, 0})
	DMember(float)                                     StretchLimit                                                OFFSET(get<float>, {0x208, 4, 0, 0})
	SMember(FVector)                                   FakeVelocity                                                OFFSET(getStruct<T>, {0x20C, 12, 0, 0})
	SMember(FBoneReference)                            BaseJoint                                                   OFFSET(getStruct<T>, {0x218, 16, 0, 0})
	DMember(float)                                     LastBoneRotationAnimAlphaBlend                              OFFSET(get<float>, {0x228, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0020 (0x000000 - 0x000020)
class FReferenceBoneFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FBoneReference)                            Bone                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FAxis)                                     Axis                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x0070 (0x0000C8 - 0x000138)
class FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FReferenceBoneFrame)                       BaseFrame                                                   OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
	SMember(FReferenceBoneFrame)                       TwistFrame                                                  OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	SMember(FAxis)                                     TwistPlaneNormalAxis                                        OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(float)                                     RangeMax                                                    OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     RemappedMin                                                 OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     RemappedMax                                                 OFFSET(get<float>, {0x120, 4, 0, 0})
	SMember(FAnimCurveParam)                           Curve                                                       OFFSET(getStruct<T>, {0x124, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x0118 (0x0000C8 - 0x0001E0)
class FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FBoneReference)                            IKBone                                                      OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(float)                                     StartStretchRatio                                           OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     MaxStretchScale                                             OFFSET(get<float>, {0xDC, 4, 0, 0})
	SMember(FVector)                                   EffectorLocation                                            OFFSET(getStruct<T>, {0xE0, 12, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0xF0, 96, 0, 0})
	SMember(FVector)                                   JointTargetLocation                                         OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	SMember(FBoneSocketTarget)                         JointTarget                                                 OFFSET(getStruct<T>, {0x160, 96, 0, 0})
	SMember(FAxis)                                     TwistAxis                                                   OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorLocationSpace                                       OFFSET(get<T>, {0x1D0, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            JointTargetLocationSpace                                    OFFSET(get<T>, {0x1D1, 1, 0, 0})
	DMember(bool)                                      bAllowStretching                                            OFFSET(get<bool>, {0x1D2, 1, 1, 0})
	DMember(bool)                                      bTakeRotationFromEffectorSpace                              OFFSET(get<bool>, {0x1D2, 1, 1, 1})
	DMember(bool)                                      bMaintainEffectorRelRot                                     OFFSET(get<bool>, {0x1D2, 1, 1, 2})
	DMember(bool)                                      bAllowTwist                                                 OFFSET(get<bool>, {0x1D2, 1, 1, 3})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00B8 (0x000010 - 0x0000C8)
class FAnimNode_TwoWayBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FPoseLink)                                 A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x31, 1, 1, 0})
	DMember(bool)                                      bResetChildOnActivation                                     OFFSET(get<bool>, {0x31, 1, 1, 3})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x40, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x90, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PositionHistory
/// Size: 0x0030 (0x000000 - 0x000030)
class FPositionHistory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Range                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RBFEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FRBFEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RBFTarget
/// Size: 0x0090 (0x000010 - 0x0000A0)
class FRBFTarget : public FRBFEntry
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     ScaleFactor                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bApplyCustomCurve                                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRichCurve)                                CustomCurve                                                 OFFSET(getStruct<T>, {0x18, 128, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0x98, 1, 0, 0})
	CMember(ERBFFunctionType)                          FunctionType                                                OFFSET(get<T>, {0x99, 1, 0, 0})
};

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x02
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner                                                       = 0,
	ESphericalLimitType__Outer                                                       = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x05
enum class AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component                                                  = 0,
	AnimPhysSimSpaceType__Actor                                                      = 1,
	AnimPhysSimSpaceType__World                                                      = 2,
	AnimPhysSimSpaceType__RootRelative                                               = 3,
	AnimPhysSimSpaceType__BoneRelative                                               = 4
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x02
enum class AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free                                               = 0,
	AnimPhysLinearConstraintType__Limited                                            = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x02
enum class AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular                                           = 0,
	AnimPhysAngularConstraintType__Cone                                              = 1
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x02
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend                                          = 0,
	EBlendListTransitionType__Inertialization                                        = 1
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x03
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone                                                     = 0,
	EDrivenDestinationMode__MorphTarget                                              = 1,
	EDrivenDestinationMode__MaterialParameter                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x03
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput                                          = 0,
	EDrivenBoneModificationMode__ReplaceComponent                                    = 1,
	EDrivenBoneModificationMode__AddToRefPose                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x02
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None                                                    = 0,
	EConstraintOffsetOption__Offset_RefPose                                          = 1
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x02
enum class CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate                                                    = 0,
	CopyBoneDeltaMode__Copy                                                          = 1
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x07
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
/// Size: 0x03
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                                                                       = 0,
	BMM_Replace                                                                      = 1,
	BMM_Additive                                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x05
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add                                                       = 0,
	EModifyCurveApplyMode__Scale                                                     = 1,
	EModifyCurveApplyMode__Blend                                                     = 2,
	EModifyCurveApplyMode__WeightedMovingAverage                                     = 3,
	EModifyCurveApplyMode__RemapCurve                                                = 4
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x02
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses                                                    = 0,
	EPoseDriverOutput__DriveCurves                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x02
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation                                                      = 0,
	EPoseDriverSource__Translation                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x03
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist                                                   = 0,
	EPoseDriverType__SwingOnly                                                       = 1,
	EPoseDriverType__Translation                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x02
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot                                               = 0,
	ESnapshotSourceMode__SnapshotPin                                                 = 1
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x02
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                                                                   = 0,
	EIT_Additive                                                                     = 1
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x03
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace                                                 = 0,
	ESimulationSpace__WorldSpace                                                     = 1,
	ESimulationSpace__BaseBoneSpace                                                  = 2
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x03
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue                                = 0,
	EScaleChainInitialLength__Distance                                               = 1,
	EScaleChainInitialLength__ChainLength                                            = 2
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x03
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset                                                     = 0,
	ESequenceEvalReinit__StartPosition                                               = 1,
	ESequenceEvalReinit__ExplicitTime                                                = 2
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x04
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None                                                            = 0,
	ESplineBoneAxis__X                                                               = 1,
	ESplineBoneAxis__Y                                                               = 2,
	ESplineBoneAxis__Z                                                               = 3
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x06
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
/// Size: 0x15
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
/// Size: 0x04
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne                                       = 0,
	ERBFNormalizeMethod__AlwaysNormalize                                             = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian                                       = 2,
	ERBFNormalizeMethod__NoNormalization                                             = 3
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x05
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean                                                    = 0,
	ERBFDistanceMethod__Quaternion                                                   = 1,
	ERBFDistanceMethod__SwingAngle                                                   = 2,
	ERBFDistanceMethod__TwistAngle                                                   = 3,
	ERBFDistanceMethod__DefaultMethod                                                = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x06
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
/// Size: 0x02
enum class ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive                                                         = 0,
	ERBFSolverType__Interpolative                                                    = 1
};

