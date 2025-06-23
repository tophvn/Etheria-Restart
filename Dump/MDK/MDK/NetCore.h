
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FNetAnalyticsDataConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     DataName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetAnalyticsAggregatorConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNetAnalyticsDataConfig>)           NetAnalyticsData                                            OFFSET(get<T>, {0x28, 16, 0, 0})
};

