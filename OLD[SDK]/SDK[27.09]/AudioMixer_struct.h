// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8 {
	MeanSquared,
	RootMeanSquared,
	Peak,
	Count,
	ESubmixEffectDynamicsPeakMode_MAX,
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8 {
	Compressor,
	Limiter,
	Expander,
	Gate,
	Count,
	ESubmixEffectDynamicsProcessorType_MAX,
};

// ScriptStruct AudioMixer.*5826fb0ba7
// Size: 0x28 (Inherited: 0x00)
struct F*5826fb0ba7 {
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x00(0x01)
	enum class ESubmixEffectDynamicsPeakMode PeakMode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float LookAheadMsec; // 0x04(0x04)
	float AttackTimeMsec; // 0x08(0x04)
	float ReleaseTimeMsec; // 0x0c(0x04)
	float ThresholdDb; // 0x10(0x04)
	float Ratio; // 0x14(0x04)
	float KneeBandwidthDb; // 0x18(0x04)
	float InputGainDb; // 0x1c(0x04)
	float OutputGainDb; // 0x20(0x04)
	char bChannelLinked : 1; // 0x24(0x01)
	char bAnalogMode : 1; // 0x24(0x01)
	char pad_24_2 : 6; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AudioMixer.*c4002c4ee6
// Size: 0x30 (Inherited: 0x00)
struct F*c4002c4ee6 {
	float Density; // 0x00(0x04)
	float Diffusion; // 0x04(0x04)
	float Gain; // 0x08(0x04)
	float GainHF; // 0x0c(0x04)
	float DecayTime; // 0x10(0x04)
	float DecayHFRatio; // 0x14(0x04)
	float ReflectionsGain; // 0x18(0x04)
	float ReflectionsDelay; // 0x1c(0x04)
	float LateGain; // 0x20(0x04)
	float LateDelay; // 0x24(0x04)
	float AirAbsorptionGainHF; // 0x28(0x04)
	float WetLevel; // 0x2c(0x04)
};

// ScriptStruct AudioMixer.*822fec0c5a
// Size: 0x10 (Inherited: 0x00)
struct F*822fec0c5a {
	struct TArray<struct F*ac3d018a7d> EQBands; // 0x00(0x10)
};

// ScriptStruct AudioMixer.*ac3d018a7d
// Size: 0x10 (Inherited: 0x00)
struct F*ac3d018a7d {
	float Frequency; // 0x00(0x04)
	float Bandwidth; // 0x04(0x04)
	float GainDb; // 0x08(0x04)
	char bEnabled : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

