
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ACLPlugin.AnimationCompressionLibraryDatabase
/// Size: 0x00F8 (0x000028 - 0x000120)
class UAnimationCompressionLibraryDatabase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<char>)                              CookedCompressedBytes                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<uint64_t>)                          CookedAnimSequenceMappings                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(uint32_t)                                  MaxStreamRequestSizeKB                                      OFFSET(get<uint32_t>, {0x118, 4, 0, 0})
	CMember(ACLVisualFidelity)                         DefaultVisualFidelity                                       OFFSET(get<T>, {0x11C, 1, 0, 0})


	/// Functions
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
	// void SetVisualFidelity(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity); // [0x1256710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
	// ACLVisualFidelity GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset);                          // [0x1256680] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLBase
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACL
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLCustom
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UAnimationCompressionLibraryDatabase*) DatabaseAsset                                             OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLSafe
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ACLPlugin.AnimCurveCompressionCodec_ACL
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/ACLPlugin.ACLCompressionLevel
/// Size: 0x06
enum class ACLCompressionLevel : uint8_t
{
	ACLCL_Lowest                                                                     = 0,
	ACLCL_Low                                                                        = 1,
	ACLCL_Medium                                                                     = 2,
	ACLCL_High                                                                       = 3,
	ACLCL_Highest                                                                    = 4,
	ACLCL_Automatic                                                                  = 5
};

/// Enum /Script/ACLPlugin.ACLVectorFormat
/// Size: 0x02
enum class ACLVectorFormat : uint8_t
{
	ACLVF_Vector3                                                                    = 0,
	ACLVF_Vector3_Variable                                                           = 1
};

/// Enum /Script/ACLPlugin.ACLRotationFormat
/// Size: 0x03
enum class ACLRotationFormat : uint8_t
{
	ACLRF_Quat                                                                       = 0,
	ACLRF_QuatDropW                                                                  = 1,
	ACLRF_QuatDropW_Variable                                                         = 2
};

/// Enum /Script/ACLPlugin.ACLVisualFidelityChangeResult
/// Size: 0x03
enum class ACLVisualFidelityChangeResult : uint8_t
{
	ACLVisualFidelityChangeResult__Dispatched                                        = 0,
	ACLVisualFidelityChangeResult__Completed                                         = 1,
	ACLVisualFidelityChangeResult__Failed                                            = 2
};

/// Enum /Script/ACLPlugin.ACLVisualFidelity
/// Size: 0x03
enum class ACLVisualFidelity : uint8_t
{
	ACLVisualFidelity__Highest                                                       = 0,
	ACLVisualFidelity__Medium                                                        = 1,
	ACLVisualFidelity__Lowest                                                        = 2
};

