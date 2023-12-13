// BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C
// Size: 0x840 (Inherited: 0x3f8)
struct AMapStatAnalyzer_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3f8(0x08)
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

	struct APawn* SetFreeMode(struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, bool K2Node_DynamicCast_bSuccess, struct UTslCharacterMovement* CallFunc__62cd8daba9_ReturnValue, bool CallFunc__055a659f43_ReturnValue); // Function MapStatAnalyzer.MapStatAnalyzer_C.SetFreeMode // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FVector FindProperLocationZ(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_BreakVector_X4, struct FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5); // Function MapStatAnalyzer.MapStatAnalyzer_C.FindProperLocationZ // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FString DumpMapStatDataArray(int32 ___int_Loop_Counter_Variable, int32 CallFunc__f53d173295_ReturnValue2, int32 ___int_Array_Index_Variable2, int32 CallFunc__7fcfad6df4_ReturnValue, bool CallFunc__edc1eb99da_ReturnValue, struct FString CallFunc__4395f4f976_ReturnValue, struct FString CallFunc_Array_Get_Item, int32 CallFunc__34ad69eaa1_ReturnValue2, int32 ___int_Loop_Counter_Variable2, struct FString CallFunc__a4f37e3e14_ReturnValue3, bool CallFunc__045254c93f_ReturnValue2, int32 CallFunc__f53d173295_ReturnValue3, struct FString CallFunc__a4f37e3e14_ReturnValue6, struct FString CallFunc__e22fa5e649_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue7, struct FString CallFunc__a4f37e3e14_ReturnValue8); // Function MapStatAnalyzer.MapStatAnalyzer_C.DumpMapStatDataArray // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 EqualsFloatArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	int32 DelayTimeToDelayFrames(); // Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	struct FString GetAltSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	bool GetCurrentLevelSize(bool CallFunc_Contains_ReturnValue2, bool CallFunc_Contains_ReturnValue3, bool CallFunc_Contains_ReturnValue4, bool CallFunc_Contains_ReturnValue5); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	void GetExpectedMapSize(float MapStride, float NewParam, bool CallFunc__8c720203dd_ReturnValue, bool CallFunc__8c720203dd_ReturnValue2); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	void GetSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	void GetSavedDir(struct FString ReturnValue, struct FString CallFunc__39bfd380f3_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	void LoadStringFromFile(bool CallFunc__d8a8729f8c_IsValid, struct TArray<struct FString> CallFunc__d8a8729f8c_ReturnValue, struct FString CallFunc_StingArrayToNewlinedString_NewVar_1); // Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FString GetCurrentLevelMinimapURL(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	bool FloatArrayToNewlinedString(int32 CallFunc__f53d173295_ReturnValue, bool CallFunc__edc1eb99da_ReturnValue, struct FString CallFunc__4395f4f976_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue); // Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void StingArrayToNewlinedString(struct FString NewLinedString, struct FString NewVar_1, struct FString NewLocalVar_2, int32 CallFunc__34ad69eaa1_ReturnValue, bool CallFunc__045254c93f_ReturnValue, int32 CallFunc__f53d173295_ReturnValue, bool CallFunc__edc1eb99da_ReturnValue, struct FString CallFunc__4395f4f976_ReturnValue); // Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void HitchFrameStatsThreshold(struct TArray<float> ReturnValue, enum class ETslPlatformGroupBranch_BPOnly CallFunc__4e9f4a0173_PlatformGroupBranch, bool _62618e47cd_CmpSuccess); // Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	float GetAvgOnArray(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	struct FString DateTimeToString(struct FString CallFunc__a4f37e3e14_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue3, struct FString CallFunc__a4f37e3e14_ReturnValue2, struct FString CallFunc__cc353e651f_ReturnValue4, struct FString CallFunc__a4f37e3e14_ReturnValue5, struct FString CallFunc__a4f37e3e14_ReturnValue6, struct FString CallFunc__a4f37e3e14_ReturnValue7, struct FString CallFunc__a4f37e3e14_ReturnValue8); // Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	struct FVector ComputeWorldSize(struct FVector Min, struct FVector Max, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Z2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3); // Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 UserConstructionScript(struct FString CallFunc__a4f37e3e14_ReturnValue4, bool CallFunc_LoadStringFromFile_bSuccess3, struct FString CallFunc_LoadStringFromFile_NewVar_03, bool CallFunc_LoadStringFromFile_bSuccess4, struct FString CallFunc_LoadStringFromFile_NewVar_05, bool CallFunc_LoadStringFromFile_bSuccess6, struct FString CallFunc_LoadStringFromFile_NewVar_06, struct TArray<struct FString> CallFunc__5e40413f0d_OutStringArray2, bool CallFunc__29c7de62d6_ReturnValue, int32 CallFunc__34ad69eaa1_ReturnValue3, int32 CallFunc__34ad69eaa1_ReturnValue4, bool CallFunc__29c7de62d6_ReturnValue3, int32 ___int_Array_Index_Variable2, int32 ___int_Loop_Counter_Variable2, struct FString CallFunc_Array_Get_Item); // Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	enum class EEndPlayReason ReceiveEndPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x370fbc
	struct FString ExecuteUbergraph_MapStatAnalyzer(int32 CallFunc__f53d173295_ReturnValue, int32 ___int_Loop_Counter_Variable2, int32 CallFunc__f53d173295_ReturnValue2, int32 ___int_Array_Index_Variable2, int32 ___int_Loop_Counter_Variable4, int32 CallFunc__f53d173295_ReturnValue4, int32 ___int_Loop_Counter_Variable5, int32 CallFunc__f53d173295_ReturnValue5, int32 ___int_Array_Index_Variable7, float ___float_Variable, bool CallFunc__8c720203dd_ReturnValue, int32 ___int_Variable, int32 ___int_Array_Index_Variable8, int32 ___int_Array_Index_Variable9, int32 ___int_Loop_Counter_Variable9, int32 CallFunc__f53d173295_ReturnValue9, int32 ___int_Loop_Counter_Variable20, struct FString CallFunc__cc353e651f_ReturnValue3, int32 CallFunc__f53d173295_ReturnValue20, int32 ___int_Variable2, int32 ___int_Variable3, int32 CallFunc__9ada690ad6_ReturnValue, int32 CallFunc__f53d173295_ReturnValue22, int32 ___int_Array_Index_Variable22, bool CallFunc_Not_PreBool_ReturnValue, bool ___bool_Whether_the_gate_is_currently_open_or_close_Variable, bool ___bool_IsClosed_Variable, bool CallFunc__29c7de62d6_ReturnValue, int32 ___int_Loop_Counter_Variable23, int32 ___int_Loop_Counter_Variable24, int32 CallFunc__f53d173295_ReturnValue24, struct TArray<struct ATslPassBluezoneArea*> CallFunc_GetAllActorsOfClass_OutActors3, struct ATslPassBluezoneArea* CallFunc_Array_Get_Item2, int32 CallFunc__34ad69eaa1_ReturnValue3, bool CallFunc__045254c93f_ReturnValue2, float CallFunc_BreakVector_Z3, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, struct TArray<struct ATslBlueZoneCreateArea*> CallFunc_GetAllActorsOfClass_OutActors4, struct FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, int32 CallFunc__34ad69eaa1_ReturnValue5, bool CallFunc__045254c93f_ReturnValue4, int32 ___int_Loop_Counter_Variable27, int32 CallFunc__f53d173295_ReturnValue28, float CallFunc_BreakVector_X6, float CallFunc_BreakVector_Y6, float CallFunc_BreakVector_Z6, float CallFunc_BreakVector_X7, float CallFunc_BreakHitResult_Time, struct FVector CallFunc_BreakHitResult_Location, struct FVector CallFunc_BreakHitResult_ImpactPoint, struct FVector CallFunc_BreakHitResult_Normal, struct FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector CallFunc_BreakHitResult_TraceStart, float CallFunc_BreakVector_Z8, bool CallFunc__26ca8c60bf_ReturnValue4, int32 CallFunc__f53d173295_ReturnValue31, float CallFunc_BreakVector_X9, struct FVector CallFunc__4efcfaba5e_ReturnValue3, struct FVector CallFunc__1429d76ba8_ReturnValue4, int32 CallFunc__34ad69eaa1_ReturnValue9, bool CallFunc__045254c93f_ReturnValue8, struct TArray<float> CallFunc__5efdbe93a1_InclusiveAvg, struct TArray<float> CallFunc__5efdbe93a1_InclusiveMax, bool CallFunc__5efdbe93a1_ReturnValue, struct FString CallFunc__cc353e651f_ReturnValue4, struct FString CallFunc__a4f37e3e14_ReturnValue2, struct FString CallFunc__a4f37e3e14_ReturnValue3, int32 CallFunc__0d901ddc2d_ReturnValue, struct FVector CallFunc_BreakTransform_Location, struct FRotator CallFunc_BreakTransform_Rotation, struct FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, struct TArray<int32> CallFunc__5efdbe93a1_CallCounts2, struct TArray<float> CallFunc__5efdbe93a1_InclusiveAvg2, struct FString CallFunc_Split_LeftS, struct FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue5, int32 CallFunc__34ad69eaa1_ReturnValue16, bool CallFunc__045254c93f_ReturnValue13, int32 CallFunc__34ad69eaa1_ReturnValue17, bool CallFunc__045254c93f_ReturnValue14, int32 CallFunc__34ad69eaa1_ReturnValue19, int32 CallFunc__34ad69eaa1_ReturnValue20, bool CallFunc__045254c93f_ReturnValue16, bool CallFunc__29c7de62d6_ReturnValue4, int32 CallFunc__f53d173295_ReturnValue37, struct FString CallFunc__4395f4f976_ReturnValue, float CallFunc_Array_Get_Item17, int32 CallFunc__34ad69eaa1_ReturnValue24, struct FString CallFunc__a4f37e3e14_ReturnValue7, struct FString CallFunc__a4f37e3e14_ReturnValue8, struct FString CallFunc__5b7c0d7800_ReturnValue3, struct FString CallFunc__a4f37e3e14_ReturnValue9, struct FString CallFunc_DateTimeToString_NewParam1, struct FIntVector K2Node_MakeStruct_IntVector, struct FString CallFunc__a4f37e3e14_ReturnValue10, struct FString CallFunc__a4f37e3e14_ReturnValue11, struct FString CallFunc__a4f37e3e14_ReturnValue15, struct FString CallFunc__a4f37e3e14_ReturnValue16, struct FString ___string_Variable, struct FString CallFunc__a4f37e3e14_ReturnValue17, float CallFunc_Array_Get_Item21, int32 CallFunc__34ad69eaa1_ReturnValue30, bool CallFunc__045254c93f_ReturnValue23, struct FString CallFunc_DateTimeToString_NewParam14, struct FString CallFunc__a4f37e3e14_ReturnValue24, float CallFunc_Array_Get_Item22, int32 CallFunc__34ad69eaa1_ReturnValue31, int32 ___int_Array_Index_Variable30, struct FString CallFunc_FloatArrayToNewlinedString_NewVar_1, bool CallFunc__045254c93f_ReturnValue25, struct FString CallFunc_StingArrayToNewlinedString_NewVar_1, int32 CallFunc__b2eb76c758_ReturnValue, int32 CallFunc__34ad69eaa1_ReturnValue33, struct FString CallFunc__a4f37e3e14_ReturnValue25, bool CallFunc__045254c93f_ReturnValue26, struct FString CallFunc__a4f37e3e14_ReturnValue26, struct FString CallFunc__a4f37e3e14_ReturnValue34, bool CallFunc_NotEqual_IntInt_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue35, int32 CallFunc_Array_Add_ReturnValue8, int32 CallFunc__b2eb76c758_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue10, struct FString CallFunc_StingArrayToNewlinedString_NewVar_04, int32 CallFunc__b2eb76c758_ReturnValue7, struct FString CallFunc__5b7c0d7800_ReturnValue4, struct FString CallFunc__5b7c0d7800_ReturnValue5, struct FString CallFunc__38b336b91a_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue36, struct FString CallFunc__a4f37e3e14_ReturnValue39, struct FString CallFunc__a4f37e3e14_ReturnValue40, struct TArray<float> CallFunc_HitchFrameStatsThreshold_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue3, float CallFunc__ace9454687_ReturnValue4, struct FVector CallFunc__6e127a9bbe_ReturnValue6, float CallFunc_BreakVector_X18, bool CallFunc__b69b4c5064_ReturnValue, int32 CallFunc__6c968ff326_ReturnValue13, int32 CallFunc__f53d173295_ReturnValue41, bool CallFunc__b69b4c5064_ReturnValue2, int32 CallFunc__f53d173295_ReturnValue42, bool CallFunc__045254c93f_ReturnValue30, bool CallFunc_BooleanAND_ReturnValue4, int32 CallFunc__f53d173295_ReturnValue43, float CallFunc__05195c4eb4_ReturnValue8, float CallFunc__7e0da19a6a_ReturnValue3, float CallFunc__4c7fe8bf18_ReturnValue2, float CallFunc__ace9454687_ReturnValue6, float CallFunc_BreakVector_X20, float CallFunc_BreakVector_Y20, float CallFunc_BreakVector_Z20, float CallFunc_GetCurrentLevelSize_NewParam, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc__29c7de62d6_ReturnValue10, int32 CallFunc__9ada690ad6_ReturnValue13, float CallFunc_BreakVector_Z21, float CallFunc__ace9454687_ReturnValue15, float CallFunc__9e9f800a8e_ReturnValue6, float CallFunc__ace9454687_ReturnValue16, struct FString CallFunc__f7b6d4ad25_ReturnValue11, int32 CallFunc__b2eb76c758_ReturnValue15, float CallFunc__ace9454687_ReturnValue18, struct FString CallFunc_StingArrayToNewlinedString_NewVar_07, struct FString CallFunc__a4f37e3e14_ReturnValue45, bool CallFunc__045254c93f_ReturnValue33, struct FString CallFunc__a4f37e3e14_ReturnValue46, int32 CallFunc__b2eb76c758_ReturnValue19, int32 CallFunc__34ad69eaa1_ReturnValue37, float CallFunc_Abs_ReturnValue, bool CallFunc__edc1eb99da_ReturnValue2, struct FString CallFunc__f7b6d4ad25_ReturnValue14, bool CallFunc__ab61acee03_ReturnValue2, struct FColor CallFunc__7993814eb6_ReturnValue, struct FString CallFunc__8f182e3188_ReturnValue, struct FString CallFunc__f7b6d4ad25_ReturnValue16, struct FString CallFunc__8f182e3188_ReturnValue3, struct FString CallFunc__a4f37e3e14_ReturnValue49, struct FString CallFunc__a4f37e3e14_ReturnValue50, struct FString CallFunc__a4f37e3e14_ReturnValue51, struct FString CallFunc__e22fa5e649_ReturnValue11, struct FString CallFunc__a4f37e3e14_ReturnValue58, float CallFunc__ed2fd0a2b0_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue59, struct FText CallFunc__7eb3d0d9f4_ReturnValue, struct FString CallFunc__535f3ea46b_ReturnValue3, float CallFunc__9e9f800a8e_ReturnValue7, struct FString CallFunc__a4f37e3e14_ReturnValue60, struct FString CallFunc__535f3ea46b_ReturnValue4, float CallFunc__7e0da19a6a_ReturnValue9, struct FString CallFunc__a4f37e3e14_ReturnValue62, struct FTimespan CallFunc_FromSeconds_ReturnValue3, struct FText CallFunc__7eb3d0d9f4_ReturnValue4, struct APawn* CallFunc_GetPlayerPawn_ReturnValue5, struct FString CallFunc__535f3ea46b_ReturnValue6, struct FString CallFunc__a4f37e3e14_ReturnValue64, struct FString CallFunc__a4f37e3e14_ReturnValue68, float CallFunc_BreakVector_X25, float CallFunc_BreakVector_Y25, float CallFunc_BreakVector_Z25, struct FString CallFunc__a4f37e3e14_ReturnValue71, float CallFunc__b748c09796_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue72, bool CallFunc__8c720203dd_ReturnValue8, struct FString CallFunc__a4f37e3e14_ReturnValue76, struct FString CallFunc__a4f37e3e14_ReturnValue77, struct FString CallFunc__a4f37e3e14_ReturnValue78, struct APlayerController* CallFunc__8b5701c55f_ReturnValue3, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue7, bool CallFunc__8c720203dd_ReturnValue9, bool CallFunc_BooleanAND_ReturnValue8); // Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer // HasDefaults // @ game+0x370fbc
};

