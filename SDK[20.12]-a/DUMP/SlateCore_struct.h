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

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified,
	UseColor_Specified_Link,
	UseColor_Foreground,
	UseColor_Foreground_Subdued,
	UseColor_MAX,
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

// Enum SlateCore.*011e3b197a
enum class *011e3b197a : uint8 {
	*048dfe0dd1,
	*7ea36f2e00,
	*6253ed83fb,
	*1dfdbefc7c,
	*011e3b197a_MAX,
};

// Enum SlateCore.*0352ae26ba
enum class *0352ae26ba : uint8 {
	*4d9e853650,
	*22e971fdbf,
	*f8a7518106,
	*0352ae26ba_MAX,
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal,
	Orient_Vertical,
	Orient_MAX,
};

// Enum SlateCore.*dd1ae0e7de
enum class *dd1ae0e7de : uint8 {
	*c7a796420d,
	*9968060ba1,
	*cb688e6482,
	*9f82f3445d,
	*75d03bd33c,
	*2afa061a51,
	*5f920edf25,
	*a11d4e6de8,
	*59b51c8b4d,
	*ac1680f647,
	*4ac336d8cb,
	*d8b08929d0,
	*b4121fa70e,
	*dd1ae0e7de_MAX,
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

// Enum SlateCore.*ad1c291fac
enum class *ad1c291fac : uint8 {
	*2555935c6b,
	*03a0c2cab0,
	*b931c38b1e,
	*ad1c291fac_MAX,
};

// Enum SlateCore.*702ac567ff
enum class *702ac567ff : uint8 {
	*80430ee8c8,
	*82aa88e04f,
	*32f9ae337b,
	*3eec94a108,
	*702ac567ff_MAX,
};

// Enum SlateCore.*d7b0178695
enum class *d7b0178695 : uint8 {
	*80430ee8c8,
	*0a819e3a4f,
	*f86b5ef54e,
	*d7b0178695_MAX,
};

// Enum SlateCore.*e02042fc11
enum class *e02042fc11 : uint8 {
	*80430ee8c8,
	*a8145ba7b0,
	*6cdd7f578a,
	*345e9d830a,
	*f4b33bf59d,
	*e02042fc11_MAX,
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

// ScriptStruct SlateCore.*20816e90ed
// Size: 0x78 (Inherited: 0x20)
struct F*20816e90ed : F*0c877d93bf {
	char pad_20[0x58]; // 0x20(0x58)
};

// ScriptStruct SlateCore.*0c877d93bf
// Size: 0x20 (Inherited: 0x00)
struct F*0c877d93bf {
	char pad_0[0x20]; // 0x00(0x20)
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
	enum class ESlateBrushImageType *aba2e3a778; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct UObject* ResourceObject; // 0x68(0x08)
	struct FName ResourceName; // 0x70(0x08)
	bool *453f94fec5; // 0x78(0x01)
	bool bHasUObject; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FBox2D *089c8c654f; // 0x7c(0x14)
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

// ScriptStruct SlateCore.*40cf746cc9
// Size: 0x718 (Inherited: 0x08)
struct F*40cf746cc9 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*0e1269d5fe
// Size: 0x428 (Inherited: 0x08)
struct F*0e1269d5fe : FSlateWidgetStyle {
	struct F*07432774cf ComboButtonStyle; // 0x08(0x3e0)
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

// ScriptStruct SlateCore.*07432774cf
// Size: 0x3e0 (Inherited: 0x08)
struct F*07432774cf : FSlateWidgetStyle {
	struct F*23cea9d391 ButtonStyle; // 0x08(0x2a8)
	struct FSlateBrush DownArrowImage; // 0x2b0(0x90)
	struct FSlateBrush MenuBorderBrush; // 0x340(0x90)
	struct FMargin MenuBorderPadding; // 0x3d0(0x10)
};

// ScriptStruct SlateCore.*23cea9d391
// Size: 0x2a8 (Inherited: 0x08)
struct F*23cea9d391 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*44fef67a56
// Size: 0x248 (Inherited: 0x08)
struct F*44fef67a56 : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x98(0x90)
	struct FSlateBrush BackgroundImageComposing; // 0x128(0x90)
	struct FSlateBrush CaretImage; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.*0704742c93
// Size: 0x870 (Inherited: 0x08)
struct F*0704742c93 : FSlateWidgetStyle {
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
	struct F*4cc977c5e0 ScrollBarStyle; // 0x358(0x518)
};

// ScriptStruct SlateCore.*4cc977c5e0
// Size: 0x518 (Inherited: 0x08)
struct F*4cc977c5e0 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*b8dc2e8406
// Size: 0x208 (Inherited: 0x08)
struct F*b8dc2e8406 : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FVector2D ShadowOffset; // 0x98(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0xa0(0x10)
	struct FSlateColor *26a6661283; // 0xb0(0x28)
	struct FLinearColor HighlightColor; // 0xd8(0x10)
	struct FSlateBrush HighlightShape; // 0xe8(0x90)
	struct FSlateBrush UnderlineBrush; // 0x178(0x90)
};

// ScriptStruct SlateCore.*1fe5209940
// Size: 0x310 (Inherited: 0x08)
struct F*1fe5209940 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.ControllerEvent
// Size: 0x40 (Inherited: 0x20)
struct FControllerEvent : F*0c877d93bf {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x40 (Inherited: 0x20)
struct FKeyEvent : F*0c877d93bf {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.*5fede17d87
// Size: 0x50 (Inherited: 0x20)
struct F*5fede17d87 : F*0c877d93bf {
	char pad_20[0x30]; // 0x20(0x30)
};

// ScriptStruct SlateCore.*03c4e86ae9
// Size: 0x48 (Inherited: 0x40)
struct F*03c4e86ae9 : FKeyEvent {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct SlateCore.*3a3a4b6d1c
// Size: 0x28 (Inherited: 0x20)
struct F*3a3a4b6d1c : F*0c877d93bf {
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*1f707e25c8
// Size: 0x28 (Inherited: 0x00)
struct F*1f707e25c8 {
	struct F*a3af335561 *33c8f25892; // 0x00(0x10)
	struct TArray<struct F*bb54022db0> *78dd9fed25; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*bb54022db0
// Size: 0x28 (Inherited: 0x00)
struct F*bb54022db0 {
	struct F*a3af335561 *a3af335561; // 0x00(0x10)
	struct TArray<struct FInt32Range> *5905b47319; // 0x10(0x10)
	float *6f29a5839b; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SlateCore.*a3af335561
// Size: 0x10 (Inherited: 0x00)
struct F*a3af335561 {
	struct TArray<struct F*e6d06c3221> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.*e6d06c3221
// Size: 0x28 (Inherited: 0x00)
struct F*e6d06c3221 {
	struct FName Name; // 0x00(0x08)
	struct F*9948fbcb6e Font; // 0x08(0x20)
};

// ScriptStruct SlateCore.*9948fbcb6e
// Size: 0x20 (Inherited: 0x00)
struct F*9948fbcb6e {
	struct FString *a00c80573b; // 0x00(0x10)
	enum class EFontHinting *861369eac8; // 0x10(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UObject* *48d8d72608; // 0x18(0x08)
};

// ScriptStruct SlateCore.*ba55ebe236
// Size: 0x10f0 (Inherited: 0x08)
struct F*ba55ebe236 : FSlateWidgetStyle {
	struct F*23cea9d391 MinimizeButtonStyle; // 0x08(0x2a8)
	struct F*23cea9d391 MaximizeButtonStyle; // 0x2b0(0x2a8)
	struct F*23cea9d391 RestoreButtonStyle; // 0x558(0x2a8)
	struct F*23cea9d391 CloseButtonStyle; // 0x800(0x2a8)
	struct F*b8dc2e8406 TitleTextStyle; // 0xaa8(0x208)
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

// ScriptStruct SlateCore.*76e5e7a02e
// Size: 0x128 (Inherited: 0x08)
struct F*76e5e7a02e : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.*a3b1d90177
// Size: 0x248 (Inherited: 0x08)
struct F*a3b1d90177 : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
	struct FSlateBrush LeftShadowBrush; // 0x128(0x90)
	struct FSlateBrush RightShadowBrush; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.*932c41138d
// Size: 0x6e0 (Inherited: 0x08)
struct F*932c41138d : FSlateWidgetStyle {
	struct F*23cea9d391 *096be29e2f; // 0x08(0x2a8)
	struct FSlateBrush *12d7c61604; // 0x2b0(0x90)
	struct FSlateBrush *7f3e957a77; // 0x340(0x90)
	struct FSlateBrush *ce8bd75496; // 0x3d0(0x90)
	struct FSlateBrush *e86e6c6c44; // 0x460(0x90)
	struct FSlateBrush *0826614482; // 0x4f0(0x90)
	struct FSlateBrush ContentAreaBrush; // 0x580(0x90)
	struct FSlateBrush TabWellBrush; // 0x610(0x90)
	struct FMargin *10e8e84f1e; // 0x6a0(0x10)
	float OverlapWidth; // 0x6b0(0x04)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct FSlateColor FlashColor; // 0x6b8(0x28)
};

// ScriptStruct SlateCore.*8a33503b5c
// Size: 0xc18 (Inherited: 0x08)
struct F*8a33503b5c : FSlateWidgetStyle {
	struct F*ae3dcef8a0 *5810b9f952; // 0x08(0x518)
	struct F*ae3dcef8a0 *89537353d1; // 0x520(0x518)
	struct F*78195aaa60 *6195d090fa; // 0xa38(0x128)
	struct FSlateBrush BackgroundBrush; // 0xb60(0x90)
	struct FSlateColor ForegroundColor; // 0xbf0(0x28)
};

// ScriptStruct SlateCore.*78195aaa60
// Size: 0x128 (Inherited: 0x08)
struct F*78195aaa60 : FSlateWidgetStyle {
	struct FSlateBrush HandleNormalBrush; // 0x08(0x90)
	struct FSlateBrush HandleHighlightBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.*ae3dcef8a0
// Size: 0x518 (Inherited: 0x08)
struct F*ae3dcef8a0 : FSlateWidgetStyle {
	struct FSlateBrush *f73eb9b6e6; // 0x08(0x90)
	struct FSlateBrush *afd307e719; // 0x98(0x90)
	struct FSlateBrush *87ecd20ef1; // 0x128(0x90)
	struct FSlateBrush *bd8d24bf3a; // 0x1b8(0x90)
	struct FSlateBrush *12d7c61604; // 0x248(0x90)
	struct FSlateBrush *0826614482; // 0x2d8(0x90)
	struct FSlateBrush *57ecd3cb70; // 0x368(0x90)
	struct FSlateBrush *a6b17feb54; // 0x3f8(0x90)
	struct FSlateBrush *55ff7fca1a; // 0x488(0x90)
};

// ScriptStruct SlateCore.*b219a37380
// Size: 0xa0 (Inherited: 0x08)
struct F*b219a37380 : FSlateWidgetStyle {
	struct FSlateBrush Image; // 0x08(0x90)
	int16 Baseline; // 0x98(0x02)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct SlateCore.*5e893884c9
// Size: 0x528 (Inherited: 0x08)
struct F*5e893884c9 : FSlateWidgetStyle {
	struct F*3929c5f692 *3929c5f692; // 0x08(0x250)
	struct FSlateBrush *e4dcb6649a; // 0x258(0x90)
	struct FSlateBrush *4aa64c02c7; // 0x2e8(0x90)
	struct FSlateBrush *72c800889e; // 0x378(0x90)
	struct FSlateBrush *1a299ca064; // 0x408(0x90)
	struct FSlateBrush *1974764b07; // 0x498(0x90)
};

// ScriptStruct SlateCore.*3929c5f692
// Size: 0x250 (Inherited: 0x08)
struct F*3929c5f692 : FSlateWidgetStyle {
	struct FSlateBrush NormalBarImage; // 0x08(0x90)
	struct FSlateBrush DisabledBarImage; // 0x98(0x90)
	struct FSlateBrush NormalThumbImage; // 0x128(0x90)
	struct FSlateBrush DisabledThumbImage; // 0x1b8(0x90)
	float BarThickness; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// ScriptStruct SlateCore.*87af1402f9
// Size: 0xb38 (Inherited: 0x08)
struct F*87af1402f9 : FSlateWidgetStyle {
	struct F*0704742c93 *75766d8e42; // 0x08(0x870)
	struct FSlateFontInfo *16857eb5fc; // 0x878(0x68)
	struct FSlateBrush *b57b8a5834; // 0x8e0(0x90)
	struct FSlateBrush *e417ccf12a; // 0x970(0x90)
	struct FSlateBrush *6c34432d6a; // 0xa00(0x90)
	struct FSlateBrush *bd4d8b91a2; // 0xa90(0x90)
	struct FMargin *d2f19b306c; // 0xb20(0x10)
	bool *e8d7c7eba2; // 0xb30(0x01)
	char pad_B31[0x7]; // 0xb31(0x07)
};

// ScriptStruct SlateCore.*0e5537161b
// Size: 0x130 (Inherited: 0x08)
struct F*0e5537161b : FSlateWidgetStyle {
	struct FSlateBrush *dfa65deb95; // 0x08(0x90)
	struct FSlateBrush *119e5524bb; // 0x98(0x90)
	float *7555799438; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct SlateCore.*314a470245
// Size: 0x1b8 (Inherited: 0x08)
struct F*314a470245 : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; // 0x08(0x90)
	struct FSlateBrush FillImage; // 0x98(0x90)
	struct FSlateBrush MarqueeImage; // 0x128(0x90)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xa80 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct F*0704742c93 EditableTextBoxStyle; // 0x08(0x870)
	struct F*b8dc2e8406 TextStyle; // 0x878(0x208)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x4c8 (Inherited: 0x08)
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct F*23cea9d391 UnderlineStyle; // 0x08(0x2a8)
	struct F*b8dc2e8406 TextStyle; // 0x2b0(0x208)
	struct FMargin Padding; // 0x4b8(0x10)
};

// ScriptStruct SlateCore.*9ea8125f90
// Size: 0x5e0 (Inherited: 0x08)
struct F*9ea8125f90 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*fc4d3b6ea7
// Size: 0x28 (Inherited: 0x20)
struct F*fc4d3b6ea7 : F*0c877d93bf {
	char pad_20[0x8]; // 0x20(0x08)
};

