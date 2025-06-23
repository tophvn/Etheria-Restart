
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LiveLinkInterface.h"

#pragma pack(push, 0x1)

class ULiveLinkCameraController;
class ULiveLinkComponentController;
class ULiveLinkComponentSettings;
class ULiveLinkControllerBase;
class ULiveLinkLightController;
class ULiveLinkTransformController;

#pragma pack(pop)


static_assert(sizeof(ULiveLinkControllerBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ULiveLinkCameraController) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(ULiveLinkComponentController) == 0x0158); // 344 bytes (0x0000B0 - 0x000158)
static_assert(sizeof(ULiveLinkComponentSettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(ULiveLinkLightController) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FLiveLinkTransformControllerData) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(ULiveLinkTransformController) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(offsetof(ULiveLinkComponentController, SubjectRepresentation) == 0x00B0);
static_assert(offsetof(ULiveLinkComponentController, ControllerMap) == 0x00C0);
static_assert(offsetof(ULiveLinkComponentController, ComponentToControl) == 0x0128);
static_assert(offsetof(ULiveLinkComponentSettings, DefaultControllerForRole) == 0x0028);
static_assert(offsetof(ULiveLinkTransformController, TransformData) == 0x0030);
