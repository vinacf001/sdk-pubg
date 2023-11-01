// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// Size: 0x4ac (Inherited: 0x3e8)
struct AStatMapLocations_C : AActor {
	struct F*abc8f374e0 UberGraphFrame; // 0x3e8(0x08)
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

	struct TArray<struct FString> AppendStatDataToColumnNames(struct TArray<struct FString> OutArray); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString GetCurrentLevelLocations(); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	int32 GetMapLocations(struct FRotator TempRotator, int32 ___int_Loop_Counter_Variable, struct TArray<struct FString> CallFunc__896938a2ab_OutStringArray, int32 ___int_Array_Index_Variable2, bool K2Node_SwitchInteger2_CmpSuccess, int32 CallFunc__e93d5a86a0_ReturnValue2, struct FString CallFunc_Split_RightS, struct FString CallFunc_Split_RightS3, struct FString CallFunc_Replace_ReturnValue, struct TArray<struct FString> CallFunc__09bb698759_ReturnValue, float CallFunc_BreakVector_Z, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Yaw, struct FRotator CallFunc_MakeRotator_ReturnValue2); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString GatherStats(struct TArray<struct FString> outputString, int32 CallFunc__e93d5a86a0_ReturnValue, struct TArray<int32> CallFunc__c5b7d748fd_CallCounts, struct TArray<float> CallFunc__c5b7d748fd_InclusiveMax, struct FString CallFunc__9d57634d3d_ReturnValue, struct FString CallFunc__390858a7fc_ReturnValue4, bool CallFunc__249bb33a55_ReturnValue, struct FString CallFunc__390858a7fc_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue, struct FString CallFunc_Array_Get_Item5, struct TArray<int32> CallFunc__c5b7d748fd_CallCounts2, struct TArray<float> CallFunc__c5b7d748fd_InclusiveAvg2, bool CallFunc__c5b7d748fd_ReturnValue2, float CallFunc_Array_Get_Item7, struct FString CallFunc__390858a7fc_ReturnValue10, struct FString CallFunc__390858a7fc_ReturnValue15, struct FString CallFunc__390858a7fc_ReturnValue16); // Function StatMapLocations.StatMapLocations_C.GatherStats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FHitResult SetCurrentTransform(); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct ATslCharacter* CheckPlayerTransform(struct FTransform CallFunc_GetTransform_ReturnValue); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString MoveToDebugLocation(int32 PointNumber, struct FString CallFunc__9d57634d3d_ReturnValue, struct FString CallFunc__9d57634d3d_ReturnValue2, struct FString CallFunc__390858a7fc_ReturnValue4, struct FString CallFunc__390858a7fc_ReturnValue6); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct TArray<struct FString> UserConstructionScript(); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString ExecuteUbergraph_StatMapLocations(int32 CallFunc__e93d5a86a0_ReturnValue, int32 CallFunc__e93d5a86a0_ReturnValue2, struct FString CallFunc__390858a7fc_ReturnValue, struct TArray<struct AAirborneEjectionArea*> CallFunc_GetAllActorsOfClass_OutActors, struct AAirborneEjectionArea* CallFunc_Array_Get_Item, struct TArray<struct ATslBlueZoneCreateArea*> CallFunc_GetAllActorsOfClass_OutActors3, int32 CallFunc__edb1454eaf_ReturnValue2, bool CallFunc__249bb33a55_ReturnValue, bool K2Node_DynamicCast_bSuccess, struct APawn* CallFunc_GetPlayerPawn_ReturnValue2, bool CallFunc__860b32acc0_ReturnValue, float CallFunc__f907b55d86_ReturnValue, int32 CallFunc__edb1454eaf_ReturnValue5, bool CallFunc__249bb33a55_ReturnValue6); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations //  // @ game+0x2cd4ac
};

