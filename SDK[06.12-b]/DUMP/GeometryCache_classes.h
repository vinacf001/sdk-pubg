// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x30)
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct U*f3f1ff4d5b*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x400 (Inherited: 0x3f8)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x3f8(0x08)

	struct UGeometryCacheComponent* *ae106194d0(); // Function GeometryCache.GeometryCacheActor.*ae106194d0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59df22c
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0xb30 (Inherited: 0xac0)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0xac0(0x08)
	bool bRunning; // 0xac8(0x01)
	bool bLooping; // 0xac9(0x01)
	char pad_ACA[0x2]; // 0xaca(0x02)
	float StartTimeOffset; // 0xacc(0x04)
	float PlaybackSpeed; // 0xad0(0x04)
	int32 *02170f3113; // 0xad4(0x04)
	float *8e4a3b1f8d; // 0xad8(0x04)
	char pad_ADC[0x54]; // 0xadc(0x54)

	bool *a8ccf6f5b7(); // Function GeometryCache.GeometryCacheComponent.*a8ccf6f5b7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6172944
	float *e9b6873487(); // Function GeometryCache.GeometryCacheComponent.*e9b6873487 // Final|Native|Public|BlueprintCallable // @ game+0x6172c58
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6172da0
	float *622973d8c6(); // Function GeometryCache.GeometryCacheComponent.*622973d8c6 // Final|Native|Public|BlueprintCallable // @ game+0x6172d08
	bool SetGeometryCache(); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // Native|Public|BlueprintCallable // @ game+0x6172a2c
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6172914
	bool SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6172ad4
	float *bdb12077ea(); // Function GeometryCache.GeometryCacheComponent.*bdb12077ea // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61728c8
	void *2ead3e2ea7(); // Function GeometryCache.GeometryCacheComponent.*2ead3e2ea7 // Final|Native|Public|BlueprintCallable // @ game+0x61729e0
	float *f9d763d124(); // Function GeometryCache.GeometryCacheComponent.*f9d763d124 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61728fc
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x61729b8
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6172978
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x617292c
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x6172998
	void *aa6a4d8372(); // Function GeometryCache.GeometryCacheComponent.*aa6a4d8372 // Final|Native|Public|BlueprintCallable // @ game+0x6172a00
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

	float *1a637bd955(); // Function GeometryCache.*c762b95e0d.*1a637bd955 // Final|Native|Public|HasOutParms // @ game+0x617278c
};

// Class GeometryCache.*9dbfdeca17
// Size: 0xa8 (Inherited: 0x58)
struct U*9dbfdeca17 : U*f3f1ff4d5b {
	char pad_58[0x50]; // 0x58(0x50)

	struct F*01c509d31b *ff3a6ed536(); // Function GeometryCache.*9dbfdeca17.*ff3a6ed536 // Final|Native|Public|HasOutParms // @ game+0x6172b64
};

// Class GeometryCache.*fe5f5096ba
// Size: 0xa8 (Inherited: 0x58)
struct U*fe5f5096ba : U*f3f1ff4d5b {
	char pad_58[0x50]; // 0x58(0x50)

	struct F*01c509d31b *ff3a6ed536(); // Function GeometryCache.*fe5f5096ba.*ff3a6ed536 // Final|Native|Public|HasOutParms // @ game+0x6172b64
};

