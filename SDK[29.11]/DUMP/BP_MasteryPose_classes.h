// BlueprintGeneratedClass BP_MasteryPose.BP_MasteryPose_C
// Size: 0x440 (Inherited: 0x400)
struct ABP_MasteryPose_C : AMasteryPose {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x400(0x08)
	struct UPostProcessComponent* PostProcess; // 0x408(0x08)
	struct USceneComponent* PlayerCardScene; // 0x410(0x08)
	struct USceneComponent* LobbyScene; // 0x418(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x420(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x428(0x08)
	struct TArray<struct FPoseCharacterAttachments> CharacterAttachedObjects; // 0x430(0x10)

	void ClearEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	bool AttachObjects(); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjects // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void ShowPlayerCardEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowPlayerCardEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void UserConstructionScript(); // Function BP_MasteryPose.BP_MasteryPose_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void ReceiveBeginPlay(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1dcd78
	void ReceiveDestroyed(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct ACharacter* AttachObjectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjectsEvent // Event|Public|BlueprintEvent // @ game+0x1dcd78
	void ClearEffectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffectsEvent // Event|Public|BlueprintEvent // @ game+0x1dcd78
	void ShowEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowEffects // Event|Public|BlueprintEvent // @ game+0x1dcd78
	void ShowLobbyEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowLobbyEffects // Event|Public|BlueprintEvent // @ game+0x1dcd78
	struct ACharacter* ExecuteUbergraph_BP_MasteryPose(); // Function BP_MasteryPose.BP_MasteryPose_C.ExecuteUbergraph_BP_MasteryPose // HasDefaults // @ game+0x1dcd78
};

