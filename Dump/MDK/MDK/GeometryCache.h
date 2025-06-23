
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0040 (0x000028 - 0x000068)
class UGeometryCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UGeometryCacheTrack*>)        Tracks                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   StartFrame                                                  OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   EndFrame                                                    OFFSET(get<int32_t>, {0x64, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (0x000220 - 0x000228)
class AGeometryCacheActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(class UGeometryCacheComponent*)            GeometryCacheComponent                                      OFFSET(get<T>, {0x220, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// class UGeometryCacheComponent* GetGeometryCacheComponent();                                                              // [0x127f280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGeometryCacheCodecBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<int32_t>)                           TopologyRanges                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   DummyProperty                                               OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0060 (0x000490 - 0x0004F0)
class UGeometryCacheComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	CMember(class UGeometryCache*)                     GeometryCache                                               OFFSET(get<T>, {0x490, 8, 0, 0})
	DMember(bool)                                      bRunning                                                    OFFSET(get<bool>, {0x498, 1, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x499, 1, 0, 0})
	DMember(float)                                     StartTimeOffset                                             OFFSET(get<float>, {0x49C, 4, 0, 0})
	DMember(float)                                     PlaybackSpeed                                               OFFSET(get<float>, {0x4A0, 4, 0, 0})
	DMember(int32_t)                                   NumTracks                                                   OFFSET(get<int32_t>, {0x4A4, 4, 0, 0})
	DMember(float)                                     ElapsedTime                                                 OFFSET(get<float>, {0x4A8, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x4DC, 4, 0, 0})
	DMember(bool)                                      bManualTick                                                 OFFSET(get<bool>, {0x4E0, 1, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	// void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x127f8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	// void Stop();                                                                                                             // [0x127f8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x127f850] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x127f7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x127f540] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	// bool SetGeometryCache(class UGeometryCache* NewGeomCache);                                                               // [0x127f4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// void PlayReversedFromEnd();                                                                                              // [0x127f480] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	// void PlayReversed();                                                                                                     // [0x127f460] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x127f440] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	// void Play();                                                                                                             // [0x127f420] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	// void Pause();                                                                                                            // [0x127f400] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// bool IsPlayingReversed();                                                                                                // [0x127f3d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x127f3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x127f370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// float GetStartTimeOffset();                                                                                              // [0x127f340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// float GetPlaybackSpeed();                                                                                                // [0x127f310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// float GetPlaybackDirection();                                                                                            // [0x127f2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// int32_t GetNumberOfFrames();                                                                                             // [0x127f2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	// float GetDuration();                                                                                                     // [0x127f250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	// float GetAnimationTime();                                                                                                // [0x127f220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0030 (0x000028 - 0x000058)
class UGeometryCacheTrack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (0x000058 - 0x000080)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(uint32_t)                                  NumMeshSamples                                              OFFSET(get<uint32_t>, {0x58, 4, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x127efd0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x0078 (0x000058 - 0x0000D0)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UGeometryCacheCodecBase*)            Codec                                                       OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(float)                                     StartSampleTime                                             OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x00A8 (0x000058 - 0x000100)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x127f5d0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x00A8 (0x000058 - 0x000100)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x127f5d0] Final|Native|Public|HasOutParms 
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x0070 (0x000000 - 0x000070)
class FTrackRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FGeometryCacheMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryCacheVertexInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryCacheMeshBatchInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

