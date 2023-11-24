// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// Size: 0x510 (Inherited: 0x450)
struct ALobbyViewMode_C : AViewModeStudio {
	struct F*73a77c28fa UberGraphFrame; // 0x450(0x08)
	struct USceneComponent* Scene; // 0x458(0x08)
	struct FRotator Target; // 0x460(0x0c)
	struct FRotator Rollback; // 0x46c(0x0c)
	char pad_478[0x8]; // 0x478(0x08)
	struct FTransform CurrentTM; // 0x480(0x30)
	struct FTransform NextTM; // 0x4b0(0x30)
	struct FTransform Temp; // 0x4e0(0x30)

	void UserConstructionScript(); // Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AddYaw(); // Function LobbyViewMode.LobbyViewMode_C.AddYaw // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AddPitch(); // Function LobbyViewMode.LobbyViewMode_C.AddPitch // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AddRoll(); // Function LobbyViewMode.LobbyViewMode_C.AddRoll // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AddViewDistance(); // Function LobbyViewMode.LobbyViewMode_C.AddViewDistance // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveTick(); // Function LobbyViewMode.LobbyViewMode_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	void SetViewModeAbleActor(); // Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FRotator ExecuteUbergraph_LobbyViewMode(struct FHitResult CallFunc_K2_AddWorldRotation_SweepHitResult3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Z, float CallFunc__c22e42a3a5_ReturnValue, float K2Node_Event_DeltaSeconds, struct FRotator CallFunc__31071bb6e5_ReturnValue, struct FRotator CallFunc__fe65a776a5_ReturnValue6, struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, struct FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Pitch, struct FString CallFunc__61fa25de1f_ReturnValue2, float CallFunc__179261048b_ReturnValue); // Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode // HasDefaults // @ game+0x1e037c
};

