// Class CustomizableObject.CustomizableSkeletalComponent
// Size: 0x530 (Inherited: 0x4d0)
struct UCustomizableSkeletalComponent : USceneComponent {
	bool *fc9df19884; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	float *9bc184e8b2; // 0x4d4(0x04)
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x4d8(0x08)
	char pad_4E0[0x40]; // 0x4e0(0x40)
	struct USkeletalMesh* *d6439dd092; // 0x520(0x08)
	char pad_528[0x8]; // 0x528(0x08)

	void *a6638b0ac4(); // Function CustomizableObject.CustomizableSkeletalComponent.*a6638b0ac4 // Final|Native|Public|BlueprintCallable // @ game+0x686d064
};

// Class CustomizableObject.*031b455e26
// Size: 0x28 (Inherited: 0x28)
struct U*031b455e26 : UObject {
};

// Class CustomizableObject.*6e26d5ec77
// Size: 0x88 (Inherited: 0x28)
struct U*6e26d5ec77 : U*031b455e26 {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class CustomizableObject.CustomizableObjectInstance
// Size: 0x200 (Inherited: 0x28)
struct UCustomizableObjectInstance : UObject {
	struct UCustomizableObject* CustomizableObject; // 0x28(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x30(0x08)
	struct TArray<struct F*50337b7e4f> *7e9a6feeb6; // 0x38(0x10)
	struct TArray<struct F*e82b45fc9c> *3107593f55; // 0x48(0x10)
	struct TArray<struct F*9c105b932b> *ca8a4280c7; // 0x58(0x10)
	struct TArray<struct F*b63a11dea5> *beb946aeb4; // 0x68(0x10)
	struct TArray<struct F*48c3c84a0f> *f5b6331d28; // 0x78(0x10)
	struct TArray<struct F*e357ce8580> *80f62bf23f; // 0x88(0x10)
	bool bBuildParameterDecorations; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMulticastDelegate UpdatedDelegate; // 0xa0(0x10)
	char pad_B0[0x90]; // 0xb0(0x90)
	struct FString *8e5beb3aa2; // 0x140(0x10)
	char pad_150[0x80]; // 0x150(0x80)
	struct FGuid *cdf3952819; // 0x1d0(0x10)
	char pad_1E0[0x8]; // 0x1e0(0x08)
	struct U*11a6a5ae08* *d68132b5ae; // 0x1e8(0x08)
	char pad_1F0[0x10]; // 0x1f0(0x10)

	struct FString *3bae66eb19(); // Function CustomizableObject.CustomizableObjectInstance.*3bae66eb19 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686af58
	int32 *a6600ed34b(); // Function CustomizableObject.CustomizableObjectInstance.*a6600ed34b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a6c8
	void *e2de1c6160(); // Function CustomizableObject.CustomizableObjectInstance.*e2de1c6160 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x686b028
	void *a115227567(); // Function CustomizableObject.CustomizableObjectInstance.*a115227567 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x686c2b8
	struct FString *0d97d5501a(); // Function CustomizableObject.CustomizableObjectInstance.*0d97d5501a // Final|Native|Public|BlueprintCallable // @ game+0x686c624
	int32 *152372f693(struct FVector OutPos, struct FVector OutUp); // Function CustomizableObject.CustomizableObjectInstance.*152372f693 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x686b5e4
	struct FString *47657c8c7b(); // Function CustomizableObject.CustomizableObjectInstance.*47657c8c7b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x686b4bc
	void *369c9a96df(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.*369c9a96df // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6869df8
	void *fb80f0b733(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.*fb80f0b733 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x686b26c
	int32 *c9cd2cf778(); // Function CustomizableObject.CustomizableObjectInstance.*c9cd2cf778 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a3f4
	void *8f7962678a(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.*8f7962678a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x686b394
	void Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone // Final|Native|Public|BlueprintCallable // @ game+0x6869c18
	struct FString *f01c4f0338(); // Function CustomizableObject.CustomizableObjectInstance.*f01c4f0338 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6869c60
	struct FString *6bac233ce4(); // Function CustomizableObject.CustomizableObjectInstance.*6bac233ce4 // Final|Native|Public|BlueprintCallable // @ game+0x686c198
	void *d41153310c(); // Function CustomizableObject.CustomizableObjectInstance.*d41153310c // Final|Native|Public|BlueprintCallable // @ game+0x686ceac
	void *7f02a64d09(); // Function CustomizableObject.CustomizableObjectInstance.*7f02a64d09 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686b150
	void *a2d8daac72(); // Function CustomizableObject.CustomizableObjectInstance.*a2d8daac72 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a35c
	struct FString *b258b8cfa8(); // Function CustomizableObject.CustomizableObjectInstance.*b258b8cfa8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x686a258
	float *6998d2b050(float posX, float posZ, float dirY, enum class ECustomizableObjectProjectorType ProjectionType); // Function CustomizableObject.CustomizableObjectInstance.*6998d2b050 // Final|Native|Public|BlueprintCallable // @ game+0x686c914
	void *affe4ba2bf(); // Function CustomizableObject.CustomizableObjectInstance.*affe4ba2bf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a068
	struct FString *557596de54(); // Function CustomizableObject.CustomizableObjectInstance.*557596de54 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x686c2b8
	struct FString *3d1ee1dc89(); // Function CustomizableObject.CustomizableObjectInstance.*3d1ee1dc89 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686c010
	void *e41b4f4a5e(); // Function CustomizableObject.CustomizableObjectInstance.*e41b4f4a5e // Final|Native|Public|BlueprintCallable // @ game+0x686c3f8
	void *3b8a561558(); // Function CustomizableObject.CustomizableObjectInstance.*3b8a561558 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6869d2c
	struct FString *e60de03cda(); // Function CustomizableObject.CustomizableObjectInstance.*e60de03cda // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a160
	int32 *50d18889c8(); // Function CustomizableObject.CustomizableObjectInstance.*50d18889c8 // Final|Native|Public|BlueprintCallable // @ game+0x686a838
	void *9d636998e1(); // Function CustomizableObject.CustomizableObjectInstance.*9d636998e1 // Final|Native|Public|BlueprintCallable // @ game+0x686c7b8
	float *6565a1f33b(); // Function CustomizableObject.CustomizableObjectInstance.*6565a1f33b // Final|Native|Public|BlueprintCallable // @ game+0x686c4c4
	struct FString *a570cf7190(); // Function CustomizableObject.CustomizableObjectInstance.*a570cf7190 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6869f9c
	void *a6638b0ac4(bool bIgnoreCloseDist); // Function CustomizableObject.CustomizableObjectInstance.*a6638b0ac4 // Final|Native|Public|BlueprintCallable // @ game+0x686cf68
};

// Class CustomizableObject.*11a6a5ae08
// Size: 0x3f0 (Inherited: 0x28)
struct U*11a6a5ae08 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*f0d78aa66b> *29c140dbdd; // 0x30(0x10)
	struct TArray<struct F*36eb595a74> *2bcaf82a00; // 0x40(0x10)
	struct TArray<struct F*89b0dafd96> *6f74314334; // 0x50(0x10)
	char pad_60[0x88]; // 0x60(0x88)
	struct TArray<struct F*bfd4aa08bb> *bfd4aa08bb; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct TMap<struct FString, struct UTexture2D*> *389a8b58dc; // 0x108(0x50)
	char pad_158[0x1c8]; // 0x158(0x1c8)
	struct TArray<struct UMaterialInterface*> *c402c0157d; // 0x320(0x10)
	char pad_330[0xa0]; // 0x330(0xa0)
	struct TArray<struct UPhysicsAsset*> *a9d4008402; // 0x3d0(0x10)
	char pad_3E0[0x10]; // 0x3e0(0x10)
};

// Class CustomizableObject.*5d791bad1d
// Size: 0x28 (Inherited: 0x28)
struct U*5d791bad1d : UObject {
};

// Class CustomizableObject.*fb0c0e7a50
// Size: 0xc8 (Inherited: 0x28)
struct U*fb0c0e7a50 : UObject {
	struct TMap<struct FString, struct FString> Materials; // 0x28(0x50)
	struct TMap<struct FString, struct F*5be47f90d9> Textures; // 0x78(0x50)
};

// Class CustomizableObject.CustomizableObject
// Size: 0x2c8 (Inherited: 0x28)
struct UCustomizableObject : UObject {
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x28(0x08)
	struct UStaticMesh* *943637aa87; // 0x30(0x08)
	enum class ECustomizableObjectRelevancy Relevancy; // 0x38(0x01)
	bool *fce324a45b; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct UMaterialInterface*> *c402c0157d; // 0x40(0x10)
	struct TArray<struct F*c8168d8edd> *2663421129; // 0x50(0x10)
	struct TMap<struct FString, struct F*54424d3e0d> *203a78e0c1; // 0x60(0x50)
	struct TArray<struct UMorphTarget*> *9b9598d76e; // 0xb0(0x10)
	struct TArray<struct F*294c46bd80> *851c012943; // 0xc0(0x10)
	struct FGuid *6f4e7b2cbc; // 0xd0(0x10)
	struct TArray<struct F*8eb896974a> *d102e1d6ca; // 0xe0(0x10)
	char pad_F0[0xa8]; // 0xf0(0xa8)
	struct TMap<struct FString, struct F*c4331059b1> *73353cace8; // 0x198(0x50)
	struct TMap<struct FString, struct F*c4331059b1> *e202617813; // 0x1e8(0x50)
	struct TMap<struct FString, struct UPhysicsAsset*> *ee45d4ffe9; // 0x238(0x50)
	struct U*fb0c0e7a50* MaskOutCache; // 0x288(0x20)
	bool *63258cfff0; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct U*fb0c0e7a50* *f178728775; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)

	struct FString *8df709941c(); // Function CustomizableObject.CustomizableObject.*8df709941c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686ba48
	void *15f5f67c8c(struct FString ParamName); // Function CustomizableObject.CustomizableObject.*15f5f67c8c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a9a4
	void *e30f5f3d54(struct FString Name); // Function CustomizableObject.CustomizableObject.*e30f5f3d54 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6869ed0
	struct FString *b88274a4aa(); // Function CustomizableObject.CustomizableObject.*b88274a4aa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686bcf0
	void *f14ec4be99(); // Function CustomizableObject.CustomizableObject.*f14ec4be99 // Final|Native|Public|BlueprintCallable // @ game+0x686c0f8
	void *11b4b3a454(int32 ParamIndex); // Function CustomizableObject.CustomizableObject.*11b4b3a454 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686ab3c
	void *b2f804d32d(); // Function CustomizableObject.CustomizableObject.*b2f804d32d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686b934
	int32 *ef5a7b1c7e(); // Function CustomizableObject.CustomizableObject.*ef5a7b1c7e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686bb2c
	int32 *a04b515fd7(); // Function CustomizableObject.CustomizableObject.*a04b515fd7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686add0
	void *39ac26f5ba(int32 ParamIndex); // Function CustomizableObject.CustomizableObject.*39ac26f5ba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686aa94
	void *6295ae949e(int32 StateIndex); // Function CustomizableObject.CustomizableObject.*6295ae949e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686b958
	void CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x6869c3c
	int32 *98f82cf27d(); // Function CustomizableObject.CustomizableObject.*98f82cf27d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686bf64
	void *5ae944c9d2(int32 StateIndex); // Function CustomizableObject.CustomizableObject.*5ae944c9d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686bdfc
	void *88d4ef277b(); // Function CustomizableObject.CustomizableObject.*88d4ef277b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a628
	void *a1082c2f5b(); // Function CustomizableObject.CustomizableObject.*a1082c2f5b // Final|Native|Public|BlueprintCallable // @ game+0x686cf50
	struct FString *a4f88bdab3(); // Function CustomizableObject.CustomizableObject.*a4f88bdab3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686abf8
	void *9029f76a75(); // Function CustomizableObject.CustomizableObject.*9029f76a75 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686acc4
	int32 *ab29b302ba(); // Function CustomizableObject.CustomizableObject.*ab29b302ba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a538
	void *66dd5c872d(); // Function CustomizableObject.CustomizableObject.*66dd5c872d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a820
};

// Class CustomizableObject.CustomizableObjectCookCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UCustomizableObjectCookCommandlet : UCommandlet {
};

// Class CustomizableObject.*b6803fd32c
// Size: 0x28 (Inherited: 0x28)
struct U*b6803fd32c : UObject {
};

// Class CustomizableObject.*3fec10b2c7
// Size: 0xc0 (Inherited: 0x28)
struct U*3fec10b2c7 : U*b6803fd32c {
	struct TArray<struct UTexture2D*> Textures; // 0x28(0x10)
	char pad_38[0x88]; // 0x38(0x88)
};

// Class CustomizableObject.*90cdf05591
// Size: 0x148 (Inherited: 0x28)
struct U*90cdf05591 : UObject {
	struct TArray<struct F*2cc416b752> PendingReleaseSkeletalMesh; // 0x28(0x10)
	struct U*3fec10b2c7* *b82f75eb51; // 0x38(0x08)
	char pad_40[0xd8]; // 0x40(0xd8)
	struct TArray<struct UTexture2D*> *0aadeaee50; // 0x118(0x10)
	char pad_128[0x10]; // 0x128(0x10)
	struct U*031b455e26* *626090d7f2; // 0x138(0x08)
	struct U*031b455e26* *7892b7154f; // 0x140(0x08)

	void *610c30c634(); // Function CustomizableObject.*90cdf05591.*610c30c634 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6869be4
	void *3b3eaf5fa0(); // Function CustomizableObject.*90cdf05591.*3b3eaf5fa0 // Final|Native|Public|BlueprintCallable // @ game+0x686cec0
	void *949ee57ae3(); // Function CustomizableObject.*90cdf05591.*949ee57ae3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686bf4c
	void *ee86b2e86b(); // Function CustomizableObject.*90cdf05591.*ee86b2e86b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686aec4
	void *c5fd7b7bb9(); // Function CustomizableObject.*90cdf05591.*c5fd7b7bb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a808
	void *57c3b41505(); // Function CustomizableObject.*90cdf05591.*57c3b41505 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686bf30
	void GetInstance(); // Function CustomizableObject.*90cdf05591.GetInstance // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x686a514
	void *167cf74c0f(); // Function CustomizableObject.*90cdf05591.*167cf74c0f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a7f0
	void *76bbb36248(); // Function CustomizableObject.*90cdf05591.*76bbb36248 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x686a134
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
// Size: 0x478 (Inherited: 0x470)
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x470(0x08)
};

