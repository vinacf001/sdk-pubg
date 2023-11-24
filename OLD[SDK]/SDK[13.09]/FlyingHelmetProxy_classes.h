// BlueprintGeneratedClass FlyingHelmetProxy.FlyingHelmetProxy_C
// Size: 0x5b0 (Inherited: 0x5b0)
struct AFlyingHelmetProxy_C : ATslFlyingHelmetProxy {
	float ImpulseScale; // 0x3f8(0x04)
	float UpImpulseScale; // 0x3fc(0x04)
	float *22e8c18cb6; // 0x400(0x04)
	float WaterHitVelocityScalar; // 0x404(0x04)
	struct TArray<struct F*c4576faf2e> *861473560d; // 0x408(0x10)
	struct TArray<struct F*c4576faf2e> *9f460749af; // 0x418(0x10)
	struct TArray<struct F*c4576faf2e> *1dc0b8150c; // 0x428(0x10)
	struct UMaterialInterface* *e27bf7f4f3; // 0x438(0x08)
	struct UMaterialInterface* *82cfac750c; // 0x440(0x08)
	struct F*69ab19fed4 *15f6d7ca15; // 0x448(0x78)
	struct UParticleSystem* ImpactParticle; // 0x4c0(0x08)
	struct UAkAudioEvent* *1b6e51bd83; // 0x4c8(0x08)
	struct UAkAudioEvent* *09ad87c343; // 0x4d0(0x08)
	struct TMap<enum class EPhysicalSurface, struct UParticleSystem*> *810afdcf68; // 0x4d8(0x50)
	float MinPlayDropEffectSpeed; // 0x528(0x04)
	struct UAsyncStaticMeshComponent* *6248c67470; // 0x530(0x08)
	struct U*ccbbde4c64* CollisionComp; // 0x538(0x08)
	struct UAkComponent* AkComp; // 0x540(0x08)
	float *ee8fc87b18; // 0x548(0x04)
	float *0b42d31e8a; // 0x54c(0x04)

	void OnStaticMeshLoaded(); // Function TslGame.TslFlyingHelmetProxy.OnStaticMeshLoaded // None // @ game+0xcc7894
	void *4de2e249c3(); // Function TslGame.TslFlyingHelmetProxy.*4de2e249c3 // None // @ game+0xaf438c
	void *0c00d91cca(); // Function TslGame.TslFlyingHelmetProxy.*0c00d91cca // None // @ game+0xaf438c
	void *5259073a5e(); // Function TslGame.TslFlyingHelmetProxy.*5259073a5e // None // @ game+0x56a7488
	void *d2787243ef(); // Function TslGame.TslFlyingHelmetProxy.*d2787243ef // None // @ game+0xaf438c
	struct AActor* OnHelmetHit(struct UPrimitiveComponent* Param2); // Function TslGame.TslFlyingHelmetProxy.OnHelmetHit // None // @ game+0xb48c10
	void OnLoadCompleted(); // Function TslGame.TslFlyingHelmetProxy.OnLoadCompleted // None // @ game+0x56a720c
	void *8c556e990a(); // Function TslGame.TslFlyingHelmetProxy.*8c556e990a // None // @ game+0x569d654
	void *b99d8caef1(); // Function TslGame.TslFlyingHelmetProxy.*b99d8caef1 // None // @ game+0x569d668
};

