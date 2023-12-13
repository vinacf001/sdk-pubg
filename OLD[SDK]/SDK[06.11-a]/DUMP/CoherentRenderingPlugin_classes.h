// Class CoherentRenderingPlugin.CoherentRenderingSettings
// Size: 0x48 (Inherited: 0x30)
struct UCoherentRenderingSettings : UObject {
	enum class ECoherentRenderingSettingsSeverity RenderingLogSeverity; // 0x30(0x01)
	bool ShowWarningsOnScreen; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString DeveloperOptions; // 0x38(0x10)
};

// Class CoherentRenderingPlugin.*4c77efbe93
// Size: 0x80 (Inherited: 0x30)
struct U*4c77efbe93 : UObject {
	char pad_30[0x48]; // 0x30(0x48)
	struct UTexture* Texture; // 0x78(0x08)
};

