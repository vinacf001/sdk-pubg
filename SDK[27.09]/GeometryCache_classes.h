// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x30)
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct U*bb75a25128*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x410 (Inherited: 0x408)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x408(0x08)

	void *c65d62cad3(); // Function GeometryCache.GeometryCacheActor.*c65d62cad3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a9dc28
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

	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6257eb4
	void *884c7fe1a6(); // Function GeometryCache.GeometryCacheComponent.*884c7fe1a6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6257a10
	void IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6257a28
	void SetGeometryCache(); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // Native|Public|BlueprintCallable // @ game+0x6257b40
	void *a806b604ed(); // Function GeometryCache.GeometryCacheComponent.*a806b604ed // Final|Native|Public|BlueprintCallable // @ game+0x6257af4
	void *34b26d26eb(); // Function GeometryCache.GeometryCacheComponent.*34b26d26eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x62579dc
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6257a8c
	void *ed9d89b724(); // Function GeometryCache.GeometryCacheComponent.*ed9d89b724 // Final|Native|Public|BlueprintCallable // @ game+0x6257d6c
	void *e63e4a4fe4(); // Function GeometryCache.GeometryCacheComponent.*e63e4a4fe4 // Final|Native|Public|BlueprintCallable // @ game+0x6257b14
	void IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6257a40
	void *4899771573(); // Function GeometryCache.GeometryCacheComponent.*4899771573 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6257a58
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x6257aac
	void *dc79fbd641(); // Function GeometryCache.GeometryCacheComponent.*dc79fbd641 // Final|Native|Public|BlueprintCallable // @ game+0x6257e1c
	void SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6257be8
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x6257acc
};

// Class GeometryCache.*bb75a25128
// Size: 0x58 (Inherited: 0x30)
struct U*bb75a25128 : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class GeometryCache.*24197707b1
// Size: 0x80 (Inherited: 0x58)
struct U*24197707b1 : U*bb75a25128 {
	uint32 *24fc1cb3dc; // 0x58(0x04)
	char pad_5C[0x24]; // 0x5c(0x24)

	void *49f6889c8c(); // Function GeometryCache.*24197707b1.*49f6889c8c // Final|Native|Public|HasOutParms // @ game+0x62578a0
};

// Class GeometryCache.*7c63872c22
// Size: 0xa8 (Inherited: 0x58)
struct U*7c63872c22 : U*bb75a25128 {
	char pad_58[0x50]; // 0x58(0x50)

	void *958fdc18f7(); // Function GeometryCache.*7c63872c22.*958fdc18f7 // Final|Native|Public|HasOutParms // @ game+0x6257c78
};

// Class GeometryCache.*6a80d7d0e6
// Size: 0xa8 (Inherited: 0x58)
struct U*6a80d7d0e6 : U*bb75a25128 {
	char pad_58[0x50]; // 0x58(0x50)

	void *958fdc18f7(); // Function GeometryCache.*6a80d7d0e6.*958fdc18f7 // Final|Native|Public|HasOutParms // @ game+0x6257c78
};

