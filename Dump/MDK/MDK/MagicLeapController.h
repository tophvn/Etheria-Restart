
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

/// Class /Script/MagicLeapController.MagicLeapControllerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
	// bool SetMotionSourceForHand(EControllerHand Hand, FName MotionSource);                                                   // [0x131a1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
	// bool SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);                                           // [0x1319870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
	// bool PlayLEDPattern(FName MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // [0x131a0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
	// bool PlayLEDEffect(FName MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // [0x1319ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
	// bool PlayHapticPattern(FName MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity); // [0x1319dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
	// bool PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // [0x1319c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
	// bool PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // [0x1319ab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
	// bool PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity); // [0x13199a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
	// int32_t MaxSupportedMagicLeapControllers();                                                                              // [0x1221c40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
	// bool IsMLControllerConnected(FName MotionSource);                                                                        // [0x1319750] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
	// void InvertControllerMapping();                                                                                          // [0x1319980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
	// FName GetMotionSourceForHand(EControllerHand Hand);                                                                      // [0x13198f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
	// EMagicLeapControllerType GetMLControllerType(EControllerHand Hand);                                                      // [0x1319870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
	// EControllerHand GetHandForMotionSource(FName MotionSource);                                                              // [0x13197e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
	// EMagicLeapControllerType GetControllerType(FName MotionSource);                                                          // [0x1319750] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
	// EMagicLeapControllerTrackingMode GetControllerTrackingMode();                                                            // [0x1319720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
	// bool GetControllerMapping(int32_t ControllerIndex, EControllerHand& Hand);                                               // [0x1319650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MagicLeapController.MagicLeapTouchpadGesturesComponent
/// Size: 0x0090 (0x0000B0 - 0x000140)
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMulticastInlineDelegate)                  OnTouchpadGestureStart                                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTouchpadGestureContinue                                   OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTouchpadGestureEnd                                        OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Struct /Script/MagicLeapController.MagicLeapTouchpadGesture
/// Size: 0x0030 (0x000000 - 0x000030)
class FMagicLeapTouchpadGesture : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EControllerHand)                           Hand                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     MotionSource                                                OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	CMember(EMagicLeapTouchpadGestureType)             Type                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(EMagicLeapTouchpadGestureDirection)        Direction                                                   OFFSET(get<T>, {0xD, 1, 0, 0})
	SMember(FVector)                                   PositionAndForce                                            OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     FingerGap                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Enum /Script/MagicLeapController.EMagicLeapTouchpadGestureDirection
/// Size: 0x09
enum class EMagicLeapTouchpadGestureDirection : uint8_t
{
	EMagicLeapTouchpadGestureDirection__None                                         = 0,
	EMagicLeapTouchpadGestureDirection__Up                                           = 1,
	EMagicLeapTouchpadGestureDirection__Down                                         = 2,
	EMagicLeapTouchpadGestureDirection__Left                                         = 3,
	EMagicLeapTouchpadGestureDirection__Right                                        = 4,
	EMagicLeapTouchpadGestureDirection__In                                           = 5,
	EMagicLeapTouchpadGestureDirection__Out                                          = 6,
	EMagicLeapTouchpadGestureDirection__Clockwise                                    = 7,
	EMagicLeapTouchpadGestureDirection__CounterClockwise                             = 8
};

/// Enum /Script/MagicLeapController.EMagicLeapTouchpadGestureType
/// Size: 0x11
enum class EMagicLeapTouchpadGestureType : uint8_t
{
	EMagicLeapTouchpadGestureType__None                                              = 0,
	EMagicLeapTouchpadGestureType__Tap                                               = 1,
	EMagicLeapTouchpadGestureType__ForceTapDown                                      = 2,
	EMagicLeapTouchpadGestureType__ForceTapUp                                        = 3,
	EMagicLeapTouchpadGestureType__ForceDwell                                        = 4,
	EMagicLeapTouchpadGestureType__SecondForceDown                                   = 5,
	EMagicLeapTouchpadGestureType__LongHold                                          = 6,
	EMagicLeapTouchpadGestureType__RadialScroll                                      = 7,
	EMagicLeapTouchpadGestureType__Swipe                                             = 8,
	EMagicLeapTouchpadGestureType__Scroll                                            = 9,
	EMagicLeapTouchpadGestureType__Pinch                                             = 10
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerTrackingMode
/// Size: 0x02
enum class EMagicLeapControllerTrackingMode : uint8_t
{
	EMagicLeapControllerTrackingMode__InputService                                   = 0,
	EMagicLeapControllerTrackingMode__CoordinateFrameUID                             = 1
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerHapticIntensity
/// Size: 0x03
enum class EMagicLeapControllerHapticIntensity : uint8_t
{
	EMagicLeapControllerHapticIntensity__Low                                         = 0,
	EMagicLeapControllerHapticIntensity__Medium                                      = 1,
	EMagicLeapControllerHapticIntensity__High                                        = 2
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerHapticPattern
/// Size: 0x10
enum class EMagicLeapControllerHapticPattern : uint8_t
{
	EMagicLeapControllerHapticPattern__None                                          = 0,
	EMagicLeapControllerHapticPattern__Click                                         = 1,
	EMagicLeapControllerHapticPattern__Bump                                          = 2,
	EMagicLeapControllerHapticPattern__DoubleClick                                   = 3,
	EMagicLeapControllerHapticPattern__Buzz                                          = 4,
	EMagicLeapControllerHapticPattern__Tick                                          = 5,
	EMagicLeapControllerHapticPattern__ForceDown                                     = 6,
	EMagicLeapControllerHapticPattern__ForceUp                                       = 7,
	EMagicLeapControllerHapticPattern__ForceDwell                                    = 8,
	EMagicLeapControllerHapticPattern__SecondForceDown                               = 9
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDSpeed
/// Size: 0x03
enum class EMagicLeapControllerLEDSpeed : uint8_t
{
	EMagicLeapControllerLEDSpeed__Slow                                               = 0,
	EMagicLeapControllerLEDSpeed__Medium                                             = 1,
	EMagicLeapControllerLEDSpeed__Fast                                               = 2
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDColor
/// Size: 0x16
enum class EMagicLeapControllerLEDColor : uint8_t
{
	EMagicLeapControllerLEDColor__BrightMissionRed                                   = 0,
	EMagicLeapControllerLEDColor__PastelMissionRed                                   = 1,
	EMagicLeapControllerLEDColor__BrightFloridaOrange                                = 2,
	EMagicLeapControllerLEDColor__PastelFloridaOrange                                = 3,
	EMagicLeapControllerLEDColor__BrightLunaYellow                                   = 4,
	EMagicLeapControllerLEDColor__PastelLunaYellow                                   = 5,
	EMagicLeapControllerLEDColor__BrightNebulaPink                                   = 6,
	EMagicLeapControllerLEDColor__PastelNebulaPink                                   = 7,
	EMagicLeapControllerLEDColor__BrightCosmicPurple                                 = 8,
	EMagicLeapControllerLEDColor__PastelCosmicPurple                                 = 9,
	EMagicLeapControllerLEDColor__BrightMysticBlue                                   = 10,
	EMagicLeapControllerLEDColor__PastelMysticBlue                                   = 11,
	EMagicLeapControllerLEDColor__BrightCelestialBlue                                = 12,
	EMagicLeapControllerLEDColor__PastelCelestialBlue                                = 13,
	EMagicLeapControllerLEDColor__BrightShaggleGreen                                 = 14,
	EMagicLeapControllerLEDColor__PastelShaggleGreen                                 = 15
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDEffect
/// Size: 0x06
enum class EMagicLeapControllerLEDEffect : uint8_t
{
	EMagicLeapControllerLEDEffect__RotateCW                                          = 0,
	EMagicLeapControllerLEDEffect__RotateCCW                                         = 1,
	EMagicLeapControllerLEDEffect__Pulse                                             = 2,
	EMagicLeapControllerLEDEffect__PaintCW                                           = 3,
	EMagicLeapControllerLEDEffect__PaintCCW                                          = 4,
	EMagicLeapControllerLEDEffect__Blink                                             = 5
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerLEDPattern
/// Size: 0x19
enum class EMagicLeapControllerLEDPattern : uint8_t
{
	EMagicLeapControllerLEDPattern__None                                             = 0,
	EMagicLeapControllerLEDPattern__Clock01                                          = 1,
	EMagicLeapControllerLEDPattern__Clock02                                          = 2,
	EMagicLeapControllerLEDPattern__Clock03                                          = 3,
	EMagicLeapControllerLEDPattern__Clock04                                          = 4,
	EMagicLeapControllerLEDPattern__Clock05                                          = 5,
	EMagicLeapControllerLEDPattern__Clock06                                          = 6,
	EMagicLeapControllerLEDPattern__Clock07                                          = 7,
	EMagicLeapControllerLEDPattern__Clock08                                          = 8,
	EMagicLeapControllerLEDPattern__Clock09                                          = 9,
	EMagicLeapControllerLEDPattern__Clock10                                          = 10,
	EMagicLeapControllerLEDPattern__Clock11                                          = 11,
	EMagicLeapControllerLEDPattern__Clock12                                          = 12,
	EMagicLeapControllerLEDPattern__Clock01_07                                       = 13,
	EMagicLeapControllerLEDPattern__Clock02_08                                       = 14,
	EMagicLeapControllerLEDPattern__Clock03_09                                       = 15,
	EMagicLeapControllerLEDPattern__Clock0417                                        = 16,
	EMagicLeapControllerLEDPattern__Clock0518                                        = 17,
	EMagicLeapControllerLEDPattern__Clock0619                                        = 18
};

/// Enum /Script/MagicLeapController.EMagicLeapControllerType
/// Size: 0x03
enum class EMagicLeapControllerType : uint8_t
{
	EMagicLeapControllerType__None                                                   = 0,
	EMagicLeapControllerType__Device                                                 = 1,
	EMagicLeapControllerType__MobileApp                                              = 2
};

