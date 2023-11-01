// BlueprintGeneratedClass Powerup_Water.Powerup_Water_C
// Size: 0x464 (Inherited: 0x440)
struct APowerup_Water_C : APowerup_Base_C {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x440(0x08)
	struct USphereComponent* Sphere[0x08]; // 0x448(0x08)
	struct UStaticMeshComponent* StaticMesh[0x08]; // 0x450(0x08)
	struct FVector LocalBaseVelocity_1[0x0c]; // 0x458(0x0c)

	void UserConstructionScript(); // Function Powerup_Water.Powerup_Water_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function Powerup_Water.Powerup_Water_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void PlayAnim(); // Function Powerup_Water.Powerup_Water_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Drop(); // Function Powerup_Water.Powerup_Water_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct UTslCharacterMovement* ExecuteUbergraph_Powerup_Water(struct F*da672abddc* CallFunc__a1f38c3428_ReturnValue, struct USceneComponent** CallFunc__21f58f1be6_ReturnValue, struct ATslCharacter** K2Node_DynamicCast_AsTsl_Character, struct FVector* CallFunc_GetPhysicsLinearVelocity_ReturnValue, struct FVector* CallFunc__5631d92e96_ReturnValue); // Function Powerup_Water.Powerup_Water_C.ExecuteUbergraph_Powerup_Water // HasDefaults // @ game+0x2cd4ac
};

