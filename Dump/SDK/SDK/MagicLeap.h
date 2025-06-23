
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "HeadMountedDisplay.h"
#include "MRMesh.h"

#pragma pack(push, 0x1)

class UInAppPurchaseComponent;
class ULuminApplicationLifecycleComponent;
class UMagicLeapHMDFunctionLibrary;
class UMagicLeapHeadTrackingNotificationsComponent;
class UMagicLeapMeshBlockSelectorInterface;
class UMagicLeapMeshTrackerComponent;
class UMagicLeapRaycastComponent;
class UMagicLeapRaycastFunctionLibrary;
class UMagicLeapSettings;

/// Enum /Script/MagicLeap.PurchaseType
/// Size: 0x01 (1 bytes)
enum class PurchaseType : uint8_t
{
	PurchaseType__Consumable                                                         = 0,
	PurchaseType__Nonconsumable                                                      = 1,
	PurchaseType__Undefined                                                          = 2
};

/// Enum /Script/MagicLeap.EFocusLostReason
/// Size: 0x01 (1 bytes)
enum class EFocusLostReason : uint8_t
{
	EFocusLostReason__EFocusLostReason_Invalid                                       = 0,
	EFocusLostReason__EFocusLostReason_System                                        = 1
};

/// Enum /Script/MagicLeap.EMagicLeapMeshLOD
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshLOD : uint8_t
{
	EMagicLeapMeshLOD__Minimum                                                       = 0,
	EMagicLeapMeshLOD__Medium                                                        = 1,
	EMagicLeapMeshLOD__Maximum                                                       = 2
};

/// Enum /Script/MagicLeap.EMagicLeapMeshState
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshState : uint8_t
{
	EMagicLeapMeshState__New                                                         = 0,
	EMagicLeapMeshState__Updated                                                     = 1,
	EMagicLeapMeshState__Deleted                                                     = 2,
	EMagicLeapMeshState__Unchanged                                                   = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshVertexColorMode : uint8_t
{
	EMagicLeapMeshVertexColorMode__None                                              = 0,
	EMagicLeapMeshVertexColorMode__Confidence                                        = 1,
	EMagicLeapMeshVertexColorMode__Block                                             = 2,
	EMagicLeapMeshVertexColorMode__LOD                                               = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapMeshType : uint8_t
{
	EMagicLeapMeshType__Triangles                                                    = 0,
	EMagicLeapMeshType__PointCloud                                                   = 1
};

/// Enum /Script/MagicLeap.EMagicLeapRaycastResultState
/// Size: 0x01 (1 bytes)
enum class EMagicLeapRaycastResultState : uint8_t
{
	EMagicLeapRaycastResultState__RequestFailed                                      = 0,
	EMagicLeapRaycastResultState__NoCollision                                        = 1,
	EMagicLeapRaycastResultState__HitUnobserved                                      = 2,
	EMagicLeapRaycastResultState__HitObserved                                        = 3
};

/// Enum /Script/MagicLeap.CloudStatus
/// Size: 0x01 (1 bytes)
enum class CloudStatus : uint8_t
{
	CloudStatus__CloudStatus_NotDone                                                 = 0,
	CloudStatus__CloudStatus_Done                                                    = 1
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMapEvent
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingMapEvent : uint8_t
{
	EMagicLeapHeadTrackingMapEvent__Lost                                             = 0,
	EMagicLeapHeadTrackingMapEvent__Recovered                                        = 1,
	EMagicLeapHeadTrackingMapEvent__RecoveryFailed                                   = 2,
	EMagicLeapHeadTrackingMapEvent__NewSession                                       = 3
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMode
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingMode : uint8_t
{
	EMagicLeapHeadTrackingMode__PositionAndOrientation                               = 0,
	EMagicLeapHeadTrackingMode__Unavailable                                          = 1,
	EMagicLeapHeadTrackingMode__Unknown                                              = 2
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingError
/// Size: 0x01 (1 bytes)
enum class EMagicLeapHeadTrackingError : uint8_t
{
	EMagicLeapHeadTrackingError__None                                                = 0,
	EMagicLeapHeadTrackingError__NotEnoughFeatures                                   = 1,
	EMagicLeapHeadTrackingError__LowLight                                            = 2,
	EMagicLeapHeadTrackingError__Unknown                                             = 3
};

#pragma pack(pop)


static_assert(sizeof(UInAppPurchaseComponent) == 0x0128); // 296 bytes (0x0000B0 - 0x000128)
static_assert(sizeof(ULuminApplicationLifecycleComponent) == 0x0190); // 400 bytes (0x000140 - 0x000190)
static_assert(sizeof(UMagicLeapHeadTrackingNotificationsComponent) == 0x01D0); // 464 bytes (0x000140 - 0x0001D0)
static_assert(sizeof(UMagicLeapHMDFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapMeshTrackerComponent) == 0x0290); // 656 bytes (0x0001F8 - 0x000290)
static_assert(sizeof(UMagicLeapSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMagicLeapMeshBlockSelectorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMagicLeapRaycastComponent) == 0x0118); // 280 bytes (0x0000B0 - 0x000118)
static_assert(sizeof(UMagicLeapRaycastFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPurchaseItemDetails) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPurchaseConfirmation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMagicLeapMeshBlockRequest) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMagicLeapMeshBlockInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMagicLeapTrackingMeshInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMagicLeapRaycastHitResult) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FMagicLeapRaycastQueryParams) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMagicLeapGraphicsClientPerformanceInfo) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMagicLeapHeadTrackingState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMagicLeapResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UMagicLeapMeshTrackerComponent, MeshType) == 0x0211);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, BoundingVolume) == 0x0218);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, LevelOfDetail) == 0x0220);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorMode) == 0x0232);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, BlockVertexColors) == 0x0238);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0248);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0258);
static_assert(offsetof(UMagicLeapMeshTrackerComponent, MRMesh) == 0x0270);
static_assert(offsetof(FPurchaseItemDetails, Price) == 0x0010);
static_assert(offsetof(FPurchaseItemDetails, Name) == 0x0020);
static_assert(offsetof(FPurchaseItemDetails, Type) == 0x0030);
static_assert(offsetof(FPurchaseConfirmation, PackageName) == 0x0010);
static_assert(offsetof(FPurchaseConfirmation, Type) == 0x0048);
static_assert(offsetof(FMagicLeapMeshBlockRequest, BlockID) == 0x0000);
static_assert(offsetof(FMagicLeapMeshBlockRequest, LevelOfDetail) == 0x0010);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockID) == 0x0000);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockPosition) == 0x0010);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockOrientation) == 0x001C);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockDimensions) == 0x0028);
static_assert(offsetof(FMagicLeapMeshBlockInfo, Timestamp) == 0x0038);
static_assert(offsetof(FMagicLeapMeshBlockInfo, BlockState) == 0x0040);
static_assert(offsetof(FMagicLeapTrackingMeshInfo, Timestamp) == 0x0000);
static_assert(offsetof(FMagicLeapTrackingMeshInfo, BlockData) == 0x0008);
static_assert(offsetof(FMagicLeapRaycastHitResult, HitState) == 0x0000);
static_assert(offsetof(FMagicLeapRaycastHitResult, HitPoint) == 0x0004);
static_assert(offsetof(FMagicLeapRaycastHitResult, Normal) == 0x0010);
static_assert(offsetof(FMagicLeapRaycastQueryParams, Position) == 0x0000);
static_assert(offsetof(FMagicLeapRaycastQueryParams, Direction) == 0x000C);
static_assert(offsetof(FMagicLeapRaycastQueryParams, UpVector) == 0x0018);
static_assert(offsetof(FMagicLeapHeadTrackingState, Mode) == 0x0000);
static_assert(offsetof(FMagicLeapHeadTrackingState, Error) == 0x0001);
static_assert(offsetof(FMagicLeapResult, AdditionalInfo) == 0x0008);
