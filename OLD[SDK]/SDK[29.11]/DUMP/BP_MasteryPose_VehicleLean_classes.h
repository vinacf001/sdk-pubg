// BlueprintGeneratedClass BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C
// Size: 0x4a0 (Inherited: 0x440)
struct ABP_MasteryPose_VehicleLean_C : ABP_MasteryPose_C {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x440(0x08)
	struct U*175d673fff* VehicleMesh; // 0x448(0x08)
	struct U*6084cd5111* HelmMesh; // 0x450(0x08)
	struct USpotLightComponent* SpotLightEyes; // 0x458(0x08)
	struct USpotLightComponent* SpotLight1; // 0x460(0x08)
	struct USpotLightComponent* SpotLight2; // 0x468(0x08)
	struct USpotLightComponent* LobbySpotLight; // 0x470(0x08)
	struct USpotLightComponent* spotlight; // 0x478(0x08)
	bool bIsInLobby; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct UMaterialInstanceDynamic* MotorcycleLightsMaterial; // 0x488(0x08)
	struct UCurveFloat* BrightnessCurve; // 0x490(0x08)
	float BrightnessTime; // 0x498(0x04)
	float BrightnessMax; // 0x49c(0x04)

	void UserConstructionScript(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void ShowLobbyEffects(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ShowLobbyEffects // Event|Public|BlueprintEvent // @ game+0x1dcd78
	float ReceiveTick(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1dcd78
	void ReceiveBeginPlay(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1dcd78
	struct FString ExecuteUbergraph_BP_MasteryPose_VehicleLean(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ExecuteUbergraph_BP_MasteryPose_VehicleLean //  // @ game+0x1dcd78
};

