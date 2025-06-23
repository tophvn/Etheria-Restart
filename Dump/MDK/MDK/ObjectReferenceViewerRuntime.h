
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/ObjectReferenceViewerRuntime.JustForGenerateHeadFile
/// Size: 0x0001 (0x000000 - 0x000001)
class FJustForGenerateHeadFile : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ObjectReferenceViewerRuntime.IndexCollection
/// Size: 0x0050 (0x000000 - 0x000050)
class FIndexCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<int32_t, bool>)                       Indexes                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ObjectReferenceViewerRuntime.RDInfo
/// Size: 0x0148 (0x000000 - 0x000148)
class FRDInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TMap<int32_t, FName>)                      ObjectId2NameMap                                            OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<int32_t, FIndexCollection>)           ObjectReferenceMap                                          OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    ObjectId2TypesMap                                           OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    ObjectId2SizeMap                                            OFFSET(get<T>, {0xF0, 80, 0, 0})
	SMember(FDateTime)                                 CreateTime                                                  OFFSET(getStruct<T>, {0x140, 8, 0, 0})
};

/// Struct /Script/ObjectReferenceViewerRuntime.RDObjectInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FRDObjectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(bool)                                      InObject                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Enum /Script/ObjectReferenceViewerRuntime.EObjectType
/// Size: 0x06
enum class EObjectType : uint8_t
{
	EObjectType__Type_None                                                           = 0,
	EObjectType__Type_Class                                                          = 1,
	EObjectType__Type_Instance                                                       = 2,
	EObjectType__Type_Mesh                                                           = 4,
	EObjectType__Type_Texture                                                        = 8,
	EObjectType__Type_RT                                                             = 16
};

/// Enum /Script/ObjectReferenceViewerRuntime.EShowItemSortType
/// Size: 0x03
enum class EShowItemSortType : uint8_t
{
	EShowItemSortType__Type_Name                                                     = 0,
	EShowItemSortType__Type_Size                                                     = 1,
	EShowItemSortType__Type_Count                                                    = 2
};

