// BlueprintGeneratedClass Powerup_Soup.Powerup_Soup_C
// Size: 0x474 (Inherited: 0x450)
struct APowerup_Soup_C : APowerup_Base_C {
	struct F*a6c93df757 UberGraphFrame; // 0x450(0x08)
	struct USphereComponent* Sphere; // 0x458(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x460(0x08)
	struct FVector LocalBaseVelocity_1; // 0x468(0x0c)

	void UserConstructionScript(); // Function Powerup_Soup.Powerup_Soup_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function Powerup_Soup.Powerup_Soup_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct ATslCharacter* PlayAnim(); // Function Powerup_Soup.Powerup_Soup_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Drop(); // Function Powerup_Soup.Powerup_Soup_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_Powerup_Soup(int32 EntryPoint, DelegateProperty _d8b1f23a78_OutputDelegate, struct ATslCharacter* K2Node_CustomEvent_Char_Ref, struct USceneComponent* CallFunc__af76098df3_ReturnValue, struct AActor* CallFunc__e22a09fc3d_ReturnValue, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, bool K2Node_DynamicCast_bSuccess); // Function Powerup_Soup.Powerup_Soup_C.ExecuteUbergraph_Powerup_Soup // HasDefaults // @ game+0x370fbc
};

