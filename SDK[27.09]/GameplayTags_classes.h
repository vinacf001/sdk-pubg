// Class GameplayTags.*54cbddaf64
// Size: 0xa0 (Inherited: 0x30)
struct U*54cbddaf64 : UObject {
	struct FString UserDescription; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct U*636d8f928b* *6f168bb408; // 0x50(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x58(0x48)
};

// Class GameplayTags.*636d8f928b
// Size: 0x30 (Inherited: 0x30)
struct U*636d8f928b : UObject {
};

// Class GameplayTags.*8eec8469b1
// Size: 0x50 (Inherited: 0x30)
struct U*8eec8469b1 : U*636d8f928b {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*1e09c87acb
// Size: 0x50 (Inherited: 0x30)
struct U*1e09c87acb : U*636d8f928b {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*2d429a41fe
// Size: 0x50 (Inherited: 0x30)
struct U*2d429a41fe : U*636d8f928b {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*a2e1deb9bd
// Size: 0x40 (Inherited: 0x30)
struct U*a2e1deb9bd : U*636d8f928b {
	struct TArray<struct U*636d8f928b*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*b31a2d8aeb
// Size: 0x40 (Inherited: 0x30)
struct U*b31a2d8aeb : U*636d8f928b {
	struct TArray<struct U*636d8f928b*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*2d3fa37169
// Size: 0x40 (Inherited: 0x30)
struct U*2d3fa37169 : U*636d8f928b {
	struct TArray<struct U*636d8f928b*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*16f72b47cb
// Size: 0x30 (Inherited: 0x30)
struct U*16f72b47cb : UInterface {

	void *9fb2505438(); // Function GameplayTags.*16f72b47cb.*9fb2505438 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61bde30
	void *890f0c4a6f(); // Function GameplayTags.*16f72b47cb.*890f0c4a6f // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x61bdaf8
	void *4eed421bbe(); // Function GameplayTags.*16f72b47cb.*4eed421bbe // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x61bd4e8
	void *e400131722(); // Function GameplayTags.*16f72b47cb.*e400131722 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x61bd668
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	void HasAllTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bd8b0
	void *7a87d37013(); // Function GameplayTags.BlueprintGameplayTagLibrary.*7a87d37013 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bd1d4
	void NotEqual_TagContainerTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bec60
	void *e400131722(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e400131722 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bd758
	void *02cc83314c(); // Function GameplayTags.BlueprintGameplayTagLibrary.*02cc83314c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bd408
	void MakeGameplayTagContainerFromArray(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61be138
	void *9fc21ba790(); // Function GameplayTags.BlueprintGameplayTagLibrary.*9fc21ba790 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x61bcfd8
	void AddGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x61bc6d0
	void IsGameplayTagValid(); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61be0a0
	void BreakGameplayTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bc98c
	void MatchesTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61be8b8
	void *32cd086f20(); // Function GameplayTags.BlueprintGameplayTagLibrary.*32cd086f20 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bea00
	void *f0f142f0d5(); // Function GameplayTags.BlueprintGameplayTagLibrary.*f0f142f0d5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bce54
	void *e976e2e361(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e976e2e361 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bd2cc
	void *e16478f240(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e16478f240 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bcd7c
	void *3ddbcf06b3(); // Function GameplayTags.BlueprintGameplayTagLibrary.*3ddbcf06b3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bcaf4
	void *082688633c(); // Function GameplayTags.BlueprintGameplayTagLibrary.*082688633c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61be590
	void MakeGameplayTagQuery(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61be368
	void *4bb3297783(); // Function GameplayTags.BlueprintGameplayTagLibrary.*4bb3297783 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61be28c
	void *5e8a49a992(); // Function GameplayTags.BlueprintGameplayTagLibrary.*5e8a49a992 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bcc80
	void HasTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bded4
	void *302e455f30(); // Function GameplayTags.BlueprintGameplayTagLibrary.*302e455f30 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61be710
	void HasAnyTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bdbe8
	void *0cc1698675(); // Function GameplayTags.BlueprintGameplayTagLibrary.*0cc1698675 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x61bc80c
	void MakeLiteralGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61be508
	void *5bbbe2ab7b(); // Function GameplayTags.BlueprintGameplayTagLibrary.*5bbbe2ab7b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bead8
	void GetTagName(); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x61bd5cc
	void *645ca2901b(); // Function GameplayTags.BlueprintGameplayTagLibrary.*645ca2901b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x61bef48
	void NotEqual_TagTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x61bee00
};

// Class GameplayTags.*5bd0b017da
// Size: 0x188 (Inherited: 0x30)
struct U*5bd0b017da : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct F*8b2d9c79cd> *ce02fafaca; // 0xb0(0x10)
	char pad_C0[0x68]; // 0xc0(0x68)
	struct TArray<struct UDataTable*> *9972ec3b36; // 0x128(0x10)
	char pad_138[0x50]; // 0x138(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x50 (Inherited: 0x30)
struct UGameplayTagsList : UObject {
	struct FString *710683b890; // 0x30(0x10)
	struct TArray<struct F*2fe0e50281> GameplayTagList; // 0x40(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xa8 (Inherited: 0x50)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x50(0x01)
	bool WarnOnInvalidTags; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct F*33f21110a2> CategoryRemapping; // 0x58(0x10)
	bool FastReplication; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FStringAssetReference> GameplayTagTableList; // 0x70(0x10)
	struct TArray<struct F*7ec25b4a60> GameplayTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32 NumBitsForContainerSize; // 0xa0(0x04)
	int32 NetIndexFirstBitSegment; // 0xa4(0x04)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTagsDeveloperSettings : UObject {
	struct FString DeveloperConfigName; // 0x30(0x10)
};

