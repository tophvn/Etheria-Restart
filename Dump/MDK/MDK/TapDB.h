
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: TapCommon

/// Class /Script/TapDB.TUDBReflection
/// Size: 0x0000 (0x000028 - 0x000028)
class UTUDBReflection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TapDB.TUDBReflection.Init
	// void Init();                                                                                                             // [0x101e640] Final|Native|Static|Private 
};

/// Struct /Script/TapDB.TUDBStorage
/// Size: 0x0001 (0x000000 - 0x000001)
class FTUDBStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TapDB.TUDBConfig
/// Size: 0x0038 (0x000000 - 0x000038)
class FTUDBConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Channel                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   GameVersion                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(ERegionType)                               RegionType                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
};

