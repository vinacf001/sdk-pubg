// BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C
// Size: 0x838 (Inherited: 0x3f0)
struct AMapStatAnalyzer_C : AActor {
	struct F*abc8f374e0 UberGraphFrame; // 0x3f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f8(0x08)
	struct FVector WorldMin; // 0x400(0x0c)
	struct FVector WorldMax; // 0x40c(0x0c)
	struct FVector SamplingInterval; // 0x418(0x0c)
	char pad_424[0x4]; // 0x424(0x04)
	struct TArray<struct FVector> WorldAvgSamples; // 0x428(0x10)
	struct TArray<struct FString> BeginConsoleCommands; // 0x438(0x10)
	int32 IY; // 0x448(0x04)
	int32 IX; // 0x44c(0x04)
	struct FVector CameraRelativeOffset; // 0x450(0x0c)
	float SkippingMinimumHeight; // 0x45c(0x04)
	int32 CameraCut; // 0x460(0x04)
	float TimeInterval; // 0x464(0x04)
	struct FString SaveFileName; // 0x468(0x10)
	int32 SubdivisionCount; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct TArray<struct FVector> PresetLoc; // 0x480(0x10)
	bool UsePresetLoc; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	int32 SubdivisionIndex; // 0x494(0x04)
	struct FHitResult HitResult; // 0x498(0x88)
	int32 SampleIndex; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct TArray<struct FString> StableFrameStats; // 0x528(0x10)
	struct TArray<float> StableFrameStatsThreshold; // 0x538(0x10)
	struct TArray<struct FMapStatPositionData> MapStatPositionDataArray; // 0x548(0x10)
	bool SkipOceanSurface; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct TArray<struct FLinearColor> LinearColorArray; // 0x560(0x10)
	struct TArray<struct FString> StatNames; // 0x570(0x10)
	struct TArray<struct FString> StatGroups; // 0x580(0x10)
	struct TArray<float> MaxValueAllInclusiveAvg; // 0x590(0x10)
	bool PrintToScreen; // 0x5a0(0x01)
	bool NoCheckPawnCollision; // 0x5a1(0x01)
	char pad_5A2[0x2]; // 0x5a2(0x02)
	float DelayTimeAfterTeleport; // 0x5a4(0x04)
	bool SaveToStatMap; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FDateTime BeginPlayNow; // 0x5b0(0x08)
	struct TArray<float> AvgValueAllInclusiveAvg; // 0x5b8(0x10)
	struct TArray<float> AvgArray; // 0x5c8(0x10)
	struct TArray<struct FString> HitchFrameStats; // 0x5d8(0x10)
	struct TArray<float> HitchFrameStatsThreshold_PC; // 0x5e8(0x10)
	struct TArray<float> HitchFrameStatsThreshold_Console; // 0x5f8(0x10)
	bool bNormalFinished; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	struct FLinearColor EmptyColor; // 0x60c(0x10)
	struct FLinearColor ZeroColor; // 0x61c(0x10)
	struct FLinearColor MaxColor; // 0x62c(0x10)
	struct FLinearColor AvgColor; // 0x63c(0x10)
	struct FLinearColor HitchedEmptyColor; // 0x64c(0x10)
	struct FLinearColor HitchedZeroColor; // 0x65c(0x10)
	struct FLinearColor HitchedMaxColor; // 0x66c(0x10)
	struct FLinearColor HitchedAvgColor; // 0x67c(0x10)
	float StableFrameStatsThresholdScale; // 0x68c(0x04)
	struct FString HtmlTemplate; // 0x690(0x10)
	struct FString MinimapSpotTemplate; // 0x6a0(0x10)
	struct TArray<struct FString> SpotTextArray; // 0x6b0(0x10)
	struct FString MinimapSpotInstance; // 0x6c0(0x10)
	struct TArray<struct FString> MinimapSpotInstanceArray; // 0x6d0(0x10)
	bool bNeedHItchScreenshot; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	struct TArray<int32> HitchSampleIndexArray; // 0x6e8(0x10)
	struct TArray<struct FString> HitchAdminMovePlayerArray; // 0x6f8(0x10)
	struct FString LastAdminMovePlayerCommand; // 0x708(0x10)
	float CellPadddingPercent; // 0x718(0x04)
	int32 LastSpotIndex; // 0x71c(0x04)
	struct FString MinimapSpotDropdownTemplate; // 0x720(0x10)
	struct FString MinimapSpotDropdownInstance; // 0x730(0x10)
	struct TArray<struct FString> MinimapSpotDropdownInstanceArray; // 0x740(0x10)
	bool bNeedBugItNoScreenshot; // 0x750(0x01)
	char pad_751[0x7]; // 0x751(0x07)
	struct TArray<struct FString> StatNameIndex; // 0x758(0x10)
	float AdditionalHitchThreshold; // 0x768(0x04)
	char pad_76C[0x4]; // 0x76c(0x04)
	struct TArray<float> HitchFrameStatsThreshold_Instance; // 0x770(0x10)
	struct FString MapPixelSize; // 0x780(0x10)
	int32 LinearColorWidth; // 0x790(0x04)
	int32 LinearColorHeight; // 0x794(0x04)
	int32 MapAreaWidth; // 0x798(0x04)
	int32 AddCenterX; // 0x79c(0x04)
	int32 AddCenterY; // 0x7a0(0x04)
	float WorldSize; // 0x7a4(0x04)
	float HitchMaxScale; // 0x7a8(0x04)
	char pad_7AC[0x4]; // 0x7ac(0x04)
	struct TArray<struct FString> HitchFrameStatsThreshold_Instance_To_String; // 0x7b0(0x10)
	struct TArray<float> FindingStableFrame; // 0x7c0(0x10)
	float StartTimeToFindStableFrame; // 0x7d0(0x04)
	char pad_7D4[0x4]; // 0x7d4(0x04)
	struct TArray<float> TempInclusiveAvg; // 0x7d8(0x10)
	float MaxDiffThreshold; // 0x7e8(0x04)
	float AvgDiffThreshold; // 0x7ec(0x04)
	float DefaultMaxDiffThreshold; // 0x7f0(0x04)
	float DefaultAvgDiffThreshold; // 0x7f4(0x04)
	float StableFrameStatsMultiplier; // 0x7f8(0x04)
	float AdjustedZRot; // 0x7fc(0x04)
	int32 SampleCount; // 0x800(0x04)
	float SampleTravelStartTime; // 0x804(0x04)
	float SampleTravelCurrentTime; // 0x808(0x04)
	float WorldMapSize; // 0x80c(0x04)
	float WorldMapOffset; // 0x810(0x04)
	bool ExitWhenFinished; // 0x814(0x01)
	char pad_815[0x3]; // 0x815(0x03)
	struct FString CurrentLevelName; // 0x818(0x10)
	struct FVector LastProperLocation; // 0x828(0x0c)
	int32 FindingZCounter; // 0x834(0x04)

	bool SetFreeMode(); // Function MapStatAnalyzer.MapStatAnalyzer_C.SetFreeMode // Public|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	struct FVector FindProperLocationZ(); // Function MapStatAnalyzer.MapStatAnalyzer_C.FindProperLocationZ // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	struct FString DumpMapStatDataArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DumpMapStatDataArray // Public|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	int32 EqualsFloatArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	int32 DelayTimeToDelayFrames(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	struct FString GetAltSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	bool GetCurrentLevelSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	bool GetExpectedMapSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	struct FString GetSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	struct FString GetSavedDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	bool LoadStringFromFile(); // Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	struct FString GetCurrentLevelMinimapURL(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	struct FString FloatArrayToNewlinedString(); // Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	struct FString StingArrayToNewlinedString(); // Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	bool HitchFrameStatsThreshold(); // Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	float GetAvgOnArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	struct FString DateTimeToString(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1b829c
	struct FVector ComputeWorldSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize // Public|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	int32 UserConstructionScript(); // Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	void ReceiveBeginPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1b829c
	enum class EEndPlayReason ReceiveEndPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1b829c
	struct FString ExecuteUbergraph_MapStatAnalyzer(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer // HasDefaults // @ game+0x1b829c
};

