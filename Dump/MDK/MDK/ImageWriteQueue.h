
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ImageWriteQueue.ImageWriteBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
	// void ExportToDisk(class UTexture* Texture, FString Filename, FImageWriteOptions& options);                               // [0x1cb83f0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ImageWriteQueue.ImageWriteOptions
/// Size: 0x0060 (0x000000 - 0x000060)
class FImageWriteOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(EDesiredImageFormat)                       Format                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FDelegateProperty)                         OnComplete                                                  OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	DMember(int32_t)                                   CompressionQuality                                          OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bOverwriteFile                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bAsync                                                      OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Enum /Script/ImageWriteQueue.EDesiredImageFormat
/// Size: 0x04
enum class EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG                                                         = 0,
	EDesiredImageFormat__JPG                                                         = 1,
	EDesiredImageFormat__BMP                                                         = 2,
	EDesiredImageFormat__EXR                                                         = 3
};

