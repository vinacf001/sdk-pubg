// BlueprintGeneratedClass ProjSmokeBomb_v2.ProjSmokeBomb_v2_C
// Size: 0x924 (Inherited: 0x8e0)
struct AProjSmokeBomb_v2_C : ATslProjectile_SmokeBomb {
	struct F*a6c93df757 UberGraphFrame; // 0x8e0(0x08)
	struct U*6fefc4cc80* TslWorldOffset; // 0x8e8(0x08)
	float HitTimer; // 0x8f0(0x04)
	float HitImpactMin; // 0x8f4(0x04)
	float HitImpactMax; // 0x8f8(0x04)
	float HitMinVelocity; // 0x8fc(0x04)
	float HitTimeDelay; // 0x900(0x04)
	bool bSmokeSpawned; // 0x904(0x01)
	char pad_905[0x3]; // 0x905(0x03)
	float ReleaseBuffer; // 0x908(0x04)
	struct FVector ActorLocLastTick; // 0x90c(0x0c)
	struct FVector InterpVelocity; // 0x918(0x0c)

	void UserConstructionScript(); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float ReceiveTick(); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x370fbc
	bool BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature(); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	enum class EEndPlayReason ReceiveEndPlay(); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x370fbc
	float ExecuteUbergraph_ProjSmokeBomb_v2(struct FVector CallFunc__29f62b02c5_ReturnValue, struct FVector CallFunc__29f62b02c5_ReturnValue2, struct FVector CallFunc__a755ac2f4e_ReturnValue, struct FVector CallFunc__29f62b02c5_ReturnValue3); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ExecuteUbergraph_ProjSmokeBomb_v2 //  // @ game+0x370fbc
};

