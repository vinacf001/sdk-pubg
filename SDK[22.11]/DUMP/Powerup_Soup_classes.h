// BlueprintGeneratedClass Powerup_Soup.Powerup_Soup_C
// Size: 0x464 (Inherited: 0x440)
struct APowerup_Soup_C : APowerup_Base_C {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x440(0x08)
	struct USphereComponent* Sphere; // 0x448(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x450(0x08)
	struct FVector LocalBaseVelocity_1; // 0x458(0x0c)

	void UserConstructionScript(); // Function Powerup_Soup.Powerup_Soup_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReceiveBeginPlay(); // Function Powerup_Soup.Powerup_Soup_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x32e590
	void PlayAnim(); // Function Powerup_Soup.Powerup_Soup_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void Drop(); // Function Powerup_Soup.Powerup_Soup_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FVector ExecuteUbergraph_Powerup_Soup(DelegateProperty _d01ead63d9_OutputDelegate, float CallFunc__90f749b127_ReturnValue, struct F*b2f5f3e08e CallFunc__e67535aba8_ReturnValue); // Function Powerup_Soup.Powerup_Soup_C.ExecuteUbergraph_Powerup_Soup // HasDefaults // @ game+0x32e590
};

