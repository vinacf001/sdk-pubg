// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78 (Inherited: 0x28)
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> *f354e1f2ab[0x50]; // 0x28(0x50)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x40 (Inherited: 0x28)
struct UShaderPlatformQualitySettings : UObject {
	struct F*0ce2c8c7ca QualityOverrides[0x06]; // 0x28(0x12)
	char pad_3A[0x6]; // 0x3a(0x06)
};

