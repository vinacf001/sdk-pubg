// BlueprintGeneratedClass P_Footprint_Grass_BP.P_Footprint_Grass_BP_C
// Size: 0x4f0 (Inherited: 0x4f0)
struct AP_Footprint_Grass_BP_C : ATslParticle {
	bool bAutoDestroyOnParticleFinish; // 0x440(0x01)
	bool bAutoPlaySound; // 0x441(0x01)
	bool bWaitForAudioToFinish; // 0x443(0x01)
	struct TArray<struct FParticleParameter> DefaultParameters; // 0x448(0x10)
	enum class EAttachParent AttachParentType; // 0x458(0x01)
	struct FName AttachSocketName; // 0x460(0x08)
	enum class EAttachmentRule AttachLocationRule; // 0x468(0x01)
	enum class EAttachmentRule AttachRotationRule; // 0x469(0x01)
	enum class EAttachmentRule AttachScaleRule; // 0x46a(0x01)
	bool *2b30fe4c84; // 0x46b(0x01)
	struct TMap<struct FName, struct FVector> *2ad6093b9c; // 0x470(0x50)
	enum class EColorBlindType *9aa96d3461; // 0x4c0(0x01)
	struct UParticleSystemComponent* ParticleSystem; // 0x4c8(0x08)
	struct UAkComponent* AkSound; // 0x4d0(0x08)

	struct UParticleSystemComponent* OnParticleFinish(); // Function TslGame.TslParticle.OnParticleFinish // Final|Native|Protected // @ game+0x83d248
	void *0fe6f0b0f7(); // Function TslGame.TslParticle.*0fe6f0b0f7 // Final|Native|Public|BlueprintCallable // @ game+0x5ae7c74
	struct UPhysicalMaterial* OnParticleCollide(); // Function TslGame.TslParticle.OnParticleCollide // Final|Native|Public|HasDefaults // @ game+0x5af3324
	struct FVector *cd0551cea6(); // Function TslGame.TslParticle.*cd0551cea6 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ae857c
	bool *1570f6a3b2(); // Function TslGame.TslParticle.*1570f6a3b2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5b06560
	void *c770cb632b(); // Function TslGame.TslParticle.*c770cb632b // Final|Native|Protected // @ game+0x5ade37c
	enum class EPhysicalSurface *4e4f3323b0(); // Function TslGame.TslParticle.*4e4f3323b0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5aeb5b0
	float *4d7c60c173(); // Function TslGame.TslParticle.*4d7c60c173 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ae9f8c
	struct FVector *fdc2f2568e(); // Function TslGame.TslParticle.*fdc2f2568e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5aeb4a0
	void OnParameterUpdated(); // Function TslGame.TslParticle.OnParameterUpdated // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	float *8ccae844ca(); // Function TslGame.TslParticle.*8ccae844ca // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x33cffc
	float *e760b6bf0c(); // Function TslGame.TslParticle.*e760b6bf0c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5aecc0c
	float *7e8170dbfa(); // Function TslGame.TslParticle.*7e8170dbfa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5aeb3b0
};

