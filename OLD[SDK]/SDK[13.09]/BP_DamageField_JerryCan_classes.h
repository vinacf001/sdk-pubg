// BlueprintGeneratedClass BP_DamageField_JerryCan.BP_DamageField_JerryCan_C
// Size: 0x4a0 (Inherited: 0x4a0)
struct ABP_DamageField_JerryCan_C : ATslDamageField {
	float *3e52b15c35; // 0x414(0x04)
	struct UParticleSystem* DamageFieldFX; // 0x418(0x08)
	enum class EDamageFieldType DamageFieldType; // 0x420(0x01)
	int32 Damage; // 0x42c(0x04)
	float *a6317a1f05; // 0x430(0x04)
	struct UClass* *498af98d1d; // 0x438(0x08)
	struct UClass* *ea849cef79; // 0x450(0x08)
	struct USphereComponent* SphereCollision; // 0x458(0x08)
	struct U*e40c529ffb* SimpleCollision; // 0x460(0x08)
	struct FVector *969eef2c0b; // 0x468(0x0c)
	struct TArray<struct ACharacter*> *b5d3e7f167; // 0x480(0x10)
	struct UParticleSystemComponent* *cc940b1815; // 0x490(0x08)
	int32 *361f5249c0; // 0x498(0x04)

	void OnFieldDestroyed(); // Function TslGame.TslDamageField.OnFieldDestroyed // None // @ game+0x56a5d2c
	void OnCollision(); // Function TslGame.TslDamageField.OnCollision // None // @ game+0x56a4fa4
};

