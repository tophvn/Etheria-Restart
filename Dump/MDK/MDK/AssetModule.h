
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AssetModule.AssetAsync
/// Size: 0x0060 (0x000030 - 0x000090)
class UAssetAsync : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnComplete                                                  OFFSET(getStruct<T>, {0x58, 16, 0, 0})


	/// Functions
	// Function /Script/AssetModule.AssetAsync.LoadListAsyncType
	// class UAssetAsync* LoadListAsyncType(class UObject* WorldContextObject, FPrimaryAssetType& Typ, TArray<FString>& Assets, int32_t groupId, int32_t Priority, TArray<FName>& LoadBundles); // [0x9bb910] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AssetModule.AssetAsync.LoadListAsync
	// class UAssetAsync* LoadListAsync(class UObject* WorldContextObject, TArray<FString>& Assets, int32_t groupId, int32_t Priority, TArray<FName>& LoadBundles); // [0x9bb720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetModule.AssetAsync.LoadAssetAsyncType
	// class UAssetAsync* LoadAssetAsyncType(class UObject* WorldContextObject, FPrimaryAssetType& Typ, FString Asset, int32_t groupId, int32_t Priority, TArray<FName>& LoadBundles); // [0x9bb520] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AssetModule.AssetAsync.LoadAssetAsync
	// class UAssetAsync* LoadAssetAsync(class UObject* WorldContextObject, FString Asset, int32_t groupId, int32_t Priority, TArray<FName>& LoadBundles); // [0x9bb370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AssetModule.AssetCollection
/// Size: 0x0020 (0x000030 - 0x000050)
class UAssetCollection : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UObject*>)                    NonClasses                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UClass*>)                     Classes                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AssetModule.AssetLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AssetModule.AssetLibrary.UnloadList
	// void UnloadList(TArray<FString>& Assets, int32_t groupId);                                                               // [0x9bc3f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.UnloadGroup
	// void UnloadGroup(int32_t groupId);                                                                                       // [0x9bc370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.UnloadAsset
	// void UnloadAsset(FString Asset, int32_t groupId);                                                                        // [0x9bc2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.SyncLoadSoftObject
	// class UObject* SyncLoadSoftObject(TWeakObjectPtr<UObject*>& SoftAsset, TArray<FName>& LoadBundles);                      // [0x9bc170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.SyncLoadByPath
	// class UObject* SyncLoadByPath(FString Path, int32_t groupId, TArray<FName>& LoadBundles);                                // [0x9bc030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.SyncLoadById
	// class UObject* SyncLoadById(FPrimaryAssetId& ID, int32_t groupId, TArray<FName>& LoadBundles);                           // [0x9bbee0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.SyncLoadAsset
	// class UObject* SyncLoadAsset(FString AssetKey, TArray<FName>& LoadBundles);                                              // [0x9bbde0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.PrepareLocalizedSoftObject
	// FString PrepareLocalizedSoftObject(TWeakObjectPtr<UObject*>& SoftAsset);                                                 // [0x9bbce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.MakeLoadPath
	// FString MakeLoadPath(FString TypeName, FString Library, FString Name);                                                   // [0x9bbb50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.IsAssetValid
	// bool IsAssetValid(FString AssetKey);                                                                                     // [0x9bb2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.GetLoadedAsset
	// class UObject* GetLoadedAsset(FString AssetKey);                                                                         // [0x9bb230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AssetModule.AssetLibrary.CastToUClass
	// class UClass* CastToUClass(class UObject* Obj);                                                                          // [0x9bb1a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AssetModule.AssetSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UAssetSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   PatchRoot                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   ConfigRoot                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bSimulateCulling                                            OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/AssetModule.MyAssetManager
/// Size: 0x0000 (0x000458 - 0x000458)
class UMyAssetManager : public UAssetManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
};

