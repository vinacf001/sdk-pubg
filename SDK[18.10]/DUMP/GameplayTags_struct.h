// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	None,
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	None,
	None,
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	None,
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	None,
	None,
};

// ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagContainer {
	struct TArray<struct FGameplayTag> GameplayTags; // 0x00(0x10)
	struct TArray<struct FGameplayTag> *63b24f9163; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayTag {
	struct FName TagName; // 0x00(0x08)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x00)
struct FGameplayTagQuery {
	int32 *4eddce2e85; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> *90e98889d9; // 0x08(0x10)
	struct TArray<bool> *c6152ee64a; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString *157466dd47; // 0x38(0x10)
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x40 (Inherited: 0x00)
struct FGameplayTagReferenceHelper {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct GameplayTags.*e5f627d84b
// Size: 0x50 (Inherited: 0x00)
struct F*e5f627d84b {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct GameplayTags.*1fd0190e0b
// Size: 0x18 (Inherited: 0x00)
struct F*1fd0190e0b {
	struct FName SourceName; // 0x00(0x08)
	enum class EGameplayTagSourceType SourceType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UGameplayTagsList* *813bf62b08; // 0x10(0x08)
};

// ScriptStruct GameplayTags.*06a658789a
// Size: 0x20 (Inherited: 0x08)
struct F*06a658789a : FTableRowBase {
	struct FName Tag; // 0x08(0x08)
	struct FString DevComment; // 0x10(0x10)
};

// ScriptStruct GameplayTags.*d96f513953
// Size: 0x20 (Inherited: 0x00)
struct F*d96f513953 {
	struct FString *e72b3f985d; // 0x00(0x10)
	struct TArray<struct FString> *79feb4d0f8; // 0x10(0x10)
};

// ScriptStruct GameplayTags.*3a30957ba5
// Size: 0x10 (Inherited: 0x00)
struct F*3a30957ba5 {
	struct FName *7e0d144c8f; // 0x00(0x08)
	struct FName NewTagName; // 0x08(0x08)
};

