// BlueprintGeneratedClass Powerup_Soup.Powerup_Soup_C
// Size: 0x464 (Inherited: 0x440)
struct APowerup_Soup_C : APowerup_Base_C {
	struct F*abc8f374e0 UberGraphFrame; // 0x440(0x08)
	struct USphereComponent* Sphere; // 0x448(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x450(0x08)
	struct FVector LocalBaseVelocity_1; // 0x458(0x0c)

	void UserConstructionScript(); // Function Powerup_Soup.Powerup_Soup_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function Powerup_Soup.Powerup_Soup_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void PlayAnim(); // Function Powerup_Soup.Powerup_Soup_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Drop(); // Function Powerup_Soup.Powerup_Soup_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FVector ExecuteUbergraph_Powerup_Soup(struct ATslCharacter* K2Node_CustomEvent_Char_Ref, float CallFunc__846c340432_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct AActor* CallFunc__d4ab759ea6_ReturnValue); // Function Powerup_Soup.Powerup_Soup_C.ExecuteUbergraph_Powerup_Soup // HasDefaults // @ game+0x2cd4ac
};

