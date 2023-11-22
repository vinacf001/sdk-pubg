// Class GeometryCache.GeometryCache
// Size: 0x60 (Inherited: 0x28)
struct UGeometryCache : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct U*43883c1e83*> Tracks; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3e8(0x08)

	void *e22758e857(); // Function GeometryCache.GeometryCacheActor.*e22758e857 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x580e2ac
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0xb00 (Inherited: 0xa90)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0xa90(0x08)
	bool bRunning; // 0xa98(0x01)
	bool bLooping; // 0xa99(0x01)
	char pad_A9A[0x2]; // 0xa9a(0x02)
	float StartTimeOffset; // 0xa9c(0x04)
	float PlaybackSpeed; // 0xaa0(0x04)
	int32 *4d84c70961; // 0xaa4(0x04)
	float *d85dd6fe3d; // 0xaa8(0x04)
	char pad_AAC[0x54]; // 0xaac(0x54)

	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x5f9f4d8
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x5f9f8c0
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x5f9f4b8
	void *7166c76595(); // Function GeometryCache.GeometryCacheComponent.*7166c76595 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f464
	void *d72b7866f5(); // Function GeometryCache.GeometryCacheComponent.*d72b7866f5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f41c
	void IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f44c
	void *9fdd50d2e2(); // Function GeometryCache.GeometryCacheComponent.*9fdd50d2e2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f3e8
	void *4dc8232421(); // Function GeometryCache.GeometryCacheComponent.*4dc8232421 // Final|Native|Public|BlueprintCallable // @ game+0x5f9f778
	void *d0d1b2d775(); // Function GeometryCache.GeometryCacheComponent.*d0d1b2d775 // Final|Native|Public|BlueprintCallable // @ game+0x5f9f828
	void *e8aac84573(); // Function GeometryCache.GeometryCacheComponent.*e8aac84573 // Final|Native|Public|BlueprintCallable // @ game+0x5f9f520
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // Final|Native|Public|BlueprintCallable // @ game+0x5f9f498
	void SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x5f9f5f4
	void *8abcbbe4dd(); // Function GeometryCache.GeometryCacheComponent.*8abcbbe4dd // Final|Native|Public|BlueprintCallable // @ game+0x5f9f500
	void IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9f434
	void SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // Native|Public|BlueprintCallable // @ game+0x5f9f54c
};

// Class GeometryCache.*43883c1e83
// Size: 0x50 (Inherited: 0x28)
struct U*43883c1e83 : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class GeometryCache.*09b67927b3
// Size: 0x78 (Inherited: 0x50)
struct U*09b67927b3 : U*43883c1e83 {
	uint32 *6fa1103a75; // 0x50(0x04)
	char pad_54[0x24]; // 0x54(0x24)

	struct F*faa0ac8f34 *02b789e0a2(); // Function GeometryCache.*09b67927b3.*02b789e0a2 // Final|Native|Public|HasOutParms // @ game+0x5f9f2ac
};

// Class GeometryCache.*82cc811abe
// Size: 0xa0 (Inherited: 0x50)
struct U*82cc811abe : U*43883c1e83 {
	char pad_50[0x50]; // 0x50(0x50)

	void *7da38ad954(); // Function GeometryCache.*82cc811abe.*7da38ad954 // Final|Native|Public|HasOutParms // @ game+0x5f9f684
};

// Class GeometryCache.*04bc48f496
// Size: 0xa0 (Inherited: 0x50)
struct U*04bc48f496 : U*43883c1e83 {
	char pad_50[0x50]; // 0x50(0x50)

	void *7da38ad954(); // Function GeometryCache.*04bc48f496.*7da38ad954 // Final|Native|Public|HasOutParms // @ game+0x5f9f684
};

