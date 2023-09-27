// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// Size: 0x4cc (Inherited: 0x408)
struct AStatMapLocations_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x408(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	int32 CurrentLocationNumber; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct FTransform CurrentTransform; // 0x420(0x30)
	float DelayBeforeStatCheck; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct TArray<struct FString> BeginConsoleCommands; // 0x458(0x10)
	struct TArray<struct FString> StatGroups; // 0x468(0x10)
	float DelayTimeAfterTeleport; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct TArray<struct FString> StatCounterNames; // 0x480(0x10)
	struct TArray<struct FString> StatCycleNames; // 0x490(0x10)
	struct UStatLocationsWidget_C* StatsWidget; // 0x4a0(0x08)
	struct TArray<struct FString> StatsOutputArray; // 0x4a8(0x10)
	struct TArray<struct FTransform> MapLocations; // 0x4b8(0x10)
	float StartupDelay; // 0x4c8(0x04)

	int32 AppendStatDataToColumnNames(); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool GetCurrentLevelLocations(); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FRotator GetMapLocations(); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct UStatLocationsWidget_C* CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	int32 GatherStats(); // Function StatMapLocations.StatMapLocations_C.GatherStats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool SetCurrentTransform(); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool CheckPlayerTransform(); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FString MoveToDebugLocation(); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct TArray<struct FString> UserConstructionScript(); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp // BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations // BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	bool ExecuteUbergraph_StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations //  // @ game+0x22ddc4
};

