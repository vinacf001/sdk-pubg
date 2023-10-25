// Class CustomizableObject.CustomizableSkeletalComponent
// Size: 0x540 (Inherited: 0x4e0)
struct UCustomizableSkeletalComponent : USceneComponent {
	bool *fc9df19884; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	float *9bc184e8b2; // 0x4e4(0x04)
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x4e8(0x08)
	char pad_4F0[0x40]; // 0x4f0(0x40)
	struct USkeletalMesh* *d6439dd092; // 0x530(0x08)
	char pad_538[0x8]; // 0x538(0x08)

	bool *a6638b0ac4(); // Function CustomizableObject.CustomizableSkeletalComponent.*a6638b0ac4 // Final|Native|Public|BlueprintCallable // @ game+0x6c90104
};

// Class CustomizableObject.*031b455e26
// Size: 0x30 (Inherited: 0x30)
struct U*031b455e26 : UObject {
};

// Class CustomizableObject.*6e26d5ec77
// Size: 0x90 (Inherited: 0x30)
struct U*6e26d5ec77 : U*031b455e26 {
	char pad_30[0x60]; // 0x30(0x60)
};

// Class CustomizableObject.CustomizableObjectInstance
// Size: 0x210 (Inherited: 0x30)
struct UCustomizableObjectInstance : UObject {
	struct UCustomizableObject* CustomizableObject; // 0x30(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x38(0x08)
	struct TArray<struct F*50337b7e4f> *7e9a6feeb6; // 0x40(0x10)
	struct TArray<struct F*e82b45fc9c> *3107593f55; // 0x50(0x10)
	struct TArray<struct F*9c105b932b> *ca8a4280c7; // 0x60(0x10)
	struct TArray<struct F*b63a11dea5> *beb946aeb4; // 0x70(0x10)
	struct TArray<struct F*48c3c84a0f> *f5b6331d28; // 0x80(0x10)
	struct TArray<struct F*e357ce8580> *80f62bf23f; // 0x90(0x10)
	bool bBuildParameterDecorations; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastDelegate UpdatedDelegate; // 0xa8(0x10)
	char pad_B8[0x98]; // 0xb8(0x98)
	struct FString *8e5beb3aa2; // 0x150(0x10)
	char pad_160[0x80]; // 0x160(0x80)
	struct FGuid *cdf3952819; // 0x1e0(0x10)
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct U*11a6a5ae08* *d68132b5ae; // 0x1f8(0x08)
	char pad_200[0x10]; // 0x200(0x10)

	float *3bae66eb19(); // Function CustomizableObject.CustomizableObjectInstance.*3bae66eb19 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8dff4
	struct FString *a6600ed34b(); // Function CustomizableObject.CustomizableObjectInstance.*a6600ed34b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d764
	struct FVector *e2de1c6160(); // Function CustomizableObject.CustomizableObjectInstance.*e2de1c6160 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8e0c4
	struct FLinearColor *a115227567(); // Function CustomizableObject.CustomizableObjectInstance.*a115227567 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6c8f354
	int32 *0d97d5501a(); // Function CustomizableObject.CustomizableObjectInstance.*0d97d5501a // Final|Native|Public|BlueprintCallable // @ game+0x6c8f6c4
	bool *152372f693(); // Function CustomizableObject.CustomizableObjectInstance.*152372f693 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6c8e680
	struct FVector *47657c8c7b(); // Function CustomizableObject.CustomizableObjectInstance.*47657c8c7b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8e558
	int32 *369c9a96df(); // Function CustomizableObject.CustomizableObjectInstance.*369c9a96df // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8ce94
	struct FVector *fb80f0b733(); // Function CustomizableObject.CustomizableObjectInstance.*fb80f0b733 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8e308
	float *c9cd2cf778(); // Function CustomizableObject.CustomizableObjectInstance.*c9cd2cf778 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d490
	struct FVector *8f7962678a(); // Function CustomizableObject.CustomizableObjectInstance.*8f7962678a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8e430
	struct UCustomizableObjectInstance* Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone // Final|Native|Public|BlueprintCallable // @ game+0x6c8ccb4
	int32 *f01c4f0338(); // Function CustomizableObject.CustomizableObjectInstance.*f01c4f0338 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8ccfc
	bool *6bac233ce4(); // Function CustomizableObject.CustomizableObjectInstance.*6bac233ce4 // Final|Native|Public|BlueprintCallable // @ game+0x6c8f234
	void *d41153310c(); // Function CustomizableObject.CustomizableObjectInstance.*d41153310c // Final|Native|Public|BlueprintCallable // @ game+0x6c8ff4c
	enum class ECustomizableObjectProjectorType *7f02a64d09(); // Function CustomizableObject.CustomizableObjectInstance.*7f02a64d09 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8e1ec
	struct FString *a2d8daac72(); // Function CustomizableObject.CustomizableObjectInstance.*a2d8daac72 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d3f8
	struct FLinearColor *b258b8cfa8(); // Function CustomizableObject.CustomizableObjectInstance.*b258b8cfa8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d2f4
	int32 *6998d2b050(); // Function CustomizableObject.CustomizableObjectInstance.*6998d2b050 // Final|Native|Public|BlueprintCallable // @ game+0x6c8f9b4
	int32 *affe4ba2bf(); // Function CustomizableObject.CustomizableObjectInstance.*affe4ba2bf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d104
	struct FLinearColor *557596de54(); // Function CustomizableObject.CustomizableObjectInstance.*557596de54 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6c8f354
	bool *3d1ee1dc89(); // Function CustomizableObject.CustomizableObjectInstance.*3d1ee1dc89 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8f0ac
	struct FString *e41b4f4a5e(); // Function CustomizableObject.CustomizableObjectInstance.*e41b4f4a5e // Final|Native|Public|BlueprintCallable // @ game+0x6c8f498
	int32 *3b8a561558(); // Function CustomizableObject.CustomizableObjectInstance.*3b8a561558 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8cdc8
	bool *e60de03cda(); // Function CustomizableObject.CustomizableObjectInstance.*e60de03cda // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d1fc
	struct UTexture2D* *50d18889c8(); // Function CustomizableObject.CustomizableObjectInstance.*50d18889c8 // Final|Native|Public|BlueprintCallable // @ game+0x6c8d8d4
	enum class ECustomizableObjectProjectorType *9d636998e1(); // Function CustomizableObject.CustomizableObjectInstance.*9d636998e1 // Final|Native|Public|BlueprintCallable // @ game+0x6c8f858
	int32 *6565a1f33b(); // Function CustomizableObject.CustomizableObjectInstance.*6565a1f33b // Final|Native|Public|BlueprintCallable // @ game+0x6c8f564
	int32 *a570cf7190(); // Function CustomizableObject.CustomizableObjectInstance.*a570cf7190 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d038
	bool *a6638b0ac4(); // Function CustomizableObject.CustomizableObjectInstance.*a6638b0ac4 // Final|Native|Public|BlueprintCallable // @ game+0x6c90008
};

// Class CustomizableObject.*11a6a5ae08
// Size: 0x3f8 (Inherited: 0x30)
struct U*11a6a5ae08 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*f0d78aa66b> *29c140dbdd; // 0x38(0x10)
	struct TArray<struct F*36eb595a74> *2bcaf82a00; // 0x48(0x10)
	struct TArray<struct F*89b0dafd96> *6f74314334; // 0x58(0x10)
	char pad_68[0x88]; // 0x68(0x88)
	struct TArray<struct F*bfd4aa08bb> *bfd4aa08bb; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)
	struct TMap<struct FString, struct UTexture2D*> *389a8b58dc; // 0x110(0x50)
	char pad_160[0x1c8]; // 0x160(0x1c8)
	struct TArray<struct UMaterialInterface*> *c402c0157d; // 0x328(0x10)
	char pad_338[0xa0]; // 0x338(0xa0)
	struct TArray<struct UPhysicsAsset*> *a9d4008402; // 0x3d8(0x10)
	char pad_3E8[0x10]; // 0x3e8(0x10)
};

// Class CustomizableObject.*5d791bad1d
// Size: 0x30 (Inherited: 0x30)
struct U*5d791bad1d : UObject {
};

// Class CustomizableObject.*fb0c0e7a50
// Size: 0xd0 (Inherited: 0x30)
struct U*fb0c0e7a50 : UObject {
	struct TMap<struct FString, struct FString> Materials; // 0x30(0x50)
	struct TMap<struct FString, struct F*5be47f90d9> Textures; // 0x80(0x50)
};

// Class CustomizableObject.CustomizableObject
// Size: 0x2d0 (Inherited: 0x30)
struct UCustomizableObject : UObject {
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x30(0x08)
	struct UStaticMesh* *943637aa87; // 0x38(0x08)
	enum class ECustomizableObjectRelevancy Relevancy; // 0x40(0x01)
	bool *fce324a45b; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct TArray<struct UMaterialInterface*> *c402c0157d; // 0x48(0x10)
	struct TArray<struct F*c8168d8edd> *2663421129; // 0x58(0x10)
	struct TMap<struct FString, struct F*54424d3e0d> *203a78e0c1; // 0x68(0x50)
	struct TArray<struct UMorphTarget*> *9b9598d76e; // 0xb8(0x10)
	struct TArray<struct F*294c46bd80> *851c012943; // 0xc8(0x10)
	struct FGuid *6f4e7b2cbc; // 0xd8(0x10)
	struct TArray<struct F*8eb896974a> *d102e1d6ca; // 0xe8(0x10)
	char pad_F8[0xa8]; // 0xf8(0xa8)
	struct TMap<struct FString, struct F*c4331059b1> *73353cace8; // 0x1a0(0x50)
	struct TMap<struct FString, struct F*c4331059b1> *e202617813; // 0x1f0(0x50)
	struct TMap<struct FString, struct UPhysicsAsset*> *ee45d4ffe9; // 0x240(0x50)
	struct U*fb0c0e7a50* MaskOutCache; // 0x290(0x20)
	bool *63258cfff0; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct U*fb0c0e7a50* *f178728775; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)

	int32 *8df709941c(); // Function CustomizableObject.CustomizableObject.*8df709941c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8eae4
	int32 *15f5f67c8c(); // Function CustomizableObject.CustomizableObject.*15f5f67c8c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8da40
	int32 *e30f5f3d54(); // Function CustomizableObject.CustomizableObject.*e30f5f3d54 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8cf6c
	struct F*c4331059b1 *b88274a4aa(); // Function CustomizableObject.CustomizableObject.*b88274a4aa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8ed8c
	void *f14ec4be99(); // Function CustomizableObject.CustomizableObject.*f14ec4be99 // Final|Native|Public|BlueprintCallable // @ game+0x6c8f194
	enum class EMutableParameterType *11b4b3a454(); // Function CustomizableObject.CustomizableObject.*11b4b3a454 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8dbd8
	int32 *b2f804d32d(); // Function CustomizableObject.CustomizableObject.*b2f804d32d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8e9d0
	struct FString *ef5a7b1c7e(); // Function CustomizableObject.CustomizableObject.*ef5a7b1c7e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8ebc8
	struct F*c4331059b1 *a04b515fd7(); // Function CustomizableObject.CustomizableObject.*a04b515fd7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8de6c
	struct FString *39ac26f5ba(); // Function CustomizableObject.CustomizableObject.*39ac26f5ba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8db30
	struct FString *6295ae949e(); // Function CustomizableObject.CustomizableObject.*6295ae949e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8e9f4
	struct UCustomizableObjectInstance* CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x6c8ccd8
	bool *98f82cf27d(); // Function CustomizableObject.CustomizableObject.*98f82cf27d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8f000
	struct F*c4331059b1 *5ae944c9d2(); // Function CustomizableObject.CustomizableObject.*5ae944c9d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8ee98
	int32 *88d4ef277b(); // Function CustomizableObject.CustomizableObject.*88d4ef277b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d6c4
	void *a1082c2f5b(); // Function CustomizableObject.CustomizableObject.*a1082c2f5b // Final|Native|Public|BlueprintCallable // @ game+0x6c8fff0
	enum class EMutableParameterType *a4f88bdab3(); // Function CustomizableObject.CustomizableObject.*a4f88bdab3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8dc94
	struct F*c4331059b1 *9029f76a75(); // Function CustomizableObject.CustomizableObject.*9029f76a75 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8dd60
	struct FString *ab29b302ba(); // Function CustomizableObject.CustomizableObject.*ab29b302ba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d5d4
	int32 *66dd5c872d(); // Function CustomizableObject.CustomizableObject.*66dd5c872d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d8bc
};

// Class CustomizableObject.CustomizableObjectCookCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UCustomizableObjectCookCommandlet : UCommandlet {
};

// Class CustomizableObject.*b6803fd32c
// Size: 0x30 (Inherited: 0x30)
struct U*b6803fd32c : UObject {
};

// Class CustomizableObject.*3fec10b2c7
// Size: 0xc0 (Inherited: 0x30)
struct U*3fec10b2c7 : U*b6803fd32c {
	struct TArray<struct UTexture2D*> Textures; // 0x30(0x10)
	char pad_40[0x80]; // 0x40(0x80)
};

// Class CustomizableObject.*90cdf05591
// Size: 0x150 (Inherited: 0x30)
struct U*90cdf05591 : UObject {
	struct TArray<struct F*2cc416b752> PendingReleaseSkeletalMesh; // 0x30(0x10)
	struct U*3fec10b2c7* *b82f75eb51; // 0x40(0x08)
	char pad_48[0xd8]; // 0x48(0xd8)
	struct TArray<struct UTexture2D*> *0aadeaee50; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct U*031b455e26* *626090d7f2; // 0x140(0x08)
	struct U*031b455e26* *7892b7154f; // 0x148(0x08)

	bool *610c30c634(); // Function CustomizableObject.*90cdf05591.*610c30c634 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8cc80
	bool *3b3eaf5fa0(); // Function CustomizableObject.*90cdf05591.*3b3eaf5fa0 // Final|Native|Public|BlueprintCallable // @ game+0x6c8ff60
	int32 *949ee57ae3(); // Function CustomizableObject.*90cdf05591.*949ee57ae3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8efe8
	struct FString *ee86b2e86b(); // Function CustomizableObject.*90cdf05591.*ee86b2e86b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8df60
	int32 *c5fd7b7bb9(); // Function CustomizableObject.*90cdf05591.*c5fd7b7bb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d8a4
	int32 *57c3b41505(); // Function CustomizableObject.*90cdf05591.*57c3b41505 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8efcc
	struct U*90cdf05591* GetInstance(); // Function CustomizableObject.*90cdf05591.GetInstance // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6c8d5b0
	int32 *167cf74c0f(); // Function CustomizableObject.*90cdf05591.*167cf74c0f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d88c
	int32 *76bbb36248(); // Function CustomizableObject.*90cdf05591.*76bbb36248 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c8d1d0
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
// Size: 0x488 (Inherited: 0x480)
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x480(0x08)
};

