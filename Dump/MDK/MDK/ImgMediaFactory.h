
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/ImgMediaFactory.ImgMediaSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UImgMediaSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FFrameRate)                                DefaultFrameRate                                            OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(float)                                     CacheBehindPercentage                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     CacheSizeGB                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   CacheThreads                                                OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   CacheThreadStackSizeKB                                      OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     GlobalCacheSizeGB                                           OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      UseGlobalCache                                              OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(uint32_t)                                  ExrDecoderThreads                                           OFFSET(get<uint32_t>, {0x48, 4, 0, 0})
	SMember(FString)                                   DefaultProxy                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      UseDefaultProxy                                             OFFSET(get<bool>, {0x60, 1, 0, 0})
};

