// Class GameplayTags.*ddd93bfe55
// Size: 0xa0 (Inherited: 0x30)
struct U*ddd93bfe55 : UObject {
	struct FString UserDescription; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct U*a7bd042135* *51ab6f9dae; // 0x50(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x58(0x48)
};

// Class GameplayTags.*a7bd042135
// Size: 0x30 (Inherited: 0x30)
struct U*a7bd042135 : UObject {
};

// Class GameplayTags.*347db78b2f
// Size: 0x50 (Inherited: 0x30)
struct U*347db78b2f : U*a7bd042135 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*2d7dc6dafb
// Size: 0x50 (Inherited: 0x30)
struct U*2d7dc6dafb : U*a7bd042135 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*370e47dd15
// Size: 0x50 (Inherited: 0x30)
struct U*370e47dd15 : U*a7bd042135 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*3a7799cd8e
// Size: 0x40 (Inherited: 0x30)
struct U*3a7799cd8e : U*a7bd042135 {
	struct TArray<struct U*a7bd042135*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*967d763d12
// Size: 0x40 (Inherited: 0x30)
struct U*967d763d12 : U*a7bd042135 {
	struct TArray<struct U*a7bd042135*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*a8bf631c45
// Size: 0x40 (Inherited: 0x30)
struct U*a8bf631c45 : U*a7bd042135 {
	struct TArray<struct U*a7bd042135*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*1d9393e0d8
// Size: 0x30 (Inherited: 0x30)
struct U*1d9393e0d8 : UInterface {

	bool *a39d719ed1(); // Function GameplayTags.*1d9393e0d8.*a39d719ed1 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x60dd5ec
	bool *64b8d30fdb(); // Function GameplayTags.*1d9393e0d8.*64b8d30fdb // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x60dda7c
	bool *ec45fdf54f(); // Function GameplayTags.*1d9393e0d8.*ec45fdf54f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60dddb4
	struct FGameplayTagContainer *a1081e600d(); // Function GameplayTags.*1d9393e0d8.*a1081e600d // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x60dd46c
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	bool *e1da8c7106(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e1da8c7106 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dcdd8
	int32 *90df06f934(); // Function GameplayTags.BlueprintGameplayTagLibrary.*90df06f934 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dd38c
	bool HasAllTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dd834
	bool IsGameplayTagValid(); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60de024
	bool *a39d719ed1(); // Function GameplayTags.BlueprintGameplayTagLibrary.*a39d719ed1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dd6dc
	struct FName GetTagName(); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dd550
	struct FGameplayTagContainer *b8aae886fc(); // Function GameplayTags.BlueprintGameplayTagLibrary.*b8aae886fc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60de514
	struct FString *485a0885df(); // Function GameplayTags.BlueprintGameplayTagLibrary.*485a0885df // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dd250
	struct FGameplayTagQuery MakeGameplayTagQuery(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60de2ec
	bool HasAnyTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60ddb6c
	struct FGameplayTag AddGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60dc654
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60de0bc
	bool *f24f91137a(); // Function GameplayTags.BlueprintGameplayTagLibrary.*f24f91137a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60dcd00
	bool *e030fc3366(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e030fc3366 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dca78
	bool *c66a13c6e9(); // Function GameplayTags.BlueprintGameplayTagLibrary.*c66a13c6e9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60de694
	bool *57e0976922(); // Function GameplayTags.BlueprintGameplayTagLibrary.*57e0976922 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60deecc
	struct TArray<struct FGameplayTag> BreakGameplayTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dc910
	bool NotEqual_TagTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60ded84
	struct FGameplayTagContainer *da1597228f(); // Function GameplayTags.BlueprintGameplayTagLibrary.*da1597228f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60de210
	bool NotEqual_TagContainerTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60debe4
	bool MatchesTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60de83c
	bool *5c0788f6b8(); // Function GameplayTags.BlueprintGameplayTagLibrary.*5c0788f6b8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dea5c
	struct TArray<struct AActor*> *5438a9f983(); // Function GameplayTags.BlueprintGameplayTagLibrary.*5438a9f983 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60dcf5c
	bool *ddec9b4531(); // Function GameplayTags.BlueprintGameplayTagLibrary.*ddec9b4531 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60dcc04
	struct FString *c19a18e73c(); // Function GameplayTags.BlueprintGameplayTagLibrary.*c19a18e73c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60dd158
	struct FGameplayTagContainer *dae2ba978f(); // Function GameplayTags.BlueprintGameplayTagLibrary.*dae2ba978f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x60dc790
	bool HasTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x60dde58
	bool *43f580b1c8(); // Function GameplayTags.BlueprintGameplayTagLibrary.*43f580b1c8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60de984
	struct FGameplayTag MakeLiteralGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60de48c
};

// Class GameplayTags.*0210413157
// Size: 0x188 (Inherited: 0x30)
struct U*0210413157 : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct F*143d4b9f7f> *c7f64919ac; // 0xb0(0x10)
	char pad_C0[0x68]; // 0xc0(0x68)
	struct TArray<struct UDataTable*> *e8498f0906; // 0x128(0x10)
	char pad_138[0x50]; // 0x138(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x50 (Inherited: 0x30)
struct UGameplayTagsList : UObject {
	struct FString *5221bb302a; // 0x30(0x10)
	struct TArray<struct F*977b154898> GameplayTagList; // 0x40(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xa8 (Inherited: 0x50)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x50(0x01)
	bool WarnOnInvalidTags; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct F*d92da22f05> CategoryRemapping; // 0x58(0x10)
	bool FastReplication; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FStringAssetReference> GameplayTagTableList; // 0x70(0x10)
	struct TArray<struct F*64a550a191> GameplayTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32 NumBitsForContainerSize; // 0xa0(0x04)
	int32 NetIndexFirstBitSegment; // 0xa4(0x04)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTagsDeveloperSettings : UObject {
	struct FString DeveloperConfigName; // 0x30(0x10)
};

