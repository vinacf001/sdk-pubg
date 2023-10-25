// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x30)
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct U*332c7342e5*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x400 (Inherited: 0x3f8)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3f8(0x08)

	struct UGeometryCacheComponent* *85346b1732(); // Function GeometryCache.GeometryCacheActor.*85346b1732 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5d04880
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0xb80 (Inherited: 0xb10)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0xb10(0x08)
	bool bRunning; // 0xb18(0x01)
	bool bLooping; // 0xb19(0x01)
	char pad_B1A[0x2]; // 0xb1a(0x02)
	float StartTimeOffset; // 0xb1c(0x04)
	float PlaybackSpeed; // 0xb20(0x04)
	int32 *9e625d70ff; // 0xb24(0x04)
	float *4a0e165ffa; // 0xb28(0x04)
	char pad_B2C[0x54]; // 0xb2c(0x54)

	bool *a6ea547a60(); // Function GeometryCache.GeometryCacheComponent.*a6ea547a60 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x648f6cc
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x648f720
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // Final|Native|Public|BlueprintCallable // @ game+0x648f700
	float *3d183b9cd8(); // Function GeometryCache.GeometryCacheComponent.*3d183b9cd8 // Final|Native|Public|BlueprintCallable // @ game+0x648f9e0
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x648f69c
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x648fb28
	void *893a0b6ecd(); // Function GeometryCache.GeometryCacheComponent.*893a0b6ecd // Final|Native|Public|BlueprintCallable // @ game+0x648f768
	void *207afeaa0b(); // Function GeometryCache.GeometryCacheComponent.*207afeaa0b // Final|Native|Public|BlueprintCallable // @ game+0x648f788
	bool SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x648f85c
	float *ec668bd442(); // Function GeometryCache.GeometryCacheComponent.*ec668bd442 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x648f684
	bool SetGeometryCache(); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // Native|Public|BlueprintCallable // @ game+0x648f7b4
	float *050874081d(); // Function GeometryCache.GeometryCacheComponent.*050874081d // Final|Native|Public|BlueprintCallable // @ game+0x648fa90
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x648f6b4
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x648f740
	float *c56b96bfb9(); // Function GeometryCache.GeometryCacheComponent.*c56b96bfb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x648f650
};

// Class GeometryCache.*332c7342e5
// Size: 0x58 (Inherited: 0x30)
struct U*332c7342e5 : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class GeometryCache.*5fe5629c4d
// Size: 0x80 (Inherited: 0x58)
struct U*5fe5629c4d : U*332c7342e5 {
	uint32 *46dd47d53a; // 0x58(0x04)
	char pad_5C[0x24]; // 0x5c(0x24)

	float *d166745898(); // Function GeometryCache.*5fe5629c4d.*d166745898 // Final|Native|Public|HasOutParms // @ game+0x648f514
};

// Class GeometryCache.*65b7434142
// Size: 0xa8 (Inherited: 0x58)
struct U*65b7434142 : U*332c7342e5 {
	char pad_58[0x50]; // 0x58(0x50)

	struct F*71f819e977 *615cf7035d(); // Function GeometryCache.*65b7434142.*615cf7035d // Final|Native|Public|HasOutParms // @ game+0x648f8ec
};

// Class GeometryCache.*2d7c21039c
// Size: 0xa8 (Inherited: 0x58)
struct U*2d7c21039c : U*332c7342e5 {
	char pad_58[0x50]; // 0x58(0x50)

	struct F*71f819e977 *615cf7035d(); // Function GeometryCache.*2d7c21039c.*615cf7035d // Final|Native|Public|HasOutParms // @ game+0x648f8ec
};

