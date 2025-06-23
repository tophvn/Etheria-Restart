
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/Serialization.StructSerializerNumericTestStruct
/// Size: 0x0030 (0x000000 - 0x000030)
class FStructSerializerNumericTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int8_t)                                    int8                                                        OFFSET(get<int8_t>, {0x0, 1, 0, 0})
	DMember(int16_t)                                   int16                                                       OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int32_t)                                   int32                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   int64                                                       OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(char)                                      uint8                                                       OFFSET(get<char>, {0x10, 1, 0, 0})
	DMember(uint16_t)                                  uint16                                                      OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
	DMember(uint32_t)                                  uint32                                                      OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(uint64_t)                                  uint64                                                      OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
	DMember(float)                                     float0                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(double)                                    Double                                                      OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerBooleanTestStruct
/// Size: 0x0003 (0x000000 - 0x000003)
class FStructSerializerBooleanTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      BoolFalse                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      BoolTrue                                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      Bitfield0                                                   OFFSET(get<bool>, {0x2, 1, 1, 0})
	DMember(bool)                                      Bitfield1                                                   OFFSET(get<bool>, {0x2, 1, 1, 1})
	DMember(bool)                                      Bitfield2Set                                                OFFSET(get<bool>, {0x2, 1, 1, 2})
	DMember(bool)                                      Bitfield3                                                   OFFSET(get<bool>, {0x2, 1, 1, 3})
	DMember(bool)                                      Bitfield4Set                                                OFFSET(get<bool>, {0x2, 1, 1, 4})
	DMember(bool)                                      Bitfield5Set                                                OFFSET(get<bool>, {0x2, 1, 1, 5})
	DMember(bool)                                      Bitfield6                                                   OFFSET(get<bool>, {0x2, 1, 1, 6})
	DMember(bool)                                      Bitfield7Set                                                OFFSET(get<bool>, {0x2, 1, 1, 7})
};

/// Struct /Script/Serialization.StructSerializerObjectTestStruct
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FStructSerializerObjectTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             SubClass                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             SoftClass                                                   OFFSET(get<T>, {0x10, 40, 0, 0})
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMetaData*>)          WeakObject                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMetaData*>)          SoftObject                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FSoftClassPath)                            ClassPath                                                   OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPath                                                  OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerBuiltinTestStruct
/// Size: 0x0090 (0x000000 - 0x000090)
class FStructSerializerBuiltinTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FVector4)                                  Vector4                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	SMember(FQuat)                                     Quat                                                        OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x80, 4, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerArrayTestStruct
/// Size: 0x0060 (0x000000 - 0x000060)
class FStructSerializerArrayTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<int32_t>)                           Int32Array                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<char>)                              ByteArray                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   StaticSingleElement                                         OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   StaticInt32Array                                            OFFSET(get<int32_t>, {0x24, 12, 0, 0})
	DMember(float)                                     StaticFloatArray                                            OFFSET(get<float>, {0x30, 12, 0, 0})
	CMember(TArray<FVector>)                           VectorArray                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FStructSerializerBuiltinTestStruct>) StructArray                                                OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerMapTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
class FStructSerializerMapTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TMap<int32_t, FString>)                    IntToStr                                                    OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FString, FString>)                    StrToStr                                                    OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FString, FVector>)                    StrToVec                                                    OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<FString, FStructSerializerBuiltinTestStruct>) StrToStruct                                         OFFSET(get<T>, {0xF0, 80, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerSetTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
class FStructSerializerSetTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TSet<FString>)                             StrSet                                                      OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<int32_t>)                             IntSet                                                      OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TSet<FName>)                               NameSet                                                     OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TSet<FStructSerializerBuiltinTestStruct>)  StructSet                                                   OFFSET(get<T>, {0xF0, 80, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerTestStruct
/// Size: 0x0450 (0x000000 - 0x000450)
class FStructSerializerTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FStructSerializerNumericTestStruct)        Numerics                                                    OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FStructSerializerBooleanTestStruct)        Booleans                                                    OFFSET(getStruct<T>, {0x30, 3, 0, 0})
	SMember(FStructSerializerObjectTestStruct)         Objects                                                     OFFSET(getStruct<T>, {0x38, 160, 0, 0})
	SMember(FStructSerializerBuiltinTestStruct)        Builtins                                                    OFFSET(getStruct<T>, {0xE0, 144, 0, 0})
	SMember(FStructSerializerArrayTestStruct)          Arrays                                                      OFFSET(getStruct<T>, {0x170, 96, 0, 0})
	SMember(FStructSerializerMapTestStruct)            Maps                                                        OFFSET(getStruct<T>, {0x1D0, 320, 0, 0})
	SMember(FStructSerializerSetTestStruct)            Sets                                                        OFFSET(getStruct<T>, {0x310, 320, 0, 0})
};

/// Struct /Script/Serialization.StructSerializerByteArray
/// Size: 0x0038 (0x000000 - 0x000038)
class FStructSerializerByteArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Dummy1                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              ByteArray                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Dummy2                                                      OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<int8_t>)                            Int8Array                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   Dummy3                                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

