// BlueprintGeneratedClass ProjMolotov.ProjMolotov_C
// Size: 0x9d0 (Inherited: 0x950)
struct AProjMolotov_C : ATslProjectileMolotov {
	struct F*a6c93df757 UberGraphFrame; // 0x950(0x08)
	struct UCapsuleComponent* PotatoCapsule; // 0x958(0x08)
	struct TArray<struct FRotator> InitialTraceArray; // 0x960(0x10)
	bool bInitialTraceComplete; // 0x970(0x01)
	char pad_971[0x7]; // 0x971(0x07)
	struct TArray<struct FHitResult> ConfirmedHitArray; // 0x978(0x10)
	bool bHitArrayProcessed; // 0x988(0x01)
	char pad_989[0x7]; // 0x989(0x07)
	struct TArray<struct USphereComponent*> SpreadCompArray; // 0x990(0x10)
	int32 SpreadIndex; // 0x9a0(0x04)
	int32 DirectionIndex; // 0x9a4(0x04)
	int32 StepsPerTick; // 0x9a8(0x04)
	float SpreadLenXY; // 0x9ac(0x04)
	float SpreadLenZ; // 0x9b0(0x04)
	int32 ActorSpawnerIndex; // 0x9b4(0x04)
	int32 InstanceCountMax; // 0x9b8(0x04)
	int32 MaterialAdditiveInstanceCount; // 0x9bc(0x04)
	int32 MaxMaterialAdditiveCount; // 0x9c0(0x04)
	char pad_9C4[0x4]; // 0x9c4(0x04)
	struct UClass* DamageFieldClass; // 0x9c8(0x08)

	void DisableParticle(); // Function ProjMolotov.ProjMolotov_C.DisableParticle // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void TickActorSpawner(); // Function ProjMolotov.ProjMolotov_C.TickActorSpawner // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void TickSpread(); // Function ProjMolotov.ProjMolotov_C.TickSpread // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void AddSphereColl(); // Function ProjMolotov.ProjMolotov_C.AddSphereColl // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function ProjMolotov.ProjMolotov_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function ProjMolotov.ProjMolotov_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void SimulationVolumetricSpreadTick_BP(); // Function ProjMolotov.ProjMolotov_C.SimulationVolumetricSpreadTick_BP // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ExplodeBP(); // Function ProjMolotov.ProjMolotov_C.ExplodeBP // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void Multi_TickSpread(); // Function ProjMolotov.ProjMolotov_C.Multi_TickSpread // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnEnterWater_Event_1(); // Function ProjMolotov.ProjMolotov_C.OnEnterWater_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_ProjMolotov(); // Function ProjMolotov.ProjMolotov_C.ExecuteUbergraph_ProjMolotov // HasDefaults // @ game+0x3b43ac
};

