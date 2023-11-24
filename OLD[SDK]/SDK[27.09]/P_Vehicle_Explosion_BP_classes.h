// BlueprintGeneratedClass P_Vehicle_Explosion_BP.P_Vehicle_Explosion_BP_C
// Size: 0x548 (Inherited: 0x510)
struct AP_Vehicle_Explosion_BP_C : ATslParticle {
	bool bEnableSurfaceSwitch; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct UParticleSystem* PS_Water; // 0x518(0x08)
	struct UParticleSystem* PS_Dirt; // 0x520(0x08)
	struct UParticleSystem* PS_Default; // 0x528(0x08)
	struct UParticleSystem* PS_Sand; // 0x530(0x08)
	struct UParticleSystem* PS_Mud; // 0x538(0x08)
	struct UParticleSystem* PS_Snow; // 0x540(0x08)

	bool SwitchBasedOnSurface(); // Function P_Vehicle_Explosion_BP.P_Vehicle_Explosion_BP_C.SwitchBasedOnSurface // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void UserConstructionScript(); // Function P_Vehicle_Explosion_BP.P_Vehicle_Explosion_BP_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
};

