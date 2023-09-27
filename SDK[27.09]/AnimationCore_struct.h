// ScriptStruct AnimationCore.*c27bb57af8
// Size: 0x28 (Inherited: 0x00)
struct F*c27bb57af8 {
	struct F*5242b430a9 Operator; // 0x00(0x0d)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName SourceNode; // 0x10(0x08)
	struct FName TargetNode; // 0x18(0x08)
	float Weight; // 0x20(0x04)
	bool bMaintainOffset; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AnimationCore.*5242b430a9
// Size: 0x0d (Inherited: 0x00)
struct F*5242b430a9 {
	bool bTranslation; // 0x00(0x01)
	bool bRotation; // 0x01(0x01)
	bool bScale; // 0x02(0x01)
	bool bParent; // 0x03(0x01)
	struct F*ad7c4b28ba TranslationAxes; // 0x04(0x03)
	struct F*ad7c4b28ba RotationAxes; // 0x07(0x03)
	struct F*ad7c4b28ba ScaleAxes; // 0x0a(0x03)
};

// ScriptStruct AnimationCore.*ad7c4b28ba
// Size: 0x03 (Inherited: 0x00)
struct F*ad7c4b28ba {
	bool bX; // 0x00(0x01)
	bool bY; // 0x01(0x01)
	bool bZ; // 0x02(0x01)
};

// ScriptStruct AnimationCore.*644040a706
// Size: 0x60 (Inherited: 0x00)
struct F*644040a706 {
	struct FVector Translation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Parent; // 0x30(0x30)
};

// ScriptStruct AnimationCore.*51d8fe578c
// Size: 0x10 (Inherited: 0x00)
struct F*51d8fe578c {
	struct TArray<struct FName> Nodes; // 0x00(0x10)
};

// ScriptStruct AnimationCore.*ab19244456
// Size: 0x78 (Inherited: 0x00)
struct F*ab19244456 {
	char pad_0[0x8]; // 0x00(0x08)
	struct F*5fdaa29bd1 Hierarchy; // 0x08(0x70)
};

// ScriptStruct AnimationCore.*5fdaa29bd1
// Size: 0x70 (Inherited: 0x00)
struct F*5fdaa29bd1 {
	struct TArray<struct FNodeObject> Nodes; // 0x00(0x10)
	struct TArray<struct FTransform> Transforms; // 0x10(0x10)
	struct TMap<struct FName, int32> *0a78afb83f; // 0x20(0x50)
};

// ScriptStruct AnimationCore.NodeObject
// Size: 0x10 (Inherited: 0x00)
struct FNodeObject {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
};

