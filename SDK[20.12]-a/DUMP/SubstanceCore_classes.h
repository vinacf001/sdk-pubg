// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x118 (Inherited: 0x30)
struct USubstanceGraphInstance : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString *f8a800b889; // 0x38(0x10)
	struct USubstanceInstanceFactory* *0a8053a5ff; // 0x48(0x08)
	struct TMap<uint32, struct U*6edc29d316*> *c3beef1d1a; // 0x50(0x50)
	struct UMaterial* *af29fa1f37; // 0xa0(0x08)
	struct TMap<int32, struct FGuid> *473eed0089; // 0xa8(0x50)
	bool bIsFrozen; // 0xf8(0x01)
	char pad_F9[0x1f]; // 0xf9(0x1f)

	void *3f78557e8b(); // Function SubstanceCore.SubstanceGraphInstance.*3f78557e8b // Final|Native|Public|BlueprintCallable // @ game+0x6e02ba0
	void *e522e6ed03(); // Function SubstanceCore.SubstanceGraphInstance.*e522e6ed03 // Final|Native|Public|BlueprintCallable // @ game+0x6e02cf8
	void *7e917e5f05(); // Function SubstanceCore.SubstanceGraphInstance.*7e917e5f05 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6e03754
	void *c22cd237e1(); // Function SubstanceCore.SubstanceGraphInstance.*c22cd237e1 // Final|Native|Public|BlueprintCallable // @ game+0x6e03a34
	void *b79f9b8027(); // Function SubstanceCore.SubstanceGraphInstance.*b79f9b8027 // Final|Native|Public|BlueprintCallable // @ game+0x6e03048
	void *3710716f18(); // Function SubstanceCore.SubstanceGraphInstance.*3710716f18 // Final|Native|Public|BlueprintCallable // @ game+0x6e0261c
	void *4d63846913(); // Function SubstanceCore.SubstanceGraphInstance.*4d63846913 // Final|Native|Public|BlueprintCallable // @ game+0x6e0360c
	void *cd200dca14(); // Function SubstanceCore.SubstanceGraphInstance.*cd200dca14 // Final|Native|Public|BlueprintCallable // @ game+0x6e02830
	void *6873901a53(); // Function SubstanceCore.SubstanceGraphInstance.*6873901a53 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6e03b50
	void *2609f92f95(); // Function SubstanceCore.SubstanceGraphInstance.*2609f92f95 // Final|Native|Public|BlueprintCallable // @ game+0x6e02fac
	void *1452c32ddc(); // Function SubstanceCore.SubstanceGraphInstance.*1452c32ddc // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6e02938
	void *df9e9251c9(); // Function SubstanceCore.SubstanceGraphInstance.*df9e9251c9 // Final|Native|Public|BlueprintCallable // @ game+0x6e03cd4
	void *1fabc3d831(); // Function SubstanceCore.SubstanceGraphInstance.*1fabc3d831 // Final|Native|Public|BlueprintCallable // @ game+0x6e02d4c
	void *909e0a6850(); // Function SubstanceCore.SubstanceGraphInstance.*909e0a6850 // Final|Native|Public|BlueprintCallable // @ game+0x6e02ea4
	void *2796999591(); // Function SubstanceCore.SubstanceGraphInstance.*2796999591 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6e038b0
	void *7db0e8384e(); // Function SubstanceCore.SubstanceGraphInstance.*7db0e8384e // Final|Native|Public|BlueprintCallable // @ game+0x6e02a48
};

// Class SubstanceCore.*6edc29d316
// Size: 0x180 (Inherited: 0x30)
struct U*6edc29d316 : UObject {
	char pad_30[0x108]; // 0x30(0x108)
	int32 *8d9d4d928d; // 0x138(0x04)
	int32 *1593fabdcc; // 0x13c(0x04)
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
	struct FString *1a3d9a34b6; // 0x40(0x10)
	struct FString *67988f2a19; // 0x50(0x10)
	struct FString *bc77eeb920; // 0x60(0x10)
	enum class *0b89141342 GenerationMode; // 0x70(0x01)
	char pad_71[0x17]; // 0x71(0x17)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x48 (Inherited: 0x30)
struct USubstanceSettings : UObject {
	int32 MemoryBudgetMb; // 0x30(0x04)
	int32 CPUCores; // 0x34(0x04)
	int32 AsyncLoadMipClip; // 0x38(0x04)
	int32 MaxAsyncSubstancesRenderedPerFrame; // 0x3c(0x04)
	enum class *0b89141342 DefaultGenerationMode; // 0x40(0x01)
	enum class *1a44cc1bd2 SubstanceEngine; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class SubstanceCore.*43dced436a
// Size: 0x210 (Inherited: 0x1a0)
struct U*43dced436a : U*9c2462395a {
	char pad_1A0[0x40]; // 0x1a0(0x40)
	struct USubstanceGraphInstance* *f56a6f79f2; // 0x1e0(0x08)
	enum class *f13c8e8821 AddressX; // 0x1e8(0x01)
	enum class *f13c8e8821 AddressY; // 0x1e9(0x01)
	bool *e14a45882d; // 0x1ea(0x01)
	char pad_1EB[0x25]; // 0x1eb(0x25)

	void *7c03a73320(); // Function SubstanceCore.*43dced436a.*7c03a73320 // Final|Native|Public|BlueprintCallable // @ game+0x6e0251c
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x30 (Inherited: 0x30)
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void *77a684dc55(); // Function SubstanceCore.SubstanceUtility.*77a684dc55 // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6e01d38
	void *c893fa35bf(); // Function SubstanceCore.SubstanceUtility.*c893fa35bf // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e022c0
	void *2a0f66d694(); // Function SubstanceCore.SubstanceUtility.*2a0f66d694 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e0319c
	void *45b0359287(); // Function SubstanceCore.SubstanceUtility.*45b0359287 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e01f68
	void *920e70adad(); // Function SubstanceCore.SubstanceUtility.*920e70adad // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e0327c
	void *89e33b50c0(); // Function SubstanceCore.SubstanceUtility.*89e33b50c0 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e01c48
	void *4ff832c3b9(); // Function SubstanceCore.SubstanceUtility.*4ff832c3b9 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e0335c
	void *f786ba9d59(); // Function SubstanceCore.SubstanceUtility.*f786ba9d59 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e034f8
	void *491e5fbf15(); // Function SubstanceCore.SubstanceUtility.*491e5fbf15 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e02750
	void *386bbe35c8(); // Function SubstanceCore.SubstanceUtility.*386bbe35c8 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e03e50
	void *fe6fd29ada(); // Function SubstanceCore.SubstanceUtility.*fe6fd29ada // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e033e0
	void *f066d08cd8(); // Function SubstanceCore.SubstanceUtility.*f066d08cd8 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e0317c
	void *b1daacc642(); // Function SubstanceCore.SubstanceUtility.*b1daacc642 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e01bb4
	void *df77a4fe22(); // Function SubstanceCore.SubstanceUtility.*df77a4fe22 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e01c60
	void *b9724d19dc(); // Function SubstanceCore.SubstanceUtility.*b9724d19dc // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e02144
	void *03cca852e2(); // Function SubstanceCore.SubstanceUtility.*03cca852e2 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e0253c
	void *66a25539a9(); // Function SubstanceCore.SubstanceUtility.*66a25539a9 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6e0239c
};

