// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified,
	UseColor_Specified_Link,
	UseColor_Foreground,
	UseColor_Foreground_Subdued,
	UseColor_MAX,
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	Escape,
	Explicit,
	Wrap,
	Stop,
	Custom,
	Invalid,
	EUINavigationRule_MAX,
};

// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	Left,
	Right,
	Up,
	Down,
	Next,
	Previous,
	Num,
	Invalid,
	EUINavigation_MAX,
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	NoImage,
	FullColor,
	Linear,
	ESlateBrushImageType_MAX,
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	NoMirror,
	Horizontal,
	Vertical,
	Both,
	ESlateBrushMirrorType_MAX,
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	NoTile,
	Horizontal,
	Vertical,
	Both,
	ESlateBrushTileType_MAX,
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	NoDrawType,
	Box,
	Border,
	Image,
	ESlateBrushDrawType_MAX,
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked,
	Checked,
	Undetermined,
	ECheckBoxState_MAX,
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	OnKeyPress,
	OnNavigation,
	OnMouseClick,
	Direct,
	ESelectInfo_MAX,
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	WhenScrollingPossible,
	Always,
	Never,
	EConsumeMouseWheel_MAX,
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	Default,
	Auto,
	AutoLight,
	Monochrome,
	None,
	EFontHinting_MAX,
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	Default,
	OnEnter,
	OnUserMovedFocus,
	OnCleared,
	ETextCommit_MAX,
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	Auto,
	KerningOnly,
	FullShaping,
	ETextShapingMethod_MAX,
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8 {
	Metrics,
	BoundingBox,
	EFontLayoutMethod_MAX,
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	LazyLoad,
	Stream,
	Inline,
	EFontLoadingPolicy_MAX,
};

// Enum SlateCore.*dfe76ed8f9
enum class *dfe76ed8f9 : uint8 {
	*10db0934fc,
	*f53c3ba910,
	*b122440d04,
	*9447ffa90f,
	*dfe76ed8f9_MAX,
};

// Enum SlateCore.*c85c6a2720
enum class *c85c6a2720 : uint8 {
	*f7203ce27f,
	*7b49a99809,
	*987b05925b,
	*c85c6a2720_MAX,
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal,
	Orient_Vertical,
	Orient_MAX,
};

// Enum SlateCore.*d547f33b80
enum class *d547f33b80 : uint8 {
	*3fbe2dcb10,
	*bf5ba98bd7,
	*03090f6c3b,
	*e04e82f183,
	*f68e6071da,
	*83a9d9e459,
	*d81ce0dd98,
	*85f745b56d,
	*691d2f10e8,
	*511bb9dcd6,
	*bf9cad747d,
	*174a8a4c65,
	*0e363df046,
	*d547f33b80_MAX,
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8 {
	VAlign_Fill,
	VAlign_Top,
	VAlign_Center,
	VAlign_Bottom,
	VAlign_MAX,
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8 {
	HAlign_Fill,
	HAlign_Left,
	HAlign_Center,
	HAlign_Right,
	HAlign_MAX,
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	Keyboard,
	Controller,
	User,
	ENavigationGenesis_MAX,
};

// Enum SlateCore.*12c36e45fe
enum class *12c36e45fe : uint8 {
	*67d85c36d0,
	*cee05e34a2,
	*f7f7ff104b,
	*12c36e45fe_MAX,
};

// Enum SlateCore.*2c9c84d28f
enum class *2c9c84d28f : uint8 {
	*e740128d18,
	*5c6e5b973c,
	*46544f1cac,
	*f74f694296,
	*2c9c84d28f_MAX,
};

// Enum SlateCore.*9bc5484321
enum class *9bc5484321 : uint8 {
	*e740128d18,
	*db671c80a9,
	*dbb1365985,
	*9bc5484321_MAX,
};

// Enum SlateCore.*9442f73b57
enum class *9442f73b57 : uint8 {
	*e740128d18,
	*1ff46b4d4f,
	*1556e8b127,
	*3a2417c4c6,
	*fee59902a3,
	*9442f73b57_MAX,
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	CheckBox,
	ToggleButton,
	ESlateCheckBoxType_MAX,
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	Mouse,
	Navigation,
	SetDirectly,
	Cleared,
	OtherWidgetLostFocus,
	WindowActivate,
	EFocusCause_MAX,
};

// ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x00)
struct FSlateColor {
	struct FLinearColor SpecifiedColor; // 0x00(0x10)
	enum class ESlateColorStylingMode ColorUseRule; // 0x10(0x01)
	char pad_11[0x17]; // 0x11(0x17)
};

// ScriptStruct SlateCore.Geometry
// Size: 0x34 (Inherited: 0x00)
struct FGeometry {
	char pad_0[0x34]; // 0x00(0x34)
};

// ScriptStruct SlateCore.SlateBrush
// Size: 0x90 (Inherited: 0x00)
struct FSlateBrush {
	char pad_0[0x8]; // 0x00(0x08)
	struct FVector2D ImageSize; // 0x08(0x08)
	enum class ESlateBrushDrawType DrawAs; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FMargin Margin; // 0x14(0x10)
	struct FLinearColor Tint; // 0x24(0x10)
	char pad_34[0x4]; // 0x34(0x04)
	struct FSlateColor TintColor; // 0x38(0x28)
	enum class ESlateBrushTileType Tiling; // 0x60(0x01)
	enum class ESlateBrushMirrorType Mirroring; // 0x61(0x01)
	enum class ESlateBrushImageType *dfa566706f; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct UObject* ResourceObject; // 0x68(0x08)
	struct FName ResourceName; // 0x70(0x08)
	bool *971a7b0053; // 0x78(0x01)
	bool bHasUObject; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FBox2D *bac11c84de; // 0x7c(0x14)
};

// ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x00)
struct FMargin {
	float Left; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Right; // 0x08(0x04)
	float Bottom; // 0x0c(0x04)
};

// ScriptStruct SlateCore.*a3e4749da2
// Size: 0x78 (Inherited: 0x20)
struct F*a3e4749da2 : F*163dc5d8c3 {
	char pad_20[0x58]; // 0x20(0x58)
};

// ScriptStruct SlateCore.*163dc5d8c3
// Size: 0x20 (Inherited: 0x00)
struct F*163dc5d8c3 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct SlateCore.SlateFontInfo
// Size: 0x68 (Inherited: 0x00)
struct FSlateFontInfo {
	struct UObject* FontObject; // 0x00(0x08)
	struct UObject* FontMaterial; // 0x08(0x08)
	struct FFontOutlineSettings OutlineSettings; // 0x10(0x28)
	char pad_38[0x10]; // 0x38(0x10)
	struct FName TypefaceFontName; // 0x48(0x08)
	int32 Size; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FName FontName; // 0x58(0x08)
	enum class EFontHinting Hinting; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x28 (Inherited: 0x00)
struct FFontOutlineSettings {
	int32 OutlineSize; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* OutlineMaterial; // 0x08(0x08)
	struct FLinearColor OutlineColor; // 0x10(0x10)
	bool bSeparateFillAlpha; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct SlateCore.*e7a296ec72
// Size: 0x718 (Inherited: 0x08)
struct F*e7a296ec72 : FSlateWidgetStyle {
	struct FSlateBrush SelectorFocusedBrush; // 0x08(0x90)
	struct FSlateBrush ActiveHoveredBrush; // 0x98(0x90)
	struct FSlateBrush ActiveBrush; // 0x128(0x90)
	struct FSlateBrush InactiveHoveredBrush; // 0x1b8(0x90)
	struct FSlateBrush InactiveBrush; // 0x248(0x90)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2d8(0x90)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x368(0x90)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x3f8(0x90)
	struct FSlateBrush OddRowBackgroundBrush; // 0x488(0x90)
	struct FSlateColor TextColor; // 0x518(0x28)
	struct FSlateColor SelectedTextColor; // 0x540(0x28)
	struct FSlateBrush DropIndicator_Above; // 0x568(0x90)
	struct FSlateBrush DropIndicator_Onto; // 0x5f8(0x90)
	struct FSlateBrush DropIndicator_Below; // 0x688(0x90)
};

// ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x08 (Inherited: 0x00)
struct FSlateWidgetStyle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.*bd10a39d4e
// Size: 0x428 (Inherited: 0x08)
struct F*bd10a39d4e : FSlateWidgetStyle {
	struct F*9d51d380eb ComboButtonStyle; // 0x08(0x3e0)
	struct FSlateSound PressedSlateSound; // 0x3e8(0x18)
	struct FSlateSound SelectionChangeSlateSound; // 0x400(0x18)
	struct FName PressedSound; // 0x418(0x08)
	struct FName SelectionChangeSound; // 0x420(0x08)
};

// ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x00)
struct FSlateSound {
	struct UObject* ResourceObject; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct SlateCore.*9d51d380eb
// Size: 0x3e0 (Inherited: 0x08)
struct F*9d51d380eb : FSlateWidgetStyle {
	struct F*9ec348ba05 ButtonStyle; // 0x08(0x2a8)
	struct FSlateBrush DownArrowImage; // 0x2b0(0x90)
	struct FSlateBrush MenuBorderBrush; // 0x340(0x90)
	struct FMargin MenuBorderPadding; // 0x3d0(0x10)
};

// ScriptStruct SlateCore.*9ec348ba05
// Size: 0x2a8 (Inherited: 0x08)
struct F*9ec348ba05 : FSlateWidgetStyle {
	struct FSlateBrush Normal; // 0x08(0x90)
	struct FSlateBrush Hovered; // 0x98(0x90)
	struct FSlateBrush Pressed; // 0x128(0x90)
	struct FSlateBrush Disabled; // 0x1b8(0x90)
	struct FMargin NormalPadding; // 0x248(0x10)
	struct FMargin PressedPadding; // 0x258(0x10)
	struct FSlateSound PressedSlateSound; // 0x268(0x18)
	struct FSlateSound HoveredSlateSound; // 0x280(0x18)
	struct FName PressedSound; // 0x298(0x08)
	struct FName HoveredSound; // 0x2a0(0x08)
};

// ScriptStruct SlateCore.*05b420497f
// Size: 0x248 (Inherited: 0x08)
struct F*05b420497f : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x98(0x90)
	struct FSlateBrush BackgroundImageComposing; // 0x128(0x90)
	struct FSlateBrush CaretImage; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.*fcc5c4062b
// Size: 0x870 (Inherited: 0x08)
struct F*fcc5c4062b : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImageNormal; // 0x08(0x90)
	struct FSlateBrush BackgroundImageHovered; // 0x98(0x90)
	struct FSlateBrush BackgroundImageFocused; // 0x128(0x90)
	struct FSlateBrush BackgroundImageReadOnly; // 0x1b8(0x90)
	struct FMargin Padding; // 0x248(0x10)
	struct FSlateFontInfo Font; // 0x258(0x68)
	struct FSlateColor ForegroundColor; // 0x2c0(0x28)
	struct FSlateColor BackgroundColor; // 0x2e8(0x28)
	struct FSlateColor ReadOnlyForegroundColor; // 0x310(0x28)
	struct FMargin HScrollBarPadding; // 0x338(0x10)
	struct FMargin VScrollBarPadding; // 0x348(0x10)
	struct F*c846317fd2 ScrollBarStyle; // 0x358(0x518)
};

// ScriptStruct SlateCore.*c846317fd2
// Size: 0x518 (Inherited: 0x08)
struct F*c846317fd2 : FSlateWidgetStyle {
	struct FSlateBrush HorizontalBackgroundImage; // 0x08(0x90)
	struct FSlateBrush VerticalBackgroundImage; // 0x98(0x90)
	struct FSlateBrush VerticalTopSlotImage; // 0x128(0x90)
	struct FSlateBrush HorizontalTopSlotImage; // 0x1b8(0x90)
	struct FSlateBrush VerticalBottomSlotImage; // 0x248(0x90)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x2d8(0x90)
	struct FSlateBrush NormalThumbImage; // 0x368(0x90)
	struct FSlateBrush HoveredThumbImage; // 0x3f8(0x90)
	struct FSlateBrush DraggedThumbImage; // 0x488(0x90)
};

// ScriptStruct SlateCore.*e84d4b475c
// Size: 0x208 (Inherited: 0x08)
struct F*e84d4b475c : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FVector2D ShadowOffset; // 0x98(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0xa0(0x10)
	struct FSlateColor *64b1ad3b15; // 0xb0(0x28)
	struct FLinearColor HighlightColor; // 0xd8(0x10)
	struct FSlateBrush HighlightShape; // 0xe8(0x90)
	struct FSlateBrush UnderlineBrush; // 0x178(0x90)
};

// ScriptStruct SlateCore.*abe8d1c913
// Size: 0x310 (Inherited: 0x08)
struct F*abe8d1c913 : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush HoveredBackgroundBrush; // 0x98(0x90)
	struct FSlateBrush ActiveFillBrush; // 0x128(0x90)
	struct FSlateBrush InactiveFillBrush; // 0x1b8(0x90)
	struct FSlateBrush ArrowsImage; // 0x248(0x90)
	struct FSlateColor ForegroundColor; // 0x2d8(0x28)
	struct FMargin TextPadding; // 0x300(0x10)
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FFocusEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.*2e9df8f42a
// Size: 0x50 (Inherited: 0x20)
struct F*2e9df8f42a : F*163dc5d8c3 {
	char pad_20[0x30]; // 0x20(0x30)
};

// ScriptStruct SlateCore.*8a4c6e0afe
// Size: 0x48 (Inherited: 0x40)
struct F*8a4c6e0afe : FKeyEvent {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x40 (Inherited: 0x20)
struct FKeyEvent : F*163dc5d8c3 {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.ControllerEvent
// Size: 0x40 (Inherited: 0x20)
struct FControllerEvent : F*163dc5d8c3 {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.*52af343317
// Size: 0x28 (Inherited: 0x20)
struct F*52af343317 : F*163dc5d8c3 {
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*734aded0ea
// Size: 0x28 (Inherited: 0x00)
struct F*734aded0ea {
	struct F*0909b68c77 *179a306098; // 0x00(0x10)
	struct TArray<struct F*34183ce816> *19c8113520; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*34183ce816
// Size: 0x28 (Inherited: 0x00)
struct F*34183ce816 {
	struct F*0909b68c77 *0909b68c77; // 0x00(0x10)
	struct TArray<struct FInt32Range> *362db7b3cb; // 0x10(0x10)
	float *daf445f51e; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SlateCore.*0909b68c77
// Size: 0x10 (Inherited: 0x00)
struct F*0909b68c77 {
	struct TArray<struct F*7413f3f9cf> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.*7413f3f9cf
// Size: 0x28 (Inherited: 0x00)
struct F*7413f3f9cf {
	struct FName Name; // 0x00(0x08)
	struct F*6fa6213994 Font; // 0x08(0x20)
};

// ScriptStruct SlateCore.*6fa6213994
// Size: 0x20 (Inherited: 0x00)
struct F*6fa6213994 {
	struct FString *558870592d; // 0x00(0x10)
	enum class EFontHinting *3957d5163f; // 0x10(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UObject* *40c6a20931; // 0x18(0x08)
};

// ScriptStruct SlateCore.*e3a83c8b67
// Size: 0x10f0 (Inherited: 0x08)
struct F*e3a83c8b67 : FSlateWidgetStyle {
	struct F*9ec348ba05 MinimizeButtonStyle; // 0x08(0x2a8)
	struct F*9ec348ba05 MaximizeButtonStyle; // 0x2b0(0x2a8)
	struct F*9ec348ba05 RestoreButtonStyle; // 0x558(0x2a8)
	struct F*9ec348ba05 CloseButtonStyle; // 0x800(0x2a8)
	struct F*e84d4b475c TitleTextStyle; // 0xaa8(0x208)
	struct FSlateBrush ActiveTitleBrush; // 0xcb0(0x90)
	struct FSlateBrush InactiveTitleBrush; // 0xd40(0x90)
	struct FSlateBrush FlashTitleBrush; // 0xdd0(0x90)
	struct FSlateColor BackgroundColor; // 0xe60(0x28)
	struct FSlateBrush OutlineBrush; // 0xe88(0x90)
	struct FSlateColor OutlineColor; // 0xf18(0x28)
	struct FSlateBrush BorderBrush; // 0xf40(0x90)
	struct FSlateBrush BackgroundBrush; // 0xfd0(0x90)
	struct FSlateBrush ChildBackgroundBrush; // 0x1060(0x90)
};

// ScriptStruct SlateCore.*f3b1de9a08
// Size: 0x128 (Inherited: 0x08)
struct F*f3b1de9a08 : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.*8d916b2b30
// Size: 0x248 (Inherited: 0x08)
struct F*8d916b2b30 : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
	struct FSlateBrush LeftShadowBrush; // 0x128(0x90)
	struct FSlateBrush RightShadowBrush; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.*664149a012
// Size: 0x6e0 (Inherited: 0x08)
struct F*664149a012 : FSlateWidgetStyle {
	struct F*9ec348ba05 *959df5df74; // 0x08(0x2a8)
	struct FSlateBrush *253eb567ef; // 0x2b0(0x90)
	struct FSlateBrush *1c64312c7d; // 0x340(0x90)
	struct FSlateBrush *425dcec1e1; // 0x3d0(0x90)
	struct FSlateBrush *29ac50be4d; // 0x460(0x90)
	struct FSlateBrush *73d1f20228; // 0x4f0(0x90)
	struct FSlateBrush ContentAreaBrush; // 0x580(0x90)
	struct FSlateBrush TabWellBrush; // 0x610(0x90)
	struct FMargin *c165bc7492; // 0x6a0(0x10)
	float OverlapWidth; // 0x6b0(0x04)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct FSlateColor FlashColor; // 0x6b8(0x28)
};

// ScriptStruct SlateCore.*00835ab59e
// Size: 0xc18 (Inherited: 0x08)
struct F*00835ab59e : FSlateWidgetStyle {
	struct F*ce336be8a5 *8b6e133849; // 0x08(0x518)
	struct F*ce336be8a5 *e1c7f555ad; // 0x520(0x518)
	struct F*38b774893f *b63eb792d5; // 0xa38(0x128)
	struct FSlateBrush BackgroundBrush; // 0xb60(0x90)
	struct FSlateColor ForegroundColor; // 0xbf0(0x28)
};

// ScriptStruct SlateCore.*38b774893f
// Size: 0x128 (Inherited: 0x08)
struct F*38b774893f : FSlateWidgetStyle {
	struct FSlateBrush HandleNormalBrush; // 0x08(0x90)
	struct FSlateBrush HandleHighlightBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.*ce336be8a5
// Size: 0x518 (Inherited: 0x08)
struct F*ce336be8a5 : FSlateWidgetStyle {
	struct FSlateBrush *615ffc97f5; // 0x08(0x90)
	struct FSlateBrush *66f8cefc96; // 0x98(0x90)
	struct FSlateBrush *702d197d45; // 0x128(0x90)
	struct FSlateBrush *5ee54cfd84; // 0x1b8(0x90)
	struct FSlateBrush *253eb567ef; // 0x248(0x90)
	struct FSlateBrush *73d1f20228; // 0x2d8(0x90)
	struct FSlateBrush *3d9f0354e3; // 0x368(0x90)
	struct FSlateBrush *1846d19028; // 0x3f8(0x90)
	struct FSlateBrush *247c8f2e21; // 0x488(0x90)
};

// ScriptStruct SlateCore.*8fb126a684
// Size: 0xa0 (Inherited: 0x08)
struct F*8fb126a684 : FSlateWidgetStyle {
	struct FSlateBrush Image; // 0x08(0x90)
	int16 Baseline; // 0x98(0x02)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct SlateCore.*d8bd020343
// Size: 0x528 (Inherited: 0x08)
struct F*d8bd020343 : FSlateWidgetStyle {
	struct F*f46c09a4c7 *f46c09a4c7; // 0x08(0x250)
	struct FSlateBrush *0dbc23dc63; // 0x258(0x90)
	struct FSlateBrush *dc1d99f561; // 0x2e8(0x90)
	struct FSlateBrush *be22bb0d2c; // 0x378(0x90)
	struct FSlateBrush *e585e500c4; // 0x408(0x90)
	struct FSlateBrush *2992ca7321; // 0x498(0x90)
};

// ScriptStruct SlateCore.*f46c09a4c7
// Size: 0x250 (Inherited: 0x08)
struct F*f46c09a4c7 : FSlateWidgetStyle {
	struct FSlateBrush NormalBarImage; // 0x08(0x90)
	struct FSlateBrush DisabledBarImage; // 0x98(0x90)
	struct FSlateBrush NormalThumbImage; // 0x128(0x90)
	struct FSlateBrush DisabledThumbImage; // 0x1b8(0x90)
	float BarThickness; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// ScriptStruct SlateCore.*3cae3ec126
// Size: 0xb38 (Inherited: 0x08)
struct F*3cae3ec126 : FSlateWidgetStyle {
	struct F*fcc5c4062b *913766c848; // 0x08(0x870)
	struct FSlateFontInfo *11760fa552; // 0x878(0x68)
	struct FSlateBrush *576a40a41b; // 0x8e0(0x90)
	struct FSlateBrush *49066a1a06; // 0x970(0x90)
	struct FSlateBrush *6fedcd7bba; // 0xa00(0x90)
	struct FSlateBrush *35e8ae044e; // 0xa90(0x90)
	struct FMargin *334b53f3fb; // 0xb20(0x10)
	bool *acfc012fc9; // 0xb30(0x01)
	char pad_B31[0x7]; // 0xb31(0x07)
};

// ScriptStruct SlateCore.*83d892dd18
// Size: 0x130 (Inherited: 0x08)
struct F*83d892dd18 : FSlateWidgetStyle {
	struct FSlateBrush *ad6f74f405; // 0x08(0x90)
	struct FSlateBrush *64c7e7c851; // 0x98(0x90)
	float *730a2812be; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct SlateCore.*3de0585264
// Size: 0x1b8 (Inherited: 0x08)
struct F*3de0585264 : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; // 0x08(0x90)
	struct FSlateBrush FillImage; // 0x98(0x90)
	struct FSlateBrush MarqueeImage; // 0x128(0x90)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xa80 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct F*fcc5c4062b EditableTextBoxStyle; // 0x08(0x870)
	struct F*e84d4b475c TextStyle; // 0x878(0x208)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x4c8 (Inherited: 0x08)
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct F*9ec348ba05 UnderlineStyle; // 0x08(0x2a8)
	struct F*e84d4b475c TextStyle; // 0x2b0(0x208)
	struct FMargin Padding; // 0x4b8(0x10)
};

// ScriptStruct SlateCore.*1a5b392735
// Size: 0x5e0 (Inherited: 0x08)
struct F*1a5b392735 : FSlateWidgetStyle {
	enum class ESlateCheckBoxType CheckBoxType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSlateBrush UncheckedImage; // 0x10(0x90)
	struct FSlateBrush UncheckedHoveredImage; // 0xa0(0x90)
	struct FSlateBrush UncheckedPressedImage; // 0x130(0x90)
	struct FSlateBrush CheckedImage; // 0x1c0(0x90)
	struct FSlateBrush CheckedHoveredImage; // 0x250(0x90)
	struct FSlateBrush CheckedPressedImage; // 0x2e0(0x90)
	struct FSlateBrush UndeterminedImage; // 0x370(0x90)
	struct FSlateBrush UndeterminedHoveredImage; // 0x400(0x90)
	struct FSlateBrush UndeterminedPressedImage; // 0x490(0x90)
	struct FMargin Padding; // 0x520(0x10)
	struct FSlateColor ForegroundColor; // 0x530(0x28)
	struct FSlateColor BorderBackgroundColor; // 0x558(0x28)
	struct FSlateSound CheckedSlateSound; // 0x580(0x18)
	struct FSlateSound UncheckedSlateSound; // 0x598(0x18)
	struct FSlateSound HoveredSlateSound; // 0x5b0(0x18)
	struct FName CheckedSound; // 0x5c8(0x08)
	struct FName UncheckedSound; // 0x5d0(0x08)
	struct FName HoveredSound; // 0x5d8(0x08)
};

// ScriptStruct SlateCore.*a4e55cb2ea
// Size: 0x28 (Inherited: 0x20)
struct F*a4e55cb2ea : F*163dc5d8c3 {
	char pad_20[0x8]; // 0x20(0x08)
};

