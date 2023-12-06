// Class CustomizableObject.CustomizableSkeletalComponent
// Size: 0x4d0 (Inherited: 0x470)
struct UCustomizableSkeletalComponent : USceneComponent {
	bool *e813a54786; // 0x468(0x01)
	float *1d2ba3b163; // 0x46c(0x04)
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x470(0x08)
	char pad_47D[0x43]; // 0x47d(0x43)
	struct USkeletalMesh* *974981676c; // 0x4c0(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)

	void *a8e9e7d3e0(bool bNeverSkipUpdate); // Function CustomizableObject.CustomizableSkeletalComponent.*a8e9e7d3e0 // Final|Native|Public|BlueprintCallable // @ game+0x6e5c610
};

// Class CustomizableObject.*3e08b59f4f
// Size: 0x30 (Inherited: 0x30)
struct U*3e08b59f4f : UObject {
};

// Class CustomizableObject.*e6ade414e7
// Size: 0x90 (Inherited: 0x30)
struct U*e6ade414e7 : U*3e08b59f4f {
	char pad_30[0x60]; // 0x30(0x60)
};

// Class CustomizableObject.CustomizableObjectInstance
// Size: 0x210 (Inherited: 0x30)
struct UCustomizableObjectInstance : UObject {
	struct UCustomizableObject* CustomizableObject; // 0x30(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x38(0x08)
	struct TArray<struct F*69023b25c5> *3b84f9a284; // 0x40(0x10)
	struct TArray<struct F*7c726e0f51> *1851c7d0e5; // 0x50(0x10)
	struct TArray<struct F*cc9a69d266> *f1f1b8b69d; // 0x60(0x10)
	struct TArray<struct F*04ca878293> *b657fcda0f; // 0x70(0x10)
	struct TArray<struct F*0db63c8cfd> *2ad6093b9c; // 0x80(0x10)
	struct TArray<struct F*51dbd3ab4e> *f145bdf4d7; // 0x90(0x10)
	bool bBuildParameterDecorations; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastDelegate UpdatedDelegate; // 0xa8(0x10)
	char pad_B8[0x98]; // 0xb8(0x98)
	struct FString *38d8d3dbcc; // 0x150(0x10)
	char pad_160[0x80]; // 0x160(0x80)
	struct FGuid *c749f10124; // 0x1e0(0x10)
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct U*4e72984704* *beb441889c; // 0x1f8(0x08)
	char pad_200[0x10]; // 0x200(0x10)

	int32 *9c18ebb515(float dirX, float dirY, float dirZ, float upX); // Function CustomizableObject.CustomizableObjectInstance.*9c18ebb515 // Final|Native|Public|BlueprintCallable // @ game+0x6e5bec0
	struct FString *365746b63a(); // Function CustomizableObject.CustomizableObjectInstance.*365746b63a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59c70
	int32 *d556751839(); // Function CustomizableObject.CustomizableObjectInstance.*d556751839 // Final|Native|Public|BlueprintCallable // @ game+0x6e5ba70
	bool *9376f67b43(); // Function CustomizableObject.CustomizableObjectInstance.*9376f67b43 // Final|Native|Public|BlueprintCallable // @ game+0x6e5b740
	enum class ECustomizableObjectProjectorType *e9799350b1(); // Function CustomizableObject.CustomizableObjectInstance.*e9799350b1 // Final|Native|Public|BlueprintCallable // @ game+0x6e5bd64
	struct UTexture2D* *49095dc447(); // Function CustomizableObject.CustomizableObjectInstance.*49095dc447 // Final|Native|Public|BlueprintCallable // @ game+0x6e59de0
	struct FVector *bbf652ba2f(); // Function CustomizableObject.CustomizableObjectInstance.*bbf652ba2f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a5d0
	int32 *8657fb894f(); // Function CustomizableObject.CustomizableObjectInstance.*8657fb894f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59208
	void *6949d26527(struct FString ParamName, struct FVector ReturnValue); // Function CustomizableObject.CustomizableObjectInstance.*6949d26527 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a814
	void *fba39c8f2c(struct FString FloatParamName); // Function CustomizableObject.CustomizableObjectInstance.*fba39c8f2c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5999c
	void *2f0b22553e(bool ReturnValue); // Function CustomizableObject.CustomizableObjectInstance.*2f0b22553e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59708
	void *3098535261(struct FString ParamName, bool ReturnValue); // Function CustomizableObject.CustomizableObjectInstance.*3098535261 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5b5b8
	void *b8cdb9bae9(); // Function CustomizableObject.CustomizableObjectInstance.*b8cdb9bae9 // Final|Native|Public|BlueprintCallable // @ game+0x6e5c458
	void *d0819a6d01(); // Function CustomizableObject.CustomizableObjectInstance.*d0819a6d01 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59800
	void *6a9eca5945(struct FString ParamName, int32 ReturnValue); // Function CustomizableObject.CustomizableObjectInstance.*6a9eca5945 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59610
	void *a8e9e7d3e0(); // Function CustomizableObject.CustomizableObjectInstance.*a8e9e7d3e0 // Final|Native|Public|BlueprintCallable // @ game+0x6e5c514
	bool *015567b352(struct FVector OutPos, struct FVector OutDir, struct FVector OutUp, struct FVector OutScale); // Function CustomizableObject.CustomizableObjectInstance.*015567b352 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6e5ab8c
	int32 *a531ab5428(); // Function CustomizableObject.CustomizableObjectInstance.*a531ab5428 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e592d4
	float *800cb06b35(); // Function CustomizableObject.CustomizableObjectInstance.*800cb06b35 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a500
	struct FVector *1a8711766e(); // Function CustomizableObject.CustomizableObjectInstance.*1a8711766e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5aa64
	struct FString *e17c41f636(); // Function CustomizableObject.CustomizableObjectInstance.*e17c41f636 // Final|Native|Public|BlueprintCallable // @ game+0x6e5b9a4
	enum class ECustomizableObjectProjectorType *6b7c058383(); // Function CustomizableObject.CustomizableObjectInstance.*6b7c058383 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a6f8
	struct FLinearColor *5d7249b316(); // Function CustomizableObject.CustomizableObjectInstance.*5d7249b316 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6e5b860
	int32 *b26c20d6d7(); // Function CustomizableObject.CustomizableObjectInstance.*b26c20d6d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e593a0
	int32 *0f82085434(); // Function CustomizableObject.CustomizableObjectInstance.*0f82085434 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59544
	struct FLinearColor *5074cc4b7c(); // Function CustomizableObject.CustomizableObjectInstance.*5074cc4b7c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6e5b860
	struct FString *ad2e65282b(int32 RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.*ad2e65282b // Final|Native|Public|BlueprintCallable // @ game+0x6e5bbd0
	void *8d21137637(struct FString ParamName, struct FVector ReturnValue); // Function CustomizableObject.CustomizableObjectInstance.*8d21137637 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a93c
	void *845e61da8c(); // Function CustomizableObject.CustomizableObjectInstance.*845e61da8c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59904
	void Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone // Final|Native|Public|BlueprintCallable // @ game+0x6e591c0
};

// Class CustomizableObject.*4e72984704
// Size: 0x3f8 (Inherited: 0x30)
struct U*4e72984704 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*c5f93f9764> *2ce40db934; // 0x38(0x10)
	struct TArray<struct F*6830312c62> *74339671b6; // 0x48(0x10)
	struct TArray<struct F*1e04cb4073> *0d1a5aac9e; // 0x58(0x10)
	char pad_68[0x88]; // 0x68(0x88)
	struct TArray<struct F*ef3f9c7b03> *ef3f9c7b03; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)
	struct TMap<struct FString, struct UTexture2D*> *7615786980; // 0x110(0x50)
	char pad_160[0x1c8]; // 0x160(0x1c8)
	struct TArray<struct UMaterialInterface*> *39abd6da5d; // 0x328(0x10)
	char pad_338[0xa0]; // 0x338(0xa0)
	struct TArray<struct UPhysicsAsset*> *988b06e01a; // 0x3d8(0x10)
	char pad_3E8[0x10]; // 0x3e8(0x10)
};

// Class CustomizableObject.*a1ad715957
// Size: 0x30 (Inherited: 0x30)
struct U*a1ad715957 : UObject {
};

// Class CustomizableObject.*2b894a1b36
// Size: 0xd0 (Inherited: 0x30)
struct U*2b894a1b36 : UObject {
	struct TMap<struct FString, struct FString> Materials; // 0x30(0x50)
	struct TMap<struct FString, struct F*995768d2c9> Textures; // 0x80(0x50)
};

// Class CustomizableObject.CustomizableObject
// Size: 0x2d0 (Inherited: 0x30)
struct UCustomizableObject : UObject {
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x30(0x08)
	struct UStaticMesh* *17d9237694; // 0x38(0x08)
	enum class ECustomizableObjectRelevancy Relevancy; // 0x40(0x01)
	bool *c9cec02573; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct TArray<struct UMaterialInterface*> *39abd6da5d; // 0x48(0x10)
	struct TArray<struct F*57ca87e627> *b58269eca7; // 0x58(0x10)
	struct TMap<struct FString, struct F*b808435aa2> *604b534ae4; // 0x68(0x50)
	struct TArray<struct UMorphTarget*> *97752f1e50; // 0xb8(0x10)
	struct TArray<struct F*c48cd3638c> *eb756d6185; // 0xc8(0x10)
	struct FGuid *f834dcacca; // 0xd8(0x10)
	struct TArray<struct F*4b71e70d32> *1b2f5bf0b8; // 0xe8(0x10)
	char pad_F8[0xa8]; // 0xf8(0xa8)
	struct TMap<struct FString, struct F*411563e551> *dd2d1ec299; // 0x1a0(0x50)
	struct TMap<struct FString, struct F*411563e551> *a968afb17b; // 0x1f0(0x50)
	struct TMap<struct FString, struct UPhysicsAsset*> *ad8552bf33; // 0x240(0x50)
	struct U*2b894a1b36* MaskOutCache; // 0x290(0x20)
	bool *fb62db2ee0; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct U*2b894a1b36* *b877f91c7f; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)

	struct FString *8f7f381714(); // Function CustomizableObject.CustomizableObject.*8f7f381714 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5b0d4
	void *082d60f8e8(); // Function CustomizableObject.CustomizableObject.*082d60f8e8 // Final|Native|Public|BlueprintCallable // @ game+0x6e5b6a0
	struct FString *4abbf556d0(); // Function CustomizableObject.CustomizableObject.*4abbf556d0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a03c
	int32 *dac0a00c17(); // Function CustomizableObject.CustomizableObject.*dac0a00c17 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59f4c
	int32 *56f2538f09(); // Function CustomizableObject.CustomizableObject.*56f2538f09 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59478
	void *8fd0db92fb(int32 ParamIndex, int32 ReturnValue); // Function CustomizableObject.CustomizableObject.*8fd0db92fb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59bd0
	void *d74e430c22(); // Function CustomizableObject.CustomizableObject.*d74e430c22 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a378
	void *bed65c6cd3(int32 ReturnValue); // Function CustomizableObject.CustomizableObject.*bed65c6cd3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5aff0
	void *3a9d8e54f5(int32 ParamIndex); // Function CustomizableObject.CustomizableObject.*3a9d8e54f5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a0e4
	void *7262c08386(); // Function CustomizableObject.CustomizableObject.*7262c08386 // Final|Native|Public|BlueprintCallable // @ game+0x6e5c4fc
	void *cc5df1ca87(struct FString ReturnValue); // Function CustomizableObject.CustomizableObject.*cc5df1ca87 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5af00
	void *dea66cfcfd(int32 StateIndex, struct F*411563e551 ReturnValue); // Function CustomizableObject.CustomizableObject.*dea66cfcfd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5b3a4
	void CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x6e591e4
	void *1918a21136(bool ReturnValue); // Function CustomizableObject.CustomizableObject.*1918a21136 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5b50c
	void *aaad51ffd1(int32 ReturnValue); // Function CustomizableObject.CustomizableObject.*aaad51ffd1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59dc8
	void *a2a77e9bce(); // Function CustomizableObject.CustomizableObject.*a2a77e9bce // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a1a0
	struct FString *3deafcb5a5(); // Function CustomizableObject.CustomizableObject.*3deafcb5a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59ae0
	struct F*411563e551 *f0b5942645(); // Function CustomizableObject.CustomizableObject.*f0b5942645 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5b298
	struct F*411563e551 *0aadd0369f(); // Function CustomizableObject.CustomizableObject.*0aadd0369f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a26c
	int32 *39edcd5b6d(); // Function CustomizableObject.CustomizableObject.*39edcd5b6d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5aedc
};

// Class CustomizableObject.CustomizableObjectCookCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UCustomizableObjectCookCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x30(0x10)
	struct FString HelpUsage; // 0x40(0x10)
	struct FString HelpWebLink; // 0x50(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x60(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x70(0x10)
	char IsServer : 1; // 0x80(0x01)
	char IsClient : 1; // 0x80(0x01)
	char IsEditor : 1; // 0x80(0x01)
	char LogToConsole : 1; // 0x80(0x01)
	char ShowErrorCount : 1; // 0x80(0x01)
};

// Class CustomizableObject.*ee12600a2e
// Size: 0x30 (Inherited: 0x30)
struct U*ee12600a2e : UObject {
};

// Class CustomizableObject.*0b8c129935
// Size: 0xc0 (Inherited: 0x30)
struct U*0b8c129935 : U*ee12600a2e {
	struct TArray<struct UTexture2D*> Textures; // 0x30(0x10)
	char pad_40[0x80]; // 0x40(0x80)
};

// Class CustomizableObject.*d9414edd39
// Size: 0x150 (Inherited: 0x30)
struct U*d9414edd39 : UObject {
	struct TArray<struct F*8c31f61d66> PendingReleaseSkeletalMesh; // 0x30(0x10)
	struct U*0b8c129935* *53d76f95b8; // 0x40(0x08)
	char pad_48[0xd8]; // 0x48(0xd8)
	struct TArray<struct UTexture2D*> *1aa56bb92d; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct U*3e08b59f4f* *0a864f394c; // 0x140(0x08)
	struct U*3e08b59f4f* *637069b972; // 0x148(0x08)

	void *6a631ff18e(int32 ReturnValue); // Function CustomizableObject.*d9414edd39.*6a631ff18e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e596dc
	void *51d0878d69(int32 ReturnValue); // Function CustomizableObject.*d9414edd39.*51d0878d69 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5b4f4
	void *5b2bce3587(); // Function CustomizableObject.*d9414edd39.*5b2bce3587 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5918c
	void *6499d41409(); // Function CustomizableObject.*d9414edd39.*6499d41409 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5a46c
	void *275d004a99(int32 ReturnValue); // Function CustomizableObject.*d9414edd39.*275d004a99 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e5b4d8
	void GetInstance(struct U*d9414edd39* ReturnValue); // Function CustomizableObject.*d9414edd39.GetInstance // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6e59abc
	void *1eba9a5155(); // Function CustomizableObject.*d9414edd39.*1eba9a5155 // Final|Native|Public|BlueprintCallable // @ game+0x6e5c46c
	void *8ad68c9e9a(); // Function CustomizableObject.*d9414edd39.*8ad68c9e9a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59db0
	void *0b37b8e9ba(int32 ReturnValue); // Function CustomizableObject.*d9414edd39.*0b37b8e9ba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e59d98
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
// Size: 0x488 (Inherited: 0x480)
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x480(0x08)
};

