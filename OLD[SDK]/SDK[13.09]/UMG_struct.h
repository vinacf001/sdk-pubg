// ScriptStruct UMG.WidgetTransform
// Size: 0x1c (Inherited: 0x00)
struct FWidgetTransform {
	struct FVector2D Translation; // 0x00(0x08)
	struct FVector2D Scale; // 0x08(0x08)
	struct FVector2D Shear; // 0x10(0x08)
	float Angle; // 0x18(0x04)
};

// ScriptStruct UMG.EventReply
// Size: 0xb8 (Inherited: 0x00)
struct FEventReply {
	char pad_0[0xb8]; // 0x00(0xb8)
};

// ScriptStruct UMG.*64a42c3900
// Size: 0x08 (Inherited: 0x00)
struct F*64a42c3900 {
	char bOverride_TextShapingMethod : 1; // 0x00(0x01)
	char bOverride_TextFlowDirection : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class ETextShapingMethod TextShapingMethod; // 0x04(0x01)
	enum class ETextFlowDirection TextFlowDirection; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct UMG.*536f0007b8
// Size: 0x30 (Inherited: 0x00)
struct F*536f0007b8 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct UMG.*29c64021c8
// Size: 0x10 (Inherited: 0x00)
struct F*29c64021c8 {
	struct FName Name; // 0x00(0x08)
	struct UWidget* Content; // 0x08(0x08)
};

// ScriptStruct UMG.*ef6a4066ac
// Size: 0x28 (Inherited: 0x00)
struct F*ef6a4066ac {
	struct FMargin Offsets; // 0x00(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)
};

// ScriptStruct UMG.*5549c10072
// Size: 0x10 (Inherited: 0x00)
struct F*5549c10072 {
	struct TArray<struct F*33fe1f6e9b> Segments; // 0x00(0x10)
};

// ScriptStruct UMG.*33fe1f6e9b
// Size: 0x20 (Inherited: 0x00)
struct F*33fe1f6e9b {
	struct FName Name; // 0x00(0x08)
	int32 ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	struct UField* Field; // 0x18(0x08)
};

// ScriptStruct UMG.*da695a2c66
// Size: 0x3c (Inherited: 0x00)
struct F*da695a2c66 {
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

// ScriptStruct UMG.*5ca9fc20d0
// Size: 0x38 (Inherited: 0x00)
struct F*5ca9fc20d0 {
	struct FString ObjectName; // 0x00(0x10)
	struct FName PropertyName; // 0x10(0x08)
	struct FName FunctionName; // 0x18(0x08)
	struct F*5549c10072 SourcePath; // 0x20(0x10)
	enum class EBindingKind Kind; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct UMG.*1ed79fbba3
// Size: 0x28 (Inherited: 0x00)
struct F*1ed79fbba3 {
	struct FName WidgetName; // 0x00(0x08)
	struct FName *31c6666faf; // 0x08(0x08)
	struct FGuid *2668e94374; // 0x10(0x10)
	bool *d8406625e2; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct UMG.*0ed5837138
// Size: 0x18 (Inherited: 0x00)
struct F*0ed5837138 {
	enum class EUINavigationRule Rule; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName WidgetToFocus; // 0x08(0x08)
	struct UWidget* Widget; // 0x10(0x08)
};

// ScriptStruct UMG.*b428076885
// Size: 0x350 (Inherited: 0x18)
struct F*b428076885 : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct FRichCurve Translation[0x02]; // 0x40(0xe0)
	struct FRichCurve Rotation; // 0x120(0x70)
	struct FRichCurve Scale[0x02]; // 0x190(0xe0)
	struct FRichCurve Shear[0x02]; // 0x270(0xe0)
};

// ScriptStruct UMG.*341cf2391e
// Size: 0x200 (Inherited: 0x18)
struct F*341cf2391e : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct FRichCurve *2e9a4cc8c4; // 0x40(0x70)
	struct FRichCurve *dc87cb8bf8; // 0xb0(0x70)
	struct FRichCurve *8da56fb51a; // 0x120(0x70)
	struct FRichCurve *2b9409f1dd; // 0x190(0x70)
};

// ScriptStruct UMG.*0322ca37a0
// Size: 0x58 (Inherited: 0x48)
struct F*0322ca37a0 : F*a965e14a16 {
	struct TArray<struct FName> *538530a004; // 0x48(0x10)
};

