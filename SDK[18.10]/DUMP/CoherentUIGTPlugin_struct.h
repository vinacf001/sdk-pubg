// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8 {
	None,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8 {
	None,
};

// Enum CoherentUIGTPlugin.*55ff64bc4c
enum class *55ff64bc4c : uint8 {
	None,
	None,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8 {
	None,
	None,
};

// ScriptStruct CoherentUIGTPlugin.*6c47452db8
// Size: 0x10 (Inherited: 0x00)
struct F*6c47452db8 {
	struct UAudioComponent* Component; // 0x00(0x08)
	struct U*8c9c6f4e51* Stream; // 0x08(0x08)
};

// ScriptStruct CoherentUIGTPlugin.*fe78125f4b
// Size: 0x18 (Inherited: 0x00)
struct F*fe78125f4b {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bWaitForManualStop; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CoherentUIGTPlugin.*d6e266a96d
// Size: 0x14 (Inherited: 0x00)
struct F*d6e266a96d {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
	bool IsTransparent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ClickThroughAlphaThreshold; // 0x0c(0x04)
	float AnimationFrameDefer; // 0x10(0x04)
};

