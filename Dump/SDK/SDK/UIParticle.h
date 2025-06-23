
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UUIParticle;
class UUIParticleAsset;
class UUIParticleEmitter;
class UUIParticleEmitterAsset;
class UUIParticleUtility;

/// Enum /Script/UIParticle.EUIParticlePropertyType
/// Size: 0x01 (1 bytes)
enum class EUIParticlePropertyType : uint8_t
{
	EUIParticlePropertyType__Float                                                   = 0,
	EUIParticlePropertyType__FloatRange                                              = 1,
	EUIParticlePropertyType__FloatCurve                                              = 2,
	EUIParticlePropertyType__FloatCurveRange                                         = 3,
	EUIParticlePropertyType__Vector2D                                                = 4,
	EUIParticlePropertyType__Vector2DRange                                           = 5,
	EUIParticlePropertyType__LinearColorCurve                                        = 6,
	EUIParticlePropertyType__LinearColorCurveRange                                   = 7
};

/// Enum /Script/UIParticle.EParticleDrawEffect
/// Size: 0x01 (1 bytes)
enum class EParticleDrawEffect : uint8_t
{
	EParticleDrawEffect__None                                                        = 0,
	EParticleDrawEffect__NoBlending                                                  = 1,
	EParticleDrawEffect__PreMultipliedAlpha                                          = 2,
	EParticleDrawEffect__NoGamma                                                     = 4,
	EParticleDrawEffect__InvertAlpha                                                 = 8,
	EParticleDrawEffect__NoPixelSnapping                                             = 16,
	EParticleDrawEffect__DisabledEffect                                              = 32,
	EParticleDrawEffect__IgnoreTextureAlpha                                          = 64,
	EParticleDrawEffect__ReverseGamma                                                = 128
};

/// Enum /Script/UIParticle.EPositionType
/// Size: 0x01 (1 bytes)
enum class EPositionType : uint8_t
{
	EPositionType__FREE                                                              = 0,
	EPositionType__RELATIVE                                                          = 1
};

/// Enum /Script/UIParticle.EEmitterType
/// Size: 0x01 (1 bytes)
enum class EEmitterType : uint8_t
{
	EEmitterType__Gravity                                                            = 0,
	EEmitterType__Radial                                                             = 1,
	EEmitterType__Curve                                                              = 2
};

/// Enum /Script/UIParticle.ECurveType
/// Size: 0x01 (1 bytes)
enum class ECurveType : uint8_t
{
	ECurveType__ParticleLifePercent                                                  = 0,
	ECurveType__ParticleLifeTime                                                     = 1,
	ECurveType__EmitLifeTime                                                         = 2
};

#pragma pack(pop)


static_assert(sizeof(UUIParticle) == 0x0158); // 344 bytes (0x000128 - 0x000158)
static_assert(sizeof(FUIParticleEmitterInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UUIParticleAsset) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UUIParticleEmitter) == 0x0158); // 344 bytes (0x000128 - 0x000158)
static_assert(sizeof(FRange_Float) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUIParticleFloatCurve) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FRange_FloatCurve) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FRange_Vector2D) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FUIParticleLinearColorCurve) == 0x0208); // 520 bytes (0x000000 - 0x000208)
static_assert(sizeof(FRange_LinearColorCurve) == 0x0418); // 1048 bytes (0x000000 - 0x000418)
static_assert(sizeof(FUIParticleProperty) == 0x07E8); // 2024 bytes (0x000000 - 0x0007E8)
static_assert(sizeof(FPosotion_Vector2DCurve) == 0x0FD0); // 4048 bytes (0x000000 - 0x000FD0)
static_assert(sizeof(FChildEmitter) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FScalarParamCurve) == 0x07F0); // 2032 bytes (0x000000 - 0x0007F0)
static_assert(sizeof(UUIParticleEmitterAsset) == 0xD640); // 54848 bytes (0x000028 - 0x00D640)
static_assert(sizeof(UUIParticleUtility) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSize_Vector2DCurve) == 0x0FD0); // 4048 bytes (0x000000 - 0x000FD0)
static_assert(sizeof(FScalarParamFloat) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLerpKeyColor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLerpKeyVector2D) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UUIParticle, Asset) == 0x0128);
static_assert(offsetof(FUIParticleEmitterInfo, Asset) == 0x0010);
static_assert(offsetof(UUIParticleAsset, Emitters) == 0x0030);
static_assert(offsetof(UUIParticleEmitter, Asset) == 0x0128);
static_assert(offsetof(FUIParticleFloatCurve, CurveData) == 0x0000);
static_assert(offsetof(FUIParticleFloatCurve, CurveType) == 0x0080);
static_assert(offsetof(FRange_FloatCurve, Min) == 0x0000);
static_assert(offsetof(FRange_FloatCurve, Max) == 0x0088);
static_assert(offsetof(FRange_Vector2D, Min) == 0x0000);
static_assert(offsetof(FRange_Vector2D, Max) == 0x0008);
static_assert(offsetof(FUIParticleLinearColorCurve, ColorCurves) == 0x0000);
static_assert(offsetof(FUIParticleLinearColorCurve, CurveType) == 0x0200);
static_assert(offsetof(FRange_LinearColorCurve, Min) == 0x0000);
static_assert(offsetof(FRange_LinearColorCurve, Max) == 0x0208);
static_assert(offsetof(FUIParticleProperty, Type) == 0x0000);
static_assert(offsetof(FUIParticleProperty, FloatRangeValue) == 0x0008);
static_assert(offsetof(FUIParticleProperty, FloatCurveValue) == 0x0010);
static_assert(offsetof(FUIParticleProperty, FloatCurveRangeValue) == 0x0098);
static_assert(offsetof(FUIParticleProperty, Vector2DValue) == 0x01A8);
static_assert(offsetof(FUIParticleProperty, Vector2DRangeValue) == 0x01B0);
static_assert(offsetof(FUIParticleProperty, LinearColorCurveValue) == 0x01C8);
static_assert(offsetof(FUIParticleProperty, LinearColorCurveRangeValue) == 0x03D0);
static_assert(offsetof(FPosotion_Vector2DCurve, X) == 0x0000);
static_assert(offsetof(FPosotion_Vector2DCurve, Y) == 0x07E8);
static_assert(offsetof(FChildEmitter, ChildrenAsset) == 0x0010);
static_assert(offsetof(FScalarParamCurve, ScalarParamName) == 0x0000);
static_assert(offsetof(FScalarParamCurve, Value) == 0x0008);
static_assert(offsetof(UUIParticleEmitterAsset, EmitterType) == 0x0034);
static_assert(offsetof(UUIParticleEmitterAsset, MaxParticleCount) == 0x0040);
static_assert(offsetof(UUIParticleEmitterAsset, SpawnParticlePerSecond) == 0x0828);
static_assert(offsetof(UUIParticleEmitterAsset, ParticleEmitAngle) == 0x1010);
static_assert(offsetof(UUIParticleEmitterAsset, EmitPosRange) == 0x17F8);
static_assert(offsetof(UUIParticleEmitterAsset, EmitPosition) == 0x1810);
static_assert(offsetof(UUIParticleEmitterAsset, DesignSize) == 0x27E4);
static_assert(offsetof(UUIParticleEmitterAsset, PositionType) == 0x27ED);
static_assert(offsetof(UUIParticleEmitterAsset, LifeSpan) == 0x27F0);
static_assert(offsetof(UUIParticleEmitterAsset, Size) == 0x2FD8);
static_assert(offsetof(UUIParticleEmitterAsset, Pivot) == 0x37C0);
static_assert(offsetof(UUIParticleEmitterAsset, RotationStart) == 0x3FA8);
static_assert(offsetof(UUIParticleEmitterAsset, RotationSpeed) == 0x4790);
static_assert(offsetof(UUIParticleEmitterAsset, Color) == 0x4F78);
static_assert(offsetof(UUIParticleEmitterAsset, ResourceObject) == 0x5760);
static_assert(offsetof(UUIParticleEmitterAsset, Gravity) == 0x5770);
static_assert(offsetof(UUIParticleEmitterAsset, StartSpeed) == 0x5F58);
static_assert(offsetof(UUIParticleEmitterAsset, AirResistance) == 0x6740);
static_assert(offsetof(UUIParticleEmitterAsset, RadialAcceleration) == 0x6F28);
static_assert(offsetof(UUIParticleEmitterAsset, TangentialAcceleration) == 0x7710);
static_assert(offsetof(UUIParticleEmitterAsset, Radius) == 0x7EF8);
static_assert(offsetof(UUIParticleEmitterAsset, DegreePerSecond) == 0x86E0);
static_assert(offsetof(UUIParticleEmitterAsset, PositionX) == 0x8EC8);
static_assert(offsetof(UUIParticleEmitterAsset, PositionY) == 0x96B0);
static_assert(offsetof(UUIParticleEmitterAsset, ChildrenEmitters) == 0x9E98);
static_assert(offsetof(UUIParticleEmitterAsset, ScalarParams) == 0x9EA8);
static_assert(offsetof(UUIParticleEmitterAsset, ScalarParamsWhenStart) == 0x9EB8);
static_assert(offsetof(UUIParticleEmitterAsset, DrawEffect) == 0x9EC8);
static_assert(offsetof(UUIParticleEmitterAsset, ScaleFollowSpeedDirection) == 0x9ED0);
static_assert(offsetof(UUIParticleEmitterAsset, ScaleFollowSpeedVertical) == 0xA6C0);
static_assert(offsetof(UUIParticleEmitterAsset, DirectionScale) == 0xAEA8);
static_assert(offsetof(UUIParticleEmitterAsset, VerticalDirectionScale) == 0xB690);
static_assert(offsetof(UUIParticleEmitterAsset, SineDirectionStart) == 0xBE78);
static_assert(offsetof(UUIParticleEmitterAsset, SineDirectionSpeed) == 0xC660);
static_assert(offsetof(UUIParticleEmitterAsset, SineDirectionRange) == 0xCE48);
static_assert(offsetof(UUIParticleEmitterAsset, LevelOfDetail) == 0xD630);
static_assert(offsetof(FSize_Vector2DCurve, Min) == 0x0000);
static_assert(offsetof(FSize_Vector2DCurve, Max) == 0x07E8);
static_assert(offsetof(FScalarParamFloat, ScalarParamName) == 0x0000);
static_assert(offsetof(FScalarParamFloat, Value) == 0x0008);
