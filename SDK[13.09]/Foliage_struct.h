// ScriptStruct Foliage.*e2c42c1d89
// Size: 0x0c (Inherited: 0x00)
struct F*e2c42c1d89 {
	char *99eddeaffc : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *d0c76dd61b; // 0x04(0x04)
	char *df02c2c35e : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Foliage.*db83a82904
// Size: 0x60 (Inherited: 0x00)
struct F*db83a82904 {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Normal; // 0x20(0x0c)
	float Age; // 0x2c(0x04)
	float Scale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UFoliageType_InstancedStaticMesh* Type; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
};

// ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 (Inherited: 0x00)
struct FFoliageTypeObject {
	struct UObject* FoliageTypeObject; // 0x00(0x08)
	struct UFoliageType_InstancedStaticMesh* *46c18ad829; // 0x08(0x08)
	bool *140332f41c; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UClass* Type; // 0x18(0x08)
};

