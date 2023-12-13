// BlueprintGeneratedClass PT_Invincibility.PT_Invincibility_C
// Size: 0x428 (Inherited: 0x428)
struct APT_Invincibility_C : ATslServerParticle {
	bool bAutoDestroyOnParticleFinish; // 0x3f8(0x01)
	bool bAutoPlaySound; // 0x3f9(0x01)
	bool bRemoveEffectImmidiately; // 0x3fa(0x01)
	bool *abb1a47e18; // 0x3fb(0x01)
	struct UParticleSystemComponent* ParticleSystem; // 0x400(0x08)
	struct UAkComponent* AkSound; // 0x408(0x08)

	void *c0b4146c1e(); // Function TslGame.TslServerParticle.*c0b4146c1e // Final|Native|Protected // @ game+0x5b8717c
	void *62bc2ff2ac(); // Function TslGame.TslServerParticle.*62bc2ff2ac // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x5aa9ca0
	struct UParticleSystemComponent* OnParticleFinish(); // Function TslGame.TslServerParticle.OnParticleFinish // Final|Native|Protected // @ game+0x5b846fc
};

