// BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C
// Size: 0x830 (Inherited: 0x3e8)
struct AMapStatAnalyzer_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f0(0x08)
	struct FVector WorldMin; // 0x3f8(0x0c)
	struct FVector WorldMax; // 0x404(0x0c)
	struct FVector SamplingInterval; // 0x410(0x0c)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct FVector> WorldAvgSamples; // 0x420(0x10)
	struct TArray<struct FString> BeginConsoleCommands; // 0x430(0x10)
	int32 IY; // 0x440(0x04)
	int32 IX; // 0x444(0x04)
	struct FVector CameraRelativeOffset; // 0x448(0x0c)
	float SkippingMinimumHeight; // 0x454(0x04)
	int32 CameraCut; // 0x458(0x04)
	float TimeInterval; // 0x45c(0x04)
	struct FString SaveFileName; // 0x460(0x10)
	int32 SubdivisionCount; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<struct FVector> PresetLoc; // 0x478(0x10)
	bool UsePresetLoc; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	int32 SubdivisionIndex; // 0x48c(0x04)
	struct FHitResult HitResult; // 0x490(0x88)
	int32 SampleIndex; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct TArray<struct FString> StableFrameStats; // 0x520(0x10)
	struct TArray<float> StableFrameStatsThreshold; // 0x530(0x10)
	struct TArray<struct FMapStatPositionData> MapStatPositionDataArray; // 0x540(0x10)
	bool SkipOceanSurface; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct TArray<struct FLinearColor> LinearColorArray; // 0x558(0x10)
	struct TArray<struct FString> StatNames; // 0x568(0x10)
	struct TArray<struct FString> StatGroups; // 0x578(0x10)
	struct TArray<float> MaxValueAllInclusiveAvg; // 0x588(0x10)
	bool PrintToScreen; // 0x598(0x01)
	bool NoCheckPawnCollision; // 0x599(0x01)
	char pad_59A[0x2]; // 0x59a(0x02)
	float DelayTimeAfterTeleport; // 0x59c(0x04)
	bool SaveToStatMap; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct FDateTime BeginPlayNow; // 0x5a8(0x08)
	struct TArray<float> AvgValueAllInclusiveAvg; // 0x5b0(0x10)
	struct TArray<float> AvgArray; // 0x5c0(0x10)
	struct TArray<struct FString> HitchFrameStats; // 0x5d0(0x10)
	struct TArray<float> HitchFrameStatsThreshold_PC; // 0x5e0(0x10)
	struct TArray<float> HitchFrameStatsThreshold_Console; // 0x5f0(0x10)
	bool bNormalFinished; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	struct FLinearColor EmptyColor; // 0x604(0x10)
	struct FLinearColor ZeroColor; // 0x614(0x10)
	struct FLinearColor MaxColor; // 0x624(0x10)
	struct FLinearColor AvgColor; // 0x634(0x10)
	struct FLinearColor HitchedEmptyColor; // 0x644(0x10)
	struct FLinearColor HitchedZeroColor; // 0x654(0x10)
	struct FLinearColor HitchedMaxColor; // 0x664(0x10)
	struct FLinearColor HitchedAvgColor; // 0x674(0x10)
	float StableFrameStatsThresholdScale; // 0x684(0x04)
	struct FString HtmlTemplate; // 0x688(0x10)
	struct FString MinimapSpotTemplate; // 0x698(0x10)
	struct TArray<struct FString> SpotTextArray; // 0x6a8(0x10)
	struct FString MinimapSpotInstance; // 0x6b8(0x10)
	struct TArray<struct FString> MinimapSpotInstanceArray; // 0x6c8(0x10)
	bool bNeedHItchScreenshot; // 0x6d8(0x01)
	char pad_6D9[0x7]; // 0x6d9(0x07)
	struct TArray<int32> HitchSampleIndexArray; // 0x6e0(0x10)
	struct TArray<struct FString> HitchAdminMovePlayerArray; // 0x6f0(0x10)
	struct FString LastAdminMovePlayerCommand; // 0x700(0x10)
	float CellPadddingPercent; // 0x710(0x04)
	int32 LastSpotIndex; // 0x714(0x04)
	struct FString MinimapSpotDropdownTemplate; // 0x718(0x10)
	struct FString MinimapSpotDropdownInstance; // 0x728(0x10)
	struct TArray<struct FString> MinimapSpotDropdownInstanceArray; // 0x738(0x10)
	bool bNeedBugItNoScreenshot; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)
	struct TArray<struct FString> StatNameIndex; // 0x750(0x10)
	float AdditionalHitchThreshold; // 0x760(0x04)
	char pad_764[0x4]; // 0x764(0x04)
	struct TArray<float> HitchFrameStatsThreshold_Instance; // 0x768(0x10)
	struct FString MapPixelSize; // 0x778(0x10)
	int32 LinearColorWidth; // 0x788(0x04)
	int32 LinearColorHeight; // 0x78c(0x04)
	int32 MapAreaWidth; // 0x790(0x04)
	int32 AddCenterX; // 0x794(0x04)
	int32 AddCenterY; // 0x798(0x04)
	float WorldSize; // 0x79c(0x04)
	float HitchMaxScale; // 0x7a0(0x04)
	char pad_7A4[0x4]; // 0x7a4(0x04)
	struct TArray<struct FString> HitchFrameStatsThreshold_Instance_To_String; // 0x7a8(0x10)
	struct TArray<float> FindingStableFrame; // 0x7b8(0x10)
	float StartTimeToFindStableFrame; // 0x7c8(0x04)
	char pad_7CC[0x4]; // 0x7cc(0x04)
	struct TArray<float> TempInclusiveAvg; // 0x7d0(0x10)
	float MaxDiffThreshold; // 0x7e0(0x04)
	float AvgDiffThreshold; // 0x7e4(0x04)
	float DefaultMaxDiffThreshold; // 0x7e8(0x04)
	float DefaultAvgDiffThreshold; // 0x7ec(0x04)
	float StableFrameStatsMultiplier; // 0x7f0(0x04)
	float AdjustedZRot; // 0x7f4(0x04)
	int32 SampleCount; // 0x7f8(0x04)
	float SampleTravelStartTime; // 0x7fc(0x04)
	float SampleTravelCurrentTime; // 0x800(0x04)
	float WorldMapSize; // 0x804(0x04)
	float WorldMapOffset; // 0x808(0x04)
	bool ExitWhenFinished; // 0x80c(0x01)
	char pad_80D[0x3]; // 0x80d(0x03)
	struct FString CurrentLevelName; // 0x810(0x10)
	struct FVector LastProperLocation; // 0x820(0x0c)
	int32 FindingZCounter; // 0x82c(0x04)

	void SetFreeMode(); // Function MapStatAnalyzer.MapStatAnalyzer_C.SetFreeMode // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void FindProperLocationZ(); // Function MapStatAnalyzer.MapStatAnalyzer_C.FindProperLocationZ // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void DumpMapStatDataArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DumpMapStatDataArray // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void EqualsFloatArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void DelayTimeToDelayFrames(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void GetAltSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void GetCurrentLevelSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void GetExpectedMapSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void GetSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void GetSavedDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void LoadStringFromFile(); // Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void GetCurrentLevelMinimapURL(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void FloatArrayToNewlinedString(); // Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void StingArrayToNewlinedString(); // Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void HitchFrameStatsThreshold(); // Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void GetAvgOnArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void DateTimeToString(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x3b43ac
	void ComputeWorldSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveEndPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_MapStatAnalyzer(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer // HasDefaults // @ game+0x3b43ac
};

