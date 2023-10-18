// Enum EngineSettings.*5cfaeea139
enum class *5cfaeea139 : uint8 {
	*0348eb3bd3,
	*79c371f946,
	*0186a37376,
	*5cfaeea139_MAX,
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	Horizontal,
	Vertical,
	ETwoPlayerSplitScreenType_MAX,
};

// ScriptStruct EngineSettings.*d52791d8ba
// Size: 0x28 (Inherited: 0x00)
struct F*d52791d8ba {
	struct FString Command; // 0x00(0x10)
	struct FString Desc; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct EngineSettings.*c8a73dc119
// Size: 0x20 (Inherited: 0x00)
struct F*c8a73dc119 {
	struct FString Name; // 0x00(0x10)
	struct FStringClassReference GameMode; // 0x10(0x10)
};

