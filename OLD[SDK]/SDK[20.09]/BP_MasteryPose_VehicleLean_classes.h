// BlueprintGeneratedClass BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C
// Size: 0x4a0 (Inherited: 0x440)
struct ABP_MasteryPose_VehicleLean_C : ABP_MasteryPose_C {
	struct F*73a77c28fa UberGraphFrame; // 0x440(0x08)
	struct U*a355649d99* VehicleMesh; // 0x448(0x08)
	struct U*002db2ba2e* HelmMesh; // 0x450(0x08)
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

	void UserConstructionScript(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ShowLobbyEffects(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ShowLobbyEffects // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveTick(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	struct FString ExecuteUbergraph_BP_MasteryPose_VehicleLean(struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc__f87325bff2_ReturnValue, struct FString CallFunc__edc080a44e_ReturnValue, float CallFunc__f3987cbe77_ReturnValue, float CallFunc__ae60dcbe74_ReturnValue, struct FString CallFunc__d03917fad9_ReturnValue2, float CallFunc__ae60dcbe74_ReturnValue2); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ExecuteUbergraph_BP_MasteryPose_VehicleLean //  // @ game+0x1e037c
};

