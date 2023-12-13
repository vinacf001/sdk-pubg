// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xd01 (Inherited: 0xce0)
struct ABP_Drone_C : ATslDrone {
	struct F*a3d8ff36c0 UberGraphFrame; // 0xce0(0x08)
	struct UStaticMeshComponent* Cone; // 0xce8(0x08)
	bool bShowLights; // 0xcf0(0x01)
	char pad_CF1[0x7]; // 0xcf1(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xcf8(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xd00(0x01)

	void GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x21d2c4
	void GetTeamToQuery(); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void UpdateLights(); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x21d2c4
	void SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ExecuteUbergraph_BP_Drone(); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x21d2c4
};

