// ScriptStruct ClothingSystemRuntimeInterface.*6bce92b5b6
// Size: 0x30 (Inherited: 0x00)
struct F*6bce92b5b6 {
	struct TArray<struct F*921004de3f> Spheres; // 0x00(0x10)
	struct TArray<struct F*0e9395d0e7> *b7e3ee87de; // 0x10(0x10)
	struct TArray<struct F*670a60afc9> *ec393d3045; // 0x20(0x10)
};

// ScriptStruct ClothingSystemRuntimeInterface.*670a60afc9
// Size: 0x18 (Inherited: 0x00)
struct F*670a60afc9 {
	struct TArray<struct FPlane> Planes; // 0x00(0x10)
	int32 BoneIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ClothingSystemRuntimeInterface.*0e9395d0e7
// Size: 0x08 (Inherited: 0x00)
struct F*0e9395d0e7 {
	int32 *6c2c5ed43d[0x02]; // 0x00(0x08)
};

// ScriptStruct ClothingSystemRuntimeInterface.*921004de3f
// Size: 0x14 (Inherited: 0x00)
struct F*921004de3f {
	int32 BoneIndex; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	struct FVector LocalPosition; // 0x08(0x0c)
};

