// BlueprintGeneratedClass BP_MasteryPose.BP_MasteryPose_C
// Size: 0x448 (Inherited: 0x408)
struct ABP_MasteryPose_C : AMasteryPose {
	struct F*73a77c28fa UberGraphFrame; // 0x408(0x08)
	struct UPostProcessComponent* PostProcess; // 0x410(0x08)
	struct USceneComponent* PlayerCardScene; // 0x418(0x08)
	struct USceneComponent* LobbyScene; // 0x420(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x428(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x430(0x08)
	struct TArray<struct FPoseCharacterAttachments> CharacterAttachedObjects; // 0x438(0x10)

	void ClearEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffects // None // @ game+0x26a108
	bool AttachObjects(struct ACharacter* LobbyCharacter, bool CallFunc_IsValid_ReturnValue2); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjects // None // @ game+0x26a108
	void ShowPlayerCardEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowPlayerCardEffects // None // @ game+0x26a108
	void UserConstructionScript(); // Function BP_MasteryPose.BP_MasteryPose_C.UserConstructionScript // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveBeginPlay // None // @ game+0x26a108
	void ReceiveDestroyed(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveDestroyed // None // @ game+0x26a108
	void AttachObjectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjectsEvent // None // @ game+0x26a108
	void ClearEffectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffectsEvent // None // @ game+0x26a108
	void ShowEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowEffects // None // @ game+0x26a108
	void ShowLobbyEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowLobbyEffects // None // @ game+0x26a108
	bool ExecuteUbergraph_BP_MasteryPose(int32 ___int_Loop_Counter_Variable, bool CallFunc__d1b7f5dc7b_ReturnValue); // Function BP_MasteryPose.BP_MasteryPose_C.ExecuteUbergraph_BP_MasteryPose // None // @ game+0x26a108
};

