// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x110 (Inherited: 0x28)
struct USubstanceGraphInstance : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString *ab0d670509[0x10]; // 0x30(0x10)
	struct USubstanceInstanceFactory* *bdb23a5566[0x08]; // 0x40(0x08)
	struct TMap<uint32, struct U*3dec47dc88*> *e5fc51ad53[0x50]; // 0x48(0x50)
	struct UMaterial* *77462bba2f[0x08]; // 0x98(0x08)
	struct TMap<int32, struct FGuid> *1a6f971d6a[0x50]; // 0xa0(0x50)
	bool bIsFrozen; // 0xf0(0x01)
	char pad_F1[0x1f]; // 0xf1(0x1f)

	struct FString *37c7d226f2(); // Function SubstanceCore.SubstanceGraphInstance.*37c7d226f2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680e59c
	void *b4f6366bfe(struct FString* Identifier); // Function SubstanceCore.SubstanceGraphInstance.*b4f6366bfe // Final|Native|Public|BlueprintCallable // @ game+0x680d308
	void *679f696f61(); // Function SubstanceCore.SubstanceGraphInstance.*679f696f61 // Final|Native|Public|BlueprintCallable // @ game+0x680e9c0
	struct FString *13e4278e9a(); // Function SubstanceCore.SubstanceGraphInstance.*13e4278e9a // Final|Native|Public|BlueprintCallable // @ game+0x680dd34
	void *a4ff967ea5(struct FString* Identifier); // Function SubstanceCore.SubstanceGraphInstance.*a4ff967ea5 // Final|Native|Public|BlueprintCallable // @ game+0x680d734
	void *7b633eee7e(); // Function SubstanceCore.SubstanceGraphInstance.*7b633eee7e // Final|Native|Public|BlueprintCallable // @ game+0x680e2f8
	struct FString *6732bc54fa(); // Function SubstanceCore.SubstanceGraphInstance.*6732bc54fa // Final|Native|Public|BlueprintCallable // @ game+0x680da38
	void *1e40ae8570(); // Function SubstanceCore.SubstanceGraphInstance.*1e40ae8570 // Final|Native|Public|BlueprintCallable // @ game+0x680d9e4
	void *baf59858bd(struct FString* Identifier); // Function SubstanceCore.SubstanceGraphInstance.*baf59858bd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x680d624
	void *68f593e87d(); // Function SubstanceCore.SubstanceGraphInstance.*68f593e87d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x680e83c
	void *85b7f874c9(); // Function SubstanceCore.SubstanceGraphInstance.*85b7f874c9 // Final|Native|Public|BlueprintCallable // @ game+0x680dc98
	struct FString *9ffe4942e6(); // Function SubstanceCore.SubstanceGraphInstance.*9ffe4942e6 // Final|Native|Public|BlueprintCallable // @ game+0x680db90
	void *0415b66141(struct UObject** Value); // Function SubstanceCore.SubstanceGraphInstance.*0415b66141 // Final|Native|Public|BlueprintCallable // @ game+0x680e720
	struct FString *9b2c71dcb2(); // Function SubstanceCore.SubstanceGraphInstance.*9b2c71dcb2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x680e440
	struct FString *cffb5e012c(); // Function SubstanceCore.SubstanceGraphInstance.*cffb5e012c // Final|Native|Public|BlueprintCallable // @ game+0x680d51c
	void *e352e3cfcb(struct FString* Identifier); // Function SubstanceCore.SubstanceGraphInstance.*e352e3cfcb // Final|Native|Public|BlueprintCallable // @ game+0x680d88c
};

// Class SubstanceCore.*3dec47dc88
// Size: 0x178 (Inherited: 0x28)
struct U*3dec47dc88 : UObject {
	char pad_28[0x108]; // 0x28(0x108)
	int32 *b207f8f48e[0x04]; // 0x130(0x04)
	int32 *424968a57c[0x04]; // 0x134(0x04)
	int32 SizeX[0x04]; // 0x138(0x04)
	int32 SizeY[0x04]; // 0x13c(0x04)
	int32 NumComponents[0x04]; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString SourceFilePath[0x10]; // 0x148(0x10)
	struct FString SourceFileTimestamp[0x10]; // 0x158(0x10)
	struct TArray<struct USubstanceGraphInstance*> Consumers[0x10]; // 0x168(0x10)
};

// Class SubstanceCore.SubstanceInstanceFactory
// Size: 0x80 (Inherited: 0x28)
struct USubstanceInstanceFactory : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FString *196aaf505b[0x10]; // 0x38(0x10)
	struct FString *d0de12d566[0x10]; // 0x48(0x10)
	struct FString *f5a509715f[0x10]; // 0x58(0x10)
	enum class *0f070df956 GenerationMode; // 0x68(0x01)
	char pad_69[0x17]; // 0x69(0x17)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x40 (Inherited: 0x28)
struct USubstanceSettings : UObject {
	int32 MemoryBudgetMb[0x04]; // 0x28(0x04)
	int32 CPUCores[0x04]; // 0x2c(0x04)
	int32 AsyncLoadMipClip[0x04]; // 0x30(0x04)
	int32 MaxAsyncSubstancesRenderedPerFrame[0x04]; // 0x34(0x04)
	enum class *0f070df956 DefaultGenerationMode; // 0x38(0x01)
	enum class *a9f97beeed SubstanceEngine; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class SubstanceCore.*ca364f24a9
// Size: 0x200 (Inherited: 0x190)
struct U*ca364f24a9 : U*0aab017b56 {
	char pad_190[0x40]; // 0x190(0x40)
	struct USubstanceGraphInstance* *de67f705ee[0x08]; // 0x1d0(0x08)
	enum class *8e17248832 AddressX; // 0x1d8(0x01)
	enum class *8e17248832 AddressY; // 0x1d9(0x01)
	bool *289218a858; // 0x1da(0x01)
	char pad_1DB[0x25]; // 0x1db(0x25)

	void *867f7e947a(); // Function SubstanceCore.*ca364f24a9.*867f7e947a // Final|Native|Public|BlueprintCallable // @ game+0x680d208
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x28 (Inherited: 0x28)
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void *a8bdb9633d(struct USubstanceGraphInstance** GraphInstance); // Function SubstanceCore.SubstanceUtility.*a8bdb9633d // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680d228
	struct USubstanceGraphInstance* *90982ce43c(); // Function SubstanceCore.SubstanceUtility.*90982ce43c // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680de88
	struct USubstanceGraphInstance* *3ee72a85ab(); // Function SubstanceCore.SubstanceUtility.*3ee72a85ab // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680ce38
	void *cec214b5ef(struct USubstanceGraphInstance** GraphInstance); // Function SubstanceCore.SubstanceUtility.*cec214b5ef // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680e1e4
	struct USubstanceGraphInstance* *8585e5033f(); // Function SubstanceCore.SubstanceUtility.*8585e5033f // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680c954
	struct USubstanceGraphInstance* *75886e98c4(); // Function SubstanceCore.SubstanceUtility.*75886e98c4 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680cfb4
	void *dc34888953(struct UObject** WorldContextObject, int32* GraphDescIndex); // Function SubstanceCore.SubstanceUtility.*dc34888953 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680cc5c
	void *f9334abc3d(); // Function SubstanceCore.SubstanceUtility.*f9334abc3d // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680de68
	enum class *83bcf75a81 *a0831ae853(); // Function SubstanceCore.SubstanceUtility.*a0831ae853 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680e0cc
	void *d9f9950abb(); // Function SubstanceCore.SubstanceUtility.*d9f9950abb // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680c93c
	struct TArray<struct F*8f12134eea> *841e3c90d1(struct USubstanceInstanceFactory** OutputFactory, struct USubstanceInstanceFactory** InputFactory); // Function SubstanceCore.SubstanceUtility.*841e3c90d1 // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x680ca2c
	void *e8e53fe78b(); // Function SubstanceCore.SubstanceUtility.*e8e53fe78b // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680e048
	void *17fd007752(); // Function SubstanceCore.SubstanceUtility.*17fd007752 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680eb3c
	void *6703d4ac73(); // Function SubstanceCore.SubstanceUtility.*6703d4ac73 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680c8a8
	struct UMaterialInterface* *26f6305b38(); // Function SubstanceCore.SubstanceUtility.*26f6305b38 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680df68
	struct USubstanceGraphInstance* *d854c6458f(); // Function SubstanceCore.SubstanceUtility.*d854c6458f // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680d090
	void *070e4f5b9f(); // Function SubstanceCore.SubstanceUtility.*070e4f5b9f // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x680d43c
};

