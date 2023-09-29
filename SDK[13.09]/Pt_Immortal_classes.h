// BlueprintGeneratedClass Pt_Immortal.Pt_Immortal_C
// Size: 0x430 (Inherited: 0x430)
struct APt_Immortal_C : ATslServerParticle {
	bool bAutoDestroyOnParticleFinish; // 0x400(0x01)
	bool bAutoPlaySound; // 0x401(0x01)
	bool bRemoveEffectImmidiately; // 0x402(0x01)
	bool *d927913f31; // 0x403(0x01)
	struct UParticleSystemComponent* ParticleSystem; // 0x408(0x08)
	struct UAkComponent* AkSound; // 0x410(0x08)

	void OnParticleFinish(); // Function TslGame.TslServerParticle.OnParticleFinish // None // @ game+0x56a7664
	void *aec14bc060(); // Function TslGame.TslServerParticle.*aec14bc060 // None // @ game+0x56a9f88
	void *b7f49087f3(); // Function TslGame.TslServerParticle.*b7f49087f3 // None // @ game+0xcbeb68
};

