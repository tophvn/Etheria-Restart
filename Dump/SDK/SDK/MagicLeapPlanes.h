
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

class UMagicLeapPlanesComponent;
class UMagicLeapPlanesFunctionLibrary;

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryFlags
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	EMagicLeapPlaneQueryFlags__Vertical                                              = 0,
	EMagicLeapPlaneQueryFlags__Horizontal                                            = 1,
	EMagicLeapPlaneQueryFlags__Arbitrary                                             = 2,
	EMagicLeapPlaneQueryFlags__OrientToGravity                                       = 3,
	EMagicLeapPlaneQueryFlags__PreferInner                                           = 4,
	EMagicLeapPlaneQueryFlags__Ceiling                                               = 5,
	EMagicLeapPlaneQueryFlags__Floor                                                 = 6,
	EMagicLeapPlaneQueryFlags__Wall                                                  = 7,
	EMagicLeapPlaneQueryFlags__Polygons                                              = 8
};

/// Enum /Script/MagicLeapPlanes.EMagicLeapPlaneQueryType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPlaneQueryType : uint8_t
{
	EMagicLeapPlaneQueryType__Bulk                                                   = 0,
	EMagicLeapPlaneQueryType__Delta                                                  = 1
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapPlanesComponent) == 0x0260); // 608 bytes (0x0001F8 - 0x000260)
static_assert(sizeof(UMagicLeapPlanesFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapPolygon) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMagicLeapPlaneBoundary) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapPlaneBoundaries) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMagicLeapPlaneResult) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMagicLeapPlanesQuery) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(UMagicLeapPlanesComponent, QueryFlags) == 0x01F8);
static_assert(offsetof(UMagicLeapPlanesComponent, SearchVolume) == 0x0208);
static_assert(offsetof(UMagicLeapPlanesComponent, QueryType) == 0x021C);
static_assert(offsetof(FMagicLeapPolygon, Vertices) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundary, Polygon) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundary, Holes) == 0x0010);
static_assert(offsetof(FMagicLeapPlaneBoundaries, ID) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneBoundaries, Boundaries) == 0x0010);
static_assert(offsetof(FMagicLeapPlaneResult, PlanePosition) == 0x0000);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneOrientation) == 0x000C);
static_assert(offsetof(FMagicLeapPlaneResult, ContentOrientation) == 0x0018);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneDimensions) == 0x0024);
static_assert(offsetof(FMagicLeapPlaneResult, PlaneFlags) == 0x0030);
static_assert(offsetof(FMagicLeapPlaneResult, ID) == 0x0040);
static_assert(offsetof(FMagicLeapPlaneResult, InnerID) == 0x0050);
static_assert(offsetof(FMagicLeapPlanesQuery, Flags) == 0x0000);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolume) == 0x0010);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumePosition) == 0x0024);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumeOrientation) == 0x0030);
static_assert(offsetof(FMagicLeapPlanesQuery, SearchVolumeExtents) == 0x0040);
