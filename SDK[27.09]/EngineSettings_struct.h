// Enum EngineSettings.*304ec8f344
enum class *304ec8f344 : uint8 {
	*81148073f9,
	*f3e72b7512,
	*0858592f7c,
	*304ec8f344_MAX,
};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8 {
	Horizontal,
	Vertical,
	ETwoPlayerSplitScreenType_MAX,
};

// ScriptStruct EngineSettings.*5d518ad059
// Size: 0x28 (Inherited: 0x00)
struct F*5d518ad059 {
	struct FString Command; // 0x00(0x10)
	struct FString Desc; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct EngineSettings.*b48af21ceb
// Size: 0x20 (Inherited: 0x00)
struct F*b48af21ceb {
	struct FString Name; // 0x00(0x10)
	struct FStringClassReference GameMode; // 0x10(0x10)
};

