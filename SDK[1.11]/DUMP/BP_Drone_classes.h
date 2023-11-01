// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xcf1 (Inherited: 0xcd0)
struct ABP_Drone_C : ATslDrone {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0xcd0(0x08)
	struct UStaticMeshComponent* Cone[0x08]; // 0xcd8(0x08)
	bool bShowLights; // 0xce0(0x01)
	char pad_CE1[0x7]; // 0xce1(0x07)
	struct UParticleSystemComponent* LightsParticleComponent[0x08]; // 0xce8(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xcf0(0x01)

	void GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x2cd4ac
	struct ATeam* GetTeamToQuery(); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UpdateLights(struct ATslCharacter** CallFunc__68038d7b57_ReturnValue); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct AActor** OtherActor); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FHitResult ExecuteUbergraph_BP_Drone(bool CallFunc__3998cff11d_ReturnValue, int32* CallFunc__19e81ba9b8_ReturnValue2, struct UParticleSystemComponent** CallFunc_SpawnEmitterAttached_ReturnValue, struct UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue3, struct ATslCharacter** K2Node_Event_DroneOwner, struct ATslCharacter** CallFunc__68038d7b57_ReturnValue, bool CallFunc__860b32acc0_ReturnValue, enum class EColorBlindType CallFunc__dedea552a8_ReturnValue3, struct UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue4, struct FString* CallFunc_GetDisplayName_ReturnValue, struct UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue6); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x2cd4ac
};

