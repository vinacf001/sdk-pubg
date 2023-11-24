// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8 {
	None,
	Largest,
	Smallest,
	Scalar,
	ENiagaraNumericOutputTypeSelectionMode_MAX,
};

// Enum Niagara.*d63015b628
enum class *d63015b628 : uint8 {
	*bc66e21b8b,
	*9f7bd4ca63,
	*27bd6d1e8d,
	*c67a0264ac,
	*a6d288f110,
	*136248a633,
	*3104d9ef82,
	*d63015b628_MAX,
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

// Enum Niagara.*4d7f552768
enum class *4d7f552768 : uint8 {
	*6f81975d96,
	*b7c308892b,
	*fdd75c2f63,
	*e1e2aa0282,
	*4d7f552768_MAX,
};

// Enum Niagara.*5cfdae2551
enum class *5cfdae2551 : uint8 {
	*5ecaefb0da,
	*1e6d6daf48,
	*53b46df5ee,
	*fced040fb3,
	*5cfdae2551_MAX,
};

// Enum Niagara.*405bc71cda
enum class *405bc71cda : uint8 {
	*1c95fa0548,
	*73d36a45ca,
	*3b5c84162d,
	*8cf877bcdd,
	*405bc71cda_MAX,
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

// Enum Niagara.*6605e0d648
enum class *6605e0d648 : uint8 {
	*d5cab2257b,
	*5d154684b4,
	*2d57f32f88,
	*5da6df1f29,
	*6605e0d648_MAX,
};

// ScriptStruct Niagara.*283e4b918c
// Size: 0x30 (Inherited: 0x00)
struct F*283e4b918c {
	struct FGuid ID; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct F*cac78e9cb3 TypeDef; // 0x18(0x08)
	struct TArray<bool> *c80547c3c7; // 0x20(0x10)
};

// ScriptStruct Niagara.*cac78e9cb3
// Size: 0x08 (Inherited: 0x00)
struct F*cac78e9cb3 {
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
	struct FVector *d252a33fb0; // 0x00(0x0c)
	struct FVector Vector2; // 0x0c(0x0c)
	struct F*a64b33aec9 *689bbe4472; // 0x18(0x18)
	struct F*a64b33aec9 *9780124024; // 0x30(0x18)
};

// ScriptStruct Niagara.*a64b33aec9
// Size: 0x18 (Inherited: 0x00)
struct F*a64b33aec9 {
	struct FVector *b0de85bdf0; // 0x00(0x0c)
	struct FVector *62f63d66ff; // 0x0c(0x0c)
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

// ScriptStruct Niagara.*8dc7205434
// Size: 0x30 (Inherited: 0x00)
struct F*8dc7205434 {
	struct FName Name; // 0x00(0x08)
	struct FGuid *2cb6c54e46; // 0x08(0x10)
	struct TArray<bool> *a60fa43fe2; // 0x18(0x10)
	int32 NumOutputs; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Niagara.*b2c6fede93
// Size: 0x20 (Inherited: 0x00)
struct F*b2c6fede93 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Niagara.*a0a24b0a2b
// Size: 0x20 (Inherited: 0x00)
struct F*a0a24b0a2b {
	struct U*acbc21e3b6* *6a75af3b96; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct FName Name; // 0x18(0x08)
};

// ScriptStruct Niagara.*c42dfe16b9
// Size: 0x40 (Inherited: 0x00)
struct F*c42dfe16b9 {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*283e4b918c> Inputs; // 0x08(0x10)
	struct TArray<struct F*283e4b918c> Outputs; // 0x18(0x10)
	struct FGuid *2cb6c54e46; // 0x28(0x10)
	bool *3a566c541e; // 0x38(0x01)
	bool *788eea4f8e; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Niagara.*d0f87839dd
// Size: 0x01 (Inherited: 0x00)
struct F*d0f87839dd {
	bool *02f22abd21; // 0x00(0x01)
};

// ScriptStruct Niagara.*6f0e180247
// Size: 0x20 (Inherited: 0x00)
struct F*6f0e180247 {
	struct F*3fbcc36f8b ID; // 0x00(0x10)
	struct TArray<struct F*283e4b918c> Variables; // 0x10(0x10)
};

// ScriptStruct Niagara.*3fbcc36f8b
// Size: 0x10 (Inherited: 0x00)
struct F*3fbcc36f8b {
	struct FName Name; // 0x00(0x08)
	enum class ENiagaraDataSetType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Niagara.*827bae89e7
// Size: 0x68 (Inherited: 0x00)
struct F*827bae89e7 {
	struct TArray<int32> *90ebf1eb01; // 0x00(0x10)
	char pad_10[0x58]; // 0x10(0x58)
};

// ScriptStruct Niagara.*6c668ae95a
// Size: 0x10 (Inherited: 0x00)
struct F*6c668ae95a {
	int32 Tri; // 0x00(0x04)
	struct FVector *adef87f059; // 0x04(0x0c)
};

// ScriptStruct Niagara.*32dcb20b11
// Size: 0x30 (Inherited: 0x00)
struct F*32dcb20b11 {
	struct FGuid ID; // 0x00(0x10)
	struct FName *04c8f8a952; // 0x10(0x08)
	bool bIsEnabled; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FName Name; // 0x20(0x08)
	struct U*bcb92e724a* Instance; // 0x28(0x08)
};

// ScriptStruct Niagara.*1e883a2ceb
// Size: 0x30 (Inherited: 0x00)
struct F*1e883a2ceb {
	struct FGuid *25e0aab981; // 0x00(0x10)
	struct FGuid *8bf0d6ce3c; // 0x10(0x10)
	struct FString *5061a4b602; // 0x20(0x10)
};

// ScriptStruct Niagara.*95be69c06b
// Size: 0x30 (Inherited: 0x00)
struct F*95be69c06b {
	struct FGuid *25e0aab981; // 0x00(0x10)
	struct FGuid *8bf0d6ce3c; // 0x10(0x10)
	struct FGuid *84c631dd5f; // 0x20(0x10)
};

// ScriptStruct Niagara.*d3873fcfb7
// Size: 0x10 (Inherited: 0x00)
struct F*d3873fcfb7 {
	struct TArray<struct F*283e4b918c> Parameters; // 0x00(0x10)
};

// ScriptStruct Niagara.*dfc7c89306
// Size: 0x2c (Inherited: 0x00)
struct F*dfc7c89306 {
	struct FVector *93b918561a; // 0x00(0x0c)
	struct FVector CollisionNormal; // 0x0c(0x0c)
	int32 PhysicalMaterialIndex; // 0x18(0x04)
	struct FVector CollisionVelocity; // 0x1c(0x0c)
	int32 ParticleIndex; // 0x28(0x04)
};

// ScriptStruct Niagara.*89fd0f59b4
// Size: 0x10 (Inherited: 0x00)
struct F*89fd0f59b4 {
	float Time; // 0x00(0x04)
	float *8b3d1a07ef; // 0x04(0x04)
	uint32 *eb2435652c; // 0x08(0x04)
	uint32 *ab5d1dd41c; // 0x0c(0x04)
};

// ScriptStruct Niagara.*4db460305b
// Size: 0x50 (Inherited: 0x28)
struct F*4db460305b : F*934f222fc8 {
	enum class *6605e0d648 *a13f77292e; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32 *425c417674; // 0x2c(0x04)
	uint32 *7129f0e45c; // 0x30(0x04)
	struct FGuid *fc9863d17c; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct FName *9613d4cda0; // 0x48(0x08)
};

// ScriptStruct Niagara.*934f222fc8
// Size: 0x28 (Inherited: 0x00)
struct F*934f222fc8 {
	struct U*9a3f097133* Script; // 0x00(0x08)
	struct TArray<struct F*404002ebb0> EventReceivers; // 0x08(0x10)
	struct TArray<struct F*c8a5ee0130> *d39d6da4c4; // 0x18(0x10)
};

// ScriptStruct Niagara.*c8a5ee0130
// Size: 0x38 (Inherited: 0x00)
struct F*c8a5ee0130 {
	int32 *7129f0e45c; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
	struct F*6f0e180247 *654e55dc58; // 0x18(0x20)
};

// ScriptStruct Niagara.*404002ebb0
// Size: 0x28 (Inherited: 0x00)
struct F*404002ebb0 {
	struct FName Name; // 0x00(0x08)
	struct FName *cbe3e07626; // 0x08(0x08)
	struct FName *19ae41581e; // 0x10(0x08)
	struct TArray<struct U*9c24ffed6c*> EmitterActions; // 0x18(0x10)
};

