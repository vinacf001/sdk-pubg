// BlueprintGeneratedClass JerryCan_Explosion.JerryCan_Explosion_C
// Size: 0x1108 (Inherited: 0x1108)
struct AJerryCan_Explosion_C : ATslExplosionEffect {
	struct UParticleSystem* ExplosionFX; // 0x3f8(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x400(0x08)
	struct UPointLightComponent* ExplosionLight; // 0x408(0x08)
	float *137ff53776; // 0x410(0x04)
	struct UAkAudioEvent* *bbb52e4bc4; // 0x418(0x08)
	struct F*94738f547e *94738f547e; // 0x420(0xc40)
	float *76c67b32b7; // 0x1060(0x04)
	struct FHitResult SurfaceHit; // 0x1068(0x88)
	struct UPrimitiveComponent* *0bbc8e06ca; // 0x1100(0x08)

	struct FVector OnParticleCollide(); // Function TslGame.TslExplosionEffect.OnParticleCollide // None // @ game+0x5616438
};

