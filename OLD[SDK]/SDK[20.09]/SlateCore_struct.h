// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked,
	Checked,
	Undetermined,
	ECheckBoxState_MAX,
};

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

// Enum SlateCore.*d7e169e25d
enum class *d7e169e25d : uint8 {
	*9f802ed53b,
	*dc760ee4a7,
	*57b5f598e8,
	*db79de3178,
	*d7e169e25d_MAX,
};

// Enum SlateCore.*094a58cbe6
enum class *094a58cbe6 : uint8 {
	*27b6bd4cde,
	*4d3795cf69,
	*4c8cb1f50b,
	*094a58cbe6_MAX,
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal,
	Orient_Vertical,
	Orient_MAX,
};

// Enum SlateCore.*68f032fedc
enum class *68f032fedc : uint8 {
	*60b21318ed,
	*b9ca1982f8,
	*7850d26211,
	*b839eb6314,
	*2cd00a6ac6,
	*c76964cbeb,
	*72d669c311,
	*e2d718affc,
	*d2129f5f8d,
	*7b04a8d091,
	*0b486f4f84,
	*c402cc468f,
	*68a02ecf27,
	*68f032fedc_MAX,
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

// Enum SlateCore.*8a3681bfba
enum class *8a3681bfba : uint8 {
	*a1f96fb305,
	*9b5860b437,
	*f5f341e532,
	*8a3681bfba_MAX,
};

// Enum SlateCore.*1f30606bc3
enum class *1f30606bc3 : uint8 {
	*332df5dc57,
	*0d7cb4c6a5,
	*9716f7cb8a,
	*d35a01f210,
	*1f30606bc3_MAX,
};

// Enum SlateCore.*63a0064aef
enum class *63a0064aef : uint8 {
	*332df5dc57,
	*7f9139f3f7,
	*7aceb4384f,
	*63a0064aef_MAX,
};

// Enum SlateCore.*1c449fa2e9
enum class *1c449fa2e9 : uint8 {
	*332df5dc57,
	*840b0bf04f,
	*6b6347a16f,
	*31fde57a98,
	*239adbbd50,
	*1c449fa2e9_MAX,
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

// ScriptStruct SlateCore.*387a87ac65
// Size: 0x78 (Inherited: 0x20)
struct F*387a87ac65 : F*4b5cc6822c {
	char pad_20[0x58]; // 0x20(0x58)
};

// ScriptStruct SlateCore.*4b5cc6822c
// Size: 0x20 (Inherited: 0x00)
struct F*4b5cc6822c {
	char pad_0[0x20]; // 0x00(0x20)
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
	enum class ESlateBrushImageType *4417dc378c; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct UObject* ResourceObject; // 0x68(0x08)
	struct FName ResourceName; // 0x70(0x08)
	bool *a963426779; // 0x78(0x01)
	bool bHasUObject; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FBox2D *e0317e6a4c; // 0x7c(0x14)
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

// ScriptStruct SlateCore.*62e31edfd2
// Size: 0x718 (Inherited: 0x08)
struct F*62e31edfd2 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*8032c74862
// Size: 0x428 (Inherited: 0x08)
struct F*8032c74862 : FSlateWidgetStyle {
	struct F*735b523b98 ComboButtonStyle; // 0x08(0x3e0)
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

// ScriptStruct SlateCore.*735b523b98
// Size: 0x3e0 (Inherited: 0x08)
struct F*735b523b98 : FSlateWidgetStyle {
	struct F*d5cdd95f37 ButtonStyle; // 0x08(0x2a8)
	struct FSlateBrush DownArrowImage; // 0x2b0(0x90)
	struct FSlateBrush MenuBorderBrush; // 0x340(0x90)
	struct FMargin MenuBorderPadding; // 0x3d0(0x10)
};

// ScriptStruct SlateCore.*d5cdd95f37
// Size: 0x2a8 (Inherited: 0x08)
struct F*d5cdd95f37 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*1655c7f388
// Size: 0x248 (Inherited: 0x08)
struct F*1655c7f388 : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x98(0x90)
	struct FSlateBrush BackgroundImageComposing; // 0x128(0x90)
	struct FSlateBrush CaretImage; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.*66dc9af89d
// Size: 0x870 (Inherited: 0x08)
struct F*66dc9af89d : FSlateWidgetStyle {
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
	struct F*136abc3336 ScrollBarStyle; // 0x358(0x518)
};

// ScriptStruct SlateCore.*136abc3336
// Size: 0x518 (Inherited: 0x08)
struct F*136abc3336 : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*37ba76b02f
// Size: 0x208 (Inherited: 0x08)
struct F*37ba76b02f : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FVector2D ShadowOffset; // 0x98(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0xa0(0x10)
	struct FSlateColor *8237855e23; // 0xb0(0x28)
	struct FLinearColor HighlightColor; // 0xd8(0x10)
	struct FSlateBrush HighlightShape; // 0xe8(0x90)
	struct FSlateBrush UnderlineBrush; // 0x178(0x90)
};

// ScriptStruct SlateCore.*b5d3bae02e
// Size: 0x310 (Inherited: 0x08)
struct F*b5d3bae02e : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush HoveredBackgroundBrush; // 0x98(0x90)
	struct FSlateBrush ActiveFillBrush; // 0x128(0x90)
	struct FSlateBrush InactiveFillBrush; // 0x1b8(0x90)
	struct FSlateBrush ArrowsImage; // 0x248(0x90)
	struct FSlateColor ForegroundColor; // 0x2d8(0x28)
	struct FMargin TextPadding; // 0x300(0x10)
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x40 (Inherited: 0x20)
struct FKeyEvent : F*4b5cc6822c {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.*71b15ba99a
// Size: 0x48 (Inherited: 0x40)
struct F*71b15ba99a : FKeyEvent {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FFocusEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.ControllerEvent
// Size: 0x40 (Inherited: 0x20)
struct FControllerEvent : F*4b5cc6822c {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.*1a00d10a70
// Size: 0x28 (Inherited: 0x20)
struct F*1a00d10a70 : F*4b5cc6822c {
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*646dd34860
// Size: 0x50 (Inherited: 0x20)
struct F*646dd34860 : F*4b5cc6822c {
	char pad_20[0x30]; // 0x20(0x30)
};

// ScriptStruct SlateCore.*31082a6d69
// Size: 0x28 (Inherited: 0x00)
struct F*31082a6d69 {
	struct F*36d5821be3 *85731bf250; // 0x00(0x10)
	struct TArray<struct F*2a7bdc909e> *1a1fb1e936; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*2a7bdc909e
// Size: 0x28 (Inherited: 0x00)
struct F*2a7bdc909e {
	struct F*36d5821be3 *36d5821be3; // 0x00(0x10)
	struct TArray<struct FInt32Range> *d9cc1fd024; // 0x10(0x10)
	float *a9162dd93c; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SlateCore.*36d5821be3
// Size: 0x10 (Inherited: 0x00)
struct F*36d5821be3 {
	struct TArray<struct F*bac3328b2e> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.*bac3328b2e
// Size: 0x28 (Inherited: 0x00)
struct F*bac3328b2e {
	struct FName Name; // 0x00(0x08)
	struct F*256ce8fda8 Font; // 0x08(0x20)
};

// ScriptStruct SlateCore.*256ce8fda8
// Size: 0x20 (Inherited: 0x00)
struct F*256ce8fda8 {
	struct FString *469c906da2; // 0x00(0x10)
	enum class EFontHinting *0ba5092d1e; // 0x10(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UObject* *f81644b8de; // 0x18(0x08)
};

// ScriptStruct SlateCore.*87b62ae6d6
// Size: 0x10f0 (Inherited: 0x08)
struct F*87b62ae6d6 : FSlateWidgetStyle {
	struct F*d5cdd95f37 MinimizeButtonStyle; // 0x08(0x2a8)
	struct F*d5cdd95f37 MaximizeButtonStyle; // 0x2b0(0x2a8)
	struct F*d5cdd95f37 RestoreButtonStyle; // 0x558(0x2a8)
	struct F*d5cdd95f37 CloseButtonStyle; // 0x800(0x2a8)
	struct F*37ba76b02f TitleTextStyle; // 0xaa8(0x208)
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

// ScriptStruct SlateCore.*5a5c207ab2
// Size: 0x128 (Inherited: 0x08)
struct F*5a5c207ab2 : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.*22ad09d4a5
// Size: 0x248 (Inherited: 0x08)
struct F*22ad09d4a5 : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
	struct FSlateBrush LeftShadowBrush; // 0x128(0x90)
	struct FSlateBrush RightShadowBrush; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.*ed3c370c7c
// Size: 0x6e0 (Inherited: 0x08)
struct F*ed3c370c7c : FSlateWidgetStyle {
	struct F*d5cdd95f37 *4b8d1b3b08; // 0x08(0x2a8)
	struct FSlateBrush *d9f12dcea4; // 0x2b0(0x90)
	struct FSlateBrush *c4b55b9bef; // 0x340(0x90)
	struct FSlateBrush *c83f99eaff; // 0x3d0(0x90)
	struct FSlateBrush *6a510fe3ea; // 0x460(0x90)
	struct FSlateBrush *1cdd6eb9b9; // 0x4f0(0x90)
	struct FSlateBrush ContentAreaBrush; // 0x580(0x90)
	struct FSlateBrush TabWellBrush; // 0x610(0x90)
	struct FMargin *5cb5c84de7; // 0x6a0(0x10)
	float OverlapWidth; // 0x6b0(0x04)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct FSlateColor FlashColor; // 0x6b8(0x28)
};

// ScriptStruct SlateCore.*f289ca4e67
// Size: 0xc18 (Inherited: 0x08)
struct F*f289ca4e67 : FSlateWidgetStyle {
	struct F*68ea71d83f *360427aedc; // 0x08(0x518)
	struct F*68ea71d83f *8d7d7b01f9; // 0x520(0x518)
	struct F*abec4d4044 *353c8cc4ac; // 0xa38(0x128)
	struct FSlateBrush BackgroundBrush; // 0xb60(0x90)
	struct FSlateColor ForegroundColor; // 0xbf0(0x28)
};

// ScriptStruct SlateCore.*abec4d4044
// Size: 0x128 (Inherited: 0x08)
struct F*abec4d4044 : FSlateWidgetStyle {
	struct FSlateBrush HandleNormalBrush; // 0x08(0x90)
	struct FSlateBrush HandleHighlightBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.*68ea71d83f
// Size: 0x518 (Inherited: 0x08)
struct F*68ea71d83f : FSlateWidgetStyle {
	struct FSlateBrush *1c5e7ec7d6; // 0x08(0x90)
	struct FSlateBrush *3c95f2f59f; // 0x98(0x90)
	struct FSlateBrush *f9abc279fa; // 0x128(0x90)
	struct FSlateBrush *5d753137b1; // 0x1b8(0x90)
	struct FSlateBrush *d9f12dcea4; // 0x248(0x90)
	struct FSlateBrush *1cdd6eb9b9; // 0x2d8(0x90)
	struct FSlateBrush *091ef85cb3; // 0x368(0x90)
	struct FSlateBrush *05830e463a; // 0x3f8(0x90)
	struct FSlateBrush *4452be5073; // 0x488(0x90)
};

// ScriptStruct SlateCore.*910992e5a0
// Size: 0xa0 (Inherited: 0x08)
struct F*910992e5a0 : FSlateWidgetStyle {
	struct FSlateBrush Image; // 0x08(0x90)
	int16 Baseline; // 0x98(0x02)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct SlateCore.*ad381bf6b2
// Size: 0x528 (Inherited: 0x08)
struct F*ad381bf6b2 : FSlateWidgetStyle {
	struct F*ef20c0e1ee *ef20c0e1ee; // 0x08(0x250)
	struct FSlateBrush *4f82f64537; // 0x258(0x90)
	struct FSlateBrush *4c71965878; // 0x2e8(0x90)
	struct FSlateBrush *3c8340e800; // 0x378(0x90)
	struct FSlateBrush *0ffe67b558; // 0x408(0x90)
	struct FSlateBrush *24c60dd283; // 0x498(0x90)
};

// ScriptStruct SlateCore.*ef20c0e1ee
// Size: 0x250 (Inherited: 0x08)
struct F*ef20c0e1ee : FSlateWidgetStyle {
	struct FSlateBrush NormalBarImage; // 0x08(0x90)
	struct FSlateBrush DisabledBarImage; // 0x98(0x90)
	struct FSlateBrush NormalThumbImage; // 0x128(0x90)
	struct FSlateBrush DisabledThumbImage; // 0x1b8(0x90)
	float BarThickness; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// ScriptStruct SlateCore.*edb1b75aa8
// Size: 0xb38 (Inherited: 0x08)
struct F*edb1b75aa8 : FSlateWidgetStyle {
	struct F*66dc9af89d *56ce9cb766; // 0x08(0x870)
	struct FSlateFontInfo *886f12b9c9; // 0x878(0x68)
	struct FSlateBrush *35d09d8b77; // 0x8e0(0x90)
	struct FSlateBrush *52efcd13a3; // 0x970(0x90)
	struct FSlateBrush *a095987104; // 0xa00(0x90)
	struct FSlateBrush *c29befbb5a; // 0xa90(0x90)
	struct FMargin *e797dd5166; // 0xb20(0x10)
	bool *8cf59ae201; // 0xb30(0x01)
	char pad_B31[0x7]; // 0xb31(0x07)
};

// ScriptStruct SlateCore.*3a160e1e9c
// Size: 0x130 (Inherited: 0x08)
struct F*3a160e1e9c : FSlateWidgetStyle {
	struct FSlateBrush *c380ca44dd; // 0x08(0x90)
	struct FSlateBrush *2689567643; // 0x98(0x90)
	float *497238b3b5; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct SlateCore.*4153f21470
// Size: 0x1b8 (Inherited: 0x08)
struct F*4153f21470 : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; // 0x08(0x90)
	struct FSlateBrush FillImage; // 0x98(0x90)
	struct FSlateBrush MarqueeImage; // 0x128(0x90)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xa80 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct F*66dc9af89d EditableTextBoxStyle; // 0x08(0x870)
	struct F*37ba76b02f TextStyle; // 0x878(0x208)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x4c8 (Inherited: 0x08)
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct F*d5cdd95f37 UnderlineStyle; // 0x08(0x2a8)
	struct F*37ba76b02f TextStyle; // 0x2b0(0x208)
	struct FMargin Padding; // 0x4b8(0x10)
};

// ScriptStruct SlateCore.*ea1c6f5c2e
// Size: 0x5e0 (Inherited: 0x08)
struct F*ea1c6f5c2e : FSlateWidgetStyle {
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

// ScriptStruct SlateCore.*55f8992c31
// Size: 0x28 (Inherited: 0x20)
struct F*55f8992c31 : F*4b5cc6822c {
	char pad_20[0x8]; // 0x20(0x08)
};

