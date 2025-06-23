
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: OpenColorIO
/// dependency: UMG

/// Class /Script/MovieRenderPipelineCore.MoviePipeline
/// Size: 0x0270 (0x000028 - 0x000298)
class UMoviePipeline : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FMulticastInlineDelegate)                  OnMoviePipelineFinishedDelegate                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UMoviePipelineCustomTimeStep*)       CustomTimeStep                                              OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UEngineCustomTimeStep*)              CachedPrevCustomTimeStep                                    OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class ULevelSequence*)                     TargetSequence                                              OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class ALevelSequenceActor*)                LevelSequenceActor                                          OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UMovieRenderDebugWidget*)            DebugWidget                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UTexture*)                           PreviewTexture                                              OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UClass*)                             DebugWidgetClass                                            OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class UMoviePipelineExecutorJob*)          CurrentJob                                                  OFFSET(get<T>, {0x258, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Shutdown
	// void Shutdown(bool bError);                                                                                              // [0xc8bfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.RequestShutdown
	// void RequestShutdown(bool bIsError);                                                                                     // [0xc8b540] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
	// void OnMoviePipelineFinishedImpl();                                                                                      // [0x89bc50] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
	// bool IsShutdownRequested();                                                                                              // [0xc8b0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Initialize
	// void Initialize(class UMoviePipelineExecutorJob* InJob);                                                                 // [0xc8af30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
	// class UTexture* GetPreviewTexture();                                                                                     // [0xc8abf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
	// class UMoviePipelineMasterConfig* GetPipelineMasterConfig();                                                             // [0xc8aa50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCustomTimeStep
/// Size: 0x0008 (0x000028 - 0x000030)
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineSetting
/// Size: 0x0020 (0x000028 - 0x000048)
class UMoviePipelineSetting : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<class UMoviePipeline*>)     CachedPipeline                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
	// void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);                           // [0xc88fb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   SpatialSampleCount                                          OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   TemporalSampleCount                                         OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bOverrideAntiAliasing                                       OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EAntiAliasingMethod>)          AntiAliasingMethod                                          OFFSET(get<T>, {0x51, 1, 0, 0})
	DMember(int32_t)                                   RenderWarmUpCount                                           OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseCameraCutForWarmUp                                      OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   EngineWarmUpCount                                           OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bRenderWarmUpFrames                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
	// void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob);            // [0xc8c070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
	// int32_t ResolveVersionNumber(class UMoviePipeline* InMoviePipeline);                                                     // [0xc8b5d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
	// EMovieRenderPipelineState GetPipelineState(class UMoviePipeline* InPipeline);                                            // [0xc8aa80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
	// void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);   // [0xc8a930] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
	// void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);    // [0xc8a810] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
	// FTimecode GetMasterTimecode(class UMoviePipeline* InMoviePipeline);                                                      // [0xc8a770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
	// FFrameNumber GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);                                                // [0xc8a6e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
	// FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);                                                       // [0xc8a610] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
	// FText GetJobName(class UMoviePipeline* InMoviePipeline);                                                                 // [0xc8a440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
	// FDateTime GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);                                               // [0xc8a3b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
	// FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);                                                               // [0xc8a2c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
	// bool GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, FTimespan& OutEstimate);                                // [0xc8a1f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
	// FTimecode GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);                                                 // [0xc8a0c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
	// FFrameNumber GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);                                           // [0xc8a030] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
	// FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);                    // [0xc89f40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
	// EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);                                     // [0xc89eb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
	// void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);             // [0xc89d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
	// float GetCompletionPercentage(class UMoviePipeline* InPipeline);                                                         // [0xc89c60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
	// class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);               // [0xc893e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCameraSetting
/// Size: 0x0008 (0x000048 - 0x000050)
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EMoviePipelineShutterTiming)               ShutterTiming                                               OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineColorSetting
/// Size: 0x0068 (0x000048 - 0x0000B0)
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FOpenColorIODisplayConfiguration)          OCIOConfiguration                                           OFFSET(getStruct<T>, {0x48, 96, 0, 0})
	DMember(bool)                                      bDisableToneCurve                                           OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineConfigBase
/// Size: 0x0028 (0x000028 - 0x000050)
class UMoviePipelineConfigBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UMoviePipelineSetting*>)      Settings                                                    OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
	// void RemoveSetting(class UMoviePipelineSetting* InSetting);                                                              // [0xc8b380] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
	// TArray<UMoviePipelineSetting*> GetUserSettings();                                                                        // [0x9cb380] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
	// TArray<UMoviePipelineSetting*> FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings);                // [0xc898d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
	// class UMoviePipelineSetting* FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);                   // [0xc896a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
	// class UMoviePipelineSetting* FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);              // [0xc895d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
	// void CopyFrom(class UMoviePipelineConfigBase* InConfig);                                                                 // [0x9cb500] Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase
/// Size: 0x00E0 (0x000028 - 0x000108)
class UMoviePipelineExecutorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnExecutorFinishedDelegate                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExecutorErroredDelegate                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SocketMessageRecievedDelegate                               OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HTTPResponseRecievedDelegate                                OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	CMember(class UClass*)                             DebugWidgetClass                                            OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FString)                                   UserData                                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(class UClass*)                             TargetPipelineClass                                         OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0xc8bec0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0xc8bd80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
	// void SetMoviePipelineClass(class UClass* InPipelineClass);                                                               // [0xc8ba40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
	// bool SendSocketMessage(FString InMessage);                                                                               // [0xc8b870] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
	// int32_t SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, TMap<FString, FString>& InHeaders);            // [0xc8b660] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
	// void OnExecutorFinishedImpl();                                                                                           // [0x89bc50] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
	// void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);                       // [0xc8b170] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
	// void OnBeginFrame();                                                                                                     // [0xc8b130] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
	// bool IsSocketConnected();                                                                                                // [0xc8b100] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
	// bool IsRendering();                                                                                                      // [0xc8b010] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0xc8adb0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0xc8ad30] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
	// void Execute(class UMoviePipelineQueue* InPipelineQueue);                                                                // [0xc894b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
	// void DisconnectSocket();                                                                                                 // [0xc89320] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
	// bool ConnectSocket(FString InHostName, int32_t InPort);                                                                  // [0xc89110] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
	// void CancelCurrentJob();                                                                                                 // [0xc890f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
	// void CancelAllJobs();                                                                                                    // [0xc890d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputBase
/// Size: 0x0000 (0x000048 - 0x000048)
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
/// Size: 0x0038 (0x000048 - 0x000080)
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   FileNameFormat                                              OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FCPXMLExportDataSource)                    DataSource                                                  OFFSET(getStruct<T>, {0x60, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameMode
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class AMoviePipelineGameMode : public AGameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
/// Size: 0x00B8 (0x000048 - 0x000100)
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UClass*)                             GameModeOverride                                            OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bCinematicQualitySettings                                   OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(EMoviePipelineTextureStreamingMethod)      TextureStreaming                                            OFFSET(get<T>, {0x51, 1, 0, 0})
	DMember(bool)                                      bUseLODZero                                                 OFFSET(get<bool>, {0x52, 1, 0, 0})
	DMember(bool)                                      bDisableHLODs                                               OFFSET(get<bool>, {0x53, 1, 0, 0})
	DMember(bool)                                      bUseHighQualityShadows                                      OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(int32_t)                                   ShadowDistanceScale                                         OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(float)                                     ShadowRadiusThreshold                                       OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bOverrideViewDistanceScale                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(int32_t)                                   ViewDistanceScale                                           OFFSET(get<int32_t>, {0x64, 4, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineHighResSetting
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   TileCount                                                   OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     TextureSharpnessBias                                        OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     OverlapRatio                                                OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bOverrideSubSurfaceScattering                               OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(int32_t)                                   BurleySampleCount                                           OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(bool)                                      bWriteAllSamples                                            OFFSET(get<bool>, {0x5C, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
/// Size: 0x0028 (0x000108 - 0x000130)
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UMoviePipelineQueue*)                Queue                                                       OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UMoviePipeline*)                     ActiveMoviePipeline                                         OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutor
/// Size: 0x0038 (0x000130 - 0x000168)
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	DMember(bool)                                      bUseCurrentLevel                                            OFFSET(get<bool>, {0x130, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
/// Size: 0x0030 (0x000038 - 0x000068)
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bCloseEditor                                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FString)                                   AdditionalCommandLineArguments                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   InheritedCommandLineArguments                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   InitialDelayFrameCount                                      OFFSET(get<int32_t>, {0x60, 4, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig
/// Size: 0x0068 (0x000050 - 0x0000B8)
class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TMap<FString, class UMoviePipelineShotConfig*>) PerShotConfigMapping                                   OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(class UMoviePipelineOutputSetting*)        OutputSetting                                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<class UMoviePipelineSetting*>)      TransientSettings                                           OFFSET(get<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings
	// void InitializeTransientSettings();                                                                                      // [0xc8afc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings
	// TArray<UMoviePipelineSetting*> GetTransientSettings();                                                                   // [0xc8ae70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate
	// FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);                                                      // [0xc8a160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings
	// TArray<UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);            // [0xc89b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputSetting
/// Size: 0x0060 (0x000048 - 0x0000A8)
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FDirectoryPath)                            OutputDirectory                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   FileNameFormat                                              OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FIntPoint)                                 OutputResolution                                            OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bUseCustomFrameRate                                         OFFSET(get<bool>, {0x70, 1, 0, 0})
	SMember(FFrameRate)                                OutputFrameRate                                             OFFSET(getStruct<T>, {0x74, 8, 0, 0})
	DMember(bool)                                      bOverrideExistingOutput                                     OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(int32_t)                                   HandleFrameCount                                            OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   OutputFrameStep                                             OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(bool)                                      bUseCustomPlaybackRange                                     OFFSET(get<bool>, {0x8C, 1, 0, 0})
	DMember(int32_t)                                   CustomStartFrame                                            OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   CustomEndFrame                                              OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	DMember(int32_t)                                   VersionNumber                                               OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(bool)                                      bAutoVersion                                                OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(int32_t)                                   ZeroPadFrameNumbers                                         OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   FrameNumberOffset                                           OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
/// Size: 0x0018 (0x000108 - 0x000120)
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UClass*)                             ExecutorClass                                               OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UMoviePipelineQueue*)                PipelineQueue                                               OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UWorld*)                             LastLoadedWorld                                             OFFSET(get<T>, {0x118, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
	// void OnMapLoad(class UWorld* InWorld);                                                                                   // [0xc8b2f0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
	// class UWorld* GetLastLoadedWorld();                                                                                      // [0xc8a5f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
	// void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);                                                         // [0xc89540] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot
/// Size: 0x0158 (0x000028 - 0x000180)
class UMoviePipelineExecutorShot : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSoftObjectPath)                           InnerPathKey                                                OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FSoftObjectPath)                           OuterPathKey                                                OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FString)                                   OuterName                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   InnerName                                                   OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(float)                                     Progress                                                    OFFSET(get<float>, {0x138, 4, 0, 0})
	SMember(FString)                                   StatusMessage                                               OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	CMember(class UMoviePipelineShotConfig*)           ShotOverrideConfig                                          OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMoviePipelineShotConfig*>) ShotOverridePresetOrigin                              OFFSET(get<T>, {0x158, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0xc8bf50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0xc8be20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
	// void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);                                              // [0xc8bcf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
	// void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);                                             // [0xc8bc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0xc8ae30] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x9cb380] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
	// class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();                                                           // [0xc8ac50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
	// class UMoviePipelineShotConfig* GetShotOverrideConfiguration();                                                          // [0xc8ac30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
	// class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(class UClass* InConfigType);                               // [0xc88f10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UMoviePipelineExecutorJob : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FString)                                   JobName                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           Sequence                                                    OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FSoftObjectPath)                           Map                                                         OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FString)                                   Author                                                      OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TArray<class UMoviePipelineExecutorShot*>) ShotInfo                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   UserData                                                    OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   StatusMessage                                               OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	DMember(float)                                     StatusProgress                                              OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bIsConsumed                                                 OFFSET(get<bool>, {0xAC, 1, 0, 0})
	CMember(class UMoviePipelineMasterConfig*)         Configuration                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMoviePipelineMasterConfig*>) PresetOrigin                                        OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0xc8bf50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0xc8be20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
	// void SetSequence(FSoftObjectPath InSequence);                                                                            // [0xc8bb60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
	// void SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset);                                                        // [0xc8bad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
	// void SetConsumed(bool bInConsumed);                                                                                      // [0xc8b9b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
	// void SetConfiguration(class UMoviePipelineMasterConfig* InPreset);                                                       // [0xc8b920] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
	// void OnDuplicated();                                                                                                     // [0xc8b150] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
	// bool IsConsumed();                                                                                                       // [0xc8afe0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0xc8adf0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x9cb400] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
	// class UMoviePipelineMasterConfig* GetPresetOrigin();                                                                     // [0xc8ab10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
	// class UMoviePipelineMasterConfig* GetConfiguration();                                                                    // [0xc89cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueue
/// Size: 0x0018 (0x000028 - 0x000040)
class UMoviePipelineQueue : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UMoviePipelineExecutorJob*>)  Jobs                                                        OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
	// TArray<UMoviePipelineExecutorJob*> GetJobs();                                                                            // [0xc8a530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
	// class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);                                   // [0xc89340] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
	// void DeleteJob(class UMoviePipelineExecutorJob* InJob);                                                                  // [0xc89290] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
	// void CopyFrom(class UMoviePipelineQueue* InQueue);                                                                       // [0xc89200] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
	// class UMoviePipelineExecutorJob* AllocateNewJob(class UClass* InJobType);                                                // [0xc88e70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UMoviePipelineExecutorBase*)         ActiveExecutor                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMoviePipelineQueue*)                CurrentQueue                                                OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
	// void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);                                      // [0xc8b4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
	// class UMoviePipelineExecutorBase* RenderQueueWithExecutor(class UClass* InExecutorType);                                 // [0xc8b410] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
	// bool IsRendering();                                                                                                      // [0xc8b040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
	// class UMoviePipelineQueue* GetQueue();                                                                                   // [0xc8ac10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
	// class UMoviePipelineExecutorBase* GetActiveExecutor();                                                                   // [0xc89b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineRenderPass
/// Size: 0x0000 (0x000048 - 0x000048)
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineShotConfig
/// Size: 0x0000 (0x000050 - 0x000050)
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineVideoOutputBase
/// Size: 0x0040 (0x000048 - 0x000088)
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/MovieRenderPipelineCore.MovieRenderDebugWidget
/// Size: 0x0000 (0x000280 - 0x000280)
class UMovieRenderDebugWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
	// void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);                                                        // [0x198a600] Event|Public|BlueprintEvent 
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineCameraCutInfo
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FMoviePipelineCameraCutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
/// Size: 0x0028 (0x000000 - 0x000028)
class FMoviePipelineSegmentWorkMetrics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   SegmentName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   OutputFrameIndex                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   TotalOutputFrameCount                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   OutputSubSampleIndex                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TotalSubSampleCount                                         OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   EngineWarmUpFrameIndex                                      OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   TotalEngineWarmUpFrameCount                                 OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Enum /Script/MovieRenderPipelineCore.FCPXMLExportDataSource
/// Size: 0x02
enum class FCPXMLExportDataSource : uint8_t
{
	FCPXMLExportDataSource__OutputMetadata                                           = 0,
	FCPXMLExportDataSource__SequenceData                                             = 1
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
/// Size: 0x03
enum class EMoviePipelineTextureStreamingMethod : uint8_t
{
	EMoviePipelineTextureStreamingMethod__None                                       = 0,
	EMoviePipelineTextureStreamingMethod__Disabled                                   = 1,
	EMoviePipelineTextureStreamingMethod__FullyLoad                                  = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineShutterTiming
/// Size: 0x03
enum class EMoviePipelineShutterTiming : uint8_t
{
	EMoviePipelineShutterTiming__FrameOpen                                           = 0,
	EMoviePipelineShutterTiming__FrameCenter                                         = 1,
	EMoviePipelineShutterTiming__FrameClose                                          = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderShotState
/// Size: 0x05
enum class EMovieRenderShotState : uint8_t
{
	EMovieRenderShotState__Uninitialized                                             = 0,
	EMovieRenderShotState__WarmingUp                                                 = 1,
	EMovieRenderShotState__MotionBlur                                                = 2,
	EMovieRenderShotState__Rendering                                                 = 3,
	EMovieRenderShotState__Finished                                                  = 4
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderPipelineState
/// Size: 0x05
enum class EMovieRenderPipelineState : uint8_t
{
	EMovieRenderPipelineState__Uninitialized                                         = 0,
	EMovieRenderPipelineState__ProducingFrames                                       = 1,
	EMovieRenderPipelineState__Finalize                                              = 2,
	EMovieRenderPipelineState__Export                                                = 3,
	EMovieRenderPipelineState__Finished                                              = 4
};

