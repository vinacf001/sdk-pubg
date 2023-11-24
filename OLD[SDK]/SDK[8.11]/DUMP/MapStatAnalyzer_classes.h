// BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C
// Size: 0x830 (Inherited: 0x3e8)
struct AMapStatAnalyzer_C : AActor {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x3e8(0x08)
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

	struct ATslCharacter* SetFreeMode(bool K2Node_DynamicCast_bSuccess); // Function MapStatAnalyzer.MapStatAnalyzer_C.SetFreeMode // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	float FindProperLocationZ(float CallFunc_BreakVector_X, struct TArray<struct AActor*> K2Node_MakeArray_Array, float CallFunc_BreakVector_Z2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y4, struct FHitResult CallFunc_LineTraceSingle_OutHit, float CallFunc_BreakHitResult_Time, struct FVector CallFunc_BreakHitResult_Normal, int32 CallFunc_BreakHitResult_HitItem, struct FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc__23a8e3a7f4_ReturnValue); // Function MapStatAnalyzer.MapStatAnalyzer_C.FindProperLocationZ // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString DumpMapStatDataArray(int32 LastIndex, struct FString CallFunc__6fed9a27d9_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue, bool CallFunc__a59f4817f1_ReturnValue, int32 CallFunc__949df90870_ReturnValue, int32 ___int_Loop_Counter_Variable, int32 CallFunc__035c0809f0_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue3, struct FString CallFunc__3cb7b87e18_ReturnValue9); // Function MapStatAnalyzer.MapStatAnalyzer_C.DumpMapStatDataArray // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool EqualsFloatArray(int32 CallFunc__0bad7adb6e_ReturnValue3, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item2); // Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	void DelayTimeToDelayFrames(int32 ReturnValue, float CallFunc__ac5190e48d_ReturnValue); // Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	void GetAltSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	bool GetCurrentLevelSize(bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue3, bool CallFunc_Contains_ReturnValue7); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	bool GetExpectedMapSize(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	void GetSharedPresetDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	struct FString GetSavedDir(); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	int32 LoadStringFromFile(bool bSuccess, struct FString CallFunc_StingArrayToNewlinedString_NewVar_1); // Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString GetCurrentLevelMinimapURL(bool CallFunc_Contains_ReturnValue4, bool CallFunc_Contains_ReturnValue6, bool CallFunc_Contains_ReturnValue8, struct FString CallFunc__3cb7b87e18_ReturnValue5, struct FString CallFunc__3cb7b87e18_ReturnValue8); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	bool FloatArrayToNewlinedString(int32 CallFunc__0bad7adb6e_ReturnValue, int32 CallFunc__949df90870_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue); // Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString StingArrayToNewlinedString(struct FString NewlinedString, struct FString NewLocalVar_2, int32 CallFunc__8a750b40a5_ReturnValue, struct FString CallFunc_Array_Get_Item, struct FString CallFunc__78a1e7154b_ReturnValue); // Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void HitchFrameStatsThreshold(struct TArray<float> ReturnValue, enum class ETslPlatformGroupBranch_BPOnly CallFunc__605b5800df_PlatformGroupBranch); // Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	bool GetAvgOnArray(float OutMax, float Max, float CallFunc__341c4c2120_ReturnValue); // Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	struct FString DateTimeToString(int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Millisecond, struct FString CallFunc__3cb7b87e18_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue2, struct FString CallFunc__6fed9a27d9_ReturnValue4, struct FString CallFunc__6fed9a27d9_ReturnValue6); // Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	float ComputeWorldSize(float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y4, int32 CallFunc__8e9ae748a7_IndexOfMaxValue, int32 CallFunc__c5bd9aaecb_IndexOfMinValue, float CallFunc__c5bd9aaecb_MinValue, float CallFunc__c5bd9aaecb_MinValue3, int32 CallFunc__8e9ae748a7_IndexOfMaxValue3); // Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct TArray<struct FString> UserConstructionScript(int32 CallFunc__949df90870_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue, struct FString CallFunc_LoadStringFromFile_NewVar_1, bool CallFunc_LoadStringFromFile_bSuccess2, struct FString CallFunc__3cb7b87e18_ReturnValue3, struct FString CallFunc_LoadStringFromFile_NewVar_03, bool CallFunc_LoadStringFromFile_bSuccess5, struct TArray<struct FString> CallFunc__00ba05259e_OutStringArray, int32 CallFunc__0bad7adb6e_ReturnValue3, bool CallFunc__8334780abc_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, int32 ___int_Loop_Counter_Variable3, int32 CallFunc__949df90870_ReturnValue3, struct TArray<struct FString> CallFunc__00ba05259e_OutStringArray5, struct FString CallFunc_Array_Get_Item3, bool CallFunc__8334780abc_ReturnValue4); // Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveBeginPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void ReceiveEndPlay(); // Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x293938
	bool ExecuteUbergraph_MapStatAnalyzer(int32 ___int_Array_Index_Variable3, int32 ___int_Array_Index_Variable6, float ___float_Variable, int32 ___int_Loop_Counter_Variable8, int32 CallFunc__949df90870_ReturnValue8, int32 ___int_Array_Index_Variable10, struct FString CallFunc__6fed9a27d9_ReturnValue2, int32 ___int_Array_Index_Variable12, int32 CallFunc__949df90870_ReturnValue12, int32 ___int_Loop_Counter_Variable14, int32 CallFunc__949df90870_ReturnValue14, int32 ___int_Array_Index_Variable14, int32 CallFunc__949df90870_ReturnValue15, int32 CallFunc__949df90870_ReturnValue16, int32 ___int_Array_Index_Variable18, int32 ___int_Loop_Counter_Variable19, int32 CallFunc__949df90870_ReturnValue20, int32 ___int_Array_Index_Variable21, int32 CallFunc__949df90870_ReturnValue22, int32 ___int_Loop_Counter_Variable22, int32 ___int_Array_Index_Variable24, bool CallFunc__8334780abc_ReturnValue, float ___float_Variable2, int32 CallFunc__949df90870_ReturnValue26, float CallFunc_BreakVector_Y, int32 CallFunc__59ec794a0d_ReturnValue2, int32 CallFunc__59ec794a0d_ReturnValue4, struct ATslPassBluezoneArea* CallFunc_Array_Get_Item2, float CallFunc__2a6761ce24_ReturnValue, float CallFunc__2a6761ce24_ReturnValue2, struct FVector CallFunc__03678ce2bf_ReturnValue2, struct FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, int32 ___int_Loop_Counter_Variable27, int32 CallFunc__4f6ce937b0_ReturnValue5, float CallFunc__ac5190e48d_ReturnValue, struct FVector CallFunc__0c1ed25470_ReturnValue, struct FVector CallFunc__fb306abbf6_ReturnValue, int32 CallFunc__035c0809f0_ReturnValue, int32 CallFunc__035c0809f0_ReturnValue2, struct FVector CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_Y7, struct FVector CallFunc_BreakHitResult_ImpactNormal, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, int32 CallFunc_BreakHitResult_HitItem, struct FVector CallFunc_BreakHitResult_TraceStart, float CallFunc_BreakVector_Z8, bool CallFunc__a59f4817f1_ReturnValue4, int32 CallFunc__949df90870_ReturnValue31, struct FVector CallFunc_Array_Get_Item6, float CallFunc_BreakVector_X10, int32 CallFunc__0bad7adb6e_ReturnValue7, struct FVector CallFunc_MakeVector_ReturnValue5, float CallFunc_FMax_ReturnValue, struct FVector CallFunc_GetActorBounds_Origin2, struct TArray<struct ABlockingVolume*> CallFunc_GetAllActorsOfClass_OutActors7, struct FVector CallFunc_GetActorBounds_Origin3, struct FVector CallFunc__7b95fb5251_ReturnValue4, struct FString CallFunc__6fed9a27d9_ReturnValue4, int32 CallFunc__0bad7adb6e_ReturnValue11, struct FVector CallFunc_BreakTransform_Location, float CallFunc_BreakRotator_Roll, float CallFunc__23a8e3a7f4_ReturnValue, struct FVector CallFunc__081726cede_ReturnValue, bool CallFunc__8247fd655c_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakVector_X11, struct FVector CallFunc_MakeVector_ReturnValue7, struct FString CallFunc__3cb7b87e18_ReturnValue4, float CallFunc_BreakVector_X12, int32 CallFunc__0bad7adb6e_ReturnValue12, int32 CallFunc__0bad7adb6e_ReturnValue13, struct TArray<float> CallFunc__068d269586_InclusiveMax2, struct FString CallFunc_Split_RightS, struct FString CallFunc_Array_Get_Item12, int32 CallFunc__0bad7adb6e_ReturnValue16, bool CallFunc__2bff9823d8_ReturnValue15, int32 CallFunc__0bad7adb6e_ReturnValue21, bool CallFunc__8334780abc_ReturnValue5, bool CallFunc__2bff9823d8_ReturnValue17, struct TArray<struct FMapStatRawData> _dda1b9be9a_Array2, float CallFunc_BreakVector_X13, float CallFunc_BreakVector_Z13, float CallFunc_BreakVector_Y14, float CallFunc_BreakVector_Z14, int32 CallFunc__4f6ce937b0_ReturnValue6, int32 CallFunc__0bad7adb6e_ReturnValue24, struct FString CallFunc__963772dfe2_ReturnValue2, struct FString CallFunc__963772dfe2_ReturnValue3, int32 ___int_Array_Index_Variable29, struct FIntVector K2Node_MakeStruct_IntVector, struct FString CallFunc__3cb7b87e18_ReturnValue12, struct FVector CallFunc__b7098a880f_ReturnValue4, struct FVector2D CallFunc__333f37e273_ReturnValue, float CallFunc__d3cdc405b5_ReturnValue, float CallFunc_GetAvgOnArray_OutAvg, struct FString CallFunc__ac7bb196f3_ReturnValue3, struct FMapStatPositionData CallFunc_Array_Get_Item18, bool CallFunc__2bff9823d8_ReturnValue21, int32 CallFunc__0bad7adb6e_ReturnValue29, struct FString CallFunc_Replace_ReturnValue2, struct TArray<float> CallFunc__068d269586_InclusiveAvg3, struct TArray<float> CallFunc__068d269586_InclusiveMax3, bool CallFunc__068d269586_ReturnValue3, bool CallFunc__2bff9823d8_ReturnValue23, struct FString CallFunc_DateTimeToString_NewParam14, struct FLinearColor CallFunc__7491f770b1_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue24, struct FString CallFunc_FloatArrayToNewlinedString_NewVar_1, int32 CallFunc__cb12e4bc47_ReturnValue3, int32 CallFunc__0bad7adb6e_ReturnValue33, struct FString CallFunc__3cb7b87e18_ReturnValue26, bool CallFunc__2bff9823d8_ReturnValue27, float CallFunc_BreakVector_X15, float CallFunc_BreakVector_Z15, struct FString CallFunc__ac7bb196f3_ReturnValue4, struct FString CallFunc__6fed9a27d9_ReturnValue6, struct FString CallFunc__3cb7b87e18_ReturnValue31, struct FString CallFunc__3cb7b87e18_ReturnValue33, struct FString CallFunc_StingArrayToNewlinedString_NewVar_05, struct FString CallFunc_StingArrayToNewlinedString_NewVar_06, float CallFunc_Array_Get_Item26, float CallFunc__23a8e3a7f4_ReturnValue2, struct FString CallFunc__86a1666e16_ReturnValue3, float CallFunc__aa1f1a3bef_ReturnValue3, bool CallFunc__5a350224e5_ReturnValue3, struct FString CallFunc__3cb7b87e18_ReturnValue43, struct FString CallFunc__cf9e97b29f_ReturnValue2, int32 CallFunc__319b5efcc7_ReturnValue5, float CallFunc_BreakVector_Y16, float CallFunc_BreakVector_Z16, int32 CallFunc__4f6ce937b0_ReturnValue10, struct FVector CallFunc__4a00523c19_ReturnValue6, bool CallFunc__2bff9823d8_ReturnValue30, bool CallFunc_BooleanAND_ReturnValue4, float CallFunc__2a6761ce24_ReturnValue7, float CallFunc__aa1f1a3bef_ReturnValue5, float CallFunc__aa1f1a3bef_ReturnValue6, int32 CallFunc__cb12e4bc47_ReturnValue10, float CallFunc__2a6761ce24_ReturnValue9, float CallFunc__341c4c2120_ReturnValue5, struct FString CallFunc__ac7bb196f3_ReturnValue9, struct FString CallFunc__86a1666e16_ReturnValue5, float CallFunc__aa1f1a3bef_ReturnValue13, float CallFunc__23a8e3a7f4_ReturnValue5, float CallFunc__aa1f1a3bef_ReturnValue14, struct FString CallFunc__86a1666e16_ReturnValue8, float CallFunc_BreakVector_X19, float CallFunc_BreakVector_Y19, float CallFunc_BreakVector_Z19, float CallFunc_BreakVector_Y20, struct APawn* CallFunc_GetPlayerPawn_ReturnValue2, bool CallFunc__8334780abc_ReturnValue10, int32 CallFunc__4f6ce937b0_ReturnValue13, float CallFunc_BreakVector_X21, float CallFunc__aa1f1a3bef_ReturnValue17, int32 CallFunc__cb12e4bc47_ReturnValue16, int32 CallFunc_Array_Add_ReturnValue14, int32 CallFunc__cb12e4bc47_ReturnValue17, int32 CallFunc__cb12e4bc47_ReturnValue18, struct FString CallFunc__86a1666e16_ReturnValue13, int32 CallFunc__949df90870_ReturnValue45, int32 CallFunc_DelayTimeToDelayFrames_ReturnValue, struct FString CallFunc__a32d685ff1_ReturnValue4, int32 CallFunc_DelayTimeToDelayFrames_ReturnValue3, bool CallFunc__2bff9823d8_ReturnValue33, int32 CallFunc__cb12e4bc47_ReturnValue19, float CallFunc__d3f5532c39_ReturnValue5, float CallFunc_Abs_ReturnValue, bool CallFunc__96caf02210_ReturnValue2, struct FString CallFunc__86a1666e16_ReturnValue15, bool CallFunc__aca7a45594_ReturnValue2, struct FColor CallFunc__225eea7d1d_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue48, struct FString CallFunc__9a3a67a66c_ReturnValue3, struct FString CallFunc__3cb7b87e18_ReturnValue51, struct FString CallFunc__3cb7b87e18_ReturnValue53, float CallFunc__23a8e3a7f4_ReturnValue6, float CallFunc__aa1f1a3bef_ReturnValue23, struct ATslGameState* CallFunc__683a049065_ReturnValue, struct FString CallFunc__6fed9a27d9_ReturnValue8, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_X2, int32 CallFunc__4f6ce937b0_ReturnValue14, float CallFunc__2502d1a8eb_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue57, bool CallFunc__8334780abc_ReturnValue11, struct FString CallFunc__cf9e97b29f_ReturnValue3, float CallFunc__23a8e3a7f4_ReturnValue9, struct FText CallFunc__e13d2b4e79_ReturnValue3, struct FText CallFunc__e13d2b4e79_ReturnValue4, struct FString CallFunc__3cb7b87e18_ReturnValue65, bool K2Node_DynamicCast_bSuccess2, struct FVector CallFunc_GetActorBounds_BoxExtent4, float CallFunc_BreakVector_Z23, float CallFunc__23a8e3a7f4_ReturnValue10, struct FVector CallFunc_MakeVector_ReturnValue11, float CallFunc_BreakVector_Y24, struct FString CallFunc__3cb7b87e18_ReturnValue68, struct FVector CallFunc_MakeVector_ReturnValue12, struct FVector CallFunc__b7098a880f_ReturnValue7, int32 CallFunc__cb12e4bc47_ReturnValue21, struct APlayerController* CallFunc__e33fbd32a1_ReturnValue3, bool CallFunc__e0bf0c7f51_ReturnValue, float CallFunc_BreakVector_Y26, float CallFunc_BreakVector_X27, struct FString CallFunc__ac7bb196f3_ReturnValue14, struct FString CallFunc__3cb7b87e18_ReturnValue79, struct FString CallFunc__3cb7b87e18_ReturnValue81); // Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer // HasDefaults // @ game+0x293938
};

