// Enum MaterialShaderQualitySettings.*e572f6a43f
enum class *e572f6a43f : uint8 {
	*b514b4b0c2,
	*66ffc41b83,
	*4670309905,
	*28afc905a7,
	*e572f6a43f_MAX,
};

// ScriptStruct MaterialShaderQualitySettings.*5185770af9
// Size: 0x06 (Inherited: 0x00)
struct F*5185770af9 {
	bool bEnableOverride; // 0x00(0x01)
	bool bForceFullyRough; // 0x01(0x01)
	bool bForceNonMetal; // 0x02(0x01)
	bool bForceDisableLMDirectionality; // 0x03(0x01)
	bool bForceLQReflections; // 0x04(0x01)
	enum class *e572f6a43f MobileCSMQuality; // 0x05(0x01)
};

