
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAnimBoneCompressionCodec_ACL;
class UAnimBoneCompressionCodec_ACLBase;
class UAnimBoneCompressionCodec_ACLCustom;
class UAnimBoneCompressionCodec_ACLDatabase;
class UAnimBoneCompressionCodec_ACLSafe;
class UAnimCurveCompressionCodec_ACL;
class UAnimationCompressionLibraryDatabase;

/// Enum /Script/ACLPlugin.ACLCompressionLevel
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class ACLVectorFormat : uint8_t
{
	ACLVF_Vector3                                                                    = 0,
	ACLVF_Vector3_Variable                                                           = 1
};

/// Enum /Script/ACLPlugin.ACLRotationFormat
/// Size: 0x01 (1 bytes)
enum class ACLRotationFormat : uint8_t
{
	ACLRF_Quat                                                                       = 0,
	ACLRF_QuatDropW                                                                  = 1,
	ACLRF_QuatDropW_Variable                                                         = 2
};

/// Enum /Script/ACLPlugin.ACLVisualFidelityChangeResult
/// Size: 0x01 (1 bytes)
enum class ACLVisualFidelityChangeResult : uint8_t
{
	ACLVisualFidelityChangeResult__Dispatched                                        = 0,
	ACLVisualFidelityChangeResult__Completed                                         = 1,
	ACLVisualFidelityChangeResult__Failed                                            = 2
};

/// Enum /Script/ACLPlugin.ACLVisualFidelity
/// Size: 0x01 (1 bytes)
enum class ACLVisualFidelity : uint8_t
{
	ACLVisualFidelity__Highest                                                       = 0,
	ACLVisualFidelity__Medium                                                        = 1,
	ACLVisualFidelity__Lowest                                                        = 2
};

#pragma pack(pop)


static_assert(sizeof(UAnimationCompressionLibraryDatabase) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLBase) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimBoneCompressionCodec_ACL) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLCustom) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLDatabase) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAnimBoneCompressionCodec_ACLSafe) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimCurveCompressionCodec_ACL) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedCompressedBytes) == 0x0028);
static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedAnimSequenceMappings) == 0x0038);
static_assert(offsetof(UAnimationCompressionLibraryDatabase, DefaultVisualFidelity) == 0x011C);
static_assert(offsetof(UAnimBoneCompressionCodec_ACLDatabase, DatabaseAsset) == 0x0038);
