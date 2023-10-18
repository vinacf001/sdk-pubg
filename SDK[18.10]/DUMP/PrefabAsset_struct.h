// Enum PrefabAsset.*9ed1ecb689
enum class *9ed1ecb689 : uint8 {
	None,
	None,
};

// ScriptStruct PrefabAsset.*d0c99cb1dc
// Size: 0x28 (Inherited: 0x00)
struct F*d0c99cb1dc {
	char bImportant : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class *a6cf5bae1a IndoorOutdoor; // 0x04(0x01)
	struct FLightingChannels LightingChannels; // 0x05(0x03)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x08(0x10)
	struct FString ParentPrefab; // 0x18(0x10)
};

