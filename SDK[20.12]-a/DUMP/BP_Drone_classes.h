// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xda1 (Inherited: 0xd80)
struct ABP_Drone_C : ATslDrone {
	struct F*a6c93df757 UberGraphFrame; // 0xd80(0x08)
	struct UStaticMeshComponent* Cone; // 0xd88(0x08)
	bool bShowLights; // 0xd90(0x01)
	char pad_D91[0x7]; // 0xd91(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xd98(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xda0(0x01)

	void GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x3b43ac
	void GetTeamToQuery(); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UpdateLights(); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_BP_Drone(); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x3b43ac
};

