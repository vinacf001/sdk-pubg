// Enum SubstanceCore.*6609b1c12e
enum class *6609b1c12e : uint8 {
	*dacd0dfcdb,
	*5561a937cc,
	*e4a793e8bd,
	*2f02e34c73,
	*bcf06fd5a7,
	*3cd63cee1b,
	*f696a53815,
	*0f6cf5714b,
	*eb98b38cca,
	*907cf60801,
	*68e3365714,
	*2c7c16dbd5,
	*6609b1c12e_MAX,
};

// Enum SubstanceCore.*958d75e503
enum class *958d75e503 : uint8 {
	*a0652b1855,
	*1b1f9e80cd,
	*40de7d4bf5,
	*22c5cff446,
	*4eaf328cb3,
	*4de4c7a69a,
	*2e4be70675,
	*958d75e503_MAX,
};

// Enum SubstanceCore.*d4a9cda952
enum class *d4a9cda952 : uint8 {
	*2ee04335ad,
	*591579925c,
	*94d79d921f,
	*d4a9cda952_MAX,
};

// Enum SubstanceCore.ESubChannelType
enum class ESubChannelType : uint8 {
	Diffuse,
	Ambient,
	BaseColor,
	Metallic,
	Roughness,
	Emissive,
	Normal,
	Mask,
	Opacity,
	Refraction,
	AmbientOcclusion,
	Glossiness,
	Height,
	Displacement,
	Reflection,
	Invalid,
	ESubChannelType_MAX,
};

// Enum SubstanceCore.*0dde75f0cd
enum class *0dde75f0cd : uint8 {
	*728131c3da,
	*ef6d30dd2c,
	*2f2f72c3b7,
	*a2ae3c978c,
	*3ae6eb49c4,
	*4caf86057e,
	*4e6f1efe3d,
	*4533e72ccf,
	*6d92f1b739,
	*d73b44a77b,
	*0dde75f0cd_MAX,
};

// ScriptStruct SubstanceCore.*653b1df54b
// Size: 0x20 (Inherited: 0x00)
struct F*653b1df54b {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct F*18a14f9662> Inputs; // 0x10(0x10)
};

// ScriptStruct SubstanceCore.*18a14f9662
// Size: 0x18 (Inherited: 0x00)
struct F*18a14f9662 {
	struct FString Name; // 0x00(0x10)
	enum class *6609b1c12e Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SubstanceCore.*6d2517b4d5
// Size: 0x48 (Inherited: 0x18)
struct F*6d2517b4d5 : F*18a14f9662 {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*0b243e95e1
// Size: 0x48 (Inherited: 0x18)
struct F*0b243e95e1 : F*18a14f9662 {
	struct TArray<int32> Min; // 0x18(0x10)
	struct TArray<int32> Max; // 0x28(0x10)
	struct TArray<int32> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*94e6f00219
// Size: 0x20 (Inherited: 0x00)
struct F*94e6f00219 {
	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
};

