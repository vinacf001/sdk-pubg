// BlueprintGeneratedClass BP_MasteryPose.BP_MasteryPose_C
// Size: 0x448 (Inherited: 0x408)
struct ABP_MasteryPose_C : AMasteryPose {
	struct F*abc8f374e0 UberGraphFrame; // 0x408(0x08)
	struct UPostProcessComponent* PostProcess; // 0x410(0x08)
	struct USceneComponent* PlayerCardScene; // 0x418(0x08)
	struct USceneComponent* LobbyScene; // 0x420(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x428(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x430(0x08)
	struct TArray<struct FPoseCharacterAttachments> CharacterAttachedObjects; // 0x438(0x10)

	void ClearEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool AttachObjects(); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjects // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ShowPlayerCardEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowPlayerCardEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void UserConstructionScript(); // Function BP_MasteryPose.BP_MasteryPose_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveBeginPlay(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveDestroyed(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	struct ACharacter* AttachObjectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjectsEvent // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void ClearEffectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffectsEvent // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void ShowEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowEffects // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void ShowLobbyEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowLobbyEffects // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	struct ACharacter* ExecuteUbergraph_BP_MasteryPose(); // Function BP_MasteryPose.BP_MasteryPose_C.ExecuteUbergraph_BP_MasteryPose // HasDefaults // @ game+0x2ad9d8
};

