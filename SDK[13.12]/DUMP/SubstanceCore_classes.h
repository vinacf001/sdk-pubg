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

	void *3f78557e8b(); // Function SubstanceCore.SubstanceGraphInstance.*3f78557e8b // Final|Native|Public|BlueprintCallable // @ game+0x6adcdd8
	void *e522e6ed03(); // Function SubstanceCore.SubstanceGraphInstance.*e522e6ed03 // Final|Native|Public|BlueprintCallable // @ game+0x6adcf30
	void *7e917e5f05(); // Function SubstanceCore.SubstanceGraphInstance.*7e917e5f05 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6add98c
	void *c22cd237e1(); // Function SubstanceCore.SubstanceGraphInstance.*c22cd237e1 // Final|Native|Public|BlueprintCallable // @ game+0x6addc6c
	void *b79f9b8027(); // Function SubstanceCore.SubstanceGraphInstance.*b79f9b8027 // Final|Native|Public|BlueprintCallable // @ game+0x6add280
	void *3710716f18(); // Function SubstanceCore.SubstanceGraphInstance.*3710716f18 // Final|Native|Public|BlueprintCallable // @ game+0x6adc854
	void *4d63846913(struct FString Identifier, bool Bool); // Function SubstanceCore.SubstanceGraphInstance.*4d63846913 // Final|Native|Public|BlueprintCallable // @ game+0x6add844
	void *cd200dca14(struct FString Identifier, bool ReturnValue); // Function SubstanceCore.SubstanceGraphInstance.*cd200dca14 // Final|Native|Public|BlueprintCallable // @ game+0x6adca68
	void *6873901a53(struct FString Identifier, struct TArray<int32> InputValues); // Function SubstanceCore.SubstanceGraphInstance.*6873901a53 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6addd88
	void *2609f92f95(struct F*beb74c4065 ReturnValue); // Function SubstanceCore.SubstanceGraphInstance.*2609f92f95 // Final|Native|Public|BlueprintCallable // @ game+0x6add1e4
	void *1452c32ddc(struct FString Identifier, struct FLinearColor ReturnValue); // Function SubstanceCore.SubstanceGraphInstance.*1452c32ddc // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6adcb70
	void *df9e9251c9(struct FString Identifier, struct FString Value); // Function SubstanceCore.SubstanceGraphInstance.*df9e9251c9 // Final|Native|Public|BlueprintCallable // @ game+0x6addf0c
	void *1fabc3d831(struct FString Identifier, struct FString ReturnValue); // Function SubstanceCore.SubstanceGraphInstance.*1fabc3d831 // Final|Native|Public|BlueprintCallable // @ game+0x6adcf84
	void *909e0a6850(struct FString InputName, enum class *0e85b9465e ReturnValue); // Function SubstanceCore.SubstanceGraphInstance.*909e0a6850 // Final|Native|Public|BlueprintCallable // @ game+0x6add0dc
	void *2796999591(struct FString Identifier, struct TArray<float> InputValues); // Function SubstanceCore.SubstanceGraphInstance.*2796999591 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6addae8
	void *7db0e8384e(struct FString Identifier, struct TArray<float> ReturnValue); // Function SubstanceCore.SubstanceGraphInstance.*7db0e8384e // Final|Native|Public|BlueprintCallable // @ game+0x6adcc80
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

	void *7c03a73320(); // Function SubstanceCore.*43dced436a.*7c03a73320 // Final|Native|Public|BlueprintCallable // @ game+0x6adc754
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x30 (Inherited: 0x30)
struct USubstanceUtility : UBlueprintFunctionLibrary {
};

