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

	void UserConstructionScript(); // Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void AddYaw(); // Function LobbyViewMode.LobbyViewMode_C.AddYaw // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void AddPitch(); // Function LobbyViewMode.LobbyViewMode_C.AddPitch // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void AddRoll(); // Function LobbyViewMode.LobbyViewMode_C.AddRoll // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void AddViewDistance(); // Function LobbyViewMode.LobbyViewMode_C.AddViewDistance // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReceiveTick(); // Function LobbyViewMode.LobbyViewMode_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x32e590
	void SetViewModeAbleActor(); // Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FVector ExecuteUbergraph_LobbyViewMode(float K2Node_Event_Value3, struct FHitResult CallFunc_K2_AddWorldRotation_SweepHitResult2, float CallFunc_BreakVector_Z, struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult2, struct FRotator CallFunc__7f1c545765_ReturnValue3, struct FRotator CallFunc__7f1c545765_ReturnValue4, struct AActor* K2Node_Event_Actor, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, struct FString CallFunc__aadc8f8e6f_ReturnValue2, bool CallFunc__63b36ff994_ReturnValue, float CallFunc__63e65eadc5_ReturnValue, struct FTransform CallFunc_MakeTransform_ReturnValue); // Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode // HasDefaults // @ game+0x32e590
};

