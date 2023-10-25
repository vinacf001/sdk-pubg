// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xcf1 (Inherited: 0xcd0)
struct ABP_Drone_C : ATslDrone {
	struct F*abc8f374e0 UberGraphFrame; // 0xcd0(0x08)
	struct UStaticMeshComponent* Cone; // 0xcd8(0x08)
	bool bShowLights; // 0xce0(0x01)
	char pad_CE1[0x7]; // 0xce1(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xce8(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xcf0(0x01)

	struct UParticleSystemComponent* GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x2ad9d8
	bool GetTeamToQuery(); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool UpdateLights(); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FHitResult BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x2ad9d8
	float ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2ad9d8
	struct ATslCharacter* SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool ExecuteUbergraph_BP_Drone(); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x2ad9d8
};

