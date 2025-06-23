
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MediaCompositing.MovieSceneMediaSection
/// Size: 0x0030 (0x0000E8 - 0x000118)
class UMovieSceneMediaSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0xF0, 1, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0xF4, 4, 0, 0})
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               MediaSoundComponent                                         OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      bUseExternalMediaPlayer                                     OFFSET(get<bool>, {0x108, 1, 0, 0})
	CMember(class UMediaPlayer*)                       ExternalMediaPlayer                                         OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/MediaCompositing.MovieSceneMediaTrack
/// Size: 0x0018 (0x000078 - 0x000090)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UMovieSceneSection*>)         MediaSections                                               OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
/// Size: 0x0010 (0x000038 - 0x000048)
class FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FFrameNumber)                              SectionStartFrame                                           OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x44, 1, 0, 0})
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionParams
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneMediaSectionParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UMediaSoundComponent*)               MediaSoundComponent                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FFrameNumber)                              SectionStartFrame                                           OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndFrame                                             OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
class FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMovieSceneMediaSectionParams)             Params                                                      OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

