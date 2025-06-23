
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface

/// Class /Script/LiveLinkComponents.LiveLinkControllerBase
/// Size: 0x0008 (0x000028 - 0x000030)
class ULiveLinkControllerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/LiveLinkComponents.LiveLinkCameraController
/// Size: 0x0000 (0x000030 - 0x000030)
class ULiveLinkCameraController : public ULiveLinkControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentController
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class ULiveLinkComponentController : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FLiveLinkSubjectRepresentation)            SubjectRepresentation                                       OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TMap<class UClass*, class ULiveLinkControllerBase*>) ControllerMap                                     OFFSET(get<T>, {0xC0, 80, 0, 0})
	DMember(bool)                                      bUpdateInEditor                                             OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLiveLinkUpdated                                           OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FComponentReference)                       ComponentToControl                                          OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	DMember(bool)                                      bDisableEvaluateLiveLinkWhenSpawnable                       OFFSET(get<bool>, {0x150, 1, 0, 0})
	DMember(bool)                                      bEvaluateLiveLink                                           OFFSET(get<bool>, {0x151, 1, 0, 0})
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class ULiveLinkComponentSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<class UClass*, class UClass*>)        DefaultControllerForRole                                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/LiveLinkComponents.LiveLinkLightController
/// Size: 0x0000 (0x000030 - 0x000030)
class ULiveLinkLightController : public ULiveLinkControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/LiveLinkComponents.LiveLinkTransformControllerData
/// Size: 0x0004 (0x000000 - 0x000004)
class FLiveLinkTransformControllerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bWorldTransform                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseScale                                                   OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bSweep                                                      OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bTeleport                                                   OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Class /Script/LiveLinkComponents.LiveLinkTransformController
/// Size: 0x0008 (0x000030 - 0x000038)
class ULiveLinkTransformController : public ULiveLinkControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLiveLinkTransformControllerData)          TransformData                                               OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

