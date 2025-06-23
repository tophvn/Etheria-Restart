
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/UIParticle.UIParticle
/// Size: 0x0030 (0x000128 - 0x000158)
class UUIParticle : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(class UUIParticleAsset*)                   Asset                                                       OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  EventOnEnd                                                  OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0x140, 1, 1, 0})
	DMember(bool)                                      bPlayParticle                                               OFFSET(get<bool>, {0x140, 1, 1, 1})
	DMember(bool)                                      IsPlaying                                                   OFFSET(get<bool>, {0x141, 1, 0, 0})


	/// Functions
	// Function /Script/UIParticle.UIParticle.StopEmit
	// void StopEmit();                                                                                                         // [0xcc3300] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIParticle.UIParticle.Stop
	// void Stop();                                                                                                             // [0xcc32c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIParticle.UIParticle.SetPlayParticle
	// void SetPlayParticle(bool InPlayParticle);                                                                               // [0xcc31a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIParticle.UIParticle.Play
	// void Play();                                                                                                             // [0xcc3060] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UIParticle.UIParticleEmitterInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FUIParticleEmitterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      Disable                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     ActiveDelay                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ZOrder                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(class UUIParticleEmitterAsset*)            Asset                                                       OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/UIParticle.UIParticleAsset
/// Size: 0x0018 (0x000028 - 0x000040)
class UUIParticleAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      AutoPlay                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<FUIParticleEmitterInfo>)            Emitters                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/UIParticle.UIParticleEmitter
/// Size: 0x0030 (0x000128 - 0x000158)
class UUIParticleEmitter : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(class UUIParticleEmitterAsset*)            Asset                                                       OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  EventOnEnd                                                  OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0x140, 1, 1, 0})
	DMember(bool)                                      bPlayParticle                                               OFFSET(get<bool>, {0x140, 1, 1, 1})
	DMember(bool)                                      IsPlaying                                                   OFFSET(get<bool>, {0x141, 1, 0, 0})


	/// Functions
	// Function /Script/UIParticle.UIParticleEmitter.StopEmit
	// void StopEmit();                                                                                                         // [0xcc3320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIParticle.UIParticleEmitter.Stop
	// void Stop();                                                                                                             // [0xcc32e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIParticle.UIParticleEmitter.SetPlayParticle
	// void SetPlayParticle(bool InPlayParticle);                                                                               // [0xcc3230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIParticle.UIParticleEmitter.Play
	// void Play();                                                                                                             // [0xcc3080] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UIParticle.Range_Float
/// Size: 0x0008 (0x000000 - 0x000008)
class FRange_Float : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/UIParticle.UIParticleFloatCurve
/// Size: 0x0088 (0x000000 - 0x000088)
class FUIParticleFloatCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FRichCurve)                                CurveData                                                   OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	CMember(ECurveType)                                CurveType                                                   OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      Loop                                                        OFFSET(get<bool>, {0x81, 1, 0, 0})
};

/// Struct /Script/UIParticle.Range_FloatCurve
/// Size: 0x0110 (0x000000 - 0x000110)
class FRange_FloatCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FUIParticleFloatCurve)                     Min                                                         OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	SMember(FUIParticleFloatCurve)                     Max                                                         OFFSET(getStruct<T>, {0x88, 136, 0, 0})
};

/// Struct /Script/UIParticle.Range_Vector2D
/// Size: 0x0014 (0x000000 - 0x000014)
class FRange_Vector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector2D)                                 Min                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 Max                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      RandomKey_X_Y                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/UIParticle.UIParticleLinearColorCurve
/// Size: 0x0208 (0x000000 - 0x000208)
class FUIParticleLinearColorCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FRichCurve)                                ColorCurves                                                 OFFSET(getStruct<T>, {0x0, 512, 0, 0})
	CMember(ECurveType)                                CurveType                                                   OFFSET(get<T>, {0x200, 1, 0, 0})
	DMember(bool)                                      Loop                                                        OFFSET(get<bool>, {0x201, 1, 0, 0})
};

/// Struct /Script/UIParticle.Range_LinearColorCurve
/// Size: 0x0418 (0x000000 - 0x000418)
class FRange_LinearColorCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	SMember(FUIParticleLinearColorCurve)               Min                                                         OFFSET(getStruct<T>, {0x0, 520, 0, 0})
	SMember(FUIParticleLinearColorCurve)               Max                                                         OFFSET(getStruct<T>, {0x208, 520, 0, 0})
	DMember(bool)                                      RandomKey_R_G                                               OFFSET(get<bool>, {0x410, 1, 0, 0})
	DMember(bool)                                      RandomKey_R_B                                               OFFSET(get<bool>, {0x411, 1, 0, 0})
	DMember(bool)                                      RandomKey_R_A                                               OFFSET(get<bool>, {0x412, 1, 0, 0})
	DMember(bool)                                      RandomKey_G_B                                               OFFSET(get<bool>, {0x413, 1, 0, 0})
	DMember(bool)                                      RandomKey_G_A                                               OFFSET(get<bool>, {0x414, 1, 0, 0})
	DMember(bool)                                      RandomKey_B_A                                               OFFSET(get<bool>, {0x415, 1, 0, 0})
};

/// Struct /Script/UIParticle.UIParticleProperty
/// Size: 0x07E8 (0x000000 - 0x0007E8)
class FUIParticleProperty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	CMember(EUIParticlePropertyType)                   Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FRange_Float)                              FloatRangeValue                                             OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FUIParticleFloatCurve)                     FloatCurveValue                                             OFFSET(getStruct<T>, {0x10, 136, 0, 0})
	SMember(FRange_FloatCurve)                         FloatCurveRangeValue                                        OFFSET(getStruct<T>, {0x98, 272, 0, 0})
	SMember(FVector2D)                                 Vector2DValue                                               OFFSET(getStruct<T>, {0x1A8, 8, 0, 0})
	SMember(FRange_Vector2D)                           Vector2DRangeValue                                          OFFSET(getStruct<T>, {0x1B0, 20, 0, 0})
	SMember(FUIParticleLinearColorCurve)               LinearColorCurveValue                                       OFFSET(getStruct<T>, {0x1C8, 520, 0, 0})
	SMember(FRange_LinearColorCurve)                   LinearColorCurveRangeValue                                  OFFSET(getStruct<T>, {0x3D0, 1048, 0, 0})
};

/// Struct /Script/UIParticle.Posotion_Vector2DCurve
/// Size: 0x0FD0 (0x000000 - 0x000FD0)
class FPosotion_Vector2DCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4048;

public:
	SMember(FUIParticleProperty)                       X                                                           OFFSET(getStruct<T>, {0x0, 2024, 0, 0})
	SMember(FUIParticleProperty)                       Y                                                           OFFSET(getStruct<T>, {0x7E8, 2024, 0, 0})
};

/// Struct /Script/UIParticle.ChildEmitter
/// Size: 0x0018 (0x000000 - 0x000018)
class FChildEmitter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     ActivityInParentLifeTime                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      FollowParentPosition                                        OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     FollowParentSpeedPercent                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ZOrderOffset                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(class UUIParticleEmitterAsset*)            ChildrenAsset                                               OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/UIParticle.ScalarParamCurve
/// Size: 0x07F0 (0x000000 - 0x0007F0)
class FScalarParamCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2032;

public:
	SMember(FName)                                     ScalarParamName                                             OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FUIParticleProperty)                       Value                                                       OFFSET(getStruct<T>, {0x8, 2024, 0, 0})
};

/// Class /Script/UIParticle.UIParticleEmitterAsset
/// Size: 0xD618 (0x000028 - 0x00D640)
class UUIParticleEmitterAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 54848;

public:
	DMember(bool)                                      AutoPlay                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     StartTimeOffset                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   SamplingTimes                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(EEmitterType)                              EmitterType                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(float)                                     EmitSeconds                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FUIParticleProperty)                       MaxParticleCount                                            OFFSET(getStruct<T>, {0x40, 2024, 0, 0})
	SMember(FUIParticleProperty)                       SpawnParticlePerSecond                                      OFFSET(getStruct<T>, {0x828, 2024, 0, 0})
	SMember(FUIParticleProperty)                       ParticleEmitAngle                                           OFFSET(getStruct<T>, {0x1010, 2024, 0, 0})
	SMember(FRange_Vector2D)                           EmitPosRange                                                OFFSET(getStruct<T>, {0x17F8, 20, 0, 0})
	SMember(FPosotion_Vector2DCurve)                   EmitPosition                                                OFFSET(getStruct<T>, {0x1810, 4048, 0, 0})
	DMember(bool)                                      AutoEmitPosRange                                            OFFSET(get<bool>, {0x27E0, 1, 0, 0})
	DMember(bool)                                      AutoScale                                                   OFFSET(get<bool>, {0x27E1, 1, 0, 0})
	DMember(bool)                                      ScaleByX                                                    OFFSET(get<bool>, {0x27E2, 1, 0, 0})
	SMember(FVector2D)                                 DesignSize                                                  OFFSET(getStruct<T>, {0x27E4, 8, 0, 0})
	DMember(bool)                                      EmitAngleByWidgetAngle                                      OFFSET(get<bool>, {0x27EC, 1, 0, 0})
	CMember(EPositionType)                             PositionType                                                OFFSET(get<T>, {0x27ED, 1, 0, 0})
	SMember(FUIParticleProperty)                       LifeSpan                                                    OFFSET(getStruct<T>, {0x27F0, 2024, 0, 0})
	SMember(FUIParticleProperty)                       Size                                                        OFFSET(getStruct<T>, {0x2FD8, 2024, 0, 0})
	SMember(FUIParticleProperty)                       Pivot                                                       OFFSET(getStruct<T>, {0x37C0, 2024, 0, 0})
	SMember(FUIParticleProperty)                       RotationStart                                               OFFSET(getStruct<T>, {0x3FA8, 2024, 0, 0})
	SMember(FUIParticleProperty)                       RotationSpeed                                               OFFSET(getStruct<T>, {0x4790, 2024, 0, 0})
	SMember(FUIParticleProperty)                       Color                                                       OFFSET(getStruct<T>, {0x4F78, 2024, 0, 0})
	CMember(class UObject*)                            ResourceObject                                              OFFSET(get<T>, {0x5760, 8, 0, 0})
	DMember(bool)                                      RotationFollowSpeed                                         OFFSET(get<bool>, {0x5768, 1, 0, 0})
	DMember(bool)                                      UseSeparateSize                                             OFFSET(get<bool>, {0x5769, 1, 0, 0})
	SMember(FUIParticleProperty)                       Gravity                                                     OFFSET(getStruct<T>, {0x5770, 2024, 0, 0})
	SMember(FUIParticleProperty)                       StartSpeed                                                  OFFSET(getStruct<T>, {0x5F58, 2024, 0, 0})
	SMember(FUIParticleProperty)                       AirResistance                                               OFFSET(getStruct<T>, {0x6740, 2024, 0, 0})
	SMember(FUIParticleProperty)                       RadialAcceleration                                          OFFSET(getStruct<T>, {0x6F28, 2024, 0, 0})
	SMember(FUIParticleProperty)                       TangentialAcceleration                                      OFFSET(getStruct<T>, {0x7710, 2024, 0, 0})
	SMember(FUIParticleProperty)                       Radius                                                      OFFSET(getStruct<T>, {0x7EF8, 2024, 0, 0})
	SMember(FUIParticleProperty)                       DegreePerSecond                                             OFFSET(getStruct<T>, {0x86E0, 2024, 0, 0})
	SMember(FUIParticleProperty)                       PositionX                                                   OFFSET(getStruct<T>, {0x8EC8, 2024, 0, 0})
	SMember(FUIParticleProperty)                       PositionY                                                   OFFSET(getStruct<T>, {0x96B0, 2024, 0, 0})
	CMember(TArray<FChildEmitter>)                     ChildrenEmitters                                            OFFSET(get<T>, {0x9E98, 16, 0, 0})
	CMember(TArray<FScalarParamCurve>)                 ScalarParams                                                OFFSET(get<T>, {0x9EA8, 16, 0, 0})
	CMember(TArray<FScalarParamCurve>)                 ScalarParamsWhenStart                                       OFFSET(get<T>, {0x9EB8, 16, 0, 0})
	CMember(EParticleDrawEffect)                       DrawEffect                                                  OFFSET(get<T>, {0x9EC8, 1, 0, 0})
	DMember(bool)                                      UseScaleFollowSpeedDirection                                OFFSET(get<bool>, {0x9EC9, 1, 0, 0})
	SMember(FUIParticleProperty)                       ScaleFollowSpeedDirection                                   OFFSET(getStruct<T>, {0x9ED0, 2024, 0, 0})
	DMember(bool)                                      UseScaleFollowSpeedVertical                                 OFFSET(get<bool>, {0xA6B8, 1, 0, 0})
	SMember(FUIParticleProperty)                       ScaleFollowSpeedVertical                                    OFFSET(getStruct<T>, {0xA6C0, 2024, 0, 0})
	SMember(FUIParticleProperty)                       DirectionScale                                              OFFSET(getStruct<T>, {0xAEA8, 2024, 0, 0})
	SMember(FUIParticleProperty)                       VerticalDirectionScale                                      OFFSET(getStruct<T>, {0xB690, 2024, 0, 0})
	SMember(FUIParticleProperty)                       SineDirectionStart                                          OFFSET(getStruct<T>, {0xBE78, 2024, 0, 0})
	SMember(FUIParticleProperty)                       SineDirectionSpeed                                          OFFSET(getStruct<T>, {0xC660, 2024, 0, 0})
	SMember(FUIParticleProperty)                       SineDirectionRange                                          OFFSET(getStruct<T>, {0xCE48, 2024, 0, 0})
	CMember(TArray<class UUIParticleEmitterAsset*>)    LevelOfDetail                                               OFFSET(get<T>, {0xD630, 16, 0, 0})
};

/// Class /Script/UIParticle.UIParticleUtility
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIParticleUtility : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UIParticle.UIParticleUtility.SetMultiThread
	// void SetMultiThread(bool Value);                                                                                         // [0xcc3120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UIParticle.UIParticleUtility.SetLOD
	// void SetLOD(int32_t newlod);                                                                                             // [0xcc30a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UIParticle.UIParticleUtility.GetMultiThread
	// bool GetMultiThread();                                                                                                   // [0xcc3030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UIParticle.UIParticleUtility.GetLOD
	// int32_t GetLOD();                                                                                                        // [0xcc3000] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/UIParticle.Size_Vector2DCurve
/// Size: 0x0FD0 (0x000000 - 0x000FD0)
class FSize_Vector2DCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4048;

public:
	SMember(FUIParticleProperty)                       Min                                                         OFFSET(getStruct<T>, {0x0, 2024, 0, 0})
	SMember(FUIParticleProperty)                       Max                                                         OFFSET(getStruct<T>, {0x7E8, 2024, 0, 0})
};

/// Struct /Script/UIParticle.ScalarParamFloat
/// Size: 0x0010 (0x000000 - 0x000010)
class FScalarParamFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ScalarParamName                                             OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FRange_Float)                              Value                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/UIParticle.LerpKeyColor
/// Size: 0x0010 (0x000000 - 0x000010)
class FLerpKeyColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/UIParticle.LerpKeyVector2D
/// Size: 0x0008 (0x000000 - 0x000008)
class FLerpKeyVector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Enum /Script/UIParticle.EUIParticlePropertyType
/// Size: 0x08
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
/// Size: 0x09
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
/// Size: 0x02
enum class EPositionType : uint8_t
{
	EPositionType__FREE                                                              = 0,
	EPositionType__RELATIVE                                                          = 1
};

/// Enum /Script/UIParticle.EEmitterType
/// Size: 0x03
enum class EEmitterType : uint8_t
{
	EEmitterType__Gravity                                                            = 0,
	EEmitterType__Radial                                                             = 1,
	EEmitterType__Curve                                                              = 2
};

/// Enum /Script/UIParticle.ECurveType
/// Size: 0x03
enum class ECurveType : uint8_t
{
	ECurveType__ParticleLifePercent                                                  = 0,
	ECurveType__ParticleLifeTime                                                     = 1,
	ECurveType__EmitLifeTime                                                         = 2
};

