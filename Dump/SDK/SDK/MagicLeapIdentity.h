
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UMagicLeapIdentity;

/// Enum /Script/MagicLeapIdentity.EMagicLeapIdentityKey
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
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

#pragma pack(pop)


static_assert(sizeof(UMagicLeapIdentity) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FMagicLeapIdentityAttribute) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapIdentityAttribute, Attribute) == 0x0000);
static_assert(offsetof(FMagicLeapIdentityAttribute, Value) == 0x0008);
