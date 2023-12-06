// ScriptStruct ClothingSystemRuntimeInterface.*9bc822cc6b
// Size: 0x30 (Inherited: 0x00)
struct F*9bc822cc6b {
	struct TArray<struct F*f2aee70070> Spheres; // 0x00(0x10)
	struct TArray<struct F*a4b448f867> *3bebd1b6ee; // 0x10(0x10)
	struct TArray<struct F*66a2b1058c> *820bc6ba0c; // 0x20(0x10)
};

// ScriptStruct ClothingSystemRuntimeInterface.*66a2b1058c
// Size: 0x18 (Inherited: 0x00)
struct F*66a2b1058c {
	struct TArray<struct FPlane> Planes; // 0x00(0x10)
	int32 BoneIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ClothingSystemRuntimeInterface.*a4b448f867
// Size: 0x08 (Inherited: 0x00)
struct F*a4b448f867 {
	int32 *05a7162c33[0x02]; // 0x00(0x08)
};

// ScriptStruct ClothingSystemRuntimeInterface.*f2aee70070
// Size: 0x14 (Inherited: 0x00)
struct F*f2aee70070 {
	int32 BoneIndex; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	struct FVector LocalPosition; // 0x08(0x0c)
};

