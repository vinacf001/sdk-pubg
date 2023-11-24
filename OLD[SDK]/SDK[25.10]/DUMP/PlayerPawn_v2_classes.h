// BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C
// Size: 0x2e58 (Inherited: 0x2d00)
struct APlayerPawn_v2_C : ATslCharacter {
	struct F*abc8f374e0 UberGraphFrame; // 0x2d00(0x08)
	struct UPawnNoiseEmitterComponent* PawnNoiseEmitter; // 0x2d08(0x08)
	struct UCapsuleComponent* Hit_Prone; // 0x2d10(0x08)
	struct UCapsuleComponent* Hit_Stand; // 0x2d18(0x08)
	struct F*da672abddc TestInspectHandle; // 0x2d20(0x08)
	struct UAnimInstance* BaseAnimInstance; // 0x2d28(0x08)
	bool AudioListenerIsSet; // 0x2d30(0x01)
	char pad_2D31[0x3]; // 0x2d31(0x03)
	float MinVCut; // 0x2d34(0x04)
	float MinZVCut; // 0x2d38(0x04)
	float DmgFactor; // 0x2d3c(0x04)
	float VDampingZ; // 0x2d40(0x04)
	char pad_2D44[0x4]; // 0x2d44(0x04)
	struct F*1b4ab4ebac TestWeaponItemClass; // 0x2d48(0x08)
	struct F*1b4ab4ebac TestAmmoItemClass; // 0x2d50(0x08)
	float MaxJumpZVelocity; // 0x2d58(0x04)
	float MovementAfterJumpCounter; // 0x2d5c(0x04)
	float MinJumpZVelocity; // 0x2d60(0x04)
	float MovementAfterJumpCounterDecrease; // 0x2d64(0x04)
	float MaxMovementAfterJumpCounter; // 0x2d68(0x04)
	char pad_2D6C[0x4]; // 0x2d6c(0x04)
	struct U*59a0aeaef9* Curve_TPP2FPP; // 0x2d70(0x08)
	struct U*59a0aeaef9* Curve_FPP2TPP; // 0x2d78(0x08)
	struct U*59a0aeaef9* Curve_TPP2FPP_Pitch; // 0x2d80(0x08)
	struct U*59a0aeaef9* Curve_FPP2TPP_Pitch; // 0x2d88(0x08)
	bool bIsWeaponShoulderAttached; // 0x2d90(0x01)
	char pad_2D91[0x3]; // 0x2d91(0x03)
	float ADS_ReadyAngle; // 0x2d94(0x04)
	float SocketOffset_YZ; // 0x2d98(0x04)
	char pad_2D9C[0x4]; // 0x2d9c(0x04)
	struct ATslWeapon_Gun* ActiveGunRef; // 0x2da0(0x08)
	bool bCameraUnderWater; // 0x2da8(0x01)
	char pad_2DA9[0x7]; // 0x2da9(0x07)
	struct ABP_CameraMan_C* CameraManRef; // 0x2db0(0x08)
	float YawTarget; // 0x2db8(0x04)
	float YawStep; // 0x2dbc(0x04)
	float GameTime; // 0x2dc0(0x04)
	char pad_2DC4[0x4]; // 0x2dc4(0x04)
	struct U*50a4472fea* Shake; // 0x2dc8(0x08)
	float WeaponCollisionAlpha; // 0x2dd0(0x04)
	char pad_2DD4[0x4]; // 0x2dd4(0x04)
	struct UW_SprintBar_C* SprintBarWidget; // 0x2dd8(0x08)
	struct UStaticMeshComponent* ImpactMeshRef; // 0x2de0(0x08)
	bool HeavyFallStarted; // 0x2de8(0x01)
	bool PhysicalAnimationInitialized; // 0x2de9(0x01)
	char pad_2DEA[0x6]; // 0x2dea(0x06)
	struct AAudioTestActor_C* AudioActorRef; // 0x2df0(0x08)
	struct UCurveFloat* Curve_EjectDamage; // 0x2df8(0x08)
	struct ABP_BulletCamActor_C* WeaponBulletCamRef; // 0x2e00(0x08)
	struct UW_WeaponMenu_C* WeapMenuRef; // 0x2e08(0x08)
	struct ABP_ActiveRagdollActor_C* RagdollActorRef; // 0x2e10(0x08)
	struct FVector RagdollActorPos; // 0x2e18(0x0c)
	char pad_2E24[0x4]; // 0x2e24(0x04)
	struct UW_RecoilDebugMenu_C* RecoilMenuRef; // 0x2e28(0x08)
	struct TArray<struct FName> DistributedLoadout; // 0x2e30(0x10)
	struct F*dbf31c1c98 AudioTestClassString; // 0x2e40(0x10)
	struct UW_AIItemMenu_C* aiWeapMenu; // 0x2e50(0x08)

	int32 GetAIController(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GetAIController // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2ad9d8
	bool AIWeaponMenuInit(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AIWeaponMenuInit // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct TArray<struct FName> DistributeCurrentLoadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.DistributeCurrentLoadout // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct APlayerController* RecoilDebug_ToggleMouse(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_ToggleMouse // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool RecoilDebug_Reset(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_Reset // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct F*00a57ec487 RecoilDebug_AddDataRow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_AddDataRow // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct TArray<struct UStaticMesh*> BlurScopeOutside(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FName Tick_PhysicalAnimation(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool TEMP_WeapMenu_InitShow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct USceneComponent* FixupThirdPersonCamera(); // Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool InitBulletCam(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ProcessMPC(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FString TestInspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool TickSimulatePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FName ProcessPhysicalAnimation(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ProcessLocalOnlyFunctions(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool TEMPORARY_ProcessSprintBar(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool InitializePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FVector CheckWeaponCollision(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	float HandleMovementParameters(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void CheckCameraUnderwater(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FRotator SetInertia(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	float ScopingSocketOffsetMoving(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void AdjustCameraSwitching(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void CheckForScoping(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool push(); // Function PlayerPawn_v2.PlayerPawn_v2_C.push // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	DelegateProperty UserConstructionScript(); // Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadZero_*41702fca2c_40(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_*41702fca2c_40 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_Multiply_*41702fca2c_39(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_*41702fca2c_39 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadSix_*41702fca2c_38(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*41702fca2c_38 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadSix_*41702fca2c_37(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*41702fca2c_37 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadFour_*41702fca2c_36(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*41702fca2c_36 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadFour_*41702fca2c_35(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*41702fca2c_35 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadOne_*41702fca2c_34(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_*41702fca2c_34 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_Add_*41702fca2c_33(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_*41702fca2c_33 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_Subtract_*41702fca2c_32(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_*41702fca2c_32 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadThree_*41702fca2c_31(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_*41702fca2c_31 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadSeven_*41702fca2c_30(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_*41702fca2c_30 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadNine_*41702fca2c_29(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_*41702fca2c_29 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadEight_*41702fca2c_28(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_*41702fca2c_28 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadTwo_*41702fca2c_27(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_*41702fca2c_27 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_NumPadFive_*41702fca2c_26(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_*41702fca2c_26 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_Decimal_*41702fca2c_25(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_*41702fca2c_25 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_Divide_*41702fca2c_24(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_*41702fca2c_24 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_Comma_*41702fca2c_23(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_*41702fca2c_23 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_Period_*41702fca2c_22(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_*41702fca2c_22 // BlueprintEvent // @ game+0x2ad9d8
	struct FKey InpActEvt_Semicolon_*41702fca2c_21(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Semicolon_*41702fca2c_21 // BlueprintEvent // @ game+0x2ad9d8
	void OnInvulnerable(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void OnTest_SetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void OnFreeMoveMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveBeginPlay(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2ad9d8
	void OnDecreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void OnIncreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void SetupWeaponBlueprint(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void OnTest_InspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	float SpawnBulletPassByEffect(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void ServerSetInvulnerability(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FHitResult BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x2ad9d8
	struct FText NotHaveHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2ad9d8
	void NotHaveBoostItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void ActivateADS_Debuff(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FName Cheat_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FName Cheat_Server_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void Cheat_Give_Current_Ammo(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void Cheat_RevivePlayer(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FText NotHaveThrowItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2ad9d8
	void ServerFreeMove(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool Server_SetActiveRagdoll(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void Client_ResetMesh(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	bool Server_HandleRagdollActor(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FVector Server_setRagdollActorPos(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void HaveNotAnyHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void ServerSetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	float Client_AdjustFlySpeed(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_AdjustFlySpeed // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ToggleFreeMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void ToggleInvincibility(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	struct FTransform SimulateHeadShot(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x2ad9d8
	struct AActor* OnTakeAnyDamage_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTakeAnyDamage_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FHitResult OnLanded(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2ad9d8
	void OnCharacterWeaponRecoil_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnCharacterWeaponRecoil_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void GiveShieldToPlayer_BP(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GiveShieldToPlayer_BP // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	void Server_AttachShield(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_AttachShield // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct TArray<struct FName> Cheat_Server_Distribute_Loadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_Distribute_Loadout // Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct TArray<struct ATslNewBotCharacter*> Server_GiveAIItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_GiveAIItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	enum class ECastableItemType Server_UseMedItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_UseMedItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	float ReceiveTick(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	struct UWidget* SetRecoilDebugMenuWidget(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetRecoilDebugMenuWidget // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	bool ExecuteUbergraph_PlayerPawn_v2(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2 // HasDefaults // @ game+0x2ad9d8
};

