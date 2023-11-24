// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x110 (Inherited: 0x28)
struct USubstanceGraphInstance : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString *7cf84b3490; // 0x30(0x10)
	struct USubstanceInstanceFactory* *71adcc6d8d; // 0x40(0x08)
	struct TMap<uint32, struct U*9a2926c24d*> *38f3ba7f2c; // 0x48(0x50)
	struct UMaterial* *4f064737a4; // 0x98(0x08)
	struct TMap<int32, struct FGuid> *40604b43ca; // 0xa0(0x50)
	bool bIsFrozen; // 0xf0(0x01)
	char pad_F1[0x1f]; // 0xf1(0x1f)

	struct FString *3b06b022d2(); // Function SubstanceCore.SubstanceGraphInstance.*3b06b022d2 // None // @ game+0x65a1640
	void *a77a30475c(); // Function SubstanceCore.SubstanceGraphInstance.*a77a30475c // None // @ game+0x65a0fe0
	void *7a5deb1cdb(); // Function SubstanceCore.SubstanceGraphInstance.*7a5deb1cdb // None // @ game+0x65a0a7c
	struct FString *2948d1e60d(); // Function SubstanceCore.SubstanceGraphInstance.*2948d1e60d // None // @ game+0x65a107c
	struct FString *50d54e4b59(); // Function SubstanceCore.SubstanceGraphInstance.*50d54e4b59 // None // @ game+0x65a0650
	void *089f1052da(); // Function SubstanceCore.SubstanceGraphInstance.*089f1052da // None // @ game+0x65a096c
	void *6bf40b27f2(); // Function SubstanceCore.SubstanceGraphInstance.*6bf40b27f2 // None // @ game+0x65a0864
	struct FString *076ca1c8e1(); // Function SubstanceCore.SubstanceGraphInstance.*076ca1c8e1 // None // @ game+0x65a1788
	void *d4a6b67f95(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.*d4a6b67f95 // None // @ game+0x65a0d80
	void *c1c1639f2f(struct UObject* Value); // Function SubstanceCore.SubstanceGraphInstance.*c1c1639f2f // None // @ game+0x65a1a68
	struct FString *bc128b5893(); // Function SubstanceCore.SubstanceGraphInstance.*bc128b5893 // None // @ game+0x65a0bd4
	void *f230c8ef48(struct FString InputName); // Function SubstanceCore.SubstanceGraphInstance.*f230c8ef48 // None // @ game+0x65a0ed8
	void *ed6c95345f(); // Function SubstanceCore.SubstanceGraphInstance.*ed6c95345f // None // @ game+0x65a0d2c
	struct FString *70516fb3e9(); // Function SubstanceCore.SubstanceGraphInstance.*70516fb3e9 // None // @ game+0x65a1b84
	struct FString *6f969afa94(); // Function SubstanceCore.SubstanceGraphInstance.*6f969afa94 // None // @ game+0x65a1d08
	void *c1064c0e18(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.*c1064c0e18 // None // @ game+0x65a18e4
};

// Class SubstanceCore.*9a2926c24d
// Size: 0x178 (Inherited: 0x28)
struct U*9a2926c24d : UObject {
	char pad_28[0x108]; // 0x28(0x108)
	int32 *afe4158bdb; // 0x130(0x04)
	int32 *ddc6465835; // 0x134(0x04)
	int32 SizeX; // 0x138(0x04)
	int32 SizeY; // 0x13c(0x04)
	int32 NumComponents; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString SourceFilePath; // 0x148(0x10)
	struct FString SourceFileTimestamp; // 0x158(0x10)
	struct TArray<struct USubstanceGraphInstance*> Consumers; // 0x168(0x10)
};

// Class SubstanceCore.SubstanceInstanceFactory
// Size: 0x80 (Inherited: 0x28)
struct USubstanceInstanceFactory : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FString *57d84bc913; // 0x38(0x10)
	struct FString *27288eadd1; // 0x48(0x10)
	struct FString *a523a70005; // 0x58(0x10)
	enum class *13790737e2 GenerationMode; // 0x68(0x01)
	char pad_69[0x17]; // 0x69(0x17)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x40 (Inherited: 0x28)
struct USubstanceSettings : UObject {
	int32 MemoryBudgetMb; // 0x28(0x04)
	int32 CPUCores; // 0x2c(0x04)
	int32 AsyncLoadMipClip; // 0x30(0x04)
	int32 MaxAsyncSubstancesRenderedPerFrame; // 0x34(0x04)
	enum class *13790737e2 DefaultGenerationMode; // 0x38(0x01)
	enum class *bb07988644 SubstanceEngine; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class SubstanceCore.*4200f35af8
// Size: 0x140 (Inherited: 0xd0)
struct U*4200f35af8 : U*ec6d9c8af4 {
	char pad_D0[0x40]; // 0xd0(0x40)
	struct USubstanceGraphInstance* *f0a6fad2a8; // 0x110(0x08)
	enum class *6486b70fc0 AddressX; // 0x118(0x01)
	enum class *6486b70fc0 AddressY; // 0x119(0x01)
	bool *70ad173c8a; // 0x11a(0x01)
	char pad_11B[0x25]; // 0x11b(0x25)

	void *8050b64b71(); // Function SubstanceCore.*4200f35af8.*8050b64b71 // None // @ game+0x65a0550
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x28 (Inherited: 0x28)
struct USubstanceUtility : UBlueprintFunctionLibrary {
};

