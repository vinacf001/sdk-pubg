// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8 {
	Unknown,
	Success,
	Failed,
	Cancelled,
	Invalid,
	NotAllowed,
	Restored,
	AlreadyOwned,
	EInAppPurchaseState_MAX,
};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8 {
	None,
	Quit,
	Won,
	Lost,
	Tied,
	TimeExpired,
	First,
	Second,
	Third,
	Fourth,
	EMPMatchOutcome_MAX,
};

// ScriptStruct OnlineSubsystem.*e065599ba3
// Size: 0xa8 (Inherited: 0x00)
struct F*e065599ba3 {
	struct FString Identifier; // 0x00(0x10)
	struct FString TransactionIdentifier; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString DisplayDescription; // 0x30(0x10)
	struct FString DisplayPrice; // 0x40(0x10)
	float RawPrice; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString CurrencyCode; // 0x58(0x10)
	struct FString CurrencySymbol; // 0x68(0x10)
	struct FString DecimalSeparator; // 0x78(0x10)
	struct FString GroupingSeparator; // 0x88(0x10)
	struct FString ReceiptData; // 0x98(0x10)
};

// ScriptStruct OnlineSubsystem.*2c57c76876
// Size: 0x30 (Inherited: 0x00)
struct F*2c57c76876 {
	struct FString Identifier; // 0x00(0x10)
	struct FString ReceiptData; // 0x10(0x10)
	struct FString TransactionIdentifier; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystem.*c0969b688b
// Size: 0x18 (Inherited: 0x00)
struct F*c0969b688b {
	struct FName InterfaceName; // 0x00(0x08)
	struct FString *de524186da; // 0x08(0x10)
};

// ScriptStruct OnlineSubsystem.*24fd8219bd
// Size: 0x10 (Inherited: 0x00)
struct F*24fd8219bd {
	struct FName InterfaceName; // 0x00(0x08)
	struct UObject* InterfaceObject; // 0x08(0x08)
};

// ScriptStruct OnlineSubsystem.*00de9b975c
// Size: 0x18 (Inherited: 0x00)
struct F*00de9b975c {
	struct FString ProductIdentifier; // 0x00(0x10)
	bool bIsConsumable; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

