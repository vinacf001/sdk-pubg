// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// Size: 0x288 (Inherited: 0x258)
struct ULobbyWebPopupCanvs_C : UUserWidget {
	struct F*abc8f374e0 UberGraphFrame; // 0x258(0x08)
	struct UCanvasPanel* WebPopupCavas; // 0x260(0x08)
	struct TArray<struct UWebPopup_C*> PanelAddedWebPopupArray; // 0x268(0x10)
	struct TArray<struct UWebPopup_C*> PreCreatePopupArray; // 0x278(0x10)

	bool HasChildren(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.HasChildren // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x273e04
	struct U*6ca2ab22f3* CreateWebPopupAndAddPanel(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupAndAddPanel // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool ShowWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	int32 OnPreloadWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnPreloadWebPopupImpl // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool GetWebPopupFromPopupId(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.GetWebPopupFromPopupId // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x273e04
	struct FString ChangeWebPopupUriImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ChangeWebPopupUriImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FString OnCloseWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.OnCloseWebPopupImpl // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool CloseWebPopupByID(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopupByID // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool RemoveWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.RemoveWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	int32 AddWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.AddWebPopup // Private|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool CanShowWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CanShowWebPopup // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct U*6ca2ab22f3* CreateWebPopupImpl(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CreateWebPopupImpl // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FString CloseWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.CloseWebPopup // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FWebPopupParam ShowWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ShowWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct TArray<struct FWebPopupParam> PreloadWebPopup(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.PreloadWebPopup // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void Construct(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x273e04
	struct TArray<struct FWebPopupParam> ExecuteUbergraph_LobbyWebPopupCanvs(); // Function LobbyWebPopupCanvs.LobbyWebPopupCanvs_C.ExecuteUbergraph_LobbyWebPopupCanvs // HasDefaults // @ game+0x273e04
};

