
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UPropertyAccess;
class UPropertyEventBroadcaster;
class UPropertyEventSubscriber;

/// Enum /Script/PropertyAccess.EPropertyAccessCopyBatch
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessCopyBatch : uint8_t
{
	EPropertyAccessCopyBatch__InternalUnbatched                                      = 0,
	EPropertyAccessCopyBatch__ExternalUnbatched                                      = 1,
	EPropertyAccessCopyBatch__InternalBatched                                        = 2,
	EPropertyAccessCopyBatch__ExternalBatched                                        = 3,
	EPropertyAccessCopyBatch__Count                                                  = 4
};

/// Enum /Script/PropertyAccess.EPropertyAccessCopyType
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessObjectType : uint8_t
{
	EPropertyAccessObjectType__None                                                  = 0,
	EPropertyAccessObjectType__Object                                                = 1,
	EPropertyAccessObjectType__WeakObject                                            = 2,
	EPropertyAccessObjectType__SoftObject                                            = 3
};

/// Enum /Script/PropertyAccess.EPropertyAccessIndirectionType
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessIndirectionType : uint8_t
{
	EPropertyAccessIndirectionType__Offset                                           = 0,
	EPropertyAccessIndirectionType__Object                                           = 1,
	EPropertyAccessIndirectionType__Array                                            = 2,
	EPropertyAccessIndirectionType__ScriptFunction                                   = 3,
	EPropertyAccessIndirectionType__NativeFunction                                   = 4
};

#pragma pack(pop)


static_assert(sizeof(UPropertyAccess) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPropertyEventBroadcaster) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPropertyEventSubscriber) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPropertyAccessSegment) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPropertyAccessPath) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FPropertyAccessCopy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPropertyAccessCopyBatch) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPropertyAccessIndirectionChain) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPropertyAccessIndirection) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPropertyAccessLibrary) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(offsetof(FPropertyAccessSegment, Name) == 0x0000);
static_assert(offsetof(FPropertyAccessSegment, Struct) == 0x0008);
static_assert(offsetof(FPropertyAccessSegment, Function) == 0x0030);
static_assert(offsetof(FPropertyAccessCopy, Type) == 0x000C);
static_assert(offsetof(FPropertyAccessCopyBatch, Copies) == 0x0000);
static_assert(offsetof(FPropertyAccessIndirection, Function) == 0x0020);
static_assert(offsetof(FPropertyAccessIndirection, ObjectType) == 0x0038);
static_assert(offsetof(FPropertyAccessIndirection, Type) == 0x0039);
static_assert(offsetof(FPropertyAccessLibrary, PathSegments) == 0x0000);
static_assert(offsetof(FPropertyAccessLibrary, SrcPaths) == 0x0010);
static_assert(offsetof(FPropertyAccessLibrary, DestPaths) == 0x0020);
static_assert(offsetof(FPropertyAccessLibrary, CopyBatches) == 0x0030);
static_assert(offsetof(FPropertyAccessLibrary, SrcAccesses) == 0x0070);
static_assert(offsetof(FPropertyAccessLibrary, DestAccesses) == 0x0080);
static_assert(offsetof(FPropertyAccessLibrary, Indirections) == 0x0090);
static_assert(offsetof(FPropertyAccessLibrary, EventAccessIndices) == 0x00A0);
