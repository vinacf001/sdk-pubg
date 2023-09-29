// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xc81 (Inherited: 0xc60)
struct ABP_Drone_C : ATslDrone {
	struct F*73a77c28fa UberGraphFrame; // 0xc60(0x08)
	struct UStaticMeshComponent* Cone; // 0xc68(0x08)
	bool bShowLights; // 0xc70(0x01)
	char pad_C71[0x7]; // 0xc71(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xc78(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xc80(0x01)

	void GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // None // @ game+0x26a108
	struct ATeam* GetTeamToQuery(); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // None // @ game+0x26a108
	struct ATslCharacter* UpdateLights(); // Function BP_Drone.BP_Drone_C.UpdateLights // None // @ game+0x26a108
	void DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // None // @ game+0x26a108
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // None // @ game+0x26a108
	struct UPrimitiveComponent* BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct AActor* OtherActor, int32 OtherBodyIndex); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // None // @ game+0x26a108
	void ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // None // @ game+0x26a108
	void SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // None // @ game+0x26a108
	bool ExecuteUbergraph_BP_Drone(bool CallFunc__dc292520ef_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue5, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue7, struct UPrimitiveComponent* _05982889a1_OverlappedComponent, struct UPrimitiveComponent* _05982889a1_OtherComp); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // None // @ game+0x26a108
};

