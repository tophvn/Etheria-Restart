
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/UIParticleSystem.ParticleSystemWidget
/// Size: 0x0030 (0x000128 - 0x000158)
class UParticleSystemWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(class UParticleSystem*)                    ParticleSystemTemplate                                      OFFSET(get<T>, {0x128, 8, 0, 0})
	DMember(bool)                                      bAutoActivate                                               OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(bool)                                      bReactivate                                                 OFFSET(get<bool>, {0x131, 1, 0, 0})
	CMember(class UUIParticleComponent*)               WorldParticleComponent                                      OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class AActor*)                             WorldParticleActor                                          OFFSET(get<T>, {0x140, 8, 0, 0})


	/// Functions
	// Function /Script/UIParticleSystem.ParticleSystemWidget.SetReactivate
	// void SetReactivate(bool bActivateAndReset);                                                                              // [0xc48d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIParticleSystem.ParticleSystemWidget.GetParticleComponent
	// class UParticleSystemComponent* GetParticleComponent();                                                                  // [0xc48d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIParticleSystem.ParticleSystemWidget.ActivateParticles
	// void ActivateParticles(bool bActive, bool bReset);                                                                       // [0xc48c50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UIParticleSystem.UIParticleComponent
/// Size: 0x0000 (0x0006D0 - 0x0006D0)
class UUIParticleComponent : public UParticleSystemComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
};

/// Class /Script/UIParticleSystem.UIParticleActor
/// Size: 0x0000 (0x000220 - 0x000220)
class AUIParticleActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

