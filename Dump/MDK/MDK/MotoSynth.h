
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/MotoSynth.MotoSynthRuntimeSettings
/// Size: 0x0068 (0x000000 - 0x000068)
class FMotoSynthRuntimeSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bSynthToneEnabled                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     SynthToneVolume                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SynthToneFilterFrequency                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SynthOctaveShift                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bGranularEngineEnabled                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     GranularEngineVolume                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     GranularEnginePitchScale                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   NumSamplesToCrossfadeBetweenGrains                          OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   NumGrainTableEntriesPerGrain                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   GrainTableRandomOffsetForConstantRPMs                       OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   GrainCrossfadeSamplesForConstantRPMs                        OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(class UMotoSynthSource*)                   AccelerationSource                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMotoSynthSource*)                   DecelerationSource                                          OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bStereoWidenerEnabled                                       OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     StereoDelayMsec                                             OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     StereoFeedback                                              OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     StereoWidenerWetlevel                                       OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     StereoWidenerDryLevel                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     StereoWidenerDelayRatio                                     OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bStereoWidenerFilterEnabled                                 OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(float)                                     StereoWidenerFilterFrequency                                OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     StereoWidenerFilterQ                                        OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Class /Script/MotoSynth.MotoSynthPreset
/// Size: 0x0068 (0x000028 - 0x000090)
class UMotoSynthPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMotoSynthRuntimeSettings)                 Settings                                                    OFFSET(getStruct<T>, {0x28, 104, 0, 0})
};

/// Struct /Script/MotoSynth.GrainTableEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FGrainTableEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SampleIndex                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     RPM                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/MotoSynth.MotoSynthSource
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UMotoSynthSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bConvertTo8Bit                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     DownSampleFactor                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        RPMCurve                                                    OFFSET(getStruct<T>, {0x30, 136, 0, 0})
	CMember(TArray<float>)                             SourceData                                                  OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<int16_t>)                           SourceDataPCM                                               OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(int32_t)                                   SourceSampleRate                                            OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(TArray<FGrainTableEntry>)                  GrainTable                                                  OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/MotoSynth.SynthComponentMoto
/// Size: 0x00C0 (0x0006C0 - 0x000780)
class USynthComponentMoto : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	CMember(class UMotoSynthPreset*)                   MotoSynthPreset                                             OFFSET(get<T>, {0x6C0, 8, 0, 0})
	DMember(float)                                     RPM                                                         OFFSET(get<float>, {0x6C8, 4, 0, 0})


	/// Functions
	// Function /Script/MotoSynth.SynthComponentMoto.SetSettings
	// void SetSettings(FMotoSynthRuntimeSettings& InSettings);                                                                 // [0x12f7580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotoSynth.SynthComponentMoto.SetRPM
	// void SetRPM(float InRPM, float InTimeSec);                                                                               // [0x12f74b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotoSynth.SynthComponentMoto.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x12f7480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotoSynth.SynthComponentMoto.GetRPMRange
	// void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);                                                                    // [0x12f73a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

