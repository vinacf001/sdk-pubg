// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8 {
	Auto,
	LeftToRight,
	RightToLeft,
	ETextFlowDirection_MAX,
};

// Enum Slate.*00a79681fd
enum class *00a79681fd : uint8 {
	*9770f696bd,
	*9d15618060,
	*86b23c860b,
	*00a79681fd_MAX,
};

// Enum Slate.ETextJustify
enum class ETextJustify : uint8 {
	Left,
	Center,
	Right,
	ETextJustify_MAX,
};

// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8 {
	List,
	Tile,
	Tree,
	ETableViewMode_MAX,
};

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8 {
	None,
	Single,
	SingleToggle,
	Multi,
	ESelectionMode_MAX,
};

// Enum Slate.EStretch
enum class EStretch : uint8 {
	None,
	Fill,
	ScaleToFit,
	ScaleToFitX,
	ScaleToFitY,
	ScaleToFill,
	ScaleBySafeZone,
	UserSpecified,
	EStretch_MAX,
};

// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8 {
	Both,
	DownOnly,
	UpOnly,
	EStretchDirection_MAX,
};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8 {
	LeftToRight,
	RightToLeft,
	FillFromCenter,
	TopToBottom,
	BottomToTop,
	EProgressBarFillType_MAX,
};

// ScriptStruct Slate.*83f86360e2
// Size: 0x20 (Inherited: 0x00)
struct F*83f86360e2 {
	struct FKey Key; // 0x00(0x18)
	char bShift : 1; // 0x18(0x01)
	char bCtrl : 1; // 0x18(0x01)
	char bAlt : 1; // 0x18(0x01)
	char bCmd : 1; // 0x18(0x01)
	char pad_18_4 : 4; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Slate.Anchors
// Size: 0x10 (Inherited: 0x00)
struct FAnchors {
	struct FVector2D Minimum; // 0x00(0x08)
	struct FVector2D Maximum; // 0x08(0x08)
};

