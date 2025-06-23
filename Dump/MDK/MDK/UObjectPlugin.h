
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/UObjectPlugin.MyPluginStruct
/// Size: 0x0010 (0x000000 - 0x000010)
class FMyPluginStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   TestString                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Class /Script/UObjectPlugin.MyPluginObject
/// Size: 0x0010 (0x000028 - 0x000038)
class UMyPluginObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FMyPluginStruct)                           MyStruct                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

