// Enum SubstanceCore.*0e85b9465e
enum class *0e85b9465e : uint8 {
	*87e62d443c,
	*ff5e3a1556,
	*9138165ce3,
	*c37cb6739d,
	*5a915ce666,
	*f0f9f12ae2,
	*a02e2e5f6e,
	*2aab735c42,
	*3ad976886d,
	*b1ea0759fa,
	*82b055f544,
	*9dee3c4041,
	*0e85b9465e_MAX,
};

// Enum SubstanceCore.*0b89141342
enum class *0b89141342 : uint8 {
	*478d89064c,
	*40bf1faa71,
	*5244de4f5d,
	*a752c87ec8,
	*a56e18c9c8,
	*99c98940b4,
	*be24fe339c,
	*0b89141342_MAX,
};

// Enum SubstanceCore.*1a44cc1bd2
enum class *1a44cc1bd2 : uint8 {
	*0bbd41c48f,
	*d9e337ee51,
	*ef94e139fa,
	*1a44cc1bd2_MAX,
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

// Enum SubstanceCore.*fcbd22a691
enum class *fcbd22a691 : uint8 {
	*76682ac336,
	*b0e6c9ed24,
	*d5402d33c3,
	*a133d9877b,
	*2f784c0d4e,
	*012a2fc8e1,
	*853ea6d745,
	*00aa82aa33,
	*b9d9f89889,
	*a6b62f5a48,
	*fcbd22a691_MAX,
};

// ScriptStruct SubstanceCore.*beb74c4065
// Size: 0x20 (Inherited: 0x00)
struct F*beb74c4065 {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct F*548206fb49> Inputs; // 0x10(0x10)
};

// ScriptStruct SubstanceCore.*548206fb49
// Size: 0x18 (Inherited: 0x00)
struct F*548206fb49 {
	struct FString Name; // 0x00(0x10)
	enum class *0e85b9465e Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SubstanceCore.*294b1a68bf
// Size: 0x48 (Inherited: 0x18)
struct F*294b1a68bf : F*548206fb49 {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*5e3870f284
// Size: 0x48 (Inherited: 0x18)
struct F*5e3870f284 : F*548206fb49 {
	struct TArray<int32> Min; // 0x18(0x10)
	struct TArray<int32> Max; // 0x28(0x10)
	struct TArray<int32> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*fa2f9cce57
// Size: 0x20 (Inherited: 0x00)
struct F*fa2f9cce57 {
	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
};

