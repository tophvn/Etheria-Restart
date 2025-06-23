
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MobilePatchingUtils.MobileInstalledContent
/// Size: 0x0020 (0x000028 - 0x000048)
class UMobileInstalledContent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.Mount
	// bool Mount(int32_t PakOrder, FString MountPoint);                                                                        // [0x13fdf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	// float GetInstalledContentSize();                                                                                         // [0x13fddd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
	// float GetDiskFreeSpace();                                                                                                // [0x13fdbd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MobilePatchingUtils.MobilePendingContent
/// Size: 0x0040 (0x000048 - 0x000088)
class UMobilePendingContent : public UMobileInstalledContent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:


	/// Functions
	// Function /Script/MobilePatchingUtils.MobilePendingContent.StartInstall
	// void StartInstall(FDelegateProperty OnSucceeded, FDelegateProperty OnFailed);                                            // [0x13fe220] Final|Native|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	// float GetTotalDownloadedSize();                                                                                          // [0x13fdf10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	// float GetRequiredDiskSpace();                                                                                            // [0x13fde00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	// float GetInstallProgress();                                                                                              // [0x13fdd00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	// FText GetDownloadStatusText();                                                                                           // [0x13fdc60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	// float GetDownloadSpeed();                                                                                                // [0x13fdc30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSize
	// float GetDownloadSize();                                                                                                 // [0x13fdc00] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MobilePatchingUtils.MobilePatchingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	// void RequestContent(FString RemoteManifestURL, FString CloudURL, FString InstallDirectory, FDelegateProperty OnSucceeded, FDelegateProperty OnFailed); // [0x13fe030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	// bool HasActiveWiFiConnection();                                                                                          // [0x130ccd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	// TArray<FString> GetSupportedPlatformNames();                                                                             // [0x13fde30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	// class UMobileInstalledContent* GetInstalledContent(FString InstallDirectory);                                            // [0x13fdd30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
	// FString GetActiveDeviceProfileName();                                                                                    // [0x13fdb50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

