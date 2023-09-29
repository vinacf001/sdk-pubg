// WidgetBlueprintGeneratedClass LobbyNameTagHUD.LobbyNameTagHUD_C
// Size: 0x458 (Inherited: 0x458)
struct ULobbyNameTagHUD_C : U*0c3942b94c {
	struct UClass* LobbyNameNameTagWidgetClass; // 0x410(0x08)
	struct F*f23e4e6c9e *0ea70e2b09; // 0x418(0x28)
	bool bUseNameTagOffsetTranslations; // 0x440(0x01)
	struct TArray<struct FVector> NameTagOffsetTranslations; // 0x448(0x10)

	void UpdateNameTagWidget_Internal(); // Function TslGame.*0c3942b94c.UpdateNameTagWidget_Internal // None // @ game+0x55d12fc
	void GetNameTagWidget_Internal(int32 SlotIndex); // Function TslGame.*0c3942b94c.GetNameTagWidget_Internal // None // @ game+0x55bd964
	void SetNameTagWidget_Internal(); // Function TslGame.*0c3942b94c.SetNameTagWidget_Internal // None // @ game+0x55ce5b0
	void ResetNameTagWidget_Internal(); // Function TslGame.*0c3942b94c.ResetNameTagWidget_Internal // None // @ game+0x55c8d3c
};

