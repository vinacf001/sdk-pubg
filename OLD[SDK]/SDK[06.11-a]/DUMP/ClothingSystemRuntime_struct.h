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

// ScriptStruct ClothingSystemRuntime.*dce1c49942
// Size: 0xbc (Inherited: 0x00)
struct F*dce1c49942 {
	enum class EClothingWindMethod *93c569420a; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*6c550ec93e *955da14686; // 0x04(0x10)
	struct F*6c550ec93e *5d2b0da76d; // 0x14(0x10)
	struct F*6c550ec93e *cb538c64fb; // 0x24(0x10)
	struct F*6c550ec93e *62ae3c85bf; // 0x34(0x10)
	float *6e0b01cf17; // 0x44(0x04)
	float SelfCollisionStiffness; // 0x48(0x04)
	float *b7f086fb5b; // 0x4c(0x04)
	struct FVector Damping; // 0x50(0x0c)
	float Friction; // 0x5c(0x04)
	float *4ee213f1e1; // 0x60(0x04)
	float *0ec8ec40bb; // 0x64(0x04)
	struct FVector *671abb2993; // 0x68(0x0c)
	struct FVector *787ad9e5ba; // 0x74(0x0c)
	struct FVector LinearInertiaScale; // 0x80(0x0c)
	struct FVector AngularInertiaScale; // 0x8c(0x0c)
	struct FVector CentrifugalInertiaScale; // 0x98(0x0c)
	float SolverFrequency; // 0xa4(0x04)
	float StiffnessFrequency; // 0xa8(0x04)
	float GravityScale; // 0xac(0x04)
	float TetherStiffness; // 0xb0(0x04)
	float TetherLimit; // 0xb4(0x04)
	float *5a7063e57a; // 0xb8(0x04)
};

// ScriptStruct ClothingSystemRuntime.*6c550ec93e
// Size: 0x10 (Inherited: 0x00)
struct F*6c550ec93e {
	float Stiffness; // 0x00(0x04)
	float StiffnessMultiplier; // 0x04(0x04)
	float StretchLimit; // 0x08(0x04)
	float CompressionLimit; // 0x0c(0x04)
};

// ScriptStruct ClothingSystemRuntime.*9c016b1ea5
// Size: 0xe8 (Inherited: 0x00)
struct F*9c016b1ea5 {
	struct F*3d32becf28 *8721d14748; // 0x00(0x98)
	struct F*9bc822cc6b CollisionData; // 0x98(0x30)
	char pad_C8[0x20]; // 0xc8(0x20)
};

// ScriptStruct ClothingSystemRuntime.*3d32becf28
// Size: 0x98 (Inherited: 0x00)
struct F*3d32becf28 {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<uint32> Indices; // 0x20(0x10)
	struct TArray<float> *23f6c33549; // 0x30(0x10)
	struct TArray<float> *b065e48818; // 0x40(0x10)
	struct TArray<float> *88204c74c7; // 0x50(0x10)
	struct TArray<float> *67770617da; // 0x60(0x10)
	struct TArray<struct F*8851639bff> *c91a536605; // 0x70(0x10)
	int32 *ff9bc491f6; // 0x80(0x04)
	int32 *df2c1863fc; // 0x84(0x04)
	struct TArray<uint32> SelfCollisionIndices; // 0x88(0x10)
};

// ScriptStruct ClothingSystemRuntime.*8851639bff
// Size: 0x30 (Inherited: 0x00)
struct F*8851639bff {
	uint16 BoneIndices[0x08]; // 0x00(0x10)
	float BoneWeights[0x08]; // 0x10(0x20)
};

// ScriptStruct ClothingSystemRuntime.*6687f62727
// Size: 0x28 (Inherited: 0x00)
struct F*6687f62727 {
	struct FName MaskName; // 0x00(0x08)
	enum class MaskTarget_PhysMesh CurrentTarget; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxValue; // 0x0c(0x04)
	float MinValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Values; // 0x18(0x10)
};

