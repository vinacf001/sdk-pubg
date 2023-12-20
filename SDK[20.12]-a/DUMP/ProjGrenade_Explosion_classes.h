// BlueprintGeneratedClass ProjGrenade_Explosion.ProjGrenade_Explosion_C
// Size: 0x1168 (Inherited: 0x10f8)
struct AProjGrenade_Explosion_C : ATslExplosionEffect {
	struct F*a6c93df757 UberGraphFrame; // 0x10f8(0x08)
	bool bEnableSurfaceSwitch; // 0x1100(0x01)
	char pad_1101[0x7]; // 0x1101(0x07)
	struct FVFX_Surface SurfaceVFX; // 0x1108(0x50)
	bool bRotateSelfToWorld; // 0x1158(0x01)
	char pad_1159[0x3]; // 0x1159(0x03)
	struct FVector NewVar_1; // 0x115c(0x0c)

	void SwitchBasedOnSurface(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.SwitchBasedOnSurface // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void AddToSort(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.AddToSort // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_ProjGrenade_Explosion(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.ExecuteUbergraph_ProjGrenade_Explosion //  // @ game+0x3b43ac
};

