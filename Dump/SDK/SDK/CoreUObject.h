
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"

#pragma pack(push, 0x1)

class UArrayProperty;
class UBoolProperty;
class UByteProperty;
class UClass;
class UClassProperty;
class UDelegateFunction;
class UDelegateProperty;
class UDoubleProperty;
class UDynamicClass;
class UEnum;
class UEnumProperty;
class UField;
class UFloatProperty;
class UFunction;
class UGCObjectReferencer;
class UInt16Property;
class UInt64Property;
class UInt8Property;
class UIntProperty;
class UInterface;
class UInterfaceProperty;
class ULazyObjectProperty;
class ULinkerPlaceholderClass;
class ULinkerPlaceholderExportObject;
class ULinkerPlaceholderFunction;
class UMapProperty;
class UMetaData;
class UMulticastDelegateProperty;
class UMulticastDelegatePropertyWrapper;
class UMulticastInlineDelegateProperty;
class UMulticastInlineDelegatePropertyWrapper;
class UMulticastSparseDelegateProperty;
class UNameProperty;
class UNumericProperty;
class UObject;
class UObjectProperty;
class UObjectPropertyBase;
class UObjectRedirector;
class UPackage;
class UPackageMap;
class UProperty;
class UPropertyWrapper;
class UScriptStruct;
class USetProperty;
class USoftClassProperty;
class USoftObjectProperty;
class USparseDelegateFunction;
class UStrProperty;
class UStruct;
class UStructProperty;
class UTextBuffer;
class UTextProperty;
class UUInt16Property;
class UUInt32Property;
class UUInt64Property;
class UWeakObjectProperty;

/// Enum /Script/CoreUObject.EInterpCurveMode
/// Size: 0x01 (1 bytes)
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                                                                       = 0,
	CIM_CurveAuto                                                                    = 1,
	CIM_Constant                                                                     = 2,
	CIM_CurveUser                                                                    = 3,
	CIM_CurveBreak                                                                   = 4,
	CIM_CurveAutoClamped                                                             = 5
};

/// Enum /Script/CoreUObject.ERangeBoundTypes
/// Size: 0x01 (1 bytes)
enum class ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive                                                      = 0,
	ERangeBoundTypes__Inclusive                                                      = 1,
	ERangeBoundTypes__Open                                                           = 2
};

/// Enum /Script/CoreUObject.ELocalizedTextSourceCategory
/// Size: 0x01 (1 bytes)
enum class ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game                                               = 0,
	ELocalizedTextSourceCategory__Engine                                             = 1,
	ELocalizedTextSourceCategory__Editor                                             = 2
};

/// Enum /Script/CoreUObject.EAutomationEventType
/// Size: 0x01 (1 bytes)
enum class EAutomationEventType : uint8_t
{
	EAutomationEventType__Info                                                       = 0,
	EAutomationEventType__Warning                                                    = 1,
	EAutomationEventType__Error                                                      = 2
};

/// Enum /Script/CoreUObject.EMouseCursor
/// Size: 0x01 (1 bytes)
enum class EMouseCursor : uint8_t
{
	EMouseCursor__None                                                               = 0,
	EMouseCursor__Default                                                            = 1,
	EMouseCursor__TextEditBeam                                                       = 2,
	EMouseCursor__ResizeLeftRight                                                    = 3,
	EMouseCursor__ResizeUpDown                                                       = 4,
	EMouseCursor__ResizeSouthEast                                                    = 5,
	EMouseCursor__ResizeSouthWest                                                    = 6,
	EMouseCursor__CardinalCross                                                      = 7,
	EMouseCursor__Crosshairs                                                         = 8,
	EMouseCursor__Hand                                                               = 9,
	EMouseCursor__GrabHand                                                           = 10,
	EMouseCursor__GrabHandClosed                                                     = 11,
	EMouseCursor__SlashedCircle                                                      = 12,
	EMouseCursor__EyeDropper                                                         = 13
};

/// Enum /Script/CoreUObject.ELifetimeCondition
/// Size: 0x01 (1 bytes)
enum class ELifetimeCondition : uint8_t
{
	COND_None                                                                        = 0,
	COND_InitialOnly                                                                 = 1,
	COND_OwnerOnly                                                                   = 2,
	COND_SkipOwner                                                                   = 3,
	COND_SimulatedOnly                                                               = 4,
	COND_AutonomousOnly                                                              = 5,
	COND_SimulatedOrPhysics                                                          = 6,
	COND_InitialOrOwner                                                              = 7,
	COND_Custom                                                                      = 8,
	COND_ReplayOrOwner                                                               = 9,
	COND_ReplayOnly                                                                  = 10,
	COND_SimulatedOnlyNoReplay                                                       = 11,
	COND_SimulatedOrPhysicsNoReplay                                                  = 12,
	COND_SkipReplay                                                                  = 13,
	COND_Never                                                                       = 15,
	COND_Max                                                                         = 16
};

/// Enum /Script/CoreUObject.EDataValidationResult
/// Size: 0x01 (1 bytes)
enum class EDataValidationResult : uint8_t
{
	EDataValidationResult__Invalid                                                   = 0,
	EDataValidationResult__Valid                                                     = 1,
	EDataValidationResult__NotValidated                                              = 2
};

/// Enum /Script/CoreUObject.EAppMsgType
/// Size: 0x01 (1 bytes)
enum class EAppMsgType : uint8_t
{
	EAppMsgType__Ok                                                                  = 0,
	EAppMsgType__YesNo                                                               = 1,
	EAppMsgType__OkCancel                                                            = 2,
	EAppMsgType__YesNoCancel                                                         = 3,
	EAppMsgType__CancelRetryContinue                                                 = 4,
	EAppMsgType__YesNoYesAllNoAll                                                    = 5,
	EAppMsgType__YesNoYesAllNoAllCancel                                              = 6,
	EAppMsgType__YesNoYesAll                                                         = 7
};

/// Enum /Script/CoreUObject.EAppReturnType
/// Size: 0x01 (1 bytes)
enum class EAppReturnType : uint8_t
{
	EAppReturnType__No                                                               = 0,
	EAppReturnType__Yes                                                              = 1,
	EAppReturnType__YesAll                                                           = 2,
	EAppReturnType__NoAll                                                            = 3,
	EAppReturnType__Cancel                                                           = 4,
	EAppReturnType__Ok                                                               = 5,
	EAppReturnType__Retry                                                            = 6,
	EAppReturnType__Continue                                                         = 7
};

/// Enum /Script/CoreUObject.EPropertyAccessChangeNotifyMode
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	EPropertyAccessChangeNotifyMode__Default                                         = 0,
	EPropertyAccessChangeNotifyMode__Never                                           = 1,
	EPropertyAccessChangeNotifyMode__Always                                          = 2
};

/// Enum /Script/CoreUObject.EUnit
/// Size: 0x01 (1 bytes)
enum class EUnit : uint8_t
{
	EUnit__Micrometers                                                               = 0,
	EUnit__Millimeters                                                               = 1,
	EUnit__Centimeters                                                               = 2,
	EUnit__Meters                                                                    = 3,
	EUnit__Kilometers                                                                = 4,
	EUnit__Inches                                                                    = 5,
	EUnit__Feet                                                                      = 6,
	EUnit__Yards                                                                     = 7,
	EUnit__Miles                                                                     = 8,
	EUnit__Lightyears                                                                = 9,
	EUnit__Degrees                                                                   = 10,
	EUnit__Radians                                                                   = 11,
	EUnit__MetersPerSecond                                                           = 12,
	EUnit__KilometersPerHour                                                         = 13,
	EUnit__MilesPerHour                                                              = 14,
	EUnit__Celsius                                                                   = 15,
	EUnit__Farenheit                                                                 = 16,
	EUnit__Kelvin                                                                    = 17,
	EUnit__Micrograms                                                                = 18,
	EUnit__Milligrams                                                                = 19,
	EUnit__Grams                                                                     = 20,
	EUnit__Kilograms                                                                 = 21,
	EUnit__MetricTons                                                                = 22,
	EUnit__Ounces                                                                    = 23,
	EUnit__Pounds                                                                    = 24,
	EUnit__Stones                                                                    = 25,
	EUnit__Newtons                                                                   = 26,
	EUnit__PoundsForce                                                               = 27,
	EUnit__KilogramsForce                                                            = 28,
	EUnit__Hertz                                                                     = 29,
	EUnit__Kilohertz                                                                 = 30,
	EUnit__Megahertz                                                                 = 31,
	EUnit__Gigahertz                                                                 = 32,
	EUnit__RevolutionsPerMinute                                                      = 33,
	EUnit__Bytes                                                                     = 34,
	EUnit__Kilobytes                                                                 = 35,
	EUnit__Megabytes                                                                 = 36,
	EUnit__Gigabytes                                                                 = 37,
	EUnit__Terabytes                                                                 = 38,
	EUnit__Lumens                                                                    = 39,
	EUnit__Milliseconds                                                              = 43,
	EUnit__Seconds                                                                   = 44,
	EUnit__Minutes                                                                   = 45,
	EUnit__Hours                                                                     = 46,
	EUnit__Days                                                                      = 47,
	EUnit__Months                                                                    = 48,
	EUnit__Years                                                                     = 49,
	EUnit__Multiplier                                                                = 52,
	EUnit__Percentage                                                                = 51,
	EUnit__Unspecified                                                               = 53
};

/// Enum /Script/CoreUObject.EPixelFormat
/// Size: 0x01 (1 bytes)
enum class EPixelFormat : uint8_t
{
	PF_Unknown                                                                       = 0,
	PF_A32B32G32R32F                                                                 = 1,
	PF_B8G8R8A8                                                                      = 2,
	PF_G8                                                                            = 3,
	PF_G16                                                                           = 4,
	PF_DXT1                                                                          = 5,
	PF_DXT3                                                                          = 6,
	PF_DXT5                                                                          = 7,
	PF_UYVY                                                                          = 8,
	PF_FloatRGB                                                                      = 9,
	PF_FloatRGBA                                                                     = 10,
	PF_DepthStencil                                                                  = 11,
	PF_ShadowDepth                                                                   = 12,
	PF_R32_FLOAT                                                                     = 13,
	PF_G16R16                                                                        = 14,
	PF_G16R16F                                                                       = 15,
	PF_G16R16F_FILTER                                                                = 16,
	PF_G32R32F                                                                       = 17,
	PF_A2B10G10R10                                                                   = 18,
	PF_A16B16G16R16                                                                  = 19,
	PF_D24                                                                           = 20,
	PF_R16F                                                                          = 21,
	PF_R16F_FILTER                                                                   = 22,
	PF_BC5                                                                           = 23,
	PF_V8U8                                                                          = 24,
	PF_A1                                                                            = 25,
	PF_FloatR11G11B10                                                                = 26,
	PF_A8                                                                            = 27,
	PF_R32_UINT                                                                      = 28,
	PF_R32_SINT                                                                      = 29,
	PF_PVRTC2                                                                        = 30,
	PF_PVRTC4                                                                        = 31,
	PF_R16_UINT                                                                      = 32,
	PF_R16_SINT                                                                      = 33,
	PF_R16G16B16A16_UINT                                                             = 34,
	PF_R16G16B16A16_SINT                                                             = 35,
	PF_R5G6B5_UNORM                                                                  = 36,
	PF_R8G8B8A8                                                                      = 37,
	PF_A8R8G8B8                                                                      = 38,
	PF_BC4                                                                           = 39,
	PF_R8G8                                                                          = 40,
	PF_ATC_RGB                                                                       = 41,
	PF_ATC_RGBA_E                                                                    = 42,
	PF_ATC_RGBA_I                                                                    = 43,
	PF_X24_G8                                                                        = 44,
	PF_ETC1                                                                          = 45,
	PF_ETC2_RGB                                                                      = 46,
	PF_ETC2_RGBA                                                                     = 47,
	PF_R32G32B32A32_UINT                                                             = 48,
	PF_R16G16_UINT                                                                   = 49,
	PF_ASTC_4x4                                                                      = 50,
	PF_ASTC_5x5                                                                      = 51,
	PF_ASTC_6x6                                                                      = 52,
	PF_ASTC_8x8                                                                      = 53,
	PF_ASTC_10x10                                                                    = 54,
	PF_ASTC_12x12                                                                    = 55,
	PF_ASTC_HDR_4x4                                                                  = 73,
	PF_ASTC_HDR_5x5                                                                  = 74,
	PF_ASTC_HDR_6x6                                                                  = 75,
	PF_ASTC_HDR_8x8                                                                  = 76,
	PF_ASTC_HDR_10x10                                                                = 77,
	PF_ASTC_HDR_12x12                                                                = 78,
	PF_BC6H                                                                          = 56,
	PF_BC7                                                                           = 57,
	PF_R8_UINT                                                                       = 58,
	PF_L8                                                                            = 59,
	PF_XGXR8                                                                         = 60,
	PF_R8G8B8A8_UINT                                                                 = 61,
	PF_R8G8B8A8_SNORM                                                                = 62,
	PF_R16G16B16A16_UNORM                                                            = 63,
	PF_R16G16B16A16_SNORM                                                            = 64,
	PF_PLATFORM_HDR                                                                  = 65,
	PF_PLATFORM_HDR73                                                                = 66,
	PF_PLATFORM_HDR74                                                                = 67,
	PF_NV12                                                                          = 68,
	PF_R32G32_UINT                                                                   = 69,
	PF_ETC2_R11_EAC                                                                  = 70,
	PF_ETC2_RG11_EAC                                                                 = 71
};

/// Enum /Script/CoreUObject.EAxis
/// Size: 0x01 (1 bytes)
enum class EAxis : uint8_t
{
	EAxis__None                                                                      = 0,
	EAxis__X                                                                         = 1,
	EAxis__Y                                                                         = 2,
	EAxis__Z                                                                         = 3
};

/// Enum /Script/CoreUObject.ELogTimes
/// Size: 0x01 (1 bytes)
enum class ELogTimes : uint8_t
{
	ELogTimes__None                                                                  = 0,
	ELogTimes__UTC                                                                   = 1,
	ELogTimes__SinceGStartTime                                                       = 2,
	ELogTimes__Local                                                                 = 3
};

/// Enum /Script/CoreUObject.ESearchDir
/// Size: 0x01 (1 bytes)
enum class ESearchDir : uint8_t
{
	ESearchDir__FromStart                                                            = 0,
	ESearchDir__FromEnd                                                              = 1
};

/// Enum /Script/CoreUObject.ESearchCase
/// Size: 0x01 (1 bytes)
enum class ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive                                                       = 0,
	ESearchCase__IgnoreCase                                                          = 1
};

#pragma pack(pop)


static_assert(sizeof(UObject) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPackage) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UField) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UStruct) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UClass) == 0x0230); // 560 bytes (0x0000B0 - 0x000230)
static_assert(sizeof(UGCObjectReferencer) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UTextBuffer) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UScriptStruct) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UFunction) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UDelegateFunction) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(USparseDelegateFunction) == 0x00F0); // 240 bytes (0x0000E0 - 0x0000F0)
static_assert(sizeof(UDynamicClass) == 0x02B0); // 688 bytes (0x000230 - 0x0002B0)
static_assert(sizeof(UPackageMap) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UEnum) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(ULinkerPlaceholderClass) == 0x03E8); // 1000 bytes (0x000230 - 0x0003E8)
static_assert(sizeof(ULinkerPlaceholderExportObject) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(ULinkerPlaceholderFunction) == 0x0298); // 664 bytes (0x0000E0 - 0x000298)
static_assert(sizeof(UMetaData) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UObjectRedirector) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UProperty) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UEnumProperty) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UArrayProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UObjectPropertyBase) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBoolProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UNumericProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UByteProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UClassProperty) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UDelegateProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UDoubleProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UFloatProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UIntProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt8Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt16Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt64Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInterfaceProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(ULazyObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMapProperty) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UMulticastDelegateProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UMulticastInlineDelegateProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMulticastSparseDelegateProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UNameProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(USetProperty) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(USoftObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(USoftClassProperty) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UStrProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UStructProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UUInt16Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UUInt32Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UUInt64Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UWeakObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UTextProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPropertyWrapper) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMulticastDelegatePropertyWrapper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMulticastInlineDelegatePropertyWrapper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FJoinabilitySettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FUniqueNetIdWrapper) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGuid) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FVector4) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVector2D) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTwoVectors) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPlane) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FRotator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FQuat) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPackedNormal) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPackedRGB10A2N) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPackedRGBA16N) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntPoint) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntVector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FColor) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FLinearColor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBox) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FBox2D) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FBoxSphereBounds) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FOrientedBox) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FMatrix) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInterpCurvePointFloat) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FInterpCurveFloat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointVector2D) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInterpCurveVector2D) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointVector) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FInterpCurveVector) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointQuat) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FInterpCurveQuat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointTwoVectors) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FInterpCurveTwoVectors) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurvePointLinearColor) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FInterpCurveLinearColor) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTransform) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRandomStream) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDateTime) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameNumber) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FFrameRate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameTime) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FQualifiedFrameTime) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTimecode) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FTimespan) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSoftObjectPath) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSoftClassPath) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FPrimaryAssetType) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPrimaryAssetId) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFallbackStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FFloatRangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFloatRange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInt32RangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32Range) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFrameNumberRangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameNumberRange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFloatInterval) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32Interval) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPolyglotTextData) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FAutomationEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAutomationExecutionEntry) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FARFilter) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FAssetBundleEntry) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAssetBundleData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAssetData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(UObject, ObjectFlags) == 0x0008);
static_assert(offsetof(UObject, ClassPrivate) == 0x0010);
static_assert(offsetof(UObject, NamePrivate) == 0x0018);
static_assert(offsetof(UObject, OuterPrivate) == 0x0020);
static_assert(offsetof(UField, Next) == 0x0028);
static_assert(offsetof(UStruct, SuperStruct) == 0x0030);
static_assert(offsetof(UStruct, Children) == 0x0038);
static_assert(offsetof(FJoinabilitySettings, SessionName) == 0x0000);
static_assert(offsetof(FTwoVectors, v1) == 0x0000);
static_assert(offsetof(FTwoVectors, v2) == 0x000C);
static_assert(offsetof(FBox, Min) == 0x0000);
static_assert(offsetof(FBox, Max) == 0x000C);
static_assert(offsetof(FBox2D, Min) == 0x0000);
static_assert(offsetof(FBox2D, Max) == 0x0008);
static_assert(offsetof(FBoxSphereBounds, Origin) == 0x0000);
static_assert(offsetof(FBoxSphereBounds, BoxExtent) == 0x000C);
static_assert(offsetof(FOrientedBox, Center) == 0x0000);
static_assert(offsetof(FOrientedBox, AxisX) == 0x000C);
static_assert(offsetof(FOrientedBox, AxisY) == 0x0018);
static_assert(offsetof(FOrientedBox, AxisZ) == 0x0024);
static_assert(offsetof(FMatrix, XPlane) == 0x0000);
static_assert(offsetof(FMatrix, YPlane) == 0x0010);
static_assert(offsetof(FMatrix, ZPlane) == 0x0020);
static_assert(offsetof(FMatrix, WPlane) == 0x0030);
static_assert(offsetof(FInterpCurvePointFloat, InterpMode) == 0x0010);
static_assert(offsetof(FInterpCurveFloat, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointVector2D, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointVector2D, ArriveTangent) == 0x000C);
static_assert(offsetof(FInterpCurvePointVector2D, LeaveTangent) == 0x0014);
static_assert(offsetof(FInterpCurvePointVector2D, InterpMode) == 0x001C);
static_assert(offsetof(FInterpCurveVector2D, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointVector, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointVector, ArriveTangent) == 0x0010);
static_assert(offsetof(FInterpCurvePointVector, LeaveTangent) == 0x001C);
static_assert(offsetof(FInterpCurvePointVector, InterpMode) == 0x0028);
static_assert(offsetof(FInterpCurveVector, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointQuat, OutVal) == 0x0010);
static_assert(offsetof(FInterpCurvePointQuat, ArriveTangent) == 0x0020);
static_assert(offsetof(FInterpCurvePointQuat, LeaveTangent) == 0x0030);
static_assert(offsetof(FInterpCurvePointQuat, InterpMode) == 0x0040);
static_assert(offsetof(FInterpCurveQuat, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointTwoVectors, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointTwoVectors, ArriveTangent) == 0x001C);
static_assert(offsetof(FInterpCurvePointTwoVectors, LeaveTangent) == 0x0034);
static_assert(offsetof(FInterpCurvePointTwoVectors, InterpMode) == 0x004C);
static_assert(offsetof(FInterpCurveTwoVectors, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointLinearColor, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointLinearColor, ArriveTangent) == 0x0014);
static_assert(offsetof(FInterpCurvePointLinearColor, LeaveTangent) == 0x0024);
static_assert(offsetof(FInterpCurvePointLinearColor, InterpMode) == 0x0034);
static_assert(offsetof(FInterpCurveLinearColor, Points) == 0x0000);
static_assert(offsetof(FTransform, Rotation) == 0x0000);
static_assert(offsetof(FTransform, Translation) == 0x0010);
static_assert(offsetof(FTransform, Scale3D) == 0x0020);
static_assert(offsetof(FFrameTime, FrameNumber) == 0x0000);
static_assert(offsetof(FQualifiedFrameTime, Time) == 0x0000);
static_assert(offsetof(FQualifiedFrameTime, Rate) == 0x0008);
static_assert(offsetof(FSoftObjectPath, AssetPathName) == 0x0000);
static_assert(offsetof(FSoftObjectPath, SubPathString) == 0x0008);
static_assert(offsetof(FPrimaryAssetType, Name) == 0x0000);
static_assert(offsetof(FPrimaryAssetId, PrimaryAssetType) == 0x0000);
static_assert(offsetof(FPrimaryAssetId, PrimaryAssetName) == 0x0008);
static_assert(offsetof(FFloatRangeBound, Type) == 0x0000);
static_assert(offsetof(FFloatRange, LowerBound) == 0x0000);
static_assert(offsetof(FFloatRange, UpperBound) == 0x0008);
static_assert(offsetof(FInt32RangeBound, Type) == 0x0000);
static_assert(offsetof(FInt32Range, LowerBound) == 0x0000);
static_assert(offsetof(FInt32Range, UpperBound) == 0x0008);
static_assert(offsetof(FFrameNumberRangeBound, Type) == 0x0000);
static_assert(offsetof(FFrameNumberRangeBound, Value) == 0x0004);
static_assert(offsetof(FFrameNumberRange, LowerBound) == 0x0000);
static_assert(offsetof(FFrameNumberRange, UpperBound) == 0x0008);
static_assert(offsetof(FPolyglotTextData, Category) == 0x0000);
static_assert(offsetof(FPolyglotTextData, NativeCulture) == 0x0008);
static_assert(offsetof(FPolyglotTextData, Namespace) == 0x0018);
static_assert(offsetof(FPolyglotTextData, Key) == 0x0028);
static_assert(offsetof(FPolyglotTextData, NativeString) == 0x0038);
static_assert(offsetof(FPolyglotTextData, LocalizedStrings) == 0x0048);
static_assert(offsetof(FPolyglotTextData, CachedText) == 0x00A0);
static_assert(offsetof(FAutomationEvent, Type) == 0x0000);
static_assert(offsetof(FAutomationEvent, Message) == 0x0008);
static_assert(offsetof(FAutomationEvent, Context) == 0x0018);
static_assert(offsetof(FAutomationEvent, Artifact) == 0x0028);
static_assert(offsetof(FAutomationExecutionEntry, Event) == 0x0000);
static_assert(offsetof(FAutomationExecutionEntry, Filename) == 0x0038);
static_assert(offsetof(FAutomationExecutionEntry, Timestamp) == 0x0050);
static_assert(offsetof(FARFilter, PackageNames) == 0x0000);
static_assert(offsetof(FARFilter, PackagePaths) == 0x0010);
static_assert(offsetof(FARFilter, ObjectPaths) == 0x0020);
static_assert(offsetof(FARFilter, ClassNames) == 0x0030);
static_assert(offsetof(FAssetBundleEntry, BundleScope) == 0x0000);
static_assert(offsetof(FAssetBundleEntry, BundleName) == 0x0010);
static_assert(offsetof(FAssetBundleEntry, BundleAssets) == 0x0018);
static_assert(offsetof(FAssetBundleData, Bundles) == 0x0000);
static_assert(offsetof(FAssetData, ObjectPath) == 0x0000);
static_assert(offsetof(FAssetData, PackageName) == 0x0008);
static_assert(offsetof(FAssetData, PackagePath) == 0x0010);
static_assert(offsetof(FAssetData, AssetName) == 0x0018);
static_assert(offsetof(FAssetData, AssetClass) == 0x0020);
