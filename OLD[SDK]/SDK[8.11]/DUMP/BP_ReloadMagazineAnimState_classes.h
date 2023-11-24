// BlueprintGeneratedClass BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C
// Size: 0x48 (Inherited: 0x38)
struct UBP_ReloadMagazineAnimState_C : U*5212a5777a {
	enum class Enum_MagazineReloadAnimStateActionType ActionType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct AActor* Gun; // 0x40(0x08)

	void DropMag(struct AActor* CallFunc__714237daa5_ReturnValue); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.DropMag // Public|BlueprintCallable|BlueprintEvent|Const // @ game+0x293938
	struct USkeletalMeshComponent* AttachMag(bool Attach, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.AttachMag // Public|BlueprintCallable|BlueprintEvent|Const // @ game+0x293938
	void ShowMag(struct USkeletalMeshComponent* MeshComp, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ShowMag // Private|BlueprintCallable|BlueprintEvent|Const // @ game+0x293938
	bool Received_NotifyEnd(); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyEnd // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x293938
	float Received_NotifyBegin(bool ReturnValue); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyBegin // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x293938
};

