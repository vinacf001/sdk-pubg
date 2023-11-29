// ScriptStruct AnimationCore.*92772d38b9
// Size: 0x28 (Inherited: 0x00)
struct F*92772d38b9 {
	struct F*dbd59d62ee Operator; // 0x00(0x0d)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName SourceNode; // 0x10(0x08)
	struct FName TargetNode; // 0x18(0x08)
	float Weight; // 0x20(0x04)
	bool bMaintainOffset; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AnimationCore.*dbd59d62ee
// Size: 0x0d (Inherited: 0x00)
struct F*dbd59d62ee {
	bool bTranslation; // 0x00(0x01)
	bool bRotation; // 0x01(0x01)
	bool bScale; // 0x02(0x01)
	bool bParent; // 0x03(0x01)
	struct F*b984dff504 TranslationAxes; // 0x04(0x03)
	struct F*b984dff504 RotationAxes; // 0x07(0x03)
	struct F*b984dff504 ScaleAxes; // 0x0a(0x03)
};

// ScriptStruct AnimationCore.*b984dff504
// Size: 0x03 (Inherited: 0x00)
struct F*b984dff504 {
	bool bX; // 0x00(0x01)
	bool bY; // 0x01(0x01)
	bool bZ; // 0x02(0x01)
};

// ScriptStruct AnimationCore.*bc62ed098c
// Size: 0x60 (Inherited: 0x00)
struct F*bc62ed098c {
	struct FVector Translation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Parent; // 0x30(0x30)
};

// ScriptStruct AnimationCore.*43f0b6f097
// Size: 0x10 (Inherited: 0x00)
struct F*43f0b6f097 {
	struct TArray<struct FName> Nodes; // 0x00(0x10)
};

// ScriptStruct AnimationCore.*f5ea65c34e
// Size: 0x78 (Inherited: 0x00)
struct F*f5ea65c34e {
	char pad_0[0x8]; // 0x00(0x08)
	struct F*b8cca64cf1 Hierarchy; // 0x08(0x70)
};

// ScriptStruct AnimationCore.*b8cca64cf1
// Size: 0x70 (Inherited: 0x00)
struct F*b8cca64cf1 {
	struct TArray<struct FNodeObject> Nodes; // 0x00(0x10)
	struct TArray<struct FTransform> Transforms; // 0x10(0x10)
	struct TMap<struct FName, int32> *e02c76829b; // 0x20(0x50)
};

// ScriptStruct AnimationCore.NodeObject
// Size: 0x10 (Inherited: 0x00)
struct FNodeObject {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
};

