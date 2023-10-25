// BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C
// Size: 0x840 (Inherited: 0x3f8)
struct AMapStatAnalyzer_C : AActor {
	struct F*abc8f374e0 UberGraphFrame; // 0x3f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x400(0x08)
	struct FVector WorldMin; // 0x408(0x0c)
	struct FVector WorldMax; // 0x414(0x0c)
	struct FVector SamplingInterval; // 0x420(0x0c)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct FVector> WorldAvgSamples; // 0x430(0x10)
	struct TArray<struct FString> BeginConsoleCommands; // 0x440(0x10)
	int32 IY; // 0x450(0x04)
	int32 IX; // 0x454(0x04)
	struct FVector CameraRelativeOffset; // 0x458(0x0c)
	float SkippingMinimumHeight; // 0x464(0x04)
	int32 CameraCut; // 0x468(0x04)
	float TimeInterval; // 0x46c(0x04)
	struct FString SaveFileName; // 0x470(0x10)
	int32 SubdivisionCount; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct TArray<struct FVector> PresetLoc; // 0x488(0x10)
	bool UsePresetLoc; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	int32 SubdivisionIndex; // 0x49c(0x04)
	struct FHitResult HitResult; // 0x4a0(0x88)
	int32 SampleIndex; // 0x528(0x04)
	char pad_52C[0x4]; // 0x52c(0x04)
	struct TArray<struct FString> StableFrameStats; // 0x530(0x10)
	struct TArray<float> StableFrameStatsThreshold; // 0x540(0x10)
	struct TArray<struct FMapStatPositionData> MapStatPositionDataArray; // 0x550(0x10)
	bool SkipOceanSurface; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct TArray<struct FLinearColor> LinearColorArray; // 0x568(0x10)
	struct TArray<struct FString> StatNames; // 0x578(0x10)
	struct TArray<struct FString> StatGroups; // 0x588(0x10)
	struct TArray<float> MaxValueAllInclusiveAvg; // 0x598(0x10)
	bool PrintToScreen; // 0x5a8(0x01)
	bool NoCheckPawnCollision; // 0x5a9(0x01)
	char pad_5AA[0x2]; // 0x5aa(0x02)
	float DelayTimeAfterTeleport; // 0x5ac(0x04)
	bool SaveToStatMap; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FDateTime BeginPlayNow; // 0x5b8(0x08)
	struct TArray<float> AvgValueAllInclusiveAvg; // 0x5c0(0x10)
	struct TArray<float> AvgArray; // 0x5d0(0x10)
	struct TArray<struct FString> HitchFrameStats; // 0x5e0(0x10)
	struct TArray<float> HitchFrameStatsThreshold_PC; // 0x5f0(0x10)
	struct TArray<float> HitchFrameStatsThreshold_Console; // 0x600(0x10)
	bool bNormalFinished; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	struct FLinearColor EmptyColor; // 0x614(0x10)
	struct FLinearColor ZeroColor; // 0x624(0x10)
	struct FLinearColor MaxColor; // 0x634(0x10)
	struct FLinearColor AvgColor; // 0x644(0x10)
	struct FLinearColor HitchedEmptyColor; // 0x654(0x10)
	struct FLinearColor HitchedZeroColor; // 0x664(0x10)
	struct FLinearColor HitchedMaxColor; // 0x674(0x10)
	struct FLinearColor HitchedAvgColor; // 0x684(0x10)
	float StableFrameStatsThresholdScale; // 0x694(0x04)
	struct FString HtmlTemplate; // 0x698(0x10)
	struct FString MinimapSpotTemplate; // 0x6a8(0x10)
	struct TArray<struct FString> SpotTextArray; // 0x6b8(0x10)
	struct FString MinimapSpotInstance; // 0x6c8(0x10)
	struct TArray<struct FString> MinimapSpotInstanceArray; // 0x6d8(0x10)
	bool bNeedHItchScreenshot; // 0x6e8(0x01)
	char pad_6E9[0x7]; // 0x6e9(0x07)
	struct TArray<int32> HitchSampleIndexArray; // 0x6f0(0x10)
	struct TArray<struct FString> HitchAdminMovePlayerArray; // 0x700(0x10)
	struct FString LastAdminMovePlayerCommand; // 0x710(0x10)
	float CellPadddingPercent; // 0x720(0x04)
	int32 LastSpotIndex; // 0x724(0x04)
	struct FString MinimapSpotDropdownTemplate; // 0x728(0x10)
	struct FString MinimapSpotDropdownInstance; // 0x738(0x10)
	struct TArray<struct FString> MinimapSpotDropdownInstanceArray; // 0x748(0x10)
	bool bNeedBugItNoScreenshot; // 0x758(0x01)
	char pad_759[0x7]; // 0x759(0x07)
	struct TArray<struct FString> StatNameIndex; // 0x760(0x10)
	float AdditionalHitchThreshold; // 0x770(0x04)
	char pad_774[0x4]; // 0x774(0x04)
	struct TArray<float> HitchFrameStatsThreshold_Instance; // 0x778(0x10)
	struct FString MapPixelSize; // 0x788(0x10)
	int32 LinearColorWidth; // 0x798(0x04)
	int32 LinearColorHeight; // 0x79c(0x04)
	int32 MapAreaWidth; // 0x7a0(0x04)
	int32 AddCenterX; // 0x7a4(0x04)
	int32 AddCenterY; // 0x7a8(0x04)
	float WorldSize; // 0x7ac(0x04)
	float HitchMaxScale; // 0x7b0(0x04)
	char pad_7B4[0x4]; // 0x7b4(0x04)
	struct TArray<struct FString> HitchFrameStatsThreshold_Instance_To_String; // 0x7b8(0x10)
	struct TArray<float> FindingStableFrame; // 0x7c8(0x10)
	float StartTimeToFindStableFrame; // 0x7d8(0x04)
	char pad_7DC[0x4]; // 0x7dc(0x04)
	struct TArray<float> TempInclusiveAvg; // 0x7e0(0x10)
	float MaxDiffThreshold; // 0x7f0(0x04)
	float AvgDiffThreshold; // 0x7f4(0x04)
	float DefaultMaxDiffThreshold; // 0x7f8(0x04)
	float DefaultAvgDiffThreshold; // 0x7fc(0x04)
	float StableFrameStatsMultiplier; // 0x800(0x04)
	float AdjustedZRot; // 0x804(0x04)
	int32 SampleCount; // 0x808(0x04)
	float SampleTravelStartTime; // 0x80c(0x04)
	float SampleTravelCurrentTime; // 0x810(0x04)
	float WorldMapSize; // 0x814(0x04)
	float WorldMapOffset; // 0x818(0x04)
	bool ExitWhenFinished; // 0x81c(0x01)
	char pad_81D[0x3]; // 0x81d(0x03)
	struct FString CurrentLevelName; // 0x820(0x10)
	struct FVector LastProperLocation; // 0x830(0x0c)
	int32 FindingZCounter; // 0x83c(0x04)

	bool SetFreeMode(); // Function MapStatAnalyzer.MapStatAnalyzer_C.SetFreeMode // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FVector FindProperLocationZ(); // Function MapStatAnalyzer.MapStatAnalyzer_C.FindProperLocationZ // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FString DumpMapStatDataArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DumpMapStatDataArray // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	int32 EqualsFloatArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	int32 DelayTimeToDelayFrames(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	struct FString GetAltSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	bool GetCurrentLevelSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	bool GetExpectedMapSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	struct FString GetSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	struct FString GetSavedDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	bool LoadStringFromFile(); // Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FString GetCurrentLevelMinimapURL(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	struct FString FloatArrayToNewlinedString(); // Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FString StingArrayToNewlinedString(); // Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool HitchFrameStatsThreshold(); // Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	float GetAvgOnArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	struct FString DateTimeToString(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	struct FVector ComputeWorldSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	int32 UserConstructionScript(); // Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveBeginPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2ad9d8
	enum class EEndPlayReason ReceiveEndPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	struct FString ExecuteUbergraph_MapStatAnalyzer(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer // HasDefaults // @ game+0x2ad9d8
};

