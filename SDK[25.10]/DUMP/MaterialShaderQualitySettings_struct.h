// Enum MaterialShaderQualitySettings.*f5b3082d33
enum class *f5b3082d33 : uint8 {
	*17f77f0c85,
	*132496dd0a,
	*91159be11c,
	*2263160153,
	*f5b3082d33_MAX,
};

// ScriptStruct MaterialShaderQualitySettings.*0ce2c8c7ca
// Size: 0x06 (Inherited: 0x00)
struct F*0ce2c8c7ca {
	bool bEnableOverride; // 0x00(0x01)
	bool bForceFullyRough; // 0x01(0x01)
	bool bForceNonMetal; // 0x02(0x01)
	bool bForceDisableLMDirectionality; // 0x03(0x01)
	bool bForceLQReflections; // 0x04(0x01)
	enum class *f5b3082d33 MobileCSMQuality; // 0x05(0x01)
};

