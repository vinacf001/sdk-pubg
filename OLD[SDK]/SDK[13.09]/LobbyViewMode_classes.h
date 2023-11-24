// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// Size: 0x520 (Inherited: 0x460)
struct ALobbyViewMode_C : AViewModeStudio {
	struct F*73a77c28fa UberGraphFrame; // 0x460(0x08)
	struct USceneComponent* Scene; // 0x468(0x08)
	struct FRotator Target; // 0x470(0x0c)
	struct FRotator Rollback; // 0x47c(0x0c)
	char pad_488[0x8]; // 0x488(0x08)
	struct FTransform CurrentTM; // 0x490(0x30)
	struct FTransform NextTM; // 0x4c0(0x30)
	struct FTransform Temp; // 0x4f0(0x30)

	void UserConstructionScript(); // Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript // None // @ game+0x26a108
	void AddYaw(); // Function LobbyViewMode.LobbyViewMode_C.AddYaw // None // @ game+0x26a108
	void AddPitch(); // Function LobbyViewMode.LobbyViewMode_C.AddPitch // None // @ game+0x26a108
	void AddRoll(); // Function LobbyViewMode.LobbyViewMode_C.AddRoll // None // @ game+0x26a108
	void AddViewDistance(); // Function LobbyViewMode.LobbyViewMode_C.AddViewDistance // None // @ game+0x26a108
	void ReceiveTick(); // Function LobbyViewMode.LobbyViewMode_C.ReceiveTick // None // @ game+0x26a108
	void SetViewModeAbleActor(); // Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor // None // @ game+0x26a108
	struct FTransform ExecuteUbergraph_LobbyViewMode(float K2Node_Event_Value3, struct FRotator CallFunc_MakeRotator_ReturnValue2, struct FRotator CallFunc_MakeRotator_ReturnValue3, struct FHitResult CallFunc_K2_AddWorldRotation_SweepHitResult3, struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult2, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult3, float K2Node_Event_DeltaSeconds, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult6, struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue2, struct FVector CallFunc_BreakTransform_Location, struct FVector CallFunc_BreakTransform_Scale, struct FVector CallFunc_BreakTransform_Location2); // Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode // None // @ game+0x26a108
};

