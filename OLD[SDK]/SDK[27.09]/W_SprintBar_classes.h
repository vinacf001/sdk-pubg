// WidgetBlueprintGeneratedClass W_SprintBar.W_SprintBar_C
// Size: 0x2a1 (Inherited: 0x258)
struct UW_SprintBar_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x258(0x08)
	struct U*6b11b3bf02* SprintIcon_OFF; // 0x260(0x08)
	struct U*6b11b3bf02* SprintIcon_ON; // 0x268(0x08)
	struct U*6b11b3bf02* SprintBar_Hide; // 0x270(0x08)
	struct U*6b11b3bf02* SprintBar_Show; // 0x278(0x08)
	struct UCanvasPanel* SprintBar_BG; // 0x280(0x08)
	struct UImage* SprintBar_Icon; // 0x288(0x08)
	struct UImage* SprintBar_Value; // 0x290(0x08)
	float SprintValue; // 0x298(0x04)
	float SprintBarWidth; // 0x29c(0x04)
	bool bIsSprinting; // 0x2a0(0x01)

	float Tick(); // Function W_SprintBar.W_SprintBar_C.Tick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	void Construct(); // Function W_SprintBar.W_SprintBar_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22ddc4
	struct FLinearColor ExecuteUbergraph_W_SprintBar(); // Function W_SprintBar.W_SprintBar_C.ExecuteUbergraph_W_SprintBar // HasDefaults // @ game+0x22ddc4
};

