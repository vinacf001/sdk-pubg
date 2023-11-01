// ScriptStruct TslGame.*9838798d84
// Size: 0x40 (Inherited: 0x00)
struct F*9838798d84 {
	enum class EWeaponAttachmentSlotID AttachmentSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AttachmentTag; // 0x08(0x08)
	struct UStaticMesh* AttachmentMeshAsset; // 0x10(0x20)
	struct FName AttachmentMeshName; // 0x30(0x08)
	struct UClass* AttachmentTemplate; // 0x38(0x08)
};

// ScriptStruct TslGame.DeathMessage
// Size: 0x108 (Inherited: 0x00)
struct FDeathMessage {
	struct FText KillerName; // 0x00(0x18)
	struct FText VictimName; // 0x18(0x18)
	struct FText KillerUniqueId; // 0x30(0x18)
	struct FUniqueNetIdRepl GroggyCauserUniqueId; // 0x48(0x18)
	struct FText VictimUniqueId; // 0x60(0x18)
	char bKillerIsOwner : 1; // 0x78(0x01)
	char bVictimIsOwner : 1; // 0x78(0x01)
	char bVictimIsPillar : 1; // 0x78(0x01)
	char bVictimIsMonster : 1; // 0x78(0x01)
	char pad_78_4 : 4; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 KillerTeamNum; // 0x7c(0x04)
	int32 VictimTeamNum; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct UTslDamageType* DamageType; // 0x88(0x08)
	struct FText InsertMessage; // 0x90(0x18)
	enum class EDamageReason DamageReason; // 0xa8(0x01)
	bool bGroggy; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	int32 AlivePlayerNum; // 0xac(0x04)
	int32 AliveTeamNum; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FText DamageCauserName; // 0xb8(0x18)
	int32 DamageCauserLevel; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UTexture* DamageCauserIcon; // 0xd8(0x08)
	float DamageCauserIconRatio; // 0xe0(0x04)
	bool bIsKillerExist; // 0xe4(0x01)
	bool bIsStealKilled; // 0xe5(0x01)
	bool bIsObserver; // 0xe6(0x01)
	bool bIsObserverAndKillerIsSpectated; // 0xe7(0x01)
	bool bIsObserverAndVictimIsSpectated; // 0xe8(0x01)
	bool bIsMidGameBanMessage; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	float DistanceFromKillerToVictim; // 0xec(0x04)
	enum class EOutGamePlatformProvider KillerPlatform; // 0xf0(0x01)
	enum class EOutGamePlatformProvider VictimPlatform; // 0xf1(0x01)
	char pad_F2[0x16]; // 0xf2(0x16)
};

// ScriptStruct TslGame.*be1385e6be
// Size: 0x18 (Inherited: 0x00)
struct F*be1385e6be {
	struct F*a71ff1d84f *2eb8acfc28; // 0x00(0x08)
	struct F*a71ff1d84f WeaponPackage; // 0x08(0x08)
	struct F*a71ff1d84f HealingPackage; // 0x10(0x08)
};

// ScriptStruct TslGame.*a71ff1d84f
// Size: 0x08 (Inherited: 0x00)
struct F*a71ff1d84f {
	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *7b58746405; // 0x04(0x04)
};

// ScriptStruct TslGame.*c89dcd5ffa
// Size: 0x10 (Inherited: 0x00)
struct F*c89dcd5ffa {
	bool Show; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D MarkerPosition; // 0x04(0x08)
	enum class EMarkerType MarkerType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*112524b471
// Size: 0x20 (Inherited: 0x10)
struct F*112524b471 : F*b401aacf4f {
	struct FVector SpawnPosition; // 0x10(0x0c)
	float *54d516b584; // 0x1c(0x04)
};

// ScriptStruct TslGame.*b401aacf4f
// Size: 0x10 (Inherited: 0x00)
struct F*b401aacf4f {
	enum class EPlatoonSupportRequestEventType EventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *890157587e; // 0x04(0x04)
	bool *77381f0ba7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StartTime; // 0x0c(0x04)
};

// ScriptStruct TslGame.*17c4bf8eb1
// Size: 0x24 (Inherited: 0x10)
struct F*17c4bf8eb1 : F*b401aacf4f {
	enum class EPlatoonCarePackageType CarePackageType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *761f6a5dd5; // 0x14(0x04)
	struct FVector *79411e3858; // 0x18(0x0c)
};

// ScriptStruct TslGame.*9e2fb1fc29
// Size: 0x58 (Inherited: 0x00)
struct F*9e2fb1fc29 {
	float *7ef561ae65; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* *271a14efcc; // 0x08(0x08)
	struct ATslPlayerState* *f0930cbb3a; // 0x10(0x08)
	struct FVector_NetQuantize *4ca2642646; // 0x18(0x0c)
	struct FVector_NetQuantize *897bbee1fc; // 0x24(0x0c)
	struct FName BoneName; // 0x30(0x08)
	float *1bcc6a9d65; // 0x38(0x04)
	bool *94a417d482; // 0x3c(0x01)
	bool *28fa793cd4; // 0x3d(0x01)
	char *c3bd8e6ffb : 1; // 0x3e(0x01)
	char *8e390e3457 : 1; // 0x3e(0x01)
	char *ea2912f1ee : 1; // 0x3e(0x01)
	char pad_3E_3 : 5; // 0x3e(0x01)
	bool *69722c6426; // 0x3f(0x01)
	struct FName *3891dcaf73; // 0x40(0x08)
	struct FVector AttackerLocation; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*4373200898
// Size: 0x30 (Inherited: 0x00)
struct F*4373200898 {
	struct FString PartyId; // 0x00(0x10)
	bool IsPartyLeader; // 0x10(0x01)
	enum class ERequestPartyState PartyState; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32 *22114d7cfe; // 0x14(0x04)
	bool *546174d557; // 0x18(0x01)
	char pad_19[0x17]; // 0x19(0x17)
};

// ScriptStruct TslGame.*e50dfb6777
// Size: 0x20 (Inherited: 0x00)
struct F*e50dfb6777 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* TargetActor; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*65fdb36905
// Size: 0x20 (Inherited: 0x00)
struct F*65fdb36905 {
	int32 *10f1fd67c7; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText *f13e39dcab; // 0x08(0x18)
};

// ScriptStruct TslGame.*fc2fac7f6e
// Size: 0x28 (Inherited: 0x00)
struct F*fc2fac7f6e {
	int32 *3b9eaefc55; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslCharacter* Rider; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct TslGame.*7ceabb3d87
// Size: 0x10 (Inherited: 0x00)
struct F*7ceabb3d87 {
	float *264706d8ee; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
};

// ScriptStruct TslGame.*d2abe40071
// Size: 0x10 (Inherited: 0x00)
struct F*d2abe40071 {
	struct FVector2D *653c283cc1; // 0x00(0x08)
	struct FVector2D *9d75f0e5cb; // 0x08(0x08)
};

// ScriptStruct TslGame.*affa79da30
// Size: 0x10 (Inherited: 0x00)
struct F*affa79da30 {
	float DemoTime; // 0x00(0x04)
	float FogFallOff; // 0x04(0x04)
	float FogStartDistance; // 0x08(0x04)
	float FogDensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.TslPlayerStateSummary
// Size: 0x40 (Inherited: 0x00)
struct FTslPlayerStateSummary {
	struct FString UniqueId; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	int32 TeamNumber; // 0x20(0x04)
	int32 Ranking; // 0x24(0x04)
	int32 HeadShots; // 0x28(0x04)
	int32 NumKills; // 0x2c(0x04)
	float TotalGivenDamages; // 0x30(0x04)
	float LongestDistanceKill; // 0x34(0x04)
	float TotalMovedDistanceMeter; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGame.TslReplaySummary
// Size: 0x90 (Inherited: 0x00)
struct FTslReplaySummary {
	struct FString MatchId; // 0x00(0x10)
	bool bIsServerRecording; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString RecordUserId; // 0x18(0x10)
	struct FString RecordAccountId; // 0x28(0x10)
	struct FString RecordUserNickName; // 0x38(0x10)
	struct FString MapName; // 0x48(0x10)
	struct FString WeatherName; // 0x58(0x10)
	struct FString RegionName; // 0x68(0x10)
	int32 NumPlayers; // 0x78(0x04)
	int32 NumTeams; // 0x7c(0x04)
	struct TArray<struct FTslPlayerStateSummary> PlayerStateSummaries; // 0x80(0x10)
};

// ScriptStruct TslGame.*e7e9a5bdcb
// Size: 0xe0 (Inherited: 0x00)
struct F*e7e9a5bdcb {
	int32 DataSetNumber; // 0x00(0x04)
	int32 TimeMS; // 0x04(0x04)
	bool IsSkip; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Type; // 0x10(0x10)
	float FOV; // 0x20(0x04)
	float PositionX; // 0x24(0x04)
	float PositionY; // 0x28(0x04)
	float PositionZ; // 0x2c(0x04)
	float RotationX; // 0x30(0x04)
	float RotationY; // 0x34(0x04)
	float RotationZ; // 0x38(0x04)
	float Angle; // 0x3c(0x04)
	struct FString Target; // 0x40(0x10)
	struct FString InterpolationType; // 0x50(0x10)
	struct FString CameraDirection; // 0x60(0x10)
	struct FString ReplaySpeed; // 0x70(0x10)
	bool IsAutoExposureEnable; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString DofMethod; // 0x88(0x10)
	float DofFocalRegion; // 0x98(0x04)
	bool IsDofAutoFocus; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float DofFocalDistance; // 0xa0(0x04)
	float DofNearTransitionRegion; // 0xa4(0x04)
	float DofFarTransitionRegion; // 0xa8(0x04)
	float DofBokehScale; // 0xac(0x04)
	float DofBokehMaxSize; // 0xb0(0x04)
	float DofGaussianNearBlurSize; // 0xb4(0x04)
	float DofGaussianFarBlurSize; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString ColorGradingLUT; // 0xc0(0x10)
	float ColorGradingLUTIntensity; // 0xd0(0x04)
	float BloomIntensity; // 0xd4(0x04)
	float VignetteIntensity; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct TslGame.*34790984c7
// Size: 0x38 (Inherited: 0x00)
struct F*34790984c7 {
	float DemoTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Weather; // 0x08(0x10)
	enum class ETslOvercastAction Action; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float InitElapsedTime; // 0x1c(0x04)
	float SaturateTime; // 0x20(0x04)
	float BlendInTime; // 0x24(0x04)
	float BlendOutTime; // 0x28(0x04)
	float TimeMultiplier; // 0x2c(0x04)
	float ThunderAngle; // 0x30(0x04)
	float ThunderDistance; // 0x34(0x04)
};

// ScriptStruct TslGame.*424f548ed5
// Size: 0x98 (Inherited: 0x00)
struct F*424f548ed5 {
	bool bIsCustomGame; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MapName; // 0x08(0x10)
	struct FString ModeName; // 0x18(0x10)
	struct FString MatchId; // 0x28(0x10)
	int32 TeamCount; // 0x38(0x04)
	int32 MinPlayerCount; // 0x3c(0x04)
	int32 MaxPlayerCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TMap<struct FString, struct FString> StringParameter; // 0x48(0x50)
};

// ScriptStruct TslGame.*9aaec12821
// Size: 0x50 (Inherited: 0x00)
struct F*9aaec12821 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.TslOutGameLog
// Size: 0x20 (Inherited: 0x00)
struct FTslOutGameLog {
	struct FString Type; // 0x00(0x10)
	struct FString Log; // 0x10(0x10)
};

// ScriptStruct TslGame.*d6b757f916
// Size: 0x10 (Inherited: 0x00)
struct F*d6b757f916 {
	struct UExponentialHeightFogComponent* *87e86f506b; // 0x00(0x08)
	bool *bd099d998a; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*80e578280b
// Size: 0x20 (Inherited: 0x00)
struct F*80e578280b {
	enum class EQualityType QualityType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DisplayQualityLevelName; // 0x08(0x18)
};

// ScriptStruct TslGame.TslMissionInLobby
// Size: 0x88 (Inherited: 0x00)
struct FTslMissionInLobby {
	struct FString MissionId; // 0x00(0x10)
	bool bAchieved; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Description; // 0x18(0x10)
	int32 Priority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString Type; // 0x30(0x10)
	bool bLocked; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float ProgressRatio; // 0x44(0x04)
	struct FString ProgressText; // 0x48(0x10)
	struct FString MissionIconName; // 0x58(0x10)
	int32 InitialProgress; // 0x68(0x04)
	int32 CurrentProgress; // 0x6c(0x04)
	int32 MaximumProgress; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FName> TargetGameModeList; // 0x78(0x10)
};

// ScriptStruct TslGame.PointInfo
// Size: 0x08 (Inherited: 0x00)
struct FPointInfo {
	int32 *fdb1eadf19; // 0x00(0x04)
	int32 *1a3b0e6d38; // 0x04(0x04)
};

// ScriptStruct TslGame.TeamInfo
// Size: 0x50 (Inherited: 0x00)
struct FTeamInfo {
	struct FString TeamName; // 0x00(0x10)
	struct FString *bee7c8c473; // 0x10(0x10)
	struct UTexture2D* TeamIcon; // 0x20(0x08)
	struct FLinearColor TeamColor; // 0x28(0x10)
	struct FLinearColor *af74ec4873; // 0x38(0x10)
	struct UTexture2D* TeamMember; // 0x48(0x08)
};

// ScriptStruct TslGame.ReplayItem
// Size: 0x100 (Inherited: 0x00)
struct FReplayItem {
	struct FString FriendlyName; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	bool bIsLive; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FDateTime Date; // 0x28(0x08)
	int32 SizeInBytes; // 0x30(0x04)
	int32 LengthInMS; // 0x34(0x04)
	int32 NumViewers; // 0x38(0x04)
	bool bIncomplete; // 0x3c(0x01)
	bool bIsVersionCompatible; // 0x3d(0x01)
	bool bIsCorrupted; // 0x3e(0x01)
	bool bIsServerRecording; // 0x3f(0x01)
	bool bShouldKeep; // 0x40(0x01)
	bool bArchived; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FString GameVersion; // 0x48(0x10)
	int32 MK3DReplayVersion; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Mode; // 0x60(0x10)
	struct FString RecordUserId; // 0x70(0x10)
	struct FString RecordUserNickName; // 0x80(0x10)
	struct FString MapName; // 0x90(0x10)
	bool bAllDeadOrWin; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 ArchiveSizeInBytes; // 0xa4(0x04)
	bool bIsClip; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32 ClipTime; // 0xac(0x04)
	int32 ClipStartTime; // 0xb0(0x04)
	int32 ClipEndTime; // 0xb4(0x04)
	struct FString ClipTargetUserId; // 0xb8(0x10)
	struct FString ClipTargetUserNickName; // 0xc8(0x10)
	struct FString ReportToken; // 0xd8(0x10)
	struct FString RecordAccountId; // 0xe8(0x10)
	bool bHaveCameraEvent; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// ScriptStruct TslGame.*98720d9f9a
// Size: 0xb8 (Inherited: 0x00)
struct F*98720d9f9a {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString KillerName; // 0x38(0x10)
	struct FString KillerNetId; // 0x48(0x10)
	struct FString VictimName; // 0x58(0x10)
	struct FString VictimNetId; // 0x68(0x10)
	struct FString DamageCauseClassName; // 0x78(0x10)
	int32 DamageTypeCategory; // 0x88(0x04)
	int32 DamageReason; // 0x8c(0x04)
	bool bGroggy; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString KillerPlayerId; // 0x98(0x10)
	struct FString VictimPlayerId; // 0xa8(0x10)
};

// ScriptStruct TslGame.*a8c8c664fc
// Size: 0x138 (Inherited: 0x00)
struct F*a8c8c664fc {
	float LastUpdateTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString KillerUniqueId; // 0x08(0x10)
	struct FString KillerName; // 0x18(0x10)
	struct FString KillerPlayerId; // 0x28(0x10)
	struct FString VictimUniqueId; // 0x38(0x10)
	struct FString VictimName; // 0x48(0x10)
	struct FString VictimPlayerId; // 0x58(0x10)
	char pad_68[0xd0]; // 0x68(0xd0)
};

// ScriptStruct TslGame.*3eb798592d
// Size: 0x58 (Inherited: 0x00)
struct F*3eb798592d {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString RecordTargetName; // 0x38(0x10)
	struct FString RecordTargetNetId; // 0x48(0x10)
};

// ScriptStruct TslGame.*e765429fc9
// Size: 0x68 (Inherited: 0x00)
struct F*e765429fc9 {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString EtceteraEventCode; // 0x38(0x10)
	struct FString TargetNetId; // 0x48(0x10)
	struct FString TargetName; // 0x58(0x10)
};

// ScriptStruct TslGame.*40f7e135b1
// Size: 0xb8 (Inherited: 0x00)
struct F*40f7e135b1 {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString InstigatorName; // 0x38(0x10)
	struct FString InstigatorNetId; // 0x48(0x10)
	struct FString VictimName; // 0x58(0x10)
	struct FString VictimNetId; // 0x68(0x10)
	struct FString DamageCauseClassName; // 0x78(0x10)
	int32 DamageTypeCategory; // 0x88(0x04)
	int32 DamageReason; // 0x8c(0x04)
	bool bGroggy; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString InstigatorPlayerId; // 0x98(0x10)
	struct FString VictimPlayerId; // 0xa8(0x10)
};

// ScriptStruct TslGame.*d81ea09ca7
// Size: 0x18 (Inherited: 0x00)
struct F*d81ea09ca7 {
	int32 *a2370ef132; // 0x00(0x04)
	int32 *53ca9f22e7; // 0x04(0x04)
	struct TArray<struct F*809cd6de52> *6984441835; // 0x08(0x10)
};

// ScriptStruct TslGame.*809cd6de52
// Size: 0x18 (Inherited: 0x00)
struct F*809cd6de52 {
	struct TArray<struct F*0934dcbc16> *5dbe81c54b; // 0x00(0x10)
	bool bIsLastStage; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *70b54512d9; // 0x14(0x04)
};

// ScriptStruct TslGame.*0934dcbc16
// Size: 0x60 (Inherited: 0x00)
struct F*0934dcbc16 {
	struct TArray<struct F*06ef2d1f12> *eb63b16136; // 0x00(0x10)
	struct TArray<int32> *318cda6a3e; // 0x10(0x10)
	int32 *c784d5d056; // 0x20(0x04)
	int32 *88d5d1401f; // 0x24(0x04)
	enum class EArenaState *0934dcbc16; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *d2ee2525da; // 0x2c(0x04)
	float *5c5e91e350; // 0x30(0x04)
	float *5ba4c74e64; // 0x34(0x04)
	float *ce7bb02ff8; // 0x38(0x04)
	int32 *b6ad7407d1; // 0x3c(0x04)
	float *53a9319354; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Name; // 0x48(0x10)
	int32 *d02a609731; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*06ef2d1f12
// Size: 0x14 (Inherited: 0x00)
struct F*06ef2d1f12 {
	int32 TeamId; // 0x00(0x04)
	int32 Score; // 0x04(0x04)
	int32 *90af76f5ed; // 0x08(0x04)
	float *f103037004; // 0x0c(0x04)
	bool *0c7a9c99f8; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*084b9b1d34
// Size: 0x10 (Inherited: 0x00)
struct F*084b9b1d34 {
	struct TArray<struct F*3af535ed29> DynamicTeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*3af535ed29
// Size: 0x28 (Inherited: 0x00)
struct F*3af535ed29 {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	struct TArray<bool> RoundHistory; // 0x08(0x10)
	struct TArray<struct F*906a7319a1> DynamicPlayersInfo; // 0x18(0x10)
};

// ScriptStruct TslGame.*906a7319a1
// Size: 0x14 (Inherited: 0x00)
struct F*906a7319a1 {
	int32 Kills; // 0x00(0x04)
	int32 Deaths; // 0x04(0x04)
	int32 DamageDealt; // 0x08(0x04)
	int32 money; // 0x0c(0x04)
	int32 MemberIndex; // 0x10(0x04)
};

// ScriptStruct TslGame.*b1a8036439
// Size: 0x08 (Inherited: 0x00)
struct F*b1a8036439 {
	int32 GoalScore; // 0x00(0x04)
	bool bIsTeamElimination; // 0x04(0x01)
	bool bUseWarRoyaleBluezone; // 0x05(0x01)
	bool bUsingTeamXRay; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct TslGame.*ad2e5f60b3
// Size: 0x50 (Inherited: 0x00)
struct F*ad2e5f60b3 {
	float TimeLimitSeconds; // 0x00(0x04)
	float LastRespawnTimeSeconds; // 0x04(0x04)
	struct TArray<int32> TeamIds; // 0x08(0x10)
	struct TArray<int32> TeamIndices; // 0x18(0x10)
	struct TArray<struct FString> TeamLeaderNames; // 0x28(0x10)
	struct TArray<struct FString> TeamLeaderClanNames; // 0x38(0x10)
	int32 TeamCount; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*9c46af074d
// Size: 0x30 (Inherited: 0x00)
struct F*9c46af074d {
	float TrainingScore; // 0x00(0x04)
	float TrainingPlayTime; // 0x04(0x04)
	bool TrainingStartCountDown; // 0x08(0x01)
	bool HeadShotCount; // 0x09(0x01)
	bool KillCount; // 0x0a(0x01)
	bool AimAccuracy; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString WeaponName; // 0x10(0x10)
	float *0716c1d241; // 0x20(0x04)
	bool *26a611d3e2; // 0x24(0x01)
	bool *22b2b75563; // 0x25(0x01)
	bool *8da9209425; // 0x26(0x01)
	bool *d00adc7eea; // 0x27(0x01)
	bool *3e0ca5c823; // 0x28(0x01)
	bool *79cfc54442; // 0x29(0x01)
	bool *8124e2a025; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.TslReportUserInfo
// Size: 0x70 (Inherited: 0x00)
struct FTslReportUserInfo {
	struct FString PlayerName; // 0x00(0x10)
	struct FString ClanId; // 0x10(0x10)
	struct FString ClanTag; // 0x20(0x10)
	int32 ClanLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString StreamerFakeName; // 0x38(0x10)
	struct FString NetId; // 0x48(0x10)
	struct FString AccountId; // 0x58(0x10)
	int32 TeamId; // 0x68(0x04)
	enum class ESubjectToReport SubjectToReport; // 0x6c(0x01)
	enum class EOutGamePlatformProvider PlayerPlatform; // 0x6d(0x01)
	enum class ETslAIPlayerType AIType; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// ScriptStruct TslGame.TslInputKey
// Size: 0x20 (Inherited: 0x00)
struct FTslInputKey {
	struct FKey Key; // 0x00(0x18)
	char bShift : 1; // 0x18(0x01)
	char bCtrl : 1; // 0x18(0x01)
	char bAlt : 1; // 0x18(0x01)
	char pad_18_3 : 5; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*c9d790acb1
// Size: 0x08 (Inherited: 0x00)
struct F*c9d790acb1 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
};

// ScriptStruct TslGame.*48f0ad4493
// Size: 0x18 (Inherited: 0x00)
struct F*48f0ad4493 {
	struct ATslCharacter* *975ea65fd3; // 0x00(0x08)
	float *4ff5afc07f; // 0x08(0x04)
	float *f7e8173997; // 0x0c(0x04)
	float *b0560ad8a3; // 0x10(0x04)
	bool bIsGroggy; // 0x14(0x01)
	bool *1be70de75f; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*f16a7f6759
// Size: 0x20 (Inherited: 0x00)
struct F*f16a7f6759 {
	struct FText *bf915fabf6; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*81733b0fce
// Size: 0x50 (Inherited: 0x00)
struct F*81733b0fce {
	struct TMap<enum class EFiremode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGame.*f5d14e572c
// Size: 0x50 (Inherited: 0x00)
struct F*f5d14e572c {
	struct TMap<enum class ETraumaBagHealMode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGame.*7278704b44
// Size: 0x18 (Inherited: 0x00)
struct F*7278704b44 {
	struct FName ItemID; // 0x00(0x08)
	int32 *e517e6799c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct U*6c530763b0* *1c3d008d3e; // 0x10(0x08)
};

// ScriptStruct TslGame.*c29e427e5d
// Size: 0x50 (Inherited: 0x00)
struct F*c29e427e5d {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*bb27a7c784
// Size: 0x10 (Inherited: 0x00)
struct F*bb27a7c784 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*8c648d55c2
// Size: 0x18 (Inherited: 0x00)
struct F*8c648d55c2 {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct U*1bacf66c5c*> Cache; // 0x08(0x10)
};

// ScriptStruct TslGame.*0253b9bc56
// Size: 0x18 (Inherited: 0x00)
struct F*0253b9bc56 {
	enum class ECastableItemType *505b924fe4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName ItemID; // 0x08(0x08)
	struct UTexture2D* *2b496751ae; // 0x10(0x08)
};

// ScriptStruct TslGame.*f85343fddb
// Size: 0x10 (Inherited: 0x00)
struct F*f85343fddb {
	struct TArray<struct F*8e3bcfe05a> *6c28b954be; // 0x00(0x10)
};

// ScriptStruct TslGame.*8e3bcfe05a
// Size: 0x20 (Inherited: 0x00)
struct F*8e3bcfe05a {
	struct FName ActionName; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGame.*9526feaf82
// Size: 0x38 (Inherited: 0x00)
struct F*9526feaf82 {
	enum class ESystemMessageType MessageType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Duration; // 0x04(0x04)
	float *1cdb2a6679; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Message; // 0x10(0x18)
	int32 *52e92e9b5a; // 0x28(0x04)
	int32 *bf1382a26e; // 0x2c(0x04)
	bool *ad29c8922a; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*839166cc57
// Size: 0x38 (Inherited: 0x08)
struct F*839166cc57 : FTableRowBase {
	struct FText Message; // 0x08(0x18)
	enum class ETslNotificationMessageColorType *23895f5ad4; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UTexture2D* *49cabfda5f; // 0x28(0x08)
	enum class ETslNotificationMessageAnimationType *094c3af3b5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*42f109d935
// Size: 0x08 (Inherited: 0x00)
struct F*42f109d935 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*1cdbc86075
// Size: 0x08 (Inherited: 0x00)
struct F*1cdbc86075 {
	float Score; // 0x00(0x04)
	int32 *f334edac6b; // 0x04(0x04)
};

// ScriptStruct TslGame.*027a9afaf9
// Size: 0x08 (Inherited: 0x00)
struct F*027a9afaf9 {
	int32 TeamNum; // 0x00(0x04)
	int32 TeamRanking; // 0x04(0x04)
};

// ScriptStruct TslGame.*58aacf8025
// Size: 0x28 (Inherited: 0x00)
struct F*58aacf8025 {
	struct FVector *5409f11196; // 0x00(0x0c)
	float *439aa68e44; // 0x0c(0x04)
	float *2c8fb3a816; // 0x10(0x04)
	struct FVector *0b01006cf6; // 0x14(0x0c)
	float *50698e285f; // 0x20(0x04)
	float *504ccfed71; // 0x24(0x04)
};

// ScriptStruct TslGame.*8ade9120ce
// Size: 0x48 (Inherited: 0x00)
struct F*8ade9120ce {
	struct UClass* Widget; // 0x00(0x20)
	struct UTexture2D* Texture; // 0x20(0x20)
	struct FVector2D Size; // 0x40(0x08)
};

// ScriptStruct TslGame.*d819e297c7
// Size: 0x10 (Inherited: 0x00)
struct F*d819e297c7 {
	struct TArray<struct UUserWidget*> Widgets; // 0x00(0x10)
};

// ScriptStruct TslGame.*c085b1bad3
// Size: 0x60 (Inherited: 0x00)
struct F*c085b1bad3 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*6666022568
// Size: 0x60 (Inherited: 0x00)
struct F*6666022568 {
	struct UTexture2D* IconBackground; // 0x00(0x20)
	struct UTexture2D* MemberIndexBackground; // 0x20(0x20)
	struct UTexture2D* FullWidgetBackground; // 0x40(0x20)
};

// ScriptStruct TslGame.PlayerInfo
// Size: 0x50 (Inherited: 0x00)
struct FPlayerInfo {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*ad71ef7f84
// Size: 0x10 (Inherited: 0x00)
struct F*ad71ef7f84 {
	struct UTexture2D* Left; // 0x00(0x08)
	struct UTexture2D* Right; // 0x08(0x08)
};

// ScriptStruct TslGame.*f008d18723
// Size: 0x10 (Inherited: 0x00)
struct F*f008d18723 {
	struct TArray<struct U*142c7b8c41*> Items; // 0x00(0x10)
};

// ScriptStruct TslGame.*adac4ccbf5
// Size: 0x14 (Inherited: 0x00)
struct F*adac4ccbf5 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*881d583e63
// Size: 0x10 (Inherited: 0x00)
struct F*881d583e63 {
	struct TArray<struct ATslAIWaypointSegment*> *6ff7e7b7f3; // 0x00(0x10)
};

// ScriptStruct TslGame.*6230156890
// Size: 0xa0 (Inherited: 0x00)
struct F*6230156890 {
	struct TMap<struct F*94ece644dc, bool> *2b74326063; // 0x00(0x50)
	struct TMap<struct F*94ece644dc, struct F*41d865029b> *45a866fe48; // 0x50(0x50)
};

// ScriptStruct TslGame.*94ece644dc
// Size: 0x10 (Inherited: 0x00)
struct F*94ece644dc {
	struct ATslAIWaypointSegment* path; // 0x00(0x08)
	float InputKey; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*41d865029b
// Size: 0x08 (Inherited: 0x00)
struct F*41d865029b {
	float *751b75ea3b; // 0x00(0x04)
	float *0e3bf45781; // 0x04(0x04)
};

// ScriptStruct TslGame.*c8ca5a902a
// Size: 0x48 (Inherited: 0x00)
struct F*c8ca5a902a {
	int32 SpawnCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName VehicleTag; // 0x08(0x08)
	struct FName SpawnTag; // 0x10(0x08)
	bool *a02e42e7d7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector SpawnLocation; // 0x1c(0x0c)
	struct FRotator *80568035e9; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct F*4dcb64ccfa *df7012fcfa; // 0x38(0x10)
};

// ScriptStruct TslGame.*4dcb64ccfa
// Size: 0x10 (Inherited: 0x00)
struct F*4dcb64ccfa {
	struct ATslAIWaypointSegment* *c6b2266a11; // 0x00(0x08)
	float *16a7095781; // 0x08(0x04)
	bool *987b84b70b; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*2964516ae3
// Size: 0x28 (Inherited: 0x00)
struct F*2964516ae3 {
	struct APawn* *05d0f32c49; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
	struct UBlackboardData* BlackboardData; // 0x10(0x08)
	struct F*4dcb64ccfa *df7012fcfa; // 0x18(0x10)
};

// ScriptStruct TslGame.VehicleSpawn
// Size: 0xc0 (Inherited: 0x08)
struct FVehicleSpawn : FTableRowBase {
	struct FGuid ID; // 0x08(0x10)
	enum class ESpawnType SpawnType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FName VehicleTag; // 0x20(0x08)
	struct UClass* VehicleClass; // 0x28(0x20)
	struct UBehaviorTree* BehaviorTreeAsset; // 0x48(0x20)
	struct UBlackboardData* BlackboardDataAsset; // 0x68(0x20)
	float InitialSpawnDelay; // 0x88(0x04)
	float SubsequentSpawnDelay; // 0x8c(0x04)
	int32 MaxTriggers; // 0x90(0x04)
	bool MinToSpawn; // 0x94(0x01)
	bool MaxToSpawn; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	struct F*b31c62debb SpawnFilter; // 0x98(0x28)
};

// ScriptStruct TslGame.*b31c62debb
// Size: 0x28 (Inherited: 0x00)
struct F*b31c62debb {
	bool bLimitSpawnPoints; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> ValidSpawnPoints; // 0x08(0x10)
	struct TArray<struct FName> InvalidSpawnPoints; // 0x18(0x10)
};

// ScriptStruct TslGame.*65687b35d4
// Size: 0x20 (Inherited: 0x00)
struct F*65687b35d4 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*7d5cc6e779
// Size: 0x60 (Inherited: 0x00)
struct F*7d5cc6e779 {
	struct FGuid ID; // 0x00(0x10)
	struct FString *606d874e03; // 0x10(0x10)
	struct UClass* VehicleClass; // 0x20(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x28(0x08)
	struct UBlackboardData* BlackboardData; // 0x30(0x08)
	struct F*b31c62debb SpawnSettings; // 0x38(0x28)
};

// ScriptStruct TslGame.*b6ddb72992
// Size: 0x40 (Inherited: 0x00)
struct F*b6ddb72992 {
	float *33adabaae5; // 0x00(0x04)
	float *e230512e72; // 0x04(0x04)
	float *fcc8cb3205; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float *d0042136e6; // 0x10(0x04)
	float *63fcc566bd; // 0x14(0x04)
	struct FName *6048869982; // 0x18(0x08)
	struct FVector *e5a1c828aa; // 0x20(0x0c)
	struct FVector *c6c852a915; // 0x2c(0x0c)
	struct UClass* *271a14efcc; // 0x38(0x08)
};

// ScriptStruct TslGame.*5cf0cef062
// Size: 0x30 (Inherited: 0x00)
struct F*5cf0cef062 {
	struct F*792f1b2794 *2e4cde85d7; // 0x00(0x18)
	struct F*792f1b2794 *88c19df12f; // 0x18(0x18)
};

// ScriptStruct TslGame.*792f1b2794
// Size: 0x18 (Inherited: 0x00)
struct F*792f1b2794 {
	float *f1878cb306; // 0x00(0x04)
	float *5bc5b0c173; // 0x04(0x04)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*96dcdde9ae
// Size: 0x18 (Inherited: 0x00)
struct F*96dcdde9ae {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*af4401a33b
// Size: 0x58 (Inherited: 0x00)
struct F*af4401a33b {
	enum class EVehiclePartType *827c31f5b6; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<int32, struct UMaterialInterface*> *01ab4e4110; // 0x08(0x50)
};

// ScriptStruct TslGame.*c18c55d48f
// Size: 0x98 (Inherited: 0x00)
struct F*c18c55d48f {
	bool *136f212acc; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *e4ea21391f; // 0x04(0x04)
	struct FName *ea1b42d380; // 0x08(0x08)
	struct FVector2D *9766f355c4; // 0x10(0x08)
	struct FVector2D *40f1124962; // 0x18(0x08)
	struct FVector *afe83381a0; // 0x20(0x0c)
	struct FVector2D *de662c54a6; // 0x2c(0x08)
	struct FVector2D *a6c3ef138b; // 0x34(0x08)
	float *1e009b5180; // 0x3c(0x04)
	float *65021737d1; // 0x40(0x04)
	float *3f44f68539; // 0x44(0x04)
	struct FVector *2e88d08806; // 0x48(0x0c)
	struct FVector *c0d9b0a601; // 0x54(0x0c)
	struct FVector2D *d84f748ed8; // 0x60(0x08)
	float *b4047daed0; // 0x68(0x04)
	bool *c042d09c00; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float *387ed0e857; // 0x70(0x04)
	bool *b474bafc4a; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector2D *9efa8691a8; // 0x78(0x08)
	struct U*59a0aeaef9* *ce6ceae804; // 0x80(0x08)
	bool *33b0c09b0d; // 0x88(0x01)
	char pad_89[0xf]; // 0x89(0x0f)
};

// ScriptStruct TslGame.*ae29052621
// Size: 0x68 (Inherited: 0x00)
struct F*ae29052621 {
	struct FName *e944fafb01; // 0x00(0x08)
	float *625a89b5ec; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName *693196083b; // 0x10(0x08)
	float *5dbf6f1af5; // 0x18(0x04)
	float *c9dd8b9b04; // 0x1c(0x04)
	struct UCurveFloat* CurveEngineOn; // 0x20(0x08)
	struct UCurveFloat* CurveEngineOff; // 0x28(0x08)
	float EngineSwitchMaxTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName HeadLightIntensityParamName; // 0x38(0x08)
	float HeadLightIntensity_Mat; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FName TailLightIntensityParamName; // 0x48(0x08)
	float TailLightIntensity_Mat; // 0x50(0x04)
	bool bTickIndicatorSpeedText; // 0x54(0x01)
	bool bTickIndicatorGearText; // 0x55(0x01)
	bool bTickIndicatorHealth; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FName TextRenderIntensityParameterName; // 0x58(0x08)
	struct FName HealthStateParameterName; // 0x60(0x08)
};

// ScriptStruct TslGame.*b35c70f02c
// Size: 0x130 (Inherited: 0x00)
struct F*b35c70f02c {
	bool *9cec20fd90; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *24040351ca; // 0x04(0x04)
	float *957a8511e0; // 0x08(0x04)
	float *e200f095df; // 0x0c(0x04)
	float *d036966192; // 0x10(0x04)
	struct FFloatRange *911cf3525d; // 0x14(0x10)
	float *bbb879e1e1; // 0x24(0x04)
	float *87c02f9987; // 0x28(0x04)
	float *e39c13a744; // 0x2c(0x04)
	float *a27f1e5b55; // 0x30(0x04)
	int32 *148a491c14; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct TMap<enum class EPhysicalSurface, struct F*b660e75403> *44427063c1; // 0x40(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*b660e75403> *7fe0f43c66; // 0x90(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*a79adf53b8> *b9276dcfc7; // 0xe0(0x50)
};

// ScriptStruct TslGame.*a79adf53b8
// Size: 0x28 (Inherited: 0x00)
struct F*a79adf53b8 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UAkComponent* *cabe1e32c4; // 0x18(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x20(0x08)
};

// ScriptStruct TslGame.*b660e75403
// Size: 0x10 (Inherited: 0x00)
struct F*b660e75403 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*62093a0f4c
// Size: 0x28 (Inherited: 0x00)
struct F*62093a0f4c {
	char pad_0[0x18]; // 0x00(0x18)
	struct USceneComponent* *bcea33173e; // 0x18(0x08)
	struct USceneComponent* *d20c153d72; // 0x20(0x08)
};

// ScriptStruct TslGame.*efbcb9eb85
// Size: 0x28 (Inherited: 0x00)
struct F*efbcb9eb85 {
	int32 *e8acde535e; // 0x00(0x04)
	float *c5f08d7ff9; // 0x04(0x04)
	float *89fcc3bb80; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *a056c64c90; // 0x10(0x08)
	struct UCurveFloat* *1362d965b5; // 0x18(0x08)
	struct UClass* *271a14efcc; // 0x20(0x08)
};

// ScriptStruct TslGame.*f815e2a686
// Size: 0x10 (Inherited: 0x00)
struct F*f815e2a686 {
	struct FName *8e7c1aef4b; // 0x00(0x08)
	struct FName *c733725cc0; // 0x08(0x08)
};

// ScriptStruct TslGame.*26272c57aa
// Size: 0x70 (Inherited: 0x00)
struct F*26272c57aa {
	struct FTransform PlantingTransform; // 0x00(0x30)
	struct FTransform EffectTransform; // 0x30(0x30)
	struct FLinearColor EffectColor; // 0x60(0x10)
};

// ScriptStruct TslGame.TslWeaponDisplayDataRow
// Size: 0x10 (Inherited: 0x08)
struct FTslWeaponDisplayDataRow : FTableRowBase {
	float DefaultScale; // 0x08(0x04)
	float ZoomScale; // 0x0c(0x04)
};

// ScriptStruct TslGame.*8384429dbb
// Size: 0x20 (Inherited: 0x00)
struct F*8384429dbb {
	struct FString ItemID; // 0x00(0x10)
	struct FString SkinId; // 0x10(0x10)
};

// ScriptStruct TslGame.*c0e99f81d1
// Size: 0x30 (Inherited: 0x00)
struct F*c0e99f81d1 {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*e43fa2c521 LocalWeatherSetting; // 0x08(0x28)
};

// ScriptStruct TslGame.*e43fa2c521
// Size: 0x28 (Inherited: 0x00)
struct F*e43fa2c521 {
	float FogDensity; // 0x00(0x04)
	struct FLinearColor FogColor; // 0x04(0x10)
	float FogStartDistance; // 0x14(0x04)
	float VolFogExtinctionScale; // 0x18(0x04)
	float WeatherParticleSpawnScale; // 0x1c(0x04)
	char bUseWetEffectWithSpawnScale : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float SoundScale; // 0x24(0x04)
};

// ScriptStruct TslGame.*410a4dbf32
// Size: 0x10 (Inherited: 0x00)
struct F*410a4dbf32 {
	float DirectionalLightIntensity; // 0x00(0x04)
	float DirectionalLightTemperature; // 0x04(0x04)
	float DirectionalLightVolumetricScattering; // 0x08(0x04)
	float SkyLightIntensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e595d0a912
// Size: 0x68 (Inherited: 0x00)
struct F*e595d0a912 {
	struct FString WeatherName; // 0x00(0x10)
	struct ATslDynamicWeather* DynamicWeather; // 0x10(0x08)
	float Weight; // 0x18(0x04)
	float DirectionalLightIntensity; // 0x1c(0x04)
	float DirectionalLightTemperature; // 0x20(0x04)
	float DirectionalLightVolumetricScattering; // 0x24(0x04)
	float SkyLightIntensity; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UTextureCube* SkyLightCubemap; // 0x30(0x08)
	float SkyLightCubemapAngle; // 0x38(0x04)
	float SkyLightCubemapResolution; // 0x3c(0x04)
	char bUseBlendSkyBox : 1; // 0x40(0x01)
	char bRefreshLightSetting : 1; // 0x40(0x01)
	char bOverrideDurationTime : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float OverrideDurationTimeMin; // 0x44(0x04)
	float OverrideDurationTimeMax; // 0x48(0x04)
	char bUseDistanceDepthBlur : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float DepthBlurIntensity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UCurveFloat* DepthBlurCurveAsset; // 0x58(0x08)
	char bClearFootprints : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.*bec5edb00b
// Size: 0x1c (Inherited: 0x00)
struct F*bec5edb00b {
	bool *8b4ca97c7e; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *8b2784eb92; // 0x04(0x04)
	float *45bf7c18e1; // 0x08(0x04)
	float *386013520b; // 0x0c(0x04)
	float *532d396981; // 0x10(0x04)
	float *79de90eec7; // 0x14(0x04)
	bool *fbc374946b; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct TslGame.*7eab5f11f7
// Size: 0x30 (Inherited: 0x00)
struct F*7eab5f11f7 {
	struct UAkAudioEvent* *f892ea45b8; // 0x00(0x08)
	struct UAkAudioEvent* *06e935cd1d; // 0x08(0x08)
	float *3c4586f0da; // 0x10(0x04)
	float *b6c76124e7; // 0x14(0x04)
	struct FString *b599926002; // 0x18(0x10)
	float *b34ae8a9e6; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*955a930b07
// Size: 0x30 (Inherited: 0x00)
struct F*955a930b07 {
	float *4d6923fd28; // 0x00(0x04)
	struct FVector2D *02bfaf8d0e; // 0x04(0x08)
	struct FVector2D *61138268bf; // 0x0c(0x08)
	float *38545499f5; // 0x14(0x04)
	float *907c000c0b; // 0x18(0x04)
	float *5f5a492556; // 0x1c(0x04)
	struct FVector2D *3edd3e9ab0; // 0x20(0x08)
	struct FVector2D *95e402752d; // 0x28(0x08)
};

// ScriptStruct TslGame.*171ad77693
// Size: 0x10 (Inherited: 0x00)
struct F*171ad77693 {
	bool *3b7041cce3; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct TslGame.*52d91117a5
// Size: 0x58 (Inherited: 0x00)
struct F*52d91117a5 {
	float *3b433ba0cb; // 0x00(0x04)
	float *3a8633477e; // 0x04(0x04)
	struct FVector2D *80257f4eb0; // 0x08(0x08)
	struct FVector2D *b6406d2828; // 0x10(0x08)
	struct FVector2D *77f6a7a480; // 0x18(0x08)
	struct FVector2D *f88b31f6b0; // 0x20(0x08)
	struct FVector2D *2eaae1565e; // 0x28(0x08)
	struct FVector2D *1d87a91639; // 0x30(0x08)
	struct FVector2D *1443b9f66f; // 0x38(0x08)
	float *1c7a9d1093; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UAnimMontage* *07620fc2dd; // 0x48(0x08)
	float *d1860a84b6; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*fc0a318931
// Size: 0x14 (Inherited: 0x00)
struct F*fc0a318931 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*ed70a30c19
// Size: 0x40 (Inherited: 0x00)
struct F*ed70a30c19 {
	float *ab393db177; // 0x00(0x04)
	float *f673d294fa; // 0x04(0x04)
	float *bc003ffc84; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *a5feb54645; // 0x10(0x08)
	float *48974e5709; // 0x18(0x04)
	float *abbe515473; // 0x1c(0x04)
	float *b32492a535; // 0x20(0x04)
	float *d04c9c6208; // 0x24(0x04)
	struct FVector2D *513d302cd7; // 0x28(0x08)
	struct FVector2D *0d9b024ab9; // 0x30(0x08)
	float *60d591047c; // 0x38(0x04)
	float *07311ed676; // 0x3c(0x04)
};

// ScriptStruct TslGame.*433fdde7fb
// Size: 0x14 (Inherited: 0x14)
struct F*433fdde7fb : F*7ef167f7d8 {
};

// ScriptStruct TslGame.*7ef167f7d8
// Size: 0x14 (Inherited: 0x00)
struct F*7ef167f7d8 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*803e4c2351
// Size: 0x14 (Inherited: 0x14)
struct F*803e4c2351 : F*7ef167f7d8 {
};

// ScriptStruct TslGame.*9d4e42b193
// Size: 0x1c (Inherited: 0x14)
struct F*9d4e42b193 : F*7ef167f7d8 {
	char pad_14[0x8]; // 0x14(0x08)
};

// ScriptStruct TslGame.*770b4b4fef
// Size: 0x10 (Inherited: 0x00)
struct F*770b4b4fef {
	struct UAnimSequence* TransitionSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*40a7b510e4
// Size: 0x30 (Inherited: 0x00)
struct F*40a7b510e4 {
	struct USkeletalMesh* *02c005fcad; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *a99d7db976; // 0x20(0x10)
};

// ScriptStruct TslGame.*cb0117729f
// Size: 0x18 (Inherited: 0x00)
struct F*cb0117729f {
	struct USkeletalMesh* *a6236bcf98; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *766fedc00f; // 0x08(0x10)
};

// ScriptStruct TslGame.*650b1193a6
// Size: 0x38 (Inherited: 0x00)
struct F*650b1193a6 {
	struct TArray<struct F*3ed1ee1fab> StartParticleList; // 0x00(0x10)
	struct TArray<struct F*3ed1ee1fab> FinishParticleList; // 0x10(0x10)
	struct F*b2adf3900b OverrideMaterial; // 0x20(0x18)
};

// ScriptStruct TslGame.*b2adf3900b
// Size: 0x18 (Inherited: 0x00)
struct F*b2adf3900b {
	enum class *9f440c6493 SkinApplicationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*d2f0faa372> SkinMaterials; // 0x08(0x10)
};

// ScriptStruct TslGame.*d2f0faa372
// Size: 0x30 (Inherited: 0x00)
struct F*d2f0faa372 {
	struct FName MaterialSlotName; // 0x00(0x08)
	int32 MaterialSlotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInstance* MaterialInstance; // 0x10(0x20)
};

// ScriptStruct TslGame.*3ed1ee1fab
// Size: 0x20 (Inherited: 0x00)
struct F*3ed1ee1fab {
	struct TArray<struct FName> AttachSocketCandidates; // 0x00(0x10)
	struct FStringClassReference ParticleClass; // 0x10(0x10)
};

// ScriptStruct TslGame.*91315bec5f
// Size: 0x18 (Inherited: 0x08)
struct F*91315bec5f : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*a0f3166c66
// Size: 0x50 (Inherited: 0x00)
struct F*a0f3166c66 {
	struct TMap<enum class EPhysicalSurface, float> *d843e156ea; // 0x00(0x50)
};

// ScriptStruct TslGame.*d87f830add
// Size: 0x08 (Inherited: 0x00)
struct F*d87f830add {
	float *1fbdd7f124; // 0x00(0x04)
	float *8d30f7ab82; // 0x04(0x04)
};

// ScriptStruct TslGame.*63bf47fa53
// Size: 0x28 (Inherited: 0x00)
struct F*63bf47fa53 {
	bool AtlasIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UClass*> WheelTypes; // 0x08(0x10)
	struct TArray<struct UClass*> ExemptedWheelTypes; // 0x18(0x10)
};

// ScriptStruct TslGame.*79ed35a09b
// Size: 0x60 (Inherited: 0x00)
struct F*79ed35a09b {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct UAkAudioEvent* *ec4420276e; // 0x40(0x08)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x48(0x08)
	float *6d75f9a19c; // 0x50(0x04)
	enum class *a6cf5bae1a IndoorOutdoorMask; // 0x54(0x01)
	char LightingChannel1 : 1; // 0x55(0x01)
	char pad_55_1 : 7; // 0x55(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FName CollisionProfileName; // 0x58(0x08)
};

// ScriptStruct TslGame.*bc6d2a0956
// Size: 0x48 (Inherited: 0x08)
struct F*bc6d2a0956 : FTableRowBase {
	struct UTexture* Icon; // 0x08(0x20)
	struct F*288ddac817 AbilityAttribute; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName AbilityID; // 0x38(0x08)
	struct UClass* AbilityClass; // 0x40(0x08)
};

// ScriptStruct TslGame.*288ddac817
// Size: 0x0c (Inherited: 0x00)
struct F*288ddac817 {
	float Distance; // 0x00(0x04)
	float Angle; // 0x04(0x04)
	char UsingDir : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	bool bStopMove; // 0x09(0x01)
	bool bTrace; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct TslGame.AnimNode_LocomotionBSPlayer
// Size: 0x140 (Inherited: 0x58)
struct FAnimNode_LocomotionBSPlayer : FAnimNode_AssetPlayerBase {
	float NodeSpeed; // 0x58(0x04)
	float Dir; // 0x5c(0x04)
	enum class EAnimStance AnimStance; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct U*a645d9893a* AnimDB; // 0x68(0x08)
	bool bIsSprinting; // 0x70(0x01)
	bool bIsRelaxed; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float PlayRate; // 0x74(0x04)
	bool bLoop; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float StartPosition; // 0x7c(0x04)
	struct UBlendSpaceBase* BlendSpace; // 0x80(0x08)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FBlendFilter BlendFilter; // 0x90(0x90)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x120(0x10)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0x130(0x08)
	float Speed; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct TslGame.TslAnimNode_AimOffsets
// Size: 0xb0 (Inherited: 0x58)
struct FTslAnimNode_AimOffsets : FAnimNode_AssetPlayerBase {
	struct U*adf90eecbd* AnimDBMap; // 0x58(0x08)
	struct U*adf90eecbd* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslAimOffsetsNodeBlendSpaceData> BlendSpacesData; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	float X; // 0x90(0x04)
	float Y; // 0x94(0x04)
	float NormalizedTime; // 0x98(0x04)
	char pad_9C[0x8]; // 0x9c(0x08)
	enum class EAnimStance Stance; // 0xa4(0x01)
	bool bRelaxed; // 0xa5(0x01)
	enum class EWeaponClass WeaponClass; // 0xa6(0x01)
	enum class EAnimWeaponSpecificClass AnimWeaponSpecificClass; // 0xa7(0x01)
	enum class EAlphaBlendOption BlendType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct TslGame.TslAimOffsetsNodeBlendSpaceData
// Size: 0xc8 (Inherited: 0x00)
struct FTslAimOffsetsNodeBlendSpaceData {
	struct UBlendSpace* BlendSpace; // 0x00(0x08)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x08(0x10)
	char pad_18[0xb0]; // 0x18(0xb0)
};

// ScriptStruct TslGame.TslAnimNode_BlendPerBoneBase
// Size: 0x128 (Inherited: 0x30)
struct FTslAnimNode_BlendPerBoneBase : FAnimNode_Base {
	char pad_30[0x4]; // 0x30(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x34(0x01)
	bool bAlphaBoolEnabled; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Alpha; // 0x38(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x48(0x50)
	struct FName AlphaCurveName; // 0x98(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xa0(0x30)
	int32 LODThreshold; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<float> PerBoneBlendWeights; // 0xd8(0x10)
	struct FGuid SkeletonGuid; // 0xe8(0x10)
	struct FGuid VirtualBoneGuid; // 0xf8(0x10)
	char pad_108[0x20]; // 0x108(0x20)
};

// ScriptStruct TslGame.BlendBoneSettings
// Size: 0x20 (Inherited: 0x00)
struct FBlendBoneSettings {
	struct FBoneReference Bone; // 0x00(0x18)
	float Weight; // 0x18(0x04)
	bool bPropagateToChildren; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.TslAnimNode_ApplyAdditivePerBone
// Size: 0x168 (Inherited: 0x158)
struct FTslAnimNode_ApplyAdditivePerBone : FTslAnimNode_ApplyAdditivePerBoneBase {
	struct TArray<struct FBlendBoneSettings> OverrideBones; // 0x158(0x10)
};

// ScriptStruct TslGame.TslAnimNode_ApplyAdditivePerBoneBase
// Size: 0x158 (Inherited: 0x128)
struct FTslAnimNode_ApplyAdditivePerBoneBase : FTslAnimNode_BlendPerBoneBase {
	struct FPoseLink Base; // 0x128(0x18)
	struct FPoseLink Additive; // 0x140(0x18)
};

// ScriptStruct TslGame.TslAnimNode_ApplyAdditiveExcludeBones
// Size: 0x168 (Inherited: 0x158)
struct FTslAnimNode_ApplyAdditiveExcludeBones : FTslAnimNode_ApplyAdditivePerBoneBase {
	struct TArray<struct FExcludeBoneSettings> ExcludeBones; // 0x158(0x10)
};

// ScriptStruct TslGame.ExcludeBoneSettings
// Size: 0x20 (Inherited: 0x00)
struct FExcludeBoneSettings {
	struct FBoneReference Bone; // 0x00(0x18)
	bool bPropagateToChildren; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.TslAnimNode_BlendListBlendSpace
// Size: 0xb8 (Inherited: 0x58)
struct FTslAnimNode_BlendListBlendSpace : FAnimNode_AssetPlayerBase {
	float X; // 0x58(0x04)
	float Y; // 0x5c(0x04)
	struct UCurveFloat* CustomBlendCurve; // 0x60(0x08)
	struct UBlendSpace* LastActiveBlendSpace; // 0x68(0x08)
	struct TArray<struct UBlendSpace*> BlendSpace; // 0x70(0x10)
	struct TArray<float> BlendTime; // 0x80(0x10)
	struct TArray<struct FTslBlendSpaceBlendData> BlendSpaceData; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)
	float PlayRate; // 0xb0(0x04)
	bool bLoop; // 0xb4(0x01)
	enum class EAlphaBlendOption BlendType; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
};

// ScriptStruct TslGame.TslBlendSpaceBlendData
// Size: 0xd0 (Inherited: 0x00)
struct FTslBlendSpaceBlendData {
	struct UBlendSpace* BlendSpace; // 0x00(0x08)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x08(0x10)
	char pad_18[0xb8]; // 0x18(0xb8)
};

// ScriptStruct TslGame.TslAnimNode_BlendListBlendSpaceByEnum
// Size: 0xd0 (Inherited: 0xb8)
struct FTslAnimNode_BlendListBlendSpaceByEnum : FTslAnimNode_BlendListBlendSpace {
	struct TArray<bool> EnumToPoseIndex; // 0xb8(0x10)
	char pad_C8[0x5]; // 0xc8(0x05)
	bool ActiveEnumValue; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
};

// ScriptStruct TslGame.TslAnimNode_BlendEvaluatorBlendSpaceByEnum
// Size: 0xd8 (Inherited: 0xd0)
struct FTslAnimNode_BlendEvaluatorBlendSpaceByEnum : FTslAnimNode_BlendListBlendSpaceByEnum {
	float NormalizedTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct TslGame.TslAnimNode_BlendListRandom
// Size: 0x120 (Inherited: 0xc8)
struct FTslAnimNode_BlendListRandom : FAnimNode_BlendListBase {
	int32 ActiveChildIndex; // 0xc8(0x04)
	enum class ERandomType RandomType; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct TArray<struct FBlendPosePlayInfo> PlayChances; // 0xd0(0x10)
	struct TArray<int32> PlayList; // 0xe0(0x10)
	int32 LoopingCounter; // 0xf0(0x04)
	float RandomPlayTime; // 0xf4(0x04)
	float RandomAccumlateTime; // 0xf8(0x04)
	struct FRandomStream RandomStream; // 0xfc(0x08)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<float> NormalizedPlayChances; // 0x108(0x10)
	float LastChildAssetTime; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct TslGame.BlendPosePlayInfo
// Size: 0x24 (Inherited: 0x00)
struct FBlendPosePlayInfo {
	float PlayChance; // 0x00(0x04)
	struct FInt32Range LoopingCounter; // 0x04(0x10)
	struct FFloatRange RandomPlayTime; // 0x14(0x10)
};

// ScriptStruct TslGame.TslAnimNode_BlendPerBone
// Size: 0x188 (Inherited: 0x128)
struct FTslAnimNode_BlendPerBone : FTslAnimNode_BlendPerBoneBase {
	struct TArray<struct FBlendBoneSettings> OverrideBones; // 0x128(0x10)
	struct FPoseLink BasePose; // 0x138(0x18)
	struct FPoseLink BlendPose; // 0x150(0x18)
	struct FBoneReference BlendBone; // 0x168(0x18)
	bool bMeshSpaceRotationBlend; // 0x180(0x01)
	bool bKeepBlendBonePosition; // 0x181(0x01)
	enum class *a20ad39f46 CurveBlendOption; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
};

// ScriptStruct TslGame.TslAnimNode_BlendSequencesByBool
// Size: 0xb0 (Inherited: 0x58)
struct FTslAnimNode_BlendSequencesByBool : FAnimNode_AssetPlayerBase {
	bool ActiveValue; // 0x58(0x01)
	enum class EAlphaBlendOption BlendType; // 0x59(0x01)
	bool bLooping; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	enum class EBlendSequenceByBoolStartType StartType; // 0x5c(0x04)
	struct TArray<struct FTslBlendSequencesByBoolAnimationData> SequencesData; // 0x60(0x10)
	struct UAnimSequence* TrueSequence; // 0x70(0x08)
	struct UAnimSequence* FalseSequence; // 0x78(0x08)
	struct UAnimSequence* LastActiveSequence; // 0x80(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)
	float TrueBlendTime; // 0xa0(0x04)
	float FalseBlendTime; // 0xa4(0x04)
	float TruePlayRate; // 0xa8(0x04)
	float FalsePlayRate; // 0xac(0x04)
};

// ScriptStruct TslGame.TslBlendSequencesByBoolAnimationData
// Size: 0x30 (Inherited: 0x00)
struct FTslBlendSequencesByBoolAnimationData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct TslGame.TslAnimNode_BonesLookAtEachOther
// Size: 0x118 (Inherited: 0xf8)
struct FTslAnimNode_BonesLookAtEachOther : FAnimNode_SkeletalControlBase {
	struct TArray<struct FTslBonesLookAtEachOtherSettings> Bones; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)
};

// ScriptStruct TslGame.TslBonesLookAtEachOtherSettings
// Size: 0x58 (Inherited: 0x00)
struct FTslBonesLookAtEachOtherSettings {
	struct FBoneReference Bone1; // 0x00(0x18)
	struct FBoneReference Bone2; // 0x18(0x18)
	struct FAxis LookAt_Axis; // 0x30(0x10)
	struct FAxis LookUp_Axis; // 0x40(0x10)
	bool bUseLookUpAxis; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.TslAnimNode_BranchByBool
// Size: 0x68 (Inherited: 0x30)
struct FTslAnimNode_BranchByBool : FAnimNode_Base {
	bool ActiveValue; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FPoseLink TruePose; // 0x38(0x18)
	struct FPoseLink FalsePose; // 0x50(0x18)
};

// ScriptStruct TslGame.TslAnimNode_CCDIK
// Size: 0x1c0 (Inherited: 0xf8)
struct FTslAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct FVector EffectorLocation; // 0xf8(0x0c)
	enum class *8056b80e80 EffectorLocationSpace; // 0x104(0x01)
	char pad_105[0xb]; // 0x105(0x0b)
	struct FBoneSocketTarget EffectorTarget; // 0x110(0x60)
	struct FBoneReference TipBone; // 0x170(0x18)
	struct FBoneReference RootBone; // 0x188(0x18)
	float Precision; // 0x1a0(0x04)
	int32 MaxIterations; // 0x1a4(0x04)
	bool bStartFromTail; // 0x1a8(0x01)
	bool bEnableRotationLimit; // 0x1a9(0x01)
	char pad_1AA[0x6]; // 0x1aa(0x06)
	struct TArray<struct FCCDIKJointSettings> RotationLimitPerJoints; // 0x1b0(0x10)
};

// ScriptStruct TslGame.CCDIKJointSettings
// Size: 0x1c (Inherited: 0x00)
struct FCCDIKJointSettings {
	float MaxConeAngle; // 0x00(0x04)
	float MaxAngleX; // 0x04(0x04)
	float MinAngleX; // 0x08(0x04)
	float MaxAngleY; // 0x0c(0x04)
	float MinAngleY; // 0x10(0x04)
	float MaxAngleZ; // 0x14(0x04)
	float MinAngleZ; // 0x18(0x04)
};

// ScriptStruct TslGame.TslAnimNode_CopyBones
// Size: 0x118 (Inherited: 0xf8)
struct FTslAnimNode_CopyBones : FAnimNode_SkeletalControlBase {
	struct TArray<struct FTslCopyBoneSettings> Bones; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)
};

// ScriptStruct TslGame.TslCopyBoneSettings
// Size: 0x38 (Inherited: 0x00)
struct FTslCopyBoneSettings {
	struct FBoneReference SourceBone; // 0x00(0x18)
	struct FBoneReference TargetBone; // 0x18(0x18)
	bool bCopyTranslation; // 0x30(0x01)
	bool bCopyRotation; // 0x31(0x01)
	bool bCopyScale; // 0x32(0x01)
	enum class *8056b80e80 ControlSpace; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.TslAnimNode_CustomAnimSequence
// Size: 0x90 (Inherited: 0x70)
struct FTslAnimNode_CustomAnimSequence : FAnimNode_SequencePlayer {
	struct U*2a3ca9414e* AnimDataAsset; // 0x70(0x08)
	struct FName AnimName; // 0x78(0x08)
	struct FName AltAnimName; // 0x80(0x08)
	int32 AnimationIndex; // 0x88(0x04)
	enum class ECustomAnimDataType CustomAnimDataType; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// ScriptStruct TslGame.TslAnimNode_FabrikElbow
// Size: 0x1b0 (Inherited: 0xf8)
struct FTslAnimNode_FabrikElbow : FAnimNode_SkeletalControlBase {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform EffectorTransform; // 0x100(0x30)
	enum class *8056b80e80 EffectorTransformSpace; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FBoneReference EffectorTransformBone; // 0x138(0x18)
	enum class *f8da038c2b EffectorRotationSource; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FBoneReference TipBone; // 0x158(0x18)
	struct FBoneReference RootBone; // 0x170(0x18)
	struct FBoneReference ElbowBone; // 0x188(0x18)
	float ElbowInterpCoef; // 0x1a0(0x04)
	float Precision; // 0x1a4(0x04)
	int32 MaxIterations; // 0x1a8(0x04)
	bool bEnableDebugDraw; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
};

// ScriptStruct TslGame.TslAnimNode_Falling
// Size: 0xa0 (Inherited: 0x58)
struct FTslAnimNode_Falling : FAnimNode_AssetPlayerBase {
	struct U*adf90eecbd* AnimDBMap; // 0x58(0x08)
	struct U*adf90eecbd* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslFallingNodeAnimationData> BlendSpacesData; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	float X; // 0x90(0x04)
	float BlendTime; // 0x94(0x04)
	char pad_98[0x4]; // 0x98(0x04)
	enum class EWeaponClass WeaponClass; // 0x9c(0x01)
	enum class EAlphaBlendOption BlendType; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
};

// ScriptStruct TslGame.TslFallingNodeAnimationData
// Size: 0xd0 (Inherited: 0x00)
struct FTslFallingNodeAnimationData {
	struct UBlendSpace1D* BlendSpace; // 0x00(0x08)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x08(0x10)
	char pad_18[0xb8]; // 0x18(0xb8)
};

// ScriptStruct TslGame.TslAnimNode_Healing
// Size: 0x80 (Inherited: 0x30)
struct FTslAnimNode_Healing : FAnimNode_Base {
	struct U*adf90eecbd* AnimDBMap; // 0x30(0x08)
	struct U*adf90eecbd* PrevAnimDBMap; // 0x38(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x40(0x08)
	struct TArray<struct FTslHealingSequenceData> SequencesData; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)
	float PlayRate; // 0x70(0x04)
	float BlendTime; // 0x74(0x04)
	enum class EAlphaBlendOption BlendType; // 0x78(0x01)
	enum class ECastAnim CurrentItem; // 0x79(0x01)
	bool IsParentControl; // 0x7a(0x01)
	enum class EAnimStance Stance; // 0x7b(0x01)
	bool IsFPP; // 0x7c(0x01)
	bool Looping; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// ScriptStruct TslGame.TslHealingSequenceData
// Size: 0x28 (Inherited: 0x00)
struct FTslHealingSequenceData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct TslGame.TslAnimNode_Idles
// Size: 0xa8 (Inherited: 0x58)
struct FTslAnimNode_Idles : FAnimNode_AssetPlayerBase {
	struct U*adf90eecbd* AnimDBMap; // 0x58(0x08)
	struct U*adf90eecbd* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslIdlesNodeAnimationData> SequencesData; // 0x70(0x10)
	char pad_80[0x18]; // 0x80(0x18)
	float PlayRate; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	enum class EAnimStance Stance; // 0xa0(0x01)
	enum class EWeaponClass WeaponClass; // 0xa1(0x01)
	bool Relaxed; // 0xa2(0x01)
	enum class EAlphaBlendOption BlendType; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.TslIdlesNodeAnimationData
// Size: 0x38 (Inherited: 0x00)
struct FTslIdlesNodeAnimationData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct TslGame.TslAnimNode_JumpStart
// Size: 0xb8 (Inherited: 0x58)
struct FTslAnimNode_JumpStart : FAnimNode_AssetPlayerBase {
	struct U*adf90eecbd* AnimDBMap; // 0x58(0x08)
	struct U*adf90eecbd* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslJumpStartNodeAnimationData> SequencesData; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	struct FVector Velocity; // 0x90(0x0c)
	float Yaw; // 0x9c(0x04)
	float JumpHeight; // 0xa0(0x04)
	float BlendTime; // 0xa4(0x04)
	float BackwardAngleThreshold; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	enum class EWeaponClass WeaponClass; // 0xb0(0x01)
	bool bRelaxed; // 0xb1(0x01)
	bool bIsLocalPlayer; // 0xb2(0x01)
	enum class EAlphaBlendOption BlendType; // 0xb3(0x01)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.TslJumpStartNodeAnimationData
// Size: 0x40 (Inherited: 0x00)
struct FTslJumpStartNodeAnimationData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct TslGame.TslAnimNode_LobbyAnimSequence
// Size: 0x100 (Inherited: 0x70)
struct FTslAnimNode_LobbyAnimSequence : FAnimNode_SequencePlayer {
	struct FLobbyCharacterAnimationDataRow CurrentAnimData; // 0x70(0x80)
	struct UAnimSequenceBase* LobbySequence; // 0xf0(0x08)
	int32 LobbyCharacterPosition; // 0xf8(0x04)
	enum class ELobbyCharacterReadyType ReadyType; // 0xfc(0x01)
	enum class EWeaponClass LastLobbyAnimationClass; // 0xfd(0x01)
	bool bPlayingDefaultAnim; // 0xfe(0x01)
	bool bPlayNextAnim; // 0xff(0x01)
};

// ScriptStruct TslGame.LobbyCharacterAnimationDataRow
// Size: 0x80 (Inherited: 0x08)
struct FLobbyCharacterAnimationDataRow : FTableRowBase {
	enum class ELobbyCharacterPosition Poisition; // 0x08(0x01)
	enum class ELobbyCharacterReadyType State; // 0x09(0x01)
	bool bDefaultAnimation; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float CycleTimes; // 0x0c(0x04)
	struct UAnimSequenceBase* UnArmed; // 0x10(0x08)
	struct UAnimSequenceBase* Pistol; // 0x18(0x08)
	struct UAnimSequenceBase* SMG; // 0x20(0x08)
	struct UAnimSequenceBase* Rifle; // 0x28(0x08)
	struct UAnimSequenceBase* Carbine; // 0x30(0x08)
	struct UAnimSequenceBase* Shotgun; // 0x38(0x08)
	struct UAnimSequenceBase* Sniper; // 0x40(0x08)
	struct UAnimSequenceBase* DMR; // 0x48(0x08)
	struct UAnimSequenceBase* LMG; // 0x50(0x08)
	struct UAnimSequenceBase* Melee; // 0x58(0x08)
	struct UAnimSequenceBase* Throwable; // 0x60(0x08)
	struct UAnimSequenceBase* Shield; // 0x68(0x08)
	struct UAnimSequenceBase* crossbow; // 0x70(0x08)
	struct UAnimSequenceBase* Launcher; // 0x78(0x08)
};

// ScriptStruct TslGame.TslAnimNode_PlayIdleSequence
// Size: 0xd0 (Inherited: 0x58)
struct FTslAnimNode_PlayIdleSequence : FAnimNode_AssetPlayerBase {
	struct U*81da793019* ParentInstance; // 0x58(0x08)
	struct U*a645d9893a* AnimDB; // 0x60(0x08)
	float BlendTime; // 0x68(0x04)
	float PlayRate; // 0x6c(0x04)
	float IdleTriggerTimeMin; // 0x70(0x04)
	float IdleTriggerTimeVariation; // 0x74(0x04)
	bool bIsFPP; // 0x78(0x01)
	bool bIsCold; // 0x79(0x01)
	enum class EAnimStance Stance; // 0x7a(0x01)
	char pad_7B[0x5]; // 0x7b(0x05)
	struct FSequenceData ActiveSequence; // 0x80(0x10)
	struct FSequenceData PreviousSequence; // 0x90(0x10)
	char pad_A0[0x30]; // 0xa0(0x30)
};

// ScriptStruct TslGame.SequenceData
// Size: 0x10 (Inherited: 0x00)
struct FSequenceData {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float AccumulatedTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.TslAnimNode_RotateBones
// Size: 0xd0 (Inherited: 0x30)
struct FTslAnimNode_RotateBones : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct TArray<struct FName> Bone; // 0x48(0x10)
	struct TArray<enum class ERotateBoneSpace> Space; // 0x58(0x10)
	struct TArray<enum class EAxis> Axis; // 0x68(0x10)
	struct TArray<float> Angle; // 0x78(0x10)
	struct TArray<struct FRotator> Rotator; // 0x88(0x10)
	struct TArray<float> Alpha; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)
	enum class ERotateBoneInputType InputType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct TslGame.TslAnimNode_RotateRootBone
// Size: 0x68 (Inherited: 0x30)
struct FTslAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
	float Yaw; // 0x58(0x04)
	float Pitch; // 0x5c(0x04)
	bool bKeepChildTransforms; // 0x60(0x01)
	bool bInvert; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct TslGame.TslAnimNode_SequenceEvaluatorWithBlending
// Size: 0xa0 (Inherited: 0x58)
struct FTslAnimNode_SequenceEvaluatorWithBlending : FAnimNode_AssetPlayerBase {
	struct UAnimSequence* Sequence; // 0x58(0x08)
	struct UAnimSequence* PrevSequence; // 0x60(0x08)
	struct TArray<struct FTslSequenceBlending> SequencesData; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	float ExplicitTime; // 0x88(0x04)
	float BlendTime; // 0x8c(0x04)
	enum class EAlphaBlendOption BlendType; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UCurveFloat* CustomBlendCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.TslSequenceBlending
// Size: 0x30 (Inherited: 0x00)
struct FTslSequenceBlending {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct TslGame.TslAnimNode_Slot
// Size: 0x78 (Inherited: 0x70)
struct FTslAnimNode_Slot : FAnimNode_Slot {
	float Alpha; // 0x70(0x04)
	enum class ECustomAnimSlotType SlotType; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct TslGame.TslAnimNode_SlotByEnum
// Size: 0x1a8 (Inherited: 0x30)
struct FTslAnimNode_SlotByEnum : FAnimNode_Base {
	struct FPoseLink Source; // 0x30(0x18)
	bool ActiveEnumValue; // 0x48(0x01)
	enum class EAlphaBlendOption BlendType; // 0x49(0x01)
	char pad_4A[0x26]; // 0x4a(0x26)
	struct TArray<struct FName> Slot; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	struct TArray<float> BlendTime; // 0x90(0x10)
	struct TArray<int32> EnumToSlotIndex; // 0xa0(0x10)
	struct UCurveFloat* CustomBlendCurve; // 0xb0(0x08)
	char pad_B8[0x4]; // 0xb8(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0xbc(0x01)
	bool bAlphaBoolEnabled; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	float Alpha; // 0xc0(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0xd0(0x50)
	struct FName AlphaCurveName; // 0x120(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x128(0x30)
	char pad_158[0x50]; // 0x158(0x50)
};

// ScriptStruct TslGame.TslAnimNode_SlotByWeapon
// Size: 0x118 (Inherited: 0x70)
struct FTslAnimNode_SlotByWeapon : FAnimNode_Slot {
	float Alpha; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TMap<enum class EAnimWeaponType, struct FName> SlotNames; // 0x78(0x50)
	enum class EAnimWeaponType InWeapon; // 0xc8(0x01)
	char pad_C9[0x4f]; // 0xc9(0x4f)
};

// ScriptStruct TslGame.*60f89ce98a
// Size: 0x18 (Inherited: 0x08)
struct F*60f89ce98a : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	struct UClass* *d1d977943a; // 0x10(0x08)
};

// ScriptStruct TslGame.*1306705ad1
// Size: 0x18 (Inherited: 0x08)
struct F*1306705ad1 : FTableRowBase {
	struct TArray<struct FName> ItemIDs; // 0x08(0x10)
};

// ScriptStruct TslGame.*701ab3c48a
// Size: 0x28 (Inherited: 0x08)
struct F*701ab3c48a : FTableRowBase {
	enum class ECoinTakeType CoinTakeType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 BannedRoundAttributes; // 0x0c(0x04)
	int32 TakeValue; // 0x10(0x04)
	bool bOverwrite; // 0x14(0x01)
	bool bUseCustomOverride; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct F*d5ab90bf8d> CustomOverrideValues; // 0x18(0x10)
};

// ScriptStruct TslGame.*d5ab90bf8d
// Size: 0x08 (Inherited: 0x00)
struct F*d5ab90bf8d {
	int32 OverrideIndex; // 0x00(0x04)
	int32 OverrideValue; // 0x04(0x04)
};

// ScriptStruct TslGame.*5ad81470f2
// Size: 0x50 (Inherited: 0x08)
struct F*5ad81470f2 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	bool bEssential; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 CarryLimit; // 0x14(0x04)
	enum class EBombItemCategory Category; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 SortID; // 0x1c(0x04)
	bool Purchasable; // 0x20(0x01)
	bool bGiveItemAfterRestart; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32 Price; // 0x24(0x04)
	struct TArray<struct FName> WeaponAttachments; // 0x28(0x10)
	struct F*86011b4932 WeaponAmmoData; // 0x38(0x10)
	enum class EBombScopeInfo ScopeInfo; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.*86011b4932
// Size: 0x10 (Inherited: 0x10)
struct F*86011b4932 : F*8cc52662e4 {
};

// ScriptStruct TslGame.*8cc52662e4
// Size: 0x10 (Inherited: 0x00)
struct F*8cc52662e4 {
	struct FName ItemID; // 0x00(0x08)
	int32 Stack; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6841bdbb7b
// Size: 0x20 (Inherited: 0x10)
struct F*6841bdbb7b : F*8cc52662e4 {
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*7899425916
// Size: 0x520 (Inherited: 0x520)
struct F*7899425916 : F*082f93e0ad {
};

// ScriptStruct TslGame.*ac6d1178ff
// Size: 0x178 (Inherited: 0x08)
struct F*ac6d1178ff : FTableRowBase {
	enum class *a4c5e6b1e8 CharacterInteractType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxInteractableDistance; // 0x0c(0x04)
	struct FText InteractionVerb; // 0x10(0x18)
	struct FText InteractiveObjectName; // 0x28(0x18)
	bool bUseTraceCheck; // 0x40(0x01)
	bool bTraceComplexForInteraction; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct F*ee5e6ace1b CastConfig; // 0x48(0x130)
};

// ScriptStruct TslGame.*ee5e6ace1b
// Size: 0x130 (Inherited: 0x00)
struct F*ee5e6ace1b {
	struct FText CastName; // 0x00(0x18)
	float CastTime; // 0x18(0x04)
	enum class ECastPriority CastPriority; // 0x1c(0x01)
	enum class ECastLevel CastLevel; // 0x1d(0x01)
	bool bIgnoreCastDistanceLimitation; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float CastMaxDistance; // 0x20(0x04)
	float CastMaxDistanceMultiplierOnServer; // 0x24(0x04)
	float CasterAndCastObjectMaxDistance; // 0x28(0x04)
	float CasterAndCastObjectMaxDistanceMultiplierOnServer; // 0x2c(0x04)
	bool bCanCastInsideMovingVehicle; // 0x30(0x01)
	bool bKeepCastWhenVehicleHandling; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float MaxLinAcceleration; // 0x34(0x04)
	float CastMaxSpeed; // 0x38(0x04)
	float CastWalkSpeedModifier; // 0x3c(0x04)
	bool bNeedUnarm; // 0x40(0x01)
	bool bRecastsOnFinish; // 0x41(0x01)
	bool bLimitViewRotation; // 0x42(0x01)
	bool bForceStance; // 0x43(0x01)
	bool bSkipRestoreCharacterStance; // 0x44(0x01)
	bool bLockRotation; // 0x45(0x01)
	bool bCanCancelCasting; // 0x46(0x01)
	bool bCheckCastableConditionInProgress; // 0x47(0x01)
	bool bCancleWhenSprint; // 0x48(0x01)
	enum class ECastAnim CastAnim; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float CastBlendingTime; // 0x4c(0x04)
	float CancelBlockDuration; // 0x50(0x04)
	float CastAnimPlayRate; // 0x54(0x04)
	bool IsPermanentCasting; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct F*8121b8b50e CustomCastAnim; // 0x60(0xc0)
	enum class EStanceMode Stance; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FName *32ba4b535a; // 0x128(0x08)
};

// ScriptStruct TslGame.*8121b8b50e
// Size: 0xc0 (Inherited: 0x00)
struct F*8121b8b50e {
	struct F*9a06c472e4 StartAnim; // 0x00(0x40)
	struct F*9a06c472e4 LoopAnim; // 0x40(0x40)
	struct F*9a06c472e4 EndAnim; // 0x80(0x40)
};

// ScriptStruct TslGame.*9a06c472e4
// Size: 0x40 (Inherited: 0x00)
struct F*9a06c472e4 {
	struct F*0cc4c653a2 AnimSequence; // 0x00(0x10)
	struct F*0cc4c653a2 AnimSequenceFPP; // 0x10(0x10)
	struct F*0cc4c653a2 AnimSequenceProne; // 0x20(0x10)
	struct F*0cc4c653a2 AnimSequenceProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*0cc4c653a2
// Size: 0x10 (Inherited: 0x00)
struct F*0cc4c653a2 {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*80d66c49b8
// Size: 0x480 (Inherited: 0x00)
struct F*80d66c49b8 {
	struct F*f772500dfc *f772500dfc; // 0x00(0x290)
	struct F*cd5f95885d *cd5f95885d; // 0x290(0x1b0)
	struct F*3c711692f5 *3c711692f5; // 0x440(0x38)
	char pad_478[0x8]; // 0x478(0x08)
};

// ScriptStruct TslGame.*3c711692f5
// Size: 0x38 (Inherited: 0x08)
struct F*3c711692f5 : F*fb15518f3e {
	int32 *33fabf2312; // 0x08(0x04)
	int32 *1a06ae5061; // 0x0c(0x04)
	float Timestamp; // 0x10(0x04)
	struct FVector *28f603d3e1; // 0x14(0x0c)
	int64 *5bc308e58f; // 0x20(0x08)
	struct FString TextMarker; // 0x28(0x10)
};

// ScriptStruct TslGame.*fb15518f3e
// Size: 0x08 (Inherited: 0x00)
struct F*fb15518f3e {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*cd5f95885d
// Size: 0x1b0 (Inherited: 0x08)
struct F*cd5f95885d : F*fb15518f3e {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*59d7253689 *a2f0e94d1b; // 0x10(0xa0)
	struct F*59d7253689 *e3abca64bb; // 0xb0(0xa0)
	struct FString *dbf5b28b6a; // 0x150(0x10)
	struct FString *1548695e25; // 0x160(0x10)
	struct FString *9b4e2bec94; // 0x170(0x10)
	struct FString *64e0450c3b; // 0x180(0x10)
	char pad_190[0x20]; // 0x190(0x20)
};

// ScriptStruct TslGame.*59d7253689
// Size: 0xa0 (Inherited: 0x00)
struct F*59d7253689 {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Average; // 0x08(0x04)
	char pad_C[0x94]; // 0x0c(0x94)
};

// ScriptStruct TslGame.*f772500dfc
// Size: 0x290 (Inherited: 0x08)
struct F*f772500dfc : F*fb15518f3e {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*59d7253689 Frame; // 0x10(0xa0)
	struct F*59d7253689 *8989347a0b; // 0xb0(0xa0)
	struct F*59d7253689 *53e4224237; // 0x150(0xa0)
	struct F*59d7253689 *215907856e; // 0x1f0(0xa0)
};

// ScriptStruct TslGame.*ae7cfdc3ba
// Size: 0x40 (Inherited: 0x00)
struct F*ae7cfdc3ba {
	struct FString DeviceName; // 0x00(0x10)
	struct FString ClientVersion; // 0x10(0x10)
	struct FString MapName; // 0x20(0x10)
	struct FString ModeName; // 0x30(0x10)
};

// ScriptStruct TslGame.*dcc9d6b86c
// Size: 0x28 (Inherited: 0x08)
struct F*dcc9d6b86c : FTableRowBase {
	float phase; // 0x08(0x04)
	float killer_x; // 0x0c(0x04)
	float killer_y; // 0x10(0x04)
	float killer_z; // 0x14(0x04)
	float victim_x; // 0x18(0x04)
	float victim_y; // 0x1c(0x04)
	float victim_z; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.HemostasisTableRow
// Size: 0x18 (Inherited: 0x08)
struct FHemostasisTableRow : FTableRowBase {
	int32 Stack; // 0x08(0x04)
	bool bCanHemostasis; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float HemostasisPercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*5f0b9a1ca8
// Size: 0x3c8 (Inherited: 0x3b8)
struct F*5f0b9a1ca8 : FItemTableRowCastable {
	struct TArray<struct F*0e5d8f7dd9> SupplyItems; // 0x3b8(0x10)
};

// ScriptStruct TslGame.ItemTableRowCastable
// Size: 0x3b8 (Inherited: 0x268)
struct FItemTableRowCastable : F*7700dab07d {
	bool *fc18185089; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct F*ee5e6ace1b *ee5e6ace1b; // 0x270(0x130)
	enum class ECastableItemType *6e188b0be8; // 0x3a0(0x01)
	bool *607648242f; // 0x3a1(0x01)
	char pad_3A2[0x6]; // 0x3a2(0x06)
	struct TArray<struct UClass*> *accea9dabe; // 0x3a8(0x10)
};

// ScriptStruct TslGame.*7700dab07d
// Size: 0x268 (Inherited: 0x08)
struct F*7700dab07d : FTableRowBase {
	char bStackable : 1; // 0x08(0x01)
	char bUsable : 1; // 0x08(0x01)
	char bIsConsumable : 1; // 0x08(0x01)
	char bSetStackMaterialParameter : 1; // 0x08(0x01)
	char bDisableSpawnInGame : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 StackCount; // 0x0c(0x04)
	int32 DefaultStackCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText ItemName; // 0x18(0x18)
	struct FText ItemCategory; // 0x30(0x18)
	struct FText ItemDetailedName; // 0x48(0x18)
	struct FText ItemDescription; // 0x60(0x18)
	float ItemMaxInteractableDistance; // 0x78(0x04)
	int32 StackCountMax; // 0x7c(0x04)
	float SpacePerItem; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct UStaticMesh* DroppedMesh; // 0x88(0x20)
	float DroppedMeshScale; // 0xa8(0x04)
	bool bDropAsProjectile; // 0xac(0x01)
	bool bThermalScopeInteractive; // 0xad(0x01)
	enum class EThermalItemType ThermalItemType; // 0xae(0x01)
	char pad_AF[0x1]; // 0xaf(0x01)
	struct U*901c357d94* ProjectileConfig; // 0xb0(0x20)
	struct UTexture* Icon; // 0xd0(0x20)
	struct UTexture* ToolTipIcon; // 0xf0(0x20)
	float IconSizeRatio; // 0x110(0x04)
	float ToolTipIconSizeRatio; // 0x114(0x04)
	struct UAkAudioEvent* DropSoundAk; // 0x118(0x20)
	struct FName DropAnimation; // 0x138(0x08)
	struct UAkAudioEvent* PickUpSoundAk; // 0x140(0x20)
	enum class EPickupAnimType PickUpAnimationOverride; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UAkAudioEvent* InventoryPutSoundAk; // 0x168(0x20)
	int32 SortPriority; // 0x188(0x04)
	enum class EItemCategory Category; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FName SubCategory; // 0x190(0x08)
	bool bIsToy; // 0x198(0x01)
	bool bNeedToCheckPopup; // 0x199(0x01)
	bool bIsLobbyItem; // 0x19a(0x01)
	char pad_19B[0x1]; // 0x19b(0x01)
	int32 LobbyItemID; // 0x19c(0x04)
	struct F*e46b9d3dc8 LobbyItemDesc; // 0x1a0(0x60)
	bool bIsLobbyWeapon; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	int32 LobbyWeaponID; // 0x204(0x04)
	struct UClass* LobbyWeaponInstance; // 0x208(0x20)
	bool *f491aa0129; // 0x228(0x01)
	bool *08366c13d7; // 0x229(0x01)
	bool *351d2fe920; // 0x22a(0x01)
	char pad_22B[0x5]; // 0x22b(0x05)
	struct FString Note; // 0x230(0x10)
	int32 AIFullValue; // 0x240(0x04)
	int32 ItemSubType; // 0x244(0x04)
	struct FName ItemID; // 0x248(0x08)
	struct UClass* ItemClass; // 0x250(0x08)
	struct UClass* *c568c632e9; // 0x258(0x08)
	struct U*42ed042876* *2246280445; // 0x260(0x08)
};

// ScriptStruct TslGame.*e46b9d3dc8
// Size: 0x60 (Inherited: 0x00)
struct F*e46b9d3dc8 {
	char *fd90b91fc0 : 1; // 0x00(0x01)
	char bPointSellable : 1; // 0x00(0x01)
	char *8f4074e98b : 1; // 0x00(0x01)
	char bPointRefundable : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *42b25e4720; // 0x08(0x10)
	enum class ELobbyItemTier Tier; // 0x18(0x01)
	enum class ELobbyItemCategory Category; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FText Description; // 0x20(0x18)
	bool *e9ccf92ce9; // 0x38(0x01)
	bool *cb7dff0fa2; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<enum class ELobbyItemPlatform> Platforms; // 0x40(0x10)
	float *9b15c31f57; // 0x50(0x04)
	enum class ELobbyItemPointSellingType *474059df5b; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *a41e382934; // 0x58(0x04)
	int32 *8128aaa76c; // 0x5c(0x04)
};

// ScriptStruct TslGame.*0e5d8f7dd9
// Size: 0x10 (Inherited: 0x00)
struct F*0e5d8f7dd9 {
	struct FName SupplyItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f5bf96872b
// Size: 0x280 (Inherited: 0x268)
struct F*f5bf96872b : F*7700dab07d {
	enum class ECustomPartType CustomPart; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<struct FName> PartTags; // 0x270(0x10)
};

// ScriptStruct TslGame.*900c092874
// Size: 0x280 (Inherited: 0x280)
struct F*900c092874 : F*2d9388c3be {
};

// ScriptStruct TslGame.*2d9388c3be
// Size: 0x280 (Inherited: 0x268)
struct F*2d9388c3be : F*7700dab07d {
	bool bAutoAction; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct F*5226c02a35 SkinParam; // 0x270(0x10)
};

// ScriptStruct TslGame.*5226c02a35
// Size: 0x10 (Inherited: 0x00)
struct F*5226c02a35 {
	enum class ESkinCategory SkinCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName SkinName; // 0x08(0x08)
};

// ScriptStruct TslGame.ItemTableRowVehiclePart
// Size: 0x310 (Inherited: 0x280)
struct FItemTableRowVehiclePart : F*f5bf96872b {
	enum class EVehiclePartType VehiclePart; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct UMaterialInterface*> Materials; // 0x288(0x10)
	struct TMap<int32, struct UMaterialInterface*> OverrideDestroyedMaterial; // 0x298(0x50)
	struct USkeletalMesh* SkeletalMesh; // 0x2e8(0x20)
	int32 WheelSize; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
};

// ScriptStruct TslGame.*26f265dbc6
// Size: 0x38 (Inherited: 0x00)
struct F*26f265dbc6 {
	float *a68c0fc3a9; // 0x00(0x04)
	float *ad5a070f01; // 0x04(0x04)
	int32 *dcb293c7c2; // 0x08(0x04)
	float *d4d1ea97df; // 0x0c(0x04)
	float *c74f8007d8; // 0x10(0x04)
	float *4c04abd9b5; // 0x14(0x04)
	int32 *5c2f50adb9; // 0x18(0x04)
	float *beaf2c881b; // 0x1c(0x04)
	struct TArray<struct F*7ed39951b7> *b8bb2758ef; // 0x20(0x10)
	bool *565b603494; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *5e705bdf4b; // 0x34(0x04)
};

// ScriptStruct TslGame.*7ed39951b7
// Size: 0x30 (Inherited: 0x00)
struct F*7ed39951b7 {
	struct FString MapName; // 0x00(0x10)
	struct FString LocationName; // 0x10(0x10)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*f52e83d649
// Size: 0x10 (Inherited: 0x00)
struct F*f52e83d649 {
	uint32 *81d4f746f5; // 0x00(0x04)
	float *d4d1ea97df; // 0x04(0x04)
	float *7f49a991da; // 0x08(0x04)
	bool *81a9cff352; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*ca5138991a
// Size: 0x08 (Inherited: 0x00)
struct F*ca5138991a {
	float *a68c0fc3a9; // 0x00(0x04)
	float *69a9988eae; // 0x04(0x04)
};

// ScriptStruct TslGame.*30345b309e
// Size: 0x38 (Inherited: 0x00)
struct F*30345b309e {
	float *a68c0fc3a9; // 0x00(0x04)
	float *ad5a070f01; // 0x04(0x04)
	int32 *dcb293c7c2; // 0x08(0x04)
	float *d4d1ea97df; // 0x0c(0x04)
	float *c74f8007d8; // 0x10(0x04)
	float *4c04abd9b5; // 0x14(0x04)
	int32 *5c2f50adb9; // 0x18(0x04)
	float *beaf2c881b; // 0x1c(0x04)
	struct TArray<struct F*41cffee788> *b8bb2758ef; // 0x20(0x10)
	bool *565b603494; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *5e705bdf4b; // 0x34(0x04)
};

// ScriptStruct TslGame.*41cffee788
// Size: 0x30 (Inherited: 0x00)
struct F*41cffee788 {
	struct FString MapName; // 0x00(0x10)
	struct FString LocationName; // 0x10(0x10)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*6779da4ec5
// Size: 0x18 (Inherited: 0x08)
struct F*6779da4ec5 : FTableRowBase {
	struct UStaticMesh* OldMesh; // 0x08(0x08)
	struct UStaticMesh* NewMesh; // 0x10(0x08)
};

// ScriptStruct TslGame.*6c2900677b
// Size: 0x10 (Inherited: 0x08)
struct F*6c2900677b : FTableRowBase {
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct TslGame.*f68071f0c6
// Size: 0x30 (Inherited: 0x08)
struct F*f68071f0c6 : FTableRowBase {
	enum class *8d98cbd81d DetailMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct UStaticMesh*> MeshesToOverride; // 0x10(0x10)
	struct TArray<struct UMaterialInterface*> DecalMaterialsToOverride; // 0x20(0x10)
};

// ScriptStruct TslGame.*1c62949ea7
// Size: 0x10 (Inherited: 0x08)
struct F*1c62949ea7 : FTableRowBase {
	struct UClass* BPClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*7b30cb014c
// Size: 0x70 (Inherited: 0x08)
struct F*7b30cb014c : FTableRowBase {
	struct FStringAssetReference *749e69d29c; // 0x08(0x10)
	struct FStringAssetReference *fd8669b29f; // 0x18(0x10)
	struct FStringAssetReference *8fac0063f5; // 0x28(0x10)
	struct FStringAssetReference *d138a97898; // 0x38(0x10)
	struct FStringAssetReference *8c55f84b1a; // 0x48(0x10)
	struct FStringAssetReference *6eb40aa249; // 0x58(0x10)
	float Ratio; // 0x68(0x04)
	bool *f10d447b0f; // 0x6c(0x01)
	bool *a656f33999; // 0x6d(0x01)
	bool *544142e33c; // 0x6e(0x01)
	bool *aedd510a3d; // 0x6f(0x01)
};

// ScriptStruct TslGame.*06b1316cf5
// Size: 0x18 (Inherited: 0x08)
struct F*06b1316cf5 : FTableRowBase {
	struct FVector BeachPointLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*197b00cf34
// Size: 0x18 (Inherited: 0x08)
struct F*197b00cf34 : FTableRowBase {
	int32 LocationX; // 0x08(0x04)
	int32 LocationY; // 0x0c(0x04)
	int32 LocationZ; // 0x10(0x04)
	int32 SafeScore; // 0x14(0x04)
};

// ScriptStruct TslGame.*bf79b755db
// Size: 0x60 (Inherited: 0x08)
struct F*bf79b755db : FTableRowBase {
	float NormalArea; // 0x08(0x04)
	char pad_C[0x54]; // 0x0c(0x54)
};

// ScriptStruct TslGame.*af5fb27ea0
// Size: 0xc8 (Inherited: 0x60)
struct F*af5fb27ea0 : F*bf79b755db {
	float Farm; // 0x60(0x04)
	float FerryPier; // 0x64(0x04)
	float Gatka; // 0x68(0x04)
	float Georgopol; // 0x6c(0x04)
	float Hospital; // 0x70(0x04)
	float Kameshki; // 0x74(0x04)
	float Lipovka; // 0x78(0x04)
	float Mansion; // 0x7c(0x04)
	float Mylta; // 0x80(0x04)
	float MyltaPower; // 0x84(0x04)
	float Novorepnoye; // 0x88(0x04)
	float Pochinki; // 0x8c(0x04)
	float Primorsk; // 0x90(0x04)
	float Prison; // 0x94(0x04)
	float Quarry; // 0x98(0x04)
	float Rozhok; // 0x9c(0x04)
	float Ruins; // 0xa0(0x04)
	float School; // 0xa4(0x04)
	float Severny; // 0xa8(0x04)
	float Shelter; // 0xac(0x04)
	float ShootingRange; // 0xb0(0x04)
	float SosnovkaMilitaryBase; // 0xb4(0x04)
	float Stalber; // 0xb8(0x04)
	float YasnayaPolyana; // 0xbc(0x04)
	float Zharki; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.*1a4034bba0
// Size: 0x70 (Inherited: 0x60)
struct F*1a4034bba0 : F*bf79b755db {
	float Level_A; // 0x60(0x04)
	float Level_B; // 0x64(0x04)
	float Level_C; // 0x68(0x04)
	float Level_D; // 0x6c(0x04)
};

// ScriptStruct TslGame.*0e7ac4ae67
// Size: 0xd8 (Inherited: 0x60)
struct F*0e7ac4ae67 : F*bf79b755db {
	float Alcantara; // 0x60(0x04)
	float CampoMilitar; // 0x64(0x04)
	float Chumacera; // 0x68(0x04)
	float Craterfields; // 0x6c(0x04)
	float CruzdelValle; // 0x70(0x04)
	float ElAzahar; // 0x74(0x04)
	float ElPozo; // 0x78(0x04)
	float Graveyard; // 0x7c(0x04)
	float HeciendadelPatron; // 0x80(0x04)
	float Junkyard; // 0x84(0x04)
	float LaBendita; // 0x88(0x04)
	float LaCobreria; // 0x8c(0x04)
	float Ladrillera; // 0x90(0x04)
	float Lmpala; // 0x94(0x04)
	float LosHigos; // 0x98(0x04)
	float LosLeones; // 0x9c(0x04)
	float MinasdelSur; // 0xa0(0x04)
	float MinasGenerales; // 0xa4(0x04)
	float MonteNuevo; // 0xa8(0x04)
	float Pecado; // 0xac(0x04)
	float Powergrid; // 0xb0(0x04)
	float Prison; // 0xb4(0x04)
	float PuertoParaiso; // 0xb8(0x04)
	float Ruins; // 0xbc(0x04)
	float SanMartin; // 0xc0(0x04)
	float TierraBronca; // 0xc4(0x04)
	float TorreAhumada; // 0xc8(0x04)
	float TrailerPark; // 0xcc(0x04)
	float ValledelMar; // 0xd0(0x04)
	float WaterTreatment; // 0xd4(0x04)
};

// ScriptStruct TslGame.*a79df8cd37
// Size: 0xa0 (Inherited: 0x60)
struct F*a79df8cd37 : F*bf79b755db {
	float castle; // 0x60(0x04)
	float CoalMine; // 0x64(0x04)
	float Cosmodrome; // 0x68(0x04)
	float DekaMesto; // 0x6c(0x04)
	float Dinoland; // 0x70(0x04)
	float Kranik; // 0x74(0x04)
	float Laveni; // 0x78(0x04)
	float Laznova; // 0x7c(0x04)
	float LumberYard; // 0x80(0x04)
	float Naros; // 0x84(0x04)
	float Observatory; // 0x88(0x04)
	float Pavilka; // 0x8c(0x04)
	float TrainStation; // 0x90(0x04)
	float Trika; // 0x94(0x04)
	float Villa; // 0x98(0x04)
	float Winery; // 0x9c(0x04)
};

// ScriptStruct TslGame.*11b334d117
// Size: 0x78 (Inherited: 0x60)
struct F*11b334d117 : F*bf79b755db {
	float CoalYards; // 0x60(0x04)
	float Docks; // 0x64(0x04)
	float IndustrialPark; // 0x68(0x04)
	float RailYard; // 0x6c(0x04)
	float Steelmill; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*8d3325af04
// Size: 0xb0 (Inherited: 0x60)
struct F*8d3325af04 : F*bf79b755db {
	float Arena; // 0x60(0x04)
	float Assembly; // 0x64(0x04)
	float Cabana_Town; // 0x68(0x04)
	float Coastal_Towns; // 0x6c(0x04)
	float Concert; // 0x70(0x04)
	float Dam_Town; // 0x74(0x04)
	float downtown; // 0x78(0x04)
	float Fulfillment_Center; // 0x7c(0x04)
	float Hill_Town; // 0x80(0x04)
	float Hydroelectric_Dam; // 0x84(0x04)
	float Little_City; // 0x88(0x04)
	float Lodge; // 0x8c(0x04)
	float Simple_Town; // 0x90(0x04)
	float Solar_Town; // 0x94(0x04)
	float Storage_Town; // 0x98(0x04)
	float Sunken_Town; // 0x9c(0x04)
	float swamp; // 0xa0(0x04)
	float Swamp_Town; // 0xa4(0x04)
	float Trailer_Town; // 0xa8(0x04)
	float Wind_Farms; // 0xac(0x04)
};

// ScriptStruct TslGame.*8f8ba40825
// Size: 0xb0 (Inherited: 0x60)
struct F*8f8ba40825 : F*bf79b755db {
	float AirField; // 0x60(0x04)
	float BanTai; // 0x64(0x04)
	float Bootcamp; // 0x68(0x04)
	float CampAlpha; // 0x6c(0x04)
	float CampBravo; // 0x70(0x04)
	float CampCharlie; // 0x74(0x04)
	float Cave; // 0x78(0x04)
	float Getaway; // 0x7c(0x04)
	float Hatinh; // 0x80(0x04)
	float Kampong; // 0x84(0x04)
	float Khao; // 0x88(0x04)
	float Lawaki; // 0x8c(0x04)
	float NaKham; // 0x90(0x04)
	float Painan; // 0x94(0x04)
	float ParadiseResort; // 0x98(0x04)
	float Quarry; // 0x9c(0x04)
	float Ruins; // 0xa0(0x04)
	float Sahmee; // 0xa4(0x04)
	float Tambang; // 0xa8(0x04)
	float Tatmok; // 0xac(0x04)
};

// ScriptStruct TslGame.*fd6614e6e2
// Size: 0x78 (Inherited: 0x60)
struct F*fd6614e6e2 : F*bf79b755db {
	float AlHabar; // 0x60(0x04)
	float AlHayik; // 0x64(0x04)
	float Bahrsahir; // 0x68(0x04)
	float Bashara; // 0x6c(0x04)
	float Hadiqanemo; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*3c3e503072
// Size: 0xa8 (Inherited: 0x60)
struct F*3c3e503072 : F*bf79b755db {
	float airport; // 0x60(0x04)
	float ArmyBase; // 0x64(0x04)
	float Buksansa; // 0x68(0x04)
	float FishingCamp; // 0x6c(0x04)
	float Godok; // 0x70(0x04)
	float Haemoosa; // 0x74(0x04)
	float Hapo; // 0x78(0x04)
	float Hosan; // 0x7c(0x04)
	float HosanPrison; // 0x80(0x04)
	float Kangneung; // 0x84(0x04)
	float Ohyang; // 0x88(0x04)
	float Palace; // 0x8c(0x04)
	float School; // 0x90(0x04)
	float ShipYard; // 0x94(0x04)
	float Songam; // 0x98(0x04)
	float Studio; // 0x9c(0x04)
	float Terminal; // 0xa0(0x04)
	float Wolsong; // 0xa4(0x04)
};

// ScriptStruct TslGame.*78c2886813
// Size: 0x20 (Inherited: 0x08)
struct F*78c2886813 : FTableRowBase {
	struct FText *9489ef3f8b; // 0x08(0x18)
};

// ScriptStruct TslGame.*733ab0a24f
// Size: 0x30 (Inherited: 0x00)
struct F*733ab0a24f {
	bool bUseMateriaSlotIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32> MaterialSlotIndex; // 0x08(0x10)
	bool bUseMaterialSlotName; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> MaterialSlotName; // 0x20(0x10)
};

// ScriptStruct TslGame.*566871314c
// Size: 0x48 (Inherited: 0x00)
struct F*566871314c {
	struct F*2872c9f825 *2872c9f825; // 0x00(0x40)
	struct UImage* *a839b35a23; // 0x40(0x08)
};

// ScriptStruct TslGame.*2872c9f825
// Size: 0x40 (Inherited: 0x00)
struct F*2872c9f825 {
	struct FGuid IconGUID; // 0x00(0x10)
	struct FVector WorldLocation; // 0x10(0x0c)
	struct FRotator WorldRotation; // 0x1c(0x0c)
	enum class EAuxilaryIconType IconType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FLinearColor IconColor; // 0x2c(0x10)
	bool bIsVisible; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGame.*b9ddbae00a
// Size: 0x60 (Inherited: 0x00)
struct F*b9ddbae00a {
	struct FString *2410e9dcfc; // 0x00(0x10)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct TslGame.*5ba4f28f68
// Size: 0x20 (Inherited: 0x00)
struct F*5ba4f28f68 {
	struct FString *46a0814e59; // 0x00(0x10)
	struct FString *a3b41c4e6d; // 0x10(0x10)
};

// ScriptStruct TslGame.*d32f3bb8f0
// Size: 0x28 (Inherited: 0x08)
struct F*d32f3bb8f0 : FTableRowBase {
	enum class EAuxilaryIconType IconType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* IconTexture; // 0x10(0x08)
	struct UCurveFloat* IconRatioCurve; // 0x18(0x08)
	float MinimapIconRatio; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*8cba90af1f
// Size: 0x28 (Inherited: 0x00)
struct F*8cba90af1f {
	char pad_0[0x18]; // 0x00(0x18)
	struct UCameraShake* *0f1e90f12e; // 0x18(0x08)
	struct UCameraShake* *ba9f8ce871; // 0x20(0x08)
};

// ScriptStruct TslGame.*485b30460a
// Size: 0x28 (Inherited: 0x00)
struct F*485b30460a {
	float *444b05ef7f; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *988808573e; // 0x08(0x08)
	bool bShowTrunkMesh; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct F*637d47bfc7> *4e2d279506; // 0x18(0x10)
};

// ScriptStruct TslGame.*637d47bfc7
// Size: 0x28 (Inherited: 0x00)
struct F*637d47bfc7 {
	struct UStaticMesh* TrunkMesh; // 0x00(0x20)
	float MinCapacityPercent; // 0x20(0x04)
	float MaxCapacityPercent; // 0x24(0x04)
};

// ScriptStruct TslGame.*e76986782c
// Size: 0x30 (Inherited: 0x00)
struct F*e76986782c {
	struct F*79dd943e33 Stand; // 0x00(0x10)
	struct F*79dd943e33 Crouch; // 0x10(0x10)
	struct F*79dd943e33 Prone; // 0x20(0x10)
};

// ScriptStruct TslGame.*79dd943e33
// Size: 0x10 (Inherited: 0x00)
struct F*79dd943e33 {
	float *763260d7ec; // 0x00(0x04)
	float *b8e3fb0e10; // 0x04(0x04)
	float *94f1255134; // 0x08(0x04)
	float *216142a400; // 0x0c(0x04)
};

// ScriptStruct TslGame.*5068e85671
// Size: 0x0c (Inherited: 0x00)
struct F*5068e85671 {
	struct FVector Acceleration; // 0x00(0x0c)
};

// ScriptStruct TslGame.*e607880f9c
// Size: 0x20 (Inherited: 0x00)
struct F*e607880f9c {
	struct UBlendSpace1D* BlendSpaceFPP; // 0x00(0x08)
	struct UBlendSpace1D* BlendSpaceTPP; // 0x08(0x08)
	struct FInputBlendPose BlendSettings; // 0x10(0x10)
};

// ScriptStruct TslGame.*6b99728ef2
// Size: 0x10 (Inherited: 0x00)
struct F*6b99728ef2 {
	struct TArray<struct F*9ce968d7fe> IdleAnimations; // 0x00(0x10)
};

// ScriptStruct TslGame.*9ce968d7fe
// Size: 0x20 (Inherited: 0x00)
struct F*9ce968d7fe {
	struct UAnimSequence* AnimAsset; // 0x00(0x08)
	struct FInt32Range LoopingCounter; // 0x08(0x10)
	float ChanceToPlay; // 0x18(0x04)
	float BlendTime; // 0x1c(0x04)
};

// ScriptStruct TslGame.*97d9447c83
// Size: 0x10 (Inherited: 0x00)
struct F*97d9447c83 {
	struct FName Name; // 0x00(0x08)
	bool bIsAxis; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scale; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b94ee6cfe3
// Size: 0x10 (Inherited: 0x00)
struct F*b94ee6cfe3 {
	struct FName Name; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1ad794ed32
// Size: 0x10 (Inherited: 0x00)
struct F*1ad794ed32 {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Health; // 0x04(0x04)
	int32 Count; // 0x08(0x04)
	bool bUseRandomizedWeaponKits; // 0x0c(0x01)
	bool bUseUniqueWeaponKits; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*3dd1044166
// Size: 0x10 (Inherited: 0x00)
struct F*3dd1044166 {
	struct FName *08db616b8e; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*51761df26e
// Size: 0x20 (Inherited: 0x00)
struct F*51761df26e {
	enum class EAutoSpectatePriority *6bd66ccee5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 TeamId; // 0x04(0x04)
	struct FString *3fb58ba8ff; // 0x08(0x10)
	float *82606e4f97; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*12af956b8d
// Size: 0x50 (Inherited: 0x00)
struct F*12af956b8d {
	enum class EObserverHudAnimType AnimType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 EliminatorTeamNum; // 0x04(0x04)
	int32 EliminatedTeamNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString KillingSpreePlayerName; // 0x10(0x10)
	struct FString KillingSpreeClanName; // 0x20(0x10)
	struct FString KillingSpreeTeamName; // 0x30(0x10)
	int32 KillingSpreeTeamNum; // 0x40(0x04)
	int32 KillingSpreeKillCount; // 0x44(0x04)
	enum class EOutGamePlatformProvider KillingSpreePlayerPlatform; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.*e32357d646
// Size: 0x18 (Inherited: 0x00)
struct F*e32357d646 {
	struct FString UniqueId; // 0x00(0x10)
	bool *e7b62e5d0c; // 0x10(0x01)
	bool *ae06fe6d11; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.CommunicateTargetInfo
// Size: 0x30 (Inherited: 0x00)
struct FCommunicateTargetInfo {
	struct FString UniqueId; // 0x00(0x10)
	struct FString Nickname; // 0x10(0x10)
	enum class EOutGamePlatformProvider PlatformData; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FCommunicationPrivilege CommunicationPrivileges; // 0x24(0x08)
	bool bMyFollower; // 0x2c(0x01)
	bool bIAmFollowing; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct TslGame.CommunicationPrivilege
// Size: 0x08 (Inherited: 0x00)
struct FCommunicationPrivilege {
	int32 CommunicationPrivilege_Multiplay; // 0x00(0x04)
	int32 CommunicationPrivilege_CrossPlay; // 0x04(0x04)
};

// ScriptStruct TslGame.*644c946c08
// Size: 0x20 (Inherited: 0x00)
struct F*644c946c08 {
	struct FString Key; // 0x00(0x10)
	struct TArray<struct F*6a22eb4abf> Logs; // 0x10(0x10)
};

// ScriptStruct TslGame.*6a22eb4abf
// Size: 0x20 (Inherited: 0x00)
struct F*6a22eb4abf {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.BodyTypeDef
// Size: 0x08 (Inherited: 0x00)
struct FBodyTypeDef {
	int32 *a6591f90b2; // 0x00(0x04)
	int32 *b9d3504e89; // 0x04(0x04)
};

// ScriptStruct TslGame.*6b0721dc00
// Size: 0x98 (Inherited: 0x00)
struct F*6b0721dc00 {
	struct FString PlayerName; // 0x00(0x10)
	uint32 *1fc73a82f4; // 0x10(0x04)
	int32 TeamId; // 0x14(0x04)
	bool *0b891081c0; // 0x18(0x01)
	bool Gender; // 0x19(0x01)
	bool *74b429a01f; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct TArray<int32> *9f92ab75c7; // 0x20(0x10)
	struct TArray<int32> *b05cc69e02; // 0x30(0x10)
	struct TArray<int32> *9ca1de0454; // 0x40(0x10)
	struct FString Emotes; // 0x50(0x10)
	struct FName *55c72e3b00; // 0x60(0x08)
	struct FName *dafdbfe226; // 0x68(0x08)
	float *dcfb733bfe; // 0x70(0x04)
	float *f25fb2d78a; // 0x74(0x04)
	float *30ab7d380b; // 0x78(0x04)
	float *d46794cbe5; // 0x7c(0x04)
	bool *966969ed1d; // 0x80(0x01)
	bool *530c33b0a0; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FString *1b1e820f5c; // 0x88(0x10)
};

// ScriptStruct TslGame.*dc04f541cd
// Size: 0x10 (Inherited: 0x00)
struct F*dc04f541cd {
	struct FVector Location; // 0x00(0x0c)
	bool *63d0d48996; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*b31382c82b
// Size: 0x10 (Inherited: 0x00)
struct F*b31382c82b {
	enum class EMatchStartType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* Class; // 0x08(0x08)
};

// ScriptStruct TslGame.*2d3ecd0e82
// Size: 0x08 (Inherited: 0x00)
struct F*2d3ecd0e82 {
	float *3232f7a6a2; // 0x00(0x04)
	float *e276f57c64; // 0x04(0x04)
};

// ScriptStruct TslGame.*082ab99680
// Size: 0x24 (Inherited: 0x00)
struct F*082ab99680 {
	enum class EInventoryRadioMessageType *dde7e9aaf5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *46ff0889f7; // 0x04(0x04)
	int32 *d61bb58780; // 0x08(0x04)
	bool *3055a24dc7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32 *2ff76438b5; // 0x10(0x04)
	int32 *ad57f192f5; // 0x14(0x04)
	struct FVector_NetQuantize *d90f69de94; // 0x18(0x0c)
};

// ScriptStruct TslGame.*475994f224
// Size: 0x30 (Inherited: 0x00)
struct F*475994f224 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *712517542c; // 0x08(0x10)
	struct TArray<struct FText> *129d5f391b; // 0x18(0x10)
	int32 *f028b4f9c5; // 0x28(0x04)
	enum class ERadioMessageHighlightType *e8baee6de1; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct TslGame.*fcf08e21a4
// Size: 0x38 (Inherited: 0x28)
struct F*fcf08e21a4 : F*774bbb389e {
	struct TArray<struct FName> SkinnableTagList; // 0x28(0x10)
};

// ScriptStruct TslGame.*774bbb389e
// Size: 0x28 (Inherited: 0x00)
struct F*774bbb389e {
	struct FText ItemName; // 0x00(0x18)
	struct FString BlueprintId; // 0x18(0x10)
};

// ScriptStruct TslGame.*ef930bbbf4
// Size: 0x38 (Inherited: 0x28)
struct F*ef930bbbf4 : F*774bbb389e {
	enum class EWeaponClass WeaponClassEnum; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName SkinTag; // 0x30(0x08)
};

// ScriptStruct TslGame.*e4eec66a2d
// Size: 0x10 (Inherited: 0x00)
struct F*e4eec66a2d {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.RankingInfo
// Size: 0x18 (Inherited: 0x00)
struct FRankingInfo {
	int32 TeamId; // 0x00(0x04)
	int32 *f334edac6b; // 0x04(0x04)
	int32 *21e5644341; // 0x08(0x04)
	int32 Score; // 0x0c(0x04)
	int32 Order; // 0x10(0x04)
	bool *89b4dfed49; // 0x14(0x01)
	bool *27b69ced20; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*1b4ab4ebac
// Size: 0x08 (Inherited: 0x00)
struct F*1b4ab4ebac {
	struct FName ItemID; // 0x00(0x08)
};

// ScriptStruct TslGame.*dbf31c1c98
// Size: 0x10 (Inherited: 0x00)
struct F*dbf31c1c98 {
	struct FStringClassReference ObjectClass; // 0x00(0x10)
};

// ScriptStruct TslGame.*3b9eade47d
// Size: 0x10 (Inherited: 0x00)
struct F*3b9eade47d {
	struct UTexture* Texture; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e4da26a3da
// Size: 0x30 (Inherited: 0x00)
struct F*e4da26a3da {
	struct FKey Key; // 0x00(0x18)
	struct UTexture* KeyIcon; // 0x18(0x08)
	struct UTexture* KeyIcon_PS; // 0x20(0x08)
	float IconRatio; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*96db306e1b
// Size: 0x08 (Inherited: 0x00)
struct F*96db306e1b {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
};

// ScriptStruct TslGame.*faf4763216
// Size: 0x20 (Inherited: 0x00)
struct F*faf4763216 {
	struct FString ActorName; // 0x00(0x10)
	struct FVector *4a2bdf5731; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*b08de5f7a8
// Size: 0x20 (Inherited: 0x00)
struct F*b08de5f7a8 {
	struct FString MapName; // 0x00(0x10)
	struct TArray<struct FSavedObPos> SavedObPos; // 0x10(0x10)
};

// ScriptStruct TslGame.SavedObPos
// Size: 0x18 (Inherited: 0x00)
struct FSavedObPos {
	struct FVector Loc; // 0x00(0x0c)
	struct FRotator Rot; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*cfbd6b5f8b
// Size: 0x58 (Inherited: 0x00)
struct F*cfbd6b5f8b {
	struct TArray<enum class EGameModeType> GameModeTypeList; // 0x00(0x10)
	struct FString WidgetName; // 0x10(0x10)
	bool bRemoveWidget; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct F*fc02106b82 NewWidgetConfig; // 0x28(0x30)
};

// ScriptStruct TslGame.*fc02106b82
// Size: 0x30 (Inherited: 0x00)
struct F*fc02106b82 {
	struct FStringAssetReference WidgetClassReference; // 0x00(0x10)
	bool bDefaultShow; // 0x10(0x01)
	bool bUseMouse; // 0x11(0x01)
	bool bCloseByEscape; // 0x12(0x01)
	bool bRemovedByHiding; // 0x13(0x01)
	int32 ZOrder; // 0x14(0x04)
	bool bUsePcOnly; // 0x18(0x01)
	bool bUseConsoleOnly; // 0x19(0x01)
	bool bCharacterHudUi; // 0x1a(0x01)
	bool bSpectatorHudUi; // 0x1b(0x01)
	bool bObserverHudUi; // 0x1c(0x01)
	bool bReplayHudUi; // 0x1d(0x01)
	bool bLeagueReplayHudUi; // 0x1e(0x01)
	enum class ETslWidgetCreationMethod WidgetCreationMethod; // 0x1f(0x01)
	struct TArray<struct FString> HideWidgetList; // 0x20(0x10)
};

// ScriptStruct TslGame.*23c9627ce8
// Size: 0x20 (Inherited: 0x00)
struct F*23c9627ce8 {
	struct FString WidgetName; // 0x00(0x10)
	struct TArray<struct F*088afd142d> AlternativeWidgets; // 0x10(0x10)
};

// ScriptStruct TslGame.*088afd142d
// Size: 0x30 (Inherited: 0x00)
struct F*088afd142d {
	struct FName GameModeAlias; // 0x00(0x08)
	struct FStringAssetReference Reference; // 0x08(0x10)
	struct TArray<struct FString> HideWidgetList; // 0x18(0x10)
	int32 ZOrderOverride; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*0751dc5caf
// Size: 0x40 (Inherited: 0x00)
struct F*0751dc5caf {
	struct FString WidgetName; // 0x00(0x10)
	struct F*fc02106b82 WidgetConfig; // 0x10(0x30)
};

// ScriptStruct TslGame.*9ced9e7781
// Size: 0x18 (Inherited: 0x00)
struct F*9ced9e7781 {
	struct FString *613794a624; // 0x00(0x10)
	int32 *b4bedec5c3; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.TslUserProfile
// Size: 0x18 (Inherited: 0x00)
struct FTslUserProfile {
	struct FString PlayerNetId; // 0x00(0x10)
	float TotalPlayTime_Sec; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*e0dfae7140
// Size: 0x0c (Inherited: 0x00)
struct F*e0dfae7140 {
	char pad_0[0x8]; // 0x00(0x08)
	int32 Counter; // 0x08(0x04)
};

// ScriptStruct TslGame.*cbfeb8b1c0
// Size: 0x08 (Inherited: 0x00)
struct F*cbfeb8b1c0 {
	enum class EWeatherChange newWeather; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.ChineseLicensingDefaultCustomizeData
// Size: 0x18 (Inherited: 0x00)
struct FChineseLicensingDefaultCustomizeData {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FName EquipableItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*e7dc134e91
// Size: 0x14 (Inherited: 0x00)
struct F*e7dc134e91 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 AircraftCount; // 0x04(0x04)
	float AircraftCooldown; // 0x08(0x04)
	int32 InvalidBeforePhase; // 0x0c(0x04)
	int32 InvalidAfterPhase; // 0x10(0x04)
};

// ScriptStruct TslGame.*13e56ddaa2
// Size: 0x24 (Inherited: 0x00)
struct F*13e56ddaa2 {
	int32 BlueZonePhase; // 0x00(0x04)
	float StartDelay; // 0x04(0x04)
	float WarningDuration; // 0x08(0x04)
	float ReleaseDuration; // 0x0c(0x04)
	float BlueZoneDamagePerSecond; // 0x10(0x04)
	float RadiusRate; // 0x14(0x04)
	float SpreadRatio; // 0x18(0x04)
	float LandRatio; // 0x1c(0x04)
	int32 CircleAlgorithm; // 0x20(0x04)
};

// ScriptStruct TslGame.*06cd49bac6
// Size: 0x40 (Inherited: 0x00)
struct F*06cd49bac6 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PlayerNearBuildingMaxDamage; // 0x04(0x04)
	float PlayerNearBuildingMaxDistance; // 0x08(0x04)
	float StrikeInnerRadius; // 0x0c(0x04)
	float StrikeMidRadius; // 0x10(0x04)
	float StrikeOuterRadius; // 0x14(0x04)
	float StartDelay; // 0x18(0x04)
	float StandbyDelay; // 0x1c(0x04)
	float RequestedStandbyDelay; // 0x20(0x04)
	float BombingDelay; // 0x24(0x04)
	int32 MaxMidCount; // 0x28(0x04)
	int32 MaxFarCount; // 0x2c(0x04)
	int32 MinimumBuildingsToDestroy; // 0x30(0x04)
	struct FVector2D BombingInterval; // 0x34(0x08)
	bool bUseBlackZoneCurves; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGame.*d47c5cdf76
// Size: 0x1c (Inherited: 0x00)
struct F*d47c5cdf76 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MultiplierRedZoneExplosionDensity; // 0x04(0x04)
	float MultiplierRedZoneStartTime; // 0x08(0x04)
	float MultiplierRedZoneEndTime; // 0x0c(0x04)
	float MultiplierRedZoneExplosionDelay; // 0x10(0x04)
	float MultiplierRedZoneDuration; // 0x14(0x04)
	float MultiplierRedZoneArea; // 0x18(0x04)
};

// ScriptStruct TslGame.MatchLog
// Size: 0x60 (Inherited: 0x00)
struct FMatchLog {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*085e78da7e
// Size: 0x08 (Inherited: 0x00)
struct F*085e78da7e {
	float *09e8cded25; // 0x00(0x04)
	float *37aa6d55dd; // 0x04(0x04)
};

// ScriptStruct TslGame.*e142111690
// Size: 0x10 (Inherited: 0x00)
struct F*e142111690 {
	float *09e8cded25; // 0x00(0x04)
	float *37aa6d55dd; // 0x04(0x04)
	float *1ca8f6c1ef; // 0x08(0x04)
	float *4ea7502619; // 0x0c(0x04)
};

// ScriptStruct TslGame.*4fdf4d660a
// Size: 0x18 (Inherited: 0x00)
struct F*4fdf4d660a {
	float *2b5b7d355e; // 0x00(0x04)
	float *840eb6d046; // 0x04(0x04)
	float *19e416bed3; // 0x08(0x04)
	float *6e1d53ae9a; // 0x0c(0x04)
	float *1ca8f6c1ef; // 0x10(0x04)
	float *ed7a77da46; // 0x14(0x04)
};

// ScriptStruct TslGame.*1eb5f64533
// Size: 0x14 (Inherited: 0x00)
struct F*1eb5f64533 {
	bool *5365637b75; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *58bde33c00; // 0x04(0x04)
	float *a0b1105eed; // 0x08(0x04)
	float *cbe6e4ae32; // 0x0c(0x04)
	float *400b38978b; // 0x10(0x04)
};

// ScriptStruct TslGame.*6986f9f173
// Size: 0x0c (Inherited: 0x00)
struct F*6986f9f173 {
	float *de47a4454c; // 0x00(0x04)
	float BpBoost; // 0x04(0x04)
	float *a6338d7685; // 0x08(0x04)
};

// ScriptStruct TslGame.*88da6fa15a
// Size: 0x10 (Inherited: 0x00)
struct F*88da6fa15a {
	float SurvivalTimeStart; // 0x00(0x04)
	float TeamSpectatingTimeStart; // 0x04(0x04)
	float SurvivalTimeAccumulated; // 0x08(0x04)
	float TeamSpectatingTimeAccumulated; // 0x0c(0x04)
};

// ScriptStruct TslGame.TslLobbyCustomizingData
// Size: 0x58 (Inherited: 0x00)
struct FTslLobbyCustomizingData {
	enum class ELobbyCustomizingSlotType LobbyCustomizingSlotType; // 0x00(0x01)
	bool SlotIndex; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FTslLobbyItemViewData LobbyItemViewData; // 0x08(0x50)
};

// ScriptStruct TslGame.TslLobbyItemViewData
// Size: 0x50 (Inherited: 0x00)
struct FTslLobbyItemViewData {
	struct FString TargetItemId; // 0x00(0x10)
	struct FString SkinItemId; // 0x10(0x10)
	struct TArray<struct FString> PartIds; // 0x20(0x10)
	struct FString SequenceTag; // 0x30(0x10)
	float InitialScale; // 0x40(0x04)
	float ZoomMultiplier; // 0x44(0x04)
	float ViewModeScaleMin; // 0x48(0x04)
	float ViewModeScaleMax; // 0x4c(0x04)
};

// ScriptStruct TslGame.TslLobbyCharacterCreateType
// Size: 0x50 (Inherited: 0x00)
struct FTslLobbyCharacterCreateType {
	uint32 SlotIndex; // 0x00(0x04)
	bool IsGenderMale; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString NetId; // 0x08(0x10)
	struct FString Nickname; // 0x18(0x10)
	struct FString ClanTag; // 0x28(0x10)
	struct FString ClanplateId; // 0x38(0x10)
	enum class EOutGamePlatformProvider PlatformProvider; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.TslLobbyEmotePlaySetData
// Size: 0x38 (Inherited: 0x00)
struct FTslLobbyEmotePlaySetData {
	struct FName EmoteName; // 0x00(0x08)
	struct FName SectionName; // 0x08(0x08)
	struct FString PlayType; // 0x10(0x10)
	struct FString EmoteLeaderNetId; // 0x20(0x10)
	bool bIsEmoteFollower; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*ff8e8977aa
// Size: 0x58 (Inherited: 0x08)
struct F*ff8e8977aa : FTableRowBase {
	struct TMap<struct FName, struct F*8ae2d96ff3> TargetStateData; // 0x08(0x50)
};

// ScriptStruct TslGame.*8ae2d96ff3
// Size: 0x20 (Inherited: 0x00)
struct F*8ae2d96ff3 {
	struct UAnimationAsset* StateAnimation; // 0x00(0x20)
};

// ScriptStruct TslGame.*bbc5519537
// Size: 0xa8 (Inherited: 0x00)
struct F*bbc5519537 {
	enum class ETslOutGameCloudRequestType *43b3ff28c1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *20dc8ab28d; // 0x08(0x18)
	float *db00e6ce53; // 0x20(0x04)
	float *e10ff236a4; // 0x24(0x04)
	struct FText *8de4761132; // 0x28(0x18)
	struct FText *b8f7525441; // 0x40(0x18)
	struct TMap<enum class ETslOutGameCloudRequestErrorType, struct FText> *0c1a737ce9; // 0x58(0x50)
};

// ScriptStruct TslGame.*1ec3dc64a5
// Size: 0x10 (Inherited: 0x00)
struct F*1ec3dc64a5 {
	struct FName *108298dd71; // 0x00(0x08)
	bool bEnable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*3f3e1ec04c
// Size: 0x20 (Inherited: 0x00)
struct F*3f3e1ec04c {
	struct FString AccountId; // 0x00(0x10)
	struct FString LoadingState; // 0x10(0x10)
};

// ScriptStruct TslGame.*44085ab898
// Size: 0x18 (Inherited: 0x00)
struct F*44085ab898 {
	struct FString AccountId; // 0x00(0x10)
	float *e48b06de16; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.TslReportedInfo
// Size: 0x108 (Inherited: 0x00)
struct FTslReportedInfo {
	struct FString MatchId; // 0x00(0x10)
	struct FTslReportUserInfo UserInfo; // 0x10(0x70)
	struct FTslReporterInfo ReporterInfo; // 0x80(0x48)
	struct FString Cause; // 0xc8(0x10)
	struct TArray<struct FString> DetailCauseList; // 0xd8(0x10)
	struct FString ReportedSessionType; // 0xe8(0x10)
	float MatchElapsedTimeSec; // 0xf8(0x04)
	bool bIsKilledByReportedUser; // 0xfc(0x01)
	bool bIsDBNOedByReportedUser; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	float DamagedAmountByReportedUser; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.TslReporterInfo
// Size: 0x48 (Inherited: 0x00)
struct FTslReporterInfo {
	struct FString AccountId; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	int32 TeamId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ClanId; // 0x28(0x10)
	struct FString ClanTag; // 0x38(0x10)
};

// ScriptStruct TslGame.*f1d4414dd3
// Size: 0x50 (Inherited: 0x00)
struct F*f1d4414dd3 {
	struct FString PlayerName; // 0x00(0x10)
	struct FString FullPlayerName; // 0x10(0x10)
	struct FString ClanName; // 0x20(0x10)
	int32 NumKills; // 0x30(0x04)
	int32 NumAssists; // 0x34(0x04)
	int32 Ranking; // 0x38(0x04)
	int32 TeamId; // 0x3c(0x04)
	int32 NumStartTeamMember; // 0x40(0x04)
	float DamageDealtOnEnemy; // 0x44(0x04)
	bool bIsZombie; // 0x48(0x01)
	enum class EOutGamePlatformProvider PlayerPlatform; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.*30c64eb670
// Size: 0x18 (Inherited: 0x00)
struct F*30c64eb670 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*52e366a107
// Size: 0x20 (Inherited: 0x00)
struct F*52e366a107 {
	enum class EReportDetailCauseType ReportDetailCauseType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGame.*c6637f02d7
// Size: 0x10 (Inherited: 0x00)
struct F*c6637f02d7 {
	int32 PlayerCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslPlayerStart* PlayerStart; // 0x08(0x08)
};

// ScriptStruct TslGame.*b92419e688
// Size: 0x0c (Inherited: 0x00)
struct F*b92419e688 {
	int32 TeamId; // 0x00(0x04)
	int32 SquadIndex; // 0x04(0x04)
	int32 *734fd4df73; // 0x08(0x04)
};

// ScriptStruct TslGame.*77e2331a31
// Size: 0x30 (Inherited: 0x00)
struct F*77e2331a31 {
	struct ATslPlayerState* Commander; // 0x00(0x08)
	struct F*c89dcd5ffa *c89dcd5ffa; // 0x08(0x10)
	struct ATslPlatoonFireSupportController* *3f23a3708e; // 0x18(0x08)
	struct U*fda52f0abc* *aad6284738; // 0x20(0x08)
	struct U*fda52f0abc* *413b250ba3; // 0x28(0x08)
};

// ScriptStruct TslGame.*5c04536a55
// Size: 0x18 (Inherited: 0x00)
struct F*5c04536a55 {
	int32 TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATeam*> Members; // 0x08(0x10)
};

// ScriptStruct TslGame.*c4b43ade97
// Size: 0x18 (Inherited: 0x00)
struct F*c4b43ade97 {
	struct AActor* SpottedActor; // 0x00(0x08)
	float SpottedStartTime; // 0x08(0x04)
	float SpottedEndTime; // 0x0c(0x04)
	bool SpottedDuringThisCycle; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*ba792297d2
// Size: 0x14 (Inherited: 0x00)
struct F*ba792297d2 {
	bool *da0ebb67ed; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *0ee495c3a7; // 0x04(0x0c)
	bool *468577d091; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.WorldMarker
// Size: 0x68 (Inherited: 0x00)
struct FWorldMarker {
	bool Show; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize100 MarkerPosition; // 0x04(0x0c)
	struct FVector_NetQuantize100 MarkerOffset; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* TrackedActor; // 0x20(0x08)
	enum class EMarkerType MarkerType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MarkerCreationTime; // 0x2c(0x04)
	float MarkerLifetime; // 0x30(0x04)
	struct FGuid MarkerID; // 0x34(0x10)
	struct FLinearColor MarkerColor; // 0x44(0x10)
	bool bUseSquadColor; // 0x54(0x01)
	bool bIsPassiveMarker; // 0x55(0x01)
	int8 *0ca9afc22d; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct TArray<int8> *1e59ebca32; // 0x58(0x10)
};

// ScriptStruct TslGame.*d66d66e025
// Size: 0x20 (Inherited: 0x00)
struct F*d66d66e025 {
	struct AActor* SpottedActor; // 0x00(0x08)
	float SpottingTime; // 0x08(0x04)
	struct FGuid MarkerID; // 0x0c(0x10)
	int8 *0ca9afc22d; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*dfa9979b14
// Size: 0x08 (Inherited: 0x00)
struct F*dfa9979b14 {
	float Z; // 0x00(0x04)
	enum class ENearClippingLevel Level; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*29ce5cea98
// Size: 0x08 (Inherited: 0x00)
struct F*29ce5cea98 {
	enum class ENearClippingLevel Level; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct TslGame.LevelLoadingBoostParameters
// Size: 0x10 (Inherited: 0x00)
struct FLevelLoadingBoostParameters {
	float AsyncLoadingTimeLimit; // 0x00(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x04(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x08(0x04)
	int32 LevelStreamingComponentsRegistrationGranularity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*59e081f3af
// Size: 0x0c (Inherited: 0x00)
struct F*59e081f3af {
	bool bRandomSpawn; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RandomSpawnRadius; // 0x04(0x04)
	float *bf22c248b9; // 0x08(0x04)
};

// ScriptStruct TslGame.*25f999310f
// Size: 0x10 (Inherited: 0x00)
struct F*25f999310f {
	int32 *95d35ff8e1; // 0x00(0x04)
	int32 *f0da04f4db; // 0x04(0x04)
	struct ADroppedItem* *c2d1343406; // 0x08(0x08)
};

// ScriptStruct TslGame.*9b437e6913
// Size: 0x10 (Inherited: 0x00)
struct F*9b437e6913 {
	struct FName *1299107cc3; // 0x00(0x08)
	int32 *6e0a2063ac; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*84dd4e8338
// Size: 0x10 (Inherited: 0x00)
struct F*84dd4e8338 {
	enum class EConstraintSlotType ConstraintSlotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*fe6da746f6 EquipPosition; // 0x04(0x08)
	enum class EEquipableItemSoundType OverrideSoundType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*fe6da746f6
// Size: 0x08 (Inherited: 0x00)
struct F*fe6da746f6 {
	enum class EEquipSlotID SlotID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Index; // 0x04(0x04)
};

// ScriptStruct TslGame.*bd7a41970f
// Size: 0x48 (Inherited: 0x00)
struct F*bd7a41970f {
	struct FRotator *524ec8fc28; // 0x00(0x0c)
	struct FVector Location; // 0x0c(0x0c)
	struct FVector Direction; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct U*901c357d94* ThrowableConfig; // 0x28(0x08)
	int32 *96be039582; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct ATslCharacter* *c3d6df06fc; // 0x38(0x08)
	struct UPrimitiveComponent* *22f2d853f1; // 0x40(0x08)
};

// ScriptStruct TslGame.*7990b527cd
// Size: 0x190 (Inherited: 0x00)
struct F*7990b527cd {
	struct TMap<struct UClass*, struct F*1c94054c95> SlotOffset_Primary_PerWeapon; // 0x00(0x50)
	struct TMap<struct UClass*, struct F*1c94054c95> SlotOffset_Secondary_PerWeapon; // 0x50(0x50)
	struct TMap<struct UClass*, struct F*1c94054c95> SlotOffset_SideArm_PerWeapon; // 0xa0(0x50)
	struct TMap<struct UClass*, struct F*1c94054c95> SlotOffset_Melee_PerWeapon; // 0xf0(0x50)
	struct TMap<struct UClass*, struct F*1c94054c95> SlotOffset_Thrown_PerWeapon; // 0x140(0x50)
};

// ScriptStruct TslGame.*1c94054c95
// Size: 0x18 (Inherited: 0x00)
struct F*1c94054c95 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*daacb20549
// Size: 0x78 (Inherited: 0x00)
struct F*daacb20549 {
	struct FVector SlotOffset_Primary_Location; // 0x00(0x0c)
	struct FVector SlotOffset_Secondary_Location; // 0x0c(0x0c)
	struct FVector SlotOffset_SideArm_Location; // 0x18(0x0c)
	struct FVector SlotOffset_Melee_Location; // 0x24(0x0c)
	struct FVector SlotOffset_Thrown_Location; // 0x30(0x0c)
	struct FRotator SlotOffset_Primary_Rotation; // 0x3c(0x0c)
	struct FRotator SlotOffset_Secondary_Rotation; // 0x48(0x0c)
	struct FRotator SlotOffset_SideArm_Rotation; // 0x54(0x0c)
	struct FRotator SlotOffset_Melee_Rotation; // 0x60(0x0c)
	struct FRotator SlotOffset_Thrown_Rotation; // 0x6c(0x0c)
};

// ScriptStruct TslGame.*35528c18c3
// Size: 0x08 (Inherited: 0x08)
struct F*35528c18c3 : FTableRowBase {
};

// ScriptStruct TslGame.*a87e164854
// Size: 0xd8 (Inherited: 0x00)
struct F*a87e164854 {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CastAnimPlayRate; // 0x04(0x04)
	struct F*8121b8b50e CustomCastAnim; // 0x08(0xc0)
	float CustomCastTimeRemaining; // 0xc8(0x04)
	bool IsPermanentCasting; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float CastBlendingTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct TslGame.*44a850d86c
// Size: 0xb8 (Inherited: 0xb0)
struct F*44a850d86c : F*64f328df7d {
	bool *0fdced5e4e; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct TslGame.*8d696dc74e
// Size: 0x08 (Inherited: 0x00)
struct F*8d696dc74e {
	float *a481c3bd70; // 0x00(0x04)
	enum class EDamageVictimActorType *81c1a5c99d; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*7ef65296a0
// Size: 0x140 (Inherited: 0x00)
struct F*7ef65296a0 {
	struct UClass* Explosion; // 0x00(0x08)
	float DamagedPercentMax; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* Damaged; // 0x10(0x08)
	struct UClass* Destroyed; // 0x18(0x08)
	struct UAkAudioEvent* EngineSound; // 0x20(0x08)
	struct UAkAudioEvent* EngineSound_Remote; // 0x28(0x08)
	struct UAkAudioEvent* EngineSound_Stop; // 0x30(0x08)
	struct UAkAudioEvent* DelayedExplosion; // 0x38(0x08)
	struct UClass* Muffler; // 0x40(0x08)
	struct UClass* Muffler2; // 0x48(0x08)
	struct UClass* Muffler3; // 0x50(0x08)
	struct UClass* Muffler4; // 0x58(0x08)
	struct UClass* Boost; // 0x60(0x08)
	struct UClass* Boost2; // 0x68(0x08)
	struct UClass* Boost3; // 0x70(0x08)
	struct UClass* Boost4; // 0x78(0x08)
	struct UClass* FrontTrail; // 0x80(0x08)
	struct UClass* RearTrail; // 0x88(0x08)
	struct UClass* Thruster; // 0x90(0x08)
	struct UClass* Thruster2; // 0x98(0x08)
	struct UClass* FrontFoamLeft; // 0xa0(0x08)
	struct UClass* FrontFoamRight; // 0xa8(0x08)
	struct UClass* SpashEffectOverride; // 0xb0(0x08)
	struct UStaticMesh* Rotor; // 0xb8(0x08)
	struct UStaticMesh* RotorDamaged; // 0xc0(0x08)
	struct UClass* ExhaustPopEffect; // 0xc8(0x08)
	struct FFloatRange ImpactNormalForceRange; // 0xd0(0x10)
	struct UClass* ImpactDefault; // 0xe0(0x08)
	int32 MaxImpactCount; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TMap<enum class EPhysicalSurface, struct UClass*> ImpactEffectMap; // 0xf0(0x50)
};

// ScriptStruct TslGame.*c64689471d
// Size: 0x10 (Inherited: 0x00)
struct F*c64689471d {
	struct UAkAudioEvent* *3629726bc8; // 0x00(0x08)
	struct UAkAudioEvent* *c0105086c5; // 0x08(0x08)
};

// ScriptStruct TslGame.*52983961ec
// Size: 0x10 (Inherited: 0x08)
struct F*52983961ec : FTableRowBase {
	struct FName *1299107cc3; // 0x08(0x08)
};

// ScriptStruct TslGame.*b821d1a101
// Size: 0x70 (Inherited: 0x00)
struct F*b821d1a101 {
	struct ATslPlayerState* *07c464f74f; // 0x00(0x08)
	struct UClass* *47bf7d1814; // 0x08(0x08)
	struct F*1f0042b8e9 *1f0042b8e9; // 0x10(0x20)
	struct FDateTime *e12e238d9c; // 0x30(0x08)
	enum class EDamageReason *c2874f8b34; // 0x38(0x01)
	enum class EDamageTypeCategory *1fe975f39e; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FName *3dfa4bbe8b; // 0x40(0x08)
	struct TArray<struct FString> *d185b6c910; // 0x48(0x10)
	float Distance; // 0x58(0x04)
	bool *28c09ebdd9; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct ATslPlayerState*> *52500adcbe; // 0x60(0x10)
};

// ScriptStruct TslGame.*1f0042b8e9
// Size: 0x20 (Inherited: 0x00)
struct F*1f0042b8e9 {
	struct FName *1299107cc3; // 0x00(0x08)
	struct F*5226c02a35 SkinParam; // 0x08(0x10)
	int32 *6e0a2063ac; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*3d16159571
// Size: 0x120 (Inherited: 0xf8)
struct F*3d16159571 : F*383418f57b {
	struct FStringClassReference ReplaceVehicle; // 0xf8(0x10)
	enum class EVehicleSkinCategory VehicleSkinCategory; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct F*f56810ecc9> DefaultPartSkinList; // 0x110(0x10)
};

// ScriptStruct TslGame.*383418f57b
// Size: 0xf8 (Inherited: 0x08)
struct F*383418f57b : FTableRowBase {
	struct TMap<struct FName, struct F*b8b155ac41> SkinnedMeshSet; // 0x08(0x50)
	struct TMap<struct FName, struct F*b2adf3900b> SkinnedMaterialSet; // 0x58(0x50)
	struct TArray<struct FName> SkinnableTagList; // 0xa8(0x10)
	struct FRotator DefaultViewModeRotation; // 0xb8(0x0c)
	struct FRotator PivotModifierRotation; // 0xc4(0x0c)
	struct FVector PCViewModeLocation; // 0xd0(0x0c)
	struct FVector ConsoleViewModeLocation; // 0xdc(0x0c)
	struct FVector RecommendArrowOffset; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.*b8b155ac41
// Size: 0x28 (Inherited: 0x00)
struct F*b8b155ac41 {
	enum class ESkinMeshType MeshType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* MeshAsset; // 0x08(0x20)
};

// ScriptStruct TslGame.*f56810ecc9
// Size: 0x10 (Inherited: 0x00)
struct F*f56810ecc9 {
	enum class EVehiclePartType *81916e9634; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *d0b6fbf96d; // 0x08(0x08)
};

// ScriptStruct TslGame.*6b8e6bc55b
// Size: 0x178 (Inherited: 0x178)
struct F*6b8e6bc55b : F*677e226c74 {
};

// ScriptStruct TslGame.*677e226c74
// Size: 0x178 (Inherited: 0xf8)
struct F*677e226c74 : F*383418f57b {
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0xf8(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x128(0x30)
	struct F*54424d3e0d CustomizableObjectSkin; // 0x158(0x20)
};

// ScriptStruct TslGame.*58e023919d
// Size: 0x178 (Inherited: 0x178)
struct F*58e023919d : F*677e226c74 {
};

// ScriptStruct TslGame.*b4c4afe334
// Size: 0x178 (Inherited: 0x178)
struct F*b4c4afe334 : F*677e226c74 {
};

// ScriptStruct TslGame.*d8fef44391
// Size: 0x178 (Inherited: 0x178)
struct F*d8fef44391 : F*677e226c74 {
};

// ScriptStruct TslGame.*96e649525c
// Size: 0x170 (Inherited: 0x170)
struct F*96e649525c : F*dd76bd48ca {
};

// ScriptStruct TslGame.*dd76bd48ca
// Size: 0x170 (Inherited: 0xf8)
struct F*dd76bd48ca : F*383418f57b {
	char bStatTrak : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FStringAssetReference StatTrakActorClass; // 0x100(0x10)
	struct UAnimMontage* *a318647c7c; // 0x110(0x08)
	struct FName *3bf6c2da27; // 0x118(0x08)
	struct TMap<struct FName, struct FLinearColor> SkinnedColorSet; // 0x120(0x50)
};

// ScriptStruct TslGame.*102678c5db
// Size: 0x148 (Inherited: 0x08)
struct F*102678c5db : FTableRowBase {
	struct UTexture2D* *fdb8fae188; // 0x08(0x20)
	struct UTexture2D* *cbb24f5446; // 0x28(0x20)
	struct UTexture2D* *e561ef6b51; // 0x48(0x20)
	struct UTexture2D* *7711a8956c; // 0x68(0x20)
	struct FName *b7d90219b9; // 0x88(0x08)
	struct FSlateColor *b3b626eadb; // 0x90(0x28)
	struct FSlateColor *ab1701ab94; // 0xb8(0x28)
	struct UMaterial* *c72af75a21; // 0xe0(0x20)
	struct UTexture2D* *ea103b5ffb; // 0x100(0x20)
	struct UTexture2D* *deeabab056; // 0x120(0x20)
	int32 *30ce5dc434; // 0x140(0x04)
	int32 *9ce0dcf347; // 0x144(0x04)
};

// ScriptStruct TslGame.*10c58d053e
// Size: 0x170 (Inherited: 0x170)
struct F*10c58d053e : F*dd76bd48ca {
};

// ScriptStruct TslGame.*60e92f5235
// Size: 0x08 (Inherited: 0x00)
struct F*60e92f5235 {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
};

// ScriptStruct TslGame.*9adca58dcb
// Size: 0x10 (Inherited: 0x00)
struct F*9adca58dcb {
	struct FName TargetName; // 0x00(0x08)
	struct UMeshComponent* TargetMesh; // 0x08(0x08)
};

// ScriptStruct TslGame.WuLogPlayerCureDebuff
// Size: 0x190 (Inherited: 0x60)
struct FWuLogPlayerCureDebuff : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogCharacter TargetCharacter; // 0xf0(0x90)
	struct FString DebuffName; // 0x180(0x10)
};

// ScriptStruct TslGame.WuLogCharacter
// Size: 0x90 (Inherited: 0x00)
struct FWuLogCharacter {
	struct FString Name; // 0x00(0x10)
	struct FString NetId; // 0x10(0x10)
	int32 TeamId; // 0x20(0x04)
	float Health; // 0x24(0x04)
	struct FVector Location; // 0x28(0x0c)
	int32 Ranking; // 0x34(0x04)
	int32 IndividualRanking; // 0x38(0x04)
	int32 Platform; // 0x3c(0x04)
	struct FString AccountId; // 0x40(0x10)
	bool IsInBlueZone; // 0x50(0x01)
	bool IsInRedZone; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FString> Zone; // 0x58(0x10)
	struct FString MovementBase; // 0x68(0x10)
	bool IsAI; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString ParticipatedState; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogPlayerHungryStage
// Size: 0x108 (Inherited: 0x60)
struct FWuLogPlayerHungryStage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 PreviousStage; // 0xf0(0x04)
	int32 CurrentStage; // 0xf4(0x04)
	struct FString DebuffName; // 0xf8(0x10)
};

// ScriptStruct TslGame.WuLogSLBItemTransmit
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSLBItemTransmit : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FWuLogItem> TransmitedItem; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogItem
// Size: 0x50 (Inherited: 0x00)
struct FWuLogItem {
	struct FString ItemID; // 0x00(0x10)
	int32 StackCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Category; // 0x18(0x10)
	struct FString SubCategory; // 0x28(0x10)
	struct TArray<struct FString> AttachedItems; // 0x38(0x10)
	bool HasRandomAttachments; // 0x48(0x01)
	bool IsUnique; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.WuLogSLBItemReward
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSLBItemReward : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FWuLogItem> Item; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogSLBClearResult
// Size: 0x90 (Inherited: 0x60)
struct FWuLogSLBClearResult : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 Stage; // 0x70(0x04)
	bool Clear; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FString Reason; // 0x78(0x10)
	int32 PlayTime; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.WuLogSLBStartStage
// Size: 0x68 (Inherited: 0x60)
struct FWuLogSLBStartStage : FLogBase {
	int32 Stage; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.WuLogAliveCharacterNum
// Size: 0x90 (Inherited: 0x60)
struct FWuLogAliveCharacterNum : FLogBase {
	int32 AliveAINum; // 0x60(0x04)
	int32 AliveAITeamNum; // 0x64(0x04)
	int32 AlivePlayerNum; // 0x68(0x04)
	int32 AlivePlayerTeamNum; // 0x6c(0x04)
	struct TArray<struct FString> VictimCharacterAccountId; // 0x70(0x10)
	struct TArray<struct FString> ReviveOrRespawnCharacterAccountId; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogBombPlayerDefuse
// Size: 0x108 (Inherited: 0x60)
struct FWuLogBombPlayerDefuse : FLogBase {
	struct FWuLogBombMissionInfo Info; // 0x60(0xa8)
};

// ScriptStruct TslGame.WuLogBombMissionInfo
// Size: 0xa8 (Inherited: 0x00)
struct FWuLogBombMissionInfo {
	struct FWuLogCharacter Character; // 0x00(0x90)
	struct FString Action; // 0x90(0x10)
	int32 CurrentRound; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerPlant
// Size: 0x108 (Inherited: 0x60)
struct FWuLogBombPlayerPlant : FLogBase {
	struct FWuLogBombMissionInfo Info; // 0x60(0xa8)
};

// ScriptStruct TslGame.WuLogBombMoneyDonation
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogBombMoneyDonation : FLogBase {
	struct FWuLogBombPlayerCoinInfo Giver; // 0x60(0x28)
	struct FWuLogBombPlayerCoinInfo Taker; // 0x88(0x28)
	int32 Amount; // 0xb0(0x04)
	int32 CurrentRound; // 0xb4(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerCoinInfo
// Size: 0x28 (Inherited: 0x00)
struct FWuLogBombPlayerCoinInfo {
	struct FString CharacterName; // 0x00(0x10)
	struct FString AccountId; // 0x10(0x10)
	int32 PresentCurrency; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogBombItemBuy
// Size: 0x150 (Inherited: 0x60)
struct FWuLogBombItemBuy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 PresentCurrency; // 0xf0(0x04)
	int32 Cost; // 0xf4(0x04)
	int32 CurrentRound; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FWuLogItem Item; // 0x100(0x50)
};

// ScriptStruct TslGame.WuLogBombMatchResult
// Size: 0x98 (Inherited: 0x60)
struct FWuLogBombMatchResult : FLogBase {
	struct FWuLogBombMatchResultTeamInfo VictoryTeam; // 0x60(0x14)
	struct FWuLogBombMatchResultTeamInfo DefeatTeam; // 0x74(0x14)
	struct FString FinishCause; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogBombMatchResultTeamInfo
// Size: 0x14 (Inherited: 0x00)
struct FWuLogBombMatchResultTeamInfo {
	int32 TeamId; // 0x00(0x04)
	int32 TotalKills; // 0x04(0x04)
	int32 TotalAssists; // 0x08(0x04)
	int32 TotalPlantCount; // 0x0c(0x04)
	int32 TotalDefuseCount; // 0x10(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerIncome
// Size: 0x110 (Inherited: 0x60)
struct FWuLogBombPlayerIncome : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 Amount; // 0xf0(0x04)
	int32 CurrentRound; // 0xf4(0x04)
	struct FWuBombRoundSummary RoundSummary; // 0xf8(0x14)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuBombRoundSummary
// Size: 0x14 (Inherited: 0x00)
struct FWuBombRoundSummary {
	int32 KillCount; // 0x00(0x04)
	int32 AssistCount; // 0x04(0x04)
	bool PlantOrDefuse; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 DefeatStreak; // 0x0c(0x04)
	bool DeciveRound; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.WuLogBombRoundFinished
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogBombRoundFinished : FLogBase {
	struct FWuLogBombRoundFinishTeamInfo VictoryTeam; // 0x60(0x20)
	struct FWuLogBombRoundFinishTeamInfo DefeatTeam; // 0x80(0x20)
	struct FString FinishCause; // 0xa0(0x10)
	int32 CurrentRound; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.WuLogBombRoundFinishTeamInfo
// Size: 0x20 (Inherited: 0x00)
struct FWuLogBombRoundFinishTeamInfo {
	int32 TeamId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TeamType; // 0x08(0x10)
	int32 AlivePlayerCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuLogTireReplaced
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogTireReplaced : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle ParentVehicle; // 0xf0(0x58)
	struct FWuLogItem Item; // 0x148(0x50)
	float Durability; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// ScriptStruct TslGame.WuLogVehicle
// Size: 0x58 (Inherited: 0x00)
struct FWuLogVehicle {
	struct FString VehicleType; // 0x00(0x10)
	struct FString SpawnId; // 0x10(0x10)
	struct FString VehicleId; // 0x20(0x10)
	int32 VehicleUniqueId; // 0x30(0x04)
	int32 SeatIndex; // 0x34(0x04)
	float HealthPercent; // 0x38(0x04)
	float FeulPercent; // 0x3c(0x04)
	float RotationPitch; // 0x40(0x04)
	float AltitudeAbs; // 0x44(0x04)
	float AltitudeRel; // 0x48(0x04)
	float Velocity; // 0x4c(0x04)
	bool IsWheelsInAir; // 0x50(0x01)
	bool IsInWaterVolume; // 0x51(0x01)
	bool IsEngineOn; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// ScriptStruct TslGame.WuLogTirePulledOut
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogTirePulledOut : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle ParentVehicle; // 0xf0(0x58)
	struct FWuLogItem Item; // 0x148(0x50)
	float Durability; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// ScriptStruct TslGame.WuLogSoftRoleRepairkitUse
// Size: 0x288 (Inherited: 0x60)
struct FWuLogSoftRoleRepairkitUse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	struct FWuLogItem RepairedItem; // 0x140(0x50)
	struct FWuLogVehicle RepairedVehicle; // 0x190(0x58)
	struct FWuLogCharacter TargetCharacter; // 0x1e8(0x90)
	float PreviousRepairedStatus; // 0x278(0x04)
	float RepairedStatus; // 0x27c(0x04)
	int32 Remainedcount; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
};

// ScriptStruct TslGame.WuLogRevivalAircraft
// Size: 0x78 (Inherited: 0x60)
struct FWuLogRevivalAircraft : FLogBase {
	int32 phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FString> ReviveAccounts; // 0x68(0x10)
};

// ScriptStruct TslGame.WuLogSuccessRegisterBluechip
// Size: 0x90 (Inherited: 0x60)
struct FWuLogSuccessRegisterBluechip : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString RegisteredByAccountId; // 0x70(0x10)
	struct FString RegisteringMethod; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogTryRegisterBluechip
// Size: 0x90 (Inherited: 0x60)
struct FWuLogTryRegisterBluechip : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString RegisteredByAccountId; // 0x70(0x10)
	struct FString RegisteringMethod; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogBluechipLooted
// Size: 0x80 (Inherited: 0x60)
struct FWuLogBluechipLooted : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString LootingUserAccountId; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogBluechipRemove
// Size: 0x70 (Inherited: 0x60)
struct FWuLogBluechipRemove : FLogBase {
	struct FString AccountId; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogBluechipCreate
// Size: 0x78 (Inherited: 0x60)
struct FWuLogBluechipCreate : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 phase; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRejectReconnect
// Size: 0x70 (Inherited: 0x60)
struct FWuLogPlayerRejectReconnect : FLogBase {
	struct FString AccountId; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogPlayerDisconnected
// Size: 0x128 (Inherited: 0x60)
struct FWuLogPlayerDisconnected : FLogBase {
	struct FWuGameResultPerPlayer GameResult; // 0x60(0xb0)
	struct FString Reason; // 0x110(0x10)
	bool IsRewardConfirmed; // 0x120(0x01)
	bool IsPenaltyWaived; // 0x121(0x01)
	bool ExitToDesktop; // 0x122(0x01)
	bool WasKicked; // 0x123(0x01)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct TslGame.WuGameResultPerPlayer
// Size: 0xb0 (Inherited: 0x00)
struct FWuGameResultPerPlayer {
	struct FString PlayerNetId; // 0x00(0x10)
	int32 Rank; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString GameResult; // 0x18(0x10)
	int32 TeamId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FWuGameResultStatsPerPlayer Stats; // 0x30(0x68)
	bool IsBpGrinder; // 0x98(0x01)
	bool IsXpGrinder; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString AccountId; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuGameResultStatsPerPlayer
// Size: 0x68 (Inherited: 0x00)
struct FWuGameResultStatsPerPlayer {
	int32 KillCount; // 0x00(0x04)
	float Score; // 0x04(0x04)
	float Xp; // 0x08(0x04)
	float DistanceOnFoot; // 0x0c(0x04)
	float DistanceOnSwim; // 0x10(0x04)
	float DistanceOnVehicle; // 0x14(0x04)
	float DistanceOnParachute; // 0x18(0x04)
	float DistanceOnFreefall; // 0x1c(0x04)
	struct FWuLogPlayTimeRecord PlayTime; // 0x20(0x08)
	struct FWuBpRewardDetail BpRewardDetail; // 0x28(0x18)
	struct FWuArcadeRewardDetail ArcadeRewardDetail; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FWuStatTrakData> StatTrakDataPairs; // 0x48(0x10)
	struct TArray<struct FWuStatTrakData> HeadshotStatTrakDataPairs; // 0x58(0x10)
};

// ScriptStruct TslGame.WuStatTrakData
// Size: 0x18 (Inherited: 0x00)
struct FWuStatTrakData {
	struct FString GameItemId; // 0x00(0x10)
	int32 Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuArcadeRewardDetail
// Size: 0x04 (Inherited: 0x00)
struct FWuArcadeRewardDetail {
	int32 ByPlayTime; // 0x00(0x04)
};

// ScriptStruct TslGame.WuBpRewardDetail
// Size: 0x18 (Inherited: 0x00)
struct FWuBpRewardDetail {
	float ByPlayTime; // 0x00(0x04)
	float ByRanking; // 0x04(0x04)
	float ByKills; // 0x08(0x04)
	float ByDamageDealt; // 0x0c(0x04)
	float BoostAmount; // 0x10(0x04)
	float ByModeScore; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogPlayTimeRecord
// Size: 0x08 (Inherited: 0x00)
struct FWuLogPlayTimeRecord {
	int32 SurvivalTime; // 0x00(0x04)
	int32 TeamSpectatingTime; // 0x04(0x04)
};

// ScriptStruct TslGame.WuLogPlayerDisconnectedByQuit
// Size: 0x118 (Inherited: 0x60)
struct FWuLogPlayerDisconnectedByQuit : FLogBase {
	struct FWuGameResultPerPlayer GameResult; // 0x60(0xb0)
	bool IsPenaltyWaived; // 0x110(0x01)
	bool ExitToDesktop; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct TslGame.WuLogPlayerDisconnectedByTimeout
// Size: 0x118 (Inherited: 0x60)
struct FWuLogPlayerDisconnectedByTimeout : FLogBase {
	struct FWuGameResultPerPlayer GameResult; // 0x60(0xb0)
	bool IsPenaltyWaived; // 0x110(0x01)
	bool ExitToDesktop; // 0x111(0x01)
	bool WasKicked; // 0x112(0x01)
	char pad_113[0x5]; // 0x113(0x05)
};

// ScriptStruct TslGame.WuLogPlayerConnected
// Size: 0x88 (Inherited: 0x60)
struct FWuLogPlayerConnected : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	bool IsReconnect; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString Reason; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogCrowbarInteraction
// Size: 0x100 (Inherited: 0x60)
struct FWuLogCrowbarInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString TargetName; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogUsePresetSlotIngame
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogUsePresetSlotIngame : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 SlotIndex; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLog1vs1ArenaMatching
// Size: 0xd8 (Inherited: 0x60)
struct FWuLog1vs1ArenaMatching : FLogBase {
	struct FString SearchStartTime; // 0x60(0x10)
	struct FWuLog1vs1ArenaTimeRecord MatchingTimeRecord; // 0x70(0x20)
	struct TArray<struct FString> SavedItems; // 0x90(0x10)
	struct TArray<int32> Results; // 0xa0(0x10)
	int32 RoundCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString AccountId; // 0xb8(0x10)
	struct FString NetId; // 0xc8(0x10)
};

// ScriptStruct TslGame.WuLog1vs1ArenaTimeRecord
// Size: 0x20 (Inherited: 0x00)
struct FWuLog1vs1ArenaTimeRecord {
	struct FString StartTime; // 0x00(0x10)
	struct FString EndTime; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLog1vs1ArenaMatchingSearch
// Size: 0xa0 (Inherited: 0x60)
struct FWuLog1vs1ArenaMatchingSearch : FLogBase {
	struct FWuLog1vs1ArenaTimeRecord TimeRecord; // 0x60(0x20)
	struct FString AccountId; // 0x80(0x10)
	struct FString NetId; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLog1vs1ArenaOberserver
// Size: 0x90 (Inherited: 0x60)
struct FWuLog1vs1ArenaOberserver : FLogBase {
	struct TArray<struct FWuLog1vs1ArenaTimeRecord> TimeRecords; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
	struct FString NetId; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogMinimapTeleport
// Size: 0x80 (Inherited: 0x60)
struct FWuLogMinimapTeleport : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct TArray<struct FWuLogMinimapTeleportData> TeleportDatas; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogMinimapTeleportData
// Size: 0x18 (Inherited: 0x00)
struct FWuLogMinimapTeleportData {
	int32 TeleportType; // 0x00(0x04)
	int32 PracticeType; // 0x04(0x04)
	struct FString DestinationActorName; // 0x08(0x10)
};

// ScriptStruct TslGame.WuLogAbilitySummer
// Size: 0x100 (Inherited: 0x60)
struct FWuLogAbilitySummer : FLogBase {
	struct FWuLogCharacter Owner; // 0x60(0x90)
	struct TArray<struct FWuLogAbilityData> AbilityDataArr; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogAbilityData
// Size: 0x20 (Inherited: 0x00)
struct FWuLogAbilityData {
	struct FString AbilityID; // 0x00(0x10)
	int32 TotalActivate; // 0x10(0x04)
	int32 TotalSuccess; // 0x14(0x04)
	int32 TotalCancel; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuLogAbilityActivate
// Size: 0x120 (Inherited: 0x60)
struct FWuLogAbilityActivate : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Owner; // 0x68(0x90)
	struct FWuLogAbility Ability; // 0xf8(0x20)
	int32 Index; // 0x118(0x04)
	bool IsSuccess; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
};

// ScriptStruct TslGame.WuLogAbility
// Size: 0x20 (Inherited: 0x00)
struct FWuLogAbility {
	struct FString AbilityID; // 0x00(0x10)
	struct TArray<struct FString> Attributes; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromChickenBox
// Size: 0x148 (Inherited: 0x60)
struct FWuLogItemPickupFromChickenBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	int32 ChickenBoxId; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// ScriptStruct TslGame.WuLogZDF2StageData
// Size: 0x98 (Inherited: 0x60)
struct FWuLogZDF2StageData : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString Timestamp; // 0x70(0x10)
	int32 StageNumber; // 0x80(0x04)
	bool IsCraftingTime; // 0x84(0x01)
	bool IsStart; // 0x85(0x01)
	bool IsLastStage; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
	struct TArray<struct FWuLogZDF2PlayerData> PlayersData; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogZDF2PlayerData
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogZDF2PlayerData : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 HoldingCoinNum; // 0xf0(0x04)
	int32 EarnedCoinNum; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogRacingModeCoursePlayData
// Size: 0x98 (Inherited: 0x60)
struct FWuLogRacingModeCoursePlayData : FLogBase {
	int32 CourseNum; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString AccountId; // 0x68(0x10)
	int32 FinalRanking; // 0x78(0x04)
	int32 DeathCount; // 0x7c(0x04)
	int32 KillCount; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FWuLogRacingModeCheckPointPlayData> CheckPoinPlayDatas; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogRacingModeCheckPointPlayData
// Size: 0x80 (Inherited: 0x60)
struct FWuLogRacingModeCheckPointPlayData : FLogBase {
	int32 PassedCheckPointNum; // 0x60(0x04)
	float CheckPointPassedTime; // 0x64(0x04)
	int32 IndividualRanking; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString Passed_Vehicle; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogSandboxItemUsageCount
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSandboxItemUsageCount : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FWuLogSandboxItemDataUsage> ItemsPerCategory; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogSandboxItemDataUsage
// Size: 0x20 (Inherited: 0x00)
struct FWuLogSandboxItemDataUsage {
	struct FString ItemCategory; // 0x00(0x10)
	struct TArray<struct FWuStringIntPair> Items; // 0x10(0x10)
};

// ScriptStruct TslGame.WuStringIntPair
// Size: 0x18 (Inherited: 0x00)
struct FWuStringIntPair {
	struct FString First; // 0x00(0x10)
	int32 second; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogRadioMessage
// Size: 0x100 (Inherited: 0x60)
struct FWuLogRadioMessage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString MessageCategory; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogAtoZTutorialAllMissionClear
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogAtoZTutorialAllMissionClear : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogItemTypeOverrideZone
// Size: 0x78 (Inherited: 0x60)
struct FWuLogItemTypeOverrideZone : FLogBase {
	int32 ItemTypeOverrideZone; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FWuLogItemTypeOverrideZoneData> ItemTypeOverrideZoneDatas; // 0x68(0x10)
};

// ScriptStruct TslGame.WuLogItemTypeOverrideZoneData
// Size: 0x80 (Inherited: 0x60)
struct FWuLogItemTypeOverrideZoneData : FLogBase {
	struct FString OverrideType; // 0x60(0x10)
	struct FVector ItemTypeOverrideZonePosition; // 0x70(0x0c)
	float ItemTypeOverrideZoneRadius; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRedeploy
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogPlayerRedeploy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 phase; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRedeployBRStart
// Size: 0x78 (Inherited: 0x60)
struct FWuLogPlayerRedeployBRStart : FLogBase {
	struct TArray<struct FWuLogCharacter> Characters; // 0x60(0x10)
	int32 phase; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogUsedBlueBlockerAndReturnedToSafeZone
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogUsedBlueBlockerAndReturnedToSafeZone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 NumTimesUsedBlueBlockerAndReturnedToSafeZone; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogBlueBlockerAbsorbBlueZoneDamage
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogBlueBlockerAbsorbBlueZoneDamage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	float DamageAbsorbed; // 0xf0(0x04)
	int32 NumTimesBlueZoneAbsorbed; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogVoiceChatUseage
// Size: 0x90 (Inherited: 0x60)
struct FWuLogVoiceChatUseage : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct TArray<struct FWuStringFloatPair> Option; // 0x70(0x10)
	float PushTime; // 0x80(0x04)
	float TimeSpent; // 0x84(0x04)
	int32 PlatformProvider; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.WuStringFloatPair
// Size: 0x18 (Inherited: 0x00)
struct FWuStringFloatPair {
	struct FString First; // 0x00(0x10)
	float second; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuEventDamage
// Size: 0x68 (Inherited: 0x10)
struct FWuEventDamage : FGameEventBase {
	bool IsDetailStatus; // 0x10(0x01)
	bool IsVictimMe; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float Damage; // 0x14(0x04)
	struct FString DamageTypeCategory; // 0x18(0x10)
	struct FString AttackerName; // 0x28(0x10)
	struct FVector AttackerLocation; // 0x38(0x0c)
	int32 AttackerTeamId; // 0x44(0x04)
	struct FString VictimName; // 0x48(0x10)
	struct FVector VictimLocation; // 0x58(0x0c)
	int32 VictimTeamId; // 0x64(0x04)
};

// ScriptStruct TslGame.WuEventKill
// Size: 0x88 (Inherited: 0x10)
struct FWuEventKill : FGameEventBase {
	bool IsDetailStatus; // 0x10(0x01)
	bool IsKillerMe; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString KillerName; // 0x18(0x10)
	struct FVector KillerLocation; // 0x28(0x0c)
	int32 KillerTeamId; // 0x34(0x04)
	bool IsVictimMe; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString VictimName; // 0x40(0x10)
	struct FVector VictimLocation; // 0x50(0x0c)
	int32 VictimTeamId; // 0x5c(0x04)
	struct FString DamageCauser; // 0x60(0x10)
	struct FString DamageReason; // 0x70(0x10)
	bool IsGroggy; // 0x80(0x01)
	bool IsStealKilled; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// ScriptStruct TslGame.WuEventMatchResult
// Size: 0x38 (Inherited: 0x10)
struct FWuEventMatchResult : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
	int32 StartPlayerCount; // 0x20(0x04)
	int32 StartTeamCount; // 0x24(0x04)
	struct TArray<struct FWuEventDataTeamResult> Teams; // 0x28(0x10)
};

// ScriptStruct TslGame.WuEventDataTeamResult
// Size: 0x18 (Inherited: 0x00)
struct FWuEventDataTeamResult {
	int32 TeamId; // 0x00(0x04)
	int32 Ranking; // 0x04(0x04)
	struct TArray<struct FWuEventDataPlayerResult> Members; // 0x08(0x10)
};

// ScriptStruct TslGame.WuEventDataPlayerResult
// Size: 0x18 (Inherited: 0x00)
struct FWuEventDataPlayerResult {
	struct FString PlayerName; // 0x00(0x10)
	int32 KillCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuEventPlayerMatchResult
// Size: 0x48 (Inherited: 0x10)
struct FWuEventPlayerMatchResult : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
	int32 StartPlayerCount; // 0x20(0x04)
	int32 StartTeamCount; // 0x24(0x04)
	struct FString PlayerName; // 0x28(0x10)
	int32 Ranking; // 0x38(0x04)
	int32 KillCount; // 0x3c(0x04)
	int32 HeadShotCount; // 0x40(0x04)
	float GivenDamages; // 0x44(0x04)
};

// ScriptStruct TslGame.WuEventMatchStatus
// Size: 0xc8 (Inherited: 0x10)
struct FWuEventMatchStatus : FGameEventBase {
	bool IsDetailStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString MatchId; // 0x18(0x10)
	struct FString TeamMode; // 0x28(0x10)
	struct FString CameraMode; // 0x38(0x10)
	struct FString MatchState; // 0x48(0x10)
	int32 ElapsedTime; // 0x58(0x04)
	int32 BlueZonePhase; // 0x5c(0x04)
	bool IsBlueZoneMoving; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float BluezoneRadius; // 0x64(0x04)
	struct FVector BlueZoneLocation; // 0x68(0x0c)
	float WhiteZoneRadius; // 0x74(0x04)
	struct FVector WhiteZoneLocation; // 0x78(0x0c)
	float RedZoneRadius; // 0x84(0x04)
	struct FVector RedZoneLocation; // 0x88(0x0c)
	float BlackZoneRadius; // 0x94(0x04)
	struct FVector BlackZoneLocation; // 0x98(0x0c)
	int32 StartPlayerCount; // 0xa4(0x04)
	int32 AlivePlayerCount; // 0xa8(0x04)
	int32 StartTeamCount; // 0xac(0x04)
	int32 AliveTeamCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FWuEventDataPlayerInfo> PlayerInfos; // 0xb8(0x10)
};

// ScriptStruct TslGame.WuEventDataPlayerInfo
// Size: 0x50 (Inherited: 0x00)
struct FWuEventDataPlayerInfo {
	struct FString PlayerName; // 0x00(0x10)
	int32 TeamId; // 0x10(0x04)
	struct FVector Location; // 0x14(0x0c)
	float Health; // 0x20(0x04)
	float BoostGauge; // 0x24(0x04)
	struct FString State; // 0x28(0x10)
	struct FString ArmedWeapon; // 0x38(0x10)
	int32 ArmedAmmoCount; // 0x48(0x04)
	int32 InventoryAmmoCount; // 0x4c(0x04)
};

// ScriptStruct TslGame.WuEventPlayerStatus
// Size: 0xa0 (Inherited: 0x10)
struct FWuEventPlayerStatus : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
	struct FString MyPlayerName; // 0x20(0x10)
	bool IsSpetating; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector SpectatingCameraLocation; // 0x34(0x0c)
	struct FWuEventDataPlayerInfo CurrentPlayerInfo; // 0x40(0x50)
	struct TArray<struct FWuEventDataPlayerInfo> TeamMatesInfo; // 0x90(0x10)
};

// ScriptStruct TslGame.WuEventMatchLeave
// Size: 0x20 (Inherited: 0x10)
struct FWuEventMatchLeave : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
};

// ScriptStruct TslGame.WuEventMatchJoin
// Size: 0x48 (Inherited: 0x10)
struct FWuEventMatchJoin : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
	struct FString TeamMode; // 0x20(0x10)
	struct FString CameraMode; // 0x30(0x10)
	bool IsDetailObserver; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct TslGame.WuLogUseBrokenElectronics
// Size: 0x100 (Inherited: 0x60)
struct FWuLogUseBrokenElectronics : FLogBase {
	struct FString ElectronicsType; // 0x60(0x10)
	struct FWuLogCharacter Character; // 0x70(0x90)
};

// ScriptStruct TslGame.WuLogSpecialZoneSpawn
// Size: 0x80 (Inherited: 0x60)
struct FWuLogSpecialZoneSpawn : FLogBase {
	struct FString ZoneType; // 0x60(0x10)
	struct FVector SpawnedPosition; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogIndoorRangeScore
// Size: 0x90 (Inherited: 0x60)
struct FWuLogIndoorRangeScore : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString NetId; // 0x70(0x10)
	struct TArray<struct FWuIntIntPair> Score; // 0x80(0x10)
};

// ScriptStruct TslGame.WuIntIntPair
// Size: 0x08 (Inherited: 0x00)
struct FWuIntIntPair {
	int32 First; // 0x00(0x04)
	int32 second; // 0x04(0x04)
};

// ScriptStruct TslGame.WuLogChangeTargetDistance
// Size: 0x88 (Inherited: 0x60)
struct FWuLogChangeTargetDistance : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString NetId; // 0x70(0x10)
	int32 Distance; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.WuLogEnterIndoorRange
// Size: 0x88 (Inherited: 0x60)
struct FWuLogEnterIndoorRange : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString NetId; // 0x70(0x10)
	bool bIsExit; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct TslGame.WuLogSpray
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSpray : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString SprayName; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogHelmetHide
// Size: 0x68 (Inherited: 0x60)
struct FWuLogHelmetHide : FLogBase {
	bool IsHat; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.WuLogLobbyMusic
// Size: 0x70 (Inherited: 0x60)
struct FWuLogLobbyMusic : FLogBase {
	struct FString MusicEventName; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogArenaRoundEnd
// Size: 0x88 (Inherited: 0x60)
struct FWuLogArenaRoundEnd : FLogBase {
	int32 Round; // 0x60(0x04)
	bool IsLastRound; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FWuLogArenaEndData> Arenas; // 0x68(0x10)
	struct TArray<struct FWuLogTeamInfoData> Teams; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogTeamInfoData
// Size: 0x30 (Inherited: 0x00)
struct FWuLogTeamInfoData {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	int32 TotalKills; // 0x08(0x04)
	int32 TotalMoney; // 0x0c(0x04)
	struct FString KeyPlayer; // 0x10(0x10)
	struct TArray<struct FWuLogCharacterWeapons> Characters; // 0x20(0x10)
};

// ScriptStruct TslGame.WuLogCharacterWeapons
// Size: 0xc8 (Inherited: 0x00)
struct FWuLogCharacterWeapons {
	struct FWuLogCharacter Character; // 0x00(0x90)
	struct FString PrimaryWeaponFirst; // 0x90(0x10)
	struct FString PrimaryWeaponSecond; // 0xa0(0x10)
	struct FString SecondaryWeapon; // 0xb0(0x10)
	int32 SpawnKitIndex; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogArenaEndData
// Size: 0x08 (Inherited: 0x00)
struct FWuLogArenaEndData {
	int32 ArenaID; // 0x00(0x04)
	int32 WinnerTeamId; // 0x04(0x04)
};

// ScriptStruct TslGame.WuLogArenaRoundStart
// Size: 0x78 (Inherited: 0x60)
struct FWuLogArenaRoundStart : FLogBase {
	int32 Round; // 0x60(0x04)
	bool IsLastRound; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FWuLogArenaStartData> Arenas; // 0x68(0x10)
};

// ScriptStruct TslGame.WuLogArenaStartData
// Size: 0x18 (Inherited: 0x00)
struct FWuLogArenaStartData {
	int32 ArenaID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWuLogTeamInfoData> Teams; // 0x08(0x10)
};

// ScriptStruct TslGame.WuLogArenaLoadoutBuy
// Size: 0x98 (Inherited: 0x60)
struct FWuLogArenaLoadoutBuy : FLogBase {
	struct FString PlayerName; // 0x60(0x10)
	int32 Sum; // 0x70(0x04)
	int32 ItemsNum; // 0x74(0x04)
	struct FString ItemID; // 0x78(0x10)
	struct FString ReplacedItemId; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogArenaCurrencyChange
// Size: 0x88 (Inherited: 0x60)
struct FWuLogArenaCurrencyChange : FLogBase {
	struct FString PlayerName; // 0x60(0x10)
	int32 CurrencyDif; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString Source; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogArenaScreenOpen
// Size: 0x80 (Inherited: 0x60)
struct FWuLogArenaScreenOpen : FLogBase {
	struct FString PlayerName; // 0x60(0x10)
	struct FString ScreenName; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogArenaGameStatePeriodic
// Size: 0xe8 (Inherited: 0x60)
struct FWuLogArenaGameStatePeriodic : FLogBase {
	struct FWuLogArenaGameState ArenaGameState; // 0x60(0x88)
};

// ScriptStruct TslGame.WuLogArenaGameState
// Size: 0x88 (Inherited: 0x60)
struct FWuLogArenaGameState : FLogBase {
	int32 ElapsedTime; // 0x60(0x04)
	int32 NumAliveTeams; // 0x64(0x04)
	int32 NumJoinPlayers; // 0x68(0x04)
	int32 NumStartPlayers; // 0x6c(0x04)
	int32 NumAlivePlayers; // 0x70(0x04)
	int32 Round; // 0x74(0x04)
	struct TArray<struct FWuLogArena> Arenas; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogArena
// Size: 0x24 (Inherited: 0x00)
struct FWuLogArena {
	struct FVector SafetyZonePosition; // 0x00(0x0c)
	float SafetyZoneRadius; // 0x0c(0x04)
	struct FVector PoisonGasWarningPosition; // 0x10(0x0c)
	float PoisonGasWarningRadius; // 0x1c(0x04)
	int32 ArenaID; // 0x20(0x04)
};

// ScriptStruct TslGame.WuLogInPacketStat
// Size: 0xa8 (Inherited: 0x60)
struct FWuLogInPacketStat : FLogBase {
	struct FString LeagueType; // 0x60(0x10)
	struct FString ModeName; // 0x70(0x10)
	struct FString Name; // 0x80(0x10)
	struct FString AccountId; // 0x90(0x10)
	float ElapsedTimeSec; // 0xa0(0x04)
	int32 NumOutOfOrder; // 0xa4(0x04)
};

// ScriptStruct TslGame.WuLogOutPacketLoss
// Size: 0xd0 (Inherited: 0x60)
struct FWuLogOutPacketLoss : FLogBase {
	struct FString LeagueType; // 0x60(0x10)
	struct FString ModeName; // 0x70(0x10)
	struct FString Name; // 0x80(0x10)
	struct FString AccountId; // 0x90(0x10)
	float ElapsedTimeSec; // 0xa0(0x04)
	int32 NumOutBunch; // 0xa4(0x04)
	int32 NumOutPacket; // 0xa8(0x04)
	int32 NumOutPacketNaked; // 0xac(0x04)
	struct TArray<struct FWuLostPacketData> NakedPacketDataList; // 0xb0(0x10)
	struct TArray<struct FWuLostBunchData> NakedBunchDataList; // 0xc0(0x10)
};

// ScriptStruct TslGame.WuLostBunchData
// Size: 0x18 (Inherited: 0x00)
struct FWuLostBunchData {
	int32 NumSent; // 0x00(0x04)
	int32 NumLoss; // 0x04(0x04)
	struct FString Content; // 0x08(0x10)
};

// ScriptStruct TslGame.WuLostPacketData
// Size: 0x0c (Inherited: 0x00)
struct FWuLostPacketData {
	int32 NumLoss; // 0x00(0x04)
	int32 SizeBitsPlain; // 0x04(0x04)
	int32 SizeBitsEncryped; // 0x08(0x04)
};

// ScriptStruct TslGame.WuLogParachuteFollowReleaseByHoldKey
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogParachuteFollowReleaseByHoldKey : FLogBase {
	struct FWuLogCharacter UserInfo; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogParachuteFollow
// Size: 0x118 (Inherited: 0x60)
struct FWuLogParachuteFollow : FLogBase {
	struct FWuLogCharacter UserInfo; // 0x60(0x90)
	bool IsFollower; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32 FollowerNum; // 0xf4(0x04)
	struct FString TargetName; // 0xf8(0x10)
	struct FString ModeName; // 0x108(0x10)
};

// ScriptStruct TslGame.WuLogPlayerMovementBaseChanged
// Size: 0x118 (Inherited: 0x60)
struct FWuLogPlayerMovementBaseChanged : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString NewMovementBase; // 0xf0(0x10)
	struct FString OldMovementBase; // 0x100(0x10)
	float MovedDistance; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct TslGame.WuLogPlayerScore
// Size: 0x138 (Inherited: 0x60)
struct FWuLogPlayerScore : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 KillScore; // 0xf0(0x04)
	int32 KillCount; // 0xf4(0x04)
	int32 DeathScore; // 0xf8(0x04)
	int32 DeathCount; // 0xfc(0x04)
	int32 AssistScore; // 0x100(0x04)
	int32 AssistCount; // 0x104(0x04)
	int32 ChainKillScore; // 0x108(0x04)
	int32 ChainKillCount; // 0x10c(0x04)
	int32 WinRoundScore; // 0x110(0x04)
	int32 WinRoundCount; // 0x114(0x04)
	int32 DefeatRoundScore; // 0x118(0x04)
	int32 DefeatRoundCount; // 0x11c(0x04)
	int32 WinMatchScore; // 0x120(0x04)
	int32 WinMatchCount; // 0x124(0x04)
	int32 DefeatMatchScore; // 0x128(0x04)
	int32 DefeatMatchCount; // 0x12c(0x04)
	int32 TotalScore; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct TslGame.WuDevLog
// Size: 0x80 (Inherited: 0x60)
struct FWuDevLog : FLogBase {
	struct FString DevLogKey; // 0x60(0x10)
	struct TArray<struct FWuDevLogElement> DevLogs; // 0x70(0x10)
};

// ScriptStruct TslGame.WuDevLogElement
// Size: 0x20 (Inherited: 0x00)
struct FWuDevLogElement {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLogPlayerHealed
// Size: 0x1a8 (Inherited: 0x60)
struct FWuLogPlayerHealed : FLogBase {
	struct FWuLogCharacter Healer; // 0x60(0x90)
	struct FWuLogCharacter Target; // 0xf0(0x90)
	int32 HealId; // 0x180(0x04)
	float Healamount; // 0x184(0x04)
	struct FString HealCauserName; // 0x188(0x10)
	struct FString HealTypeCategory; // 0x198(0x10)
};

// ScriptStruct TslGame.WuLogPlayerBuffed
// Size: 0x1a8 (Inherited: 0x60)
struct FWuLogPlayerBuffed : FLogBase {
	struct FWuLogCharacter Buffer; // 0x60(0x90)
	struct FWuLogCharacter Target; // 0xf0(0x90)
	int32 BuffId; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FString BuffCauserName; // 0x188(0x10)
	struct FString BuffType; // 0x198(0x10)
};

// ScriptStruct TslGame.WuLogItemSkillSpawn
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemSkillSpawn : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogCraftResult
// Size: 0x178 (Inherited: 0x60)
struct FWuLogCraftResult : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	bool SUCCESS; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FString FailedReason; // 0xf8(0x10)
	struct FString CraftItem; // 0x108(0x10)
	struct FWuLogItem ItemResult; // 0x118(0x50)
	struct TArray<struct FWuLogItem> Materials; // 0x168(0x10)
};

// ScriptStruct TslGame.WuLogConnectionTimeOutError
// Size: 0xa0 (Inherited: 0x60)
struct FWuLogConnectionTimeOutError : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	float DriverTime; // 0x70(0x04)
	float Threshold; // 0x74(0x04)
	struct FString RemoteAddress; // 0x78(0x10)
	bool IsServer; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString UniqueId; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogServerInfo
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogServerInfo : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString InstanceId; // 0x70(0x10)
	struct FString PublicIp; // 0x80(0x10)
	struct FString InstanceType; // 0x90(0x10)
	struct FString GameServerVersion; // 0xa0(0x10)
	struct FString Weather; // 0xb0(0x10)
	struct FString MapName; // 0xc0(0x10)
	struct FString StartTimeStamp; // 0xd0(0x10)
	struct FString EndTimeStamp; // 0xe0(0x10)
};

// ScriptStruct TslGame.WuLogPing
// Size: 0xc8 (Inherited: 0x60)
struct FWuLogPing : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	struct FString ModeName; // 0x80(0x10)
	float MissRate; // 0x90(0x04)
	float ReliableDelay; // 0x94(0x04)
	float UnreliableDelay; // 0x98(0x04)
	float ReliableDelayRange; // 0x9c(0x04)
	float UnreliableDelayRange; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString Nickname; // 0xa8(0x10)
	struct FString AccountId; // 0xb8(0x10)
};

// ScriptStruct TslGame.WuLogNickname
// Size: 0xb0 (Inherited: 0x60)
struct FWuLogNickname : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString PlayerNetId; // 0x70(0x10)
	struct FString Nickname; // 0x80(0x10)
	struct FString Ip; // 0x90(0x10)
	struct FString ClientVersion; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuLogLocationCorrection
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogLocationCorrection : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
	struct FString PlayerName; // 0x80(0x10)
	float LocDiff; // 0x90(0x04)
	float AllowedDiff; // 0x94(0x04)
	struct FVector Velocity; // 0x98(0x0c)
	float Speed; // 0xa4(0x04)
	struct FString MovementMode; // 0xa8(0x10)
	struct FString CustomMovementMode; // 0xb8(0x10)
	struct FString ClientMovementMode; // 0xc8(0x10)
	struct FString ClientCustomMovementMode; // 0xd8(0x10)
	float Ping; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct TslGame.WuLogFps
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogFps : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	struct FString ModeName; // 0x80(0x10)
	int32 ServerFps; // 0x90(0x04)
	int32 AlivePlayers; // 0x94(0x04)
	int32 JoinPlayers; // 0x98(0x04)
	float Duration; // 0x9c(0x04)
	float AvgInBytesPerSecond; // 0xa0(0x04)
	float AvgOutBytesPerSecond; // 0xa4(0x04)
	int32 MaxInBytesPerSecond; // 0xa8(0x04)
	int32 MaxOutBytesPerSecond; // 0xac(0x04)
	float UsedVirtualMemoryMiB; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.WuLogVehicleInteraction
// Size: 0x168 (Inherited: 0x60)
struct FWuLogVehicleInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	struct FString EventType; // 0x148(0x10)
	struct TArray<struct FWuStringIntPair> EventInfo; // 0x158(0x10)
};

// ScriptStruct TslGame.WuLogObjectInteraction
// Size: 0x120 (Inherited: 0x60)
struct FWuLogObjectInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString ObjectType; // 0xf0(0x10)
	struct FString ObjectTypeStatus; // 0x100(0x10)
	struct TArray<struct FWuStringIntPair> ObjectTypeAdditionalInfo; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogFlaregunCalled
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogFlaregunCalled : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	bool IsInWhiteZone; // 0xf0(0x01)
	bool IsCalledSuccessfully; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
};

// ScriptStruct TslGame.WuLogPlayerDeath
// Size: 0x110 (Inherited: 0x60)
struct FWuLogPlayerDeath : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FString> Weapons; // 0xf0(0x10)
	struct TArray<struct FString> Equips; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogXboxUnautorizedDevice
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogXboxUnautorizedDevice : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 KillCount; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogNetDriverError
// Size: 0x70 (Inherited: 0x60)
struct FWuLogNetDriverError : FLogBase {
	struct TArray<struct FWuDdosInfo> Infos; // 0x60(0x10)
};

// ScriptStruct TslGame.WuDdosInfo
// Size: 0x28 (Inherited: 0x00)
struct FWuDdosInfo {
	struct FString ErrorType; // 0x00(0x10)
	struct FString Ip; // 0x10(0x10)
	int32 Port; // 0x20(0x04)
	int32 Count; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogMissionListOpen
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogMissionListOpen : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogWeaponFireCount
// Size: 0x108 (Inherited: 0x60)
struct FWuLogWeaponFireCount : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString WeaponId; // 0xf0(0x10)
	int32 FireCount; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogRedZoneEnded
// Size: 0x70 (Inherited: 0x60)
struct FWuLogRedZoneEnded : FLogBase {
	struct TArray<struct FWuLogCharacter> Drivers; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogParachuteLanding
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogParachuteLanding : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	float Distance; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogObjectDestroy
// Size: 0x110 (Inherited: 0x60)
struct FWuLogObjectDestroy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString ObjectType; // 0xf0(0x10)
	struct FVector ObjectLocation; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuLogEmote
// Size: 0x120 (Inherited: 0x60)
struct FWuLogEmote : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString EmoteName; // 0xf0(0x10)
	struct FString EmoteType; // 0x100(0x10)
	struct TArray<struct FWuStringStringPair> AdditionalParameters; // 0x110(0x10)
};

// ScriptStruct TslGame.WuStringStringPair
// Size: 0x20 (Inherited: 0x00)
struct FWuStringStringPair {
	struct FString First; // 0x00(0x10)
	struct FString second; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLogVaultStart
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogVaultStart : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	bool IsLedgeGrab; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct TslGame.WuLogSkinUpdate
// Size: 0x170 (Inherited: 0x60)
struct FWuLogSkinUpdate : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	struct FString SkinName; // 0x140(0x10)
	struct FString SkinCategory; // 0x150(0x10)
	struct TArray<struct FWuLogItem> PartItems; // 0x160(0x10)
};

// ScriptStruct TslGame.WuLogMovementSpam
// Size: 0x98 (Inherited: 0x60)
struct FWuLogMovementSpam : FLogBase {
	struct FString AttackerId; // 0x60(0x10)
	struct FString VictimId; // 0x70(0x10)
	int32 AttackerLeftLeans; // 0x80(0x04)
	int32 AttackerRightLeans; // 0x84(0x04)
	int32 AttackerCrouches; // 0x88(0x04)
	int32 VictimLeftLeans; // 0x8c(0x04)
	int32 VictimRightLeans; // 0x90(0x04)
	int32 VictimCrouches; // 0x94(0x04)
};

// ScriptStruct TslGame.WuLogStatAccuracy
// Size: 0x78 (Inherited: 0x60)
struct FWuLogStatAccuracy : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 NumShots; // 0x70(0x04)
	int32 NumHits; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogLoadingFinished
// Size: 0x178 (Inherited: 0x60)
struct FWuLogLoadingFinished : FLogBase {
	struct FString DeviceName; // 0x60(0x10)
	struct FString Timestamp; // 0x70(0x10)
	struct FString MatchId; // 0x80(0x10)
	struct FString ServerName; // 0x90(0x10)
	struct FString ModeName; // 0xa0(0x10)
	struct FString Date; // 0xb0(0x10)
	struct FString State; // 0xc0(0x10)
	int32 LoadingTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FWuLogCharacter Character; // 0xd8(0x90)
	struct FString ActualHardwareName; // 0x168(0x10)
};

// ScriptStruct TslGame.WuLogFreeMemory
// Size: 0xb0 (Inherited: 0x60)
struct FWuLogFreeMemory : FLogBase {
	struct FString DeviceName; // 0x60(0x10)
	struct FString PlayerNetId; // 0x70(0x10)
	struct FString AccountId; // 0x80(0x10)
	struct TArray<struct FWuMemoryStat> MemoryStats; // 0x90(0x10)
	struct FString ActualHardwareName; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuMemoryStat
// Size: 0x18 (Inherited: 0x00)
struct FWuMemoryStat {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogMatchSetting
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogMatchSetting : FLogBase {
	bool IsCustomGame; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString MapName; // 0x68(0x10)
	struct FString ModeName; // 0x78(0x10)
	struct FString MatchId; // 0x88(0x10)
	int32 TeamCount; // 0x98(0x04)
	int32 MinPlayerCount; // 0x9c(0x04)
	int32 MaxPlayerCount; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FWuStringStringPair> MatchSettings; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogBulletShotDistance
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogBulletShotDistance : FLogBase {
	struct FVector VictimLocation; // 0x60(0x0c)
	struct FVector HitLocation; // 0x6c(0x0c)
	float Distance; // 0x78(0x04)
	bool IsVictimInVehicle; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float VictimSpeed; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FString VictimStanceMode; // 0x88(0x10)
	struct FString VictimMovementMode; // 0x98(0x10)
	struct FString AttackerAccountId; // 0xa8(0x10)
	float AttackerPing; // 0xb8(0x04)
	float AttackerRDelay; // 0xbc(0x04)
	float AttackerUDelay; // 0xc0(0x04)
	float AttackerUMissPercent; // 0xc4(0x04)
	struct FString VictimAccountId; // 0xc8(0x10)
	float VictimPing; // 0xd8(0x04)
	float VictimRDelay; // 0xdc(0x04)
	float VictimUDelay; // 0xe0(0x04)
	float VictimUMissPercent; // 0xe4(0x04)
	int32 AttackId; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct TslGame.WuLogSteamNoNetworkConnection
// Size: 0x88 (Inherited: 0x60)
struct FWuLogSteamNoNetworkConnection : FLogBase {
	int32 DisconnectionCountPerGame; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString SteamKickReason; // 0x68(0x10)
	struct FString AccountId; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogBodyPenetrationDamageInfo
// Size: 0x110 (Inherited: 0x60)
struct FWuLogBodyPenetrationDamageInfo : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	float DamageDiff; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString DamageZone; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogCheat
// Size: 0x138 (Inherited: 0x60)
struct FWuLogCheat : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString CheatType; // 0xf0(0x10)
	struct FString Description; // 0x100(0x10)
	float ParamFloat1; // 0x110(0x04)
	float ParamFloat2; // 0x114(0x04)
	struct FString ParamString1; // 0x118(0x10)
	struct FString ParamString2; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogSwimEnd
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogSwimEnd : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	float SwimDistance; // 0xf0(0x04)
	float MaxSwimDepthOfWater; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogSwimStart
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogSwimStart : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogWheelDestroy
// Size: 0x178 (Inherited: 0x60)
struct FWuLogWheelDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogVehicle Vehicle; // 0xf8(0x58)
	int32 WheelIndex; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString DamageTypeCategory; // 0x158(0x10)
	struct FString DamageCauserName; // 0x168(0x10)
};

// ScriptStruct TslGame.WuLogVehicleDestroy
// Size: 0x178 (Inherited: 0x60)
struct FWuLogVehicleDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogVehicle Vehicle; // 0xf8(0x58)
	struct FString DamageTypeCategory; // 0x150(0x10)
	struct FString DamageCauserName; // 0x160(0x10)
	float Distance; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
};

// ScriptStruct TslGame.WuLogVehicleDamage
// Size: 0x178 (Inherited: 0x60)
struct FWuLogVehicleDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogVehicle Vehicle; // 0xf8(0x58)
	struct FString DamageTypeCategory; // 0x150(0x10)
	struct FString DamageCauserName; // 0x160(0x10)
	float Damage; // 0x170(0x04)
	float Distance; // 0x174(0x04)
};

// ScriptStruct TslGame.WuLogVehicleLeave
// Size: 0x168 (Inherited: 0x60)
struct FWuLogVehicleLeave : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	float RideDistance; // 0x148(0x04)
	int32 SeatIndex; // 0x14c(0x04)
	float MaxSpeed; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<struct FWuLogCharacter> FellowPassengers; // 0x158(0x10)
};

// ScriptStruct TslGame.WuLogVehicleRide
// Size: 0x160 (Inherited: 0x60)
struct FWuLogVehicleRide : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	int32 SeatIndex; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct FWuLogCharacter> FellowPassengers; // 0x150(0x10)
};

// ScriptStruct TslGame.WuLogVehicleSpawn
// Size: 0x80 (Inherited: 0x60)
struct FWuLogVehicleSpawn : FLogBase {
	struct FString VehicleId; // 0x60(0x10)
	struct FVector Location; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogVehicleAISpawn
// Size: 0xc8 (Inherited: 0x60)
struct FWuLogVehicleAISpawn : FLogBase {
	struct FString SpawnId; // 0x60(0x10)
	struct FWuLogVehicle Vehicle; // 0x70(0x58)
};

// ScriptStruct TslGame.WuLogUseRevivalTransmitter
// Size: 0x88 (Inherited: 0x60)
struct FWuLogUseRevivalTransmitter : FLogBase {
	int32 phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString AccountId; // 0x68(0x10)
	struct FVector UsingPosition; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.WuLogUseRevivalTower
// Size: 0x80 (Inherited: 0x60)
struct FWuLogUseRevivalTower : FLogBase {
	int32 phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString AccountId; // 0x68(0x10)
	bool bIsSuccess; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct TslGame.WuLogRevivalTowerSpawn
// Size: 0x70 (Inherited: 0x60)
struct FWuLogRevivalTowerSpawn : FLogBase {
	struct FVector SpawnedPosition; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct TslGame.WuLogCarePackageLand
// Size: 0x90 (Inherited: 0x60)
struct FWuLogCarePackageLand : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x30)
};

// ScriptStruct TslGame.WuLogItemPackage
// Size: 0x30 (Inherited: 0x00)
struct FWuLogItemPackage {
	struct FString ItemPackageId; // 0x00(0x10)
	struct FVector Location; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FWuLogItem> Items; // 0x20(0x10)
};

// ScriptStruct TslGame.WuLogCarePackageSpawn
// Size: 0x90 (Inherited: 0x60)
struct FWuLogCarePackageSpawn : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x30)
};

// ScriptStruct TslGame.WuLogLootTruckPackageSpawn
// Size: 0x178 (Inherited: 0x60)
struct FWuLogLootTruckPackageSpawn : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x30)
	struct FWuLogCharacter Character; // 0x90(0x90)
	struct FWuLogVehicle Vehicle; // 0x120(0x58)
};

// ScriptStruct TslGame.WuLogLanguage
// Size: 0x110 (Inherited: 0x60)
struct FWuLogLanguage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString WindowsLanguage; // 0xf0(0x10)
	struct FString GameLanguage; // 0x100(0x10)
};

// ScriptStruct TslGame.WuSystemInfo
// Size: 0x248 (Inherited: 0x60)
struct FWuSystemInfo : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString OsLanguage; // 0xf0(0x10)
	struct FString GameLanguage; // 0x100(0x10)
	struct FString OsVersion; // 0x110(0x10)
	struct FString CpuName; // 0x120(0x10)
	struct FString GpuName; // 0x130(0x10)
	int32 RamInGB; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString BaseBoardSerial; // 0x148(0x10)
	struct TArray<struct FString> MemorySerials; // 0x158(0x10)
	int32 ArpIpCount; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FString OsUserAccount; // 0x170(0x10)
	struct TArray<struct FString> DiskModelNames; // 0x180(0x10)
	struct TArray<struct FString> DiskSerials; // 0x190(0x10)
	struct TArray<struct FString> MonitorModelNames; // 0x1a0(0x10)
	struct TArray<struct FString> MonitorSerials; // 0x1b0(0x10)
	struct TArray<struct FString> MemoryModelNames; // 0x1c0(0x10)
	struct FString BaseBoardModelName; // 0x1d0(0x10)
	struct TArray<struct FString> GatewayMacAddress; // 0x1e0(0x10)
	bool UsingXenuine; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	struct FWuGraphicSettings GraphicSettings; // 0x1f4(0x40)
	char pad_234[0x4]; // 0x234(0x04)
	struct FString CpuClock; // 0x238(0x10)
};

// ScriptStruct TslGame.WuGraphicSettings
// Size: 0x40 (Inherited: 0x00)
struct FWuGraphicSettings {
	int32 ResolutionWidth; // 0x00(0x04)
	int32 ResolutionHeight; // 0x04(0x04)
	bool VSync; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 DisplayMode; // 0x0c(0x04)
	int32 FOV; // 0x10(0x04)
	int32 ScreenScale; // 0x14(0x04)
	int32 AntiAliasing; // 0x18(0x04)
	int32 PostProcessing; // 0x1c(0x04)
	int32 Shadows; // 0x20(0x04)
	int32 Textures; // 0x24(0x04)
	int32 Effects; // 0x28(0x04)
	int32 Foliage; // 0x2c(0x04)
	int32 ViewDistance; // 0x30(0x04)
	bool MotionBlur; // 0x34(0x01)
	bool MinimapDynamicZoom; // 0x35(0x01)
	bool FreelockInterpolation; // 0x36(0x01)
	bool Replay; // 0x37(0x01)
	bool DeathCam; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 GraphicsAPI; // 0x3c(0x04)
};

// ScriptStruct TslGame.WuLogHeal
// Size: 0x148 (Inherited: 0x60)
struct FWuLogHeal : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	float Healamount; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// ScriptStruct TslGame.WuLogEmPickupLiftOff
// Size: 0x110 (Inherited: 0x60)
struct FWuLogEmPickupLiftOff : FLogBase {
	struct FWuLogCharacter Instigator; // 0x60(0x90)
	struct TArray<struct FWuLogCharacter> Riders; // 0xf0(0x10)
	int32 VehicleUniqueId; // 0x100(0x04)
	int32 BlueZonePhase; // 0x104(0x04)
	float DistanceToBluezone; // 0x108(0x04)
	float DistanceToSafezone; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuLogItemThrow
// Size: 0x1d8 (Inherited: 0x60)
struct FWuLogItemThrow : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogCharacter Target; // 0xf0(0x90)
	struct FWuLogItem Item; // 0x180(0x50)
	float Distance; // 0x1d0(0x04)
	bool IsSuccess; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
};

// ScriptStruct TslGame.WuLogItemUse
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemUse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogItemDetach
// Size: 0x190 (Inherited: 0x60)
struct FWuLogItemDetach : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem ParentItem; // 0xf0(0x50)
	struct FWuLogItem ChildItem; // 0x140(0x50)
};

// ScriptStruct TslGame.WuLogItemAttachedAll
// Size: 0x190 (Inherited: 0x60)
struct FWuLogItemAttachedAll : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem ParentItem; // 0xf0(0x50)
	struct FWuLogItem ChildItem; // 0x140(0x50)
};

// ScriptStruct TslGame.WuLogItemAttach
// Size: 0x190 (Inherited: 0x60)
struct FWuLogItemAttach : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem ParentItem; // 0xf0(0x50)
	struct FWuLogItem ChildItem; // 0x140(0x50)
};

// ScriptStruct TslGame.WuLogItemUnequip
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemUnequip : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogItemEquip
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemEquip : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogItemDrop
// Size: 0x148 (Inherited: 0x60)
struct FWuLogItemDrop : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	bool IsDropVolatility; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// ScriptStruct TslGame.WuLogItemPickupFromCustomPackage
// Size: 0x160 (Inherited: 0x60)
struct FWuLogItemPickupFromCustomPackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	struct FString SourceUniqueId; // 0x140(0x10)
	struct FString CustomPackageUniqueId; // 0x150(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromVehicleTrunk
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogItemPickupFromVehicleTrunk : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	struct FWuLogItem Item; // 0x148(0x50)
	float BeforeTrunkCapacity; // 0x198(0x04)
	float CurrentTrunkCapacity; // 0x19c(0x04)
};

// ScriptStruct TslGame.WuLogItemPutToVehicleTrunk
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogItemPutToVehicleTrunk : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	struct FWuLogItem Item; // 0x148(0x50)
	float BeforeTrunkCapacity; // 0x198(0x04)
	float CurrentTrunkCapacity; // 0x19c(0x04)
};

// ScriptStruct TslGame.WuLogItemPickupFromRandomBox
// Size: 0x150 (Inherited: 0x60)
struct FWuLogItemPickupFromRandomBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Weapon; // 0xf0(0x50)
	struct FString RandomBoxName; // 0x140(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromLootBox
// Size: 0x158 (Inherited: 0x60)
struct FWuLogItemPickupFromLootBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	int32 OwnerTeamId; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString CreatorAccountId; // 0x148(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromItemPackage
// Size: 0x150 (Inherited: 0x60)
struct FWuLogItemPickupFromItemPackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	struct FString PackageName; // 0x140(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromCarepackage
// Size: 0x158 (Inherited: 0x60)
struct FWuLogItemPickupFromCarepackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	int32 CarePackageUniqueId; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString CarePackageName; // 0x148(0x10)
};

// ScriptStruct TslGame.WuLogItemPickup
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemPickup : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogItemSpawn
// Size: 0x78 (Inherited: 0x60)
struct FWuLogItemSpawn : FLogBase {
	struct FString ItemID; // 0x60(0x10)
	int32 SpawnCount; // 0x70(0x04)
	int32 StackCount; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogMatchLastDefeat
// Size: 0xc8 (Inherited: 0x60)
struct FWuLogMatchLastDefeat : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString DamageTypeCategory; // 0x70(0x10)
	struct FString VictimAccountId; // 0x80(0x10)
	struct FString DamageCauserName; // 0x90(0x10)
	struct FVector AttackerLocation; // 0xa0(0x0c)
	struct FVector VictimLocation; // 0xac(0x0c)
	bool IsFatal; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 DBNOId; // 0xbc(0x04)
	int32 VictimTeamId; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogMatchFirstDefeat
// Size: 0xc8 (Inherited: 0x60)
struct FWuLogMatchFirstDefeat : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString DamageTypeCategory; // 0x70(0x10)
	struct FString VictimAccountId; // 0x80(0x10)
	struct FString DamageCauserName; // 0x90(0x10)
	struct FVector AttackerLocation; // 0xa0(0x0c)
	struct FVector VictimLocation; // 0xac(0x0c)
	bool IsFatal; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 DBNOId; // 0xbc(0x04)
	int32 VictimTeamId; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogExterminatedFromOutgame
// Size: 0x80 (Inherited: 0x60)
struct FWuLogExterminatedFromOutgame : FLogBase {
	struct TArray<struct FString> TeamAccounts; // 0x60(0x10)
	struct TArray<struct FString> KillerTeamAccounts; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogPlayerMatchFinished
// Size: 0x1c0 (Inherited: 0x60)
struct FWuLogPlayerMatchFinished : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuGameResultPerPlayer GameResult; // 0xf0(0xb0)
	struct FWuPlayerWeaponStats WeaponStats; // 0x1a0(0x20)
};

// ScriptStruct TslGame.WuPlayerWeaponStats
// Size: 0x20 (Inherited: 0x00)
struct FWuPlayerWeaponStats {
	struct FString AccountId; // 0x00(0x10)
	struct TArray<struct FWuWeaponStatsRecord> Stats; // 0x10(0x10)
};

// ScriptStruct TslGame.WuWeaponStatsRecord
// Size: 0x38 (Inherited: 0x00)
struct FWuWeaponStatsRecord {
	struct FString Weapon; // 0x00(0x10)
	int32 Damage; // 0x10(0x04)
	int32 DBNODamage; // 0x14(0x04)
	int32 Shots; // 0x18(0x04)
	int32 Hits; // 0x1c(0x04)
	int32 DBNOHits; // 0x20(0x04)
	int32 HoldingTime; // 0x24(0x04)
	struct TArray<struct FWuWeaponHitDetails> HitDetails; // 0x28(0x10)
};

// ScriptStruct TslGame.WuWeaponHitDetails
// Size: 0x28 (Inherited: 0x00)
struct FWuWeaponHitDetails {
	struct FString BodyPart; // 0x00(0x10)
	int32 Kills; // 0x10(0x04)
	int32 DBNOs; // 0x14(0x04)
	int32 Hits; // 0x18(0x04)
	int32 DBNOHits; // 0x1c(0x04)
	int32 Damage; // 0x20(0x04)
	int32 DBNODamage; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogPlayerKillV2
// Size: 0x490 (Inherited: 0x60)
struct FWuLogPlayerKillV2 : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 DBNOId; // 0x64(0x04)
	struct FWuGameResultPerPlayer VictimGameResult; // 0x68(0xb0)
	struct FWuLogCharacter Victim; // 0x118(0x90)
	struct FString VictimWeapon; // 0x1a8(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x1b8(0x10)
	struct FWuLogCharacter DBNOMaker; // 0x1c8(0x90)
	struct FWuLogKillDamageInfo DBNODamageInfo; // 0x258(0x48)
	struct FWuLogCharacter Finisher; // 0x2a0(0x90)
	struct FWuLogKillDamageInfo FinishDamageInfo; // 0x330(0x48)
	struct FWuLogCharacter Killer; // 0x378(0x90)
	struct FWuLogKillDamageInfo KillerDamageInfo; // 0x408(0x48)
	struct TArray<struct FString> Assists_AccountId; // 0x450(0x10)
	struct TArray<struct FString> TeamKillers_AccountId; // 0x460(0x10)
	bool IsSuicide; // 0x470(0x01)
	bool IsKillSteal; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct TArray<struct FString> ReloadedWeaponsOfKiller; // 0x478(0x10)
	bool IsVictimIsBlind; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	int32 AmmoInClipOfKiller; // 0x48c(0x04)
};

// ScriptStruct TslGame.WuLogKillDamageInfo
// Size: 0x48 (Inherited: 0x00)
struct FWuLogKillDamageInfo {
	struct FString DamageReason; // 0x00(0x10)
	struct FString DamageTypeCategory; // 0x10(0x10)
	struct FString DamageCauserName; // 0x20(0x10)
	struct TArray<struct FString> AdditionalInfo; // 0x30(0x10)
	float Distance; // 0x40(0x04)
	bool IsThroughPenetrableWall; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct TslGame.WuLogPlayerKill
// Size: 0x340 (Inherited: 0x60)
struct FWuLogPlayerKill : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Killer; // 0x68(0x90)
	struct FWuLogCharacter Victim; // 0xf8(0x90)
	struct FWuLogCharacter Assistant; // 0x188(0x90)
	int32 DBNOId; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct FString DamageReason; // 0x220(0x10)
	struct FString DamageTypeCategory; // 0x230(0x10)
	struct FString DamageCauserName; // 0x240(0x10)
	struct TArray<struct FString> DamageCauserAdditionalInfo; // 0x250(0x10)
	struct FString VictimWeapon; // 0x260(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x270(0x10)
	float Distance; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FWuGameResultPerPlayer VictimGameResult; // 0x288(0xb0)
	bool IsThroughPenetrableWall; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
};

// ScriptStruct TslGame.WuLogPlayerRevive
// Size: 0x188 (Inherited: 0x60)
struct FWuLogPlayerRevive : FLogBase {
	struct FWuLogCharacter Reviver; // 0x60(0x90)
	struct FWuLogCharacter Victim; // 0xf0(0x90)
	int32 DBNOId; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct TslGame.WuLogArmorDestroy
// Size: 0x210 (Inherited: 0x60)
struct FWuLogArmorDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogCharacter Victim; // 0xf8(0x90)
	struct FString DamageTypeCategory; // 0x188(0x10)
	struct FString DamageReason; // 0x198(0x10)
	struct FString DamageCauserName; // 0x1a8(0x10)
	struct FWuLogItem Item; // 0x1b8(0x50)
	float Distance; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerMakeGroggy
// Size: 0x1f8 (Inherited: 0x60)
struct FWuLogPlayerMakeGroggy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogCharacter Victim; // 0xf8(0x90)
	struct FString DamageReason; // 0x188(0x10)
	struct FString DamageTypeCategory; // 0x198(0x10)
	struct FString DamageCauserName; // 0x1a8(0x10)
	struct TArray<struct FString> DamageCauserAdditionalInfo; // 0x1b8(0x10)
	struct FString VictimWeapon; // 0x1c8(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x1d8(0x10)
	float Distance; // 0x1e8(0x04)
	bool IsAttackerInVehicle; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	int32 DBNOId; // 0x1f0(0x04)
	bool IsThroughPenetrableWall; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
};

// ScriptStruct TslGame.WuLogPlayerTakeDamage
// Size: 0x1c8 (Inherited: 0x60)
struct FWuLogPlayerTakeDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogCharacter Victim; // 0xf8(0x90)
	struct FString DamageTypeCategory; // 0x188(0x10)
	struct FString DamageReason; // 0x198(0x10)
	float Damage; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FString DamageCauserName; // 0x1b0(0x10)
	bool IsThroughPenetrableWall; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
};

// ScriptStruct TslGame.WuLogPlayerUseFlareGun
// Size: 0x158 (Inherited: 0x60)
struct FWuLogPlayerUseFlareGun : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FString AttackType; // 0xf8(0x10)
	struct FWuLogItem Weapon; // 0x108(0x50)
};

// ScriptStruct TslGame.WuLogPlayerDestroyBreachableWall
// Size: 0x140 (Inherited: 0x60)
struct FWuLogPlayerDestroyBreachableWall : FLogBase {
	struct FWuLogCharacter Attacker; // 0x60(0x90)
	struct FWuLogItem Weapon; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogPlayerDestroyProp
// Size: 0x110 (Inherited: 0x60)
struct FWuLogPlayerDestroyProp : FLogBase {
	struct FWuLogCharacter Attacker; // 0x60(0x90)
	struct FString ObjectType; // 0xf0(0x10)
	struct FVector ObjectLocation; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuLogBlackZoneEnded
// Size: 0x70 (Inherited: 0x60)
struct FWuLogBlackZoneEnded : FLogBase {
	struct TArray<struct FWuLogCharacter> Survivors; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogPlayerSummonBlackZone
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogPlayerSummonBlackZone : FLogBase {
	struct FWuLogCharacter Player; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogPlayerUseProjDecoy
// Size: 0x100 (Inherited: 0x60)
struct FWuLogPlayerUseProjDecoy : FLogBase {
	struct FWuLogCharacter DecoyInstigator; // 0x60(0x90)
	struct FVector Location; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct TslGame.WuLogPlayerUseWeapDecoy
// Size: 0x100 (Inherited: 0x60)
struct FWuLogPlayerUseWeapDecoy : FLogBase {
	struct FWuLogCharacter DecoyInstigator; // 0x60(0x90)
	struct FVector Location; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct TslGame.WuLogPlayerUseThrowable
// Size: 0x158 (Inherited: 0x60)
struct FWuLogPlayerUseThrowable : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FString AttackType; // 0xf8(0x10)
	struct FWuLogItem Weapon; // 0x108(0x50)
};

// ScriptStruct TslGame.WuLogPlayerAttack
// Size: 0x1b0 (Inherited: 0x60)
struct FWuLogPlayerAttack : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FString AttackType; // 0xf8(0x10)
	struct FWuLogItem Weapon; // 0x108(0x50)
	struct FWuLogVehicle Vehicle; // 0x158(0x58)
};

// ScriptStruct TslGame.WuLogClientHitch
// Size: 0x140 (Inherited: 0x60)
struct FWuLogClientHitch : FLogBase {
	struct FString GameModeType; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	float ElapsedTime; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FWuLogCharacter CharacterLog; // 0x88(0x90)
	struct FVector CharacterVelocity; // 0x118(0x0c)
	bool IsInAircraft; // 0x124(0x01)
	bool IsFallingWithParachute; // 0x125(0x01)
	bool IsParachuting; // 0x126(0x01)
	bool IsInCar; // 0x127(0x01)
	struct FString RecentShownWidget; // 0x128(0x10)
	int32 AvailableCpuPhysicalMemory; // 0x138(0x04)
	int32 AvailableCpuVirtualMemory; // 0x13c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerPosition
// Size: 0x170 (Inherited: 0x60)
struct FWuLogPlayerPosition : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	float ElapsedTime; // 0x148(0x04)
	int32 NumAlivePlayers; // 0x14c(0x04)
	float ClientFPS; // 0x150(0x04)
	int32 Under10FPS; // 0x154(0x04)
	int32 Under20FPS; // 0x158(0x04)
	int32 Under30FPS; // 0x15c(0x04)
	int32 Under60FPS; // 0x160(0x04)
	int32 MinFPS; // 0x164(0x04)
	int32 MaxFPS; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerKicked
// Size: 0x100 (Inherited: 0x60)
struct FWuLogPlayerKicked : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString Reason; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogPlayerLogout
// Size: 0x80 (Inherited: 0x60)
struct FWuLogPlayerLogout : FLogBase {
	struct FString NetId; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogPlayerLogin
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogPlayerLogin : FLogBase {
	struct FString NetId; // 0x60(0x10)
	bool Result; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString ErrorMessage; // 0x78(0x10)
	struct FString AccountId; // 0x88(0x10)
	struct FString Ip; // 0x98(0x10)
	struct FString ClientVersion; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogPlayerCreate
// Size: 0x100 (Inherited: 0x60)
struct FWuLogPlayerCreate : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FString> Equips; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogServerFpsWatchDog
// Size: 0x188 (Inherited: 0x60)
struct FWuLogServerFpsWatchDog : FLogBase {
	struct FString ProfileType; // 0x60(0x10)
	struct FString MatchId; // 0x70(0x10)
	struct FString MapName; // 0x80(0x10)
	struct FString LeagueType; // 0x90(0x10)
	struct FString ModeName; // 0xa0(0x10)
	struct FString CpuName; // 0xb0(0x10)
	int32 RamInGB; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString InfraCode; // 0xc8(0x10)
	int32 FrameCount; // 0xd8(0x04)
	int32 SessionElapsedTime; // 0xdc(0x04)
	float MillisecondsPerCycle; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FWuLogServerFps GameThreadStats; // 0xe8(0xa0)
};

// ScriptStruct TslGame.WuLogServerFps
// Size: 0xa0 (Inherited: 0x00)
struct FWuLogServerFps {
	int64 FrameTime; // 0x00(0x08)
	int64 GameEngineTick; // 0x08(0x08)
	int64 WorldTickTime; // 0x10(0x08)
	int64 TickTime; // 0x18(0x08)
	int64 TG_PrePhysics; // 0x20(0x08)
	int64 TG_EndPhysics; // 0x28(0x08)
	int64 TG_StartPhysics; // 0x30(0x08)
	int64 TG_DuringPhysics; // 0x38(0x08)
	int64 TG_PostPhysics; // 0x40(0x08)
	int64 TG_PostUpdateWork; // 0x48(0x08)
	int64 TG_LastDemotable; // 0x50(0x08)
	int64 NetBroadcastTickTime; // 0x58(0x08)
	int64 NetConnectionTick; // 0x60(0x08)
	int64 NetUpdateUnmappedObjectsTime; // 0x68(0x08)
	int64 QueueTicks; // 0x70(0x08)
	int64 UpdateCameraTime; // 0x78(0x08)
	int64 NetWorldTickTime; // 0x80(0x08)
	int64 GTTickableTime; // 0x88(0x08)
	int64 TickAsyncLoadingGT; // 0x90(0x08)
	int64 DeferredTickTime; // 0x98(0x08)
};

// ScriptStruct TslGame.WuLogServerStat
// Size: 0x90 (Inherited: 0x60)
struct FWuLogServerStat : FLogBase {
	int32 ElapsedTime; // 0x60(0x04)
	int32 NumAliveTeams; // 0x64(0x04)
	int32 NumJoinPlayers; // 0x68(0x04)
	int32 NumStartPlayers; // 0x6c(0x04)
	int32 NumAlivePlayers; // 0x70(0x04)
	float PingMin; // 0x74(0x04)
	float PingMax; // 0x78(0x04)
	float PingAvg; // 0x7c(0x04)
	float FrameRateMin; // 0x80(0x04)
	float FrameRateMax; // 0x84(0x04)
	float FrameRateAvg; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.WuLogGameStatePeriodic
// Size: 0xc0 (Inherited: 0x60)
struct FWuLogGameStatePeriodic : FLogBase {
	struct FWuLogGameState GameState; // 0x60(0x60)
};

// ScriptStruct TslGame.WuLogGameState
// Size: 0x60 (Inherited: 0x00)
struct FWuLogGameState {
	int32 ElapsedTime; // 0x00(0x04)
	int32 NumStartTeams; // 0x04(0x04)
	int32 NumAliveTeams; // 0x08(0x04)
	int32 NumParticipatedTeams; // 0x0c(0x04)
	int32 NumJoinPlayers; // 0x10(0x04)
	int32 NumStartPlayers; // 0x14(0x04)
	int32 NumAlivePlayers; // 0x18(0x04)
	int32 NumParticipatedPlayers; // 0x1c(0x04)
	struct FVector SafetyZonePosition; // 0x20(0x0c)
	float SafetyZoneRadius; // 0x2c(0x04)
	struct FVector PoisonGasWarningPosition; // 0x30(0x0c)
	float PoisonGasWarningRadius; // 0x3c(0x04)
	struct FVector RedZonePosition; // 0x40(0x0c)
	float RedZoneRadius; // 0x4c(0x04)
	struct FVector BlackZonePosition; // 0x50(0x0c)
	float BlackZoneRadius; // 0x5c(0x04)
};

// ScriptStruct TslGame.WuLogMatchRating
// Size: 0x70 (Inherited: 0x60)
struct FWuLogMatchRating : FLogBase {
	struct TArray<struct FWuLogPlayerRating> PlayerRatings; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogPlayerRating
// Size: 0x18 (Inherited: 0x00)
struct FWuLogPlayerRating {
	struct FString AccountId; // 0x00(0x10)
	int32 Rating; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogWeaponAccuracyStats
// Size: 0x70 (Inherited: 0x60)
struct FWuLogWeaponAccuracyStats : FLogBase {
	struct TArray<struct FWuPlayerWeaponStats> Players; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogWeaponChange
// Size: 0x90 (Inherited: 0x60)
struct FWuLogWeaponChange : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString WeaponInHand; // 0x70(0x10)
	struct FString WeaponHolstered; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogMatchEnd
// Size: 0xb0 (Inherited: 0x60)
struct FWuLogMatchEnd : FLogBase {
	struct TArray<struct FWuLogCharacterWeapons> Characters; // 0x60(0x10)
	struct TArray<struct FWuLogRewardDetail> RewardDetail; // 0x70(0x10)
	struct FWuGameFinishedResult GameResultOnFinished; // 0x80(0x10)
	struct TArray<struct FWuWaypointStat> WaypointStats; // 0x90(0x10)
	struct TArray<struct FWuPlayerWeaponStats> AllWeaponStats; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuWaypointStat
// Size: 0x18 (Inherited: 0x00)
struct FWuWaypointStat {
	struct FString UserName; // 0x00(0x10)
	int32 WaypointUsedCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuGameFinishedResult
// Size: 0x10 (Inherited: 0x00)
struct FWuGameFinishedResult {
	struct TArray<struct FWuGameResultPerPlayer> Results; // 0x00(0x10)
};

// ScriptStruct TslGame.WuLogRewardDetail
// Size: 0x38 (Inherited: 0x00)
struct FWuLogRewardDetail {
	struct FString AccountId; // 0x00(0x10)
	struct FWuLogPlayTimeRecord PlayTimeRecord; // 0x10(0x08)
	struct FWuLogBpReward BpReward; // 0x18(0x1c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.WuLogBpReward
// Size: 0x1c (Inherited: 0x00)
struct FWuLogBpReward {
	int32 PlayTime; // 0x00(0x04)
	int32 Ranking; // 0x04(0x04)
	int32 Kill; // 0x08(0x04)
	int32 Damage; // 0x0c(0x04)
	int32 Boosting; // 0x10(0x04)
	int32 RawTotal; // 0x14(0x04)
	int32 BoostedTotal; // 0x18(0x04)
};

// ScriptStruct TslGame.WuLogMatchStart
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogMatchStart : FLogBase {
	struct FString MapName; // 0x60(0x10)
	struct FString WeatherId; // 0x70(0x10)
	struct TArray<struct FWuLogCharacterWeapons> Characters; // 0x80(0x10)
	struct FString CameraViewBehaviour; // 0x90(0x10)
	int32 TeamSize; // 0xa0(0x04)
	bool IsCustomGame; // 0xa4(0x01)
	bool IsEventMode; // 0xa5(0x01)
	bool IsAIMode; // 0xa6(0x01)
	char pad_A7[0x1]; // 0xa7(0x01)
	struct FString BlueZoneCustomOptions; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogGasPumpValue
// Size: 0x108 (Inherited: 0x60)
struct FWuLogGasPumpValue : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString Action; // 0xf0(0x10)
	float Value; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogGasPump
// Size: 0x100 (Inherited: 0x60)
struct FWuLogGasPump : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString Action; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleBlueChipDetector
// Size: 0x108 (Inherited: 0x60)
struct FWuLogSoftroleBlueChipDetector : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString Action; // 0xf0(0x10)
	float ScanningDistance; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeEnd
// Size: 0x110 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeEnd : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString PrimaryWeaponFirst; // 0xf0(0x10)
	struct FString PrimaryWeaponSecond; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeBegin
// Size: 0x110 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeBegin : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString PrimaryWeaponFirst; // 0xf0(0x10)
	struct FString PrimaryWeaponSecond; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeMarkDrone
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeMarkDrone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FVector Location; // 0xf0(0x0c)
	float Distance; // 0xfc(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeMark
// Size: 0x188 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeMark : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogCharacter MarkedCharacter; // 0xf0(0x90)
	float Distance; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleTraumaBag
// Size: 0x1d0 (Inherited: 0x60)
struct FWuLogSoftroleTraumaBag : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogCharacter Target; // 0xf0(0x90)
	struct FWuLogItem HealingItem; // 0x180(0x50)
};

// ScriptStruct TslGame.WuLogSoftroleDrone
// Size: 0x158 (Inherited: 0x60)
struct FWuLogSoftroleDrone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem InventoryItem; // 0xf0(0x50)
	struct FString Action; // 0x140(0x10)
	float FlyingElapsedTime; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
};

// ScriptStruct TslGame.WuLogCharacterCarry
// Size: 0x100 (Inherited: 0x60)
struct FWuLogCharacterCarry : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString CarryState; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogMatchDefinition
// Size: 0x120 (Inherited: 0x60)
struct FWuLogMatchDefinition : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString ModeId; // 0x70(0x10)
	struct FString SubmodeId; // 0x80(0x10)
	struct FString PingQuality; // 0x90(0x10)
	struct FString SeasonState; // 0xa0(0x10)
	struct TArray<struct FWuLogCharacterRating> Ratings; // 0xb0(0x10)
	struct FString DivisionId; // 0xc0(0x10)
	struct FString InstanceId; // 0xd0(0x10)
	struct FString PublicId; // 0xe0(0x10)
	struct FString InstanceType; // 0xf0(0x10)
	struct FString GameServerVersion; // 0x100(0x10)
	struct FString OsPlatform; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogCharacterRating
// Size: 0x30 (Inherited: 0x00)
struct FWuLogCharacterRating {
	struct FString AccountId; // 0x00(0x10)
	struct FString NetId; // 0x10(0x10)
	int32 MMR; // 0x20(0x04)
	int32 RankPoint; // 0x24(0x04)
	int32 Ping; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.WuLogPhaseChange
// Size: 0x78 (Inherited: 0x60)
struct FWuLogPhaseChange : FLogBase {
	int32 phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FString> PlayersInWhiteCircle; // 0x68(0x10)
};

// ScriptStruct TslGame.WuExitToLobbyData
// Size: 0x18 (Inherited: 0x00)
struct FWuExitToLobbyData {
	struct FString AccountId; // 0x00(0x10)
	bool FromDeathCam; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.WuPlayDataResult
// Size: 0x38 (Inherited: 0x00)
struct FWuPlayDataResult {
	struct FString AccountId; // 0x00(0x10)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString ResultDescription; // 0x18(0x10)
	struct FString PlayData; // 0x28(0x10)
};

// ScriptStruct TslGame.WuChatRestrictStatus
// Size: 0x18 (Inherited: 0x00)
struct FWuChatRestrictStatus {
	bool IsBlocked; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Reason; // 0x04(0x04)
	struct FString UntilTimeStamp; // 0x08(0x10)
};

// ScriptStruct TslGame.WuDirectMessage
// Size: 0x108 (Inherited: 0x00)
struct FWuDirectMessage {
	int32 Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Message; // 0x08(0x10)
	struct FString LobbyStringKey; // 0x18(0x10)
	struct FWuDirectMessageParameter LobbyMessageParameter; // 0x28(0x10)
	struct FString IngameStringKey; // 0x38(0x10)
	struct TArray<struct FString> IngameMessageParameters; // 0x48(0x10)
	struct FString FromAccountId; // 0x58(0x10)
	struct FString FromNickname; // 0x68(0x10)
	struct FString FromPlatform; // 0x78(0x10)
	struct FString FromClanId; // 0x88(0x10)
	struct FString FromClanTag; // 0x98(0x10)
	int32 FromClanLevel; // 0xa8(0x04)
	bool FromOfflineOrStreamerMode; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FString ToAccountId; // 0xb0(0x10)
	struct FString ToNickname; // 0xc0(0x10)
	struct FString ToPlatform; // 0xd0(0x10)
	struct FString ToClanId; // 0xe0(0x10)
	struct FString ToClanTag; // 0xf0(0x10)
	int32 ToClanLevel; // 0x100(0x04)
	int32 ToComplimentType; // 0x104(0x04)
};

// ScriptStruct TslGame.WuDirectMessageParameter
// Size: 0x10 (Inherited: 0x00)
struct FWuDirectMessageParameter {
	struct TArray<struct FWuNicknamePlatformData> MatchWinUsers; // 0x00(0x10)
};

// ScriptStruct TslGame.WuNicknamePlatformData
// Size: 0x20 (Inherited: 0x00)
struct FWuNicknamePlatformData {
	struct FString Nickname; // 0x00(0x10)
	struct FString Platform; // 0x10(0x10)
};

// ScriptStruct TslGame.WuMissionProgressUpdateData
// Size: 0x10 (Inherited: 0x00)
struct FWuMissionProgressUpdateData {
	struct TArray<struct FWuStringIntPair> Updates; // 0x00(0x10)
};

// ScriptStruct TslGame.WuPrepareUsersResult
// Size: 0x10 (Inherited: 0x00)
struct FWuPrepareUsersResult {
	struct TArray<struct FString> AccountIds; // 0x00(0x10)
};

// ScriptStruct TslGame.WuGameStartInfo
// Size: 0x10 (Inherited: 0x00)
struct FWuGameStartInfo {
	struct TArray<struct FWuGameStartInfoPerPlayer> Players; // 0x00(0x10)
};

// ScriptStruct TslGame.WuGameStartInfoPerPlayer
// Size: 0x20 (Inherited: 0x00)
struct FWuGameStartInfoPerPlayer {
	struct FString PlayerNetId; // 0x00(0x10)
	struct FString AccountId; // 0x10(0x10)
};

// ScriptStruct TslGame.WuGameInitializedResult
// Size: 0x08 (Inherited: 0x00)
struct FWuGameInitializedResult {
	bool IsSuccess; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Port; // 0x04(0x04)
};

// ScriptStruct TslGame.WuGameStartRequest
// Size: 0x10 (Inherited: 0x00)
struct FWuGameStartRequest {
	struct TArray<struct FWuStringStringPair> StringParameters; // 0x00(0x10)
};

// ScriptStruct TslGame.WuGameOverrideParameterRequest
// Size: 0x20 (Inherited: 0x00)
struct FWuGameOverrideParameterRequest {
	struct FString MatchId; // 0x00(0x10)
	struct TArray<struct FWuStringStringPair> StringParameters; // 0x10(0x10)
};

// ScriptStruct TslGame.WuGameInitializeRequest
// Size: 0x58 (Inherited: 0x00)
struct FWuGameInitializeRequest {
	bool IsCustomGame; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MapName; // 0x08(0x10)
	struct FString MatchId; // 0x18(0x10)
	struct FString ModeName; // 0x28(0x10)
	int32 TeamCount; // 0x38(0x04)
	int32 MinPlayerCount; // 0x3c(0x04)
	int32 MaxPlayerCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FWuStringStringPair> StringParameters; // 0x48(0x10)
};

// ScriptStruct TslGame.WuUserAuthInfo
// Size: 0x248 (Inherited: 0x00)
struct FWuUserAuthInfo {
	struct FString PlayerNetId; // 0x00(0x10)
	int32 TeamId; // 0x10(0x04)
	int32 TeamMemberIndex; // 0x14(0x04)
	int32 SquadIndex; // 0x18(0x04)
	struct FWuMatchRating Rating; // 0x1c(0x08)
	bool IsZombie; // 0x24(0x01)
	bool IsMaster; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct FWuCharacterInfo CharacterInfo; // 0x28(0x130)
	int32 Platform; // 0x158(0x04)
	bool IsStreamerModeOn; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct FString PartnerLevel; // 0x160(0x10)
	int32 ObserverAuthorityType; // 0x170(0x04)
	bool BattlEyeDisabled; // 0x174(0x01)
	bool AceAntibotDisabled; // 0x175(0x01)
	bool IsSuspect; // 0x176(0x01)
	bool DisallowVoiceChat; // 0x177(0x01)
	bool IsBypassAnticheat; // 0x178(0x01)
	bool IsAvatarBanned; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	int32 AcVerificationScore; // 0x17c(0x04)
	struct FString AccountId; // 0x180(0x10)
	int32 v1; // 0x190(0x04)
	int32 v2; // 0x194(0x04)
	int32 V3; // 0x198(0x04)
	int32 V4; // 0x19c(0x04)
	struct FWuUdpEncryptionKey UdpEncryptionKey; // 0x1a0(0x30)
	struct TArray<struct FWuStringStringPair> CustomParameters; // 0x1d0(0x10)
	float BpBoost; // 0x1e0(0x04)
	float XpBoost; // 0x1e4(0x04)
	float CurrentDailyXp; // 0x1e8(0x04)
	bool IsMaxLevel; // 0x1ec(0x01)
	bool IsPCCafeUser; // 0x1ed(0x01)
	char pad_1EE[0x2]; // 0x1ee(0x02)
	struct TArray<struct FWuStringIntPair> StatTrakDataPairs; // 0x1f0(0x10)
	struct TArray<struct FWuStringIntPair> HeadshotStatTrakDataPairs; // 0x200(0x10)
	struct FWuLobbyPartyInfo LobbyPartyInfo; // 0x210(0x28)
	struct TArray<struct FString> TdmSpawnKitIds; // 0x238(0x10)
};

// ScriptStruct TslGame.WuLobbyPartyInfo
// Size: 0x28 (Inherited: 0x00)
struct FWuLobbyPartyInfo {
	struct FString PartyId; // 0x00(0x10)
	struct FString PartyLeaderId; // 0x10(0x10)
	int32 PartySize; // 0x20(0x04)
	bool AllowAnyMember; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGame.WuUdpEncryptionKey
// Size: 0x30 (Inherited: 0x00)
struct FWuUdpEncryptionKey {
	struct FString Key; // 0x00(0x10)
	struct FString ServerIV; // 0x10(0x10)
	struct FString ClientIV; // 0x20(0x10)
};

// ScriptStruct TslGame.WuCharacterInfo
// Size: 0x130 (Inherited: 0x00)
struct FWuCharacterInfo {
	struct FString Nickname; // 0x00(0x10)
	bool Gender; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FWuCharacterCustomizationOptions CustomizationOptions; // 0x18(0x60)
	struct FWuCharacterWeaponMasteryInfo WeaponMasteryInfo; // 0x78(0x10)
	struct FWuCharacterClanInfo ClanInfo; // 0x88(0x38)
	struct FWuPubgIdData PubgIdData; // 0xc0(0x58)
	struct TArray<struct FWuCustomizationPresetInfo> CustomizationPresetInfos; // 0x118(0x10)
	int32 PresetIndex; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct TslGame.WuCustomizationPresetInfo
// Size: 0x18 (Inherited: 0x00)
struct FWuCustomizationPresetInfo {
	struct TArray<struct FString> ItemIDs; // 0x00(0x10)
	bool IsUnlocked; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.WuPubgIdData
// Size: 0x58 (Inherited: 0x00)
struct FWuPubgIdData {
	int32 SurvivalTier; // 0x00(0x04)
	int32 SurvivalLevel; // 0x04(0x04)
	struct FString NameplateId; // 0x08(0x10)
	struct FString EmblemId; // 0x18(0x10)
	struct FString MedalOne; // 0x28(0x10)
	struct FString MedalTwo; // 0x38(0x10)
	struct FString ClanplateId; // 0x48(0x10)
};

// ScriptStruct TslGame.WuCharacterClanInfo
// Size: 0x38 (Inherited: 0x00)
struct FWuCharacterClanInfo {
	struct FString ClanId; // 0x00(0x10)
	struct FString ClanName; // 0x10(0x10)
	struct FString ClanTag; // 0x20(0x10)
	int32 ClanLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.WuCharacterWeaponMasteryInfo
// Size: 0x10 (Inherited: 0x00)
struct FWuCharacterWeaponMasteryInfo {
	struct TArray<struct FWuStringIntPair> WeaponMasteryTiers; // 0x00(0x10)
};

// ScriptStruct TslGame.WuCharacterCustomizationOptions
// Size: 0x60 (Inherited: 0x00)
struct FWuCharacterCustomizationOptions {
	struct TArray<struct FWuStringBoolPair> BoolOptions; // 0x00(0x10)
	struct TArray<struct FWuStringFloatPair> FloatOptions; // 0x10(0x10)
	struct TArray<struct FWuStringStringPair> StringOptions; // 0x20(0x10)
	struct TArray<struct FString> ItemIDs; // 0x30(0x10)
	struct FString ActionSlots; // 0x40(0x10)
	struct TArray<struct FString> IngameEquipableItemIds; // 0x50(0x10)
};

// ScriptStruct TslGame.WuStringBoolPair
// Size: 0x18 (Inherited: 0x00)
struct FWuStringBoolPair {
	struct FString First; // 0x00(0x10)
	bool second; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.WuMatchRating
// Size: 0x08 (Inherited: 0x00)
struct FWuMatchRating {
	int32 RankPoint; // 0x00(0x04)
	int32 MMR; // 0x04(0x04)
};

// ScriptStruct TslGame.WuTeamInfo
// Size: 0x38 (Inherited: 0x00)
struct FWuTeamInfo {
	int32 TeamId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> AccountIds; // 0x08(0x10)
	struct TArray<int32> TeamMemberIndices; // 0x18(0x10)
	struct TArray<int32> SquadIndices; // 0x28(0x10)
};

// ScriptStruct TslGame.WuPubgIdClanplateData
// Size: 0x70 (Inherited: 0x00)
struct FWuPubgIdClanplateData {
	struct FString ID; // 0x00(0x10)
	struct FString TopColor; // 0x10(0x10)
	struct FString BottomColor; // 0x20(0x10)
	struct FString IngameImagePath; // 0x30(0x10)
	struct FString IngameImagePathLD; // 0x40(0x10)
	struct FString OutgameImagePath; // 0x50(0x10)
	struct FString OutgameImagePathLD; // 0x60(0x10)
};

// ScriptStruct TslGame.WuPubgIdMedalData
// Size: 0x60 (Inherited: 0x00)
struct FWuPubgIdMedalData {
	struct FString ID; // 0x00(0x10)
	struct FString IngameImagePath; // 0x10(0x10)
	struct FString OutgameImagePathFHD; // 0x20(0x10)
	struct FString OutgameImagePathFHDLarge; // 0x30(0x10)
	struct FString OutgameImagePathUHD; // 0x40(0x10)
	struct FString OutgameImagePathUHDLarge; // 0x50(0x10)
};

// ScriptStruct TslGame.WuPubgIdNameplateData
// Size: 0x80 (Inherited: 0x00)
struct FWuPubgIdNameplateData {
	struct FString ID; // 0x00(0x10)
	bool IsAnim; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float AnimLengthSec; // 0x14(0x04)
	int32 AnimFrameCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString IngameImagePath; // 0x20(0x10)
	struct FString OutgameImagePath; // 0x30(0x10)
	struct FString IngameAnimPathPC; // 0x40(0x10)
	struct FString IngameAnimPathConsole; // 0x50(0x10)
	struct FString IngameAnimPathStadia; // 0x60(0x10)
	struct FString OutgameAnimPath; // 0x70(0x10)
};

// ScriptStruct TslGame.WuPubgIdEmblemData
// Size: 0x78 (Inherited: 0x00)
struct FWuPubgIdEmblemData {
	struct FString ID; // 0x00(0x10)
	bool IsAnim; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float AnimLengthSec; // 0x14(0x04)
	int32 AnimFrameCountX; // 0x18(0x04)
	int32 AnimFrameCountY; // 0x1c(0x04)
	struct FString IngameImagePath; // 0x20(0x10)
	struct FString OutgameImagePath; // 0x30(0x10)
	struct FString OutgameImagePathFHD; // 0x40(0x10)
	struct FString IngameAnimPath; // 0x50(0x10)
	struct FString OutgameAnimPath; // 0x60(0x10)
	float IntervalLengthSec; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuUnrealPlayerCard
// Size: 0x1d8 (Inherited: 0x00)
struct FWuUnrealPlayerCard {
	int32 CurrentLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString PrimaryBackgroundColor; // 0x08(0x10)
	struct FString BackgroundId; // 0x18(0x10)
	struct FString EmblemId; // 0x28(0x10)
	struct FString BannerId; // 0x38(0x10)
	int32 OriginType; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString NetId; // 0x50(0x10)
	struct FWuUnrealPlayerCardStat Slot1; // 0x60(0x70)
	struct FWuUnrealPlayerCardStat Slot2; // 0xd0(0x70)
	struct FWuUnrealPlayerCardStat Slot3; // 0x140(0x70)
	struct FWuUnrealPlayerCardRankPointData RankPoint; // 0x1b0(0x28)
};

// ScriptStruct TslGame.WuUnrealPlayerCardRankPointData
// Size: 0x28 (Inherited: 0x00)
struct FWuUnrealPlayerCardRankPointData {
	int32 RankPoints; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Tier; // 0x08(0x10)
	struct FString SubTier; // 0x18(0x10)
};

// ScriptStruct TslGame.WuUnrealPlayerCardStat
// Size: 0x70 (Inherited: 0x00)
struct FWuUnrealPlayerCardStat {
	struct FString IconId; // 0x00(0x10)
	struct FString Title; // 0x10(0x10)
	struct FString TitleArg; // 0x20(0x10)
	struct FString Subtitle; // 0x30(0x10)
	struct FString SubtitleArg; // 0x40(0x10)
	struct FString Value; // 0x50(0x10)
	struct FString ValueArg; // 0x60(0x10)
};

// ScriptStruct TslGame.WuCustomizableObjectIdPair
// Size: 0x20 (Inherited: 0x00)
struct FWuCustomizableObjectIdPair {
	struct FString CustomizableObjectKey; // 0x00(0x10)
	struct FString CustomizableObjectValue; // 0x10(0x10)
};

// ScriptStruct TslGame.*5f1c1cb261
// Size: 0x78 (Inherited: 0x00)
struct F*5f1c1cb261 {
	struct TArray<struct FString> *a5c2a2e715; // 0x00(0x10)
	struct TArray<struct FString> *50e5c83b9a; // 0x10(0x10)
	struct TArray<struct FString> *08232f8215; // 0x20(0x10)
	struct TArray<bool> *4c8fbe84c2; // 0x30(0x10)
	struct TArray<struct FString> *6804350a7e; // 0x40(0x10)
	struct TArray<float> *3588733267; // 0x50(0x10)
	struct TArray<struct FString> *c8463f7c6e; // 0x60(0x10)
	bool *10211981bb; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGame.*f33c65a144
// Size: 0x10 (Inherited: 0x00)
struct F*f33c65a144 {
	struct UClass* *3b45d05722; // 0x00(0x08)
	float *f57a5c48f8; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*05fad71403
// Size: 0x410 (Inherited: 0x268)
struct F*05fad71403 : F*7700dab07d {
	enum class EEquipSlotID EquipSlotID; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float SpaceExtension; // 0x26c(0x04)
	float DamageReductionRate; // 0x270(0x04)
	float DurabilityMax; // 0x274(0x04)
	bool DestroyByDurability; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float Durability; // 0x27c(0x04)
	enum class *cff03327dd DurabilityConsumeType; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float DamageTransferRate; // 0x284(0x04)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0x288(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x2b8(0x30)
	struct F*54424d3e0d CustomizableObjectOriginalSkin; // 0x2e8(0x20)
	struct UAkAudioEvent* EquipedSoundAk; // 0x308(0x20)
	struct UAkAudioEvent* BlueBlockerEnterBlueZoneSoundAk; // 0x328(0x20)
	struct UAkAudioEvent* BlueBlockerExitBlueZoneSoundAk; // 0x348(0x20)
	struct UAkAudioEvent* BlueBlockerLowHealthSoundAk; // 0x368(0x20)
	struct UAkAudioEvent* BlueBlockerNoHealthSoundAk; // 0x388(0x20)
	float BlueBlockerLowHealthThreshold; // 0x3a8(0x04)
	enum class EEquipableItemSoundGroup SoundGroup; // 0x3ac(0x01)
	enum class EEquipableItemSoundType SoundType; // 0x3ad(0x01)
	bool bCanZombieEquip; // 0x3ae(0x01)
	enum class *6333d4d051 SlotOffsetType; // 0x3af(0x01)
	struct FName SkinTag; // 0x3b0(0x08)
	bool bDisableEquipmentSkinning; // 0x3b8(0x01)
	bool bDisableSkinMessages; // 0x3b9(0x01)
	bool bDisableMasteryMessages; // 0x3ba(0x01)
	enum class EEquipableItemLevelType EquipableItemLevelType; // 0x3bb(0x01)
	bool bIsUnequipable; // 0x3bc(0x01)
	enum class ESpecialEquipmentType SpecialEquipmentType; // 0x3bd(0x01)
	char pad_3BE[0x2]; // 0x3be(0x02)
	struct UTexture* HudDisplayEquipIcon; // 0x3c0(0x20)
	struct TArray<struct F*84dd4e8338> ConstraintSlotConfigs; // 0x3e0(0x10)
	struct TArray<struct F*f33c65a144> *9c6155f0fd; // 0x3f0(0x10)
	struct FName EquipmentOverridableFilter; // 0x400(0x08)
	bool bIsHoody; // 0x408(0x01)
	bool bIsGhillieSuit; // 0x409(0x01)
	bool bIsTacticalGear; // 0x40a(0x01)
	char pad_40B[0x5]; // 0x40b(0x05)
};

// ScriptStruct TslGame.*6c9069fdf6
// Size: 0x08 (Inherited: 0x00)
struct F*6c9069fdf6 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*69b4ade8ce
// Size: 0xd0 (Inherited: 0x00)
struct F*69b4ade8ce {
	struct FInt32Range RowRange; // 0x00(0x10)
	struct FFloatRange CapsuleRelativeRange; // 0x10(0x10)
	struct FFloatRange SpeedRange; // 0x20(0x10)
	struct FFloatRange ZSpeedRange; // 0x30(0x10)
	struct FInt32Range LedgeRange; // 0x40(0x10)
	struct FInt32Range FreeSpaceRange; // 0x50(0x10)
	enum class *9580d72ff7 IsVault; // 0x60(0x01)
	enum class *9580d72ff7 IsClimb; // 0x61(0x01)
	enum class *9580d72ff7 IsLedgeGrab; // 0x62(0x01)
	enum class *9580d72ff7 IsSlide; // 0x63(0x01)
	enum class *9580d72ff7 IsNarrow; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct F*a64f846500 ExecConfig; // 0x68(0x68)
};

// ScriptStruct TslGame.*a64f846500
// Size: 0x68 (Inherited: 0x00)
struct F*a64f846500 {
	float ExecutionDistance; // 0x00(0x04)
	float AnticipationDistance; // 0x04(0x04)
	struct FVector2D AnticipationMapIn; // 0x08(0x08)
	struct FVector2D AnticipationMapOut; // 0x10(0x08)
	float MinExecutionDOT; // 0x18(0x04)
	bool bUseAnimStartForDistance; // 0x1c(0x01)
	bool bUse3DDistance; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FFloatRange ExecutionZRange; // 0x20(0x10)
	bool bUseAnticipationAnim; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAnimSequenceBase* AnticipationAnim; // 0x38(0x08)
	struct UCurveFloat* AnticipationAnimCurve; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
};

// ScriptStruct TslGame.*3b7abc98c2
// Size: 0x68 (Inherited: 0x00)
struct F*3b7abc98c2 {
	struct FVector V_Start; // 0x00(0x0c)
	struct FVector V_Apex; // 0x0c(0x0c)
	struct FVector V_ApexAdditive; // 0x18(0x0c)
	struct FVector V_End; // 0x24(0x0c)
	enum class EVaultAnimType InVaultType; // 0x30(0x01)
	bool bEndToFall; // 0x31(0x01)
	bool bForceCrouch; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float Direction; // 0x34(0x04)
	float PlayerSpeed; // 0x38(0x04)
	float DistanceFromObject; // 0x3c(0x04)
	float AdditiveEndZOffset; // 0x40(0x04)
	struct UPrimitiveComponent* BaseComp; // 0x44(0x08)
	struct FVector BaseWorldLoc; // 0x4c(0x0c)
	struct FRotator BaseWorldDir; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.*cb263fbb34
// Size: 0x40 (Inherited: 0x00)
struct F*cb263fbb34 {
	char pad_0[0x28]; // 0x00(0x28)
	bool *1b4532240e[0x14]; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGame.*ae59b13808
// Size: 0x18 (Inherited: 0x00)
struct F*ae59b13808 {
	int64 *97f5177191; // 0x00(0x08)
	float *ca832e01ed; // 0x08(0x04)
	float *ff2aefc15b; // 0x0c(0x04)
	enum class EAnimStance *51379cdc22; // 0x10(0x01)
	bool *b176fb8f73; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*71999aba31
// Size: 0x38 (Inherited: 0x00)
struct F*71999aba31 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*14154ffa9f
// Size: 0x10 (Inherited: 0x00)
struct F*14154ffa9f {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.StringArray
// Size: 0x10 (Inherited: 0x00)
struct FStringArray {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*2ae4908591
// Size: 0x90 (Inherited: 0x38)
struct F*2ae4908591 : F*9e214c1516 {
	struct UAkComponent* *e052a73669; // 0x38(0x08)
	struct TArray<struct F*a2f25b7fb1> *327c60e60f; // 0x40(0x10)
	struct TArray<struct F*74c5e96ef7> AnimNotifyList; // 0x50(0x10)
	struct TArray<struct F*74c5e96ef7> *33400d8447; // 0x60(0x10)
	char pad_70[0x20]; // 0x70(0x20)
};

// ScriptStruct TslGame.*9e214c1516
// Size: 0x38 (Inherited: 0x00)
struct F*9e214c1516 {
	struct ATslCharacter* Character; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct TslGame.*74c5e96ef7
// Size: 0x30 (Inherited: 0x00)
struct F*74c5e96ef7 {
	struct UAnimSequenceBase* *57c6fdf509; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct TslGame.*a2f25b7fb1
// Size: 0x40 (Inherited: 0x00)
struct F*a2f25b7fb1 {
	struct ATslWeapon* Weapon; // 0x00(0x08)
	struct UClass* *4cea20a818; // 0x08(0x08)
	struct UAkComponent* AkComponent; // 0x10(0x08)
	char pad_18[0x28]; // 0x18(0x28)
};

// ScriptStruct TslGame.*8ab237906e
// Size: 0x50 (Inherited: 0x38)
struct F*8ab237906e : F*9e214c1516 {
	struct ATslWeapon* *c4544beb8a; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct TslGame.*0067d234a3
// Size: 0x2c (Inherited: 0x00)
struct F*0067d234a3 {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*4985d0f82e
// Size: 0x10 (Inherited: 0x00)
struct F*4985d0f82e {
	struct TArray<bool> Data; // 0x00(0x10)
};

// ScriptStruct TslGame.*668d12d313
// Size: 0x30 (Inherited: 0x00)
struct F*668d12d313 {
	float *1d46c446a7; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector2D> *9a464e83c7; // 0x08(0x10)
	float *55a036c8ac; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FVector2D> *40ef888177; // 0x20(0x10)
};

// ScriptStruct TslGame.*edab99c582
// Size: 0x10 (Inherited: 0x00)
struct F*edab99c582 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*e299e50fad
// Size: 0x308 (Inherited: 0x00)
struct F*e299e50fad {
	char pad_0[0x308]; // 0x00(0x308)
};

// ScriptStruct TslGame.*b26298f6ff
// Size: 0x18 (Inherited: 0x00)
struct F*b26298f6ff {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*fcb171b1f2
// Size: 0x28 (Inherited: 0x00)
struct F*fcb171b1f2 {
	struct TArray<struct F*f7684aee55> *c5d1870bd0; // 0x00(0x10)
	struct TArray<uint16> *3f26a939b5; // 0x10(0x10)
	float *ea0c434750; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*f7684aee55
// Size: 0x06 (Inherited: 0x00)
struct F*f7684aee55 {
	int16 *336fefe792; // 0x00(0x02)
	int16 *1c005f38a8; // 0x02(0x02)
	uint16 *0369dbad91; // 0x04(0x02)
};

// ScriptStruct TslGame.*0db54e8350
// Size: 0x10 (Inherited: 0x00)
struct F*0db54e8350 {
	struct UObject* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*a994a6f658
// Size: 0x7b0 (Inherited: 0x00)
struct F*a994a6f658 {
	char pad_0[0x7b0]; // 0x00(0x7b0)
};

// ScriptStruct TslGame.*0ec96d8b15
// Size: 0x770 (Inherited: 0x00)
struct F*0ec96d8b15 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FVector Apex; // 0x18(0x0c)
	struct FVector ApexAdditive; // 0x24(0x0c)
	float Direction; // 0x30(0x04)
	float PlayerSpeed2D; // 0x34(0x04)
	float DistanceFromObject; // 0x38(0x04)
	float AdditiveEndZOffset; // 0x3c(0x04)
	enum class EVaultAnimType VaultType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 MoveIndex; // 0x44(0x04)
	char bIsPassed : 1; // 0x48(0x01)
	char bIsClimbing : 1; // 0x48(0x01)
	char bIsEndToFall : 1; // 0x48(0x01)
	char bForceCrouch : 1; // 0x48(0x01)
	char pad_48_4 : 4; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct F*a64f846500 ExecConfig; // 0x50(0x68)
	struct F*6cba55a5b1 HitData; // 0xb8(0x6b8)
};

// ScriptStruct TslGame.*6cba55a5b1
// Size: 0x6b8 (Inherited: 0x00)
struct F*6cba55a5b1 {
	char pad_0[0x6b8]; // 0x00(0x6b8)
};

// ScriptStruct TslGame.*ea77c433f3
// Size: 0x68 (Inherited: 0x00)
struct F*ea77c433f3 {
	struct FVector ImpactLocation; // 0x00(0x0c)
	struct FVector CapsulePredictedLocation; // 0x0c(0x0c)
	struct FVector CapsuleImpactLocation; // 0x18(0x0c)
	struct FVector Normal2D; // 0x24(0x0c)
	struct FVector DirectionVector; // 0x30(0x0c)
	float JumpDistance; // 0x3c(0x04)
	char bIsForceVault : 1; // 0x40(0x01)
	char bIsBlockVault : 1; // 0x40(0x01)
	char bIsBlockClimb : 1; // 0x40(0x01)
	char bIsLedgeGrab : 1; // 0x40(0x01)
	char pad_40_4 : 4; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 FirstRow; // 0x44(0x04)
	struct FVector ImpactVelocity; // 0x48(0x0c)
	int32 RowOffset; // 0x54(0x04)
	float NormalSampleDotThreshold; // 0x58(0x04)
	struct FVector CharacterVelocity; // 0x5c(0x0c)
};

// ScriptStruct TslGame.*7bdc46148f
// Size: 0x48 (Inherited: 0x00)
struct F*7bdc46148f {
	uint16 *213815d2f5; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Position; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	struct F*eacd751240 InputData; // 0x28(0x20)
};

// ScriptStruct TslGame.*eacd751240
// Size: 0x20 (Inherited: 0x00)
struct F*eacd751240 {
	float *a3950d9449; // 0x00(0x04)
	float *0ed2474caf; // 0x04(0x04)
	float *e68fe73d74; // 0x08(0x04)
	float *d1e66ab43f; // 0x0c(0x04)
	bool *a97a1c5884; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *4bcbfa102a; // 0x14(0x04)
	float *9b5d071983; // 0x18(0x04)
	float *8d6d74ee64; // 0x1c(0x04)
};

// ScriptStruct TslGame.*f920ba1621
// Size: 0x28 (Inherited: 0x00)
struct F*f920ba1621 {
	float *3d2edfaf7d; // 0x00(0x04)
	float *e1a3edaa32; // 0x04(0x04)
	float *86e867eff5; // 0x08(0x04)
	struct FVector2D *ce47fefeff; // 0x0c(0x08)
	struct FVector2D *84fae9e3a0; // 0x14(0x08)
	float *4f823cd34d; // 0x1c(0x04)
	float *a4311ad560; // 0x20(0x04)
	float *fb04a80f30; // 0x24(0x04)
};

// ScriptStruct TslGame.*e9996296b5
// Size: 0x24 (Inherited: 0x00)
struct F*e9996296b5 {
	struct FVector LocalOffset; // 0x00(0x0c)
	float *a5743f5f27; // 0x0c(0x04)
	struct F*aa4c0b994c *889d3bcc58; // 0x10(0x14)
};

// ScriptStruct TslGame.*aa4c0b994c
// Size: 0x14 (Inherited: 0x00)
struct F*aa4c0b994c {
	bool *0588136531; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct FVector Extent; // 0x08(0x0c)
};

// ScriptStruct TslGame.*af81b12efd
// Size: 0x80 (Inherited: 0x00)
struct F*af81b12efd {
	float *9b19a0ead3; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* *6d32c6acec; // 0x08(0x08)
	struct UAkAudioEvent* *34aae5743e; // 0x10(0x08)
	struct UAkAudioEvent* *a2be4f1b43; // 0x18(0x08)
	struct UAkAudioEvent* *68b01a4dc0; // 0x20(0x08)
	struct FName *4b60d2324e; // 0x28(0x08)
	struct FName *9cc149a1c4; // 0x30(0x08)
	struct FName *bd7e233fbf; // 0x38(0x08)
	struct FName *86b24d9662; // 0x40(0x08)
	struct FName *3889c351b0; // 0x48(0x08)
	struct FName *46feccbcfe; // 0x50(0x08)
	struct FName *2e4058e770; // 0x58(0x08)
	float *3125c969ca; // 0x60(0x04)
	float *6e61e122b4; // 0x64(0x04)
	float *1a2cd35188; // 0x68(0x04)
	float *d667731d72; // 0x6c(0x04)
	float *3f33bcb84a; // 0x70(0x04)
	float *396cf21d3e; // 0x74(0x04)
	float *2661652112; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*0edcff3fd9
// Size: 0x48 (Inherited: 0x00)
struct F*0edcff3fd9 {
	bool *c138e1b617; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D *a0fb860c5e; // 0x04(0x08)
	struct FVector2D *4e5f667ae8; // 0x0c(0x08)
	struct FVector2D *340b2469c9; // 0x14(0x08)
	struct FVector2D *cd3b1882c7; // 0x1c(0x08)
	struct FVector2D *8395fa85f2; // 0x24(0x08)
	struct FVector2D *344788ce61; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UClass* *271a14efcc; // 0x38(0x08)
	float *4597ae7cf5; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*de6b26076e
// Size: 0x18 (Inherited: 0x00)
struct F*de6b26076e {
	struct TArray<struct F*fd3d304ef3> *fbff660b4b; // 0x00(0x10)
	struct UAnimMontage* *9482352d47; // 0x10(0x08)
};

// ScriptStruct TslGame.*fd3d304ef3
// Size: 0x30 (Inherited: 0x00)
struct F*fd3d304ef3 {
	enum class *72f4731af1 *6f1cdb8455; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *3fe0c654bf; // 0x04(0x04)
	struct UAnimMontage* *85a81250e1; // 0x08(0x08)
	struct UAnimMontage* *4a4bd3298e; // 0x10(0x08)
	bool *7b4cddab64; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *7a37a7e061; // 0x1c(0x04)
	struct UAnimMontage* *cb8ff5640c; // 0x20(0x08)
	struct FName *03003b498a; // 0x28(0x08)
};

// ScriptStruct TslGame.*b5fd971557
// Size: 0x50 (Inherited: 0x00)
struct F*b5fd971557 {
	float *51184cafa7; // 0x00(0x04)
	float *d7843644d5; // 0x04(0x04)
	float *f632cbf918; // 0x08(0x04)
	bool *93bb4295fb; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *4e3be21c15; // 0x10(0x04)
	bool *cebf30103a; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *d323371f59; // 0x18(0x04)
	struct FVector *1a46681306; // 0x1c(0x0c)
	float *6c3c1a9828; // 0x28(0x04)
	float *aa94bfa22b; // 0x2c(0x04)
	float *6a9649867f; // 0x30(0x04)
	bool *8e7dc604cd; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector *fc4ce11f23; // 0x38(0x0c)
	bool *adc09e1807; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *2d64f65b69; // 0x48(0x04)
	float *436965a504; // 0x4c(0x04)
};

// ScriptStruct TslGame.*fb17e4135f
// Size: 0x58 (Inherited: 0x00)
struct F*fb17e4135f {
	struct UParticleSystem* *7ed3cf3a0f; // 0x00(0x08)
	struct UParticleSystem* *bfaa357516; // 0x08(0x08)
	struct FVector2D *5d4ca15786; // 0x10(0x08)
	struct FVector2D *1456c3f6ee; // 0x18(0x08)
	struct FVector2D *3f6cf944c5; // 0x20(0x08)
	struct FVector2D *669afeb3b2; // 0x28(0x08)
	struct FVector2D *29584aa409; // 0x30(0x08)
	struct FVector2D *844daa6a6b; // 0x38(0x08)
	struct UClass* *ee960d73c9; // 0x40(0x08)
	struct UClass* *be87881760; // 0x48(0x08)
	struct U*59a0aeaef9* *5889cd484a; // 0x50(0x08)
};

// ScriptStruct TslGame.ParachuteDeploySettings
// Size: 0x14 (Inherited: 0x00)
struct FParachuteDeploySettings {
	bool bUseAutoDeploy; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AutoDeployAltitude; // 0x04(0x04)
	bool bUseAbsoluteAutoDeployAltitude; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StartDeployAltitude; // 0x0c(0x04)
	float *d0608cd7e0; // 0x10(0x04)
};

// ScriptStruct TslGame.*3374b65a68
// Size: 0xc0 (Inherited: 0x00)
struct F*3374b65a68 {
	float *94905f6bfe; // 0x00(0x04)
	struct FVector *e841d39a60; // 0x04(0x0c)
	float *449da725ce; // 0x10(0x04)
	float *8ba9ebf32d; // 0x14(0x04)
	float *1d96331ef1; // 0x18(0x04)
	float *3fd84a37f3; // 0x1c(0x04)
	float *89de360499; // 0x20(0x04)
	float *9d7dc2e43c; // 0x24(0x04)
	float *e66d625bc5; // 0x28(0x04)
	float *b9640a00f1; // 0x2c(0x04)
	float *367b270339; // 0x30(0x04)
	float *f6bad803fa; // 0x34(0x04)
	struct FVector CapsuleOffset; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct USkeletalMesh* ParachuteSK; // 0x48(0x08)
	struct UClass* *8dbe9249eb; // 0x50(0x08)
	struct FRotator *f69678fb42; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UPhysicsAsset* *e9c8b0c3b9; // 0x68(0x08)
	struct TMap<enum class ESkydiveState, struct F*5a82d58d14> *e932ffe4e2; // 0x70(0x50)
};

// ScriptStruct TslGame.*5a82d58d14
// Size: 0x10 (Inherited: 0x00)
struct F*5a82d58d14 {
	float *4d6467dc71; // 0x00(0x04)
	enum class *ab22144e19 *cb893f7743; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float *4c19e42548; // 0x08(0x04)
	bool *d94eb35291; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*9161670956
// Size: 0x7c (Inherited: 0x00)
struct F*9161670956 {
	float *8f5995008c; // 0x00(0x04)
	float *b371441036; // 0x04(0x04)
	float *0bdd5587e4; // 0x08(0x04)
	float *035c9b8432; // 0x0c(0x04)
	float *4f6fffae24; // 0x10(0x04)
	float *c2fc69b948; // 0x14(0x04)
	float *4956964db4; // 0x18(0x04)
	float *2764721eb2; // 0x1c(0x04)
	float *c1fa19bdc8; // 0x20(0x04)
	float *626241164a; // 0x24(0x04)
	float *56afcda986; // 0x28(0x04)
	float *d3c594603f; // 0x2c(0x04)
	struct FVector2D *543c8ce1ab; // 0x30(0x08)
	struct FVector2D *caf0c23155; // 0x38(0x08)
	float *567b520519; // 0x40(0x04)
	float *11f3e4bb54; // 0x44(0x04)
	float *da7349bbcf; // 0x48(0x04)
	float *c6bea3dfdc; // 0x4c(0x04)
	float *c8a5946fab; // 0x50(0x04)
	float *5d88cf2a3e; // 0x54(0x04)
	float *63910eef98; // 0x58(0x04)
	float *fccc0a6e87; // 0x5c(0x04)
	float *f243a07c2d; // 0x60(0x04)
	float *c04726ddca; // 0x64(0x04)
	float *1fa9f445ef; // 0x68(0x04)
	struct FVector2D *90a2c21d42; // 0x6c(0x08)
	struct FVector2D *c81796c46e; // 0x74(0x08)
};

// ScriptStruct TslGame.*167fac4b46
// Size: 0x30 (Inherited: 0x00)
struct F*167fac4b46 {
	float *dd26eaba35; // 0x00(0x04)
	float *e5ffbd8b17; // 0x04(0x04)
	float *e118c87d74; // 0x08(0x04)
	float *1e028ac882; // 0x0c(0x04)
	float *1226927202; // 0x10(0x04)
	float *7cbcc4ea87; // 0x14(0x04)
	float *2c82970a2b; // 0x18(0x04)
	float *d4c9697614; // 0x1c(0x04)
	float *91e334ae94; // 0x20(0x04)
	float *288d91fd54; // 0x24(0x04)
	float *fdcd31c5cf; // 0x28(0x04)
	float *9cb8c3624d; // 0x2c(0x04)
};

// ScriptStruct TslGame.*cf9d354708
// Size: 0x28 (Inherited: 0x00)
struct F*cf9d354708 {
	float *8902eeacb9; // 0x00(0x04)
	float *b54bcd828e; // 0x04(0x04)
	float *691ee6f33c; // 0x08(0x04)
	float *582ab8404c; // 0x0c(0x04)
	float *1c3054f489; // 0x10(0x04)
	bool *fcfd9f1691; // 0x14(0x01)
	bool *02d9b5d541; // 0x15(0x01)
	bool *5928c8f62c; // 0x16(0x01)
	bool *6c08d008ca; // 0x17(0x01)
	float *5e135b07a8; // 0x18(0x04)
	float *92d73f61a8; // 0x1c(0x04)
	float *6043047ecf; // 0x20(0x04)
	float *01b53a08ae; // 0x24(0x04)
};

// ScriptStruct TslGame.*eeb577c115
// Size: 0x20 (Inherited: 0x00)
struct F*eeb577c115 {
	float *68aabc0284; // 0x00(0x04)
	struct FVector2D *b82394bfa7; // 0x04(0x08)
	struct FVector2D *8a938a9d22; // 0x0c(0x08)
	float *782491f266; // 0x14(0x04)
	struct FVector2D *93ebf0aa5c; // 0x18(0x08)
};

// ScriptStruct TslGame.*f62c688730
// Size: 0x14 (Inherited: 0x00)
struct F*f62c688730 {
	float DragScale; // 0x00(0x04)
	float *98ae343e7e; // 0x04(0x04)
	float *137a92c348; // 0x08(0x04)
	float *93e3468f23; // 0x0c(0x04)
	float *71d7993769; // 0x10(0x04)
};

// ScriptStruct TslGame.*18d1959834
// Size: 0x18 (Inherited: 0x00)
struct F*18d1959834 {
	float *d31fb1565b; // 0x00(0x04)
	float *a1039e2f59; // 0x04(0x04)
	float *85f69309d6; // 0x08(0x04)
	bool *40b6a58d9c; // 0x0c(0x01)
	bool *2a59febbdd; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float *f056f7a632; // 0x10(0x04)
	float *c0752332f3; // 0x14(0x04)
};

// ScriptStruct TslGame.FreefallVelocitySettings
// Size: 0x0c (Inherited: 0x00)
struct FFreefallVelocitySettings {
	float SpeedMin; // 0x00(0x04)
	float *8c2d6364cc; // 0x04(0x04)
	float *963c8578fd; // 0x08(0x04)
};

// ScriptStruct TslGame.*452f5853ec
// Size: 0x30 (Inherited: 0x00)
struct F*452f5853ec {
	struct FVector2D *1468e1aed3; // 0x00(0x08)
	struct FVector2D *6d9869ee77; // 0x08(0x08)
	struct FVector2D *ea10b84ef1; // 0x10(0x08)
	float *ef744084d3; // 0x18(0x04)
	struct FVector2D *11d2bcd2b0; // 0x1c(0x08)
	struct FVector2D *910f1013ad; // 0x24(0x08)
	float *6dd0888eed; // 0x2c(0x04)
};

// ScriptStruct TslGame.*8bcc7e1dc2
// Size: 0x78 (Inherited: 0x00)
struct F*8bcc7e1dc2 {
	bool *259cf46360; // 0x00(0x01)
	bool *bf9bccffb3; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<int32, int32> *198694087b; // 0x08(0x50)
	int32 *8b28bc882e; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<float> *4443e66182; // 0x60(0x10)
	int32 *4cf0815086; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*cc8b7e381e
// Size: 0x20 (Inherited: 0x00)
struct F*cc8b7e381e {
	char bIsArmed : 1; // 0x00(0x01)
	char bIsGun : 1; // 0x00(0x01)
	char bIsHipped : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class EWeaponClass WeaponClass; // 0x04(0x01)
	enum class EWeaponClass LobbyAnimationClass; // 0x05(0x01)
	enum class EThrownWeaponType ThrownWeaponClass; // 0x06(0x01)
	enum class EAnimWeaponType AnimWeaponType; // 0x07(0x01)
	struct UBlendSpace1D* GripBlendspace; // 0x08(0x08)
	struct UBlendSpaceBase* LHGripBlendspace; // 0x10(0x08)
	int32 GripTypeIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.AnimMontageData
// Size: 0x10 (Inherited: 0x00)
struct FAnimMontageData {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*4cc82af5fc
// Size: 0x20 (Inherited: 0x00)
struct F*4cc82af5fc {
	struct TArray<struct UItem*> *16d5ea9652; // 0x00(0x10)
	struct TArray<struct F*7f75b18e9f> *e807018031; // 0x10(0x10)
};

// ScriptStruct TslGame.*7f75b18e9f
// Size: 0x10 (Inherited: 0x00)
struct F*7f75b18e9f {
	char pad_0[0x8]; // 0x00(0x08)
	struct UEquipableItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*762b66aa5f
// Size: 0x10 (Inherited: 0x00)
struct F*762b66aa5f {
	float *e1e6e36573; // 0x00(0x04)
	float *611dd2fb05; // 0x04(0x04)
	int32 *57e31a6eea; // 0x08(0x04)
	int32 MaxCount; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b5951cb36a
// Size: 0x3c (Inherited: 0x00)
struct F*b5951cb36a {
	float *dfa7e5ee6a; // 0x00(0x04)
	float *5dcd549c5d; // 0x04(0x04)
	float *e62a04eaac; // 0x08(0x04)
	float *8743ed1df4; // 0x0c(0x04)
	float *ae062eb372; // 0x10(0x04)
	float *1cceb9066b; // 0x14(0x04)
	float *e97b030929; // 0x18(0x04)
	struct F*c6b1b1d61e *72bfd0e2ce; // 0x1c(0x1c)
	float *90141b3f67; // 0x38(0x04)
};

// ScriptStruct TslGame.*c6b1b1d61e
// Size: 0x1c (Inherited: 0x00)
struct F*c6b1b1d61e {
	struct FVector *165478efa2; // 0x00(0x0c)
	float *eb3d5ff754; // 0x0c(0x04)
	float *d01002685a; // 0x10(0x04)
	float *e6b1cb23c3; // 0x14(0x04)
	float *9962ae2514; // 0x18(0x04)
};

// ScriptStruct TslGame.*045ed75eef
// Size: 0x18 (Inherited: 0x00)
struct F*045ed75eef {
	struct TArray<struct ATslRedeployRespawnPoint*> *04d47ecd8f; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*8a860faf82
// Size: 0x08 (Inherited: 0x00)
struct F*8a860faf82 {
	struct ATslPlayerState* *5dafae92bf; // 0x00(0x08)
};

// ScriptStruct TslGame.*b52ff0e449
// Size: 0x20 (Inherited: 0x00)
struct F*b52ff0e449 {
	struct TArray<struct ACaptureAreaActor*> *30ea761956; // 0x00(0x10)
	struct TArray<float> *e7c951d943; // 0x10(0x10)
};

// ScriptStruct TslGame.*e64ad6ff58
// Size: 0x68 (Inherited: 0x00)
struct F*e64ad6ff58 {
	struct F*fc02106b82 Config; // 0x00(0x30)
	struct UClass* WidgetClass; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct UUserWidget* Widget; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
};

// ScriptStruct TslGame.*8354cda1f3
// Size: 0x38 (Inherited: 0x00)
struct F*8354cda1f3 {
	int32 CellSize; // 0x00(0x04)
	int32 *1a563538a6; // 0x04(0x04)
	int32 *ce319df66a; // 0x08(0x04)
	int32 *5f37d82555; // 0x0c(0x04)
	int32 *577018c81d; // 0x10(0x04)
	int32 *26e850ea25; // 0x14(0x04)
	float *6b6d2781a4; // 0x18(0x04)
	int32 *aa7c774afd; // 0x1c(0x04)
	float *6a33826255; // 0x20(0x04)
	float *35606ce7a6; // 0x24(0x04)
	float *8d2a855c64; // 0x28(0x04)
	float *47436b50a2; // 0x2c(0x04)
	float *72ab74f9d0; // 0x30(0x04)
	float *70729157a8; // 0x34(0x04)
};

// ScriptStruct TslGame.*93ca5d0868
// Size: 0x24 (Inherited: 0x00)
struct F*93ca5d0868 {
	float Stand[0x03]; // 0x00(0x0c)
	float Crouch[0x03]; // 0x0c(0x0c)
	float Prone[0x03]; // 0x18(0x0c)
};

// ScriptStruct TslGame.*5e98591d4f
// Size: 0x98 (Inherited: 0x00)
struct F*5e98591d4f {
	struct FString MapName; // 0x00(0x10)
	struct F*fdf430394b *2f38ad6bac; // 0x10(0x88)
};

// ScriptStruct TslGame.*fdf430394b
// Size: 0x88 (Inherited: 0x00)
struct F*fdf430394b {
	struct UClass* AIControllerClass; // 0x00(0x20)
	struct UClass* *f6d046096d; // 0x20(0x20)
	struct U*e1e322e954* *59faff5b40; // 0x40(0x08)
	struct UClass* *ec66148516; // 0x48(0x20)
	struct UDataTable* CharacterCostumeSetDataTable; // 0x68(0x20)
};

// ScriptStruct TslGame.*0af6f1ccbf
// Size: 0x34 (Inherited: 0x00)
struct F*0af6f1ccbf {
	struct FVector AirplaneStartLoc; // 0x00(0x0c)
	struct FVector AirplaneStopLoc; // 0x0c(0x0c)
	struct FVector AirplaneCanJumpLoc; // 0x18(0x0c)
	struct FVector AirplaneForceJumpLoc; // 0x24(0x0c)
	float PlaneSpeed; // 0x30(0x04)
};

// ScriptStruct TslGame.*7bae3aa231
// Size: 0x10 (Inherited: 0x00)
struct F*7bae3aa231 {
	struct FName Tag; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*e20c77ba0f
// Size: 0x18 (Inherited: 0x00)
struct F*e20c77ba0f {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*7bae3aa231> DataList; // 0x08(0x10)
};

// ScriptStruct TslGame.*19ebfd3ebe
// Size: 0x20 (Inherited: 0x00)
struct F*19ebfd3ebe {
	struct FName *ebe97e2081; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	int32 *fd65c5d030; // 0x14(0x04)
	int32 *40170e32f8; // 0x18(0x04)
	int32 *6555fbdbdd; // 0x1c(0x04)
};

// ScriptStruct TslGame.AkVariant
// Size: 0x0c (Inherited: 0x00)
struct FAkVariant {
	float *37295f64b1; // 0x00(0x04)
	float *30e08dfd38; // 0x04(0x04)
	bool *91ddd35066; // 0x08(0x01)
	bool *516ab125eb; // 0x09(0x01)
	bool *1f6ce5b46a; // 0x0a(0x01)
	bool *840c6d460f; // 0x0b(0x01)
};

// ScriptStruct TslGame.*b0d62a1c45
// Size: 0x18 (Inherited: 0x00)
struct F*b0d62a1c45 {
	struct FString EventName; // 0x00(0x10)
	struct UAkAudioEvent* AkAudioEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*c593899cf4
// Size: 0xa0 (Inherited: 0x98)
struct F*c593899cf4 : F*6408c978a1 {
	struct UBlendSpace* BlendSpaceStop; // 0x98(0x08)
};

// ScriptStruct TslGame.*6408c978a1
// Size: 0x98 (Inherited: 0x00)
struct F*6408c978a1 {
	struct UAnimSequence* BasePose; // 0x00(0x08)
	struct F*6b99728ef2 IdleAnimations; // 0x08(0x10)
	struct UBlendSpace* BlendSpaceAimOffset; // 0x18(0x08)
	struct F*87f29f7786 TurningInPlace; // 0x20(0x20)
	struct UBlendSpace* BlendSpaceLocomotion; // 0x40(0x08)
	struct UBlendSpace* BlendSpaceStart; // 0x48(0x08)
	struct F*7d26189905 AnimSpeed_Walk; // 0x50(0x20)
	struct F*7d26189905 AnimSpeed_Run; // 0x70(0x20)
	float AnimSpeed_Sprint; // 0x90(0x04)
	float AimOffsetBlendTime; // 0x94(0x04)
};

// ScriptStruct TslGame.*7d26189905
// Size: 0x20 (Inherited: 0x00)
struct F*7d26189905 {
	float F; // 0x00(0x04)
	float L; // 0x04(0x04)
	float R; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float FL; // 0x10(0x04)
	float FR; // 0x14(0x04)
	float BL; // 0x18(0x04)
	float BR; // 0x1c(0x04)
};

// ScriptStruct TslGame.*87f29f7786
// Size: 0x20 (Inherited: 0x00)
struct F*87f29f7786 {
	struct UAnimSequence* Left90; // 0x00(0x08)
	struct UAnimSequence* Left180; // 0x08(0x08)
	struct UAnimSequence* Right90; // 0x10(0x08)
	struct UAnimSequence* Right180; // 0x18(0x08)
};

// ScriptStruct TslGame.*a401b3ebd8
// Size: 0xa8 (Inherited: 0x98)
struct F*a401b3ebd8 : F*6408c978a1 {
	struct UBlendSpace* BlendSpaceStopLeft; // 0x98(0x08)
	struct UBlendSpace* BlendSpaceStopRight; // 0xa0(0x08)
};

// ScriptStruct TslGame.*b3eb0f46a5
// Size: 0xf0 (Inherited: 0x98)
struct F*b3eb0f46a5 : F*6408c978a1 {
	struct UAnimSequence* JumpStartForward; // 0x98(0x08)
	struct UAnimSequence* JumpStartBackward; // 0xa0(0x08)
	struct UAnimSequence* JumpStartStationary; // 0xa8(0x08)
	struct UAnimSequence* JumpStartLocalForward; // 0xb0(0x08)
	struct UAnimSequence* JumpStartLocalBackward; // 0xb8(0x08)
	struct UAnimSequence* JumpStartLocalStationary; // 0xc0(0x08)
	struct UBlendSpace* BlendSpaceStopLeft; // 0xc8(0x08)
	struct UBlendSpace* BlendSpaceStopRight; // 0xd0(0x08)
	struct UBlendSpace* BlendSpacePivotLeft; // 0xd8(0x08)
	struct UBlendSpace* BlendSpacePivotRight; // 0xe0(0x08)
	struct UBlendSpace* BlendSpaceFastTurnPivot; // 0xe8(0x08)
};

// ScriptStruct TslGame.AnimInfo
// Size: 0xb8 (Inherited: 0x00)
struct FAnimInfo {
	struct UAnimSequence* IdleBasePose; // 0x00(0x08)
	struct UAnimSequence* IdleBasePoseFPP; // 0x08(0x08)
	struct F*6b99728ef2 IdleAnimations; // 0x10(0x10)
	struct F*6b99728ef2 IdleAnimationsCold; // 0x20(0x10)
	struct F*87f29f7786 TurningInPlace; // 0x30(0x20)
	struct UBlendSpace* LocomotionBlendspace; // 0x50(0x08)
	struct UBlendSpace* LocomotionBlendspaceFPP; // 0x58(0x08)
	struct UBlendSpace* LocomotionStartBlendspace; // 0x60(0x08)
	struct UBlendSpace* LocomotionStopBlendspace; // 0x68(0x08)
	struct F*7d26189905 AnimSpeed_Walk; // 0x70(0x20)
	struct F*7d26189905 AnimSpeed_Run; // 0x90(0x20)
	float AnimSpeed_Sprint; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.*7771a55717
// Size: 0x40 (Inherited: 0x00)
struct F*7771a55717 {
	struct F*67d17e7d0c StandTPP; // 0x00(0x10)
	struct F*67d17e7d0c StandFPP; // 0x10(0x10)
	struct F*67d17e7d0c ProneTPP; // 0x20(0x10)
	struct F*67d17e7d0c ProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*67d17e7d0c
// Size: 0x10 (Inherited: 0x00)
struct F*67d17e7d0c {
	struct UAnimSequence* Default; // 0x00(0x08)
	struct UAnimSequence* ParentControl; // 0x08(0x08)
};

// ScriptStruct TslGame.*d5bd0211fd
// Size: 0x0c (Inherited: 0x00)
struct F*d5bd0211fd {
	float Walk; // 0x00(0x04)
	float Run; // 0x04(0x04)
	float Sprint; // 0x08(0x04)
};

// ScriptStruct TslGame.*efa44fea09
// Size: 0x38 (Inherited: 0x00)
struct F*efa44fea09 {
	enum class ERaycastDirection Direction; // 0x00(0x01)
	bool bUseCustomDirection; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector *c7c8f89e6c; // 0x04(0x0c)
	struct FName *9721e250ca; // 0x10(0x08)
	float *7a19851524; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct U*f6f6209d57* *1d8b75a643; // 0x20(0x08)
	struct F*379dbaf15c *1b89926eb1; // 0x28(0x10)
};

// ScriptStruct TslGame.*379dbaf15c
// Size: 0x10 (Inherited: 0x00)
struct F*379dbaf15c {
	struct FVector Offset; // 0x00(0x0c)
	bool *a781e6e5a2; // 0x0c(0x01)
	bool *e4fb232040; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*5bac932330
// Size: 0x1c (Inherited: 0x00)
struct F*5bac932330 {
	struct FVector InitialActorOffset; // 0x00(0x0c)
	struct FVector TraceVector; // 0x0c(0x0c)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct TslGame.*9827885161
// Size: 0xb0 (Inherited: 0x08)
struct F*9827885161 : FTableRowBase {
	int32 EmoteID; // 0x08(0x04)
	enum class EEmotePlayType PlayType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText EmoteLocalizedName; // 0x10(0x18)
	struct UTexture2D* UITexture; // 0x28(0x08)
	struct UMaterialInterface* UIMaterial; // 0x30(0x08)
	struct UAnimMontage* AnimMogtage_SoftRef; // 0x38(0x20)
	enum class *d20bede27b AnimType; // 0x58(0x01)
	bool bIsBGM_Sound; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32 EmoteIDforOtherTeammate; // 0x5c(0x04)
	struct F*a7f97ebbdc EmoteIDsForTeammate; // 0x60(0x10)
	bool bRandomTeammateID; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32 TeammateAllowedNumber; // 0x74(0x04)
	struct FName StartInteractSectionName; // 0x78(0x08)
	bool bRandomPlayInteractScetion; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float FollowRestricDistance; // 0x84(0x04)
	struct U*d7dcdd0b5f* TraceDataRef; // 0x88(0x08)
	float FPPEmoteViewPitchMin; // 0x90(0x04)
	float FPPEmoteViewPitchMax; // 0x94(0x04)
	float FPPEmoteViewYawMin; // 0x98(0x04)
	float FPPEmoteViewYawMax; // 0x9c(0x04)
	enum class EEmoteMoveType MoveType; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float MaxMoveSpeed; // 0xa4(0x04)
	float MoveCapsuleRadius; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct TslGame.*a7f97ebbdc
// Size: 0x10 (Inherited: 0x00)
struct F*a7f97ebbdc {
	struct TArray<int32> EmoteIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*c6b0976726
// Size: 0x28 (Inherited: 0x00)
struct F*c6b0976726 {
	struct UAnimMontage* *5aec5dc08a; // 0x00(0x20)
	struct UAnimMontage* AnimMontage; // 0x20(0x08)
};

// ScriptStruct TslGame.*f5c1b084bf
// Size: 0x10 (Inherited: 0x00)
struct F*f5c1b084bf {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*2636295495
// Size: 0x10 (Inherited: 0x00)
struct F*2636295495 {
	struct FVector2D *7a2562f2aa; // 0x00(0x08)
	struct ATslSpecialZoneActor* *9e6a0704f2; // 0x08(0x08)
};

// ScriptStruct TslGame.*9560361948
// Size: 0x14 (Inherited: 0x00)
struct F*9560361948 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x13]; // 0x01(0x13)
};

// ScriptStruct TslGame.*f478762b88
// Size: 0x0c (Inherited: 0x00)
struct F*f478762b88 {
	int32 *b20023d79c; // 0x00(0x04)
	int32 *c6b8d6e339; // 0x04(0x04)
	int32 *40118241fa; // 0x08(0x04)
};

// ScriptStruct TslGame.*db46243048
// Size: 0x10 (Inherited: 0x00)
struct F*db46243048 {
	float *82b341893c; // 0x00(0x04)
	float *a8f9781b2f; // 0x04(0x04)
	float *9dd1cc002b; // 0x08(0x04)
	int32 *2e0959d2ee; // 0x0c(0x04)
};

// ScriptStruct TslGame.*983f3f54a2
// Size: 0x160 (Inherited: 0x00)
struct F*983f3f54a2 {
	float *4120cddc7a; // 0x00(0x04)
	float *15aefc2191; // 0x04(0x04)
	float *091868fd5a; // 0x08(0x04)
	float *c1cab2071f; // 0x0c(0x04)
	float *06d084405e; // 0x10(0x04)
	int32 *6d89b84635; // 0x14(0x04)
	int32 *81513322a2; // 0x18(0x04)
	int32 *f40a26e788; // 0x1c(0x04)
	struct TMap<struct FString, struct F*ef43c34115> *82d70b3b31; // 0x20(0x50)
	struct TMap<struct FString, struct F*ef43c34115> *dc9915963c; // 0x70(0x50)
	struct TMap<struct FString, int32> *95d032fb53; // 0xc0(0x50)
	struct TMap<enum class EMovementBaseType, float> *64f0b0eb27; // 0x110(0x50)
};

// ScriptStruct TslGame.*ef43c34115
// Size: 0x58 (Inherited: 0x00)
struct F*ef43c34115 {
	int32 Shots; // 0x00(0x04)
	float *078c9d80f0; // 0x04(0x04)
	struct TMap<enum class EDamageReason, struct F*c7ee162c05> *4a63d6ef0d; // 0x08(0x50)
};

// ScriptStruct TslGame.*c7ee162c05
// Size: 0x18 (Inherited: 0x00)
struct F*c7ee162c05 {
	int32 Hits; // 0x00(0x04)
	int32 *70caabc633; // 0x04(0x04)
	float *1032befa92; // 0x08(0x04)
	float *88c8d3d134; // 0x0c(0x04)
	int32 Kills; // 0x10(0x04)
	int32 *43dc196cbe; // 0x14(0x04)
};

// ScriptStruct TslGame.*efc8d5eb0c
// Size: 0x18 (Inherited: 0x00)
struct F*efc8d5eb0c {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*5345610a54
// Size: 0x08 (Inherited: 0x00)
struct F*5345610a54 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*1fe8fdc230
// Size: 0x0c (Inherited: 0x00)
struct F*1fe8fdc230 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*9928cc3b2f
// Size: 0x10 (Inherited: 0x00)
struct F*9928cc3b2f {
	struct UClass* *559b19dd91; // 0x00(0x08)
	float *26078ffe0a; // 0x08(0x04)
	bool *677e28cfd4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*edc9c17144
// Size: 0xd0 (Inherited: 0x00)
struct F*edc9c17144 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* *2e7f3c463b; // 0x10(0x08)
	struct UClass* *b7bf63dc1d; // 0x18(0x08)
	struct UClass* *ea9b69ba48; // 0x20(0x08)
	struct UClass* *6cf8740e44; // 0x28(0x08)
	struct UClass* *7044e68844; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct F*7f75db2b30 *f78b864df8; // 0x48(0x08)
	struct FVector *a199e026e0; // 0x50(0x0c)
	struct FVector *378fc9a1fe; // 0x5c(0x0c)
	struct FVector *740d0e85f1; // 0x68(0x0c)
	struct FVector *84d0858793; // 0x74(0x0c)
	struct FVector *4d66f615dd; // 0x80(0x0c)
	struct FVector *bb68d8ab3a; // 0x8c(0x0c)
	struct F*7f75db2b30 *15b1e608ba; // 0x98(0x08)
	float *612d1306a9; // 0xa0(0x04)
	char pad_A4[0x2c]; // 0xa4(0x2c)
};

// ScriptStruct TslGame.*7f75db2b30
// Size: 0x08 (Inherited: 0x00)
struct F*7f75db2b30 {
	float *12f0be9a30; // 0x00(0x04)
	float *b716d62d76; // 0x04(0x04)
};

// ScriptStruct TslGame.*d1f4c96261
// Size: 0x78 (Inherited: 0x00)
struct F*d1f4c96261 {
	struct FString ServerURL; // 0x00(0x10)
	struct FString Domain; // 0x10(0x10)
	struct FString Issuer; // 0x20(0x10)
	bool *4428a21b41; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString GVoiceServerUrl; // 0x38(0x10)
	struct FString GVoiceAppKey; // 0x48(0x10)
	struct FString GVoiceAppId; // 0x58(0x10)
	int32 GVoiceProximalMaxRange; // 0x68(0x04)
	int32 GVoiceDistNear; // 0x6c(0x04)
	int32 GVoiceDistFar; // 0x70(0x04)
	float GVoiceVolPercentage; // 0x74(0x04)
};

// ScriptStruct TslGame.*edc104dbaf
// Size: 0xa8 (Inherited: 0x00)
struct F*edc104dbaf {
	float BlurLevel; // 0x00(0x04)
	float ScopeRadiusNear; // 0x04(0x04)
	float ScopeRadiusFar; // 0x08(0x04)
	struct FVector2D ReticleRect; // 0x0c(0x08)
	float ReticleAngularSize; // 0x14(0x04)
	struct FLinearColor ReticleTint; // 0x18(0x10)
	float ReticleGamma; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UTexture* ReticleTexture; // 0x30(0x08)
	bool bReticleExtendTextureBorder; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct U*90f03bd132* ReticleSettings; // 0x40(0x08)
	float ScopeLensDistortion; // 0x48(0x04)
	float ScopeLensCA; // 0x4c(0x04)
	struct FLinearColor ScopeLensTint; // 0x50(0x10)
	float ScopeOuterBrightness; // 0x60(0x04)
	float DepthBlurPower; // 0x64(0x04)
	float DepthBlurWhitePoint; // 0x68(0x04)
	float DepthBlurBlackPoint; // 0x6c(0x04)
	struct FVector2D RelativeOffsetMap; // 0x70(0x08)
	float ParallaxMovementScale; // 0x78(0x04)
	float ParallaxRadiusScale; // 0x7c(0x04)
	float BloomIntensity; // 0x80(0x04)
	float NearClipStaticOffset; // 0x84(0x04)
	float NearClipMinClamp; // 0x88(0x04)
	struct FVector WeaponCycleCameraOffset; // 0x8c(0x0c)
	struct FReticleBrightSceneVisibility BrightSceneVisibility; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.ReticleBrightSceneVisibility
// Size: 0x0c (Inherited: 0x00)
struct FReticleBrightSceneVisibility {
	float LuminanceMultiplier; // 0x00(0x04)
	float OpacityMultiplier; // 0x04(0x04)
	float OpacityMultiplierLowResolution; // 0x08(0x04)
};

// ScriptStruct TslGame.*468382b2f1
// Size: 0x280 (Inherited: 0x00)
struct F*468382b2f1 {
	struct FName WeaponTag; // 0x00(0x08)
	struct UStaticMesh* AttachmentMeshAsset; // 0x08(0x20)
	struct FWeaponAttachmentData AttachmentData; // 0x28(0x250)
	struct UClass* AttachmentTemplate; // 0x278(0x08)
};

// ScriptStruct TslGame.WeaponAttachmentData
// Size: 0x250 (Inherited: 0x00)
struct FWeaponAttachmentData {
	enum class EWeaponAttachmentSlotID AttachmentSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AttachmentTag; // 0x08(0x08)
	struct FName Name; // 0x10(0x08)
	struct FName MouseSensitiveName; // 0x18(0x08)
	float MagnificationFOVMaxIncrement; // 0x20(0x04)
	int32 MagnificationFOVSteps; // 0x24(0x04)
	float MagnificationFOV; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct F*4e85a8c2e0 ReticleBrightnessConfig; // 0x30(0x20)
	struct TArray<float> *c6f4191d2e; // 0x50(0x10)
	struct TMap<struct FName, struct UMaterialInstance*> *b368cfd43c; // 0x60(0x50)
	struct TMap<struct FName, struct U*90f03bd132*> *a6c933874d; // 0xb0(0x50)
	struct U*4a170ec375* *2d86e63f08; // 0x100(0x08)
	int32 AmmoPerClip; // 0x108(0x04)
	float ReloadAnimationPlayRate; // 0x10c(0x04)
	float MultipleFiringBulletsSpread; // 0x110(0x04)
	float RecoilMultiplierHorizontal; // 0x114(0x04)
	float RecoilMultiplierVertical; // 0x118(0x04)
	float RecoilRecoveryMultiplier; // 0x11c(0x04)
	float SwayMultiplier; // 0x120(0x04)
	float AnimationKickMultiplier; // 0x124(0x04)
	float DeviationMultiplier; // 0x128(0x04)
	float ADSSpeedMultiplier; // 0x12c(0x04)
	struct FVector FPPSocketOffset; // 0x130(0x0c)
	int32 GripType_MN; // 0x13c(0x04)
	float BarrelLengthAdditive; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct UParticleSystem* MuzzleFx; // 0x148(0x08)
	struct FName MuzzleAttachPoint; // 0x150(0x08)
	enum class *8f7cddd88b WeaponGripLeft; // 0x158(0x01)
	bool bIsSuppressor; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct FStringAssetReference MuzzleSound; // 0x160(0x10)
	struct UAnimMontage* CharacterReloadTactical; // 0x170(0x08)
	struct UAnimMontage* WeaponReloadTactical; // 0x178(0x08)
	struct UAnimMontage* CharacterReloadCharge; // 0x180(0x08)
	struct UAnimMontage* WeaponReloadCharge; // 0x188(0x08)
	bool bUsePelletGridOverride; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TMap<int32, struct FVector2D> *99f1dc372f; // 0x198(0x50)
	float StabilitySpeedScalar; // 0x1e8(0x04)
	float StabilityMinForceAdditive; // 0x1ec(0x04)
	float RecoilEarlyExitScale; // 0x1f0(0x04)
	float CantedWeaponRotation; // 0x1f4(0x04)
	bool bUseReticleTypeOverride; // 0x1f8(0x01)
	bool bUseDefaultReticleCaching; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)
	struct TArray<struct F*787caa668a> ReticleTextureDataArray; // 0x200(0x10)
	struct F*db11871030 ScopeGlintConfig; // 0x210(0x3c)
	bool bThermalTemperatureInteractive; // 0x24c(0x01)
	bool bBlocksGameplayTracers; // 0x24d(0x01)
	char pad_24E[0x2]; // 0x24e(0x02)
};

// ScriptStruct TslGame.*db11871030
// Size: 0x3c (Inherited: 0x00)
struct F*db11871030 {
	bool GlintEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D GlintStartFade; // 0x04(0x08)
	struct FVector ScopeEndPositionLS; // 0x0c(0x0c)
	float ScopeRadiusLS; // 0x18(0x04)
	float GlintRadiusScreen; // 0x1c(0x04)
	float ScopeRadiusScreen; // 0x20(0x04)
	struct FLinearColor GlintColor; // 0x24(0x10)
	struct FVector2D GlintVisibilityArcLength; // 0x34(0x08)
};

// ScriptStruct TslGame.*787caa668a
// Size: 0x40 (Inherited: 0x00)
struct F*787caa668a {
	float ReticleAngularSize; // 0x00(0x04)
	struct FVector2D ReticleCenter; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture2D* ReticleTexture; // 0x10(0x08)
	bool bUseHaloTexture; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float HaloTextureScale; // 0x1c(0x04)
	struct FVector ReticleColor; // 0x20(0x0c)
	float ReticleScale; // 0x2c(0x04)
	float BrightSceneLuminanceMultiplier; // 0x30(0x04)
	float BrightSceneOpacityMultiplier; // 0x34(0x04)
	float BrightSceneOpacityMultiplierLowResolution; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGame.*4e85a8c2e0
// Size: 0x20 (Inherited: 0x00)
struct F*4e85a8c2e0 {
	struct U*59a0aeaef9* ReticleBrightnessSettingsCurve; // 0x00(0x08)
	struct FName ReticleBrightnessParamX; // 0x08(0x08)
	struct FName ReticleBrightnessParamY; // 0x10(0x08)
	struct FName ReticleBrightnessParamZ; // 0x18(0x08)
};

// ScriptStruct TslGame.*73eadbc90e
// Size: 0x28 (Inherited: 0x00)
struct F*73eadbc90e {
	enum class EWeaponAttachmentSlotID Slot; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *beea70248c; // 0x08(0x10)
	struct TArray<struct FName> *43b8b7e18f; // 0x18(0x10)
};

// ScriptStruct TslGame.*f4471b5c0d
// Size: 0x20 (Inherited: 0x00)
struct F*f4471b5c0d {
	enum class EWeaponAttachmentSlotID *df12e194f4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *fc0eecc08b; // 0x08(0x08)
	struct TArray<struct F*98b560ae31> *8757a86189; // 0x10(0x10)
};

// ScriptStruct TslGame.*98b560ae31
// Size: 0x10 (Inherited: 0x00)
struct F*98b560ae31 {
	struct FName *65e93ed5d2; // 0x00(0x08)
	struct FName *fc0eecc08b; // 0x08(0x08)
};

// ScriptStruct TslGame.*19d05f50bc
// Size: 0x18 (Inherited: 0x00)
struct F*19d05f50bc {
	enum class EWeaponAttachmentSlotID *df12e194f4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *28a84febbc; // 0x08(0x10)
};

// ScriptStruct TslGame.*ab84fcde31
// Size: 0x18 (Inherited: 0x00)
struct F*ab84fcde31 {
	struct UAnimMontage* *789dea958b; // 0x00(0x08)
	struct UAnimMontage* *1342cd3a6c; // 0x08(0x08)
	struct UAnimMontage* Pickup; // 0x10(0x08)
};

// ScriptStruct TslGame.*06ddb86218
// Size: 0x10 (Inherited: 0x00)
struct F*06ddb86218 {
	struct UAnimMontage* RollLeft; // 0x00(0x08)
	struct UAnimMontage* RollRight; // 0x08(0x08)
};

// ScriptStruct TslGame.*47ce58a8c5
// Size: 0x10 (Inherited: 0x00)
struct F*47ce58a8c5 {
	struct UAnimMontage* *a92c9906de; // 0x00(0x08)
	struct UAnimMontage* *2db3b9d907; // 0x08(0x08)
};

// ScriptStruct TslGame.*e928921c36
// Size: 0x2b0 (Inherited: 0x00)
struct F*e928921c36 {
	float TargetingFOV; // 0x00(0x04)
	float *2a6b5d64e5; // 0x04(0x04)
	struct TMap<enum class EScopeType, struct FVector2D> *a27ababf0e; // 0x08(0x50)
	struct FName *e7ba9afc01; // 0x58(0x08)
	struct FVector *1814cfd19d; // 0x60(0x0c)
	struct FRotator *f2d5caac0d; // 0x6c(0x0c)
	struct FVector *afa24b0142; // 0x78(0x0c)
	struct FRotator *1f544d279d; // 0x84(0x0c)
	bool *30db9b401f; // 0x90(0x01)
	bool *60b821ee06; // 0x91(0x01)
	bool *a79cf9e284; // 0x92(0x01)
	enum class *8f7cddd88b *86167ed665; // 0x93(0x01)
	enum class EWeaponClass *4cea20a818; // 0x94(0x01)
	enum class EAnimWeaponSpecificClass *5f08a8457f; // 0x95(0x01)
	enum class EWeaponClass *d868a6745a; // 0x96(0x01)
	bool *82e75ac667; // 0x97(0x01)
	bool *4b90412b45; // 0x98(0x01)
	bool *58d1585ac6; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float *f34869a98d; // 0x9c(0x04)
	float *6e7aa96766; // 0xa0(0x04)
	float *9d8f8d61a3; // 0xa4(0x04)
	float *9a756ad7e8; // 0xa8(0x04)
	float *b85f533ecd; // 0xac(0x04)
	float *7873626e58; // 0xb0(0x04)
	float *31fa40b319; // 0xb4(0x04)
	float *cf68a89218; // 0xb8(0x04)
	bool *11e6a23d33; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct TArray<float> *dec2fbb569; // 0xc0(0x10)
	float *aea1ffff11; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UAnimMontage* *3b1ea6f8c5; // 0xd8(0x08)
	bool DestructibleDoor; // 0xe0(0x01)
	enum class EThrownWeaponType *f191d3edc6; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct TMap<enum class ECustomGripBlendSpaceType, struct F*e607880f9c> *89826a2f43; // 0xe8(0x50)
	float *f609d3c28a; // 0x138(0x04)
	float *90685c581b; // 0x13c(0x04)
	float *8c97fd021a; // 0x140(0x04)
	float *800e1f43fc; // 0x144(0x04)
	float *ae70786d6c; // 0x148(0x04)
	bool *6088d2cbaa; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	float *061752c3b7; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FName *2b3572aebc; // 0x158(0x08)
	SetProperty *6b7810dda8; // 0x160(0x50)
	float *ace0658690; // 0x1b0(0x04)
	float *84818c36ce; // 0x1b4(0x04)
	float *71b7ca36b9; // 0x1b8(0x04)
	bool *a4aa94a1d4; // 0x1bc(0x01)
	bool *d2698c5568; // 0x1bd(0x01)
	bool *1c806e762c; // 0x1be(0x01)
	bool *7842dfc216; // 0x1bf(0x01)
	bool *4e88081459; // 0x1c0(0x01)
	bool *91322d0e2d; // 0x1c1(0x01)
	bool *e748a2736f; // 0x1c2(0x01)
	bool *ee31efdfc2; // 0x1c3(0x01)
	float *5203de7b9d; // 0x1c4(0x04)
	struct UStaticMesh* *01b707ad00; // 0x1c8(0x08)
	struct UAkAudioEvent* *f140bce13e; // 0x1d0(0x08)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FTransform *5641f75af8; // 0x1e0(0x30)
	struct FTransform *1532b78965; // 0x210(0x30)
	struct FTransform *22207d0c2d; // 0x240(0x30)
	struct FTransform *9ac6c0d4b6; // 0x270(0x30)
	bool *02618bbde2; // 0x2a0(0x01)
	char pad_2A1[0xf]; // 0x2a1(0x0f)
};

// ScriptStruct TslGame.*df65c74a41
// Size: 0xc0 (Inherited: 0x28)
struct F*df65c74a41 : F*47b7a33ad7 {
	struct UObject* CharmAsset; // 0x28(0x20)
	struct UStaticMesh* CharmAssetStatic; // 0x48(0x20)
	struct UClass* CharmAnimBlueprint; // 0x68(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> MaterialOverrides; // 0x70(0x50)
};

// ScriptStruct TslGame.*47b7a33ad7
// Size: 0x28 (Inherited: 0x08)
struct F*47b7a33ad7 : FTableRowBase {
	struct FText MasteryItemName; // 0x08(0x18)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*81f90e8006
// Size: 0x04 (Inherited: 0x00)
struct F*81f90e8006 {
	uint16 *8840ae405c; // 0x00(0x02)
	uint16 *5654939f10; // 0x02(0x02)
};

// ScriptStruct TslGame.*d4574aee50
// Size: 0xa0 (Inherited: 0x00)
struct F*d4574aee50 {
	struct TMap<struct FName, struct UItem*> *80f8b167c5; // 0x00(0x50)
	struct TMap<int32, struct UItem*> *7f2b5edcaf; // 0x50(0x50)
};

// ScriptStruct TslGame.*2cbf3fefcb
// Size: 0x180 (Inherited: 0x00)
struct F*2cbf3fefcb {
	struct FStringAssetReference *447e31189a; // 0x00(0x10)
	struct FStringAssetReference *2c59178af6; // 0x10(0x10)
	struct FStringAssetReference *7736c929f4; // 0x20(0x10)
	struct FStringAssetReference *fbb5f7ca63; // 0x30(0x10)
	struct FStringAssetReference *8339e0feeb; // 0x40(0x10)
	struct FStringAssetReference *964daf1c13; // 0x50(0x10)
	struct FStringAssetReference *9ba95bdbbf; // 0x60(0x10)
	struct FStringAssetReference *113e5ceafe; // 0x70(0x10)
	struct FStringAssetReference *58325d534f; // 0x80(0x10)
	struct FStringAssetReference *143a573cb8; // 0x90(0x10)
	struct FStringAssetReference *6b027ec4d7; // 0xa0(0x10)
	struct FStringAssetReference *114bd7a566; // 0xb0(0x10)
	struct FStringAssetReference *0250088dce; // 0xc0(0x10)
	struct FStringAssetReference *0d60f12d7a; // 0xd0(0x10)
	struct FStringAssetReference *0fa9c73cfc; // 0xe0(0x10)
	struct FStringAssetReference *fd0f857e58; // 0xf0(0x10)
	struct FStringAssetReference *68f0a2101d; // 0x100(0x10)
	struct UDataTable* *02020c63fe; // 0x110(0x20)
	struct FStringAssetReference *b293844224; // 0x130(0x10)
	struct FStringAssetReference *85786378fe; // 0x140(0x10)
	struct FStringAssetReference *be97d19a82; // 0x150(0x10)
	struct FStringAssetReference *3bf7a6cbd4; // 0x160(0x10)
	struct FStringAssetReference *d8336b08eb; // 0x170(0x10)
};

// ScriptStruct TslGame.WeaponSoundConfig
// Size: 0xb0 (Inherited: 0x00)
struct FWeaponSoundConfig {
	struct UAkAudioEvent* *0b19b01e26; // 0x00(0x08)
	struct UAkAudioEvent* *31fcaa2360; // 0x08(0x08)
	struct FVector2D *6f5d8ab3c8; // 0x10(0x08)
	struct UAkAudioEvent* *8af6184e4b; // 0x18(0x08)
	struct UAkAudioEvent* *056b7ea62f; // 0x20(0x08)
	struct UAkAudioEvent* *ecdc20b5d0; // 0x28(0x08)
	struct UAkAudioEvent* *dc34d1dd1b; // 0x30(0x08)
	struct UAkAudioEvent* *35a8adcd3e; // 0x38(0x08)
	struct UAkAudioEvent* *aaa8c74172; // 0x40(0x08)
	struct UAkAudioEvent* *6982073264; // 0x48(0x08)
	struct UAkAudioEvent* *f67a5fde8f; // 0x50(0x08)
	struct UAkAudioEvent* EquipSoundAk_Primary; // 0x58(0x08)
	struct UAkAudioEvent* *4af8246c5e; // 0x60(0x08)
	struct UAkAudioEvent* *fb93ad3a53; // 0x68(0x08)
	struct UAkAudioEvent* *e8624164f2; // 0x70(0x08)
	struct UAkAudioEvent* *b80a55b23d; // 0x78(0x08)
	struct UAkAudioEvent* *3364363148; // 0x80(0x08)
	struct UAkAudioEvent* *5cd982d49d; // 0x88(0x08)
	char *eec5ab680c : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UAkAudioEvent* DropAllAttachmentsSoundAk; // 0x98(0x08)
	struct UAkAudioEvent* InventoryPutAllAttachmentsSoundAk; // 0xa0(0x08)
	struct UAkAudioEvent* DropAndInventoryPutAttachmentsSoundAk; // 0xa8(0x08)
};

// ScriptStruct TslGame.*1cd84834aa
// Size: 0x18 (Inherited: 0x00)
struct F*1cd84834aa {
	struct FName WeaponMasteryCharmSocket; // 0x00(0x08)
	struct FName WeaponMasteryCharmAttachSocket; // 0x08(0x08)
	int32 CharmWeaponLODVisibility; // 0x10(0x04)
	int32 VariantWeaponLODVisibility; // 0x14(0x04)
};

// ScriptStruct TslGame.*93df1a6d36
// Size: 0x10 (Inherited: 0x00)
struct F*93df1a6d36 {
	enum class EWeaponAttachmentSlotID *261f599b63; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*845db93a9f
// Size: 0x08 (Inherited: 0x00)
struct F*845db93a9f {
	struct UAnimMontage* *f3b7dcfff9; // 0x00(0x08)
};

// ScriptStruct TslGame.*5a5a69efe6
// Size: 0x20 (Inherited: 0x00)
struct F*5a5a69efe6 {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName *263029df69; // 0x10(0x08)
	bool *f192c6bfbc; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*b4c4c49562
// Size: 0x18 (Inherited: 0x00)
struct F*b4c4c49562 {
	struct FName ActionName; // 0x00(0x08)
	struct FName *263029df69; // 0x08(0x08)
	bool *f192c6bfbc; // 0x10(0x01)
	enum class *5553c9dea0 *9ffd49d3c3; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*1e5151c8f2
// Size: 0x20 (Inherited: 0x18)
struct F*1e5151c8f2 : F*1ae451ca29 {
	struct UWidget* *ade0880c90; // 0x18(0x08)
};

// ScriptStruct TslGame.*1ae451ca29
// Size: 0x18 (Inherited: 0x00)
struct F*1ae451ca29 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct UUserWidget* Parent; // 0x10(0x08)
};

// ScriptStruct TslGame.*bbe25dba95
// Size: 0xa0 (Inherited: 0x98)
struct F*bbe25dba95 : F*612c0c9f13 {
	struct U*59a0aeaef9* VectorCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.*612c0c9f13
// Size: 0x98 (Inherited: 0x00)
struct F*612c0c9f13 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UUserWidget* Widget; // 0x18(0x08)
	char pad_20[0x78]; // 0x20(0x78)
};

// ScriptStruct TslGame.*758c91d300
// Size: 0xa0 (Inherited: 0x98)
struct F*758c91d300 : F*612c0c9f13 {
	struct UCurveFloat* FloatCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.*40c6977988
// Size: 0x20 (Inherited: 0x18)
struct F*40c6977988 : F*1ae451ca29 {
	struct USpacer* *73f8d28089; // 0x18(0x08)
};

// ScriptStruct TslGame.*72b0194904
// Size: 0x20 (Inherited: 0x18)
struct F*72b0194904 : F*1ae451ca29 {
	struct U*54cc75d10f* *64a58bf6c2; // 0x18(0x08)
};

// ScriptStruct TslGame.*2410bc4208
// Size: 0x18 (Inherited: 0x00)
struct F*2410bc4208 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*2c79402f19
// Size: 0x20 (Inherited: 0x18)
struct F*2c79402f19 : F*1ae451ca29 {
	struct UWebBrowser* *b39c1775ca; // 0x18(0x08)
};

// ScriptStruct TslGame.*d19b0bbaa6
// Size: 0x20 (Inherited: 0x18)
struct F*d19b0bbaa6 : F*1ae451ca29 {
	struct UUserWidget* *ade0880c90; // 0x18(0x08)
};

// ScriptStruct TslGame.*5936845b8b
// Size: 0x28 (Inherited: 0x20)
struct F*5936845b8b : F*82698b8317 {
	struct UScrollBox* *a29804c804; // 0x20(0x08)
};

// ScriptStruct TslGame.*82698b8317
// Size: 0x20 (Inherited: 0x18)
struct F*82698b8317 : F*1ae451ca29 {
	struct U*7762a61952* *70842b8b5f; // 0x18(0x08)
};

// ScriptStruct TslGame.*ec6454139a
// Size: 0x28 (Inherited: 0x20)
struct F*ec6454139a : F*82698b8317 {
	struct UScaleBox* *139506ea3a; // 0x20(0x08)
};

// ScriptStruct TslGame.*938b8814f5
// Size: 0x28 (Inherited: 0x20)
struct F*938b8814f5 : F*82698b8317 {
	struct UInvalidationBox* *ddc0ee91d7; // 0x20(0x08)
};

// ScriptStruct TslGame.*bcb63b7cc0
// Size: 0x28 (Inherited: 0x20)
struct F*bcb63b7cc0 : F*82698b8317 {
	struct URetainerBox* *a84e3e5fa1; // 0x20(0x08)
};

// ScriptStruct TslGame.*ab7fc46cfb
// Size: 0x28 (Inherited: 0x20)
struct F*ab7fc46cfb : F*82698b8317 {
	struct UWrapBox* *9154fabee9; // 0x20(0x08)
};

// ScriptStruct TslGame.*aad5c0ee0d
// Size: 0x28 (Inherited: 0x20)
struct F*aad5c0ee0d : F*82698b8317 {
	struct USizeBox* *b40d14d86f; // 0x20(0x08)
};

// ScriptStruct TslGame.*7c50600f8f
// Size: 0x30 (Inherited: 0x20)
struct F*7c50600f8f : F*82698b8317 {
	struct UBorder* *5524df6cf4; // 0x20(0x08)
	struct UMaterialInstanceDynamic* *5c8c594906; // 0x28(0x08)
};

// ScriptStruct TslGame.*39f1fd3231
// Size: 0x20 (Inherited: 0x18)
struct F*39f1fd3231 : F*1ae451ca29 {
	struct UEditableText* *d88ecbcbde; // 0x18(0x08)
};

// ScriptStruct TslGame.*8c7bdcaa93
// Size: 0x20 (Inherited: 0x18)
struct F*8c7bdcaa93 : F*1ae451ca29 {
	struct UTextBlock* *bd433350af; // 0x18(0x08)
};

// ScriptStruct TslGame.*06751c9d06
// Size: 0x28 (Inherited: 0x20)
struct F*06751c9d06 : F*82698b8317 {
	struct UWidgetSwitcher* *c01aa0509f; // 0x20(0x08)
};

// ScriptStruct TslGame.*f90b3e2b9a
// Size: 0x28 (Inherited: 0x20)
struct F*f90b3e2b9a : F*82698b8317 {
	struct UHorizontalBox* *50b09721a1; // 0x20(0x08)
};

// ScriptStruct TslGame.*be81a602d7
// Size: 0x28 (Inherited: 0x20)
struct F*be81a602d7 : F*82698b8317 {
	struct UVerticalBox* *d2ef9da378; // 0x20(0x08)
};

// ScriptStruct TslGame.*519e1635dd
// Size: 0x28 (Inherited: 0x20)
struct F*519e1635dd : F*82698b8317 {
	struct UOverlay* *658be10375; // 0x20(0x08)
};

// ScriptStruct TslGame.*c1cf1c46a8
// Size: 0x28 (Inherited: 0x20)
struct F*c1cf1c46a8 : F*82698b8317 {
	struct UCanvasPanel* *46136d46fe; // 0x20(0x08)
};

// ScriptStruct TslGame.*b1a0bce7e4
// Size: 0x28 (Inherited: 0x18)
struct F*b1a0bce7e4 : F*1ae451ca29 {
	struct UImage* *88812c7e34; // 0x18(0x08)
	struct UMaterialInstanceDynamic* *5c8c594906; // 0x20(0x08)
};

// ScriptStruct TslGame.*4c33a013bb
// Size: 0x60 (Inherited: 0x00)
struct F*4c33a013bb {
	struct F*8c7bdcaa93 *f8e420ae70; // 0x00(0x20)
	struct F*8c7bdcaa93 *6406830787; // 0x20(0x20)
	char pad_40[0x20]; // 0x40(0x20)
};

// ScriptStruct TslGame.*77b3d3d434
// Size: 0x40 (Inherited: 0x00)
struct F*77b3d3d434 {
	struct F*8c7bdcaa93 *f8e420ae70; // 0x00(0x20)
	enum class *329ef2ca91 *d1c71ce1d1; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *d027a41616; // 0x24(0x04)
	bool *f37b95631b; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString *0beea0c611; // 0x30(0x10)
};

// ScriptStruct TslGame.*73da1792c9
// Size: 0x30 (Inherited: 0x00)
struct F*73da1792c9 {
	struct FText *18934bf396; // 0x00(0x18)
	struct FText *c73ca7dfd2; // 0x18(0x18)
};

// ScriptStruct TslGame.*b3ed65a258
// Size: 0x18 (Inherited: 0x00)
struct F*b3ed65a258 {
	enum class ESandboxGroypType *02301bb883; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*fb87ada7de> Categories; // 0x08(0x10)
};

// ScriptStruct TslGame.*fb87ada7de
// Size: 0x18 (Inherited: 0x00)
struct F*fb87ada7de {
	int32 *a44b2afd62; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*b630e4adda> Items; // 0x08(0x10)
};

// ScriptStruct TslGame.*b630e4adda
// Size: 0x08 (Inherited: 0x00)
struct F*b630e4adda {
	int32 *46ff0889f7; // 0x00(0x04)
	int32 *60d7f23cfc; // 0x04(0x04)
};

// ScriptStruct TslGame.*9c38f0c819
// Size: 0x10 (Inherited: 0x00)
struct F*9c38f0c819 {
	enum class ESandboxPowerType Type; // 0x00(0x04)
	bool *1b3f50fe9a; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UParticleSystemComponent* *f82debdfbd; // 0x08(0x08)
};

// ScriptStruct TslGame.SandboxItemDataTable
// Size: 0x68 (Inherited: 0x10)
struct FSandboxItemDataTable : FBaseSandboxItemDataTable {
	struct FName CategoryName; // 0x10(0x08)
	struct FStringClassReference *e1189fbad3; // 0x18(0x10)
	struct FName ItemID; // 0x28(0x08)
	struct FString *c906a08470; // 0x30(0x10)
	struct FString *019d436c88; // 0x40(0x10)
	struct FString *a2b75efd5f; // 0x50(0x10)
	int32 Index; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.BaseSandboxItemDataTable
// Size: 0x10 (Inherited: 0x08)
struct FBaseSandboxItemDataTable : FTableRowBase {
	struct FName *9e0ebf6317; // 0x08(0x08)
};

// ScriptStruct TslGame.SandboxL10NDataTable
// Size: 0x48 (Inherited: 0x10)
struct FSandboxL10NDataTable : FBaseSandboxItemDataTable {
	struct FString NameSpace; // 0x10(0x10)
	struct FString Key; // 0x20(0x10)
	struct FString MsgId; // 0x30(0x10)
	int32 Index; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*c2e1cf8b14
// Size: 0x78 (Inherited: 0x10)
struct F*c2e1cf8b14 : FBaseSandboxItemDataTable {
	struct FName ItemName; // 0x10(0x08)
	struct FText *20dc8ab28d; // 0x18(0x18)
	struct FText DescriptionText; // 0x30(0x18)
	bool *64e0e6192e; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D SliderRange; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*73da1792c9> *752a7cf2ae; // 0x58(0x10)
	struct UClass* ItemWidgetClass; // 0x68(0x08)
	struct UClass* *7880f114b8; // 0x70(0x08)
};

// ScriptStruct TslGame.*ebfe0272ac
// Size: 0x38 (Inherited: 0x00)
struct F*ebfe0272ac {
	char pad_0[0x20]; // 0x00(0x20)
	enum class EStanceMode *308a8a5935; // 0x20(0x01)
	char pad_21[0x17]; // 0x21(0x17)
};

// ScriptStruct TslGame.*ee4654d473
// Size: 0x18 (Inherited: 0x00)
struct F*ee4654d473 {
	struct UCurveFloat* *87f2dc67e8; // 0x00(0x08)
	float *7b9511345b; // 0x08(0x04)
	float MaxSpeed; // 0x0c(0x04)
	float *05d61fba84; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*39b56bd642
// Size: 0x18 (Inherited: 0x00)
struct F*39b56bd642 {
	bool *9d170dc856; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *8be264cfec; // 0x04(0x04)
	bool *538b35fc9a; // 0x08(0x01)
	bool bUseAbsoluteAutoDeployAltitude; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float AutoDeployAltitude; // 0x0c(0x04)
	float StartDeployAltitude; // 0x10(0x04)
	float *cf30d556a4; // 0x14(0x04)
};

// ScriptStruct TslGame.*6d8ea2f88f
// Size: 0x10 (Inherited: 0x00)
struct F*6d8ea2f88f {
	float *30cd26f29f; // 0x00(0x04)
	float *80f79d0943; // 0x04(0x04)
	float *57caeece0b; // 0x08(0x04)
	float *f9bc63096e; // 0x0c(0x04)
};

// ScriptStruct TslGame.AscenderMovementSettings
// Size: 0x20 (Inherited: 0x00)
struct FAscenderMovementSettings {
	float UpwardAcceleration; // 0x00(0x04)
	float DownwardAcceleration; // 0x04(0x04)
	float DownwardAccelerationSprinting; // 0x08(0x04)
	float Friction; // 0x0c(0x04)
	float BrakingFriction; // 0x10(0x04)
	float MaxVelocityUp; // 0x14(0x04)
	float MaxVelocityDown; // 0x18(0x04)
	float MaxVelocityDownSprint; // 0x1c(0x04)
};

// ScriptStruct TslGame.*7382e0731f
// Size: 0x2c (Inherited: 0x00)
struct F*7382e0731f {
	float Height; // 0x00(0x04)
	float *30cd26f29f; // 0x04(0x04)
	float *80f79d0943; // 0x08(0x04)
	float *57caeece0b; // 0x0c(0x04)
	float *f9bc63096e; // 0x10(0x04)
	bool *9d170dc856; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *8be264cfec; // 0x18(0x04)
	bool *538b35fc9a; // 0x1c(0x01)
	bool bUseAbsoluteAutoDeployAltitude; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float AutoDeployAltitude; // 0x20(0x04)
	float StartDeployAltitude; // 0x24(0x04)
	float *cf30d556a4; // 0x28(0x04)
};

// ScriptStruct TslGame.*36d732cdad
// Size: 0x10 (Inherited: 0x00)
struct F*36d732cdad {
	struct FName *8acc411310; // 0x00(0x08)
	enum class EEmotePlayType *3e66ef72e1; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *103738f682; // 0x0c(0x04)
};

// ScriptStruct TslGame.*0274cc7bea
// Size: 0x28 (Inherited: 0x00)
struct F*0274cc7bea {
	struct FString StringOptionKey; // 0x00(0x10)
	enum class EGender Gender; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> ZombieOptionValues; // 0x18(0x10)
};

// ScriptStruct TslGame.*1609266660
// Size: 0x18 (Inherited: 0x00)
struct F*1609266660 {
	float BoostGauge; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* Buff; // 0x08(0x08)
	struct FName OverlapId; // 0x10(0x08)
};

// ScriptStruct TslGame.*b31c041b47
// Size: 0x10 (Inherited: 0x00)
struct F*b31c041b47 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*46842bd19e
// Size: 0x10 (Inherited: 0x00)
struct F*46842bd19e {
	struct UAnimMontage* *6dce130fb0; // 0x00(0x08)
	struct UAnimMontage* *48b2488969; // 0x08(0x08)
};

// ScriptStruct TslGame.*7bf3ddc16b
// Size: 0x20 (Inherited: 0x00)
struct F*7bf3ddc16b {
	struct FString RecordTargetNetId; // 0x00(0x10)
	struct FString RecordTargetName; // 0x10(0x10)
};

// ScriptStruct TslGame.*9f3011d122
// Size: 0x30 (Inherited: 0x00)
struct F*9f3011d122 {
	struct FString EtceteraEventCode; // 0x00(0x10)
	struct FString TargetNetId; // 0x10(0x10)
	struct FString TargetName; // 0x20(0x10)
};

// ScriptStruct TslGame.*159f087644
// Size: 0xa0 (Inherited: 0x00)
struct F*159f087644 {
	struct FString *dc4c0735dc; // 0x00(0x10)
	struct FString *ce7983b0b2; // 0x10(0x10)
	struct FString VictimNetId; // 0x20(0x10)
	struct FString VictimName; // 0x30(0x10)
	struct FString *e0324be508; // 0x40(0x10)
	struct FString *1fe975f39e; // 0x50(0x10)
	struct FString *c2874f8b34; // 0x60(0x10)
	bool *165a53b806; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString *fa5b163eaf; // 0x78(0x10)
	struct FString *6238bbc9c1; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct TslGame.*eb65f0fdbb
// Size: 0x38 (Inherited: 0x00)
struct F*eb65f0fdbb {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*81e0f2c280
// Size: 0x18 (Inherited: 0x00)
struct F*81e0f2c280 {
	struct FName EmoteName; // 0x00(0x08)
	struct FName SectionName; // 0x08(0x08)
	int32 *df3f8aff46; // 0x10(0x04)
	enum class EEmotePlayType *3e482a52f0; // 0x14(0x01)
	bool *7b729a6e1b; // 0x15(0x01)
	bool *82d4eb1d5b; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
};

// ScriptStruct TslGame.*c46e097269
// Size: 0xf0 (Inherited: 0x00)
struct F*c46e097269 {
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *847eb5c362; // 0x00(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *91b92d29fc; // 0x50(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *a6ff4a60ad; // 0xa0(0x50)
};

// ScriptStruct TslGame.*c99ac095a2
// Size: 0x50 (Inherited: 0x00)
struct F*c99ac095a2 {
	struct TMap<enum class EThrowableState, struct FStringArray> *310da13160; // 0x00(0x50)
};

// ScriptStruct TslGame.*805b341d27
// Size: 0x50 (Inherited: 0x00)
struct F*805b341d27 {
	struct TMap<struct FName, struct FString> *3829d39bca; // 0x00(0x50)
};

// ScriptStruct TslGame.*3fd8faa2f0
// Size: 0x01 (Inherited: 0x00)
struct F*3fd8faa2f0 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*1878dd6c15
// Size: 0x01 (Inherited: 0x00)
struct F*1878dd6c15 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*f0b4182e51
// Size: 0x01 (Inherited: 0x00)
struct F*f0b4182e51 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*40278cee41
// Size: 0x10 (Inherited: 0x00)
struct F*40278cee41 {
	struct TArray<enum class *67c9942ec7> *6f8d605de4; // 0x00(0x10)
};

// ScriptStruct TslGame.*0f4918c7c8
// Size: 0x02 (Inherited: 0x00)
struct F*0f4918c7c8 {
	enum class *67c9942ec7 *99481c20ac; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGame.AttackMode
// Size: 0x20 (Inherited: 0x00)
struct FAttackMode {
	float *5143457395; // 0x00(0x04)
	int32 AttackId; // 0x04(0x04)
	float *537dd60d24; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<enum class EWeaponClass> *de727ebc5c; // 0x10(0x10)
};

// ScriptStruct TslGame.*94f6550138
// Size: 0x10 (Inherited: 0x00)
struct F*94f6550138 {
	int32 *6d7d4b6825; // 0x00(0x04)
	float *3992220de9; // 0x04(0x04)
	int32 *38c9d07251; // 0x08(0x04)
	int32 *f52700a959; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e53b4b7b69
// Size: 0x14 (Inherited: 0x00)
struct F*e53b4b7b69 {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct TslGame.*316d6c5de5
// Size: 0x18 (Inherited: 0x00)
struct F*316d6c5de5 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *639bbf9531; // 0x08(0x10)
};

// ScriptStruct TslGame.*841e4e1d05
// Size: 0x18 (Inherited: 0x00)
struct F*841e4e1d05 {
	struct FName *08db616b8e; // 0x00(0x08)
	int32 *d59512dc51; // 0x08(0x04)
	int32 *8185a7230f; // 0x0c(0x04)
	int32 *e67c6c7fa5; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*0563f0c570
// Size: 0x08 (Inherited: 0x00)
struct F*0563f0c570 {
	float Distance; // 0x00(0x04)
	enum class ETargetingType TargetingMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*aebe4abbdd
// Size: 0x18 (Inherited: 0x00)
struct F*aebe4abbdd {
	int32 *fae3d0713e; // 0x00(0x04)
	float *a7e23d2bf3; // 0x04(0x04)
	struct TArray<struct F*0d0994de4f> *57633d1895; // 0x08(0x10)
};

// ScriptStruct TslGame.*0d0994de4f
// Size: 0x18 (Inherited: 0x00)
struct F*0d0994de4f {
	int32 *b16334f3be; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*a7b1b1b613> Item; // 0x08(0x10)
};

// ScriptStruct TslGame.*a7b1b1b613
// Size: 0x18 (Inherited: 0x00)
struct F*a7b1b1b613 {
	enum class EAIEquipSpawnItemType *505b924fe4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Item; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*2a328b12be
// Size: 0x08 (Inherited: 0x00)
struct F*2a328b12be {
	enum class EAITriggerAttrType *8306953f94; // 0x00(0x01)
	enum class EAIAttrCompareType CompareType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 *d1bb1c2a3c; // 0x04(0x04)
};

// ScriptStruct TslGame.*2fb357946d
// Size: 0x08 (Inherited: 0x00)
struct F*2fb357946d {
	int32 Probability; // 0x00(0x04)
	int32 *8a25344cfa; // 0x04(0x04)
};

// ScriptStruct TslGame.*e255185e6f
// Size: 0x02 (Inherited: 0x00)
struct F*e255185e6f {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	enum class ECollisionResponse Response; // 0x01(0x01)
};

// ScriptStruct TslGame.*9924d69359
// Size: 0x28 (Inherited: 0x08)
struct F*9924d69359 : FTableRowBase {
	bool bUseCharacterHitFeedback; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor PartsColor; // 0x0c(0x10)
	float DamageReduceMultiplier; // 0x1c(0x04)
	enum class EDamageZoneType PartsDamageZoneType; // 0x20(0x01)
	enum class EDamageReason PartsDamageReason; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*83f3fd111a
// Size: 0x18 (Inherited: 0x00)
struct F*83f3fd111a {
	struct FLinearColor *4c3c5eeffe; // 0x00(0x10)
	enum class EDamageReason *c2874f8b34; // 0x10(0x01)
	enum class EDamageZoneType *821319c698; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float *7ccb14a3f1; // 0x14(0x04)
};

// ScriptStruct TslGame.*418624bc68
// Size: 0x20 (Inherited: 0x00)
struct F*418624bc68 {
	struct UTexture2D* PartsTargetImage; // 0x00(0x08)
	struct FString *536a33049b; // 0x08(0x10)
	bool bUsingCharacterHitFeedback; // 0x18(0x01)
	bool bUsingDamageIndicator; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*2ef28fbee3
// Size: 0x200 (Inherited: 0x08)
struct F*2ef28fbee3 : FTableRowBase {
	struct F*19b9117a17 *1f8da2445d; // 0x08(0x88)
	struct F*19b9117a17 *6378e4cd64; // 0x90(0x88)
	struct TArray<struct FText> *0a57afe7e7; // 0x118(0x10)
	struct TArray<struct FText> *3326e60431; // 0x128(0x10)
	struct TArray<struct FText> *fdfc1b4e4e; // 0x138(0x10)
	struct TArray<struct FText> *bfaa9fff78; // 0x148(0x10)
	struct TArray<struct F*0a7f75eeea> *24c8029191; // 0x158(0x10)
	struct TArray<struct F*0a7f75eeea> *7b839650ca; // 0x168(0x10)
	struct F*0a7f75eeea *7b1298e1df; // 0x178(0x38)
	struct F*0a7f75eeea *67a094acfc; // 0x1b0(0x38)
	struct TArray<struct F*214d2a89ad> *8b008920a0; // 0x1e8(0x10)
	struct FName *57b6dd4a05; // 0x1f8(0x08)
};

// ScriptStruct TslGame.*214d2a89ad
// Size: 0x48 (Inherited: 0x00)
struct F*214d2a89ad {
	struct F*eded1f3571 *d9145b9245; // 0x00(0x20)
	struct F*eded1f3571 *10682e18fd; // 0x20(0x20)
	float *1bf4622e26; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*eded1f3571
// Size: 0x20 (Inherited: 0x00)
struct F*eded1f3571 {
	struct FString *bbd4c493bd; // 0x00(0x10)
	struct FString *1ed1efd3cf; // 0x10(0x10)
};

// ScriptStruct TslGame.*0a7f75eeea
// Size: 0x38 (Inherited: 0x00)
struct F*0a7f75eeea {
	struct FText *c5fddece52; // 0x00(0x18)
	struct FText *fbb2aba1aa; // 0x18(0x18)
	bool *48c35fdb26; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*19b9117a17
// Size: 0x88 (Inherited: 0x00)
struct F*19b9117a17 {
	struct FText *93b5595f8b; // 0x00(0x18)
	struct UPlatformMediaSource* *e5589784b8; // 0x18(0x08)
	struct UAkAudioEvent* *c463cfd3e4; // 0x20(0x08)
	struct FText *0d31bf8c90; // 0x28(0x18)
	struct FText *11cb9eeba1; // 0x40(0x18)
	struct FText *cf269939d6; // 0x58(0x18)
	struct FText *1e03aa97bf; // 0x70(0x18)
};

// ScriptStruct TslGame.*57d9d15df4
// Size: 0xa8 (Inherited: 0x00)
struct F*57d9d15df4 {
	bool bUseBurstRecoilMap; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D BurstRecoilInMap; // 0x04(0x08)
	struct FVector2D BurstRecoilOutMap; // 0x0c(0x08)
	float RecoilKickADS; // 0x14(0x04)
	float RecoilKick_MovementSpeedMax; // 0x18(0x04)
	float RecoilKick_MovementMaxMultiplier; // 0x1c(0x04)
	struct FVector RecoilADSSocketOffsetScale; // 0x20(0x0c)
	float DeviationRecoilGain; // 0x2c(0x04)
	float DeviationRecoilGainAim; // 0x30(0x04)
	float DeviationRecoilGainADS; // 0x34(0x04)
	float VerticalRecoilMin; // 0x38(0x04)
	float VerticalRecoilMax; // 0x3c(0x04)
	float VerticalRecoilRecoveryMin; // 0x40(0x04)
	float VerticalRecoilVariation; // 0x44(0x04)
	float VerticalRecoveryModifier; // 0x48(0x04)
	float VerticalRecoveryClamp; // 0x4c(0x04)
	float VerticalRecoveryMax; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct U*59a0aeaef9* RecoilCurve; // 0x58(0x08)
	float RecoilSpeed_Vertical; // 0x60(0x04)
	float RecoilSpeed_Horizontal; // 0x64(0x04)
	float RecoverySpeed_Vertical; // 0x68(0x04)
	float RecoilValue_Climb; // 0x6c(0x04)
	float RecoilValue_Fall; // 0x70(0x04)
	float RecoilModifier_Stand; // 0x74(0x04)
	float RecoilModifier_Crouch; // 0x78(0x04)
	float RecoilModifier_Prone; // 0x7c(0x04)
	float RecoilHorizontalMinScalar; // 0x80(0x04)
	struct FVector2D RecoilStartTimeInMap; // 0x84(0x08)
	struct FVector2D RecoilStartTimeOutMap; // 0x8c(0x08)
	struct FVector2D RecoilBlendInInMap; // 0x94(0x08)
	struct FVector2D RecoilBlendInOutMap; // 0x9c(0x08)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.WeaponAnimConfig
// Size: 0x1c0 (Inherited: 0x00)
struct FWeaponAnimConfig {
	char *d0a932a0f1 : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UBlendSpace1D* *5306202f49; // 0x08(0x08)
	struct UBlendSpaceBase* *47b490521f; // 0x10(0x08)
	struct UAnimMontage* *334b1bdd3a; // 0x18(0x08)
	struct UAnimMontage* *0e1ba8c77f; // 0x20(0x08)
	struct UAnimMontage* *3f74fd213f; // 0x28(0x08)
	struct UAnimMontage* *23ef5fc053; // 0x30(0x08)
	struct UAnimMontage* *4416daad5d; // 0x38(0x08)
	struct UAnimMontage* *46a389204a; // 0x40(0x08)
	struct UAnimMontage* *3d1dc29e5e; // 0x48(0x08)
	struct UAnimMontage* *7475428885; // 0x50(0x08)
	struct UAnimMontage* *2ced9c2fa1; // 0x58(0x08)
	struct UAnimMontage* *aa22d7ca47; // 0x60(0x08)
	struct UAnimMontage* *f3b7dcfff9; // 0x68(0x08)
	enum class EWeaponClass *4e9423fead; // 0x70(0x01)
	bool *629925f4e7; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float *2464c506a5; // 0x74(0x04)
	float *24b8256a45; // 0x78(0x04)
	float *4076794d5d; // 0x7c(0x04)
	float *3000f18c91; // 0x80(0x04)
	float *038d68e305; // 0x84(0x04)
	bool *88b582f232; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *871e81db9a; // 0x8c(0x04)
	float *7162419703; // 0x90(0x04)
	float *7e62a3786b; // 0x94(0x04)
	bool *066acb56eb; // 0x98(0x01)
	bool *73dc799e90; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32 *45605ce1ac; // 0x9c(0x04)
	struct UClass* *feb3d89748; // 0xa0(0x08)
	struct UClass* *0f438b7f5a; // 0xa8(0x08)
	struct UClass* *7221190341; // 0xb0(0x08)
	struct UClass* *fc411c0d71; // 0xb8(0x08)
	struct UCameraAnim* *bbace9018d; // 0xc0(0x08)
	float RecoilKickADS; // 0xc8(0x04)
	float RecoilKick_MovementSpeedMax; // 0xcc(0x04)
	float RecoilKick_MovementMaxMultiplier; // 0xd0(0x04)
	struct FVector RecoilADSSocketOffsetScale; // 0xd4(0x0c)
	struct FVector *5941229a80; // 0xe0(0x0c)
	struct FVector *08e12b500a; // 0xec(0x0c)
	float *d03cfbcb90; // 0xf8(0x04)
	float *a690580d13; // 0xfc(0x04)
	bool bUseBurstRecoilMap; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FVector2D BurstRecoilInMap; // 0x104(0x08)
	struct FVector2D BurstRecoilOutMap; // 0x10c(0x08)
	float *193cbac887; // 0x114(0x04)
	struct TMap<enum class EAnimStance, float> *20936882b7; // 0x118(0x50)
	struct TMap<enum class EAnimStance, float> *14dd352447; // 0x168(0x50)
	float *a42dd79fad; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// ScriptStruct TslGame.WeaponDeviationConfig
// Size: 0x6c (Inherited: 0x00)
struct FWeaponDeviationConfig {
	float *0a3fe9d0e8; // 0x00(0x04)
	float *79127c195f; // 0x04(0x04)
	float MOA; // 0x08(0x04)
	float DeviationRecoilGain; // 0x0c(0x04)
	float DeviationRecoilGainAim; // 0x10(0x04)
	float DeviationRecoilGainADS; // 0x14(0x04)
	float *115bdfc36c; // 0x18(0x04)
	float *69c88f7481; // 0x1c(0x04)
	float *452046de1d; // 0x20(0x04)
	float *ed89b7e7fb; // 0x24(0x04)
	float *3e2344e67b; // 0x28(0x04)
	float *23ff3de337; // 0x2c(0x04)
	float *a3dcae4ed5; // 0x30(0x04)
	float *dc563ed116; // 0x34(0x04)
	float *864ba35316; // 0x38(0x04)
	float *d8b0e9dcaf; // 0x3c(0x04)
	float *f46abf2b87; // 0x40(0x04)
	float *230eac726a; // 0x44(0x04)
	float *66c79cd5c4; // 0x48(0x04)
	float *c4ec78de85; // 0x4c(0x04)
	float *ace743ad08; // 0x50(0x04)
	float *67aafb7d1c; // 0x54(0x04)
	float *c744a02fe1; // 0x58(0x04)
	float *ed4d6e3052; // 0x5c(0x04)
	float *16398b470a; // 0x60(0x04)
	float *9630c14220; // 0x64(0x04)
	float *5e1e221f0b; // 0x68(0x04)
};

// ScriptStruct TslGame.*1b1e33cc93
// Size: 0x2c0 (Inherited: 0x00)
struct F*1b1e33cc93 {
	struct FName *08db616b8e; // 0x00(0x08)
	struct UParticleSystem* *883bd075f7; // 0x08(0x08)
	int32 *0cbf8a6500; // 0x10(0x04)
	int32 *bca951e4af; // 0x14(0x04)
	bool bUseGameplayTracers; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UClass* GameplayTracerClassOverride; // 0x20(0x08)
	int32 GameplayTracerAmmoModOverride; // 0x28(0x04)
	int32 GameplayTracerAmmoMinOverride; // 0x2c(0x04)
	int32 *74f3fd9761; // 0x30(0x04)
	float TimeBetweenShots; // 0x34(0x04)
	struct TArray<struct F*19d05f50bc> AttachmentTagData; // 0x38(0x10)
	int32 RPM; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TMap<enum class EFiringMode, float> TimeBetweenShotsOverride; // 0x50(0x50)
	bool bUseTimeBetweenBursts; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float TimeBetweenBursts; // 0xa4(0x04)
	float NoAnimReloadDuration; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<enum class EFiringMode> *c611055bd2; // 0xb0(0x10)
	int32 *0116e962e2; // 0xc0(0x04)
	float *a75c59a167; // 0xc4(0x04)
	int32 BulletPerFiring; // 0xc8(0x04)
	float *deab4536ae; // 0xcc(0x04)
	bool *463bcd3663; // 0xd0(0x01)
	bool *d60fdb9b46; // 0xd1(0x01)
	enum class EWeaponReloadMethod *e8fb910441; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float *2c60327f75; // 0xd4(0x04)
	float *733c9a399e; // 0xd8(0x04)
	float *29ffd41994; // 0xdc(0x04)
	float *3799153a43; // 0xe0(0x04)
	float *cc1c77b953; // 0xe4(0x04)
	float *88ade3aaa4; // 0xe8(0x04)
	float *b0022fc6fb; // 0xec(0x04)
	bool *6a9e94ab78; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector *eef876815b; // 0xf4(0x0c)
	struct FVector *1438701121; // 0x100(0x0c)
	bool *44e6b9c8df; // 0x10c(0x01)
	bool *d662dcf019; // 0x10d(0x01)
	bool *3b4a0a12fc; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	float *8daf440ef5; // 0x110(0x04)
	bool *a59683f24f; // 0x114(0x01)
	bool *1974c9596e; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
	struct TMap<int32, struct FVector2D> *9f79cc328d; // 0x118(0x50)
	float *bb994e3f4b; // 0x168(0x04)
	float *b22f7578ae; // 0x16c(0x04)
	bool *88d4cf4e5f; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float *5c9248eaf8; // 0x174(0x04)
	float *1f9ca5d2e9; // 0x178(0x04)
	float *a4c293d442; // 0x17c(0x04)
	float *ac27156e51; // 0x180(0x04)
	float *8eccec5077; // 0x184(0x04)
	float *5f451752c8; // 0x188(0x04)
	float *2c9d56d8dc; // 0x18c(0x04)
	float *85d09f4530; // 0x190(0x04)
	bool *009f4d65d4; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float *fadc8dd410; // 0x198(0x04)
	bool *bf5cc90326; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	int32 *7777d340c6; // 0x1a0(0x04)
	float *4756e88553; // 0x1a4(0x04)
	struct UCurveFloat* *a056c64c90; // 0x1a8(0x08)
	struct UClass* *271a14efcc; // 0x1b0(0x08)
	bool *140f2226df; // 0x1b8(0x01)
	bool *838b3eef75; // 0x1b9(0x01)
	bool *3c198bc44a; // 0x1ba(0x01)
	char pad_1BB[0x1]; // 0x1bb(0x01)
	int32 *119c3aca21; // 0x1bc(0x04)
	bool *cbaa67ec2c; // 0x1c0(0x01)
	bool *02f1895a04; // 0x1c1(0x01)
	char pad_1C2[0x6]; // 0x1c2(0x06)
	struct TMap<int32, float> *a2eace8d13; // 0x1c8(0x50)
	struct UClass* *e8b528af84; // 0x218(0x08)
	struct TMap<enum class EFiringMode, struct UAkAudioEvent*> *3059bcf428; // 0x220(0x50)
	struct TMap<enum class EScopeType, float> *e787cda1f3; // 0x270(0x50)
};

// ScriptStruct TslGame.*4e2d42c462
// Size: 0x1c (Inherited: 0x00)
struct F*4e2d42c462 {
	float *3d6810d45a; // 0x00(0x04)
	float *e8cfb29bdd; // 0x04(0x04)
	float *553f45d3f0; // 0x08(0x04)
	float *2db6bf4806; // 0x0c(0x04)
	int32 *7d61e79c31; // 0x10(0x04)
	int32 *98418804e1; // 0x14(0x04)
	int32 *71e5c8f64e; // 0x18(0x04)
};

// ScriptStruct TslGame.*2927894ddb
// Size: 0x20 (Inherited: 0x00)
struct F*2927894ddb {
	struct TArray<struct F*1d3ebc1f04> *4b463df6bb; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*1d3ebc1f04
// Size: 0x10 (Inherited: 0x00)
struct F*1d3ebc1f04 {
	struct FName SkinId; // 0x00(0x08)
	int32 *c30901a219; // 0x08(0x04)
	int32 *427791171d; // 0x0c(0x04)
};

// ScriptStruct TslGame.*3bbea009d3
// Size: 0x60 (Inherited: 0x08)
struct F*3bbea009d3 : FTableRowBase {
	float *a07d372e56; // 0x08(0x04)
	float *51bafc4bae; // 0x0c(0x04)
	float *0bb26adb8e; // 0x10(0x04)
	float *75e0545d5e; // 0x14(0x04)
	float *1bacff71c6; // 0x18(0x04)
	int32 *e20f8e2167; // 0x1c(0x04)
	float *4ac8fdca0a; // 0x20(0x04)
	float *c26ad7114c; // 0x24(0x04)
	float *0d2f4fcca9; // 0x28(0x04)
	float *9c330b5166; // 0x2c(0x04)
	float *9d54272433; // 0x30(0x04)
	float *124c512a4e; // 0x34(0x04)
	float *69835da548; // 0x38(0x04)
	float *62cddf2687; // 0x3c(0x04)
	float *74b5bccbb2; // 0x40(0x04)
	float *97394ceb4d; // 0x44(0x04)
	float *36cc889a0d; // 0x48(0x04)
	float *37e67926c5; // 0x4c(0x04)
	float *5b778e2c27; // 0x50(0x04)
	float *9b03ce9d98; // 0x54(0x04)
	float *beedce1318; // 0x58(0x04)
	float *7843a366e7; // 0x5c(0x04)
};

// ScriptStruct TslGame.*514c9a1365
// Size: 0x1c (Inherited: 0x00)
struct F*514c9a1365 {
	float *a07d372e56; // 0x00(0x04)
	float *38aae38c6f; // 0x04(0x04)
	float *f0a6208485; // 0x08(0x04)
	float *5b90a7ae3b; // 0x0c(0x04)
	float *2d903db0df; // 0x10(0x04)
	float *a0b1105eed; // 0x14(0x04)
	float *371df9ddcb; // 0x18(0x04)
};

// ScriptStruct TslGame.*a807164509
// Size: 0x70 (Inherited: 0x00)
struct F*a807164509 {
	struct TArray<struct FName> Bodies; // 0x00(0x10)
	struct TArray<struct FName> Legs; // 0x10(0x10)
	struct TArray<struct FName> *19f4fc35ab; // 0x20(0x10)
	struct TArray<struct FName> *7165ee86a0; // 0x30(0x10)
	struct TArray<struct FName> Hands; // 0x40(0x10)
	struct TArray<struct FName> *85441d6f33; // 0x50(0x10)
	struct TArray<struct FName> *c6f2ac1724; // 0x60(0x10)
};

// ScriptStruct TslGame.*039b2d8a08
// Size: 0x60 (Inherited: 0x00)
struct F*039b2d8a08 {
	char pad_0[0x30]; // 0x00(0x30)
	struct F*530130b043 *bdc1171e4a; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct TslGame.*530130b043
// Size: 0x18 (Inherited: 0x00)
struct F*530130b043 {
	int32 PresetIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *3fb1b4fa2c; // 0x08(0x10)
};

// ScriptStruct TslGame.*23e62bf631
// Size: 0x10 (Inherited: 0x00)
struct F*23e62bf631 {
	struct TArray<int32> *429564b143; // 0x00(0x10)
};

// ScriptStruct TslGame.*b4ba58a2b4
// Size: 0x10 (Inherited: 0x00)
struct F*b4ba58a2b4 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*820b798ba1
// Size: 0x18 (Inherited: 0x00)
struct F*820b798ba1 {
	struct ATslPlayerState* *f06c6c6358; // 0x00(0x08)
	bool bEnabled; // 0x08(0x01)
	bool *71b51dcdac; // 0x09(0x01)
	enum class ETslRedeployPlayerState State; // 0x0a(0x01)
	int8 *3bd3eeebc0; // 0x0b(0x01)
	bool *46b22e1380; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *1ec1b205b3; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*82bbabee9a
// Size: 0x24 (Inherited: 0x00)
struct F*82bbabee9a {
	bool bEnabled; // 0x00(0x01)
	bool *71b51dcdac; // 0x01(0x01)
	bool *fc00e3fd45; // 0x02(0x01)
	bool *8f67ae82b8; // 0x03(0x01)
	bool *7a284ee4bd; // 0x04(0x01)
	bool *c56b007674; // 0x05(0x01)
	bool *4db43aafb1; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float *4fecb3a95d; // 0x08(0x04)
	float *7a6d76589c; // 0x0c(0x04)
	float *431e392b80; // 0x10(0x04)
	float *8825ca69f9; // 0x14(0x04)
	float *8faff7bae8; // 0x18(0x04)
	float RedeploySec; // 0x1c(0x04)
	float *964cb5e001; // 0x20(0x04)
};

// ScriptStruct TslGame.BaseUserPlayData
// Size: 0x08 (Inherited: 0x00)
struct FBaseUserPlayData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*2e557e470e
// Size: 0x06 (Inherited: 0x00)
struct F*2e557e470e {
	bool *c12dd0e5bd; // 0x00(0x01)
	bool *bf006a72d3; // 0x01(0x01)
	enum class EAutoEquipAttachmentForScopeMode *8db8a1fee6; // 0x02(0x01)
	bool *36d997c57f; // 0x03(0x01)
	bool *7da6c23fa1; // 0x04(0x01)
	bool *39f080dd2d; // 0x05(0x01)
};

// ScriptStruct TslGame.*1d32738d23
// Size: 0x20 (Inherited: 0x00)
struct F*1d32738d23 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*c97301c5d4
// Size: 0x20 (Inherited: 0x00)
struct F*c97301c5d4 {
	bool *4fcacb9f1a; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime *f06f33b612; // 0x08(0x08)
	struct FString *6ffebbaa9b; // 0x10(0x10)
};

// ScriptStruct TslGame.*27cd640c98
// Size: 0x20 (Inherited: 0x00)
struct F*27cd640c98 {
	bool bSpawnWayPoint; // 0x00(0x01)
	bool bShowWayPoint_PS; // 0x01(0x01)
	bool bCancelWayPoint; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32 MaxWayPointNum_PS; // 0x04(0x04)
	struct TArray<struct FVector2D> WayPointPosArr_PS; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*42ef560b64
// Size: 0x10 (Inherited: 0x00)
struct F*42ef560b64 {
	struct UClass* *ca92eddffb; // 0x00(0x08)
	int32 *d61bb58780; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1cb1de1e74
// Size: 0x10 (Inherited: 0x00)
struct F*1cb1de1e74 {
	struct FName ItemID; // 0x00(0x08)
	enum class ECastableItemType *505b924fe4; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 *d61bb58780; // 0x0c(0x04)
};

// ScriptStruct TslGame.*2a94286435
// Size: 0xc40 (Inherited: 0x00)
struct F*2a94286435 {
	struct F*5c550260a6 *23c892328b; // 0x00(0x78)
	struct F*5c550260a6 *4b7452c0e0; // 0x78(0x78)
	struct F*5c550260a6 *921a439c2b; // 0xf0(0x78)
	struct F*5c550260a6 *b627fe2327; // 0x168(0x78)
	struct F*5c550260a6 *4d7dabe11f; // 0x1e0(0x78)
	struct F*5c550260a6 *7c6c638cd1; // 0x258(0x78)
	struct F*5c550260a6 *f8542eb390; // 0x2d0(0x78)
	struct F*5c550260a6 *54b94c33f5; // 0x348(0x78)
	struct F*5c550260a6 *3163f79093; // 0x3c0(0x78)
	struct F*5c550260a6 *27c18fddf3; // 0x438(0x78)
	struct F*5c550260a6 FleshDecal; // 0x4b0(0x78)
	struct F*5c550260a6 *2e65606a2d; // 0x528(0x78)
	struct F*5c550260a6 *a8ede1721c; // 0x5a0(0x78)
	struct F*5c550260a6 *7926f7ccb4; // 0x618(0x78)
	struct F*5c550260a6 *fec2c85daa; // 0x690(0x78)
	struct F*5c550260a6 *2076fd13f8; // 0x708(0x78)
	struct F*5c550260a6 *3205903250; // 0x780(0x78)
	struct F*5c550260a6 *16c22abc0a; // 0x7f8(0x78)
	struct F*5c550260a6 *a1f42d9bba; // 0x870(0x78)
	struct F*5c550260a6 *713cf1b02c; // 0x8e8(0x78)
	struct F*5c550260a6 *a349384887; // 0x960(0x78)
	struct F*5c550260a6 *d1dbfbedba; // 0x9d8(0x78)
	bool *6a285a8787; // 0xa50(0x01)
	char pad_A51[0x7]; // 0xa51(0x07)
	struct F*5c550260a6 SprayDecal; // 0xa58(0x78)
	struct F*5c550260a6 *10ba703421; // 0xad0(0x78)
	struct F*5c550260a6 *29b3630bc6; // 0xb48(0x78)
	struct F*5c550260a6 *be9ff06717; // 0xbc0(0x78)
	bool *190187139b; // 0xc38(0x01)
	char pad_C39[0x7]; // 0xc39(0x07)
};

// ScriptStruct TslGame.*5c550260a6
// Size: 0x78 (Inherited: 0x00)
struct F*5c550260a6 {
	struct UMaterial* Material; // 0x00(0x08)
	struct UMaterial* RicochetMaterial; // 0x08(0x08)
	struct FFloatRange Size; // 0x10(0x10)
	struct FFloatRange NormalFadeAngle; // 0x20(0x10)
	float FadeScreenSize; // 0x30(0x04)
	float FadeStartDelay; // 0x34(0x04)
	float FadeDuration; // 0x38(0x04)
	char bUseRandomInput : 1; // 0x3c(0x01)
	char bUseRandomRoll : 1; // 0x3c(0x01)
	char bReversal : 1; // 0x3c(0x01)
	char bUseRicochet : 1; // 0x3c(0x01)
	char pad_3C_4 : 4; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct F*71b70dd01c DecalChannels; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector2D DotProductLongScaleMapIn; // 0x44(0x08)
	struct FVector2D DotProductLongScaleMapOut; // 0x4c(0x08)
	struct FVector2D DotProductLatScaleMapIn; // 0x54(0x08)
	struct FVector2D DotProductLatScaleMapOut; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture* *99280b7194; // 0x68(0x08)
	int32 *4003182dd6; // 0x70(0x04)
	float *0240d021d6; // 0x74(0x04)
};

// ScriptStruct TslGame.*dea28f64da
// Size: 0x30 (Inherited: 0x00)
struct F*dea28f64da {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*d4ca797aa7
// Size: 0x18 (Inherited: 0x00)
struct F*d4ca797aa7 {
	float MaxDot; // 0x00(0x04)
	struct FFloatRange RicochetChance; // 0x04(0x10)
	bool bAlwaysScaleDecal; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*c5a9953119
// Size: 0x110 (Inherited: 0x00)
struct F*c5a9953119 {
	struct UStaticMesh* *974cf7238d; // 0x00(0x08)
	struct TArray<struct UMaterialInstance*> *52bc7fc6a2; // 0x08(0x10)
	struct UStaticMesh* *f4e6365b2d; // 0x18(0x08)
	struct TArray<struct UMaterialInstance*> *f693743301; // 0x20(0x10)
	struct UStaticMesh* *26aa263a85; // 0x30(0x08)
	struct TArray<struct UMaterialInstance*> *96b98cbe44; // 0x38(0x10)
	struct UClass* *4add1cb79f; // 0x48(0x08)
	struct UClass* *7ef8a81222; // 0x50(0x08)
	bool *bcf005bd6d; // 0x58(0x01)
	bool *af72a385fc; // 0x59(0x01)
	bool *fe8c16a614; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct UPhysicalMaterial* PhysMaterial; // 0x60(0x08)
	struct UTexture2D* *f0f7ee93e8; // 0x68(0x08)
	struct U*ba29cd2513* *1cdc003998; // 0x70(0x08)
	struct UTexture2D* *22e689aa16; // 0x78(0x08)
	struct TArray<struct U*ad48025222*> *523c576fbe; // 0x80(0x10)
	bool *a41480ad15; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UMaterialInstance*> *7f5e603f45; // 0x98(0x10)
	struct UStaticMesh* *cab0e8ed1f; // 0xa8(0x08)
	struct TArray<struct UMaterialInstance*> *ab5096e2c9; // 0xb0(0x10)
	int32 *fd0a44e8c7; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UClass* *35b9e1a586; // 0xc8(0x08)
	struct TArray<enum class EDestrucibleSurfaceSourceType> *046512f30b; // 0xd0(0x10)
	bool *837ee97190; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32 *30dc7da8c5; // 0xe4(0x04)
	float *e9e15bf692; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UClass* *61d3e809b7; // 0xf0(0x08)
	float *96efb3656b; // 0xf8(0x04)
	float BulletEntranceRadiusSize; // 0xfc(0x04)
	float BulletExitRadiusSize; // 0x100(0x04)
	bool HitsOnlyAffectFacingSurface; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UStaticMesh* FrameComplexCollisionMesh; // 0x108(0x08)
};

// ScriptStruct TslGame.*7ee0a72c23
// Size: 0x08 (Inherited: 0x00)
struct F*7ee0a72c23 {
	uint16 *0414abf415; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32 InstanceIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*7d615bb0f0
// Size: 0x34 (Inherited: 0x00)
struct F*7d615bb0f0 {
	uint16 *0414abf415; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct F*72d647750d Hit; // 0x04(0x30)
};

// ScriptStruct TslGame.*72d647750d
// Size: 0x30 (Inherited: 0x00)
struct F*72d647750d {
	struct FVector_NetQuantize HitLocation; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal *cc758bcf76; // 0x0c(0x0c)
	int32 InstanceIndex; // 0x18(0x04)
	enum class EDestrucibleSurfaceSourceType *271a14efcc; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Radius; // 0x20(0x04)
	struct FVector_NetQuantize *003f34099b; // 0x24(0x0c)
};

// ScriptStruct TslGame.ParticleParameter
// Size: 0x18 (Inherited: 0x00)
struct FParticleParameter {
	struct FName Name; // 0x00(0x08)
	struct FVector Value; // 0x08(0x0c)
	bool bEnableRTPC; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*95d1505c53
// Size: 0x60 (Inherited: 0x00)
struct F*95d1505c53 {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UClass* ParticleEnvironment; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct TslGame.*ad36e38a26
// Size: 0x60 (Inherited: 0x00)
struct F*ad36e38a26 {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UParticleSystem* ParticleSystem; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	bool UseWorldTransform; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)
};

// ScriptStruct TslGame.*2b23c275ff
// Size: 0xe0 (Inherited: 0x00)
struct F*2b23c275ff {
	struct FGuid ID; // 0x00(0x10)
	struct TArray<struct UActorComponent*> StaticComponents; // 0x10(0x10)
	struct TMap<struct UStaticMeshComponent*, struct F*36f95b97f5> InstancedComponents; // 0x20(0x50)
	struct TArray<struct UDoorInteractionComponent*> DoorComponents; // 0x70(0x10)
	struct TArray<struct APostProcessVolume*> PostProcessVolumes; // 0x80(0x10)
	struct TMap<struct UAkSoundVolumesContainerComponent*, struct F*2761725df2> LinkedSoundVolumesMap; // 0x90(0x50)
};

// ScriptStruct TslGame.*2761725df2
// Size: 0x10 (Inherited: 0x00)
struct F*2761725df2 {
	struct TArray<int32> *68341b5c44; // 0x00(0x10)
};

// ScriptStruct TslGame.*36f95b97f5
// Size: 0x10 (Inherited: 0x00)
struct F*36f95b97f5 {
	struct TArray<int32> Indices; // 0x00(0x10)
};

// ScriptStruct TslGame.*bf5e6e4ed6
// Size: 0x10 (Inherited: 0x00)
struct F*bf5e6e4ed6 {
	struct TArray<struct F*85a54f1557> Beacons; // 0x00(0x10)
};

// ScriptStruct TslGame.*85a54f1557
// Size: 0xd0 (Inherited: 0x00)
struct F*85a54f1557 {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FTransform BeaconTransform; // 0x10(0x30)
	struct FVector BuildingLocalOriginOffset; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct F*ad36e38a26> ParticleEffects; // 0x50(0x10)
	struct TArray<struct F*95d1505c53> ParticleEnvironments; // 0x60(0x10)
	float NearbyHitParticleDistance; // 0x70(0x04)
	float DamageRadius; // 0x74(0x04)
	struct FVector VolumetricScale; // 0x78(0x0c)
	struct FGuid DestructibleId; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
	struct USkeletalMesh* DestructionMesh; // 0x98(0x08)
	struct UAnimationAsset* DestructionAnimation; // 0xa0(0x08)
	float DestroyAnimationDelayTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*03bf650390> BeaconKillBoxes; // 0xb0(0x10)
	bool WasHit; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// ScriptStruct TslGame.*03bf650390
// Size: 0x50 (Inherited: 0x00)
struct F*03bf650390 {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct FTransform KillZoneTransfrom; // 0x10(0x30)
	struct FVector KillZoneExtent; // 0x40(0x0c)
	bool KillPlayers; // 0x4c(0x01)
	bool DeleteItems; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct TslGame.*f282ae332a
// Size: 0x24 (Inherited: 0x00)
struct F*f282ae332a {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FVector BlackZoneOrigin; // 0x10(0x0c)
	float BlackZoneRadius; // 0x1c(0x04)
	bool BeaconsPresent; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*05abc7bfc0
// Size: 0x18 (Inherited: 0x00)
struct F*05abc7bfc0 {
	bool *900eb351ba; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid ID; // 0x04(0x10)
	float *986ffc21e2; // 0x14(0x04)
};

// ScriptStruct TslGame.*ab48c684d4
// Size: 0x08 (Inherited: 0x00)
struct F*ab48c684d4 {
	int32 Mode; // 0x00(0x04)
	int32 Type; // 0x04(0x04)
};

// ScriptStruct TslGame.*ba069200a3
// Size: 0x88 (Inherited: 0x00)
struct F*ba069200a3 {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct TslGame.*68338f0049
// Size: 0x38 (Inherited: 0x30)
struct F*68338f0049 : F*3fa3345fb2 {
	float *23a905219d; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*3fa3345fb2
// Size: 0x30 (Inherited: 0x00)
struct F*3fa3345fb2 {
	struct FVector *a10674c67b; // 0x00(0x0c)
	struct FVector Dir; // 0x0c(0x0c)
	struct FAttackId AttackId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UClass* *4cea20a818; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct TslGame.*cbf78c904a
// Size: 0x08 (Inherited: 0x00)
struct F*cbf78c904a {
	float *a6e23f7da2; // 0x00(0x04)
	uint16 *b1e3bc6b30; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGame.*ccad321d9b
// Size: 0x30 (Inherited: 0x00)
struct F*ccad321d9b {
	float *a6e23f7da2; // 0x00(0x04)
	uint16 *7a3d6d00e2; // 0x04(0x02)
	uint16 *a2a5e2d0e7; // 0x06(0x02)
	uint16 *4a6aa486d7; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct F*3910edf9fe> *32a3ddf690; // 0x10(0x10)
	struct TArray<struct F*55f67279e0> *d64162ee62; // 0x20(0x10)
};

// ScriptStruct TslGame.*55f67279e0
// Size: 0x10 (Inherited: 0x00)
struct F*55f67279e0 {
	uint16 *aea9f530a7; // 0x00(0x02)
	uint16 *eda60d85d8; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Content; // 0x08(0x08)
};

// ScriptStruct TslGame.*3910edf9fe
// Size: 0x06 (Inherited: 0x00)
struct F*3910edf9fe {
	uint16 *eda60d85d8; // 0x00(0x02)
	uint16 *08653e29fe; // 0x02(0x02)
	uint16 *a8337b8ea5; // 0x04(0x02)
};

// ScriptStruct TslGame.*444415ee88
// Size: 0x30 (Inherited: 0x00)
struct F*444415ee88 {
	struct ATslCharacter* *c3d6df06fc; // 0x00(0x08)
	struct FVector *7047f687f3; // 0x08(0x0c)
	struct FVector *6c9e42f148; // 0x14(0x0c)
	float *7d3d760eb1; // 0x20(0x04)
	float *ff2aefc15b; // 0x24(0x04)
	float *ed9cba3903; // 0x28(0x04)
	float *50c1a44fe0; // 0x2c(0x04)
};

// ScriptStruct TslGame.*0addce8710
// Size: 0x20 (Inherited: 0x08)
struct F*0addce8710 : FTableRowBase {
	struct FName SpawnKitName; // 0x08(0x08)
	struct TArray<struct F*690637cd6c> SpawnKitInfos; // 0x10(0x10)
};

// ScriptStruct TslGame.*690637cd6c
// Size: 0x100 (Inherited: 0x08)
struct F*690637cd6c : FTableRowBase {
	enum class EWeaponClass WeaponCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString SpawnKitId; // 0x10(0x10)
	struct FText InfoName; // 0x20(0x18)
	struct TArray<struct F*eb3c36aaf7> ItemInfos; // 0x38(0x10)
	struct F*1520fd5e1d VehicleInfo; // 0x48(0xb8)
};

// ScriptStruct TslGame.*1520fd5e1d
// Size: 0xb8 (Inherited: 0x00)
struct F*1520fd5e1d {
	struct FStringAssetReference SpawnVehicleName; // 0x00(0x10)
	bool bUseOverrideData; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MaxEventBoostGauge; // 0x14(0x04)
	float StartEventBoostGauge; // 0x18(0x04)
	float MaxHealthOverride; // 0x1c(0x04)
	float DefaultDragCoefficient; // 0x20(0x04)
	float EventBoostDragCoefficient; // 0x24(0x04)
	float DefaultMaxRPM; // 0x28(0x04)
	float EventBoostMaxRPM; // 0x2c(0x04)
	float DefaultGearSwitchTime; // 0x30(0x04)
	float EventBoostGearSwitchTime; // 0x34(0x04)
	bool bOverrideTorqueCurve; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FRuntimeFloatCurve TorqueCurve; // 0x40(0x78)
};

// ScriptStruct TslGame.*eb3c36aaf7
// Size: 0x28 (Inherited: 0x00)
struct F*eb3c36aaf7 {
	int32 ItemCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	struct TArray<struct FName> AttachmentIDs; // 0x10(0x10)
	struct FName SkinItemId; // 0x20(0x08)
};

// ScriptStruct TslGame.*45f792646e
// Size: 0x20 (Inherited: 0x00)
struct F*45f792646e {
	struct FString *3b74ad4d77; // 0x00(0x10)
	struct TArray<struct F*40425f1932> *317302749b; // 0x10(0x10)
};

// ScriptStruct TslGame.*40425f1932
// Size: 0x18 (Inherited: 0x00)
struct F*40425f1932 {
	struct FName *0544688c23; // 0x00(0x08)
	struct TArray<struct FName> *f8eb23466f; // 0x08(0x10)
};

// ScriptStruct TslGame.*d32f0d663c
// Size: 0x50 (Inherited: 0x00)
struct F*d32f0d663c {
	struct TMap<struct FString, struct F*581aa57f3d> *5f8838346c; // 0x00(0x50)
};

// ScriptStruct TslGame.*581aa57f3d
// Size: 0x180 (Inherited: 0xc8)
struct F*581aa57f3d : F*dd32ce0963 {
	struct FString *3b74ad4d77; // 0xc8(0x10)
	float *9f50751f0b; // 0xd8(0x04)
	float *ba7a4d94ff; // 0xdc(0x04)
	struct TMap<enum class EEquipSlotID, int32> *73117cc4e1; // 0xe0(0x50)
	struct TMap<enum class EEquipSlotID, int32> *dedb9845e5; // 0x130(0x50)
};

// ScriptStruct TslGame.*dd32ce0963
// Size: 0xc8 (Inherited: 0x00)
struct F*dd32ce0963 {
	struct TArray<struct UItem*> Items; // 0x00(0x10)
	struct F*1520fd5e1d VehicleInfo; // 0x10(0xb8)
};

// ScriptStruct TslGame.*0bbe97f4c6
// Size: 0x290 (Inherited: 0x268)
struct F*0bbe97f4c6 : F*7700dab07d {
	struct UTexture* AmmoIcon; // 0x268(0x20)
	float AmmoIconRatio; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
};

// ScriptStruct TslGame.*b6778548ad
// Size: 0x20 (Inherited: 0x00)
struct F*b6778548ad {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	bool *fddc16f801; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *5271ad1381; // 0x10(0x08)
	struct FName *4720e32619; // 0x18(0x08)
};

// ScriptStruct TslGame.*2316039a43
// Size: 0x05 (Inherited: 0x00)
struct F*2316039a43 {
	bool *fa1e59ebd3; // 0x00(0x01)
	int8 *b69f708b98; // 0x01(0x01)
	int8 *8a139e9b47; // 0x02(0x01)
	enum class EWeaponTransitionState State; // 0x03(0x01)
	enum class EWeaponTransitionState *39724743c3; // 0x04(0x01)
};

// ScriptStruct TslGame.*35a5760bbd
// Size: 0x70 (Inherited: 0x60)
struct F*35a5760bbd : F*db6bfab62a {
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct TslGame.*db6bfab62a
// Size: 0x60 (Inherited: 0x00)
struct F*db6bfab62a {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*a8af0a3c00
// Size: 0x40 (Inherited: 0x00)
struct F*a8af0a3c00 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*758f9a0871
// Size: 0x08 (Inherited: 0x00)
struct F*758f9a0871 {
	int32 *6c83900707; // 0x00(0x04)
	enum class ECoinTakeType *249ffc7b19; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*76d22574ea
// Size: 0x20 (Inherited: 0x00)
struct F*76d22574ea {
	enum class EBombGameAreaType *b141a19d5b; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *348a98e4ce; // 0x08(0x18)
};

// ScriptStruct TslGame.*b7760f0d70
// Size: 0x08 (Inherited: 0x00)
struct F*b7760f0d70 {
	enum class ECoinTakeType *249ffc7b19; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 OverrideIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*db3fbf4bc5
// Size: 0x10 (Inherited: 0x00)
struct F*db3fbf4bc5 {
	bool *d9da6ce286; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
};

// ScriptStruct TslGame.*b090fdb38b
// Size: 0x18 (Inherited: 0x00)
struct F*b090fdb38b {
	int32 TeamId; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	int32 *fd26f048a4; // 0x08(0x04)
	int32 *721ca5c4ec; // 0x0c(0x04)
	int32 *fb77edc2b1; // 0x10(0x04)
	int32 *2db895ae85; // 0x14(0x04)
};

// ScriptStruct TslGame.*2ca9a7ec98
// Size: 0x14 (Inherited: 0x00)
struct F*2ca9a7ec98 {
	int32 *c784d5d056; // 0x00(0x04)
	enum class ETslBombTeamRole *92141ee2af; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct F*4f0ae91917 *53429e8389; // 0x08(0x08)
	bool *337c650650; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*4f0ae91917
// Size: 0x08 (Inherited: 0x00)
struct F*4f0ae91917 {
	enum class ETslBombRoundResultHistoryType *7147b0afae; // 0x00(0x01)
	enum class EBombRoundResultConditionType *0d8746d174; // 0x01(0x01)
	enum class EBombUITeamStatusType *ae92f5cfa2; // 0x02(0x01)
	bool *dcdbb32b4a; // 0x03(0x01)
	int32 *28661f4fc3; // 0x04(0x04)
};

// ScriptStruct TslGame.*58fb138bf3
// Size: 0x18 (Inherited: 0x00)
struct F*58fb138bf3 {
	struct FString BattleAreaType; // 0x00(0x10)
	enum class ETslBombTeamRole TeamRole; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 TeamMemberIndex; // 0x14(0x04)
};

// ScriptStruct TslGame.*cb6f48e561
// Size: 0x18 (Inherited: 0x00)
struct F*cb6f48e561 {
	int32 *45bd4e863f; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATslPlayerState*> *489f290fbc; // 0x08(0x10)
};

// ScriptStruct TslGame.TslAnimNode_MirrorAnimation
// Size: 0xa8 (Inherited: 0x30)
struct FTslAnimNode_MirrorAnimation : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct U*897f003d70* BoneMirrorSettings; // 0x48(0x08)
	struct U*897f003d70* PrevBoneMirrorSettings; // 0x50(0x08)
	struct FBoneReference ItemBone; // 0x58(0x18)
	struct FBoneReference ItemBoneNewParent; // 0x70(0x18)
	char pad_88[0x20]; // 0x88(0x20)
};

// ScriptStruct TslGame.*75b8124047
// Size: 0x20 (Inherited: 0x00)
struct F*75b8124047 {
	struct FName BoneName; // 0x00(0x08)
	struct FName *868c182fe5; // 0x08(0x08)
	struct FRotator *1423680981; // 0x10(0x0c)
	enum class EAxis *2311062704; // 0x1c(0x01)
	enum class EAxis *30d6b658ef; // 0x1d(0x01)
	bool *e179638b99; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct TslGame.*fbdefe2d6e
// Size: 0x10 (Inherited: 0x00)
struct F*fbdefe2d6e {
	struct TArray<struct F*629170f2ab> Ranges; // 0x00(0x10)
};

// ScriptStruct TslGame.*629170f2ab
// Size: 0x08 (Inherited: 0x00)
struct F*629170f2ab {
	enum class EWeaponClass WeaponType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Range; // 0x04(0x04)
};

// ScriptStruct TslGame.*39f42eb9b2
// Size: 0x0c (Inherited: 0x00)
struct F*39f42eb9b2 {
	enum class EWeaponClass WeaponType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Range; // 0x04(0x04)
	float *49e8c2bc60; // 0x08(0x04)
};

// ScriptStruct TslGame.*5a8d0cacdb
// Size: 0x10 (Inherited: 0x00)
struct F*5a8d0cacdb {
	int32 Rating; // 0x00(0x04)
	float *3b8edb86bd; // 0x04(0x04)
	float *572a75a10f; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e925b48c42
// Size: 0x30 (Inherited: 0x00)
struct F*e925b48c42 {
	float *780f7e4be5; // 0x00(0x04)
	int32 *5e988d8235; // 0x04(0x04)
	struct FBlackboardKeySelector *d23f3aa88d; // 0x08(0x28)
};

// ScriptStruct TslGame.*9286e92adb
// Size: 0x68 (Inherited: 0x00)
struct F*9286e92adb {
	int32 *2fc2c5a90f; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct UClass*, int32> *38b66232d5; // 0x08(0x50)
	struct TArray<struct UClass*> *e7d8934d4c; // 0x58(0x10)
};

// ScriptStruct TslGame.*fef7c7312b
// Size: 0x28 (Inherited: 0x00)
struct F*fef7c7312b {
	float *913d368be8; // 0x00(0x04)
	float *9818a233b5; // 0x04(0x04)
	struct FVector *097b44f4a6; // 0x08(0x0c)
	struct FRotator *f2f5ef1a64; // 0x14(0x0c)
	float *eb0dbd6338; // 0x20(0x04)
	float *72e9fe6483; // 0x24(0x04)
};

// ScriptStruct TslGame.*5bd4fe5beb
// Size: 0x10 (Inherited: 0x00)
struct F*5bd4fe5beb {
	float *61f18ee04a; // 0x00(0x04)
	float *54181da781; // 0x04(0x04)
	float *ea132e541d; // 0x08(0x04)
	float *3bad3bd15e; // 0x0c(0x04)
};

// ScriptStruct TslGame.*c931aebeca
// Size: 0x10 (Inherited: 0x00)
struct F*c931aebeca {
	struct TArray<struct F*4dcb64ccfa> Connections; // 0x00(0x10)
};

// ScriptStruct TslGame.*bf4e098187
// Size: 0x50 (Inherited: 0x00)
struct F*bf4e098187 {
	struct TMap<struct F*94ece644dc, struct F*41d865029b> *9b423ac369; // 0x00(0x50)
};

// ScriptStruct TslGame.*c96b6b1250
// Size: 0x20 (Inherited: 0x00)
struct F*c96b6b1250 {
	struct U*4e6580caba* *35201dadb5; // 0x00(0x08)
	struct ATslAIWaypointSegment* path; // 0x08(0x08)
	int32 *c80b3c777b; // 0x10(0x04)
	bool *1712180eae; // 0x14(0x01)
	bool *65699d999d; // 0x15(0x01)
	bool *b9517af78d; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float *6c6e86df9d; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*ba9d6594ff
// Size: 0x08 (Inherited: 0x00)
struct F*ba9d6594ff {
	int32 Rating; // 0x00(0x04)
	float SearchRadius; // 0x04(0x04)
};

// ScriptStruct TslGame.*fb4016c3c0
// Size: 0x10 (Inherited: 0x00)
struct F*fb4016c3c0 {
	struct UClass* TargetClass; // 0x00(0x08)
	float Multiplier; // 0x08(0x04)
	float *7ef561ae65; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1841f1a395
// Size: 0x18 (Inherited: 0x00)
struct F*1841f1a395 {
	enum class *d2311a8f0d Action; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *cc3fe64113; // 0x08(0x08)
	float *6b5e703154; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*f8283f298c
// Size: 0x14 (Inherited: 0x00)
struct F*f8283f298c {
	char pad_0[0x8]; // 0x00(0x08)
	float HappenTime; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float TotalDamage; // 0x10(0x04)
};

// ScriptStruct TslGame.*a44e376c75
// Size: 0x38 (Inherited: 0x00)
struct F*a44e376c75 {
	struct FBox Box; // 0x00(0x1c)
	float *0d897298c1; // 0x1c(0x04)
	float *cd7d437607; // 0x20(0x04)
	float *c4824dede0; // 0x24(0x04)
	float *25b455071d; // 0x28(0x04)
	float *0850b798a7; // 0x2c(0x04)
	float *d670767c26; // 0x30(0x04)
	float *b4e1984af6; // 0x34(0x04)
};

// ScriptStruct TslGame.*fbc3d97a80
// Size: 0x18 (Inherited: 0x00)
struct F*fbc3d97a80 {
	bool bActive; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* *a44d54f050; // 0x08(0x08)
	float *5d7ab047ca; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*ea710edb89
// Size: 0x20 (Inherited: 0x00)
struct F*ea710edb89 {
	enum class *d227eecd3f *02b7d887c6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *8cd4eb2e20; // 0x04(0x04)
	float *3ad3907c6e; // 0x08(0x04)
	float *74e47368b9; // 0x0c(0x04)
	struct TArray<struct F*9766989c43> *9766989c43; // 0x10(0x10)
};

// ScriptStruct TslGame.*9766989c43
// Size: 0x0c (Inherited: 0x00)
struct F*9766989c43 {
	enum class EDamageTypeCategory *271a14efcc; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *216171e1e9; // 0x04(0x04)
	float *74e47368b9; // 0x08(0x04)
};

// ScriptStruct TslGame.*38d1c2d453
// Size: 0x0c (Inherited: 0x00)
struct F*38d1c2d453 {
	enum class *d227eecd3f *02b7d887c6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *8cd4eb2e20; // 0x04(0x04)
	float *3ad3907c6e; // 0x08(0x04)
};

// ScriptStruct TslGame.*07c7ad6ece
// Size: 0x0c (Inherited: 0x00)
struct F*07c7ad6ece {
	enum class *d227eecd3f *02b7d887c6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *8cd4eb2e20; // 0x04(0x04)
	float *25b91aa9a9; // 0x08(0x04)
};

// ScriptStruct TslGame.*11981bc066
// Size: 0x50 (Inherited: 0x00)
struct F*11981bc066 {
	struct FVector LocationOffset; // 0x00(0x0c)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	float TraceOriginUpOffset; // 0x18(0x04)
	float TraceForwardLength; // 0x1c(0x04)
	float TraceDownLength; // 0x20(0x04)
	float MaxFloorDiff; // 0x24(0x04)
	float MaxRotationDegree; // 0x28(0x04)
	float OverlapBoxDistanceOffset; // 0x2c(0x04)
	struct FVector OverlapBoxHalfExtent; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> DisablePhysMtrlNames; // 0x40(0x10)
};

// ScriptStruct TslGame.*730ef98f35
// Size: 0x3c (Inherited: 0x00)
struct F*730ef98f35 {
	struct FVector LocationOffset; // 0x00(0x0c)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	float TraceOriginUpOffset; // 0x18(0x04)
	float TraceForwardLength; // 0x1c(0x04)
	float TraceUpLength; // 0x20(0x04)
	float TraceDownLength; // 0x24(0x04)
	bool bOrientToFloor; // 0x28(0x01)
	bool bCheckOverlaps; // 0x29(0x01)
	bool bSphereSweep; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float CapsuleRadius; // 0x2c(0x04)
	float CapsuleHalfHeight; // 0x30(0x04)
	float BalloonRadius; // 0x34(0x04)
	float SweepUpDistance; // 0x38(0x04)
};

// ScriptStruct TslGame.*a06daf2232
// Size: 0x38 (Inherited: 0x00)
struct F*a06daf2232 {
	struct FVector LocationOffset; // 0x00(0x0c)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	struct TArray<enum class ECollisionChannel> ResponseBlockChannels; // 0x18(0x10)
	float TraceOriginUpOffset; // 0x28(0x04)
	float TraceForwardLength; // 0x2c(0x04)
	float TraceDownLength; // 0x30(0x04)
	bool bOrientToFloor; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct TslGame.TslCinematicLightParams
// Size: 0x34 (Inherited: 0x00)
struct FTslCinematicLightParams {
	bool bCastShadows; // 0x00(0x01)
	bool bUseTemperature; // 0x01(0x01)
	bool bUseInverseSquaredFalloff; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Temperature; // 0x04(0x04)
	float SourceRadius; // 0x08(0x04)
	float SourceLength; // 0x0c(0x04)
	float InnerConeAngle; // 0x10(0x04)
	float OuterConeAngle; // 0x14(0x04)
	float Intensity; // 0x18(0x04)
	float AttenuationRadius; // 0x1c(0x04)
	float LightFalloffExponent; // 0x20(0x04)
	struct FLinearColor Color; // 0x24(0x10)
};

// ScriptStruct TslGame.Offer
// Size: 0xc8 (Inherited: 0x00)
struct FOffer {
	struct FString OfferId; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText LongDescription; // 0x40(0x18)
	struct FText RegularPriceText; // 0x58(0x18)
	int32 RegularPrice; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FText PriceText; // 0x78(0x18)
	int32 NumericPrice; // 0x90(0x04)
	uint32 PurchasedCount; // 0x94(0x04)
	int32 PurchaseLimit; // 0x98(0x04)
	uint32 DecimalPoint; // 0x9c(0x04)
	struct FString CurrencyCode; // 0xa0(0x10)
	struct FDateTime ReleaseDate; // 0xb0(0x08)
	struct FDateTime ExpirationDate; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct TslGame.Receipt
// Size: 0x38 (Inherited: 0x00)
struct FReceipt {
	struct FString TransactionId; // 0x00(0x10)
	struct FString OfferId; // 0x10(0x10)
	int32 Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString EntitlementId; // 0x28(0x10)
};

// ScriptStruct TslGame.TslUserGameOptionLogData
// Size: 0x20 (Inherited: 0x00)
struct FTslUserGameOptionLogData {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.TslFriend
// Size: 0x38 (Inherited: 0x00)
struct FTslFriend {
	struct FString UserSerial; // 0x00(0x10)
	struct FString UserRealName; // 0x10(0x10)
	struct FString UserDisplayName; // 0x20(0x10)
	struct FTslFriendPresence Presence; // 0x30(0x05)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct TslGame.TslFriendPresence
// Size: 0x05 (Inherited: 0x00)
struct FTslFriendPresence {
	bool IsOnline; // 0x00(0x01)
	bool IsPlaying; // 0x01(0x01)
	bool IsPlayingThisGame; // 0x02(0x01)
	bool IsJoinable; // 0x03(0x01)
	bool Status; // 0x04(0x01)
};

// ScriptStruct TslGame.TslClientAuthData
// Size: 0x70 (Inherited: 0x00)
struct FTslClientAuthData {
	struct FString PlatformType; // 0x00(0x10)
	struct FString AppID; // 0x10(0x10)
	struct FString FullGameVersion; // 0x20(0x10)
	struct FString UserSerial; // 0x30(0x10)
	struct FString AccessToken; // 0x40(0x10)
	struct FString UserDisplayName; // 0x50(0x10)
	struct FString PlayerNetId; // 0x60(0x10)
};

// ScriptStruct TslGame.*6f10abd9a6
// Size: 0x20 (Inherited: 0x00)
struct F*6f10abd9a6 {
	struct FLinearColor RankColor; // 0x00(0x10)
	struct FStringAssetReference RankTexture; // 0x10(0x10)
};

// ScriptStruct TslGame.*cbcaf72b62
// Size: 0x60 (Inherited: 0x00)
struct F*cbcaf72b62 {
	struct TArray<struct FVector> *237688b410; // 0x00(0x10)
	struct FBox *90cddc5aaf; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Transform; // 0x30(0x30)
};

// ScriptStruct TslGame.*6accd37fc2
// Size: 0x18 (Inherited: 0x00)
struct F*6accd37fc2 {
	struct FName ItemID; // 0x00(0x08)
	int32 ItemStackCount; // 0x08(0x04)
	int32 Count; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*685d773daa
// Size: 0x80 (Inherited: 0x08)
struct F*685d773daa : FTableRowBase {
	int32 CraftID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName AllowFilter; // 0x10(0x08)
	struct FName CraftItemID; // 0x18(0x08)
	float CraftTime; // 0x20(0x04)
	int32 CraftItemStackCount; // 0x24(0x04)
	struct TArray<struct F*822bfd577c> MaterialItems; // 0x28(0x10)
	bool bShouldTransferAmmoInClip; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString SlotTag; // 0x40(0x10)
	struct TArray<struct FName> AdditionalCraftItemIDs; // 0x50(0x10)
	struct TArray<struct FName> AdditionalRemoveItemIDs; // 0x60(0x10)
	int32 RestrictedStance; // 0x70(0x04)
	bool bAutoReload; // 0x74(0x01)
	bool bShouldTransferAttachments; // 0x75(0x01)
	char pad_76[0xa]; // 0x76(0x0a)
};

// ScriptStruct TslGame.*822bfd577c
// Size: 0x10 (Inherited: 0x00)
struct F*822bfd577c {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*517e916781
// Size: 0x18 (Inherited: 0x00)
struct F*517e916781 {
	int32 *f59765f9ab; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *15b9c84f11; // 0x08(0x08)
	int32 *ac42830922; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*17a854b8ab
// Size: 0x20 (Inherited: 0x00)
struct F*17a854b8ab {
	struct FString *59fd5e4bca; // 0x00(0x10)
	struct FVector2D *79411e3858; // 0x10(0x08)
	bool *c2c6562653; // 0x18(0x01)
	enum class ECustomCarepackageState *a1350f8ad8; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32 *cb6d0cf0c7; // 0x1c(0x04)
};

// ScriptStruct TslGame.*73af09167c
// Size: 0x08 (Inherited: 0x00)
struct F*73af09167c {
	int32 AddWhiteZoneCarepackages; // 0x00(0x04)
	int32 AddOutsideZoneCarepackages; // 0x04(0x04)
};

// ScriptStruct TslGame.*d52569f3ac
// Size: 0x98 (Inherited: 0x08)
struct F*d52569f3ac : FTableRowBase {
	struct FText WeaponTag; // 0x08(0x18)
	struct FText SimpleWeaponName; // 0x20(0x18)
	struct U*a82e1ae1b9* WeaponGunData; // 0x38(0x08)
	struct F*864a73fb3c WeaponFX; // 0x40(0x20)
	enum class EFiringMode FiringMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float MinClipFractionPerSequence; // 0x64(0x04)
	float MaxClipFractionPerSequence; // 0x68(0x04)
	float FiringCooldownMin; // 0x6c(0x04)
	float FiringCooldownMax; // 0x70(0x04)
	float MinTimeBetweenShots; // 0x74(0x04)
	float MaxTimeBetweenShots; // 0x78(0x04)
	int32 ClipSize; // 0x7c(0x04)
	int32 BurstSize; // 0x80(0x04)
	float ReloadTime; // 0x84(0x04)
	float DecoyDelay; // 0x88(0x04)
	float CookDelay; // 0x8c(0x04)
	float DecoyLifetime; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct TslGame.*864a73fb3c
// Size: 0x20 (Inherited: 0x00)
struct F*864a73fb3c {
	struct UAkAudioEvent* FireSoundAk; // 0x00(0x08)
	struct UAkAudioEvent* FireLoopSoundAk; // 0x08(0x08)
	struct UAkAudioEvent* FireFinishSoundAk; // 0x10(0x08)
	struct UParticleSystem* MuzzleFx; // 0x18(0x08)
};

// ScriptStruct TslGame.*442b71dfc0
// Size: 0x18 (Inherited: 0x00)
struct F*442b71dfc0 {
	struct UClass* *505b924fe4; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*26580c833e
// Size: 0x18 (Inherited: 0x00)
struct F*26580c833e {
	bool bInitialized; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> Disabled; // 0x08(0x10)
};

// ScriptStruct TslGame.*72bfd0e2ce
// Size: 0x44 (Inherited: 0x00)
struct F*72bfd0e2ce {
	struct FVector *165478efa2; // 0x00(0x0c)
	float *eb3d5ff754; // 0x0c(0x04)
	float *d01002685a; // 0x10(0x04)
	float *e6b1cb23c3; // 0x14(0x04)
	float *9962ae2514; // 0x18(0x04)
	enum class EWhiteZoneShape *93bf02e92d; // 0x1c(0x01)
	bool *bec7cfaa36; // 0x1d(0x01)
	bool *b0ee49c5f6; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct FVector *5c407b1432; // 0x20(0x0c)
	char pad_2C[0x18]; // 0x2c(0x18)
};

// ScriptStruct TslGame.*54e00198d9
// Size: 0x10 (Inherited: 0x00)
struct F*54e00198d9 {
	struct FVector *d732c50844; // 0x00(0x0c)
	float *bbb2a1bc59; // 0x0c(0x04)
};

// ScriptStruct TslGame.ItemTypeReplaceRow
// Size: 0x20 (Inherited: 0x08)
struct FItemTypeReplaceRow : FTableRowBase {
	enum class EItemOverrideType *303532103e; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*2d06c348a2> *c9b7a8958a; // 0x10(0x10)
};

// ScriptStruct TslGame.*2d06c348a2
// Size: 0x18 (Inherited: 0x00)
struct F*2d06c348a2 {
	enum class EItemSpotGroupType *3fe1d5412e; // 0x00(0x01)
	enum class EItemSpotGroupType *8b4181adba; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct F*bf915aa3b5> *4ae2a863ac; // 0x08(0x10)
};

// ScriptStruct TslGame.*bf915aa3b5
// Size: 0x02 (Inherited: 0x00)
struct F*bf915aa3b5 {
	enum class EItemSpotType *6d4c757d8a; // 0x00(0x01)
	enum class EItemSpotType *9538cbe68b; // 0x01(0x01)
};

// ScriptStruct TslGame.*0e7e79083b
// Size: 0x70 (Inherited: 0x08)
struct F*0e7e79083b : FTableRowBase {
	float StartDelay; // 0x08(0x04)
	float WarningDuration; // 0x0c(0x04)
	float ReleaseDuration; // 0x10(0x04)
	float RadiusRate; // 0x14(0x04)
	float RandomRadiusRate; // 0x18(0x04)
	float BlueZoneDPS; // 0x1c(0x04)
	float SpreadRatio; // 0x20(0x04)
	float DamageMagnifierForDistance; // 0x24(0x04)
	float DamageMagnifier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UCurveFloat* DamageMagnifierCurve; // 0x30(0x20)
	enum class EBluezoneType BluezoneType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 CircleAlgorithm; // 0x54(0x04)
	float LandRatio; // 0x58(0x04)
	int32 FastPlayerCount; // 0x5c(0x04)
	float FastReleaseDuration; // 0x60(0x04)
	float FastWarningDuration; // 0x64(0x04)
	bool bIgnoreSafetyZone; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct TslGame.*c64215387b
// Size: 0x14 (Inherited: 0x00)
struct F*c64215387b {
	float Damage; // 0x00(0x04)
	float DamagingStartTime; // 0x04(0x04)
	float TickCount; // 0x08(0x04)
	struct FColor FenceColor; // 0x0c(0x04)
	bool bUsePlayerFence; // 0x10(0x01)
	bool bUseOutsideDamage; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct TslGame.*f0947ead58
// Size: 0x60 (Inherited: 0x00)
struct F*f0947ead58 {
	float StartDelay; // 0x00(0x04)
	float WarningDuration; // 0x04(0x04)
	float ReleaseDuration; // 0x08(0x04)
	float WarningRadius; // 0x0c(0x04)
	struct FVector WarningPosition; // 0x10(0x0c)
	float RadiusRate; // 0x1c(0x04)
	float RandomRadiusRate; // 0x20(0x04)
	float BlueZoneDamagePerSecond; // 0x24(0x04)
	float SpreadRatio; // 0x28(0x04)
	float DamageMagnifierForDistance; // 0x2c(0x04)
	float DamageMagnifier; // 0x30(0x04)
	float LandRatio; // 0x34(0x04)
	int32 CircleAlgorithm; // 0x38(0x04)
	bool bIsFastBluezone; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32 FastPlayerCount; // 0x40(0x04)
	float FastWarningDuration; // 0x44(0x04)
	float FastReleaseDuration; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UCurveFloat* DamageMagnifierCurve; // 0x50(0x08)
	bool bIgnoreSafetyZone; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct TslGame.*208127dfa8
// Size: 0x10 (Inherited: 0x08)
struct F*208127dfa8 : FTableRowBase {
	bool bAirplaneUseable; // 0x08(0x01)
	bool bTowerUseable; // 0x09(0x01)
	bool bItemUseable; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct TslGame.*d2f7bec8f3
// Size: 0x03 (Inherited: 0x00)
struct F*d2f7bec8f3 {
	bool bAirplaneUseable; // 0x00(0x01)
	bool bTowerUseable; // 0x01(0x01)
	bool bItemUseable; // 0x02(0x01)
};

// ScriptStruct TslGame.*ec3964a75f
// Size: 0x18 (Inherited: 0x00)
struct F*ec3964a75f {
	struct FName ItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*0f3f71a03a
// Size: 0xb8 (Inherited: 0x00)
struct F*0f3f71a03a {
	struct TMap<struct FName, struct F*cc5205d28f> *c6ef8d2c17; // 0x00(0x50)
	struct F*bba8f0b872 *89f5499d05; // 0x50(0x50)
	struct TArray<struct FName> *c34d319454; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct TslGame.*bba8f0b872
// Size: 0x50 (Inherited: 0x00)
struct F*bba8f0b872 {
	struct TMap<struct FString, struct F*b7104c5e78> Table; // 0x00(0x50)
};

// ScriptStruct TslGame.*b7104c5e78
// Size: 0x10 (Inherited: 0x00)
struct F*b7104c5e78 {
	struct TArray<struct F*51fe649913> Values; // 0x00(0x10)
};

// ScriptStruct TslGame.*51fe649913
// Size: 0x18 (Inherited: 0x00)
struct F*51fe649913 {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*cc5205d28f
// Size: 0x50 (Inherited: 0x00)
struct F*cc5205d28f {
	struct TMap<struct FName, struct F*cc4802d2b7> Values; // 0x00(0x50)
};

// ScriptStruct TslGame.*cc4802d2b7
// Size: 0x18 (Inherited: 0x00)
struct F*cc4802d2b7 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct F*215faa4639> Elements; // 0x08(0x10)
};

// ScriptStruct TslGame.*215faa4639
// Size: 0x18 (Inherited: 0x00)
struct F*215faa4639 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*8f447958fc
// Size: 0x50 (Inherited: 0x00)
struct F*8f447958fc {
	struct TMap<struct FName, int32> *5b8a37832c; // 0x00(0x50)
};

// ScriptStruct TslGame.*e4b1f342ac
// Size: 0x18 (Inherited: 0x08)
struct F*e4b1f342ac : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 SpawnLimit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*db18832288
// Size: 0x38 (Inherited: 0x08)
struct F*db18832288 : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	int32 StackCount; // 0x18(0x04)
	int32 CountMin; // 0x1c(0x04)
	int32 CountMax; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName SpawnedItemID; // 0x28(0x08)
	struct FName TogetherItemID; // 0x30(0x08)
};

// ScriptStruct TslGame.*4d763e50df
// Size: 0x38 (Inherited: 0x08)
struct F*4d763e50df : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	struct FName SubCategoryFilter; // 0x18(0x08)
	int32 StackCount; // 0x20(0x04)
	int32 Weight; // 0x24(0x04)
	struct FName ItemID; // 0x28(0x08)
	struct FName SkinId; // 0x30(0x08)
};

// ScriptStruct TslGame.*2bef9c122c
// Size: 0x18 (Inherited: 0x00)
struct F*2bef9c122c {
	float ProbabilityPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
};

// ScriptStruct TslGame.*b9df6baa9c
// Size: 0x08 (Inherited: 0x00)
struct F*b9df6baa9c {
	int32 TeamPlayers; // 0x00(0x04)
	int32 SpawnCount; // 0x04(0x04)
};

// ScriptStruct TslGame.*5b4789f7c9
// Size: 0x20 (Inherited: 0x08)
struct F*5b4789f7c9 : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	float LottoProb; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName LottoBoxTag; // 0x18(0x08)
};

// ScriptStruct TslGame.*eb5b24918d
// Size: 0x28 (Inherited: 0x08)
struct F*eb5b24918d : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	struct FName ValueFilter; // 0x10(0x08)
	struct FName CategoryFilter; // 0x18(0x08)
	bool ItemAmount; // 0x20(0x01)
	bool bUnique; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*321d855f54
// Size: 0x40 (Inherited: 0x08)
struct F*321d855f54 : FTableRowBase {
	struct FName PackageName; // 0x08(0x08)
	struct FName EventName; // 0x10(0x08)
	struct TArray<struct F*9e0819b14c> *9e0819b14c; // 0x18(0x10)
	struct TArray<struct F*9e0819b14c> *c0432072f5; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*9e0819b14c
// Size: 0x18 (Inherited: 0x00)
struct F*9e0819b14c {
	struct FName ItemID; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	int32 *5d329f82e2; // 0x0c(0x04)
	int32 *a870eefc96; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*067835c714
// Size: 0x30 (Inherited: 0x00)
struct F*067835c714 {
	struct FName EventName; // 0x00(0x08)
	enum class EItemSpotGroupType *b46d2b980f; // 0x08(0x01)
	enum class EItemSpotType *8002fcb114; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 Count; // 0x0c(0x04)
	int32 *03c7eb37b1; // 0x10(0x04)
	bool *37620284f9; // 0x14(0x01)
	bool *9d3dfabf8f; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32 *045f138c36; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct F*ef6f0479cb> *3a4380a7b7; // 0x20(0x10)
};

// ScriptStruct TslGame.*ef6f0479cb
// Size: 0x30 (Inherited: 0x00)
struct F*ef6f0479cb {
	struct FName PackageName; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *523c4c3949; // 0x10(0x20)
};

// ScriptStruct TslGame.*4d3bb95b6a
// Size: 0x30 (Inherited: 0x08)
struct F*4d3bb95b6a : FTableRowBase {
	enum class EVendingMachineType VendingMachineType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UClass* VendingMachineActorClass; // 0x10(0x20)
};

// ScriptStruct TslGame.*f625048a99
// Size: 0x40 (Inherited: 0x08)
struct F*f625048a99 : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	enum class EVendingMachineType Category; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*e4eec66a2d> ItemsToDrop; // 0x20(0x10)
	float Weight; // 0x30(0x04)
	bool bJackpot; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UAkAudioEvent* AkAudioEvent; // 0x38(0x08)
};

// ScriptStruct TslGame.*6c957e5fd8
// Size: 0x20 (Inherited: 0x08)
struct F*6c957e5fd8 : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	enum class EVendingMachineType Category; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 SpawnCount; // 0x1c(0x04)
};

// ScriptStruct TslGame.*565d25548e
// Size: 0x20 (Inherited: 0x08)
struct F*565d25548e : FTableRowBase {
	struct FVector Transition; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct TslGame.*a6c0ff35fa
// Size: 0x68 (Inherited: 0x08)
struct F*a6c0ff35fa : FTableRowBase {
	struct FName *768b196495; // 0x08(0x08)
	struct FName ItemID; // 0x10(0x08)
	struct TArray<int32> StackCount; // 0x18(0x10)
	uint32 Weight; // 0x28(0x04)
	bool *ef4e65bd2a; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *03c7eb37b1; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FName> Attachments; // 0x38(0x10)
	struct F*b44502f267 *dac8031619; // 0x48(0x20)
};

// ScriptStruct TslGame.*b44502f267
// Size: 0x20 (Inherited: 0x00)
struct F*b44502f267 {
	struct FName ItemID; // 0x00(0x08)
	struct TArray<int32> StackCount; // 0x08(0x10)
	bool *ef4e65bd2a; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *03c7eb37b1; // 0x1c(0x04)
};

// ScriptStruct TslGame.*c15d9f120e
// Size: 0x10 (Inherited: 0x00)
struct F*c15d9f120e {
	struct FVector2D StartPosition; // 0x00(0x08)
	struct FVector2D EndPosition; // 0x08(0x08)
};

// ScriptStruct TslGame.*6cbd6b9091
// Size: 0x420 (Inherited: 0x00)
struct F*6cbd6b9091 {
	struct FString MapName; // 0x00(0x10)
	struct FModePresetData DefaultPresetData; // 0x10(0x400)
	struct TArray<struct FModePresetData> PresetDataList; // 0x410(0x10)
};

// ScriptStruct TslGame.ModePresetData
// Size: 0x400 (Inherited: 0x00)
struct FModePresetData {
	struct FName PresetName; // 0x00(0x08)
	bool *7b6ed3f1a3; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UClass* ModeControllerClass; // 0x10(0x20)
	struct TArray<struct UClass*> AdditionalModeControllerClasses; // 0x30(0x10)
	struct UClass* InitialItemDonatorClass; // 0x40(0x20)
	struct UClass* ItemSpawnProcessorClass; // 0x60(0x20)
	struct UClass* EventItemSpawnProcessorClass; // 0x80(0x20)
	struct UClass* ThingSpawnProcessorClass; // 0xa0(0x20)
	struct UClass* TslSupplyBoxSpawnProcessorClass; // 0xc0(0x20)
	struct UClass* JukeBoxSpawnProcessorClass; // 0xe0(0x20)
	struct UClass* BlueChipTowerSpawnProcessorClass; // 0x100(0x20)
	struct UClass* CabinetSpawnProcessorClass; // 0x120(0x20)
	struct UClass* InteractionSupplySpawnProcessorClass; // 0x140(0x20)
	struct UClass* GroupDeployedItemSpawnProcessorClass; // 0x160(0x20)
	float AircraftTotalFlyingTime; // 0x180(0x04)
	bool bOverrideAircraftTotalFlyingTime; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	float AllowRangeByBlueZone; // 0x188(0x04)
	bool bOverrideAllowRangeByBlueZone; // 0x18c(0x01)
	bool *a7e765fd13; // 0x18d(0x01)
	bool *d715ceca38; // 0x18e(0x01)
	char pad_18F[0x1]; // 0x18f(0x01)
	struct FString EssentialSpawnKitName; // 0x190(0x10)
	bool *f4dc5e26d2; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FString *d0c44dd7d2; // 0x1a8(0x10)
	bool *7d97faf988; // 0x1b8(0x01)
	bool *cf9d201f07; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
	struct TArray<struct FText> *8e943bb608; // 0x1c0(0x10)
	float *43e03d1eb0; // 0x1d0(0x04)
	float *98a0478307; // 0x1d4(0x04)
	bool *debef9bba7; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct UDataTable* DropSpotGroupDataTable; // 0x1e0(0x20)
	struct UDataTable* DropItemFilterDataTable; // 0x200(0x20)
	struct UDataTable* DropItemSpawnDataTable; // 0x220(0x20)
	struct UDataTable* DropItemSpawnTogetherDataTable; // 0x240(0x20)
	struct UDataTable* DropItemTypeOverrideDataTable; // 0x260(0x20)
	int32 ActiveItemTypeOverrideAreaCount; // 0x280(0x04)
	float ActiveItemTypeOverrideAreaPercent; // 0x284(0x04)
	struct TMap<struct FString, struct F*c98fe9195b> ItemSpawnDataTables; // 0x288(0x50)
	struct UDataTable* CraftItemDataTable; // 0x2d8(0x20)
	struct UDataTable* VehicleSpotGroupDataTable; // 0x2f8(0x20)
	struct UDataTable* VehicleSpawnDataTable; // 0x318(0x20)
	struct UDataTable* EventItemPackageSpawnDataTable; // 0x338(0x20)
	struct UDataTable* BluezoneDataTable; // 0x358(0x20)
	bool *cf5a3a3403; // 0x378(0x01)
	bool *52c7d595e2; // 0x379(0x01)
	bool *2e248162e5; // 0x37a(0x01)
	char pad_37B[0x5]; // 0x37b(0x05)
	struct UDataTable* RevivalPhaseDataTable; // 0x380(0x20)
	int32 *9cd6f21356; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct TArray<struct F*b31382c82b> MatchPreparerClasses; // 0x3a8(0x10)
	struct TArray<struct UWorld*> *0ad92bf85b; // 0x3b8(0x10)
	struct AAbstractRespawnProcessor* *5f70f2bc1d; // 0x3c8(0x08)
	struct UClass* RespawnProcessorClass; // 0x3d0(0x08)
	struct UClass* WhiteZoneControllerClass; // 0x3d8(0x20)
	bool bEnableMonsterSystem; // 0x3f8(0x01)
	bool *2a47c04087; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
};

// ScriptStruct TslGame.*c98fe9195b
// Size: 0x40 (Inherited: 0x00)
struct F*c98fe9195b {
	struct UDataTable* ItemSpawnDataTable; // 0x00(0x20)
	struct UDataTable* ItemSpawnTogetherDataTable; // 0x20(0x20)
};

// ScriptStruct TslGame.*8855fd6d7e
// Size: 0x20 (Inherited: 0x00)
struct F*8855fd6d7e {
	struct ATslPatrolPath* *a5a3c84fbf; // 0x00(0x08)
	struct TArray<struct F*c5826eac8d> *04daa2dac0; // 0x08(0x10)
	enum class *19e741067e *6e77dd4504; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*c5826eac8d
// Size: 0x40 (Inherited: 0x00)
struct F*c5826eac8d {
	struct FTransform Transform; // 0x00(0x30)
	bool *3cd7859d1f; // 0x30(0x01)
	bool *ffe62a7461; // 0x31(0x01)
	enum class EStanceMode *36fcb6048c; // 0x32(0x01)
	enum class EStanceMode *6bdc24b59a; // 0x33(0x01)
	enum class EPatrolSpeed *1d5e303beb; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float *8403893b33; // 0x38(0x04)
	bool *83290db6dc; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGame.*57e57d4858
// Size: 0x10 (Inherited: 0x00)
struct F*57e57d4858 {
	struct TArray<struct FString> Values; // 0x00(0x10)
};

// ScriptStruct TslGame.*cbf60667a3
// Size: 0x20 (Inherited: 0x00)
struct F*cbf60667a3 {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*cfdd38fdc4
// Size: 0x18 (Inherited: 0x00)
struct F*cfdd38fdc4 {
	struct FString CustomStringParameter; // 0x00(0x10)
	float MinLimit; // 0x10(0x04)
	float MaxLimit; // 0x14(0x04)
};

// ScriptStruct TslGame.*d513333e11
// Size: 0x0c (Inherited: 0x00)
struct F*d513333e11 {
	float ReviveCastingTime; // 0x00(0x04)
	float MultiplierGroggyDamagePerSecond; // 0x04(0x04)
	float MultiplierPunchDamage; // 0x08(0x04)
};

// ScriptStruct TslGame.*1fd03ab62c
// Size: 0x10 (Inherited: 0x00)
struct F*1fd03ab62c {
	struct TArray<struct FStringAssetReference> References; // 0x00(0x10)
};

// ScriptStruct TslGame.*60425e2909
// Size: 0x14 (Inherited: 0x00)
struct F*60425e2909 {
	int32 Index; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	enum class EBlueChipTowerState *a299c62d7f; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*5b0c4cb78a
// Size: 0x10 (Inherited: 0x00)
struct F*5b0c4cb78a {
	struct TArray<struct ATeam*> *5c04536a55; // 0x00(0x10)
};

// ScriptStruct TslGame.*1afb734351
// Size: 0x05 (Inherited: 0x00)
struct F*1afb734351 {
	struct F*2eb6d6d820 Round; // 0x00(0x02)
	struct F*2eb6d6d820 *b544b53b8c; // 0x02(0x02)
	bool *1263ecbe60; // 0x04(0x01)
};

// ScriptStruct TslGame.*2eb6d6d820
// Size: 0x02 (Inherited: 0x00)
struct F*2eb6d6d820 {
	int8 *16038853fa; // 0x00(0x01)
	int8 *3e647b5fb7; // 0x01(0x01)
};

// ScriptStruct TslGame.*12a96752dc
// Size: 0x10 (Inherited: 0x00)
struct F*12a96752dc {
	struct FName Name; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7f617181bf
// Size: 0x38 (Inherited: 0x00)
struct F*7f617181bf {
	enum class ESpecialZoneType *9404720184; // 0x00(0x01)
	enum class ESpecialZoneState *8aa3d3ef1a; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *b488fa46ae; // 0x04(0x04)
	struct FVector2D *e64c267d5a; // 0x08(0x08)
	struct TArray<struct FVector2D> *1fc20ebff2; // 0x10(0x10)
	struct TArray<struct FRotator> *868f8049f7; // 0x20(0x10)
	float *76717d7388; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*1152d366b2
// Size: 0x0c (Inherited: 0x00)
struct F*1152d366b2 {
	bool bEnabled; // 0x00(0x01)
	bool *9ceb06ddae; // 0x01(0x01)
	bool *dd90af8598; // 0x02(0x01)
	bool *b0c23eceff; // 0x03(0x01)
	float AircraftCooldown; // 0x04(0x04)
	float *9dcdb47a91; // 0x08(0x04)
};

// ScriptStruct TslGame.*0b3e96f543
// Size: 0x10 (Inherited: 0x00)
struct F*0b3e96f543 {
	struct FName ItemID; // 0x00(0x08)
	int32 Limits; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*41056cd83b
// Size: 0x18 (Inherited: 0x00)
struct F*41056cd83b {
	struct FVector HitLocation; // 0x00(0x0c)
	struct FVector AttackerLocation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*f4724a082c
// Size: 0x48 (Inherited: 0x08)
struct F*f4724a082c : FTableRowBase {
	enum class EFExplosivePropDataType *533201f30f; // 0x08(0x01)
	bool *4c645d81f5; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *c9f7b37023; // 0x0c(0x04)
	float *d2845698cd; // 0x10(0x04)
	float *911b867e46; // 0x14(0x04)
	float *c4886fbb1d; // 0x18(0x04)
	float *09997d8b28; // 0x1c(0x04)
	float *d033642f6f; // 0x20(0x04)
	float *ee9267be09; // 0x24(0x04)
	struct UCurveFloat* *a056c64c90; // 0x28(0x08)
	struct UClass* *8d27418580; // 0x30(0x08)
	struct FVector *32d277c1b2; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*5c3d82b000
// Size: 0x18 (Inherited: 0x08)
struct F*5c3d82b000 : FTableRowBase {
	struct FString *c3901d5106; // 0x08(0x10)
};

// ScriptStruct TslGame.*e230864d0b
// Size: 0x68 (Inherited: 0x00)
struct F*e230864d0b {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct U*de31ad4d53* *de31ad4d53; // 0x40(0x08)
	struct U*9067e7e942* ReactionDoorData; // 0x48(0x08)
	struct FVector *cf9decdb2e; // 0x50(0x0c)
	float BoundsScale; // 0x5c(0x04)
	char LightingChannel0 : 1; // 0x60(0x01)
	char LightingChannel1 : 1; // 0x60(0x01)
	char *859de8bd70 : 1; // 0x60(0x01)
	char pad_60_3 : 5; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.*dc024d6d59
// Size: 0x28 (Inherited: 0x00)
struct F*dc024d6d59 {
	struct UPrimitiveComponent* *22f2d853f1; // 0x00(0x08)
	struct FVector_NetQuantize Location; // 0x08(0x0c)
	struct FVector_NetQuantize Velocity; // 0x14(0x0c)
	bool *8f5881c1f1; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*72a9807ea7
// Size: 0x30 (Inherited: 0x00)
struct F*72a9807ea7 {
	struct UPrimitiveComponent* *22f2d853f1; // 0x00(0x08)
	struct UPrimitiveComponent* *edae9f11d9; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	uint16 *213815d2f5; // 0x28(0x02)
	bool *f3bb3093c5; // 0x2a(0x01)
	bool *d2bcd387e4; // 0x2b(0x01)
	bool *8f5881c1f1; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct TslGame.*7daa4eadcd
// Size: 0x48 (Inherited: 0x00)
struct F*7daa4eadcd {
	struct FRotator *524ec8fc28; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct USceneComponent* *5a49009812; // 0x28(0x08)
	struct U*901c357d94* ThrowableConfig; // 0x30(0x08)
	bool *3ff4e9d9f0; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName MeshSocket; // 0x40(0x08)
};

// ScriptStruct TslGame.*ffd47d7582
// Size: 0x58 (Inherited: 0x50)
struct F*ffd47d7582 : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*7250efebe3
// Size: 0x28 (Inherited: 0x00)
struct F*7250efebe3 {
	struct UItem* Item; // 0x00(0x08)
	struct F*59e081f3af *b96a40f40e; // 0x08(0x0c)
	char pad_14[0x14]; // 0x14(0x14)
};

// ScriptStruct TslGame.*29a1bdfb87
// Size: 0x30 (Inherited: 0x00)
struct F*29a1bdfb87 {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*191154233c RegionalSetting; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*191154233c
// Size: 0x24 (Inherited: 0x00)
struct F*191154233c {
	float FogDensity; // 0x00(0x04)
	struct FLinearColor FogColor; // 0x04(0x10)
	float FogStartDistance; // 0x14(0x04)
	float VolFogExtinctionScale; // 0x18(0x04)
	float WeatherParticleSpawnScale; // 0x1c(0x04)
	float WindScale; // 0x20(0x04)
};

// ScriptStruct TslGame.*a56dc5956c
// Size: 0x28 (Inherited: 0x00)
struct F*a56dc5956c {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *b51bf67750; // 0x08(0x10)
	struct TArray<struct F*48c33e6356> *468f067d65; // 0x18(0x10)
};

// ScriptStruct TslGame.*48c33e6356
// Size: 0x28 (Inherited: 0x00)
struct F*48c33e6356 {
	int32 ColorIndex; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *f87f3f2255; // 0x08(0x20)
};

// ScriptStruct TslGame.*25c8ba1529
// Size: 0x28 (Inherited: 0x00)
struct F*25c8ba1529 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *437f1ccca7; // 0x08(0x10)
	struct TArray<struct F*12ecb86eab> *468f067d65; // 0x18(0x10)
};

// ScriptStruct TslGame.*12ecb86eab
// Size: 0x48 (Inherited: 0x00)
struct F*12ecb86eab {
	int32 ColorIndex; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *f3dfa26f43; // 0x08(0x20)
	struct UCustomizableObject* *0d7160ad67; // 0x28(0x20)
};

// ScriptStruct TslGame.*b1f64ae0b2
// Size: 0x10 (Inherited: 0x00)
struct F*b1f64ae0b2 {
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*69e8598635
// Size: 0x18 (Inherited: 0x00)
struct F*69e8598635 {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.PostProcessMaterial
// Size: 0x10 (Inherited: 0x00)
struct FPostProcessMaterial {
	struct UMaterialInterface* EffectMaterial; // 0x00(0x08)
	float BlendWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*5dca255f05
// Size: 0x40 (Inherited: 0x00)
struct F*5dca255f05 {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> StandingTraceTargets; // 0x08(0x10)
	struct TArray<struct FVector2D> CrouchTraceTargets; // 0x18(0x10)
	struct TArray<struct FVector> ProneTraceTargets; // 0x28(0x10)
	float ProxyTraceMaxLenght; // 0x38(0x04)
	float ProxyTraceMinLenght; // 0x3c(0x04)
};

// ScriptStruct TslGame.SpecialDecal
// Size: 0x20 (Inherited: 0x00)
struct FSpecialDecal {
	struct FString DecalName; // 0x00(0x10)
	struct FVector2D DecalSize; // 0x10(0x08)
	struct UMaterialInterface* DecalMaterial; // 0x18(0x08)
};

// ScriptStruct TslGame.*122e437180
// Size: 0x60 (Inherited: 0x00)
struct F*122e437180 {
	float InitialSpeed; // 0x00(0x04)
	float *7ccb14a3f1; // 0x04(0x04)
	float *418926e1dd; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*d4a1b117ca> *7ab8ba630d; // 0x10(0x10)
	float *2bcb01a855; // 0x20(0x04)
	float *71fdc93d18; // 0x24(0x04)
	struct U*59a0aeaef9* *9ce8a267b0; // 0x28(0x08)
	float RangeModifier; // 0x30(0x04)
	float ReferenceDistance; // 0x34(0x04)
	float TravelDistanceMax; // 0x38(0x04)
	bool bUseMaxDamageDistance; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float SimulationSubstepTime; // 0x40(0x04)
	float VDragCoefficient; // 0x44(0x04)
	float BDS; // 0x48(0x04)
	bool bUseAdvancedBallistics; // 0x4c(0x01)
	bool bCanProduceCrackSound; // 0x4d(0x01)
	bool *a2181931b8; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct UClass* *271a14efcc; // 0x50(0x08)
	char *f27fc98afe : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float WeaponSpread; // 0x5c(0x04)
};

// ScriptStruct TslGame.*d4a1b117ca
// Size: 0x08 (Inherited: 0x00)
struct F*d4a1b117ca {
	float Damage; // 0x00(0x04)
	float Probability; // 0x04(0x04)
};

// ScriptStruct TslGame.*dddb7a0b8a
// Size: 0xd0 (Inherited: 0x00)
struct F*dddb7a0b8a {
	float VerticalRecoilMin; // 0x00(0x04)
	float VerticalRecoilMax; // 0x04(0x04)
	float VerticalRecoilRecoveryMin; // 0x08(0x04)
	float VerticalRecoilVariation; // 0x0c(0x04)
	float VerticalRecoveryModifier; // 0x10(0x04)
	float VerticalRecoveryClamp; // 0x14(0x04)
	float VerticalRecoveryMax; // 0x18(0x04)
	float LeftMax; // 0x1c(0x04)
	float RightMax; // 0x20(0x04)
	float HorizontalTendency; // 0x24(0x04)
	struct U*59a0aeaef9* RecoilCurve; // 0x28(0x08)
	int32 BulletsPerSwitch; // 0x30(0x04)
	float RecoilSpeed_Vertical; // 0x34(0x04)
	float RecoilSpeed_Horizontal; // 0x38(0x04)
	float RecoverySpeed_Vertical; // 0x3c(0x04)
	float RecoilValue_Climb; // 0x40(0x04)
	float RecoilValue_Fall; // 0x44(0x04)
	float RecoilModifier_Stand; // 0x48(0x04)
	float RecoilModifier_Crouch; // 0x4c(0x04)
	float RecoilModifier_Prone; // 0x50(0x04)
	float RecoilModifier_Vehicle; // 0x54(0x04)
	float RecoilHorizontalMinScalar; // 0x58(0x04)
	struct FVector2D RecoilStartTimeInMap; // 0x5c(0x08)
	struct FVector2D RecoilStartTimeOutMap; // 0x64(0x08)
	struct FVector2D RecoilBlendInInMap; // 0x6c(0x08)
	struct FVector2D RecoilBlendInOutMap; // 0x74(0x08)
	float VehicleRecoilScalar; // 0x7c(0x04)
	struct TMap<enum class EFiringMode, struct F*bed0ba7ef4> ROFRecoilMap; // 0x80(0x50)
};

// ScriptStruct TslGame.*bed0ba7ef4
// Size: 0x50 (Inherited: 0x00)
struct F*bed0ba7ef4 {
	struct TMap<enum class EAnimStance, float> StanceMap; // 0x00(0x50)
};

// ScriptStruct TslGame.*00a57ec487
// Size: 0x28 (Inherited: 0x00)
struct F*00a57ec487 {
	float RecoilValue; // 0x00(0x04)
	float RecoilVertical; // 0x04(0x04)
	float RecoilHorizontal; // 0x08(0x04)
	float RecoilTargetPitch; // 0x0c(0x04)
	float RecoilTargetYaw; // 0x10(0x04)
	float RecoilRecoveryTarget; // 0x14(0x04)
	float RecoilVerticalDelta; // 0x18(0x04)
	float RecoilHorizontalDelta; // 0x1c(0x04)
	float RecoilCharacterPitch; // 0x20(0x04)
	float RecoilWeaponPitch; // 0x24(0x04)
};

// ScriptStruct TslGame.*4f3b2e9550
// Size: 0x78 (Inherited: 0x00)
struct F*4f3b2e9550 {
	struct ATslWeapon_Trajectory* Weapon; // 0x00(0x08)
	struct U*59a0aeaef9* *9ce8a267b0; // 0x08(0x08)
	struct ATslParticle* Particle; // 0x10(0x08)
	char pad_18[0x60]; // 0x18(0x60)
};

// ScriptStruct TslGame.*ade525f370
// Size: 0x30 (Inherited: 0x08)
struct F*ade525f370 : FTableRowBase {
	struct UTexture2D* BackgroundImage; // 0x08(0x20)
	float ApperanceModifier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*1d555dccb7
// Size: 0xd8 (Inherited: 0xa0)
struct F*1d555dccb7 : F*929ae8612c {
	bool bIsImageOnlyLoadingScreen; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FText Title; // 0xa8(0x18)
	struct FText Description; // 0xc0(0x18)
};

// ScriptStruct TslGame.*929ae8612c
// Size: 0xa0 (Inherited: 0x08)
struct F*929ae8612c : FTableRowBase {
	enum class ELoadingScreenType LoadingScreenType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName GameModeAlias; // 0x10(0x08)
	enum class *9b9eb639a2 RankGuideType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UTexture2D* BackgroundImage; // 0x20(0x20)
	struct TMap<enum class ETslMapName, struct F*9ce0cc45aa> OverrideByMap; // 0x40(0x50)
	bool bIsKeyGuide; // 0x90(0x01)
	bool bExposedOnPCAndKeyboard; // 0x91(0x01)
	bool bExposedOnPCAndGamepad; // 0x92(0x01)
	bool bExposedOnXboxOne; // 0x93(0x01)
	bool bExposedOnPS4; // 0x94(0x01)
	bool bExposedOnQuail; // 0x95(0x01)
	bool bExposedOnQuailThirdParty; // 0x96(0x01)
	char pad_97[0x1]; // 0x97(0x01)
	float ApperanceModifier; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct TslGame.*9ce0cc45aa
// Size: 0x50 (Inherited: 0x00)
struct F*9ce0cc45aa {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* BackgroundImage; // 0x30(0x20)
};

// ScriptStruct TslGame.*814f4d606a
// Size: 0xa8 (Inherited: 0xa0)
struct F*814f4d606a : F*929ae8612c {
	struct UClass* TipWidget; // 0xa0(0x08)
};

// ScriptStruct TslGame.*109506ec97
// Size: 0x40 (Inherited: 0x00)
struct F*109506ec97 {
	struct TArray<struct F*fd068b9ada> LoadingScreenTypePercentForElementaryRank; // 0x00(0x10)
	struct TArray<struct F*fd068b9ada> LoadingScreenTypePercentForIntermediateRank; // 0x10(0x10)
	struct TArray<struct F*fd068b9ada> LoadingScreenTypePercentForHighRank; // 0x20(0x10)
	struct TArray<struct F*fd068b9ada> LoadingScreenTypePercentForExpertRank; // 0x30(0x10)
};

// ScriptStruct TslGame.*fd068b9ada
// Size: 0x08 (Inherited: 0x00)
struct F*fd068b9ada {
	enum class ELoadingScreenType LoadingScreenType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Percent; // 0x04(0x04)
};

// ScriptStruct TslGame.*373e973550
// Size: 0x18 (Inherited: 0x08)
struct F*373e973550 : FTableRowBase {
	float ShowElementaryRankPercentForElementaryRank; // 0x08(0x04)
	float ShowElementaryRankPercentForIntermediateRank; // 0x0c(0x04)
	float ShowElementaryRankPercentForHighRank; // 0x10(0x04)
	float ShowElementaryRankPercentForExpertRank; // 0x14(0x04)
};

// ScriptStruct TslGame.*b75de2cc96
// Size: 0x28 (Inherited: 0x00)
struct F*b75de2cc96 {
	struct FText ColorNameText; // 0x00(0x18)
	struct FLinearColor Color; // 0x18(0x10)
};

// ScriptStruct TslGame.NamedFovRecord
// Size: 0x10 (Inherited: 0x00)
struct FNamedFovRecord {
	struct FName SensitiveName; // 0x00(0x08)
	float FOV; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ac69bc97f4
// Size: 0x20 (Inherited: 0x08)
struct F*ac69bc97f4 : FTableRowBase {
	struct FName *4909c493d8; // 0x08(0x08)
	struct TArray<struct F*97d9447c83> *9ced32b122; // 0x10(0x10)
};

// ScriptStruct TslGame.*1639cef6cc
// Size: 0x38 (Inherited: 0x00)
struct F*1639cef6cc {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
};

// ScriptStruct TslGame.*1a4fd8c3e7
// Size: 0x68 (Inherited: 0x00)
struct F*1a4fd8c3e7 {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
	bool bIsStepper; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FText> *188c32cac4; // 0x40(0x10)
	int32 *eb4cbc903e; // 0x50(0x04)
	bool bIsSlider; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float SliderMin; // 0x58(0x04)
	float SliderMax; // 0x5c(0x04)
	float *ceabca2697; // 0x60(0x04)
	bool *9c39e01e37; // 0x64(0x01)
	bool *f48f3c124e; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct TslGame.*372b0ee7a2
// Size: 0x20 (Inherited: 0x00)
struct F*372b0ee7a2 {
	struct TArray<struct FTslGamepadActionKeyData> ActionKeyDatas; // 0x00(0x10)
	struct TArray<struct FTslGamepadAxisKeyData> AxisKeyDatas; // 0x10(0x10)
};

// ScriptStruct TslGame.TslGamepadAxisKeyData
// Size: 0x28 (Inherited: 0x00)
struct FTslGamepadAxisKeyData {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FKey GamepadAxisKey; // 0x10(0x18)
};

// ScriptStruct TslGame.TslGamepadActionKeyData
// Size: 0x48 (Inherited: 0x00)
struct FTslGamepadActionKeyData {
	struct FName ActionName; // 0x00(0x08)
	struct FTslGamepadInputKey GamepadActionKey; // 0x08(0x40)
};

// ScriptStruct TslGame.TslGamepadInputKey
// Size: 0x40 (Inherited: 0x00)
struct FTslGamepadInputKey {
	struct FKey Key; // 0x00(0x18)
	enum class EGamepadInputResponseTypes ResponseType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ResponseTime; // 0x1c(0x04)
	bool bBlockDuplicatedKeyAction; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FKey CombinationKey; // 0x28(0x18)
};

// ScriptStruct TslGame.*8fd33d27f4
// Size: 0x10 (Inherited: 0x00)
struct F*8fd33d27f4 {
	struct TArray<struct FTslGamepadInputKey> *6a5ded961c; // 0x00(0x10)
};

// ScriptStruct TslGame.*3f7218a5c6
// Size: 0xc0 (Inherited: 0x08)
struct F*3f7218a5c6 : FTableRowBase {
	enum class EGamepadPresets GamepadPreset; // 0x08(0x01)
	enum class EActionType ActionType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName ActionName; // 0x10(0x08)
	struct FKey Key; // 0x18(0x18)
	bool bIsConfirmOrCancel; // 0x30(0x01)
	enum class EGamepadInputResponseTypes ResponseType; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float ResponseTime; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	bool bBlockDuplicatedKeyAction; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString GuideTabCategory; // 0x40(0x10)
	struct FText GuideText; // 0x50(0x18)
	struct FKey CombinationKey; // 0x68(0x18)
	struct FString FakeResponseTypeForGuide; // 0x80(0x10)
	struct FString BindingTabName; // 0x90(0x10)
	int32 BindingGroupNumber; // 0xa0(0x04)
	int32 FunctionalGroupNumber; // 0xa4(0x04)
	struct FKey RelatedAxisKey; // 0xa8(0x18)
};

// ScriptStruct TslGame.*0561225b91
// Size: 0x30 (Inherited: 0x00)
struct F*0561225b91 {
	float MinDistance; // 0x00(0x04)
	float MaxDistance; // 0x04(0x04)
	float TrackingModifier; // 0x08(0x04)
	float AdhesionSpeed; // 0x0c(0x04)
	float DeadZoneValue; // 0x10(0x04)
	bool bUseTrackingModifierCurve; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct UCurveFloat* TrackingModifierCurve; // 0x18(0x08)
	bool bUseAdhesionSpeedCurve; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* AdhesionSpeedCurve; // 0x28(0x08)
};

// ScriptStruct TslGame.*85c8d5fa7d
// Size: 0x38 (Inherited: 0x00)
struct F*85c8d5fa7d {
	struct FLinearColor Color; // 0x00(0x10)
	struct FText DisplayName; // 0x10(0x18)
	struct FString ColorString; // 0x28(0x10)
};

// ScriptStruct TslGame.*c38ec79364
// Size: 0x18 (Inherited: 0x00)
struct F*c38ec79364 {
	enum class EAnimatableCustomizableTypes MutableType; // 0x00(0x01)
	enum class ETargetAnimDynamicsType TargetAnimDynamicType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FName> MutableNames; // 0x08(0x10)
};

// ScriptStruct TslGame.ColorBlindType
// Size: 0x20 (Inherited: 0x00)
struct FColorBlindType {
	enum class EColorBlindType Key; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct TslGame.PlatoonCommanderColorAndIcon
// Size: 0x50 (Inherited: 0x40)
struct FPlatoonCommanderColorAndIcon : FTeamColorAndIcon {
	struct F*68d8762d80 AlternativeColor; // 0x40(0x10)
};

// ScriptStruct TslGame.TeamColorAndIcon
// Size: 0x40 (Inherited: 0x00)
struct FTeamColorAndIcon {
	struct F*68d8762d80 TeamMemberColor; // 0x00(0x10)
	struct UTexture* MarkerColorTextIcon; // 0x10(0x08)
	struct UTexture* MarkerIcon; // 0x18(0x08)
	struct UTexture* PlayerIcon; // 0x20(0x08)
	struct UTexture* CompassIcon; // 0x28(0x08)
	struct UTexture* IndicatorIcon; // 0x30(0x08)
	struct UTexture* MapDeathIcon; // 0x38(0x08)
};

// ScriptStruct TslGame.*68d8762d80
// Size: 0x10 (Inherited: 0x00)
struct F*68d8762d80 {
	struct TArray<struct F*c9e90bca6c> ColorSet; // 0x00(0x10)
};

// ScriptStruct TslGame.*c9e90bca6c
// Size: 0x14 (Inherited: 0x00)
struct F*c9e90bca6c {
	enum class EColorBlindType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
};

// ScriptStruct TslGame.*95853123d0
// Size: 0x18 (Inherited: 0x00)
struct F*95853123d0 {
	enum class ESeatState SeatState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*68d8762d80 ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.ReticleColors
// Size: 0x18 (Inherited: 0x00)
struct FReticleColors {
	enum class EReticleType ReticleType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*68d8762d80 ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.*bec4bef7db
// Size: 0x30 (Inherited: 0x08)
struct F*bec4bef7db : FTableRowBase {
	struct F*68d8762d80 BlindColorSet; // 0x08(0x10)
	struct FLinearColor ShadowColor; // 0x18(0x10)
	struct FVector2D ShadowOffset; // 0x28(0x08)
};

// ScriptStruct TslGame.*50d98325a1
// Size: 0x28 (Inherited: 0x00)
struct F*50d98325a1 {
	struct FText DisplayUiName; // 0x00(0x18)
	struct FString UiKey; // 0x18(0x10)
};

// ScriptStruct TslGame.*5bc118a6ce
// Size: 0x18 (Inherited: 0x00)
struct F*5bc118a6ce {
	enum class EQualityType QualityType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*307f127b96> OverrideScalabilityValues; // 0x08(0x10)
};

// ScriptStruct TslGame.*307f127b96
// Size: 0x28 (Inherited: 0x00)
struct F*307f127b96 {
	struct FString ConsoleName; // 0x00(0x10)
	enum class EValueType ValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> Values; // 0x18(0x10)
};

// ScriptStruct TslGame.*5d9b6e5d5a
// Size: 0x20 (Inherited: 0x00)
struct F*5d9b6e5d5a {
	struct FName ModeName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct TslGame.*dc28ef074f
// Size: 0x20 (Inherited: 0x00)
struct F*dc28ef074f {
	int32 QualityLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText DisplayQualityLevelName; // 0x08(0x18)
};

// ScriptStruct TslGame.*130b2fef68
// Size: 0x30 (Inherited: 0x00)
struct F*130b2fef68 {
	struct FText DisplayName; // 0x00(0x18)
	struct FName GamePadSensitiveName; // 0x18(0x08)
	float GamePadSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* GamePadCurve; // 0x28(0x08)
};

// ScriptStruct TslGame.*41d3e7e67a
// Size: 0x28 (Inherited: 0x00)
struct F*41d3e7e67a {
	struct FText DisplayName; // 0x00(0x18)
	struct FName MouseSensitiveName; // 0x18(0x08)
	float MouseSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*613374cb41
// Size: 0x30 (Inherited: 0x00)
struct F*613374cb41 {
	struct FName Category; // 0x00(0x08)
	struct FName AxisName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	float Scale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*182e1b100b
// Size: 0x28 (Inherited: 0x00)
struct F*182e1b100b {
	struct FName Category; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct TslGame.*ffe9992b89
// Size: 0x30 (Inherited: 0x00)
struct F*ffe9992b89 {
	struct FText DisplayName; // 0x00(0x18)
	enum class EReportCause ReportCauseType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<enum class EReportDetailCauseType> DetailCauseTypeList; // 0x20(0x10)
};

// ScriptStruct TslGame.AimAcceleration
// Size: 0x08 (Inherited: 0x00)
struct FAimAcceleration {
	struct UCurveFloat* RampUpTimeForTargetingCurve; // 0x00(0x08)
};

// ScriptStruct TslGame.SubjectToReport
// Size: 0x20 (Inherited: 0x00)
struct FSubjectToReport {
	struct FText DisplayName; // 0x00(0x18)
	enum class ESubjectToReport SubjectToReportType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.CustomizableCategoryData
// Size: 0x30 (Inherited: 0x00)
struct FCustomizableCategoryData {
	struct FText DisplayName; // 0x00(0x18)
	struct FName Category; // 0x18(0x08)
	struct TArray<struct FName> NotDuplicateCategoryNames; // 0x20(0x10)
};

// ScriptStruct TslGame.*4f04a4ca2c
// Size: 0x10 (Inherited: 0x00)
struct F*4f04a4ca2c {
	struct FName *fbaed74158; // 0x00(0x08)
	struct FName *64151aabf6; // 0x08(0x08)
};

// ScriptStruct TslGame.*fd5de8c6fe
// Size: 0x14 (Inherited: 0x00)
struct F*fd5de8c6fe {
	float CapsuleHalfHeight; // 0x00(0x04)
	float CapsuleRadius; // 0x04(0x04)
	struct FVector CapsuleOffset; // 0x08(0x0c)
};

// ScriptStruct TslGame.CustomInputSettings
// Size: 0xd8 (Inherited: 0x00)
struct FCustomInputSettings {
	struct TArray<struct FCustomActionKeyData> ActionKeyList; // 0x00(0x10)
	struct TArray<struct FCustomAxisKeyData> AxisKeyList; // 0x10(0x10)
	bool bIsUsingPerScopeMouseSensitivity; // 0x20(0x01)
	bool bIsUsingPerScopeGamepadSensitivity; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<struct FCustomMouseSensitiveData> MouseSensitiveList; // 0x28(0x10)
	struct TArray<struct FCustomGamePadSensitiveData> GamePadSensitiveList; // 0x38(0x10)
	struct TMap<enum class ETslControllerType, struct FCustomSensitiveDataArray> SensitiveMap; // 0x48(0x50)
	float MouseVerticalSensitivityMultiplierAdjusted; // 0x98(0x04)
	bool bInvertMouse; // 0x9c(0x01)
	bool bInvertGamePadY; // 0x9d(0x01)
	bool bInvertGamePadX; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
	float GamePadDeadZone; // 0xa0(0x04)
	float GamepadVerticalSensitivityMultiplier; // 0xa4(0x04)
	float StartRunningSensitivity; // 0xa8(0x04)
	float GamePadDeadZone_Left; // 0xac(0x04)
	bool bEnableAimAccPad; // 0xb0(0x01)
	char pad_B1[0x27]; // 0xb1(0x27)
};

// ScriptStruct TslGame.CustomSensitiveDataArray
// Size: 0x10 (Inherited: 0x00)
struct FCustomSensitiveDataArray {
	struct TArray<struct FCustomSensitiveData> Array; // 0x00(0x10)
};

// ScriptStruct TslGame.CustomSensitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomSensitiveData {
	struct FName SensitiveName; // 0x00(0x08)
	float Sensitivity; // 0x08(0x04)
	float LastConvertedSensitivity; // 0x0c(0x04)
};

// ScriptStruct TslGame.CustomGamePadSensitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomGamePadSensitiveData {
	struct FName GamePadSensitiveName; // 0x00(0x08)
	float GamePadSensitivity; // 0x08(0x04)
	float LastConvertedGamePadSensitivity; // 0x0c(0x04)
};

// ScriptStruct TslGame.CustomMouseSensitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomMouseSensitiveData {
	struct FName MouseSensitiveName; // 0x00(0x08)
	float MouseSensitivity; // 0x08(0x04)
	float LastConvertedMouseSensitivity; // 0x0c(0x04)
};

// ScriptStruct TslGame.CustomAxisKeyData
// Size: 0x20 (Inherited: 0x00)
struct FCustomAxisKeyData {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTslInputKey> Keys; // 0x10(0x10)
};

// ScriptStruct TslGame.CustomActionKeyData
// Size: 0x18 (Inherited: 0x00)
struct FCustomActionKeyData {
	struct FName ActionName; // 0x00(0x08)
	struct TArray<struct FTslInputKey> Keys; // 0x08(0x10)
};

// ScriptStruct TslGame.TslOutGameCloudOptionData
// Size: 0x160 (Inherited: 0x00)
struct FTslOutGameCloudOptionData {
	bool bIsDirty; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString CultureName; // 0x08(0x10)
	bool bMuteMaster; // 0x18(0x01)
	bool bMuteEffect; // 0x19(0x01)
	bool bMuteUI; // 0x1a(0x01)
	bool bMuteBGM; // 0x1b(0x01)
	bool bHRTF; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MasterVolume; // 0x20(0x04)
	float EffectVolume; // 0x24(0x04)
	float EmoteVolume; // 0x28(0x04)
	float UIVolume; // 0x2c(0x04)
	float BGMVolume; // 0x30(0x04)
	bool bVoiceInputMute; // 0x34(0x01)
	bool bVoiceOutputMute; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	int32 VoiceInputVolume; // 0x38(0x04)
	int32 VoiceOutputVolume; // 0x3c(0x04)
	bool bPushToTalk; // 0x40(0x01)
	bool bToggleVoiceChat; // 0x41(0x01)
	bool bGlobalVoice; // 0x42(0x01)
	bool bTeamVoice; // 0x43(0x01)
	bool bInvMouse; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float VertMult; // 0x48(0x04)
	bool bScopeUniv; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TMap<struct FName, float> Sensitivities; // 0x50(0x50)
	struct TMap<enum class EInputModeSettingActions, enum class ETslInputModes> InputModes; // 0xa0(0x50)
	struct TArray<struct FCustomActionKeyData> ActionKeys; // 0xf0(0x10)
	struct TArray<struct FCustomAxisKeyData> AxisKeys; // 0x100(0x10)
	enum class EColorBlindType ColorBlindType; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FString CrosshairColorStr; // 0x118(0x10)
	struct FColor CustomCrosshairColor; // 0x128(0x04)
	enum class EUiShowType FppWeaponIconShowType; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	int32 WorldMapZoomLv; // 0x130(0x04)
	enum class EMinimapColorType MinimapColorType; // 0x134(0x01)
	bool bMinimapDynZoom; // 0x135(0x01)
	bool bIconKillfeed; // 0x136(0x01)
	char pad_137[0x1]; // 0x137(0x01)
	int32 KillfeedListSize; // 0x138(0x04)
	bool bHideKillfeedName; // 0x13c(0x01)
	bool bDisplayClanMessage; // 0x13d(0x01)
	bool bHighlightInteraction; // 0x13e(0x01)
	bool bShowCompassShade; // 0x13f(0x01)
	bool bNetStat; // 0x140(0x01)
	bool bOnScrKeyGuide; // 0x141(0x01)
	bool bShowHead; // 0x142(0x01)
	bool bShowTorsoArmor; // 0x143(0x01)
	bool bShowBelt; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	int32 InstantVolumeReducerIntensity; // 0x148(0x04)
	bool bFreeLookInterp; // 0x14c(0x01)
	enum class ETppAimCameraPosition TppAimCam; // 0x14d(0x01)
	bool bAutoReload; // 0x14e(0x01)
	enum class EFiringMode HGsMode; // 0x14f(0x01)
	enum class EFiringMode SMGsMode; // 0x150(0x01)
	enum class EFiringMode ARsMode; // 0x151(0x01)
	enum class EFiringMode DMRsMode; // 0x152(0x01)
	enum class EFiringMode ShotgunsMode; // 0x153(0x01)
	enum class EFiringMode SecondarySMGsMode; // 0x154(0x01)
	enum class EFiringMode SecondaryARsMode; // 0x155(0x01)
	bool bAutoEquipAttachByInteract; // 0x156(0x01)
	bool bAutoReplaceAttachment; // 0x157(0x01)
	bool bAutoEquipAttachFromInv; // 0x158(0x01)
	bool bReplay; // 0x159(0x01)
	bool bKillCam; // 0x15a(0x01)
	bool bRecommendBullet; // 0x15b(0x01)
	bool bRecommendEquipment; // 0x15c(0x01)
	bool bRecommendAttachment; // 0x15d(0x01)
	bool bPreventVehicleFall; // 0x15e(0x01)
	bool bVehicleSkinAutoApply; // 0x15f(0x01)
};

// ScriptStruct TslGame.*d2fa54371c
// Size: 0x528 (Inherited: 0x268)
struct F*d2fa54371c : F*7700dab07d {
	struct U*185a32b651* WeaponAttachmentData; // 0x268(0x08)
	struct FWeaponAttachmentData AttachmentData; // 0x270(0x250)
	struct UStaticMesh* AttachmentMeshAsset; // 0x4c0(0x20)
	struct FName AttachmentMeshName; // 0x4e0(0x08)
	struct TArray<struct F*468382b2f1> AttachmentWeaponTagData; // 0x4e8(0x10)
	struct UClass* AttachmentTemplate; // 0x4f8(0x08)
	bool EquipOnPickUp; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct UAkAudioEvent* *92e8f9ddfe; // 0x508(0x20)
};

// ScriptStruct TslGame.*ab1ffbc918
// Size: 0x60 (Inherited: 0x08)
struct F*ab1ffbc918 : FTableRowBase {
	int32 Priority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UClass*> Conditions; // 0x10(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x20(0x10)
	struct TArray<struct F*e2b86e5db3> *14c50fd215; // 0x30(0x10)
	struct TArray<struct FName> KeyHintInfoRowNames; // 0x40(0x10)
	struct TArray<struct F*675385f2e6> *e260e1f643; // 0x50(0x10)
};

// ScriptStruct TslGame.*675385f2e6
// Size: 0xb0 (Inherited: 0x08)
struct F*675385f2e6 : FTableRowBase {
	bool ShowWhenUnassigned; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*97d9447c83> ActionsAndAxes; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	struct FText InputModeText; // 0x38(0x18)
	struct FSlateColor DisplayNameColor; // 0x50(0x28)
	bool *10d80ca7e7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct UClass*> AdditionalConditions; // 0x80(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x90(0x10)
	struct TArray<struct F*e2b86e5db3> *14c50fd215; // 0xa0(0x10)
};

// ScriptStruct TslGame.*e2b86e5db3
// Size: 0x58 (Inherited: 0x08)
struct F*e2b86e5db3 : FTableRowBase {
	enum class ETableCheckerHideOption *27f127b0e8; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *260fde8ab1; // 0x10(0x08)
	struct TArray<struct FString> *39571ffd18; // 0x18(0x10)
	struct TArray<struct FString> *7c403e3b5c; // 0x28(0x10)
	struct TArray<struct FString> *1cfa0357e7; // 0x38(0x10)
	struct TArray<struct FString> *ce3c5f04f1; // 0x48(0x10)
};

// ScriptStruct TslGame.TslPersistantData
// Size: 0x2f8 (Inherited: 0x00)
struct FTslPersistantData {
	struct FCustomInputSettings CustomInputSettings; // 0x00(0xd8)
	bool bUseForceFeedback; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float ForceFeedbackMultiplier; // 0xdc(0x04)
	float FpsCameraFov; // 0xe0(0x04)
	float Gamma; // 0xe4(0x04)
	bool bIsMasterSoundMute; // 0xe8(0x01)
	bool bIsEffectSoundMute; // 0xe9(0x01)
	bool bIsUISoundMute; // 0xea(0x01)
	bool bIsRenewalWeaponSoundEnabled; // 0xeb(0x01)
	bool bIsBGMSoundMute; // 0xec(0x01)
	bool bIsEnabledHrtfRemoteWeaponSound; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
	struct FString CultureName; // 0xf0(0x10)
	bool bIconKillfeedEnabled; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32 ColorBlindType; // 0x104(0x04)
	struct FString CrosshairColorString; // 0x108(0x10)
	struct FColor CustomCrosshairColor; // 0x118(0x04)
	bool bUseKeyHint; // 0x11c(0x01)
	enum class EKeyHintGradeSettingValue EKeyhintGrade; // 0x11d(0x01)
	bool bShowNetworkInfo; // 0x11e(0x01)
	enum class ETppAimCameraPosition TppAimCamPosRecoveryType; // 0x11f(0x01)
	float ForwardRunningSensitivity; // 0x120(0x04)
	float MasterSoundVolume; // 0x124(0x04)
	float EffectSoundVolume; // 0x128(0x04)
	float EmoteSoundVolume; // 0x12c(0x04)
	float UISoundVolume; // 0x130(0x04)
	float BGMSoundVolume; // 0x134(0x04)
	float PlaygroundBGMSoundVolume; // 0x138(0x04)
	float PlaygroundWebSoundVolume; // 0x13c(0x04)
	struct FString MusicTitle; // 0x140(0x10)
	struct FString MusicTitleKeyOfLasPlayedSeason; // 0x150(0x10)
	bool bUseCustomReticleType; // 0x160(0x01)
	enum class EFiringMode HGsFiringMode; // 0x161(0x01)
	enum class EFiringMode SMGsFiringMode; // 0x162(0x01)
	enum class EFiringMode ARsFiringMode; // 0x163(0x01)
	enum class EFiringMode DMRsFiringMode; // 0x164(0x01)
	enum class EFiringMode ShotgunsFiringMode; // 0x165(0x01)
	enum class EFiringMode SecondarySMGsFiringMode; // 0x166(0x01)
	enum class EFiringMode SecondaryARsFiringMode; // 0x167(0x01)
	bool bUseRes4K; // 0x168(0x01)
	bool bUseTAA; // 0x169(0x01)
	bool bAutoReloadOnOutOfAmmoFire; // 0x16a(0x01)
	bool bShowCompassShade; // 0x16b(0x01)
	int32 GamepadPresets; // 0x16c(0x04)
	bool AutoEquipAttachment; // 0x170(0x01)
	enum class EAutoEquipAttachmentForScopeMode AutoEquipAttachmentForScope; // 0x171(0x01)
	bool AutoReplaceAttachment; // 0x172(0x01)
	bool bEnableUniversalGamma; // 0x173(0x01)
	char pad_174[0x4]; // 0x174(0x04)
	struct TMap<struct FString, float> GammasForMap; // 0x178(0x50)
	bool bAutoWeaponSkinReplacement; // 0x1c8(0x01)
	bool bAutoVehicleSkinReplacement; // 0x1c9(0x01)
	bool bHideNicknameOnKillfeed; // 0x1ca(0x01)
	bool bDisplayClanMessage; // 0x1cb(0x01)
	bool bEnableRadioMessage; // 0x1cc(0x01)
	bool bEnableCrossNetworkPlay; // 0x1cd(0x01)
	enum class EContinuousHealItem ContinuousType; // 0x1ce(0x01)
	enum class ERadioMessagePresets RadioMessagePreset; // 0x1cf(0x01)
	bool bEnableRadioMessageQuickPing; // 0x1d0(0x01)
	bool bUseKillCam; // 0x1d1(0x01)
	bool bUseActionQueuing; // 0x1d2(0x01)
	char pad_1D3[0x1]; // 0x1d3(0x01)
	int32 InstantVolumeReducerIntensity; // 0x1d4(0x04)
	float HDRGamma; // 0x1d8(0x04)
	enum class EUiShowType FppWeaponIconShowType; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	int32 WorldMapZoomSpeedLevel; // 0x1e0(0x04)
	enum class EUiShowType TpsWeaponIconShowType; // 0x1e4(0x01)
	bool InputDeviceType; // 0x1e5(0x01)
	enum class ETslInputModes InputModeCrouch; // 0x1e6(0x01)
	enum class ETslInputModes InputModeProne; // 0x1e7(0x01)
	enum class ETslInputModes InputModeWalk; // 0x1e8(0x01)
	enum class ETslInputModes bToggleSprint; // 0x1e9(0x01)
	enum class ETslInputModes InputModeHoldRotation; // 0x1ea(0x01)
	enum class ETslInputModes InputModeHoldBreath; // 0x1eb(0x01)
	enum class ETslInputModes InputModeHoldAngled; // 0x1ec(0x01)
	enum class ETslInputModes InputModePeek; // 0x1ed(0x01)
	enum class ETslInputModes InputModeMap; // 0x1ee(0x01)
	enum class ETslInputModes InputModeADS; // 0x1ef(0x01)
	enum class ETslInputModes InputModeAim; // 0x1f0(0x01)
	bool bUseNewDropItemEffects; // 0x1f1(0x01)
	bool bShowTracerDisplay; // 0x1f2(0x01)
	bool bUseTracerTeamColor; // 0x1f3(0x01)
	bool bShowHead; // 0x1f4(0x01)
	bool bShowTorsoArmor; // 0x1f5(0x01)
	bool bShowBelt; // 0x1f6(0x01)
	bool bEnablePadInventoryTooltip; // 0x1f7(0x01)
	float ObserverMovingSpeed; // 0x1f8(0x04)
	bool ObserverHeaderGunUseage; // 0x1fc(0x01)
	bool ObserverTagUseage; // 0x1fd(0x01)
	bool ObserverXRayUseage; // 0x1fe(0x01)
	bool ObserverDamageIndicatorUsage; // 0x1ff(0x01)
	bool ObserverSmokeTimerUsage; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct TMap<struct FName, int32> DefaultReticleMap; // 0x208(0x50)
	struct TArray<struct FTslGamepadActionKeyData> GamepadCustomActionKeys; // 0x258(0x10)
	struct TArray<struct FTslGamepadAxisKeyData> GamepadCustomAxisKeys; // 0x268(0x10)
	enum class EGamepadPresets BasePresetForCustomKeyBinding; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct TMap<struct FName, float> DefaultReticleBrightnessMap; // 0x280(0x50)
	struct FString BuildVersion; // 0x2d0(0x10)
	float GamepadInventoryNavigationSensitivity; // 0x2e0(0x04)
	float SafeZonePercentage; // 0x2e4(0x04)
	bool bUseBulletRecommandOption; // 0x2e8(0x01)
	bool bUseEquipmentRecommandOption; // 0x2e9(0x01)
	bool bUseAttachmentRecommendOption; // 0x2ea(0x01)
	bool bIsVoiceInputMute; // 0x2eb(0x01)
	bool bEnableVehicleFallPrevention; // 0x2ec(0x01)
	bool bEnableVehicleSkinAutoApply; // 0x2ed(0x01)
	bool bIsVoiceOutputMute; // 0x2ee(0x01)
	char pad_2EF[0x1]; // 0x2ef(0x01)
	int32 VoiceInputVolume; // 0x2f0(0x04)
	int32 VoiceOutputVolume; // 0x2f4(0x04)
};

// ScriptStruct TslGame.*f1f7996b2d
// Size: 0x10 (Inherited: 0x00)
struct F*f1f7996b2d {
	struct TArray<struct FOutgameUserData> OutGameUserDateSet; // 0x00(0x10)
};

// ScriptStruct TslGame.OutgameUserData
// Size: 0x20 (Inherited: 0x00)
struct FOutgameUserData {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*202425827a
// Size: 0x20 (Inherited: 0x00)
struct F*202425827a {
	float ReplayEventTime; // 0x00(0x04)
	enum class ETslWeatherAction Action; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 WeatherIndex; // 0x08(0x04)
	int32 OldWeatherIndex; // 0x0c(0x04)
	float InitElapsedTime; // 0x10(0x04)
	float SaturateTime; // 0x14(0x04)
	float BlendInTime; // 0x18(0x04)
	float BlendOutTime; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e0a659b1d4
// Size: 0x88 (Inherited: 0x00)
struct F*e0a659b1d4 {
	struct FString MatchingState; // 0x00(0x10)
	int32 MatchingElasedSeconds; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Address; // 0x18(0x10)
	struct FWuUdpEncryptionKey Key; // 0x28(0x30)
	struct FString InSessionId; // 0x58(0x10)
	struct FString InSessionZkToken; // 0x68(0x10)
	struct FString InModeName; // 0x78(0x10)
};

// ScriptStruct TslGame.*54d1a2bfd2
// Size: 0x20 (Inherited: 0x00)
struct F*54d1a2bfd2 {
	struct FString URL; // 0x00(0x10)
	struct FString Packet; // 0x10(0x10)
};

// ScriptStruct TslGame.*c6cdcf7fac
// Size: 0x38 (Inherited: 0x00)
struct F*c6cdcf7fac {
	struct FString FunctionName; // 0x00(0x10)
	bool isSuccessful; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString failResult; // 0x18(0x10)
	struct FString additionalData; // 0x28(0x10)
};

// ScriptStruct TslGame.ReplayPlayData
// Size: 0x38 (Inherited: 0x00)
struct FReplayPlayData {
	struct FString MatchId; // 0x00(0x10)
	struct FString AccountId; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	float PlayTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.ItemTableRowCastableSelectBox
// Size: 0x3d8 (Inherited: 0x3b8)
struct FItemTableRowCastableSelectBox : FItemTableRowCastable {
	struct TArray<struct FName> SelectableItems; // 0x3b8(0x10)
	int32 SelectCount; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UClass* *65747af43c; // 0x3d0(0x08)
};

// ScriptStruct TslGame.*6ff1491ce5
// Size: 0x0c (Inherited: 0x00)
struct F*6ff1491ce5 {
	float BeforeDurationSec; // 0x00(0x04)
	float AfterDurationSec; // 0x04(0x04)
	float LinkWaitDurationSec; // 0x08(0x04)
};

// ScriptStruct TslGame.*cb5e913f94
// Size: 0x138 (Inherited: 0x00)
struct F*cb5e913f94 {
	enum class ECharacterInteractBehaviorType CharacterInteractBehaviorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxInteractableDistance; // 0x04(0x04)
	struct F*ee5e6ace1b AdditionalCastConfig; // 0x08(0x130)
};

// ScriptStruct TslGame.ItemTableRowCraft
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowCraft : F*7700dab07d {
};

// ScriptStruct TslGame.ItemTableRowBluechip
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowBluechip : F*7700dab07d {
};

// ScriptStruct TslGame.ItemTableRowCastableEquipmentRepairKit
// Size: 0x3c0 (Inherited: 0x3b8)
struct FItemTableRowCastableEquipmentRepairKit : FItemTableRowCastable {
	enum class EEquipSlotID EquipSlot; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	float RepairAmount; // 0x3bc(0x04)
};

// ScriptStruct TslGame.ItemTableRowCastableHealOverTime
// Size: 0x3d8 (Inherited: 0x3b8)
struct FItemTableRowCastableHealOverTime : FItemTableRowCastable {
	struct UClass* *b4c8351ff9; // 0x3b8(0x20)
};

// ScriptStruct TslGame.ItemTableRowCastableHealInstant
// Size: 0x3c0 (Inherited: 0x3b8)
struct FItemTableRowCastableHealInstant : FItemTableRowCastable {
	float *e1f474209c; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
};

// ScriptStruct TslGame.ItemTableRowCastableRandomBox
// Size: 0x3c8 (Inherited: 0x3b8)
struct FItemTableRowCastableRandomBox : FItemTableRowCastable {
	struct TArray<struct F*7e58829c42> RandomBoxDatas; // 0x3b8(0x10)
};

// ScriptStruct TslGame.*7e58829c42
// Size: 0x108 (Inherited: 0x00)
struct F*7e58829c42 {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*690637cd6c SpawnKitInfo; // 0x08(0x100)
};

// ScriptStruct TslGame.ItemTableRowCastableVehicleRepairKit
// Size: 0x3c0 (Inherited: 0x3b8)
struct FItemTableRowCastableVehicleRepairKit : FItemTableRowCastable {
	float RepairAmount; // 0x3b8(0x04)
	float VehicleSpeedThreshold; // 0x3bc(0x04)
};

// ScriptStruct TslGame.*c91ac24072
// Size: 0x440 (Inherited: 0x410)
struct F*c91ac24072 : F*05fad71403 {
	struct UClass* WeaponType; // 0x410(0x20)
	struct FName WeaponTag; // 0x430(0x08)
	enum class EWeaponDisplayTypes WeaponDisplayType; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
};

// ScriptStruct TslGame.*8333d9453d
// Size: 0x450 (Inherited: 0x440)
struct F*8333d9453d : F*c91ac24072 {
	int32 AmmoCount; // 0x440(0x04)
	int32 ForcedPrimarySlotIndex; // 0x444(0x04)
	bool bDisablePrimaryWeaponSwap; // 0x448(0x01)
	bool bDisableDropAndDetachAttachments; // 0x449(0x01)
	bool bHasNumberOfUses; // 0x44a(0x01)
	char pad_44B[0x1]; // 0x44b(0x01)
	int32 NumberOfUses; // 0x44c(0x04)
};

// ScriptStruct TslGame.*b81177c7de
// Size: 0x458 (Inherited: 0x450)
struct F*b81177c7de : F*8333d9453d {
	int32 DebuffChargesCount; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
};

// ScriptStruct TslGame.*868f25c984
// Size: 0x510 (Inherited: 0x410)
struct F*868f25c984 : F*05fad71403 {
	int32 ItemLevel; // 0x410(0x04)
	char pad_414[0xc]; // 0x414(0x0c)
	struct FTransform SlotOffset_Primary; // 0x420(0x30)
	struct FTransform SlotOffset_Secondary; // 0x450(0x30)
	struct FTransform SlotOffset_SideArm; // 0x480(0x30)
	struct FTransform SlotOffset_Melee; // 0x4b0(0x30)
	struct FTransform SlotOffset_Thrown; // 0x4e0(0x30)
};

// ScriptStruct TslGame.*75274334b4
// Size: 0x20 (Inherited: 0x00)
struct F*75274334b4 {
	bool *f42bb82285; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *ebc3d0e35c; // 0x08(0x08)
	bool *484e24dbc0; // 0x10(0x01)
	bool bOverrideOverlapSolveMethod; // 0x11(0x01)
	enum class EBuffOverlapSolveMethod *5182f537ca; // 0x12(0x01)
	bool bOverrideBuffDuration; // 0x13(0x01)
	float *50634e7083; // 0x14(0x04)
	bool bOverrideInfinite; // 0x18(0x01)
	bool *288bd11aa2; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.ItemTableRowEvent
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowEvent : F*7700dab07d {
};

// ScriptStruct TslGame.*3510f1ac86
// Size: 0x30 (Inherited: 0x00)
struct F*3510f1ac86 {
	int32 BundleId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString BundleName; // 0x08(0x10)
	enum class ELobbyItemBundleType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*f073baf65b> *b93eb0629b; // 0x20(0x10)
};

// ScriptStruct TslGame.*f073baf65b
// Size: 0x28 (Inherited: 0x00)
struct F*f073baf65b {
	struct UClass* *f358677458; // 0x00(0x20)
	int32 BundleId; // 0x20(0x04)
	int32 Quantity; // 0x24(0x04)
};

// ScriptStruct TslGame.ItemTableRowUsedByAction
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowUsedByAction : F*7700dab07d {
};

// ScriptStruct TslGame.*29f553c916
// Size: 0x10 (Inherited: 0x00)
struct F*29f553c916 {
	struct TArray<struct UItemSpotComponent*> *1d5769cf3e; // 0x00(0x10)
};

// ScriptStruct TslGame.*0451fa3308
// Size: 0x50 (Inherited: 0x00)
struct F*0451fa3308 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*4522e8b9a7
// Size: 0x20 (Inherited: 0x08)
struct F*4522e8b9a7 : FTableRowBase {
	struct FName OriginItemID; // 0x08(0x08)
	struct FName SwitchItemID; // 0x10(0x08)
	int32 SwitchItemCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*2330728330
// Size: 0x10 (Inherited: 0x00)
struct F*2330728330 {
	struct FName Name; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*c7118212f6
// Size: 0x08 (Inherited: 0x00)
struct F*c7118212f6 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*0bf6166b42
// Size: 0x20 (Inherited: 0x08)
struct F*0bf6166b42 : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	float CategoryFilterWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*3fa8ad1cf0
// Size: 0x38 (Inherited: 0x08)
struct F*3fa8ad1cf0 : FTableRowBase {
	enum class EItemSpotGroupType SpotGroupType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SpotGroupPercent; // 0x0c(0x04)
	enum class EItemSpotType SpotType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float SpotPercentMin; // 0x14(0x04)
	float SpotPercentMax; // 0x18(0x04)
	int32 ItemsPerSpotMin; // 0x1c(0x04)
	int32 ItemsPerSpotMax; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName ValueFilter; // 0x28(0x08)
	float ValueFilterWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*cdd2d903f1
// Size: 0x5c8 (Inherited: 0x00)
struct F*cdd2d903f1 {
	enum class EItemSpotGroupType SpotGroupType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotGroupPercent; // 0x04(0x04)
	struct TArray<struct F*544b6f8f8f> SpotTypeProperties; // 0x08(0x10)
	char pad_18[0x5b0]; // 0x18(0x5b0)
};

// ScriptStruct TslGame.*544b6f8f8f
// Size: 0x38 (Inherited: 0x00)
struct F*544b6f8f8f {
	enum class EItemSpotType SpotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotPercentMin; // 0x04(0x04)
	float SpotPercentMax; // 0x08(0x04)
	int32 ItemsPerSpotMin; // 0x0c(0x04)
	int32 ItemsPerSpotMax; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*2330728330> WeightsPerValue; // 0x18(0x10)
	struct TArray<struct F*2330728330> WeightsPerCategory; // 0x28(0x10)
};

// ScriptStruct TslGame.*393465a262
// Size: 0xc0 (Inherited: 0x08)
struct F*393465a262 : FTableRowBase {
	struct FString ItemSpawnSubtitleKey; // 0x08(0x10)
	struct UDataTable* SpotGroupDataTable; // 0x18(0x20)
	struct UDataTable* ItemFilterDataTable; // 0x38(0x20)
	struct UDataTable* ItemSpawnDataTable; // 0x58(0x20)
	struct UDataTable* ItemSpawnTogetherDataTable; // 0x78(0x20)
	struct UDataTable* ItemTypeOverrideDataTable; // 0x98(0x20)
	enum class EItemSpawnType ItemSpawnType; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float ItemSpawnRate; // 0xbc(0x04)
};

// ScriptStruct TslGame.*398590dff8
// Size: 0x10 (Inherited: 0x00)
struct F*398590dff8 {
	struct TArray<struct F*cdd2d903f1> RawSpotGroupProperties; // 0x00(0x10)
};

// ScriptStruct TslGame.*8d0844e28f
// Size: 0x18 (Inherited: 0x00)
struct F*8d0844e28f {
	struct FName *ebe97e2081; // 0x00(0x08)
	int32 FirstChildIndex; // 0x08(0x04)
	int32 *dee8d2e68c; // 0x0c(0x04)
	enum class EItemSpotGroupType *b46d2b980f; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*b03ae40985
// Size: 0x10 (Inherited: 0x00)
struct F*b03ae40985 {
	struct FVector Location; // 0x00(0x0c)
	int32 *fd65c5d030; // 0x0c(0x04)
};

// ScriptStruct TslGame.*c6c2ad7ff7
// Size: 0x20 (Inherited: 0x00)
struct F*c6c2ad7ff7 {
	struct FVector *1262b329e5; // 0x00(0x0c)
	struct F*59e081f3af *b96a40f40e; // 0x0c(0x0c)
	uint32 HouseID; // 0x18(0x04)
	enum class EItemSpotType *6d57530970; // 0x1c(0x01)
	bool *4fea3df9ac; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct TslGame.*34104cbfdc
// Size: 0x20 (Inherited: 0x00)
struct F*34104cbfdc {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FName *ebe97e2081; // 0x18(0x08)
};

// ScriptStruct TslGame.*2eb6a112f5
// Size: 0x28 (Inherited: 0x00)
struct F*2eb6a112f5 {
	struct AActor* *8b8d52d121; // 0x00(0x08)
	float *63a52104a0; // 0x08(0x04)
	float *fd1a5fae16; // 0x0c(0x04)
	float *2ea8101649; // 0x10(0x04)
	float *ca86d6641e; // 0x14(0x04)
	struct FVector *de38504064; // 0x18(0x0c)
	float *7608c74f22; // 0x24(0x04)
};

// ScriptStruct TslGame.*62e7d00bb1
// Size: 0x18 (Inherited: 0x00)
struct F*62e7d00bb1 {
	float *8daefa5f4b; // 0x00(0x04)
	float *e8a99d259e; // 0x04(0x04)
	float *7b7928de4a; // 0x08(0x04)
	float *21b04b3dcd; // 0x0c(0x04)
	float *66ca66af38; // 0x10(0x04)
	float *d542674115; // 0x14(0x04)
};

// ScriptStruct TslGame.*0e7abf4a07
// Size: 0xe8 (Inherited: 0x00)
struct F*0e7abf4a07 {
	bool bIgnoreBots; // 0x00(0x01)
	bool bIgnorePillar; // 0x01(0x01)
	bool bIgnoreDBNO; // 0x02(0x01)
	bool bArmed; // 0x03(0x01)
	bool PatrolSafeZoneEdgePhase; // 0x04(0x01)
	bool bIgnorePriorityTargetsAfterPatrolSafeZoneEdgePhase; // 0x05(0x01)
	enum class ECollisionChannel TruckLineOfSightTraceChannel; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float TruckSightRadius; // 0x08(0x04)
	float TruckFieldOfViewHalfAngle; // 0x0c(0x04)
	float TruckHearingRadius; // 0x10(0x04)
	float TruckHearingLosRadius; // 0x14(0x04)
	float TruckSensingInterval; // 0x18(0x04)
	float TruckStopNearTargetMinDistance; // 0x1c(0x04)
	float TruckStopNearTargetMaxDistance; // 0x20(0x04)
	enum class ECollisionChannel *722765ba01; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float MainTurretBlindRadius; // 0x28(0x04)
	float MainTurretSightRadius; // 0x2c(0x04)
	float MainTurretFieldOfView; // 0x30(0x04)
	float MainTurretFiringRange; // 0x34(0x04)
	float MainTurretFiringAngle; // 0x38(0x04)
	float MainTurretSightCheckInterval; // 0x3c(0x04)
	float MainTurretMaxWeaponSpread; // 0x40(0x04)
	float MainTurretMinWeaponSpread; // 0x44(0x04)
	float IncendiaryTriggerRadius; // 0x48(0x04)
	float IncendiaryTargetsCheckInterval; // 0x4c(0x04)
	bool bIncendiariesGenerateSightThreat; // 0x50(0x01)
	bool bIncendiaryPriortityTargetOnlyFireIfInCover; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float IncendiaryPriortityTargetInCoverDelay; // 0x54(0x04)
	float IncendiaryPriorityTargetRange; // 0x58(0x04)
	float IncendiaryPriorityTargetRearCollisionCheckDistance; // 0x5c(0x04)
	float IncendiaryTurretsFiringRange; // 0x60(0x04)
	float IncendiaryTurretsHorizontalFiringAngle; // 0x64(0x04)
	float IncendiaryTurretsVerticalFiringAngle; // 0x68(0x04)
	struct F*62e7d00bb1 DamageThreatConfig; // 0x6c(0x18)
	struct F*62e7d00bb1 SightThreatConfig; // 0x84(0x18)
	struct F*62e7d00bb1 NoiseThreatConfig; // 0x9c(0x18)
	float TimeToKill; // 0xb4(0x04)
	float TimeToKillMinimumTargetDistance; // 0xb8(0x04)
	float TimeToKillMaximumTargetDistance; // 0xbc(0x04)
	float MinimumTargetDistanceTimeToKillGainMultiplier; // 0xc0(0x04)
	float MaximumTargetDistanceTimeToGainKillMultiplier; // 0xc4(0x04)
	float DistanceTimeToKillMultiplierWeight; // 0xc8(0x04)
	float PotentialTargetTimeToKillGainMultiplier; // 0xcc(0x04)
	float PotentialTargetTimeToKillMultiplierWeight; // 0xd0(0x04)
	float ActiveTargetTimeToKillGainMultiplier; // 0xd4(0x04)
	float ActiveTargetTimeToKillMultiplierWeight; // 0xd8(0x04)
	float TimeToKillUpdateInterval; // 0xdc(0x04)
	float TurretCollisionCheckInterval; // 0xe0(0x04)
	float TurretCollisionDisabledSpeed; // 0xe4(0x04)
};

// ScriptStruct TslGame.*260fca8f6f
// Size: 0x28 (Inherited: 0x08)
struct F*260fca8f6f : FTableRowBase {
	enum class ELocationType LocationType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<bool> VisibilityByZoom; // 0x10(0x10)
	float DesiredAlpha; // 0x20(0x04)
	int32 DesiredFontSize; // 0x24(0x04)
};

// ScriptStruct TslGame.*bf06273163
// Size: 0x0c (Inherited: 0x00)
struct F*bf06273163 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*3b7bb1c179
// Size: 0x28 (Inherited: 0x00)
struct F*3b7bb1c179 {
	enum class ELocationType LocationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText LocationName; // 0x08(0x18)
	struct FVector2D Position_MC; // 0x20(0x08)
};

// ScriptStruct TslGame.*86faac14fb
// Size: 0x18 (Inherited: 0x00)
struct F*86faac14fb {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*1ba8dbe1fa
// Size: 0x10 (Inherited: 0x08)
struct F*1ba8dbe1fa : FTableRowBase {
	struct UClass* LobbySceneTravelClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*93d7a49306
// Size: 0x180 (Inherited: 0xe0)
struct F*93d7a49306 : F*30374eaf9e {
	struct TMap<enum class ELobbyCustomizingSlotType, struct F*eccc5a592a> CustomizeLobbyModeScenePivots; // 0xe0(0x50)
	struct TMap<struct FString, struct FVector> AdditionalItemLocationOffset; // 0x130(0x50)
};

// ScriptStruct TslGame.*30374eaf9e
// Size: 0xe0 (Inherited: 0xa0)
struct F*30374eaf9e : F*4a0e51e1fa {
	struct TArray<struct FName> LobbyCharacterPivotTags; // 0xa0(0x10)
	struct TArray<struct F*c5be4aa0f0> LobbyEquipWeaponDatas; // 0xb0(0x10)
	char pad_C0[0x20]; // 0xc0(0x20)
};

// ScriptStruct TslGame.*4a0e51e1fa
// Size: 0xa0 (Inherited: 0x08)
struct F*4a0e51e1fa : FTableRowBase {
	struct FName SceneCameraTag; // 0x08(0x08)
	struct FName SceneLevelName; // 0x10(0x08)
	enum class ELobbyCharacterAnimationType LobbyCharacterAnimationType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TMap<enum class ELobbyCharacterCameraType, struct FName> LobbyCharacterCameras; // 0x20(0x50)
	bool bHideMainLobbyCharacter; // 0x70(0x01)
	bool bHideOtherLobbyCharacter; // 0x71(0x01)
	bool bHideWeaponMasteryObjects; // 0x72(0x01)
	bool bHideSurvivalMasteryObjects; // 0x73(0x01)
	bool bUsingProfileCharacter; // 0x74(0x01)
	enum class *8bc69dbd53 LobbyBlurChangingStates; // 0x75(0x01)
	bool bHideDefaultParticle; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
	struct TArray<struct FName> ShowParticleTags; // 0x78(0x10)
	bool bCachePreviousSceneName; // 0x88(0x01)
	bool bUseOutgameVisibilityValue; // 0x89(0x01)
	bool bCanTargetObjectRotation; // 0x8a(0x01)
	bool bNeedToSpawnOnGround; // 0x8b(0x01)
	bool bShouldSuppressNametag; // 0x8c(0x01)
	bool bApplyPivotRotation; // 0x8d(0x01)
	bool bAsyncLoadingSceneLevel; // 0x8e(0x01)
	bool bAllowToggleZoomCamera; // 0x8f(0x01)
	struct FName ToggleZoomInCameraTag; // 0x90(0x08)
	struct FName ToggleZoomOutCameraTag; // 0x98(0x08)
};

// ScriptStruct TslGame.*c5be4aa0f0
// Size: 0x18 (Inherited: 0x00)
struct F*c5be4aa0f0 {
	struct FName WeaponId; // 0x00(0x08)
	struct TArray<struct FName> WeaponAttachmentIDList; // 0x08(0x10)
};

// ScriptStruct TslGame.*eccc5a592a
// Size: 0x10 (Inherited: 0x00)
struct F*eccc5a592a {
	struct TArray<struct F*cfe6a59e09> CusLobbyScenePivotsDesc; // 0x00(0x10)
};

// ScriptStruct TslGame.*cfe6a59e09
// Size: 0x10 (Inherited: 0x00)
struct F*cfe6a59e09 {
	struct FName CustomizeObjectPivotTag; // 0x00(0x08)
	struct AActor* *d7da8a6cfc; // 0x08(0x08)
};

// ScriptStruct TslGame.*6e499dd1d9
// Size: 0x190 (Inherited: 0xa0)
struct F*6e499dd1d9 : F*4a0e51e1fa {
	struct TMap<enum class EViewModeCategory, struct FName> ViewModePivots; // 0xa0(0x50)
	struct TArray<enum class EViewModeCategory> DisableScaleList; // 0xf0(0x10)
	struct TArray<enum class EViewModeCategory> DisableYAxisList; // 0x100(0x10)
	struct TArray<enum class EViewModeCategory> DisableRotationRollbackList; // 0x110(0x10)
	struct TArray<enum class EViewModeCategory> DisableZoomList; // 0x120(0x10)
	struct TMap<enum class EViewModeCategory, struct F*223b06d07e> TargetObjectRatationRanges; // 0x130(0x50)
	struct FVector2D LoadingSpinnerOffset; // 0x180(0x08)
	bool bAllowZoom; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
};

// ScriptStruct TslGame.*223b06d07e
// Size: 0x10 (Inherited: 0x00)
struct F*223b06d07e {
	struct FFloatInterval PitchRange; // 0x00(0x08)
	struct FFloatInterval RollRange; // 0x08(0x08)
};

// ScriptStruct TslGame.*08007cb94d
// Size: 0x60 (Inherited: 0x08)
struct F*08007cb94d : FTableRowBase {
	struct UAnimSequence* PlayerPose; // 0x08(0x08)
	struct FTransform SurvivalPageTransform; // 0x10(0x30)
	struct FString SurvivalPageScene; // 0x40(0x10)
	struct UClass* PoseAsset; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct TslGame.*79eb8e84e8
// Size: 0x20 (Inherited: 0x00)
struct F*79eb8e84e8 {
	struct TArray<struct ATslArenaPlayerStart*> PlayerStart; // 0x00(0x10)
	struct ATslArenaPlayerStart* *fe7eed2190; // 0x10(0x08)
	struct ATslArenaPlayerStart* *0d85117b2d; // 0x18(0x08)
};

// ScriptStruct TslGame.*3c6ba7e91d
// Size: 0x20 (Inherited: 0x00)
struct F*3c6ba7e91d {
	struct TArray<struct FLinearColor> Vectors; // 0x00(0x10)
	struct TArray<struct UTexture*> Textures; // 0x10(0x10)
};

// ScriptStruct TslGame.*1829a0736d
// Size: 0x18 (Inherited: 0x00)
struct F*1829a0736d {
	struct FName Name; // 0x00(0x08)
	enum class EMaterialParameterType Type; // 0x08(0x01)
	bool *4285c74ccc; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 *dfacca940c; // 0x0c(0x04)
	enum class EParameterLUTChannel *4297b53ae1; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*8ee0b65f54
// Size: 0x70 (Inherited: 0x08)
struct F*8ee0b65f54 : FTableRowBase {
	int32 SeqID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString BlueZoneSubtitleKey; // 0x10(0x10)
	struct FString BlueZoneDescription; // 0x20(0x10)
	int32 PhaseNumber; // 0x30(0x04)
	int32 StartDelay; // 0x34(0x04)
	int32 WarningDuration; // 0x38(0x04)
	int32 ReleaseDuration; // 0x3c(0x04)
	float RadiusRate; // 0x40(0x04)
	float RandomRadiusRate; // 0x44(0x04)
	float BlueZoneDPS; // 0x48(0x04)
	float SpreadRatio; // 0x4c(0x04)
	float DamageMagnifierForDistance; // 0x50(0x04)
	float DamageMagnifier; // 0x54(0x04)
	int32 CircleAlgorithm; // 0x58(0x04)
	float LandRatio; // 0x5c(0x04)
	int32 FastPlayerCount; // 0x60(0x04)
	float FastReleaseDuration; // 0x64(0x04)
	float FastWarningDuration; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct TslGame.*e1c62607c4
// Size: 0x14 (Inherited: 0x00)
struct F*e1c62607c4 {
	bool *900eb351ba; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct UPrimitiveComponent* *4a7ce55008; // 0x04(0x08)
	uint16 *0414abf415; // 0x0c(0x02)
	uint16 InstanceIndex; // 0x0e(0x02)
	bool *aef5e5d8b7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*6edb8ed74e
// Size: 0x18 (Inherited: 0x00)
struct F*6edb8ed74e {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ATslCharacter* Instigator; // 0x10(0x08)
};

// ScriptStruct TslGame.*bd8328d7a5
// Size: 0x10 (Inherited: 0x00)
struct F*bd8328d7a5 {
	struct TArray<struct F*1899512700> TeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*1899512700
// Size: 0x38 (Inherited: 0x00)
struct F*1899512700 {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	struct FString TeamName; // 0x08(0x10)
	struct TArray<struct F*2ecdb09e12> PlayersInfo; // 0x18(0x10)
	struct TArray<bool> RoundHistory; // 0x28(0x10)
};

// ScriptStruct TslGame.*2ecdb09e12
// Size: 0x30 (Inherited: 0x14)
struct F*2ecdb09e12 : F*906a7319a1 {
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
	enum class EOutGamePlatformProvider PlatformProvider; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*9eb11604d6
// Size: 0x10 (Inherited: 0x00)
struct F*9eb11604d6 {
	struct TArray<struct F*61d97d6d84> StaticTeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*61d97d6d84
// Size: 0x28 (Inherited: 0x00)
struct F*61d97d6d84 {
	int32 TeamId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TeamName; // 0x08(0x10)
	struct TArray<struct F*e50538ef13> StaticPlayersInfo; // 0x18(0x10)
};

// ScriptStruct TslGame.*e50538ef13
// Size: 0x18 (Inherited: 0x00)
struct F*e50538ef13 {
	struct FString Name; // 0x00(0x10)
	int32 MemberIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*0ce50c9fbf
// Size: 0x3c (Inherited: 0x00)
struct F*0ce50c9fbf {
	struct FVector LerpSafetyZonePosition; // 0x00(0x0c)
	float LerpSafetyZoneRadius; // 0x0c(0x04)
	struct FVector LerpBlueZonePosition; // 0x10(0x0c)
	float LerpBlueZoneRadius; // 0x1c(0x04)
	float *3dc985323e; // 0x20(0x04)
	float BlueZoneBeginRadius; // 0x24(0x04)
	struct FVector BlueZoneBeginPosition; // 0x28(0x0c)
	float ElapsedBlueZoneReleaseDuration; // 0x34(0x04)
	float ElapsedWarningDurationForClient; // 0x38(0x04)
};

// ScriptStruct TslGame.*8af3481035
// Size: 0x18 (Inherited: 0x00)
struct F*8af3481035 {
	int32 CurrentStage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*1dcd4fa6ab> BlueZoneStatusDataArray; // 0x08(0x10)
};

// ScriptStruct TslGame.*1dcd4fa6ab
// Size: 0x68 (Inherited: 0x00)
struct F*1dcd4fa6ab {
	struct FVector SafetyZonePosition; // 0x00(0x0c)
	float SafetyZoneRadius; // 0x0c(0x04)
	struct FVector BlueZonePosition; // 0x10(0x0c)
	float BluezoneRadius; // 0x1c(0x04)
	struct FVector SafetyZoneBeginPosition; // 0x20(0x0c)
	float SafetyZoneBeginRadius; // 0x2c(0x04)
	struct FVector2D LastCirclePosition; // 0x30(0x08)
	bool bIsShrinking; // 0x38(0x01)
	bool bHasBlueZone; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32 *88d5d1401f; // 0x3c(0x04)
	struct FVector SafetyZoneInitialPosition; // 0x40(0x0c)
	float SafetyZoneInitialRadius; // 0x4c(0x04)
	int32 *c5c5469d12; // 0x50(0x04)
	float *296efd366e; // 0x54(0x04)
	float *adbf009322; // 0x58(0x04)
	float *e9b1c32fe0; // 0x5c(0x04)
	float *5294e95470; // 0x60(0x04)
	bool bIsBlueZoneRelease; // 0x64(0x01)
	bool bIsInBattle; // 0x65(0x01)
	bool bIsWorkingBlueZone; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
};

// ScriptStruct TslGame.*b15a643cb4
// Size: 0x48 (Inherited: 0x00)
struct F*b15a643cb4 {
	int32 *2ea8cc45ad; // 0x00(0x04)
	int32 *293099a8c5; // 0x04(0x04)
	struct TArray<int32> *585a88d819; // 0x08(0x10)
	int32 *e4dbe2febc; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32> *a1c7b5e4dd; // 0x20(0x10)
	int32 *809a273d50; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<int32> *6ffea8dddb; // 0x38(0x10)
};

// ScriptStruct TslGame.*006697635a
// Size: 0x08 (Inherited: 0x00)
struct F*006697635a {
	float *8a92023e27; // 0x00(0x04)
	bool *a33d6674de; // 0x04(0x01)
	bool *5040947550; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGame.*5b15d4c670
// Size: 0x10 (Inherited: 0x00)
struct F*5b15d4c670 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*f8ff674e85
// Size: 0x10 (Inherited: 0x00)
struct F*f8ff674e85 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*118b40dac3
// Size: 0x10 (Inherited: 0x00)
struct F*118b40dac3 {
	struct TArray<struct F*1fd6f1745f> *5042b2d78e; // 0x00(0x10)
};

// ScriptStruct TslGame.*1fd6f1745f
// Size: 0x1c (Inherited: 0x00)
struct F*1fd6f1745f {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*fa0e349c58
// Size: 0x18 (Inherited: 0x08)
struct F*fa0e349c58 : FTableRowBase {
	struct TArray<struct F*41d4294e8c> Items; // 0x08(0x10)
};

// ScriptStruct TslGame.*41d4294e8c
// Size: 0x10 (Inherited: 0x00)
struct F*41d4294e8c {
	struct F*1b4ab4ebac ItemClass; // 0x00(0x08)
	int32 Quantity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*228eb74429
// Size: 0x1c (Inherited: 0x00)
struct F*228eb74429 {
	struct FVector *4a2bdf5731; // 0x00(0x0c)
	struct FVector *5af9912abe; // 0x0c(0x0c)
	float Speed; // 0x18(0x04)
};

// ScriptStruct TslGame.*24afc53dc5
// Size: 0x10 (Inherited: 0x00)
struct F*24afc53dc5 {
	struct FName *88c14ff19e; // 0x00(0x08)
	float *19f3e239cb; // 0x08(0x04)
	bool *6bf2888445; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*0c4972a187
// Size: 0x90 (Inherited: 0x00)
struct F*0c4972a187 {
	struct F*82d0248a25 *82d0248a25; // 0x00(0x88)
	float *0cb3e5dd3e; // 0x88(0x04)
	int32 *6880130f1d; // 0x8c(0x04)
};

// ScriptStruct TslGame.*82d0248a25
// Size: 0x88 (Inherited: 0x00)
struct F*82d0248a25 {
	struct TArray<struct UAnimSequenceBase*> *e0da4da63d; // 0x00(0x10)
	struct FAlphaBlend *f0cd8bf840; // 0x10(0x38)
	struct FAlphaBlend *2c0e4747fd; // 0x48(0x38)
	float PlayRate; // 0x80(0x04)
	enum class ECustomAnimSlotType *2c63cfd87e; // 0x84(0x01)
	bool *07540cc415; // 0x85(0x01)
	bool *357d2a6455; // 0x86(0x01)
	bool bLooping; // 0x87(0x01)
};

// ScriptStruct TslGame.*9f107b9b0c
// Size: 0x20 (Inherited: 0x00)
struct F*9f107b9b0c {
	float *5f26cf3cdf; // 0x00(0x04)
	int32 *37f221758f; // 0x04(0x04)
	int32 *7116ed8fc8; // 0x08(0x04)
	int32 *2055734e88; // 0x0c(0x04)
	int32 *807918c0f4; // 0x10(0x04)
	int32 *3bf60e1e1b; // 0x14(0x04)
	int32 *f6ba40870a; // 0x18(0x04)
	float *72b7481c63; // 0x1c(0x04)
};

// ScriptStruct TslGame.*c1ec6e0097
// Size: 0x18 (Inherited: 0x00)
struct F*c1ec6e0097 {
	int32 Score; // 0x00(0x04)
	bool bIsVisible; // 0x04(0x01)
	bool *7517586997; // 0x05(0x01)
	bool *06eaf1583d; // 0x06(0x01)
	bool *637b1b7476; // 0x07(0x01)
	float *dc5b219cb7; // 0x08(0x04)
	float *d111d492a4; // 0x0c(0x04)
	struct AActor* Target; // 0x10(0x08)
};

// ScriptStruct TslGame.*2b46af8cd5
// Size: 0x40 (Inherited: 0x00)
struct F*2b46af8cd5 {
	struct FVector RelativeLocation; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct UClass* *8d27418580; // 0x10(0x08)
	float *7b143ea52d; // 0x18(0x04)
	float *e48b06de16; // 0x1c(0x04)
	float *e509ea0443; // 0x20(0x04)
	float *58c30647f0; // 0x24(0x04)
	float *a8c66d2e4c; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UCurveFloat* *f99651afcc; // 0x30(0x08)
	enum class ENpcWalkingSpeedType *6aa6c6ebd8; // 0x38(0x01)
	bool *22dffab636; // 0x39(0x01)
	bool *b297faec18; // 0x3a(0x01)
	bool *307555467b; // 0x3b(0x01)
	float *e6d27a8988; // 0x3c(0x04)
};

// ScriptStruct TslGame.*dc7f75102d
// Size: 0x18 (Inherited: 0x00)
struct F*dc7f75102d {
	float *d7e049cda4; // 0x00(0x04)
	int32 *d9deb5f0bc; // 0x04(0x04)
	struct TArray<struct F*a7872bb305> *8734dfb4a0; // 0x08(0x10)
};

// ScriptStruct TslGame.*a7872bb305
// Size: 0x1c (Inherited: 0x00)
struct F*a7872bb305 {
	int32 *e6d38985c0; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
};

// ScriptStruct TslGame.*c15859cebb
// Size: 0x2c (Inherited: 0x00)
struct F*c15859cebb {
	int32 *e6d38985c0; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	int32 Count; // 0x1c(0x04)
	struct UObject* Instigator; // 0x20(0x08)
	bool *1a25dddf86; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct TslGame.*7498a8cd47
// Size: 0x30 (Inherited: 0x00)
struct F*7498a8cd47 {
	struct UClass* Pawn; // 0x00(0x08)
	struct UClass* Controller; // 0x08(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x10(0x08)
	struct TArray<struct F*ed4a1387fb> *93dfd4ae0b; // 0x18(0x10)
	bool *632b549fb7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*ed4a1387fb
// Size: 0x20 (Inherited: 0x00)
struct F*ed4a1387fb {
	struct TArray<struct UClass*> *888491f1ee; // 0x00(0x10)
	struct TArray<struct FName> *c8463f7c6e; // 0x10(0x10)
};

// ScriptStruct TslGame.*1dced6fd26
// Size: 0x40 (Inherited: 0x00)
struct F*1dced6fd26 {
	struct TArray<enum class EOneOnOneResultType> Scores; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	enum class EOutGamePlatformProvider TargetPlatform; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 TeamId; // 0x24(0x04)
	int32 *c133d9e8fa; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString AccountId; // 0x30(0x10)
};

// ScriptStruct TslGame.*95d14253b9
// Size: 0x170 (Inherited: 0x00)
struct F*95d14253b9 {
	float *dbcea8ab54; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<enum class EOneOnOneRoomState, int32> *bc875b7577; // 0x08(0x50)
	bool *da864ac6bb; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 *89cfb7aa7f; // 0x5c(0x04)
	int32 *5dcbe0c430; // 0x60(0x04)
	float *c9f7b37023; // 0x64(0x04)
	enum class EOneOnOneInvenRecoverType *11697e32f4; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FName> *31a44d1f50; // 0x70(0x10)
	struct TArray<struct FName> *5f76105aa6; // 0x80(0x10)
	struct TMap<enum class EAccessorySlot, struct FName> *535c5d4bfd; // 0x90(0x50)
	struct TArray<struct FName> *cb997b5349; // 0xe0(0x10)
	struct TArray<struct FName> *617f78eabf; // 0xf0(0x10)
	struct TArray<struct FName> *2150e9d4c1; // 0x100(0x10)
	struct TArray<struct FName> *3461ae8686; // 0x110(0x10)
	struct TMap<struct FName, int32> *b424139385; // 0x120(0x50)
};

// ScriptStruct TslGame.*ef801ccab3
// Size: 0x03 (Inherited: 0x00)
struct F*ef801ccab3 {
	enum class EOneOnOneTicketState *59acc54cb2; // 0x00(0x01)
	enum class EOneOnOneStageType *0b99ad86ce; // 0x01(0x01)
	enum class EOneOnOneSideType *9344dc0d59; // 0x02(0x01)
};

// ScriptStruct TslGame.*1eef37d14a
// Size: 0x70 (Inherited: 0x08)
struct F*1eef37d14a : FTableRowBase {
	struct FText *14911c8078; // 0x08(0x18)
	struct TMap<enum class EOneOnOneMessageType, struct FText> *c1fe3f50a3; // 0x20(0x50)
};

// ScriptStruct TslGame.*2f0a8e6101
// Size: 0x30 (Inherited: 0x00)
struct F*2f0a8e6101 {
	struct FName *ebe97e2081; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	int32 *fd65c5d030; // 0x20(0x04)
	int32 *dd74b6648d; // 0x24(0x04)
	int32 *337921acca; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*d739c8b8db
// Size: 0x10 (Inherited: 0x00)
struct F*d739c8b8db {
	struct UParticleSystem* Template; // 0x00(0x08)
	float *30e08dfd38; // 0x08(0x04)
	float *28027f28c3; // 0x0c(0x04)
};

// ScriptStruct TslGame.*4902357367
// Size: 0x14 (Inherited: 0x00)
struct F*4902357367 {
	float PillarGruntStartHealth; // 0x00(0x04)
	float PillarBossStartHealth; // 0x04(0x04)
	float PatrolAlarmDuration; // 0x08(0x04)
	float *33c9b085de; // 0x0c(0x04)
	float *0c0fab2724; // 0x10(0x04)
};

// ScriptStruct TslGame.*9c1c158002
// Size: 0x03 (Inherited: 0x00)
struct F*9c1c158002 {
	enum class *ab4b24770e X; // 0x00(0x01)
	enum class *ab4b24770e Y; // 0x01(0x01)
	enum class *ab4b24770e Z; // 0x02(0x01)
};

// ScriptStruct TslGame.*f29a93afe5
// Size: 0x40 (Inherited: 0x00)
struct F*f29a93afe5 {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	enum class *59f7d9b73d ForwardAxis; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector LocalOffset; // 0x1c(0x0c)
	float Length; // 0x28(0x04)
	struct FVector2D RotationRange; // 0x2c(0x08)
	float Scale; // 0x34(0x04)
	bool bScaleXYZ; // 0x38(0x01)
	bool bFlip; // 0x39(0x01)
	bool bOffsetShiftWithScale; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct TslGame.*82e192ff24
// Size: 0x08 (Inherited: 0x00)
struct F*82e192ff24 {
	struct UClass* *f2727000f0; // 0x00(0x08)
};

// ScriptStruct TslGame.*b128018740
// Size: 0xb0 (Inherited: 0x00)
struct F*b128018740 {
	struct UClass* *f2727000f0; // 0x00(0x08)
	bool *0e846bfef0; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *43a67a297e; // 0x10(0x08)
	struct UClass* *fb9df66f1e; // 0x18(0x08)
	struct UClass* Ring; // 0x20(0x08)
	struct FName *3caa366a09; // 0x28(0x08)
	enum class EProjectileExplosionStartType *1c6f84309a; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ExplosionDelay; // 0x34(0x04)
	bool *fb64f5244c; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *76111923cf; // 0x3c(0x04)
	float FireDelay; // 0x40(0x04)
	float *dcdf422218; // 0x44(0x04)
	struct F*dcf1a6abbf *91b92d29fc; // 0x48(0x18)
	struct F*dcf1a6abbf *847eb5c362; // 0x60(0x18)
	struct F*dcf1a6abbf *a6ff4a60ad; // 0x78(0x18)
	struct UCurveFloat* *87f2dc67e8; // 0x90(0x08)
	struct UCurveFloat* *d0d6715649; // 0x98(0x08)
	float *c4d975e27c; // 0xa0(0x04)
	float *ccdcb766a6; // 0xa4(0x04)
	bool *b9cd0b5c17; // 0xa8(0x01)
	bool *0e538de482; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
};

// ScriptStruct TslGame.*dcf1a6abbf
// Size: 0x18 (Inherited: 0x00)
struct F*dcf1a6abbf {
	struct UAnimMontage* PinOff; // 0x00(0x08)
	struct UAnimMontage* Cooking; // 0x08(0x08)
	struct UAnimMontage* Release; // 0x10(0x08)
};

// ScriptStruct TslGame.*099f865041
// Size: 0xe8 (Inherited: 0x00)
struct F*099f865041 {
	float *86bcb5e591; // 0x00(0x04)
	float *ecf367fb1b; // 0x04(0x04)
	int32 *7777d340c6; // 0x08(0x04)
	float *4756e88553; // 0x0c(0x04)
	float *4f5aa1c519; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* *a056c64c90; // 0x18(0x08)
	struct UCurveFloat* *ead9a4c37b; // 0x20(0x08)
	float *dad15606b7; // 0x28(0x04)
	float *cca689dab2; // 0x2c(0x04)
	struct UClass* *271a14efcc; // 0x30(0x08)
	int32 *09e6b31fea; // 0x38(0x04)
	float *206e102b03; // 0x3c(0x04)
	float *440da8ec73; // 0x40(0x04)
	float *dca28bfb37; // 0x44(0x04)
	char *77174dd7e2 : 1; // 0x48(0x01)
	char *ae4593b25b : 1; // 0x48(0x01)
	char *f1ef7cc4de : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<enum class EDamageTypeCategory> *5bda1dae14; // 0x50(0x10)
	struct TArray<enum class EDamageTypeCategory> *849137db84; // 0x60(0x10)
	bool *309e59db94; // 0x70(0x01)
	bool *ef916fcc31; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct TArray<enum class EPhysicalSurface> *1bf23300ec; // 0x78(0x10)
	struct TArray<struct UClass*> *39f3641921; // 0x88(0x10)
	bool *9beef6e393; // 0x98(0x01)
	bool *820c778ab2; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float *170f36f52a; // 0x9c(0x04)
	float *ea3ad3780e; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UTexture* DamageCauserIcon; // 0xa8(0x08)
	float DamageIconRatio; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FText DamageCauserItemName; // 0xb8(0x18)
	enum class EWeaponClass DamageCauserClass; // 0xd0(0x01)
	bool *9281ecb1ef; // 0xd1(0x01)
	bool *2e7aadf795; // 0xd2(0x01)
	bool *04044114ee; // 0xd3(0x01)
	float *7da9c76fc8; // 0xd4(0x04)
	struct UCurveFloat* *9b4c6ae6fb; // 0xd8(0x08)
	struct UClass* *1fafa61a1b; // 0xe0(0x08)
};

// ScriptStruct TslGame.*7acbcd5b5c
// Size: 0x08 (Inherited: 0x00)
struct F*7acbcd5b5c {
	float *4346e2f3a2; // 0x00(0x04)
	float *040318b0ba; // 0x04(0x04)
};

// ScriptStruct TslGame.*f94e54e1a7
// Size: 0x18 (Inherited: 0x00)
struct F*f94e54e1a7 {
	struct FVector2D *36a58d728a; // 0x00(0x08)
	float *82fea6d2e4; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *370b6bf137; // 0x10(0x08)
};

// ScriptStruct TslGame.*ae1ca7d8cb
// Size: 0xa8 (Inherited: 0x00)
struct F*ae1ca7d8cb {
	struct TMap<enum class EWeaponClass, struct FVector2D> *30982bdbb3; // 0x00(0x50)
	bool *cbebb4335d; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<int32, struct FVector2D> *93b4ad29de; // 0x58(0x50)
};

// ScriptStruct TslGame.*2175290516
// Size: 0xf0 (Inherited: 0x00)
struct F*2175290516 {
	struct FText *2c83a50d47; // 0x00(0x18)
	struct FText *61642e53f3; // 0x18(0x18)
	struct FText *f12a14c96f; // 0x30(0x18)
	struct FText *4acf296429; // 0x48(0x18)
	struct FText *8d8ff23742; // 0x60(0x18)
	struct FText *5448e6d964; // 0x78(0x18)
	struct FText *f9fd30a6de; // 0x90(0x18)
	struct FText *5f323d21d5; // 0xa8(0x18)
	struct FText *282b4b2b69; // 0xc0(0x18)
	struct FText *018b4ef2c2; // 0xd8(0x18)
};

// ScriptStruct TslGame.*e7f2dc64a8
// Size: 0x10 (Inherited: 0x00)
struct F*e7f2dc64a8 {
	bool bUseConstReduction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *18673e40d6; // 0x04(0x04)
	bool bUseScalarReduction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *b78c442138; // 0x0c(0x04)
};

// ScriptStruct TslGame.*734d6c13ce
// Size: 0x18 (Inherited: 0x00)
struct F*734d6c13ce {
	struct UAnimMontage* *613b0feb89; // 0x00(0x08)
	struct UAnimMontage* *f1f2ae9672; // 0x08(0x08)
	float *a488f08f6e; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*8500693958
// Size: 0x28 (Inherited: 0x00)
struct F*8500693958 {
	char pad_0[0x1]; // 0x00(0x01)
	enum class EVehicleEngineState ServerState; // 0x01(0x01)
	char pad_2[0xa]; // 0x02(0x0a)
	bool *d0213e91f2; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *8a1131c870; // 0x10(0x04)
	float *5b097fa74b; // 0x14(0x04)
	float *98473a4f05; // 0x18(0x04)
	float StartTime; // 0x1c(0x04)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*9bf5b45a62
// Size: 0x18 (Inherited: 0x00)
struct F*9bf5b45a62 {
	float *ada1f51665; // 0x00(0x04)
	float *9bec5e3f1f; // 0x04(0x04)
	struct UCurveFloat* *5859a65657; // 0x08(0x08)
	bool *9e04ad6a44; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*375c7c7236
// Size: 0x10 (Inherited: 0x00)
struct F*375c7c7236 {
	float *c7e363aeb1; // 0x00(0x04)
	float *9f7fe5fcb4; // 0x04(0x04)
	float *05ec118cf1; // 0x08(0x04)
	float *c0b90c5d01; // 0x0c(0x04)
};

// ScriptStruct TslGame.*3deecf7864
// Size: 0x50 (Inherited: 0x00)
struct F*3deecf7864 {
	struct TMap<struct UClass*, struct F*ead416f836> *5fd061c5a4; // 0x00(0x50)
};

// ScriptStruct TslGame.*ead416f836
// Size: 0x10 (Inherited: 0x00)
struct F*ead416f836 {
	struct TArray<struct ATslParticle*> *b2825f635a; // 0x00(0x10)
};

// ScriptStruct TslGame.*72174e0110
// Size: 0x18 (Inherited: 0x00)
struct F*72174e0110 {
	int32 *aa54566114; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*4bbb30343f> *ed2151afc1; // 0x08(0x10)
};

// ScriptStruct TslGame.*8a617ad513
// Size: 0x80 (Inherited: 0x00)
struct F*8a617ad513 {
	bool *f334929556; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InWaterAlpha; // 0x04(0x04)
	float PropulsionAlpha; // 0x08(0x04)
	float *75eecc5e23; // 0x0c(0x04)
	struct FVector *8f57b9e816; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FName *467ea961c2; // 0x20(0x08)
	float *a80c03a2f6; // 0x28(0x04)
	struct FVector *b3ce0e7c92; // 0x2c(0x0c)
	float PropulsionForceScale; // 0x38(0x04)
	float *ddb497493e; // 0x3c(0x04)
	struct FVector *6f1450a3fe; // 0x40(0x0c)
	float *cc6f0fff9b; // 0x4c(0x04)
	float *800ba48d00; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
	struct FVector4 *bcab5250eb; // 0x60(0x10)
	bool *0c8151ad87; // 0x70(0x01)
	bool IsInWaterGearLock; // 0x71(0x01)
	bool *8dbb2a2230; // 0x72(0x01)
	char pad_73[0xd]; // 0x73(0x0d)
};

// ScriptStruct TslGame.*66b6fda98a
// Size: 0x40 (Inherited: 0x00)
struct F*66b6fda98a {
	bool *7a786df607; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FVector4 *d352002d81; // 0x10(0x10)
	struct FVector2D *ea3fff0da4; // 0x20(0x08)
	struct FVector2D *c0044fa874; // 0x28(0x08)
	struct FVector2D *6eb3bea8ae; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*84283e959e
// Size: 0x28 (Inherited: 0x00)
struct F*84283e959e {
	bool bUseVelocityTransmission; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *37bae40ae2; // 0x04(0x04)
	bool *710a10b331; // 0x08(0x01)
	bool *5f840a4b5f; // 0x09(0x01)
	bool *e388433e3f; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float *529adbf6b2; // 0x0c(0x04)
	struct TArray<struct F*69bba8e6db> *92887d1550; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*69bba8e6db
// Size: 0x08 (Inherited: 0x00)
struct F*69bba8e6db {
	float *03c17e1cd7; // 0x00(0x04)
	float *d1caa4c49a; // 0x04(0x04)
};

// ScriptStruct TslGame.*e282e7b5e7
// Size: 0x06 (Inherited: 0x00)
struct F*e282e7b5e7 {
	char pad_0[0x6]; // 0x00(0x06)
};

// ScriptStruct TslGame.*0685934fee
// Size: 0x58 (Inherited: 0x00)
struct F*0685934fee {
	struct UPrimitiveComponent* *5a49009812; // 0x00(0x08)
	bool *ccadfd6c5b; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector *45bcd7b158; // 0x0c(0x0c)
	struct FRotator *909715ea16; // 0x18(0x0c)
	struct FRepMovement RepMovement; // 0x24(0x34)
};

// ScriptStruct TslGame.*b776b837d7
// Size: 0x40 (Inherited: 0x00)
struct F*b776b837d7 {
	struct FVector2D *a89730066e; // 0x00(0x08)
	struct FVector2D *b9d2da46dd; // 0x08(0x08)
	struct FVector2D *eec49ca3ef; // 0x10(0x08)
	struct FVector2D *c91e187b97; // 0x18(0x08)
	struct FVector2D *9f5f5b8460; // 0x20(0x08)
	struct FVector2D *de42505f19; // 0x28(0x08)
	struct FVector *f9fbe15ad8; // 0x30(0x0c)
	float *c1ba052558; // 0x3c(0x04)
};

// ScriptStruct TslGame.*573f9993cf
// Size: 0x94 (Inherited: 0x00)
struct F*573f9993cf {
	float *a99a1d2b69; // 0x00(0x04)
	float *0692b5cef8; // 0x04(0x04)
	float *81f0e612e6; // 0x08(0x04)
	float *9980d77039; // 0x0c(0x04)
	struct FVector2D *709471ce3d; // 0x10(0x08)
	struct FVector2D *a77d156484; // 0x18(0x08)
	struct FVector2D *12350f7445; // 0x20(0x08)
	struct FVector2D *3a1a40d276; // 0x28(0x08)
	struct FVector2D *1498e7133c; // 0x30(0x08)
	struct FVector2D *fa66a0f0ba; // 0x38(0x08)
	struct FVector2D *d90ee3f891; // 0x40(0x08)
	struct FVector2D *015e7bb8f9; // 0x48(0x08)
	struct FVector2D *85193ddfeb; // 0x50(0x08)
	struct FVector2D *4d2c803089; // 0x58(0x08)
	struct FVector2D *9a3f27d88a; // 0x60(0x08)
	struct FVector2D *649b1c1a13; // 0x68(0x08)
	struct FVector2D *bb3a7f9f85; // 0x70(0x08)
	struct FVector2D *4ab515b1c8; // 0x78(0x08)
	float *c5cd624dd5; // 0x80(0x04)
	float *fcf597f375; // 0x84(0x04)
	float *965a594407; // 0x88(0x04)
	float *aeaf20e245; // 0x8c(0x04)
	float *d1bb1fd732; // 0x90(0x04)
};

// ScriptStruct TslGame.*88e6f7b4b6
// Size: 0x0c (Inherited: 0x00)
struct F*88e6f7b4b6 {
	float Timeout; // 0x00(0x04)
	float Chance; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct TslGame.*9ca9053c55
// Size: 0x10 (Inherited: 0x00)
struct F*9ca9053c55 {
	float *8c3b01fa94; // 0x00(0x04)
	float *c05777a2d9; // 0x04(0x04)
	float *e494b10543; // 0x08(0x04)
	float *adf8e2f76b; // 0x0c(0x04)
};

// ScriptStruct TslGame.*9d2c28f46a
// Size: 0x60 (Inherited: 0x00)
struct F*9d2c28f46a {
	struct UAkAudioEvent* *218649abba; // 0x00(0x08)
	struct UAkAudioEvent* *d001ed267d; // 0x08(0x08)
	struct UAkAudioEvent* *5ab6d004bf; // 0x10(0x08)
	struct UAkAudioEvent* *0203458254; // 0x18(0x08)
	struct UAkAudioEvent* *5210d38b4c; // 0x20(0x08)
	struct UAkAudioEvent* *c9529c6607; // 0x28(0x08)
	struct UAkAudioEvent* *87e500754c; // 0x30(0x08)
	struct UAkAudioEvent* *137dd20fcc; // 0x38(0x08)
	struct UAkAudioEvent* *987fde78db; // 0x40(0x08)
	struct UAkAudioEvent* *f57568c317; // 0x48(0x08)
	struct UAkAudioEvent* *b1ff910e59; // 0x50(0x08)
	struct UAkAudioEvent* *f21d3b3389; // 0x58(0x08)
};

// ScriptStruct TslGame.*18ea9545d1
// Size: 0x44 (Inherited: 0x00)
struct F*18ea9545d1 {
	float SpotlightTargetLostInterval; // 0x00(0x04)
	float SpotlightTargetBroadcastDelay; // 0x04(0x04)
	struct FRotator SpotlightNeutralRotation; // 0x08(0x0c)
	float PatrolCooldown; // 0x14(0x04)
	float AlarmCooldown; // 0x18(0x04)
	int32 PatrolSafeZoneEdgePhase; // 0x1c(0x04)
	int32 IgnoreAlarmPhase; // 0x20(0x04)
	float MinBZPatrolRadiusScale; // 0x24(0x04)
	float MaxBZPatrolRadiusScale; // 0x28(0x04)
	bool bIgnoreBots; // 0x2c(0x01)
	bool bIgnorePillar; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float *5e1b51ffa6; // 0x30(0x04)
	float *f60592ebb0; // 0x34(0x04)
	float *fbac1df5ce; // 0x38(0x04)
	float *13a4728c26; // 0x3c(0x04)
	float *ffd328a288; // 0x40(0x04)
};

// ScriptStruct TslGame.*07572c782d
// Size: 0x18 (Inherited: 0x00)
struct F*07572c782d {
	int32 MaterialIndex; // 0x00(0x04)
	float delayTime; // 0x04(0x04)
	float *54b4219f5a; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*b1b8a15e7f
// Size: 0x10 (Inherited: 0x00)
struct F*b1b8a15e7f {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*6ac53d8b7a
// Size: 0x70 (Inherited: 0x60)
struct F*6ac53d8b7a : F*fbc1b8b5d4 {
	struct TArray<struct UObject*> *c159a83f8d; // 0x60(0x10)
};

// ScriptStruct TslGame.*fbc1b8b5d4
// Size: 0x60 (Inherited: 0x00)
struct F*fbc1b8b5d4 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*cc6dd69492
// Size: 0x80 (Inherited: 0x60)
struct F*cc6dd69492 : F*fbc1b8b5d4 {
	struct UObject* *f62523a7de; // 0x60(0x20)
};

// ScriptStruct TslGame.*50ff1a46c0
// Size: 0x10 (Inherited: 0x00)
struct F*50ff1a46c0 {
	struct UClass* *423a5e3022; // 0x00(0x08)
	bool *5672cf136f; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*7b526f513e
// Size: 0x18 (Inherited: 0x00)
struct F*7b526f513e {
	bool bLoadableEquipSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*a753fa1094> LoadableEquipSlotInfos; // 0x08(0x10)
};

// ScriptStruct TslGame.*a753fa1094
// Size: 0x08 (Inherited: 0x00)
struct F*a753fa1094 {
	float ApplySpaceRate; // 0x00(0x04)
	enum class EEquipSlotID LoadableEquipSlotID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*1b3838729a
// Size: 0x30 (Inherited: 0x00)
struct F*1b3838729a {
	enum class EThingSpotGroupType GroupType; // 0x00(0x01)
	bool bActiveByStartVolume; // 0x01(0x01)
	enum class EThingGroupSpawnType SpawnType; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FName TargetSpotTag; // 0x08(0x08)
	struct FFloatRange TotalCountRange; // 0x10(0x10)
	float TotalCountMultiplierWithPlayerCount; // 0x20(0x04)
	float ProbabilityPercent; // 0x24(0x04)
	float ProbabilityPercentMultiplierWithPlayerCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*b666a5ad12
// Size: 0x48 (Inherited: 0x30)
struct F*b666a5ad12 : F*1b3838729a {
	struct UClass* ItemPackageClass; // 0x30(0x08)
	struct TArray<struct F*3f41d9d07b> PackageSpawnProbArray; // 0x38(0x10)
};

// ScriptStruct TslGame.*3f41d9d07b
// Size: 0x18 (Inherited: 0x00)
struct F*3f41d9d07b {
	float ProbabilityPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
};

// ScriptStruct TslGame.*869261db04
// Size: 0x38 (Inherited: 0x08)
struct F*869261db04 : FTableRowBase {
	struct FName SubCategoryFilter; // 0x08(0x08)
	struct UClass* Vehicle; // 0x10(0x20)
	float SubCategoryFilterWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*dcee955d3d
// Size: 0x20 (Inherited: 0x08)
struct F*dcee955d3d : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	struct FName SubCategoryFilter; // 0x10(0x08)
	float CategoryFilterWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a7f3441218
// Size: 0x28 (Inherited: 0x08)
struct F*a7f3441218 : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	float CategoryFilterWeight; // 0x10(0x04)
	int32 MinTotalCountRange; // 0x14(0x04)
	int32 MaxTotalCountRange; // 0x18(0x04)
	float MinFuelPercentRange; // 0x1c(0x04)
	float MaxFuelPercentRange; // 0x20(0x04)
	enum class EThingSpotGroupType GroupType; // 0x24(0x01)
	bool bSnapToFloor; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct TslGame.*26d184b60c
// Size: 0x28 (Inherited: 0x08)
struct F*26d184b60c : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	struct FName SubCategoryFilter; // 0x10(0x08)
	struct UClass* Vehicle; // 0x18(0x08)
	int32 Weight; // 0x20(0x04)
	bool bSnapToFloor; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGame.*10357315b4
// Size: 0x58 (Inherited: 0x30)
struct F*10357315b4 : F*1b3838729a {
	struct TArray<struct F*2330728330> WeightsPerCategory; // 0x30(0x10)
	struct FFloatRange FuelPercentRange; // 0x40(0x10)
	bool bSnapToFloor; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.*87f9d7fe5f
// Size: 0x88 (Inherited: 0x08)
struct F*87f9d7fe5f : FTableRowBase {
	struct FString Description; // 0x08(0x10)
	struct FString VehicleSpawnSubtitleKey; // 0x18(0x10)
	struct UDataTable* VehicleSpotGroupDataTable; // 0x28(0x20)
	struct UDataTable* VehicleSpawnDataTable; // 0x48(0x20)
	struct UDataTable* VehicleVariationDataTable; // 0x68(0x20)
};

// ScriptStruct TslGame.*718c215dec
// Size: 0x10 (Inherited: 0x08)
struct F*718c215dec : FTableRowBase {
	int32 Level; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.TestLog
// Size: 0xa0 (Inherited: 0x60)
struct FTestLog : FLogBase {
	uint32 UInt32Max; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	uint64 UInt64Max; // 0x68(0x08)
	uint32 UInt32Min; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	uint64 UInt64Min; // 0x78(0x08)
	int32 Int32Max; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	int64 Int64Max; // 0x88(0x08)
	int32 Int32Min; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	int64 Int64Min; // 0x98(0x08)
};

// ScriptStruct TslGame.*10db968f85
// Size: 0x48 (Inherited: 0x00)
struct F*10db968f85 {
	struct FString MapName; // 0x00(0x10)
	struct FString BenchmarkPath; // 0x10(0x10)
	struct FString LevelSequenceName; // 0x20(0x10)
	struct FString CameraName; // 0x30(0x10)
	float PlayRate; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*a2dde77015
// Size: 0x20 (Inherited: 0x00)
struct F*a2dde77015 {
	struct FName FunctionName; // 0x00(0x08)
	struct FString CommandName; // 0x08(0x10)
	float delayTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*3c3a6b38eb
// Size: 0x38 (Inherited: 0x00)
struct F*3c3a6b38eb {
	struct FName *ebe97e2081; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector2D *7065ef3733; // 0x20(0x08)
	struct FName *f801e2d9c7; // 0x28(0x08)
	enum class EThingSpotGroupType *b46d2b980f; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*5bb30b0da2
// Size: 0x30 (Inherited: 0x00)
struct F*5bb30b0da2 {
	struct FStringAssetReference *3b6916f7e8; // 0x00(0x10)
	struct FStringAssetReference *b36ee03436; // 0x10(0x10)
	struct FStringAssetReference *2b7e7bd23f; // 0x20(0x10)
};

// ScriptStruct TslGame.*14812242c8
// Size: 0x38 (Inherited: 0x00)
struct F*14812242c8 {
	struct F*8fa95bb31f TargetData; // 0x00(0x28)
	struct TArray<struct F*c0ab2cfdbe> TargetGameplayEffectSpecs; // 0x28(0x10)
};

// ScriptStruct TslGame.*e6cc131c47
// Size: 0x18 (Inherited: 0x00)
struct F*e6cc131c47 {
	struct UClass* TargetType; // 0x00(0x08)
	struct TArray<struct UClass*> TargetGameplayEffectClasses; // 0x08(0x10)
};

// ScriptStruct TslGame.*8f8046b066
// Size: 0x18 (Inherited: 0x00)
struct F*8f8046b066 {
	struct FName *7af27251f1; // 0x00(0x08)
	int32 *d74b421a54; // 0x08(0x04)
	int32 *d1053abecb; // 0x0c(0x04)
	int32 *7a48c4f907; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*746ac6783f
// Size: 0x18 (Inherited: 0x00)
struct F*746ac6783f {
	struct TArray<struct F*aedcd3a53c> *aedcd3a53c; // 0x00(0x10)
	float *3b15a7d8e2; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*aedcd3a53c
// Size: 0x08 (Inherited: 0x00)
struct F*aedcd3a53c {
	int32 Percent; // 0x00(0x04)
	int32 *7645a8523f; // 0x04(0x04)
};

// ScriptStruct TslGame.*3c19c1e9de
// Size: 0x08 (Inherited: 0x00)
struct F*3c19c1e9de {
	float *90fb9a3813; // 0x00(0x04)
	float *3b15a7d8e2; // 0x04(0x04)
};

// ScriptStruct TslGame.*0da9e1e128
// Size: 0x08 (Inherited: 0x00)
struct F*0da9e1e128 {
	float *deb502ac34; // 0x00(0x04)
	float *3b15a7d8e2; // 0x04(0x04)
};

// ScriptStruct TslGame.*1bb80c2c9e
// Size: 0x18 (Inherited: 0x00)
struct F*1bb80c2c9e {
	struct FVector *b571de4e0d; // 0x00(0x0c)
	struct FVector *18dc54e2b6; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*6914b237ae
// Size: 0x0c (Inherited: 0x00)
struct F*6914b237ae {
	float *89f6368053; // 0x00(0x04)
	float *46ef5e1bac; // 0x04(0x04)
	float *ab4f0fdd52; // 0x08(0x04)
};

// ScriptStruct TslGame.*c3217dc949
// Size: 0x10 (Inherited: 0x00)
struct F*c3217dc949 {
	float *89f6368053; // 0x00(0x04)
	float *46ef5e1bac; // 0x04(0x04)
	int32 *fb0036ca5b; // 0x08(0x04)
	float *ab4f0fdd52; // 0x0c(0x04)
};

// ScriptStruct TslGame.*d201bdeae5
// Size: 0x14 (Inherited: 0x00)
struct F*d201bdeae5 {
	float *e2df917a50; // 0x00(0x04)
	float *759e2a6b54; // 0x04(0x04)
	float *2a54fb7d37; // 0x08(0x04)
	int32 *b5730353f6; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct TslGame.*8a77e26335
// Size: 0x38 (Inherited: 0x00)
struct F*8a77e26335 {
	char pad_0[0x30]; // 0x00(0x30)
	struct ATslNewBotAIController* *dd6e397dca; // 0x30(0x08)
};

// ScriptStruct TslGame.*eb16a4dd50
// Size: 0x20 (Inherited: 0x08)
struct F*eb16a4dd50 : FTableRowBase {
	int32 Weight; // 0x08(0x04)
	enum class EGender *2355168016; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct F*0ac878f56c> *984e9c8aa7; // 0x10(0x10)
};

// ScriptStruct TslGame.*0ac878f56c
// Size: 0x10 (Inherited: 0x00)
struct F*0ac878f56c {
	enum class EEquipSlotID SlotName; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AvatarItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*8921cffc28
// Size: 0xa0 (Inherited: 0x00)
struct F*8921cffc28 {
	struct ATslNewBotCharacter* *90f10a37a2; // 0x00(0x08)
	struct ATslNpcCharacter* *00407a3ccd; // 0x08(0x08)
	char pad_10[0x90]; // 0x10(0x90)
};

// ScriptStruct TslGame.*041b218331
// Size: 0x10 (Inherited: 0x00)
struct F*041b218331 {
	float ProbabilityFirstHit; // 0x00(0x04)
	float DurationTime; // 0x04(0x04)
	float DurationDamageMax; // 0x08(0x04)
	float DurationEmptyShot; // 0x0c(0x04)
};

// ScriptStruct TslGame.*af90dac83c
// Size: 0x28 (Inherited: 0x00)
struct F*af90dac83c {
	char pad_0[0x10]; // 0x00(0x10)
	struct UCurveFloat* *324ca201b7; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct TslGame.*8b2a83d42a
// Size: 0x1c (Inherited: 0x00)
struct F*8b2a83d42a {
	enum class EAIMapName MapName; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Center; // 0x04(0x0c)
	struct FVector *a7d9a65973; // 0x10(0x0c)
};

// ScriptStruct TslGame.*fc9fbe579f
// Size: 0x48 (Inherited: 0x00)
struct F*fc9fbe579f {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct TslGame.HouseGroup
// Size: 0x48 (Inherited: 0x00)
struct FHouseGroup {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct TslGame.*dc6c6abbd9
// Size: 0x70 (Inherited: 0x00)
struct F*dc6c6abbd9 {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct TslGame.*771c12647e
// Size: 0x0c (Inherited: 0x00)
struct F*771c12647e {
	char pad_0[0x8]; // 0x00(0x08)
	float *7a2c100564; // 0x08(0x04)
};

// ScriptStruct TslGame.*bd5a055651
// Size: 0x60 (Inherited: 0x00)
struct F*bd5a055651 {
	struct UDataTable* *7bc963da82; // 0x00(0x20)
	struct UDataTable* *232e06f6c6; // 0x20(0x20)
	float *a51e29eaad; // 0x40(0x04)
	float *b501035b96; // 0x44(0x04)
	float *de28a72957; // 0x48(0x04)
	float *f2c5130e82; // 0x4c(0x04)
	int32 *d9f4a8d3b5; // 0x50(0x04)
	int32 *28ca2a091d; // 0x54(0x04)
	int32 *db161db437; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*477dac4bd0
// Size: 0x10 (Inherited: 0x00)
struct F*477dac4bd0 {
	float *adb5d492fd; // 0x00(0x04)
	float *f596940853; // 0x04(0x04)
	int32 *d43286ebc7; // 0x08(0x04)
	float *08ad5c6d1a; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6877cfdd9a
// Size: 0x20 (Inherited: 0x08)
struct F*6877cfdd9a : FTableRowBase {
	int32 PhaseIndex; // 0x08(0x04)
	int32 Ratio; // 0x0c(0x04)
	struct TArray<struct F*88bea50662> Items; // 0x10(0x10)
};

// ScriptStruct TslGame.*88bea50662
// Size: 0x18 (Inherited: 0x00)
struct F*88bea50662 {
	enum class EUltAutoEquipItemType *505b924fe4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Item; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*899b66c0dd
// Size: 0x08 (Inherited: 0x00)
struct F*899b66c0dd {
	struct U*602560c21d* Origin; // 0x00(0x08)
};

// ScriptStruct TslGame.*5f341d0199
// Size: 0x10 (Inherited: 0x00)
struct F*5f341d0199 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*0bfb1f1aec
// Size: 0xc0 (Inherited: 0x00)
struct F*0bfb1f1aec {
	struct AUltAIController* AIController; // 0x00(0x08)
	char pad_8[0xb8]; // 0x08(0xb8)
};

// ScriptStruct TslGame.*63e0856359
// Size: 0x18 (Inherited: 0x00)
struct F*63e0856359 {
	struct ATslPillarCharacter* *c402ebd995; // 0x00(0x08)
	struct FGuid *9ed6cc438d; // 0x08(0x10)
};

// ScriptStruct TslGame.*0e34ddad96
// Size: 0x10 (Inherited: 0x00)
struct F*0e34ddad96 {
	struct TArray<struct F*9fa444ee1f> *d359ada6a9; // 0x00(0x10)
};

// ScriptStruct TslGame.*9fa444ee1f
// Size: 0xb0 (Inherited: 0x00)
struct F*9fa444ee1f {
	bool *6ec9873034; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* *376318cf9b; // 0x08(0x08)
	struct FTransform *30041ec67d; // 0x10(0x30)
	struct TArray<struct ATslStaticContainer*> *e7a1fc6146; // 0x40(0x10)
	struct TArray<struct AActor*> *7a4e249544; // 0x50(0x10)
	struct TArray<struct ATslPatrolPath*> Paths; // 0x60(0x10)
	struct TArray<struct ATslPillarCharacter*> *a288bdb2fc; // 0x70(0x10)
	struct TArray<struct ATslParticleEnvironment*> *852af1acd3; // 0x80(0x10)
	struct TArray<struct F*5413ee5540> *6c9cb0ffdd; // 0x90(0x10)
	struct FGuid *9ed6cc438d; // 0xa0(0x10)
};

// ScriptStruct TslGame.*5413ee5540
// Size: 0x50 (Inherited: 0x00)
struct F*5413ee5540 {
	struct UClass* ParticleEnvironment; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform ParticleTransform; // 0x10(0x30)
	float ActivateDistances; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct TslGame.*2d17f5ecd2
// Size: 0x20 (Inherited: 0x00)
struct F*2d17f5ecd2 {
	struct FStringAssetReference *6aac3bf814; // 0x00(0x10)
	struct TArray<struct F*8ef2d9771d> *6b0c69e87d; // 0x10(0x10)
};

// ScriptStruct TslGame.*8ef2d9771d
// Size: 0x40 (Inherited: 0x00)
struct F*8ef2d9771d {
	struct UPrefabAsset* PrefabAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform PrefabTransform; // 0x10(0x30)
};

// ScriptStruct TslGame.*0a2afbb859
// Size: 0x18 (Inherited: 0x08)
struct F*0a2afbb859 : FTableRowBase {
	struct UPrefabAsset* ArtPrefabAsset; // 0x08(0x08)
	struct UPrefabAsset* AiPrefabAsset; // 0x10(0x08)
};

// ScriptStruct TslGame.*7771ee7455
// Size: 0x10 (Inherited: 0x00)
struct F*7771ee7455 {
	struct TArray<struct ATslPatrolPoint*> *04daa2dac0; // 0x00(0x10)
};

// ScriptStruct TslGame.*9eb666b22e
// Size: 0x10 (Inherited: 0x00)
struct F*9eb666b22e {
	struct UClass* *5aa98e6035; // 0x00(0x08)
	struct FName *ec4fa41676; // 0x08(0x08)
};

// ScriptStruct TslGame.*00c2337123
// Size: 0x1c (Inherited: 0x00)
struct F*00c2337123 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*18e8628e7c
// Size: 0x10 (Inherited: 0x00)
struct F*18e8628e7c {
	int32 DropCount; // 0x00(0x04)
	float DropPercent; // 0x04(0x04)
	struct UClass* OverrideCarePackageItemSpawnerClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*98d2eea24b
// Size: 0x18 (Inherited: 0x00)
struct F*98d2eea24b {
	struct UClass* *da7cb7e86f; // 0x00(0x08)
	struct UClass* *ad95a519c9; // 0x08(0x08)
	float *f4701248f0; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*1ca6def86a
// Size: 0x28 (Inherited: 0x00)
struct F*1ca6def86a {
	struct FName *a88a67be14; // 0x00(0x08)
	struct UAkAudioEvent* *6ae3963dbd; // 0x08(0x08)
	struct UAkAudioEvent* *b10acda8be; // 0x10(0x08)
	bool *93dd9f3322; // 0x18(0x01)
	bool *85836b0070; // 0x19(0x01)
	bool *5484557b95; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float *70bb97ea09; // 0x1c(0x04)
	float *04ba345007; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*e160e78d3b
// Size: 0x10 (Inherited: 0x00)
struct F*e160e78d3b {
	struct TArray<struct F*996fdfa09a> *d7b4eae1df; // 0x00(0x10)
};

// ScriptStruct TslGame.*996fdfa09a
// Size: 0x18 (Inherited: 0x00)
struct F*996fdfa09a {
	struct UClass* *f590cee254; // 0x00(0x08)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float Falloff; // 0x10(0x04)
	bool *df17830a3c; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*a220153ed1
// Size: 0x20 (Inherited: 0x00)
struct F*a220153ed1 {
	struct UBlendSpaceBase* CurrentLocomotionBlendspace; // 0x00(0x08)
	struct UBlendSpaceBase* LocomotionFirst; // 0x08(0x08)
	struct UBlendSpaceBase* LocomotionSecond; // 0x10(0x08)
	float LocomotionAlpha; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*f83df09ffb
// Size: 0x58 (Inherited: 0x00)
struct F*f83df09ffb {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, struct AActor*> *dce035f5ea; // 0x08(0x50)
};

// ScriptStruct TslGame.*e5945906bb
// Size: 0x20 (Inherited: 0x08)
struct F*e5945906bb : FTableRowBase {
	float *9d54272433; // 0x08(0x04)
	float *32cac9313a; // 0x0c(0x04)
	float *124c512a4e; // 0x10(0x04)
	float *dc3937797e; // 0x14(0x04)
	float *7753e90630; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*16aab9666e
// Size: 0x18 (Inherited: 0x00)
struct F*16aab9666e {
	enum class EAntiCheatKickType KickType; // 0x00(0x01)
	enum class EKickProcess KickProcess; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString KeyString; // 0x08(0x10)
};

// ScriptStruct TslGame.*99408cc10a
// Size: 0x18 (Inherited: 0x00)
struct F*99408cc10a {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTexture2D* IconTexture; // 0x08(0x08)
	float MaxTime; // 0x10(0x04)
	float FinishTime; // 0x14(0x04)
};

// ScriptStruct TslGame.*848a55a93f
// Size: 0x10 (Inherited: 0x00)
struct F*848a55a93f {
	struct UTexture2D* IdleTexture; // 0x00(0x08)
	struct UTexture2D* DamageTexture; // 0x08(0x08)
};

// ScriptStruct TslGame.*b362396dd5
// Size: 0x20 (Inherited: 0x00)
struct F*b362396dd5 {
	struct FString *2b950eaabd; // 0x00(0x10)
	struct FString *ee6048cf8b; // 0x10(0x10)
};

// ScriptStruct TslGame.*ecaf605995
// Size: 0xb8 (Inherited: 0x00)
struct F*ecaf605995 {
	struct FTslLobbyCustomizingData *da36c3c11f; // 0x00(0x58)
	struct UObject* *2916940c81; // 0x58(0x08)
	struct UClass* *baefd6b472; // 0x60(0x20)
	struct TArray<struct UClass*> *62bbc4501b; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	struct AActor* *831385903b; // 0xa0(0x08)
	struct FString *fe30cb10a5; // 0xa8(0x10)
};

// ScriptStruct TslGame.*ab99023520
// Size: 0x70 (Inherited: 0x00)
struct F*ab99023520 {
	struct UClass* *219a608bba; // 0x00(0x20)
	struct FName *1299107cc3; // 0x20(0x08)
	struct TArray<struct FString> *eb3fc38552; // 0x28(0x10)
	struct TArray<struct UClass*> *efb370d718; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EViewModeCategory *ad99c1e455; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString *c4c821b82a; // 0x60(0x10)
};

// ScriptStruct TslGame.*de054b90f5
// Size: 0x20 (Inherited: 0x00)
struct F*de054b90f5 {
	struct FString WidgetName; // 0x00(0x10)
	struct FMulticastDelegate *823cb5948d; // 0x10(0x10)
};

// ScriptStruct TslGame.*5568f4fb8d
// Size: 0x08 (Inherited: 0x00)
struct F*5568f4fb8d {
	int32 TeamId; // 0x00(0x04)
	int32 MemberIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*2cfef1d131
// Size: 0x18 (Inherited: 0x00)
struct F*2cfef1d131 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*76b4840017
// Size: 0x18 (Inherited: 0x00)
struct F*76b4840017 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*49867c1500
// Size: 0x10 (Inherited: 0x00)
struct F*49867c1500 {
	struct TArray<struct AActor*> *be7e35a3c4; // 0x00(0x10)
};

// ScriptStruct TslGame.*97f6879636
// Size: 0x90 (Inherited: 0x00)
struct F*97f6879636 {
	struct FName GroupName; // 0x00(0x08)
	enum class ETslParticleGroupPriority GroupPriority; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 MaxObjectCount; // 0x0c(0x04)
	enum class ETslParticleCullType CullType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MaxDistance; // 0x14(0x04)
	float MaxRenderDuration; // 0x18(0x04)
	int32 MaxSameTransformCount; // 0x1c(0x04)
	int32 MaxNearbyTransformCount; // 0x20(0x04)
	char pad_24[0x6c]; // 0x24(0x6c)
};

// ScriptStruct TslGame.*bb8a01c8f1
// Size: 0x40 (Inherited: 0x08)
struct F*bb8a01c8f1 : FTableRowBase {
	int32 UID; // 0x08(0x04)
	struct FTslSLBStageID StageID; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FName ItemID; // 0x10(0x08)
	struct FName SkinItemId; // 0x18(0x08)
	struct TArray<struct FName> Attachments; // 0x20(0x10)
	int32 StackCount; // 0x30(0x04)
	int32 Weight; // 0x34(0x04)
	bool bShowItem; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct TslGame.TslSLBStageID
// Size: 0x02 (Inherited: 0x00)
struct FTslSLBStageID {
	enum class ETslSLBStage Stage; // 0x00(0x01)
	enum class ETslSLBStageDifficulty Difficulty; // 0x01(0x01)
};

// ScriptStruct TslGame.*9fe7745fc6
// Size: 0x88 (Inherited: 0x08)
struct F*9fe7745fc6 : FTableRowBase {
	struct FTslSLBStageID StageID; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct F*c875a301ce ItemSpawnData; // 0x10(0x38)
	struct UClass* StageControllerAsset; // 0x48(0x20)
	struct F*8e020bd50c MissionData; // 0x68(0x18)
	int32 RespawnCount; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.*8e020bd50c
// Size: 0x18 (Inherited: 0x00)
struct F*8e020bd50c {
	struct FName MissionItemID; // 0x00(0x08)
	int32 MissionItemSpawnCount; // 0x08(0x04)
	enum class EItemSpotGroupType MissionItemSpotGroupType; // 0x0c(0x01)
	enum class EItemSpotType MissionItemSpotType; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	int32 MissionInteractionObjectCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*c875a301ce
// Size: 0x38 (Inherited: 0x00)
struct F*c875a301ce {
	struct TArray<struct F*cdd2d903f1> RawSpotGroupProperties; // 0x00(0x10)
	struct FStringAssetReference RawItemSpawnDataTable; // 0x10(0x10)
	struct FStringAssetReference RawItemSpawnTogetherDataTable; // 0x20(0x10)
	enum class EItemSpawnType ItemSpawnType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*1ed749204b
// Size: 0x10 (Inherited: 0x00)
struct F*1ed749204b {
	struct F*7e6f88d3ae *d84c3bc116; // 0x00(0x03)
	char pad_3[0x5]; // 0x03(0x05)
	struct ATslTrainingPlayerState* *0e647e6e75; // 0x08(0x08)
};

// ScriptStruct TslGame.*7e6f88d3ae
// Size: 0x03 (Inherited: 0x00)
struct F*7e6f88d3ae {
	enum class EPrivateWaitingRoomPhase *27f0c994a8; // 0x00(0x01)
	enum class EPrivateTrainingRoomPhase *bcb88f25c0; // 0x01(0x01)
	enum class ETrainingPracticeType PracticeType; // 0x02(0x01)
};

// ScriptStruct TslGame.*6450d3dc2d
// Size: 0x08 (Inherited: 0x00)
struct F*6450d3dc2d {
	float *f6260c5230; // 0x00(0x04)
	float *bf92c47eab; // 0x04(0x04)
};

// ScriptStruct TslGame.*15d260f826
// Size: 0x10 (Inherited: 0x00)
struct F*15d260f826 {
	int32 *727d79e7ae; // 0x00(0x04)
	int32 *e77e866a41; // 0x04(0x04)
	int32 *9e88a11c5f; // 0x08(0x04)
	int32 *3277a1feb6; // 0x0c(0x04)
};

// ScriptStruct TslGame.*c795c97dbd
// Size: 0x60 (Inherited: 0x00)
struct F*c795c97dbd {
	struct TMap<int32, int32> *0fb6c777f6; // 0x00(0x50)
	struct TArray<int32> *324c57f7ce; // 0x50(0x10)
};

// ScriptStruct TslGame.*6b1366b30a
// Size: 0x78 (Inherited: 0x00)
struct F*6b1366b30a {
	struct FName ItemID; // 0x00(0x08)
	struct F*fe6da746f6 EquipPosition; // 0x08(0x08)
	int32 Index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct TArray<struct FStringAssetReference> AttachIcons; // 0x30(0x10)
	bool bNeedAmmoInfo; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 AmmoNumLoaded; // 0x44(0x04)
	int32 AmmoNumUnloaded; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FStringAssetReference AmmoIcon; // 0x50(0x10)
	struct FText AmmoName; // 0x60(0x18)
};

// ScriptStruct TslGame.*e49f958780
// Size: 0x30 (Inherited: 0x00)
struct F*e49f958780 {
	struct FName ID; // 0x00(0x08)
	struct UTexture* Icon; // 0x08(0x20)
	int32 ItemNum; // 0x28(0x04)
	int32 DefensivePower; // 0x2c(0x04)
};

// ScriptStruct TslGame.*497d4a4993
// Size: 0x38 (Inherited: 0x00)
struct F*497d4a4993 {
	struct FName ID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FStringAssetReference Icon; // 0x20(0x10)
	bool bOwned; // 0x30(0x01)
	bool bFull; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 Price; // 0x34(0x04)
};

// ScriptStruct TslGame.*b911355b43
// Size: 0x50 (Inherited: 0x00)
struct F*b911355b43 {
	struct FLinearColor Normal; // 0x00(0x10)
	struct FLinearColor Hover; // 0x10(0x10)
	struct FLinearColor Disabled; // 0x20(0x10)
	struct FLinearColor Selected; // 0x30(0x10)
	struct FLinearColor LackCoin; // 0x40(0x10)
};

// ScriptStruct TslGame.*9bc704c46b
// Size: 0x50 (Inherited: 0x00)
struct F*9bc704c46b {
	struct FName ID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FStringAssetReference Icon; // 0x20(0x10)
	struct FStringAssetReference AmmoIcon; // 0x30(0x10)
	bool bOwned; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 Price; // 0x44(0x04)
	int32 AmmoNum; // 0x48(0x04)
	enum class EBombScopeInfo Scope; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct TslGame.*130e5fbdf6
// Size: 0x50 (Inherited: 0x00)
struct F*130e5fbdf6 {
	int32 SquadMemberIndex; // 0x00(0x04)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText PlayerName; // 0x18(0x18)
	struct TArray<struct UTexture2D*> Equips; // 0x30(0x10)
	int32 Coin; // 0x40(0x04)
	int32 DonationUnit; // 0x44(0x04)
	bool IsOwn; // 0x48(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.*d01b139889
// Size: 0x38 (Inherited: 0x00)
struct F*d01b139889 {
	int32 *734fd4df73; // 0x00(0x04)
	enum class EBombUIPlayerStatusType *3685cfcf81; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FText PlayerName; // 0x08(0x18)
	int32 Kill; // 0x20(0x04)
	int32 *306f42da0c; // 0x24(0x04)
	int32 Death; // 0x28(0x04)
	int32 *6c83900707; // 0x2c(0x04)
	bool *9db6b2dd34; // 0x30(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct TslGame.*0c99e7cb5e
// Size: 0x60 (Inherited: 0x00)
struct F*0c99e7cb5e {
	bool *a3dd2bc926; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*b03579d69b Condition; // 0x08(0x20)
	bool *23e0789359; // 0x28(0x01)
	bool *27a0ef9d3b; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32 *cfbe49a89c; // 0x2c(0x04)
	struct F*8578bb9bc3 Result; // 0x30(0x30)
};

// ScriptStruct TslGame.*8578bb9bc3
// Size: 0x30 (Inherited: 0x00)
struct F*8578bb9bc3 {
	int32 *cee27d115a; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Message; // 0x08(0x18)
	enum class EBombUITeamStatusType *81d6631892; // 0x20(0x01)
	bool *5472f0445c; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32 *a7b43ece8d; // 0x24(0x04)
	int32 *b2375ef719; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*b03579d69b
// Size: 0x20 (Inherited: 0x00)
struct F*b03579d69b {
	enum class EBombRoundResultConditionType Type; // 0x00(0x01)
	enum class EBombUITeamStatusType *f0f0b6d5a8; // 0x01(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FText Message; // 0x08(0x18)
};

// ScriptStruct TslGame.*fb422553dd
// Size: 0x10 (Inherited: 0x00)
struct F*fb422553dd {
	struct TArray<enum class EBombUIPlayerStatusType> *bef0370cee; // 0x00(0x10)
};

// ScriptStruct TslGame.*f24ab30ddf
// Size: 0x30 (Inherited: 0x00)
struct F*f24ab30ddf {
	struct UTexture2D* *49cabfda5f; // 0x00(0x08)
	struct FLinearColor *d075276b3f; // 0x08(0x10)
	struct UTexture2D* *1183acc042; // 0x18(0x08)
	struct FLinearColor *e039089c45; // 0x20(0x10)
};

// ScriptStruct TslGame.*e527939ab7
// Size: 0x10 (Inherited: 0x00)
struct F*e527939ab7 {
	struct TArray<struct UObject*> Objects; // 0x00(0x10)
};

// ScriptStruct TslGame.*c98f60b581
// Size: 0x20 (Inherited: 0x00)
struct F*c98f60b581 {
	int32 CircleNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *a0476350b1; // 0x08(0x08)
	struct FName *4461143c7d; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*ebf014a507
// Size: 0x10 (Inherited: 0x00)
struct F*ebf014a507 {
	struct FStringAssetReference DataTable; // 0x00(0x10)
};

// ScriptStruct TslGame.*77db46e830
// Size: 0x40 (Inherited: 0x00)
struct F*77db46e830 {
	struct TArray<struct F*c25209e6b1> Bots; // 0x00(0x10)
	struct FVector StartLocation; // 0x10(0x0c)
	struct FRotator *9a94b46ec6; // 0x1c(0x0c)
	struct FRotator *f7c07f0bef; // 0x28(0x0c)
	int32 *32c144a2cd; // 0x34(0x04)
	bool *5d7f2512c0; // 0x38(0x01)
	bool *e4186ae729; // 0x39(0x01)
	bool *9c53de3edd; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float Timeout; // 0x3c(0x04)
};

// ScriptStruct TslGame.*c25209e6b1
// Size: 0x30 (Inherited: 0x00)
struct F*c25209e6b1 {
	struct FVector SpawnLocation; // 0x00(0x0c)
	struct FRotator *80568035e9; // 0x0c(0x0c)
	uint32 ID; // 0x18(0x04)
	uint32 VehicleId; // 0x1c(0x04)
	struct TArray<struct U*9473042974*> Actions; // 0x20(0x10)
};

// ScriptStruct TslGame.*5ecd078863
// Size: 0x08 (Inherited: 0x00)
struct F*5ecd078863 {
	uint32 *5a16bcfae2; // 0x00(0x04)
	enum class EFollowTargetType TargetType; // 0x04(0x04)
};

// ScriptStruct TslGame.*2119ae8a06
// Size: 0x18 (Inherited: 0x08)
struct F*2119ae8a06 : FTableRowBase {
	float *c5ffcfdabc; // 0x08(0x04)
	float *78e1d73719; // 0x0c(0x04)
	float *7e0bc94ea7; // 0x10(0x04)
	float *065f898f88; // 0x14(0x04)
};

// ScriptStruct TslGame.*8a4ef484da
// Size: 0x18 (Inherited: 0x00)
struct F*8a4ef484da {
	struct TArray<struct F*eb746103b3> *2b7964e28c; // 0x00(0x10)
	int8 *11856f9341; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*eb746103b3
// Size: 0x18 (Inherited: 0x00)
struct F*eb746103b3 {
	struct TArray<struct FVector> *cd214e9b5d; // 0x00(0x10)
	int32 *052aadbe30; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*3b31155275
// Size: 0x08 (Inherited: 0x00)
struct F*3b31155275 {
	float Gauge; // 0x00(0x04)
	float *d636a9e8b6; // 0x04(0x04)
};

// ScriptStruct TslGame.*2ebd8c3451
// Size: 0x18 (Inherited: 0x00)
struct F*2ebd8c3451 {
	struct FString *a934b2fe16; // 0x00(0x10)
	float *79f069660b; // 0x10(0x04)
	float *98e04ebbdb; // 0x14(0x04)
};

// ScriptStruct TslGame.*88fc1e1f3f
// Size: 0x18 (Inherited: 0x00)
struct F*88fc1e1f3f {
	struct TArray<int32> *0d57f7053c; // 0x00(0x10)
	struct UMaterialInstance* Material; // 0x10(0x08)
};

// ScriptStruct TslGame.*aa470a80ba
// Size: 0x88 (Inherited: 0x00)
struct F*aa470a80ba {
	enum class *e5b83a2753 *bc22a415d0; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *3545567185; // 0x08(0x10)
	struct FString *c1c3ec5e82; // 0x18(0x10)
	struct FString *a479d577f4; // 0x28(0x10)
	struct FString *01f4abd1b6; // 0x38(0x10)
	struct FString *4a37f9b8c3; // 0x48(0x10)
	struct FString *6d467ae303; // 0x58(0x10)
	struct FName *099bc10406; // 0x68(0x08)
	struct FName *477bbe8fda; // 0x70(0x08)
	struct FName *6e0842f2c9; // 0x78(0x08)
	struct FName *b460881ac3; // 0x80(0x08)
};

// ScriptStruct TslGame.*b4f1377228
// Size: 0x38 (Inherited: 0x08)
struct F*b4f1377228 : FTableRowBase {
	float EndGameTime; // 0x08(0x04)
	float GeneratorProgressGoal; // 0x0c(0x04)
	struct TArray<float> Survivor_GeneratorProgressInteractionRate; // 0x10(0x10)
	float EscapeProgressGoal; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct F*6b29c30c09> SurvivorStartingItemArray; // 0x28(0x10)
};

// ScriptStruct TslGame.*6b29c30c09
// Size: 0x10 (Inherited: 0x00)
struct F*6b29c30c09 {
	struct FName ItemName; // 0x00(0x08)
	int32 ItemNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*70204d0a18
// Size: 0x20 (Inherited: 0x08)
struct F*70204d0a18 : FTableRowBase {
	int32 *610687843b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName ItemName; // 0x10(0x08)
	int32 *d61bb58780; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*da48a65d39
// Size: 0x30 (Inherited: 0x00)
struct F*da48a65d39 {
	struct TArray<struct UClass*> *85c80d7b10; // 0x00(0x10)
	struct TArray<struct F*84d225df75> *b47bb50e51; // 0x10(0x10)
	struct UClass* *271a14efcc; // 0x20(0x08)
	bool *a338534164; // 0x28(0x01)
	bool *5db45b5eff; // 0x29(0x01)
	bool *bc6648c29b; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.*84d225df75
// Size: 0x28 (Inherited: 0x00)
struct F*84d225df75 {
	struct UClass* *02844f2c96; // 0x00(0x08)
	bool *384e8f508e; // 0x08(0x01)
	bool *3fb5916391; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *e1d316f8b3; // 0x0c(0x04)
	float *72654adc4e; // 0x10(0x04)
	float *60b509ac70; // 0x14(0x04)
	float *79ee1f0650; // 0x18(0x04)
	float *adaaccfde1; // 0x1c(0x04)
	enum class *0baddcb8e4 *bd1cc65164; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*794f17670b
// Size: 0x28 (Inherited: 0x00)
struct F*794f17670b {
	struct FVector *6799cde121; // 0x00(0x0c)
	struct FVector *bd1c489aba; // 0x0c(0x0c)
	struct FVector *6912490fe4; // 0x18(0x0c)
	struct FColor Color; // 0x24(0x04)
};

// ScriptStruct TslGame.*441f34f1fd
// Size: 0x02 (Inherited: 0x00)
struct F*441f34f1fd {
	enum class EAITaskState *508d1b5782; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGame.*ae20a68b92
// Size: 0x20 (Inherited: 0x08)
struct F*ae20a68b92 : FTableRowBase {
	int32 StatudID; // 0x08(0x04)
	float ZombieATK; // 0x0c(0x04)
	float ZombieHP; // 0x10(0x04)
	float ZombieSPD; // 0x14(0x04)
	float ZombieJumpHeight; // 0x18(0x04)
	int32 OfferedCoinNum; // 0x1c(0x04)
};

// ScriptStruct TslGame.*2e35d69cec
// Size: 0x48 (Inherited: 0x08)
struct F*2e35d69cec : FTableRowBase {
	int32 *a99c77b9a1; // 0x08(0x04)
	bool *7bf63344a8; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *cf28d10911; // 0x10(0x04)
	float *c5238ec2ea; // 0x14(0x04)
	bool *8112391c0e; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 *380b826331; // 0x1c(0x04)
	bool *4fc70a89c3; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *ff70539b0a; // 0x24(0x04)
	float *50d2701a17; // 0x28(0x04)
	bool *2fbf105df0; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *5390a0bccb; // 0x30(0x04)
	float *0f32586cbb; // 0x34(0x04)
	float *d92a617ce5; // 0x38(0x04)
	float *6c37e71d3e; // 0x3c(0x04)
	float *86d62960ad; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*74a3064d1a
// Size: 0x48 (Inherited: 0x08)
struct F*74a3064d1a : FTableRowBase {
	int32 StatusID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* Pawn; // 0x10(0x08)
	float ATKMultiplier; // 0x18(0x04)
	float HP; // 0x1c(0x04)
	float SPDMultiplier; // 0x20(0x04)
	float JumpHeightMultiplier; // 0x24(0x04)
	struct TArray<struct F*f17d93ae8a> ExclusiveDropItems; // 0x28(0x10)
	enum class EZombieAttackType AttackType; // 0x38(0x01)
	enum class EZombieTargetingType TargetingType; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float AggressiveDistance; // 0x3c(0x04)
	float SearchRadius; // 0x40(0x04)
	enum class EOPUIMonsterType MonsterType; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct TslGame.*f17d93ae8a
// Size: 0x18 (Inherited: 0x00)
struct F*f17d93ae8a {
	struct FName DropItemID; // 0x00(0x08)
	int32 DropItemCount; // 0x08(0x04)
	int32 DropItemRate; // 0x0c(0x04)
	float DropProbability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*0f18dd44fe
// Size: 0x58 (Inherited: 0x08)
struct F*0f18dd44fe : FTableRowBase {
	int32 ZDBalanceID; // 0x08(0x04)
	int32 StageNum; // 0x0c(0x04)
	float StageLimitTime; // 0x10(0x04)
	float StageCraftTime; // 0x14(0x04)
	struct TArray<struct F*2f1f168dfa> WaveList; // 0x18(0x10)
	float ZombieATK; // 0x28(0x04)
	float ZombieHP; // 0x2c(0x04)
	float ZombieSPD; // 0x30(0x04)
	float ZombieJumpHeight; // 0x34(0x04)
	struct TArray<struct F*f17d93ae8a> DropItems; // 0x38(0x10)
	int32 OfferedCoinNum; // 0x48(0x04)
	int32 HeadShotKillReward; // 0x4c(0x04)
	int32 MeleeKillReward; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*2f1f168dfa
// Size: 0x20 (Inherited: 0x00)
struct F*2f1f168dfa {
	int32 WavePerLimitCount; // 0x00(0x04)
	int32 WavePerMaxCount; // 0x04(0x04)
	float WaveInterval; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*7c24e81e5b> ZombieList; // 0x10(0x10)
};

// ScriptStruct TslGame.*7c24e81e5b
// Size: 0x08 (Inherited: 0x00)
struct F*7c24e81e5b {
	int32 ZombieStatusID; // 0x00(0x04)
	int32 Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*a8e68fbff6
// Size: 0x08 (Inherited: 0x00)
struct F*a8e68fbff6 {
	float *d3e7f29243; // 0x00(0x04)
	enum class EZombieTargetingType TargetingType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*0f1019e477
// Size: 0x18 (Inherited: 0x00)
struct F*0f1019e477 {
	int32 *5098a94901; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*c8c65e9a50> *faa6d59394; // 0x08(0x10)
};

// ScriptStruct TslGame.*c8c65e9a50
// Size: 0x28 (Inherited: 0x20)
struct F*c8c65e9a50 : F*f73d4bb7ac {
	struct ATslLobbyWeapon* TslWeapon; // 0x20(0x08)
};

// ScriptStruct TslGame.*f73d4bb7ac
// Size: 0x20 (Inherited: 0x00)
struct F*f73d4bb7ac {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString ItemID; // 0x08(0x10)
	struct UItem* Item; // 0x18(0x08)
};

// ScriptStruct TslGame.*69d0914b1e
// Size: 0x10 (Inherited: 0x00)
struct F*69d0914b1e {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *02392f0a54; // 0x04(0x04)
	struct UClass* *b4c8351ff9; // 0x08(0x08)
};

// ScriptStruct TslGame.*c8775dfbc9
// Size: 0x08 (Inherited: 0x00)
struct F*c8775dfbc9 {
	bool AttackMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *b6aba97478; // 0x04(0x04)
};

// ScriptStruct TslGame.*d9c7c204cc
// Size: 0x14 (Inherited: 0x00)
struct F*d9c7c204cc {
	struct AActor* Target; // 0x00(0x08)
	float *d4d1ea97df; // 0x08(0x04)
	bool *a583e5722f; // 0x0c(0x01)
	char pad_D[0x7]; // 0x0d(0x07)
};

// ScriptStruct TslGame.*8f95784bb2
// Size: 0x14 (Inherited: 0x00)
struct F*8f95784bb2 {
	struct FVector Pos; // 0x00(0x0c)
	int32 Reuslt; // 0x0c(0x04)
	float *d43efcd948; // 0x10(0x04)
};

// ScriptStruct TslGame.*4eae69a72c
// Size: 0x18 (Inherited: 0x00)
struct F*4eae69a72c {
	float Radius; // 0x00(0x04)
	float Angle; // 0x04(0x04)
	struct FVector Offset; // 0x08(0x0c)
	bool Random; // 0x14(0x01)
	bool IsCheckHeadshot; // 0x15(0x01)
	bool IsShowDebugFan; // 0x16(0x01)
	enum class *ed4a4e6969 PickerTargetType; // 0x17(0x01)
};

// ScriptStruct TslGame.*cc244fac22
// Size: 0x28 (Inherited: 0x00)
struct F*cc244fac22 {
	int32 *ea0cd5559a; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName AttackId; // 0x08(0x08)
	float *b8f1acdb67; // 0x10(0x04)
	float delayTime; // 0x14(0x04)
	int32 Trigger; // 0x18(0x04)
	char pad_1C[0xc]; // 0x1c(0x0c)
};

// ScriptStruct TslGame.*f065ac31c3
// Size: 0x18 (Inherited: 0x00)
struct F*f065ac31c3 {
	float Speed; // 0x00(0x04)
	int32 *ea0cd5559a; // 0x04(0x04)
	float *7dc8bc86ed; // 0x08(0x04)
	struct FVector2D *26a98647b2; // 0x0c(0x08)
	char *4059cc3b86 : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*c9214f0a75
// Size: 0x20 (Inherited: 0x00)
struct F*c9214f0a75 {
	float *ae6b29db1a; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*93be2e7938> *e728a55acf; // 0x08(0x10)
	float *1d5e303beb; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*93be2e7938
// Size: 0x10 (Inherited: 0x00)
struct F*93be2e7938 {
	struct FName *8f9cc6cfb8; // 0x00(0x08)
	float *31cd08a279; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*56e82e276d
// Size: 0x988 (Inherited: 0x08)
struct F*56e82e276d : FSlateWidgetStyle {
	struct F*7051df995c *5308f440f7; // 0x08(0x870)
	struct FSlateBrush *4380738724; // 0x878(0x90)
	struct FSlateColor *780563989f; // 0x908(0x28)
	struct FSlateColor TextColor; // 0x930(0x28)
	struct FSlateSound *dd1cf6663e; // 0x958(0x18)
	struct FSlateSound *afb2d09d45; // 0x970(0x18)
};

// ScriptStruct TslGame.ChromaEventDamage
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventDamage : FChromaEvent {
	enum class EDamageTypeCategory DamageType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DamageValue; // 0x2c(0x04)
};

// ScriptStruct TslGame.ChromaEvent
// Size: 0x28 (Inherited: 0x10)
struct FChromaEvent : FGameEventBase {
	struct FName CategoryName; // 0x10(0x08)
	struct FName AnimationName; // 0x18(0x08)
	bool ShouldPlay; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.ChromaEventBluezone
// Size: 0x28 (Inherited: 0x28)
struct FChromaEventBluezone : FChromaEvent {
};

// ScriptStruct TslGame.ChromaEventGroggy
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventGroggy : FChromaEvent {
	bool VictimIsMe; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.ChromaEventKill
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventKill : FChromaEvent {
	bool VictimIsMe; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.ChromaEventItemPickup
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventItemPickup : FChromaEvent {
	enum class EItemCategory ItemCategory; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.ChromaEventCast
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventCast : FChromaEvent {
	enum class ECastAnim AnimType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.ChromaEventWheel
// Size: 0x28 (Inherited: 0x28)
struct FChromaEventWheel : FChromaEvent {
};

// ScriptStruct TslGame.*8801889f7c
// Size: 0x1c (Inherited: 0x00)
struct F*8801889f7c {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.AutoCompleteVehiclePaths
// Size: 0x20 (Inherited: 0x00)
struct FAutoCompleteVehiclePaths {
	struct FString Kind; // 0x00(0x10)
	struct FString path; // 0x10(0x10)
};

// ScriptStruct TslGame.*c939014654
// Size: 0x18 (Inherited: 0x00)
struct F*c939014654 {
	enum class EBodyCarryState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ATslCharacterBase* Target; // 0x08(0x08)
	struct ATslCharacterBase* Parent; // 0x10(0x08)
};

// ScriptStruct TslGame.TrainingUserPlayData
// Size: 0x2c0 (Inherited: 0x08)
struct FTrainingUserPlayData : FBaseUserPlayData {
	struct FString PreviousSessionItemsJsonString; // 0x08(0x10)
	int32 ArenaWinningStreak; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FTrainingData AimTrainingData; // 0x20(0x150)
	struct FTrainingData SoundTrainingData; // 0x170(0x150)
};

// ScriptStruct TslGame.TrainingData
// Size: 0x150 (Inherited: 0x00)
struct FTrainingData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FRangedTrainingData Ranged10TrainingData; // 0x08(0x68)
	struct FRangedTrainingData Ranged50TrainingData; // 0x70(0x68)
	struct FRangedTrainingData Ranged100TrainingData; // 0xd8(0x68)
	struct TArray<struct FSingleTrainingData> TrainingDataList; // 0x140(0x10)
};

// ScriptStruct TslGame.SingleTrainingData
// Size: 0x38 (Inherited: 0x00)
struct FSingleTrainingData {
	int32 TrainingScore; // 0x00(0x04)
	float AimAccuracy; // 0x04(0x04)
	int32 HeadShot; // 0x08(0x04)
	int32 KillCount; // 0x0c(0x04)
	float SoundReactionRate; // 0x10(0x04)
	int32 HeadHitCount; // 0x14(0x04)
	int32 ArmHitCount; // 0x18(0x04)
	int32 TorsoHitCount; // 0x1c(0x04)
	int32 PelvisHitCount; // 0x20(0x04)
	int32 LegHitCount; // 0x24(0x04)
	struct FString WeaponName; // 0x28(0x10)
};

// ScriptStruct TslGame.RangedTrainingData
// Size: 0x68 (Inherited: 0x00)
struct FRangedTrainingData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FSingleTrainingData> RangedTrainingDataList; // 0x08(0x10)
	int32 BestDataRange; // 0x18(0x04)
	float MedianScore; // 0x1c(0x04)
	float AverageScore; // 0x20(0x04)
	int32 MaxScore; // 0x24(0x04)
	int32 MinScore; // 0x28(0x04)
	int32 MaximumDeviation; // 0x2c(0x04)
	struct FSingleTrainingData BestTrainingData; // 0x30(0x38)
};

// ScriptStruct TslGame.*17dbbfb5be
// Size: 0x18 (Inherited: 0x00)
struct F*17dbbfb5be {
	int32 TeleportType; // 0x00(0x04)
	int32 PracticeType; // 0x04(0x04)
	struct FString *8f533908a7; // 0x08(0x10)
};

// ScriptStruct TslGame.*7324b0bcdc
// Size: 0xe0 (Inherited: 0x00)
struct F*7324b0bcdc {
	struct FCustomDamageEvent Event; // 0x00(0xd8)
	float *779e28d5e1; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct TslGame.CustomDamageEvent
// Size: 0xd8 (Inherited: 0x08)
struct FCustomDamageEvent : FTableRowBase {
	bool *6ec9873034; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FGuid EventID; // 0x0c(0x10)
	bool bEnabled; // 0x1c(0x01)
	bool *5372734d98; // 0x1d(0x01)
	bool *4a226bf9c1; // 0x1e(0x01)
	bool *21f39a3570; // 0x1f(0x01)
	enum class *9ba9779ff0 *3e70f9bcae; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *6dc2943e60; // 0x24(0x04)
	float *122b3f0cdc; // 0x28(0x04)
	bool *01a5157f8d; // 0x2c(0x01)
	enum class ECustomDamageEventReactionType *41452a79fa; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct UClass* *c4f204043a; // 0x30(0x20)
	bool *0dfb0f52b2; // 0x50(0x01)
	bool *6fc47b421c; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct UClass* *804ec97efd; // 0x58(0x20)
	bool *cb829e9c68; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FName *f01ac4b025; // 0x80(0x08)
	struct FName *328a06d6a7; // 0x88(0x08)
	struct FName *5d6cb5ec69; // 0x90(0x08)
	bool *b08c375682; // 0x98(0x01)
	bool *e7697f517b; // 0x99(0x01)
	bool *ede14fab02; // 0x9a(0x01)
	bool *01ebcd6360; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FName *4b52fde51d; // 0xa0(0x08)
	struct FName *9fd512665a; // 0xa8(0x08)
	int32 *8ab112e9a9; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FName BoneName; // 0xb8(0x08)
	struct FName *0fdb999c8b; // 0xc0(0x08)
	struct FName *f91d37109a; // 0xc8(0x08)
	enum class ECollisionEnabled *363f56e988; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct TslGame.*897a786ccf
// Size: 0x50 (Inherited: 0x00)
struct F*897a786ccf {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*520104d619
// Size: 0x04 (Inherited: 0x00)
struct F*520104d619 {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct TslGame.*a434fbcd44
// Size: 0x10 (Inherited: 0x00)
struct F*a434fbcd44 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*5a51bd9e3a
// Size: 0x5b0 (Inherited: 0x00)
struct F*5a51bd9e3a {
	char pad_0[0x5b0]; // 0x00(0x5b0)
};

// ScriptStruct TslGame.*f772bf4a71
// Size: 0x20 (Inherited: 0x00)
struct F*f772bf4a71 {
	struct UPrimitiveComponent* *e556892c35; // 0x00(0x08)
	struct F*41c05e3d6d Sphere; // 0x08(0x10)
	float *dda08120d5; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*41c05e3d6d
// Size: 0x10 (Inherited: 0x00)
struct F*41c05e3d6d {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*064ef62a64
// Size: 0x2c (Inherited: 0x00)
struct F*064ef62a64 {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*d8dbe31226
// Size: 0x28 (Inherited: 0x00)
struct F*d8dbe31226 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*0db557d452
// Size: 0x3c (Inherited: 0x00)
struct F*0db557d452 {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct TslGame.*9c0db9445c
// Size: 0x1c (Inherited: 0x00)
struct F*9c0db9445c {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*ec35b785f9
// Size: 0x18 (Inherited: 0x00)
struct F*ec35b785f9 {
	float *c30c450587; // 0x00(0x04)
	struct FVector2D *34f1a04888; // 0x04(0x08)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*64d5901735
// Size: 0x28 (Inherited: 0x08)
struct F*64d5901735 : FTableRowBase {
	struct FString Category; // 0x08(0x10)
	struct TArray<struct FString> *55404363d6; // 0x18(0x10)
};

// ScriptStruct TslGame.*64e2d8d7d1
// Size: 0x28 (Inherited: 0x08)
struct F*64e2d8d7d1 : FTableRowBase {
	struct FString *ea34f1a1b5; // 0x08(0x10)
	struct FString *f98aba954f; // 0x18(0x10)
};

// ScriptStruct TslGame.*0655858272
// Size: 0x50 (Inherited: 0x30)
struct F*0655858272 : F*98df858f5c {
	struct FName TabName; // 0x30(0x08)
	struct FName *fbc8835e7c; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct F*beceeec0e4 TargetHud; // 0x48(0x02)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.*98df858f5c
// Size: 0x30 (Inherited: 0x08)
struct F*98df858f5c : FTableRowBase {
	int32 *46ff0889f7; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayNameText; // 0x10(0x18)
	struct F*6da8834d04 *7a64cbe34e; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct TslGame.*6da8834d04
// Size: 0x02 (Inherited: 0x00)
struct F*6da8834d04 {
	bool bKeyboardMouse; // 0x00(0x01)
	bool bGamepad; // 0x01(0x01)
};

// ScriptStruct TslGame.*beceeec0e4
// Size: 0x02 (Inherited: 0x00)
struct F*beceeec0e4 {
	bool bVisibleInLobby; // 0x00(0x01)
	bool bVisibleInGame; // 0x01(0x01)
};

// ScriptStruct TslGame.*e63b42737f
// Size: 0x40 (Inherited: 0x30)
struct F*e63b42737f : F*98df858f5c {
	struct FName TabName; // 0x30(0x08)
	struct FName *fbc8835e7c; // 0x38(0x08)
};

// ScriptStruct TslGame.*a3b2de6592
// Size: 0x38 (Inherited: 0x30)
struct F*a3b2de6592 : F*98df858f5c {
	struct FName TabName; // 0x30(0x08)
};

// ScriptStruct TslGame.*82c6cc6ec6
// Size: 0x1b0 (Inherited: 0x30)
struct F*82c6cc6ec6 : F*98df858f5c {
	enum class EOptionTab TabName; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName *fbc8835e7c; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct FName ItemName; // 0x48(0x08)
	struct FText DescriptionText; // 0x50(0x18)
	struct UClass* ItemWidgetClass; // 0x68(0x08)
	struct F*222dd71306 *4e6989fb38; // 0x70(0xd0)
	struct UClass* *37caba0d94; // 0x140(0x08)
	bool *727cdd26b4; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TArray<struct F*86f2230515> *752a7cf2ae; // 0x150(0x10)
	struct F*59f5c486ab KeyBindingDesc; // 0x160(0x38)
	struct FString AdditionalInitParameter; // 0x198(0x10)
	struct F*beceeec0e4 TargetHud; // 0x1a8(0x02)
	bool bUseIndentation; // 0x1aa(0x01)
	char pad_1AB[0x5]; // 0x1ab(0x05)
};

// ScriptStruct TslGame.*59f5c486ab
// Size: 0x38 (Inherited: 0x00)
struct F*59f5c486ab {
	enum class ETslGameOptionKeyBindingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName InputName; // 0x08(0x08)
	float InputAxisScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FKey> ForbiddenKeys; // 0x18(0x10)
	struct TArray<struct F*e0b26c3e11> DuplicateProhibitionData; // 0x28(0x10)
};

// ScriptStruct TslGame.*e0b26c3e11
// Size: 0x18 (Inherited: 0x00)
struct F*e0b26c3e11 {
	struct FName DuplicateProhibitedTabName; // 0x00(0x08)
	struct FName DuplicateProhibitedCategoryName; // 0x08(0x08)
	struct FName DuplicateProhibitedItemName; // 0x10(0x08)
};

// ScriptStruct TslGame.*86f2230515
// Size: 0x100 (Inherited: 0x00)
struct F*86f2230515 {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
	struct F*222dd71306 *58fb610007; // 0x30(0xd0)
};

// ScriptStruct TslGame.*222dd71306
// Size: 0xd0 (Inherited: 0x00)
struct F*222dd71306 {
	enum class ETslGameOptionSupplementaryType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTexture2D* TextureData; // 0x18(0x20)
	struct UMaterialInterface* *a93774cddf; // 0x38(0x20)
	struct TMap<struct FName, float> *bce222ab98; // 0x58(0x50)
	struct FText *fb45285d5a; // 0xa8(0x18)
	struct FString ExternalLink; // 0xc0(0x10)
};

// ScriptStruct TslGame.*c3b7d13818
// Size: 0x30 (Inherited: 0x00)
struct F*c3b7d13818 {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
};

// ScriptStruct TslGame.*d9642c06a9
// Size: 0x14 (Inherited: 0x00)
struct F*d9642c06a9 {
	float Timestamp; // 0x00(0x04)
	float *7e2bb3bbdf; // 0x04(0x04)
	float *b67b2e1a68; // 0x08(0x04)
	float *45eb18e88e; // 0x0c(0x04)
	float *f0d643d119; // 0x10(0x04)
};

// ScriptStruct TslGame.*1d2f91de10
// Size: 0x78 (Inherited: 0x00)
struct F*1d2f91de10 {
	struct FName root; // 0x00(0x08)
	struct FName Strap; // 0x08(0x08)
	struct FName BackpackRing; // 0x10(0x08)
	struct FVector DefaultStrapLocation; // 0x18(0x0c)
	struct FRotator DefaultStrapRotation; // 0x24(0x0c)
	struct FVector DefaultSeatLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FAlphaBlend Blend; // 0x40(0x38)
};

// ScriptStruct TslGame.*417b09f62c
// Size: 0x68 (Inherited: 0x00)
struct F*417b09f62c {
	enum class EFBRClass ClassType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *33bf9a9b85; // 0x04(0x04)
	struct F*92de024c52 *287e9a4dd4; // 0x08(0x30)
	struct TArray<struct F*92de024c52> *e420461a10; // 0x38(0x10)
	struct TArray<struct F*0c52e4c0d2> *7d3a357ee1; // 0x48(0x10)
	struct TArray<struct F*2d6ace53d1> *50de799739; // 0x58(0x10)
};

// ScriptStruct TslGame.*2d6ace53d1
// Size: 0x40 (Inherited: 0x00)
struct F*2d6ace53d1 {
	struct FName WeaponTag; // 0x00(0x08)
	struct F*1930ebf77e Anchor; // 0x08(0x28)
	bool bShowToSpectator; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UClass* WidgetClass; // 0x38(0x08)
};

// ScriptStruct TslGame.*0c52e4c0d2
// Size: 0x28 (Inherited: 0x00)
struct F*0c52e4c0d2 {
	struct UClass* IconWidgetClass; // 0x00(0x08)
	enum class EEquipSlotID *12cacea117; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 *924da08327; // 0x0c(0x04)
	struct FName ItemID; // 0x10(0x08)
	int32 *e3b18326e1; // 0x18(0x04)
	enum class *fe3a38da9a *75c2518f2d; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName *111bfb88da; // 0x20(0x08)
};

// ScriptStruct TslGame.*92de024c52
// Size: 0x30 (Inherited: 0x00)
struct F*92de024c52 {
	struct FName *747e732719; // 0x00(0x08)
	struct F*0c52e4c0d2 IconSetting; // 0x08(0x28)
};

// ScriptStruct TslGame.*18c36f5837
// Size: 0x10 (Inherited: 0x00)
struct F*18c36f5837 {
	struct FName SocketName; // 0x00(0x08)
	int32 *aaca02d2dc; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1237a74946
// Size: 0x0c (Inherited: 0x00)
struct F*1237a74946 {
	float *05359cc848; // 0x00(0x04)
	float *d4b7f9569d; // 0x04(0x04)
	float *913741c610; // 0x08(0x04)
};

// ScriptStruct TslGame.*ffcb6eb2ad
// Size: 0x2c (Inherited: 0x00)
struct F*ffcb6eb2ad {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*00c9425fc6
// Size: 0x38 (Inherited: 0x00)
struct F*00c9425fc6 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*7fe81506e0
// Size: 0x50 (Inherited: 0x00)
struct F*7fe81506e0 {
	struct F*2d3ecd0e82 *38744c4044; // 0x00(0x08)
	struct F*2d3ecd0e82 *d78d4b473d; // 0x08(0x08)
	struct F*d2abe40071 *8e31dcdbb2; // 0x10(0x10)
	struct F*d2abe40071 *738a748226; // 0x20(0x10)
	struct UCurveFloat* *f32a37f850; // 0x30(0x08)
	float *2a0af7682d; // 0x38(0x04)
	float *99c5b9b311; // 0x3c(0x04)
	float *0b44178238; // 0x40(0x04)
	float *679e952a76; // 0x44(0x04)
	float *f208e2ccea; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*feb691adc7
// Size: 0x2c (Inherited: 0x00)
struct F*feb691adc7 {
	struct FVector *28b3bad598; // 0x00(0x0c)
	float GravityScale; // 0x0c(0x04)
	bool *5e1f38b3d5; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *c345b14afc; // 0x14(0x04)
	float *d1cf4ebcd3; // 0x18(0x04)
	struct F*d2abe40071 *b54cd6e59f; // 0x1c(0x10)
};

// ScriptStruct TslGame.*2f5fba78ff
// Size: 0xb0 (Inherited: 0x00)
struct F*2f5fba78ff {
	float *daa35761b4; // 0x00(0x04)
	struct F*d2abe40071 *3b3e41c840; // 0x04(0x10)
	struct FVector *70f2a936c0; // 0x14(0x0c)
	struct F*d2abe40071 *9011aea2fb; // 0x20(0x10)
	struct FVector *2d2d07ceaf; // 0x30(0x0c)
	struct F*d2abe40071 *d3d32b77aa; // 0x3c(0x10)
	struct FVector *5870534a55; // 0x4c(0x0c)
	float *f685a8f091; // 0x58(0x04)
	float *56795599af; // 0x5c(0x04)
	struct FVector *eb01544658; // 0x60(0x0c)
	struct F*d2abe40071 *c686897276; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UCurveFloat* *ca8cb6abe6; // 0x80(0x08)
	struct UCurveFloat* *c933796241; // 0x88(0x08)
	struct FVector *40b9dd69ad; // 0x90(0x0c)
	struct F*d2abe40071 *b9eaf98c22; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct TslGame.*01d33e7fb1
// Size: 0x38 (Inherited: 0x00)
struct F*01d33e7fb1 {
	float *90e112aaec; // 0x00(0x04)
	float *27f02f3091; // 0x04(0x04)
	float *d8c7d715a9; // 0x08(0x04)
	struct FVector *7e94be9a61; // 0x0c(0x0c)
	struct F*d2abe40071 *b602784d5d; // 0x18(0x10)
	struct U*59a0aeaef9* *dd184e58e8; // 0x28(0x08)
	struct U*59a0aeaef9* *e891dae87d; // 0x30(0x08)
};

// ScriptStruct TslGame.*64d032cbe4
// Size: 0x90 (Inherited: 0x00)
struct F*64d032cbe4 {
	float *6bdb6c5770; // 0x00(0x04)
	float *38922a7888; // 0x04(0x04)
	float *90e112aaec; // 0x08(0x04)
	float *27f02f3091; // 0x0c(0x04)
	struct F*d2abe40071 *ff5fa677bd; // 0x10(0x10)
	struct F*d2abe40071 *f6b4e3327f; // 0x20(0x10)
	struct F*d2abe40071 *b88997f8cb; // 0x30(0x10)
	struct F*d2abe40071 *69a8c2314b; // 0x40(0x10)
	struct F*d2abe40071 *099d3d45a4; // 0x50(0x10)
	struct F*d2abe40071 *c2d4df325b; // 0x60(0x10)
	struct F*d2abe40071 *1e94c5d9aa; // 0x70(0x10)
	struct F*d2abe40071 *b5274a1bff; // 0x80(0x10)
};

// ScriptStruct TslGame.*100af73dd1
// Size: 0x0c (Inherited: 0x00)
struct F*100af73dd1 {
	float *907db8542c; // 0x00(0x04)
	float *46d179554e; // 0x04(0x04)
	float *246962242e; // 0x08(0x04)
};

// ScriptStruct TslGame.*704ef5dd9d
// Size: 0x38 (Inherited: 0x00)
struct F*704ef5dd9d {
	struct F*d2abe40071 *c284d6b3cf; // 0x00(0x10)
	struct F*d2abe40071 *9192274e37; // 0x10(0x10)
	struct UCurveFloat* *a00d21ea32; // 0x20(0x08)
	struct U*59a0aeaef9* *58d2a57c41; // 0x28(0x08)
	float *2611c023af; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*7e0acf8b75
// Size: 0xb0 (Inherited: 0x00)
struct F*7e0acf8b75 {
	float *d8c7d715a9; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct U*59a0aeaef9* *1718b39818; // 0x08(0x08)
	struct F*d2abe40071 *9247f502c4; // 0x10(0x10)
	struct FVector *7e94be9a61; // 0x20(0x0c)
	struct FVector *18ba9e5834; // 0x2c(0x0c)
	struct F*d2abe40071 *7d89cfe576; // 0x38(0x10)
	struct FVector *42b3434794; // 0x48(0x0c)
	struct F*d2abe40071 *ab071619d9; // 0x54(0x10)
	struct F*d2abe40071 *ac73ddf91f; // 0x64(0x10)
	struct F*d2abe40071 *b63736ed55; // 0x74(0x10)
	struct F*d2abe40071 *5a835d463b; // 0x84(0x10)
	float *73ec7cacef; // 0x94(0x04)
	float *386c1bc51c; // 0x98(0x04)
	float *20cbe960aa; // 0x9c(0x04)
	struct F*2d3ecd0e82 *97b7a62ac5; // 0xa0(0x08)
	struct F*2d3ecd0e82 *079694c4b9; // 0xa8(0x08)
};

// ScriptStruct TslGame.*c1a4533c1f
// Size: 0x24 (Inherited: 0x00)
struct F*c1a4533c1f {
	struct F*2d3ecd0e82 *c1f816f065; // 0x00(0x08)
	struct F*2d3ecd0e82 *b56c876dba; // 0x08(0x08)
	struct F*2d3ecd0e82 *b814a753a9; // 0x10(0x08)
	struct F*2d3ecd0e82 *036b6e59be; // 0x18(0x08)
	bool *79ac424de3; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*2b9c074136
// Size: 0x10 (Inherited: 0x00)
struct F*2b9c074136 {
	float Throttle; // 0x00(0x04)
	struct FVector *0bb332b71f; // 0x04(0x0c)
};

// ScriptStruct TslGame.*fc9f516603
// Size: 0x14 (Inherited: 0x00)
struct F*fc9f516603 {
	float *4a0e165ffa; // 0x00(0x04)
	float *6929ef335a; // 0x04(0x04)
	struct FVector *9acbfc784d; // 0x08(0x0c)
};

// ScriptStruct TslGame.*f35f5eee5a
// Size: 0x20 (Inherited: 0x00)
struct F*f35f5eee5a {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UParticleSystem* ParticleSystem_Console; // 0x08(0x08)
	struct UParticleSystem* ParticleSystem_KoreanAndChinese; // 0x10(0x08)
	float MinRadius; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a0afecb258
// Size: 0x30 (Inherited: 0x00)
struct F*a0afecb258 {
	struct UDecalComponent* *e13db4c6aa; // 0x00(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x08(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct TslGame.*d6e12430c6
// Size: 0xc8 (Inherited: 0xb0)
struct F*d6e12430c6 : F*12732c41f6 {
	struct TArray<struct F*61ba955c47> Array; // 0xb0(0x10)
	struct ATslFuelPuddleContainer* Owner; // 0xc0(0x08)
};

// ScriptStruct TslGame.*61ba955c47
// Size: 0x48 (Inherited: 0x0c)
struct F*61ba955c47 : F*726f9049bc {
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float *6364ddc6d7; // 0x1c(0x04)
	float *e5135ae8ac; // 0x20(0x04)
	bool *2868d1d4db; // 0x24(0x01)
	bool *f62b60e134; // 0x25(0x01)
	bool *306d26d320; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	int32 *64188d5a19; // 0x28(0x04)
	float *6d97d2be40; // 0x2c(0x04)
	struct FVector *9a5c8d2461; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct U*1cdd0c7413* *a1cbfb0343; // 0x40(0x08)
};

// ScriptStruct TslGame.*7f344fb699
// Size: 0x18 (Inherited: 0x00)
struct F*7f344fb699 {
	struct FString MapName; // 0x00(0x10)
	struct UClass* RestrictedAreasActorClass; // 0x10(0x08)
};

// ScriptStruct TslGame.*8bf76fc457
// Size: 0x28 (Inherited: 0x08)
struct F*8bf76fc457 : FTableRowBase {
	struct FString MasterItemID; // 0x08(0x10)
	struct TArray<struct F*753c241a77> AttachDroppedItems; // 0x18(0x10)
};

// ScriptStruct TslGame.*753c241a77
// Size: 0x10 (Inherited: 0x00)
struct F*753c241a77 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*9be6019b60
// Size: 0x20 (Inherited: 0x08)
struct F*9be6019b60 : FTableRowBase {
	int32 RandNumber; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*753c241a77> DroppedItems; // 0x10(0x10)
};

// ScriptStruct TslGame.*a5f288080a
// Size: 0x14 (Inherited: 0x00)
struct F*a5f288080a {
	int32 *5395daf79f; // 0x00(0x04)
	int32 *6ef734113d; // 0x04(0x04)
	enum class EOutGamePlatformProvider Platform; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct ATslRacingPlayerState* PlayerState; // 0x0c(0x08)
};

// ScriptStruct TslGame.*74be6d2187
// Size: 0x08 (Inherited: 0x00)
struct F*74be6d2187 {
	float GaugeDecreaseAmount; // 0x00(0x04)
	float GaugeDecreaseInterval; // 0x04(0x04)
};

// ScriptStruct TslGame.*3bdde54810
// Size: 0x10 (Inherited: 0x00)
struct F*3bdde54810 {
	struct TArray<struct FSLBVaultItem> Vault; // 0x00(0x10)
};

// ScriptStruct TslGame.SLBVaultItem
// Size: 0x28 (Inherited: 0x00)
struct FSLBVaultItem {
	struct FName ItemID; // 0x00(0x08)
	struct FName SkinItemId; // 0x08(0x08)
	struct TArray<struct FName> Attachments; // 0x10(0x10)
	int32 StackCount; // 0x20(0x04)
	bool bLastEquipped; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGame.*a8d4fe7982
// Size: 0x10 (Inherited: 0x00)
struct F*a8d4fe7982 {
	struct FName ItemID; // 0x00(0x08)
	bool *aa53d543a2; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*03c378e4d8
// Size: 0x10 (Inherited: 0x00)
struct F*03c378e4d8 {
	enum class ERespawnType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* Class; // 0x08(0x08)
};

// ScriptStruct TslGame.*3c26e89fd4
// Size: 0x10 (Inherited: 0x00)
struct F*3c26e89fd4 {
	struct ATslZombieDefensePlayerController* Killer; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*71fd5d75bc
// Size: 0x10 (Inherited: 0x00)
struct F*71fd5d75bc {
	struct UClass* Controller; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
};

// ScriptStruct TslGame.*f5f40ba61f
// Size: 0x08 (Inherited: 0x00)
struct F*f5f40ba61f {
	enum class *c528354d28 Rule; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*7b8a2fb1ae
// Size: 0x10 (Inherited: 0x00)
struct F*7b8a2fb1ae {
	struct TArray<struct UItem*> *61c1dff835; // 0x00(0x10)
};

// ScriptStruct TslGame.*deb0ecd78b
// Size: 0x10 (Inherited: 0x00)
struct F*deb0ecd78b {
	int32 *7af4885d33; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslZombiePlayerStartAndRespawn* *0bbce8e79d; // 0x08(0x08)
};

// ScriptStruct TslGame.*c2a37c475b
// Size: 0x18 (Inherited: 0x00)
struct F*c2a37c475b {
	enum class EAutoRecoveryType AutoType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *3bbc504d74; // 0x04(0x04)
	float *6ce308d526; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *a2a8ecc485; // 0x10(0x08)
};

// ScriptStruct TslGame.*c209d051d4
// Size: 0x20 (Inherited: 0x08)
struct F*c209d051d4 : FTableRowBase {
	int32 *fae3d0713e; // 0x08(0x04)
	float *a7e23d2bf3; // 0x0c(0x04)
	struct TArray<struct F*0d0994de4f> *57633d1895; // 0x10(0x10)
};

// ScriptStruct TslGame.*2602e897b7
// Size: 0x40 (Inherited: 0x00)
struct F*2602e897b7 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*ea9258463f
// Size: 0x10 (Inherited: 0x00)
struct F*ea9258463f {
	struct FName SocketName; // 0x00(0x08)
	struct FName *2d1c00cae4; // 0x08(0x08)
};

// ScriptStruct TslGame.*9e36684fc7
// Size: 0x10 (Inherited: 0x00)
struct F*9e36684fc7 {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	bool *66a52661c8; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*75f2fa7190
// Size: 0x10 (Inherited: 0x08)
struct F*75f2fa7190 : FTableRowBase {
	int32 RemainHelathPercent; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*0aa4557864
// Size: 0x10 (Inherited: 0x00)
struct F*0aa4557864 {
	struct TArray<struct ATslRacingCheckPoint*> CheckPoints; // 0x00(0x10)
};

// ScriptStruct TslGame.*8b924417a0
// Size: 0x18 (Inherited: 0x00)
struct F*8b924417a0 {
	struct FName *ecb0070ce5; // 0x00(0x08)
	struct TArray<struct UTexture2D*> *5c93f0ed96; // 0x08(0x10)
};

// ScriptStruct TslGame.*db57ee3a8d
// Size: 0x10 (Inherited: 0x00)
struct F*db57ee3a8d {
	struct FName ActionName; // 0x00(0x08)
	enum class *5553c9dea0 KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*d4444c992f
// Size: 0x38 (Inherited: 0x00)
struct F*d4444c992f {
	struct TArray<int32> Kills; // 0x00(0x10)
	int32 Death; // 0x10(0x04)
	int32 *306f42da0c; // 0x14(0x04)
	int32 *17459daca2; // 0x18(0x04)
	int32 *b3bf3048f6; // 0x1c(0x04)
	int32 *704d764f44; // 0x20(0x04)
	int32 *f22df07857; // 0x24(0x04)
	float *8af58a6720; // 0x28(0x04)
	char pad_2C[0xc]; // 0x2c(0x0c)
};

// ScriptStruct TslGame.*1f5f79f6ae
// Size: 0x08 (Inherited: 0x00)
struct F*1f5f79f6ae {
	int32 *c784d5d056; // 0x00(0x04)
	enum class ETslBombMatchWinType *44bd993186; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*d514dba810
// Size: 0x20 (Inherited: 0x00)
struct F*d514dba810 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*6157bac697
// Size: 0x10 (Inherited: 0x00)
struct F*6157bac697 {
	struct FName *5498e8f840; // 0x00(0x08)
	struct FName *487303177c; // 0x08(0x08)
};

// ScriptStruct TslGame.*06c0927f69
// Size: 0x48 (Inherited: 0x00)
struct F*06c0927f69 {
	struct FString Category; // 0x00(0x10)
	struct FString Command; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FLinearColor Color; // 0x30(0x10)
	enum class *7cb6dc5951 Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 DefaultParameter; // 0x44(0x04)
};

// ScriptStruct TslGame.*d01737a466
// Size: 0x90 (Inherited: 0x00)
struct F*d01737a466 {
	struct UParticleSystem* *dbe7373710; // 0x00(0x08)
	struct FName *2fd4bf7d39; // 0x08(0x08)
	struct FName *ce443dd4fb; // 0x10(0x08)
	struct FName *5f4d457593; // 0x18(0x08)
	struct TMap<int32, struct FVector> *99ea4e4d28; // 0x20(0x50)
	float *0bddd38693; // 0x70(0x04)
	float *3fb5d3f7db; // 0x74(0x04)
	float *259aeb5a5a; // 0x78(0x04)
	float *8e127e6075; // 0x7c(0x04)
	float *e8e4bfd44c; // 0x80(0x04)
	float *a528914dad; // 0x84(0x04)
	float *365dc8814a; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.*36272a0393
// Size: 0x18 (Inherited: 0x00)
struct F*36272a0393 {
	struct FFloatInterval HealthPercentRange; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct TslGame.*a08d862197
// Size: 0x14 (Inherited: 0x00)
struct F*a08d862197 {
	float *cdef5ed2cf; // 0x00(0x04)
	float *19b89e24df; // 0x04(0x04)
	float *f93d2e0fac; // 0x08(0x04)
	char pad_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct TslGame.*ea460d396f
// Size: 0x08 (Inherited: 0x00)
struct F*ea460d396f {
	float DragCoefficient; // 0x00(0x04)
	float SectionArea; // 0x04(0x04)
};

// ScriptStruct TslGame.*f1e5b4705b
// Size: 0x08 (Inherited: 0x00)
struct F*f1e5b4705b {
	bool *0ea4974d6e; // 0x00(0x01)
	enum class *2b95528797 *ee3c78ce47; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *c5016762c0; // 0x04(0x04)
};

// ScriptStruct TslGame.*652ae27a80
// Size: 0x18 (Inherited: 0x00)
struct F*652ae27a80 {
	struct UChildActorComponent* ChildActorComponent; // 0x00(0x08)
	struct FVector *412f555100; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*faf6c3dc5b
// Size: 0xb8 (Inherited: 0x00)
struct F*faf6c3dc5b {
	char pad_0[0xa0]; // 0x00(0xa0)
	struct AController* *3205e79dda; // 0xa0(0x08)
	struct AActor* *3dfa4bbe8b; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct TslGame.*2fe161ba2c
// Size: 0x28 (Inherited: 0x00)
struct F*2fe161ba2c {
	struct FName *747e732719; // 0x00(0x08)
	struct TArray<struct F*19d05f50bc> *453baf0d63; // 0x08(0x10)
	struct TArray<enum class EWeaponAttachmentSlotID> *d8978967d4; // 0x18(0x10)
};

// ScriptStruct TslGame.*d26a0475ab
// Size: 0x20 (Inherited: 0x00)
struct F*d26a0475ab {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*48a24bbe49
// Size: 0x18 (Inherited: 0x00)
struct F*48a24bbe49 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*64922a309d
// Size: 0x03 (Inherited: 0x00)
struct F*64922a309d {
	bool *f20b0ce610; // 0x00(0x01)
	bool *8934cdfe2e; // 0x01(0x01)
	bool *6e0a118af5; // 0x02(0x01)
};

// ScriptStruct TslGame.*4794d12d4d
// Size: 0x20 (Inherited: 0x00)
struct F*4794d12d4d {
	struct FString WeatherId; // 0x00(0x10)
	int32 Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName WeatherLevel; // 0x18(0x08)
};

// ScriptStruct TslGame.*bda7732303
// Size: 0x50 (Inherited: 0x00)
struct F*bda7732303 {
	int32 *da9c2407f7; // 0x00(0x04)
	float *5ba1134320; // 0x04(0x04)
	struct TArray<struct FVector> *5d156682c4; // 0x08(0x10)
	int32 *25a67c7bae; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> *4324a66caa; // 0x20(0x10)
	struct TArray<bool> *e5a1b405fd; // 0x30(0x10)
	struct TArray<struct UClass*> *f6231de70f; // 0x40(0x10)
};

// ScriptStruct TslGame.*cdfe4fec1d
// Size: 0x30 (Inherited: 0x00)
struct F*cdfe4fec1d {
	struct ATslLivingThingVolume* *f2f22e167e; // 0x00(0x08)
	int32 *da9c2407f7; // 0x08(0x04)
	float *5ba1134320; // 0x0c(0x04)
	int32 *bf209a04d3; // 0x10(0x04)
	float SpawnRate; // 0x14(0x04)
	int32 RandomSeed; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct F*e0297ae242> *4284a1dcf4; // 0x20(0x10)
};

// ScriptStruct TslGame.*e0297ae242
// Size: 0x18 (Inherited: 0x00)
struct F*e0297ae242 {
	int32 *f9fa1e7558; // 0x00(0x04)
	float *7e4f3e5140; // 0x04(0x04)
	struct TArray<struct F*2d0c8341e2> *5325472b23; // 0x08(0x10)
};

// ScriptStruct TslGame.*2d0c8341e2
// Size: 0x18 (Inherited: 0x00)
struct F*2d0c8341e2 {
	float ServerTimeSeconds; // 0x00(0x04)
	bool EventID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<bool> Params; // 0x08(0x10)
};

// ScriptStruct TslGame.*3fa556fddc
// Size: 0x08 (Inherited: 0x00)
struct F*3fa556fddc {
	enum class ELivingThingThreatLevel ThreatLevel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LastServerTimeSeconds; // 0x04(0x04)
};

// ScriptStruct TslGame.*890f36c4b0
// Size: 0x40 (Inherited: 0x00)
struct F*890f36c4b0 {
	int32 NetGUID; // 0x00(0x04)
	float SpawnTimeSeconds; // 0x04(0x04)
	float DestroyTimeSeconds; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator SpawnRotation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UClass* ActorClass; // 0x28(0x08)
	struct TArray<struct F*2d0c8341e2> EventArray; // 0x30(0x10)
};

// ScriptStruct TslGame.*dd48930f90
// Size: 0x30 (Inherited: 0x00)
struct F*dd48930f90 {
	struct TArray<struct F*34886f0e2f> TextureParams; // 0x00(0x10)
	struct TArray<struct F*e2d6812310> ScalarParams; // 0x10(0x10)
	struct TArray<struct F*933e510b46> VectorParams; // 0x20(0x10)
};

// ScriptStruct TslGame.*933e510b46
// Size: 0x18 (Inherited: 0x00)
struct F*933e510b46 {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct TslGame.*e2d6812310
// Size: 0x10 (Inherited: 0x00)
struct F*e2d6812310 {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*34886f0e2f
// Size: 0x10 (Inherited: 0x00)
struct F*34886f0e2f {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Value; // 0x08(0x08)
};

// ScriptStruct TslGame.*f71b8c2d00
// Size: 0x10 (Inherited: 0x00)
struct F*f71b8c2d00 {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
};

// ScriptStruct TslGame.*603f5bba74
// Size: 0x18 (Inherited: 0x00)
struct F*603f5bba74 {
	struct FName AnimName; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	float ServerTimeSeconds; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*30ce832ec7
// Size: 0x0c (Inherited: 0x00)
struct F*30ce832ec7 {
	float *e07d9959f0; // 0x00(0x04)
	int32 *f9fa1e7558; // 0x04(0x04)
	float *cbac441b38; // 0x08(0x04)
};

// ScriptStruct TslGame.*4eee2b640d
// Size: 0x38 (Inherited: 0x00)
struct F*4eee2b640d {
	float *e07d9959f0; // 0x00(0x04)
	int32 *f9fa1e7558; // 0x04(0x04)
	float *5ba1134320; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator *80568035e9; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FStringAssetReference ActorClass; // 0x28(0x10)
};

// ScriptStruct TslGame.*cfce289497
// Size: 0x30 (Inherited: 0x00)
struct F*cfce289497 {
	float *e07d9959f0; // 0x00(0x04)
	float *56b740a321; // 0x04(0x04)
	int32 EventID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<bool> *c9a67f17bb; // 0x10(0x10)
	struct TArray<int32> NetGUIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*912ae7f977
// Size: 0x38 (Inherited: 0x08)
struct F*912ae7f977 : FTableRowBase {
	float CellSize; // 0x08(0x04)
	struct FBoxSphereBounds VolumeBounds; // 0x0c(0x1c)
	struct TArray<struct F*f60b7fb829> Scanlines; // 0x28(0x10)
};

// ScriptStruct TslGame.*f60b7fb829
// Size: 0x30 (Inherited: 0x00)
struct F*f60b7fb829 {
	int32 *e093f287ec; // 0x00(0x04)
	int32 *41ab6ccfc9; // 0x04(0x04)
	int32 *2c4cf0094e; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int16> *59980bb4b1; // 0x10(0x10)
	struct TArray<float> LocationZ; // 0x20(0x10)
};

// ScriptStruct TslGame.*69b29a7e53
// Size: 0x10 (Inherited: 0x00)
struct F*69b29a7e53 {
	struct UClass* Class; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	bool *a40d89989f; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*d74adf022c
// Size: 0x18 (Inherited: 0x08)
struct F*d74adf022c : FTableRowBase {
	struct UAnimMontage* ReadyPose; // 0x08(0x08)
	struct UAnimMontage* NotReadyPose; // 0x10(0x08)
};

// ScriptStruct TslGame.WebPopupParam
// Size: 0x38 (Inherited: 0x00)
struct FWebPopupParam {
	struct FString PopupId; // 0x00(0x10)
	struct FString Uri; // 0x10(0x10)
	float X; // 0x20(0x04)
	float Y; // 0x24(0x04)
	float Width; // 0x28(0x04)
	float Height; // 0x2c(0x04)
	struct FColor BackgroundColor; // 0x30(0x04)
	bool UseBackgroundColor; // 0x34(0x01)
	bool ShowButtonGroup; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct TslGame.*a9cfbb9e93
// Size: 0x10 (Inherited: 0x00)
struct F*a9cfbb9e93 {
	struct TArray<struct U*e5589784b8*> LODs; // 0x00(0x10)
};

// ScriptStruct TslGame.*609383c718
// Size: 0x1b8 (Inherited: 0x08)
struct F*609383c718 : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush *8692d50bad; // 0x98(0x90)
	struct FSlateBrush *775c251735; // 0x128(0x90)
};

// ScriptStruct TslGame.*67c87e5ed2
// Size: 0x38 (Inherited: 0x08)
struct F*67c87e5ed2 : FSlateWidgetStyle {
	struct FSlateSound *4b06406b97; // 0x08(0x18)
	struct FSlateSound *be8abfcb4f; // 0x20(0x18)
};

// ScriptStruct TslGame.*91d7819f44
// Size: 0x218 (Inherited: 0x08)
struct F*91d7819f44 : FSlateWidgetStyle {
	struct FSlateBrush *428d85009a; // 0x08(0x90)
	struct FSlateBrush *e813d82ea8; // 0x98(0x90)
	struct FSlateBrush *2a06ab3dc9; // 0x128(0x90)
	struct FSlateSound *cdb38945ac; // 0x1b8(0x18)
	struct FSlateSound *05e2c7960c; // 0x1d0(0x18)
	struct FSlateSound *2f4008440c; // 0x1e8(0x18)
	struct FSlateSound *42b2bd7daa; // 0x200(0x18)
};

// ScriptStruct TslGame.*5f04d754df
// Size: 0x50 (Inherited: 0x00)
struct F*5f04d754df {
	struct FName MonsterName; // 0x00(0x08)
	struct FString NormalKill; // 0x08(0x10)
	struct FString DBNOKill; // 0x18(0x10)
	struct FString MonsterL10Name; // 0x28(0x10)
	struct UClass* DamageType; // 0x38(0x08)
	struct UTexture* DamageCauserIcon; // 0x40(0x08)
	float IconRatio; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*4fc749e78f
// Size: 0x30 (Inherited: 0x20)
struct F*4fc749e78f : F*163c70cb40 {
	struct FVector *e870865d4c; // 0x20(0x0c)
	float Scale; // 0x2c(0x04)
};

// ScriptStruct TslGame.*163c70cb40
// Size: 0x20 (Inherited: 0x00)
struct F*163c70cb40 {
	struct FString String; // 0x00(0x10)
	float Duration; // 0x10(0x04)
	struct FColor Color; // 0x14(0x04)
	int32 *f2bcf2a87e; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*0bc1ddb49c
// Size: 0x28 (Inherited: 0x00)
struct F*0bc1ddb49c {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *8ceac8f21e; // 0x1c(0x04)
	float Width; // 0x20(0x04)
	int32 *f2bcf2a87e; // 0x24(0x04)
};

// ScriptStruct TslGame.*9fe28f6b6e
// Size: 0x24 (Inherited: 0x00)
struct F*9fe28f6b6e {
	struct FVector Start; // 0x00(0x0c)
	struct FVector2D Size; // 0x0c(0x08)
	struct FColor Color; // 0x14(0x04)
	float *8ceac8f21e; // 0x18(0x04)
	float Width; // 0x1c(0x04)
	int32 *f2bcf2a87e; // 0x20(0x04)
};

// ScriptStruct TslGame.*44e4e8cca5
// Size: 0x30 (Inherited: 0x00)
struct F*44e4e8cca5 {
	struct FVector Origin; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float HalfHeight; // 0x1c(0x04)
	struct FColor Color; // 0x20(0x04)
	float *8ceac8f21e; // 0x24(0x04)
	float Width; // 0x28(0x04)
	int32 *f2bcf2a87e; // 0x2c(0x04)
};

// ScriptStruct TslGame.*d0d60224fc
// Size: 0x20 (Inherited: 0x00)
struct F*d0d60224fc {
	struct FVector Origin; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
	float *8ceac8f21e; // 0x14(0x04)
	float Width; // 0x18(0x04)
	int32 *f2bcf2a87e; // 0x1c(0x04)
};

// ScriptStruct TslGame.*1e95ec52a2
// Size: 0x2c (Inherited: 0x28)
struct F*1e95ec52a2 : F*17341d5b2a {
	float ArrowSize; // 0x28(0x04)
};

// ScriptStruct TslGame.*17341d5b2a
// Size: 0x28 (Inherited: 0x00)
struct F*17341d5b2a {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *8ceac8f21e; // 0x1c(0x04)
	float Width; // 0x20(0x04)
	int32 *f2bcf2a87e; // 0x24(0x04)
};

// ScriptStruct TslGame.*decddbe96d
// Size: 0x78 (Inherited: 0x08)
struct F*decddbe96d : FTableRowBase {
	struct FName SpawnEventName; // 0x08(0x08)
	enum class ETslSLBZombieSpawnType SpawnType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TMap<struct FName, struct F*6c7ffbf9b8> ZombieSpawnerSpawnDataMap; // 0x18(0x50)
	bool bPlayBGM; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float SpawnTime; // 0x6c(0x04)
	bool bDisablePatrol; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGame.*6c7ffbf9b8
// Size: 0x28 (Inherited: 0x00)
struct F*6c7ffbf9b8 {
	struct TArray<struct F*53885dbd55> ZombieSpawnDatas; // 0x00(0x10)
	struct F*baa0bb6747 ZombieOverrideData; // 0x10(0x10)
	int32 GroupID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*baa0bb6747
// Size: 0x10 (Inherited: 0x00)
struct F*baa0bb6747 {
	float *890a3f4d59; // 0x00(0x04)
	float *9a3a78bf36; // 0x04(0x04)
	float *9b664a01cb; // 0x08(0x04)
	int32 *771a1d53d5; // 0x0c(0x04)
};

// ScriptStruct TslGame.*53885dbd55
// Size: 0x50 (Inherited: 0x00)
struct F*53885dbd55 {
	struct FName SLBZombieStatusName; // 0x00(0x08)
	struct FName SLBOverrideZombieMovementName; // 0x08(0x08)
	struct UBehaviorTree* OverrideBehaviorTree; // 0x10(0x08)
	int32 SpawnCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> BuffTargetSpawnerNameOverride; // 0x20(0x10)
	struct TArray<struct F*a1e91c2117> RunnerSummonDatas; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct TslGame.*a1e91c2117
// Size: 0x18 (Inherited: 0x00)
struct F*a1e91c2117 {
	struct FName *6eacbb1857; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
	int32 SpawnCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*41b5b9bcde
// Size: 0x58 (Inherited: 0x48)
struct F*41b5b9bcde : F*2e35d69cec {
	struct FName *b7e31a4348; // 0x48(0x08)
	enum class ETslSLBStage Stage; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.*a9a86e6879
// Size: 0x78 (Inherited: 0x48)
struct F*a9a86e6879 : F*74a3064d1a {
	struct FName StatusName; // 0x48(0x08)
	enum class ETslSLBStage Stage; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float ThrowDistance; // 0x54(0x04)
	int32 EnableRoamingDoorOpen; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UBehaviorTree* RootBehaviorTree; // 0x60(0x08)
	struct TArray<struct UClass*> ImmunBuffList; // 0x68(0x10)
};

// ScriptStruct TslGame.*cb40d12ff1
// Size: 0x168 (Inherited: 0x00)
struct F*cb40d12ff1 {
	float *e964218fe0; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *840b35f75a; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, struct F*44a38e522b> *8c24b31bea; // 0x58(0x50)
	struct TMap<struct FName, struct F*44a38e522b> *ec6b09cc7a; // 0xa8(0x50)
	struct TMap<enum class EWeaponClass, struct F*354f7ec202> *9288bc69e8; // 0xf8(0x50)
	float *024f1fbad5; // 0x148(0x04)
	float *9bebda3fa8; // 0x14c(0x04)
	float *682732ad83; // 0x150(0x04)
	float *6ee5518bcc; // 0x154(0x04)
	float *8f12098982; // 0x158(0x04)
	float *5ff493c2ad; // 0x15c(0x04)
	float *562716d94d; // 0x160(0x04)
	enum class EDamageReason *c2874f8b34; // 0x164(0x01)
	bool *93f3f78461; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
};

// ScriptStruct TslGame.*354f7ec202
// Size: 0x10 (Inherited: 0x00)
struct F*354f7ec202 {
	float *0422e4ad88; // 0x00(0x04)
	float *99976c4559; // 0x04(0x04)
	float *31f3b5dc2d; // 0x08(0x04)
	bool *7142d7ac79; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*44a38e522b
// Size: 0x20 (Inherited: 0x00)
struct F*44a38e522b {
	float *31f3b5dc2d; // 0x00(0x04)
	float *167c8e4367; // 0x04(0x04)
	float *ce63236059; // 0x08(0x04)
	float *c550b44671; // 0x0c(0x04)
	float *d48cab16f0; // 0x10(0x04)
	float *c9fc702ebc; // 0x14(0x04)
	float *d1fac7a4cb; // 0x18(0x04)
	float *7a80d2267b; // 0x1c(0x04)
};

// ScriptStruct TslGame.*4e012e8643
// Size: 0x20 (Inherited: 0x00)
struct F*4e012e8643 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct TslGame.*67986d651f
// Size: 0x50 (Inherited: 0x00)
struct F*67986d651f {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*58d5a242ae
// Size: 0x10 (Inherited: 0x00)
struct F*58d5a242ae {
	struct UClass* *d2d0814e7d; // 0x00(0x08)
	int32 Number; // 0x08(0x04)
	int32 *610687843b; // 0x0c(0x04)
};

// ScriptStruct TslGame.*2de26baa9e
// Size: 0x10 (Inherited: 0x00)
struct F*2de26baa9e {
	struct UClass* *d2d0814e7d; // 0x00(0x08)
	int32 Number; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7de15409b5
// Size: 0x10 (Inherited: 0x00)
struct F*7de15409b5 {
	struct UClass* *d2d0814e7d; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6bbe2c0b72
// Size: 0x20 (Inherited: 0x08)
struct F*6bbe2c0b72 : FTableRowBase {
	enum class EPhysicalSurface *f92dc50ea0; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*0f58767c4e *54405bdd3a; // 0x10(0x10)
};

// ScriptStruct TslGame.*0f58767c4e
// Size: 0x10 (Inherited: 0x00)
struct F*0f58767c4e {
	float Damage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* *271a14efcc; // 0x08(0x08)
};

// ScriptStruct TslGame.*be9e0cc377
// Size: 0x20 (Inherited: 0x00)
struct F*be9e0cc377 {
	enum class *e35b7a0b41 Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FStringClassReference *19ea62f276; // 0x08(0x10)
	bool *3353c1ec9d; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*2c58d9218b
// Size: 0x28 (Inherited: 0x08)
struct F*2c58d9218b : FTableRowBase {
	enum class *e35b7a0b41 Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FStringClassReference *19ea62f276; // 0x10(0x10)
	float *7b58746405; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*62f22c5dba
// Size: 0x08 (Inherited: 0x00)
struct F*62f22c5dba {
	float *3161438920; // 0x00(0x04)
	float *617ebd3a2c; // 0x04(0x04)
};

// ScriptStruct TslGame.*fe7b4e2ff1
// Size: 0xb0 (Inherited: 0x00)
struct F*fe7b4e2ff1 {
	float *e964218fe0; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *840b35f75a; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, float> *cab74ec95a; // 0x58(0x50)
	float *eaf9ab5873; // 0xa8(0x04)
	enum class EEquipSlotID *02911b9092; // 0xac(0x01)
	enum class EDamageReason *c2874f8b34; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
};

// ScriptStruct TslGame.*9da0d57808
// Size: 0x38 (Inherited: 0x00)
struct F*9da0d57808 {
	struct ATslCharacter* *02784b02ea; // 0x00(0x08)
	struct ATslCharacter* *6648871eb1; // 0x08(0x08)
	struct ATslPostProcessEffect* Effect; // 0x10(0x08)
	struct ATslPlayerController* PlayerController; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct TslGame.*f0eb15502f
// Size: 0x20 (Inherited: 0x00)
struct F*f0eb15502f {
	struct UClass* MonsterTemplate; // 0x00(0x08)
	int32 SpawnMaxCount; // 0x08(0x04)
	int32 CurTotalSpawnCount; // 0x0c(0x04)
	int32 CurSameSpawnCount; // 0x10(0x04)
	int32 *3863931384; // 0x14(0x04)
	int32 *610687843b; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.OverPowerUserPlayData
// Size: 0x10 (Inherited: 0x08)
struct FOverPowerUserPlayData : FBaseUserPlayData {
	int32 OpCoins; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*48a0a15d15
// Size: 0x10 (Inherited: 0x00)
struct F*48a0a15d15 {
	struct UClass* *559b19dd91; // 0x00(0x08)
	float *328bf98705; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.LogRacingModeCheckPointPlayData
// Size: 0x20 (Inherited: 0x00)
struct FLogRacingModeCheckPointPlayData {
	int32 *1b8bc08dba; // 0x00(0x04)
	float *21a99a8b70; // 0x04(0x04)
	int32 *9fb00873a6; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString *abaaa495c8; // 0x10(0x10)
};

// ScriptStruct TslGame.*7c71dc2f1d
// Size: 0x0c (Inherited: 0x00)
struct F*7c71dc2f1d {
	int32 *b3dd71952e; // 0x00(0x04)
	int32 Labs; // 0x04(0x04)
	float *0c1eb11387; // 0x08(0x04)
};

// ScriptStruct TslGame.*cd99e7b3a1
// Size: 0x50 (Inherited: 0x00)
struct F*cd99e7b3a1 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UTexture2D* RewardImage; // 0x08(0x08)
	struct FText RewardName; // 0x10(0x18)
	struct FText RewardDescription; // 0x28(0x18)
	struct TArray<struct F*a8e91aa671> TeamHistory; // 0x40(0x10)
};

// ScriptStruct TslGame.*a8e91aa671
// Size: 0x18 (Inherited: 0x00)
struct F*a8e91aa671 {
	int32 SquadMemberIndex; // 0x00(0x04)
	struct FLinearColor Color; // 0x04(0x10)
	enum class ETslSLBStageDifficulty History; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*5b155d4aae
// Size: 0x20 (Inherited: 0x00)
struct F*5b155d4aae {
	enum class ETslSLBStage ID; // 0x00(0x01)
	bool bIsSelected; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 VotedNum; // 0x04(0x04)
	enum class ETslSLBStageDifficulty MyHistory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*a8e91aa671> TeamHistory; // 0x10(0x10)
};

// ScriptStruct TslGame.*486852e833
// Size: 0x08 (Inherited: 0x00)
struct F*486852e833 {
	enum class ETslSLBStageDifficulty ID; // 0x00(0x01)
	bool bIsSelected; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 VotedNum; // 0x04(0x04)
};

// ScriptStruct TslGame.*9eaa71db59
// Size: 0x30 (Inherited: 0x00)
struct F*9eaa71db59 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
	int32 *734fd4df73; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PlayerName; // 0x10(0x10)
	int32 Kill; // 0x20(0x04)
	int32 *1a51425a5d; // 0x24(0x04)
	bool *9db6b2dd34; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*8aa6546285
// Size: 0x10 (Inherited: 0x00)
struct F*8aa6546285 {
	struct FName *ecb0070ce5; // 0x00(0x08)
	int32 *7812c2c74b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.SLBUserPlayData
// Size: 0x28 (Inherited: 0x08)
struct FSLBUserPlayData : FBaseUserPlayData {
	struct TArray<struct FSLBVaultItem> Vault; // 0x08(0x10)
	struct TArray<struct FTslSLBStageID> BestClearStageDifficulty; // 0x18(0x10)
};

// ScriptStruct TslGame.*87f7d9aa8c
// Size: 0x08 (Inherited: 0x00)
struct F*87f7d9aa8c {
	int32 Kill; // 0x00(0x04)
	int32 *1a51425a5d; // 0x04(0x04)
};

// ScriptStruct TslGame.*11c7649f7e
// Size: 0x20 (Inherited: 0x00)
struct F*11c7649f7e {
	enum class ETslSLBInteractionType *3395938c4d; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *79b47ddac0; // 0x04(0x04)
	float *09158a8863; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ATslSLBMissionGeneratorActor* *ed35e8f675; // 0x10(0x08)
	struct ATslSLBExitActor* *c1903adcf9; // 0x18(0x08)
};

// ScriptStruct TslGame.*ed67983faa
// Size: 0xb0 (Inherited: 0x00)
struct F*ed67983faa {
	struct TArray<struct F*eae45390f8> ESportsTeamInfos; // 0x00(0x10)
	char pad_10[0xa0]; // 0x10(0xa0)
};

// ScriptStruct TslGame.*eae45390f8
// Size: 0x40 (Inherited: 0x00)
struct F*eae45390f8 {
	struct FString TeamName; // 0x00(0x10)
	struct FString TeamFullName; // 0x10(0x10)
	struct FString TeamLogoUrl; // 0x20(0x10)
	struct TArray<struct F*3c5ebf80ec> Rosters; // 0x30(0x10)
};

// ScriptStruct TslGame.*3c5ebf80ec
// Size: 0x40 (Inherited: 0x00)
struct F*3c5ebf80ec {
	struct FString Name; // 0x00(0x10)
	struct FString FullName; // 0x10(0x10)
	struct FString Nickname; // 0x20(0x10)
	struct FString PhotoUrl; // 0x30(0x10)
};

// ScriptStruct TslGame.*d9b0b01830
// Size: 0x50 (Inherited: 0x00)
struct F*d9b0b01830 {
	struct TMap<struct FName, struct F*5515822b3d> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*5515822b3d
// Size: 0x50 (Inherited: 0x00)
struct F*5515822b3d {
	struct TMap<struct FName, struct FString> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*386c139a45
// Size: 0x10 (Inherited: 0x00)
struct F*386c139a45 {
	struct TArray<struct F*5ac4eb6c5e> Hierarchy; // 0x00(0x10)
};

// ScriptStruct TslGame.*5ac4eb6c5e
// Size: 0x48 (Inherited: 0x00)
struct F*5ac4eb6c5e {
	struct F*a3b2de6592 TabDesc_DataTableRow; // 0x00(0x38)
	struct TArray<struct F*19ddf4abd1> SubTabs; // 0x38(0x10)
};

// ScriptStruct TslGame.*19ddf4abd1
// Size: 0x50 (Inherited: 0x00)
struct F*19ddf4abd1 {
	struct F*e63b42737f SubTabDesc_DataTableRow; // 0x00(0x40)
	struct TArray<struct F*04aed6a192> Categories; // 0x40(0x10)
};

// ScriptStruct TslGame.*04aed6a192
// Size: 0x60 (Inherited: 0x00)
struct F*04aed6a192 {
	struct F*0655858272 CategoryDesc_DataTableRow; // 0x00(0x50)
	struct TArray<struct F*82c6cc6ec6> Items_DataTable; // 0x50(0x10)
};

// ScriptStruct TslGame.*f8e57bf816
// Size: 0x18 (Inherited: 0x00)
struct F*f8e57bf816 {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*05bde7cbd5
// Size: 0x24 (Inherited: 0x00)
struct F*05bde7cbd5 {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct TslGame.*97ddea7cb6
// Size: 0x70 (Inherited: 0x00)
struct F*97ddea7cb6 {
	float *0b834b5a51; // 0x00(0x04)
	float *851582eabe; // 0x04(0x04)
	float *edf93b1466; // 0x08(0x04)
	float *4862cde91f; // 0x0c(0x04)
	float *75845b2eeb; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UParticleSystem* *4a75cb8801; // 0x18(0x08)
	struct UClass* *2d9991850f; // 0x20(0x08)
	struct UClass* *c08f81cd8b; // 0x28(0x08)
	struct UAkAudioEvent* *3a5b48b573; // 0x30(0x08)
	struct UAkAudioEvent* *cb295be1b2; // 0x38(0x08)
	struct UAkAudioEvent* *86bf5e6f18; // 0x40(0x08)
	struct UAkAudioEvent* *769a6c800a; // 0x48(0x08)
	struct UAkAudioEvent* *b7241cea74; // 0x50(0x08)
	float *9ae6270ee7; // 0x58(0x04)
	float *2c83cdc961; // 0x5c(0x04)
	float *7475c518ec; // 0x60(0x04)
	float *ff0bc7d8d7; // 0x64(0x04)
	float *d8e9e86e91; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct TslGame.*a00c66c2f3
// Size: 0xe8 (Inherited: 0x00)
struct F*a00c66c2f3 {
	bool *bf5cc90326; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *7777d340c6; // 0x04(0x04)
	float *4756e88553; // 0x08(0x04)
	float *4f5aa1c519; // 0x0c(0x04)
	struct UCurveFloat* *a056c64c90; // 0x10(0x08)
	struct UClass* *271a14efcc; // 0x18(0x08)
	struct UClass* *e8b528af84; // 0x20(0x08)
	struct UClass* *6e9e132a1b; // 0x28(0x08)
	struct UClass* *28638a9467; // 0x30(0x08)
	struct UClass* *6431737ff8; // 0x38(0x08)
	int32 *fdc79c75e7; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UClass* *2067fb5b6c; // 0x48(0x08)
	float *8106901c5a; // 0x50(0x04)
	float *6af875ce1c; // 0x54(0x04)
	struct UTexture* DamageCauserIcon; // 0x58(0x08)
	float DamageIconRatio; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText DamageCauserItemName; // 0x68(0x18)
	enum class EWeaponClass DamageCauserClass; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *73ff8fe1d8; // 0x84(0x04)
	char *f1ef7cc4de : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float RotationSpeed; // 0x8c(0x04)
	struct F*5dca255f05 *5dca255f05; // 0x90(0x40)
	bool *22fe56f057; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float PenetrationDepth; // 0xd4(0x04)
	float *479f1e399e; // 0xd8(0x04)
	float *4df2b08b7f; // 0xdc(0x04)
	bool *2e7aadf795; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// ScriptStruct TslGame.PubgIdTierData
// Size: 0x20 (Inherited: 0x00)
struct FPubgIdTierData {
	struct FString ID; // 0x00(0x10)
	struct FString ImagePath; // 0x10(0x10)
};

// ScriptStruct TslGame.*af1ae24e50
// Size: 0x30 (Inherited: 0x00)
struct F*af1ae24e50 {
	enum class ETslPubgIdAssetType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
	struct F*da672abddc TimerHandle; // 0x20(0x08)
	int32 RefCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*88d776d252
// Size: 0x10 (Inherited: 0x00)
struct F*88d776d252 {
	struct UAkAudioEvent* *d98c4f8e96; // 0x00(0x08)
	float *31e1e3fc58; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*073f9d996a
// Size: 0x18 (Inherited: 0x08)
struct F*073f9d996a : FTableRowBase {
	enum class ERadioMessageAlarmSoundCategory *ec7644bc66; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* *c1f1de907f; // 0x10(0x08)
};

// ScriptStruct TslGame.*c43fcd9262
// Size: 0x28 (Inherited: 0x08)
struct F*c43fcd9262 : FTableRowBase {
	enum class ERadioMessageCategory Category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString StringKey; // 0x10(0x10)
	enum class ERadioMessageAlarmSoundCategory *ec7644bc66; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*1c2b3c3fd4
// Size: 0x18 (Inherited: 0x00)
struct F*1c2b3c3fd4 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString StringKey; // 0x08(0x10)
};

// ScriptStruct TslGame.*abff41fe3c
// Size: 0x30 (Inherited: 0x00)
struct F*abff41fe3c {
	struct FName *30618b27b0; // 0x00(0x08)
	struct UCurveFloat* *6be0fae18c; // 0x08(0x08)
	bool *a5370bf494; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float StartTime; // 0x14(0x04)
	float *52f36640ba; // 0x18(0x04)
	char pad_1C[0x8]; // 0x1c(0x08)
	float *5827b371cb; // 0x24(0x04)
	float *e1f2e948c5; // 0x28(0x04)
	float *d3157dc835; // 0x2c(0x04)
};

// ScriptStruct TslGame.DoorBreakingState
// Size: 0x01 (Inherited: 0x00)
struct FDoorBreakingState {
	char *eeb843fa15 : 1; // 0x00(0x01)
	char *fbbd19281e : 1; // 0x00(0x01)
	char *39da5568bd : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct TslGame.*a79a87bbfc
// Size: 0x20 (Inherited: 0x00)
struct F*a79a87bbfc {
	struct FString ModeName; // 0x00(0x10)
	struct FString *c892424385; // 0x10(0x10)
};

// ScriptStruct TslGame.*83835e5acb
// Size: 0x18 (Inherited: 0x00)
struct F*83835e5acb {
	struct FStringClassReference *14e7be0eba; // 0x00(0x10)
	struct UClass* ItemClass; // 0x10(0x08)
};

// ScriptStruct TslGame.*53c8bb86aa
// Size: 0x18 (Inherited: 0x00)
struct F*53c8bb86aa {
	enum class ESandboxPowerType *93d28a1d2a; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*462a799e0d> *6c2db44a07; // 0x08(0x10)
};

// ScriptStruct TslGame.*462a799e0d
// Size: 0x20 (Inherited: 0x00)
struct F*462a799e0d {
	struct UParticleSystem* PS; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FRotator RelativeRotation; // 0x10(0x0c)
	bool *1b3f50fe9a; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*73012b377c
// Size: 0x10 (Inherited: 0x00)
struct F*73012b377c {
	struct USceneComponent* *76e7681159; // 0x00(0x08)
	struct AActor* ChildActor; // 0x08(0x08)
};

// ScriptStruct TslGame.*24b9200762
// Size: 0xa0 (Inherited: 0x00)
struct F*24b9200762 {
	struct FName Name; // 0x00(0x08)
	float *45b18ad62c; // 0x08(0x04)
	float *afcd1d451c; // 0x0c(0x04)
	struct FVector *f504116c43; // 0x10(0x0c)
	struct FRotator *7132383d1e; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *fe3a9b9f55; // 0x30(0x30)
	struct FTransform *3f49f6c1e7; // 0x60(0x30)
	float *d524d331e1; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct TslGame.*a7378dd728
// Size: 0x1c (Inherited: 0x00)
struct F*a7378dd728 {
	struct FVector2D RealTime; // 0x00(0x08)
	struct FVector2D TimeDilation; // 0x08(0x08)
	struct FVector2D Area; // 0x10(0x08)
	float *419c34ed0b; // 0x18(0x04)
};

// ScriptStruct TslGame.*84d6cec6d2
// Size: 0x0c (Inherited: 0x00)
struct F*84d6cec6d2 {
	struct FVector2D RealTime; // 0x00(0x08)
	float TimeDilation; // 0x08(0x04)
};

// ScriptStruct TslGame.*add619fe63
// Size: 0x58 (Inherited: 0x50)
struct F*add619fe63 : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*9bd293c500
// Size: 0x18 (Inherited: 0x00)
struct F*9bd293c500 {
	struct TArray<struct FName> *165cb2a32d; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*13d41205fd
// Size: 0x340 (Inherited: 0x00)
struct F*13d41205fd {
	struct F*ee5e6ace1b *7fa53a0434; // 0x00(0x130)
	struct F*ee5e6ace1b *8811b9f370; // 0x130(0x130)
	struct FName *3cacb1cca5; // 0x260(0x08)
	struct FName *b8843582bd; // 0x268(0x08)
	float *a963a4f359; // 0x270(0x04)
	float *7bb28e82c5; // 0x274(0x04)
	float *05745135cd; // 0x278(0x04)
	bool *d939d1927d; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UClass* *a3a1a88bae; // 0x280(0x20)
	struct UClass* *89baa2d215; // 0x2a0(0x20)
	struct UClass* *b71f271206; // 0x2c0(0x20)
	struct UClass* *893bc26fb8; // 0x2e0(0x20)
	struct UClass* *36861d5d44; // 0x300(0x20)
	struct UClass* *95fa81c4f9; // 0x320(0x20)
};

// ScriptStruct TslGame.*d0f9fb6610
// Size: 0x28 (Inherited: 0x00)
struct F*d0f9fb6610 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*81baaf0fab
// Size: 0x80 (Inherited: 0x08)
struct F*81baaf0fab : FTableRowBase {
	int32 SprayDecalID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SprayDecalLocalizedName; // 0x10(0x18)
	struct UTexture2D* IconTexture; // 0x28(0x20)
	struct UTexture2D* SprayDecalTexture; // 0x48(0x20)
	int32 SpraySize; // 0x68(0x04)
	struct FLinearColor SprayColor; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*793a09c42d
// Size: 0x08 (Inherited: 0x00)
struct F*793a09c42d {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*f941df0231
// Size: 0x10 (Inherited: 0x00)
struct F*f941df0231 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*2ec47208e8
// Size: 0x10 (Inherited: 0x00)
struct F*2ec47208e8 {
	struct TArray<int32> *287d53ece5; // 0x00(0x10)
};

// ScriptStruct TslGame.*e692151860
// Size: 0x20 (Inherited: 0x00)
struct F*e692151860 {
	struct TArray<struct F*5e106cd3fc> *8798a97978; // 0x00(0x10)
	struct FString *a0e5db0a09; // 0x10(0x10)
};

// ScriptStruct TslGame.*5e106cd3fc
// Size: 0x70 (Inherited: 0x00)
struct F*5e106cd3fc {
	struct FString *a0e5db0a09; // 0x00(0x10)
	struct FName *c62f194a3a; // 0x10(0x08)
	int32 *495efbcc0a; // 0x18(0x04)
	struct FVector_NetQuantize ImpactPoint; // 0x1c(0x0c)
	struct FVector_NetQuantize Location; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0x0c)
	struct UPrimitiveComponent* Component; // 0x40(0x08)
	struct AActor* Actor; // 0x48(0x08)
	float *0240d021d6; // 0x50(0x04)
	char pad_54[0x1c]; // 0x54(0x1c)
};

// ScriptStruct TslGame.*96fc1ed934
// Size: 0x18 (Inherited: 0x00)
struct F*96fc1ed934 {
	struct TArray<struct FColor> *36a23f6e5e; // 0x00(0x10)
	struct FVector2D TextureSize; // 0x10(0x08)
};

// ScriptStruct TslGame.*5cde923657
// Size: 0x10 (Inherited: 0x00)
struct F*5cde923657 {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FVector2D Size; // 0x08(0x08)
};

// ScriptStruct TslGame.*4dba46038a
// Size: 0x58 (Inherited: 0x08)
struct F*4dba46038a : FTableRowBase {
	int32 TrainingSoundID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SoundOwnerWeaponName; // 0x10(0x18)
	int32 MinAudibleRangeMeter; // 0x28(0x04)
	int32 MaxAudibleRangeMeter; // 0x2c(0x04)
	float MinSoundPlayDelay; // 0x30(0x04)
	float MaxSoundPlayDelay; // 0x34(0x04)
	float MinSoundPlayContinuousPeriod; // 0x38(0x04)
	float MaxSoundPlayContinuousPeriod; // 0x3c(0x04)
	float TimeBetweenShots; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UTexture* WeaponIcon; // 0x48(0x08)
	struct UAkAudioEvent* TrainingSound_Fire_LongTail; // 0x50(0x08)
};

// ScriptStruct TslGame.*a2c58f438a
// Size: 0x270 (Inherited: 0x00)
struct F*a2c58f438a {
	bool bUseSelfCasting; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*ee5e6ace1b SelfWithCastConfig; // 0x08(0x130)
	bool bUseTeammateCasting; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct F*ee5e6ace1b TeammateWithCastConfig; // 0x140(0x130)
};

// ScriptStruct TslGame.*227e4edcfd
// Size: 0x98 (Inherited: 0x08)
struct F*227e4edcfd : FTableRowBase {
	struct FName ActionID; // 0x08(0x08)
	bool bDefaultData; // 0x10(0x01)
	bool bImportantMessage; // 0x11(0x01)
	bool bShowWarningImg; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct UClass* TriggerObj; // 0x18(0x20)
	float DelayTriggerTime; // 0x38(0x04)
	bool bInitTriggerCheck; // 0x3c(0x01)
	bool bOnceTrigger; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float TriggerCoolTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct F*2e1e88ed62 GuideMessageData; // 0x48(0x50)
};

// ScriptStruct TslGame.*2e1e88ed62
// Size: 0x50 (Inherited: 0x00)
struct F*2e1e88ed62 {
	struct FText Title; // 0x00(0x18)
	struct FText PCDescription; // 0x18(0x18)
	struct FText ConsoleDescription; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct TslGame.*44c358206f
// Size: 0x01 (Inherited: 0x00)
struct F*44c358206f {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*5f62fb3613
// Size: 0x80 (Inherited: 0x00)
struct F*5f62fb3613 {
	struct FText *eef2dc52b2; // 0x00(0x18)
	struct FText *57a13e87c0; // 0x18(0x18)
	struct FSlateColor *a15cd2190e; // 0x30(0x28)
	struct FSlateColor *c812db888e; // 0x58(0x28)
};

// ScriptStruct TslGame.*c9d4ea1bee
// Size: 0x50 (Inherited: 0x00)
struct F*c9d4ea1bee {
	struct FText *eef2dc52b2; // 0x00(0x18)
	struct FText *57a13e87c0; // 0x18(0x18)
	struct FLinearColor *841637ad8e; // 0x30(0x10)
	struct FLinearColor *5be058663d; // 0x40(0x10)
};

// ScriptStruct TslGame.*38b087efcb
// Size: 0x01 (Inherited: 0x00)
struct F*38b087efcb {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*089b1d4f55
// Size: 0x168 (Inherited: 0x00)
struct F*089b1d4f55 {
	bool *1a92149c3f; // 0x00(0x01)
	enum class ETslTrainingDashboardPracticeUIType PracticeType; // 0x01(0x01)
	enum class ETslTrainingDashboardRangeUIType *396cdc4735; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct F*fa19c3fa10 *40cee7df60; // 0x08(0x50)
	struct F*fa19c3fa10 *735b58a262; // 0x58(0x50)
	struct F*fa19c3fa10 *d7a2c2e7f3; // 0xa8(0x50)
	struct F*fa19c3fa10 *e1efa3283d; // 0xf8(0x50)
	struct F*4d5bf8a88f *8a2636b0de; // 0x148(0x20)
};

// ScriptStruct TslGame.*4d5bf8a88f
// Size: 0x20 (Inherited: 0x00)
struct F*4d5bf8a88f {
	int32 *86a1cad09e; // 0x00(0x04)
	int32 *ef931a9167; // 0x04(0x04)
	float *44fe0cf891; // 0x08(0x04)
	int32 *2a2afad1dc; // 0x0c(0x04)
	struct TArray<int32> *5937945b8e; // 0x10(0x10)
};

// ScriptStruct TslGame.*fa19c3fa10
// Size: 0x50 (Inherited: 0x00)
struct F*fa19c3fa10 {
	int32 Score; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	struct F*161fe1696a *70166aa19d; // 0x08(0x38)
	struct F*721188aadf *455ca4133d; // 0x40(0x10)
};

// ScriptStruct TslGame.*721188aadf
// Size: 0x10 (Inherited: 0x00)
struct F*721188aadf {
	struct FString *7a626e8af8; // 0x00(0x10)
};

// ScriptStruct TslGame.*161fe1696a
// Size: 0x38 (Inherited: 0x00)
struct F*161fe1696a {
	float Accuracy; // 0x00(0x04)
	int32 HeadShot; // 0x04(0x04)
	struct FText WeaponName; // 0x08(0x18)
	float *df792d54f8; // 0x20(0x04)
	float *481c04ee8a; // 0x24(0x04)
	float *34f3dfde41; // 0x28(0x04)
	float *d57890b974; // 0x2c(0x04)
	float *647839d5c9; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*a232f44222
// Size: 0x28 (Inherited: 0x00)
struct F*a232f44222 {
	struct FLinearColor *5d8b3d685a; // 0x00(0x10)
	enum class ETslTrainingDashboardRangeUIType *396cdc4735; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<int32> Scores; // 0x18(0x10)
};

// ScriptStruct TslGame.*25083f0be6
// Size: 0x24 (Inherited: 0x00)
struct F*25083f0be6 {
	struct FLinearColor *82d0ae6aaf; // 0x00(0x10)
	float *fc80afb286; // 0x10(0x04)
	float *bd42bd1400; // 0x14(0x04)
	float *4aa4199a9e; // 0x18(0x04)
	float *0c5976a3b2; // 0x1c(0x04)
	float *5cf7eb005b; // 0x20(0x04)
};

// ScriptStruct TslGame.*a6a85ab61a
// Size: 0x70 (Inherited: 0x00)
struct F*a6a85ab61a {
	struct FSlateColor *77cfa4c091; // 0x00(0x28)
	struct FSlateColor *9c7b604f25; // 0x28(0x28)
	struct FLinearColor *7bb1f0ff38; // 0x50(0x10)
	struct FLinearColor *c96c31eb39; // 0x60(0x10)
};

// ScriptStruct TslGame.*d6713e9c5e
// Size: 0xc48 (Inherited: 0x00)
struct F*d6713e9c5e {
	struct UAnimMontage* *bff68c44db; // 0x00(0x08)
	struct F*2a94286435 *37b26f85c7; // 0x08(0xc40)
};

// ScriptStruct TslGame.*eefbf5c67c
// Size: 0x68 (Inherited: 0x08)
struct F*eefbf5c67c : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	enum class ETslArenaLoadoutItemCategory Category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 Count; // 0x14(0x04)
	int32 Price; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FName AmmoItemID; // 0x20(0x08)
	int32 AmmoCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ScopeID; // 0x30(0x08)
	bool LoadoutAvailable; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 ShowRound; // 0x3c(0x04)
	int32 HideRound; // 0x40(0x04)
	bool AllWinBonus; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FName Attachment_Magazine; // 0x48(0x08)
	struct FName Attachment_Muzzle; // 0x50(0x08)
	struct FName Attachment_Foregrip; // 0x58(0x08)
	struct FName Attachment_Stock; // 0x60(0x08)
};

// ScriptStruct TslGame.*6c346e9120
// Size: 0x10 (Inherited: 0x00)
struct F*6c346e9120 {
	bool *38bd0eae67; // 0x00(0x01)
	bool *44bc9502dc; // 0x01(0x01)
	bool *b379ed0401; // 0x02(0x01)
	bool *00d1540eac; // 0x03(0x01)
	bool *dcc71814a9; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 *57ba0584ab; // 0x08(0x04)
	int32 *9e5d33ffd6; // 0x0c(0x04)
};

// ScriptStruct TslGame.*cdff74ffbb
// Size: 0x24 (Inherited: 0x00)
struct F*cdff74ffbb {
	struct FLinearColor BrushColor; // 0x00(0x10)
	struct FMargin Padding; // 0x10(0x10)
	float *21ae8586c6; // 0x20(0x04)
};

// ScriptStruct TslGame.*b4c0801c1a
// Size: 0x20 (Inherited: 0x00)
struct F*b4c0801c1a {
	float StartRange; // 0x00(0x04)
	float EndRange; // 0x04(0x04)
	struct FText ResultText; // 0x08(0x18)
};

// ScriptStruct TslGame.*97dd478c3e
// Size: 0x20 (Inherited: 0x08)
struct F*97dd478c3e : FTableRowBase {
	enum class EConditionOfDeath ConditionOfDeathCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* ConditionOfDeathIcon; // 0x10(0x08)
	float IconRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*c9002241e2
// Size: 0x20 (Inherited: 0x08)
struct F*c9002241e2 : FTableRowBase {
	enum class EDamageTypeCategory DamageTypeCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* CauseOfDeathIcon; // 0x10(0x08)
	float IconRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*f565f26069
// Size: 0x18 (Inherited: 0x08)
struct F*f565f26069 : FTableRowBase {
	enum class EUIAkEvent *5044c84413; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* AkEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*a36c52ad51
// Size: 0x70 (Inherited: 0x08)
struct F*a36c52ad51 : FTableRowBase {
	int32 *4d8c14cc09; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> *7cfa4b6b7b; // 0x10(0x10)
	struct TMap<struct FString, struct F*2863d98b48> *a36c52ad51; // 0x20(0x50)
};

// ScriptStruct TslGame.*2863d98b48
// Size: 0x10 (Inherited: 0x00)
struct F*2863d98b48 {
	struct TArray<struct FName> *2863d98b48; // 0x00(0x10)
};

// ScriptStruct TslGame.*0761e3f15b
// Size: 0x58 (Inherited: 0x08)
struct F*0761e3f15b : FTableRowBase {
	struct TArray<struct FName> *c38854ddb6; // 0x08(0x10)
	struct FText PopupText; // 0x18(0x18)
	struct FString *d62a060b09; // 0x30(0x10)
	bool *2520160488; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<enum class EGamepadPresets> *331d87c23d; // 0x48(0x10)
};

// ScriptStruct TslGame.*dd1d1bd991
// Size: 0x20 (Inherited: 0x00)
struct F*dd1d1bd991 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*95f23ee460
// Size: 0x10 (Inherited: 0x00)
struct F*95f23ee460 {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*5cd9da4a47
// Size: 0x30 (Inherited: 0x00)
struct F*5cd9da4a47 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*cb6044162b
// Size: 0x20 (Inherited: 0x08)
struct F*cb6044162b : FTableRowBase {
	struct FName ActionName; // 0x08(0x08)
	struct TArray<struct FKey> *ec96f49753; // 0x10(0x10)
};

// ScriptStruct TslGame.*5129868311
// Size: 0x10 (Inherited: 0x00)
struct F*5129868311 {
	float *56229997bc; // 0x00(0x04)
	float *46727bc4c6; // 0x04(0x04)
	float *2b192227da; // 0x08(0x04)
	float *8a9b578cdc; // 0x0c(0x04)
};

// ScriptStruct TslGame.*81fe889b5a
// Size: 0x18 (Inherited: 0x00)
struct F*81fe889b5a {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*ce98e6dac5> *1d7463008a; // 0x08(0x10)
};

// ScriptStruct TslGame.*ce98e6dac5
// Size: 0x30 (Inherited: 0x00)
struct F*ce98e6dac5 {
	struct TArray<struct F*2ca69e5f15> *b4e2f224ae; // 0x00(0x10)
	struct FText DescriptionText; // 0x10(0x18)
	bool *6d9cdb33ab; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*2ca69e5f15
// Size: 0x40 (Inherited: 0x00)
struct F*2ca69e5f15 {
	bool *37e1a8c01f; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FKey Key; // 0x08(0x18)
	bool *c3f60c4b55; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FName ActionName; // 0x28(0x08)
	enum class EGamepadKeyIconDisplayType *11623d36b7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float HoldDuration; // 0x34(0x04)
	bool *70b4c23509; // 0x38(0x01)
	enum class EKeyIconCombinationDisplayType *642cd682fd; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct TslGame.*a480aeded9
// Size: 0x30 (Inherited: 0x00)
struct F*a480aeded9 {
	enum class ETslTrainingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *bbdbea262e; // 0x08(0x18)
	struct UTexture2D* *d75dc980f5; // 0x20(0x08)
	struct UTexture2D* BackGroundTexture; // 0x28(0x08)
};

// ScriptStruct TslGame.*a7e357cabd
// Size: 0x70 (Inherited: 0x08)
struct F*a7e357cabd : FTableRowBase {
	struct FString CategoryId; // 0x08(0x10)
	int32 ColumnNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText ActionDesc; // 0x20(0x18)
	struct TArray<struct FName> MappedActions; // 0x38(0x10)
	struct TArray<struct F*b94ee6cfe3> MappedAxies; // 0x48(0x10)
	bool bDummy; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FTslInputKey> DummyInputKeys; // 0x60(0x10)
};

// ScriptStruct TslGame.*8e9c341ae2
// Size: 0x40 (Inherited: 0x00)
struct F*8e9c341ae2 {
	struct UTexture2D* *96bd036365; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct TArray<struct F*a41e5bdd59> *27fe9c8ff5; // 0x20(0x10)
	struct TArray<struct FText> *8bc57763dc; // 0x30(0x10)
};

// ScriptStruct TslGame.*a41e5bdd59
// Size: 0x38 (Inherited: 0x00)
struct F*a41e5bdd59 {
	int32 Number; // 0x00(0x04)
	struct FLinearColor *ca5f08bad1; // 0x04(0x10)
	bool bEnabled; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FText *1eec7ce3a6; // 0x18(0x18)
	struct ATslPlayerState* PlayerState; // 0x30(0x08)
};

// ScriptStruct TslGame.*dbb1619b62
// Size: 0x60 (Inherited: 0x00)
struct F*dbb1619b62 {
	struct FText VehicleName; // 0x00(0x18)
	struct FText *b63efeb7be; // 0x18(0x18)
	struct UTexture2D* *d41f19b579; // 0x30(0x08)
	struct UTexture2D* *372b16e128; // 0x38(0x08)
	struct UTexture2D* *e828ee3b01; // 0x40(0x08)
	float Speed; // 0x48(0x04)
	float *41400f4a54; // 0x4c(0x04)
	int32 *36f39fb0f0; // 0x50(0x04)
	int32 *49e7b13cf1; // 0x54(0x04)
	int32 *91fbb09b0e; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*ccde80b35a
// Size: 0x28 (Inherited: 0x00)
struct F*ccde80b35a {
	enum class ERadioMessagePresets preset; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*db57ee3a8d> *7ae6d5e025; // 0x08(0x10)
	struct TArray<struct FName> *1be3620161; // 0x18(0x10)
};

// ScriptStruct TslGame.*2751914148
// Size: 0x18 (Inherited: 0x00)
struct F*2751914148 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x08(0x08)
	struct U*54cc75d10f* *54cc75d10f; // 0x10(0x08)
};

// ScriptStruct TslGame.*90966a08c2
// Size: 0x18 (Inherited: 0x00)
struct F*90966a08c2 {
	struct FName ItemID; // 0x00(0x08)
	struct FLinearColor OverrideColor; // 0x08(0x10)
};

// ScriptStruct TslGame.*dc53e9dae0
// Size: 0x68 (Inherited: 0x00)
struct F*dc53e9dae0 {
	struct FText Title; // 0x00(0x18)
	struct FText Subtitle; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TArray<bool> Stats; // 0x48(0x10)
	struct FStringAssetReference Image; // 0x58(0x10)
};

// ScriptStruct TslGame.*bf5a615d6c
// Size: 0x10 (Inherited: 0x00)
struct F*bf5a615d6c {
	struct TArray<struct FName> ItemIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*8fd58ade2d
// Size: 0x30 (Inherited: 0x00)
struct F*8fd58ade2d {
	struct TArray<struct FName> WeaponItemIDs; // 0x00(0x10)
	struct TArray<struct FName> SkillItemIDs; // 0x10(0x10)
	struct TArray<struct FName> ArmorItemIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*146bdcd491
// Size: 0x30 (Inherited: 0x00)
struct F*146bdcd491 {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
	struct FLinearColor *1f9885a4e8; // 0x20(0x10)
};

// ScriptStruct TslGame.*b908ee40e7
// Size: 0x168 (Inherited: 0x00)
struct F*b908ee40e7 {
	struct F*089b1d4f55 *b55d26253c; // 0x00(0x168)
};

// ScriptStruct TslGame.*850a7f57b0
// Size: 0x38 (Inherited: 0x00)
struct F*850a7f57b0 {
	struct FText *c322be9c12; // 0x00(0x18)
	struct FText *0a9f205f24; // 0x18(0x18)
	float *efa6967841; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*91e8c1586c
// Size: 0x10 (Inherited: 0x00)
struct F*91e8c1586c {
	struct TArray<struct F*4c31bc9414> TrainingResults; // 0x00(0x10)
};

// ScriptStruct TslGame.*4c31bc9414
// Size: 0x28 (Inherited: 0x00)
struct F*4c31bc9414 {
	enum class ETrainingScoreType TrainingScoreType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ScoreTitleText; // 0x08(0x18)
	struct UTexture2D* ScoreImageTexture; // 0x20(0x08)
};

// ScriptStruct TslGame.*c6b4827d66
// Size: 0x10 (Inherited: 0x00)
struct F*c6b4827d66 {
	int32 SubWidgetCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* SubWidgetClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*2c9932be24
// Size: 0x18 (Inherited: 0x00)
struct F*2c9932be24 {
	int32 ItemSlotID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> ItemIDs; // 0x08(0x10)
};

// ScriptStruct TslGame.*50d9c84bf6
// Size: 0x28 (Inherited: 0x00)
struct F*50d9c84bf6 {
	struct UTexture2D* MapMarkerTexture; // 0x00(0x08)
	enum class EMarkerType MarkerIndex; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText MarkerName; // 0x10(0x18)
};

// ScriptStruct TslGame.*d68b8955fe
// Size: 0x28 (Inherited: 0x00)
struct F*d68b8955fe {
	int32 *709fa77ded; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	bool *8a614222d8; // 0x10(0x01)
	bool *2c94136b01; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<int32> *158754a527; // 0x18(0x10)
};

// ScriptStruct TslGame.*43f2243f46
// Size: 0x108 (Inherited: 0x00)
struct F*43f2243f46 {
	struct F*7c50600f8f OutsideBorder_Binder; // 0x00(0x30)
	struct F*b1a0bce7e4 CircleImage_Binder; // 0x30(0x28)
	struct F*8c7bdcaa93 DistanceTextBlock_Binder; // 0x58(0x20)
	struct F*8c7bdcaa93 CaptureObjectNameTextBlock_Binder; // 0x78(0x20)
	bool bShowDistance; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct F*b76eb66714 NeutralColorSet; // 0x9c(0x30)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct F*b76eb66714> TeamColorSets; // 0xd0(0x10)
	struct FLinearColor CenterColorWhenNotCaptured; // 0xe0(0x10)
	struct ATslGameState* TslGameState; // 0xf0(0x08)
	struct ATslPlayerController* TslPlayerController; // 0xf8(0x08)
	struct ACaptureAreaActor* *1d2c53cc95; // 0x100(0x08)
};

// ScriptStruct TslGame.*b76eb66714
// Size: 0x30 (Inherited: 0x00)
struct F*b76eb66714 {
	struct FLinearColor GaugeColor; // 0x00(0x10)
	struct FLinearColor TrackColor; // 0x10(0x10)
	struct FLinearColor CenterColorWhenCaptured; // 0x20(0x10)
};

// ScriptStruct TslGame.*1037ae85e9
// Size: 0x60 (Inherited: 0x00)
struct F*1037ae85e9 {
	struct TArray<struct FString> *c9f9c5f9d9; // 0x00(0x10)
	struct TMap<struct FString, struct UWidget*> *37cadafacd; // 0x10(0x50)
};

// ScriptStruct TslGame.*54405bdd3a
// Size: 0x90 (Inherited: 0x00)
struct F*54405bdd3a {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct TslGame.*6b0451408e
// Size: 0xb0 (Inherited: 0x00)
struct F*6b0451408e {
	struct F*bbe25dba95 VectorCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*8e07ddc515
// Size: 0xb0 (Inherited: 0x00)
struct F*8e07ddc515 {
	struct F*758c91d300 FloatCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*582e41e789
// Size: 0x10 (Inherited: 0x00)
struct F*582e41e789 {
	struct FFloatInterval DamageRange; // 0x00(0x08)
	struct U*59a0aeaef9* ColorCurve; // 0x08(0x08)
};

// ScriptStruct TslGame.*5760b7da86
// Size: 0x20 (Inherited: 0x00)
struct F*5760b7da86 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*14799d6d8a
// Size: 0x10 (Inherited: 0x00)
struct F*14799d6d8a {
	struct FVector2D *7ebd0aca16; // 0x00(0x08)
	struct FVector2D *e2f997e776; // 0x08(0x08)
};

// ScriptStruct TslGame.*818627770f
// Size: 0x10 (Inherited: 0x00)
struct F*818627770f {
	struct TArray<struct U*831979eab8*> *b21ae5e6af; // 0x00(0x10)
};

// ScriptStruct TslGame.*5c231e8453
// Size: 0x20 (Inherited: 0x00)
struct F*5c231e8453 {
	struct UTslPlatoonCarePackageDropIndicatorWidget* *1668bd37eb; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
	int32 *890157587e; // 0x0c(0x04)
	struct FVector *79411e3858; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*0e7cefbdc7
// Size: 0x20 (Inherited: 0x00)
struct F*0e7cefbdc7 {
	struct UWidget* *1668bd37eb; // 0x00(0x08)
	bool *66a52661c8; // 0x08(0x01)
	bool *933ecc3212; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FVector SpawnPosition; // 0x0c(0x0c)
	float *54d516b584; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*29bd685440
// Size: 0x18 (Inherited: 0x00)
struct F*29bd685440 {
	struct U*a75ae7f8c3* *e4db40149a; // 0x00(0x08)
	struct F*c89dcd5ffa *c89dcd5ffa; // 0x08(0x10)
};

// ScriptStruct TslGame.*7477971db5
// Size: 0x08 (Inherited: 0x00)
struct F*7477971db5 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*a40a967a59
// Size: 0x20 (Inherited: 0x00)
struct F*a40a967a59 {
	struct UMaterialInterface* ZoneMaterial; // 0x00(0x08)
	int32 ZoneMaxImageNum; // 0x08(0x04)
	struct FVector2D ZoneBorderThickness; // 0x0c(0x08)
	struct FVector2D ZonePositionOffset; // 0x14(0x08)
	float ZoneImageWarningAlpha; // 0x1c(0x04)
};

// ScriptStruct TslGame.*1f74a003c0
// Size: 0x20 (Inherited: 0x00)
struct F*1f74a003c0 {
	struct FVector2D *ee34be2c8d; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct UMaterialInstanceDynamic* *30315cd702; // 0x18(0x08)
};

// ScriptStruct TslGame.*7fce2b3f24
// Size: 0x20 (Inherited: 0x00)
struct F*7fce2b3f24 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UImage* *f6dcf34d0e; // 0x10(0x08)
	float *44832bcfe1; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*d2f958280e
// Size: 0x20 (Inherited: 0x00)
struct F*d2f958280e {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*3b1a73df01* *d333ca9f20; // 0x18(0x08)
};

// ScriptStruct TslGame.*fd8286d8ab
// Size: 0x18 (Inherited: 0x00)
struct F*fd8286d8ab {
	char pad_0[0x8]; // 0x00(0x08)
	struct UImage* VehicleIcon; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*341bb984ad
// Size: 0x10 (Inherited: 0x00)
struct F*341bb984ad {
	struct ATslHelicopterPawn* Helicopter; // 0x00(0x08)
	struct UImage* *9af944ad87; // 0x08(0x08)
};

// ScriptStruct TslGame.*a60d6d460a
// Size: 0x10 (Inherited: 0x00)
struct F*a60d6d460a {
	struct AGuardedLootPackage* LootCache; // 0x00(0x08)
	struct UImage* *c2cb254268; // 0x08(0x08)
};

// ScriptStruct TslGame.*2ecaa2dc61
// Size: 0x10 (Inherited: 0x00)
struct F*2ecaa2dc61 {
	struct ATslWheeledVehicle* KillTruck; // 0x00(0x08)
	struct UImage* *b78b5da76e; // 0x08(0x08)
};

// ScriptStruct TslGame.*71a95fc094
// Size: 0x10 (Inherited: 0x00)
struct F*71a95fc094 {
	struct ATslWheeledVehicle* LootTruck; // 0x00(0x08)
	struct UImage* *761a209ce2; // 0x08(0x08)
};

// ScriptStruct TslGame.*88542f945e
// Size: 0x30 (Inherited: 0x00)
struct F*88542f945e {
	struct AActor* *5f4ed6ac32; // 0x00(0x08)
	struct UImage* *d964fdaa30; // 0x08(0x08)
	struct UImage* *67659712fd; // 0x10(0x08)
	struct UImage* *f2b4c23459; // 0x18(0x08)
	struct UImage* *91a2df3ae5; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct TslGame.*8d3c5b903a
// Size: 0xa0 (Inherited: 0x00)
struct F*8d3c5b903a {
	struct U*a7ad10de38* Icon; // 0x00(0x08)
	struct U*c948b4fecc* *f33d55c64b; // 0x08(0x08)
	struct FLinearColor *d075276b3f; // 0x10(0x10)
	bool bShowMemberNumber; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 MemberNumber; // 0x24(0x04)
	enum class ECharacterIconType *19e9cd1758; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Rotation; // 0x2c(0x04)
	int32 *d2eaa7d1d2; // 0x30(0x04)
	bool *25250034cc; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FText PlayerName; // 0x38(0x18)
	struct FLinearColor *09bc45105d; // 0x50(0x10)
	bool *18a851cd18; // 0x60(0x01)
	bool *137b485998; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32 *68a6f97bcf; // 0x64(0x04)
	struct FVector2D Position; // 0x68(0x08)
	bool *5e4153e273; // 0x70(0x01)
	bool bHasTeamMember; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct TArray<struct F*5760b7da86> *7ec1124838; // 0x78(0x10)
	bool *b443c08909; // 0x88(0x01)
	bool bShowDirection; // 0x89(0x01)
	bool bShowStatus; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	float *fc775ea4ed; // 0x8c(0x04)
	bool *3f096d657b; // 0x90(0x01)
	bool *a339d71948; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float *1bb31c9e5f; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct TslGame.*5f68af10ca
// Size: 0x18 (Inherited: 0x00)
struct F*5f68af10ca {
	enum class ETslTrainingType *e27b6729de; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *eda3f77667; // 0x08(0x08)
	struct FVector2D Size; // 0x10(0x08)
};

// ScriptStruct TslGame.*c28601b5bd
// Size: 0x28 (Inherited: 0x00)
struct F*c28601b5bd {
	float MinimapSize; // 0x00(0x04)
	enum class EMinimapFocus MinimapFocus; // 0x04(0x01)
	bool bIsBluezoneInfoIntoMap; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float ViewScale1D; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* ViewScale_AccelerationCurve; // 0x10(0x08)
	struct UCurveFloat* ViewScale_DecelerationCurve; // 0x18(0x08)
	bool bIsExtendedSize; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*2d891eaa9a
// Size: 0x70 (Inherited: 0x00)
struct F*2d891eaa9a {
	struct F*f90b3e2b9a HorizontalBox; // 0x00(0x28)
	struct F*aad5c0ee0d *b7637abba6; // 0x28(0x28)
	struct F*8c7bdcaa93 *b31e9a41c4; // 0x50(0x20)
};

// ScriptStruct TslGame.*6bd40ceecd
// Size: 0x20 (Inherited: 0x00)
struct F*6bd40ceecd {
	struct FString *3fb58ba8ff; // 0x00(0x10)
	int32 Kill; // 0x10(0x04)
	int32 *306f42da0c; // 0x14(0x04)
	float Damage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*79eba982cf
// Size: 0x48 (Inherited: 0x08)
struct F*79eba982cf : FTableRowBase {
	struct FString SubtitleKey; // 0x08(0x10)
	struct FString BlueZoneSubtitleKey; // 0x18(0x10)
	struct FString ItemSpawnSubtitleKey; // 0x28(0x10)
	struct FString VehicleSpawnSubtitleKey; // 0x38(0x10)
};

// ScriptStruct TslGame.*8e2b719671
// Size: 0xb0 (Inherited: 0x00)
struct F*8e2b719671 {
	struct F*bbe25dba95 VectorCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*bc4de10ffe
// Size: 0xb0 (Inherited: 0x00)
struct F*bc4de10ffe {
	struct F*758c91d300 FloatCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*5bf7fbe11d
// Size: 0xa0 (Inherited: 0x00)
struct F*5bf7fbe11d {
	struct FSlateBrush Background; // 0x00(0x90)
	struct FLinearColor BrushColor; // 0x90(0x10)
};

// ScriptStruct TslGame.TestSpot
// Size: 0x0c (Inherited: 0x00)
struct FTestSpot {
	struct FVector2D Location; // 0x00(0x08)
	bool Disabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.*8a3d9da1a2
// Size: 0x10 (Inherited: 0x00)
struct F*8a3d9da1a2 {
	struct TArray<struct F*cffeb403da> *fdfc57c029; // 0x00(0x10)
};

// ScriptStruct TslGame.*cffeb403da
// Size: 0x0c (Inherited: 0x00)
struct F*cffeb403da {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	bool Disabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.*d2c056718c
// Size: 0x10 (Inherited: 0x00)
struct F*d2c056718c {
	struct U*00fb32bf58* Widget; // 0x00(0x08)
	struct FVector2D LastPosition; // 0x08(0x08)
};

// ScriptStruct TslGame.*45ae7999b0
// Size: 0x28 (Inherited: 0x00)
struct F*45ae7999b0 {
	struct FText DirectionText; // 0x00(0x18)
	struct FLinearColor TextColor; // 0x18(0x10)
};

// ScriptStruct TslGame.*5fe861545e
// Size: 0x40 (Inherited: 0x08)
struct F*5fe861545e : FTableRowBase {
	enum class EGuideKeyType KeyType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*ce98e6dac5 Info; // 0x10(0x30)
};

