
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MRMesh.h"

#pragma pack(push, 0x1)

class AARActor;
class AAROriginActor;
class AARSharedWorldGameMode;
class AARSharedWorldGameState;
class AARSharedWorldPlayerController;
class AARSkyLight;
class UARBaseAsyncTaskBlueprintProxy;
class UARBasicLightEstimate;
class UARBlueprintLibrary;
class UARCandidateImage;
class UARCandidateObject;
class UARComponent;
class UARDependencyHandler;
class UAREnvironmentCaptureProbe;
class UAREnvironmentCaptureProbeTexture;
class UAREnvironmentProbeComponent;
class UARFaceComponent;
class UARFaceGeometry;
class UARGeoAnchor;
class UARGeoAnchorComponent;
class UARGeoTrackingSupport;
class UARGetCandidateObjectAsyncTaskBlueprintProxy;
class UARImageComponent;
class UARLifeCycleComponent;
class UARLightEstimate;
class UARMeshComponent;
class UARMeshGeometry;
class UARObjectComponent;
class UARPin;
class UARPlaneComponent;
class UARPlaneGeometry;
class UARPointComponent;
class UARPoseComponent;
class UARQRCodeComponent;
class UARSaveWorldAsyncTaskBlueprintProxy;
class UARSessionConfig;
class UARTexture;
class UARTextureCameraDepth;
class UARTextureCameraImage;
class UARTraceResultDummy;
class UARTraceResultLibrary;
class UARTrackableNotifyComponent;
class UARTrackedGeometry;
class UARTrackedImage;
class UARTrackedObject;
class UARTrackedPoint;
class UARTrackedPose;
class UARTrackedQRCode;
class UARTypesDummyClass;
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;
class UGetGeoLocationAsyncTaskBlueprintProxy;

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x01 (1 bytes)
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Unknown                                                        = 0,
	EARTrackingState__Tracking                                                       = 1,
	EARTrackingState__NotTracking                                                    = 2,
	EARTrackingState__StoppedTracking                                                = 3
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None                                               = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData                                        = 1
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None                                                    = 0,
	EPoseComponentDebugMode__ShowSkeleton                                            = 1
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None                                                  = 0,
	EQRCodeComponentDebugMode__ShowQRCode                                            = 1
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None                                                   = 0,
	EImageComponentDebugMode__ShowDetectedImage                                      = 1
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x01 (1 bytes)
enum class EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly                                            = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation                         = 1,
	EARFaceTransformMixing__ComponentWithTracked                                     = 2,
	EARFaceTransformMixing__TrackingOnly                                             = 3
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None                                                    = 0,
	EFaceComponentDebugMode__ShowEyeVectors                                          = 1,
	EFaceComponentDebugMode__ShowFaceMesh                                            = 2
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None                                                   = 0,
	EPlaneComponentDebugMode__ShowNetworkRole                                        = 1,
	EPlaneComponentDebugMode__ShowClassification                                     = 2
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x01 (1 bytes)
enum class EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None                                                      = 0,
	EARSessionConfigFlags__GenerateMeshData                                          = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe                                 = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData                              = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData                                = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion                                   = 16
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted                                       = 0,
	EARServicePermissionRequestResult__Denied                                        = 1
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed                                        = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible                              = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation                         = 2,
	EARServiceInstallRequestResult__FatalError                                       = 3
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x01 (1 bytes)
enum class EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError                                             = 0,
	EARServiceAvailability__UnknownChecking                                          = 1,
	EARServiceAvailability__UnknownTimedOut                                          = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable                              = 3,
	EARServiceAvailability__SupportedNotInstalled                                    = 4,
	EARServiceAvailability__SupportedVersionTooOld                                   = 5,
	EARServiceAvailability__SupportedInstalled                                       = 6
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined                                             = 0,
	EARGeoTrackingAccuracy__Low                                                      = 1,
	EARGeoTrackingAccuracy__Medium                                                   = 2,
	EARGeoTrackingAccuracy__High                                                     = 3
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None                                                  = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation                                = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions                               = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow                                   = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable                                 = 4,
	EARGeoTrackingStateReason__WaitingForLocation                                    = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded                                      = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed                              = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck                           = 8
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing                                                = 0,
	EARGeoTrackingState__Localized                                                   = 1,
	EARGeoTrackingState__Localizing                                                  = 2,
	EARGeoTrackingState__NotAvailable                                                = 3
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x01 (1 bytes)
enum class EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None                                                     = 0,
	EARSceneReconstruction__MeshOnly                                                 = 1,
	EARSceneReconstruction__MeshWithClassification                                   = 2
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x01 (1 bytes)
enum class EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None                                                  = 0,
	EARSessionTrackingFeature__PoseDetection2D                                       = 1,
	EARSessionTrackingFeature__PersonSegmentation                                    = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth                           = 3,
	EARSessionTrackingFeature__SceneDepth                                            = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth                                    = 5
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo                                              = 0,
	EARFaceTrackingUpdate__CurvesOnly                                                = 1
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x01 (1 bytes)
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None                                             = 0,
	EAREnvironmentCaptureProbeType__Manual                                           = 1,
	EAREnvironmentCaptureProbeType__Automatic                                        = 2
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x01 (1 bytes)
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage                                        = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage                                     = 1
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x01 (1 bytes)
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None                                                     = 0,
	EARLightEstimationMode__AmbientLightEstimate                                     = 1,
	EARLightEstimationMode__DirectionalLightEstimate                                 = 2
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x01 (1 bytes)
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None                                                      = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection                                  = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection                                    = 2
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x01 (1 bytes)
enum class EARSessionType : uint8_t
{
	EARSessionType__None                                                             = 0,
	EARSessionType__Orientation                                                      = 1,
	EARSessionType__World                                                            = 2,
	EARSessionType__Face                                                             = 3,
	EARSessionType__Image                                                            = 4,
	EARSessionType__ObjectScanning                                                   = 5,
	EARSessionType__PoseTracking                                                     = 6,
	EARSessionType__GeoTracking                                                      = 7
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x01 (1 bytes)
enum class EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity                                                       = 0,
	EARWorldAlignment__GravityAndHeading                                             = 1,
	EARWorldAlignment__Camera                                                        = 2
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x01 (1 bytes)
enum class EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown                                                         = 0,
	EARDepthAccuracy__Approximate                                                    = 1,
	EARDepthAccuracy__Accurate                                                       = 2
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x01 (1 bytes)
enum class EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown                                                          = 0,
	EARDepthQuality__Low                                                             = 1,
	EARDepthQuality__High                                                            = 2
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x01 (1 bytes)
enum class EARTextureType : uint8_t
{
	EARTextureType__Unknown                                                          = 0,
	EARTextureType__CameraImage                                                      = 1,
	EARTextureType__CameraDepth                                                      = 2,
	EARTextureType__EnvironmentCapture                                               = 3,
	EARTextureType__PersonSegmentationImage                                          = 4,
	EARTextureType__PersonSegmentationDepth                                          = 5,
	EARTextureType__SceneDepthMap                                                    = 6,
	EARTextureType__SceneDepthConfidenceMap                                          = 7
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x01 (1 bytes)
enum class EAREye : uint8_t
{
	EAREye__LeftEye                                                                  = 0,
	EAREye__RightEye                                                                 = 1
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x01 (1 bytes)
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft                                                  = 0,
	EARFaceBlendShape__EyeLookDownLeft                                               = 1,
	EARFaceBlendShape__EyeLookInLeft                                                 = 2,
	EARFaceBlendShape__EyeLookOutLeft                                                = 3,
	EARFaceBlendShape__EyeLookUpLeft                                                 = 4,
	EARFaceBlendShape__EyeSquintLeft                                                 = 5,
	EARFaceBlendShape__EyeWideLeft                                                   = 6,
	EARFaceBlendShape__EyeBlinkRight                                                 = 7,
	EARFaceBlendShape__EyeLookDownRight                                              = 8,
	EARFaceBlendShape__EyeLookInRight                                                = 9,
	EARFaceBlendShape__EyeLookOutRight                                               = 10,
	EARFaceBlendShape__EyeLookUpRight                                                = 11,
	EARFaceBlendShape__EyeSquintRight                                                = 12,
	EARFaceBlendShape__EyeWideRight                                                  = 13,
	EARFaceBlendShape__JawForward                                                    = 14,
	EARFaceBlendShape__JawLeft                                                       = 15,
	EARFaceBlendShape__JawRight                                                      = 16,
	EARFaceBlendShape__JawOpen                                                       = 17,
	EARFaceBlendShape__MouthClose                                                    = 18,
	EARFaceBlendShape__MouthFunnel                                                   = 19,
	EARFaceBlendShape__MouthPucker                                                   = 20,
	EARFaceBlendShape__MouthLeft                                                     = 21,
	EARFaceBlendShape__MouthRight                                                    = 22,
	EARFaceBlendShape__MouthSmileLeft                                                = 23,
	EARFaceBlendShape__MouthSmileRight                                               = 24,
	EARFaceBlendShape__MouthFrownLeft                                                = 25,
	EARFaceBlendShape__MouthFrownRight                                               = 26,
	EARFaceBlendShape__MouthDimpleLeft                                               = 27,
	EARFaceBlendShape__MouthDimpleRight                                              = 28,
	EARFaceBlendShape__MouthStretchLeft                                              = 29,
	EARFaceBlendShape__MouthStretchRight                                             = 30,
	EARFaceBlendShape__MouthRollLower                                                = 31,
	EARFaceBlendShape__MouthRollUpper                                                = 32,
	EARFaceBlendShape__MouthShrugLower                                               = 33,
	EARFaceBlendShape__MouthShrugUpper                                               = 34,
	EARFaceBlendShape__MouthPressLeft                                                = 35,
	EARFaceBlendShape__MouthPressRight                                               = 36,
	EARFaceBlendShape__MouthLowerDownLeft                                            = 37,
	EARFaceBlendShape__MouthLowerDownRight                                           = 38,
	EARFaceBlendShape__MouthUpperUpLeft                                              = 39,
	EARFaceBlendShape__MouthUpperUpRight                                             = 40,
	EARFaceBlendShape__BrowDownLeft                                                  = 41,
	EARFaceBlendShape__BrowDownRight                                                 = 42,
	EARFaceBlendShape__BrowInnerUp                                                   = 43,
	EARFaceBlendShape__BrowOuterUpLeft                                               = 44,
	EARFaceBlendShape__BrowOuterUpRight                                              = 45,
	EARFaceBlendShape__CheekPuff                                                     = 46,
	EARFaceBlendShape__CheekSquintLeft                                               = 47,
	EARFaceBlendShape__CheekSquintRight                                              = 48,
	EARFaceBlendShape__NoseSneerLeft                                                 = 49,
	EARFaceBlendShape__NoseSneerRight                                                = 50,
	EARFaceBlendShape__TongueOut                                                     = 51,
	EARFaceBlendShape__HeadYaw                                                       = 52,
	EARFaceBlendShape__HeadPitch                                                     = 53,
	EARFaceBlendShape__HeadRoll                                                      = 54,
	EARFaceBlendShape__LeftEyeYaw                                                    = 55,
	EARFaceBlendShape__LeftEyePitch                                                  = 56,
	EARFaceBlendShape__LeftEyeRoll                                                   = 57,
	EARFaceBlendShape__RightEyeYaw                                                   = 58,
	EARFaceBlendShape__RightEyePitch                                                 = 59,
	EARFaceBlendShape__RightEyeRoll                                                  = 60
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative                                           = 0,
	EARFaceTrackingDirection__FaceMirrored                                           = 1
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x01 (1 bytes)
enum class EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape                                          = 0,
	EARCandidateImageOrientation__Portrait                                           = 1
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x01 (1 bytes)
enum class EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise                                                       = 0,
	EARAltitudeSource__Coarse                                                        = 1,
	EARAltitudeSource__UserDefined                                                   = 2,
	EARAltitudeSource__Unknown                                                       = 3
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x01 (1 bytes)
enum class EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model                                                    = 0,
	EARJointTransformSpace__ParentJoint                                              = 1
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x01 (1 bytes)
enum class EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable                                           = 0,
	EARObjectClassification__Unknown                                                 = 1,
	EARObjectClassification__Wall                                                    = 2,
	EARObjectClassification__Ceiling                                                 = 3,
	EARObjectClassification__Floor                                                   = 4,
	EARObjectClassification__Table                                                   = 5,
	EARObjectClassification__Seat                                                    = 6,
	EARObjectClassification__Face                                                    = 7,
	EARObjectClassification__Image                                                   = 8,
	EARObjectClassification__World                                                   = 9,
	EARObjectClassification__SceneObject                                             = 10,
	EARObjectClassification__HandMesh                                                = 11,
	EARObjectClassification__Door                                                    = 12,
	EARObjectClassification__Window                                                  = 13
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x01 (1 bytes)
enum class EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal                                                  = 0,
	EARPlaneOrientation__Vertical                                                    = 1,
	EARPlaneOrientation__Diagonal                                                    = 2
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x01 (1 bytes)
enum class EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable                                               = 0,
	EARWorldMappingState__StillMappingNotRelocalizable                               = 1,
	EARWorldMappingState__StillMappingRelocalizable                                  = 2,
	EARWorldMappingState__Mapped                                                     = 3
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x01 (1 bytes)
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted                                                     = 0,
	EARSessionStatus__Running                                                        = 1,
	EARSessionStatus__NotSupported                                                   = 2,
	EARSessionStatus__FatalError                                                     = 3,
	EARSessionStatus__PermissionNotGranted                                           = 4,
	EARSessionStatus__UnsupportedConfiguration                                       = 5,
	EARSessionStatus__Other                                                          = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x01 (1 bytes)
enum class EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None                                                   = 0,
	EARTrackingQualityReason__Initializing                                           = 1,
	EARTrackingQualityReason__Relocalizing                                           = 2,
	EARTrackingQualityReason__ExcessiveMotion                                        = 3,
	EARTrackingQualityReason__InsufficientFeatures                                   = 4,
	EARTrackingQualityReason__InsufficientLight                                      = 5,
	EARTrackingQualityReason__BadState                                               = 6
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x01 (1 bytes)
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking                                                  = 0,
	EARTrackingQuality__OrientationOnly                                              = 1,
	EARTrackingQuality__OrientationAndPosition                                       = 2
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x01 (1 bytes)
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None                                                       = 0,
	EARLineTraceChannels__FeaturePoint                                               = 1,
	EARLineTraceChannels__GroundPlane                                                = 2,
	EARLineTraceChannels__PlaneUsingExtent                                           = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon                                  = 8
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x01 (1 bytes)
enum class EARCaptureType : uint8_t
{
	EARCaptureType__Camera                                                           = 0,
	EARCaptureType__QRCode                                                           = 1,
	EARCaptureType__SpatialMapping                                                   = 2,
	EARCaptureType__SceneUnderstanding                                               = 3
};

#pragma pack(pop)


static_assert(sizeof(AAROriginActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(FARVideoFormat) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UARSessionConfig) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UARLightEstimate) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARBasicLightEstimate) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UARCandidateImage) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(AARActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UARBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARTraceResultLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARBaseAsyncTaskBlueprintProxy) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UARSaveWorldAsyncTaskBlueprintProxy) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UARGetCandidateObjectAsyncTaskBlueprintProxy) == 0x0098); // 152 bytes (0x000050 - 0x000098)
static_assert(sizeof(UARComponent) == 0x0278); // 632 bytes (0x0001F8 - 0x000278)
static_assert(sizeof(FARSessionPayload) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARPlaneUpdatePayload) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UARPlaneComponent) == 0x0300); // 768 bytes (0x000278 - 0x000300)
static_assert(sizeof(FARPointUpdatePayload) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(UARPointComponent) == 0x0280); // 640 bytes (0x000278 - 0x000280)
static_assert(sizeof(FARFaceUpdatePayload) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UARFaceComponent) == 0x02E0); // 736 bytes (0x000278 - 0x0002E0)
static_assert(sizeof(FARImageUpdatePayload) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UARImageComponent) == 0x02E0); // 736 bytes (0x000278 - 0x0002E0)
static_assert(sizeof(FARQRCodeUpdatePayload) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UARQRCodeComponent) == 0x02F0); // 752 bytes (0x000278 - 0x0002F0)
static_assert(sizeof(FARPoseUpdatePayload) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UARPoseComponent) == 0x02C0); // 704 bytes (0x000278 - 0x0002C0)
static_assert(sizeof(FAREnvironmentProbeUpdatePayload) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAREnvironmentProbeComponent) == 0x02B0); // 688 bytes (0x000278 - 0x0002B0)
static_assert(sizeof(FARObjectUpdatePayload) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UARObjectComponent) == 0x02B0); // 688 bytes (0x000278 - 0x0002B0)
static_assert(sizeof(FARMeshUpdatePayload) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UARMeshComponent) == 0x02E0); // 736 bytes (0x000278 - 0x0002E0)
static_assert(sizeof(FARGeoAnchorUpdatePayload) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UARGeoAnchorComponent) == 0x02F0); // 752 bytes (0x000278 - 0x0002F0)
static_assert(sizeof(UARDependencyHandler) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UARGeoTrackingSupport) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UGetGeoLocationAsyncTaskBlueprintProxy) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UARLifeCycleComponent) == 0x0230); // 560 bytes (0x0001F8 - 0x000230)
static_assert(sizeof(UARPin) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(AARSharedWorldGameMode) == 0x0370); // 880 bytes (0x000308 - 0x000370)
static_assert(sizeof(AARSharedWorldGameState) == 0x02C8); // 712 bytes (0x000290 - 0x0002C8)
static_assert(sizeof(AARSharedWorldPlayerController) == 0x0578); // 1400 bytes (0x000570 - 0x000578)
static_assert(sizeof(AARSkyLight) == 0x0240); // 576 bytes (0x000230 - 0x000240)
static_assert(sizeof(UARTexture) == 0x00F8); // 248 bytes (0x0000D8 - 0x0000F8)
static_assert(sizeof(UARTextureCameraImage) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(UARTextureCameraDepth) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UAREnvironmentCaptureProbeTexture) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(UARTraceResultDummy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARTrackedGeometry) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UARPlaneGeometry) == 0x0130); // 304 bytes (0x0000F8 - 0x000130)
static_assert(sizeof(UARTrackedPoint) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UARTrackedImage) == 0x0108); // 264 bytes (0x0000F8 - 0x000108)
static_assert(sizeof(UARTrackedQRCode) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(UARFaceGeometry) == 0x01F0); // 496 bytes (0x0000F8 - 0x0001F0)
static_assert(sizeof(UAREnvironmentCaptureProbe) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(UARTrackedObject) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(FARSkeletonDefinition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FARPose3D) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UARTrackedPose) == 0x0150); // 336 bytes (0x0000F8 - 0x000150)
static_assert(sizeof(UARMeshGeometry) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UARGeoAnchor) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(UARTrackableNotifyComponent) == 0x0200); // 512 bytes (0x0000B0 - 0x000200)
static_assert(sizeof(UARTypesDummyClass) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARCandidateObject) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FTrackedGeometryGroup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARSharedWorldReplicationState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FARTraceResult) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FARCameraIntrinsics) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARPose2D) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FARSessionStatus) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UARSessionConfig, WorldAlignment) == 0x003A);
static_assert(offsetof(UARSessionConfig, SessionType) == 0x003B);
static_assert(offsetof(UARSessionConfig, PlaneDetectionMode) == 0x003C);
static_assert(offsetof(UARSessionConfig, LightEstimationMode) == 0x0040);
static_assert(offsetof(UARSessionConfig, FrameSyncMode) == 0x0041);
static_assert(offsetof(UARSessionConfig, CandidateImages) == 0x0048);
static_assert(offsetof(UARSessionConfig, EnvironmentCaptureProbeType) == 0x005C);
static_assert(offsetof(UARSessionConfig, WorldMapData) == 0x0060);
static_assert(offsetof(UARSessionConfig, CandidateObjects) == 0x0070);
static_assert(offsetof(UARSessionConfig, DesiredVideoFormat) == 0x0080);
static_assert(offsetof(UARSessionConfig, FaceTrackingDirection) == 0x008D);
static_assert(offsetof(UARSessionConfig, FaceTrackingUpdate) == 0x008E);
static_assert(offsetof(UARSessionConfig, SerializedARCandidateImageDatabase) == 0x0098);
static_assert(offsetof(UARSessionConfig, EnabledSessionTrackingFeature) == 0x00A8);
static_assert(offsetof(UARSessionConfig, SceneReconstructionMethod) == 0x00A9);
static_assert(offsetof(UARSessionConfig, PlaneComponentClass) == 0x00B0);
static_assert(offsetof(UARSessionConfig, PointComponentClass) == 0x00B8);
static_assert(offsetof(UARSessionConfig, FaceComponentClass) == 0x00C0);
static_assert(offsetof(UARSessionConfig, ImageComponentClass) == 0x00C8);
static_assert(offsetof(UARSessionConfig, QRCodeComponentClass) == 0x00D0);
static_assert(offsetof(UARSessionConfig, PoseComponentClass) == 0x00D8);
static_assert(offsetof(UARSessionConfig, EnvironmentProbeComponentClass) == 0x00E0);
static_assert(offsetof(UARSessionConfig, ObjectComponentClass) == 0x00E8);
static_assert(offsetof(UARSessionConfig, MeshComponentClass) == 0x00F0);
static_assert(offsetof(UARSessionConfig, GeoAnchorComponentClass) == 0x00F8);
static_assert(offsetof(UARSessionConfig, DefaultMeshMaterial) == 0x0100);
static_assert(offsetof(UARSessionConfig, DefaultWireframeMeshMaterial) == 0x0108);
static_assert(offsetof(UARBasicLightEstimate, AmbientColor) == 0x0030);
static_assert(offsetof(UARCandidateImage, CandidateTexture) == 0x0030);
static_assert(offsetof(UARCandidateImage, FriendlyName) == 0x0038);
static_assert(offsetof(UARCandidateImage, Orientation) == 0x0050);
static_assert(offsetof(UARComponent, NativeID) == 0x01F8);
static_assert(offsetof(UARComponent, DefaultMeshMaterial) == 0x0240);
static_assert(offsetof(UARComponent, DefaultWireframeMeshMaterial) == 0x0248);
static_assert(offsetof(UARComponent, MRMeshComponent) == 0x0250);
static_assert(offsetof(UARComponent, MyTrackedGeometry) == 0x0258);
static_assert(offsetof(FARSessionPayload, DefaultMeshMaterial) == 0x0008);
static_assert(offsetof(FARSessionPayload, DefaultWireframeMeshMaterial) == 0x0010);
static_assert(offsetof(FARPlaneUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARPlaneUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARPlaneUpdatePayload, Center) == 0x0050);
static_assert(offsetof(FARPlaneUpdatePayload, Extents) == 0x005C);
static_assert(offsetof(FARPlaneUpdatePayload, BoundaryVertices) == 0x0068);
static_assert(offsetof(FARPlaneUpdatePayload, ObjectClassification) == 0x0078);
static_assert(offsetof(UARPlaneComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(UARPointComponent, ReplicatedPayload) == 0x0278);
static_assert(offsetof(FARFaceUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARFaceUpdatePayload, LeftEyePosition) == 0x0018);
static_assert(offsetof(FARFaceUpdatePayload, RightEyePosition) == 0x0024);
static_assert(offsetof(FARFaceUpdatePayload, LookAtTarget) == 0x0030);
static_assert(offsetof(UARFaceComponent, TransformSetting) == 0x0278);
static_assert(offsetof(UARFaceComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARImageUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARImageUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARImageUpdatePayload, DetectedImage) == 0x0050);
static_assert(offsetof(FARImageUpdatePayload, EstimatedSize) == 0x0058);
static_assert(offsetof(UARImageComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARQRCodeUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARQRCodeUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARQRCodeUpdatePayload, Extents) == 0x0050);
static_assert(offsetof(FARQRCodeUpdatePayload, QRCode) == 0x0060);
static_assert(offsetof(UARQRCodeComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARPoseUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(FARPoseUpdatePayload, JointTransforms) == 0x0030);
static_assert(offsetof(UARPoseComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FAREnvironmentProbeUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(UAREnvironmentProbeComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARObjectUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(UARObjectComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARMeshUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARMeshUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARMeshUpdatePayload, ObjectClassification) == 0x0050);
static_assert(offsetof(UARMeshComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(FARGeoAnchorUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARGeoAnchorUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARGeoAnchorUpdatePayload, AltitudeSource) == 0x005C);
static_assert(offsetof(FARGeoAnchorUpdatePayload, AnchorName) == 0x0060);
static_assert(offsetof(UARGeoAnchorComponent, ReplicatedPayload) == 0x0280);
static_assert(offsetof(UARPin, TrackedGeometry) == 0x0028);
static_assert(offsetof(UARPin, PinnedComponent) == 0x0030);
static_assert(offsetof(UARPin, LocalToTrackingTransform) == 0x0040);
static_assert(offsetof(UARPin, LocalToAlignedTrackingTransform) == 0x0070);
static_assert(offsetof(UARPin, TrackingState) == 0x00A0);
static_assert(offsetof(AARSharedWorldGameState, PreviewImageData) == 0x0290);
static_assert(offsetof(AARSharedWorldGameState, ARWorldData) == 0x02A0);
static_assert(offsetof(AARSkyLight, CaptureProbe) == 0x0230);
static_assert(offsetof(UARTexture, TextureType) == 0x00D8);
static_assert(offsetof(UARTexture, ExternalTextureGuid) == 0x00E0);
static_assert(offsetof(UARTexture, Size) == 0x00F0);
static_assert(offsetof(UARTextureCameraDepth, DepthQuality) == 0x00F8);
static_assert(offsetof(UARTextureCameraDepth, DepthAccuracy) == 0x00F9);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, TextureType) == 0x0130);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, ExternalTextureGuid) == 0x0138);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, Size) == 0x0148);
static_assert(offsetof(UARTrackedGeometry, UniqueId) == 0x0028);
static_assert(offsetof(UARTrackedGeometry, LocalToTrackingTransform) == 0x0040);
static_assert(offsetof(UARTrackedGeometry, LocalToAlignedTrackingTransform) == 0x0070);
static_assert(offsetof(UARTrackedGeometry, TrackingState) == 0x00A0);
static_assert(offsetof(UARTrackedGeometry, UnderlyingMesh) == 0x00B0);
static_assert(offsetof(UARTrackedGeometry, ObjectClassification) == 0x00B8);
static_assert(offsetof(UARTrackedGeometry, DebugName) == 0x00E0);
static_assert(offsetof(UARPlaneGeometry, Orientation) == 0x00F8);
static_assert(offsetof(UARPlaneGeometry, Center) == 0x00FC);
static_assert(offsetof(UARPlaneGeometry, Extent) == 0x0108);
static_assert(offsetof(UARPlaneGeometry, BoundaryPolygon) == 0x0118);
static_assert(offsetof(UARPlaneGeometry, SubsumedBy) == 0x0128);
static_assert(offsetof(UARTrackedImage, DetectedImage) == 0x00F8);
static_assert(offsetof(UARTrackedImage, EstimatedSize) == 0x0100);
static_assert(offsetof(UARTrackedQRCode, QRCode) == 0x0108);
static_assert(offsetof(UARFaceGeometry, LookAtTarget) == 0x00F8);
static_assert(offsetof(UARFaceGeometry, BlendShapes) == 0x0108);
static_assert(offsetof(UARFaceGeometry, LeftEyeTransform) == 0x0190);
static_assert(offsetof(UARFaceGeometry, RightEyeTransform) == 0x01C0);
static_assert(offsetof(UAREnvironmentCaptureProbe, Extent) == 0x00F8);
static_assert(offsetof(UAREnvironmentCaptureProbe, EnvironmentCaptureTexture) == 0x0108);
static_assert(offsetof(UARTrackedObject, DetectedObject) == 0x00F8);
static_assert(offsetof(FARSkeletonDefinition, JointNames) == 0x0008);
static_assert(offsetof(FARSkeletonDefinition, ParentIndices) == 0x0018);
static_assert(offsetof(FARPose3D, SkeletonDefinition) == 0x0000);
static_assert(offsetof(FARPose3D, JointTransforms) == 0x0028);
static_assert(offsetof(FARPose3D, IsJointTracked) == 0x0038);
static_assert(offsetof(FARPose3D, JointTransformSpace) == 0x0048);
static_assert(offsetof(UARTrackedPose, TrackedPose) == 0x00F8);
static_assert(offsetof(UARCandidateObject, CandidateObjectData) == 0x0030);
static_assert(offsetof(UARCandidateObject, FriendlyName) == 0x0040);
static_assert(offsetof(UARCandidateObject, BoundingBox) == 0x0050);
static_assert(offsetof(FTrackedGeometryGroup, ARActor) == 0x0000);
static_assert(offsetof(FTrackedGeometryGroup, ARComponent) == 0x0008);
static_assert(offsetof(FTrackedGeometryGroup, TrackedGeometry) == 0x0010);
static_assert(offsetof(FARTraceResult, TraceChannel) == 0x0004);
static_assert(offsetof(FARTraceResult, LocalTransform) == 0x0010);
static_assert(offsetof(FARTraceResult, TrackedGeometry) == 0x0040);
static_assert(offsetof(FARCameraIntrinsics, ImageResolution) == 0x0000);
static_assert(offsetof(FARCameraIntrinsics, FocalLength) == 0x0008);
static_assert(offsetof(FARCameraIntrinsics, PrincipalPoint) == 0x0010);
static_assert(offsetof(FARPose2D, SkeletonDefinition) == 0x0000);
static_assert(offsetof(FARPose2D, JointLocations) == 0x0028);
static_assert(offsetof(FARPose2D, IsJointTracked) == 0x0038);
static_assert(offsetof(FARSessionStatus, AdditionalInfo) == 0x0000);
static_assert(offsetof(FARSessionStatus, status) == 0x0010);
