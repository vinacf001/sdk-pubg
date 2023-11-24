// BlueprintGeneratedClass BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C
// Size: 0x498 (Inherited: 0x438)
struct ABP_MasteryPose_VehicleLean_C : ABP_MasteryPose_C {
	struct F*abc8f374e0 UberGraphFrame; // 0x438(0x08)
	struct U*13053458a7* VehicleMesh; // 0x440(0x08)
	struct U*4240fd5502* HelmMesh; // 0x448(0x08)
	struct USpotLightComponent* SpotLightEyes; // 0x450(0x08)
	struct USpotLightComponent* SpotLight1; // 0x458(0x08)
	struct USpotLightComponent* SpotLight2; // 0x460(0x08)
	struct USpotLightComponent* LobbySpotLight; // 0x468(0x08)
	struct USpotLightComponent* spotlight; // 0x470(0x08)
	bool bIsInLobby; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UMaterialInstanceDynamic* MotorcycleLightsMaterial; // 0x480(0x08)
	struct UCurveFloat* BrightnessCurve; // 0x488(0x08)
	float BrightnessTime; // 0x490(0x04)
	float BrightnessMax; // 0x494(0x04)

	void UserConstructionScript(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ShowLobbyEffects(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ShowLobbyEffects // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveTick(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	struct FString ExecuteUbergraph_BP_MasteryPose_VehicleLean(struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc__684cbb9b81_MaxTime, float CallFunc__449286a277_ReturnValue); // Function BP_MasteryPose_VehicleLean.BP_MasteryPose_VehicleLean_C.ExecuteUbergraph_BP_MasteryPose_VehicleLean //  // @ game+0x2cd4ac
};

