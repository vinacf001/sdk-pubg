// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x118 (Inherited: 0x30)
struct USubstanceGraphInstance : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString *518b92fdfb; // 0x38(0x10)
	struct USubstanceInstanceFactory* *3318b5e8d5; // 0x48(0x08)
	struct TMap<uint32, struct U*d83e99e5e9*> *70e8be76a0; // 0x50(0x50)
	struct UMaterial* *e2bb37bfe5; // 0xa0(0x08)
	struct TMap<int32, struct FGuid> *136e1bdd34; // 0xa8(0x50)
	bool bIsFrozen; // 0xf8(0x01)
	char pad_F9[0x1f]; // 0xf9(0x1f)

	void *dc3f07b4d8(); // Function SubstanceCore.SubstanceGraphInstance.*dc3f07b4d8 // Final|Native|Public|BlueprintCallable // @ game+0x6941480
	void *b91517abf1(); // Function SubstanceCore.SubstanceGraphInstance.*b91517abf1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6941d30
	void *74ffd3ace5(); // Function SubstanceCore.SubstanceGraphInstance.*74ffd3ace5 // Final|Native|Public|BlueprintCallable // @ game+0x6941024
	void *fd0dd1c8d5(); // Function SubstanceCore.SubstanceGraphInstance.*fd0dd1c8d5 // Final|Native|Public|BlueprintCallable // @ game+0x6940e0c
	void *bf2ecb469a(); // Function SubstanceCore.SubstanceGraphInstance.*bf2ecb469a // Final|Native|Public|BlueprintCallable // @ game+0x69412d4
	void *f27abb75b3(); // Function SubstanceCore.SubstanceGraphInstance.*f27abb75b3 // Final|Native|Public|BlueprintCallable // @ game+0x694117c
	void *7b8f314d7d(); // Function SubstanceCore.SubstanceGraphInstance.*7b8f314d7d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6940f14
	void *d0e5213b51(); // Function SubstanceCore.SubstanceGraphInstance.*d0e5213b51 // Final|Native|Public|BlueprintCallable // @ game+0x6941be8
	void *f81b040f93(); // Function SubstanceCore.SubstanceGraphInstance.*f81b040f93 // Final|Native|Public|BlueprintCallable // @ game+0x69422b0
	void *9eaa426cdf(); // Function SubstanceCore.SubstanceGraphInstance.*9eaa426cdf // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6941e8c
	void *485584545c(); // Function SubstanceCore.SubstanceGraphInstance.*485584545c // Final|Native|Public|BlueprintCallable // @ game+0x6940bf8
	void *5fb3fcb94d(); // Function SubstanceCore.SubstanceGraphInstance.*5fb3fcb94d // Final|Native|Public|BlueprintCallable // @ game+0x6941328
	void *f770f1c64d(); // Function SubstanceCore.SubstanceGraphInstance.*f770f1c64d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x694212c
	void *2674d5c869(); // Function SubstanceCore.SubstanceGraphInstance.*2674d5c869 // Final|Native|Public|BlueprintCallable // @ game+0x6942010
	void *9dd14739e8(); // Function SubstanceCore.SubstanceGraphInstance.*9dd14739e8 // Final|Native|Public|BlueprintCallable // @ game+0x6941624
	void *b5b659422c(); // Function SubstanceCore.SubstanceGraphInstance.*b5b659422c // Final|Native|Public|BlueprintCallable // @ game+0x6941588
};

// Class SubstanceCore.*d83e99e5e9
// Size: 0x180 (Inherited: 0x30)
struct U*d83e99e5e9 : UObject {
	char pad_30[0x108]; // 0x30(0x108)
	int32 *b2fc8e16b7; // 0x138(0x04)
	int32 *7dc5b31355; // 0x13c(0x04)
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
	struct FString *6fe98bf773; // 0x40(0x10)
	struct FString *f4919ddac7; // 0x50(0x10)
	struct FString *e8f9861c79; // 0x60(0x10)
	enum class *958d75e503 GenerationMode; // 0x70(0x01)
	char pad_71[0x17]; // 0x71(0x17)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x48 (Inherited: 0x30)
struct USubstanceSettings : UObject {
	int32 MemoryBudgetMb; // 0x30(0x04)
	int32 CPUCores; // 0x34(0x04)
	int32 AsyncLoadMipClip; // 0x38(0x04)
	int32 MaxAsyncSubstancesRenderedPerFrame; // 0x3c(0x04)
	enum class *958d75e503 DefaultGenerationMode; // 0x40(0x01)
	enum class *d4a9cda952 SubstanceEngine; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class SubstanceCore.*e192f30f5d
// Size: 0x210 (Inherited: 0x1a0)
struct U*e192f30f5d : U*ef97e2e879 {
	char pad_1A0[0x40]; // 0x1a0(0x40)
	struct USubstanceGraphInstance* *1112142495; // 0x1e0(0x08)
	enum class *5476cf1861 AddressX; // 0x1e8(0x01)
	enum class *5476cf1861 AddressY; // 0x1e9(0x01)
	bool *1f2987a336; // 0x1ea(0x01)
	char pad_1EB[0x25]; // 0x1eb(0x25)

	void *ae412adbcc(); // Function SubstanceCore.*e192f30f5d.*ae412adbcc // Final|Native|Public|BlueprintCallable // @ game+0x6940af8
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x30 (Inherited: 0x30)
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void *3c440969fc(); // Function SubstanceCore.SubstanceUtility.*3c440969fc // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6941778
	void *7b8742c2a9(); // Function SubstanceCore.SubstanceUtility.*7b8742c2a9 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x694089c
	void *32fcdfe6e1(); // Function SubstanceCore.SubstanceUtility.*32fcdfe6e1 // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6940314
	void *37da4ad070(); // Function SubstanceCore.SubstanceUtility.*37da4ad070 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6941ad4
	void *be5c4ef4c3(); // Function SubstanceCore.SubstanceUtility.*be5c4ef4c3 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6940544
	void *acabfddf7d(); // Function SubstanceCore.SubstanceUtility.*acabfddf7d // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6940978
	void *06a01dbb4f(); // Function SubstanceCore.SubstanceUtility.*06a01dbb4f // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x69419bc
	void *ed7cf0a511(); // Function SubstanceCore.SubstanceUtility.*ed7cf0a511 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6940190
	void *87c3f447dc(); // Function SubstanceCore.SubstanceUtility.*87c3f447dc // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6940720
	void *5c95657969(); // Function SubstanceCore.SubstanceUtility.*5c95657969 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6941938
	void *79d3c27ff7(); // Function SubstanceCore.SubstanceUtility.*79d3c27ff7 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6941858
	void *3d22ed9678(); // Function SubstanceCore.SubstanceUtility.*3d22ed9678 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6940224
	void *8fe17dac0b(); // Function SubstanceCore.SubstanceUtility.*8fe17dac0b // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6940d2c
	void *2b3fc8f9ce(); // Function SubstanceCore.SubstanceUtility.*2b3fc8f9ce // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x694242c
	void *a6a5360bf9(); // Function SubstanceCore.SubstanceUtility.*a6a5360bf9 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x694023c
	void *7567ce0dcb(); // Function SubstanceCore.SubstanceUtility.*7567ce0dcb // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6941758
	void *db2f211faf(); // Function SubstanceCore.SubstanceUtility.*db2f211faf // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6940b18
};

