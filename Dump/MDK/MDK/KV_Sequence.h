
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene

/// Class /Script/KV_Sequence.KV_LevelSequenceActor
/// Size: 0x0008 (0x0002A0 - 0x0002A8)
class AKV_LevelSequenceActor : public ALevelSequenceActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class UKV_LevelSequencePostProcess*)       PostProcess                                                 OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/KV_Sequence.KV_LevelSequenceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKV_LevelSequenceLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.RemoveMarkedFrameByName
	// void RemoveMarkedFrameByName(class ULevelSequence* SequenceAsset, FString FrameLabel);                                   // [0xc562e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.PlayToMark
	// void PlayToMark(class ULevelSequencePlayer* Player, FString Marker);                                                     // [0xc561c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.PlayToFrame
	// void PlayToFrame(class ULevelSequencePlayer* Player, int32_t FrameNum);                                                  // [0xc56100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.MakeSequenceCopy
	// class ULevelSequence* MakeSequenceCopy(class UObject* Outer, class ULevelSequence* SequenceAsset);                       // [0xc56010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.IsTagValid
	// bool IsTagValid(class ULevelSequence* SequenceAsset, FName Tag);                                                         // [0xc55f40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.GetTimeToEnd
	// FQualifiedFrameTime GetTimeToEnd(class ULevelSequencePlayer* Player);                                                    // [0xc55eb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.GetPlaybackRange
	// void GetPlaybackRange(class ULevelSequence* SequenceAsset, int32_t& From, int32_t& To);                                  // [0xc55d90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.GetBoundActorByTag
	// class AActor* GetBoundActorByTag(class ULevelSequencePlayer* Player, FName Tag);                                         // [0xc55cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.EnableSectionsByTag
	// void EnableSectionsByTag(class ULevelSequence* SequenceAsset, FName& Tag, bool bEnabled);                                // [0xc55ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.EnableSectionsByClass
	// void EnableSectionsByClass(class ULevelSequence* SequenceAsset, class UClass* Class, bool bEnabled);                     // [0xc55aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_Sequence.KV_LevelSequenceLibrary.EnableEventSectionByEventName
	// void EnableEventSectionByEventName(class ULevelSequence* SequenceAsset, FName EventName, bool bEnabled);                 // [0xc559a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KV_Sequence.KV_LevelSequencePostProcess
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UKV_LevelSequencePostProcess : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class ALevelSequenceActor*)                SequenceActor                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TMap<FMovieSceneEvaluationOperand, class UObject*>) BindingObjects                                     OFFSET(get<T>, {0x80, 80, 0, 0})


	/// Functions
	// Function /Script/KV_Sequence.KV_LevelSequencePostProcess.Stop
	// void Stop();                                                                                                             // [0xc56490] Final|Native|Public  
	// Function /Script/KV_Sequence.KV_LevelSequencePostProcess.Setup
	// void Setup(class ALevelSequenceActor* InActor);                                                                          // [0xc56400] Final|Native|Public  
	// Function /Script/KV_Sequence.KV_LevelSequencePostProcess.Play
	// void Play();                                                                                                             // [0xc560e0] Final|Native|Public  
};

