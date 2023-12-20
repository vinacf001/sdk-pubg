// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// Size: 0x459 (Inherited: 0x3e8)
struct AReplayList_BP_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3e8(0x08)
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

	void OnUpdateItem(); // Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UpdateReplayList(); // Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void CheckReplayBusyStatus(); // Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnGoPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnNextPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnPrevPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ClearReplayList(); // Function ReplayList_BP.ReplayList_BP_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void CreateReplayListEvent(); // Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void PrevPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void NextPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.NextPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void GoPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.GoPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnItemClicked(); // Function ReplayList_BP.ReplayList_BP_C.OnItemClicked // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void LoopBreaker(); // Function ReplayList_BP.ReplayList_BP_C.LoopBreaker // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_ReplayList_BP(); // Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP // HasDefaults // @ game+0x3b43ac
};

