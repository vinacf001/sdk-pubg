// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// Size: 0x4ac (Inherited: 0x3e8)
struct AStatMapLocations_C : AActor {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x3e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f0(0x08)
	int32 CurrentLocationNumber; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct FTransform CurrentTransform; // 0x400(0x30)
	float DelayBeforeStatCheck; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<struct FString> BeginConsoleCommands; // 0x438(0x10)
	struct TArray<struct FString> StatGroups; // 0x448(0x10)
	float DelayTimeAfterTeleport; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct FString> StatCounterNames; // 0x460(0x10)
	struct TArray<struct FString> StatCycleNames; // 0x470(0x10)
	struct UStatLocationsWidget_C* StatsWidget; // 0x480(0x08)
	struct TArray<struct FString> StatsOutputArray; // 0x488(0x10)
	struct TArray<struct FTransform> MapLocations; // 0x498(0x10)
	float StartupDelay; // 0x4a8(0x04)

	struct TArray<struct FString> AppendStatDataToColumnNames(struct FString Column Names as String); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void GetCurrentLevelLocations(); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FRotator GetMapLocations(int32 ___int_Loop_Counter_Variable, struct TArray<struct FString> CallFunc__00ba05259e_OutStringArray, int32 CallFunc__0bad7adb6e_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 ___int_Loop_Counter_Variable2, int32 CallFunc_Array_Add_ReturnValue, struct FString CallFunc_Split_LeftS2, struct FString CallFunc_Split_RightS2, struct TArray<struct FString> CallFunc__aaad7129cf_ReturnValue2, float CallFunc__46123475d9_ReturnValue, struct FTransform CallFunc_MakeTransform_ReturnValue, float CallFunc_BreakVector_Y, struct FVector CallFunc_MakeVector_ReturnValue2, struct FVector CallFunc_MakeVector_ReturnValue3, float CallFunc_BreakRotator_Yaw, bool CallFunc__2bff9823d8_ReturnValue3); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString GatherStats(int32 ___int_Loop_Counter_Variable, int32 ___int_Array_Index_Variable, struct TArray<int32> CallFunc__068d269586_CallCounts, struct TArray<float> CallFunc__068d269586_InclusiveMax, float CallFunc_Array_Get_Item3, struct FString CallFunc__ac7bb196f3_ReturnValue, struct FString CallFunc__6fed9a27d9_ReturnValue, struct TArray<int32> CallFunc__068d269586_CallCounts2, int32 CallFunc_Array_Get_Item8, struct FString CallFunc__3cb7b87e18_ReturnValue11, struct FString CallFunc__3cb7b87e18_ReturnValue13, struct FString CallFunc__3cb7b87e18_ReturnValue14); // Function StatMapLocations.StatMapLocations_C.GatherStats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FTransform SetCurrentTransform(bool CallFunc_K2_SetActorTransform_ReturnValue); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FTransform CheckPlayerTransform(); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString MoveToDebugLocation(struct FRotator CallFunc_BreakTransform_Rotation, float CallFunc_BreakVector_X, float CallFunc_BreakRotator_Yaw, struct FString CallFunc__ac7bb196f3_ReturnValue3, struct FString CallFunc__ac7bb196f3_ReturnValue6, struct FString CallFunc__3cb7b87e18_ReturnValue3, struct FString CallFunc__3cb7b87e18_ReturnValue5, struct FString CallFunc__3cb7b87e18_ReturnValue8); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct TArray<struct FString> UserConstructionScript(); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations // BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct TArray<struct FString> ExecuteUbergraph_StatMapLocations(int32 ___int_Array_Index_Variable2, int32 ___int_Loop_Counter_Variable4, struct FString CallFunc__3cb7b87e18_ReturnValue2, bool CallFunc__2bff9823d8_ReturnValue2, int32 CallFunc__0bad7adb6e_ReturnValue4, bool K2Node_DynamicCast_bSuccess, struct FString CallFunc_Array_Get_Item5, struct FString CallFunc_Split_LeftS, struct FString CallFunc_Split_RightS, struct FString CallFunc__3cb7b87e18_ReturnValue4, struct FString CallFunc__3cb7b87e18_ReturnValue5, struct FString CallFunc__3cb7b87e18_ReturnValue6); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations //  // @ game+0x293938
};

