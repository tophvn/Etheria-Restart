
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MediaAssets.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ALevelSequenceActor;
class ALevelSequenceMediaController;
class UAnimSequenceLevelSequenceLink;
class UDefaultLevelSequenceInstanceData;
class ULegacyLevelSequenceDirectorBlueprint;
class ULevelSequence;
class ULevelSequenceAnimSequenceLink;
class ULevelSequenceBurnIn;
class ULevelSequenceBurnInInitSettings;
class ULevelSequenceBurnInOptions;
class ULevelSequenceDirector;
class ULevelSequenceMetaData;
class ULevelSequencePlayer;

#pragma pack(pop)


static_assert(sizeof(FLevelSequenceObjectReferenceMap) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FLevelSequenceBindingReference) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLevelSequenceBindingReferenceArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLevelSequenceBindingReferences) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FLevelSequenceObject) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(ULevelSequence) == 0x01C8); // 456 bytes (0x000060 - 0x0001C8)
static_assert(sizeof(FLevelSequenceCameraSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(ALevelSequenceActor) == 0x02A0); // 672 bytes (0x000220 - 0x0002A0)
static_assert(sizeof(ULevelSequenceDirector) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAnimSequenceLevelSequenceLink) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UDefaultLevelSequenceInstanceData) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(ULevelSequenceMetaData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULevelSequenceBurnInInitSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULevelSequenceBurnInOptions) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FLevelSequenceAnimSequenceLinkItem) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(ULevelSequenceAnimSequenceLink) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FLevelSequenceSnapshotSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLevelSequencePlayerSnapshot) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(ULevelSequenceBurnIn) == 0x0340); // 832 bytes (0x000280 - 0x000340)
static_assert(sizeof(ULegacyLevelSequenceDirectorBlueprint) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(ULevelSequencePlayer) == 0x07B0); // 1968 bytes (0x000680 - 0x0007B0)
static_assert(sizeof(ALevelSequenceMediaController) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(FBoundActorProxy) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLevelSequenceLegacyObjectReference) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FLevelSequenceBindingReference, PackageName) == 0x0000);
static_assert(offsetof(FLevelSequenceBindingReference, ExternalObjectPath) == 0x0010);
static_assert(offsetof(FLevelSequenceBindingReference, ObjectPath) == 0x0028);
static_assert(offsetof(FLevelSequenceBindingReferenceArray, References) == 0x0000);
static_assert(offsetof(FLevelSequenceBindingReferences, BindingIdToReferences) == 0x0000);
static_assert(offsetof(FLevelSequenceObject, ObjectOrOwner) == 0x0000);
static_assert(offsetof(FLevelSequenceObject, ComponentName) == 0x0020);
static_assert(offsetof(FLevelSequenceObject, CachedComponent) == 0x0030);
static_assert(offsetof(ULevelSequence, MovieScene) == 0x0068);
static_assert(offsetof(ULevelSequence, ObjectReferences) == 0x0070);
static_assert(offsetof(ULevelSequence, BindingReferences) == 0x00C0);
static_assert(offsetof(ULevelSequence, PossessedObjects) == 0x0160);
static_assert(offsetof(ULevelSequence, DirectorClass) == 0x01B0);
static_assert(offsetof(ULevelSequence, AssetUserData) == 0x01B8);
static_assert(offsetof(FLevelSequenceCameraSettings, AspectRatioAxisConstraint) == 0x0001);
static_assert(offsetof(ALevelSequenceActor, PlaybackSettings) == 0x0230);
static_assert(offsetof(ALevelSequenceActor, SequencePlayer) == 0x0248);
static_assert(offsetof(ALevelSequenceActor, LevelSequence) == 0x0250);
static_assert(offsetof(ALevelSequenceActor, CameraSettings) == 0x0268);
static_assert(offsetof(ALevelSequenceActor, BurnInOptions) == 0x0270);
static_assert(offsetof(ALevelSequenceActor, BindingOverrides) == 0x0278);
static_assert(offsetof(ALevelSequenceActor, DefaultInstanceData) == 0x0288);
static_assert(offsetof(ALevelSequenceActor, BurnInInstance) == 0x0290);
static_assert(offsetof(ULevelSequenceDirector, Player) == 0x0028);
static_assert(offsetof(UAnimSequenceLevelSequenceLink, SkelTrackGuid) == 0x0028);
static_assert(offsetof(UAnimSequenceLevelSequenceLink, PathToLevelSequence) == 0x0038);
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOriginActor) == 0x0030);
static_assert(offsetof(UDefaultLevelSequenceInstanceData, TransformOrigin) == 0x0040);
static_assert(offsetof(ULevelSequenceBurnInOptions, BurnInClass) == 0x0030);
static_assert(offsetof(ULevelSequenceBurnInOptions, Settings) == 0x0048);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid) == 0x0000);
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence) == 0x0010);
static_assert(offsetof(ULevelSequenceAnimSequenceLink, AnimSequenceLinks) == 0x0028);
static_assert(offsetof(FLevelSequenceSnapshotSettings, FrameRate) == 0x0004);
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterName) == 0x0000);
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterTime) == 0x0010);
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTime) == 0x0020);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotName) == 0x0030);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotLocalTime) == 0x0040);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotSourceTime) == 0x0050);
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTimecode) == 0x0060);
static_assert(offsetof(FLevelSequencePlayerSnapshot, CameraComponent) == 0x0070);
static_assert(offsetof(FLevelSequencePlayerSnapshot, Settings) == 0x0098);
static_assert(offsetof(FLevelSequencePlayerSnapshot, ActiveShot) == 0x00A8);
static_assert(offsetof(FLevelSequencePlayerSnapshot, ShotID) == 0x00B0);
static_assert(offsetof(ULevelSequenceBurnIn, FrameInformation) == 0x0280);
static_assert(offsetof(ULevelSequenceBurnIn, LevelSequenceActor) == 0x0338);
static_assert(offsetof(ALevelSequenceMediaController, Sequence) == 0x0228);
static_assert(offsetof(ALevelSequenceMediaController, MediaComponent) == 0x0230);
