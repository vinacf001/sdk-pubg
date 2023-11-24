// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// Size: 0x510 (Inherited: 0x450)
struct ALobbyViewMode_C : AViewModeStudio {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x450(0x08)
	struct USceneComponent* Scene; // 0x458(0x08)
	struct FRotator Target; // 0x460(0x0c)
	struct FRotator Rollback; // 0x46c(0x0c)
	char pad_478[0x8]; // 0x478(0x08)
	struct FTransform CurrentTM; // 0x480(0x30)
	struct FTransform NextTM; // 0x4b0(0x30)
	struct FTransform Temp; // 0x4e0(0x30)

	void UserConstructionScript(); // Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AddYaw(); // Function LobbyViewMode.LobbyViewMode_C.AddYaw // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AddPitch(); // Function LobbyViewMode.LobbyViewMode_C.AddPitch // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AddRoll(); // Function LobbyViewMode.LobbyViewMode_C.AddRoll // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AddViewDistance(); // Function LobbyViewMode.LobbyViewMode_C.AddViewDistance // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveTick(); // Function LobbyViewMode.LobbyViewMode_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x293938
	void SetViewModeAbleActor(); // Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FTransform ExecuteUbergraph_LobbyViewMode(float K2Node_Event_Value3, struct FRotator CallFunc_MakeRotator_ReturnValue2, struct FRotator CallFunc_MakeRotator_ReturnValue3, struct FHitResult CallFunc_K2_AddWorldRotation_SweepHitResult3, struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult2, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult3, float K2Node_Event_DeltaSeconds, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult6, struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue2, struct FVector CallFunc_BreakTransform_Location, struct FVector CallFunc_BreakTransform_Scale, struct FVector CallFunc_BreakTransform_Location2); // Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode // HasDefaults // @ game+0x293938
};

