// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// Size: 0x280 (Inherited: 0x250)
struct ULobbyWebPopupCanvs_C : UUserWidget {
	struct F*73a77c28fa UberGraphFrame; // 0x250(0x08)
	struct UCanvasPanel* WebPopupCavas; // 0x258(0x08)
	struct TArray<struct UWebPopup_C*> PanelAddedWebPopupArray; // 0x260(0x10)
	struct TArray<struct UWebPopup_C*> PreCreatePopupArray; // 0x270(0x10)

	int32 HasChildren(int32 ___int_Array_Index_Variable); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x1e037c
	struct UWebPopup_C* CreateWebPopupAndAddPanel(struct FWebPopupParam Param, bool bReuse, struct UWebPopup_C* Temp, DelegateProperty K2Node_CreateDelegate_OutputDelegate); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool ShowWebPopupImpl(int32 CallFunc__c60d779ed0_ReturnValue, bool CallFunc__c5d91212fc_ReturnValue, bool CallFunc_CanShowWebPopup_Result); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool OnPreloadWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FWebPopupParam GetWebPopupFromPopupId(struct UWebPopup_C* WebPopup, int32 ___int_Loop_Counter_Variable, int32 CallFunc__c60d779ed0_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1e037c
	struct FString ChangeWebPopupUriImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void OnCloseWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool CloseWebPopupByID(bool ___bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 ___int_Loop_Counter_Variable, int32 CallFunc__c60d779ed0_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct UWebPopup_C* RemoveWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct UWebPopup_C* AddWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool CanShowWebPopup(struct FString PopupId, bool CallFunc__7b832495cc_ReturnValue, int32 ___int_Loop_Counter_Variable, struct UWebPopup_C* CallFunc_Array_Get_Item); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct F*ef6a4066ac CreateWebPopupImpl(float CallFunc__c22e42a3a5_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue, struct FAnchors K2Node_MakeStruct_Anchors); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void CloseWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ShowWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void PreloadWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Construct(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x1e037c
	int32 ExecuteUbergraph_LobbyWebPopupCanvs(int32 EntryPoint, struct FString K2Node_Event_PopupId, struct UWebPopup_C* CallFunc_CreateWebPopupAndAddPanel_WebPopup); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs // HasDefaults // @ game+0x1e037c
};

