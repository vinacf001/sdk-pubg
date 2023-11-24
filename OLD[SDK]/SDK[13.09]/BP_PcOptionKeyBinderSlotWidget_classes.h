// WidgetBlueprintGeneratedClass BP_PcOptionKeyBinderSlotWidget.BP_PcOptionKeyBinderSlotWidget_C
// Size: 0x520 (Inherited: 0x520)
struct UBP_PcOptionKeyBinderSlotWidget_C : U*255aa9b276 {
	struct TArray<struct FKey> *3a87c174d6; // 0x410(0x10)
	struct U*8672d563dd* Owner; // 0x420(0x08)
	int32 SlotIndex; // 0x428(0x04)
	bool *3999d70fef; // 0x42c(0x01)
	bool *224e419601; // 0x42d(0x01)
	bool *a8d15f66f2; // 0x42e(0x01)
	bool *18b166667b; // 0x42f(0x01)
	struct TArray<struct FKey> *180d1a9992; // 0x430(0x10)
	struct FTslInputKey *7cd5decc05; // 0x440(0x20)
	struct FTslInputKey *b1fb8cb6db; // 0x460(0x20)
	bool bForceToUseLeftModifierKeys; // 0x480(0x01)
	struct F*959656208f InputKeyDisplayBorder_Binder; // 0x488(0x30)
	struct F*7f3debddd2 InputKeyIconizer_Binder; // 0x4b8(0x20)
	struct F*7f3debddd2 Highlighter_Binder; // 0x4d8(0x20)
	struct UTexture2D* BackgroundTextureNormal; // 0x4f8(0x08)
	struct UTexture2D* BackgroundTextureHighlighted; // 0x500(0x08)
	struct UTexture2D* BackgroundTextureInput; // 0x508(0x08)
	struct FMulticastDelegate OnKeyBinderSlotValueChangeEvent; // 0x510(0x10)
};

