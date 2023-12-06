// BlueprintGeneratedClass DmgTypeExplosion_JerryCan.DmgTypeExplosion_JerryCan_C
// Size: 0x100 (Inherited: 0x100)
struct UDmgTypeExplosion_JerryCan_C : UTslDamageType {
	enum class EDamageTypeCategory DamageTypeCategory; // 0x48(0x01)
	struct UForceFeedbackEffect* HitForceFeedback; // 0x50(0x08)
	struct UForceFeedbackEffect* KilledForceFeedback; // 0x58(0x08)
	char bFallDamage : 1; // 0x60(0x01)
	struct TArray<struct F*4ea696bc3f> DamageRatioInfos; // 0x68(0x10)
	struct TArray<struct F*4ea696bc3f> DamageRatioInfos_Console; // 0x78(0x10)
	struct TMap<enum class EStanceMode, float> StanceDamageRatios; // 0x88(0x50)
	float GroggyDamageRatio; // 0xd8(0x04)
	bool bReducedByArmorRadial; // 0xdc(0x01)
	bool bIgnoreCharacterImpulse; // 0xdd(0x01)
	bool HitReaction; // 0xde(0x01)
	bool bUseDamageCameraShake; // 0xdf(0x01)
	struct UClass* DamageCameraShake; // 0xe0(0x08)
	struct FString OverrideDamageCauserName; // 0xe8(0x10)
	char IsDieInstantly : 1; // 0xf8(0x01)
};

