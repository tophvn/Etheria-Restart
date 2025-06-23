
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)


#pragma pack(pop)


static_assert(sizeof(FStructSerializerNumericTestStruct) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FStructSerializerBooleanTestStruct) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FStructSerializerObjectTestStruct) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FStructSerializerBuiltinTestStruct) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FStructSerializerArrayTestStruct) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FStructSerializerMapTestStruct) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(FStructSerializerSetTestStruct) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(FStructSerializerTestStruct) == 0x0450); // 1104 bytes (0x000000 - 0x000450)
static_assert(sizeof(FStructSerializerByteArray) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FStructSerializerObjectTestStruct, Class) == 0x0000);
static_assert(offsetof(FStructSerializerObjectTestStruct, SubClass) == 0x0008);
static_assert(offsetof(FStructSerializerObjectTestStruct, SoftClass) == 0x0010);
static_assert(offsetof(FStructSerializerObjectTestStruct, Object) == 0x0038);
static_assert(offsetof(FStructSerializerObjectTestStruct, WeakObject) == 0x0040);
static_assert(offsetof(FStructSerializerObjectTestStruct, SoftObject) == 0x0048);
static_assert(offsetof(FStructSerializerObjectTestStruct, ClassPath) == 0x0070);
static_assert(offsetof(FStructSerializerObjectTestStruct, ObjectPath) == 0x0088);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Guid) == 0x0000);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Name) == 0x0010);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, String) == 0x0018);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Text) == 0x0028);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector) == 0x0040);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Vector4) == 0x0050);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Rotator) == 0x0060);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Quat) == 0x0070);
static_assert(offsetof(FStructSerializerBuiltinTestStruct, Color) == 0x0080);
static_assert(offsetof(FStructSerializerArrayTestStruct, Int32Array) == 0x0000);
static_assert(offsetof(FStructSerializerArrayTestStruct, ByteArray) == 0x0010);
static_assert(offsetof(FStructSerializerArrayTestStruct, VectorArray) == 0x0040);
static_assert(offsetof(FStructSerializerArrayTestStruct, StructArray) == 0x0050);
static_assert(offsetof(FStructSerializerMapTestStruct, IntToStr) == 0x0000);
static_assert(offsetof(FStructSerializerMapTestStruct, StrToStr) == 0x0050);
static_assert(offsetof(FStructSerializerMapTestStruct, StrToVec) == 0x00A0);
static_assert(offsetof(FStructSerializerMapTestStruct, StrToStruct) == 0x00F0);
static_assert(offsetof(FStructSerializerTestStruct, Numerics) == 0x0000);
static_assert(offsetof(FStructSerializerTestStruct, Booleans) == 0x0030);
static_assert(offsetof(FStructSerializerTestStruct, Objects) == 0x0038);
static_assert(offsetof(FStructSerializerTestStruct, Builtins) == 0x00E0);
static_assert(offsetof(FStructSerializerTestStruct, Arrays) == 0x0170);
static_assert(offsetof(FStructSerializerTestStruct, Maps) == 0x01D0);
static_assert(offsetof(FStructSerializerTestStruct, Sets) == 0x0310);
static_assert(offsetof(FStructSerializerByteArray, ByteArray) == 0x0008);
static_assert(offsetof(FStructSerializerByteArray, Int8Array) == 0x0020);
