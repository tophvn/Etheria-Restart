
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionParams
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneGeometryCollectionParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSoftObjectPath)                           GeometryCollectionCache                                     OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FFrameNumber)                              EndFrameOffset                                              OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSection
/// Size: 0x0030 (0x0000E8 - 0x000118)
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMovieSceneGeometryCollectionParams)       Params                                                      OFFSET(getStruct<T>, {0xE8, 48, 0, 0})
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
/// Size: 0x0018 (0x000078 - 0x000090)
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UMovieSceneSection*>)         AnimationSections                                           OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
/// Size: 0x0008 (0x000030 - 0x000038)
class FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FFrameNumber)                              SectionStartTime                                            OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndTime                                              OFFSET(getStruct<T>, {0x34, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
/// Size: 0x0038 (0x000020 - 0x000058)
class FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMovieSceneGeometryCollectionSectionTemplateParameters) Params                                         OFFSET(getStruct<T>, {0x20, 56, 0, 0})
};

