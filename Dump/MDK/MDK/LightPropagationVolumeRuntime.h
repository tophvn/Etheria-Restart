
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Renderer

/// Class /Script/LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
/// Size: 0x0050 (0x000028 - 0x000078)
class ULightPropagationVolumeBlendable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FLightPropagationVolumeSettings)           Settings                                                    OFFSET(getStruct<T>, {0x30, 64, 0, 0})
	DMember(float)                                     BlendWeight                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
};

