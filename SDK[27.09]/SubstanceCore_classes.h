// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x118 (Inherited: 0x30)
struct USubstanceGraphInstance : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString *7cf84b3490; // 0x38(0x10)
	struct USubstanceInstanceFactory* *71adcc6d8d; // 0x48(0x08)
	struct TMap<uint32, struct U*9a2926c24d*> *38f3ba7f2c; // 0x50(0x50)
	struct UMaterial* *4f064737a4; // 0xa0(0x08)
	struct TMap<int32, struct FGuid> *40604b43ca; // 0xa8(0x50)
	bool bIsFrozen; // 0xf8(0x01)
	char pad_F9[0x1f]; // 0xf9(0x1f)

	void *3b06b022d2(); // Function SubstanceCore.SubstanceGraphInstance.*3b06b022d2 // Final|Native|Public|BlueprintCallable // @ game+0x69e9bf4
	void *a77a30475c(); // Function SubstanceCore.SubstanceGraphInstance.*a77a30475c // Final|Native|Public|BlueprintCallable // @ game+0x69e9594
	void *7a5deb1cdb(); // Function SubstanceCore.SubstanceGraphInstance.*7a5deb1cdb // Final|Native|Public|BlueprintCallable // @ game+0x69e9030
	void *2948d1e60d(); // Function SubstanceCore.SubstanceGraphInstance.*2948d1e60d // Final|Native|Public|BlueprintCallable // @ game+0x69e9630
	void *50d54e4b59(); // Function SubstanceCore.SubstanceGraphInstance.*50d54e4b59 // Final|Native|Public|BlueprintCallable // @ game+0x69e8c04
	void *089f1052da(); // Function SubstanceCore.SubstanceGraphInstance.*089f1052da // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69e8f20
	void *6bf40b27f2(); // Function SubstanceCore.SubstanceGraphInstance.*6bf40b27f2 // Final|Native|Public|BlueprintCallable // @ game+0x69e8e18
	void *076ca1c8e1(); // Function SubstanceCore.SubstanceGraphInstance.*076ca1c8e1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x69e9d3c
	void *d4a6b67f95(); // Function SubstanceCore.SubstanceGraphInstance.*d4a6b67f95 // Final|Native|Public|BlueprintCallable // @ game+0x69e9334
	void *c1c1639f2f(); // Function SubstanceCore.SubstanceGraphInstance.*c1c1639f2f // Final|Native|Public|BlueprintCallable // @ game+0x69ea01c
	void *bc128b5893(); // Function SubstanceCore.SubstanceGraphInstance.*bc128b5893 // Final|Native|Public|BlueprintCallable // @ game+0x69e9188
	void *f230c8ef48(); // Function SubstanceCore.SubstanceGraphInstance.*f230c8ef48 // Final|Native|Public|BlueprintCallable // @ game+0x69e948c
	void *ed6c95345f(); // Function SubstanceCore.SubstanceGraphInstance.*ed6c95345f // Final|Native|Public|BlueprintCallable // @ game+0x69e92e0
	void *70516fb3e9(); // Function SubstanceCore.SubstanceGraphInstance.*70516fb3e9 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69ea138
	void *6f969afa94(); // Function SubstanceCore.SubstanceGraphInstance.*6f969afa94 // Final|Native|Public|BlueprintCallable // @ game+0x69ea2bc
	void *c1064c0e18(); // Function SubstanceCore.SubstanceGraphInstance.*c1064c0e18 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69e9e98
};

// Class SubstanceCore.*9a2926c24d
// Size: 0x180 (Inherited: 0x30)
struct U*9a2926c24d : UObject {
	char pad_30[0x108]; // 0x30(0x108)
	int32 *afe4158bdb; // 0x138(0x04)
	int32 *ddc6465835; // 0x13c(0x04)
	int32 SizeX; // 0x140(0x04)
	int32 SizeY; // 0x144(0x04)
	int32 NumComponents; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FString SourceFilePath; // 0x150(0x10)
	struct FString SourceFileTimestamp; // 0x160(0x10)
	struct TArray<struct USubstanceGraphInstance*> Consumers; // 0x170(0x10)
};

// Class SubstanceCore.SubstanceInstanceFactory
// Size: 0x88 (Inherited: 0x30)
struct USubstanceInstanceFactory : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FString *57d84bc913; // 0x40(0x10)
	struct FString *27288eadd1; // 0x50(0x10)
	struct FString *a523a70005; // 0x60(0x10)
	enum class *13790737e2 GenerationMode; // 0x70(0x01)
	char pad_71[0x17]; // 0x71(0x17)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x48 (Inherited: 0x30)
struct USubstanceSettings : UObject {
	int32 MemoryBudgetMb; // 0x30(0x04)
	int32 CPUCores; // 0x34(0x04)
	int32 AsyncLoadMipClip; // 0x38(0x04)
	int32 MaxAsyncSubstancesRenderedPerFrame; // 0x3c(0x04)
	enum class *13790737e2 DefaultGenerationMode; // 0x40(0x01)
	enum class *bb07988644 SubstanceEngine; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class SubstanceCore.*4200f35af8
// Size: 0x150 (Inherited: 0xd8)
struct U*4200f35af8 : U*ec6d9c8af4 {
	char pad_D8[0x48]; // 0xd8(0x48)
	struct USubstanceGraphInstance* *f0a6fad2a8; // 0x120(0x08)
	enum class *6486b70fc0 AddressX; // 0x128(0x01)
	enum class *6486b70fc0 AddressY; // 0x129(0x01)
	bool *70ad173c8a; // 0x12a(0x01)
	char pad_12B[0x25]; // 0x12b(0x25)

	void *8050b64b71(); // Function SubstanceCore.*4200f35af8.*8050b64b71 // Final|Native|Public|BlueprintCallable // @ game+0x69e8b04
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x30 (Inherited: 0x30)
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void *eaf0c31d28(); // Function SubstanceCore.SubstanceUtility.*eaf0c31d28 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e88a8
	void *4e4ec64531(); // Function SubstanceCore.SubstanceUtility.*4e4ec64531 // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x69e8320
	void *05e42638e3(); // Function SubstanceCore.SubstanceUtility.*05e42638e3 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e872c
	void *e82abd7a84(); // Function SubstanceCore.SubstanceUtility.*e82abd7a84 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69ea438
	void *8fcc0d2108(); // Function SubstanceCore.SubstanceUtility.*8fcc0d2108 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e8b24
	void *a877a5623a(); // Function SubstanceCore.SubstanceUtility.*a877a5623a // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e9944
	void *6e9f1c3af1(); // Function SubstanceCore.SubstanceUtility.*6e9f1c3af1 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e9ae0
	void *5260e793e8(); // Function SubstanceCore.SubstanceUtility.*5260e793e8 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e8550
	void *c1e54364b3(); // Function SubstanceCore.SubstanceUtility.*c1e54364b3 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e9764
	void *f6254e7639(); // Function SubstanceCore.SubstanceUtility.*f6254e7639 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e8248
	void *553b4e78db(); // Function SubstanceCore.SubstanceUtility.*553b4e78db // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e8d38
	void *063d32a232(); // Function SubstanceCore.SubstanceUtility.*063d32a232 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e819c
	void *45fe7b8f0b(); // Function SubstanceCore.SubstanceUtility.*45fe7b8f0b // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e9864
	void *c9714f791d(); // Function SubstanceCore.SubstanceUtility.*c9714f791d // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e8984
	void *c370c6c9bf(); // Function SubstanceCore.SubstanceUtility.*c370c6c9bf // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e9784
	void *315041ad61(); // Function SubstanceCore.SubstanceUtility.*315041ad61 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e99c8
	void *32cfccc877(); // Function SubstanceCore.SubstanceUtility.*32cfccc877 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69e8230
};

