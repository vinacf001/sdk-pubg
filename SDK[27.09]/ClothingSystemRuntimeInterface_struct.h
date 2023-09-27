// ScriptStruct ClothingSystemRuntimeInterface.*ebb8d83430
// Size: 0x30 (Inherited: 0x00)
struct F*ebb8d83430 {
	struct TArray<struct F*ae0c7b1885> Spheres; // 0x00(0x10)
	struct TArray<struct F*04e9bb4e74> *449084985e; // 0x10(0x10)
	struct TArray<struct F*2472202199> *15f2e7362d; // 0x20(0x10)
};

// ScriptStruct ClothingSystemRuntimeInterface.*2472202199
// Size: 0x18 (Inherited: 0x00)
struct F*2472202199 {
	struct TArray<struct FPlane> Planes; // 0x00(0x10)
	int32 BoneIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ClothingSystemRuntimeInterface.*04e9bb4e74
// Size: 0x08 (Inherited: 0x00)
struct F*04e9bb4e74 {
	int32 *20e71b2d2b[0x02]; // 0x00(0x08)
};

// ScriptStruct ClothingSystemRuntimeInterface.*ae0c7b1885
// Size: 0x14 (Inherited: 0x00)
struct F*ae0c7b1885 {
	int32 BoneIndex; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	struct FVector LocalPosition; // 0x08(0x0c)
};

