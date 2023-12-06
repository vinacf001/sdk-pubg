// WidgetBlueprintGeneratedClass LobbyNameTagHUD.LobbyNameTagHUD_C
// Size: 0x460 (Inherited: 0x460)
struct ULobbyNameTagHUD_C : U*6ce4df5995 {
	struct UClass* LobbyNameNameTagWidgetClass; // 0x418(0x08)
	struct F*a159aaccd9 *ad914d8ba7; // 0x420(0x28)
	bool bUseNameTagOffsetTranslations; // 0x448(0x01)
	struct TArray<struct FVector> NameTagOffsetTranslations; // 0x450(0x10)

	void ResetNameTagWidget_Internal(); // Function TslGame.*6ce4df5995.ResetNameTagWidget_Internal // Final|Native|Public|BlueprintCallable // @ game+0x5d91710
	void GetNameTagWidget_Internal(int32 SlotIndex, struct U*dbd5d5e4b4* ReturnValue); // Function TslGame.*6ce4df5995.GetNameTagWidget_Internal // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x5d82cc4
	void UpdateNameTagWidget_Internal(); // Function TslGame.*6ce4df5995.UpdateNameTagWidget_Internal // Final|Native|Public|BlueprintCallable // @ game+0x5d97b84
	void SetNameTagWidget_Internal(); // Function TslGame.*6ce4df5995.SetNameTagWidget_Internal // Final|Native|Public|BlueprintCallable // @ game+0x5d951ac
};

