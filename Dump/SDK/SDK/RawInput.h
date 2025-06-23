
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "InputCore.h"

#pragma pack(push, 0x1)

class URawInputFunctionLibrary;
class URawInputSettings;

#pragma pack(pop)


static_assert(sizeof(URawInputFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FRawInputDeviceAxisProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRawInputDeviceButtonProperties) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRawInputDeviceConfiguration) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(URawInputSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FRegisteredDeviceInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FRawInputDeviceAxisProperties, Key) == 0x0008);
static_assert(offsetof(FRawInputDeviceButtonProperties, Key) == 0x0008);
static_assert(offsetof(FRawInputDeviceConfiguration, VendorID) == 0x0000);
static_assert(offsetof(FRawInputDeviceConfiguration, ProductId) == 0x0010);
static_assert(offsetof(FRawInputDeviceConfiguration, AxisProperties) == 0x0020);
static_assert(offsetof(FRawInputDeviceConfiguration, ButtonProperties) == 0x0030);
static_assert(offsetof(URawInputSettings, DeviceConfigurations) == 0x0038);
static_assert(offsetof(FRegisteredDeviceInfo, DeviceName) == 0x0010);
