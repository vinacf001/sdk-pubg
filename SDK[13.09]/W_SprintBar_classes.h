// WidgetBlueprintGeneratedClass W_SprintBar.W_SprintBar_C
// Size: 0x299 (Inherited: 0x250)
struct UW_SprintBar_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
	struct U*6b11b3bf02* SprintIcon_OFF; // 0x258(0x08)
	struct U*6b11b3bf02* SprintIcon_ON; // 0x260(0x08)
	struct U*6b11b3bf02* SprintBar_Hide; // 0x268(0x08)
	struct U*6b11b3bf02* SprintBar_Show; // 0x270(0x08)
	struct UCanvasPanel* SprintBar_BG; // 0x278(0x08)
	struct UImage* SprintBar_Icon; // 0x280(0x08)
	struct UImage* SprintBar_Value; // 0x288(0x08)
	float SprintValue; // 0x290(0x04)
	float SprintBarWidth; // 0x294(0x04)
	bool bIsSprinting; // 0x298(0x01)

	void Tick(); // Function W_SprintBar.W_SprintBar_C.Tick // None // @ game+0x26a108
	void Construct(); // Function W_SprintBar.W_SprintBar_C.Construct // None // @ game+0x26a108
	struct FLinearColor ExecuteUbergraph_W_SprintBar(struct FLinearColor CallFunc__277cc7c0de_ReturnValue, bool CallFunc_IsVisible_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue2); // Function W_SprintBar.W_SprintBar_C.ExecuteUbergraph_W_SprintBar // None // @ game+0x26a108
};

