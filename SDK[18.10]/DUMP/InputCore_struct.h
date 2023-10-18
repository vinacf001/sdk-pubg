// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8 {
	None,
};

// Enum InputCore.ETouchType
enum class ETouchType : uint8 {
	None,
};

// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8 {
	None,
};

// Enum InputCore.EControllerHand
enum class EControllerHand : uint8 {
	None,
	None,
};

// ScriptStruct InputCore.Key
// Size: 0x18 (Inherited: 0x00)
struct FKey {
	struct FName KeyName; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

