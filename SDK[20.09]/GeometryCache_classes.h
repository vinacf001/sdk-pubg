// Class GeometryCache.GeometryCache
// Size: 0x60 (Inherited: 0x28)
struct UGeometryCache : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct U*bb75a25128*> Tracks; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3f0(0x08)

	void *c65d62cad3(); // Function GeometryCache.GeometryCacheActor.*c65d62cad3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56a98f0
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0xb70 (Inherited: 0xb00)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0xb00(0x08)
	bool bRunning; // 0xb08(0x01)
	bool bLooping; // 0xb09(0x01)
	char pad_B0A[0x2]; // 0xb0a(0x02)
	float StartTimeOffset; // 0xb0c(0x04)
	float PlaybackSpeed; // 0xb10(0x04)
	int32 *571e09c5f9; // 0xb14(0x04)
	float *f5ba707deb; // 0xb18(0x04)
	char pad_B1C[0x54]; // 0xb1c(0x54)

	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x5e49044
	void *884c7fe1a6(); // Function GeometryCache.GeometryCacheComponent.*884c7fe1a6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e48ba0
	void IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e48bb8
	void SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // Native|Public|BlueprintCallable // @ game+0x5e48cd0
	void *a806b604ed(); // Function GeometryCache.GeometryCacheComponent.*a806b604ed // Final|Native|Public|BlueprintCallable // @ game+0x5e48c84
	void *34b26d26eb(); // Function GeometryCache.GeometryCacheComponent.*34b26d26eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e48b6c
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // Final|Native|Public|BlueprintCallable // @ game+0x5e48c1c
	void *ed9d89b724(); // Function GeometryCache.GeometryCacheComponent.*ed9d89b724 // Final|Native|Public|BlueprintCallable // @ game+0x5e48efc
	void *e63e4a4fe4(); // Function GeometryCache.GeometryCacheComponent.*e63e4a4fe4 // Final|Native|Public|BlueprintCallable // @ game+0x5e48ca4
	void IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e48bd0
	void *4899771573(); // Function GeometryCache.GeometryCacheComponent.*4899771573 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e48be8
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x5e48c3c
	void *dc79fbd641(); // Function GeometryCache.GeometryCacheComponent.*dc79fbd641 // Final|Native|Public|BlueprintCallable // @ game+0x5e48fac
	void SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x5e48d78
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x5e48c5c
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

	struct F*f1a00d06ef *49f6889c8c(); // Function GeometryCache.*24197707b1.*49f6889c8c // Final|Native|Public|HasOutParms // @ game+0x5e48a30
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

