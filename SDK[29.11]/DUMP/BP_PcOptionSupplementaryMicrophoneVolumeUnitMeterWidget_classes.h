// WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C
// Size: 0x430 (Inherited: 0x418)
struct UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C : U*908ccce503 {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x418(0x08)
	struct U*3335e92189* MicVolumeMeterCover_Anim; // 0x420(0x08)
	float PlaybackSpeed; // 0x428(0x04)
	float PrevLevel; // 0x42c(0x04)

	struct UClass* GetGamePadHelpWidgetClass(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.GetGamePadHelpWidgetClass // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	float OnAnimFinish(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.OnAnimFinish // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	enum class EUMGSequencePlayMode UpdateVolumeMeterValue(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeMeterValue // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void Construct(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1dcd78
	float UpdateVolumeUnitMeter(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeUnitMeter // Event|Public|BlueprintEvent // @ game+0x1dcd78
	DelegateProperty ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget //  // @ game+0x1dcd78
};

