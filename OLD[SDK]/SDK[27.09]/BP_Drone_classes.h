// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xca1 (Inherited: 0xc80)
struct ABP_Drone_C : ATslDrone {
	struct F*73a77c28fa UberGraphFrame; // 0xc80(0x08)
	struct UStaticMeshComponent* Cone; // 0xc88(0x08)
	bool bShowLights; // 0xc90(0x01)
	char pad_C91[0x7]; // 0xc91(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xc98(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xca0(0x01)

	struct UParticleSystemComponent* GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x22ddc4
	bool GetTeamToQuery(); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool UpdateLights(); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FHitResult BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x22ddc4
	float ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	struct ATslCharacter* SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool ExecuteUbergraph_BP_Drone(); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x22ddc4
};

