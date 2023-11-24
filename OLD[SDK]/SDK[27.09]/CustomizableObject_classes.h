// Class CustomizableObject.CustomizableSkeletalComponent
// Size: 0x530 (Inherited: 0x4d0)
struct UCustomizableSkeletalComponent : USceneComponent {
	bool *e515329c0f; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	float *c2faefbe63; // 0x4d4(0x04)
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x4d8(0x08)
	char pad_4E0[0x40]; // 0x4e0(0x40)
	struct USkeletalMesh* *507cfd54d7; // 0x520(0x08)
	char pad_528[0x8]; // 0x528(0x08)

	void *a6c782e5f8(); // Function CustomizableObject.CustomizableSkeletalComponent.*a6c782e5f8 // Final|Native|Public|BlueprintCallable // @ game+0x6a46b90
};

// Class CustomizableObject.*34d5ec0fcc
// Size: 0x30 (Inherited: 0x30)
struct U*34d5ec0fcc : UObject {
};

// Class CustomizableObject.*462b125e3b
// Size: 0x90 (Inherited: 0x30)
struct U*462b125e3b : U*34d5ec0fcc {
	char pad_30[0x60]; // 0x30(0x60)
};

// Class CustomizableObject.CustomizableObjectInstance
// Size: 0x210 (Inherited: 0x30)
struct UCustomizableObjectInstance : UObject {
	struct UCustomizableObject* CustomizableObject; // 0x30(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x38(0x08)
	struct TArray<struct F*72bd199497> *30acdf673a; // 0x40(0x10)
	struct TArray<struct F*a309894d19> *90785e1d1d; // 0x50(0x10)
	struct TArray<struct F*70ca018483> *740dee2b0a; // 0x60(0x10)
	struct TArray<struct F*1328ff06c7> *aa36e1c370; // 0x70(0x10)
	struct TArray<struct F*0d3bceeef5> *a7f4a9d12b; // 0x80(0x10)
	struct TArray<struct F*7306cedc1e> *54d0aa097f; // 0x90(0x10)
	bool bBuildParameterDecorations; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastDelegate UpdatedDelegate; // 0xa8(0x10)
	char pad_B8[0x98]; // 0xb8(0x98)
	struct FString *5cfb0f2f61; // 0x150(0x10)
	char pad_160[0x80]; // 0x160(0x80)
	struct FGuid *123fe18eda; // 0x1e0(0x10)
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct U*1f817b1d6d* *732461c6dc; // 0x1f8(0x08)
	char pad_200[0x10]; // 0x200(0x10)

	void *98ab3945b5(); // Function CustomizableObject.CustomizableObjectInstance.*98ab3945b5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43d80
	void *12d7290034(); // Function CustomizableObject.CustomizableObjectInstance.*12d7290034 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43b90
	void *9c80e7242b(); // Function CustomizableObject.CustomizableObjectInstance.*9c80e7242b // Final|Native|Public|BlueprintCallable // @ game+0x6a45f24
	void *bd8d119602(); // Function CustomizableObject.CustomizableObjectInstance.*bd8d119602 // Final|Native|Public|BlueprintCallable // @ game+0x6a462e4
	void *6ea6d97f4d(); // Function CustomizableObject.CustomizableObjectInstance.*6ea6d97f4d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a441f0
	void *27f1935148(); // Function CustomizableObject.CustomizableObjectInstance.*27f1935148 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44fe4
	void *307d4916cd(); // Function CustomizableObject.CustomizableObjectInstance.*307d4916cd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6a45de0
	void *e9102e8e80(); // Function CustomizableObject.CustomizableObjectInstance.*e9102e8e80 // Final|Native|Public|BlueprintCallable // @ game+0x6a46150
	void *f2c01ff24a(); // Function CustomizableObject.CustomizableObjectInstance.*f2c01ff24a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43c88
	void Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone // Final|Native|Public|BlueprintCallable // @ game+0x6a43740
	void *3a0f37162a(); // Function CustomizableObject.CustomizableObjectInstance.*3a0f37162a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a45b38
	void *31e3ee7ac7(); // Function CustomizableObject.CustomizableObjectInstance.*31e3ee7ac7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44c78
	void *3b363a651c(); // Function CustomizableObject.CustomizableObjectInstance.*3b363a651c // Final|Native|Public|BlueprintCallable // @ game+0x6a46440
	void *0dced4c6e6(); // Function CustomizableObject.CustomizableObjectInstance.*0dced4c6e6 // Final|Native|Public|BlueprintCallable // @ game+0x6a44360
	void *740e3dd31d(); // Function CustomizableObject.CustomizableObjectInstance.*740e3dd31d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43788
	void *9d9c6e92e6(); // Function CustomizableObject.CustomizableObjectInstance.*9d9c6e92e6 // Final|Native|Public|BlueprintCallable // @ game+0x6a45cc0
	void *bd5df01f21(); // Function CustomizableObject.CustomizableObjectInstance.*bd5df01f21 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44ebc
	void *c9ab1b0b76(); // Function CustomizableObject.CustomizableObjectInstance.*c9ab1b0b76 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43f1c
	void *6a8836a208(); // Function CustomizableObject.CustomizableObjectInstance.*6a8836a208 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44a80
	void *96215c85e5(); // Function CustomizableObject.CustomizableObjectInstance.*96215c85e5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44d94
	void *523c356b3e(); // Function CustomizableObject.CustomizableObjectInstance.*523c356b3e // Final|Native|Public|BlueprintCallable // @ game+0x6a45ff0
	void *a38ca0ea73(); // Function CustomizableObject.CustomizableObjectInstance.*a38ca0ea73 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43e84
	void *ed813e54dd(); // Function CustomizableObject.CustomizableObjectInstance.*ed813e54dd // Final|Native|Public|BlueprintCallable // @ game+0x6a469d8
	void *a592be2ab8(); // Function CustomizableObject.CustomizableObjectInstance.*a592be2ab8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6a45de0
	void *bb99da6825(); // Function CustomizableObject.CustomizableObjectInstance.*bb99da6825 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43920
	void *1dd5c8d7db(); // Function CustomizableObject.CustomizableObjectInstance.*1dd5c8d7db // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44b50
	void *a6c782e5f8(); // Function CustomizableObject.CustomizableObjectInstance.*a6c782e5f8 // Final|Native|Public|BlueprintCallable // @ game+0x6a46a94
	void *ca7b218d06(); // Function CustomizableObject.CustomizableObjectInstance.*ca7b218d06 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6a4510c
	void *66110d2af6(); // Function CustomizableObject.CustomizableObjectInstance.*66110d2af6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43854
	void *ec41c8d3f3(); // Function CustomizableObject.CustomizableObjectInstance.*ec41c8d3f3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43ac4
};

// Class CustomizableObject.*1f817b1d6d
// Size: 0x3f8 (Inherited: 0x30)
struct U*1f817b1d6d : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*0111c3b7be> *1d1cd7ecf1; // 0x38(0x10)
	struct TArray<struct F*ec90ad1a5c> *f4fa659fde; // 0x48(0x10)
	struct TArray<struct F*9b4e9948c4> *9f106e7444; // 0x58(0x10)
	char pad_68[0x88]; // 0x68(0x88)
	struct TArray<struct F*1f00d6ef03> *1f00d6ef03; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)
	struct TMap<struct FString, struct UTexture2D*> *3baa5026f9; // 0x110(0x50)
	char pad_160[0x1c8]; // 0x160(0x1c8)
	struct TArray<struct UMaterialInterface*> *f28f5b0331; // 0x328(0x10)
	char pad_338[0xa0]; // 0x338(0xa0)
	struct TArray<struct UPhysicsAsset*> *3a090633a5; // 0x3d8(0x10)
	char pad_3E8[0x10]; // 0x3e8(0x10)
};

// Class CustomizableObject.*a94daba973
// Size: 0x30 (Inherited: 0x30)
struct U*a94daba973 : UObject {
};

// Class CustomizableObject.*f39697d3d6
// Size: 0xd0 (Inherited: 0x30)
struct U*f39697d3d6 : UObject {
	struct TMap<struct FString, struct FString> Materials; // 0x30(0x50)
	struct TMap<struct FString, struct F*a03c76164b> Textures; // 0x80(0x50)
};

// Class CustomizableObject.CustomizableObject
// Size: 0x2d0 (Inherited: 0x30)
struct UCustomizableObject : UObject {
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x30(0x08)
	struct UStaticMesh* *d0cf6365c5; // 0x38(0x08)
	enum class ECustomizableObjectRelevancy Relevancy; // 0x40(0x01)
	bool *2992356dca; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct TArray<struct UMaterialInterface*> *f28f5b0331; // 0x48(0x10)
	struct TArray<struct F*f16dcaea5a> *b08514adbb; // 0x58(0x10)
	struct TMap<struct FString, struct F*6ecb21ef8f> *5c344973d7; // 0x68(0x50)
	struct TArray<struct UMorphTarget*> *b585350167; // 0xb8(0x10)
	struct TArray<struct F*923b93a2fe> *98297aa578; // 0xc8(0x10)
	struct FGuid *b9185805c7; // 0xd8(0x10)
	struct TArray<struct F*b9fa063e3a> *f986cb41b0; // 0xe8(0x10)
	char pad_F8[0xa8]; // 0xf8(0xa8)
	struct TMap<struct FString, struct F*f56167d8e1> *e3e1879799; // 0x1a0(0x50)
	struct TMap<struct FString, struct F*f56167d8e1> *657f2d9ff2; // 0x1f0(0x50)
	struct TMap<struct FString, struct UPhysicsAsset*> *a514eedcab; // 0x240(0x50)
	struct U*f39697d3d6* MaskOutCache; // 0x290(0x20)
	bool *f326b329bb; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct U*f39697d3d6* *25a689645e; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)

	void *01cc147e97(); // Function CustomizableObject.CustomizableObject.*01cc147e97 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44060
	void *41d00cfeb2(); // Function CustomizableObject.CustomizableObject.*41d00cfeb2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a45818
	void *8208e2343f(); // Function CustomizableObject.CustomizableObject.*8208e2343f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a439f8
	void *2157ea2ad6(); // Function CustomizableObject.CustomizableObject.*2157ea2ad6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a447ec
	void *2018ddf539(); // Function CustomizableObject.CustomizableObject.*2018ddf539 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44720
	void *a52f37e5d1(); // Function CustomizableObject.CustomizableObject.*a52f37e5d1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a444cc
	void *051a68c2fd(); // Function CustomizableObject.CustomizableObject.*051a68c2fd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a45a8c
	void *3b87758bf4(); // Function CustomizableObject.CustomizableObject.*3b87758bf4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a4545c
	void *d0a01208b4(); // Function CustomizableObject.CustomizableObject.*d0a01208b4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a45654
	void *d08d297ef3(); // Function CustomizableObject.CustomizableObject.*d08d297ef3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44150
	void CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x6a43764
	void *0acc4f3cb7(); // Function CustomizableObject.CustomizableObject.*0acc4f3cb7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a45924
	void *9c27454c29(); // Function CustomizableObject.CustomizableObject.*9c27454c29 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a45570
	void *d474e1c830(); // Function CustomizableObject.CustomizableObject.*d474e1c830 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a445bc
	void *058f6ebd38(); // Function CustomizableObject.CustomizableObject.*058f6ebd38 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44664
	void *ed6e6e02fb(); // Function CustomizableObject.CustomizableObject.*ed6e6e02fb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a45480
	void *f8439372b0(); // Function CustomizableObject.CustomizableObject.*f8439372b0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44348
	void *20f7d1e434(); // Function CustomizableObject.CustomizableObject.*20f7d1e434 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a448f8
	void *a24fc19c54(); // Function CustomizableObject.CustomizableObject.*a24fc19c54 // Final|Native|Public|BlueprintCallable // @ game+0x6a46a7c
	void *039eba2574(); // Function CustomizableObject.CustomizableObject.*039eba2574 // Final|Native|Public|BlueprintCallable // @ game+0x6a45c20
};

// Class CustomizableObject.CustomizableObjectCookCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UCustomizableObjectCookCommandlet : UCommandlet {
};

// Class CustomizableObject.*a483f80a04
// Size: 0x30 (Inherited: 0x30)
struct U*a483f80a04 : UObject {
};

// Class CustomizableObject.*e13acd7f96
// Size: 0xc0 (Inherited: 0x30)
struct U*e13acd7f96 : U*a483f80a04 {
	struct TArray<struct UTexture2D*> Textures; // 0x30(0x10)
	char pad_40[0x80]; // 0x40(0x80)
};

// Class CustomizableObject.*4e2479b37c
// Size: 0x150 (Inherited: 0x30)
struct U*4e2479b37c : UObject {
	struct TArray<struct F*7d73b971fa> PendingReleaseSkeletalMesh; // 0x30(0x10)
	struct U*e13acd7f96* *2120ccd7d0; // 0x40(0x08)
	char pad_48[0xd8]; // 0x48(0xd8)
	struct TArray<struct UTexture2D*> *fdc83806f7; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct U*34d5ec0fcc* *512a9739d2; // 0x140(0x08)
	struct U*34d5ec0fcc* *3dc7a2ff82; // 0x148(0x08)

	void *429bc8bfd4(); // Function CustomizableObject.*4e2479b37c.*429bc8bfd4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44318
	void *1876ae7058(); // Function CustomizableObject.*4e2479b37c.*1876ae7058 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a449ec
	void GetInstance(); // Function CustomizableObject.*4e2479b37c.GetInstance // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6a4403c
	void *f7b68b2ce4(); // Function CustomizableObject.*4e2479b37c.*f7b68b2ce4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a44330
	void *a3689f30d2(); // Function CustomizableObject.*4e2479b37c.*a3689f30d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a4370c
	void *37257b8e68(); // Function CustomizableObject.*4e2479b37c.*37257b8e68 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a45a58
	void *2704928437(); // Function CustomizableObject.*4e2479b37c.*2704928437 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a45a74
	void *9032c2b4b7(); // Function CustomizableObject.*4e2479b37c.*9032c2b4b7 // Final|Native|Public|BlueprintCallable // @ game+0x6a469ec
	void *d62306077b(); // Function CustomizableObject.*4e2479b37c.*d62306077b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a43c5c
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
// Size: 0x498 (Inherited: 0x490)
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x490(0x08)
};

