// BlueprintGeneratedClass Powerup_Meat.Powerup_Meat_C
// Size: 0x464 (Inherited: 0x440)
struct APowerup_Meat_C : APowerup_Base_C {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x440(0x08)
	struct USphereComponent* Sphere; // 0x448(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x450(0x08)
	struct FVector LocalBaseVelocity_1; // 0x458(0x0c)

	void UserConstructionScript(); // Function Powerup_Meat.Powerup_Meat_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveBeginPlay(); // Function Powerup_Meat.Powerup_Meat_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void PlayAnim(); // Function Powerup_Meat.Powerup_Meat_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Drop(); // Function Powerup_Meat.Powerup_Meat_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FVector ExecuteUbergraph_Powerup_Meat(int32 EntryPoint, struct ATslCharacter* K2Node_CustomEvent_Char_Ref, float CallFunc__341c4c2120_ReturnValue, bool CallFunc_IsValid_ReturnValue); // Function Powerup_Meat.Powerup_Meat_C.ExecuteUbergraph_Powerup_Meat // HasDefaults // @ game+0x293938
};

