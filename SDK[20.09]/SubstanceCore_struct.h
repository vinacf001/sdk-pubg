// Enum SubstanceCore.*93683ea49d
enum class *93683ea49d : uint8 {
	*63aa635e41,
	*1eebcc5d49,
	*ad730372d0,
	*a0f482325d,
	*a1c105c6be,
	*62332d3339,
	*4d0187baf0,
	*26516baac3,
	*990d108a1a,
	*497e0d559c,
	*97c23340a4,
	*be71637d25,
	*93683ea49d_MAX,
};

// Enum SubstanceCore.*13790737e2
enum class *13790737e2 : uint8 {
	*889de428de,
	*0637309735,
	*e88a289c88,
	*eee7a6233a,
	*aadaf0a920,
	*b15ee87706,
	*c58fa6b6c0,
	*13790737e2_MAX,
};

// Enum SubstanceCore.*bb07988644
enum class *bb07988644 : uint8 {
	*6afc89bd4a,
	*9b619ba9f1,
	*2937926a80,
	*bb07988644_MAX,
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

// Enum SubstanceCore.*f14da22885
enum class *f14da22885 : uint8 {
	*0613a6542e,
	*019f6ec480,
	*1161447e9a,
	*45a45da209,
	*51515cbacd,
	*4dd2dfd6d7,
	*60d0c14067,
	*a0590ee60f,
	*e979d09f40,
	*cb4dbc086b,
	*f14da22885_MAX,
};

// ScriptStruct SubstanceCore.*39ee56cac8
// Size: 0x20 (Inherited: 0x00)
struct F*39ee56cac8 {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct F*aaba7c2dae> Inputs; // 0x10(0x10)
};

// ScriptStruct SubstanceCore.*aaba7c2dae
// Size: 0x18 (Inherited: 0x00)
struct F*aaba7c2dae {
	struct FString Name; // 0x00(0x10)
	enum class *93683ea49d Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SubstanceCore.*5da3b9bea1
// Size: 0x48 (Inherited: 0x18)
struct F*5da3b9bea1 : F*aaba7c2dae {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*eaad9b891e
// Size: 0x48 (Inherited: 0x18)
struct F*eaad9b891e : F*aaba7c2dae {
	struct TArray<int32> Min; // 0x18(0x10)
	struct TArray<int32> Max; // 0x28(0x10)
	struct TArray<int32> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*55a8b62925
// Size: 0x20 (Inherited: 0x00)
struct F*55a8b62925 {
	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
};

