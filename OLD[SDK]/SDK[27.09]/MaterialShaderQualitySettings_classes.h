// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x80 (Inherited: 0x30)
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> *0a72f73809; // 0x30(0x50)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x48 (Inherited: 0x30)
struct UShaderPlatformQualitySettings : UObject {
	struct F*5185770af9 QualityOverrides[0x03]; // 0x30(0x12)
	char pad_42[0x6]; // 0x42(0x06)
};

