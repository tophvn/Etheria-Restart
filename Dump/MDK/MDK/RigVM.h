
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/RigVM.RigVMRegister
/// Size: 0x0024 (0x000000 - 0x000024)
class FRigVMRegister : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(ERigVMRegisterType)                        Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  ByteIndex                                                   OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint16_t)                                  ElementSize                                                 OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  ElementCount                                                OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(uint16_t)                                  SliceCount                                                  OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(char)                                      AlignmentBytes                                              OFFSET(get<char>, {0xE, 1, 0, 0})
	DMember(uint16_t)                                  TrailingBytes                                               OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	DMember(int32_t)                                   ScriptStructIndex                                           OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bIsArray                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bIsDynamic                                                  OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMRegisterOffset
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigVMRegisterOffset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<int32_t>)                           Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ERigVMRegisterType)                        Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     CPPType                                                     OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	CMember(class UScriptStruct*)                      ScriptStruct                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UScriptStruct*)                      ParentScriptStruct                                          OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(uint16_t)                                  ElementSize                                                 OFFSET(get<uint16_t>, {0x34, 2, 0, 0})
	SMember(FString)                                   CachedSegmentPath                                           OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMMemoryContainer
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FRigVMMemoryContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bUseNameMap                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ERigVMMemoryType)                          MemoryType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TArray<FRigVMRegister>)                    Registers                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigVMRegisterOffset>)              RegisterOffsets                                             OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UScriptStruct*>)              ScriptStructs                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      NameMap                                                     OFFSET(get<T>, {0x48, 80, 0, 0})
	DMember(bool)                                      bEncounteredErrorDuringLoad                                 OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMByteCodeEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigVMByteCodeEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   InstructionIndex                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMByteCode
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigVMByteCode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<char>)                              ByteCode                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   NumInstructions                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<FRigVMByteCodeEntry>)               Entries                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMInstruction
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMInstruction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  ByteCodeIndex                                               OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	CMember(ERigVMOpCode)                              OpCode                                                      OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(char)                                      OperandAlignment                                            OFFSET(get<char>, {0x9, 1, 0, 0})
};

/// Struct /Script/RigVM.RigVMInstructionArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigVMInstructionArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigVMInstruction>)                 Instructions                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/RigVM.RigVMExecuteContext
/// Size: 0x0058 (0x000000 - 0x000058)
class FRigVMExecuteContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/RigVM.RigVMParameter
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigVMParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ERigVMParameterType)                       Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(int32_t)                                   RegisterIndex                                               OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   CPPType                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(class UScriptStruct*)                      ScriptStruct                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     ScriptStructPath                                            OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Class /Script/RigVM.RigVM
/// Size: 0x02D0 (0x000028 - 0x0002F8)
class URigVM : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FRigVMMemoryContainer)                     WorkMemoryStorage                                           OFFSET(getStruct<T>, {0x28, 160, 0, 0})
	SMember(FRigVMMemoryContainer)                     LiteralMemoryStorage                                        OFFSET(getStruct<T>, {0xD0, 160, 0, 0})
	SMember(FRigVMByteCode)                            ByteCodeStorage                                             OFFSET(getStruct<T>, {0x178, 48, 0, 0})
	SMember(FRigVMInstructionArray)                    Instructions                                                OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FRigVMExecuteContext)                      Context                                                     OFFSET(getStruct<T>, {0x1C0, 88, 0, 0})
	CMember(TArray<FName>)                             FunctionNamesStorage                                        OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(TArray<FRigVMParameter>)                   Parameters                                                  OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      ParametersNameMap                                           OFFSET(get<T>, {0x258, 80, 0, 0})
	CMember(class URigVM*)                             DeferredVMToCopy                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/RigVM.RigVM.SetParameterValueVector2D
	// void SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex);                        // [0x3600b80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueVector
	// void SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex);                            // [0x3600cb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueTransform
	// void SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex);                      // [0x3600a00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueString
	// void SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex);                             // [0x36008d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueQuat
	// void SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex);                                // [0x36007a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueName
	// void SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex);                                // [0x3600670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueInt
	// void SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex);                                // [0x3600550] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueFloat
	// void SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex);                                // [0x3600420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueBool
	// void SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex);                                  // [0x36002f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetRigVMFunctionName
	// FString GetRigVMFunctionName(int32_t InFunctionIndex);                                                                   // [0x3600210] Final|Native|Public|Const 
	// Function /Script/RigVM.RigVM.GetParameterValueVector2D
	// FVector2D GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex);                                       // [0x3600000] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueVector
	// FVector GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex);                                           // [0x36000f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueTransform
	// FTransform GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex);                                     // [0x35ffeb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueString
	// FString GetParameterValueString(FName& InParameterName, int32_t InArrayIndex);                                           // [0x35ffd60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueQuat
	// FQuat GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex);                                               // [0x35ffc50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueName
	// FName GetParameterValueName(FName& InParameterName, int32_t InArrayIndex);                                               // [0x35ffb60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueInt
	// int32_t GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex);                                              // [0x35ffa70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueFloat
	// float GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex);                                              // [0x35ff980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueBool
	// bool GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex);                                                // [0x35ff890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterArraySize
	// int32_t GetParameterArraySize(FName& InParameterName);                                                                   // [0x35ff740] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVM.Execute
	// bool Execute(FName& InEntryName);                                                                                        // [0x35ff6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.AddRigVMFunction
	// int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, FName& InMethodName);                                       // [0x35ff5c0] Final|Native|Public|HasOutParms 
};

/// Struct /Script/RigVM.RigVMStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigVMStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMBaseOp
/// Size: 0x0001 (0x000000 - 0x000001)
class FRigVMBaseOp : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/RigVM.RigVMUnaryOp
/// Size: 0x0007 (0x000001 - 0x000008)
class FRigVMUnaryOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMChangeTypeOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMChangeTypeOp : public FRigVMUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMJumpIfOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigVMJumpIfOp : public FRigVMUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/RigVM.RigVMJumpOp
/// Size: 0x0007 (0x000001 - 0x000008)
class FRigVMJumpOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/RigVM.RigVMComparisonOp
/// Size: 0x0013 (0x000001 - 0x000014)
class FRigVMComparisonOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/RigVM.RigVMCopyOp
/// Size: 0x000D (0x000001 - 0x00000E)
class FRigVMCopyOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14;

public:
};

/// Struct /Script/RigVM.RigVMBinaryOp
/// Size: 0x000D (0x000001 - 0x00000E)
class FRigVMBinaryOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14;

public:
};

/// Struct /Script/RigVM.RigVMExecuteOp
/// Size: 0x0003 (0x000001 - 0x000004)
class FRigVMExecuteOp : public FRigVMBaseOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/RigVM.RigVMSlice
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigVMSlice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/RigVM.RigVMOperand
/// Size: 0x0006 (0x000000 - 0x000006)
class FRigVMOperand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	CMember(ERigVMMemoryType)                          MemoryType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  RegisterIndex                                               OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  RegisterOffset                                              OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/RigVM.RigVMMemoryStatistics
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigVMMemoryStatistics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(uint32_t)                                  RegisterCount                                               OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  DataBytes                                                   OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  TotalBytes                                                  OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMByteCodeStatistics
/// Size: 0x0008 (0x000000 - 0x000008)
class FRigVMByteCodeStatistics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  InstructionCount                                            OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  DataBytes                                                   OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/RigVM.RigVMStatistics
/// Size: 0x002C (0x000000 - 0x00002C)
class FRigVMStatistics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(uint32_t)                                  BytesForCDO                                                 OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  BytesPerInstance                                            OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	SMember(FRigVMMemoryStatistics)                    LiteralMemory                                               OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigVMMemoryStatistics)                    WorkMemory                                                  OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(uint32_t)                                  BytesForCaching                                             OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
	SMember(FRigVMByteCodeStatistics)                  ByteCode                                                    OFFSET(getStruct<T>, {0x24, 8, 0, 0})
};

/// Enum /Script/RigVM.ERigVMParameterType
/// Size: 0x03
enum class ERigVMParameterType : uint8_t
{
	ERigVMParameterType__Input                                                       = 0,
	ERigVMParameterType__Output                                                      = 1,
	ERigVMParameterType__Invalid                                                     = 2
};

/// Enum /Script/RigVM.ERigVMOpCode
/// Size: 0x84
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
/// Size: 0x06
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
/// Size: 0x05
enum class ERigVMRegisterType : uint8_t
{
	ERigVMRegisterType__Plain                                                        = 0,
	ERigVMRegisterType__String                                                       = 1,
	ERigVMRegisterType__Name                                                         = 2,
	ERigVMRegisterType__Struct                                                       = 3,
	ERigVMRegisterType__Invalid                                                      = 4
};

/// Enum /Script/RigVM.ERigVMMemoryType
/// Size: 0x04
enum class ERigVMMemoryType : uint8_t
{
	ERigVMMemoryType__Work                                                           = 0,
	ERigVMMemoryType__Literal                                                        = 1,
	ERigVMMemoryType__External                                                       = 2,
	ERigVMMemoryType__Invalid                                                        = 3
};

