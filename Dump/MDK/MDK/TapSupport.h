
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/TapSupport.TapSupportConfig
/// Size: 0x0020 (0x000000 - 0x000020)
class FTapSupportConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   ServerURL                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

