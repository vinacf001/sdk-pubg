// Class Niagara.NiagaraActor
// Size: 0x400 (Inherited: 0x3f8)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x3f8(0x08)
};

// Class Niagara.NiagaraComponent
// Size: 0xa10 (Inherited: 0x9c0)
struct UNiagaraComponent : UPrimitiveComponent {
	struct UNiagaraEffect* Asset; // 0x9b8(0x08)
	char pad_9C8[0x8]; // 0x9c8(0x08)
	struct TArray<struct F*0ee7a24bff> *8e095988a9; // 0x9d0(0x10)
	struct TArray<struct F*901dfe5449> *8b1d39fad9; // 0x9e0(0x10)
	struct TArray<struct U*561e25d4e6*> *31c143a97a; // 0x9f0(0x10)
	bool *859a7db0e0; // 0xa00(0x01)
	char pad_A01[0xf]; // 0xa01(0x0f)

	struct FVector4 *206caa6c6a(); // Function Niagara.NiagaraComponent.*206caa6c6a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x622e520
	float *904c9f6561(); // Function Niagara.NiagaraComponent.*904c9f6561 // Final|Native|Public|BlueprintCallable // @ game+0x622ddb8
	struct FVector *1a9370ca29(); // Function Niagara.NiagaraComponent.*1a9370ca29 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x622e3c8
	void *3958968000(); // Function Niagara.NiagaraComponent.*3958968000 // Final|Native|Public|BlueprintCallable // @ game+0x622dd38
	bool *94ee81e316(); // Function Niagara.NiagaraComponent.*94ee81e316 // Final|Native|Public|BlueprintCallable // @ game+0x622e654
	bool *6583fd4268(); // Function Niagara.NiagaraComponent.*6583fd4268 // Final|Native|Public|BlueprintCallable // @ game+0x622dff4
	struct AActor* *561f9f0fe5(); // Function Niagara.NiagaraComponent.*561f9f0fe5 // Final|Native|Public|BlueprintCallable // @ game+0x622ded8
	void *d9236539a6(); // Function Niagara.NiagaraComponent.*d9236539a6 // Final|Native|Public|BlueprintCallable // @ game+0x622dd78
	float *5b77053795(); // Function Niagara.NiagaraComponent.*5b77053795 // Final|Native|Public|BlueprintCallable // @ game+0x622e148
	struct FVector2D *7226b31442(); // Function Niagara.NiagaraComponent.*7226b31442 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x622e268
};

// Class Niagara.*561e25d4e6
// Size: 0x30 (Inherited: 0x30)
struct U*561e25d4e6 : UObject {
};

// Class Niagara.*f1a8f7b27d
// Size: 0x30 (Inherited: 0x30)
struct U*f1a8f7b27d : U*561e25d4e6 {
};

// Class Niagara.*077117d7ef
// Size: 0xa0 (Inherited: 0x30)
struct U*077117d7ef : U*f1a8f7b27d {
	struct FRichCurve Curve; // 0x30(0x70)
};

// Class Niagara.*40bea10606
// Size: 0x180 (Inherited: 0x30)
struct U*40bea10606 : U*f1a8f7b27d {
	struct FRichCurve *123beae1fb; // 0x30(0x70)
	struct FRichCurve *7c0f3bffab; // 0xa0(0x70)
	struct FRichCurve *e6611343ce; // 0x110(0x70)
};

// Class Niagara.*0a9f42916a
// Size: 0x1f0 (Inherited: 0x30)
struct U*0a9f42916a : U*f1a8f7b27d {
	struct FRichCurve *d2afe79a88; // 0x30(0x70)
	struct FRichCurve *792dcb744a; // 0xa0(0x70)
	struct FRichCurve *d0ea9dc3cc; // 0x110(0x70)
	struct FRichCurve *fccd6d3304; // 0x180(0x70)
};

// Class Niagara.*d1b8e324c8
// Size: 0x30 (Inherited: 0x30)
struct U*d1b8e324c8 : U*561e25d4e6 {
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0xc0 (Inherited: 0x30)
struct UNiagaraDataInterfaceSpline : U*561e25d4e6 {
	struct AActor* Source; // 0x30(0x08)
	char pad_38[0x88]; // 0x38(0x88)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x200 (Inherited: 0x30)
struct UNiagaraDataInterfaceStaticMesh : U*561e25d4e6 {
	struct UStaticMesh* *1ca4c6f34d; // 0x30(0x08)
	struct AActor* Source; // 0x38(0x08)
	struct F*e1252b96e6 *b91e026b42; // 0x40(0x68)
	bool *5326a117ad; // 0xa8(0x01)
	char pad_A9[0x157]; // 0xa9(0x157)
};

// Class Niagara.NiagaraEffect
// Size: 0x78 (Inherited: 0x30)
struct UNiagaraEffect : UObject {
	struct TArray<struct F*c9100339b6> *5dbbbf90a2; // 0x30(0x10)
	struct U*81cd1d24cd* EffectScript; // 0x40(0x08)
	struct TArray<struct F*74e60d175f> *0bc610383b; // 0x48(0x10)
	struct TArray<struct F*74e60d175f> *a386e32df9; // 0x58(0x10)
	struct TArray<struct F*78575bbf9f> *32a440e8ea; // 0x68(0x10)
};

// Class Niagara.*b5e6223a98
// Size: 0x30 (Inherited: 0x30)
struct U*b5e6223a98 : UObject {
};

// Class Niagara.*307eec04ef
// Size: 0x40 (Inherited: 0x30)
struct U*307eec04ef : U*b5e6223a98 {
	float RadiusScale; // 0x30(0x04)
	struct FVector *b437f9981e; // 0x34(0x0c)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraMeshRendererProperties : U*b5e6223a98 {
	struct UStaticMesh* ParticleMesh; // 0x30(0x08)
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraRibbonRendererProperties : U*b5e6223a98 {
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x50 (Inherited: 0x30)
struct UNiagaraSpriteRendererProperties : U*b5e6223a98 {
	struct FVector2D *31c1e43f71; // 0x30(0x08)
	enum class *c7fac59e0a Alignment; // 0x38(0x01)
	enum class *f5b063357f *a9e0da6aa0; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector *42850cbe18; // 0x3c(0x0c)
	enum class *6cf157a01f SortMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Niagara.*81cd1d24cd
// Size: 0xf0 (Inherited: 0x30)
struct U*81cd1d24cd : UObject {
	struct TArray<bool> *2680c8fcf3; // 0x30(0x10)
	struct F*e88161a6ed Parameters; // 0x40(0x10)
	struct F*e88161a6ed *1235754c51; // 0x50(0x10)
	struct TArray<struct F*0ee7a24bff> Attributes; // 0x60(0x10)
	struct TArray<struct F*8c21a5f5c1> EventReceivers; // 0x70(0x10)
	struct TArray<struct F*8c21a5f5c1> *6473f13094; // 0x80(0x10)
	struct F*986bdbf717 *c5fc32787c; // 0x90(0x01)
	enum class ENiagaraScriptUsage Usage; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct TArray<struct F*901dfe5449> *7e4a8ba64e; // 0x98(0x10)
	struct TArray<struct F*89baf00209> *e3a28e9f73; // 0xa8(0x10)
	enum class ENiagaraNumericOutputTypeSelectionMode *28cb983fc7; // 0xb8(0x01)
	char pad_B9[0x27]; // 0xb9(0x27)
	struct TArray<struct F*49f223782a> *3e8e23f70d; // 0xe0(0x10)
};

// Class Niagara.*fd5e2f7537
// Size: 0x30 (Inherited: 0x30)
struct U*fd5e2f7537 : UObject {
};

// Class Niagara.*048064b595
// Size: 0x38 (Inherited: 0x30)
struct U*048064b595 : U*fd5e2f7537 {
	uint32 NumParticles; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.*5aeb5e154f
// Size: 0x110 (Inherited: 0x30)
struct U*5aeb5e154f : UObject {
	float SpawnRate; // 0x30(0x04)
	bool *90bb8ae34b; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UMaterial* Material; // 0x38(0x08)
	float StartTime; // 0x40(0x04)
	float *6962c2e26e; // 0x44(0x04)
	int32 *88bfa41e38; // 0x48(0x04)
	enum class ENiagaraCollisionMode *bf4bee24b4; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct U*b5e6223a98* *6475e1e342; // 0x50(0x08)
	struct F*214f76d222 *fdd2f5b8a0; // 0x58(0x28)
	struct F*214f76d222 *a8fbd2686c; // 0x80(0x28)
	struct F*82345d530c *bb13131bb4; // 0xa8(0x50)
	struct TArray<struct F*cbc9a49035> *a5c7550201; // 0xf8(0x10)
	char *acc7bb1985 : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class Niagara.*548c9377d3
// Size: 0x30 (Inherited: 0x30)
struct U*548c9377d3 : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnEffectAttached(); // Function Niagara.*548c9377d3.SpawnEffectAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x622e8ac
	struct UNiagaraComponent* *ec2ab531f3(); // Function Niagara.*548c9377d3.*ec2ab531f3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x622e6e4
};

// Class Niagara.*3dade2c373
// Size: 0x50 (Inherited: 0x30)
struct U*3dade2c373 : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0x90 (Inherited: 0x40)
struct UNiagaraSettings : U*76e94c1d7f {
	struct FStringAssetReference DefaultEffect; // 0x40(0x10)
	struct FStringAssetReference DefaultEmitter; // 0x50(0x10)
	struct FStringAssetReference DefaultScript; // 0x60(0x10)
	struct TArray<struct FStringAssetReference> AdditionalParameterTypes; // 0x70(0x10)
	struct TArray<struct FStringAssetReference> AdditionalPayloadTypes; // 0x80(0x10)
};

