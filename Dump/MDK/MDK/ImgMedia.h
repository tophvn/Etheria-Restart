
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UImgMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FFrameRate)                                FrameRateOverride                                           OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	SMember(FString)                                   ProxyOverride                                               OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FDirectoryPath)                            SequencePath                                                OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	// void SetSequencePath(FString Path);                                                                                      // [0x1345010] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	// FString GetSequencePath();                                                                                               // [0x1344f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	// void GetProxies(TArray<FString>& OutProxies);                                                                            // [0x1344e80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

