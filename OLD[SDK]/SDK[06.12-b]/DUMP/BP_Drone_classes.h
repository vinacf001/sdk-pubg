// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xdb1 (Inherited: 0xd90)
struct ABP_Drone_C : ATslDrone {
	struct F*a6c93df757 UberGraphFrame; // 0xd90(0x08)
	struct UStaticMeshComponent* Cone; // 0xd98(0x08)
	bool bShowLights; // 0xda0(0x01)
	char pad_DA1[0x7]; // 0xda1(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xda8(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xdb0(0x01)

	struct UParticleSystemComponent* GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x22c9a0
	bool GetTeamToQuery(); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	bool UpdateLights(); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	bool DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	struct FHitResult BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x22c9a0
	float ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22c9a0
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22c9a0
	struct ATslCharacter* SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	bool ExecuteUbergraph_BP_Drone(); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x22c9a0
};

