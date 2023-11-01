// Class GameplayTags.*6681f0e447
// Size: 0x98 (Inherited: 0x28)
struct U*6681f0e447 : UObject {
	struct FString UserDescription; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	struct U*114cd936f5* *3207a609f9; // 0x48(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Class GameplayTags.*114cd936f5
// Size: 0x28 (Inherited: 0x28)
struct U*114cd936f5 : UObject {
};

// Class GameplayTags.*3d7aa209b7
// Size: 0x48 (Inherited: 0x28)
struct U*3d7aa209b7 : U*114cd936f5 {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.*07cae645cf
// Size: 0x48 (Inherited: 0x28)
struct U*07cae645cf : U*114cd936f5 {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.*ca6dc1e199
// Size: 0x48 (Inherited: 0x28)
struct U*ca6dc1e199 : U*114cd936f5 {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.*dcc514c310
// Size: 0x38 (Inherited: 0x28)
struct U*dcc514c310 : U*114cd936f5 {
	struct TArray<struct U*114cd936f5*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.*d0e2005135
// Size: 0x38 (Inherited: 0x28)
struct U*d0e2005135 : U*114cd936f5 {
	struct TArray<struct U*114cd936f5*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.*950a72a5a6
// Size: 0x38 (Inherited: 0x28)
struct U*950a72a5a6 : U*114cd936f5 {
	struct TArray<struct U*114cd936f5*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.*2f659b806c
// Size: 0x28 (Inherited: 0x28)
struct U*2f659b806c : UInterface {

	void *5c779c8460(); // Function GameplayTags.*2f659b806c.*5c779c8460 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ff13ac
	void *4f28e6d72d(); // Function GameplayTags.*2f659b806c.*4f28e6d72d // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5ff0a64
	struct FGameplayTagContainer *b091164cb1(); // Function GameplayTags.*2f659b806c.*b091164cb1 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5ff0be4
	void *bf92269458(); // Function GameplayTags.*2f659b806c.*bf92269458 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5ff1074
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	struct FGameplayTagContainer BreakGameplayTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5feff08
	void *0852d3c7c7(); // Function GameplayTags.BlueprintGameplayTagLibrary.*0852d3c7c7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff0984
	void IsGameplayTagValid(); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff161c
	struct FGameplayTagContainer *b091164cb1(); // Function GameplayTags.BlueprintGameplayTagLibrary.*b091164cb1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff0cd4
	void HasTag(struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff1450
	struct FGameplayTagContainer *7d998def9b(); // Function GameplayTags.BlueprintGameplayTagLibrary.*7d998def9b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff2054
	struct TArray<struct FGameplayTag> MakeGameplayTagContainerFromArray(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff16b4
	void *2162de8975(struct FGameplayTag A); // Function GameplayTags.BlueprintGameplayTagLibrary.*2162de8975 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff1f7c
	struct FGameplayTag *927198ffd0(); // Function GameplayTags.BlueprintGameplayTagLibrary.*927198ffd0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5ff24c4
	bool HasAnyTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff1164
	void *75f4226dd6(); // Function GameplayTags.BlueprintGameplayTagLibrary.*75f4226dd6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff1808
	struct FString NotEqual_TagContainerTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff21dc
	bool HasAllTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff0e2c
	void MakeLiteralGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff1a84
	struct FGameplayTag *1fe91ed9e6(); // Function GameplayTags.BlueprintGameplayTagLibrary.*1fe91ed9e6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff02f8
	struct FGameplayTagContainer *e9ade8db7e(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e9ade8db7e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff1b0c
	void MakeGameplayTagQuery(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff18e4
	void *af6b5067b0(struct FGameplayTagContainer TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.*af6b5067b0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff0070
	struct FGameplayTagContainer *79cb9a9ae9(); // Function GameplayTags.BlueprintGameplayTagLibrary.*79cb9a9ae9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fefd88
	struct FGameplayTagContainer *e97817b8ea(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e97817b8ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff0848
	void *7c037362b8(struct UObject* WorldContextObject); // Function GameplayTags.BlueprintGameplayTagLibrary.*7c037362b8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5ff0554
	bool *1e816290ce(); // Function GameplayTags.BlueprintGameplayTagLibrary.*1e816290ce // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff1c8c
	void *512b5d610a(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.*512b5d610a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff0750
	void NotEqual_TagTag(struct FGameplayTag A); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff237c
	struct FGameplayTagContainer AddGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5fefc4c
	void GetTagName(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff0b48
	void *11a35545a7(TScriptInterface<struct U*2f659b806c> TagContainerInterface); // Function GameplayTags.BlueprintGameplayTagLibrary.*11a35545a7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff01fc
	bool MatchesTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff1e34
	void *2731ce2f6f(struct FGameplayTagContainer A); // Function GameplayTags.BlueprintGameplayTagLibrary.*2731ce2f6f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5ff03d0
};

// Class GameplayTags.*a090700d19
// Size: 0x180 (Inherited: 0x28)
struct U*a090700d19 : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct TArray<struct F*1fd0190e0b> *077e44d442; // 0xa8(0x10)
	char pad_B8[0x68]; // 0xb8(0x68)
	struct TArray<struct UDataTable*> *5a224f78f6; // 0x120(0x10)
	char pad_130[0x50]; // 0x130(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct UGameplayTagsList : UObject {
	struct FString *70a127b1c0; // 0x28(0x10)
	struct TArray<struct F*06a658789a> GameplayTagList; // 0x38(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xa0 (Inherited: 0x48)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48(0x01)
	bool WarnOnInvalidTags; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct F*d96f513953> CategoryRemapping; // 0x50(0x10)
	bool FastReplication; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FStringAssetReference> GameplayTagTableList; // 0x68(0x10)
	struct TArray<struct F*3a30957ba5> GameplayTagRedirects; // 0x78(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x88(0x10)
	int32 NumBitsForContainerSize; // 0x98(0x04)
	int32 NetIndexFirstBitSegment; // 0x9c(0x04)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTagsDeveloperSettings : UObject {
	struct FString DeveloperConfigName; // 0x28(0x10)
};

