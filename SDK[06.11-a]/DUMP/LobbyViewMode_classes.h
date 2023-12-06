// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// Size: 0x520 (Inherited: 0x460)
struct ALobbyViewMode_C : AViewModeStudio {
	struct F*a6c93df757 UberGraphFrame; // 0x460(0x08)
	struct USceneComponent* Scene; // 0x468(0x08)
	struct FRotator Target; // 0x470(0x0c)
	struct FRotator Rollback; // 0x47c(0x0c)
	char pad_488[0x8]; // 0x488(0x08)
	struct FTransform CurrentTM; // 0x490(0x30)
	struct FTransform NextTM; // 0x4c0(0x30)
	struct FTransform Temp; // 0x4f0(0x30)

	void UserConstructionScript(); // Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void AddYaw(); // Function LobbyViewMode.LobbyViewMode_C.AddYaw // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void AddPitch(float Value); // Function LobbyViewMode.LobbyViewMode_C.AddPitch // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void AddRoll(float Value); // Function LobbyViewMode.LobbyViewMode_C.AddRoll // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void AddViewDistance(); // Function LobbyViewMode.LobbyViewMode_C.AddViewDistance // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveTick(); // Function LobbyViewMode.LobbyViewMode_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x370fbc
	void SetViewModeAbleActor(struct AActor* Actor); // Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float ExecuteUbergraph_LobbyViewMode(int32 EntryPoint, struct FTransform CallFunc__f9fe668b21_ReturnValue, struct FRotator CallFunc_MakeRotator_ReturnValue2, float K2Node_Event_Value2, struct FRotator CallFunc_MakeRotator_ReturnValue3, struct FHitResult CallFunc_K2_AddWorldRotation_SweepHitResult2, struct FRotator CallFunc__431ade8cc7_ReturnValue4, float K2Node_Event_DeltaSeconds, struct FRotator CallFunc__431ade8cc7_ReturnValue5, struct FRotator CallFunc__9a4d389d23_ReturnValue, struct FRotator CallFunc__431ade8cc7_ReturnValue7, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult5, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult6, struct AActor* K2Node_Event_Actor, float CallFunc_BreakRotator_Yaw, struct FString CallFunc__e93fd99db6_ReturnValue2, bool CallFunc__d99ec0791c_ReturnValue, float CallFunc__3125d90e01_ReturnValue, struct FRotator CallFunc_BreakTransform_Rotation2, struct FVector CallFunc_BreakTransform_Scale2); // Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode // HasDefaults // @ game+0x370fbc
};

