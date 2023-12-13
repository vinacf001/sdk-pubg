// Enum PrefabAsset.*cc8151a8a3
enum class *cc8151a8a3 : uint8 {
	*a0e84e1a55,
	*4207a22350,
	*74385dc185,
	*cc8151a8a3_MAX,
};

// ScriptStruct PrefabAsset.*f4c50b3a3b
// Size: 0x28 (Inherited: 0x00)
struct F*f4c50b3a3b {
	char bImportant : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class *c276e29a27 IndoorOutdoor; // 0x04(0x01)
	struct FLightingChannels LightingChannels; // 0x05(0x03)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x08(0x10)
	struct FString ParentPrefab; // 0x18(0x10)
};

