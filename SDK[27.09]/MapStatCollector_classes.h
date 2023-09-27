// Class MapStatCollector.MapStatCollectorSettings
// Size: 0x120 (Inherited: 0x30)
struct UMapStatCollectorSettings : UObject {
	bool bEnableExportInsights; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	double TargetFPS; // 0x38(0x08)
	double InitialDelay; // 0x40(0x08)
	bool bEnableLogs; // 0x48(0x01)
	bool bEnableRetryDumpStats; // 0x49(0x01)
	bool bEnableUnstableDumpStats; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	double DurationUnstableDump; // 0x50(0x08)
	bool bEnableFixedScalability; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FString> SetupCommandList; // 0x60(0x10)
	struct TArray<struct FString> OnStartCommandList; // 0x70(0x10)
	struct TArray<struct F*2a14cb262c> CustomMinimapList; // 0x80(0x10)
	int32 SamplingAngleCount; // 0x90(0x04)
	int32 SamplingRetryLimit; // 0x94(0x04)
	double DelayTimeMove; // 0x98(0x08)
	double DelayTimeRotate; // 0xa0(0x08)
	double DurationPreSampling; // 0xa8(0x08)
	double DurationInSampling; // 0xb0(0x08)
	struct TArray<struct F*72cbbd73a0> CustomStatEntries; // 0xb8(0x10)
	double ToleranceForCUSUM; // 0xc8(0x08)
	double ThresholdForCUSUM; // 0xd0(0x08)
	double ThresholdForStdDev; // 0xd8(0x08)
	double ThresholdForHitch; // 0xe0(0x08)
	double ThresholdForSigma; // 0xe8(0x08)
	bool bEnableHitchMaker; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FBox2D HitchTriggerBox; // 0xf4(0x14)
	double HitchTargetTime; // 0x108(0x08)
	struct TArray<struct F*66f4adf62f> GeneratorSettings; // 0x110(0x10)
};

// Class MapStatCollector.MapStatHitchMaker
// Size: 0x408 (Inherited: 0x408)
struct AMapStatHitchMaker : AActor {
};

// Class MapStatCollector.MapStatTrigger
// Size: 0x408 (Inherited: 0x408)
struct AMapStatTrigger : AActor {
};

