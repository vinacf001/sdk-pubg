// WidgetBlueprintGeneratedClass W_SprintBar.W_SprintBar_C
// Size: 0x299 (Inherited: 0x250)
struct UW_SprintBar_C : UUserWidget {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x250(0x08)
	struct U*3335e92189* SprintIcon_OFF; // 0x258(0x08)
	struct U*3335e92189* SprintIcon_ON; // 0x260(0x08)
	struct U*3335e92189* SprintBar_Hide; // 0x268(0x08)
	struct U*3335e92189* SprintBar_Show; // 0x270(0x08)
	struct UCanvasPanel* SprintBar_BG; // 0x278(0x08)
	struct UImage* SprintBar_Icon; // 0x280(0x08)
	struct UImage* SprintBar_Value; // 0x288(0x08)
	float SprintValue; // 0x290(0x04)
	float SprintBarWidth; // 0x294(0x04)
	bool bIsSprinting; // 0x298(0x01)

	void Tick(); // Function W_SprintBar.W_SprintBar_C.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void Construct(); // Function W_SprintBar.W_SprintBar_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	struct FLinearColor ExecuteUbergraph_W_SprintBar(struct U*8d608b1ea0* CallFunc__dc67dc9433_ReturnValue, struct FLinearColor CallFunc__7491f770b1_ReturnValue, bool CallFunc_IsVisible_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue); // Function W_SprintBar.W_SprintBar_C.ExecuteUbergraph_W_SprintBar // HasDefaults // @ game+0x293938
};

