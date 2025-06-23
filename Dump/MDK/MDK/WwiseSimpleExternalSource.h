
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/WwiseSimpleExternalSource.WwiseExternalSourceSettings
/// Size: 0x0058 (0x000028 - 0x000080)
class UWwiseExternalSourceSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSoftObjectPath)                           MediaInfoTable                                              OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FSoftObjectPath)                           ExternalSourceDefaultMedia                                  OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FDirectoryPath)                            ExternalSourceStagingDirectory                              OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/WwiseSimpleExternalSource.WwiseExternalSourceCookieDefaultMedia
/// Size: 0x0030 (0x000008 - 0x000038)
class FWwiseExternalSourceCookieDefaultMedia : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   ExternalSourceCookie                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   ExternalSourceName                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   MediaInfoId                                                 OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FString)                                   MediaName                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/WwiseSimpleExternalSource.WwiseExternalSourceMediaInfo
/// Size: 0x0020 (0x000008 - 0x000028)
class FWwiseExternalSourceMediaInfo : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   ExternalSourceMediaInfoId                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FName)                                     MediaName                                                   OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(int32_t)                                   CodecID                                                     OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bIsStreamed                                                 OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bUseDeviceMemory                                            OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(int32_t)                                   MemoryAlignment                                             OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   PrefetchSize                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

