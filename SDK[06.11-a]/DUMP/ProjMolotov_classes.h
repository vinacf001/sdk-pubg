// BlueprintGeneratedClass ProjMolotov.ProjMolotov_C
// Size: 0x9e0 (Inherited: 0x960)
struct AProjMolotov_C : ATslProjectileMolotov {
	struct F*a6c93df757 UberGraphFrame; // 0x960(0x08)
	struct UCapsuleComponent* PotatoCapsule; // 0x968(0x08)
	struct TArray<struct FRotator> InitialTraceArray; // 0x970(0x10)
	bool bInitialTraceComplete; // 0x980(0x01)
	char pad_981[0x7]; // 0x981(0x07)
	struct TArray<struct FHitResult> ConfirmedHitArray; // 0x988(0x10)
	bool bHitArrayProcessed; // 0x998(0x01)
	char pad_999[0x7]; // 0x999(0x07)
	struct TArray<struct USphereComponent*> SpreadCompArray; // 0x9a0(0x10)
	int32 SpreadIndex; // 0x9b0(0x04)
	int32 DirectionIndex; // 0x9b4(0x04)
	int32 StepsPerTick; // 0x9b8(0x04)
	float SpreadLenXY; // 0x9bc(0x04)
	float SpreadLenZ; // 0x9c0(0x04)
	int32 ActorSpawnerIndex; // 0x9c4(0x04)
	int32 InstanceCountMax; // 0x9c8(0x04)
	int32 MaterialAdditiveInstanceCount; // 0x9cc(0x04)
	int32 MaxMaterialAdditiveCount; // 0x9d0(0x04)
	char pad_9D4[0x4]; // 0x9d4(0x04)
	struct UClass* DamageFieldClass; // 0x9d8(0x08)

	void DisableParticle(); // Function ProjMolotov.ProjMolotov_C.DisableParticle // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void TickActorSpawner(int32 CallFunc__f53d173295_ReturnValue, bool CallFunc__8402dd331b_ReturnValue, struct USphereComponent* CallFunc_Array_Get_Item, struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue); // Function ProjMolotov.ProjMolotov_C.TickActorSpawner // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FVector TickSpread(int32 CallFunc__f53d173295_ReturnValue, int32 CallFunc__f53d173295_ReturnValue2, int32 CallFunc_Clamp_ReturnValue, bool CallFunc__045254c93f_ReturnValue, int32 CallFunc__f53d173295_ReturnValue4, bool CallFunc__b69b4c5064_ReturnValue, int32 CallFunc__f53d173295_ReturnValue5, struct FVector CallFunc__1429d76ba8_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue, struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit2, bool CallFunc_LineTraceSingleForObjects_ReturnValue2, struct FVector CallFunc_BreakHitResult_ImpactPoint2, struct FVector CallFunc_BreakHitResult_Normal2, struct FVector CallFunc_BreakHitResult_ImpactNormal2, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat2, int32 CallFunc_BreakHitResult_FaceIndex2, struct FVector CallFunc_BreakHitResult_TraceStart2, struct FVector CallFunc_BreakHitResult_TraceEnd2, float CallFunc_BreakVector_X, bool CallFunc_BooleanAND_ReturnValue, struct FVector CallFunc__1429d76ba8_ReturnValue5); // Function ProjMolotov.ProjMolotov_C.TickSpread // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool AddSphereColl(struct FVector Loc); // Function ProjMolotov.ProjMolotov_C.AddSphereColl // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool UserConstructionScript(); // Function ProjMolotov.ProjMolotov_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function ProjMolotov.ProjMolotov_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void SimulationVolumetricSpreadTick_BP(); // Function ProjMolotov.ProjMolotov_C.SimulationVolumetricSpreadTick_BP // Event|Public|BlueprintEvent // @ game+0x370fbc
	float ExplodeBP(); // Function ProjMolotov.ProjMolotov_C.ExplodeBP // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x370fbc
	struct FVector Multi_TickSpread(); // Function ProjMolotov.ProjMolotov_C.Multi_TickSpread // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void OnEnterWater_Event_1(); // Function ProjMolotov.ProjMolotov_C.OnEnterWater_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float ExecuteUbergraph_ProjMolotov(struct FVector K2Node_CustomEvent_Vel, struct FVector K2Node_CustomEvent_ActorLoc, bool CallFunc_HasAuthority_ReturnValue, DelegateProperty _d8b1f23a78_OutputDelegate); // Function ProjMolotov.ProjMolotov_C.ExecuteUbergraph_ProjMolotov // HasDefaults // @ game+0x370fbc
};

