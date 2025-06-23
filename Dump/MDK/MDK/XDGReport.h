
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/XDGReport.ReportResponseData
/// Size: 0x0001 (0x000000 - 0x000001)
class FReportResponseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      Success                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/XDGReport.GetUploadUrlResponseData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGetUploadUrlResponseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   signedUrl                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   timeOutSec                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

