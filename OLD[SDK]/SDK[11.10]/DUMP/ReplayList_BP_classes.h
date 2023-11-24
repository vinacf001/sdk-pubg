// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// Size: 0x471 (Inherited: 0x400)
struct AReplayList_BP_C : AActor {
	struct F*abc8f374e0 UberGraphFrame; // 0x400(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x408(0x08)
	struct UTslGameInstance* TslGameInstance; // 0x410(0x08)
	struct UUiReplayList_C* UiReplayList; // 0x418(0x08)
	struct FString IsLive; // 0x420(0x10)
	struct FText NewVar_1; // 0x430(0x18)
	struct FString RegionOrLocal; // 0x448(0x10)
	int32 PageSize; // 0x458(0x04)
	int32 pageCount; // 0x45c(0x04)
	float prev_Percent; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UWidget* CurrentItemWidget; // 0x468(0x08)
	bool FindReplay; // 0x470(0x01)

	struct FReplayItem OnUpdateItem(); // Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool UpdateReplayList(); // Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool CheckReplayBusyStatus(); // Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	int32 OnGoPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool OnNextPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool OnPrevPageBtn(); // Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void ClearReplayList(); // Function ReplayList_BP.ReplayList_BP_C.ClearReplayList // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void UserConstructionScript(); // Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void ReceiveBeginPlay(); // Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x273e04
	void CreateReplayListEvent(); // Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void PrevPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void NextPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.NextPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void GoPageEvent(); // Function ReplayList_BP.ReplayList_BP_C.GoPageEvent // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FReplayItem OnItemClicked(); // Function ReplayList_BP.ReplayList_BP_C.OnItemClicked // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void LoopBreaker(); // Function ReplayList_BP.ReplayList_BP_C.LoopBreaker // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	bool ExecuteUbergraph_ReplayList_BP(); // Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP // HasDefaults // @ game+0x273e04
};

