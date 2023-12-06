// BlueprintGeneratedClass BP_MasteryPose_Flare.BP_MasteryPose_Flare_C
// Size: 0x478 (Inherited: 0x448)
struct ABP_MasteryPose_Flare_C : ABP_MasteryPose_C {
	struct F*a6c93df757 UberGraphFrame; // 0x448(0x08)
	struct USpotLightComponent* spotlight; // 0x450(0x08)
	struct UPointLightComponent* PointLight; // 0x458(0x08)
	struct UParticleSystemComponent* ParticleSystemPlayerCard; // 0x460(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x468(0x08)
	struct USkeletalMeshComponent* FlareMesh; // 0x470(0x08)

	void UserConstructionScript(); // Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void AttachObjects(struct ACharacter* LobbyCharacter); // Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.AttachObjects // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_BP_MasteryPose_Flare(int32 EntryPoint, struct ACharacter* K2Node_Event_LobbyCharacter); // Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.ExecuteUbergraph_BP_MasteryPose_Flare // HasDefaults // @ game+0x370fbc
};

