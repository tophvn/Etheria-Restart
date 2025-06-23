
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

class UActorSequence;
class UActorSequenceComponent;
class UActorSequencePlayer;

/// Enum /Script/ActorSequence.EActorSequenceObjectReferenceType
/// Size: 0x01 (1 bytes)
enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor                                  = 0,
	EActorSequenceObjectReferenceType__ExternalActor                                 = 1,
	EActorSequenceObjectReferenceType__Component                                     = 2
};

#pragma pack(pop)


static_assert(sizeof(FActorSequenceObjectReference) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FActorSequenceObjectReferences) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FActorSequenceObjectReferenceMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UActorSequence) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(UActorSequenceComponent) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(UActorSequencePlayer) == 0x0680); // 1664 bytes (0x000680 - 0x000680)
static_assert(offsetof(FActorSequenceObjectReference, Type) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReference, ActorId) == 0x0004);
static_assert(offsetof(FActorSequenceObjectReference, PathToComponent) == 0x0018);
static_assert(offsetof(FActorSequenceObjectReferences, Array) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReferenceMap, BindingIds) == 0x0000);
static_assert(offsetof(FActorSequenceObjectReferenceMap, References) == 0x0010);
static_assert(offsetof(UActorSequence, MovieScene) == 0x0060);
static_assert(offsetof(UActorSequence, ObjectReferences) == 0x0068);
static_assert(offsetof(UActorSequenceComponent, PlaybackSettings) == 0x00B0);
static_assert(offsetof(UActorSequenceComponent, Sequence) == 0x00C8);
static_assert(offsetof(UActorSequenceComponent, SequencePlayer) == 0x00D0);
