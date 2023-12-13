// Class Niagara.NiagaraActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x3f0(0x08)
};

// Class Niagara.NiagaraComponent
// Size: 0xa00 (Inherited: 0x9b0)
struct UNiagaraComponent : UPrimitiveComponent {
	struct UNiagaraEffect* Asset; // 0x9a8(0x08)
	char pad_9B8[0x8]; // 0x9b8(0x08)
	struct TArray<struct F*2f6acd5670> *e4a2c28d06; // 0x9c0(0x10)
	struct TArray<struct F*916f6dba5b> *2c184b855c; // 0x9d0(0x10)
	struct TArray<struct U*cd0aefaa57*> *ea0084a67f; // 0x9e0(0x10)
	bool *70896d945b; // 0x9f0(0x01)
	char pad_9F1[0xf]; // 0x9f1(0x0f)

	struct FVector *c295b4c44d(); // Function Niagara.NiagaraComponent.*c295b4c44d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x605478c
	struct FVector2D *82a41ea059(); // Function Niagara.NiagaraComponent.*82a41ea059 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x605462c
	struct FVector4 *4887bfdca5(); // Function Niagara.NiagaraComponent.*4887bfdca5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x60548e4
	void *c27fd77e4a(); // Function Niagara.NiagaraComponent.*c27fd77e4a // Final|Native|Public|BlueprintCallable // @ game+0x605413c
	float *1ba7b99f0e(); // Function Niagara.NiagaraComponent.*1ba7b99f0e // Final|Native|Public|BlueprintCallable // @ game+0x605417c
	bool *bb159d3df5(); // Function Niagara.NiagaraComponent.*bb159d3df5 // Final|Native|Public|BlueprintCallable // @ game+0x6054a18
	void *3a2c3cec9a(); // Function Niagara.NiagaraComponent.*3a2c3cec9a // Final|Native|Public|BlueprintCallable // @ game+0x60540fc
	float *0bf5489262(); // Function Niagara.NiagaraComponent.*0bf5489262 // Final|Native|Public|BlueprintCallable // @ game+0x605450c
	bool *5e10cdf5fb(); // Function Niagara.NiagaraComponent.*5e10cdf5fb // Final|Native|Public|BlueprintCallable // @ game+0x60543b8
	struct AActor* *0ee27878ae(); // Function Niagara.NiagaraComponent.*0ee27878ae // Final|Native|Public|BlueprintCallable // @ game+0x605429c
};

// Class Niagara.*cd0aefaa57
// Size: 0x30 (Inherited: 0x30)
struct U*cd0aefaa57 : UObject {
};

// Class Niagara.*8b77bdc9e1
// Size: 0x30 (Inherited: 0x30)
struct U*8b77bdc9e1 : U*cd0aefaa57 {
};

// Class Niagara.*18391f95fa
// Size: 0xa0 (Inherited: 0x30)
struct U*18391f95fa : U*8b77bdc9e1 {
	struct FRichCurve Curve; // 0x30(0x70)
};

// Class Niagara.*aa01204084
// Size: 0x180 (Inherited: 0x30)
struct U*aa01204084 : U*8b77bdc9e1 {
	struct FRichCurve *74b0b006f0; // 0x30(0x70)
	struct FRichCurve *b6d558d6d2; // 0xa0(0x70)
	struct FRichCurve *886788fe68; // 0x110(0x70)
};

// Class Niagara.*bf3dd45215
// Size: 0x1f0 (Inherited: 0x30)
struct U*bf3dd45215 : U*8b77bdc9e1 {
	struct FRichCurve *6f6a0b9222; // 0x30(0x70)
	struct FRichCurve *d98e034818; // 0xa0(0x70)
	struct FRichCurve *89be386b93; // 0x110(0x70)
	struct FRichCurve *491287cf08; // 0x180(0x70)
};

// Class Niagara.*b96462bc35
// Size: 0x30 (Inherited: 0x30)
struct U*b96462bc35 : U*cd0aefaa57 {
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0xc0 (Inherited: 0x30)
struct UNiagaraDataInterfaceSpline : U*cd0aefaa57 {
	struct AActor* Source; // 0x30(0x08)
	char pad_38[0x88]; // 0x38(0x88)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x200 (Inherited: 0x30)
struct UNiagaraDataInterfaceStaticMesh : U*cd0aefaa57 {
	struct UStaticMesh* *4aa2226f7a; // 0x30(0x08)
	struct AActor* Source; // 0x38(0x08)
	struct F*50298c5694 *ef468be754; // 0x40(0x68)
	bool *fee514b606; // 0xa8(0x01)
	char pad_A9[0x157]; // 0xa9(0x157)
};

// Class Niagara.NiagaraEffect
// Size: 0x78 (Inherited: 0x30)
struct UNiagaraEffect : UObject {
	struct TArray<struct F*7888d2a69c> *631c23f49d; // 0x30(0x10)
	struct U*1177e49522* EffectScript; // 0x40(0x08)
	struct TArray<struct F*0801405e09> *5a61f42f4b; // 0x48(0x10)
	struct TArray<struct F*0801405e09> *862d824d2d; // 0x58(0x10)
	struct TArray<struct F*c58cce2fd9> *0d1a6c0125; // 0x68(0x10)
};

// Class Niagara.*8fa98d2d1f
// Size: 0x30 (Inherited: 0x30)
struct U*8fa98d2d1f : UObject {
};

// Class Niagara.*5f93f6972c
// Size: 0x40 (Inherited: 0x30)
struct U*5f93f6972c : U*8fa98d2d1f {
	float RadiusScale; // 0x30(0x04)
	struct FVector *9fa454bdd1; // 0x34(0x0c)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraMeshRendererProperties : U*8fa98d2d1f {
	struct UStaticMesh* ParticleMesh; // 0x30(0x08)
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraRibbonRendererProperties : U*8fa98d2d1f {
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x50 (Inherited: 0x30)
struct UNiagaraSpriteRendererProperties : U*8fa98d2d1f {
	struct FVector2D *3781fcc60a; // 0x30(0x08)
	enum class *f9d3d98047 Alignment; // 0x38(0x01)
	enum class *53f4c86c38 *2ee146ada8; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector *c695340973; // 0x3c(0x0c)
	enum class *612b9594ad SortMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Niagara.*1177e49522
// Size: 0xf0 (Inherited: 0x30)
struct U*1177e49522 : UObject {
	struct TArray<bool> *ddd9948ae0; // 0x30(0x10)
	struct F*cd63d92db7 Parameters; // 0x40(0x10)
	struct F*cd63d92db7 *05d9241d37; // 0x50(0x10)
	struct TArray<struct F*2f6acd5670> Attributes; // 0x60(0x10)
	struct TArray<struct F*60184f2a3b> EventReceivers; // 0x70(0x10)
	struct TArray<struct F*60184f2a3b> *83601007ac; // 0x80(0x10)
	struct F*85194c1764 *3682d5634f; // 0x90(0x01)
	enum class ENiagaraScriptUsage Usage; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct TArray<struct F*916f6dba5b> *97d94989bd; // 0x98(0x10)
	struct TArray<struct F*57fb3a77f6> *9cf74dbafe; // 0xa8(0x10)
	enum class ENiagaraNumericOutputTypeSelectionMode *0a7579e0f3; // 0xb8(0x01)
	char pad_B9[0x27]; // 0xb9(0x27)
	struct TArray<struct F*e5913dd77d> *6783d96663; // 0xe0(0x10)
};

// Class Niagara.*1d98bba3ce
// Size: 0x30 (Inherited: 0x30)
struct U*1d98bba3ce : UObject {
};

// Class Niagara.*6937c024ed
// Size: 0x38 (Inherited: 0x30)
struct U*6937c024ed : U*1d98bba3ce {
	uint32 NumParticles; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.*701794faaf
// Size: 0x110 (Inherited: 0x30)
struct U*701794faaf : UObject {
	float SpawnRate; // 0x30(0x04)
	bool *61665fa441; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UMaterial* Material; // 0x38(0x08)
	float StartTime; // 0x40(0x04)
	float *68d807403b; // 0x44(0x04)
	int32 *a41593041a; // 0x48(0x04)
	enum class ENiagaraCollisionMode *0ecc1f7166; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct U*8fa98d2d1f* *f49c9ded0d; // 0x50(0x08)
	struct F*b0b86993b2 *7712bab836; // 0x58(0x28)
	struct F*b0b86993b2 *5199504a04; // 0x80(0x28)
	struct F*0e6974a4c6 *5bf5d01fd4; // 0xa8(0x50)
	struct TArray<struct F*2f92796708> *dba5735a2e; // 0xf8(0x10)
	char *974b30e3be : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class Niagara.*b3665cbb22
// Size: 0x30 (Inherited: 0x30)
struct U*b3665cbb22 : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnEffectAttached(); // Function Niagara.*b3665cbb22.SpawnEffectAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6054c70
	struct UNiagaraComponent* *f921c9dbbb(); // Function Niagara.*b3665cbb22.*f921c9dbbb // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6054aa8
};

// Class Niagara.*ec1d19e39d
// Size: 0x50 (Inherited: 0x30)
struct U*ec1d19e39d : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0x90 (Inherited: 0x40)
struct UNiagaraSettings : U*6080c6b78b {
	struct FStringAssetReference DefaultEffect; // 0x40(0x10)
	struct FStringAssetReference DefaultEmitter; // 0x50(0x10)
	struct FStringAssetReference DefaultScript; // 0x60(0x10)
	struct TArray<struct FStringAssetReference> AdditionalParameterTypes; // 0x70(0x10)
	struct TArray<struct FStringAssetReference> AdditionalPayloadTypes; // 0x80(0x10)
};

