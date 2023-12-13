// BlueprintGeneratedClass BP_MasteryPose.BP_MasteryPose_C
// Size: 0x448 (Inherited: 0x408)
struct ABP_MasteryPose_C : AMasteryPose {
	struct F*a6c93df757 UberGraphFrame; // 0x408(0x08)
	struct UPostProcessComponent* PostProcess; // 0x410(0x08)
	struct USceneComponent* PlayerCardScene; // 0x418(0x08)
	struct USceneComponent* LobbyScene; // 0x420(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x428(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x430(0x08)
	struct TArray<struct FPoseCharacterAttachments> CharacterAttachedObjects; // 0x438(0x10)

	void ClearEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	int32 AttachObjects(int32 CallFunc__34ad69eaa1_ReturnValue, struct FPoseCharacterAttachments CallFunc_Array_Get_Item, bool CallFunc__045254c93f_ReturnValue, bool CallFunc__91da404789_ReturnValue); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjects // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ShowPlayerCardEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowPlayerCardEffects // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UserConstructionScript(); // Function BP_MasteryPose.BP_MasteryPose_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void ReceiveDestroyed(); // Function BP_MasteryPose.BP_MasteryPose_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x370fbc
	void AttachObjectsEvent(struct ACharacter* Character); // Function BP_MasteryPose.BP_MasteryPose_C.AttachObjectsEvent // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ClearEffectsEvent(); // Function BP_MasteryPose.BP_MasteryPose_C.ClearEffectsEvent // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ShowEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowEffects // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ShowLobbyEffects(); // Function BP_MasteryPose.BP_MasteryPose_C.ShowLobbyEffects // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_BP_MasteryPose(struct FPoseCharacterAttachments CallFunc_Array_Get_Item, int32 CallFunc__34ad69eaa1_ReturnValue, int32 ___int_Loop_Counter_Variable, bool CallFunc__045254c93f_ReturnValue); // Function BP_MasteryPose.BP_MasteryPose_C.ExecuteUbergraph_BP_MasteryPose // HasDefaults // @ game+0x370fbc
};

