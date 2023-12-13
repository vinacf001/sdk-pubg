// BlueprintGeneratedClass Powerup_Soup.Powerup_Soup_C
// Size: 0x46c (Inherited: 0x448)
struct APowerup_Soup_C : APowerup_Base_C {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x448(0x08)
	struct USphereComponent* Sphere; // 0x450(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x458(0x08)
	struct FVector LocalBaseVelocity_1; // 0x460(0x0c)

	void UserConstructionScript(); // Function Powerup_Soup.Powerup_Soup_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void ReceiveBeginPlay(); // Function Powerup_Soup.Powerup_Soup_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1dcd78
	struct ATslCharacter* PlayAnim(); // Function Powerup_Soup.Powerup_Soup_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void Drop(); // Function Powerup_Soup.Powerup_Soup_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	struct FVector ExecuteUbergraph_Powerup_Soup(); // Function Powerup_Soup.Powerup_Soup_C.ExecuteUbergraph_Powerup_Soup // HasDefaults // @ game+0x1dcd78
};

