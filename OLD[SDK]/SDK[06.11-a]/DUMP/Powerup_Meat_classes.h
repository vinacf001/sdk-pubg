// BlueprintGeneratedClass Powerup_Meat.Powerup_Meat_C
// Size: 0x474 (Inherited: 0x450)
struct APowerup_Meat_C : APowerup_Base_C {
	struct F*a6c93df757 UberGraphFrame; // 0x450(0x08)
	struct USphereComponent* Sphere; // 0x458(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x460(0x08)
	struct FVector LocalBaseVelocity_1; // 0x468(0x0c)

	void UserConstructionScript(); // Function Powerup_Meat.Powerup_Meat_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function Powerup_Meat.Powerup_Meat_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void PlayAnim(struct ATslCharacter* Char Ref); // Function Powerup_Meat.Powerup_Meat_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Drop(); // Function Powerup_Meat.Powerup_Meat_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_Powerup_Meat(int32 EntryPoint, DelegateProperty _d8b1f23a78_OutputDelegate, bool CallFunc_IsValid_ReturnValue, struct USceneComponent* CallFunc__af76098df3_ReturnValue, struct AActor* CallFunc__e22a09fc3d_ReturnValue, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, struct FVector CallFunc__acefb24eae_ReturnValue); // Function Powerup_Meat.Powerup_Meat_C.ExecuteUbergraph_Powerup_Meat // HasDefaults // @ game+0x370fbc
};

