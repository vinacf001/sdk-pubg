// BlueprintGeneratedClass Powerup_Vegi.Powerup_Vegi_C
// Size: 0x46c (Inherited: 0x448)
struct APowerup_Vegi_C : APowerup_Base_C {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x448(0x08)
	struct USphereComponent* Sphere; // 0x450(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x458(0x08)
	struct FVector LocalBaseVelocity_1; // 0x460(0x0c)

	void UserConstructionScript(); // Function Powerup_Vegi.Powerup_Vegi_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void ReceiveBeginPlay(); // Function Powerup_Vegi.Powerup_Vegi_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1dcd78
	struct ATslCharacter* PlayAnim(); // Function Powerup_Vegi.Powerup_Vegi_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void Drop(); // Function Powerup_Vegi.Powerup_Vegi_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	struct FVector ExecuteUbergraph_Powerup_Vegi(); // Function Powerup_Vegi.Powerup_Vegi_C.ExecuteUbergraph_Powerup_Vegi // HasDefaults // @ game+0x1dcd78
};

