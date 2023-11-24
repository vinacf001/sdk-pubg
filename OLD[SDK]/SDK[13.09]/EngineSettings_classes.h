// Class EngineSettings.ConsoleSettings
// Size: 0x70 (Inherited: 0x28)
struct UConsoleSettings : UObject {
	int32 MaxScrollbackSize; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct F*5d518ad059> ManualAutoCompleteList; // 0x30(0x10)
	struct TArray<struct FString> AutoCompleteMapPaths; // 0x40(0x10)
	float BackgroundOpacityPercentage; // 0x50(0x04)
	bool bOrderTopToBottom; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FColor InputColor; // 0x58(0x04)
	struct FColor HistoryColor; // 0x5c(0x04)
	struct FColor AutoCompleteCommandColor; // 0x60(0x04)
	struct FColor AutoCompleteCVarColor; // 0x64(0x04)
	struct FColor AutoCompleteFadedColor; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class EngineSettings.GameMapsSettings
// Size: 0xd0 (Inherited: 0x28)
struct UGameMapsSettings : UObject {
	struct FStringAssetReference EditorStartupMap; // 0x28(0x10)
	struct FString LocalMapOptions; // 0x38(0x10)
	struct FStringAssetReference TransitionMap; // 0x48(0x10)
	bool bUseSplitscreen; // 0x58(0x01)
	enum class ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x59(0x01)
	enum class *304ec8f344 ThreePlayerSplitscreenLayout; // 0x5a(0x01)
	bool bOffsetPlayerGamepadIds; // 0x5b(0x01)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FStringClassReference GameInstanceClass; // 0x60(0x10)
	struct FStringAssetReference GameDefaultMap; // 0x70(0x10)
	struct FStringAssetReference ServerDefaultMap; // 0x80(0x10)
	struct FStringClassReference GlobalDefaultGameMode; // 0x90(0x10)
	struct FStringClassReference GlobalDefaultServerGameMode; // 0xa0(0x10)
	struct TArray<struct F*b48af21ceb> GameModeMapPrefixes; // 0xb0(0x10)
	struct TArray<struct F*b48af21ceb> GameModeClassAliases; // 0xc0(0x10)
};

// Class EngineSettings.GameNetworkManagerSettings
// Size: 0x58 (Inherited: 0x28)
struct UGameNetworkManagerSettings : UObject {
	int32 MinDynamicBandwidth; // 0x28(0x04)
	int32 MaxDynamicBandwidth; // 0x2c(0x04)
	int32 TotalNetBandwidth; // 0x30(0x04)
	int32 BadPingThreshold; // 0x34(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float StandbyRxCheatTime; // 0x3c(0x04)
	float StandbyTxCheatTime; // 0x40(0x04)
	float PercentMissingForRxStandby; // 0x44(0x04)
	float PercentMissingForTxStandby; // 0x48(0x04)
	float PercentForBadPing; // 0x4c(0x04)
	float JoinInProgressStandbyWaitTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class EngineSettings.GameSessionSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameSessionSettings : UObject {
	int32 MaxSpectators; // 0x28(0x04)
	int32 MaxPlayers; // 0x2c(0x04)
	char bRequiresPushToTalk : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class EngineSettings.*df63c46118
// Size: 0x28 (Inherited: 0x28)
struct U*df63c46118 : UObject {
};

// Class EngineSettings.GeneralProjectSettings
// Size: 0x110 (Inherited: 0x28)
struct UGeneralProjectSettings : UObject {
	struct FString CompanyName; // 0x28(0x10)
	struct FString CompanyDistinguishedName; // 0x38(0x10)
	struct FString CopyrightNotice; // 0x48(0x10)
	struct FString Description; // 0x58(0x10)
	struct FString Homepage; // 0x68(0x10)
	struct FString LicensingTerms; // 0x78(0x10)
	struct FString PrivacyPolicy; // 0x88(0x10)
	struct FGuid ProjectID; // 0x98(0x10)
	struct FString ProjectName; // 0xa8(0x10)
	struct FString ProjectVersion; // 0xb8(0x10)
	struct FString SupportContact; // 0xc8(0x10)
	struct FText ProjectDisplayedTitle; // 0xd8(0x18)
	struct FText ProjectDebugTitleInfo; // 0xf0(0x18)
	bool bShouldWindowPreserveAspectRatio; // 0x108(0x01)
	bool bUseBorderlessWindow; // 0x109(0x01)
	bool bStartInVR; // 0x10a(0x01)
	bool bAllowWindowResize; // 0x10b(0x01)
	bool bAllowClose; // 0x10c(0x01)
	bool bAllowMaximize; // 0x10d(0x01)
	bool bAllowMinimize; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
};

// Class EngineSettings.HudSettings
// Size: 0x40 (Inherited: 0x28)
struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FName> DebugDisplay; // 0x30(0x10)
};

