
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: JsonUtilities

/// Struct /Script/XDGAnnouncement.FetchAnnouncementsResponseData
/// Size: 0x0090 (0x000000 - 0x000090)
class FFetchAnnouncementsResponseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Type                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ShortTitle                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   LongTitle                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int64_t)                                   PublishTime                                                 OFFSET(get<int64_t>, {0x40, 8, 0, 0})
	DMember(int64_t)                                   ExpireTime                                                  OFFSET(get<int64_t>, {0x48, 8, 0, 0})
	SMember(FString)                                   Link                                                        OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   Image                                                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TArray<FJsonObjectWrapper>)                Dimensions                                                  OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/XDGAnnouncement.AnnouncementStorage
/// Size: 0x0038 (0x000000 - 0x000038)
class FAnnouncementStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FDateTime)                                 Expires                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   ETag                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FDateTime)                                 LastModifiedTime                                            OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FDateTime)                                 ServerTime                                                  OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	CMember(TArray<FFetchAnnouncementsResponseData>)   ResponseData                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

