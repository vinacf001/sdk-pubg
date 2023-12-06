// BlueprintGeneratedClass BP_FireEffectController.BP_FireEffectController_C
// Size: 0x5f0 (Inherited: 0x5f0)
struct ABP_FireEffectController_C : ATslEffectController {
	struct U*5ba17ce34b* SimpleCollision; // 0x408(0x08)
	struct USceneComponent* SceneRoot; // 0x420(0x08)
	struct TArray<struct FVector> *346f5f7f6a; // 0x428(0x10)
	int32 *95dcf7e515; // 0x438(0x04)
	int32 *478e0c681e; // 0x43c(0x04)
	int32 *7552a3ed8f; // 0x440(0x04)
	int32 *64cdab115d; // 0x444(0x04)
	int32 *091d01abd1; // 0x448(0x04)
	int32 *0ce3471ee8; // 0x44c(0x04)
	float *3436cea470; // 0x450(0x04)
	struct FName *6e2261c51f; // 0x458(0x08)
	float *199ed3943f; // 0x460(0x04)
	float *9b0ec5a428; // 0x464(0x04)
	float *5ab0ac2e28; // 0x468(0x04)
	float *34d9beedeb; // 0x46c(0x04)
	float *9ccfa34f5d; // 0x470(0x04)
	float SphereRadius; // 0x474(0x04)
	float *50a60d3ff5; // 0x478(0x04)
	float *00cb4a6203; // 0x47c(0x04)
	struct UClass* *7fb18dbe1a; // 0x480(0x08)
	bool *20e1de596b; // 0x488(0x01)
	float *0a2a85b4e0; // 0x48c(0x04)
	float *126819af03; // 0x490(0x04)
	float *607437f5a1; // 0x494(0x04)
	float *dcbe0f23c7; // 0x498(0x04)
	bool *85de186608; // 0x49c(0x01)
	float DamageTickInterval; // 0x4a0(0x04)
	float DamagePerTick; // 0x4a4(0x04)
	struct UClass* *0ad023d030; // 0x4a8(0x08)
	struct TArray<struct USphereComponent*> *e75d9f5a60; // 0x4c8(0x10)
	struct TArray<struct USphereComponent*> *721b4b773d; // 0x4d8(0x10)
	struct TArray<struct USphereComponent*> *5b282ce393; // 0x4e8(0x10)
	struct TArray<struct ATslDamageField*> *24ae37f1d9; // 0x4f8(0x10)
	struct TArray<struct ACharacter*> *b03f7a696b; // 0x508(0x10)
	struct USphereComponent* *54570083bd; // 0x5d8(0x08)

	float *1f5c368674(); // Function TslGame.TslEffectController.*1f5c368674 // Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults // @ game+0x5e7a984
	float *e7500ba813(); // Function TslGame.TslEffectController.*e7500ba813 // Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults // @ game+0x5e344e0
	float *1e0a05cf03(); // Function TslGame.TslEffectController.*1e0a05cf03 // Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults // @ game+0x5e7ab04
	struct FVector *7059537ac3(struct FString Param1, struct AActor* Param2, struct FColor Param3, float Param4); // Function TslGame.TslEffectController.*7059537ac3 // Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults // @ game+0x5e7ac84
	void OnTakeDamage(struct AController* Param3, struct AActor* Param4); // Function TslGame.TslEffectController.OnTakeDamage // Final|Native|Public // @ game+0x5e844c4
	void *add941941b(); // Function TslGame.TslEffectController.*add941941b // Final|Native|Public|BlueprintCallable // @ game+0x5e7b2d8
	void *2eef254fd8(); // Function TslGame.TslEffectController.*2eef254fd8 // Final|Native|Public|HasDefaults // @ game+0x5e7b2ec
	void *a5aa4af65d(); // Function TslGame.TslEffectController.*a5aa4af65d // Final|Native|Public // @ game+0x5e8803c
};

