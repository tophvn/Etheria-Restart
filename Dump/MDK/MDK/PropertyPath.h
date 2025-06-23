
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0028 (0x000000 - 0x000028)
class FPropertyPathSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(class UStruct*)                            Struct                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0028 (0x000000 - 0x000028)
class FCachedPropertyPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FPropertyPathSegment>)              Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UFunction*)                          CachedFunction                                              OFFSET(get<T>, {0x18, 8, 0, 0})
};

