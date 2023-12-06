// BlueprintGeneratedClass P_Vehicle_Boost_McLarenGT_BP.P_Vehicle_Boost_McLarenGT_BP_C
// Size: 0x500 (Inherited: 0x500)
struct AP_Vehicle_Boost_McLarenGT_BP_C : ATslParticle {
	bool bAutoDestroyOnParticleFinish; // 0x450(0x01)
	bool bAutoPlaySound; // 0x451(0x01)
	bool bWaitForAudioToFinish; // 0x453(0x01)
	struct TArray<struct FParticleParameter> DefaultParameters; // 0x458(0x10)
	enum class EAttachParent AttachParentType; // 0x468(0x01)
	struct FName AttachSocketName; // 0x470(0x08)
	enum class EAttachmentRule AttachLocationRule; // 0x478(0x01)
	enum class EAttachmentRule AttachRotationRule; // 0x479(0x01)
	enum class EAttachmentRule AttachScaleRule; // 0x47a(0x01)
	bool *2b30fe4c84; // 0x47b(0x01)
	struct TMap<struct FName, struct FVector> *2ad6093b9c; // 0x480(0x50)
	enum class EColorBlindType *9aa96d3461; // 0x4d0(0x01)
	struct UParticleSystemComponent* ParticleSystem; // 0x4d8(0x08)
	struct UAkComponent* AkSound; // 0x4e0(0x08)

	struct UParticleSystemComponent* OnParticleFinish(); // Function TslGame.TslParticle.OnParticleFinish // Final|Native|Protected // @ game+0x7426dc
	void *0fe6f0b0f7(); // Function TslGame.TslParticle.*0fe6f0b0f7 // Final|Native|Public|BlueprintCallable // @ game+0x5de50f0
	struct UPhysicalMaterial* OnParticleCollide(); // Function TslGame.TslParticle.OnParticleCollide // Final|Native|Public|HasDefaults // @ game+0x5df0814
	struct FVector *cd0551cea6(); // Function TslGame.TslParticle.*cd0551cea6 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5de59f8
	bool *1570f6a3b2(); // Function TslGame.TslParticle.*1570f6a3b2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5e03a50
	void *c770cb632b(); // Function TslGame.TslParticle.*c770cb632b // Final|Native|Protected // @ game+0x5ddb760
	enum class EPhysicalSurface *4e4f3323b0(); // Function TslGame.TslParticle.*4e4f3323b0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5de8a28
	float *4d7c60c173(); // Function TslGame.TslParticle.*4d7c60c173 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5de7408
	void *fdc2f2568e(struct FName Name, struct FVector DefaultValue, struct FVector ReturnValue); // Function TslGame.TslParticle.*fdc2f2568e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5de8918
	void OnParameterUpdated(); // Function TslGame.TslParticle.OnParameterUpdated // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *8ccae844ca(); // Function TslGame.TslParticle.*8ccae844ca // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x84d640
	void *e760b6bf0c(bool OutbIsInWater, float OutWaterHeight); // Function TslGame.TslParticle.*e760b6bf0c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5dea098
	void *7e8170dbfa(); // Function TslGame.TslParticle.*7e8170dbfa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5de8828
};

