// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	Undefined,
	AnyTagsMatch,
	AllTagsMatch,
	NoTagsMatch,
	AnyExprMatch,
	AllExprMatch,
	NoExprMatch,
	EGameplayTagQueryExprType_MAX,
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	Any,
	All,
	EGameplayContainerMatchType_MAX,
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	Explicit,
	IncludeParentTags,
	EGameplayTagMatchType_MAX,
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	Native,
	DefaultTagList,
	TagList,
	DataTable,
	Invalid,
	EGameplayTagSourceType_MAX,
};

// ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagContainer {
	struct TArray<struct FGameplayTag> GameplayTags; // 0x00(0x10)
	struct TArray<struct FGameplayTag> *09472b1b50; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayTag {
	struct FName TagName; // 0x00(0x08)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x00)
struct FGameplayTagQuery {
	int32 *0d950e10d3; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> *65a20f47c8; // 0x08(0x10)
	struct TArray<bool> *f37f8cf15d; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString *3adfe4fd9f; // 0x38(0x10)
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x40 (Inherited: 0x00)
struct FGameplayTagReferenceHelper {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct GameplayTags.*5f9abcd86d
// Size: 0x50 (Inherited: 0x00)
struct F*5f9abcd86d {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct GameplayTags.*8b2d9c79cd
// Size: 0x18 (Inherited: 0x00)
struct F*8b2d9c79cd {
	struct FName SourceName; // 0x00(0x08)
	enum class EGameplayTagSourceType SourceType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UGameplayTagsList* *695ddecb5f; // 0x10(0x08)
};

// ScriptStruct GameplayTags.*2fe0e50281
// Size: 0x20 (Inherited: 0x08)
struct F*2fe0e50281 : FTableRowBase {
	struct FName Tag; // 0x08(0x08)
	struct FString DevComment; // 0x10(0x10)
};

// ScriptStruct GameplayTags.*33f21110a2
// Size: 0x20 (Inherited: 0x00)
struct F*33f21110a2 {
	struct FString *35bf4e7828; // 0x00(0x10)
	struct TArray<struct FString> *a27d27df1b; // 0x10(0x10)
};

// ScriptStruct GameplayTags.*7ec25b4a60
// Size: 0x10 (Inherited: 0x00)
struct F*7ec25b4a60 {
	struct FName *475c1c4eb0; // 0x00(0x08)
	struct FName NewTagName; // 0x08(0x08)
};

