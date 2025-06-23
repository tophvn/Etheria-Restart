
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/ProtoCodec.ProtoMeta
/// Size: 0x000C (0x000000 - 0x00000C)
class FProtoMeta : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   ProtoId                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ResponseId                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSilence                                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(EProtoRetryPolicy)                         RetryPolicy                                                 OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(EProtoChannel)                             Channel                                                     OFFSET(get<T>, {0xA, 1, 0, 0})
};

/// Class /Script/ProtoCodec.ProtoSchema
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UProtoSchema : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<int32_t, FString>)                    CMapping                                                    OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<int32_t, FString>)                    SMapping                                                    OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FProtoMeta>)                        ProtoMeta                                                   OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Enum /Script/ProtoCodec.EProtoChannel
/// Size: 0x02
enum class EProtoChannel : uint8_t
{
	EProtoChannel__CHAN_SYSTEM                                                       = 0,
	EProtoChannel__CHAN_NORMAL                                                       = 1
};

/// Enum /Script/ProtoCodec.EProtoRetryPolicy
/// Size: 0x03
enum class EProtoRetryPolicy : uint8_t
{
	EProtoRetryPolicy__NoRetry                                                       = 0,
	EProtoRetryPolicy__General                                                       = 1,
	EProtoRetryPolicy__Infinity                                                      = 2
};

