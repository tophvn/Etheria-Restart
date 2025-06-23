
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KV_TimeSystem.KV_TimeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKV_TimeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.ToUnixTimestamp
	// int64_t ToUnixTimestamp(FDateTime A);                                                                                    // [0xc59190] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.TomorrowDate
	// FDateTime TomorrowDate(EKV_TimeZoneType Type, FTimespan& Passday);                                                       // [0xc59480] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.Tomorrow
	// FDateTime Tomorrow(EKV_TimeZoneType Type, FTimespan& Passday);                                                           // [0xc593b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.TodayDate
	// FDateTime TodayDate(EKV_TimeZoneType Type, FTimespan& Passday);                                                          // [0xc592e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.Today
	// FDateTime Today(EKV_TimeZoneType Type, FTimespan& Passday);                                                              // [0xc59210] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.TimeSinceTomorrow
	// FTimespan TimeSinceTomorrow(EKV_TimeZoneType Type, FTimespan& Passday);                                                  // [0xc590c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.NowTime
	// FDateTime NowTime(EKV_TimeZoneType Type);                                                                                // [0xc59030] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.InitRemote
	// void InitRemote(int32_t Zone, int64_t UTC);                                                                              // [0xc58f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.FormatDurationFromInt
	// FText FormatDurationFromInt(int64_t InDuration, FString InSkeletonFormat, EKV_MeasureFormatWidth Width, int32_t InMaxUnits, bool bInShowZeroUnits); // [0xc58d70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.FormatDuration
	// FText FormatDuration(FTimespan& InTimespan, FString InSkeletonFormat, EKV_MeasureFormatWidth Width, int32_t InMaxUnits, bool bInShowZeroUnits); // [0xc58b70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.FormatDateTimeFromTimeZone
	// FText FormatDateTimeFromTimeZone(EKV_TimeZoneType InTimeZone, FString InSkeletonFormat);                                 // [0xc588f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.FormatDateTimeFromTimestamp
	// FText FormatDateTimeFromTimestamp(int64_t InTimestamp, FString InSkeletonFormat);                                        // [0xc58a30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.FormatDateTime
	// FText FormatDateTime(FDateTime& InDateTime, FString InSkeletonFormat);                                                   // [0xc587a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.DateTimeToString
	// FString DateTimeToString(FDateTime& DateTime, FString Format);                                                           // [0xc58670] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.ConvertTimeStamp
	// int64_t ConvertTimeStamp(int64_t Timestamp, EKV_TimeZoneID From, EKV_TimeZoneID To);                                     // [0xc58570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_TimeSystem.KV_TimeLibrary.ConvertTime
	// FDateTime ConvertTime(FDateTime& Time, EKV_TimeZoneID From, EKV_TimeZoneID To);                                          // [0xc58450] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Enum /Script/KV_TimeSystem.EKV_MeasureFormatWidth
/// Size: 0x04
enum class EKV_MeasureFormatWidth : uint8_t
{
	EKV_MeasureFormatWidth__Wide                                                     = 0,
	EKV_MeasureFormatWidth__Short                                                    = 1,
	EKV_MeasureFormatWidth__Narrow                                                   = 2,
	EKV_MeasureFormatWidth__Numeric                                                  = 3
};

/// Enum /Script/KV_TimeSystem.EKV_DateTimeID
/// Size: 0x03
enum class EKV_DateTimeID : uint8_t
{
	EKV_DateTimeID__Local                                                            = 0,
	EKV_DateTimeID__Remote                                                           = 1,
	EKV_DateTimeID__Max                                                              = 2
};

/// Enum /Script/KV_TimeSystem.EKV_TimeZoneID
/// Size: 0x04
enum class EKV_TimeZoneID : uint8_t
{
	EKV_TimeZoneID__UTC                                                              = 0,
	EKV_TimeZoneID__Local                                                            = 1,
	EKV_TimeZoneID__Remote                                                           = 2,
	EKV_TimeZoneID__Max                                                              = 3
};

/// Enum /Script/KV_TimeSystem.EKV_TimeZoneType
/// Size: 0x05
enum class EKV_TimeZoneType : uint8_t
{
	EKV_TimeZoneType__Local                                                          = 0,
	EKV_TimeZoneType__Remote                                                         = 1,
	EKV_TimeZoneType__LocalUTC                                                       = 2,
	EKV_TimeZoneType__RemoteUTC                                                      = 3,
	EKV_TimeZoneType__Max                                                            = 4
};

