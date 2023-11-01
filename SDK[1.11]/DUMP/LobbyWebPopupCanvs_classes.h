// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// Size: 0x280 (Inherited: 0x250)
struct ULobbyWebPopupCanvs_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x250(0x08)
	struct UCanvasPanel* WebPopupCavas[0x08]; // 0x258(0x08)
	struct TArray<struct UWebPopup_C*> PanelAddedWebPopupArray[0x10]; // 0x260(0x10)
	struct TArray<struct UWebPopup_C*> PreCreatePopupArray[0x10]; // 0x270(0x10)

	int32 HasChildren(int32* ___int_Array_Index_Variable, int32* CallFunc__e93d5a86a0_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x2cd4ac
	bool CreateWebPopupAndAddPanel(bool bReuse, struct UWebPopup_C** Temp, DelegateProperty* K2Node_CreateDelegate_OutputDelegate, struct UWebPopup_C** CallFunc_Create_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool ShowWebPopupImpl(bool CallFunc__00d985f0ac_ReturnValue, bool CallFunc_CanShowWebPopup_Result); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool OnPreloadWebPopupImpl(struct TArray<struct FWebPopupParam>* Params); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString GetWebPopupFromPopupId(struct UWebPopup_C** WebPopup, int32* ___int_Loop_Counter_Variable, int32* CallFunc__edb1454eaf_ReturnValue, bool CallFunc__249bb33a55_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2cd4ac
	struct FString ChangeWebPopupUriImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void OnCloseWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool CloseWebPopupByID(bool CallFunc_Not_PreBool_ReturnValue, int32* ___int_Loop_Counter_Variable, int32* CallFunc__edb1454eaf_ReturnValue, bool CallFunc__249bb33a55_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct UWebPopup_C* RemoveWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct UWebPopup_C* AddWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool CanShowWebPopup(bool Result, int32* ___int_Array_Index_Variable, int32* CallFunc__e93d5a86a0_ReturnValue, int32* CallFunc__edb1454eaf_ReturnValue); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct F*1930ebf77e CreateWebPopupImpl(struct FLinearColor* CallFunc__056e8d8b76_ReturnValue, float* CallFunc__3d182b442e_ReturnValue2, struct FVector2D* CallFunc_MakeVector2D_ReturnValue2, bool CallFunc_CanShowWebPopup_Result); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void CloseWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ShowWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void PreloadWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Construct(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	int32 ExecuteUbergraph_LobbyWebPopupCanvs(struct FColor* K2Node_MakeStruct_Color, struct FWebPopupParam* K2Node_MakeStruct_WebPopupParam); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs // HasDefaults // @ game+0x2cd4ac
};

