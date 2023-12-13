// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8 {
	Uniform,
	Free,
	LockXY,
	LockXZ,
	LockYZ,
	EFoliageScaling_MAX,
};

// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8 {
	Red,
	Green,
	Blue,
	Alpha,
	MAX_None,
	EVertexColorMaskChannel_MAX,
};

// Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8 {
	FOLIAGEVERTEXCOLORMASK_Disabled,
	FOLIAGEVERTEXCOLORMASK_Red,
	FOLIAGEVERTEXCOLORMASK_Green,
	FOLIAGEVERTEXCOLORMASK_Blue,
	FOLIAGEVERTEXCOLORMASK_Alpha,
	FOLIAGEVERTEXCOLORMASK_MAX,
};

// Enum Foliage.*50810e9259
enum class *50810e9259 : uint8 {
	*c1f89c6550,
	*51ee686a6b,
	*1a139fce0f,
	*8d699d948c,
	*50810e9259_MAX,
};

// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8 {
	CollisionOverlap,
	ShadeOverlap,
	None,
	ESimulationOverlap_MAX,
};

// ScriptStruct Foliage.*0b79243295
// Size: 0x0c (Inherited: 0x00)
struct F*0b79243295 {
	char *9c56e1af21 : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *1f329ddf2f; // 0x04(0x04)
	char *ab72ac4ae4 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Foliage.*13222359fd
// Size: 0x60 (Inherited: 0x00)
struct F*13222359fd {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Normal; // 0x20(0x0c)
	float Age; // 0x2c(0x04)
	float Scale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UFoliageType_InstancedStaticMesh* Type; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
};

// ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 (Inherited: 0x00)
struct FFoliageTypeObject {
	struct UObject* FoliageTypeObject; // 0x00(0x08)
	struct UFoliageType_InstancedStaticMesh* *0a0626d547; // 0x08(0x08)
	bool *13284ac2b8; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UClass* Type; // 0x18(0x08)
};

