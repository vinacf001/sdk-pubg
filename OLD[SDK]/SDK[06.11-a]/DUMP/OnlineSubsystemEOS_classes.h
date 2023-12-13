// Class OnlineSubsystemEOS.EOSArtifactSettings
// Size: 0x38 (Inherited: 0x38)
struct UEOSArtifactSettings : UDataAsset {
	struct UClass* *cdb62082ca; // 0x30(0x08)
};

// Class OnlineSubsystemEOS.EOSSettings
// Size: 0x88 (Inherited: 0x30)
struct UEOSSettings : UObject {
	struct FString CacheDir; // 0x30(0x10)
	struct FString DefaultArtifactName; // 0x40(0x10)
	int32 TickBudgetInMilliseconds; // 0x50(0x04)
	bool bEnableOverlay; // 0x54(0x01)
	bool bEnableSocialOverlay; // 0x55(0x01)
	bool bShouldEnforceBeingLaunchedByEGS; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct TArray<struct FString> TitleStorageTags; // 0x58(0x10)
	int32 TitleStorageReadChunkLength; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct F*b4f89e45b2> Artifacts; // 0x70(0x10)
	bool bUseEAS; // 0x80(0x01)
	bool bUseEOSConnect; // 0x81(0x01)
	bool bMirrorStatsToEOS; // 0x82(0x01)
	bool bMirrorAchievementsToEOS; // 0x83(0x01)
	bool bUseEOSSessions; // 0x84(0x01)
	bool bMirrorPresenceToEAS; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
};

// Class OnlineSubsystemEOS.NetConnectionEOS
// Size: 0x65878 (Inherited: 0x65870)
struct UNetConnectionEOS : UIpConnection {
	struct TArray<struct UChildConnection*> Children; // 0x50(0x10)
	struct UNetDriver* Driver; // 0x60(0x08)
	struct UClass* *7cc253e76a; // 0x68(0x08)
	struct UPackageMap* PackageMap; // 0x70(0x08)
	struct TArray<struct UChannel*> *e44c91181f; // 0x78(0x10)
	struct TArray<struct AActor*> *274863db2e; // 0x88(0x10)
	struct AActor* ViewTarget; // 0x98(0x08)
	struct AActor* *5e3a3b3f66; // 0xa0(0x08)
	int32 *260ba92558; // 0xa8(0x04)
	char *f5fadd2d69 : 1; // 0xac(0x01)
	char pad_658CC_1 : 1; // 0x658cc(0x01)
	char *1194f7a57c : 1; // 0xac(0x01)
	struct TArray<struct UChannel*> *8a96153c21; // 0x138(0x10)
	struct FUniqueNetIdRepl PlayerId; // 0x170(0x18)
	double *a564cf33c7; // 0x1f0(0x08)
	struct TArray<struct UChannel*> *c638db3738; // 0x65730(0x10)
};

// Class OnlineSubsystemEOS.NetDriverEOS
// Size: 0x500 (Inherited: 0x4f8)
struct UNetDriverEOS : UIpNetDriver {
	bool *4365781f93; // 0x4f8(0x01)
	bool bIsUsingP2PSockets; // 0x4f9(0x01)
	char pad_4FA[0x6]; // 0x4fa(0x06)
};

