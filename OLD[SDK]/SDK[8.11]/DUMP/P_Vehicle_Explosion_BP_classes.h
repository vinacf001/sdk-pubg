// BlueprintGeneratedClass P_Vehicle_Explosion_BP.P_Vehicle_Explosion_BP_C
// Size: 0x528 (Inherited: 0x4f0)
struct AP_Vehicle_Explosion_BP_C : ATslParticle {
	bool bEnableSurfaceSwitch; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct UParticleSystem* PS_Water; // 0x4f8(0x08)
	struct UParticleSystem* PS_Dirt; // 0x500(0x08)
	struct UParticleSystem* PS_Default; // 0x508(0x08)
	struct UParticleSystem* PS_Sand; // 0x510(0x08)
	struct UParticleSystem* PS_Mud; // 0x518(0x08)
	struct UParticleSystem* PS_Snow; // 0x520(0x08)

	bool SwitchBasedOnSurface(enum class EPhysicalSurface HitSurface, float CallFunc_BreakRotator_Roll, float CallFunc__d076dd51f4_OutWaterHeight, struct FVector CallFunc_MakeVector_ReturnValue); // Function P_Vehicle_Explosion_BP.P_Vehicle_Explosion_BP_C.SwitchBasedOnSurface // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void UserConstructionScript(); // Function P_Vehicle_Explosion_BP.P_Vehicle_Explosion_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
};

