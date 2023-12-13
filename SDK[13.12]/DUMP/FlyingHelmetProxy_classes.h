// BlueprintGeneratedClass FlyingHelmetProxy.FlyingHelmetProxy_C
// Size: 0x5a8 (Inherited: 0x5a8)
struct AFlyingHelmetProxy_C : ATslFlyingHelmetProxy {
	float ImpulseScale; // 0x3f0(0x04)
	float UpImpulseScale; // 0x3f4(0x04)
	float *7e62ac08e4; // 0x3f8(0x04)
	float WaterHitVelocityScalar; // 0x3fc(0x04)
	struct TArray<struct F*be92e6ffbc> *f9253f9e9d; // 0x400(0x10)
	struct TArray<struct F*be92e6ffbc> *dbf2bbcf4e; // 0x410(0x10)
	struct TArray<struct F*be92e6ffbc> *44ce605cb0; // 0x420(0x10)
	struct UMaterialInterface* *a5c2bd5025; // 0x430(0x08)
	struct UMaterialInterface* *b23c85fb26; // 0x438(0x08)
	struct F*024179dbe5 *762faca9dc; // 0x440(0x78)
	struct UParticleSystem* ImpactParticle; // 0x4b8(0x08)
	struct UAkAudioEvent* *d90889ef8f; // 0x4c0(0x08)
	struct UAkAudioEvent* *8a137ff062; // 0x4c8(0x08)
	struct TMap<enum class EPhysicalSurface, struct UParticleSystem*> *a1c374091e; // 0x4d0(0x50)
	float MinPlayDropEffectSpeed; // 0x520(0x04)
	struct UAsyncStaticMeshComponent* *784d67fc69; // 0x528(0x08)
	struct U*e4dd3266ca* CollisionComp; // 0x530(0x08)
	struct UAkComponent* AkComp; // 0x538(0x08)
	float *1999b33a1f; // 0x540(0x04)
	float *62b8b68312; // 0x544(0x04)

	void *6b265d20fd(); // Function TslGame.TslFlyingHelmetProxy.*6b265d20fd // Final|Native|Private // @ game+0x5b7baa4
	void OnLoadCompleted(); // Function TslGame.TslFlyingHelmetProxy.OnLoadCompleted // Final|Native|Private // @ game+0x5b84474
	void *b8fedaccb6(); // Function TslGame.TslFlyingHelmetProxy.*b8fedaccb6 // Final|Native|Private // @ game+0xcc1968
	void *32c65e3725(); // Function TslGame.TslFlyingHelmetProxy.*32c65e3725 // Final|Native|Private // @ game+0xcc1968
	struct FHitResult OnHelmetHit(); // Function TslGame.TslFlyingHelmetProxy.OnHelmetHit // Final|Native|Private|HasOutParms|HasDefaults // @ game+0x5b83b40
	void *d016fefe04(); // Function TslGame.TslFlyingHelmetProxy.*d016fefe04 // Final|Native|Private // @ game+0xcc1968
	void *229cae2c8c(); // Function TslGame.TslFlyingHelmetProxy.*229cae2c8c // Final|Native|Private // @ game+0x5b7ba90
	void *d1706ce783(); // Function TslGame.TslFlyingHelmetProxy.*d1706ce783 // Final|Native|Private // @ game+0x5b84520
	void OnStaticMeshLoaded(); // Function TslGame.TslFlyingHelmetProxy.OnStaticMeshLoaded // Final|Native|Private // @ game+0x5b86bc4
};

