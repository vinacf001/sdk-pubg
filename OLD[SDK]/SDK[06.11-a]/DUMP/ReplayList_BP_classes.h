// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// Size: 0x469 (Inherited: 0x3f8)
struct AReplayList_BP_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3f8(0x08)
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

	struct FReplayItem OnUpdateItem(); // Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool UpdateReplayList(); // Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool CheckReplayBusyStatus(); // Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 OnGoPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool OnNextPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool OnPrevPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ClearReplayList(); // Function ReplayList_BP.ReplayList_BP_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UserConstructionScript(); // Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void CreateReplayListEvent(); // Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void PrevPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void NextPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.NextPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void GoPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.GoPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void OnItemClicked(struct FString RegionOrLocal, struct FReplayItem inReplayItem); // Function ReplayList_BP.ReplayList_BP_C.OnItemClicked // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void LoopBreaker(); // Function ReplayList_BP.ReplayList_BP_C.LoopBreaker // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool ExecuteUbergraph_ReplayList_BP(bool ___bool_True_if_break_was_hit_Variable, int32 ___int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, struct UGameInstance* CallFunc__3d5915f3a5_ReturnValue, struct APlayerController* CallFunc__8b5701c55f_ReturnValue, DelegateProperty _d8b1f23a78_OutputDelegate4, struct UReplayListItem_C* CallFunc_Create_ReturnValue2, struct UPanelSlot* CallFunc_AddChild_ReturnValue); // Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP // HasDefaults // @ game+0x370fbc
};

