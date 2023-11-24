// WidgetBlueprintGeneratedClass BP_PcOptionKeyBinderWidget.BP_PcOptionKeyBinderWidget_C
// Size: 0x860 (Inherited: 0x860)
struct UBP_PcOptionKeyBinderWidget_C : U*8672d563dd {
	struct TArray<struct FTslInputKey> *5b16690775; // 0x7d0(0x10)
	struct FText DetailedDescriptionText; // 0x7e0(0x18)
	struct F*3f8ed3898a KeyBindingDesc; // 0x7f8(0x38)
	struct TArray<struct U*255aa9b276*> *eb9b64e6d7; // 0x830(0x10)
	struct TArray<struct F*7f3debddd2> KeyBindingSlot_Binders; // 0x840(0x10)
	struct FMulticastDelegate OnKeyBinderValueChangeEvent; // 0x850(0x10)

	void OnKeyBinderSlotValueChanged(); // Function TslGame.*8672d563dd.OnKeyBinderSlotValueChanged // Final|Native|Public // @ game+0x56af8e0
};

