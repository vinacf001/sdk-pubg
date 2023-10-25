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

	bool *5c779c8460(); // Function GameplayTags.*2f659b806c.*5c779c8460 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63f28d4
	struct FGameplayTagContainer *4f28e6d72d(); // Function GameplayTags.*2f659b806c.*4f28e6d72d // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x63f1f8c
	bool *b091164cb1(); // Function GameplayTags.*2f659b806c.*b091164cb1 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x63f210c
	bool *bf92269458(); // Function GameplayTags.*2f659b806c.*bf92269458 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x63f259c
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FGameplayTag> BreakGameplayTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f1430
	int32 *0852d3c7c7(); // Function GameplayTags.BlueprintGameplayTagLibrary.*0852d3c7c7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f1eac
	bool IsGameplayTagValid(); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f2b44
	bool *b091164cb1(); // Function GameplayTags.BlueprintGameplayTagLibrary.*b091164cb1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f21fc
	bool HasTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f2978
	bool *7d998def9b(); // Function GameplayTags.BlueprintGameplayTagLibrary.*7d998def9b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f357c
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f2bdc
	bool *2162de8975(); // Function GameplayTags.BlueprintGameplayTagLibrary.*2162de8975 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f34a4
	bool *927198ffd0(); // Function GameplayTags.BlueprintGameplayTagLibrary.*927198ffd0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x63f39ec
	bool HasAnyTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f268c
	struct FGameplayTagContainer *75f4226dd6(); // Function GameplayTags.BlueprintGameplayTagLibrary.*75f4226dd6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f2d30
	bool NotEqual_TagContainerTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f3704
	bool HasAllTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f2354
	struct FGameplayTag MakeLiteralGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f2fac
	bool *1fe91ed9e6(); // Function GameplayTags.BlueprintGameplayTagLibrary.*1fe91ed9e6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f1820
	struct FGameplayTagContainer *e9ade8db7e(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e9ade8db7e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f3034
	struct FGameplayTagQuery MakeGameplayTagQuery(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f2e0c
	bool *af6b5067b0(); // Function GameplayTags.BlueprintGameplayTagLibrary.*af6b5067b0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f1598
	struct FGameplayTagContainer *79cb9a9ae9(); // Function GameplayTags.BlueprintGameplayTagLibrary.*79cb9a9ae9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x63f12b0
	struct FString *e97817b8ea(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e97817b8ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f1d70
	struct TArray<struct AActor*> *7c037362b8(); // Function GameplayTags.BlueprintGameplayTagLibrary.*7c037362b8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x63f1a7c
	bool *1e816290ce(); // Function GameplayTags.BlueprintGameplayTagLibrary.*1e816290ce // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f31b4
	struct FString *512b5d610a(); // Function GameplayTags.BlueprintGameplayTagLibrary.*512b5d610a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f1c78
	bool NotEqual_TagTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f38a4
	struct FGameplayTag AddGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x63f1174
	struct FName GetTagName(); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f2070
	bool *11a35545a7(); // Function GameplayTags.BlueprintGameplayTagLibrary.*11a35545a7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f1724
	bool MatchesTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x63f335c
	bool *2731ce2f6f(); // Function GameplayTags.BlueprintGameplayTagLibrary.*2731ce2f6f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x63f18f8
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

