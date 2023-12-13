// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// Size: 0x4bc (Inherited: 0x3f8)
struct AStatMapLocations_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x400(0x08)
	int32 CurrentLocationNumber; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
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

	int32 AppendStatDataToColumnNames(); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool GetCurrentLevelLocations(); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FRotator GetMapLocations(struct FVector TempVector, struct FRotator TempRotator, int32 ___int_Loop_Counter_Variable, int32 ___int_Array_Index_Variable2, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger2_CmpSuccess, int32 ___int_Loop_Counter_Variable2, int32 CallFunc_Array_Add_ReturnValue, struct FString CallFunc_Split_LeftS, struct FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, struct FString CallFunc_Split_RightS3, bool CallFunc_Split_ReturnValue3, struct FString CallFunc_Split_LeftS4, struct FString CallFunc_Split_RightS4); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct UStatLocationsWidget_C* CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 GatherStats(struct TArray<struct FString> outputString, int32 ___int_Loop_Counter_Variable, int32 CallFunc__f53d173295_ReturnValue, int32 ___int_Array_Index_Variable, struct TArray<float> CallFunc__5efdbe93a1_InclusiveAvg, struct TArray<float> CallFunc__5efdbe93a1_InclusiveMax, struct FString CallFunc__e22fa5e649_ReturnValue, struct FString CallFunc__e22fa5e649_ReturnValue2, struct FString CallFunc__a4f37e3e14_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue2, struct FString CallFunc__a4f37e3e14_ReturnValue4, bool CallFunc__045254c93f_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue5, struct FString CallFunc__a4f37e3e14_ReturnValue6); // Function StatMapLocations.StatMapLocations_C.GatherStats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool SetCurrentTransform(); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void CheckPlayerTransform(bool PlayerHasNotMoved, struct ATslCharacter* CallFunc__f46fa81132_ReturnValue, struct FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc__b524dd628b_ReturnValue); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FString MoveToDebugLocation(struct FVector CallFunc_BreakTransform_Location, struct FRotator CallFunc_BreakTransform_Rotation, struct FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakRotator_Yaw, struct FString CallFunc__e22fa5e649_ReturnValue, struct FString CallFunc__e22fa5e649_ReturnValue2, struct FString CallFunc__e22fa5e649_ReturnValue3, struct FString CallFunc__a4f37e3e14_ReturnValue2, struct FString CallFunc__a4f37e3e14_ReturnValue3, struct FString CallFunc__a4f37e3e14_ReturnValue4, struct FString CallFunc__a4f37e3e14_ReturnValue5); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct TArray<struct FString> UserConstructionScript(); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 ExecuteUbergraph_StatMapLocations(int32 CallFunc__f53d173295_ReturnValue, int32 ___int_Array_Index_Variable3, int32 ___int_Loop_Counter_Variable2, int32 CallFunc__f53d173295_ReturnValue2, int32 CallFunc__f53d173295_ReturnValue4, struct FString CallFunc__cc353e651f_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue, struct FString CallFunc_MoveToDebugLocation_OutMoveLocation, struct TArray<struct AAirborneEjectionArea*> CallFunc_GetAllActorsOfClass_OutActors, int32 ___int_Array_Index_Variable5, int32 CallFunc__34ad69eaa1_ReturnValue, struct AAirborneEjectionArea* CallFunc_Array_Get_Item, struct FString CallFunc__a4f37e3e14_ReturnValue3, int32 CallFunc_Max_ReturnValue, int32 CallFunc__34ad69eaa1_ReturnValue5, struct FString CallFunc__cc1b42f995_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue4, struct FString CallFunc__cc353e651f_ReturnValue2, int32 CallFunc__34ad69eaa1_ReturnValue6, struct FString CallFunc__a4f37e3e14_ReturnValue5, bool CallFunc__92bc5dc082_ReturnValue); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations //  // @ game+0x370fbc
};

