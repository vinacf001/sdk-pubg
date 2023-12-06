// WidgetBlueprintGeneratedClass BP_PcOptionKeyBinderWidget.BP_PcOptionKeyBinderWidget_C
// Size: 0x868 (Inherited: 0x868)
struct UBP_PcOptionKeyBinderWidget_C : U*e43b170799 {
	struct TArray<struct FTslInputKey> *aab93a0920; // 0x7d8(0x10)
	struct FText DetailedDescriptionText; // 0x7e8(0x18)
	struct F*5068377016 KeyBindingDesc; // 0x800(0x38)
	struct TArray<struct U*42c901fa00*> *4a7a40b83f; // 0x838(0x10)
	struct TArray<struct F*54c30817ee> KeyBindingSlot_Binders; // 0x848(0x10)
	struct FMulticastDelegate OnKeyBinderValueChangeEvent; // 0x858(0x10)

	void OnKeyBinderSlotValueChanged(int32 Param0, struct FTslInputKey Param1); // Function TslGame.*e43b170799.OnKeyBinderSlotValueChanged // Final|Native|Public // @ game+0x5e81834
};

