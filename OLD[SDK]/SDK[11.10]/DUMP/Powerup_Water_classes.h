// BlueprintGeneratedClass Powerup_Water.Powerup_Water_C
// Size: 0x47c (Inherited: 0x458)
struct APowerup_Water_C : APowerup_Base_C {
	struct F*abc8f374e0 UberGraphFrame; // 0x458(0x08)
	struct USphereComponent* Sphere; // 0x460(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x468(0x08)
	struct FVector LocalBaseVelocity_1; // 0x470(0x0c)

	void UserConstructionScript(); // Function Powerup_Water.Powerup_Water_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void ReceiveBeginPlay(); // Function Powerup_Water.Powerup_Water_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x273e04
	struct ATslCharacter* PlayAnim(); // Function Powerup_Water.Powerup_Water_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void Drop(); // Function Powerup_Water.Powerup_Water_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FVector ExecuteUbergraph_Powerup_Water(); // Function Powerup_Water.Powerup_Water_C.ExecuteUbergraph_Powerup_Water // HasDefaults // @ game+0x273e04
};

