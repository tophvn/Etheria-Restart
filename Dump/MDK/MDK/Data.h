
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Game/Data/Structs/BP_NamePattern_Struct.BP_NamePattern_Struct
/// Size: 0x0020 (0x000000 - 0x000020)
class FBP_NamePattern_Struct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Pattern_2_811BD18C4B951D0EDD153A9A64DC981C                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Weight_5_E97124CC4EBE5ADA6CCEAFB07C9E8778                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Gender_8_299ABF264FD8EB336BDB98B115E07454                   OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FName)                                     Culture_11_E5DCD30C4E07FD587B640FAEF01E8527                 OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Game/Data/Structs/BP_NameLibrary_Struct.BP_NameLibrary_Struct
/// Size: 0x0020 (0x000000 - 0x000020)
class FBP_NameLibrary_Struct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Text_2_811BD18C4B951D0EDD153A9A64DC981C                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Gender_5_1917BC9841F7101E04216CBE97711F54                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     Weight_8_8EE4E5774B4FAD04C6FCE090E424ABDC                   OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FName)                                     WordType_11_8CC77483437473D245AF6698C9F5FBD7                OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

