// BlueprintGeneratedClass Powerup_Vegi.Powerup_Vegi_C
// Size: 0x47c (Inherited: 0x458)
struct APowerup_Vegi_C : APowerup_Base_C {
	struct F*abc8f374e0 UberGraphFrame; // 0x458(0x08)
	struct USphereComponent* Sphere; // 0x460(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x468(0x08)
	struct FVector LocalBaseVelocity_1; // 0x470(0x0c)

	void UserConstructionScript(); // Function Powerup_Vegi.Powerup_Vegi_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void ReceiveBeginPlay(); // Function Powerup_Vegi.Powerup_Vegi_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x273e04
	struct ATslCharacter* PlayAnim(); // Function Powerup_Vegi.Powerup_Vegi_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void Drop(); // Function Powerup_Vegi.Powerup_Vegi_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FVector ExecuteUbergraph_Powerup_Vegi(); // Function Powerup_Vegi.Powerup_Vegi_C.ExecuteUbergraph_Powerup_Vegi // HasDefaults // @ game+0x273e04
};

