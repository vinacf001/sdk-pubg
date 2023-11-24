// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// Size: 0x280 (Inherited: 0x250)
struct ULobbyWebPopupCanvs_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
	struct UCanvasPanel* WebPopupCavas; // 0x258(0x08)
	struct TArray<struct UWebPopup_C*> PanelAddedWebPopupArray; // 0x260(0x10)
	struct TArray<struct UWebPopup_C*> PreCreatePopupArray; // 0x270(0x10)

	int32 HasChildren(struct UWebPopup_C* CallFunc_Array_Get_Item, bool CallFunc_IsWebPopupShow_ReturnValue, bool CallFunc__7e2403ed42_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren // None // @ game+0x26a108
	struct UWebPopup_C* CreateWebPopupAndAddPanel(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel // None // @ game+0x26a108
	bool ShowWebPopupImpl(struct UWebPopup_C* WebPopup, struct UWebPopup_C* CallFunc_GetWebPopupFromPopupId_WebPopup, bool CallFunc_IsValid_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl // None // @ game+0x26a108
	struct TArray<struct FWebPopupParam> OnPreloadWebPopupImpl(int32 CallFunc__c60d779ed0_ReturnValue, int32 ___int_Loop_Counter_Variable, struct UWebPopup_C* CallFunc_CreateWebPopupAndAddPanel_WebPopup, bool CallFunc_CanShowWebPopup_Result); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl // None // @ game+0x26a108
	bool GetWebPopupFromPopupId(struct FWebPopupParam CallFunc_GetSaveWebPopupParam_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId // None // @ game+0x26a108
	void ChangeWebPopupUriImpl(struct FString PopupId); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl // None // @ game+0x26a108
	void OnCloseWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl // None // @ game+0x26a108
	bool CloseWebPopupByID(bool bForceRemoveParent, struct FWebPopupParam CallFunc_GetSaveWebPopupParam_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID // None // @ game+0x26a108
	void RemoveWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup // None // @ game+0x26a108
	void AddWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup // None // @ game+0x26a108
	struct FWebPopupParam CanShowWebPopup(bool CallFunc__d1b7f5dc7b_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup // None // @ game+0x26a108
	DelegateProperty CreateWebPopupImpl(bool bShow, struct UWebPopup_C* Temp, struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue, struct FMargin K2Node_MakeStruct_Margin); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl // None // @ game+0x26a108
	void CloseWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup // None // @ game+0x26a108
	void ShowWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup // None // @ game+0x26a108
	void PreloadWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup // None // @ game+0x26a108
	void Construct(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct // None // @ game+0x26a108
	struct FWebPopupParam ExecuteUbergraph_LobbyWebPopupCanvs(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs // None // @ game+0x26a108
};

