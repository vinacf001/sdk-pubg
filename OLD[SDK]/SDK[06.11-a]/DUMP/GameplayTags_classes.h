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
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {
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

