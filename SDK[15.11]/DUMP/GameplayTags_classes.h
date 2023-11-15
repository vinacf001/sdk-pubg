// Class GameplayTags.*118453302a
// Size: 0xa0 (Inherited: 0x30)
struct U*118453302a : UObject {
	struct FString UserDescription; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct U*17099eb438* *d471924e37; // 0x50(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x58(0x48)
};

// Class GameplayTags.*17099eb438
// Size: 0x30 (Inherited: 0x30)
struct U*17099eb438 : UObject {
};

// Class GameplayTags.*4b6740501f
// Size: 0x50 (Inherited: 0x30)
struct U*4b6740501f : U*17099eb438 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*d8ec87854c
// Size: 0x50 (Inherited: 0x30)
struct U*d8ec87854c : U*17099eb438 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*eb72a62d9c
// Size: 0x50 (Inherited: 0x30)
struct U*eb72a62d9c : U*17099eb438 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*ebe77033f3
// Size: 0x40 (Inherited: 0x30)
struct U*ebe77033f3 : U*17099eb438 {
	struct TArray<struct U*17099eb438*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*3884228fb0
// Size: 0x40 (Inherited: 0x30)
struct U*3884228fb0 : U*17099eb438 {
	struct TArray<struct U*17099eb438*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*c704fe774e
// Size: 0x40 (Inherited: 0x30)
struct U*c704fe774e : U*17099eb438 {
	struct TArray<struct U*17099eb438*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*4f48a01baf
// Size: 0x30 (Inherited: 0x30)
struct U*4f48a01baf : UInterface {

	void *f1458d1b47(); // Function GameplayTags.*4f48a01baf.*f1458d1b47 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x610b444
	void *c6cd7e0676(); // Function GameplayTags.*4f48a01baf.*c6cd7e0676 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x610bc0c
	void *e44d3b28e7(); // Function GameplayTags.*4f48a01baf.*e44d3b28e7 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x610b8d4
	void *a46b469a85(); // Function GameplayTags.*4f48a01baf.*a46b469a85 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x610b2c4
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	void *af6ab4ee34(); // Function GameplayTags.BlueprintGameplayTagLibrary.*af6ab4ee34 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610c4dc
	void *5dbf94a84e(); // Function GameplayTags.BlueprintGameplayTagLibrary.*5dbf94a84e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610c35c
	void GetTagName(); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610b3a8
	void BreakGameplayTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610a768
	void *f6a358c572(); // Function GameplayTags.BlueprintGameplayTagLibrary.*f6a358c572 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610c7cc
	void AddGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x610a4ac
	void MakeGameplayTagContainerFromArray(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610bf14
	void MatchesTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610c684
	void *8da2229f4b(); // Function GameplayTags.BlueprintGameplayTagLibrary.*8da2229f4b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610b0a8
	void *9dc48b74e7(); // Function GameplayTags.BlueprintGameplayTagLibrary.*9dc48b74e7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610c068
	void *f1458d1b47(); // Function GameplayTags.BlueprintGameplayTagLibrary.*f1458d1b47 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610b534
	void HasAnyTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610b9c4
	void IsGameplayTagValid(); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610be7c
	void *3d4948dc4d(); // Function GameplayTags.BlueprintGameplayTagLibrary.*3d4948dc4d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610ab58
	void *e62b810a92(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e62b810a92 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x610a5e8
	void *aff42711ea(); // Function GameplayTags.BlueprintGameplayTagLibrary.*aff42711ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x610adb4
	void *ec83e1a0fd(); // Function GameplayTags.BlueprintGameplayTagLibrary.*ec83e1a0fd // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610a8d0
	void HasTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610bcb0
	void HasAllTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610b68c
	void *9962710a83(); // Function GameplayTags.BlueprintGameplayTagLibrary.*9962710a83 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610ac30
	void MakeGameplayTagQuery(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610c134
	void *36f6ae305a(); // Function GameplayTags.BlueprintGameplayTagLibrary.*36f6ae305a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x610cd14
	void *19bebf3344(); // Function GameplayTags.BlueprintGameplayTagLibrary.*19bebf3344 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610c8a4
	void *d401da137d(); // Function GameplayTags.BlueprintGameplayTagLibrary.*d401da137d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610afb0
	void MakeLiteralGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610c2d4
	void *70bdbc279d(); // Function GameplayTags.BlueprintGameplayTagLibrary.*70bdbc279d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x610b1e4
	void NotEqual_TagContainerTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610ca2c
	void *eaefc63f41(); // Function GameplayTags.BlueprintGameplayTagLibrary.*eaefc63f41 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610aa5c
	void NotEqual_TagTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x610cbcc
};

// Class GameplayTags.*5cb8da7fae
// Size: 0x188 (Inherited: 0x30)
struct U*5cb8da7fae : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct F*02a2e1a018> *8659ef350c; // 0xb0(0x10)
	char pad_C0[0x68]; // 0xc0(0x68)
	struct TArray<struct UDataTable*> *bb754b469a; // 0x128(0x10)
	char pad_138[0x50]; // 0x138(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x50 (Inherited: 0x30)
struct UGameplayTagsList : UObject {
	struct FString *a84bfaa53f; // 0x30(0x10)
	struct TArray<struct F*7a494bdb73> GameplayTagList; // 0x40(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xa8 (Inherited: 0x50)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x50(0x01)
	bool WarnOnInvalidTags; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct F*9c8231e276> CategoryRemapping; // 0x58(0x10)
	bool FastReplication; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FStringAssetReference> GameplayTagTableList; // 0x70(0x10)
	struct TArray<struct F*b6a9ba2f90> GameplayTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32 NumBitsForContainerSize; // 0xa0(0x04)
	int32 NetIndexFirstBitSegment; // 0xa4(0x04)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTagsDeveloperSettings : UObject {
	struct FString DeveloperConfigName; // 0x30(0x10)
};

