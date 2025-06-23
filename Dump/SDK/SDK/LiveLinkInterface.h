
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class ULiveLinkAnimationRole;
class ULiveLinkBasicRole;
class ULiveLinkCameraRole;
class ULiveLinkController;
class ULiveLinkCurveRemapSettings;
class ULiveLinkFrameInterpolationProcessor;
class ULiveLinkFramePreProcessor;
class ULiveLinkFrameTranslator;
class ULiveLinkLightRole;
class ULiveLinkRole;
class ULiveLinkSourceFactory;
class ULiveLinkSourceSettings;
class ULiveLinkSubjectSettings;
class ULiveLinkTransformRole;
class ULiveLinkVirtualSubject;

/// Enum /Script/LiveLinkInterface.ELiveLinkCameraProjectionMode
/// Size: 0x01 (1 bytes)
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	ELiveLinkCameraProjectionMode__Perspective                                       = 0,
	ELiveLinkCameraProjectionMode__Orthographic                                      = 1
};

/// Enum /Script/LiveLinkInterface.ELiveLinkSourceMode
/// Size: 0x01 (1 bytes)
enum class ELiveLinkSourceMode : uint8_t
{
	ELiveLinkSourceMode__Latest                                                      = 0,
	ELiveLinkSourceMode__EngineTime                                                  = 1,
	ELiveLinkSourceMode__Timecode                                                    = 2
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkFrameInterpolationProcessor) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkFrameTranslator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLiveLinkSubjectName) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(ULiveLinkVirtualSubject) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(ULiveLinkFramePreProcessor) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLiveLinkSourceBufferManagementSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(ULiveLinkSourceSettings) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(ULiveLinkRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkBasicRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkAnimationRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkTransformRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkCameraRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkController) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLiveLinkCurveConversionSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(ULiveLinkCurveRemapSettings) == 0x00F0); // 240 bytes (0x0000A0 - 0x0000F0)
static_assert(sizeof(ULiveLinkLightRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkSubjectSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FLiveLinkSubjectKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLiveLinkSubjectPreset) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLiveLinkBaseBlueprintData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSubjectFrameHandle) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FLiveLinkSourceHandle) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLiveLinkTransform) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCachedSubjectFrame) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(FSubjectMetadata) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FLiveLinkWorldTime) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkMetaData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FLiveLinkBaseFrameData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FLiveLinkAnimationFrameData) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(FLiveLinkBaseStaticData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkSkeletonStaticData) == 0x0030); // 48 bytes (0x000010 - 0x000030)
static_assert(sizeof(FLiveLinkBasicBlueprintData) == 0x00B8); // 184 bytes (0x000008 - 0x0000B8)
static_assert(sizeof(FLiveLinkTransformStaticData) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FLiveLinkCameraStaticData) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FLiveLinkTransformFrameData) == 0x00D0); // 208 bytes (0x0000A0 - 0x0000D0)
static_assert(sizeof(FLiveLinkCameraFrameData) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FLiveLinkCameraBlueprintData) == 0x0120); // 288 bytes (0x000008 - 0x000120)
static_assert(sizeof(FLiveLinkLightStaticData) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FLiveLinkLightFrameData) == 0x0100); // 256 bytes (0x0000D0 - 0x000100)
static_assert(sizeof(FLiveLinkLightBlueprintData) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FLiveLinkSourcePreset) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLiveLinkRefSkeleton) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLiveLinkSubjectRepresentation) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkInterpolationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLiveLinkTimeSynchronizationSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLiveLinkSourceDebugInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkTransformBlueprintData) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FLiveLinkCurveElement) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLiveLinkFrameData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FLiveLinkFrameRate) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FLiveLinkTimeCode_Base_DEPRECATED) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkTimeCode) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FLiveLinkTime) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FLiveLinkSubjectName, Name) == 0x0000);
static_assert(offsetof(ULiveLinkVirtualSubject, Role) == 0x0030);
static_assert(offsetof(ULiveLinkVirtualSubject, Subjects) == 0x0038);
static_assert(offsetof(ULiveLinkVirtualSubject, FrameTranslators) == 0x0048);
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, DetectedFrameRate) == 0x001C);
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, SourceTimecodeFrameRate) == 0x0028);
static_assert(offsetof(ULiveLinkSourceSettings, Mode) == 0x0028);
static_assert(offsetof(ULiveLinkSourceSettings, BufferSettings) == 0x0030);
static_assert(offsetof(ULiveLinkSourceSettings, ConnectionString) == 0x0088);
static_assert(offsetof(ULiveLinkSourceSettings, Factory) == 0x0098);
static_assert(offsetof(FLiveLinkCurveConversionSettings, CurveConversionAssetMap) == 0x0000);
static_assert(offsetof(ULiveLinkCurveRemapSettings, CurveConversionSettings) == 0x00A0);
static_assert(offsetof(ULiveLinkSubjectSettings, PreProcessors) == 0x0028);
static_assert(offsetof(ULiveLinkSubjectSettings, InterpolationProcessor) == 0x0038);
static_assert(offsetof(ULiveLinkSubjectSettings, Translators) == 0x0040);
static_assert(offsetof(ULiveLinkSubjectSettings, Role) == 0x0050);
static_assert(offsetof(ULiveLinkSubjectSettings, FrameRate) == 0x0058);
static_assert(offsetof(FLiveLinkSubjectKey, Source) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectKey, SubjectName) == 0x0010);
static_assert(offsetof(FLiveLinkSubjectPreset, Key) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectPreset, Role) == 0x0018);
static_assert(offsetof(FLiveLinkSubjectPreset, Settings) == 0x0020);
static_assert(offsetof(FLiveLinkSubjectPreset, VirtualSubject) == 0x0028);
static_assert(offsetof(FSubjectMetadata, StringMetadata) == 0x0000);
static_assert(offsetof(FSubjectMetadata, SceneTimecode) == 0x0050);
static_assert(offsetof(FSubjectMetadata, SceneFramerate) == 0x0064);
static_assert(offsetof(FLiveLinkMetaData, StringMetadata) == 0x0000);
static_assert(offsetof(FLiveLinkMetaData, SceneTime) == 0x0050);
static_assert(offsetof(FLiveLinkBaseFrameData, WorldTime) == 0x0000);
static_assert(offsetof(FLiveLinkBaseFrameData, MetaData) == 0x0010);
static_assert(offsetof(FLiveLinkBaseFrameData, PropertyValues) == 0x0070);
static_assert(offsetof(FLiveLinkAnimationFrameData, Transforms) == 0x00A0);
static_assert(offsetof(FLiveLinkBaseStaticData, PropertyNames) == 0x0000);
static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneNames) == 0x0010);
static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneParents) == 0x0020);
static_assert(offsetof(FLiveLinkBasicBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkBasicBlueprintData, FrameData) == 0x0018);
static_assert(offsetof(FLiveLinkTransformFrameData, Transform) == 0x00A0);
static_assert(offsetof(FLiveLinkCameraFrameData, ProjectionMode) == 0x00E4);
static_assert(offsetof(FLiveLinkCameraBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkCameraBlueprintData, FrameData) == 0x0030);
static_assert(offsetof(FLiveLinkLightFrameData, LightColor) == 0x00D8);
static_assert(offsetof(FLiveLinkLightBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkLightBlueprintData, FrameData) == 0x0030);
static_assert(offsetof(FLiveLinkSourcePreset, Guid) == 0x0000);
static_assert(offsetof(FLiveLinkSourcePreset, Settings) == 0x0010);
static_assert(offsetof(FLiveLinkSourcePreset, SourceType) == 0x0018);
static_assert(offsetof(FLiveLinkRefSkeleton, BoneNames) == 0x0000);
static_assert(offsetof(FLiveLinkRefSkeleton, BoneParents) == 0x0010);
static_assert(offsetof(FLiveLinkSubjectRepresentation, Subject) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectRepresentation, Role) == 0x0008);
static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameRate) == 0x0000);
static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameOffset) == 0x0008);
static_assert(offsetof(FLiveLinkSourceDebugInfo, SubjectName) == 0x0000);
static_assert(offsetof(FLiveLinkTransformBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkTransformBlueprintData, FrameData) == 0x0020);
static_assert(offsetof(FLiveLinkCurveElement, CurveName) == 0x0000);
static_assert(offsetof(FLiveLinkFrameData, Transforms) == 0x0000);
static_assert(offsetof(FLiveLinkFrameData, CurveElements) == 0x0010);
static_assert(offsetof(FLiveLinkFrameData, WorldTime) == 0x0020);
static_assert(offsetof(FLiveLinkFrameData, MetaData) == 0x0030);
static_assert(offsetof(FLiveLinkTimeCode_Base_DEPRECATED, FrameRate) == 0x0008);
static_assert(offsetof(FLiveLinkTime, SceneTime) == 0x0008);
