// Enum ChromaSDKPlugin.EChromaSDKStreamStatusEnum
enum class EChromaSDKStreamStatusEnum : uint8 {
	None,
};

// Enum ChromaSDKPlugin.*be745e03d6
enum class *be745e03d6 : uint8 {
	None,
};

// Enum ChromaSDKPlugin.*3c855455ba
enum class *3c855455ba : uint8 {
	None,
};

// Enum ChromaSDKPlugin.*dc8f94a22e
enum class *dc8f94a22e : uint8 {
	None,
};

// Enum ChromaSDKPlugin.*666c1c77d1
enum class *666c1c77d1 : uint8 {
	None,
};

// Enum ChromaSDKPlugin.*ba00110806
enum class *ba00110806 : uint8 {
	None,
};

// Enum ChromaSDKPlugin.*0f11d3548a
enum class *0f11d3548a : uint8 {
	None,
};

// Enum ChromaSDKPlugin.*97e6ca5dd3
enum class *97e6ca5dd3 : uint8 {
	None,
};

// Enum ChromaSDKPlugin.*af41552025
enum class *af41552025 : uint8 {
	None,
};

// ScriptStruct ChromaSDKPlugin.*9c68426cba
// Size: 0x10 (Inherited: 0x00)
struct F*9c68426cba {
	struct TArray<struct F*5e2c25115f> Effects; // 0x00(0x10)
};

// ScriptStruct ChromaSDKPlugin.*5e2c25115f
// Size: 0x38 (Inherited: 0x00)
struct F*5e2c25115f {
	struct FString Animation; // 0x00(0x10)
	bool State; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 PrimaryColor; // 0x14(0x04)
	int32 SecondaryColor; // 0x18(0x04)
	int32 Speed; // 0x1c(0x04)
	enum class *3c855455ba Blend; // 0x20(0x01)
	enum class *be745e03d6 Mode; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct F*2bd7e21715 FrameIndex; // 0x28(0x10)
};

// ScriptStruct ChromaSDKPlugin.*2bd7e21715
// Size: 0x10 (Inherited: 0x00)
struct F*2bd7e21715 {
	struct TArray<int32> *35709d6aeb; // 0x00(0x10)
};

// ScriptStruct ChromaSDKPlugin.*92624a97c3
// Size: 0x48 (Inherited: 0x00)
struct F*92624a97c3 {
	struct FString Title; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct FString *e42ece0741; // 0x20(0x10)
	struct FString *75860760c0; // 0x30(0x10)
	int32 *37e46a5c02; // 0x40(0x04)
	int32 Category; // 0x44(0x04)
};

// ScriptStruct ChromaSDKPlugin.*441baf12ca
// Size: 0x18 (Inherited: 0x00)
struct F*441baf12ca {
	struct TArray<struct F*3a538f84e2> Colors; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ChromaSDKPlugin.*3a538f84e2
// Size: 0x10 (Inherited: 0x00)
struct F*3a538f84e2 {
	struct TArray<struct FLinearColor> Colors; // 0x00(0x10)
};

// ScriptStruct ChromaSDKPlugin.*190dc3b563
// Size: 0x18 (Inherited: 0x00)
struct F*190dc3b563 {
	struct TArray<struct FLinearColor> Colors; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ChromaSDKPlugin.*8bd6676f6b
// Size: 0x14 (Inherited: 0x00)
struct F*8bd6676f6b {
	int32 Result; // 0x00(0x04)
	struct F*63cb229e15 EffectId; // 0x04(0x10)
};

// ScriptStruct ChromaSDKPlugin.*63cb229e15
// Size: 0x10 (Inherited: 0x00)
struct F*63cb229e15 {
	char pad_0[0x10]; // 0x00(0x10)
};

