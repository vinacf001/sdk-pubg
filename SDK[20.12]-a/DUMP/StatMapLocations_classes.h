// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// Size: 0x4ac (Inherited: 0x3e8)
struct AStatMapLocations_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3f0(0x08)
	int32 CurrentLocationNumber; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct FTransform CurrentTransform; // 0x400(0x30)
	float DelayBeforeStatCheck; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<struct FString> BeginConsoleCommands; // 0x438(0x10)
	struct TArray<struct FString> StatGroups; // 0x448(0x10)
	float DelayTimeAfterTeleport; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct FString> StatCounterNames; // 0x460(0x10)
	struct TArray<struct FString> StatCycleNames; // 0x470(0x10)
	struct UStatLocationsWidget_C* StatsWidget; // 0x480(0x08)
	struct TArray<struct FString> StatsOutputArray; // 0x488(0x10)
	struct TArray<struct FTransform> MapLocations; // 0x498(0x10)
	float StartupDelay; // 0x4a8(0x04)

	void AppendStatDataToColumnNames(); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void GetCurrentLevelLocations(); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void GetMapLocations(); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void GatherStats(); // Function StatMapLocations.StatMapLocations_C.GatherStats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void SetCurrentTransform(); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void CheckPlayerTransform(); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void MoveToDebugLocation(); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations //  // @ game+0x3b43ac
};

