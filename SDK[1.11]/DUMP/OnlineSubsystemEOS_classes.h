// Class OnlineSubsystemEOS.EOSArtifactSettings
// Size: 0x30 (Inherited: 0x30)
struct UEOSArtifactSettings : UDataAsset {
};

// Class OnlineSubsystemEOS.EOSSettings
// Size: 0x80 (Inherited: 0x28)
struct UEOSSettings : UObject {
	struct FString CacheDir[0x10]; // 0x28(0x10)
	struct FString DefaultArtifactName[0x10]; // 0x38(0x10)
	int32 TickBudgetInMilliseconds[0x04]; // 0x48(0x04)
	bool bEnableOverlay; // 0x4c(0x01)
	bool bEnableSocialOverlay; // 0x4d(0x01)
	bool bShouldEnforceBeingLaunchedByEGS; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct TArray<struct FString> TitleStorageTags[0x10]; // 0x50(0x10)
	int32 TitleStorageReadChunkLength[0x04]; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct F*914883c47c> Artifacts[0x10]; // 0x68(0x10)
	bool bUseEAS; // 0x78(0x01)
	bool bUseEOSConnect; // 0x79(0x01)
	bool bMirrorStatsToEOS; // 0x7a(0x01)
	bool bMirrorAchievementsToEOS; // 0x7b(0x01)
	bool bUseEOSSessions; // 0x7c(0x01)
	bool bMirrorPresenceToEAS; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// Class OnlineSubsystemEOS.NetConnectionEOS
// Size: 0x65870 (Inherited: 0x65868)
struct UNetConnectionEOS : UIpConnection {
	char pad_65868[0x8]; // 0x65868(0x08)
};

// Class OnlineSubsystemEOS.NetDriverEOS
// Size: 0x4f8 (Inherited: 0x4f0)
struct UNetDriverEOS : UIpNetDriver {
	bool *23bea22325; // 0x4f0(0x01)
	bool bIsUsingP2PSockets; // 0x4f1(0x01)
	char pad_4F2[0x6]; // 0x4f2(0x06)
};

