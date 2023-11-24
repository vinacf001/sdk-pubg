// BlueprintGeneratedClass PT_Invincibility.PT_Invincibility_C
// Size: 0x428 (Inherited: 0x428)
struct APT_Invincibility_C : ATslServerParticle {
	bool bAutoDestroyOnParticleFinish; // 0x3f8(0x01)
	bool bAutoPlaySound; // 0x3f9(0x01)
	bool bRemoveEffectImmidiately; // 0x3fa(0x01)
	bool *d927913f31; // 0x3fb(0x01)
	struct UParticleSystemComponent* ParticleSystem; // 0x400(0x08)
	struct UAkComponent* AkSound; // 0x408(0x08)

	void OnParticleFinish(); // Function TslGame.TslServerParticle.OnParticleFinish // Final|Native|Protected // @ game+0x56b0080
	void *aec14bc060(); // Function TslGame.TslServerParticle.*aec14bc060 // Final|Native|Protected // @ game+0x56b29a4
	void *b7f49087f3(); // Function TslGame.TslServerParticle.*b7f49087f3 // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0xcf9198
};

