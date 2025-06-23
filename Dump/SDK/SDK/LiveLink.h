
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LiveLinkInterface.h"
#include "TimeManagement.h"

#pragma pack(push, 0x1)

class ULiveLinkAnimationAxisSwitchPreProcessor;
class ULiveLinkAnimationFrameInterpolationProcessor;
class ULiveLinkAnimationRoleToTransform;
class ULiveLinkAnimationVirtualSubject;
class ULiveLinkBasicFrameInterpolationProcessor;
class ULiveLinkBlueprintLibrary;
class ULiveLinkBlueprintVirtualSubject;
class ULiveLinkComponent;
class ULiveLinkDrivenComponent;
class ULiveLinkInstance;
class ULiveLinkMessageBusFinder;
class ULiveLinkMessageBusSourceFactory;
class ULiveLinkMessageBusSourceSettings;
class ULiveLinkPreset;
class ULiveLinkRemapAsset;
class ULiveLinkRetargetAsset;
class ULiveLinkSettings;
class ULiveLinkTimeSynchronizationSource;
class ULiveLinkTimecodeProvider;
class ULiveLinkTransformAxisSwitchPreProcessor;
class ULiveLinkVirtualSubjectSourceSettings;

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x01 (1 bytes)
enum class ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X                                                                 = 0,
	ELiveLinkAxis__Y                                                                 = 1,
	ELiveLinkAxis__Z                                                                 = 2,
	ELiveLinkAxis__XNeg                                                              = 3,
	ELiveLinkAxis__YNeg                                                              = 4,
	ELiveLinkAxis__ZNeg                                                              = 5
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x04 (4 bytes)
enum class ELiveLinkTimecodeProviderEvaluationType : uint32_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp                                    = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest                                 = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest                                  = 2
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkBasicFrameInterpolationProcessor) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(ULiveLinkAnimationRoleToTransform) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULiveLinkAnimationVirtualSubject) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(ULiveLinkBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkBlueprintVirtualSubject) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(sizeof(ULiveLinkComponent) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(ULiveLinkDrivenComponent) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(ULiveLinkInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(ULiveLinkMessageBusFinder) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(ULiveLinkMessageBusSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkMessageBusSourceSettings) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(ULiveLinkPreset) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(ULiveLinkRetargetAsset) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkRemapAsset) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(FLiveLinkRoleProjectSetting) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(ULiveLinkSettings) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(ULiveLinkTimecodeProvider) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(ULiveLinkTimeSynchronizationSource) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(ULiveLinkVirtualSubjectSourceSettings) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(FAnimNode_LiveLinkPose) == 0x0050); // 80 bytes (0x000010 - 0x000050)
static_assert(sizeof(FLiveLinkInstanceProxy) == 0x07B0); // 1968 bytes (0x000760 - 0x0007B0)
static_assert(sizeof(FProviderPollResult) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLiveLinkRetargetAssetReference) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(ULiveLinkAnimationRoleToTransform, BoneName) == 0x0028);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OrientationAxisX) == 0x0028);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OrientationAxisY) == 0x0029);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OrientationAxisZ) == 0x002A);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, TranslationAxisX) == 0x002B);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, TranslationAxisY) == 0x002C);
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, TranslationAxisZ) == 0x002D);
static_assert(offsetof(ULiveLinkDrivenComponent, SubjectName) == 0x00B0);
static_assert(offsetof(ULiveLinkDrivenComponent, ActorTransformBone) == 0x00B8);
static_assert(offsetof(ULiveLinkInstance, CurrentRetargetAsset) == 0x02B8);
static_assert(offsetof(ULiveLinkPreset, Sources) == 0x0028);
static_assert(offsetof(ULiveLinkPreset, Subjects) == 0x0038);
static_assert(offsetof(FLiveLinkRoleProjectSetting, Role) == 0x0000);
static_assert(offsetof(FLiveLinkRoleProjectSetting, SettingClass) == 0x0008);
static_assert(offsetof(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor) == 0x0010);
static_assert(offsetof(FLiveLinkRoleProjectSetting, FramePreProcessors) == 0x0018);
static_assert(offsetof(ULiveLinkSettings, DefaultRoleSettings) == 0x0028);
static_assert(offsetof(ULiveLinkSettings, FrameInterpolationProcessor) == 0x0038);
static_assert(offsetof(ULiveLinkSettings, DefaultLiveLinkPreset) == 0x0040);
static_assert(offsetof(ULiveLinkSettings, PresetSaveDir) == 0x0068);
static_assert(offsetof(ULiveLinkSettings, DefaultMessageBusSourceMode) == 0x007C);
static_assert(offsetof(ULiveLinkSettings, ValidColor) == 0x00A8);
static_assert(offsetof(ULiveLinkSettings, InvalidColor) == 0x00B8);
static_assert(offsetof(ULiveLinkTimecodeProvider, SubjectKey) == 0x0030);
static_assert(offsetof(ULiveLinkTimecodeProvider, Evaluation) == 0x0048);
static_assert(offsetof(ULiveLinkTimecodeProvider, OverrideFrameRate) == 0x0050);
static_assert(offsetof(ULiveLinkTimeSynchronizationSource, SubjectName) == 0x0030);
static_assert(offsetof(ULiveLinkVirtualSubjectSourceSettings, SourceName) == 0x00A0);
static_assert(offsetof(FAnimNode_LiveLinkPose, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_LiveLinkPose, LiveLinkSubjectName) == 0x0020);
static_assert(offsetof(FAnimNode_LiveLinkPose, RetargetAsset) == 0x0028);
static_assert(offsetof(FAnimNode_LiveLinkPose, CurrentRetargetAsset) == 0x0030);
static_assert(offsetof(FLiveLinkInstanceProxy, PoseNode) == 0x0760);
static_assert(offsetof(FProviderPollResult, Name) == 0x0010);
static_assert(offsetof(FProviderPollResult, MachineName) == 0x0020);
