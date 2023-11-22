// Enum PrefabAsset.*059838bb91
enum class *059838bb91 : uint8 {
	*b784dae597,
	*50a4c15fc9,
	*7d4d06354b,
	*059838bb91_MAX,
};

// ScriptStruct PrefabAsset.*7f83965c32
// Size: 0x28 (Inherited: 0x00)
struct F*7f83965c32 {
	char bImportant : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class *f1e85ae637 IndoorOutdoor; // 0x04(0x01)
	struct FLightingChannels LightingChannels; // 0x05(0x03)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x08(0x10)
	struct FString ParentPrefab; // 0x18(0x10)
};

