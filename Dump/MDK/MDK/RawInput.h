
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: InputCore

/// Class /Script/RawInput.RawInputFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/RawInput.RawInputFunctionLibrary.GetRegisteredDevices
	// TArray<FRegisteredDeviceInfo> GetRegisteredDevices();                                                                    // [0x10691b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/RawInput.RawInputDeviceAxisProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FRawInputDeviceAxisProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bInverted                                                   OFFSET(get<bool>, {0x20, 1, 1, 0})
	DMember(bool)                                      bGamepadStick                                               OFFSET(get<bool>, {0x20, 1, 1, 1})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/RawInput.RawInputDeviceButtonProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FRawInputDeviceButtonProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/RawInput.RawInputDeviceConfiguration
/// Size: 0x0040 (0x000000 - 0x000040)
class FRawInputDeviceConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   VendorID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FRawInputDeviceAxisProperties>)     AxisProperties                                              OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FRawInputDeviceButtonProperties>)   ButtonProperties                                            OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/RawInput.RawInputSettings
/// Size: 0x0018 (0x000038 - 0x000050)
class URawInputSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FRawInputDeviceConfiguration>)      DeviceConfigurations                                        OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bRegisterDefaultDevice                                      OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/RawInput.RegisteredDeviceInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FRegisteredDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   VendorID                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ProductId                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

