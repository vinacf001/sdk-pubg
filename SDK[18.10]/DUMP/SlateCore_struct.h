// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	None,
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	None,
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	None,
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	None,
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	None,
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	None,
	None,
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	None,
	None,
};

// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	None,
	None,
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	None,
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	None,
	None,
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	None,
	None,
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	None,
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	None,
	None,
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8 {
	None,
	None,
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	None,
	None,
};

// Enum SlateCore.*9cd7c3eb50
enum class *9cd7c3eb50 : uint8 {
	None,
	None,
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	None,
	None,
};

// Enum SlateCore.*ea1de78d62
enum class *ea1de78d62 : uint8 {
	None,
	None,
};

// Enum SlateCore.*41c6fa5845
enum class *41c6fa5845 : uint8 {
	None,
};

// Enum SlateCore.*3270985d6b
enum class *3270985d6b : uint8 {
	None,
};

// Enum SlateCore.*b8a8b7551d
enum class *b8a8b7551d : uint8 {
	None,
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	None,
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	None,
	None,
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
	enum class ESlateBrushImageType *b7ecaabadc; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct UObject* ResourceObject; // 0x68(0x08)
	struct FName ResourceName; // 0x70(0x08)
	bool *3a274f5578; // 0x78(0x01)
	bool bHasUObject; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FBox2D *eba45c7953; // 0x7c(0x14)
};

// ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x00)
struct FSlateColor {
	struct FLinearColor SpecifiedColor; // 0x00(0x10)
	enum class ESlateColorStylingMode ColorUseRule; // 0x10(0x01)
	char pad_11[0x17]; // 0x11(0x17)
};

// ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x00)
struct FMargin {
	float Left; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Right; // 0x08(0x04)
	float Bottom; // 0x0c(0x04)
};

// ScriptStruct SlateCore.Geometry
// Size: 0x34 (Inherited: 0x00)
struct FGeometry {
	char pad_0[0x34]; // 0x00(0x34)
};

// ScriptStruct SlateCore.*174cd056c7
// Size: 0x78 (Inherited: 0x20)
struct F*174cd056c7 : F*9ffd49d3c3 {
	char pad_20[0x58]; // 0x20(0x58)
};

// ScriptStruct SlateCore.*9ffd49d3c3
// Size: 0x20 (Inherited: 0x00)
struct F*9ffd49d3c3 {
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

// ScriptStruct SlateCore.*c57f627735
// Size: 0x718 (Inherited: 0x08)
struct F*c57f627735 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*14d43d58b2
// Size: 0x428 (Inherited: 0x08)
struct F*14d43d58b2 : FSlateWidgetStyle {
	struct F*f8636f39a1 ComboButtonStyle; // 0x08(0x3e0)
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

// ScriptStruct SlateCore.*f8636f39a1
// Size: 0x3e0 (Inherited: 0x08)
struct F*f8636f39a1 : FSlateWidgetStyle {
	struct F*7bb05e3554 ButtonStyle; // 0x08(0x2a8)
	struct FSlateBrush DownArrowImage; // 0x2b0(0x90)
	struct FSlateBrush MenuBorderBrush; // 0x340(0x90)
	struct FMargin MenuBorderPadding; // 0x3d0(0x10)
};

// ScriptStruct SlateCore.*7bb05e3554
// Size: 0x2a8 (Inherited: 0x08)
struct F*7bb05e3554 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*543a4cf75e
// Size: 0x248 (Inherited: 0x08)
struct F*543a4cf75e : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x98(0x90)
	struct FSlateBrush BackgroundImageComposing; // 0x128(0x90)
	struct FSlateBrush CaretImage; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.*7051df995c
// Size: 0x870 (Inherited: 0x08)
struct F*7051df995c : FSlateWidgetStyle {
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
	struct F*49a6b284e1 ScrollBarStyle; // 0x358(0x518)
};

// ScriptStruct SlateCore.*49a6b284e1
// Size: 0x518 (Inherited: 0x08)
struct F*49a6b284e1 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*7f8a9226a3
// Size: 0x208 (Inherited: 0x08)
struct F*7f8a9226a3 : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FVector2D ShadowOffset; // 0x98(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0xa0(0x10)
	struct FSlateColor *cccf2dd4df; // 0xb0(0x28)
	struct FLinearColor HighlightColor; // 0xd8(0x10)
	struct FSlateBrush HighlightShape; // 0xe8(0x90)
	struct FSlateBrush UnderlineBrush; // 0x178(0x90)
};

// ScriptStruct SlateCore.*905149747b
// Size: 0x310 (Inherited: 0x08)
struct F*905149747b : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush HoveredBackgroundBrush; // 0x98(0x90)
	struct FSlateBrush ActiveFillBrush; // 0x128(0x90)
	struct FSlateBrush InactiveFillBrush; // 0x1b8(0x90)
	struct FSlateBrush ArrowsImage; // 0x248(0x90)
	struct FSlateColor ForegroundColor; // 0x2d8(0x28)
	struct FMargin TextPadding; // 0x300(0x10)
};

// ScriptStruct SlateCore.*e56f4981f2
// Size: 0x28 (Inherited: 0x20)
struct F*e56f4981f2 : F*9ffd49d3c3 {
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.ControllerEvent
// Size: 0x40 (Inherited: 0x20)
struct FControllerEvent : F*9ffd49d3c3 {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.*7bb599ef25
// Size: 0x48 (Inherited: 0x40)
struct F*7bb599ef25 : FKeyEvent {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x40 (Inherited: 0x20)
struct FKeyEvent : F*9ffd49d3c3 {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FFocusEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.*46d690d4c5
// Size: 0x50 (Inherited: 0x20)
struct F*46d690d4c5 : F*9ffd49d3c3 {
	char pad_20[0x30]; // 0x20(0x30)
};

// ScriptStruct SlateCore.*e8eaad59bc
// Size: 0x28 (Inherited: 0x00)
struct F*e8eaad59bc {
	struct F*9713fb2b18 *acc9cc92dd; // 0x00(0x10)
	struct TArray<struct F*f88416620a> *25678d4f1e; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*f88416620a
// Size: 0x28 (Inherited: 0x00)
struct F*f88416620a {
	struct F*9713fb2b18 *9713fb2b18; // 0x00(0x10)
	struct TArray<struct FInt32Range> *58a1976fd0; // 0x10(0x10)
	float *f426e9e8d1; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SlateCore.*9713fb2b18
// Size: 0x10 (Inherited: 0x00)
struct F*9713fb2b18 {
	struct TArray<struct F*2528d59c5f> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.*2528d59c5f
// Size: 0x28 (Inherited: 0x00)
struct F*2528d59c5f {
	struct FName Name; // 0x00(0x08)
	struct F*7ecca053ea Font; // 0x08(0x20)
};

// ScriptStruct SlateCore.*7ecca053ea
// Size: 0x20 (Inherited: 0x00)
struct F*7ecca053ea {
	struct FString *dccc0daa7c; // 0x00(0x10)
	enum class EFontHinting *d59554fa31; // 0x10(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UObject* *ccf767687b; // 0x18(0x08)
};

// ScriptStruct SlateCore.*4a3f54f05f
// Size: 0x10f0 (Inherited: 0x08)
struct F*4a3f54f05f : FSlateWidgetStyle {
	struct F*7bb05e3554 MinimizeButtonStyle; // 0x08(0x2a8)
	struct F*7bb05e3554 MaximizeButtonStyle; // 0x2b0(0x2a8)
	struct F*7bb05e3554 RestoreButtonStyle; // 0x558(0x2a8)
	struct F*7bb05e3554 CloseButtonStyle; // 0x800(0x2a8)
	struct F*7f8a9226a3 TitleTextStyle; // 0xaa8(0x208)
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

// ScriptStruct SlateCore.*ef7fd35132
// Size: 0x128 (Inherited: 0x08)
struct F*ef7fd35132 : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.*894106b4cc
// Size: 0x248 (Inherited: 0x08)
struct F*894106b4cc : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
	struct FSlateBrush LeftShadowBrush; // 0x128(0x90)
	struct FSlateBrush RightShadowBrush; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.*81dbb82d99
// Size: 0x6e0 (Inherited: 0x08)
struct F*81dbb82d99 : FSlateWidgetStyle {
	struct F*7bb05e3554 *ddacf1384b; // 0x08(0x2a8)
	struct FSlateBrush *8ebb583424; // 0x2b0(0x90)
	struct FSlateBrush *41a2f99ed1; // 0x340(0x90)
	struct FSlateBrush *b8e210d722; // 0x3d0(0x90)
	struct FSlateBrush *447e73d408; // 0x460(0x90)
	struct FSlateBrush *56909b60c5; // 0x4f0(0x90)
	struct FSlateBrush ContentAreaBrush; // 0x580(0x90)
	struct FSlateBrush TabWellBrush; // 0x610(0x90)
	struct FMargin *6a126ccd8e; // 0x6a0(0x10)
	float OverlapWidth; // 0x6b0(0x04)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct FSlateColor FlashColor; // 0x6b8(0x28)
};

// ScriptStruct SlateCore.*e7a2a5619f
// Size: 0xc18 (Inherited: 0x08)
struct F*e7a2a5619f : FSlateWidgetStyle {
	struct F*387997007f *f1df073a51; // 0x08(0x518)
	struct F*387997007f *afe8dd6fb7; // 0x520(0x518)
	struct F*a3fa82c6bc *104eb155a8; // 0xa38(0x128)
	struct FSlateBrush BackgroundBrush; // 0xb60(0x90)
	struct FSlateColor ForegroundColor; // 0xbf0(0x28)
};

// ScriptStruct SlateCore.*a3fa82c6bc
// Size: 0x128 (Inherited: 0x08)
struct F*a3fa82c6bc : FSlateWidgetStyle {
	struct FSlateBrush HandleNormalBrush; // 0x08(0x90)
	struct FSlateBrush HandleHighlightBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.*387997007f
// Size: 0x518 (Inherited: 0x08)
struct F*387997007f : FSlateWidgetStyle {
	struct FSlateBrush *fcf1bb7bfb; // 0x08(0x90)
	struct FSlateBrush *570c7066ed; // 0x98(0x90)
	struct FSlateBrush *8f61dc244a; // 0x128(0x90)
	struct FSlateBrush *011c441045; // 0x1b8(0x90)
	struct FSlateBrush *8ebb583424; // 0x248(0x90)
	struct FSlateBrush *56909b60c5; // 0x2d8(0x90)
	struct FSlateBrush *3b17b3ace8; // 0x368(0x90)
	struct FSlateBrush *9de18917ae; // 0x3f8(0x90)
	struct FSlateBrush *7c55dac86f; // 0x488(0x90)
};

// ScriptStruct SlateCore.*7bbc3e9e8c
// Size: 0xa0 (Inherited: 0x08)
struct F*7bbc3e9e8c : FSlateWidgetStyle {
	struct FSlateBrush Image; // 0x08(0x90)
	int16 Baseline; // 0x98(0x02)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct SlateCore.*3ed124f4d1
// Size: 0x528 (Inherited: 0x08)
struct F*3ed124f4d1 : FSlateWidgetStyle {
	struct F*a4fb316a11 *a4fb316a11; // 0x08(0x250)
	struct FSlateBrush *9efc287e18; // 0x258(0x90)
	struct FSlateBrush *a5421b8a57; // 0x2e8(0x90)
	struct FSlateBrush *09047b5f05; // 0x378(0x90)
	struct FSlateBrush *a37004208d; // 0x408(0x90)
	struct FSlateBrush *6abf5de0de; // 0x498(0x90)
};

// ScriptStruct SlateCore.*a4fb316a11
// Size: 0x250 (Inherited: 0x08)
struct F*a4fb316a11 : FSlateWidgetStyle {
	struct FSlateBrush NormalBarImage; // 0x08(0x90)
	struct FSlateBrush DisabledBarImage; // 0x98(0x90)
	struct FSlateBrush NormalThumbImage; // 0x128(0x90)
	struct FSlateBrush DisabledThumbImage; // 0x1b8(0x90)
	float BarThickness; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// ScriptStruct SlateCore.*62d65c0ab7
// Size: 0xb38 (Inherited: 0x08)
struct F*62d65c0ab7 : FSlateWidgetStyle {
	struct F*7051df995c *c2f3ac6a2d; // 0x08(0x870)
	struct FSlateFontInfo *b054ac6576; // 0x878(0x68)
	struct FSlateBrush *fed4f9c4cf; // 0x8e0(0x90)
	struct FSlateBrush *2ac28bbea8; // 0x970(0x90)
	struct FSlateBrush *3ae34b1010; // 0xa00(0x90)
	struct FSlateBrush *0c63bd64b4; // 0xa90(0x90)
	struct FMargin *816f4782b0; // 0xb20(0x10)
	bool *f551e3f103; // 0xb30(0x01)
	char pad_B31[0x7]; // 0xb31(0x07)
};

// ScriptStruct SlateCore.*02f9ad486c
// Size: 0x130 (Inherited: 0x08)
struct F*02f9ad486c : FSlateWidgetStyle {
	struct FSlateBrush *a5963901a4; // 0x08(0x90)
	struct FSlateBrush *310ae3f479; // 0x98(0x90)
	float *6ef0d7deb8; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct SlateCore.*d246388505
// Size: 0x1b8 (Inherited: 0x08)
struct F*d246388505 : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; // 0x08(0x90)
	struct FSlateBrush FillImage; // 0x98(0x90)
	struct FSlateBrush MarqueeImage; // 0x128(0x90)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xa80 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct F*7051df995c EditableTextBoxStyle; // 0x08(0x870)
	struct F*7f8a9226a3 TextStyle; // 0x878(0x208)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x4c8 (Inherited: 0x08)
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct F*7bb05e3554 UnderlineStyle; // 0x08(0x2a8)
	struct F*7f8a9226a3 TextStyle; // 0x2b0(0x208)
	struct FMargin Padding; // 0x4b8(0x10)
};

// ScriptStruct SlateCore.*d23c67e4c5
// Size: 0x5e0 (Inherited: 0x08)
struct F*d23c67e4c5 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*fe7b463e2d
// Size: 0x28 (Inherited: 0x20)
struct F*fe7b463e2d : F*9ffd49d3c3 {
	char pad_20[0x8]; // 0x20(0x08)
};

