// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// Size: 0x459 (Inherited: 0x3e8)
struct AReplayList_BP_C : AActor {
	struct F*abc8f374e0 UberGraphFrame; // 0x3e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f0(0x08)
	struct UTslGameInstance* TslGameInstance; // 0x3f8(0x08)
	struct UUiReplayList_C* UiReplayList; // 0x400(0x08)
	struct FString IsLive; // 0x408(0x10)
	struct FText NewVar_1; // 0x418(0x18)
	struct FString RegionOrLocal; // 0x430(0x10)
	int32 PageSize; // 0x440(0x04)
	int32 pageCount; // 0x444(0x04)
	float prev_Percent; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UWidget* CurrentItemWidget; // 0x450(0x08)
	bool FindReplay; // 0x458(0x01)

	void OnUpdateItem(); // Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString UpdateReplayList(); // Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool CheckReplayBusyStatus(); // Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString OnGoPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	int32 OnNextPageBtn(bool CallFunc_CheckReplayBusyStatus_bIsReplayBusy); // Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	int32 OnPrevPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ClearReplayList(); // Function ReplayList_BP.ReplayList_BP_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UserConstructionScript(); // Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void CreateReplayListEvent(); // Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void PrevPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void NextPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.NextPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void GoPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.GoPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString OnItemClicked(); // Function ReplayList_BP.ReplayList_BP_C.OnItemClicked // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void LoopBreaker(); // Function ReplayList_BP.ReplayList_BP_C.LoopBreaker // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct UTslSettings* ExecuteUbergraph_ReplayList_BP(bool ___bool_True_if_break_was_hit_Variable, struct UGameInstance* CallFunc__0d055350c8_ReturnValue, int32 CallFunc__565d15749e_ReturnValue, int32 ___int_Loop_Counter_Variable, int32 ___int_Loop_Counter_Variable2, bool CallFunc__249bb33a55_ReturnValue, struct FReplayItem CallFunc_Array_Get_Item, struct TArray<struct UWidget*> CallFunc__f6b58a55c2_ReturnValue, int32 CallFunc__edb1454eaf_ReturnValue2, struct UReplayListItem_C* K2Node_DynamicCast_AsReplay_List_Item, bool K2Node_DynamicCast_bSuccess2, struct FString CallFunc__224d837d70_ReturnValue); // Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP // HasDefaults // @ game+0x2cd4ac
};

