// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// Size: 0x288 (Inherited: 0x258)
struct ULobbyWebPopupCanvs_C : UUserWidget {
	struct F*a6c93df757 UberGraphFrame; // 0x258(0x08)
	struct UCanvasPanel* WebPopupCavas; // 0x260(0x08)
	struct TArray<struct UWebPopup_C*> PanelAddedWebPopupArray; // 0x268(0x10)
	struct TArray<struct UWebPopup_C*> PreCreatePopupArray; // 0x278(0x10)

	bool HasChildren(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x370fbc
	struct U*efa881b15f* CreateWebPopupAndAddPanel(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ShowWebPopupImpl(struct FWebPopupParam PopupParam, struct UWebPopup_C* WebPopup, struct UWebPopup_C* CallFunc_Array_Get_Item, struct UWebPopup_C* CallFunc_GetWebPopupFromPopupId_WebPopup, bool CallFunc__a6dc1ffb15_ReturnValue, struct UWebPopup_C* CallFunc_CreateWebPopupAndAddPanel_WebPopup, bool CallFunc_CanShowWebPopup_Result, bool CallFunc_IsValid_ReturnValue2); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void OnPreloadWebPopupImpl(int32 ___int_Array_Index_Variable, int32 ___int_Loop_Counter_Variable, struct FWebPopupParam CallFunc_Array_Get_Item, struct UWebPopup_C* CallFunc_CreateWebPopupAndAddPanel_WebPopup); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool GetWebPopupFromPopupId(struct FString PopupId, struct UWebPopup_C* WebPopup, int32 ___int_Array_Index_Variable, int32 ___int_Loop_Counter_Variable); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x370fbc
	struct FString ChangeWebPopupUriImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FString OnCloseWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool CloseWebPopupByID(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool RemoveWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 AddWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool CanShowWebPopup(int32 ___int_Array_Index_Variable, int32 ___int_Loop_Counter_Variable, int32 CallFunc__f53d173295_ReturnValue, struct UWebPopup_C* CallFunc_Array_Get_Item); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void CreateWebPopupImpl(struct FWebPopupParam Param, bool bShow, bool bReuse, struct FVector2D CallFunc_MakeVector2D_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue2, struct FAnchors K2Node_MakeStruct_Anchors, bool CallFunc_CanShowWebPopup_Result, struct F*c32d8c9495 K2Node_MakeStruct__c32d8c9495, struct U*efa881b15f* CallFunc_AddChildToCanvas_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void CloseWebPopup(struct FString PopupId); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ShowWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct TArray<struct FWebPopupParam> PreloadWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Construct(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	struct TArray<struct FWebPopupParam> ExecuteUbergraph_LobbyWebPopupCanvs(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs // HasDefaults // @ game+0x370fbc
};

