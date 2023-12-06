// BlueprintGeneratedClass ProjMolotov_DamageField_Direct.ProjMolotov_DamageField_Direct_C
// Size: 0x4b8 (Inherited: 0x4b8)
struct AProjMolotov_DamageField_Direct_C : ATslDamageField {
	float *25892ca5f2; // 0x42c(0x04)
	struct UParticleSystem* DamageFieldFX; // 0x430(0x08)
	enum class EDamageFieldType DamageFieldType; // 0x438(0x01)
	int32 Damage; // 0x444(0x04)
	float *34d6b96ac0; // 0x448(0x04)
	struct UClass* *0ad023d030; // 0x450(0x08)
	struct UClass* *159977a64b; // 0x468(0x08)
	struct USphereComponent* SphereCollision; // 0x470(0x08)
	struct U*5ba17ce34b* SimpleCollision; // 0x478(0x08)
	struct FVector *96fc784302; // 0x480(0x0c)
	struct TArray<struct ACharacter*> *72d10b1635; // 0x498(0x10)
	struct UParticleSystemComponent* *4622baf7f1; // 0x4a8(0x08)
	int32 *de12336a82; // 0x4b0(0x04)

	struct F*fd1260cb6d OnCollision(); // Function TslGame.TslDamageField.OnCollision // Native|Protected|HasOutParms // @ game+0x5e7f834
	struct AActor* OnFieldDestroyed(); // Function TslGame.TslDamageField.OnFieldDestroyed // Final|Native|Public // @ game+0x5e809f8
};

