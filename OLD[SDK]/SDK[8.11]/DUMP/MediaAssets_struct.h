// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8 {
	Audio,
	Binary,
	Caption,
	Script,
	Subtitle,
	Text,
	Video,
	EMediaPlayerTrack_MAX,
};

// ScriptStruct MediaAssets.*fadf3b7185
// Size: 0x28 (Inherited: 0x00)
struct F*fadf3b7185 {
	bool *24dc636673; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Position; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Text; // 0x10(0x18)
};

