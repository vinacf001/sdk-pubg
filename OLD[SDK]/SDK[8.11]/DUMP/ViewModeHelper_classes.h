// WidgetBlueprintGeneratedClass ViewModeHelper.ViewModeHelper_C
// Size: 0x444 (Inherited: 0x410)
struct UViewModeHelper_C : U*eb79fdee2a {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x410(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x418(0x08)
	struct UImage* Image_1; // 0x420(0x08)
	struct UImage* Image_2; // 0x428(0x08)
	bool bMouseDown; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float Save; // 0x434(0x04)
	float Time; // 0x438(0x04)
	struct FVector2D MouseDownPosition; // 0x43c(0x08)

	void OnMouseDown(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseDown // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void OnMouseUp(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseUp // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AddX(); // Function ViewModeHelper.ViewModeHelper_C.AddX // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AddY(); // Function ViewModeHelper.ViewModeHelper_C.AddY // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ViewModeZoomInOrOut(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ViewModeReset(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeReset // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Construct(); // Function ViewModeHelper.ViewModeHelper_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	int32 ExecuteUbergraph_ViewModeHelper(DelegateProperty _d01ead63d9_OutputDelegate, DelegateProperty _d01ead63d9_OutputDelegate3, DelegateProperty _d01ead63d9_OutputDelegate5, float K2Node_CustomEvent_Scale3, struct APlayerController* CallFunc__e33fbd32a1_ReturnValue, struct AHUD* CallFunc__4468a93312_ReturnValue, struct ALobbyHUD* K2Node_DynamicCast_AsLobby_HUD, struct ALobbyHUD* K2Node_DynamicCast_AsLobby_HUD2, struct AHUD* CallFunc__4468a93312_ReturnValue4, bool K2Node_DynamicCast_bSuccess4, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, float CallFunc__61f8c21999_LocationY); // Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper //  // @ game+0x293938
};

