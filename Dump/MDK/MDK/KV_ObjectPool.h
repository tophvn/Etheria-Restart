
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KV_ObjectPool.KV_FullscreenRTPool
/// Size: 0x0010 (0x000028 - 0x000038)
class UKV_FullscreenRTPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UKV_RenderTargetPool*>)       AllPools                                                    OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/KV_ObjectPool.KV_FullscreenRTPool.ReleaseRT
	// void ReleaseRT(class UTextureRenderTarget2D* RT);                                                                        // [0x1172f30] Final|Native|Public  
	// Function /Script/KV_ObjectPool.KV_FullscreenRTPool.AllocateRT
	// class UTextureRenderTarget2D* AllocateRT(TEnumAsByte<ETextureRenderTargetFormat> Format);                                // [0x1172d90] Final|Native|Public  
};

/// Class /Script/KV_ObjectPool.KV_ObjectPool
/// Size: 0x0040 (0x000028 - 0x000068)
class UKV_ObjectPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   StandingSize                                                OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   TemporarySize                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<class UObject*>)                    StandingPool                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UObject*>)                    TemporaryPool                                               OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UObject*>)                    Allocated                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     TemporaryTime                                               OFFSET(get<float>, {0x60, 4, 0, 0})


	/// Functions
	// Function /Script/KV_ObjectPool.KV_ObjectPool.Release
	// void Release(class UObject* Obj);                                                                                        // [0x1172e20] Final|Native|Public  
	// Function /Script/KV_ObjectPool.KV_ObjectPool.Allocate
	// class UObject* Allocate();                                                                                               // [0x1172ce0] Final|Native|Public  
};

/// Class /Script/KV_ObjectPool.KV_ObjectPoolLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKV_ObjectPoolLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KV_ObjectPool.KV_ObjectPoolLibrary.ReleaseFullscreenRT
	// void ReleaseFullscreenRT(class UTextureRenderTarget2D* RT);                                                              // [0x1172eb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_ObjectPool.KV_ObjectPoolLibrary.AllocateFullscreenRT
	// class UTextureRenderTarget2D* AllocateFullscreenRT(TEnumAsByte<ETextureRenderTargetFormat> Format);                      // [0x1172d10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KV_ObjectPool.KV_RenderTargetPool
/// Size: 0x0010 (0x000068 - 0x000078)
class UKV_RenderTargetPool : public UKV_ObjectPool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector2D)                                 RTSize                                                      OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   Format                                                      OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/KV_ObjectPool.KV_WidgetPool
/// Size: 0x0010 (0x000068 - 0x000078)
class UKV_WidgetPool : public UKV_ObjectPool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UObject*)                            WorldContextObject                                          OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UClass*)                             WidgetClass                                                 OFFSET(get<T>, {0x70, 8, 0, 0})
};

