// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8 {
	None,
	Largest,
	Smallest,
	Scalar,
	ENiagaraNumericOutputTypeSelectionMode_MAX,
};

// Enum Niagara.*5b9de1cab7
enum class *5b9de1cab7 : uint8 {
	*ff0a0f2d18,
	*eb5a675dfa,
	*dd6b13a18c,
	*9039b2540b,
	*5f36bffe6c,
	*41330c5d35,
	*5e533509c6,
	*5b9de1cab7_MAX,
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

// Enum Niagara.*f5b063357f
enum class *f5b063357f : uint8 {
	*634c1a8e46,
	*0a05d0c22e,
	*48704c618c,
	*9100d3cd66,
	*f5b063357f_MAX,
};

// Enum Niagara.*c7fac59e0a
enum class *c7fac59e0a : uint8 {
	*3073a7be61,
	*b936d730ac,
	*7f354bfffd,
	*eff97148c7,
	*c7fac59e0a_MAX,
};

// Enum Niagara.*6cf157a01f
enum class *6cf157a01f : uint8 {
	*2d66941957,
	*60de5251c6,
	*b87da39652,
	*5eb36173b3,
	*6cf157a01f_MAX,
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

// Enum Niagara.*22dcfa529e
enum class *22dcfa529e : uint8 {
	*9af176a93e,
	*a0d5289d60,
	*fe8653d0f5,
	*70724803aa,
	*22dcfa529e_MAX,
};

// ScriptStruct Niagara.*0ee7a24bff
// Size: 0x30 (Inherited: 0x00)
struct F*0ee7a24bff {
	struct FGuid ID; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct F*0d4ef5480c TypeDef; // 0x18(0x08)
	struct TArray<bool> *a764bd3c19; // 0x20(0x10)
};

// ScriptStruct Niagara.*0d4ef5480c
// Size: 0x08 (Inherited: 0x00)
struct F*0d4ef5480c {
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
	struct FVector *17d3a349af; // 0x00(0x0c)
	struct FVector Vector2; // 0x0c(0x0c)
	struct F*3dee389692 *014f6afc46; // 0x18(0x18)
	struct F*3dee389692 *1aa950719a; // 0x30(0x18)
};

// ScriptStruct Niagara.*3dee389692
// Size: 0x18 (Inherited: 0x00)
struct F*3dee389692 {
	struct FVector *21a046b360; // 0x00(0x0c)
	struct FVector *d666208f0b; // 0x0c(0x0c)
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

// ScriptStruct Niagara.*89baf00209
// Size: 0x30 (Inherited: 0x00)
struct F*89baf00209 {
	struct FName Name; // 0x00(0x08)
	struct FGuid *61bba2fc85; // 0x08(0x10)
	struct TArray<bool> *4a0db500a5; // 0x18(0x10)
	int32 NumOutputs; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Niagara.*49f223782a
// Size: 0x20 (Inherited: 0x00)
struct F*49f223782a {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Niagara.*901dfe5449
// Size: 0x20 (Inherited: 0x00)
struct F*901dfe5449 {
	struct U*561e25d4e6* *690b4c6f0e; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct FName Name; // 0x18(0x08)
};

// ScriptStruct Niagara.*d6ef1425c8
// Size: 0x40 (Inherited: 0x00)
struct F*d6ef1425c8 {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*0ee7a24bff> Inputs; // 0x08(0x10)
	struct TArray<struct F*0ee7a24bff> Outputs; // 0x18(0x10)
	struct FGuid *61bba2fc85; // 0x28(0x10)
	bool *1d573e13d8; // 0x38(0x01)
	bool *343245ff6a; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Niagara.*986bdbf717
// Size: 0x01 (Inherited: 0x00)
struct F*986bdbf717 {
	bool *74d0782938; // 0x00(0x01)
};

// ScriptStruct Niagara.*8c21a5f5c1
// Size: 0x20 (Inherited: 0x00)
struct F*8c21a5f5c1 {
	struct F*71da6f15bf ID; // 0x00(0x10)
	struct TArray<struct F*0ee7a24bff> Variables; // 0x10(0x10)
};

// ScriptStruct Niagara.*71da6f15bf
// Size: 0x10 (Inherited: 0x00)
struct F*71da6f15bf {
	struct FName Name; // 0x00(0x08)
	enum class ENiagaraDataSetType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Niagara.*e1252b96e6
// Size: 0x68 (Inherited: 0x00)
struct F*e1252b96e6 {
	struct TArray<int32> *250ede4aa3; // 0x00(0x10)
	char pad_10[0x58]; // 0x10(0x58)
};

// ScriptStruct Niagara.*49199215e7
// Size: 0x10 (Inherited: 0x00)
struct F*49199215e7 {
	int32 Tri; // 0x00(0x04)
	struct FVector *240ad5f696; // 0x04(0x0c)
};

// ScriptStruct Niagara.*c9100339b6
// Size: 0x30 (Inherited: 0x00)
struct F*c9100339b6 {
	struct FGuid ID; // 0x00(0x10)
	struct FName *6b7b64e718; // 0x10(0x08)
	bool bIsEnabled; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FName Name; // 0x20(0x08)
	struct U*5aeb5e154f* Instance; // 0x28(0x08)
};

// ScriptStruct Niagara.*78575bbf9f
// Size: 0x30 (Inherited: 0x00)
struct F*78575bbf9f {
	struct FGuid *4b0213dd76; // 0x00(0x10)
	struct FGuid *5acb220e9b; // 0x10(0x10)
	struct FString *b28e90a7e0; // 0x20(0x10)
};

// ScriptStruct Niagara.*74e60d175f
// Size: 0x30 (Inherited: 0x00)
struct F*74e60d175f {
	struct FGuid *4b0213dd76; // 0x00(0x10)
	struct FGuid *5acb220e9b; // 0x10(0x10)
	struct FGuid *5e177368a1; // 0x20(0x10)
};

// ScriptStruct Niagara.*e88161a6ed
// Size: 0x10 (Inherited: 0x00)
struct F*e88161a6ed {
	struct TArray<struct F*0ee7a24bff> Parameters; // 0x00(0x10)
};

// ScriptStruct Niagara.*0ead4dd8b1
// Size: 0x2c (Inherited: 0x00)
struct F*0ead4dd8b1 {
	struct FVector *a10db3afa1; // 0x00(0x0c)
	struct FVector CollisionNormal; // 0x0c(0x0c)
	int32 PhysicalMaterialIndex; // 0x18(0x04)
	struct FVector CollisionVelocity; // 0x1c(0x0c)
	int32 ParticleIndex; // 0x28(0x04)
};

// ScriptStruct Niagara.*cbc9a49035
// Size: 0x10 (Inherited: 0x00)
struct F*cbc9a49035 {
	float Time; // 0x00(0x04)
	float *22550b8da5; // 0x04(0x04)
	uint32 *6eec3f6eb5; // 0x08(0x04)
	uint32 *ec054a2be3; // 0x0c(0x04)
};

// ScriptStruct Niagara.*82345d530c
// Size: 0x50 (Inherited: 0x28)
struct F*82345d530c : F*214f76d222 {
	enum class *22dcfa529e *368a4f3cd9; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32 *8648a3f410; // 0x2c(0x04)
	uint32 *ce21dd7c0b; // 0x30(0x04)
	struct FGuid *2fe5fa96ee; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct FName *34c03625f0; // 0x48(0x08)
};

// ScriptStruct Niagara.*214f76d222
// Size: 0x28 (Inherited: 0x00)
struct F*214f76d222 {
	struct U*81cd1d24cd* Script; // 0x00(0x08)
	struct TArray<struct F*319acf21b7> EventReceivers; // 0x08(0x10)
	struct TArray<struct F*0893655f60> *6473f13094; // 0x18(0x10)
};

// ScriptStruct Niagara.*0893655f60
// Size: 0x38 (Inherited: 0x00)
struct F*0893655f60 {
	int32 *ce21dd7c0b; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
	struct F*8c21a5f5c1 *f192ae7c45; // 0x18(0x20)
};

// ScriptStruct Niagara.*319acf21b7
// Size: 0x28 (Inherited: 0x00)
struct F*319acf21b7 {
	struct FName Name; // 0x00(0x08)
	struct FName *6f974f832f; // 0x08(0x08)
	struct FName *442e34fd06; // 0x10(0x08)
	struct TArray<struct U*fd5e2f7537*> EmitterActions; // 0x18(0x10)
};

