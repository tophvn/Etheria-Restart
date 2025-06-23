
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/GameplayTags.BlueprintGameplayTagLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	// bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);                                           // [0x2ad5c80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	// bool NotEqual_TagTag(FGameplayTag A, FString B);                                                                         // [0x2ad5b50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	// bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);                                              // [0x2ad59e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	// bool NotEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);                                  // [0x2ad5890] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	// bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);                                                               // [0x2ad57c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	// bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);                                             // [0x2ad56c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	// bool MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer& OtherContainer, bool bExactMatch);                       // [0x2ad5570] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	// FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);                                      // [0x2ad5460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	// FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);                                                                 // [0x2ad53d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	// FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery);                                                      // [0x2ad52a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	// FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);                                           // [0x2ad51f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	// FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<FGameplayTag>& GameplayTags);                             // [0x2ad5120] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	// bool IsTagQueryEmpty(FGameplayTagQuery& TagQuery);                                                                       // [0x2ad5040] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	// bool IsGameplayTagValid(FGameplayTag GameplayTag);                                                                       // [0x2ad4fb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasTag
	// bool HasTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);                                    // [0x2ad4e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	// bool HasAnyTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);           // [0x2ad4c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	// bool HasAllTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);           // [0x2ad49d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(TScriptInterface<Class> TagContainerInterface, FGameplayTagContainer& OtherContainer);   // [0x2ad48b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	// FName GetTagName(FGameplayTag& GameplayTag);                                                                             // [0x2ad4740] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	// int32_t GetNumGameplayTagsInContainer(FGameplayTagContainer& TagContainer);                                              // [0x2ad45c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	// FString GetDebugStringFromGameplayTagContainer(FGameplayTagContainer& TagContainer);                                     // [0x2ad44c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	// FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);                                                         // [0x2ad43f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	// void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors); // [0x2ad4210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	// bool EqualEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);                                // [0x2ad40c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	// bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);                                                             // [0x2ad3ff0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	// bool DoesTagAssetInterfaceHaveTag(TScriptInterface<Class> TagContainerInterface, FGameplayTag Tag);                      // [0x2ad3f00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	// bool DoesContainerMatchTagQuery(FGameplayTagContainer& TagContainer, FGameplayTagQuery& TagQuery);                       // [0x2ad3da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	// void BreakGameplayTagContainer(FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);         // [0x2ad3c80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	// void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, FGameplayTagContainer& InTagContainer);       // [0x2ad3b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
	// void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);                                              // [0x2ad3a50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTags.GameplayTagAssetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayTagAssetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	// bool HasMatchingGameplayTag(FGameplayTag TagToCheck);                                                                    // [0x2ad4dc0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	// bool HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer);                                                    // [0x2ad4b60] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer);                                                    // [0x2ad47e0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	// void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);                                                          // [0x2ad4680] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/GameplayTags.GameplayTag
/// Size: 0x0008 (0x000000 - 0x000008)
class FGameplayTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     TagName                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagQuery
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayTagQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   TokenStreamVersion                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      TagDictionary                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<char>)                              QueryTokenStream                                            OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   UserDescription                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   AutoDescription                                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQuery
/// Size: 0x0070 (0x000028 - 0x000098)
class UEditableGameplayTagQuery : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   UserDescription                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UEditableGameplayTagQueryExpression*) RootExpression                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FGameplayTagQuery)                         TagQueryExportText_Helper                                   OFFSET(getStruct<T>, {0x50, 72, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableGameplayTagQueryExpression : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayTags.GameplayTagContainer
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGameplayTag>)                      GameplayTags                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayTag>)                      ParentTags                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
/// Size: 0x0020 (0x000028 - 0x000048)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
/// Size: 0x0020 (0x000028 - 0x000048)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
/// Size: 0x0020 (0x000028 - 0x000048)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
/// Size: 0x0010 (0x000028 - 0x000038)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UEditableGameplayTagQueryExpression*>) Expressions                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
/// Size: 0x0010 (0x000028 - 0x000038)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UEditableGameplayTagQueryExpression*>) Expressions                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
/// Size: 0x0010 (0x000028 - 0x000038)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UEditableGameplayTagQueryExpression*>) Expressions                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagSource
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(EGameplayTagSourceType)                    SourceType                                                  OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(class UGameplayTagsList*)                  SourceTagList                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class URestrictedGameplayTagsList*)        SourceRestrictedTagList                                     OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Class /Script/GameplayTags.GameplayTagsManager
/// Size: 0x01E8 (0x000028 - 0x000210)
class UGameplayTagsManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TArray<FGameplayTagSource>)                TagSources                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<class UDataTable*>)                 GameplayTagTables                                           OFFSET(get<T>, {0x1B0, 16, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagTableRow
/// Size: 0x0018 (0x000008 - 0x000020)
class FGameplayTagTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Tag                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   DevComment                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Class /Script/GameplayTags.GameplayTagsList
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameplayTagsList : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ConfigFileName                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FGameplayTagTableRow>)              GameplayTagList                                             OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/GameplayTags.RestrictedGameplayTagTableRow
/// Size: 0x0008 (0x000020 - 0x000028)
class FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bAllowNonRestrictedChildren                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Class /Script/GameplayTags.RestrictedGameplayTagsList
/// Size: 0x0020 (0x000028 - 0x000048)
class URestrictedGameplayTagsList : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ConfigFileName                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FRestrictedGameplayTagTableRow>)    RestrictedGameplayTagList                                   OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagCategoryRemap
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagCategoryRemap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   BaseCategory                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           RemapCategories                                             OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagRedirect
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayTagRedirect : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     OldTagName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     NewTagName                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/GameplayTags.RestrictedConfigInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FRestrictedConfigInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   RestrictedConfigName                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Owners                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Class /Script/GameplayTags.GameplayTagsSettings
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UGameplayTagsSettings : public UGameplayTagsList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      ImportTagsFromConfig                                        OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      WarnOnInvalidTags                                           OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      FastReplication                                             OFFSET(get<bool>, {0x4A, 1, 0, 0})
	SMember(FString)                                   InvalidTagCharacters                                        OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TArray<FGameplayTagCategoryRemap>)         CategoryRemapping                                           OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   GameplayTagTableList                                        OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FGameplayTagRedirect>)              GameplayTagRedirects                                        OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FName>)                             CommonlyReplicatedTags                                      OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(int32_t)                                   NumBitsForContainerSize                                     OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   NetIndexFirstBitSegment                                     OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	CMember(TArray<FRestrictedConfigInfo>)             RestrictedConfigFiles                                       OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/GameplayTags.GameplayTagsDeveloperSettings
/// Size: 0x0018 (0x000038 - 0x000050)
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   DeveloperConfigName                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FName)                                     FavoriteTagSource                                           OFFSET(getStruct<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagCreationWidgetHelper
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayTagCreationWidgetHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GameplayTags.GameplayTagReferenceHelper
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayTagReferenceHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayTags.GameplayTagNode
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayTagNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Enum /Script/GameplayTags.EGameplayTagQueryExprType
/// Size: 0x07
enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined                                             = 0,
	EGameplayTagQueryExprType__AnyTagsMatch                                          = 1,
	EGameplayTagQueryExprType__AllTagsMatch                                          = 2,
	EGameplayTagQueryExprType__NoTagsMatch                                           = 3,
	EGameplayTagQueryExprType__AnyExprMatch                                          = 4,
	EGameplayTagQueryExprType__AllExprMatch                                          = 5,
	EGameplayTagQueryExprType__NoExprMatch                                           = 6
};

/// Enum /Script/GameplayTags.EGameplayContainerMatchType
/// Size: 0x02
enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any                                                 = 0,
	EGameplayContainerMatchType__All                                                 = 1
};

/// Enum /Script/GameplayTags.EGameplayTagMatchType
/// Size: 0x02
enum class EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit                                                  = 0,
	EGameplayTagMatchType__IncludeParentTags                                         = 1
};

/// Enum /Script/GameplayTags.EGameplayTagSelectionType
/// Size: 0x04
enum class EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None                                                  = 0,
	EGameplayTagSelectionType__NonRestrictedOnly                                     = 1,
	EGameplayTagSelectionType__RestrictedOnly                                        = 2,
	EGameplayTagSelectionType__All                                                   = 3
};

/// Enum /Script/GameplayTags.EGameplayTagSourceType
/// Size: 0x06
enum class EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native                                                   = 0,
	EGameplayTagSourceType__DefaultTagList                                           = 1,
	EGameplayTagSourceType__TagList                                                  = 2,
	EGameplayTagSourceType__RestrictedTagList                                        = 3,
	EGameplayTagSourceType__DataTable                                                = 4,
	EGameplayTagSourceType__Invalid                                                  = 5
};

