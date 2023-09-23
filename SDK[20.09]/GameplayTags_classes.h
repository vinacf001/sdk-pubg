// Class GameplayTags.*54cbddaf64
// Size: 0x98 (Inherited: 0x28)
struct U*54cbddaf64 : UObject {
	struct FString UserDescription; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	struct U*636d8f928b* *6f168bb408; // 0x48(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x50(0x48)
};

// Class GameplayTags.*636d8f928b
// Size: 0x28 (Inherited: 0x28)
struct U*636d8f928b : UObject {
};

// Class GameplayTags.*8eec8469b1
// Size: 0x48 (Inherited: 0x28)
struct U*8eec8469b1 : U*636d8f928b {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.*1e09c87acb
// Size: 0x48 (Inherited: 0x28)
struct U*1e09c87acb : U*636d8f928b {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.*2d429a41fe
// Size: 0x48 (Inherited: 0x28)
struct U*2d429a41fe : U*636d8f928b {
	struct FGameplayTagContainer Tags; // 0x28(0x20)
};

// Class GameplayTags.*a2e1deb9bd
// Size: 0x38 (Inherited: 0x28)
struct U*a2e1deb9bd : U*636d8f928b {
	struct TArray<struct U*636d8f928b*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.*b31a2d8aeb
// Size: 0x38 (Inherited: 0x28)
struct U*b31a2d8aeb : U*636d8f928b {
	struct TArray<struct U*636d8f928b*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.*2d3fa37169
// Size: 0x38 (Inherited: 0x28)
struct U*2d3fa37169 : U*636d8f928b {
	struct TArray<struct U*636d8f928b*> Expressions; // 0x28(0x10)
};

// Class GameplayTags.*16f72b47cb
// Size: 0x28 (Inherited: 0x28)
struct U*16f72b47cb : UInterface {
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {
};

// Class GameplayTags.*5bd0b017da
// Size: 0x180 (Inherited: 0x28)
struct U*5bd0b017da : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct TArray<struct F*8b2d9c79cd> *ce02fafaca; // 0xa8(0x10)
	char pad_B8[0x68]; // 0xb8(0x68)
	struct TArray<struct UDataTable*> *9972ec3b36; // 0x120(0x10)
	char pad_130[0x50]; // 0x130(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x48 (Inherited: 0x28)
struct UGameplayTagsList : UObject {
	struct FString *710683b890; // 0x28(0x10)
	struct TArray<struct F*2fe0e50281> GameplayTagList; // 0x38(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xa0 (Inherited: 0x48)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48(0x01)
	bool WarnOnInvalidTags; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct F*33f21110a2> CategoryRemapping; // 0x50(0x10)
	bool FastReplication; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FStringAssetReference> GameplayTagTableList; // 0x68(0x10)
	struct TArray<struct F*7ec25b4a60> GameplayTagRedirects; // 0x78(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x88(0x10)
	int32 NumBitsForContainerSize; // 0x98(0x04)
	int32 NetIndexFirstBitSegment; // 0x9c(0x04)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTagsDeveloperSettings : UObject {
	struct FString DeveloperConfigName; // 0x28(0x10)
};

