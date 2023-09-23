// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xc81 (Inherited: 0xc60)
struct ABP_Drone_C : ATslDrone {
	struct F*73a77c28fa UberGraphFrame; // 0xc60(0x08)
	struct UStaticMeshComponent* Cone; // 0xc68(0x08)
	bool bShowLights; // 0xc70(0x01)
	char pad_C71[0x7]; // 0xc71(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xc78(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xc80(0x01)

	void GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x1e037c
	void GetTeamToQuery(struct ATslPlayerController* CallFunc__582407ad4f_ReturnValue); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UpdateLights(struct ATslCharacter* CallFunc__afee0436a4_ReturnValue); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x1e037c
	void ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool ExecuteUbergraph_BP_Drone(int32 CallFunc__a2a5bc65ac_ReturnValue, bool CallFunc__f9d5a71bf1_ReturnValue, int32 CallFunc__a2a5bc65ac_ReturnValue2, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue5, struct ATslCharacter* K2Node_Event_DroneOwner, struct ATslCharacter* CallFunc__afee0436a4_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue6, struct FHitResult _05982889a1_SweepResult, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue8, bool CallFunc__b5c3a53167_ReturnValue); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x1e037c
};

