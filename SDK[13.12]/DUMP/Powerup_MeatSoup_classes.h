// BlueprintGeneratedClass Powerup_MeatSoup.Powerup_MeatSoup_C
// Size: 0x46c (Inherited: 0x448)
struct APowerup_MeatSoup_C : APowerup_Base_C {
	struct F*a6c93df757 UberGraphFrame; // 0x448(0x08)
	struct USphereComponent* Sphere; // 0x450(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x458(0x08)
	struct FVector LocalBaseVelocity_1; // 0x460(0x0c)

	void UserConstructionScript(); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveBeginPlay(); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	struct ATslCharacter* PlayAnim(); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Drop(); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_Powerup_MeatSoup(struct USceneComponent* CallFunc__af76098df3_ReturnValue, struct AActor* CallFunc__e22a09fc3d_ReturnValue, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, bool K2Node_DynamicCast_bSuccess, struct FVector CallFunc_GetPhysicsLinearVelocity_ReturnValue, struct UTslCharacterMovement* CallFunc__62cd8daba9_ReturnValue, struct FVector CallFunc__1429d76ba8_ReturnValue, struct FVector CallFunc__acefb24eae_ReturnValue); // Function Powerup_MeatSoup.Powerup_MeatSoup_C.ExecuteUbergraph_Powerup_MeatSoup // HasDefaults // @ game+0x20a5d0
};

