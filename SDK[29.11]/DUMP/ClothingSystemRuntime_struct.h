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

// ScriptStruct ClothingSystemRuntime.*b3b8f7e1f6
// Size: 0xbc (Inherited: 0x00)
struct F*b3b8f7e1f6 {
	enum class EClothingWindMethod *b127aa6d1d; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*d98522e1b1 *6a4a023e3d; // 0x04(0x10)
	struct F*d98522e1b1 *1c41aa0235; // 0x14(0x10)
	struct F*d98522e1b1 *fce0401b94; // 0x24(0x10)
	struct F*d98522e1b1 *6437b9e561; // 0x34(0x10)
	float *5c0f452eb1; // 0x44(0x04)
	float SelfCollisionStiffness; // 0x48(0x04)
	float *dfe7ced136; // 0x4c(0x04)
	struct FVector Damping; // 0x50(0x0c)
	float Friction; // 0x5c(0x04)
	float *2a880f79d7; // 0x60(0x04)
	float *733ad38055; // 0x64(0x04)
	struct FVector *76c77aca54; // 0x68(0x0c)
	struct FVector *1c02216038; // 0x74(0x0c)
	struct FVector LinearInertiaScale; // 0x80(0x0c)
	struct FVector AngularInertiaScale; // 0x8c(0x0c)
	struct FVector CentrifugalInertiaScale; // 0x98(0x0c)
	float SolverFrequency; // 0xa4(0x04)
	float StiffnessFrequency; // 0xa8(0x04)
	float GravityScale; // 0xac(0x04)
	float TetherStiffness; // 0xb0(0x04)
	float TetherLimit; // 0xb4(0x04)
	float *ff57d72168; // 0xb8(0x04)
};

// ScriptStruct ClothingSystemRuntime.*d98522e1b1
// Size: 0x10 (Inherited: 0x00)
struct F*d98522e1b1 {
	float Stiffness; // 0x00(0x04)
	float StiffnessMultiplier; // 0x04(0x04)
	float StretchLimit; // 0x08(0x04)
	float CompressionLimit; // 0x0c(0x04)
};

// ScriptStruct ClothingSystemRuntime.*0a50355043
// Size: 0xe8 (Inherited: 0x00)
struct F*0a50355043 {
	struct F*6ca5d3d5ac *b005ddc5df; // 0x00(0x98)
	struct F*6bce92b5b6 CollisionData; // 0x98(0x30)
	char pad_C8[0x20]; // 0xc8(0x20)
};

// ScriptStruct ClothingSystemRuntime.*6ca5d3d5ac
// Size: 0x98 (Inherited: 0x00)
struct F*6ca5d3d5ac {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<uint32> Indices; // 0x20(0x10)
	struct TArray<float> *f94dee9870; // 0x30(0x10)
	struct TArray<float> *5f4a0345d1; // 0x40(0x10)
	struct TArray<float> *388bd4c439; // 0x50(0x10)
	struct TArray<float> *e987ebc5ed; // 0x60(0x10)
	struct TArray<struct F*f4878cccce> *4bf976c993; // 0x70(0x10)
	int32 *b8326eaaf2; // 0x80(0x04)
	int32 *8cf9842ede; // 0x84(0x04)
	struct TArray<uint32> SelfCollisionIndices; // 0x88(0x10)
};

// ScriptStruct ClothingSystemRuntime.*f4878cccce
// Size: 0x30 (Inherited: 0x00)
struct F*f4878cccce {
	uint16 BoneIndices[0x08]; // 0x00(0x10)
	float BoneWeights[0x08]; // 0x10(0x20)
};

// ScriptStruct ClothingSystemRuntime.*6af5ef61d8
// Size: 0x28 (Inherited: 0x00)
struct F*6af5ef61d8 {
	struct FName MaskName; // 0x00(0x08)
	enum class MaskTarget_PhysMesh CurrentTarget; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxValue; // 0x0c(0x04)
	float MinValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Values; // 0x18(0x10)
};

