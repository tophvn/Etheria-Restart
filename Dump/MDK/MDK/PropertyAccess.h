
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/PropertyAccess.PropertyAccess
/// Size: 0x0000 (0x000028 - 0x000028)
class UPropertyAccess : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PropertyAccess.PropertyEventBroadcaster
/// Size: 0x0000 (0x000028 - 0x000028)
class UPropertyEventBroadcaster : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PropertyAccess.PropertyEventSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class UPropertyEventSubscriber : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/PropertyAccess.PropertyAccessSegment
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyAccessSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(class UStruct*)                            Struct                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UFunction*)                          Function                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(uint16_t)                                  Flags                                                       OFFSET(get<uint16_t>, {0x3C, 2, 0, 0})
};

/// Struct /Script/PropertyAccess.PropertyAccessPath
/// Size: 0x000C (0x000000 - 0x00000C)
class FPropertyAccessPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   PathSegmentStartIndex                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PathSegmentCount                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHasEvents                                                  OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /Script/PropertyAccess.PropertyAccessCopy
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyAccessCopy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   AccessIndex                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DestAccessStartIndex                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   DestAccessEndIndex                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EPropertyAccessCopyType)                   Type                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/PropertyAccess.PropertyAccessCopyBatch
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyAccessCopyBatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPropertyAccessCopy>)               Copies                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PropertyAccess.PropertyAccessIndirectionChain
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyAccessIndirectionChain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   IndirectionStartIndex                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   IndirectionEndIndex                                         OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   EventId                                                     OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/PropertyAccess.PropertyAccessIndirection
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyAccessIndirection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UFunction*)                          Function                                                    OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   ReturnBufferSize                                            OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   ReturnBufferAlignment                                       OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(uint32_t)                                  Offset                                                      OFFSET(get<uint32_t>, {0x34, 4, 0, 0})
	CMember(EPropertyAccessObjectType)                 ObjectType                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(EPropertyAccessIndirectionType)            Type                                                        OFFSET(get<T>, {0x39, 1, 0, 0})
};

/// Struct /Script/PropertyAccess.PropertyAccessLibrary
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FPropertyAccessLibrary : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FPropertyAccessSegment>)            PathSegments                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FPropertyAccessPath>)               SrcPaths                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FPropertyAccessPath>)               DestPaths                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FPropertyAccessCopyBatch)                  CopyBatches                                                 OFFSET(getStruct<T>, {0x30, 64, 0, 0})
	CMember(TArray<FPropertyAccessIndirectionChain>)   SrcAccesses                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FPropertyAccessIndirectionChain>)   DestAccesses                                                OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FPropertyAccessIndirection>)        Indirections                                                OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<int32_t>)                           EventAccessIndices                                          OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Enum /Script/PropertyAccess.EPropertyAccessCopyBatch
/// Size: 0x05
enum class EPropertyAccessCopyBatch : uint8_t
{
	EPropertyAccessCopyBatch__InternalUnbatched                                      = 0,
	EPropertyAccessCopyBatch__ExternalUnbatched                                      = 1,
	EPropertyAccessCopyBatch__InternalBatched                                        = 2,
	EPropertyAccessCopyBatch__ExternalBatched                                        = 3,
	EPropertyAccessCopyBatch__Count                                                  = 4
};

/// Enum /Script/PropertyAccess.EPropertyAccessCopyType
/// Size: 0x17
enum class EPropertyAccessCopyType : uint8_t
{
	EPropertyAccessCopyType__None                                                    = 0,
	EPropertyAccessCopyType__Plain                                                   = 1,
	EPropertyAccessCopyType__Complex                                                 = 2,
	EPropertyAccessCopyType__Bool                                                    = 3,
	EPropertyAccessCopyType__Struct                                                  = 4,
	EPropertyAccessCopyType__Object                                                  = 5,
	EPropertyAccessCopyType__Name                                                    = 6,
	EPropertyAccessCopyType__Array                                                   = 7,
	EPropertyAccessCopyType__PromoteBoolToByte                                       = 8,
	EPropertyAccessCopyType__PromoteBoolToInt32                                      = 9,
	EPropertyAccessCopyType__PromoteBoolToInt64                                      = 10,
	EPropertyAccessCopyType__PromoteBoolToFloat                                      = 11,
	EPropertyAccessCopyType__PromoteByteToInt32                                      = 12,
	EPropertyAccessCopyType__PromoteByteToInt64                                      = 13,
	EPropertyAccessCopyType__PromoteByteToFloat                                      = 14,
	EPropertyAccessCopyType__PromoteInt32ToInt64                                     = 15,
	EPropertyAccessCopyType__PromoteInt32ToFloat                                     = 16
};

/// Enum /Script/PropertyAccess.EPropertyAccessObjectType
/// Size: 0x04
enum class EPropertyAccessObjectType : uint8_t
{
	EPropertyAccessObjectType__None                                                  = 0,
	EPropertyAccessObjectType__Object                                                = 1,
	EPropertyAccessObjectType__WeakObject                                            = 2,
	EPropertyAccessObjectType__SoftObject                                            = 3
};

/// Enum /Script/PropertyAccess.EPropertyAccessIndirectionType
/// Size: 0x05
enum class EPropertyAccessIndirectionType : uint8_t
{
	EPropertyAccessIndirectionType__Offset                                           = 0,
	EPropertyAccessIndirectionType__Object                                           = 1,
	EPropertyAccessIndirectionType__Array                                            = 2,
	EPropertyAccessIndirectionType__ScriptFunction                                   = 3,
	EPropertyAccessIndirectionType__NativeFunction                                   = 4
};

