// Class GameplayTags.*118453302a
// Size: 0x98 (Inherited: 0x28)
struct U*118453302a : UObject {
	struct FString UserDescription; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	struct U*17099eb438* *d471924e37; // 0x48(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Class GameplayTags.*17099eb438
// Size: 0x28 (Inherited: 0x28)
struct U*17099eb438 : UObject {
};

// Class GameplayTags.*4b6740501f
// Size: 0x48 (Inherited: 0x28)
struct U*4b6740501f : U*17099eb438 {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.*d8ec87854c
// Size: 0x48 (Inherited: 0x28)
struct U*d8ec87854c : U*17099eb438 {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.*eb72a62d9c
// Size: 0x48 (Inherited: 0x28)
struct U*eb72a62d9c : U*17099eb438 {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.*ebe77033f3
// Size: 0x38 (Inherited: 0x28)
struct U*ebe77033f3 : U*17099eb438 {
	struct TArray<struct U*17099eb438*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.*3884228fb0
// Size: 0x38 (Inherited: 0x28)
struct U*3884228fb0 : U*17099eb438 {
	struct TArray<struct U*17099eb438*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.*c704fe774e
// Size: 0x38 (Inherited: 0x28)
struct U*c704fe774e : U*17099eb438 {
	struct TArray<struct U*17099eb438*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.*4f48a01baf
// Size: 0x28 (Inherited: 0x28)
struct U*4f48a01baf : UInterface {

	void *f1458d1b47(struct FGameplayTagContainer TagContainer); // Function GameplayTags.*4f48a01baf.*f1458d1b47 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f1b570
	struct FGameplayTag *c6cd7e0676(); // Function GameplayTags.*4f48a01baf.*c6cd7e0676 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f1bd38
	struct FGameplayTagContainer *e44d3b28e7(); // Function GameplayTags.*4f48a01baf.*e44d3b28e7 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f1ba00
	void *a46b469a85(); // Function GameplayTags.*4f48a01baf.*a46b469a85 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5f1b3f0
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	bool *af6ab4ee34(); // Function GameplayTags.BlueprintGameplayTagLibrary.*af6ab4ee34 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1c608
	void *5dbf94a84e(); // Function GameplayTags.BlueprintGameplayTagLibrary.*5dbf94a84e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1c488
	void GetTagName(); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1b4d4
	struct FGameplayTagContainer BreakGameplayTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1a894
	struct FGameplayTag *f6a358c572(struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.*f6a358c572 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1c8f8
	void AddGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f1a5d8
	struct TArray<struct FGameplayTag> MakeGameplayTagContainerFromArray(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1c040
	struct FGameplayTag MatchesTag(struct FGameplayTag TagTwo); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1c7b0
	void *8da2229f4b(); // Function GameplayTags.BlueprintGameplayTagLibrary.*8da2229f4b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1b1d4
	struct FGameplayTag *9dc48b74e7(); // Function GameplayTags.BlueprintGameplayTagLibrary.*9dc48b74e7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1c194
	struct FGameplayTagContainer *f1458d1b47(); // Function GameplayTags.BlueprintGameplayTagLibrary.*f1458d1b47 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1b660
	void HasAnyTags(struct FGameplayTagContainer TagContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1baf0
	struct FGameplayTag IsGameplayTagValid(); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1bfa8
	struct FGameplayTag *3d4948dc4d(struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.*3d4948dc4d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1ac84
	void *e62b810a92(struct FGameplayTagContainer InOutTagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.*e62b810a92 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f1a714
	struct FGameplayTagQuery *aff42711ea(); // Function GameplayTags.BlueprintGameplayTagLibrary.*aff42711ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f1aee0
	void *ec83e1a0fd(struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.*ec83e1a0fd // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1a9fc
	bool HasTag(struct FGameplayTagContainer TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1bddc
	bool HasAllTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1b7b8
	void *9962710a83(struct FGameplayTagContainer B); // Function GameplayTags.BlueprintGameplayTagLibrary.*9962710a83 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1ad5c
	struct FGameplayTagQuery MakeGameplayTagQuery(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1c260
	struct FGameplayTag *36f6ae305a(); // Function GameplayTags.BlueprintGameplayTagLibrary.*36f6ae305a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5f1ce40
	void *19bebf3344(struct FGameplayTagContainer B); // Function GameplayTags.BlueprintGameplayTagLibrary.*19bebf3344 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1c9d0
	struct FGameplayTag *d401da137d(); // Function GameplayTags.BlueprintGameplayTagLibrary.*d401da137d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1b0dc
	struct FGameplayTag MakeLiteralGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1c400
	void *70bdbc279d(); // Function GameplayTags.BlueprintGameplayTagLibrary.*70bdbc279d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5f1b310
	void NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1cb58
	struct FGameplayTag *eaefc63f41(); // Function GameplayTags.BlueprintGameplayTagLibrary.*eaefc63f41 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1ab88
	void NotEqual_TagTag(struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5f1ccf8
};

// Class GameplayTags.*5cb8da7fae
// Size: 0x180 (Inherited: 0x28)
struct U*5cb8da7fae : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct TArray<struct F*02a2e1a018> *8659ef350c; // 0xa8(0x10)
	char pad_B8[0x68]; // 0xb8(0x68)
	struct TArray<struct UDataTable*> *bb754b469a; // 0x120(0x10)
	char pad_130[0x50]; // 0x130(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct UGameplayTagsList : UObject {
	struct FString *a84bfaa53f; // 0x28(0x10)
	struct TArray<struct F*7a494bdb73> GameplayTagList; // 0x38(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xa0 (Inherited: 0x48)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48(0x01)
	bool WarnOnInvalidTags; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct F*9c8231e276> CategoryRemapping; // 0x50(0x10)
	bool FastReplication; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FStringAssetReference> GameplayTagTableList; // 0x68(0x10)
	struct TArray<struct F*b6a9ba2f90> GameplayTagRedirects; // 0x78(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x88(0x10)
	int32 NumBitsForContainerSize; // 0x98(0x04)
	int32 NetIndexFirstBitSegment; // 0x9c(0x04)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTagsDeveloperSettings : UObject {
	struct FString DeveloperConfigName; // 0x28(0x10)
};

