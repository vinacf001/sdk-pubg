// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	Visible,
	Collapsed,
	Hidden,
	HitTestInvisible,
	SelfHitTestInvisible,
	ESlateVisibility_MAX,
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	Default,
	Number,
	Web,
	Email,
	Password,
	AlphaNumeric,
	EVirtualKeyboardType_MAX,
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	Forward,
	Reverse,
	PingPong,
	EUMGSequencePlayMode_MAX,
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	MouseDown,
	TopLeft,
	TopCenter,
	TopRight,
	CenterLeft,
	CenterCenter,
	CenterRight,
	BottomLeft,
	BottomCenter,
	BottomRight,
	EDragPivot_MAX,
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	Automatic,
	Fill,
	ESlateSizeRule_MAX,
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None,
	Designing,
	ShowOutline,
	ExecutePreConstruct,
	EWidgetDesignFlags_MAX,
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	Function,
	Property,
	EBindingKind_MAX,
};

// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8 {
	FillScreen,
	Custom,
	CustomOnScreen,
	Desired,
	DesiredOnScreen,
	EDesignPreviewSizeMode_MAX,
};

// Enum UMG.EWidgetForcedLOD
enum class EWidgetForcedLOD : uint8 {
	None,
	Inactive,
	LOD0,
	LOD1,
	LOD2,
	LOD3,
	LOD4,
	LOD5,
	LOD6,
	LOD7,
	EWidgetForcedLOD_MAX,
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	Plane,
	Cylinder,
	Sphere,
	EWidgetGeometryMode_MAX,
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	Opaque,
	Masked,
	Transparent,
	EWidgetBlendMode_MAX,
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	RealTime,
	GameTime,
	EWidgetTimingPolicy_MAX,
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	World,
	Screen,
	EWidgetSpace_MAX,
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	World,
	Mouse,
	CenterScreen,
	Custom,
	EWidgetInteractionSource_MAX,
};

// ScriptStruct UMG.EventReply
// Size: 0xb8 (Inherited: 0x00)
struct FEventReply {
	char pad_0[0xb8]; // 0x00(0xb8)
};

// ScriptStruct UMG.WidgetTransform
// Size: 0x1c (Inherited: 0x00)
struct FWidgetTransform {
	struct FVector2D Translation; // 0x00(0x08)
	struct FVector2D Scale; // 0x08(0x08)
	struct FVector2D Shear; // 0x10(0x08)
	float Angle; // 0x18(0x04)
};

// ScriptStruct UMG.*01d8029047
// Size: 0x08 (Inherited: 0x00)
struct F*01d8029047 {
	char bOverride_TextShapingMethod : 1; // 0x00(0x01)
	char bOverride_TextFlowDirection : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class ETextShapingMethod TextShapingMethod; // 0x04(0x01)
	enum class ETextFlowDirection TextFlowDirection; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct UMG.*338bd9d15e
// Size: 0x30 (Inherited: 0x00)
struct F*338bd9d15e {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct UMG.*c8144ff210
// Size: 0x10 (Inherited: 0x00)
struct F*c8144ff210 {
	struct FName Name; // 0x00(0x08)
	struct UWidget* Content; // 0x08(0x08)
};

// ScriptStruct UMG.*a477d9422f
// Size: 0x28 (Inherited: 0x00)
struct F*a477d9422f {
	struct FMargin Offsets; // 0x00(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)
};

// ScriptStruct UMG.*0257e3c7bd
// Size: 0x10 (Inherited: 0x00)
struct F*0257e3c7bd {
	struct TArray<struct F*6b02a0a771> Segments; // 0x00(0x10)
};

// ScriptStruct UMG.*6b02a0a771
// Size: 0x20 (Inherited: 0x00)
struct F*6b02a0a771 {
	struct FName Name; // 0x00(0x08)
	int32 ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	struct UField* Field; // 0x18(0x08)
};

// ScriptStruct UMG.*2baae106d3
// Size: 0x3c (Inherited: 0x00)
struct F*2baae106d3 {
	struct FVector2D Position; // 0x00(0x08)
	struct FColor Color; // 0x08(0x04)
	struct FVector2D UV0; // 0x0c(0x08)
	struct FVector2D UV1; // 0x14(0x08)
	struct FVector2D UV2; // 0x1c(0x08)
	struct FVector2D UV3; // 0x24(0x08)
	struct FVector2D UV4; // 0x2c(0x08)
	struct FVector2D UV5; // 0x34(0x08)
};

// ScriptStruct UMG.SlateChildSize
// Size: 0x08 (Inherited: 0x00)
struct FSlateChildSize {
	float Value; // 0x00(0x04)
	enum class ESlateSizeRule SizeRule; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct UMG.*b28a91287c
// Size: 0x38 (Inherited: 0x00)
struct F*b28a91287c {
	struct FString ObjectName; // 0x00(0x10)
	struct FName PropertyName; // 0x10(0x08)
	struct FName FunctionName; // 0x18(0x08)
	struct F*0257e3c7bd SourcePath; // 0x20(0x10)
	enum class EBindingKind Kind; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct UMG.*03b5503892
// Size: 0x28 (Inherited: 0x00)
struct F*03b5503892 {
	struct FName WidgetName; // 0x00(0x08)
	struct FName *47cf454344; // 0x08(0x08)
	struct FGuid *f2875590e2; // 0x10(0x10)
	bool *4dc910c117; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct UMG.*69f271d76f
// Size: 0x18 (Inherited: 0x00)
struct F*69f271d76f {
	enum class EUINavigationRule Rule; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName WidgetToFocus; // 0x08(0x08)
	struct UWidget* Widget; // 0x10(0x08)
};

// ScriptStruct UMG.*1f5fc5440a
// Size: 0x350 (Inherited: 0x18)
struct F*1f5fc5440a : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct FRichCurve Translation[0x02]; // 0x40(0xe0)
	struct FRichCurve Rotation; // 0x120(0x70)
	struct FRichCurve Scale[0x02]; // 0x190(0xe0)
	struct FRichCurve Shear[0x02]; // 0x270(0xe0)
};

// ScriptStruct UMG.*9ed5603f92
// Size: 0x200 (Inherited: 0x18)
struct F*9ed5603f92 : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct FRichCurve *32f165c06f; // 0x40(0x70)
	struct FRichCurve *d12a1e1b92; // 0xb0(0x70)
	struct FRichCurve *ffce2e0669; // 0x120(0x70)
	struct FRichCurve *67fc667e6a; // 0x190(0x70)
};

// ScriptStruct UMG.*fe43746c4b
// Size: 0x58 (Inherited: 0x48)
struct F*fe43746c4b : F*f9b3c02c02 {
	struct TArray<struct FName> *7b58647712; // 0x48(0x10)
};

