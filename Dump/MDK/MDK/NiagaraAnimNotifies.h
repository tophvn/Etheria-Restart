
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0058 (0x000038 - 0x000090)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UNiagaraSystem*)                     Template                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	DMember(bool)                                      bAbsoluteScale                                              OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      Attached                                                    OFFSET(get<bool>, {0x80, 1, 1, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x84, 8, 0, 0})


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect();                                                                            // [0xebf5a0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0030 (0x000030 - 0x000060)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UNiagaraSystem*)                     Template                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	DMember(bool)                                      bDestroyAtEnd                                               OFFSET(get<bool>, {0x58, 1, 0, 0})
};

