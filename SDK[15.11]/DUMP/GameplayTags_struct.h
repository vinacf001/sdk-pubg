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
	struct TArray<struct FGameplayTag> *57705cd24d; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayTag {
	struct FName TagName; // 0x00(0x08)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x00)
struct FGameplayTagQuery {
	int32 *dec290ddc7; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> *ae4ad06d21; // 0x08(0x10)
	struct TArray<bool> *55ca1c079f; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString *d9f47ef647; // 0x38(0x10)
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x40 (Inherited: 0x00)
struct FGameplayTagReferenceHelper {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct GameplayTags.*cb89978d57
// Size: 0x50 (Inherited: 0x00)
struct F*cb89978d57 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct GameplayTags.*02a2e1a018
// Size: 0x18 (Inherited: 0x00)
struct F*02a2e1a018 {
	struct FName SourceName; // 0x00(0x08)
	enum class EGameplayTagSourceType SourceType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UGameplayTagsList* *358788270b; // 0x10(0x08)
};

// ScriptStruct GameplayTags.*7a494bdb73
// Size: 0x20 (Inherited: 0x08)
struct F*7a494bdb73 : FTableRowBase {
	struct FName Tag; // 0x08(0x08)
	struct FString DevComment; // 0x10(0x10)
};

// ScriptStruct GameplayTags.*9c8231e276
// Size: 0x20 (Inherited: 0x00)
struct F*9c8231e276 {
	struct FString *786ebdce7a; // 0x00(0x10)
	struct TArray<struct FString> *6a57478b6f; // 0x10(0x10)
};

// ScriptStruct GameplayTags.*b6a9ba2f90
// Size: 0x10 (Inherited: 0x00)
struct F*b6a9ba2f90 {
	struct FName *a6b8e22983; // 0x00(0x08)
	struct FName NewTagName; // 0x08(0x08)
};

