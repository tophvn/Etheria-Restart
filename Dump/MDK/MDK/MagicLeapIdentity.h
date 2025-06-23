
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/MagicLeapIdentity.MagicLeapIdentity
/// Size: 0x0010 (0x000028 - 0x000038)
class UMagicLeapIdentity : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
	// void RequestIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<FMagicLeapIdentityAttribute>& AttributeValue); // [0x198a600] Public|Delegate|HasOutParms 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
	// EMagicLeapIdentityError RequestAttributeValueAsync(TArray<EMagicLeapIdentityKey>& RequestedAttributeList, FDelegateProperty& ResultDelegate); // [0x1327710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
	// EMagicLeapIdentityError RequestAttributeValue(TArray<EMagicLeapIdentityKey>& RequestedAttributeList, TArray<FMagicLeapIdentityAttribute>& RequestedAttributeValues); // [0x13275c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
	// void ModifyIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey>& AttributesUpdatedSuccessfully); // [0x198a600] Public|Delegate|HasOutParms 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
	// void GetAllAvailableAttributesAsync(FDelegateProperty& ResultDelegate);                                                  // [0x1327510] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
	// EMagicLeapIdentityError GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>& AvailableAttributes);                   // [0x1327450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
	// void AvailableIdentityAttributesDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey>& AvailableAttributes); // [0x198a600] Public|Delegate|HasOutParms 
};

/// Struct /Script/MagicLeapIdentity.MagicLeapIdentityAttribute
/// Size: 0x0018 (0x000000 - 0x000018)
class FMagicLeapIdentityAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EMagicLeapIdentityKey)                     Attribute                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/MagicLeapIdentity.EMagicLeapIdentityKey
/// Size: 0x08
enum class EMagicLeapIdentityKey : uint8_t
{
	EMagicLeapIdentityKey__GivenName                                                 = 0,
	EMagicLeapIdentityKey__FamilyName                                                = 1,
	EMagicLeapIdentityKey__Email                                                     = 2,
	EMagicLeapIdentityKey__Bio                                                       = 3,
	EMagicLeapIdentityKey__PhoneNumber                                               = 4,
	EMagicLeapIdentityKey__Avatar2D                                                  = 5,
	EMagicLeapIdentityKey__Avatar3D                                                  = 6,
	EMagicLeapIdentityKey__Unknown                                                   = 7
};

/// Enum /Script/MagicLeapIdentity.EMagicLeapIdentityError
/// Size: 0x18
enum class EMagicLeapIdentityError : uint8_t
{
	EMagicLeapIdentityError__Ok                                                      = 0,
	EMagicLeapIdentityError__InvalidParam                                            = 1,
	EMagicLeapIdentityError__AllocFailed                                             = 2,
	EMagicLeapIdentityError__PrivilegeDenied                                         = 3,
	EMagicLeapIdentityError__FailedToConnectToLocalService                           = 4,
	EMagicLeapIdentityError__FailedToConnectToCloudService                           = 5,
	EMagicLeapIdentityError__CloudAuthentication                                     = 6,
	EMagicLeapIdentityError__InvalidInformationFromCloud                             = 7,
	EMagicLeapIdentityError__NotLoggedIn                                             = 8,
	EMagicLeapIdentityError__ExpiredCredentials                                      = 9,
	EMagicLeapIdentityError__FailedToGetUserProfile                                  = 10,
	EMagicLeapIdentityError__Unauthorized                                            = 11,
	EMagicLeapIdentityError__CertificateError                                        = 12,
	EMagicLeapIdentityError__RejectedByCloud                                         = 13,
	EMagicLeapIdentityError__AlreadyLoggedIn                                         = 14,
	EMagicLeapIdentityError__ModifyIsNotSupported                                    = 15,
	EMagicLeapIdentityError__NetworkError                                            = 16,
	EMagicLeapIdentityError__UnspecifiedFailure                                      = 17
};

