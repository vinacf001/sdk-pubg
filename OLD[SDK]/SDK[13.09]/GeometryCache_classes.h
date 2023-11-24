// Class GeometryCache.GeometryCache
// Size: 0x60 (Inherited: 0x28)
struct UGeometryCache : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct U*bb75a25128*> Tracks; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x400 (Inherited: 0x3f8)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3f8(0x08)

	void *c65d62cad3(); // Function GeometryCache.GeometryCacheActor.*c65d62cad3 // None // @ game+0x56a0ed4
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0xb60 (Inherited: 0xaf0)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0xaf0(0x08)
	bool bRunning; // 0xaf8(0x01)
	bool bLooping; // 0xaf9(0x01)
	char pad_AFA[0x2]; // 0xafa(0x02)
	float StartTimeOffset; // 0xafc(0x04)
	float PlaybackSpeed; // 0xb00(0x04)
	int32 *571e09c5f9; // 0xb04(0x04)
	float *f5ba707deb; // 0xb08(0x04)
	char pad_B0C[0x54]; // 0xb0c(0x54)

	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // None // @ game+0x5e3ed74
	void *884c7fe1a6(); // Function GeometryCache.GeometryCacheComponent.*884c7fe1a6 // None // @ game+0x5e3e8d0
	void IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // None // @ game+0x5e3e8e8
	void SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // None // @ game+0x5e3ea00
	void *a806b604ed(); // Function GeometryCache.GeometryCacheComponent.*a806b604ed // None // @ game+0x5e3e9b4
	void *34b26d26eb(); // Function GeometryCache.GeometryCacheComponent.*34b26d26eb // None // @ game+0x5e3e89c
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // None // @ game+0x5e3e94c
	void *ed9d89b724(); // Function GeometryCache.GeometryCacheComponent.*ed9d89b724 // None // @ game+0x5e3ec2c
	void *e63e4a4fe4(); // Function GeometryCache.GeometryCacheComponent.*e63e4a4fe4 // None // @ game+0x5e3e9d4
	void IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // None // @ game+0x5e3e900
	void *4899771573(); // Function GeometryCache.GeometryCacheComponent.*4899771573 // None // @ game+0x5e3e918
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // None // @ game+0x5e3e96c
	void *dc79fbd641(); // Function GeometryCache.GeometryCacheComponent.*dc79fbd641 // None // @ game+0x5e3ecdc
	void SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // None // @ game+0x5e3eaa8
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // None // @ game+0x5e3e98c
};

// Class GeometryCache.*bb75a25128
// Size: 0x50 (Inherited: 0x28)
struct U*bb75a25128 : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class GeometryCache.*24197707b1
// Size: 0x78 (Inherited: 0x50)
struct U*24197707b1 : U*bb75a25128 {
	uint32 *24fc1cb3dc; // 0x50(0x04)
	char pad_54[0x24]; // 0x54(0x24)

	struct F*f1a00d06ef *49f6889c8c(); // Function GeometryCache.*24197707b1.*49f6889c8c // None // @ game+0x5e3e760
};

// Class GeometryCache.*7c63872c22
// Size: 0xa0 (Inherited: 0x50)
struct U*7c63872c22 : U*bb75a25128 {
	char pad_50[0x50]; // 0x50(0x50)
};

// Class GeometryCache.*6a80d7d0e6
// Size: 0xa0 (Inherited: 0x50)
struct U*6a80d7d0e6 : U*bb75a25128 {
	char pad_50[0x50]; // 0x50(0x50)
};

