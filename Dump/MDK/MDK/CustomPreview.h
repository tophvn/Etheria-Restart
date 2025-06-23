
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CustomPreview.CustomPreviewLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomPreviewLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CustomPreview.CustomPreviewLibrary.GetCustomization
	// class UPreviewCustomize* GetCustomization();                                                                             // [0x9cb350] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CustomPreview.PreviewCustomize
/// Size: 0x0000 (0x000028 - 0x000028)
class UPreviewCustomize : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CustomPreview.PreviewCustomize.OverridePlayStart
	// void OverridePlayStart(FVector& Location);                                                                               // [0x9cb590] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/CustomPreview.PreviewCustomize.Initialize
	// void Initialize(class UWorld* EditorWorld);                                                                              // [0x9cb500] Native|Event|Public|BlueprintEvent 
	// Function /Script/CustomPreview.PreviewCustomize.GetInitialLevelPath
	// FString GetInitialLevelPath();                                                                                           // [0x9cb380] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/CustomPreview.LevelRecorder
/// Size: 0x0048 (0x000028 - 0x000070)
class ULevelRecorder : public UPreviewCustomize
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/CustomPreview.LevelRecorder.SetServerRecordData
	// void SetServerRecordData(FString Data);                                                                                  // [0x9cb760] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomPreview.LevelRecorder.SetRecordData
	// void SetRecordData(FString Data);                                                                                        // [0x9cb6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomPreview.LevelRecorder.SetPromptText
	// void SetPromptText(FString Data);                                                                                        // [0x9cb620] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomPreview.LevelRecorder.GetReplayPackageName
	// FString GetReplayPackageName();                                                                                          // [0x9cb480] Native|Event|Public|BlueprintEvent 
	// Function /Script/CustomPreview.LevelRecorder.GetRecordScriptPath
	// FString GetRecordScriptPath();                                                                                           // [0x9cb400] Native|Event|Public|BlueprintEvent 
	// Function /Script/CustomPreview.LevelRecorder.CompleteReplayRecord
	// void CompleteReplayRecord();                                                                                             // [0x9cb330] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomPreview.LevelRecorder.BeginReplayRecord
	// void BeginReplayRecord();                                                                                                // [0x9cb310] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomPreview.LevelRecorder.AppendReplayCommandWithSubIndex2
	// void AppendReplayCommandWithSubIndex2(FName& CommandName, int32_t TargetId, FString TargetGuid, int32_t SubIndex);       // [0x9cb000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomPreview.LevelRecorder.AppendReplayCommandWithSubIndex
	// void AppendReplayCommandWithSubIndex(FName& CommandName, int32_t TargetId, FGuid& TargetGuid, int32_t SubIndex);         // [0x9cb180] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomPreview.LevelRecorder.AppendReplayCommand2
	// void AppendReplayCommand2(FName& CommandName, int32_t TargetId, FString TargetGuid);                                     // [0x9cada0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomPreview.LevelRecorder.AppendReplayCommand
	// void AppendReplayCommand(FName& CommandName, int32_t TargetId, FGuid& TargetGuid);                                       // [0x9caed0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/CustomPreview.ScenarioRecorder
/// Size: 0x0028 (0x000070 - 0x000098)
class UScenarioRecorder : public ULevelRecorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(int32_t)                                   ChapterId                                                   OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   SectionID                                                   OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	SMember(FString)                                   ReplaySavePath                                              OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   RecordScriptPath                                            OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Class /Script/CustomPreview.TowerRecorder
/// Size: 0x0020 (0x000070 - 0x000090)
class UTowerRecorder : public ULevelRecorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   ReplaySavePath                                              OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   RecordScriptPath                                            OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

