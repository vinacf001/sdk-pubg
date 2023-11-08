// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// Size: 0x280 (Inherited: 0x250)
struct ULobbyWebPopupCanvs_C : UUserWidget {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x250(0x08)
	struct UCanvasPanel* WebPopupCavas; // 0x258(0x08)
	struct TArray<struct UWebPopup_C*> PanelAddedWebPopupArray; // 0x260(0x10)
	struct TArray<struct UWebPopup_C*> PreCreatePopupArray; // 0x270(0x10)

	int32 HasChildren(bool CallFunc_IsWebPopupShow_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x293938
	struct UWebPopup_C* CreateWebPopupAndAddPanel(struct FWebPopupParam Param, DelegateProperty K2Node_CreateDelegate_OutputDelegate); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool ShowWebPopupImpl(struct FWebPopupParam PopupParam, struct UWebPopup_C* CallFunc_GetWebPopupFromPopupId_WebPopup, bool CallFunc__8334780abc_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool OnPreloadWebPopupImpl(int32 CallFunc__0bad7adb6e_ReturnValue, int32 ___int_Loop_Counter_Variable); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool GetWebPopupFromPopupId(struct FWebPopupParam CallFunc_GetSaveWebPopupParam_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	void ChangeWebPopupUriImpl(struct FString PopupId); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void OnCloseWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool CloseWebPopupByID(int32 CallFunc__0bad7adb6e_ReturnValue, bool CallFunc__2bff9823d8_ReturnValue, struct FWebPopupParam CallFunc_GetSaveWebPopupParam_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void RemoveWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AddWebPopup(struct UWebPopup_C* Widget); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool CanShowWebPopup(struct FString PopupId); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	DelegateProperty CreateWebPopupImpl(struct FWebPopupParam Param, float CallFunc__23a8e3a7f4_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue, struct FAnchors K2Node_MakeStruct_Anchors, bool CallFunc_CanShowWebPopup_Result, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue, struct UWebPopup_C* CallFunc_Create_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void CloseWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ShowWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void PreloadWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Construct(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	struct UWebPopup_C* ExecuteUbergraph_LobbyWebPopupCanvs(struct FColor K2Node_MakeStruct_Color, struct FWebPopupParam K2Node_Event_Param, int32 CallFunc_Array_Add_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs // HasDefaults // @ game+0x293938
};

