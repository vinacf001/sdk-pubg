// Enum EngineSettings.*91b9b8ac44
enum class *91b9b8ac44 : uint8 {
	*2ce002e7da,
	*49941a410a,
	*bc6a89b1df,
	*91b9b8ac44_MAX,
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	Horizontal,
	Vertical,
	ETwoPlayerSplitScreenType_MAX,
};

// ScriptStruct EngineSettings.*61eef2a2bb
// Size: 0x28 (Inherited: 0x00)
struct F*61eef2a2bb {
	struct FString Command; // 0x00(0x10)
	struct FString Desc; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct EngineSettings.*bb20d2c770
// Size: 0x20 (Inherited: 0x00)
struct F*bb20d2c770 {
	struct FString Name; // 0x00(0x10)
	struct FStringClassReference GameMode; // 0x10(0x10)
};

