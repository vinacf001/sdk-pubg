// BlueprintGeneratedClass ProjGrenade_Explosion.ProjGrenade_Explosion_C
// Size: 0x1170 (Inherited: 0x1100)
struct AProjGrenade_Explosion_C : ATslExplosionEffect {
	struct F*a6c93df757 UberGraphFrame; // 0x1100(0x08)
	bool bEnableSurfaceSwitch; // 0x1108(0x01)
	char pad_1109[0x7]; // 0x1109(0x07)
	struct FVFX_Surface SurfaceVFX; // 0x1110(0x50)
	bool bRotateSelfToWorld; // 0x1160(0x01)
	char pad_1161[0x3]; // 0x1161(0x03)
	struct FVector NewVar_1; // 0x1164(0x0c)

	bool SwitchBasedOnSurface(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.SwitchBasedOnSurface // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	bool UserConstructionScript(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct AExplosionEffectsActor_C* AddToSort(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.AddToSort // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	struct AExplosionEffectsActor_C* ExecuteUbergraph_ProjGrenade_Explosion(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.ExecuteUbergraph_ProjGrenade_Explosion //  // @ game+0x20a5d0
};

