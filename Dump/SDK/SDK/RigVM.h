
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class URigVM;

/// Enum /Script/RigVM.ERigVMParameterType
/// Size: 0x01 (1 bytes)
enum class ERigVMParameterType : uint8_t
{
	ERigVMParameterType__Input                                                       = 0,
	ERigVMParameterType__Output                                                      = 1,
	ERigVMParameterType__Invalid                                                     = 2
};

/// Enum /Script/RigVM.ERigVMOpCode
/// Size: 0x01 (1 bytes)
enum class ERigVMOpCode : uint8_t
{
	ERigVMOpCode__Execute_0_Operands                                                 = 0,
	ERigVMOpCode__Execute_1_Operands                                                 = 1,
	ERigVMOpCode__Execute_2_Operands                                                 = 2,
	ERigVMOpCode__Execute_3_Operands                                                 = 3,
	ERigVMOpCode__Execute_4_Operands                                                 = 4,
	ERigVMOpCode__Execute_5_Operands                                                 = 5,
	ERigVMOpCode__Execute_6_Operands                                                 = 6,
	ERigVMOpCode__Execute_7_Operands                                                 = 7,
	ERigVMOpCode__Execute_8_Operands                                                 = 8,
	ERigVMOpCode__Execute_9_Operands                                                 = 9,
	ERigVMOpCode__Execute_10_Operands                                                = 10,
	ERigVMOpCode__Execute_11_Operands                                                = 11,
	ERigVMOpCode__Execute_12_Operands                                                = 12,
	ERigVMOpCode__Execute_13_Operands                                                = 13,
	ERigVMOpCode__Execute_14_Operands                                                = 14,
	ERigVMOpCode__Execute_15_Operands                                                = 15,
	ERigVMOpCode__Execute_16_Operands                                                = 16,
	ERigVMOpCode__Execute_17_Operands                                                = 17,
	ERigVMOpCode__Execute_18_Operands                                                = 18,
	ERigVMOpCode__Execute_19_Operands                                                = 19,
	ERigVMOpCode__Execute_20_Operands                                                = 20,
	ERigVMOpCode__Execute_21_Operands                                                = 21,
	ERigVMOpCode__Execute_22_Operands                                                = 22,
	ERigVMOpCode__Execute_23_Operands                                                = 23,
	ERigVMOpCode__Execute_24_Operands                                                = 24,
	ERigVMOpCode__Execute_25_Operands                                                = 25,
	ERigVMOpCode__Execute_26_Operands                                                = 26,
	ERigVMOpCode__Execute_27_Operands                                                = 27,
	ERigVMOpCode__Execute_28_Operands                                                = 28,
	ERigVMOpCode__Execute_29_Operands                                                = 29,
	ERigVMOpCode__Execute_30_Operands                                                = 30,
	ERigVMOpCode__Execute_31_Operands                                                = 31,
	ERigVMOpCode__Execute_32_Operands                                                = 32,
	ERigVMOpCode__Execute_33_Operands                                                = 33,
	ERigVMOpCode__Execute_34_Operands                                                = 34,
	ERigVMOpCode__Execute_35_Operands                                                = 35,
	ERigVMOpCode__Execute_36_Operands                                                = 36,
	ERigVMOpCode__Execute_37_Operands                                                = 37,
	ERigVMOpCode__Execute_38_Operands                                                = 38,
	ERigVMOpCode__Execute_39_Operands                                                = 39,
	ERigVMOpCode__Execute_40_Operands                                                = 40,
	ERigVMOpCode__Execute_41_Operands                                                = 41,
	ERigVMOpCode__Execute_42_Operands                                                = 42,
	ERigVMOpCode__Execute_43_Operands                                                = 43,
	ERigVMOpCode__Execute_44_Operands                                                = 44,
	ERigVMOpCode__Execute_45_Operands                                                = 45,
	ERigVMOpCode__Execute_46_Operands                                                = 46,
	ERigVMOpCode__Execute_47_Operands                                                = 47,
	ERigVMOpCode__Execute_48_Operands                                                = 48,
	ERigVMOpCode__Execute_49_Operands                                                = 49,
	ERigVMOpCode__Execute_50_Operands                                                = 50,
	ERigVMOpCode__Execute_51_Operands                                                = 51,
	ERigVMOpCode__Execute_52_Operands                                                = 52,
	ERigVMOpCode__Execute_53_Operands                                                = 53,
	ERigVMOpCode__Execute_54_Operands                                                = 54,
	ERigVMOpCode__Execute_55_Operands                                                = 55,
	ERigVMOpCode__Execute_56_Operands                                                = 56,
	ERigVMOpCode__Execute_57_Operands                                                = 57,
	ERigVMOpCode__Execute_58_Operands                                                = 58,
	ERigVMOpCode__Execute_59_Operands                                                = 59,
	ERigVMOpCode__Execute_60_Operands                                                = 60,
	ERigVMOpCode__Execute_61_Operands                                                = 61,
	ERigVMOpCode__Execute_62_Operands                                                = 62,
	ERigVMOpCode__Execute_63_Operands                                                = 63,
	ERigVMOpCode__Execute_64_Operands                                                = 64,
	ERigVMOpCode__Zero                                                               = 65,
	ERigVMOpCode__BoolFalse                                                          = 66,
	ERigVMOpCode__BoolTrue                                                           = 67,
	ERigVMOpCode__Copy                                                               = 68,
	ERigVMOpCode__Increment                                                          = 69,
	ERigVMOpCode__Decrement                                                          = 70,
	ERigVMOpCode__Equals                                                             = 71,
	ERigVMOpCode__NotEquals                                                          = 72,
	ERigVMOpCode__JumpAbsolute                                                       = 73,
	ERigVMOpCode__JumpForward                                                        = 74,
	ERigVMOpCode__JumpBackward                                                       = 75,
	ERigVMOpCode__JumpAbsoluteIf                                                     = 76,
	ERigVMOpCode__JumpForwardIf                                                      = 77,
	ERigVMOpCode__JumpBackwardIf                                                     = 78,
	ERigVMOpCode__ChangeType                                                         = 79,
	ERigVMOpCode__Exit                                                               = 80,
	ERigVMOpCode__BeginBlock                                                         = 81,
	ERigVMOpCode__EndBlock                                                           = 82,
	ERigVMOpCode__Invalid                                                            = 83
};

/// Enum /Script/RigVM.ERigVMPinDirection
/// Size: 0x01 (1 bytes)
enum class ERigVMPinDirection : uint8_t
{
	ERigVMPinDirection__Input                                                        = 0,
	ERigVMPinDirection__Output                                                       = 1,
	ERigVMPinDirection__IO                                                           = 2,
	ERigVMPinDirection__Visible                                                      = 3,
	ERigVMPinDirection__Hidden                                                       = 4,
	ERigVMPinDirection__Invalid                                                      = 5
};

/// Enum /Script/RigVM.ERigVMRegisterType
/// Size: 0x01 (1 bytes)
enum class ERigVMRegisterType : uint8_t
{
	ERigVMRegisterType__Plain                                                        = 0,
	ERigVMRegisterType__String                                                       = 1,
	ERigVMRegisterType__Name                                                         = 2,
	ERigVMRegisterType__Struct                                                       = 3,
	ERigVMRegisterType__Invalid                                                      = 4
};

/// Enum /Script/RigVM.ERigVMMemoryType
/// Size: 0x01 (1 bytes)
enum class ERigVMMemoryType : uint8_t
{
	ERigVMMemoryType__Work                                                           = 0,
	ERigVMMemoryType__Literal                                                        = 1,
	ERigVMMemoryType__External                                                       = 2,
	ERigVMMemoryType__Invalid                                                        = 3
};

#pragma pack(pop)


static_assert(sizeof(FRigVMRegister) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FRigVMRegisterOffset) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigVMMemoryContainer) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FRigVMByteCodeEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMByteCode) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigVMInstruction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMInstructionArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMExecuteContext) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRigVMParameter) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(URigVM) == 0x02F8); // 760 bytes (0x000028 - 0x0002F8)
static_assert(sizeof(FRigVMStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRigVMBaseOp) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRigVMUnaryOp) == 0x0008); // 8 bytes (0x000001 - 0x000008)
static_assert(sizeof(FRigVMChangeTypeOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMJumpIfOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMJumpOp) == 0x0008); // 8 bytes (0x000001 - 0x000008)
static_assert(sizeof(FRigVMComparisonOp) == 0x0014); // 20 bytes (0x000001 - 0x000014)
static_assert(sizeof(FRigVMCopyOp) == 0x000E); // 14 bytes (0x000001 - 0x00000E)
static_assert(sizeof(FRigVMBinaryOp) == 0x000E); // 14 bytes (0x000001 - 0x00000E)
static_assert(sizeof(FRigVMExecuteOp) == 0x0004); // 4 bytes (0x000001 - 0x000004)
static_assert(sizeof(FRigVMSlice) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMOperand) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FRigVMMemoryStatistics) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMByteCodeStatistics) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRigVMStatistics) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(offsetof(FRigVMRegister, Type) == 0x0000);
static_assert(offsetof(FRigVMRegister, Name) == 0x0014);
static_assert(offsetof(FRigVMRegisterOffset, Segments) == 0x0000);
static_assert(offsetof(FRigVMRegisterOffset, Type) == 0x0010);
static_assert(offsetof(FRigVMRegisterOffset, CPPType) == 0x0014);
static_assert(offsetof(FRigVMRegisterOffset, ScriptStruct) == 0x0020);
static_assert(offsetof(FRigVMRegisterOffset, ParentScriptStruct) == 0x0028);
static_assert(offsetof(FRigVMRegisterOffset, CachedSegmentPath) == 0x0038);
static_assert(offsetof(FRigVMMemoryContainer, MemoryType) == 0x0001);
static_assert(offsetof(FRigVMMemoryContainer, Registers) == 0x0008);
static_assert(offsetof(FRigVMMemoryContainer, RegisterOffsets) == 0x0018);
static_assert(offsetof(FRigVMMemoryContainer, Data) == 0x0028);
static_assert(offsetof(FRigVMMemoryContainer, ScriptStructs) == 0x0038);
static_assert(offsetof(FRigVMMemoryContainer, NameMap) == 0x0048);
static_assert(offsetof(FRigVMByteCodeEntry, Name) == 0x0000);
static_assert(offsetof(FRigVMByteCode, ByteCode) == 0x0000);
static_assert(offsetof(FRigVMByteCode, Entries) == 0x0018);
static_assert(offsetof(FRigVMInstruction, OpCode) == 0x0008);
static_assert(offsetof(FRigVMInstructionArray, Instructions) == 0x0000);
static_assert(offsetof(FRigVMParameter, Type) == 0x0000);
static_assert(offsetof(FRigVMParameter, Name) == 0x0004);
static_assert(offsetof(FRigVMParameter, CPPType) == 0x0010);
static_assert(offsetof(FRigVMParameter, ScriptStruct) == 0x0020);
static_assert(offsetof(FRigVMParameter, ScriptStructPath) == 0x0028);
static_assert(offsetof(URigVM, WorkMemoryStorage) == 0x0028);
static_assert(offsetof(URigVM, LiteralMemoryStorage) == 0x00D0);
static_assert(offsetof(URigVM, ByteCodeStorage) == 0x0178);
static_assert(offsetof(URigVM, Instructions) == 0x01B0);
static_assert(offsetof(URigVM, Context) == 0x01C0);
static_assert(offsetof(URigVM, FunctionNamesStorage) == 0x0218);
static_assert(offsetof(URigVM, Parameters) == 0x0248);
static_assert(offsetof(URigVM, ParametersNameMap) == 0x0258);
static_assert(offsetof(URigVM, DeferredVMToCopy) == 0x02F0);
static_assert(offsetof(FRigVMOperand, MemoryType) == 0x0000);
static_assert(offsetof(FRigVMStatistics, LiteralMemory) == 0x0008);
static_assert(offsetof(FRigVMStatistics, WorkMemory) == 0x0014);
static_assert(offsetof(FRigVMStatistics, ByteCode) == 0x0024);
