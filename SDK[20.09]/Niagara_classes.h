// Class Niagara.NiagaraActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x3f0(0x08)
};

// Class Niagara.NiagaraComponent
// Size: 0xa50 (Inherited: 0xa00)
struct UNiagaraComponent : UPrimitiveComponent {
	struct UNiagaraEffect* Asset; // 0x9f8(0x08)
	char pad_A08[0x8]; // 0xa08(0x08)
	struct TArray<struct F*283e4b918c> *f7de8b6e51; // 0xa10(0x10)
	struct TArray<struct F*a0a24b0a2b> *84d6204bda; // 0xa20(0x10)
	struct TArray<struct U*acbc21e3b6*> *a5ce9ba5db; // 0xa30(0x10)
	bool *c84daaa889; // 0xa40(0x01)
	char pad_A41[0xf]; // 0xa41(0x0f)

	struct FString *801f14164b(); // Function Niagara.NiagaraComponent.*801f14164b // Final|Native|Public|BlueprintCallable // @ game+0x5f04450
	void *48024fe786(); // Function Niagara.NiagaraComponent.*48024fe786 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x5f04828
	void *8cb34fc953(); // Function Niagara.NiagaraComponent.*8cb34fc953 // Final|Native|Public|BlueprintCallable // @ game+0x5f040c0
	struct FString *300541e520(); // Function Niagara.NiagaraComponent.*300541e520 // Final|Native|Public|BlueprintCallable // @ game+0x5f042fc
	void *091f7acc93(struct FString InVariableName); // Function Niagara.NiagaraComponent.*091f7acc93 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f04570
	void *6af65a2eaf(); // Function Niagara.NiagaraComponent.*6af65a2eaf // Final|Native|Public|BlueprintCallable // @ game+0x5f041e0
	void *974726f6dd(); // Function Niagara.NiagaraComponent.*974726f6dd // Final|Native|Public|BlueprintCallable // @ game+0x5f04080
	void *4f97337528(); // Function Niagara.NiagaraComponent.*4f97337528 // Final|Native|Public|BlueprintCallable // @ game+0x5f0495c
	void *82cd34aa7f(); // Function Niagara.NiagaraComponent.*82cd34aa7f // Final|Native|Public|BlueprintCallable // @ game+0x5f04040
	void *40ffea2fd5(struct FString InVariableName); // Function Niagara.NiagaraComponent.*40ffea2fd5 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5f046d0
};

// Class Niagara.*acbc21e3b6
// Size: 0x28 (Inherited: 0x28)
struct U*acbc21e3b6 : UObject {
};

// Class Niagara.*94817c2acf
// Size: 0x28 (Inherited: 0x28)
struct U*94817c2acf : U*acbc21e3b6 {
};

// Class Niagara.*fb4816e651
// Size: 0x98 (Inherited: 0x28)
struct U*fb4816e651 : U*94817c2acf {
	struct FRichCurve Curve; // 0x28(0x70)
};

// Class Niagara.*7f929fe4bd
// Size: 0x178 (Inherited: 0x28)
struct U*7f929fe4bd : U*94817c2acf {
	struct FRichCurve *583f7c1bbe; // 0x28(0x70)
	struct FRichCurve *ee1962cfde; // 0x98(0x70)
	struct FRichCurve *6fbd21ec8a; // 0x108(0x70)
};

// Class Niagara.*8baf4c16c9
// Size: 0x1e8 (Inherited: 0x28)
struct U*8baf4c16c9 : U*94817c2acf {
	struct FRichCurve *27e6f842d3; // 0x28(0x70)
	struct FRichCurve *b83b3df190; // 0x98(0x70)
	struct FRichCurve *8f28636e1f; // 0x108(0x70)
	struct FRichCurve *c02750cfe0; // 0x178(0x70)
};

// Class Niagara.*ac7a888c5b
// Size: 0x28 (Inherited: 0x28)
struct U*ac7a888c5b : U*acbc21e3b6 {
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0xc0 (Inherited: 0x28)
struct UNiagaraDataInterfaceSpline : U*acbc21e3b6 {
	struct AActor* Source; // 0x28(0x08)
	char pad_30[0x90]; // 0x30(0x90)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x1f0 (Inherited: 0x28)
struct UNiagaraDataInterfaceStaticMesh : U*acbc21e3b6 {
	struct UStaticMesh* *b08fbbbcbd; // 0x28(0x08)
	struct AActor* Source; // 0x30(0x08)
	struct F*827bae89e7 *1dd234e5fd; // 0x38(0x68)
	bool *aaa8d426a2; // 0xa0(0x01)
	char pad_A1[0x14f]; // 0xa1(0x14f)
};

// Class Niagara.NiagaraEffect
// Size: 0x70 (Inherited: 0x28)
struct UNiagaraEffect : UObject {
	struct TArray<struct F*32dcb20b11> *2f7e1f9efa; // 0x28(0x10)
	struct U*9a3f097133* EffectScript; // 0x38(0x08)
	struct TArray<struct F*95be69c06b> *c814cd8069; // 0x40(0x10)
	struct TArray<struct F*95be69c06b> *408204a6e1; // 0x50(0x10)
	struct TArray<struct F*1e883a2ceb> *143e588d40; // 0x60(0x10)
};

// Class Niagara.*210b0a33c9
// Size: 0x28 (Inherited: 0x28)
struct U*210b0a33c9 : UObject {
};

// Class Niagara.*87c8f55760
// Size: 0x38 (Inherited: 0x28)
struct U*87c8f55760 : U*210b0a33c9 {
	float RadiusScale; // 0x28(0x04)
	struct FVector *ada6058e8f; // 0x2c(0x0c)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraMeshRendererProperties : U*210b0a33c9 {
	struct UStaticMesh* ParticleMesh; // 0x28(0x08)
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraRibbonRendererProperties : U*210b0a33c9 {
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x48 (Inherited: 0x28)
struct UNiagaraSpriteRendererProperties : U*210b0a33c9 {
	struct FVector2D *da62db5379; // 0x28(0x08)
	enum class *5cfdae2551 Alignment; // 0x30(0x01)
	enum class *4d7f552768 *e51d5f38c5; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FVector *75d21a3436; // 0x34(0x0c)
	enum class *405bc71cda SortMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Niagara.*9a3f097133
// Size: 0xe8 (Inherited: 0x28)
struct U*9a3f097133 : UObject {
	struct TArray<bool> *9246b7589c; // 0x28(0x10)
	struct F*d3873fcfb7 Parameters; // 0x38(0x10)
	struct F*d3873fcfb7 *29d820dcef; // 0x48(0x10)
	struct TArray<struct F*283e4b918c> Attributes; // 0x58(0x10)
	struct TArray<struct F*6f0e180247> EventReceivers; // 0x68(0x10)
	struct TArray<struct F*6f0e180247> *d39d6da4c4; // 0x78(0x10)
	struct F*d0f87839dd *0aa99a6662; // 0x88(0x01)
	enum class ENiagaraScriptUsage Usage; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct TArray<struct F*a0a24b0a2b> *a1e4ed38cf; // 0x90(0x10)
	struct TArray<struct F*8dc7205434> *473006d28b; // 0xa0(0x10)
	enum class ENiagaraNumericOutputTypeSelectionMode *376509e200; // 0xb0(0x01)
	char pad_B1[0x27]; // 0xb1(0x27)
	struct TArray<struct F*b2c6fede93> *adff6af784; // 0xd8(0x10)
};

// Class Niagara.*9c24ffed6c
// Size: 0x28 (Inherited: 0x28)
struct U*9c24ffed6c : UObject {
};

// Class Niagara.*b1a9be36a8
// Size: 0x30 (Inherited: 0x28)
struct U*b1a9be36a8 : U*9c24ffed6c {
	uint32 NumParticles; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Niagara.*bcb92e724a
// Size: 0x108 (Inherited: 0x28)
struct U*bcb92e724a : UObject {
	float SpawnRate; // 0x28(0x04)
	bool *3bdc55aa22; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UMaterial* Material; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	float *a5e35cc094; // 0x3c(0x04)
	int32 *ba3b6e10af; // 0x40(0x04)
	enum class ENiagaraCollisionMode *bb3231f9ad; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct U*210b0a33c9* *9948326b0e; // 0x48(0x08)
	struct F*934f222fc8 *022be4d55c; // 0x50(0x28)
	struct F*934f222fc8 *fde600152a; // 0x78(0x28)
	struct F*4db460305b *f010d5c9f7; // 0xa0(0x50)
	struct TArray<struct F*89fd0f59b4> *34db9d7544; // 0xf0(0x10)
	char *7591b6bc48 : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class Niagara.*99819ccd2d
// Size: 0x28 (Inherited: 0x28)
struct U*99819ccd2d : UBlueprintFunctionLibrary {
};

// Class Niagara.*85ff0b7b2c
// Size: 0x48 (Inherited: 0x28)
struct U*85ff0b7b2c : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0x88 (Inherited: 0x38)
struct UNiagaraSettings : U*5cde8540b3 {
	struct FStringAssetReference DefaultEffect; // 0x38(0x10)
	struct FStringAssetReference DefaultEmitter; // 0x48(0x10)
	struct FStringAssetReference DefaultScript; // 0x58(0x10)
	struct TArray<struct FStringAssetReference> AdditionalParameterTypes; // 0x68(0x10)
	struct TArray<struct FStringAssetReference> AdditionalPayloadTypes; // 0x78(0x10)
};

