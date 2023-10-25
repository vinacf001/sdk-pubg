// Class Niagara.NiagaraActor
// Size: 0x400 (Inherited: 0x3f8)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x3f8(0x08)
};

// Class Niagara.NiagaraComponent
// Size: 0xa60 (Inherited: 0xa10)
struct UNiagaraComponent : UPrimitiveComponent {
	struct UNiagaraEffect* Asset; // 0xa08(0x08)
	char pad_A18[0x8]; // 0xa18(0x08)
	struct TArray<struct F*831ef3e2b5> *b8298c32aa; // 0xa20(0x10)
	struct TArray<struct F*f4f6cf12de> *b9dde05f74; // 0xa30(0x10)
	struct TArray<struct U*ffb587be47*> *90746846b5; // 0xa40(0x10)
	bool *1fa345edaa; // 0xa50(0x01)
	char pad_A51[0xf]; // 0xa51(0x0f)

	struct FVector *19576e91ee(); // Function Niagara.NiagaraComponent.*19576e91ee // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654e7ec
	void *d0b8a0f598(); // Function Niagara.NiagaraComponent.*d0b8a0f598 // Final|Native|Public|BlueprintCallable // @ game+0x654e15c
	struct AActor* *72e447b430(); // Function Niagara.NiagaraComponent.*72e447b430 // Final|Native|Public|BlueprintCallable // @ game+0x654e2fc
	bool *c15b4db1a0(); // Function Niagara.NiagaraComponent.*c15b4db1a0 // Final|Native|Public|BlueprintCallable // @ game+0x654e418
	bool *7e0a5c9c69(); // Function Niagara.NiagaraComponent.*7e0a5c9c69 // Final|Native|Public|BlueprintCallable // @ game+0x654ea78
	void *f351277176(); // Function Niagara.NiagaraComponent.*f351277176 // Final|Native|Public|BlueprintCallable // @ game+0x654e19c
	struct FVector2D *db2ecc8b0f(); // Function Niagara.NiagaraComponent.*db2ecc8b0f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x654e68c
	float *7b6fe82f05(); // Function Niagara.NiagaraComponent.*7b6fe82f05 // Final|Native|Public|BlueprintCallable // @ game+0x654e56c
	struct FVector4 *7b565e9d05(); // Function Niagara.NiagaraComponent.*7b565e9d05 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x654e944
	float *bf4466f9f5(); // Function Niagara.NiagaraComponent.*bf4466f9f5 // Final|Native|Public|BlueprintCallable // @ game+0x654e1dc
};

// Class Niagara.*ffb587be47
// Size: 0x30 (Inherited: 0x30)
struct U*ffb587be47 : UObject {
};

// Class Niagara.*f35ca81065
// Size: 0x30 (Inherited: 0x30)
struct U*f35ca81065 : U*ffb587be47 {
};

// Class Niagara.*ca6692d474
// Size: 0xa0 (Inherited: 0x30)
struct U*ca6692d474 : U*f35ca81065 {
	struct FRichCurve Curve; // 0x30(0x70)
};

// Class Niagara.*a96cf6e730
// Size: 0x180 (Inherited: 0x30)
struct U*a96cf6e730 : U*f35ca81065 {
	struct FRichCurve *adee3e5a3c; // 0x30(0x70)
	struct FRichCurve *a930f64d80; // 0xa0(0x70)
	struct FRichCurve *bd9fb28530; // 0x110(0x70)
};

// Class Niagara.*414166f807
// Size: 0x1f0 (Inherited: 0x30)
struct U*414166f807 : U*f35ca81065 {
	struct FRichCurve *ce07ec0a99; // 0x30(0x70)
	struct FRichCurve *ecb940efc5; // 0xa0(0x70)
	struct FRichCurve *48d16680d2; // 0x110(0x70)
	struct FRichCurve *7b49fabe25; // 0x180(0x70)
};

// Class Niagara.*64d70231e1
// Size: 0x30 (Inherited: 0x30)
struct U*64d70231e1 : U*ffb587be47 {
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0xc0 (Inherited: 0x30)
struct UNiagaraDataInterfaceSpline : U*ffb587be47 {
	struct AActor* Source; // 0x30(0x08)
	char pad_38[0x88]; // 0x38(0x88)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x200 (Inherited: 0x30)
struct UNiagaraDataInterfaceStaticMesh : U*ffb587be47 {
	struct UStaticMesh* *d915a96d45; // 0x30(0x08)
	struct AActor* Source; // 0x38(0x08)
	struct F*0307a8383f *1040fe5d25; // 0x40(0x68)
	bool *29529b01db; // 0xa8(0x01)
	char pad_A9[0x157]; // 0xa9(0x157)
};

// Class Niagara.NiagaraEffect
// Size: 0x78 (Inherited: 0x30)
struct UNiagaraEffect : UObject {
	struct TArray<struct F*e392b910f6> *9e77b1fa9a; // 0x30(0x10)
	struct U*10bb51f6b2* EffectScript; // 0x40(0x08)
	struct TArray<struct F*a21fec00bc> *cce9fa6fe8; // 0x48(0x10)
	struct TArray<struct F*a21fec00bc> *196798934c; // 0x58(0x10)
	struct TArray<struct F*95905ae00c> *2dc7ec5b9e; // 0x68(0x10)
};

// Class Niagara.*f473aed472
// Size: 0x30 (Inherited: 0x30)
struct U*f473aed472 : UObject {
};

// Class Niagara.*c76819a6cb
// Size: 0x40 (Inherited: 0x30)
struct U*c76819a6cb : U*f473aed472 {
	float RadiusScale; // 0x30(0x04)
	struct FVector *aad7827b48; // 0x34(0x0c)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraMeshRendererProperties : U*f473aed472 {
	struct UStaticMesh* ParticleMesh; // 0x30(0x08)
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraRibbonRendererProperties : U*f473aed472 {
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x50 (Inherited: 0x30)
struct UNiagaraSpriteRendererProperties : U*f473aed472 {
	struct FVector2D *386622f573; // 0x30(0x08)
	enum class *5a504164b8 Alignment; // 0x38(0x01)
	enum class *a7877e9466 *f1b117ddfe; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector *14c6506e27; // 0x3c(0x0c)
	enum class *a16f5a29c1 SortMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Niagara.*10bb51f6b2
// Size: 0xf0 (Inherited: 0x30)
struct U*10bb51f6b2 : UObject {
	struct TArray<bool> *d416a96c4c; // 0x30(0x10)
	struct F*5aeb905912 Parameters; // 0x40(0x10)
	struct F*5aeb905912 *8c18bf1a47; // 0x50(0x10)
	struct TArray<struct F*831ef3e2b5> Attributes; // 0x60(0x10)
	struct TArray<struct F*ba006c8db9> EventReceivers; // 0x70(0x10)
	struct TArray<struct F*ba006c8db9> *b365273800; // 0x80(0x10)
	struct F*4d34e704b7 *6ebe3ebafa; // 0x90(0x01)
	enum class ENiagaraScriptUsage Usage; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct TArray<struct F*f4f6cf12de> *4bb3aa44c3; // 0x98(0x10)
	struct TArray<struct F*293bdb6ea6> *ee5a337021; // 0xa8(0x10)
	enum class ENiagaraNumericOutputTypeSelectionMode *a62f758b32; // 0xb8(0x01)
	char pad_B9[0x27]; // 0xb9(0x27)
	struct TArray<struct F*71a0132d52> *4e9054fe7f; // 0xe0(0x10)
};

// Class Niagara.*0e293a70a5
// Size: 0x30 (Inherited: 0x30)
struct U*0e293a70a5 : UObject {
};

// Class Niagara.*dc99c7f664
// Size: 0x38 (Inherited: 0x30)
struct U*dc99c7f664 : U*0e293a70a5 {
	uint32 NumParticles; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.*a99086bd72
// Size: 0x110 (Inherited: 0x30)
struct U*a99086bd72 : UObject {
	float SpawnRate; // 0x30(0x04)
	bool *d30615d669; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UMaterial* Material; // 0x38(0x08)
	float StartTime; // 0x40(0x04)
	float *0abd4a1669; // 0x44(0x04)
	int32 *97ddf9fa54; // 0x48(0x04)
	enum class ENiagaraCollisionMode *bee0f29f88; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct U*f473aed472* *f180b26425; // 0x50(0x08)
	struct F*c2b29cb2c9 *f3dcfd2c23; // 0x58(0x28)
	struct F*c2b29cb2c9 *61c695c795; // 0x80(0x28)
	struct F*603143bda9 *161806681c; // 0xa8(0x50)
	struct TArray<struct F*b8f3e1d819> *d6fb43e5a2; // 0xf8(0x10)
	char *cf6d8492b2 : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class Niagara.*b07648ef36
// Size: 0x30 (Inherited: 0x30)
struct U*b07648ef36 : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnEffectAttached(); // Function Niagara.*b07648ef36.SpawnEffectAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x654ecd0
	struct UNiagaraComponent* *6da170feb8(); // Function Niagara.*b07648ef36.*6da170feb8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x654eb08
};

// Class Niagara.*139da36c2c
// Size: 0x50 (Inherited: 0x30)
struct U*139da36c2c : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0x90 (Inherited: 0x40)
struct UNiagaraSettings : U*6c389a598a {
	struct FStringAssetReference DefaultEffect; // 0x40(0x10)
	struct FStringAssetReference DefaultEmitter; // 0x50(0x10)
	struct FStringAssetReference DefaultScript; // 0x60(0x10)
	struct TArray<struct FStringAssetReference> AdditionalParameterTypes; // 0x70(0x10)
	struct TArray<struct FStringAssetReference> AdditionalPayloadTypes; // 0x80(0x10)
};

