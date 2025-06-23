
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/InputCore.InputCoreTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputCoreTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/InputCore.Key
/// Size: 0x0018 (0x000000 - 0x000018)
class FKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     KeyName                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/InputCore.ETouchIndex
/// Size: 0x12
enum class ETouchIndex : uint8_t
{
	ETouchIndex__Touch1                                                              = 0,
	ETouchIndex__Touch2                                                              = 1,
	ETouchIndex__Touch3                                                              = 2,
	ETouchIndex__Touch4                                                              = 3,
	ETouchIndex__Touch5                                                              = 4,
	ETouchIndex__Touch6                                                              = 5,
	ETouchIndex__Touch7                                                              = 6,
	ETouchIndex__Touch8                                                              = 7,
	ETouchIndex__Touch9                                                              = 8,
	ETouchIndex__Touch10                                                             = 9,
	ETouchIndex__CursorPointerIndex                                                  = 10,
	ETouchIndex__MAX_TOUCHES                                                         = 11
};

/// Enum /Script/InputCore.EControllerHand
/// Size: 0x18
enum class EControllerHand : uint8_t
{
	EControllerHand__Left                                                            = 0,
	EControllerHand__Right                                                           = 1,
	EControllerHand__AnyHand                                                         = 2,
	EControllerHand__Pad                                                             = 3,
	EControllerHand__ExternalCamera                                                  = 4,
	EControllerHand__Gun                                                             = 5,
	EControllerHand__Special                                                         = 6,
	EControllerHand__Special8                                                        = 7,
	EControllerHand__Special9                                                        = 8,
	EControllerHand__Special10                                                       = 9,
	EControllerHand__Special11                                                       = 10,
	EControllerHand__Special12                                                       = 11,
	EControllerHand__Special13                                                       = 12,
	EControllerHand__Special14                                                       = 13,
	EControllerHand__Special15                                                       = 14,
	EControllerHand__Special16                                                       = 15,
	EControllerHand__Special17                                                       = 16,
	EControllerHand__ControllerHand_Count                                            = 17
};

/// Enum /Script/InputCore.ETouchType
/// Size: 0x07
enum class ETouchType : uint8_t
{
	ETouchType__Began                                                                = 0,
	ETouchType__Moved                                                                = 1,
	ETouchType__Stationary                                                           = 2,
	ETouchType__ForceChanged                                                         = 3,
	ETouchType__FirstMove                                                            = 4,
	ETouchType__Ended                                                                = 5,
	ETouchType__NumTypes                                                             = 6
};

/// Enum /Script/InputCore.EConsoleForGamepadLabels
/// Size: 0x03
enum class EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None                                                   = 0,
	EConsoleForGamepadLabels__XBoxOne                                                = 1,
	EConsoleForGamepadLabels__PS4                                                    = 2
};

