// WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C
// Size: 0x428 (Inherited: 0x410)
struct UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C : U*d883b0b6d1 {
	struct F*73a77c28fa UberGraphFrame; // 0x410(0x08)
	struct U*6b11b3bf02* MicVolumeMeterCover_Anim; // 0x418(0x08)
	float PlaybackSpeed; // 0x420(0x04)
	float PrevLevel; // 0x424(0x04)

	void GetGamePadHelpWidgetClass(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.GetGamePadHelpWidgetClass // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void OnAnimFinish(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.OnAnimFinish // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float UpdateVolumeMeterValue(enum class EUMGSequencePlayMode ___byte_Variable, bool ___bool_Variable, float CallFunc_PauseAnimation_ReturnValue, float CallFunc__4e238aec7b_ReturnValue, float CallFunc__d1b7da2a10_ReturnValue2, bool CallFunc__da2ea47dfe_ReturnValue); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeMeterValue // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void UpdateVolumeUnitMeter(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeUnitMeter // Event|Public|BlueprintEvent // @ game+0x1e037c
	int32 ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget //  // @ game+0x1e037c
};

