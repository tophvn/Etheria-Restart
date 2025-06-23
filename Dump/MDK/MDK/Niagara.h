
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (0x000078 - 0x000088)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraTypeDefinitionHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   RegisteredTypeIndex                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraVariableBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraTypeDefinitionHandle)              TypeDefHandle                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0014 (0x00000C - 0x000020)
class FNiagaraVariable : public FNiagaraVariableBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<char>)                              VarData                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0x88, 32, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SectionStartBehavior                                        OFFSET(get<T>, {0xE8, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SectionEvaluateBehavior                                    OFFSET(get<T>, {0xEC, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SectionEndBehavior                                          OFFSET(get<T>, {0xF0, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               OFFSET(get<T>, {0xF4, 1, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0008 (0x000088 - 0x000090)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (0x000220 - 0x000230)
class ANiagaraActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UNiagaraComponent*)                  NiagaraComponent                                            OFFSET(get<T>, {0x220, 8, 0, 0})
	DMember(bool)                                      bDestroyOnSystemFinish                                      OFFSET(get<bool>, {0x228, 1, 1, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0xea6fd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	// void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);                                                // [0xea6f40] Final|Native|Private 
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0004 (0x00000C - 0x000010)
class FNiagaraVariableWithOffset : public FNiagaraVariableBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Offset                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0078 (0x000000 - 0x000078)
class FNiagaraParameterStore : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UObject*)                            Owner                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FNiagaraVariableWithOffset>)        SortedParameterOffsets                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<char>)                              ParameterData                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UNiagaraDataInterface*>)      DataInterfaces                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UObject*>)                    UObjects                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (0x000078 - 0x0000C8)
class FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FNiagaraVariable, FNiagaraVariable>)  UserParameterRedirects                                      OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMaterialOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint32_t)                                  MaterialSubIndex                                            OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	CMember(class UNiagaraRendererProperties*)         EmitterRendererProperty                                     OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x01A8 (0x000468 - 0x000610)
class UNiagaraComponent : public UFXSystemComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(class UNiagaraSystem*)                     Asset                                                       OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(ENiagaraTickBehavior)                      TickBehavior                                                OFFSET(get<T>, {0x470, 1, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     OverrideParameters                                          OFFSET(getStruct<T>, {0x478, 200, 0, 0})
	DMember(bool)                                      bForceSolo                                                  OFFSET(get<bool>, {0x540, 1, 1, 0})
	DMember(bool)                                      bEnableGpuComputeDebug                                      OFFSET(get<bool>, {0x540, 1, 1, 1})
	DMember(bool)                                      bAutoDestroy                                                OFFSET(get<bool>, {0x56C, 1, 1, 0})
	DMember(bool)                                      bRenderingEnabled                                           OFFSET(get<bool>, {0x56C, 1, 1, 1})
	DMember(bool)                                      bAutoManageAttachment                                       OFFSET(get<bool>, {0x56C, 1, 1, 2})
	DMember(bool)                                      bAutoAttachWeldSimulatedBodies                              OFFSET(get<bool>, {0x56C, 1, 1, 3})
	DMember(float)                                     MaxTimeBeforeForceUpdateTransform                           OFFSET(get<float>, {0x570, 4, 0, 0})
	CMember(TArray<FNiagaraMaterialOverride>)          EmitterMaterials                                            OFFSET(get<T>, {0x578, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSystemFinished                                            OFFSET(getStruct<T>, {0x590, 16, 0, 0})
	CMember(TWeakObjectPtr<class USceneComponent*>)    AutoAttachParent                                            OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FName)                                     AutoAttachSocketName                                        OFFSET(getStruct<T>, {0x5A8, 8, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachLocationRule                                      OFFSET(get<T>, {0x5B0, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachRotationRule                                      OFFSET(get<T>, {0x5B1, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachScaleRule                                         OFFSET(get<T>, {0x5B2, 1, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0xeab540] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0xeab460] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0xeab390] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);              // [0xeab2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0xeab1f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	// void SetVariableObject(FName InVariableName, class UObject* Object);                                                     // [0xeab120] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	// void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);                                        // [0xeab050] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0xeaaf80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0xeaaeb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	// void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0xeaade0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	// void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0xeaad10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	// void SetVariableActor(FName InVariableName, class AActor* Actor);                                                        // [0xeaac40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0xeaabc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	// void SetSeekDelta(float InSeekDelta);                                                                                    // [0xeaab40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0xeaaab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);                                    // [0xeaa9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	// void SetPaused(bool bInPaused);                                                                                          // [0xeaa950] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0xeaa860] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0xeaa770] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0xeaa690] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0xeaa5a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	// void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);                                            // [0xeaa120] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0xeaa4b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0xeaa3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0xeaa2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0xeaa200] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	// void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);                                               // [0xeaa120] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	// void SetMaxSimTime(float InMaxTime);                                                                                     // [0xeaa0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0xeaa010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	// void SetForceSolo(bool bInForceSolo);                                                                                    // [0xea9f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	// void SetDesiredAge(float InDesiredAge);                                                                                  // [0xea9f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0xea9e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0xea9de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	// void SetAsset(class UNiagaraSystem* InAsset);                                                                            // [0xea9d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	// void SetAllowScalability(bool bAllow);                                                                                   // [0xea9cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0xea9c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	// void SeekToDesiredAge(float InDesiredAge);                                                                               // [0xea9bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	// void ResetSystem();                                                                                                      // [0xea9ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	// void ReinitializeSystem();                                                                                               // [0xea9b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0xea9b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	// ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0xea9b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	// float GetSeekDelta();                                                                                                    // [0xea9b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// bool GetPreviewLODDistanceEnabled();                                                                                     // [0xea9ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	// int32_t GetPreviewLODDistance();                                                                                         // [0xea9ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	// TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                       // [0xea9820] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	// TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                            // [0xea9970] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	// TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                            // [0xea9730] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	// float GetMaxSimTime();                                                                                                   // [0xea9700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	// bool GetForceSolo();                                                                                                     // [0xea96d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	// float GetDesiredAge();                                                                                                   // [0xea96a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	// class UNiagaraDataInterface* GetDataInterface(FString Name);                                                             // [0xea95f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	// class UNiagaraSystem* GetAsset();                                                                                        // [0xea95d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0xea95a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0xea94d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0xea9400] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (0x000000 - 0x000010)
class FNCPoolElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UNiagaraComponent*)                  Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0038 (0x000000 - 0x000038)
class FNCPool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNCPoolElement>)                    FreeElements                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          InUseComponents_Auto                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          InUseComponents_Manual                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (0x000028 - 0x000080)
class UNiagaraComponentPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<class UNiagaraSystem*, FNCPool>)      WorldParticleSystemPools                                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraDeviceProfileStateEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ProfileName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(uint32_t)                                  QualityLevelMask                                            OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  SetQualityLevelMask                                         OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraPlatformSetCVarCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     CVarName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   MinInt                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxInt                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     MinFloat                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxFloat                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bUseMinInt                                                  OFFSET(get<bool>, {0x1C, 1, 1, 0})
	DMember(bool)                                      bUseMaxInt                                                  OFFSET(get<bool>, {0x1C, 1, 1, 1})
	DMember(bool)                                      bUseMinFloat                                                OFFSET(get<bool>, {0x1C, 1, 1, 2})
	DMember(bool)                                      bUseMaxFloat                                                OFFSET(get<bool>, {0x1C, 1, 1, 3})
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraPlatformSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   QualityLevelMask                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FNiagaraDeviceProfileStateEntry>)   DeviceProfileStates                                         OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraPlatformSetCVarCondition>)  CVarConditions                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0058 (0x000028 - 0x000080)
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	DMember(int32_t)                                   SortOrderHint                                               OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bMotionBlurEnabled                                          OFFSET(get<bool>, {0x5D, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraVariableAttributeBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FNiagaraVariableBase)                      ParamMapVariable                                            OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FNiagaraVariable)                          DataSetVariable                                             OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FNiagaraVariable)                          RootVariable                                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	CMember(TEnumAsByte<ENiagaraBindingSource>)        BindingSourceMode                                           OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(bool)                                      bBindingExistsOnSource                                      OFFSET(get<bool>, {0x54, 1, 1, 0})
	DMember(bool)                                      bIsCachedParticleValue                                      OFFSET(get<bool>, {0x54, 1, 1, 1})
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraTypeDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UObject*)                            ClassStructOrEnum                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  UnderlyingType                                              OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FNiagaraComponentPropertyBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FNiagaraVariableAttributeBinding)          AttributeBinding                                            OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	SMember(FNiagaraTypeDefinition)                    PropertyType                                                OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FName)                                     MetadataSetterName                                          OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FNiagaraVariable)                          WritableValue                                               OFFSET(getStruct<T>, {0x78, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x00E0 (0x000080 - 0x000160)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UClass*)                             ComponentType                                               OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(uint32_t)                                  ComponentCountLimit                                         OFFSET(get<uint32_t>, {0x88, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              OFFSET(getStruct<T>, {0x90, 88, 0, 0})
	DMember(bool)                                      bAssignComponentsOnParticleID                               OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bOnlyCreateComponentsOnParticleSpawn                        OFFSET(get<bool>, {0xE9, 1, 0, 0})
	CMember(class USceneComponent*)                    TemplateComponent                                           OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<FNiagaraComponentPropertyBinding>)  PropertyBindings                                            OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentSettings
/// Size: 0x00F0 (0x000028 - 0x000118)
class UNiagaraComponentSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TSet<FName>)                               SuppressActivationList                                      OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TSet<FName>)                               ForceAutoPooolingList                                       OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TSet<FNiagaraEmitterNameSettingsRef>)      SuppressEmitterList                                         OFFSET(get<T>, {0xC8, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UTexture2DArray*)                    Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   MaxElements                                                 OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<float>)                             FloatData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FVector2D>)                         FloatData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FVector>)                           FloatData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FVector4>)                          FloatData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FLinearColor>)                      ColorData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FQuat>)                             QuatData                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	// void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData);    // [0xeaf6c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	// void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData);  // [0xeaf5a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	// void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);      // [0xeaf7e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	// void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);          // [0xeaf480] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	// void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0xeaf360] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	// void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);         // [0xeaf240] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	// void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData);  // [0xeaf120] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	// void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);           // [0xeaf000] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	// TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0xeae780] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	// TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0xeae670] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	// TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                       // [0xeae890] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	// TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                           // [0xeae560] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	// TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0xeae450] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	// TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                          // [0xeae340] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	// TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0xeae230] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	// TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                            // [0xeae120] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<int32_t>)                           IntData                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<bool>)                              BoolData                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class USoundSubmix*)                       Submix                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class USoundSubmix*)                       Submix                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     ScopeInMilliseconds                                         OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class USoundBase*)                         SoundToPlay                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class USoundAttenuation*)                  Attenuation                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class USoundConcurrency*)                  Concurrency                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<FName>)                             ParameterNames                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bLimitPlaysPerTick                                          OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(int32_t)                                   MaxPlaysPerTick                                             OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bStopWhenComponentIsDestroyed                               OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   PlayerControllerIndex                                       OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<float>)                             ShaderLUT                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     LUTMinTime                                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LUTMaxTime                                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LUTInvTimeRange                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LUTNumSamplesMinusOne                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseLUT                                                     OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bExposeCurve                                                OFFSET(get<bool>, {0x58, 1, 1, 1})
	SMember(FName)                                     ExposedName                                                 OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	CMember(class UTexture2D*)                         ExposedTexture                                              OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                RedCurve                                                    OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                GreenCurve                                                  OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                BlueCurve                                                   OFFSET(getStruct<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                AlphaCurve                                                  OFFSET(getStruct<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  Seed                                                        OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FRichCurve)                                Curve                                                       OFFSET(getStruct<T>, {0x70, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParticleCallbackHandler : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);                         // [0xeaef00] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraUserParameterBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNiagaraUserParameterBinding)              CallbackHandlerParameter                                    OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	CMember(ENDIExport_GPUAllocationMode)              GPUAllocationMode                                           OFFSET(get<T>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   GPUAllocationFixedSize                                      OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(float)                                     GPUAllocationPerParticleSize                                OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TSet<int32_t>)                             OutputShaderStages                                          OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TSet<int32_t>)                             IterationShaderStages                                       OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0020 (0x0000D8 - 0x0000F8)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(int32_t)                                   NumCellsX                                                   OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   NumCellsY                                                   OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	DMember(bool)                                      SetGridFromMaxAxis                                          OFFSET(get<bool>, {0xE8, 1, 0, 0})
	SMember(FVector2D)                                 WorldBBoxSize                                               OFFSET(getStruct<T>, {0xEC, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C8 (0x0000F8 - 0x0001C0)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xF8, 32, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   OverrideBufferFormat                                        OFFSET(get<T>, {0x118, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x119, 1, 1, 0})
	CMember(TMap<uint64_t, class UTextureRenderTarget2DArray*>) ManagedRenderTargets                               OFFSET(get<T>, {0x170, 80, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                 // [0xeaec50] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                              // [0xeae9a0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);      // [0xeae000] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // [0xeadc90] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0070 (0x0000F8 - 0x000168)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FString)                                   DIName                                                      OFFSET(getStruct<T>, {0x108, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0028 (0x0000D8 - 0x000100)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FIntVector)                                NumCells                                                    OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	CMember(ESetResolutionMethod)                      SetResolutionMethod                                         OFFSET(get<T>, {0xEC, 4, 0, 0})
	SMember(FVector)                                   WorldBBoxSize                                               OFFSET(getStruct<T>, {0xF0, 12, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0080 (0x000100 - 0x000180)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0x108, 32, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   BufferFormat                                                OFFSET(get<T>, {0x128, 1, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                 // [0xeaed80] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);              // [0xeaead0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);          // [0xeae000] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0xeade00] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class AActor*)                             SourceLandscape                                             OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (0x000100 - 0x000108)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(uint32_t)                                  MaxNeighborsPerCell                                         OFFSET(get<uint32_t>, {0x100, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0010 (0x0000D8 - 0x0000E8)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x38, 48, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FIntPoint)                                 Size                                                        OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0xE1, 1, 1, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	CMember(TMap<uint64_t, class UTextureRenderTarget2D*>) ManagedRenderTargets                                    OFFSET(get<T>, {0x108, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0xE5, 1, 1, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	CMember(TMap<uint64_t, class UTextureRenderTarget2DArray*>) ManagedRenderTargets                               OFFSET(get<T>, {0x108, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0xE5, 1, 1, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	CMember(TMap<uint64_t, class UTextureRenderTargetVolume*>) ManagedRenderTargets                                OFFSET(get<T>, {0x108, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(ENDISkeletalMesh_SourceMode)               SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(class AActor*)                             Source                                                      OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MeshUserParameter                                           OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	CMember(class USkeletalMeshComponent*)             SourceComponent                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(ENDISkeletalMesh_SkinningMode)             SkinningMode                                                OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TArray<FName>)                             SamplingRegions                                             OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(int32_t)                                   WholeMeshLOD                                                OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(TArray<FName>)                             FilteredBones                                               OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FName)                                     ExcludeBoneName                                             OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bExcludeBone                                                OFFSET(get<bool>, {0xB8, 1, 1, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0xB9, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class AActor*)                             Source                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNDIStaticMeshSectionFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           AllowedMaterialSlots                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(ENDIStaticMesh_SourceMode)                 SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(class UStaticMesh*)                        DefaultMesh                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class AActor*)                             Source                                                      OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SourceComponent                                             OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FNDIStaticMeshSectionFilter)               SectionFilter                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bUsePhysicsBodyVelocity                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (0x000070 - 0x000170)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      OFFSET(getStruct<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                WCurve                                                      OFFSET(getStruct<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (0x000070 - 0x0001F0)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      OFFSET(getStruct<T>, {0x170, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UVectorField*)                       Field                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bTileX                                                      OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bTileY                                                      OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bTileZ                                                      OFFSET(get<bool>, {0x42, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UVolumeTexture*)                     Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorDataBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraSystemScalabilitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bCullByDistance                                             OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bCullMaxInstanceCount                                       OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bCullPerSystemMaxInstanceCount                              OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(bool)                                      bCullByMaxTimeWithoutRender                                 OFFSET(get<bool>, {0x30, 1, 1, 3})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MaxInstances                                                OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxSystemInstances                                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaxTimeWithoutRender                                        OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilitySettingsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilitySettings>) Settings                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraEmitterScalabilitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bScaleSpawnCount                                            OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     SpawnCountScale                                             OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilitySettingsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilitySettings>) Settings                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x00E8 (0x000028 - 0x000110)
class UNiagaraEffectType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ENiagaraScalabilityUpdateFrequency)        UpdateFrequency                                             OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(ENiagaraCullReaction)                      CullReaction                                                OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(class UNiagaraSignificanceHandler*)        SignificanceHandler                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FNiagaraSystemScalabilitySettings>) DetailLevelScalabilitySettings                              OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FNiagaraSystemScalabilitySettingsArray)    SystemScalabilitySettings                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FNiagaraEmitterScalabilitySettingsArray)   EmitterScalabilitySettings                                  OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraEventReceiverProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SourceEventGenerator                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     SourceEmitter                                               OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraTypeLayoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<uint32_t>)                          FloatComponentByteOffsets                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<uint32_t>)                          FloatComponentRegisterOffsets                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Int32ComponentByteOffsets                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Int32ComponentRegisterOffsets                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<uint32_t>)                          HalfComponentByteOffsets                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<uint32_t>)                          HalfComponentRegisterOffsets                                OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FNiagaraVariableLayoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(uint32_t)                                  FloatComponentStart                                         OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Int32ComponentStart                                         OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  HalfComponentStart                                          OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	SMember(FNiagaraTypeLayoutInfo)                    LayoutInfo                                                  OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraDataSetID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(ENiagaraDataSetType)                       Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraDataSetCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FNiagaraVariable>)                  Variables                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraVariableLayoutInfo>)        VariableLayouts                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FNiagaraDataSetID)                         ID                                                          OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(uint32_t)                                  TotalFloatComponents                                        OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  TotalInt32Components                                        OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(uint32_t)                                  TotalHalfComponents                                         OFFSET(get<uint32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x38, 1, 1, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x3C, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraEventGeneratorProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   MaxEventsPerFrame                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(getStruct<T>, {0x10, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraEmitterScriptProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UNiagaraScript*)                     Script                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraEventReceiverProperties>)   EventReceivers                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraEventGeneratorProperties>)  EventGenerators                                             OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraDetailsLevelScaleOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Low                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Medium                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     High                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Epic                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Cine                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (0x000038 - 0x000040)
class FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bOverrideSpawnCountScale                                    OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilityOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilityOverride>) Overrides                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (0x000028 - 0x000058)
class FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EScriptExecutionMode)                      ExecutionMode                                               OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(uint32_t)                                  SpawnNumber                                                 OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  MaxEventsPerFrame                                           OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	SMember(FGuid)                                     SourceEmitterID                                             OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FName)                                     SourceEventName                                             OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      bRandomSpawnNumber                                          OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(uint32_t)                                  MinSpawnNumber                                              OFFSET(get<uint32_t>, {0x50, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0278 (0x000028 - 0x0002A0)
class UNiagaraEmitter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(bool)                                      bLocalSpace                                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bDeterminism                                                OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(EParticleAllocationMode)                   AllocationMode                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   PreAllocationCount                                          OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           UpdateScriptProps                                           OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           SpawnScriptProps                                            OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x88, 1, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 OFFSET(getStruct<T>, {0x8C, 28, 0, 0})
	DMember(int32_t)                                   MinDetailLevel                                              OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   MaxDetailLevel                                              OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	SMember(FNiagaraDetailsLevelScaleOverrides)        GlobalSpawnCountScaleOverrides                              OFFSET(getStruct<T>, {0xB0, 20, 0, 0})
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0xC8, 48, 0, 0})
	SMember(FNiagaraEmitterScalabilityOverrides)       ScalabilityOverrides                                        OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	DMember(bool)                                      bInterpolatedSpawning                                       OFFSET(get<bool>, {0x108, 1, 1, 0})
	DMember(bool)                                      bFixedBounds                                                OFFSET(get<bool>, {0x108, 1, 1, 1})
	DMember(bool)                                      bUseMinDetailLevel                                          OFFSET(get<bool>, {0x108, 1, 1, 2})
	DMember(bool)                                      bUseMaxDetailLevel                                          OFFSET(get<bool>, {0x108, 1, 1, 3})
	DMember(bool)                                      bOverrideGlobalSpawnCountScale                              OFFSET(get<bool>, {0x108, 1, 1, 4})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x108, 1, 1, 5})
	DMember(bool)                                      bCombineEventSpawn                                          OFFSET(get<bool>, {0x108, 1, 1, 6})
	DMember(float)                                     MaxDeltaTimePerTick                                         OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(uint32_t)                                  DefaultShaderStageIndex                                     OFFSET(get<uint32_t>, {0x110, 4, 0, 0})
	DMember(uint32_t)                                  MaxUpdateIterations                                         OFFSET(get<uint32_t>, {0x114, 4, 0, 0})
	CMember(TSet<uint32_t>)                            SpawnStages                                                 OFFSET(get<T>, {0x118, 80, 0, 0})
	DMember(bool)                                      bSimulationStagesEnabled                                    OFFSET(get<bool>, {0x168, 1, 1, 0})
	DMember(bool)                                      bDeprecatedShaderStagesEnabled                              OFFSET(get<bool>, {0x168, 1, 1, 1})
	DMember(bool)                                      bLimitDeltaTime                                             OFFSET(get<bool>, {0x168, 1, 1, 2})
	SMember(FString)                                   UniqueEmitterName                                           OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	CMember(TArray<class UNiagaraRendererProperties*>) RendererProperties                                          OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TArray<FNiagaraEventScriptProperties>)     EventHandlerScriptProps                                     OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<class UNiagaraSimulationStageBase*>) SimulationStages                                           OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(class UNiagaraScript*)                     GPUComputeScript                                            OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TArray<FName>)                             SharedEventGeneratorIds                                     OFFSET(get<T>, {0x1B8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(uint32_t)                                  NumParticles                                                OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0xeb73a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0xeb70c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	// void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture); // [0xeb6fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject
	// void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);            // [0xeb6bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	// void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // [0xeb6a90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent); // [0xeb64e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh); // [0xeb63c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0xeb62a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection); // [0xeb5ed0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x0258 (0x000080 - 0x0002D8)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	DMember(bool)                                      bUseInverseSquaredFalloff                                   OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bAffectsTranslucency                                        OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(float)                                     RadiusScale                                                 OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FVector)                                   ColorAdd                                                    OFFSET(getStruct<T>, {0x88, 12, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightRenderingEnabledBinding                                OFFSET(getStruct<T>, {0x98, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightExponentBinding                                        OFFSET(getStruct<T>, {0xF0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0x148, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x1A0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RadiusBinding                                               OFFSET(getStruct<T>, {0x1F8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumetricScatteringBinding                                 OFFSET(getStruct<T>, {0x250, 88, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraMeshMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMaterialInterface*)                 ExplicitMat                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              UserParamBinding                                            OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x05F8 (0x000080 - 0x000678)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1656;

public:
	CMember(class UStaticMesh*)                        ParticleMesh                                                OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(bool)                                      bOverrideMaterials                                          OFFSET(get<bool>, {0x8C, 1, 1, 0})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    OFFSET(get<bool>, {0x8C, 1, 1, 1})
	CMember(TArray<FNiagaraMeshMaterialOverride>)      OverrideMaterials                                           OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bSubImageBlend                                              OFFSET(get<bool>, {0xA8, 1, 1, 0})
	CMember(ENiagaraMeshFacingMode)                    FacingMode                                                  OFFSET(get<T>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bLockedAxisEnable                                           OFFSET(get<bool>, {0xB0, 1, 1, 0})
	SMember(FVector)                                   LockedAxis                                                  OFFSET(getStruct<T>, {0xB4, 12, 0, 0})
	CMember(ENiagaraMeshLockedAxisSpace)               LockedAxisSpace                                             OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 OFFSET(getStruct<T>, {0xC4, 12, 0, 0})
	CMember(ENiagaraMeshPivotOffsetSpace)              PivotOffsetSpace                                            OFFSET(get<T>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bEnableFrustumCulling                                       OFFSET(get<bool>, {0xD4, 1, 1, 0})
	DMember(bool)                                      bEnableCameraDistanceCulling                                OFFSET(get<bool>, {0xD4, 1, 1, 1})
	DMember(float)                                     MinCameraDistance                                           OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          OFFSET(get<uint32_t>, {0xE0, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0xE8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x140, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(getStruct<T>, {0x198, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MeshOrientationBinding                                      OFFSET(getStruct<T>, {0x1F0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ScaleBinding                                                OFFSET(getStruct<T>, {0x248, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        OFFSET(getStruct<T>, {0x2A0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(getStruct<T>, {0x2F8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(getStruct<T>, {0x350, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(getStruct<T>, {0x3A8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(getStruct<T>, {0x400, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(getStruct<T>, {0x458, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        OFFSET(getStruct<T>, {0x4B0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(getStruct<T>, {0x508, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         OFFSET(getStruct<T>, {0x560, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x5B8, 88, 0, 0})
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMessageDataBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UNiagaraParameterCollectionInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UNiagaraParameterCollection*)        Collection                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  OverridenParameters                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    ParameterStorage                                            OFFSET(getStruct<T>, {0x40, 120, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0xeb6eb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0xeb6dc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0xeb6ce0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0xeb69a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0xeb68c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0xeb67d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0xeb66e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0xeb6600] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// FVector GetVectorParameter(FString InVariableName);                                                                      // [0xeb61e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0xeb6120] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0xeb6060] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// FQuat GetQuatParameter(FString InVariableName);                                                                          // [0xeb5fa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// int32_t GetIntParameter(FString InVariableName);                                                                         // [0xeb5e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// float GetFloatParameter(FString InVariableName);                                                                         // [0xeb5d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0xeb5cb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// bool GetBoolParameter(FString InVariableName);                                                                           // [0xeb5c00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraParameterCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     Namespace                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UMaterialParameterCollection*)       SourceMaterialCollection                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UNiagaraParameterCollectionInstance*) DefaultInstance                                            OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FGuid)                                     CompileId                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraPrecompileContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UNiagaraScript*>)             Scripts                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UNiagaraSystem*)                     System                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0000 (0x000220 - 0x000220)
class ANiagaraPreviewBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewBase.SetSystem
	// void SetSystem(class UNiagaraSystem* InSystem);                                                                          // [0x198a600] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewBase.SetLabelText
	// void SetLabelText(FText& InXAxisText, FText& InYAxisText);                                                               // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraPreviewAxis : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewAxis.Num
	// int32_t Num();                                                                                                           // [0xeba7c0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview
	// void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // [0xeba570] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Param                                                       OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   Min                                                         OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   Max                                                         OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector2D)                                 Min                                                         OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FVector2D)                                 Max                                                         OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Min                                                         OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	SMember(FVector)                                   Max                                                         OFFSET(getStruct<T>, {0x44, 12, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector4)                                  Min                                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FVector4)                                  Max                                                         OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FLinearColor)                              Min                                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FLinearColor)                              Max                                                         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (0x000220 - 0x000270)
class ANiagaraPreviewGrid : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class UNiagaraSystem*)                     System                                                      OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(ENiagaraPreviewGridResetMode)              ResetMode                                                   OFFSET(get<T>, {0x228, 1, 0, 0})
	CMember(class UNiagaraPreviewAxis*)                PreviewAxisX                                                OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UNiagaraPreviewAxis*)                PreviewAxisY                                                OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class UClass*)                             PreviewClass                                                OFFSET(get<T>, {0x240, 8, 0, 0})
	DMember(float)                                     SpacingX                                                    OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     SpacingY                                                    OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(int32_t)                                   NumX                                                        OFFSET(get<int32_t>, {0x250, 4, 0, 0})
	DMember(int32_t)                                   NumY                                                        OFFSET(get<int32_t>, {0x254, 4, 0, 0})
	CMember(TArray<class UChildActorComponent*>)       PreviewComponents                                           OFFSET(get<T>, {0x258, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	// void SetPaused(bool bPaused);                                                                                            // [0xeba7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0xeba710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// void DeactivatePreviews();                                                                                               // [0xeba6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	// void ActivatePreviews(bool bReset);                                                                                      // [0xeba4e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FNiagaraRibbonUVSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(ENiagaraRibbonUVEdgeMode)                  LeadingEdgeMode                                             OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraRibbonUVEdgeMode)                  TrailingEdgeMode                                            OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(ENiagaraRibbonUVDistributionMode)          DistributionMode                                            OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(float)                                     TilingLength                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FVector2D)                                 Scale                                                       OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bEnablePerParticleUOverride                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bEnablePerParticleVRangeOverride                            OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x0758 (0x000080 - 0x0007D8)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2008;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(getStruct<T>, {0x88, 32, 0, 0})
	CMember(ENiagaraRibbonFacingMode)                  FacingMode                                                  OFFSET(get<T>, {0xA8, 1, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV0Settings                                                 OFFSET(getStruct<T>, {0xAC, 36, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV1Settings                                                 OFFSET(getStruct<T>, {0xD0, 36, 0, 0})
	CMember(ENiagaraRibbonDrawDirection)               DrawDirection                                               OFFSET(get<T>, {0xF4, 1, 0, 0})
	DMember(float)                                     CurveTension                                                OFFSET(get<float>, {0xF8, 4, 0, 0})
	CMember(ENiagaraRibbonTessellationMode)            TessellationMode                                            OFFSET(get<T>, {0xFC, 1, 0, 0})
	DMember(int32_t)                                   TessellationFactor                                          OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(bool)                                      bUseConstantFactor                                          OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(float)                                     TessellationAngle                                           OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(bool)                                      bScreenSpaceTessellation                                    OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0x110, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x168, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(getStruct<T>, {0x1C0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(getStruct<T>, {0x218, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonTwistBinding                                          OFFSET(getStruct<T>, {0x270, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonWidthBinding                                          OFFSET(getStruct<T>, {0x2C8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonFacingBinding                                         OFFSET(getStruct<T>, {0x320, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonIdBinding                                             OFFSET(getStruct<T>, {0x378, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonLinkOrderBinding                                      OFFSET(getStruct<T>, {0x3D0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(getStruct<T>, {0x428, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(getStruct<T>, {0x480, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(getStruct<T>, {0x4D8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(getStruct<T>, {0x530, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(getStruct<T>, {0x588, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U0OverrideBinding                                           OFFSET(getStruct<T>, {0x5E0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V0RangeOverrideBinding                                      OFFSET(getStruct<T>, {0x638, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U1OverrideBinding                                           OFFSET(getStruct<T>, {0x690, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V1RangeOverrideBinding                                      OFFSET(getStruct<T>, {0x6E8, 88, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraScriptExecutionPaddingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  SrcOffset                                                   OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  DestOffset                                                  OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  SrcSize                                                     OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  DestSize                                                    OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (0x000078 - 0x000098)
class FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(int32_t)                                   ParameterSize                                               OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(uint32_t)                                  PaddedParameterSize                                         OFFSET(get<uint32_t>, {0x7C, 4, 0, 0})
	CMember(TArray<FNiagaraScriptExecutionPaddingInfo>) PaddingInfo                                                OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bInitialized                                                OFFSET(get<bool>, {0x90, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraBoundParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   SrcOffset                                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   DestOffset                                                  OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraVMExecutableDataId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGuid)                                     CompilerVersionID                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraScriptUsage)                       ScriptUsageType                                             OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FGuid)                                     ScriptUsageTypeID                                           OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	DMember(bool)                                      bUsesRapidIterationParams                                   OFFSET(get<bool>, {0x24, 1, 1, 0})
	DMember(bool)                                      bInterpolatedSpawn                                          OFFSET(get<bool>, {0x24, 1, 1, 1})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x24, 1, 1, 2})
	SMember(FGuid)                                     BaseScriptID                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FNiagaraCompileHash)                       BaseScriptCompileHash                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraScriptDataUsageInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bReadsAttributeData                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraScriptDataInterfaceCompileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bIsPlaceholder                                              OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0010 (0x000000 - 0x000010)
class FVMFunctionSpecifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Key                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Value                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FVMExternalFunctionBindingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     OwnerName                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<bool>)                              InputParamLocations                                         OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TArray<FVMFunctionSpecifier>)              FunctionSpecifiers                                          OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDataSetProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FNiagaraDataSetID)                         ID                                                          OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Variables                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraStatScope : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     FullName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     FriendlyName                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FNiagaraVMExecutableData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<char>)                              ByteCode                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<char>)                              OptimizedByteCode                                           OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   NumTempRegisters                                            OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   NumUserPtrs                                                 OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	CMember(TArray<char>)                              ScriptLiterals                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Attributes                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FNiagaraScriptDataUsageInfo)               DataUsage                                                   OFFSET(getStruct<T>, {0x48, 1, 0, 0})
	CMember(TArray<FNiagaraScriptDataInterfaceCompileInfo>) DataInterfaceInfo                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FVMExternalFunctionBindingInfo>)    CalledVMExternalFunctions                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetID>)                 ReadDataSets                                                OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetProperties>)         WriteDataSets                                               OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FNiagaraStatScope>)                 StatScopes                                                  OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FNiagaraDataInterfaceGPUParamInfo>) DIParamInfo                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(ENiagaraScriptCompileStatus)               LastCompileStatus                                           OFFSET(get<T>, {0xC0, 1, 0, 0})
	CMember(TArray<FSimulationStageMetaData>)          SimulationStageMetaData                                     OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bReadsSignificanceIndex                                     OFFSET(get<bool>, {0xD8, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraScriptDataInterfaceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UNiagaraDataInterface*)              DataInterface                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x0298 (0x000028 - 0x0002C0)
class UNiagaraScript : public UNiagaraScriptBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(ENiagaraScriptUsage)                       Usage                                                       OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   UsageIndex                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FGuid)                                     UsageId                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    RapidIterationParameters                                    OFFSET(getStruct<T>, {0x40, 120, 0, 0})
	SMember(FNiagaraScriptExecutionParameterStore)     ScriptExecutionParamStore                                   OFFSET(getStruct<T>, {0xB8, 152, 0, 0})
	CMember(TArray<FNiagaraBoundParameter>)            ScriptExecutionBoundParameters                              OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FNiagaraVMExecutableDataId)                CachedScriptVMId                                            OFFSET(getStruct<T>, {0x160, 72, 0, 0})
	SMember(FNiagaraVMExecutableData)                  CachedScriptVM                                              OFFSET(getStruct<T>, {0x1B8, 224, 0, 0})
	CMember(TArray<class UNiagaraParameterCollection*>) CachedParameterCollectionReferences                        OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<FNiagaraScriptDataInterfaceInfo>)   CachedDefaultDataInterfaces                                 OFFSET(get<T>, {0x2A8, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// void RaiseOnGPUCompilationComplete();                                                                                    // [0x9a7970] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraScriptSourceBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UNiagaraSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FSoftObjectPath)                           DefaultEffectType                                           OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TArray<FText>)                             QualityLevels                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TMap<FString, FText>)                      ComponentRendererWarningsPerClass                           OFFSET(get<T>, {0x60, 80, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   DefaultRenderTargetFormat                                   OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   DefaultGridFormat                                           OFFSET(get<T>, {0xB1, 1, 0, 0})
	CMember(class UNiagaraEffectType*)                 DefaultEffectTypePtr                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UNiagaraScript*)                     Script                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     SimulationStageName                                         OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraVariableDataInterfaceBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FNiagaraVariable)                          BoundVariable                                               OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0030 (0x000040 - 0x000070)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(ENiagaraIterationSource)                   IterationSource                                             OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bSpawnOnly                                                  OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bDisablePartialParticleUpdate                               OFFSET(get<bool>, {0x48, 1, 1, 1})
	SMember(FNiagaraVariableDataInterfaceBinding)      DataInterface                                               OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x002C (0x000000 - 0x00002C)
class FNiagaraMaterialAttributeBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraVariable                                             OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedNiagaraVariable                                     OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraChildVariable                                        OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0720 (0x000080 - 0x0007A0)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0x88, 1, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(getStruct<T>, {0x90, 32, 0, 0})
	CMember(ENiagaraSpriteAlignment)                   Alignment                                                   OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(ENiagaraSpriteFacingMode)                  FacingMode                                                  OFFSET(get<T>, {0xB1, 1, 0, 0})
	SMember(FVector2D)                                 PivotInUVSpace                                              OFFSET(getStruct<T>, {0xB4, 8, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    OFFSET(get<T>, {0xBC, 1, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                OFFSET(getStruct<T>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bSubImageBlend                                              OFFSET(get<bool>, {0xC8, 1, 1, 0})
	DMember(bool)                                      bRemoveHMDRollInVR                                          OFFSET(get<bool>, {0xC8, 1, 1, 1})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    OFFSET(get<bool>, {0xC8, 1, 1, 2})
	DMember(bool)                                      bGpuLowLatencyTranslucency                                  OFFSET(get<bool>, {0xC8, 1, 1, 3})
	DMember(float)                                     MinFacingCameraBlendDistance                                OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     MaxFacingCameraBlendDistance                                OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bEnableCameraDistanceCulling                                OFFSET(get<bool>, {0xD4, 1, 1, 0})
	DMember(float)                                     MinCameraDistance                                           OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          OFFSET(get<uint32_t>, {0xE0, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0xE8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x140, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(getStruct<T>, {0x198, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteRotationBinding                                       OFFSET(getStruct<T>, {0x1F0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteSizeBinding                                           OFFSET(getStruct<T>, {0x248, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteFacingBinding                                         OFFSET(getStruct<T>, {0x2A0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteAlignmentBinding                                      OFFSET(getStruct<T>, {0x2F8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        OFFSET(getStruct<T>, {0x350, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(getStruct<T>, {0x3A8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(getStruct<T>, {0x400, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(getStruct<T>, {0x458, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(getStruct<T>, {0x4B0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         OFFSET(getStruct<T>, {0x508, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          UVScaleBinding                                              OFFSET(getStruct<T>, {0x560, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(getStruct<T>, {0x5B8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        OFFSET(getStruct<T>, {0x610, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(getStruct<T>, {0x668, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x6C0, 88, 0, 0})
	CMember(TArray<FNiagaraMaterialAttributeBinding>)  MaterialParameterBindings                                   OFFSET(get<T>, {0x718, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (0x000048 - 0x000050)
class FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bOverrideDistanceSettings                                   OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bOverrideInstanceCountSettings                              OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bOverridePerSystemInstanceCountSettings                     OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bOverrideTimeSinceRendererSettings                          OFFSET(get<bool>, {0x48, 1, 1, 3})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilityOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilityOverride>) Overrides                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraEmitterHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     IdName                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	CMember(class UNiagaraEmitter*)                    Instance                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraParameterDataSetBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ParameterOffset                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataSetComponentOffset                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraParameterDataSetBindingCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FNiagaraParameterDataSetBinding>)   FloatOffsets                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBinding>)   Int32Offsets                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0218 (0x000000 - 0x000218)
class FNiagaraSystemCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FNiagaraParameterStore)                    InstanceParamStore                                          OFFSET(getStruct<T>, {0x0, 120, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(getStruct<T>, {0x78, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               SpawnInstanceParamsDataSetCompiledData                      OFFSET(getStruct<T>, {0xB8, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               UpdateInstanceParamsDataSetCompiledData                     OFFSET(getStruct<T>, {0xF8, 64, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceGlobalBinding                                  OFFSET(getStruct<T>, {0x138, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceSystemBinding                                  OFFSET(getStruct<T>, {0x158, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceOwnerBinding                                   OFFSET(getStruct<T>, {0x178, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) SpawnInstanceEmitterBindings                        OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceGlobalBinding                                 OFFSET(getStruct<T>, {0x1A8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceSystemBinding                                 OFFSET(getStruct<T>, {0x1C8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceOwnerBinding                                  OFFSET(getStruct<T>, {0x1E8, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) UpdateInstanceEmitterBindings                       OFFSET(get<T>, {0x208, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0450 (0x000030 - 0x000480)
class UNiagaraSystem : public UFXSystemAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	DMember(bool)                                      bDumpDebugSystemInfo                                        OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bDumpDebugEmitterInfo                                       OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bFixedBounds                                                OFFSET(get<bool>, {0x34, 1, 1, 0})
	CMember(class UNiagaraEffectType*)                 EffectType                                                  OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bOverrideScalabilitySettings                                OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TArray<FNiagaraSystemScalabilityOverride>) ScalabilityOverrides                                        OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FNiagaraSystemScalabilityOverrides)        SystemScalabilityOverrides                                  OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(TArray<FNiagaraEmitterHandle>)             EmitterHandles                                              OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<class UNiagaraParameterCollectionInstance*>) ParameterCollectionOverrides                       OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(class UNiagaraScript*)                     SystemSpawnScript                                           OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UNiagaraScript*)                     SystemUpdateScript                                          OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FNiagaraSystemCompiledData)                SystemCompiledData                                          OFFSET(getStruct<T>, {0xA8, 536, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     ExposedParameters                                           OFFSET(getStruct<T>, {0x2C0, 200, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 OFFSET(getStruct<T>, {0x388, 28, 0, 0})
	DMember(bool)                                      bAutoDeactivate                                             OFFSET(get<bool>, {0x3A4, 1, 0, 0})
	DMember(float)                                     WarmupTime                                                  OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(int32_t)                                   WarmupTickCount                                             OFFSET(get<int32_t>, {0x3AC, 4, 0, 0})
	DMember(float)                                     WarmupTickDelta                                             OFFSET(get<float>, {0x3B0, 4, 0, 0})
	DMember(bool)                                      bHasSystemScriptDIsWithPerInstanceData                      OFFSET(get<bool>, {0x3B4, 1, 0, 0})
	CMember(TArray<FName>)                             UserDINamesReadInSystemScripts                              OFFSET(get<T>, {0x3B8, 16, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0020 (0x000020 - 0x000040)
class FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0090 (0x000040 - 0x0000D0)
class FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMovieSceneBoolChannel)                    BoolChannel                                                 OFFSET(getStruct<T>, {0x40, 144, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0280 (0x000040 - 0x0002C0)
class FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FMovieSceneFloatChannel)                   RedChannel                                                  OFFSET(getStruct<T>, {0x40, 160, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenChannel                                                OFFSET(getStruct<T>, {0xE0, 160, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueChannel                                                 OFFSET(getStruct<T>, {0x180, 160, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaChannel                                                OFFSET(getStruct<T>, {0x220, 160, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x00A0 (0x000040 - 0x0000E0)
class FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                OFFSET(getStruct<T>, {0x40, 160, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0090 (0x000040 - 0x0000D0)
class FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMovieSceneIntegerChannel)                 IntegerChannel                                              OFFSET(getStruct<T>, {0x40, 144, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0018 (0x000010 - 0x000028)
class FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              SpawnSectionStartFrame                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FFrameNumber)                              SpawnSectionEndFrame                                        OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SpawnSectionStartBehavior                                   OFFSET(get<T>, {0x18, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SpawnSectionEvaluateBehavior                               OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SpawnSectionEndBehavior                                     OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               OFFSET(get<T>, {0x24, 1, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
class FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0288 (0x000040 - 0x0002C8)
class FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	SMember(FMovieSceneFloatChannel)                   VectorChannels                                              OFFSET(getStruct<T>, {0x40, 640, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraRandInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Seed1                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Seed2                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Seed3                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraScriptVariableBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraVariableInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraVariable)                          Variable                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FText)                                     Definition                                                  OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(class UNiagaraDataInterface*)              DataInterface                                               OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraSystemUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToReset                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToReInit                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToNotifySimDestroy                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UNiagaraSystem*>)             SystemSimsToDestroy                                         OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (0x000000 - 0x000090)
class FNiagaraFunctionSignature : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Inputs                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Outputs                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     OwnerName                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bRequiresContext                                            OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bRequiresExecPin                                            OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bMemberFunction                                             OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(bool)                                      bExperimental                                               OFFSET(get<bool>, {0x30, 1, 1, 3})
	DMember(bool)                                      bSupportsCPU                                                OFFSET(get<bool>, {0x30, 1, 1, 4})
	DMember(bool)                                      bSupportsGPU                                                OFFSET(get<bool>, {0x30, 1, 1, 5})
	DMember(bool)                                      bWriteFunction                                              OFFSET(get<bool>, {0x30, 1, 1, 6})
	DMember(bool)                                      bSoftDeprecatedFunction                                     OFFSET(get<bool>, {0x30, 1, 1, 7})
	DMember(int32_t)                                   ModuleUsageBitmask                                          OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   ContextStageMinIndex                                        OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ContextStageMaxIndex                                        OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TMap<FName, FName>)                        FunctionSpecifiers                                          OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterNameSettingsRef
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraEmitterNameSettingsRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SystemName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x001C (0x000000 - 0x00001C)
class FBasicParticleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (0x000000 - 0x000010)
class FMeshTriCoordinate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Tri                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector)                                   BaryCoord                                                   OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraGraphViewSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVector2D)                                 Location                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Zoom                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x002C (0x000000 - 0x00002C)
class FNiagaraCollisionEventPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FVector)                                   CollisionPos                                                OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   CollisionNormal                                             OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   CollisionVelocity                                           OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   PhysicalMaterialIndex                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraPlatformSetConflictEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ProfileName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   QualityLevelMask                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraPlatformSetConflictInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SetAIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SetBIndex                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FNiagaraPlatformSetConflictEntry>)  Conflicts                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraScalabilityManager : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UNiagaraEffectType*)                 EffectType                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ManagedComponents                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraModuleDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(ENiagaraModuleDependencyType)              Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(ENiagaraModuleDependencyScriptConstraint)  ScriptConstraint                                            OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0010 (0x000078 - 0x000088)
class FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraScriptHighlight : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0080 (0x000000 - 0x000080)
class FNiagaraSystemCompileRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<class UObject*>)                    RootObjects                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x0078 (0x000000 - 0x000078)
class FEmitterCompiledScriptPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0130 (0x000000 - 0x000130)
class FNiagaraEmitterCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FName>)                             SpawnAttributes                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnIntervalVar                                     OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInterpSpawnStartDTVar                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnGroupVar                                        OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterAgeVar                                               OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterRandomSeedVar                                        OFFSET(getStruct<T>, {0x90, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInstanceSeedVar                                      OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterTotalSpawnedParticlesVar                             OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(getStruct<T>, {0xF0, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraInputConditionMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FString>)                           TargetValues                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FNiagaraVariableMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     CategoryName                                                OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bAdvancedDisplay                                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   EditorSortPriority                                          OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bInlineEditConditionToggle                                  OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            EditCondition                                               OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            VisibleCondition                                            OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	CMember(TMap<FName, FString>)                      PropertyMetaData                                            OFFSET(get<T>, {0x70, 80, 0, 0})
	SMember(FName)                                     ParentAttribute                                             OFFSET(getStruct<T>, {0xC0, 8, 0, 0})
	SMember(FName)                                     ScopeName                                                   OFFSET(getStruct<T>, {0xC8, 8, 0, 0})
	CMember(ENiagaraScriptParameterUsage)              Usage                                                       OFFSET(get<T>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bIsStaticSwitch                                             OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(int32_t)                                   StaticSwitchDefaultValue                                    OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bAddedToNodeGraphDeepCopy                                   OFFSET(get<bool>, {0xDC, 1, 0, 0})
	DMember(bool)                                      bOutputIsPersistent                                         OFFSET(get<bool>, {0xDD, 1, 0, 0})
	SMember(FName)                                     CachedNamespacelessVariableName                             OFFSET(getStruct<T>, {0xE0, 8, 0, 0})
	DMember(bool)                                      bCreatedInSystemEditor                                      OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bUseLegacyNameString                                        OFFSET(get<bool>, {0xE9, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterScopeInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraParameterScopeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ENiagaraParameterScope)                    Scope                                                       OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   NamespaceString                                             OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraCompileHashVisitorDebugInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Object                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyKeys                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyValues                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AcquireTag                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpStartDt                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     IntervalDt                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SpawnGroup                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraMatrix : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector4)                                  Row0                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector4)                                  Row1                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector4)                                  Row2                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FVector4)                                  Row3                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraParameterMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraNumeric : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraHalfVector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  W                                                           OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (0x000000 - 0x000006)
class FNiagaraHalfVector3 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraHalfVector2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (0x000000 - 0x000002)
class FNiagaraHalf : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Value                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraBool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraInt32 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraVariant : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UNiagaraDataInterface*)              DataInterface                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<char>)                              Bytes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(ENiagaraVariantMode)                       CurrentMode                                                 OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FNiagaraWorldManagerTickFunction : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x03
enum class ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x02
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x01
enum class ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x04
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x03
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x02
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x06
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5
};

/// Enum /Script/Niagara.ENiagaraIterationSource
/// Size: 0x02
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x04
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x03
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x05
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x13
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x07
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x06
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x03
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x02
enum class ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x02
enum class ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x03
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x02
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x03
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x04
enum class ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x04
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x05
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x02
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x03
enum class ESetResolutionMethod : uint32_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x04
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x03
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x04
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x05
enum class ENiagaraScalabilityUpdateFrequency : uint32_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x04
enum class ENiagaraCullReaction : uint32_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x02
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x03
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x05
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x03
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x04
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x04
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x04
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x03
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x03
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x03
enum class ENiagaraRibbonUVDistributionMode : uint32_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x02
enum class ENiagaraRibbonUVEdgeMode : uint32_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x03
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x02
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x02
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x03
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x04
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x02
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x02
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x05
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x05
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x03
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2
};

/// Enum /Script/Niagara.ENiagaraParameterPanelCategory
/// Size: 0x14
enum class ENiagaraParameterPanelCategory : uint8_t
{
	ENiagaraParameterPanelCategory__Input                                            = 0,
	ENiagaraParameterPanelCategory__Attributes                                       = 1,
	ENiagaraParameterPanelCategory__Output                                           = 2,
	ENiagaraParameterPanelCategory__Local                                            = 3,
	ENiagaraParameterPanelCategory__User                                             = 4,
	ENiagaraParameterPanelCategory__Engine                                           = 5,
	ENiagaraParameterPanelCategory__Owner                                            = 6,
	ENiagaraParameterPanelCategory__System                                           = 7,
	ENiagaraParameterPanelCategory__Emitter                                          = 8,
	ENiagaraParameterPanelCategory__Particles                                        = 9,
	ENiagaraParameterPanelCategory__ScriptTransient                                  = 10,
	ENiagaraParameterPanelCategory__StaticSwitch                                     = 11,
	ENiagaraParameterPanelCategory__None                                             = 12,
	ENiagaraParameterPanelCategory__Num                                              = 13
};

/// Enum /Script/Niagara.ENiagaraScriptParameterUsage
/// Size: 0x07
enum class ENiagaraScriptParameterUsage : uint32_t
{
	ENiagaraScriptParameterUsage__Input                                              = 0,
	ENiagaraScriptParameterUsage__Output                                             = 1,
	ENiagaraScriptParameterUsage__Local                                              = 2,
	ENiagaraScriptParameterUsage__InputOutput                                        = 3,
	ENiagaraScriptParameterUsage__InitialValueInput                                  = 4,
	ENiagaraScriptParameterUsage__None                                               = 5,
	ENiagaraScriptParameterUsage__Num                                                = 6
};

/// Enum /Script/Niagara.ENiagaraParameterScope
/// Size: 0x15
enum class ENiagaraParameterScope : uint32_t
{
	ENiagaraParameterScope__Input                                                    = 0,
	ENiagaraParameterScope__User                                                     = 1,
	ENiagaraParameterScope__Engine                                                   = 2,
	ENiagaraParameterScope__Owner                                                    = 3,
	ENiagaraParameterScope__System                                                   = 4,
	ENiagaraParameterScope__Emitter                                                  = 5,
	ENiagaraParameterScope__Particles                                                = 6,
	ENiagaraParameterScope__ScriptPersistent                                         = 7,
	ENiagaraParameterScope__ScriptTransient                                          = 8,
	ENiagaraParameterScope__Local                                                    = 9,
	ENiagaraParameterScope__Custom                                                   = 10,
	ENiagaraParameterScope__DISPLAY_ONLY_StaticSwitch                                = 11,
	ENiagaraParameterScope__Output                                                   = 12,
	ENiagaraParameterScope__None                                                     = 13,
	ENiagaraParameterScope__Num                                                      = 14
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x06
enum class ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x04
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x04
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x04
enum class ENiagaraVariantMode : uint32_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3
};

