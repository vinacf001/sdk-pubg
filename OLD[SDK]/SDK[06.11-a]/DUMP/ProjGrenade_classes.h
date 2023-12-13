// BlueprintGeneratedClass ProjGrenade.ProjGrenade_C
// Size: 0x900 (Inherited: 0x8d0)
struct AProjGrenade_C : ATslProjectile {
	struct F*a6c93df757 UberGraphFrame; // 0x8d0(0x08)
	struct FVector ExplodeLocation; // 0x8d8(0x0c)
	char pad_8E4[0x4]; // 0x8e4(0x04)
	struct ATslCharacter* LocalShooterCharacter; // 0x8e8(0x08)
	struct UAkAudioEvent* Tinnitus_Proximity; // 0x8f0(0x08)
	struct UAkAudioEvent* Tinnitus_Direct; // 0x8f8(0x08)

	void UserConstructionScript(); // Function ProjGrenade.ProjGrenade_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float ExplodeBP(); // Function ProjGrenade.ProjGrenade_C.ExplodeBP // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_ProjGrenade(int32 EntryPoint, struct FVector K2Node_Event_Location, struct FRotator K2Node_Event_Rotation, struct FHitResult K2Node_Event_Impact); // Function ProjGrenade.ProjGrenade_C.ExecuteUbergraph_ProjGrenade // HasDefaults // @ game+0x370fbc
};

