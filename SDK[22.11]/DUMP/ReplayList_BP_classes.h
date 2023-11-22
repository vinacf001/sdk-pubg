// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// Size: 0x459 (Inherited: 0x3e8)
struct AReplayList_BP_C : AActor {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x3e8(0x08)
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

	void OnUpdateItem(); // Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void UpdateReplayList(struct FString inRegionOrLocal); // Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	bool CheckReplayBusyStatus(); // Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FString OnGoPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void OnNextPageBtn(bool CallFunc_CheckReplayBusyStatus_bIsReplayBusy); // Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	int32 OnPrevPageBtn(bool CallFunc_CheckReplayBusyStatus_bIsReplayBusy); // Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ClearReplayList(); // Function ReplayList_BP.ReplayList_BP_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void UserConstructionScript(); // Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReceiveBeginPlay(); // Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x32e590
	void CreateReplayListEvent(); // Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void PrevPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void NextPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.NextPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void GoPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.GoPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FString OnItemClicked(); // Function ReplayList_BP.ReplayList_BP_C.OnItemClicked // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void LoopBreaker(); // Function ReplayList_BP.ReplayList_BP_C.LoopBreaker // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct UTslSettings* ExecuteUbergraph_ReplayList_BP(int32 ___int_Array_Index_Variable, struct UGameInstance* CallFunc__5fbc75595a_ReturnValue, struct UTslGameInstance* K2Node_DynamicCast_AsTsl_Game_Instance, struct UReplayListItem_C* CallFunc_Create_ReturnValue2, int32 CallFunc__035c0809f0_ReturnValue, int32 CallFunc__949df90870_ReturnValue, DelegateProperty _d01ead63d9_OutputDelegate7, bool CallFunc__2bff9823d8_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, struct FString CallFunc__3aabd2d403_ReturnValue); // Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP // HasDefaults // @ game+0x32e590
};

