// BlueprintGeneratedClass P_Sniper_Kar98_BP.P_Sniper_Kar98_BP_C
// Size: 0x4f0 (Inherited: 0x4f0)
struct AP_Sniper_Kar98_BP_C : ATslParticle {
	bool bAutoDestroyOnParticleFinish; // 0x440(0x01)
	bool bAutoPlaySound; // 0x441(0x01)
	bool bWaitForAudioToFinish; // 0x443(0x01)
	struct TArray<struct FParticleParameter> DefaultParameters; // 0x448(0x10)
	enum class EAttachParent AttachParentType; // 0x458(0x01)
	struct FName AttachSocketName; // 0x460(0x08)
	enum class EAttachmentRule AttachLocationRule; // 0x468(0x01)
	enum class EAttachmentRule AttachRotationRule; // 0x469(0x01)
	enum class EAttachmentRule AttachScaleRule; // 0x46a(0x01)
	bool *b4ba070c51; // 0x46b(0x01)
	struct TMap<struct FName, struct FVector> *a7f4a9d12b; // 0x470(0x50)
	enum class EColorBlindType *705e6072b5; // 0x4c0(0x01)
	struct UParticleSystemComponent* ParticleSystem; // 0x4c8(0x08)
	struct UAkComponent* AkSound; // 0x4d0(0x08)

	void *9b2ab018cd(); // Function TslGame.TslParticle.*9b2ab018cd // Final|Native|Public|BlueprintCallable // @ game+0x56127ac
	void OnParticleFinish(); // Function TslGame.TslParticle.OnParticleFinish // Final|Native|Protected // @ game+0x439148
	struct FName OnParticleCollide(); // Function TslGame.TslParticle.OnParticleCollide // Final|Native|Public|HasDefaults // @ game+0x561ec98
	void *3a8b1d6845(struct FVector DefaultValue); // Function TslGame.TslParticle.*3a8b1d6845 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5616174
	struct FVector *2edf3d6883(); // Function TslGame.TslParticle.*2edf3d6883 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5632ab4
	struct FVector *c5ff912ed5(); // Function TslGame.TslParticle.*c5ff912ed5 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5616284
	void *18993a3a08(float DefaultValue); // Function TslGame.TslParticle.*18993a3a08 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5616084
	void OnParameterUpdated(); // Function TslGame.TslParticle.OnParameterUpdated // Event|Protected|BlueprintEvent // @ game+0x1e037c
	float *02a3c3a0dd(); // Function TslGame.TslParticle.*02a3c3a0dd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x9aacdc
	void *1ae70a8351(); // Function TslGame.TslParticle.*1ae70a8351 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x56130c4
	void *39759d04d0(); // Function TslGame.TslParticle.*39759d04d0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x561794c
	void *fcf9565906(); // Function TslGame.TslParticle.*fcf9565906 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5614998
	void *235a0d3210(); // Function TslGame.TslParticle.*235a0d3210 // Final|Native|Protected // @ game+0x56088c8
};

