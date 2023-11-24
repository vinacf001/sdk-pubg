// BlueprintGeneratedClass DmgType_Bear.DmgType_Bear_C
// Size: 0xf8 (Inherited: 0xf8)
struct UDmgType_Bear_C : UTslDamageType {
	enum class EDamageTypeCategory DamageTypeCategory; // 0x40(0x01)
	struct UForceFeedbackEffect* HitForceFeedback; // 0x48(0x08)
	struct UForceFeedbackEffect* KilledForceFeedback; // 0x50(0x08)
	char bFallDamage : 1; // 0x58(0x01)
	struct TArray<struct F*fc433bc5da> DamageRatioInfos; // 0x60(0x10)
	struct TArray<struct F*fc433bc5da> DamageRatioInfos_Console; // 0x70(0x10)
	struct TMap<enum class EStanceMode, float> StanceDamageRatios; // 0x80(0x50)
	float GroggyDamageRatio; // 0xd0(0x04)
	bool bReducedByArmorRadial; // 0xd4(0x01)
	bool bIgnoreCharacterImpulse; // 0xd5(0x01)
	bool HitReaction; // 0xd6(0x01)
	bool bUseDamageCameraShake; // 0xd7(0x01)
	struct UClass* DamageCameraShake; // 0xd8(0x08)
	struct FString OverrideDamageCauserName; // 0xe0(0x10)
	char IsDieInstantly : 1; // 0xf0(0x01)
};

