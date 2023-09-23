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

	void Tick(struct FGeometry MyGeometry); // Function W_SprintBar.W_SprintBar_C.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function W_SprintBar.W_SprintBar_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FLinearColor ExecuteUbergraph_W_SprintBar(float CallFunc__ae60dcbe74_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue); // Function W_SprintBar.W_SprintBar_C.ExecuteUbergraph_W_SprintBar // HasDefaults // @ game+0x1e037c
};

