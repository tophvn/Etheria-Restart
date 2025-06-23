
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/KV_EdenToolRuntime.FetchItem
/// Size: 0x0040 (0x000000 - 0x000040)
class FFetchItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<class UWorld*>)             SourceLevel                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   OverrideName                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bLightScenario                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/KV_EdenToolRuntime.KV_FetchLevelDataAsset
/// Size: 0x0040 (0x000030 - 0x000070)
class UKV_FetchLevelDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FFetchItem>)                        Items                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(ELevelFetchRule)                           FetchRule                                                   OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TWeakObjectPtr<class UWorld*>)             MasterLevel                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Enum /Script/KV_EdenToolRuntime.ELevelFetchRule
/// Size: 0x02
enum class ELevelFetchRule : uint8_t
{
	ELevelFetchRule__R_General                                                       = 0,
	ELevelFetchRule__R_Scenario                                                      = 1
};

