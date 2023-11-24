// BlueprintGeneratedClass BP_MasteryPose.BP_MasteryPose_C
// Size: 0x440 (Inherited: 0x400)
struct ABP_MasteryPose_C : AMasteryPose {
	struct F*73a77c28fa UberGraphFrame; // 0x400(0x08)
	struct UPostProcessComponent* PostProcess; // 0x408(0x08)
	struct USceneComponent* PlayerCardScene; // 0x410(0x08)
	struct USceneComponent* LobbyScene; // 0x418(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x420(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x428(0x08)
	struct TArray<struct FPoseCharacterAttachments> CharacterAttachedObjects; // 0x430(0x10)

	void ClearEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FPoseCharacterAttachments AttachObjects(bool CallFunc_IsValid_ReturnValue, int32 CallFunc__10b0236ab6_ReturnValue, bool CallFunc__d1b7f5dc7b_ReturnValue); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjects // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ShowPlayerCardEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowPlayerCardEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function BP_MasteryPose.BP_MasteryPose_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveDestroyed(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x1e037c
	void AttachObjectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjectsEvent // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ClearEffectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffectsEvent // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ShowEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowEffects // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ShowLobbyEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowLobbyEffects // Event|Public|BlueprintEvent // @ game+0x1e037c
	bool ExecuteUbergraph_BP_MasteryPose(int32 CallFunc__10b0236ab6_ReturnValue); // Function BP_MasteryPose.BP_MasteryPose_C.ExecuteUbergraph_BP_MasteryPose // HasDefaults // @ game+0x1e037c
};

