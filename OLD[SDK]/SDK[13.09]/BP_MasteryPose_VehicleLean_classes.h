// BlueprintGeneratedClass BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C
// Size: 0x4a8 (Inherited: 0x448)
struct ABP_MasteryPose_VehicleLean_C : ABP_MasteryPose_C {
	struct F*73a77c28fa UberGraphFrame; // 0x448(0x08)
	struct U*a355649d99* VehicleMesh; // 0x450(0x08)
	struct U*002db2ba2e* HelmMesh; // 0x458(0x08)
	struct USpotLightComponent* SpotLightEyes; // 0x460(0x08)
	struct USpotLightComponent* SpotLight1; // 0x468(0x08)
	struct USpotLightComponent* SpotLight2; // 0x470(0x08)
	struct USpotLightComponent* LobbySpotLight; // 0x478(0x08)
	struct USpotLightComponent* spotlight; // 0x480(0x08)
	bool bIsInLobby; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct UMaterialInstanceDynamic* MotorcycleLightsMaterial; // 0x490(0x08)
	struct UCurveFloat* BrightnessCurve; // 0x498(0x08)
	float BrightnessTime; // 0x4a0(0x04)
	float BrightnessMax; // 0x4a4(0x04)

	void UserConstructionScript(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.UserConstructionScript // None // @ game+0x26a108
	void ShowLobbyEffects(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ShowLobbyEffects // None // @ game+0x26a108
	void ReceiveTick(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveTick // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveBeginPlay // None // @ game+0x26a108
	float ExecuteUbergraph_BP_MasteryPose_VehicleLean(float CallFunc__c22e42a3a5_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue, float CallFunc__f3987cbe77_ReturnValue, float CallFunc__ae60dcbe74_ReturnValue2); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ExecuteUbergraph_BP_MasteryPose_VehicleLean // None // @ game+0x26a108
};

