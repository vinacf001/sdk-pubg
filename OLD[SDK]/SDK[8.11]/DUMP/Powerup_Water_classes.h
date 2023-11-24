// BlueprintGeneratedClass Powerup_Water.Powerup_Water_C
// Size: 0x464 (Inherited: 0x440)
struct APowerup_Water_C : APowerup_Base_C {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x440(0x08)
	struct USphereComponent* Sphere; // 0x448(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x450(0x08)
	struct FVector LocalBaseVelocity_1; // 0x458(0x0c)

	void UserConstructionScript(); // Function Powerup_Water.Powerup_Water_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveBeginPlay(); // Function Powerup_Water.Powerup_Water_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void PlayAnim(); // Function Powerup_Water.Powerup_Water_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Drop(); // Function Powerup_Water.Powerup_Water_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FVector ExecuteUbergraph_Powerup_Water(DelegateProperty _d01ead63d9_OutputDelegate, float CallFunc__90f749b127_ReturnValue, struct FVector CallFunc__7b95fb5251_ReturnValue); // Function Powerup_Water.Powerup_Water_C.ExecuteUbergraph_Powerup_Water // HasDefaults // @ game+0x293938
};

