// BlueprintGeneratedClass Powerup_VegiSoup.Powerup_VegiSoup_C
// Size: 0x474 (Inherited: 0x450)
struct APowerup_VegiSoup_C : APowerup_Base_C {
	struct F*a6c93df757 UberGraphFrame; // 0x450(0x08)
	struct USphereComponent* Sphere; // 0x458(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x460(0x08)
	struct FVector LocalBaseVelocity_1; // 0x468(0x0c)

	void UserConstructionScript(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	void ReceiveBeginPlay(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22c9a0
	struct ATslCharacter* PlayAnim(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	void Drop(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x22c9a0
	struct FVector ExecuteUbergraph_Powerup_VegiSoup(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.ExecuteUbergraph_Powerup_VegiSoup // HasDefaults // @ game+0x22c9a0
};

