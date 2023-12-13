// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xda1 (Inherited: 0xd80)
struct ABP_Drone_C : ATslDrone {
	struct F*a6c93df757 UberGraphFrame; // 0xd80(0x08)
	struct UStaticMeshComponent* Cone; // 0xd88(0x08)
	bool bShowLights; // 0xd90(0x01)
	char pad_D91[0x7]; // 0xd91(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xd98(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xda0(0x01)

	struct UParticleSystemComponent* GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x20a5d0
	bool GetTeamToQuery(); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool UpdateLights(); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FHitResult BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x20a5d0
	float ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	struct ATslCharacter* SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	int32 ExecuteUbergraph_BP_Drone(bool CallFunc_IsValid_ReturnValue, bool CallFunc__edc1eb99da_ReturnValue, enum class EColorBlindType CallFunc__7b73080eb7_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue4, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue5, bool CallFunc_IsValid_ReturnValue2, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, enum class EColorBlindType CallFunc__7b73080eb7_ReturnValue2, struct ATslCharacter* K2Node_Event_DroneOwner, struct ATslCharacter* CallFunc__a5a046965b_ReturnValue, bool CallFunc__055a659f43_ReturnValue, enum class EColorBlindType CallFunc__7b73080eb7_ReturnValue3, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue6, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, float K2Node_Event_DeltaSeconds, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue7, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, struct UPrimitiveComponent* _5c6cfaa940_OverlappedComponent, struct AActor* _5c6cfaa940_OtherActor, struct UPrimitiveComponent* _5c6cfaa940_OtherComp, int32 _5c6cfaa940_OtherBodyIndex, bool _5c6cfaa940_bFromSweep, struct FHitResult _5c6cfaa940_SweepResult, struct FString CallFunc_GetDisplayName_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue8, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, bool CallFunc__3c5cc3769a_ReturnValue, bool _62618e47cd2_CmpSuccess); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x20a5d0
};

