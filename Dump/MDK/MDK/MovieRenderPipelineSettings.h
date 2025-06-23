
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore
/// dependency: UMG

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInSetting
/// Size: 0x0058 (0x000048 - 0x0000A0)
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSoftClassPath)                            BurnInClass                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(bool)                                      bCompositeOntoFinalImage                                    OFFSET(get<bool>, {0x60, 1, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UMoviePipelineBurnInWidget*)         BurnInWidgetInstance                                        OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget
/// Size: 0x0000 (0x000280 - 0x000280)
class UMoviePipelineBurnInWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
	// void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);                                                            // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FString, float>)                      ConsoleVariables                                            OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TArray<FString>)                           StartConsoleCommands                                        OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FString>)                           EndConsoleCommands                                          OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
/// Size: 0x0018 (0x000048 - 0x000060)
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x58, 8, 0, 0})
};

