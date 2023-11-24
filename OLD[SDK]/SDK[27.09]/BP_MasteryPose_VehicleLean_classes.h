// BlueprintGeneratedClass BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C
// Size: 0x4b8 (Inherited: 0x458)
struct ABP_MasteryPose_VehicleLean_C : ABP_MasteryPose_C {
	struct F*73a77c28fa UberGraphFrame; // 0x458(0x08)
	struct U*a355649d99* VehicleMesh; // 0x460(0x08)
	struct U*002db2ba2e* HelmMesh; // 0x468(0x08)
	struct USpotLightComponent* SpotLightEyes; // 0x470(0x08)
	struct USpotLightComponent* SpotLight1; // 0x478(0x08)
	struct USpotLightComponent* SpotLight2; // 0x480(0x08)
	struct USpotLightComponent* LobbySpotLight; // 0x488(0x08)
	struct USpotLightComponent* spotlight; // 0x490(0x08)
	bool bIsInLobby; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct UMaterialInstanceDynamic* MotorcycleLightsMaterial; // 0x4a0(0x08)
	struct UCurveFloat* BrightnessCurve; // 0x4a8(0x08)
	float BrightnessTime; // 0x4b0(0x04)
	float BrightnessMax; // 0x4b4(0x04)

	void UserConstructionScript(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void ShowLobbyEffects(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ShowLobbyEffects // Event|Public|BlueprintEvent // @ game+0x22ddc4
	float ReceiveTick(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void ReceiveBeginPlay(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	struct FString ExecuteUbergraph_BP_MasteryPose_VehicleLean(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ExecuteUbergraph_BP_MasteryPose_VehicleLean //  // @ game+0x22ddc4
};

