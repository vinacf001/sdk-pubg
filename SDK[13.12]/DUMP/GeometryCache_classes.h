// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x30)
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct U*f3f1ff4d5b*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3f0(0x08)

	void *ae106194d0(); // Function GeometryCache.GeometryCacheActor.*ae106194d0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5b7eb64
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
	int32 *02170f3113; // 0xac4(0x04)
	float *8e4a3b1f8d; // 0xac8(0x04)
	char pad_ACC[0x54]; // 0xacc(0x54)

	void *a8ccf6f5b7(bool ReturnValue); // Function GeometryCache.GeometryCacheComponent.*a8ccf6f5b7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6334574
	void *e9b6873487(); // Function GeometryCache.GeometryCacheComponent.*e9b6873487 // Final|Native|Public|BlueprintCallable // @ game+0x6334888
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x63349d0
	void *622973d8c6(); // Function GeometryCache.GeometryCacheComponent.*622973d8c6 // Final|Native|Public|BlueprintCallable // @ game+0x6334938
	void SetGeometryCache(); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // Native|Public|BlueprintCallable // @ game+0x633465c
	void IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6334544
	void SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6334704
	void *bdb12077ea(); // Function GeometryCache.GeometryCacheComponent.*bdb12077ea // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63344f8
	void *2ead3e2ea7(); // Function GeometryCache.GeometryCacheComponent.*2ead3e2ea7 // Final|Native|Public|BlueprintCallable // @ game+0x6334610
	void *f9d763d124(); // Function GeometryCache.GeometryCacheComponent.*f9d763d124 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x633452c
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x63345e8
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // Final|Native|Public|BlueprintCallable // @ game+0x63345a8
	void IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x633455c
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x63345c8
	void *aa6a4d8372(); // Function GeometryCache.GeometryCacheComponent.*aa6a4d8372 // Final|Native|Public|BlueprintCallable // @ game+0x6334630
};

// Class GeometryCache.*f3f1ff4d5b
// Size: 0x58 (Inherited: 0x30)
struct U*f3f1ff4d5b : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class GeometryCache.*c762b95e0d
// Size: 0x80 (Inherited: 0x58)
struct U*c762b95e0d : U*f3f1ff4d5b {
	uint32 *2f11784349; // 0x58(0x04)
	char pad_5C[0x24]; // 0x5c(0x24)

	void *1a637bd955(struct F*01c509d31b Param0, float Param1); // Function GeometryCache.*c762b95e0d.*1a637bd955 // Final|Native|Public|HasOutParms // @ game+0x63343bc
};

// Class GeometryCache.*9dbfdeca17
// Size: 0xa8 (Inherited: 0x58)
struct U*9dbfdeca17 : U*f3f1ff4d5b {
	char pad_58[0x50]; // 0x58(0x50)
};

// Class GeometryCache.*fe5f5096ba
// Size: 0xa8 (Inherited: 0x58)
struct U*fe5f5096ba : U*f3f1ff4d5b {
	char pad_58[0x50]; // 0x58(0x50)
};

