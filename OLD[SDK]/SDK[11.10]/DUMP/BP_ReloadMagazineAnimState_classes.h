// BlueprintGeneratedClass BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C
// Size: 0x50 (Inherited: 0x40)
struct UBP_ReloadMagazineAnimState_C : U*59a41545c4 {
	enum class Enum_MagazineReloadAnimStateActionType ActionType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct AActor* Gun; // 0x48(0x08)

	bool DropMag(); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.DropMag // Public|BlueprintCallable|BlueprintEvent|Const // @ game+0x273e04
	bool AttachMag(); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.AttachMag // Public|BlueprintCallable|BlueprintEvent|Const // @ game+0x273e04
	bool ShowMag(); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ShowMag // Private|BlueprintCallable|BlueprintEvent|Const // @ game+0x273e04
	bool Received_NotifyEnd(); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyEnd // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x273e04
	bool Received_NotifyBegin(); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyBegin // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x273e04
};

