// BlueprintGeneratedClass P_FireDOT.P_FireDOT_C
// Size: 0x430 (Inherited: 0x430)
struct AP_FireDOT_C : ATslServerParticle {
	bool bAutoDestroyOnParticleFinish; // 0x400(0x01)
	bool bAutoPlaySound; // 0x401(0x01)
	bool bRemoveEffectImmidiately; // 0x402(0x01)
	bool *abb1a47e18; // 0x403(0x01)
	struct UParticleSystemComponent* ParticleSystem; // 0x408(0x08)
	struct UAkComponent* AkSound; // 0x410(0x08)

	void *c0b4146c1e(); // Function TslGame.TslServerParticle.*c0b4146c1e // Final|Native|Protected // @ game+0x5e84880
	void *62bc2ff2ac(); // Function TslGame.TslServerParticle.*62bc2ff2ac // Net|NetReliableNative|Event|NetMulticast|Public // @ game+0x5da6fac
	struct UParticleSystemComponent* OnParticleFinish(); // Function TslGame.TslServerParticle.OnParticleFinish // Final|Native|Protected // @ game+0x5e81e04
};

