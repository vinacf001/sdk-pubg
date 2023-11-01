// BlueprintGeneratedClass BP_MasteryPose.BP_MasteryPose_C
// Size: 0x438 (Inherited: 0x3f8)
struct ABP_MasteryPose_C : AMasteryPose {
	struct F*abc8f374e0 UberGraphFrame; // 0x3f8(0x08)
	struct UPostProcessComponent* PostProcess; // 0x400(0x08)
	struct USceneComponent* PlayerCardScene; // 0x408(0x08)
	struct USceneComponent* LobbyScene; // 0x410(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	struct TArray<struct FPoseCharacterAttachments> CharacterAttachedObjects; // 0x428(0x10)

	void ClearEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool AttachObjects(bool CallFunc_IsValid_ReturnValue, int32 CallFunc__e93d5a86a0_ReturnValue); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjects // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ShowPlayerCardEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowPlayerCardEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UserConstructionScript(); // Function BP_MasteryPose.BP_MasteryPose_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveDestroyed(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void AttachObjectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjectsEvent // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ClearEffectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffectsEvent // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ShowEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowEffects // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ShowLobbyEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowLobbyEffects // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	bool ExecuteUbergraph_BP_MasteryPose(struct FPoseCharacterAttachments CallFunc_Array_Get_Item, bool CallFunc__249bb33a55_ReturnValue, int32 CallFunc__e93d5a86a0_ReturnValue); // Function BP_MasteryPose.BP_MasteryPose_C.ExecuteUbergraph_BP_MasteryPose // HasDefaults // @ game+0x2cd4ac
};

