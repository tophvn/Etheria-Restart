
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

class UAnimSharingAdditiveInstance;
class UAnimSharingInstance;
class UAnimSharingStateInstance;
class UAnimSharingTransitionInstance;
class UAnimationSharingManager;
class UAnimationSharingSetup;
class UAnimationSharingStateProcessor;

#pragma pack(pop)


static_assert(sizeof(UAnimSharingStateInstance) == 0x02E0); // 736 bytes (0x0002B8 - 0x0002E0)
static_assert(sizeof(UAnimSharingTransitionInstance) == 0x02D0); // 720 bytes (0x0002B8 - 0x0002D0)
static_assert(sizeof(UAnimSharingAdditiveInstance) == 0x02D0); // 720 bytes (0x0002B8 - 0x0002D0)
static_assert(sizeof(UAnimSharingInstance) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UAnimationSharingManager) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(FAnimationSetup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAnimationStateEntry) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPerSkeletonAnimationSharingSetup) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAnimationSharingScalability) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAnimationSharingSetup) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UAnimationSharingStateProcessor) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FTickAnimationSharingFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(UAnimSharingStateInstance, AnimationToPlay) == 0x02B8);
static_assert(offsetof(UAnimSharingStateInstance, Instance) == 0x02D0);
static_assert(offsetof(UAnimSharingTransitionInstance, FromComponent) == 0x02B8);
static_assert(offsetof(UAnimSharingTransitionInstance, ToComponent) == 0x02C0);
static_assert(offsetof(UAnimSharingAdditiveInstance, BaseComponent) == 0x02B8);
static_assert(offsetof(UAnimSharingAdditiveInstance, AdditiveAnimation) == 0x02C0);
static_assert(offsetof(UAnimSharingInstance, RegisteredActors) == 0x0028);
static_assert(offsetof(UAnimSharingInstance, StateProcessor) == 0x0088);
static_assert(offsetof(UAnimSharingInstance, UsedAnimationSequences) == 0x00C8);
static_assert(offsetof(UAnimSharingInstance, StateEnum) == 0x00E8);
static_assert(offsetof(UAnimSharingInstance, SharingActor) == 0x00F0);
static_assert(offsetof(UAnimationSharingManager, Skeletons) == 0x0028);
static_assert(offsetof(UAnimationSharingManager, PerSkeletonData) == 0x0038);
static_assert(offsetof(FAnimationSetup, AnimSequence) == 0x0000);
static_assert(offsetof(FAnimationSetup, AnimBlueprint) == 0x0008);
static_assert(offsetof(FAnimationSetup, NumRandomizedInstances) == 0x0010);
static_assert(offsetof(FAnimationSetup, Enabled) == 0x0014);
static_assert(offsetof(FAnimationStateEntry, AnimationSetups) == 0x0008);
static_assert(offsetof(FAnimationStateEntry, MaximumNumberOfConcurrentInstances) == 0x0024);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, Skeleton) == 0x0000);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, SkeletalMesh) == 0x0008);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, BlendAnimBlueprint) == 0x0010);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AdditiveAnimBlueprint) == 0x0018);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, StateProcessorClass) == 0x0020);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AnimationStates) == 0x0028);
static_assert(offsetof(FAnimationSharingScalability, UseBlendTransitions) == 0x0000);
static_assert(offsetof(FAnimationSharingScalability, BlendSignificanceValue) == 0x0004);
static_assert(offsetof(FAnimationSharingScalability, MaximumNumberConcurrentBlends) == 0x0008);
static_assert(offsetof(FAnimationSharingScalability, TickSignificanceValue) == 0x000C);
static_assert(offsetof(UAnimationSharingSetup, SkeletonSetups) == 0x0028);
static_assert(offsetof(UAnimationSharingSetup, ScalabilitySettings) == 0x0038);
static_assert(offsetof(UAnimationSharingStateProcessor, AnimationStateEnum) == 0x0028);
