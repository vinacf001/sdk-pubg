// BlueprintGeneratedClass BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C
// Size: 0x468 (Inherited: 0x438)
struct ABP_MasteryPose_FlareArmUp_C : ABP_MasteryPose_C {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x438(0x08)
	struct USpotLightComponent* spotlight[0x08]; // 0x440(0x08)
	struct UPointLightComponent* PointLight[0x08]; // 0x448(0x08)
	struct UParticleSystemComponent* ParticleSystemPlayerCard[0x08]; // 0x450(0x08)
	struct UParticleSystemComponent* ParticleSystem[0x08]; // 0x458(0x08)
	struct USkeletalMeshComponent* FlareMesh[0x08]; // 0x460(0x08)

	void UserConstructionScript(); // Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void AttachObjects(); // Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.AttachObjects // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FPoseCharacterAttachments ExecuteUbergraph_BP_MasteryPose_FlareArmUp(int32* EntryPoint); // Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.ExecuteUbergraph_BP_MasteryPose_FlareArmUp // HasDefaults // @ game+0x2cd4ac
};
