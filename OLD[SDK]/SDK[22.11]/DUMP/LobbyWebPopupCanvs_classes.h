// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// Size: 0x280 (Inherited: 0x250)
struct ULobbyWebPopupCanvs_C : UUserWidget {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x250(0x08)
	struct UCanvasPanel* WebPopupCavas; // 0x258(0x08)
	struct TArray<struct UWebPopup_C*> PanelAddedWebPopupArray; // 0x260(0x10)
	struct TArray<struct UWebPopup_C*> PreCreatePopupArray; // 0x270(0x10)

	bool HasChildren(int32 CallFunc__0bad7adb6e_ReturnValue2); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x32e590
	struct UWebPopup_C* CreateWebPopupAndAddPanel(bool bShow); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool ShowWebPopupImpl(struct UWebPopup_C* WebPopup, struct UWebPopup_C* CallFunc_GetWebPopupFromPopupId_WebPopup, bool CallFunc_IsValid_ReturnValue, bool CallFunc__8334780abc_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	int32 OnPreloadWebPopupImpl(int32 ___int_Loop_Counter_Variable, struct UWebPopup_C* CallFunc_CreateWebPopupAndAddPanel_WebPopup, bool CallFunc_CanShowWebPopup_Result); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FWebPopupParam GetWebPopupFromPopupId(struct FString PopupId); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x32e590
	void ChangeWebPopupUriImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void OnCloseWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool CloseWebPopupByID(struct FString WebPopupID, bool ___bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 ___int_Loop_Counter_Variable, int32 CallFunc__0bad7adb6e_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct UWebPopup_C* RemoveWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct UWebPopup_C* AddWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool CanShowWebPopup(struct FString PopupId, bool CallFunc__b7edd1e262_ReturnValue, int32 ___int_Loop_Counter_Variable, struct UWebPopup_C* CallFunc_Array_Get_Item); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct F*a477d9422f CreateWebPopupImpl(struct FLinearColor CallFunc__c28e1ae0f8_ReturnValue, float CallFunc__23a8e3a7f4_ReturnValue, float CallFunc__23a8e3a7f4_ReturnValue2, struct FMargin K2Node_MakeStruct_Margin); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void CloseWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ShowWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void PreloadWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void Construct(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x32e590
	struct FWebPopupParam ExecuteUbergraph_LobbyWebPopupCanvs(struct FWebPopupParam K2Node_MakeStruct_WebPopupParam); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs // HasDefaults // @ game+0x32e590
};

