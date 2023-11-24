// Class GameplayTags.*6681f0e447
// Size: 0xa0 (Inherited: 0x30)
struct U*6681f0e447 : UObject {
	struct FString UserDescription; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct U*114cd936f5* *3207a609f9; // 0x50(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x58(0x48)
};

// Class GameplayTags.*114cd936f5
// Size: 0x30 (Inherited: 0x30)
struct U*114cd936f5 : UObject {
};

// Class GameplayTags.*3d7aa209b7
// Size: 0x50 (Inherited: 0x30)
struct U*3d7aa209b7 : U*114cd936f5 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*07cae645cf
// Size: 0x50 (Inherited: 0x30)
struct U*07cae645cf : U*114cd936f5 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*ca6dc1e199
// Size: 0x50 (Inherited: 0x30)
struct U*ca6dc1e199 : U*114cd936f5 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*dcc514c310
// Size: 0x40 (Inherited: 0x30)
struct U*dcc514c310 : U*114cd936f5 {
	struct TArray<struct U*114cd936f5*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*d0e2005135
// Size: 0x40 (Inherited: 0x30)
struct U*d0e2005135 : U*114cd936f5 {
	struct TArray<struct U*114cd936f5*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*950a72a5a6
// Size: 0x40 (Inherited: 0x30)
struct U*950a72a5a6 : U*114cd936f5 {
	struct TArray<struct U*114cd936f5*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*2f659b806c
// Size: 0x30 (Inherited: 0x30)
struct U*2f659b806c : UInterface {

	bool *5c779c8460(); // Function GameplayTags.*2f659b806c.*5c779c8460 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e09930
	struct FGameplayTagContainer *4f28e6d72d(); // Function GameplayTags.*2f659b806c.*4f28e6d72d // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e08fe8
	bool *b091164cb1(); // Function GameplayTags.*2f659b806c.*b091164cb1 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e09168
	bool *bf92269458(); // Function GameplayTags.*2f659b806c.*bf92269458 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x5e095f8
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FGameplayTag> BreakGameplayTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e0848c
	int32 *0852d3c7c7(); // Function GameplayTags.BlueprintGameplayTagLibrary.*0852d3c7c7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e08f08
	bool IsGameplayTagValid(); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e09ba0
	bool *b091164cb1(); // Function GameplayTags.BlueprintGameplayTagLibrary.*b091164cb1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e09258
	bool HasTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e099d4
	bool *7d998def9b(); // Function GameplayTags.BlueprintGameplayTagLibrary.*7d998def9b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e0a5d8
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e09c38
	bool *2162de8975(); // Function GameplayTags.BlueprintGameplayTagLibrary.*2162de8975 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e0a500
	bool *927198ffd0(); // Function GameplayTags.BlueprintGameplayTagLibrary.*927198ffd0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e0aa48
	bool HasAnyTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e096e8
	struct FGameplayTagContainer *75f4226dd6(); // Function GameplayTags.BlueprintGameplayTagLibrary.*75f4226dd6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e09d8c
	bool NotEqual_TagContainerTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e0a760
	bool HasAllTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e093b0
	struct FGameplayTag MakeLiteralGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e0a008
	bool *1fe91ed9e6(); // Function GameplayTags.BlueprintGameplayTagLibrary.*1fe91ed9e6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e0887c
	struct FGameplayTagContainer *e9ade8db7e(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e9ade8db7e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e0a090
	struct FGameplayTagQuery MakeGameplayTagQuery(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e09e68
	bool *af6b5067b0(); // Function GameplayTags.BlueprintGameplayTagLibrary.*af6b5067b0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e085f4
	struct FGameplayTagContainer *79cb9a9ae9(); // Function GameplayTags.BlueprintGameplayTagLibrary.*79cb9a9ae9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e0830c
	struct FString *e97817b8ea(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e97817b8ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e08dcc
	struct TArray<struct AActor*> *7c037362b8(); // Function GameplayTags.BlueprintGameplayTagLibrary.*7c037362b8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e08ad8
	bool *1e816290ce(); // Function GameplayTags.BlueprintGameplayTagLibrary.*1e816290ce // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e0a210
	struct FString *512b5d610a(); // Function GameplayTags.BlueprintGameplayTagLibrary.*512b5d610a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e08cd4
	bool NotEqual_TagTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e0a900
	struct FGameplayTag AddGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x5e081d0
	struct FName GetTagName(); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e090cc
	bool *11a35545a7(); // Function GameplayTags.BlueprintGameplayTagLibrary.*11a35545a7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e08780
	bool MatchesTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5e0a3b8
	bool *2731ce2f6f(); // Function GameplayTags.BlueprintGameplayTagLibrary.*2731ce2f6f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x5e08954
};

// Class GameplayTags.*a090700d19
// Size: 0x188 (Inherited: 0x30)
struct U*a090700d19 : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct F*1fd0190e0b> *077e44d442; // 0xb0(0x10)
	char pad_C0[0x68]; // 0xc0(0x68)
	struct TArray<struct UDataTable*> *5a224f78f6; // 0x128(0x10)
	char pad_138[0x50]; // 0x138(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x50 (Inherited: 0x30)
struct UGameplayTagsList : UObject {
	struct FString *70a127b1c0; // 0x30(0x10)
	struct TArray<struct F*06a658789a> GameplayTagList; // 0x40(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xa8 (Inherited: 0x50)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x50(0x01)
	bool WarnOnInvalidTags; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct F*d96f513953> CategoryRemapping; // 0x58(0x10)
	bool FastReplication; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FStringAssetReference> GameplayTagTableList; // 0x70(0x10)
	struct TArray<struct F*3a30957ba5> GameplayTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32 NumBitsForContainerSize; // 0xa0(0x04)
	int32 NetIndexFirstBitSegment; // 0xa4(0x04)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTagsDeveloperSettings : UObject {
	struct FString DeveloperConfigName; // 0x30(0x10)
};

