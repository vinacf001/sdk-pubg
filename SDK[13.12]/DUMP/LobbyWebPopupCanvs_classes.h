// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// Size: 0x288 (Inherited: 0x258)
struct ULobbyWebPopupCanvs_C : UUserWidget {
	struct F*a6c93df757 UberGraphFrame; // 0x258(0x08)
	struct UCanvasPanel* WebPopupCavas; // 0x260(0x08)
	struct TArray<struct UWebPopup_C*> PanelAddedWebPopupArray; // 0x268(0x10)
	struct TArray<struct UWebPopup_C*> PreCreatePopupArray; // 0x278(0x10)

	bool HasChildren(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x20a5d0
	struct U*efa881b15f* CreateWebPopupAndAddPanel(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool ShowWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	int32 OnPreloadWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool GetWebPopupFromPopupId(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x20a5d0
	struct FString ChangeWebPopupUriImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct FString OnCloseWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool CloseWebPopupByID(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool RemoveWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct UWebPopup_C* AddWebPopup(int32 CallFunc__1b773b2c32_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void CanShowWebPopup(struct FString PopupId, bool Result, bool CallFunc__d19da177ef_ReturnValue, int32 ___int_Array_Index_Variable, int32 ___int_Loop_Counter_Variable, int32 CallFunc__f53d173295_ReturnValue, struct UWebPopup_C* CallFunc_Array_Get_Item, int32 CallFunc__34ad69eaa1_ReturnValue, struct FWebPopupParam CallFunc_GetSaveWebPopupParam_ReturnValue, bool CallFunc__045254c93f_ReturnValue, bool CallFunc__d19da177ef_ReturnValue2); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void CreateWebPopupImpl(struct FWebPopupParam Param, bool bShow, bool bReuse, struct UWebPopup_C* Temp, struct FLinearColor CallFunc__7259546a5c_ReturnValue, float CallFunc__7e0da19a6a_ReturnValue, float CallFunc__7e0da19a6a_ReturnValue2, struct FVector2D CallFunc_MakeVector2D_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue2, struct FAnchors K2Node_MakeStruct_Anchors); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void CloseWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ShowWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void PreloadWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Construct(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_LobbyWebPopupCanvs(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs // HasDefaults // @ game+0x20a5d0
};

