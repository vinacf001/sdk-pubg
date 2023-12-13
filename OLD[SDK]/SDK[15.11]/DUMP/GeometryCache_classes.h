// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x30)
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct U*43883c1e83*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x400 (Inherited: 0x3f8)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3f8(0x08)

	void *e22758e857(); // Function GeometryCache.GeometryCacheActor.*e22758e857 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59fc7c4
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0xb10 (Inherited: 0xaa0)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0xaa0(0x08)
	bool bRunning; // 0xaa8(0x01)
	bool bLooping; // 0xaa9(0x01)
	char pad_AAA[0x2]; // 0xaaa(0x02)
	float StartTimeOffset; // 0xaac(0x04)
	float PlaybackSpeed; // 0xab0(0x04)
	int32 *4d84c70961; // 0xab4(0x04)
	float *d85dd6fe3d; // 0xab8(0x04)
	char pad_ABC[0x54]; // 0xabc(0x54)

	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x61a5040
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x61a5428
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x61a5020
	void *7166c76595(); // Function GeometryCache.GeometryCacheComponent.*7166c76595 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61a4fcc
	void *d72b7866f5(); // Function GeometryCache.GeometryCacheComponent.*d72b7866f5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61a4f84
	void IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61a4fb4
	void *9fdd50d2e2(); // Function GeometryCache.GeometryCacheComponent.*9fdd50d2e2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61a4f50
	void *4dc8232421(); // Function GeometryCache.GeometryCacheComponent.*4dc8232421 // Final|Native|Public|BlueprintCallable // @ game+0x61a52e0
	void *d0d1b2d775(); // Function GeometryCache.GeometryCacheComponent.*d0d1b2d775 // Final|Native|Public|BlueprintCallable // @ game+0x61a5390
	void *e8aac84573(); // Function GeometryCache.GeometryCacheComponent.*e8aac84573 // Final|Native|Public|BlueprintCallable // @ game+0x61a5088
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // Final|Native|Public|BlueprintCallable // @ game+0x61a5000
	void SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x61a515c
	void *8abcbbe4dd(); // Function GeometryCache.GeometryCacheComponent.*8abcbbe4dd // Final|Native|Public|BlueprintCallable // @ game+0x61a5068
	void IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61a4f9c
	void SetGeometryCache(); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // Native|Public|BlueprintCallable // @ game+0x61a50b4
};

// Class GeometryCache.*43883c1e83
// Size: 0x58 (Inherited: 0x30)
struct U*43883c1e83 : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class GeometryCache.*09b67927b3
// Size: 0x80 (Inherited: 0x58)
struct U*09b67927b3 : U*43883c1e83 {
	uint32 *6fa1103a75; // 0x58(0x04)
	char pad_5C[0x24]; // 0x5c(0x24)

	void *02b789e0a2(); // Function GeometryCache.*09b67927b3.*02b789e0a2 // Final|Native|Public|HasOutParms // @ game+0x61a4e14
};

// Class GeometryCache.*82cc811abe
// Size: 0xa8 (Inherited: 0x58)
struct U*82cc811abe : U*43883c1e83 {
	char pad_58[0x50]; // 0x58(0x50)

	void *7da38ad954(); // Function GeometryCache.*82cc811abe.*7da38ad954 // Final|Native|Public|HasOutParms // @ game+0x61a51ec
};

// Class GeometryCache.*04bc48f496
// Size: 0xa8 (Inherited: 0x58)
struct U*04bc48f496 : U*43883c1e83 {
	char pad_58[0x50]; // 0x58(0x50)

	void *7da38ad954(); // Function GeometryCache.*04bc48f496.*7da38ad954 // Final|Native|Public|HasOutParms // @ game+0x61a51ec
};

