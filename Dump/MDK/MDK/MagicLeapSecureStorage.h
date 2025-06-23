
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MagicLeapSecureStorage.MagicLeapSecureStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
	// bool PutSecureVector(FString Key, FVector& DataToStore);                                                                 // [0x132f280] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
	// bool PutSecureTransform(FString Key, FTransform& DataToStore);                                                           // [0x132f560] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
	// bool PutSecureString(FString Key, FString DataToStore);                                                                  // [0x132fce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
	// bool PutSecureSaveGame(FString Key, class USaveGame* ObjectToStore);                                                     // [0x132fc00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
	// bool PutSecureRotator(FString Key, FRotator& DataToStore);                                                               // [0x132f280] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
	// bool PutSecureInt64(FString Key, int64_t DataToStore);                                                                   // [0x132fa40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
	// bool PutSecureInt(FString Key, int32_t DataToStore);                                                                     // [0x132fb20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
	// bool PutSecureFloat(FString Key, float DataToStore);                                                                     // [0x132f950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
	// bool PutSecureByte(FString Key, char DataToStore);                                                                       // [0x132f870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
	// bool PutSecureBool(FString Key, bool DataToStore);                                                                       // [0x132f790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
	// bool PutSecureArray(FString Key, TArray<int32_t>& DataToStore);                                                          // [0x132f690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
	// bool GetSecureVector(FString Key, FVector& DataToRetrieve);                                                              // [0x132f280] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
	// bool GetSecureTransform(FString Key, FTransform& DataToRetrieve);                                                        // [0x132f560] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
	// bool GetSecureString(FString Key, FString& DataToRetrieve);                                                              // [0x132f460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
	// bool GetSecureSaveGame(FString Key, class USaveGame*& ObjectToRetrieve);                                                 // [0x132f370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
	// bool GetSecureRotator(FString Key, FRotator& DataToRetrieve);                                                            // [0x132f280] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
	// bool GetSecureInt64(FString Key, int64_t& DataToRetrieve);                                                               // [0x132f0a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
	// bool GetSecureInt(FString Key, int32_t& DataToRetrieve);                                                                 // [0x132f190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
	// bool GetSecureFloat(FString Key, float& DataToRetrieve);                                                                 // [0x132efb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
	// bool GetSecureByte(FString Key, char& DataToRetrieve);                                                                   // [0x132eec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
	// bool GetSecureBool(FString Key, bool& DataToRetrieve);                                                                   // [0x132eec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
	// bool GetSecureArray(FString Key, TArray<int32_t>& DataToRetrieve);                                                       // [0x132edc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
	// bool DeleteSecureData(FString Key);                                                                                      // [0x132ed20] Final|Native|Static|Public|BlueprintCallable 
};

