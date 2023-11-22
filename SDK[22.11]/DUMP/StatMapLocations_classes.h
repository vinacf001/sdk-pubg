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

	struct TArray<struct FString> AppendStatDataToColumnNames(); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FString GetCurrentLevelLocations(); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FRotator GetMapLocations(struct TArray<struct FTransform> MapTransformArray, int32 ___int_Loop_Counter_Variable, int32 CallFunc__0bad7adb6e_ReturnValue, struct FString CallFunc_Split_RightS, struct FString CallFunc_Split_LeftS2, bool CallFunc_Split_ReturnValue3, struct TArray<struct FString> CallFunc__aaad7129cf_ReturnValue2, int32 CallFunc__0bad7adb6e_ReturnValue3, struct FVector CallFunc_MakeVector_ReturnValue3, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, bool CallFunc__2bff9823d8_ReturnValue3); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FString GatherStats(int32 ___int_Array_Index_Variable, int32 CallFunc__0bad7adb6e_ReturnValue, struct FString CallFunc__ac7bb196f3_ReturnValue2, int32 CallFunc_Array_Get_Item4, struct TArray<float> CallFunc__068d269586_InclusiveAvg2, int32 CallFunc__0bad7adb6e_ReturnValue2, struct FString CallFunc__3cb7b87e18_ReturnValue9, float CallFunc_Array_Get_Item7, int32 CallFunc_Array_Get_Item8); // Function StatMapLocations.StatMapLocations_C.GatherStats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct ATslCharacter* SetCurrentTransform(); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FTransform CheckPlayerTransform(); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FString MoveToDebugLocation(int32 PointNumber, struct FTransform CallFunc_Array_Get_Item, float CallFunc_BreakVector_Y, float CallFunc_BreakRotator_Pitch, struct FString CallFunc__ac7bb196f3_ReturnValue3, struct FString CallFunc__ac7bb196f3_ReturnValue6, struct FString CallFunc__3cb7b87e18_ReturnValue6, struct FString CallFunc__3cb7b87e18_ReturnValue8); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct TArray<struct FString> UserConstructionScript(); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x32e590
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool ExecuteUbergraph_StatMapLocations(int32 CallFunc__949df90870_ReturnValue, int32 CallFunc__949df90870_ReturnValue2, int32 ___int_Loop_Counter_Variable3, int32 CallFunc__949df90870_ReturnValue3, struct FString CallFunc__3cb7b87e18_ReturnValue, int32 CallFunc__949df90870_ReturnValue5, struct ATslBlueZoneCreateArea* CallFunc_Array_Get_Item3, int32 CallFunc__0bad7adb6e_ReturnValue2, bool CallFunc__2bff9823d8_ReturnValue2, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, struct APawn* CallFunc_GetPlayerPawn_ReturnValue2, int32 CallFunc__949df90870_ReturnValue6, float CallFunc__ac5190e48d_ReturnValue, bool CallFunc_Split_ReturnValue, bool CallFunc__2bff9823d8_ReturnValue5, struct FString CallFunc__9e56b5c82a_ReturnValue, struct FString CallFunc__3cb7b87e18_ReturnValue6, struct TArray<struct FString> CallFunc_AppendStatDataToColumnNames_Array); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations //  // @ game+0x32e590
};

