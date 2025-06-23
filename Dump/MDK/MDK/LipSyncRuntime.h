
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/LipSyncRuntime.LipSyncFrame
/// Size: 0x0018 (0x000000 - 0x000018)
class FLipSyncFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<float>)                             VisemeScores                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     LaughterScore                                               OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Class /Script/LipSyncRuntime.LipSyncFrameSequence
/// Size: 0x0010 (0x000028 - 0x000038)
class ULipSyncFrameSequence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FLipSyncFrame>)                     FrameSequence                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

