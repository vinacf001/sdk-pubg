// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78 (Inherited: 0x28)
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> *0a72f73809; // 0x28(0x50)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x40 (Inherited: 0x28)
struct UShaderPlatformQualitySettings : UObject {
	struct F*5185770af9 QualityOverrides[0x03]; // 0x28(0x12)
	char pad_3A[0x6]; // 0x3a(0x06)
};

