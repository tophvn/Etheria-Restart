
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)


/// Enum /Script/ObjectReferenceViewerRuntime.EObjectType
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class EShowItemSortType : uint8_t
{
	EShowItemSortType__Type_Name                                                     = 0,
	EShowItemSortType__Type_Size                                                     = 1,
	EShowItemSortType__Type_Count                                                    = 2
};

#pragma pack(pop)


static_assert(sizeof(FJustForGenerateHeadFile) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FIndexCollection) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRDInfo) == 0x0148); // 328 bytes (0x000000 - 0x000148)
static_assert(sizeof(FRDObjectInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FIndexCollection, Indexes) == 0x0000);
static_assert(offsetof(FRDInfo, ObjectId2NameMap) == 0x0000);
static_assert(offsetof(FRDInfo, ObjectReferenceMap) == 0x0050);
static_assert(offsetof(FRDInfo, ObjectId2TypesMap) == 0x00A0);
static_assert(offsetof(FRDInfo, ObjectId2SizeMap) == 0x00F0);
static_assert(offsetof(FRDInfo, CreateTime) == 0x0140);
static_assert(offsetof(FRDObjectInfo, Name) == 0x0004);
