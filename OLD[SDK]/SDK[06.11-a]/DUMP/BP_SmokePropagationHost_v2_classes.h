// BlueprintGeneratedClass BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C
// Size: 0x428 (Inherited: 0x410)
struct ABP_SmokePropagationHost_v2_C : ATslSmokePropagation {
	struct F*a6c93df757 UberGraphFrame; // 0x410(0x08)
	struct U*395e1535aa* TslSmokePropagation; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)

	void UserConstructionScript(); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void End(); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.End // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct AActor* ReceiveAnyDamage(); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x370fbc
	void UpdateExplosionEffectsSorting(); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.UpdateExplosionEffectsSorting // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct ATslDestructibleSurfaceManager* ExecuteUbergraph_BP_SmokePropagationHost_v2(struct F*2ef3a887d0 CallFunc__324576f467_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct TArray<struct AExplosionEffectsActor_C*> CallFunc_GetAllActorsOfClass_OutActors, struct AActor* K2Node_Event_DamageCauser, struct UTslDamageType* K2Node_DynamicCast_AsTsl_Damage_Type, bool K2Node_DynamicCast_bSuccess, bool CallFunc__055a659f43_ReturnValue); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.ExecuteUbergraph_BP_SmokePropagationHost_v2 // HasDefaults // @ game+0x370fbc
};

