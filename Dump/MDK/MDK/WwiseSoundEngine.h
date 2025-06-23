
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/WwiseSoundEngine.AkUInt32Wrapper
/// Size: 0x0004 (0x000000 - 0x000004)
class FAkUInt32Wrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  UInt32Value                                                 OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/WwiseSoundEngine.AkUniqueID
/// Size: 0x0000 (0x000004 - 0x000004)
class FAkUniqueID : public FAkUInt32Wrapper
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/WwiseSoundEngine.AkUInt64Wrapper
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkUInt64Wrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint64_t)                                  UInt64Value                                                 OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/WwiseSoundEngine.AkOutputDeviceID
/// Size: 0x0000 (0x000008 - 0x000008)
class FAkOutputDeviceID : public FAkUInt64Wrapper
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

