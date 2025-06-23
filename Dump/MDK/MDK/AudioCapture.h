
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioCapture : public UAudioGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
	// void StopCapturingAudio();                                                                                               // [0x13eb950] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
	// void StartCapturingAudio();                                                                                              // [0x13eb930] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
	// bool IsCapturingAudio();                                                                                                 // [0x13eb900] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	// bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);                                                        // [0x13eb860] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	// class UAudioCapture* CreateAudioCapture();                                                                               // [0x13eb830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x00C0 (0x0006C0 - 0x000780)
class UAudioCaptureComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	DMember(int32_t)                                   JitterLatencyFrames                                         OFFSET(get<int32_t>, {0x6C0, 4, 0, 0})
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FAudioCaptureDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     DeviceName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   NumInputChannels                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

