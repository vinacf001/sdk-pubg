// Enum SubstanceCore.*1ba95bd775
enum class *1ba95bd775 : uint8 {
	*80ba4e473d,
	*6daa3f825e,
	*b8e6daa95e,
	*9f72229767,
	*b44f72d97e,
	*3aa99f8840,
	*595010a011,
	*980617cfe3,
	*e7ff001277,
	*9493f65dde,
	*77e38ff27f,
	*713609ca23,
	*1ba95bd775_MAX,
};

// Enum SubstanceCore.*0f070df956
enum class *0f070df956 : uint8 {
	*7ab5ef54b2,
	*bb7ed79937,
	*af5fce4a6c,
	*0654c08156,
	*844d3d4d1d,
	*2d3318092d,
	*0b4f23892c,
	*0f070df956_MAX,
};

// Enum SubstanceCore.*a9f97beeed
enum class *a9f97beeed : uint8 {
	*47964efada,
	*02ddd5b6d6,
	*f57a406711,
	*a9f97beeed_MAX,
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

// Enum SubstanceCore.*83bcf75a81
enum class *83bcf75a81 : uint8 {
	*c50235f8dc,
	*e4b8e30033,
	*f7cd850acb,
	*b2602a277a,
	*48f00f963d,
	*2c93821934,
	*c885122f26,
	*f675023f2b,
	*d9e0f1f5ea,
	*0333a75f70,
	*83bcf75a81_MAX,
};

// ScriptStruct SubstanceCore.*dc524197be
// Size: 0x20 (Inherited: 0x00)
struct F*dc524197be {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct F*9aa43c566b> Inputs; // 0x10(0x10)
};

// ScriptStruct SubstanceCore.*9aa43c566b
// Size: 0x18 (Inherited: 0x00)
struct F*9aa43c566b {
	struct FString Name; // 0x00(0x10)
	enum class *1ba95bd775 Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SubstanceCore.*28360cb8d9
// Size: 0x48 (Inherited: 0x18)
struct F*28360cb8d9 : F*9aa43c566b {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*a82c3d2872
// Size: 0x48 (Inherited: 0x18)
struct F*a82c3d2872 : F*9aa43c566b {
	struct TArray<int32> Min; // 0x18(0x10)
	struct TArray<int32> Max; // 0x28(0x10)
	struct TArray<int32> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*8f12134eea
// Size: 0x20 (Inherited: 0x00)
struct F*8f12134eea {
	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
};

