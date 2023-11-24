// WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C
// Size: 0x428 (Inherited: 0x410)
struct UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C : U*45eaeb2e29 {
	struct F*abc8f374e0 UberGraphFrame; // 0x410(0x08)
	struct U*54cc75d10f* MicVolumeMeterCover_Anim; // 0x418(0x08)
	float PlaybackSpeed; // 0x420(0x04)
	float PrevLevel; // 0x424(0x04)

	void GetGamePadHelpWidgetClass(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.GetGamePadHelpWidgetClass // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void OnAnimFinish(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.OnAnimFinish // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float UpdateVolumeMeterValue(bool ___bool_Variable, float CallFunc__6d8f337be7_ReturnValue2, float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc__733ee259fa_ReturnValue2, float CallFunc__449286a277_ReturnValue); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeMeterValue // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void UpdateVolumeUnitMeter(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeUnitMeter // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	int32 ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget(float K2Node_Event_Energy); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget //  // @ game+0x2cd4ac
};

