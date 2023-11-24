// WidgetBlueprintGeneratedClass W_RecoilDebugMenu.W_RecoilDebugMenu_C
// Size: 0x57c (Inherited: 0x410)
struct UW_RecoilDebugMenu_C : U*0f3a9185b8 {
	struct F*73a77c28fa UberGraphFrame; // 0x410(0x08)
	struct UButton* Button_499; // 0x418(0x08)
	struct UButton* ButtonClear; // 0x420(0x08)
	struct UButton* ExportButton; // 0x428(0x08)
	struct UImage* Image_1; // 0x430(0x08)
	struct UImage* Image_95; // 0x438(0x08)
	struct UScrollBox* InfoListScroll; // 0x440(0x08)
	struct UVerticalBox* RecoilInfoList; // 0x448(0x08)
	struct UTextBlock* RecoilRot_Stat_CY; // 0x450(0x08)
	struct UImage* RecoilRot_Stat_Totals; // 0x458(0x08)
	struct UTextBlock* RecoilRot_Stat_WY; // 0x460(0x08)
	struct UVerticalBox* RecoilRot_VB; // 0x468(0x08)
	struct UTextBlock* RecoilValueText; // 0x470(0x08)
	struct URetainerBox* RetainerBox_1; // 0x478(0x08)
	struct UTextBlock* SpeedText; // 0x480(0x08)
	struct UTextBlock* T_RHDMax; // 0x488(0x08)
	struct UTextBlock* T_RHDMin; // 0x490(0x08)
	struct UTextBlock* T_RHMax; // 0x498(0x08)
	struct UTextBlock* T_RHMin; // 0x4a0(0x08)
	struct UTextBlock* T_RRVMax; // 0x4a8(0x08)
	struct UTextBlock* T_RRVMin; // 0x4b0(0x08)
	struct UTextBlock* T_RTHMAx; // 0x4b8(0x08)
	struct UTextBlock* T_RTHMin; // 0x4c0(0x08)
	struct UTextBlock* T_RTVMax; // 0x4c8(0x08)
	struct UTextBlock* T_RTVMin; // 0x4d0(0x08)
	struct UTextBlock* T_RValMax; // 0x4d8(0x08)
	struct UTextBlock* T_RValMin; // 0x4e0(0x08)
	struct UTextBlock* T_RVDMax; // 0x4e8(0x08)
	struct UTextBlock* T_RVDMin; // 0x4f0(0x08)
	struct UTextBlock* T_RVMax; // 0x4f8(0x08)
	struct UTextBlock* T_RVMin; // 0x500(0x08)
	struct UTextBlock* TextBlock_3; // 0x508(0x08)
	struct UW_RecoilDebug_ShotGroup_C* W_RecoilDebug_ShotGroup_254; // 0x510(0x08)
	struct UW_RecoilDebug_Target_C* W_RecoilDebug_Target_Panel; // 0x518(0x08)
	struct FVector2D StatRVal; // 0x520(0x08)
	struct FVector2D StatRV; // 0x528(0x08)
	struct FVector2D StatRH; // 0x530(0x08)
	struct FVector2D StatRTV; // 0x538(0x08)
	struct FVector2D StatRTH; // 0x540(0x08)
	struct FVector2D StatRRV; // 0x548(0x08)
	struct FVector2D StatRVD; // 0x550(0x08)
	struct FVector2D StatRHD; // 0x558(0x08)
	float StatCharacterY; // 0x560(0x04)
	float StatWeaponY; // 0x564(0x04)
	struct TArray<struct F*45c5398cfd> RecoilDebugInfoArray; // 0x568(0x10)
	float MaxRecoilValue; // 0x578(0x04)

	void AddDebugShotPoint(); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.AddDebugShotPoint // None // @ game+0x26a108
	struct FVector2D ClearStats(); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.ClearStats // None // @ game+0x26a108
	float UpdateStats(struct F*45c5398cfd InRecoil, struct FVector2D CallFunc_MakeVector2D_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue3, struct FText CallFunc__ace63d1958_ReturnValue2, struct FText CallFunc__ace63d1958_ReturnValue4, float CallFunc_BreakVector2D_X3, float CallFunc_BreakVector2D_X4, struct FText CallFunc__ace63d1958_ReturnValue10, struct FText CallFunc__ace63d1958_ReturnValue12, float CallFunc_BreakVector2D_X7, float CallFunc_BreakVector2D_X8, float CallFunc_BreakVector2D_X9, float CallFunc_FMax_ReturnValue, float CallFunc_BreakVector2D_Y10, float CallFunc_FMax_ReturnValue2, float CallFunc_FMax_ReturnValue4, float CallFunc_FMin_ReturnValue4, float CallFunc_BreakVector2D_X13, float CallFunc_FMax_ReturnValue5, float CallFunc_BreakVector2D_Y15, float CallFunc_BreakVector2D_X16, float CallFunc_FMin_ReturnValue7, struct FVector2D CallFunc_MakeVector2D_ReturnValue15); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.UpdateStats // None // @ game+0x26a108
	void ClearAll(); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.ClearAll // None // @ game+0x26a108
	void ClearTarget(); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.ClearTarget // None // @ game+0x26a108
	void ClearList(); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.ClearList // None // @ game+0x26a108
	int32 AddRecoilDataRow(float Rec_L, float Rec_Tendency, int32 CallFunc__10b0236ab6_ReturnValue2); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.AddRecoilDataRow // None // @ game+0x26a108
	void Tick(struct FGeometry MyGeometry); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.Tick // None // @ game+0x26a108
	void BndEvt__Button_399_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.BndEvt__Button_399_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__Button_498_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.BndEvt__Button_498_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	void BndEvt__ButtonClear_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.BndEvt__ButtonClear_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature // None // @ game+0x26a108
	struct FString ExecuteUbergraph_W_RecoilDebugMenu(int32 EntryPoint, float K2Node_Event_InDeltaTime, struct ATslCharacter* CallFunc__eb251d0969_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct FVector CallFunc__724cefc729_ReturnValue, float CallFunc__0fd03d50ab_ReturnValue); // Function W_RecoilDebugMenu.W_RecoilDebugMenu_C.ExecuteUbergraph_W_RecoilDebugMenu // None // @ game+0x26a108
};

