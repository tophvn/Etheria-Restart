
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KV_ReturnCode.KV_ReturnCodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKV_ReturnCodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KV_ReturnCode.KV_ReturnCodeLibrary.ReloadReturnCodeConfig
	// void ReloadReturnCodeConfig();                                                                                           // [0x9bfa70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_ReturnCode.KV_ReturnCodeLibrary.MakeUniformReturnCode
	// int32_t MakeUniformReturnCode(FString TypeName, int32_t CodeNum);                                                        // [0x9bf990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_ReturnCode.KV_ReturnCodeLibrary.HandleReturnCode
	// EKV_RetHandleResult HandleReturnCode(int32_t UniformRet, FString Message);                                               // [0x9bf8b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_ReturnCode.KV_ReturnCodeLibrary.GetMessageByCode
	// FString GetMessageByCode(int32_t UniformRet);                                                                            // [0x9bf7e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/KV_ReturnCode.ReturnCodeSpace
/// Size: 0x0040 (0x000000 - 0x000040)
class FReturnCodeSpace : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   TypeCode                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(TWeakObjectPtr<class UDataTable*>)         DataTable                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Class /Script/KV_ReturnCode.KV_ReturnCodeSetting
/// Size: 0x0028 (0x000028 - 0x000050)
class UKV_ReturnCodeSetting : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FReturnCodeSpace>)                  Declarations                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FText)                                     DefaultMessageFormat                                        OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/KV_ReturnCode.KV_ReturnCodeStruct
/// Size: 0x0038 (0x000008 - 0x000040)
class FKV_ReturnCodeStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   CodeNum                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   CodeName                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     CodeMessage                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(EKV_ReturnCodeType)                        CodeType                                                    OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Enum /Script/KV_ReturnCode.EKV_RetHandleResult
/// Size: 0x03
enum class EKV_RetHandleResult : uint8_t
{
	EKV_RetHandleResult__RES_Succeed                                                 = 0,
	EKV_RetHandleResult__RES_Handled                                                 = 1,
	EKV_RetHandleResult__RES_Unhandled                                               = 2
};

/// Enum /Script/KV_ReturnCode.EKV_ReturnCodeType
/// Size: 0x11
enum class EKV_ReturnCodeType : uint8_t
{
	EKV_ReturnCodeType__RT_GeneralError                                              = 0,
	EKV_ReturnCodeType__RT_VerifyExpire                                              = 1,
	EKV_ReturnCodeType__RT_GameLogout                                                = 2,
	EKV_ReturnCodeType__RT_AccountLogout                                             = 3,
	EKV_ReturnCodeType__RT_AccountExpire                                             = 4,
	EKV_ReturnCodeType__RT_NeedUpdate                                                = 5,
	EKV_ReturnCodeType__RT_NeedPatch                                                 = 6,
	EKV_ReturnCodeType__RT_Corrupted                                                 = 7,
	EKV_ReturnCodeType__RT_ServerInvalid                                             = 8,
	EKV_ReturnCodeType__RT_NeedRegister                                              = 9,
	EKV_ReturnCodeType__RT_Succeed                                                   = 255
};

