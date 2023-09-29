// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// Size: 0x4bc (Inherited: 0x3f8)
struct AStatMapLocations_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f8(0x08)
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

	struct TArray<struct FString> AppendStatDataToColumnNames(struct FString Column Names as String); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames // None // @ game+0x26a108
	struct FString GetCurrentLevelLocations(); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations // None // @ game+0x26a108
	int32 GetMapLocations(struct TArray<struct FString> CallFunc__b427bc4a91_OutStringArray, int32 CallFunc__10b0236ab6_ReturnValue, int32 CallFunc__10b0236ab6_ReturnValue2, bool CallFunc_Split_ReturnValue, struct FString CallFunc_Split_RightS4, struct FString CallFunc_Replace_ReturnValue, struct FString CallFunc_Replace_ReturnValue2, struct FString CallFunc_Array_Get_Item3, float CallFunc__b17047a1c1_ReturnValue2, int32 CallFunc__c60d779ed0_ReturnValue2, float CallFunc_BreakVector_Y, struct FVector CallFunc_MakeVector_ReturnValue, struct FVector CallFunc_MakeVector_ReturnValue2, struct FVector CallFunc_MakeVector_ReturnValue3, int32 ___int_Loop_Counter_Variable3, bool CallFunc__d1b7f5dc7b_ReturnValue3); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // None // @ game+0x26a108
	void CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget // None // @ game+0x26a108
	struct FString GatherStats(struct TArray<struct FString> Output, struct TArray<int32> CallFunc__2a03d584dd_CallCounts, float CallFunc_Array_Get_Item3, struct FString CallFunc__edc080a44e_ReturnValue3, struct FString CallFunc__edc080a44e_ReturnValue6, struct FString CallFunc__edc080a44e_ReturnValue8, bool CallFunc__2a03d584dd_ReturnValue2, struct FString CallFunc__d03917fad9_ReturnValue4); // Function StatMapLocations.StatMapLocations_C.GatherStats // None // @ game+0x26a108
	bool SetCurrentTransform(struct ATslCharacter* CallFunc__eb251d0969_ReturnValue, struct FTransform CallFunc_GetTransform_ReturnValue); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // None // @ game+0x26a108
	struct FTransform CheckPlayerTransform(); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // None // @ game+0x26a108
	struct FString MoveToDebugLocation(struct FString OutMoveLocation, struct FRotator CallFunc_BreakTransform_Rotation, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, struct FString CallFunc__d03917fad9_ReturnValue3, struct FString CallFunc__d03917fad9_ReturnValue4, struct FString CallFunc__d03917fad9_ReturnValue5, struct FString CallFunc__edc080a44e_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue7, struct FString CallFunc__edc080a44e_ReturnValue10); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // None // @ game+0x26a108
	void UserConstructionScript(struct TArray<struct FString> CallFunc__b427bc4a91_OutStringArray, struct TArray<struct FString> CallFunc__b427bc4a91_OutStringArray2); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay // None // @ game+0x26a108
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp // None // @ game+0x26a108
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations // None // @ game+0x26a108
	struct FString ExecuteUbergraph_StatMapLocations(int32 ___int_Loop_Counter_Variable, int32 CallFunc__10b0236ab6_ReturnValue4, struct TArray<struct ATslBlueZoneCreateArea*> CallFunc_GetAllActorsOfClass_OutActors3, struct ATslPassBluezoneArea* CallFunc_Array_Get_Item2, int32 CallFunc__c60d779ed0_ReturnValue3, bool CallFunc__d1b7f5dc7b_ReturnValue2, struct APawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_DynamicCast_bSuccess, bool CallFunc__254021fe6a_ReturnValue, int32 ___int_Loop_Counter_Variable5, bool CallFunc__d1b7f5dc7b_ReturnValue4, int32 CallFunc__10b0236ab6_ReturnValue6, float CallFunc__56a8b1a1a0_ReturnValue, bool CallFunc_Split_ReturnValue, int32 CallFunc_Round_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue3, int32 CallFunc_Max_ReturnValue, bool CallFunc__d1b7f5dc7b_ReturnValue5, struct FString CallFunc__e4959400e5_ReturnValue2, struct TArray<struct FString> CallFunc_AppendStatDataToColumnNames_Array); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations // None // @ game+0x26a108
};

