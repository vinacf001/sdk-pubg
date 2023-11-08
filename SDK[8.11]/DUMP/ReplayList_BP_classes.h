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

	void OnUpdateItem(); // Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString UpdateReplayList(); // Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void CheckReplayBusyStatus(); // Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString OnGoPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool OnNextPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	int32 OnPrevPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ClearReplayList(); // Function ReplayList_BP.ReplayList_BP_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void UserConstructionScript(); // Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveBeginPlay(); // Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void CreateReplayListEvent(); // Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void PrevPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void NextPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.NextPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void GoPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.GoPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString OnItemClicked(); // Function ReplayList_BP.ReplayList_BP_C.OnItemClicked // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void LoopBreaker(); // Function ReplayList_BP.ReplayList_BP_C.LoopBreaker // BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool ExecuteUbergraph_ReplayList_BP(DelegateProperty _d01ead63d9_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc__979df73b18_ReturnValue, int32 CallFunc__035c0809f0_ReturnValue, int32 CallFunc__7c04883f3f_ReturnValue, DelegateProperty _d01ead63d9_OutputDelegate5, int32 CallFunc__949df90870_ReturnValue3, bool CallFunc_CheckReplayBusyStatus_bIsReplayBusy, DelegateProperty _d01ead63d9_OutputDelegate6, DelegateProperty _d01ead63d9_OutputDelegate7, struct TArray<struct UWidget*> CallFunc__6dc7632cc9_ReturnValue, struct UWidget* CallFunc_Array_Get_Item2, bool CallFunc_BooleanAND_ReturnValue); // Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP // HasDefaults // @ game+0x293938
};

