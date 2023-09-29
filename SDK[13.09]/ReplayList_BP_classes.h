// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// Size: 0x469 (Inherited: 0x3f8)
struct AReplayList_BP_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x400(0x08)
	struct UTslGameInstance* TslGameInstance; // 0x408(0x08)
	struct UUiReplayList_C* UiReplayList; // 0x410(0x08)
	struct FString IsLive; // 0x418(0x10)
	struct FText NewVar_1; // 0x428(0x18)
	struct FString RegionOrLocal; // 0x440(0x10)
	int32 PageSize; // 0x450(0x04)
	int32 pageCount; // 0x454(0x04)
	float prev_Percent; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UWidget* CurrentItemWidget; // 0x460(0x08)
	bool FindReplay; // 0x468(0x01)

	void OnUpdateItem(); // Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem // None // @ game+0x26a108
	struct FString UpdateReplayList(); // Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList // None // @ game+0x26a108
	void CheckReplayBusyStatus(bool bIsReplayBusy); // Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus // None // @ game+0x26a108
	struct FString OnGoPageBtn(bool CallFunc__23b9ac6099_ReturnValue, struct FText CallFunc_GetText_ReturnValue); // Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn // None // @ game+0x26a108
	int32 OnNextPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn // None // @ game+0x26a108
	int32 OnPrevPageBtn(bool CallFunc_CheckReplayBusyStatus_bIsReplayBusy); // Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn // None // @ game+0x26a108
	void ClearReplayList(); // Function ReplayList_BP.ReplayList_BP_C.ClearReplayList // None // @ game+0x26a108
	void UserConstructionScript(); // Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay // None // @ game+0x26a108
	void CreateReplayListEvent(); // Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent // None // @ game+0x26a108
	void PrevPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent // None // @ game+0x26a108
	void NextPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.NextPageEvent // None // @ game+0x26a108
	void GoPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.GoPageEvent // None // @ game+0x26a108
	void OnItemClicked(struct FString RegionOrLocal); // Function ReplayList_BP.ReplayList_BP_C.OnItemClicked // None // @ game+0x26a108
	void LoopBreaker(); // Function ReplayList_BP.ReplayList_BP_C.LoopBreaker // None // @ game+0x26a108
	struct UTslSettings* ExecuteUbergraph_ReplayList_BP(int32 EntryPoint, DelegateProperty _37b0074df2_OutputDelegate2, DelegateProperty _37b0074df2_OutputDelegate3, int32 ___int_Array_Index_Variable, int32 CallFunc__c60d779ed0_ReturnValue, struct APlayerController* CallFunc__ac2abd9ff0_ReturnValue, DelegateProperty _37b0074df2_OutputDelegate4, int32 CallFunc__9fd695779d_ReturnValue, int32 CallFunc__a42291166c_ReturnValue, bool CallFunc__d1b7f5dc7b_ReturnValue, struct FReplayItem CallFunc_Array_Get_Item, struct FString K2Node_CustomEvent_RegionOrLocal, DelegateProperty _37b0074df2_OutputDelegate7, struct UWidget* CallFunc_Array_Get_Item2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_BooleanAND_ReturnValue, struct FString CallFunc__f9469ff135_ReturnValue); // Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP // None // @ game+0x26a108
};

