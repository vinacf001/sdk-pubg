// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// Size: 0x510 (Inherited: 0x450)
struct ALobbyViewMode_C : AViewModeStudio {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x450(0x08)
	struct USceneComponent* Scene[0x08]; // 0x458(0x08)
	struct FRotator Target[0x0c]; // 0x460(0x0c)
	struct FRotator Rollback[0x0c]; // 0x46c(0x0c)
	char pad_478[0x8]; // 0x478(0x08)
	struct FTransform CurrentTM[0x30]; // 0x480(0x30)
	struct FTransform NextTM[0x30]; // 0x4b0(0x30)
	struct FTransform Temp[0x30]; // 0x4e0(0x30)

	void UserConstructionScript(); // Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void AddYaw(); // Function LobbyViewMode.LobbyViewMode_C.AddYaw // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void AddPitch(); // Function LobbyViewMode.LobbyViewMode_C.AddPitch // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void AddRoll(); // Function LobbyViewMode.LobbyViewMode_C.AddRoll // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void AddViewDistance(); // Function LobbyViewMode.LobbyViewMode_C.AddViewDistance // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveTick(); // Function LobbyViewMode.LobbyViewMode_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetViewModeAbleActor(); // Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FRotator ExecuteUbergraph_LobbyViewMode(int32* EntryPoint, struct FHitResult* CallFunc_K2_AddWorldRotation_SweepHitResult, struct FHitResult* CallFunc_K2_AddWorldRotation_SweepHitResult3, struct FRotator* CallFunc__50da2f3057_ReturnValue, float* CallFunc_FClamp_ReturnValue, struct FHitResult* CallFunc_K2_SetRelativeLocation_SweepHitResult, struct FHitResult* CallFunc_K2_SetWorldRotation_SweepHitResult3, struct FRotator* CallFunc__50da2f3057_ReturnValue6, struct FHitResult* CallFunc_K2_SetWorldRotation_SweepHitResult6, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FString* CallFunc__9c442e179f_ReturnValue2, bool CallFunc__aed2cdacd6_ReturnValue, struct FVector* CallFunc_BreakTransform_Location2); // Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode // HasDefaults // @ game+0x2cd4ac
};

