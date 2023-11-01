// BlueprintGeneratedClass Powerup_Vegi.Powerup_Vegi_C
// Size: 0x464 (Inherited: 0x440)
struct APowerup_Vegi_C : APowerup_Base_C {
	struct F*abc8f374e0 UberGraphFrame[0x08]; // 0x440(0x08)
	struct USphereComponent* Sphere[0x08]; // 0x448(0x08)
	struct UStaticMeshComponent* StaticMesh[0x08]; // 0x450(0x08)
	struct FVector LocalBaseVelocity_1[0x0c]; // 0x458(0x0c)

	void UserConstructionScript(); // Function Powerup_Vegi.Powerup_Vegi_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function Powerup_Vegi.Powerup_Vegi_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void PlayAnim(); // Function Powerup_Vegi.Powerup_Vegi_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Drop(); // Function Powerup_Vegi.Powerup_Vegi_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FVector ExecuteUbergraph_Powerup_Vegi(DelegateProperty* _61b405a872_OutputDelegate, float* CallFunc__bb414daf51_ReturnValue, struct F*da672abddc* CallFunc__a1f38c3428_ReturnValue); // Function Powerup_Vegi.Powerup_Vegi_C.ExecuteUbergraph_Powerup_Vegi // HasDefaults // @ game+0x2cd4ac
};

