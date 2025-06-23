
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Struct /Script/ActorSequence.ActorSequenceObjectReference
/// Size: 0x0028 (0x000000 - 0x000028)
class FActorSequenceObjectReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EActorSequenceObjectReferenceType)         Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FGuid)                                     ActorId                                                     OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FString)                                   PathToComponent                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
class FActorSequenceObjectReferences : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FActorSequenceObjectReference>)     Array                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FActorSequenceObjectReferenceMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGuid>)                             BindingIds                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FActorSequenceObjectReferences>)    References                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Class /Script/ActorSequence.ActorSequence
/// Size: 0x0028 (0x000060 - 0x000088)
class UActorSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UMovieScene*)                        MovieScene                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FActorSequenceObjectReferenceMap)          ObjectReferences                                            OFFSET(getStruct<T>, {0x68, 32, 0, 0})
};

/// Class /Script/ActorSequence.ActorSequenceComponent
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UActorSequenceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0xB0, 20, 0, 0})
	CMember(class UActorSequence*)                     Sequence                                                    OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UActorSequencePlayer*)               SequencePlayer                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/ActorSequence.ActorSequencePlayer
/// Size: 0x0000 (0x000680 - 0x000680)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
};

/// Enum /Script/ActorSequence.EActorSequenceObjectReferenceType
/// Size: 0x03
enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor                                  = 0,
	EActorSequenceObjectReferenceType__ExternalActor                                 = 1,
	EActorSequenceObjectReferenceType__Component                                     = 2
};

