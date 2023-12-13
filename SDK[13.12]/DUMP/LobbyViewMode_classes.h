// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// Size: 0x510 (Inherited: 0x450)
struct ALobbyViewMode_C : AViewModeStudio {
	struct F*a6c93df757 UberGraphFrame; // 0x450(0x08)
	struct USceneComponent* Scene; // 0x458(0x08)
	struct FRotator Target; // 0x460(0x0c)
	struct FRotator Rollback; // 0x46c(0x0c)
	char pad_478[0x8]; // 0x478(0x08)
	struct FTransform CurrentTM; // 0x480(0x30)
	struct FTransform NextTM; // 0x4b0(0x30)
	struct FTransform Temp; // 0x4e0(0x30)

	void UserConstructionScript(); // Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	float AddYaw(); // Function LobbyViewMode.LobbyViewMode_C.AddYaw // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	float AddPitch(); // Function LobbyViewMode.LobbyViewMode_C.AddPitch // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	float AddRoll(); // Function LobbyViewMode.LobbyViewMode_C.AddRoll // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	float AddViewDistance(); // Function LobbyViewMode.LobbyViewMode_C.AddViewDistance // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	float ReceiveTick(); // Function LobbyViewMode.LobbyViewMode_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
	struct AActor* SetViewModeAbleActor(); // Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FVector ExecuteUbergraph_LobbyViewMode(); // Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode // HasDefaults // @ game+0x20a5d0
};

