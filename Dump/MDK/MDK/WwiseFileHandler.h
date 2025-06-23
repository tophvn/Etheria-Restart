
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: WwiseSoundEngine

/// Class /Script/WwiseFileHandler.WwiseExternalSourceStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UWwiseExternalSourceStatics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
	// void SetExternalSourceMediaWithIds(FAkUniqueID ExternalSourceCookie, int32_t MediaId);                                   // [0x8c6400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
	// void SetExternalSourceMediaByName(FString ExternalSourceName, FString MediaName);                                        // [0x8c6310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
	// void SetExternalSourceMediaById(FString ExternalSourceName, int32_t MediaId);                                            // [0x8c6240] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/WwiseFileHandler.WwiseExternalSourceCookedData
/// Size: 0x000C (0x000000 - 0x00000C)
class FWwiseExternalSourceCookedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Cookie                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     DebugName                                                   OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/WwiseFileHandler.WwiseLanguageCookedData
/// Size: 0x0010 (0x000000 - 0x000010)
class FWwiseLanguageCookedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   LanguageId                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     LanguageName                                                OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	CMember(EWwiseLanguageRequirement)                 LanguageRequirement                                         OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/WwiseFileHandler.WwiseMediaCookedData
/// Size: 0x0020 (0x000000 - 0x000020)
class FWwiseMediaCookedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   MediaId                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     MediaPathName                                               OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(int32_t)                                   PrefetchSize                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MemoryAlignment                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bDeviceMemory                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bStreaming                                                  OFFSET(get<bool>, {0x15, 1, 0, 0})
	SMember(FName)                                     DebugName                                                   OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/WwiseFileHandler.WwiseSoundBankCookedData
/// Size: 0x001C (0x000000 - 0x00001C)
class FWwiseSoundBankCookedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   SoundBankId                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     SoundBankPathName                                           OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(int32_t)                                   MemoryAlignment                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bDeviceMemory                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bContainsMedia                                              OFFSET(get<bool>, {0x11, 1, 0, 0})
	CMember(EWwiseSoundBankType)                       SoundBankType                                               OFFSET(get<T>, {0x12, 1, 0, 0})
	SMember(FName)                                     DebugName                                                   OFFSET(getStruct<T>, {0x14, 8, 0, 0})
};

/// Enum /Script/WwiseFileHandler.EWwiseLanguageRequirement
/// Size: 0x03
enum class EWwiseLanguageRequirement : uint8_t
{
	EWwiseLanguageRequirement__IsDefault                                             = 0,
	EWwiseLanguageRequirement__IsOptional                                            = 1,
	EWwiseLanguageRequirement__SFX                                                   = 2
};

/// Enum /Script/WwiseFileHandler.EWwiseSoundBankType
/// Size: 0x03
enum class EWwiseSoundBankType : uint8_t
{
	EWwiseSoundBankType__User                                                        = 0,
	EWwiseSoundBankType__Event                                                       = 30,
	EWwiseSoundBankType__Bus                                                         = 31
};

