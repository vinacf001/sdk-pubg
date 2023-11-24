// WidgetBlueprintGeneratedClass W_SprintBar.W_SprintBar_C
// Size: 0x299 (Inherited: 0x250)
struct UW_SprintBar_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame; // 0x250(0x08)
	struct U*54cc75d10f* SprintIcon_OFF; // 0x258(0x08)
	struct U*54cc75d10f* SprintIcon_ON; // 0x260(0x08)
	struct U*54cc75d10f* SprintBar_Hide; // 0x268(0x08)
	struct U*54cc75d10f* SprintBar_Show; // 0x270(0x08)
	struct UCanvasPanel* SprintBar_BG; // 0x278(0x08)
	struct UImage* SprintBar_Icon; // 0x280(0x08)
	struct UImage* SprintBar_Value; // 0x288(0x08)
	float SprintValue; // 0x290(0x04)
	float SprintBarWidth; // 0x294(0x04)
	bool bIsSprinting; // 0x298(0x01)

	struct FGeometry Tick(); // Function W_SprintBar.W_SprintBar_C.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function W_SprintBar.W_SprintBar_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	bool ExecuteUbergraph_W_SprintBar(struct FGeometry K2Node_Event_MyGeometry, bool CallFunc__19d38c244f_ReturnValue, bool CallFunc_IsVisible_ReturnValue, float CallFunc__449286a277_ReturnValue, struct FLinearColor CallFunc__5a9e45cb2c_ReturnValue); // Function W_SprintBar.W_SprintBar_C.ExecuteUbergraph_W_SprintBar // HasDefaults // @ game+0x2cd4ac
};

