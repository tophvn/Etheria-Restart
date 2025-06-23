
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00A8 (0x000060 - 0x000108)
class UTemplateSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UMovieScene*)                        MovieScene                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             BoundActorClass                                             OFFSET(get<T>, {0x68, 40, 0, 0})
	CMember(TWeakObjectPtr<class AActor*>)             BoundPreviewActor                                           OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TMap<FGuid, FName>)                        BoundActorComponents                                        OFFSET(get<T>, {0xB8, 80, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x000108 - 0x000108)
class UCameraAnimationSequence : public UTemplateSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0048 (0x000028 - 0x000070)
class USequenceCameraShakeCameraStandIn : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     FieldOfView                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/TemplateSequence.SequenceCameraShake
/// Size: 0x0038 (0x000098 - 0x0000D0)
class USequenceCameraShake : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UCameraAnimationSequence*)           Sequence                                                    OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     RandomSegmentDuration                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bRandomSegment                                              OFFSET(get<bool>, {0xB4, 1, 0, 0})
	CMember(class USequenceCameraShakeSequencePlayer*) Player                                                      OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class USequenceCameraShakeCameraStandIn*)  CameraStandIn                                               OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x05B0 (0x000028 - 0x0005D8)
class USequenceCameraShakeSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	CMember(class UObject*)                            BoundObjectOverride                                         OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UMovieSceneSequence*)                Sequence                                                    OFFSET(get<T>, {0x488, 8, 0, 0})
	SMember(FMovieSceneRootEvaluationTemplateInstance) RootTemplateInstance                                        OFFSET(getStruct<T>, {0x490, 232, 0, 0})
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
class FTemplateSequenceBindingOverrideData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<class UObject*>)            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bOverridesDefault                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0050 (0x000220 - 0x000270)
class ATemplateSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0x228, 20, 0, 0})
	CMember(class UTemplateSequencePlayer*)            SequencePlayer                                              OFFSET(get<T>, {0x240, 8, 0, 0})
	SMember(FSoftObjectPath)                           TemplateSequence                                            OFFSET(getStruct<T>, {0x248, 24, 0, 0})
	SMember(FTemplateSequenceBindingOverrideData)      BindingOverride                                             OFFSET(getStruct<T>, {0x260, 12, 0, 0})


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                   // [0x1387070] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor);                                                                                    // [0x1386fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                                 // [0x1386fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                      // [0x1386f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                                  // [0x1386f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x000680 - 0x000688)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1672;

public:


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0x1386dd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0008 (0x000160 - 0x000168)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

