// BlueprintGeneratedClass Powerup_VegiSoup.Powerup_VegiSoup_C
// Size: 0x47c (Inherited: 0x458)
struct APowerup_VegiSoup_C : APowerup_Base_C {
	struct F*abc8f374e0 UberGraphFrame; // 0x458(0x08)
	struct USphereComponent* Sphere; // 0x460(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x468(0x08)
	struct FVector LocalBaseVelocity_1; // 0x470(0x0c)

	void UserConstructionScript(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void ReceiveBeginPlay(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x273e04
	struct ATslCharacter* PlayAnim(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void Drop(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FVector ExecuteUbergraph_Powerup_VegiSoup(); // Function Powerup_VegiSoup.Powerup_VegiSoup_C.ExecuteUbergraph_Powerup_VegiSoup // HasDefaults // @ game+0x273e04
};

