// BlueprintGeneratedClass JerryCan_ExplosionInAir.JerryCan_ExplosionInAir_C
// Size: 0x1100 (Inherited: 0x1100)
struct AJerryCan_ExplosionInAir_C : ATslExplosionEffect {
	struct UParticleSystem* ExplosionFX; // 0x3f0(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x3f8(0x08)
	struct UPointLightComponent* ExplosionLight; // 0x400(0x08)
	float *137ff53776; // 0x408(0x04)
	struct UAkAudioEvent* *bbb52e4bc4; // 0x410(0x08)
	struct F*94738f547e *94738f547e; // 0x418(0xc40)
	float *76c67b32b7; // 0x1058(0x04)
	struct FHitResult SurfaceHit; // 0x1060(0x88)
	struct UPrimitiveComponent* *0bbc8e06ca; // 0x10f8(0x08)

	struct FVector OnParticleCollide(); // Function TslGame.TslExplosionEffect.OnParticleCollide // Final|Native|Private|HasDefaults // @ game+0x561ea24
};

