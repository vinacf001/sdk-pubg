// BlueprintGeneratedClass BP_Drone.BP_Drone_C
// Size: 0xce1 (Inherited: 0xcc0)
struct ABP_Drone_C : ATslDrone {
	struct F*a3d8ff36c0 UberGraphFrame; // 0xcc0(0x08)
	struct UStaticMeshComponent* Cone; // 0xcc8(0x08)
	bool bShowLights; // 0xcd0(0x01)
	char pad_CD1[0x7]; // 0xcd1(0x07)
	struct UParticleSystemComponent* LightsParticleComponent; // 0xcd8(0x08)
	enum class EColorBlindType OldColorBlindType; // 0xce0(0x01)

	void GetLightParticle(); // Function BP_Drone.BP_Drone_C.GetLightParticle // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x293938
	void GetTeamToQuery(struct ATslPlayerController* CallFunc__825d80d10d_ReturnValue); // Function BP_Drone.BP_Drone_C.GetTeamToQuery // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void UpdateLights(struct ATslCharacter* CallFunc__13274294c1_ReturnValue); // Function BP_Drone.BP_Drone_C.UpdateLights // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void DestroyLightParticleComponent(); // Function BP_Drone.BP_Drone_C.DestroyLightParticleComponent // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void UserConstructionScript(); // Function BP_Drone.BP_Drone_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(); // Function BP_Drone.BP_Drone_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x293938
	void ReceiveTick(); // Function BP_Drone.BP_Drone_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x293938
	void ReceiveBeginPlay(); // Function BP_Drone.BP_Drone_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void SetUpLights(); // Function BP_Drone.BP_Drone_C.SetUpLights // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct AActor* ExecuteUbergraph_BP_Drone(int32 CallFunc__777825228b_ReturnValue, bool CallFunc__4cc9b06a46_ReturnValue, int32 CallFunc__777825228b_ReturnValue2, bool CallFunc__96caf02210_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue5, struct ATslCharacter* K2Node_Event_DroneOwner, struct ATslCharacter* CallFunc__13274294c1_ReturnValue, struct UPrimitiveComponent* _516b964bc3_OtherComp, bool _516b964bc3_bFromSweep, struct FString CallFunc_GetDisplayName_ReturnValue, struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6); // Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone // HasDefaults // @ game+0x293938
};

