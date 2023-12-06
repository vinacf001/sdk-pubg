// WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C
// Size: 0x430 (Inherited: 0x418)
struct UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C : U*5080b32fca {
	struct F*a6c93df757 UberGraphFrame; // 0x418(0x08)
	struct U*9c8bfa0aee* MicVolumeMeterCover_Anim; // 0x420(0x08)
	float PlaybackSpeed; // 0x428(0x04)
	float PrevLevel; // 0x42c(0x04)

	struct UClass* GetGamePadHelpWidgetClass(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.GetGamePadHelpWidgetClass // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float OnAnimFinish(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.OnAnimFinish // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float UpdateVolumeMeterValue(float CallFunc__ace9454687_ReturnValue, bool CallFunc__d99ec0791c_ReturnValue, float K2Node_Select_Default, enum class EUMGSequencePlayMode K2Node_Select2_Default); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeMeterValue // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Construct(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void UpdateVolumeUnitMeter(); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeUnitMeter // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget(int32 EntryPoint, float K2Node_Event_Energy, DelegateProperty _d8b1f23a78_OutputDelegate); // Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget //  // @ game+0x370fbc
};

