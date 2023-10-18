// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x30)
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct U*332c7342e5*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3f0(0x08)

	struct UGeometryCacheComponent* *85346b1732(); // Function GeometryCache.GeometryCacheActor.*85346b1732 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5731ff0
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
	int32 *9e625d70ff; // 0xb14(0x04)
	float *4a0e165ffa; // 0xb18(0x04)
	char pad_B1C[0x54]; // 0xb1c(0x54)

	bool *a6ea547a60(); // Function GeometryCache.GeometryCacheComponent.*a6ea547a60 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b88c
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x5e9b8e0
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // Final|Native|Public|BlueprintCallable // @ game+0x5e9b8c0
	float *3d183b9cd8(); // Function GeometryCache.GeometryCacheComponent.*3d183b9cd8 // Final|Native|Public|BlueprintCallable // @ game+0x5e9bba0
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b85c
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x5e9bce8
	void *893a0b6ecd(); // Function GeometryCache.GeometryCacheComponent.*893a0b6ecd // Final|Native|Public|BlueprintCallable // @ game+0x5e9b928
	void *207afeaa0b(); // Function GeometryCache.GeometryCacheComponent.*207afeaa0b // Final|Native|Public|BlueprintCallable // @ game+0x5e9b948
	bool SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x5e9ba1c
	float *ec668bd442(); // Function GeometryCache.GeometryCacheComponent.*ec668bd442 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b844
	bool SetGeometryCache(); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // Native|Public|BlueprintCallable // @ game+0x5e9b974
	float *050874081d(); // Function GeometryCache.GeometryCacheComponent.*050874081d // Final|Native|Public|BlueprintCallable // @ game+0x5e9bc50
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b874
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x5e9b900
	float *c56b96bfb9(); // Function GeometryCache.GeometryCacheComponent.*c56b96bfb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e9b810
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

	float *d166745898(); // Function GeometryCache.*5fe5629c4d.*d166745898 // Final|Native|Public|HasOutParms // @ game+0x5e9b6d4
};

// Class GeometryCache.*65b7434142
// Size: 0xa8 (Inherited: 0x58)
struct U*65b7434142 : U*332c7342e5 {
	char pad_58[0x50]; // 0x58(0x50)

	struct F*71f819e977 *615cf7035d(); // Function GeometryCache.*65b7434142.*615cf7035d // Final|Native|Public|HasOutParms // @ game+0x5e9baac
};

// Class GeometryCache.*2d7c21039c
// Size: 0xa8 (Inherited: 0x58)
struct U*2d7c21039c : U*332c7342e5 {
	char pad_58[0x50]; // 0x58(0x50)

	struct F*71f819e977 *615cf7035d(); // Function GeometryCache.*2d7c21039c.*615cf7035d // Final|Native|Public|HasOutParms // @ game+0x5e9baac
};

