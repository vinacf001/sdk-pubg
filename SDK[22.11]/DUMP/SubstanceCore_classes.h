// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x110 (Inherited: 0x28)
struct USubstanceGraphInstance : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString *518b92fdfb; // 0x30(0x10)
	struct USubstanceInstanceFactory* *3318b5e8d5; // 0x40(0x08)
	struct TMap<uint32, struct U*d83e99e5e9*> *70e8be76a0; // 0x48(0x50)
	struct UMaterial* *e2bb37bfe5; // 0x98(0x08)
	struct TMap<int32, struct FGuid> *136e1bdd34; // 0xa0(0x50)
	bool bIsFrozen; // 0xf0(0x01)
	char pad_F1[0x1f]; // 0xf1(0x1f)

	void *dc3f07b4d8(struct FString InputName); // Function SubstanceCore.SubstanceGraphInstance.*dc3f07b4d8 // Final|Native|Public|BlueprintCallable // @ game+0x6721f84
	void *b91517abf1(); // Function SubstanceCore.SubstanceGraphInstance.*b91517abf1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6722834
	struct FString *74ffd3ace5(); // Function SubstanceCore.SubstanceGraphInstance.*74ffd3ace5 // Final|Native|Public|BlueprintCallable // @ game+0x6721b28
	struct FString *fd0dd1c8d5(); // Function SubstanceCore.SubstanceGraphInstance.*fd0dd1c8d5 // Final|Native|Public|BlueprintCallable // @ game+0x6721910
	void *bf2ecb469a(); // Function SubstanceCore.SubstanceGraphInstance.*bf2ecb469a // Final|Native|Public|BlueprintCallable // @ game+0x6721dd8
	struct FString *f27abb75b3(); // Function SubstanceCore.SubstanceGraphInstance.*f27abb75b3 // Final|Native|Public|BlueprintCallable // @ game+0x6721c80
	struct FString *7b8f314d7d(); // Function SubstanceCore.SubstanceGraphInstance.*7b8f314d7d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6721a18
	void *d0e5213b51(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.*d0e5213b51 // Final|Native|Public|BlueprintCallable // @ game+0x67226ec
	void *f81b040f93(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.*f81b040f93 // Final|Native|Public|BlueprintCallable // @ game+0x6722db4
	struct FString *9eaa426cdf(); // Function SubstanceCore.SubstanceGraphInstance.*9eaa426cdf // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6722990
	void *485584545c(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.*485584545c // Final|Native|Public|BlueprintCallable // @ game+0x67216fc
	void *5fb3fcb94d(); // Function SubstanceCore.SubstanceGraphInstance.*5fb3fcb94d // Final|Native|Public|BlueprintCallable // @ game+0x6721e2c
	struct FString *f770f1c64d(); // Function SubstanceCore.SubstanceGraphInstance.*f770f1c64d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6722c30
	struct FString *2674d5c869(struct UObject* Value); // Function SubstanceCore.SubstanceGraphInstance.*2674d5c869 // Final|Native|Public|BlueprintCallable // @ game+0x6722b14
	void *9dd14739e8(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.*9dd14739e8 // Final|Native|Public|BlueprintCallable // @ game+0x6722128
	void *b5b659422c(); // Function SubstanceCore.SubstanceGraphInstance.*b5b659422c // Final|Native|Public|BlueprintCallable // @ game+0x672208c
};

// Class SubstanceCore.*d83e99e5e9
// Size: 0x178 (Inherited: 0x28)
struct U*d83e99e5e9 : UObject {
	char pad_28[0x108]; // 0x28(0x108)
	int32 *b2fc8e16b7; // 0x130(0x04)
	int32 *7dc5b31355; // 0x134(0x04)
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
	struct FString *6fe98bf773; // 0x38(0x10)
	struct FString *f4919ddac7; // 0x48(0x10)
	struct FString *e8f9861c79; // 0x58(0x10)
	enum class *958d75e503 GenerationMode; // 0x68(0x01)
	char pad_69[0x17]; // 0x69(0x17)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x40 (Inherited: 0x28)
struct USubstanceSettings : UObject {
	int32 MemoryBudgetMb; // 0x28(0x04)
	int32 CPUCores; // 0x2c(0x04)
	int32 AsyncLoadMipClip; // 0x30(0x04)
	int32 MaxAsyncSubstancesRenderedPerFrame; // 0x34(0x04)
	enum class *958d75e503 DefaultGenerationMode; // 0x38(0x01)
	enum class *d4a9cda952 SubstanceEngine; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class SubstanceCore.*e192f30f5d
// Size: 0x200 (Inherited: 0x190)
struct U*e192f30f5d : U*ef97e2e879 {
	char pad_190[0x40]; // 0x190(0x40)
	struct USubstanceGraphInstance* *1112142495; // 0x1d0(0x08)
	enum class *5476cf1861 AddressX; // 0x1d8(0x01)
	enum class *5476cf1861 AddressY; // 0x1d9(0x01)
	bool *1f2987a336; // 0x1da(0x01)
	char pad_1DB[0x25]; // 0x1db(0x25)

	void *ae412adbcc(); // Function SubstanceCore.*e192f30f5d.*ae412adbcc // Final|Native|Public|BlueprintCallable // @ game+0x67215fc
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x28 (Inherited: 0x28)
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void *3c440969fc(); // Function SubstanceCore.SubstanceUtility.*3c440969fc // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x672227c
	struct USubstanceGraphInstance* *7b8742c2a9(); // Function SubstanceCore.SubstanceUtility.*7b8742c2a9 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x67213a0
	struct USubstanceInstanceFactory* *32fcdfe6e1(int32 OutputFactoryGraphIndex, struct TArray<struct F*94e6f00219> Connections); // Function SubstanceCore.SubstanceUtility.*32fcdfe6e1 // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6720e18
	int32 *37da4ad070(); // Function SubstanceCore.SubstanceUtility.*37da4ad070 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x67225d8
	struct USubstanceInstanceFactory* *be5c4ef4c3(int32 GraphDescIndex); // Function SubstanceCore.SubstanceUtility.*be5c4ef4c3 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6721048
	void *acabfddf7d(); // Function SubstanceCore.SubstanceUtility.*acabfddf7d // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x672147c
	enum class *0dde75f0cd *06a01dbb4f(); // Function SubstanceCore.SubstanceUtility.*06a01dbb4f // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x67224c0
	void *ed7cf0a511(); // Function SubstanceCore.SubstanceUtility.*ed7cf0a511 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6720c94
	void *87c3f447dc(); // Function SubstanceCore.SubstanceUtility.*87c3f447dc // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6721224
	void *5c95657969(); // Function SubstanceCore.SubstanceUtility.*5c95657969 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x672243c
	void *79d3c27ff7(struct UMaterialInterface* Material); // Function SubstanceCore.SubstanceUtility.*79d3c27ff7 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x672235c
	void *3d22ed9678(); // Function SubstanceCore.SubstanceUtility.*3d22ed9678 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6720d28
	void *8fe17dac0b(); // Function SubstanceCore.SubstanceUtility.*8fe17dac0b // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6721830
	void *2b3fc8f9ce(); // Function SubstanceCore.SubstanceUtility.*2b3fc8f9ce // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6722f30
	struct USubstanceGraphInstance* *a6a5360bf9(); // Function SubstanceCore.SubstanceUtility.*a6a5360bf9 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6720d40
	void *7567ce0dcb(); // Function SubstanceCore.SubstanceUtility.*7567ce0dcb // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x672225c
	void *db2f211faf(); // Function SubstanceCore.SubstanceUtility.*db2f211faf // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x672161c
};

