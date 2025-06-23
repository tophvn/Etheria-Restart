
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AugmentedReality.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MagicLeapImageTracker.h"
#include "MagicLeapPlanes.h"
#include "MRMesh.h"

#pragma pack(push, 0x1)

class ALuminAROrigin;
class ULuminARCandidateImage;
class ULuminARFrameFunctionLibrary;
class ULuminARImageTrackingFunctionLibrary;
class ULuminARLightEstimate;
class ULuminARSessionConfig;
class ULuminARSessionFunctionLibrary;

/// Enum /Script/MagicLeapAR.ELuminARLineTraceChannel
/// Size: 0x01 (1 bytes)
enum class ELuminARLineTraceChannel : uint8_t
{
	ELuminARLineTraceChannel__None                                                   = 0,
	ELuminARLineTraceChannel__FeaturePoint                                           = 1,
	ELuminARLineTraceChannel__InfinitePlane                                          = 2,
	ELuminARLineTraceChannel__PlaneUsingExtent                                       = 4,
	ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon                              = 8,
	ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal                          = 16
};

/// Enum /Script/MagicLeapAR.ELuminARTrackingState
/// Size: 0x01 (1 bytes)
enum class ELuminARTrackingState : uint8_t
{
	ELuminARTrackingState__Tracking                                                  = 0,
	ELuminARTrackingState__NotTracking                                               = 1,
	ELuminARTrackingState__StoppedTracking                                           = 2
};

#pragma pack(pop)


static_assert(sizeof(ULuminARSessionFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULuminARFrameFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULuminARImageTrackingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ALuminAROrigin) == 0x02E0); // 736 bytes (0x000220 - 0x0002E0)
static_assert(sizeof(ULuminARSessionConfig) == 0x01A0); // 416 bytes (0x000110 - 0x0001A0)
static_assert(sizeof(ULuminARLightEstimate) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(ULuminARCandidateImage) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(offsetof(ALuminAROrigin, MRMeshComponent) == 0x0220);
static_assert(offsetof(ALuminAROrigin, PlaneSurfaceMaterial) == 0x0228);
static_assert(offsetof(ALuminAROrigin, WireframeMaterial) == 0x0230);
static_assert(offsetof(ULuminARSessionConfig, PlanesQuery) == 0x0110);
static_assert(offsetof(ULuminARSessionConfig, PlaneSearchExtents) == 0x017C);
static_assert(offsetof(ULuminARSessionConfig, PlaneQueryFlags) == 0x0188);
static_assert(offsetof(ULuminARLightEstimate, AmbientIntensityNits) == 0x0040);
static_assert(offsetof(ULuminARCandidateImage, AxisOrientation) == 0x005A);
