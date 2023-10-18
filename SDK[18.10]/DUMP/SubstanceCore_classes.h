// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x118 (Inherited: 0x30)
struct USubstanceGraphInstance : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString *ab0d670509; // 0x38(0x10)
	struct USubstanceInstanceFactory* *bdb23a5566; // 0x48(0x08)
	struct TMap<uint32, struct U*3dec47dc88*> *e5fc51ad53; // 0x50(0x50)
	struct UMaterial* *77462bba2f; // 0xa0(0x08)
	struct TMap<int32, struct FGuid> *1a6f971d6a; // 0xa8(0x50)
	bool bIsFrozen; // 0xf8(0x01)
	char pad_F9[0x1f]; // 0xf9(0x1f)

	struct TArray<float> *37c7d226f2(); // Function SubstanceCore.SubstanceGraphInstance.*37c7d226f2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x660e51c
	struct F*28360cb8d9 *b4f6366bfe(); // Function SubstanceCore.SubstanceGraphInstance.*b4f6366bfe // Final|Native|Public|BlueprintCallable // @ game+0x660d288
	struct FString *679f696f61(); // Function SubstanceCore.SubstanceGraphInstance.*679f696f61 // Final|Native|Public|BlueprintCallable // @ game+0x660e940
	struct F*a82c3d2872 *13e4278e9a(); // Function SubstanceCore.SubstanceGraphInstance.*13e4278e9a // Final|Native|Public|BlueprintCallable // @ game+0x660dcb4
	struct TArray<float> *a4ff967ea5(); // Function SubstanceCore.SubstanceGraphInstance.*a4ff967ea5 // Final|Native|Public|BlueprintCallable // @ game+0x660d6b4
	bool *7b633eee7e(); // Function SubstanceCore.SubstanceGraphInstance.*7b633eee7e // Final|Native|Public|BlueprintCallable // @ game+0x660e278
	struct FString *6732bc54fa(); // Function SubstanceCore.SubstanceGraphInstance.*6732bc54fa // Final|Native|Public|BlueprintCallable // @ game+0x660d9b8
	struct TArray<struct FString> *1e40ae8570(); // Function SubstanceCore.SubstanceGraphInstance.*1e40ae8570 // Final|Native|Public|BlueprintCallable // @ game+0x660d964
	struct FLinearColor *baf59858bd(); // Function SubstanceCore.SubstanceGraphInstance.*baf59858bd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x660d5a4
	struct TArray<int32> *68f593e87d(); // Function SubstanceCore.SubstanceGraphInstance.*68f593e87d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x660e7bc
	struct F*dc524197be *85b7f874c9(); // Function SubstanceCore.SubstanceGraphInstance.*85b7f874c9 // Final|Native|Public|BlueprintCallable // @ game+0x660dc18
	enum class *1ba95bd775 *9ffe4942e6(); // Function SubstanceCore.SubstanceGraphInstance.*9ffe4942e6 // Final|Native|Public|BlueprintCallable // @ game+0x660db10
	bool *0415b66141(); // Function SubstanceCore.SubstanceGraphInstance.*0415b66141 // Final|Native|Public|BlueprintCallable // @ game+0x660e6a0
	struct FLinearColor *9b2c71dcb2(); // Function SubstanceCore.SubstanceGraphInstance.*9b2c71dcb2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x660e3c0
	bool *cffb5e012c(); // Function SubstanceCore.SubstanceGraphInstance.*cffb5e012c // Final|Native|Public|BlueprintCallable // @ game+0x660d49c
	struct TArray<int32> *e352e3cfcb(); // Function SubstanceCore.SubstanceGraphInstance.*e352e3cfcb // Final|Native|Public|BlueprintCallable // @ game+0x660d80c
};

// Class SubstanceCore.*3dec47dc88
// Size: 0x180 (Inherited: 0x30)
struct U*3dec47dc88 : UObject {
	char pad_30[0x108]; // 0x30(0x108)
	int32 *b207f8f48e; // 0x138(0x04)
	int32 *424968a57c; // 0x13c(0x04)
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
	struct FString *196aaf505b; // 0x40(0x10)
	struct FString *d0de12d566; // 0x50(0x10)
	struct FString *f5a509715f; // 0x60(0x10)
	enum class *0f070df956 GenerationMode; // 0x70(0x01)
	char pad_71[0x17]; // 0x71(0x17)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x48 (Inherited: 0x30)
struct USubstanceSettings : UObject {
	int32 MemoryBudgetMb; // 0x30(0x04)
	int32 CPUCores; // 0x34(0x04)
	int32 AsyncLoadMipClip; // 0x38(0x04)
	int32 MaxAsyncSubstancesRenderedPerFrame; // 0x3c(0x04)
	enum class *0f070df956 DefaultGenerationMode; // 0x40(0x01)
	enum class *a9f97beeed SubstanceEngine; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class SubstanceCore.*ca364f24a9
// Size: 0x210 (Inherited: 0x1a0)
struct U*ca364f24a9 : U*0aab017b56 {
	char pad_1A0[0x40]; // 0x1a0(0x40)
	struct USubstanceGraphInstance* *de67f705ee; // 0x1e0(0x08)
	enum class *8e17248832 AddressX; // 0x1e8(0x01)
	enum class *8e17248832 AddressY; // 0x1e9(0x01)
	bool *289218a858; // 0x1ea(0x01)
	char pad_1EB[0x25]; // 0x1eb(0x25)

	enum class ESubChannelType *867f7e947a(); // Function SubstanceCore.*ca364f24a9.*867f7e947a // Final|Native|Public|BlueprintCallable // @ game+0x660d188
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x30 (Inherited: 0x30)
struct USubstanceUtility : UBlueprintFunctionLibrary {

	struct FString *a8bdb9633d(); // Function SubstanceCore.SubstanceUtility.*a8bdb9633d // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660d1a8
	struct TArray<struct U*ca364f24a9*> *90982ce43c(); // Function SubstanceCore.SubstanceUtility.*90982ce43c // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660de08
	struct TArray<int32> *3ee72a85ab(); // Function SubstanceCore.SubstanceUtility.*3ee72a85ab // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660cdb8
	int32 *cec214b5ef(); // Function SubstanceCore.SubstanceUtility.*cec214b5ef // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660e164
	struct USubstanceGraphInstance* *8585e5033f(); // Function SubstanceCore.SubstanceUtility.*8585e5033f // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660c8d4
	struct USubstanceGraphInstance* *75886e98c4(); // Function SubstanceCore.SubstanceUtility.*75886e98c4 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660cf34
	struct USubstanceGraphInstance* *dc34888953(); // Function SubstanceCore.SubstanceUtility.*dc34888953 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660cbdc
	float *f9334abc3d(); // Function SubstanceCore.SubstanceUtility.*f9334abc3d // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660dde8
	enum class *83bcf75a81 *a0831ae853(); // Function SubstanceCore.SubstanceUtility.*a0831ae853 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660e04c
	void *d9f9950abb(); // Function SubstanceCore.SubstanceUtility.*d9f9950abb // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660c8bc
	struct USubstanceInstanceFactory* *841e3c90d1(); // Function SubstanceCore.SubstanceUtility.*841e3c90d1 // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x660c9ac
	struct USubstanceGraphInstance* *e8e53fe78b(); // Function SubstanceCore.SubstanceUtility.*e8e53fe78b // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660dfc8
	struct USubstanceGraphInstance* *17fd007752(); // Function SubstanceCore.SubstanceUtility.*17fd007752 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660eabc
	struct USubstanceGraphInstance* *6703d4ac73(); // Function SubstanceCore.SubstanceUtility.*6703d4ac73 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660c828
	struct TArray<struct USubstanceGraphInstance*> *26f6305b38(); // Function SubstanceCore.SubstanceUtility.*26f6305b38 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660dee8
	struct TArray<int32> *d854c6458f(); // Function SubstanceCore.SubstanceUtility.*d854c6458f // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660d010
	struct FString *070e4f5b9f(); // Function SubstanceCore.SubstanceUtility.*070e4f5b9f // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660d3bc
};

