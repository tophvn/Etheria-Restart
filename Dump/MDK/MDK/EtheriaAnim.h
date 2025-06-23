
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EtheriaAnim.BasePostAnimInstance
/// Size: 0x0028 (0x0002B8 - 0x0002E0)
class UBasePostAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FName)                                     FacialRootSocketName                                        OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class AActor*)                             OverrideActor                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(bool)                                      FreezeRotation                                              OFFSET(get<bool>, {0x2D0, 1, 0, 0})


	/// Functions
	// Function /Script/EtheriaAnim.BasePostAnimInstance.UpdateFacialRootSocketName
	// void UpdateFacialRootSocketName();                                                                                       // [0x11203e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EtheriaAnim.BasePostAnimInstance.UpdateFaceNormal
	// void UpdateFaceNormal();                                                                                                 // [0x11203b0] Native|Public|BlueprintCallable 
};

/// Class /Script/EtheriaAnim.FaceNormalUpdateInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFaceNormalUpdateInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

