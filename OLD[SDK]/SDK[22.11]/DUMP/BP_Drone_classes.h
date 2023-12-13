// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xcf1 (Inherited: 0xcd0)
struct ABP_Drone_C : ATslDrone {
	struct F*a3d8ff36c0 UberGraphFrame; // 0xcd0(0x08)
	struct UStaticMeshComponent* Cone; // 0xcd8(0x08)
	bool bShowLights; // 0xce0(0x01)
	char pad_CE1[0x7]; // 0xce1(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xce8(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xcf0(0x01)

	void GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x32e590
	void GetTeamToQuery(struct ATslPlayerController* CallFunc__825d80d10d_ReturnValue); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct ATslCharacter* UpdateLights(); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct UPrimitiveComponent* BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(int32 OtherBodyIndex); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x32e590
	void ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x32e590
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x32e590
	void SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool ExecuteUbergraph_BP_Drone(int32 CallFunc__777825228b_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue5, bool CallFunc__5ae66c1051_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue7, struct UPrimitiveComponent* _516b964bc3_OverlappedComponent, struct UPrimitiveComponent* _516b964bc3_OtherComp, bool _516b964bc3_bFromSweep); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x32e590
};

