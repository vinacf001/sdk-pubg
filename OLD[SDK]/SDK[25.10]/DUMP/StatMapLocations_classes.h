// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// Size: 0x4bc (Inherited: 0x3f8)
struct AStatMapLocations_C : AActor {
	struct F*abc8f374e0 UberGraphFrame; // 0x3f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x400(0x08)
	int32 CurrentLocationNumber; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FTransform CurrentTransform; // 0x410(0x30)
	float DelayBeforeStatCheck; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct TArray<struct FString> BeginConsoleCommands; // 0x448(0x10)
	struct TArray<struct FString> StatGroups; // 0x458(0x10)
	float DelayTimeAfterTeleport; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct TArray<struct FString> StatCounterNames; // 0x470(0x10)
	struct TArray<struct FString> StatCycleNames; // 0x480(0x10)
	struct UStatLocationsWidget_C* StatsWidget; // 0x490(0x08)
	struct TArray<struct FString> StatsOutputArray; // 0x498(0x10)
	struct TArray<struct FTransform> MapLocations; // 0x4a8(0x10)
	float StartupDelay; // 0x4b8(0x04)

	int32 AppendStatDataToColumnNames(); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool GetCurrentLevelLocations(); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FRotator GetMapLocations(); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct UStatLocationsWidget_C* CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	int32 GatherStats(); // Function StatMapLocations.StatMapLocations_C.GatherStats // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool SetCurrentTransform(); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool CheckPlayerTransform(); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FString MoveToDebugLocation(); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct TArray<struct FString> UserConstructionScript(); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2ad9d8
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool ExecuteUbergraph_StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations //  // @ game+0x2ad9d8
};

