// Class Niagara.NiagaraActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent[0x08]; // 0x3e8(0x08)
};

// Class Niagara.NiagaraComponent
// Size: 0xa50 (Inherited: 0xa00)
struct UNiagaraComponent : UPrimitiveComponent {
	struct UNiagaraEffect* Asset[0x08]; // 0x9f8(0x08)
	char pad_A08[0x8]; // 0xa08(0x08)
	struct TArray<struct F*831ef3e2b5> *b8298c32aa[0x10]; // 0xa10(0x10)
	struct TArray<struct F*f4f6cf12de> *b9dde05f74[0x10]; // 0xa20(0x10)
	struct TArray<struct U*ffb587be47*> *90746846b5[0x10]; // 0xa30(0x10)
	bool *1fa345edaa; // 0xa40(0x01)
	char pad_A41[0xf]; // 0xa41(0x0f)

	void *19576e91ee(struct FString* InVariableName); // Function Niagara.NiagaraComponent.*19576e91ee // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6147330
	void *d0b8a0f598(); // Function Niagara.NiagaraComponent.*d0b8a0f598 // Final|Native|Public|BlueprintCallable // @ game+0x6146ca0
	struct FString *72e447b430(); // Function Niagara.NiagaraComponent.*72e447b430 // Final|Native|Public|BlueprintCallable // @ game+0x6146e40
	struct FString *c15b4db1a0(); // Function Niagara.NiagaraComponent.*c15b4db1a0 // Final|Native|Public|BlueprintCallable // @ game+0x6146f5c
	void *7e0a5c9c69(); // Function Niagara.NiagaraComponent.*7e0a5c9c69 // Final|Native|Public|BlueprintCallable // @ game+0x61475bc
	void *f351277176(); // Function Niagara.NiagaraComponent.*f351277176 // Final|Native|Public|BlueprintCallable // @ game+0x6146ce0
	struct FString *db2ecc8b0f(); // Function Niagara.NiagaraComponent.*db2ecc8b0f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x61471d0
	struct FString *7b6fe82f05(); // Function Niagara.NiagaraComponent.*7b6fe82f05 // Final|Native|Public|BlueprintCallable // @ game+0x61470b0
	void *7b565e9d05(struct FString* InVariableName); // Function Niagara.NiagaraComponent.*7b565e9d05 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6147488
	void *bf4466f9f5(struct FString* InEmitterName); // Function Niagara.NiagaraComponent.*bf4466f9f5 // Final|Native|Public|BlueprintCallable // @ game+0x6146d20
};

// Class Niagara.*ffb587be47
// Size: 0x28 (Inherited: 0x28)
struct U*ffb587be47 : UObject {
};

// Class Niagara.*f35ca81065
// Size: 0x28 (Inherited: 0x28)
struct U*f35ca81065 : U*ffb587be47 {
};

// Class Niagara.*ca6692d474
// Size: 0x98 (Inherited: 0x28)
struct U*ca6692d474 : U*f35ca81065 {
	struct FRichCurve Curve[0x70]; // 0x28(0x70)
};

// Class Niagara.*a96cf6e730
// Size: 0x178 (Inherited: 0x28)
struct U*a96cf6e730 : U*f35ca81065 {
	struct FRichCurve *adee3e5a3c[0x70]; // 0x28(0x70)
	struct FRichCurve *a930f64d80[0x70]; // 0x98(0x70)
	struct FRichCurve *bd9fb28530[0x70]; // 0x108(0x70)
};

// Class Niagara.*414166f807
// Size: 0x1e8 (Inherited: 0x28)
struct U*414166f807 : U*f35ca81065 {
	struct FRichCurve *ce07ec0a99[0x70]; // 0x28(0x70)
	struct FRichCurve *ecb940efc5[0x70]; // 0x98(0x70)
	struct FRichCurve *48d16680d2[0x70]; // 0x108(0x70)
	struct FRichCurve *7b49fabe25[0x70]; // 0x178(0x70)
};

// Class Niagara.*64d70231e1
// Size: 0x28 (Inherited: 0x28)
struct U*64d70231e1 : U*ffb587be47 {
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0xc0 (Inherited: 0x28)
struct UNiagaraDataInterfaceSpline : U*ffb587be47 {
	struct AActor* Source[0x08]; // 0x28(0x08)
	char pad_30[0x90]; // 0x30(0x90)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x1f0 (Inherited: 0x28)
struct UNiagaraDataInterfaceStaticMesh : U*ffb587be47 {
	struct UStaticMesh* *d915a96d45[0x08]; // 0x28(0x08)
	struct AActor* Source[0x08]; // 0x30(0x08)
	struct F*0307a8383f *1040fe5d25[0x68]; // 0x38(0x68)
	bool *29529b01db; // 0xa0(0x01)
	char pad_A1[0x14f]; // 0xa1(0x14f)
};

// Class Niagara.NiagaraEffect
// Size: 0x70 (Inherited: 0x28)
struct UNiagaraEffect : UObject {
	struct TArray<struct F*e392b910f6> *9e77b1fa9a[0x10]; // 0x28(0x10)
	struct U*10bb51f6b2* EffectScript[0x08]; // 0x38(0x08)
	struct TArray<struct F*a21fec00bc> *cce9fa6fe8[0x10]; // 0x40(0x10)
	struct TArray<struct F*a21fec00bc> *196798934c[0x10]; // 0x50(0x10)
	struct TArray<struct F*95905ae00c> *2dc7ec5b9e[0x10]; // 0x60(0x10)
};

// Class Niagara.*f473aed472
// Size: 0x28 (Inherited: 0x28)
struct U*f473aed472 : UObject {
};

// Class Niagara.*c76819a6cb
// Size: 0x38 (Inherited: 0x28)
struct U*c76819a6cb : U*f473aed472 {
	float RadiusScale[0x04]; // 0x28(0x04)
	struct FVector *aad7827b48[0x0c]; // 0x2c(0x0c)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraMeshRendererProperties : U*f473aed472 {
	struct UStaticMesh* ParticleMesh[0x08]; // 0x28(0x08)
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraRibbonRendererProperties : U*f473aed472 {
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x48 (Inherited: 0x28)
struct UNiagaraSpriteRendererProperties : U*f473aed472 {
	struct FVector2D *386622f573[0x08]; // 0x28(0x08)
	enum class *5a504164b8 Alignment; // 0x30(0x01)
	enum class *a7877e9466 *f1b117ddfe; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FVector *14c6506e27[0x0c]; // 0x34(0x0c)
	enum class *a16f5a29c1 SortMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Niagara.*10bb51f6b2
// Size: 0xe8 (Inherited: 0x28)
struct U*10bb51f6b2 : UObject {
	struct TArray<bool> *d416a96c4c[0x10]; // 0x28(0x10)
	struct F*5aeb905912 Parameters[0x10]; // 0x38(0x10)
	struct F*5aeb905912 *8c18bf1a47[0x10]; // 0x48(0x10)
	struct TArray<struct F*831ef3e2b5> Attributes[0x10]; // 0x58(0x10)
	struct TArray<struct F*ba006c8db9> EventReceivers[0x10]; // 0x68(0x10)
	struct TArray<struct F*ba006c8db9> *b365273800[0x10]; // 0x78(0x10)
	struct F*4d34e704b7 *6ebe3ebafa; // 0x88(0x01)
	enum class ENiagaraScriptUsage Usage; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct TArray<struct F*f4f6cf12de> *4bb3aa44c3[0x10]; // 0x90(0x10)
	struct TArray<struct F*293bdb6ea6> *ee5a337021[0x10]; // 0xa0(0x10)
	enum class ENiagaraNumericOutputTypeSelectionMode *a62f758b32; // 0xb0(0x01)
	char pad_B1[0x27]; // 0xb1(0x27)
	struct TArray<struct F*71a0132d52> *4e9054fe7f[0x10]; // 0xd8(0x10)
};

// Class Niagara.*0e293a70a5
// Size: 0x28 (Inherited: 0x28)
struct U*0e293a70a5 : UObject {
};

// Class Niagara.*dc99c7f664
// Size: 0x30 (Inherited: 0x28)
struct U*dc99c7f664 : U*0e293a70a5 {
	uint32 NumParticles[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Niagara.*a99086bd72
// Size: 0x108 (Inherited: 0x28)
struct U*a99086bd72 : UObject {
	float SpawnRate[0x04]; // 0x28(0x04)
	bool *d30615d669; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UMaterial* Material[0x08]; // 0x30(0x08)
	float StartTime[0x04]; // 0x38(0x04)
	float *0abd4a1669[0x04]; // 0x3c(0x04)
	int32 *97ddf9fa54[0x04]; // 0x40(0x04)
	enum class ENiagaraCollisionMode *bee0f29f88; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct U*f473aed472* *f180b26425[0x08]; // 0x48(0x08)
	struct F*c2b29cb2c9 *f3dcfd2c23[0x28]; // 0x50(0x28)
	struct F*c2b29cb2c9 *61c695c795[0x28]; // 0x78(0x28)
	struct F*603143bda9 *161806681c[0x50]; // 0xa0(0x50)
	struct TArray<struct F*b8f3e1d819> *d6fb43e5a2[0x10]; // 0xf0(0x10)
	char *cf6d8492b2 : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class Niagara.*b07648ef36
// Size: 0x28 (Inherited: 0x28)
struct U*b07648ef36 : UBlueprintFunctionLibrary {

	bool SpawnEffectAttached(struct UNiagaraEffect** EffectTemplate, struct FName* AttachPointName, struct FRotator* Rotation); // Function Niagara.*b07648ef36.SpawnEffectAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6147814
	struct FVector *6da170feb8(struct FRotator* Rotation); // Function Niagara.*b07648ef36.*6da170feb8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x614764c
};

// Class Niagara.*139da36c2c
// Size: 0x48 (Inherited: 0x28)
struct U*139da36c2c : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0x88 (Inherited: 0x38)
struct UNiagaraSettings : U*6c389a598a {
	struct FStringAssetReference DefaultEffect[0x10]; // 0x38(0x10)
	struct FStringAssetReference DefaultEmitter[0x10]; // 0x48(0x10)
	struct FStringAssetReference DefaultScript[0x10]; // 0x58(0x10)
	struct TArray<struct FStringAssetReference> AdditionalParameterTypes[0x10]; // 0x68(0x10)
	struct TArray<struct FStringAssetReference> AdditionalPayloadTypes[0x10]; // 0x78(0x10)
};

