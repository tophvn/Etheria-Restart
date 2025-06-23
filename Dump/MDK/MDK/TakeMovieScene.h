
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/TakeMovieScene.MovieSceneTakeSection
/// Size: 0x0380 (0x0000E8 - 0x000468)
class UMovieSceneTakeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	SMember(FMovieSceneIntegerChannel)                 HoursCurve                                                  OFFSET(getStruct<T>, {0xE8, 144, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 MinutesCurve                                                OFFSET(getStruct<T>, {0x178, 144, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 SecondsCurve                                                OFFSET(getStruct<T>, {0x208, 144, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 FramesCurve                                                 OFFSET(getStruct<T>, {0x298, 144, 0, 0})
	SMember(FMovieSceneFloatChannel)                   SubFramesCurve                                              OFFSET(getStruct<T>, {0x328, 160, 0, 0})
	SMember(FMovieSceneStringChannel)                  Slate                                                       OFFSET(getStruct<T>, {0x3C8, 160, 0, 0})
};

/// Class /Script/TakeMovieScene.MovieSceneTakeSettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UMovieSceneTakeSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   HoursName                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   MinutesName                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   SecondsName                                                 OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   FramesName                                                  OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   SubFramesName                                               OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   SlateName                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})
};

/// Class /Script/TakeMovieScene.MovieSceneTakeTrack
/// Size: 0x0010 (0x000078 - 0x000088)
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
};

