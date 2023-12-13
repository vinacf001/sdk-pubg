// Enum MaterialShaderQualitySettings.*e4418a2ba8
enum class *e4418a2ba8 : uint8 {
	*e2156ec117,
	*9cbad0dd24,
	*4121882816,
	*951371591e,
	*e4418a2ba8_MAX,
};

// ScriptStruct MaterialShaderQualitySettings.*7becb2b678
// Size: 0x06 (Inherited: 0x00)
struct F*7becb2b678 {
	bool bEnableOverride; // 0x00(0x01)
	bool bForceFullyRough; // 0x01(0x01)
	bool bForceNonMetal; // 0x02(0x01)
	bool bForceDisableLMDirectionality; // 0x03(0x01)
	bool bForceLQReflections; // 0x04(0x01)
	enum class *e4418a2ba8 MobileCSMQuality; // 0x05(0x01)
};

