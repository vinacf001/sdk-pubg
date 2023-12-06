// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xda1 (Inherited: 0xd80)
struct ABP_Drone_C : ATslDrone {
	struct F*a6c93df757 UberGraphFrame; // 0xd80(0x08)
	struct UStaticMeshComponent* Cone; // 0xd88(0x08)
	bool bShowLights; // 0xd90(0x01)
	char pad_D91[0x7]; // 0xd91(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xd98(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xda0(0x01)

	void GetLightParticle(struct UParticleSystemComponent* ReturnValue); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x370fbc
	void GetTeamToQuery(struct ATeam* NewParam); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UpdateLights(bool CallFunc__537b1ea253_ReturnValue, struct ATslCharacter* CallFunc__a5a046965b_ReturnValue, bool CallFunc_IsValid_ReturnValue); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x370fbc
	void ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void SetUpLights(struct ATslCharacter* DroneOwner); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FHitResult ExecuteUbergraph_BP_Drone(int32 EntryPoint, struct FString CallFunc_GetDisplayName_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue8, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, bool CallFunc__3c5cc3769a_ReturnValue); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x370fbc
};

