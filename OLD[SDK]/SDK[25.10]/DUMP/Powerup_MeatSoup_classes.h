// BlueprintGeneratedClass Powerup_MeatSoup.Powerup_MeatSoup_C
// Size: 0x474 (Inherited: 0x450)
struct APowerup_MeatSoup_C : APowerup_Base_C {
	struct F*abc8f374e0 UberGraphFrame; // 0x450(0x08)
	struct USphereComponent* Sphere; // 0x458(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x460(0x08)
	struct FVector LocalBaseVelocity_1; // 0x468(0x0c)

	void UserConstructionScript(); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveBeginPlay(); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2ad9d8
	struct ATslCharacter* PlayAnim(); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void Drop(); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FVector ExecuteUbergraph_Powerup_MeatSoup(); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.ExecuteUbergraph_Powerup_MeatSoup // HasDefaults // @ game+0x2ad9d8
};

