// BlueprintGeneratedClass Powerup_Vegi.Powerup_Vegi_C
// Size: 0x464 (Inherited: 0x440)
struct APowerup_Vegi_C : APowerup_Base_C {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x440(0x08)
	struct USphereComponent* Sphere; // 0x448(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x450(0x08)
	struct FVector LocalBaseVelocity_1; // 0x458(0x0c)

	void UserConstructionScript(); // Function Powerup_Vegi.Powerup_Vegi_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveBeginPlay(); // Function Powerup_Vegi.Powerup_Vegi_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void PlayAnim(); // Function Powerup_Vegi.Powerup_Vegi_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Drop(); // Function Powerup_Vegi.Powerup_Vegi_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FVector ExecuteUbergraph_Powerup_Vegi(float CallFunc__341c4c2120_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct AActor* CallFunc__714237daa5_ReturnValue, bool K2Node_DynamicCast_bSuccess); // Function Powerup_Vegi.Powerup_Vegi_C.ExecuteUbergraph_Powerup_Vegi // HasDefaults // @ game+0x293938
};

