// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// Size: 0x530 (Inherited: 0x470)
struct ALobbyViewMode_C : AViewModeStudio {
	struct F*73a77c28fa UberGraphFrame; // 0x470(0x08)
	struct USceneComponent* Scene; // 0x478(0x08)
	struct FRotator Target; // 0x480(0x0c)
	struct FRotator Rollback; // 0x48c(0x0c)
	char pad_498[0x8]; // 0x498(0x08)
	struct FTransform CurrentTM; // 0x4a0(0x30)
	struct FTransform NextTM; // 0x4d0(0x30)
	struct FTransform Temp; // 0x500(0x30)

	void UserConstructionScript(); // Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	float AddYaw(); // Function LobbyViewMode.LobbyViewMode_C.AddYaw // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	float AddPitch(); // Function LobbyViewMode.LobbyViewMode_C.AddPitch // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	float AddRoll(); // Function LobbyViewMode.LobbyViewMode_C.AddRoll // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	float AddViewDistance(); // Function LobbyViewMode.LobbyViewMode_C.AddViewDistance // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	float ReceiveTick(); // Function LobbyViewMode.LobbyViewMode_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	struct AActor* SetViewModeAbleActor(); // Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FVector ExecuteUbergraph_LobbyViewMode(); // Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode // HasDefaults // @ game+0x22ddc4
};

