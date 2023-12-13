// Enum EngineSettings.*bdd6c0976d
enum class *bdd6c0976d : uint8 {
	*c79cf04682,
	*6b6b7e6174,
	*ee89eda16a,
	*bdd6c0976d_MAX,
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	Horizontal,
	Vertical,
	ETwoPlayerSplitScreenType_MAX,
};

// ScriptStruct EngineSettings.*edd2c28b19
// Size: 0x28 (Inherited: 0x00)
struct F*edd2c28b19 {
	struct FString Command; // 0x00(0x10)
	struct FString Desc; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct EngineSettings.*8518dffd3a
// Size: 0x20 (Inherited: 0x00)
struct F*8518dffd3a {
	struct FString Name; // 0x00(0x10)
	struct FStringClassReference GameMode; // 0x10(0x10)
};

