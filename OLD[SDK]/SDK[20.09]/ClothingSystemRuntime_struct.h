// Enum ClothingSystemRuntime.EClothingWindMethod
enum class EClothingWindMethod : uint8 {
	Legacy,
	Accurate,
	EClothingWindMethod_MAX,
};

// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class MaskTarget_PhysMesh : uint8 {
	None,
	MaxDistance,
	BackstopDistance,
	BackstopRadius,
	MaskTarget_MAX,
};

// ScriptStruct ClothingSystemRuntime.*edc1a71729
// Size: 0xbc (Inherited: 0x00)
struct F*edc1a71729 {
	enum class EClothingWindMethod *70ee099080; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*d5d3d0e451 *0a84994818; // 0x04(0x10)
	struct F*d5d3d0e451 *ea9f8a1d9d; // 0x14(0x10)
	struct F*d5d3d0e451 *8dbebae3aa; // 0x24(0x10)
	struct F*d5d3d0e451 *52e3e6a712; // 0x34(0x10)
	float *2681174e7f; // 0x44(0x04)
	float SelfCollisionStiffness; // 0x48(0x04)
	float *fb0c8d54fe; // 0x4c(0x04)
	struct FVector Damping; // 0x50(0x0c)
	float Friction; // 0x5c(0x04)
	float *7bf3f26787; // 0x60(0x04)
	float *5f1ae15fd2; // 0x64(0x04)
	struct FVector *fb9b48fbe7; // 0x68(0x0c)
	struct FVector *79210c4c7c; // 0x74(0x0c)
	struct FVector LinearInertiaScale; // 0x80(0x0c)
	struct FVector AngularInertiaScale; // 0x8c(0x0c)
	struct FVector CentrifugalInertiaScale; // 0x98(0x0c)
	float SolverFrequency; // 0xa4(0x04)
	float StiffnessFrequency; // 0xa8(0x04)
	float GravityScale; // 0xac(0x04)
	float TetherStiffness; // 0xb0(0x04)
	float TetherLimit; // 0xb4(0x04)
	float *f891ed25fe; // 0xb8(0x04)
};

// ScriptStruct ClothingSystemRuntime.*d5d3d0e451
// Size: 0x10 (Inherited: 0x00)
struct F*d5d3d0e451 {
	float Stiffness; // 0x00(0x04)
	float StiffnessMultiplier; // 0x04(0x04)
	float StretchLimit; // 0x08(0x04)
	float CompressionLimit; // 0x0c(0x04)
};

// ScriptStruct ClothingSystemRuntime.*c79c15f315
// Size: 0xe8 (Inherited: 0x00)
struct F*c79c15f315 {
	struct F*035bedb781 *c7617e10bb; // 0x00(0x98)
	struct F*ebb8d83430 CollisionData; // 0x98(0x30)
	char pad_C8[0x20]; // 0xc8(0x20)
};

// ScriptStruct ClothingSystemRuntime.*035bedb781
// Size: 0x98 (Inherited: 0x00)
struct F*035bedb781 {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<uint32> Indices; // 0x20(0x10)
	struct TArray<float> *80bba1eae3; // 0x30(0x10)
	struct TArray<float> *bcf1186084; // 0x40(0x10)
	struct TArray<float> *0c31845e50; // 0x50(0x10)
	struct TArray<float> *5243d5d65a; // 0x60(0x10)
	struct TArray<struct F*e77b33f5dd> *514fe1f293; // 0x70(0x10)
	int32 *1e8b414be6; // 0x80(0x04)
	int32 *764ab7a300; // 0x84(0x04)
	struct TArray<uint32> SelfCollisionIndices; // 0x88(0x10)
};

// ScriptStruct ClothingSystemRuntime.*e77b33f5dd
// Size: 0x30 (Inherited: 0x00)
struct F*e77b33f5dd {
	uint16 BoneIndices[0x08]; // 0x00(0x10)
	float BoneWeights[0x08]; // 0x10(0x20)
};

// ScriptStruct ClothingSystemRuntime.*e3743e7248
// Size: 0x28 (Inherited: 0x00)
struct F*e3743e7248 {
	struct FName MaskName; // 0x00(0x08)
	enum class MaskTarget_PhysMesh CurrentTarget; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxValue; // 0x0c(0x04)
	float MinValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Values; // 0x18(0x10)
};

