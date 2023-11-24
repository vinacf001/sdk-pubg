// WidgetBlueprintGeneratedClass ViewModeHelper.ViewModeHelper_C
// Size: 0x444 (Inherited: 0x410)
struct UViewModeHelper_C : U*17234a7c9b {
	struct F*73a77c28fa UberGraphFrame; // 0x410(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x418(0x08)
	struct UImage* Image_1; // 0x420(0x08)
	struct UImage* Image_2; // 0x428(0x08)
	bool bMouseDown; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float Save; // 0x434(0x04)
	float Time; // 0x438(0x04)
	struct FVector2D MouseDownPosition; // 0x43c(0x08)

	void OnMouseDown(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseDown // None // @ game+0x26a108
	void OnMouseUp(); // Function ViewModeHelper.ViewModeHelper_C.OnMouseUp // None // @ game+0x26a108
	void AddX(); // Function ViewModeHelper.ViewModeHelper_C.AddX // None // @ game+0x26a108
	void AddY(); // Function ViewModeHelper.ViewModeHelper_C.AddY // None // @ game+0x26a108
	void ViewModeZoomInOrOut(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut // None // @ game+0x26a108
	void ViewModeReset(); // Function ViewModeHelper.ViewModeHelper_C.ViewModeReset // None // @ game+0x26a108
	void Construct(); // Function ViewModeHelper.ViewModeHelper_C.Construct // None // @ game+0x26a108
	int32 ExecuteUbergraph_ViewModeHelper(int32 EntryPoint, DelegateProperty _37b0074df2_OutputDelegate2, DelegateProperty _37b0074df2_OutputDelegate4, bool CallFunc__84c3381e9f_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, struct APlayerController* CallFunc__ac2abd9ff0_ReturnValue2, struct AHUD* CallFunc__90c95e2107_ReturnValue2, struct ALobbyHUD* K2Node_DynamicCast_AsLobby_HUD3, struct APlayerController* CallFunc__ac2abd9ff0_ReturnValue4, struct ALobbyHUD* K2Node_DynamicCast_AsLobby_HUD4, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue); // Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper // None // @ game+0x26a108
};

