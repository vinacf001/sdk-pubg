// Class CustomizableObject.CustomizableSkeletalComponent
// Size: 0x4c0 (Inherited: 0x460)
struct UCustomizableSkeletalComponent : USceneComponent {
	bool *d4531435b9; // 0x458(0x01)
	float *139806f545; // 0x45c(0x04)
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x460(0x08)
	char pad_46D[0x43]; // 0x46d(0x43)
	struct USkeletalMesh* *4c4a7301b4; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)

	void *2cfdabcaf5(); // Function CustomizableObject.CustomizableSkeletalComponent.*2cfdabcaf5 // Final|Native|Public|BlueprintCallable // @ game+0x677f824
};

// Class CustomizableObject.*03d4c46e12
// Size: 0x28 (Inherited: 0x28)
struct U*03d4c46e12 : UObject {
};

// Class CustomizableObject.*11347cb556
// Size: 0x88 (Inherited: 0x28)
struct U*11347cb556 : U*03d4c46e12 {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class CustomizableObject.CustomizableObjectInstance
// Size: 0x200 (Inherited: 0x28)
struct UCustomizableObjectInstance : UObject {
	struct UCustomizableObject* CustomizableObject; // 0x28(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x30(0x08)
	struct TArray<struct F*31be403f50> *cb44e01fbc; // 0x38(0x10)
	struct TArray<struct F*931db3194b> *1be56fa897; // 0x48(0x10)
	struct TArray<struct F*660dd47cd5> *1053b4727f; // 0x58(0x10)
	struct TArray<struct F*7797a85727> *0b4606fbe6; // 0x68(0x10)
	struct TArray<struct F*0210d02652> *68a814167a; // 0x78(0x10)
	struct TArray<struct F*57128bd1a0> *15e6a0cbfc; // 0x88(0x10)
	bool bBuildParameterDecorations; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMulticastDelegate UpdatedDelegate; // 0xa0(0x10)
	char pad_B0[0x90]; // 0xb0(0x90)
	struct FString *cc01e6150e; // 0x140(0x10)
	char pad_150[0x80]; // 0x150(0x80)
	struct FGuid *75e686a0a5; // 0x1d0(0x10)
	char pad_1E0[0x8]; // 0x1e0(0x08)
	struct U*4f0dae0530* *4a61f0cdb8; // 0x1e8(0x08)
	char pad_1F0[0x10]; // 0x1f0(0x10)

	void *bb5146148b(); // Function CustomizableObject.CustomizableObjectInstance.*bb5146148b // Final|Native|Public|BlueprintCallable // @ game+0x677ebb8
	struct FString *7d765e37a0(); // Function CustomizableObject.CustomizableObjectInstance.*7d765e37a0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x677ca18
	void *5fb837ddf5(int32 DescIndex); // Function CustomizableObject.CustomizableObjectInstance.*5fb837ddf5 // Final|Native|Public|BlueprintCallable // @ game+0x677cff8
	struct FString *6126cd03a4(); // Function CustomizableObject.CustomizableObjectInstance.*6126cd03a4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677d718
	struct FString *67ecdae12a(); // Function CustomizableObject.CustomizableObjectInstance.*67ecdae12a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x677db54
	void *a0cc4c471e(); // Function CustomizableObject.CustomizableObjectInstance.*a0cc4c471e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677c920
	void *9b7f650e33(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.*9b7f650e33 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x677dc7c
	int32 *481e376302(); // Function CustomizableObject.CustomizableObjectInstance.*481e376302 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677ce88
	void *9ab6f24838(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.*9ab6f24838 // Final|Native|Public|BlueprintCallable // @ game+0x677ede4
	void *c2323f1733(); // Function CustomizableObject.CustomizableObjectInstance.*c2323f1733 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x677da2c
	void *4f329976b9(); // Function CustomizableObject.CustomizableObjectInstance.*4f329976b9 // Final|Native|Public|BlueprintCallable // @ game+0x677f66c
	int32 *449f4c367c(); // Function CustomizableObject.CustomizableObjectInstance.*449f4c367c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677d910
	void *33c6e915b7(); // Function CustomizableObject.CustomizableObjectInstance.*33c6e915b7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677c420
	void *f33eb8f78e(); // Function CustomizableObject.CustomizableObjectInstance.*f33eb8f78e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677c4ec
	struct FString *5950257491(); // Function CustomizableObject.CustomizableObjectInstance.*5950257491 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x677ea78
	void *b17ebb73b0(struct FString ColorParamName); // Function CustomizableObject.CustomizableObjectInstance.*b17ebb73b0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x677ea78
	int32 *2e83cd12ce(struct FVector OutPos); // Function CustomizableObject.CustomizableObjectInstance.*2e83cd12ce // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x677dda4
	void *6527ff7f39(); // Function CustomizableObject.CustomizableObjectInstance.*6527ff7f39 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677c5b8
	void Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone // Final|Native|Public|BlueprintCallable // @ game+0x677c3d8
	struct FString *59a3495138(); // Function CustomizableObject.CustomizableObjectInstance.*59a3495138 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e7d0
	struct FString *bbd962d426(int32 RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.*bbd962d426 // Final|Native|Public|BlueprintCallable // @ game+0x677ef78
	void *f0967e7118(struct FString BoolParamName); // Function CustomizableObject.CustomizableObjectInstance.*f0967e7118 // Final|Native|Public|BlueprintCallable // @ game+0x677e958
	struct FString *bb1daad7eb(); // Function CustomizableObject.CustomizableObjectInstance.*bb1daad7eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677c75c
	int32 *97dd101761(); // Function CustomizableObject.CustomizableObjectInstance.*97dd101761 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677cbb4
	void *2cfdabcaf5(); // Function CustomizableObject.CustomizableObjectInstance.*2cfdabcaf5 // Final|Native|Public|BlueprintCallable // @ game+0x677f728
	void *8ac0f130fe(); // Function CustomizableObject.CustomizableObjectInstance.*8ac0f130fe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677cb1c
	struct FString *15dc7773d4(); // Function CustomizableObject.CustomizableObjectInstance.*15dc7773d4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x677d7e8
	struct FString *6069448230(float FloatValue); // Function CustomizableObject.CustomizableObjectInstance.*6069448230 // Final|Native|Public|BlueprintCallable // @ game+0x677ec84
	float *278aaf1340(float posX, float ScaleY, enum class ECustomizableObjectProjectorType ProjectionType); // Function CustomizableObject.CustomizableObjectInstance.*278aaf1340 // Final|Native|Public|BlueprintCallable // @ game+0x677f0d4
	struct FString *669d8b45e1(); // Function CustomizableObject.CustomizableObjectInstance.*669d8b45e1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677c828
};

// Class CustomizableObject.*4f0dae0530
// Size: 0x3f0 (Inherited: 0x28)
struct U*4f0dae0530 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*23c73845b1> *d7c375b641; // 0x30(0x10)
	struct TArray<struct F*9057d67164> *41781b4768; // 0x40(0x10)
	struct TArray<struct F*a07abee8ef> *607acf9da3; // 0x50(0x10)
	char pad_60[0x88]; // 0x60(0x88)
	struct TArray<struct F*9f1c4b0938> *9f1c4b0938; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct TMap<struct FString, struct UTexture2D*> *82689ba82f; // 0x108(0x50)
	char pad_158[0x1c8]; // 0x158(0x1c8)
	struct TArray<struct UMaterialInterface*> *817970cd4a; // 0x320(0x10)
	char pad_330[0xa0]; // 0x330(0xa0)
	struct TArray<struct UPhysicsAsset*> *d8e31e0fb1; // 0x3d0(0x10)
	char pad_3E0[0x10]; // 0x3e0(0x10)
};

// Class CustomizableObject.*e4f612bb7d
// Size: 0x28 (Inherited: 0x28)
struct U*e4f612bb7d : UObject {
};

// Class CustomizableObject.*a1d729e5c4
// Size: 0xc8 (Inherited: 0x28)
struct U*a1d729e5c4 : UObject {
	struct TMap<struct FString, struct FString> Materials; // 0x28(0x50)
	struct TMap<struct FString, struct F*5c8826e450> Textures; // 0x78(0x50)
};

// Class CustomizableObject.CustomizableObject
// Size: 0x2c8 (Inherited: 0x28)
struct UCustomizableObject : UObject {
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x28(0x08)
	struct UStaticMesh* *dabb558b27; // 0x30(0x08)
	enum class ECustomizableObjectRelevancy Relevancy; // 0x38(0x01)
	bool *f8da9db0b0; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct UMaterialInterface*> *817970cd4a; // 0x40(0x10)
	struct TArray<struct F*92ff69471e> *0cbdafb72b; // 0x50(0x10)
	struct TMap<struct FString, struct F*42c0484a8b> *f735f1f7f6; // 0x60(0x50)
	struct TArray<struct UMorphTarget*> *be88a735a3; // 0xb0(0x10)
	struct TArray<struct F*5d3c7bf855> *03cadc1a1c; // 0xc0(0x10)
	struct FGuid *d9128d26bc; // 0xd0(0x10)
	struct TArray<struct F*f2d21b72e0> *bb7f9360c6; // 0xe0(0x10)
	char pad_F0[0xa8]; // 0xf0(0xa8)
	struct TMap<struct FString, struct F*7dc3e73bff> *428adbb9cc; // 0x198(0x50)
	struct TMap<struct FString, struct F*7dc3e73bff> *73492442d6; // 0x1e8(0x50)
	struct TMap<struct FString, struct UPhysicsAsset*> *a39ad9808e; // 0x238(0x50)
	struct U*a1d729e5c4* MaskOutCache; // 0x288(0x20)
	bool *81e9d29f1c; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct U*a1d729e5c4* *4336d9b6a9; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)

	struct FString *c9e674913e(); // Function CustomizableObject.CustomizableObject.*c9e674913e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677d484
	int32 *bccdfd7892(int32 K); // Function CustomizableObject.CustomizableObject.*bccdfd7892 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677ccf8
	void *0f4e621dfa(); // Function CustomizableObject.CustomizableObject.*0f4e621dfa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677d3b8
	int32 *2ed0e5789b(); // Function CustomizableObject.CustomizableObject.*2ed0e5789b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677d2fc
	int32 *d7497048ef(); // Function CustomizableObject.CustomizableObject.*d7497048ef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e5bc
	void *2917939a22(); // Function CustomizableObject.CustomizableObject.*2917939a22 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677cfe0
	void *452079a9a3(); // Function CustomizableObject.CustomizableObject.*452079a9a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e0f4
	int32 *fe5fd3747e(); // Function CustomizableObject.CustomizableObject.*fe5fd3747e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677d590
	int32 *265fe32207(); // Function CustomizableObject.CustomizableObject.*265fe32207 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e724
	void *48d129b74b(struct FString StateName); // Function CustomizableObject.CustomizableObject.*48d129b74b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e208
	void CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x677c3fc
	struct FString *b3e15a6c47(); // Function CustomizableObject.CustomizableObject.*b3e15a6c47 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e4b0
	void *664a507acd(int32 StateIndex); // Function CustomizableObject.CustomizableObject.*664a507acd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e118
	void *a0cb8d2cd6(); // Function CustomizableObject.CustomizableObject.*a0cb8d2cd6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677cde8
	void *e499c09562(); // Function CustomizableObject.CustomizableObject.*e499c09562 // Final|Native|Public|BlueprintCallable // @ game+0x677e8b8
	void *b2e2fbc63c(); // Function CustomizableObject.CustomizableObject.*b2e2fbc63c // Final|Native|Public|BlueprintCallable // @ game+0x677f710
	int32 *860d02104d(); // Function CustomizableObject.CustomizableObject.*860d02104d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e2ec
	void *d81ffb51f4(struct FString ParamName); // Function CustomizableObject.CustomizableObject.*d81ffb51f4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677d164
	struct FString *e4517ac571(); // Function CustomizableObject.CustomizableObject.*e4517ac571 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677c690
	int32 *321489b4e7(); // Function CustomizableObject.CustomizableObject.*321489b4e7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677d254
};

// Class CustomizableObject.CustomizableObjectCookCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UCustomizableObjectCookCommandlet : UCommandlet {
};

// Class CustomizableObject.*0cd9de38fb
// Size: 0x28 (Inherited: 0x28)
struct U*0cd9de38fb : UObject {
};

// Class CustomizableObject.*71c9987878
// Size: 0xc0 (Inherited: 0x28)
struct U*71c9987878 : U*0cd9de38fb {
	struct TArray<struct UTexture2D*> Textures; // 0x28(0x10)
	char pad_38[0x88]; // 0x38(0x88)
};

// Class CustomizableObject.*51673ecf9c
// Size: 0x148 (Inherited: 0x28)
struct U*51673ecf9c : UObject {
	struct TArray<struct F*734b8b5ab6> PendingReleaseSkeletalMesh; // 0x28(0x10)
	struct U*71c9987878* *1fc717e4b3; // 0x38(0x08)
	char pad_40[0xd8]; // 0x40(0xd8)
	struct TArray<struct UTexture2D*> *4b1a122904; // 0x118(0x10)
	char pad_128[0x10]; // 0x128(0x10)
	struct U*03d4c46e12* *feecf1a84c; // 0x138(0x08)
	struct U*03d4c46e12* *a48107fb7a; // 0x140(0x08)

	void *d7eb21bb6d(); // Function CustomizableObject.*51673ecf9c.*d7eb21bb6d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677c3a4
	void *0dc8d10a98(); // Function CustomizableObject.*51673ecf9c.*0dc8d10a98 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677d684
	void *f204bedb8d(); // Function CustomizableObject.*51673ecf9c.*f204bedb8d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677c8f4
	void *407c62653a(); // Function CustomizableObject.*51673ecf9c.*407c62653a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e6f0
	void *0130b7fe49(); // Function CustomizableObject.*51673ecf9c.*0130b7fe49 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e70c
	void *7be644b9d8(); // Function CustomizableObject.*51673ecf9c.*7be644b9d8 // Final|Native|Public|BlueprintCallable // @ game+0x677f680
	void GetInstance(); // Function CustomizableObject.*51673ecf9c.GetInstance // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x677ccd4
	void *02f80a00fd(); // Function CustomizableObject.*51673ecf9c.*02f80a00fd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677cfb0
	void *7b5f7ad218(); // Function CustomizableObject.*51673ecf9c.*7b5f7ad218 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677cfc8
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
// Size: 0x478 (Inherited: 0x470)
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x470(0x08)
};

