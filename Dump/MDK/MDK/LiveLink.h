
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface
/// dependency: TimeManagement

/// Class /Script/LiveLink.LiveLinkBasicFrameInterpolationProcessor
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bInterpolatePropertyValues                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkAnimationFrameInterpolationProcessor
/// Size: 0x0010 (0x000040 - 0x000050)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/LiveLink.LiveLinkAnimationRoleToTransform
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkAnimationVirtualSubject
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bAppendSubjectNameToBones                                   OFFSET(get<bool>, {0xD9, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
/// Size: 0x0018 (0x000028 - 0x000040)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ELiveLinkAxis)                             OrientationAxisX                                            OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(ELiveLinkAxis)                             OrientationAxisY                                            OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(ELiveLinkAxis)                             OrientationAxisZ                                            OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(ELiveLinkAxis)                             TranslationAxisX                                            OFFSET(get<T>, {0x2B, 1, 0, 0})
	CMember(ELiveLinkAxis)                             TranslationAxisY                                            OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(ELiveLinkAxis)                             TranslationAxisZ                                            OFFSET(get<T>, {0x2D, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
/// Size: 0x0000 (0x000040 - 0x000040)
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/LiveLink.LiveLinkBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformNames
	// void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& TransformNames);                             // [0xc199c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.TransformName
	// void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name);                                                  // [0xc198b0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	// void SetLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bEnabled);                                           // [0xc195d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	// bool RemoveSource(FLiveLinkSourceHandle& SourceHandle);                                                                  // [0xc19500] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	// void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);                             // [0xc19260] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	// int32_t NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle);                                                     // [0xc19190] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	// bool IsSpecificLiveLinkSubjectEnabled(FLiveLinkSubjectKey SubjectKey, bool bForThisFrame);                               // [0xc190a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	// bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle);                                                            // [0xc18fd0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	// bool IsLiveLinkSubjectEnabled(FLiveLinkSubjectName SubjectName);                                                         // [0xc18f40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.HasParent
	// bool HasParent(FLiveLinkTransform& LiveLinkTransform);                                                                   // [0xc18e80] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	// void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform); // [0xc18cf0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	// void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, FLiveLinkTransform& LiveLinkTransform); // [0xc18b60] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	// class UClass* GetSpecificLiveLinkSubjectRole(FLiveLinkSubjectKey SubjectKey);                                            // [0xc185a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	// FText GetSourceType(FLiveLinkSourceHandle& SourceHandle);                                                                // [0xc18470] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	// FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle);                                                              // [0xc18340] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	// FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle);                                                         // [0xc18210] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	// void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform);                   // [0xc180c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	// bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value);                         // [0xc17de0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetParent
	// void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent);                                       // [0xc17ca0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	// void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData);                                   // [0xc17b00] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	// TArray<FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);              // [0xc179f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	// class UClass* GetLiveLinkSubjectRole(FLiveLinkSubjectName SubjectName);                                                  // [0xc17960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	// TArray<FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);                                // [0xc17890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetCurves
	// void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves);                                     // [0xc176c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetChildren
	// void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children);                           // [0xc17550] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	// void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData);             // [0xc173c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	// bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, class UClass* Role, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc130e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	// bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, class UClass* Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc12f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	// bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, class UClass* Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc12d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	// bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData); // [0xc12bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	// void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);                              // [0xc16e60] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LiveLink.LiveLinkBlueprintLibrary.ChildCount
	// int32_t ChildCount(FLiveLinkTransform& LiveLinkTransform);                                                               // [0xc16da0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject
/// Size: 0x0028 (0x0000D8 - 0x000100)
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	// bool UpdateVirtualSubjectStaticData_Internal(FLiveLinkBaseStaticData& InStruct);                                         // [0xc13380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	// bool UpdateVirtualSubjectFrameData_Internal(FLiveLinkBaseFrameData& InStruct);                                           // [0xc13270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	// void OnUpdate();                                                                                                         // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
	// void OnInitialize();                                                                                                     // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/LiveLink.LiveLinkComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class ULiveLinkComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMulticastInlineDelegate)                  OnLiveLinkUpdated                                           OFFSET(getStruct<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	// void GetSubjectDataAtWorldTime(FName SubjectName, float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0xc189a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	// void GetSubjectDataAtSceneTime(FName SubjectName, FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle); // [0xc187b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetSubjectData
	// void GetSubjectData(FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);                         // [0xc18650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	// void GetAvailableSubjectNames(TArray<FName>& SubjectNames);                                                              // [0xc17310] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkDrivenComponent
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class ULiveLinkDrivenComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	SMember(FName)                                     ActorTransformBone                                          OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bModifyActorTransform                                       OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bSetRelativeLocation                                        OFFSET(get<bool>, {0xC1, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkInstance
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class ULiveLinkInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class ULiveLinkRetargetAsset*)             CurrentRetargetAsset                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/LiveLink.LiveLinkInstance.SetSubject
	// void SetSubject(FLiveLinkSubjectName SubjectName);                                                                       // [0xc197b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkInstance.SetRetargetAsset
	// void SetRetargetAsset(class UClass* RetargetAsset);                                                                      // [0xc196b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkMessageBusFinder
/// Size: 0x0058 (0x000028 - 0x000080)
class ULiveLinkMessageBusFinder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	// void GetAvailableProviders(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, TArray<FProviderPollResult>& AvailableProviders); // [0xc17140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	// class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();                                                            // [0xc17110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
	// void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle);                              // [0xc16fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLink.LiveLinkMessageBusSourceSettings
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/LiveLink.LiveLinkPreset
/// Size: 0x0020 (0x000028 - 0x000048)
class ULiveLinkPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FLiveLinkSourcePreset>)             Sources                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FLiveLinkSubjectPreset>)            Subjects                                                    OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/LiveLink.LiveLinkPreset.BuildFromClient
	// void BuildFromClient();                                                                                                  // [0xc16d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLink.LiveLinkPreset.ApplyToClient
	// bool ApplyToClient();                                                                                                    // [0xc16d50] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/LiveLink.LiveLinkPreset.AddToClient
	// bool AddToClient(bool bRecreatePresets);                                                                                 // [0xc16cb0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/LiveLink.LiveLinkRetargetAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkRetargetAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLink.LiveLinkRemapAsset
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:


	/// Functions
	// Function /Script/LiveLink.LiveLinkRemapAsset.RemapCurveElements
	// void RemapCurveElements(TMap<FName, float>& CurveItems);                                                                 // [0xc193c0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	// FName GetRemappedCurveName(FName CurveName);                                                                             // [0xc18020] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
	// FName GetRemappedBoneName(FName BoneName);                                                                               // [0xc17f80] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/LiveLink.LiveLinkRoleProjectSetting
/// Size: 0x0028 (0x000000 - 0x000028)
class FLiveLinkRoleProjectSetting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             Role                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             SettingClass                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UClass*)                             FrameInterpolationProcessor                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<class UClass*>)                     FramePreProcessors                                          OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkSettings
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class ULiveLinkSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FLiveLinkRoleProjectSetting>)       DefaultRoleSettings                                         OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UClass*)                             FrameInterpolationProcessor                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<class ULiveLinkPreset*>)    DefaultLiveLinkPreset                                       OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FDirectoryPath)                            PresetSaveDir                                               OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(float)                                     ClockOffsetCorrectionStep                                   OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(ELiveLinkSourceMode)                       DefaultMessageBusSourceMode                                 OFFSET(get<T>, {0x7C, 1, 0, 0})
	DMember(double)                                    MessageBusPingRequestFrequency                              OFFSET(get<double>, {0x80, 8, 0, 0})
	DMember(double)                                    MessageBusHeartbeatFrequency                                OFFSET(get<double>, {0x88, 8, 0, 0})
	DMember(double)                                    MessageBusHeartbeatTimeout                                  OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(double)                                    MessageBusTimeBeforeRemovingInactiveSource                  OFFSET(get<double>, {0x98, 8, 0, 0})
	DMember(double)                                    TimeWithoutFrameToBeConsiderAsInvalid                       OFFSET(get<double>, {0xA0, 8, 0, 0})
	SMember(FLinearColor)                              ValidColor                                                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FLinearColor)                              InvalidColor                                                OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(char)                                      TextSizeSource                                              OFFSET(get<char>, {0xC8, 1, 0, 0})
	DMember(char)                                      TextSizeSubject                                             OFFSET(get<char>, {0xC9, 1, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkTimecodeProvider
/// Size: 0x0090 (0x000030 - 0x0000C0)
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FLiveLinkSubjectKey)                       SubjectKey                                                  OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(ELiveLinkTimecodeProviderEvaluationType)   Evaluation                                                  OFFSET(get<T>, {0x48, 4, 0, 0})
	DMember(bool)                                      bOverrideFrameRate                                          OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FFrameRate)                                OverrideFrameRate                                           OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x58, 4, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkTimeSynchronizationSource
/// Size: 0x0050 (0x000030 - 0x000080)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Class /Script/LiveLink.LiveLinkVirtualSubjectSourceSettings
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/LiveLink.AnimNode_LiveLinkPose
/// Size: 0x0040 (0x000010 - 0x000050)
class FAnimNode_LiveLinkPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FPoseLink)                                 InputPose                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLiveLinkSubjectName)                      LiveLinkSubjectName                                         OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	CMember(class UClass*)                             RetargetAsset                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class ULiveLinkRetargetAsset*)             CurrentRetargetAsset                                        OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/LiveLink.LiveLinkInstanceProxy
/// Size: 0x0050 (0x000760 - 0x0007B0)
class FLiveLinkInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	SMember(FAnimNode_LiveLinkPose)                    PoseNode                                                    OFFSET(getStruct<T>, {0x760, 80, 0, 0})
};

/// Struct /Script/LiveLink.ProviderPollResult
/// Size: 0x0038 (0x000000 - 0x000038)
class FProviderPollResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   MachineName                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(double)                                    MachineTimeOffset                                           OFFSET(get<double>, {0x30, 8, 0, 0})
};

/// Struct /Script/LiveLink.LiveLinkRetargetAssetReference
/// Size: 0x0001 (0x000000 - 0x000001)
class FLiveLinkRetargetAssetReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/LiveLink.ELiveLinkAxis
/// Size: 0x06
enum class ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X                                                                 = 0,
	ELiveLinkAxis__Y                                                                 = 1,
	ELiveLinkAxis__Z                                                                 = 2,
	ELiveLinkAxis__XNeg                                                              = 3,
	ELiveLinkAxis__YNeg                                                              = 4,
	ELiveLinkAxis__ZNeg                                                              = 5
};

/// Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
/// Size: 0x03
enum class ELiveLinkTimecodeProviderEvaluationType : uint32_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp                                    = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest                                 = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest                                  = 2
};

