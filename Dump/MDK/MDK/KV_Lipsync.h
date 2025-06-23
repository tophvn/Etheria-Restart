
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LipSyncRuntime
/// dependency: MovieScene

/// Class /Script/KV_Lipsync.AnimBP_LipSync
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimBP_LipSync : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KV_Lipsync.AnimBP_LipSync.SetVisemeScores
	// void SetVisemeScores(TArray<float>& Scores);                                                                             // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/KV_Lipsync.AnimBP_LipSync.SetLipSyncWeight
	// void SetLipSyncWeight(float Weight);                                                                                     // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/KV_Lipsync.AnimBP_LipSync.SetLaughterScore
	// void SetLaughterScore(float Score);                                                                                      // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/KV_Lipsync.AnimBP_LipSync.SetAnimWeights
	// void SetAnimWeights(TArray<float>& Weights);                                                                             // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/KV_Lipsync.KV_LipSyncFilterBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UKV_LipSyncFilterBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KV_Lipsync.KV_LipSyncFilterBase.Resample
	// FLipSyncFrame Resample(class ULipSyncFrameSequence* Sequence, int32_t Index);                                            // [0x1170ec0] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/KV_Lipsync.LipSyncPlayState
/// Size: 0x0028 (0x000000 - 0x000028)
class FLipSyncPlayState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class ULipSyncFrameSequence*)              LipSyncSequence                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     DesiredBlendWeight                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     StateTimeOffset                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   StateFrameOffset                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(ELipSyncPlayState)                         StateCode                                                   OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(class UKV_LipSyncFilterBase*)              StateFilter                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Class /Script/KV_Lipsync.KV_LipSyncPlayComponent
/// Size: 0x0038 (0x0001F8 - 0x000230)
class UKV_LipSyncPlayComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(float)                                     FrameInterval                                               OFFSET(get<float>, {0x200, 4, 0, 0})
	CMember(TArray<FLipSyncPlayState>)                 LipSyncPlayState                                            OFFSET(get<T>, {0x208, 16, 0, 0})
	CMember(class USkeletalMeshComponent*)             MeshComponent                                               OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(class UAnimInstance*)                      CachedAnimInstance                                          OFFSET(get<T>, {0x220, 8, 0, 0})
	DMember(bool)                                      bCachedSyncable                                             OFFSET(get<bool>, {0x228, 1, 0, 0})


	/// Functions
	// Function /Script/KV_Lipsync.KV_LipSyncPlayComponent.StopSequence
	// void StopSequence(class ULipSyncFrameSequence* Sequence);                                                                // [0x1171180] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Lipsync.KV_LipSyncPlayComponent.SetPlaybackOffset
	// void SetPlaybackOffset(class ULipSyncFrameSequence* Sequence, float Offset);                                             // [0x11710b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Lipsync.KV_LipSyncPlayComponent.SetDesiredLipSyncWeight
	// void SetDesiredLipSyncWeight(class ULipSyncFrameSequence* Sequence, float DesiredWeight);                                // [0x1170fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Lipsync.KV_LipSyncPlayComponent.PlaySequence
	// void PlaySequence(class ULipSyncFrameSequence* Sequence, float Offset, class UKV_LipSyncFilterBase* Filter);             // [0x1170da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Lipsync.KV_LipSyncPlayComponent.ManualUpdateLipSync
	// void ManualUpdateLipSync(class ULipSyncFrameSequence* Sequence, float TimeOffset);                                       // [0x1170cd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KV_Lipsync.LipSyncDownsampler
/// Size: 0x0008 (0x000028 - 0x000030)
class ULipSyncDownsampler : public UKV_LipSyncFilterBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   SampleStep                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(ELipSyncInterpType)                        InterpolateType                                             OFFSET(get<T>, {0x2C, 1, 0, 0})
};

/// Struct /Script/KV_Lipsync.MovieSceneLipSyncParams
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FMovieSceneLipSyncParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class ULipSyncFrameSequence*)              LipSyncSequence                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   LipSyncWeight                                               OFFSET(getStruct<T>, {0x10, 160, 0, 0})
};

/// Class /Script/KV_Lipsync.MovieSceneLipSyncSection
/// Size: 0x00B0 (0x0000E8 - 0x000198)
class UMovieSceneLipSyncSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FMovieSceneLipSyncParams)                  Params                                                      OFFSET(getStruct<T>, {0xE8, 176, 0, 0})
};

/// Class /Script/KV_Lipsync.MovieSceneLipSyncTrack
/// Size: 0x0018 (0x000078 - 0x000090)
class UMovieSceneLipSyncTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/KV_Lipsync.MovieSceneLipSyncSectionTemplateParameters
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class FMovieSceneLipSyncSectionTemplateParameters : public FMovieSceneLipSyncParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FFrameNumber)                              SectionStartTime                                            OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndTime                                              OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
};

/// Struct /Script/KV_Lipsync.MovieSceneLipSyncSectionTemplate
/// Size: 0x00B8 (0x000020 - 0x0000D8)
class FMovieSceneLipSyncSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMovieSceneLipSyncSectionTemplateParameters) Params                                                    OFFSET(getStruct<T>, {0x20, 184, 0, 0})
};

/// Enum /Script/KV_Lipsync.ELipSyncInterpType
/// Size: 0x01
enum class ELipSyncInterpType : uint8_t
{
	ELipSyncInterpType__Linear                                                       = 0
};

/// Enum /Script/KV_Lipsync.ELipSyncPlayState
/// Size: 0x04
enum class ELipSyncPlayState : uint8_t
{
	ELipSyncPlayState__LSP_Idle                                                      = 0,
	ELipSyncPlayState__LSP_Playing                                                   = 1,
	ELipSyncPlayState__LSP_Stopped                                                   = 2,
	ELipSyncPlayState__LSP_Remove                                                    = 3
};

