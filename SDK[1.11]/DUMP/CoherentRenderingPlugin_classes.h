// Class CoherentRenderingPlugin.CoherentRenderingSettings
// Size: 0x40 (Inherited: 0x28)
struct UCoherentRenderingSettings : UObject {
	enum class ECoherentRenderingSettingsSeverity RenderingLogSeverity; // 0x28(0x01)
	bool ShowWarningsOnScreen; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString DeveloperOptions; // 0x30(0x10)
};

// Class CoherentRenderingPlugin.*79c9df4e51
// Size: 0x78 (Inherited: 0x28)
struct U*79c9df4e51 : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct UTexture* Texture; // 0x70(0x08)
};

