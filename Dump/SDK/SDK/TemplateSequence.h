
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ATemplateSequenceActor;
class UCameraAnimationSequence;
class USequenceCameraShake;
class USequenceCameraShakeCameraStandIn;
class USequenceCameraShakeSequencePlayer;
class UTemplateSequence;
class UTemplateSequencePlayer;
class UTemplateSequenceSection;
class UTemplateSequenceSystem;
class UTemplateSequenceTrack;

#pragma pack(pop)


static_assert(sizeof(UTemplateSequence) == 0x0108); // 264 bytes (0x000060 - 0x000108)
static_assert(sizeof(UCameraAnimationSequence) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(USequenceCameraShakeCameraStandIn) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(USequenceCameraShake) == 0x00D0); // 208 bytes (0x000098 - 0x0000D0)
static_assert(sizeof(USequenceCameraShakeSequencePlayer) == 0x05D8); // 1496 bytes (0x000028 - 0x0005D8)
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ATemplateSequenceActor) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(UTemplateSequencePlayer) == 0x0688); // 1672 bytes (0x000680 - 0x000688)
static_assert(sizeof(UTemplateSequenceSection) == 0x0168); // 360 bytes (0x000160 - 0x000168)
static_assert(sizeof(UTemplateSequenceSystem) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(sizeof(UTemplateSequenceTrack) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x0060);
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x0068);
static_assert(offsetof(UTemplateSequence, BoundPreviewActor) == 0x0090);
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x00B8);
static_assert(offsetof(USequenceCameraShake, Sequence) == 0x0098);
static_assert(offsetof(USequenceCameraShake, Player) == 0x00B8);
static_assert(offsetof(USequenceCameraShake, CameraStandIn) == 0x00C0);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, BoundObjectOverride) == 0x0480);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, Sequence) == 0x0488);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, RootTemplateInstance) == 0x0490);
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x0000);
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x0228);
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x0240);
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x0248);
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x0260);
