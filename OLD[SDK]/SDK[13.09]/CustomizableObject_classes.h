// Class CustomizableObject.CustomizableSkeletalComponent
// Size: 0x520 (Inherited: 0x4c0)
struct UCustomizableSkeletalComponent : USceneComponent {
	bool *e515329c0f; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	float *c2faefbe63; // 0x4c4(0x04)
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x4c8(0x08)
	char pad_4D0[0x40]; // 0x4d0(0x40)
	struct USkeletalMesh* *507cfd54d7; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)

	void *a6c782e5f8(); // Function CustomizableObject.CustomizableSkeletalComponent.*a6c782e5f8 // None // @ game+0x65fb638
};

// Class CustomizableObject.*34d5ec0fcc
// Size: 0x28 (Inherited: 0x28)
struct U*34d5ec0fcc : UObject {
};

// Class CustomizableObject.*462b125e3b
// Size: 0x88 (Inherited: 0x28)
struct U*462b125e3b : U*34d5ec0fcc {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class CustomizableObject.CustomizableObjectInstance
// Size: 0x200 (Inherited: 0x28)
struct UCustomizableObjectInstance : UObject {
	struct UCustomizableObject* CustomizableObject; // 0x28(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x30(0x08)
	struct TArray<struct F*72bd199497> *30acdf673a; // 0x38(0x10)
	struct TArray<struct F*a309894d19> *90785e1d1d; // 0x48(0x10)
	struct TArray<struct F*70ca018483> *740dee2b0a; // 0x58(0x10)
	struct TArray<struct F*1328ff06c7> *aa36e1c370; // 0x68(0x10)
	struct TArray<struct F*0d3bceeef5> *a7f4a9d12b; // 0x78(0x10)
	struct TArray<struct F*7306cedc1e> *54d0aa097f; // 0x88(0x10)
	bool bBuildParameterDecorations; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMulticastDelegate UpdatedDelegate; // 0xa0(0x10)
	char pad_B0[0x90]; // 0xb0(0x90)
	struct FString *5cfb0f2f61; // 0x140(0x10)
	char pad_150[0x80]; // 0x150(0x80)
	struct FGuid *123fe18eda; // 0x1d0(0x10)
	char pad_1E0[0x8]; // 0x1e0(0x08)
	struct U*1f817b1d6d* *732461c6dc; // 0x1e8(0x08)
	char pad_1F0[0x10]; // 0x1f0(0x10)

	void *98ab3945b5(struct FString ColorParamName); // Function CustomizableObject.CustomizableObjectInstance.*98ab3945b5 // None // @ game+0x65f882c
	struct FString *12d7290034(); // Function CustomizableObject.CustomizableObjectInstance.*12d7290034 // None // @ game+0x65f863c
	void *9c80e7242b(); // Function CustomizableObject.CustomizableObjectInstance.*9c80e7242b // None // @ game+0x65fa9cc
	void *bd8d119602(); // Function CustomizableObject.CustomizableObjectInstance.*bd8d119602 // None // @ game+0x65fad8c
	int32 *6ea6d97f4d(); // Function CustomizableObject.CustomizableObjectInstance.*6ea6d97f4d // None // @ game+0x65f8c9c
	struct FString *27f1935148(); // Function CustomizableObject.CustomizableObjectInstance.*27f1935148 // None // @ game+0x65f9a90
	void *307d4916cd(); // Function CustomizableObject.CustomizableObjectInstance.*307d4916cd // None // @ game+0x65fa88c
	struct FString *e9102e8e80(); // Function CustomizableObject.CustomizableObjectInstance.*e9102e8e80 // None // @ game+0x65fabf8
	struct FString *f2c01ff24a(); // Function CustomizableObject.CustomizableObjectInstance.*f2c01ff24a // None // @ game+0x65f8734
	void Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone // None // @ game+0x65f81ec
	void *3a0f37162a(); // Function CustomizableObject.CustomizableObjectInstance.*3a0f37162a // None // @ game+0x65fa5e4
	int32 *31e3ee7ac7(); // Function CustomizableObject.CustomizableObjectInstance.*31e3ee7ac7 // None // @ game+0x65f9724
	float *3b363a651c(struct FString ProjectorParamName, float posY, float dirX, float dirZ, enum class ECustomizableObjectProjectorType ProjectionType); // Function CustomizableObject.CustomizableObjectInstance.*3b363a651c // None // @ game+0x65faee8
	void *0dced4c6e6(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.*0dced4c6e6 // None // @ game+0x65f8e0c
	struct FString *740e3dd31d(); // Function CustomizableObject.CustomizableObjectInstance.*740e3dd31d // None // @ game+0x65f8234
	struct FString *9d9c6e92e6(); // Function CustomizableObject.CustomizableObjectInstance.*9d9c6e92e6 // None // @ game+0x65fa76c
	void *bd5df01f21(); // Function CustomizableObject.CustomizableObjectInstance.*bd5df01f21 // None // @ game+0x65f9968
	int32 *c9ab1b0b76(); // Function CustomizableObject.CustomizableObjectInstance.*c9ab1b0b76 // None // @ game+0x65f89c8
	struct FString *6a8836a208(); // Function CustomizableObject.CustomizableObjectInstance.*6a8836a208 // None // @ game+0x65f952c
	void *96215c85e5(); // Function CustomizableObject.CustomizableObjectInstance.*96215c85e5 // None // @ game+0x65f9840
	void *523c356b3e(struct FString FloatParamName); // Function CustomizableObject.CustomizableObjectInstance.*523c356b3e // None // @ game+0x65faa98
	void *a38ca0ea73(); // Function CustomizableObject.CustomizableObjectInstance.*a38ca0ea73 // None // @ game+0x65f8930
	void *ed813e54dd(); // Function CustomizableObject.CustomizableObjectInstance.*ed813e54dd // None // @ game+0x65fb480
	void *a592be2ab8(); // Function CustomizableObject.CustomizableObjectInstance.*a592be2ab8 // None // @ game+0x65fa88c
	void *bb99da6825(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.*bb99da6825 // None // @ game+0x65f83cc
	struct FString *1dd5c8d7db(); // Function CustomizableObject.CustomizableObjectInstance.*1dd5c8d7db // None // @ game+0x65f95fc
	bool *a6c782e5f8(); // Function CustomizableObject.CustomizableObjectInstance.*a6c782e5f8 // None // @ game+0x65fb53c
	int32 *ca7b218d06(struct FVector OutPos, struct FVector OutUp); // Function CustomizableObject.CustomizableObjectInstance.*ca7b218d06 // None // @ game+0x65f9bb8
	void *66110d2af6(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.*66110d2af6 // None // @ game+0x65f8300
	void *ec41c8d3f3(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.*ec41c8d3f3 // None // @ game+0x65f8570
};

// Class CustomizableObject.*1f817b1d6d
// Size: 0x3f0 (Inherited: 0x28)
struct U*1f817b1d6d : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*0111c3b7be> *1d1cd7ecf1; // 0x30(0x10)
	struct TArray<struct F*ec90ad1a5c> *f4fa659fde; // 0x40(0x10)
	struct TArray<struct F*9b4e9948c4> *9f106e7444; // 0x50(0x10)
	char pad_60[0x88]; // 0x60(0x88)
	struct TArray<struct F*1f00d6ef03> *1f00d6ef03; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct TMap<struct FString, struct UTexture2D*> *3baa5026f9; // 0x108(0x50)
	char pad_158[0x1c8]; // 0x158(0x1c8)
	struct TArray<struct UMaterialInterface*> *f28f5b0331; // 0x320(0x10)
	char pad_330[0xa0]; // 0x330(0xa0)
	struct TArray<struct UPhysicsAsset*> *3a090633a5; // 0x3d0(0x10)
	char pad_3E0[0x10]; // 0x3e0(0x10)
};

// Class CustomizableObject.*a94daba973
// Size: 0x28 (Inherited: 0x28)
struct U*a94daba973 : UObject {
};

// Class CustomizableObject.*f39697d3d6
// Size: 0xc8 (Inherited: 0x28)
struct U*f39697d3d6 : UObject {
	struct TMap<struct FString, struct FString> Materials; // 0x28(0x50)
	struct TMap<struct FString, struct F*a03c76164b> Textures; // 0x78(0x50)
};

// Class CustomizableObject.CustomizableObject
// Size: 0x2c8 (Inherited: 0x28)
struct UCustomizableObject : UObject {
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x28(0x08)
	struct UStaticMesh* *d0cf6365c5; // 0x30(0x08)
	enum class ECustomizableObjectRelevancy Relevancy; // 0x38(0x01)
	bool *2992356dca; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct UMaterialInterface*> *f28f5b0331; // 0x40(0x10)
	struct TArray<struct F*f16dcaea5a> *b08514adbb; // 0x50(0x10)
	struct TMap<struct FString, struct F*6ecb21ef8f> *5c344973d7; // 0x60(0x50)
	struct TArray<struct UMorphTarget*> *b585350167; // 0xb0(0x10)
	struct TArray<struct F*923b93a2fe> *98297aa578; // 0xc0(0x10)
	struct FGuid *b9185805c7; // 0xd0(0x10)
	struct TArray<struct F*b9fa063e3a> *f986cb41b0; // 0xe0(0x10)
	char pad_F0[0xa8]; // 0xf0(0xa8)
	struct TMap<struct FString, struct F*f56167d8e1> *e3e1879799; // 0x198(0x50)
	struct TMap<struct FString, struct F*f56167d8e1> *657f2d9ff2; // 0x1e8(0x50)
	struct TMap<struct FString, struct UPhysicsAsset*> *a514eedcab; // 0x238(0x50)
	struct U*f39697d3d6* MaskOutCache; // 0x288(0x20)
	bool *f326b329bb; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct U*f39697d3d6* *25a689645e; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)

	void *01cc147e97(int32 ParamIndex); // Function CustomizableObject.CustomizableObject.*01cc147e97 // None // @ game+0x65f8b0c
	struct FString *41d00cfeb2(); // Function CustomizableObject.CustomizableObject.*41d00cfeb2 // None // @ game+0x65fa2c4
	void *8208e2343f(struct FString Name); // Function CustomizableObject.CustomizableObject.*8208e2343f // None // @ game+0x65f84a4
	void *2157ea2ad6(struct FString ParamName); // Function CustomizableObject.CustomizableObject.*2157ea2ad6 // None // @ game+0x65f9298
	struct FString *2018ddf539(); // Function CustomizableObject.CustomizableObject.*2018ddf539 // None // @ game+0x65f91cc
	struct FString *a52f37e5d1(); // Function CustomizableObject.CustomizableObject.*a52f37e5d1 // None // @ game+0x65f8f78
	void *051a68c2fd(); // Function CustomizableObject.CustomizableObject.*051a68c2fd // None // @ game+0x65fa538
	void *3b87758bf4(); // Function CustomizableObject.CustomizableObject.*3b87758bf4 // None // @ game+0x65f9f08
	int32 *d0a01208b4(); // Function CustomizableObject.CustomizableObject.*d0a01208b4 // None // @ game+0x65fa100
	void *d08d297ef3(int32 ParamIndex); // Function CustomizableObject.CustomizableObject.*d08d297ef3 // None // @ game+0x65f8bfc
	void CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance // None // @ game+0x65f8210
	int32 *0acc4f3cb7(); // Function CustomizableObject.CustomizableObject.*0acc4f3cb7 // None // @ game+0x65fa3d0
	struct FString *9c27454c29(); // Function CustomizableObject.CustomizableObject.*9c27454c29 // None // @ game+0x65fa01c
	void *d474e1c830(); // Function CustomizableObject.CustomizableObject.*d474e1c830 // None // @ game+0x65f9068
	void *058f6ebd38(); // Function CustomizableObject.CustomizableObject.*058f6ebd38 // None // @ game+0x65f9110
	int32 *ed6e6e02fb(); // Function CustomizableObject.CustomizableObject.*ed6e6e02fb // None // @ game+0x65f9f2c
	void *f8439372b0(); // Function CustomizableObject.CustomizableObject.*f8439372b0 // None // @ game+0x65f8df4
	void *20f7d1e434(int32 ParamIndex); // Function CustomizableObject.CustomizableObject.*20f7d1e434 // None // @ game+0x65f93a4
	void *a24fc19c54(); // Function CustomizableObject.CustomizableObject.*a24fc19c54 // None // @ game+0x65fb524
	void *039eba2574(); // Function CustomizableObject.CustomizableObject.*039eba2574 // None // @ game+0x65fa6cc
};

// Class CustomizableObject.CustomizableObjectCookCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UCustomizableObjectCookCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
};

// Class CustomizableObject.*a483f80a04
// Size: 0x28 (Inherited: 0x28)
struct U*a483f80a04 : UObject {
};

// Class CustomizableObject.*e13acd7f96
// Size: 0xc0 (Inherited: 0x28)
struct U*e13acd7f96 : U*a483f80a04 {
	struct TArray<struct UTexture2D*> Textures; // 0x28(0x10)
	char pad_38[0x88]; // 0x38(0x88)
};

// Class CustomizableObject.*4e2479b37c
// Size: 0x148 (Inherited: 0x28)
struct U*4e2479b37c : UObject {
	struct TArray<struct F*7d73b971fa> PendingReleaseSkeletalMesh; // 0x28(0x10)
	struct U*e13acd7f96* *2120ccd7d0; // 0x38(0x08)
	char pad_40[0xd8]; // 0x40(0xd8)
	struct TArray<struct UTexture2D*> *fdc83806f7; // 0x118(0x10)
	char pad_128[0x10]; // 0x128(0x10)
	struct U*34d5ec0fcc* *512a9739d2; // 0x138(0x08)
	struct U*34d5ec0fcc* *3dc7a2ff82; // 0x140(0x08)

	void *429bc8bfd4(); // Function CustomizableObject.*4e2479b37c.*429bc8bfd4 // None // @ game+0x65f8dc4
	void *1876ae7058(); // Function CustomizableObject.*4e2479b37c.*1876ae7058 // None // @ game+0x65f9498
	void GetInstance(); // Function CustomizableObject.*4e2479b37c.GetInstance // None // @ game+0x65f8ae8
	void *f7b68b2ce4(); // Function CustomizableObject.*4e2479b37c.*f7b68b2ce4 // None // @ game+0x65f8ddc
	void *a3689f30d2(); // Function CustomizableObject.*4e2479b37c.*a3689f30d2 // None // @ game+0x65f81b8
	void *37257b8e68(); // Function CustomizableObject.*4e2479b37c.*37257b8e68 // None // @ game+0x65fa504
	void *2704928437(); // Function CustomizableObject.*4e2479b37c.*2704928437 // None // @ game+0x65fa520
	void *9032c2b4b7(); // Function CustomizableObject.*4e2479b37c.*9032c2b4b7 // None // @ game+0x65fb494
	void *d62306077b(); // Function CustomizableObject.*4e2479b37c.*d62306077b // None // @ game+0x65f8708
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
// Size: 0x488 (Inherited: 0x480)
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x480(0x08)
};

