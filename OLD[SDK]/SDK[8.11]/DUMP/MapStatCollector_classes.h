// Class MapStatCollector.MapStatCollectorSettings
// Size: 0x118 (Inherited: 0x28)
struct UMapStatCollectorSettings : UObject {
	bool bEnableExportInsights; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	double TargetFPS; // 0x30(0x08)
	double InitialDelay; // 0x38(0x08)
	bool bEnableLogs; // 0x40(0x01)
	bool bEnableRetryDumpStats; // 0x41(0x01)
	bool bEnableUnstableDumpStats; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	double DurationUnstableDump; // 0x48(0x08)
	bool bEnableFixedScalability; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FString> SetupCommandList; // 0x58(0x10)
	struct TArray<struct FString> OnStartCommandList; // 0x68(0x10)
	struct TArray<struct F*2fd8311450> CustomMinimapList; // 0x78(0x10)
	int32 SamplingAngleCount; // 0x88(0x04)
	int32 SamplingRetryLimit; // 0x8c(0x04)
	double DelayTimeMove; // 0x90(0x08)
	double DelayTimeRotate; // 0x98(0x08)
	double DurationPreSampling; // 0xa0(0x08)
	double DurationInSampling; // 0xa8(0x08)
	struct TArray<struct F*0c8baf364c> CustomStatEntries; // 0xb0(0x10)
	double ToleranceForCUSUM; // 0xc0(0x08)
	double ThresholdForCUSUM; // 0xc8(0x08)
	double ThresholdForStdDev; // 0xd0(0x08)
	double ThresholdForHitch; // 0xd8(0x08)
	double ThresholdForSigma; // 0xe0(0x08)
	bool bEnableHitchMaker; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FBox2D HitchTriggerBox; // 0xec(0x14)
	double HitchTargetTime; // 0x100(0x08)
	struct TArray<struct F*f632a24688> GeneratorSettings; // 0x108(0x10)
};

// Class MapStatCollector.MapStatHitchMaker
// Size: 0x3e8 (Inherited: 0x3e8)
struct AMapStatHitchMaker : AActor {
};

// Class MapStatCollector.MapStatTrigger
// Size: 0x3e8 (Inherited: 0x3e8)
struct AMapStatTrigger : AActor {
};

