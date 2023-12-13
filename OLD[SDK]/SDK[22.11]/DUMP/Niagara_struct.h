// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8 {
	None,
	Largest,
	Smallest,
	Scalar,
	ENiagaraNumericOutputTypeSelectionMode_MAX,
};

// Enum Niagara.*674d25c328
enum class *674d25c328 : uint8 {
	*9da716c8a5,
	*b87906b538,
	*e4bfe894ed,
	*b7a96d0d3d,
	*2ac43ad371,
	*04e6709059,
	*5fe1e29851,
	*674d25c328_MAX,
};

// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8 {
	Undefined,
	Parameter,
	Attribute,
	SystemConstant,
	ENiagaraInputNodeUsage_MAX,
};

// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8 {
	ParticleData,
	Shared,
	Event,
	ENiagaraDataSetType_MAX,
};

// Enum Niagara.*53f4c86c38
enum class *53f4c86c38 : uint8 {
	*0589f61d2c,
	*e664db6a51,
	*9fec69ab47,
	*2dec14473b,
	*53f4c86c38_MAX,
};

// Enum Niagara.*f9d3d98047
enum class *f9d3d98047 : uint8 {
	*635e98e7c6,
	*3754e13086,
	*00c0ad5b8d,
	*f8ef9c623e,
	*f9d3d98047_MAX,
};

// Enum Niagara.*612b9594ad
enum class *612b9594ad : uint8 {
	*d64545ab35,
	*d8bf2b828b,
	*0d33611177,
	*bd75976152,
	*612b9594ad_MAX,
};

// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8 {
	Function,
	Module,
	SpawnScript,
	SpawnScriptInterpolated,
	UpdateScript,
	EffectScript,
	ENiagaraScriptUsage_MAX,
};

// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8 {
	Copy,
	Zero,
	None,
	MarkInvalid,
	PassThrough,
	EUnusedAttributeBehaviour_MAX,
};

// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8 {
	None,
	SceneGeometry,
	DepthBuffer,
	DistanceField,
	ENiagaraCollisionMode_MAX,
};

// Enum Niagara.EScriptCompileIndices
enum class EScriptCompileIndices : uint8 {
	SpawnScript,
	UpdateScript,
	EventScript,
	EScriptCompileIndices_MAX,
};

// Enum Niagara.*f8bf032f25
enum class *f8bf032f25 : uint8 {
	*283f99b881,
	*1d364454ce,
	*5be12e33f1,
	*b4bd45f396,
	*f8bf032f25_MAX,
};

// ScriptStruct Niagara.*2f6acd5670
// Size: 0x30 (Inherited: 0x00)
struct F*2f6acd5670 {
	struct FGuid ID; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct F*90e68972a3 TypeDef; // 0x18(0x08)
	struct TArray<bool> *512002a2e3; // 0x20(0x10)
};

// ScriptStruct Niagara.*90e68972a3
// Size: 0x08 (Inherited: 0x00)
struct F*90e68972a3 {
	struct UStruct* Struct; // 0x00(0x08)
};

// ScriptStruct Niagara.NiagaraMatrix
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraMatrix {
	struct FVector4 Row0; // 0x00(0x10)
	struct FVector4 Row1; // 0x10(0x10)
	struct FVector4 Row2; // 0x20(0x10)
	struct FVector4 Row3; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraTestStruct
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraTestStruct {
	struct FVector *28d3f408a4; // 0x00(0x0c)
	struct FVector Vector2; // 0x0c(0x0c)
	struct F*3f6cf39293 *50f222a9e8; // 0x18(0x18)
	struct F*3f6cf39293 *1f3fd734a6; // 0x30(0x18)
};

// ScriptStruct Niagara.*3f6cf39293
// Size: 0x18 (Inherited: 0x00)
struct F*3f6cf39293 {
	struct FVector *79629f5382; // 0x00(0x0c)
	struct FVector *075c7376f8; // 0x0c(0x0c)
};

// ScriptStruct Niagara.NiagaraNumeric
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraNumeric {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraBool
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraBool {
	int32 Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraInt32
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraInt32 {
	int32 Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraFloat
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraFloat {
	float Value; // 0x00(0x04)
};

// ScriptStruct Niagara.*57fb3a77f6
// Size: 0x30 (Inherited: 0x00)
struct F*57fb3a77f6 {
	struct FName Name; // 0x00(0x08)
	struct FGuid *09eadf1d83; // 0x08(0x10)
	struct TArray<bool> *c09a63e6db; // 0x18(0x10)
	int32 NumOutputs; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Niagara.*e5913dd77d
// Size: 0x20 (Inherited: 0x00)
struct F*e5913dd77d {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Niagara.*916f6dba5b
// Size: 0x20 (Inherited: 0x00)
struct F*916f6dba5b {
	struct U*cd0aefaa57* *3ca7f9bfb4; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct FName Name; // 0x18(0x08)
};

// ScriptStruct Niagara.*09c8183185
// Size: 0x40 (Inherited: 0x00)
struct F*09c8183185 {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*2f6acd5670> Inputs; // 0x08(0x10)
	struct TArray<struct F*2f6acd5670> Outputs; // 0x18(0x10)
	struct FGuid *09eadf1d83; // 0x28(0x10)
	bool *62055af850; // 0x38(0x01)
	bool *f2b8d31b5b; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Niagara.*85194c1764
// Size: 0x01 (Inherited: 0x00)
struct F*85194c1764 {
	bool *500a8a13fd; // 0x00(0x01)
};

// ScriptStruct Niagara.*60184f2a3b
// Size: 0x20 (Inherited: 0x00)
struct F*60184f2a3b {
	struct F*abcb2b57df ID; // 0x00(0x10)
	struct TArray<struct F*2f6acd5670> Variables; // 0x10(0x10)
};

// ScriptStruct Niagara.*abcb2b57df
// Size: 0x10 (Inherited: 0x00)
struct F*abcb2b57df {
	struct FName Name; // 0x00(0x08)
	enum class ENiagaraDataSetType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Niagara.*50298c5694
// Size: 0x68 (Inherited: 0x00)
struct F*50298c5694 {
	struct TArray<int32> *f46ad04cea; // 0x00(0x10)
	char pad_10[0x58]; // 0x10(0x58)
};

// ScriptStruct Niagara.*fa294d283e
// Size: 0x10 (Inherited: 0x00)
struct F*fa294d283e {
	int32 Tri; // 0x00(0x04)
	struct FVector *f7f652af50; // 0x04(0x0c)
};

// ScriptStruct Niagara.*7888d2a69c
// Size: 0x30 (Inherited: 0x00)
struct F*7888d2a69c {
	struct FGuid ID; // 0x00(0x10)
	struct FName *4982c7041f; // 0x10(0x08)
	bool bIsEnabled; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FName Name; // 0x20(0x08)
	struct U*701794faaf* Instance; // 0x28(0x08)
};

// ScriptStruct Niagara.*c58cce2fd9
// Size: 0x30 (Inherited: 0x00)
struct F*c58cce2fd9 {
	struct FGuid *faca2c8642; // 0x00(0x10)
	struct FGuid *e3770a4afb; // 0x10(0x10)
	struct FString *236482e9ac; // 0x20(0x10)
};

// ScriptStruct Niagara.*0801405e09
// Size: 0x30 (Inherited: 0x00)
struct F*0801405e09 {
	struct FGuid *faca2c8642; // 0x00(0x10)
	struct FGuid *e3770a4afb; // 0x10(0x10)
	struct FGuid *4457888911; // 0x20(0x10)
};

// ScriptStruct Niagara.*cd63d92db7
// Size: 0x10 (Inherited: 0x00)
struct F*cd63d92db7 {
	struct TArray<struct F*2f6acd5670> Parameters; // 0x00(0x10)
};

// ScriptStruct Niagara.*42e869a0b8
// Size: 0x2c (Inherited: 0x00)
struct F*42e869a0b8 {
	struct FVector *c2361cae62; // 0x00(0x0c)
	struct FVector CollisionNormal; // 0x0c(0x0c)
	int32 PhysicalMaterialIndex; // 0x18(0x04)
	struct FVector CollisionVelocity; // 0x1c(0x0c)
	int32 ParticleIndex; // 0x28(0x04)
};

// ScriptStruct Niagara.*2f92796708
// Size: 0x10 (Inherited: 0x00)
struct F*2f92796708 {
	float Time; // 0x00(0x04)
	float *10cb5efe69; // 0x04(0x04)
	uint32 *5bf3118edb; // 0x08(0x04)
	uint32 *ddbbe952a0; // 0x0c(0x04)
};

// ScriptStruct Niagara.*0e6974a4c6
// Size: 0x50 (Inherited: 0x28)
struct F*0e6974a4c6 : F*b0b86993b2 {
	enum class *f8bf032f25 *80f420d96f; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32 *79a65151f9; // 0x2c(0x04)
	uint32 *dc1f7b97f9; // 0x30(0x04)
	struct FGuid *c089e47ed3; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct FName *d35e1af3ce; // 0x48(0x08)
};

// ScriptStruct Niagara.*b0b86993b2
// Size: 0x28 (Inherited: 0x00)
struct F*b0b86993b2 {
	struct U*1177e49522* Script; // 0x00(0x08)
	struct TArray<struct F*51d38bf942> EventReceivers; // 0x08(0x10)
	struct TArray<struct F*bc4481f47b> *83601007ac; // 0x18(0x10)
};

// ScriptStruct Niagara.*bc4481f47b
// Size: 0x38 (Inherited: 0x00)
struct F*bc4481f47b {
	int32 *dc1f7b97f9; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
	struct F*60184f2a3b *cc8626a2e9; // 0x18(0x20)
};

// ScriptStruct Niagara.*51d38bf942
// Size: 0x28 (Inherited: 0x00)
struct F*51d38bf942 {
	struct FName Name; // 0x00(0x08)
	struct FName *9155aaf8f9; // 0x08(0x08)
	struct FName *da6d8cbd94; // 0x10(0x08)
	struct TArray<struct U*1d98bba3ce*> EmitterActions; // 0x18(0x10)
};

