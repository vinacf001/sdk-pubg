// ScriptStruct AnimationCore.*d31ed6421e
// Size: 0x28 (Inherited: 0x00)
struct F*d31ed6421e {
	struct F*5ede0fd161 Operator; // 0x00(0x0d)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName SourceNode; // 0x10(0x08)
	struct FName TargetNode; // 0x18(0x08)
	float Weight; // 0x20(0x04)
	bool bMaintainOffset; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AnimationCore.*5ede0fd161
// Size: 0x0d (Inherited: 0x00)
struct F*5ede0fd161 {
	bool bTranslation; // 0x00(0x01)
	bool bRotation; // 0x01(0x01)
	bool bScale; // 0x02(0x01)
	bool bParent; // 0x03(0x01)
	struct F*2fb7fb1660 TranslationAxes; // 0x04(0x03)
	struct F*2fb7fb1660 RotationAxes; // 0x07(0x03)
	struct F*2fb7fb1660 ScaleAxes; // 0x0a(0x03)
};

// ScriptStruct AnimationCore.*2fb7fb1660
// Size: 0x03 (Inherited: 0x00)
struct F*2fb7fb1660 {
	bool bX; // 0x00(0x01)
	bool bY; // 0x01(0x01)
	bool bZ; // 0x02(0x01)
};

// ScriptStruct AnimationCore.*0428bbc9f1
// Size: 0x60 (Inherited: 0x00)
struct F*0428bbc9f1 {
	struct FVector Translation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Parent; // 0x30(0x30)
};

// ScriptStruct AnimationCore.*ac543549f2
// Size: 0x10 (Inherited: 0x00)
struct F*ac543549f2 {
	struct TArray<struct FName> Nodes; // 0x00(0x10)
};

// ScriptStruct AnimationCore.*2bb27af79c
// Size: 0x78 (Inherited: 0x00)
struct F*2bb27af79c {
	char pad_0[0x8]; // 0x00(0x08)
	struct F*e35e612cef Hierarchy; // 0x08(0x70)
};

// ScriptStruct AnimationCore.*e35e612cef
// Size: 0x70 (Inherited: 0x00)
struct F*e35e612cef {
	struct TArray<struct FNodeObject> Nodes; // 0x00(0x10)
	struct TArray<struct FTransform> Transforms; // 0x10(0x10)
	struct TMap<struct FName, int32> *2146098c1b; // 0x20(0x50)
};

// ScriptStruct AnimationCore.NodeObject
// Size: 0x10 (Inherited: 0x00)
struct FNodeObject {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
};

