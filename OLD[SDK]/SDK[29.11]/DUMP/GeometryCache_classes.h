// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x30)
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct U*43883c1e83*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3f0(0x08)

	struct UGeometryCacheComponent* *e22758e857(); // Function GeometryCache.GeometryCacheActor.*e22758e857 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5805f80
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0xb20 (Inherited: 0xab0)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0xab0(0x08)
	bool bRunning; // 0xab8(0x01)
	bool bLooping; // 0xab9(0x01)
	char pad_ABA[0x2]; // 0xaba(0x02)
	float StartTimeOffset; // 0xabc(0x04)
	float PlaybackSpeed; // 0xac0(0x04)
	int32 *4d84c70961; // 0xac4(0x04)
	float *d85dd6fe3d; // 0xac8(0x04)
	char pad_ACC[0x54]; // 0xacc(0x54)

	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x5f98c88
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x5f99070
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x5f98c68
	bool *7166c76595(); // Function GeometryCache.GeometryCacheComponent.*7166c76595 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f98c14
	float *d72b7866f5(); // Function GeometryCache.GeometryCacheComponent.*d72b7866f5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f98bcc
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f98bfc
	float *9fdd50d2e2(); // Function GeometryCache.GeometryCacheComponent.*9fdd50d2e2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f98b98
	float *4dc8232421(); // Function GeometryCache.GeometryCacheComponent.*4dc8232421 // Final|Native|Public|BlueprintCallable // @ game+0x5f98f28
	float *d0d1b2d775(); // Function GeometryCache.GeometryCacheComponent.*d0d1b2d775 // Final|Native|Public|BlueprintCallable // @ game+0x5f98fd8
	void *e8aac84573(); // Function GeometryCache.GeometryCacheComponent.*e8aac84573 // Final|Native|Public|BlueprintCallable // @ game+0x5f98cd0
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // Final|Native|Public|BlueprintCallable // @ game+0x5f98c48
	bool SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x5f98da4
	void *8abcbbe4dd(); // Function GeometryCache.GeometryCacheComponent.*8abcbbe4dd // Final|Native|Public|BlueprintCallable // @ game+0x5f98cb0
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f98be4
	bool SetGeometryCache(); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // Native|Public|BlueprintCallable // @ game+0x5f98cfc
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

	float *02b789e0a2(); // Function GeometryCache.*09b67927b3.*02b789e0a2 // Final|Native|Public|HasOutParms // @ game+0x5f98a5c
};

// Class GeometryCache.*82cc811abe
// Size: 0xa8 (Inherited: 0x58)
struct U*82cc811abe : U*43883c1e83 {
	char pad_58[0x50]; // 0x58(0x50)

	struct F*faa0ac8f34 *7da38ad954(); // Function GeometryCache.*82cc811abe.*7da38ad954 // Final|Native|Public|HasOutParms // @ game+0x5f98e34
};

// Class GeometryCache.*04bc48f496
// Size: 0xa8 (Inherited: 0x58)
struct U*04bc48f496 : U*43883c1e83 {
	char pad_58[0x50]; // 0x58(0x50)

	struct F*faa0ac8f34 *7da38ad954(); // Function GeometryCache.*04bc48f496.*7da38ad954 // Final|Native|Public|HasOutParms // @ game+0x5f98e34
};

