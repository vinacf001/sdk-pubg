// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// Size: 0x4bc (Inherited: 0x3f0)
struct AStatMapLocations_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f8(0x08)
	int32 CurrentLocationNumber; // 0x400(0x04)
	char pad_404[0xc]; // 0x404(0x0c)
	struct FTransform CurrentTransform; // 0x410(0x30)
	float DelayBeforeStatCheck; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct TArray<struct FString> BeginConsoleCommands; // 0x448(0x10)
	struct TArray<struct FString> StatGroups; // 0x458(0x10)
	float DelayTimeAfterTeleport; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct TArray<struct FString> StatCounterNames; // 0x470(0x10)
	struct TArray<struct FString> StatCycleNames; // 0x480(0x10)
	struct UStatLocationsWidget_C* StatsWidget; // 0x490(0x08)
	struct TArray<struct FString> StatsOutputArray; // 0x498(0x10)
	struct TArray<struct FTransform> MapLocations; // 0x4a8(0x10)
	float StartupDelay; // 0x4b8(0x04)

	struct TArray<struct FString> AppendStatDataToColumnNames(struct FString Column Names as String); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString GetCurrentLevelLocations(); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool GetMapLocations(struct FTransform TempTransform, struct FVector TempVector, int32 CallFunc__10b0236ab6_ReturnValue, int32 CallFunc__c60d779ed0_ReturnValue, int32 ___int_Array_Index_Variable2, bool CallFunc__d1b7f5dc7b_ReturnValue, struct FString CallFunc_Split_RightS, struct FString CallFunc_Split_RightS2, struct FString CallFunc_Split_RightS4, bool CallFunc_Split_ReturnValue4, struct TArray<struct FString> CallFunc__eae3a5720f_ReturnValue2, float CallFunc__b17047a1c1_ReturnValue, float CallFunc__b17047a1c1_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Z, struct FVector CallFunc_MakeVector_ReturnValue2, int32 ___int_Loop_Counter_Variable3, int32 CallFunc__10b0236ab6_ReturnValue3, struct FRotator CallFunc_MakeRotator_ReturnValue2); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString GatherStats(struct TArray<struct FString> outputString, struct FString CallFunc_Array_Get_Item, struct TArray<int32> CallFunc__2a03d584dd_CallCounts, bool CallFunc__2a03d584dd_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue4, struct FString CallFunc__edc080a44e_ReturnValue8, int32 CallFunc_Array_Add_ReturnValue, struct TArray<float> CallFunc__2a03d584dd_InclusiveAvg2, struct FString CallFunc__edc080a44e_ReturnValue9, int32 CallFunc_Array_Get_Item8, struct FString CallFunc__edc080a44e_ReturnValue12, struct FString CallFunc__edc080a44e_ReturnValue13); // Function StatMapLocations.StatMapLocations_C.GatherStats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FTransform SetCurrentTransform(bool CallFunc_K2_SetActorTransform_ReturnValue); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void CheckPlayerTransform(bool PlayerHasNotMoved, struct FTransform CallFunc_GetTransform_ReturnValue); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString MoveToDebugLocation(struct FString OutMoveLocation, struct FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, struct FString CallFunc__d03917fad9_ReturnValue3, struct FString CallFunc__d03917fad9_ReturnValue4, struct FString CallFunc__d03917fad9_ReturnValue6, struct FString CallFunc__edc080a44e_ReturnValue3, struct FString CallFunc__edc080a44e_ReturnValue5); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct TArray<struct FString> UserConstructionScript(); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FString ExecuteUbergraph_StatMapLocations(int32 EntryPoint, int32 ___int_Array_Index_Variable, int32 ___int_Loop_Counter_Variable2, int32 ___int_Loop_Counter_Variable3, int32 ___int_Loop_Counter_Variable4, struct TArray<struct ATslPassBluezoneArea*> CallFunc_GetAllActorsOfClass_OutActors2, int32 CallFunc__c60d779ed0_ReturnValue2, int32 CallFunc__c60d779ed0_ReturnValue4, bool K2Node_DynamicCast_bSuccess, struct APawn* CallFunc_GetPlayerPawn_ReturnValue2, bool CallFunc__254021fe6a_ReturnValue, struct TArray<struct FString> CallFunc_GatherStats_Output, int32 CallFunc__c60d779ed0_ReturnValue6, bool CallFunc__d1b7f5dc7b_ReturnValue6, struct TArray<struct FString> CallFunc_AppendStatDataToColumnNames_Array); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations //  // @ game+0x1e037c
};

