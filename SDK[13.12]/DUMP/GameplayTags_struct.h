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
	struct TArray<struct FGameplayTag> *09f5d341ad; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayTag {
	struct FName TagName; // 0x00(0x08)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x00)
struct FGameplayTagQuery {
	int32 *a694928d48; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> *34af9ceaa5; // 0x08(0x10)
	struct TArray<bool> *120ddffa3a; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString *2dae0fe4fc; // 0x38(0x10)
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x40 (Inherited: 0x00)
struct FGameplayTagReferenceHelper {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct GameplayTags.*59777bef27
// Size: 0x50 (Inherited: 0x00)
struct F*59777bef27 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct GameplayTags.*143d4b9f7f
// Size: 0x18 (Inherited: 0x00)
struct F*143d4b9f7f {
	struct FName SourceName; // 0x00(0x08)
	enum class EGameplayTagSourceType SourceType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UGameplayTagsList* *f6094eaacd; // 0x10(0x08)
};

// ScriptStruct GameplayTags.*977b154898
// Size: 0x20 (Inherited: 0x08)
struct F*977b154898 : FTableRowBase {
	struct FName Tag; // 0x08(0x08)
	struct FString DevComment; // 0x10(0x10)
};

// ScriptStruct GameplayTags.*d92da22f05
// Size: 0x20 (Inherited: 0x00)
struct F*d92da22f05 {
	struct FString *d8ddef7a33; // 0x00(0x10)
	struct TArray<struct FString> *ba7ab4d302; // 0x10(0x10)
};

// ScriptStruct GameplayTags.*64a550a191
// Size: 0x10 (Inherited: 0x00)
struct F*64a550a191 {
	struct FName *1d5a3b0690; // 0x00(0x08)
	struct FName NewTagName; // 0x08(0x08)
};

