// WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C
// Size: 0x430 (Inherited: 0x418)
struct UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C : U*45eaeb2e29 {
	struct F*abc8f374e0 UberGraphFrame; // 0x418(0x08)
	struct U*54cc75d10f* MicVolumeMeterCover_Anim; // 0x420(0x08)
	float PlaybackSpeed; // 0x428(0x04)
	float PrevLevel; // 0x42c(0x04)

	struct UClass* GetGamePadHelpWidgetClass(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.GetGamePadHelpWidgetClass // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	float OnAnimFinish(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.OnAnimFinish // Public|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	enum class EUMGSequencePlayMode UpdateVolumeMeterValue(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeMeterValue // Public|BlueprintCallable|BlueprintEvent // @ game+0x1b829c
	void Construct(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1b829c
	float UpdateVolumeUnitMeter(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeUnitMeter // Event|Public|BlueprintEvent // @ game+0x1b829c
	DelegateProperty ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget //  // @ game+0x1b829c
};

