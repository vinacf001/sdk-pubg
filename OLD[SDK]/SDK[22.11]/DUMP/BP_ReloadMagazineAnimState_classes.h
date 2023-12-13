// BlueprintGeneratedClass BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C
// Size: 0x48 (Inherited: 0x38)
struct UBP_ReloadMagazineAnimState_C : U*5212a5777a {
	enum class Enum_MagazineReloadAnimStateActionType ActionType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct AActor* Gun; // 0x40(0x08)

	void DropMag(struct AActor* CallFunc__714237daa5_ReturnValue); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.DropMag // Public|BlueprintCallable|BlueprintEvent|Const // @ game+0x32e590
	struct ATslCharacter* AttachMag(); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.AttachMag // Public|BlueprintCallable|BlueprintEvent|Const // @ game+0x32e590
	struct AActor* ShowMag(); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ShowMag // Private|BlueprintCallable|BlueprintEvent|Const // @ game+0x32e590
	void Received_NotifyEnd(struct UAnimSequenceBase* Animation); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyEnd // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x32e590
	bool Received_NotifyBegin(struct UAnimSequenceBase* Animation); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyBegin // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x32e590
};

