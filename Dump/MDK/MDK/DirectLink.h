
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/DirectLink.DirectLinkMsg_HaveListMessage
/// Size: 0x0040 (0x000000 - 0x000040)
class FDirectLinkMsg_HaveListMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   SourceStreamPort                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SyncCycle                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MessageCode                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(char)                                      Kind                                                        OFFSET(get<char>, {0xC, 1, 0, 0})
	CMember(TArray<char>)                              Payload                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           NodeIds                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<int32_t>)                           Hashes                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/DirectLink.DirectLinkMsg_DeltaMessage
/// Size: 0x0020 (0x000000 - 0x000020)
class FDirectLinkMsg_DeltaMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   DestinationStreamPort                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int8_t)                                    BatchCode                                                   OFFSET(get<int8_t>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   MessageCode                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(char)                                      Kind                                                        OFFSET(get<char>, {0xC, 1, 0, 0})
	DMember(bool)                                      CompressedPayload                                           OFFSET(get<bool>, {0xD, 1, 0, 0})
	CMember(TArray<char>)                              Payload                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/DirectLink.DirectLinkMsg_CloseStreamRequest
/// Size: 0x0004 (0x000000 - 0x000004)
class FDirectLinkMsg_CloseStreamRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   RecipientStreamPort                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/DirectLink.DirectLinkMsg_OpenStreamAnswer
/// Size: 0x0020 (0x000000 - 0x000020)
class FDirectLinkMsg_OpenStreamAnswer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   RecipientStreamPort                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAccepted                                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FString)                                   Error                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   OpenedStreamPort                                            OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/DirectLink.DirectLinkMsg_OpenStreamRequest
/// Size: 0x0028 (0x000000 - 0x000028)
class FDirectLinkMsg_OpenStreamRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bRequestFromSource                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   RequestFromStreamPort                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     SourceGuid                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FGuid)                                     DestinationGuid                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/DirectLink.DirectLinkMsg_QueryEndpointState
/// Size: 0x0001 (0x000000 - 0x000001)
class FDirectLinkMsg_QueryEndpointState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DirectLink.NamedId
/// Size: 0x0028 (0x000000 - 0x000028)
class FNamedId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bIsPublic                                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/DirectLink.DirectLinkMsg_EndpointState
/// Size: 0x0078 (0x000000 - 0x000078)
class FDirectLinkMsg_EndpointState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(uint32_t)                                  StateRevision                                               OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  MinProtocolVersion                                          OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  ProtocolVersion                                             OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   ComputerName                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   username                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(uint32_t)                                  ProcessId                                                   OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   ExecutableName                                              OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   NiceName                                                    OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<FNamedId>)                          Destinations                                                OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FNamedId>)                          Sources                                                     OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/DirectLink.DirectLinkMsg_EndpointLifecycle
/// Size: 0x0008 (0x000000 - 0x000008)
class FDirectLinkMsg_EndpointLifecycle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(char)                                      LifecycleState                                              OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  EndpointStateRevision                                       OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

