// BlueprintGeneratedClass ProjGrenade_Explosion.ProjGrenade_Explosion_C
// Size: 0x1178 (Inherited: 0x1108)
struct AProjGrenade_Explosion_C : ATslExplosionEffect {
	struct F*a6c93df757 UberGraphFrame; // 0x1108(0x08)
	bool bEnableSurfaceSwitch; // 0x1110(0x01)
	char pad_1111[0x7]; // 0x1111(0x07)
	struct FVFX_Surface SurfaceVFX; // 0x1118(0x50)
	bool bRotateSelfToWorld; // 0x1168(0x01)
	char pad_1169[0x3]; // 0x1169(0x03)
	struct FVector NewVar_1; // 0x116c(0x0c)

	bool SwitchBasedOnSurface(float CallFunc_BreakVector_Z, struct APhysicsVolume* CallFunc__0cc0720422_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue2, bool CallFunc_IsValid_ReturnValue); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.SwitchBasedOnSurface // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool UserConstructionScript(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct AExplosionEffectsActor_C* AddToSort(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.AddToSort // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct AExplosionEffectsActor_C* ExecuteUbergraph_ProjGrenade_Explosion(); // Function ProjGrenade_Explosion.ProjGrenade_Explosion_C.ExecuteUbergraph_ProjGrenade_Explosion //  // @ game+0x370fbc
};

