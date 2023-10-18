// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	None,
	None,
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	None,
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	None,
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	None,
	None,
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	None,
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None,
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	None,
	None,
};

// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8 {
	None,
	None,
};

// Enum UMG.EWidgetForcedLOD
enum class EWidgetForcedLOD : uint8 {
	None,
	None,
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	None,
	None,
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	None,
	None,
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	None,
	None,
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	None,
	None,
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	None,
	None,
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

// ScriptStruct UMG.*d6addb82fe
// Size: 0x08 (Inherited: 0x00)
struct F*d6addb82fe {
	char bOverride_TextShapingMethod : 1; // 0x00(0x01)
	char bOverride_TextFlowDirection : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class ETextShapingMethod TextShapingMethod; // 0x04(0x01)
	enum class ETextFlowDirection TextFlowDirection; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct UMG.*51ab529e16
// Size: 0x30 (Inherited: 0x00)
struct F*51ab529e16 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct UMG.*fdcc2aae04
// Size: 0x10 (Inherited: 0x00)
struct F*fdcc2aae04 {
	struct FName Name; // 0x00(0x08)
	struct UWidget* Content; // 0x08(0x08)
};

// ScriptStruct UMG.*1930ebf77e
// Size: 0x28 (Inherited: 0x00)
struct F*1930ebf77e {
	struct FMargin Offsets; // 0x00(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)
};

// ScriptStruct UMG.*b9de5e4d27
// Size: 0x10 (Inherited: 0x00)
struct F*b9de5e4d27 {
	struct TArray<struct F*9c762b7163> Segments; // 0x00(0x10)
};

// ScriptStruct UMG.*9c762b7163
// Size: 0x20 (Inherited: 0x00)
struct F*9c762b7163 {
	struct FName Name; // 0x00(0x08)
	int32 ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	struct UField* Field; // 0x18(0x08)
};

// ScriptStruct UMG.*f99144d292
// Size: 0x3c (Inherited: 0x00)
struct F*f99144d292 {
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

// ScriptStruct UMG.*cfa4c07157
// Size: 0x38 (Inherited: 0x00)
struct F*cfa4c07157 {
	struct FString ObjectName; // 0x00(0x10)
	struct FName PropertyName; // 0x10(0x08)
	struct FName FunctionName; // 0x18(0x08)
	struct F*b9de5e4d27 SourcePath; // 0x20(0x10)
	enum class EBindingKind Kind; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct UMG.*36fd1c0181
// Size: 0x28 (Inherited: 0x00)
struct F*36fd1c0181 {
	struct FName WidgetName; // 0x00(0x08)
	struct FName *0fed8e5c6c; // 0x08(0x08)
	struct FGuid *f42c515e49; // 0x10(0x10)
	bool *f4142ed4fe; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct UMG.*5c92b250c5
// Size: 0x18 (Inherited: 0x00)
struct F*5c92b250c5 {
	enum class EUINavigationRule Rule; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName WidgetToFocus; // 0x08(0x08)
	struct UWidget* Widget; // 0x10(0x08)
};

// ScriptStruct UMG.*26a0122ce2
// Size: 0x350 (Inherited: 0x18)
struct F*26a0122ce2 : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df; // 0x18(0x28)
	struct FRichCurve Translation[0x02]; // 0x40(0xe0)
	struct FRichCurve Rotation; // 0x120(0x70)
	struct FRichCurve Scale[0x02]; // 0x190(0xe0)
	struct FRichCurve Shear[0x02]; // 0x270(0xe0)
};

// ScriptStruct UMG.*9bf3b39636
// Size: 0x200 (Inherited: 0x18)
struct F*9bf3b39636 : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df; // 0x18(0x28)
	struct FRichCurve *66843a1ebc; // 0x40(0x70)
	struct FRichCurve *e207c29198; // 0xb0(0x70)
	struct FRichCurve *cb5a1d462d; // 0x120(0x70)
	struct FRichCurve *5aa80af22d; // 0x190(0x70)
};

// ScriptStruct UMG.*15c2476485
// Size: 0x58 (Inherited: 0x48)
struct F*15c2476485 : F*521c9d3efb {
	struct TArray<struct FName> *ab9138e846; // 0x48(0x10)
};

