// BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C
// Size: 0x2ed8 (Inherited: 0x2d80)
struct APlayerPawn_v2_C : ATslCharacter {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x2d80(0x08)
	struct UPawnNoiseEmitterComponent* PawnNoiseEmitter; // 0x2d88(0x08)
	struct UCapsuleComponent* Hit_Prone; // 0x2d90(0x08)
	struct UCapsuleComponent* Hit_Stand; // 0x2d98(0x08)
	struct F*b2f5f3e08e TestInspectHandle; // 0x2da0(0x08)
	struct UAnimInstance* BaseAnimInstance; // 0x2da8(0x08)
	bool AudioListenerIsSet; // 0x2db0(0x01)
	char pad_2DB1[0x3]; // 0x2db1(0x03)
	float MinVCut; // 0x2db4(0x04)
	float MinZVCut; // 0x2db8(0x04)
	float DmgFactor; // 0x2dbc(0x04)
	float VDampingZ; // 0x2dc0(0x04)
	char pad_2DC4[0x4]; // 0x2dc4(0x04)
	struct F*6fe09374d0 TestWeaponItemClass; // 0x2dc8(0x08)
	struct F*6fe09374d0 TestAmmoItemClass; // 0x2dd0(0x08)
	float MaxJumpZVelocity; // 0x2dd8(0x04)
	float MovementAfterJumpCounter; // 0x2ddc(0x04)
	float MinJumpZVelocity; // 0x2de0(0x04)
	float MovementAfterJumpCounterDecrease; // 0x2de4(0x04)
	float MaxMovementAfterJumpCounter; // 0x2de8(0x04)
	char pad_2DEC[0x4]; // 0x2dec(0x04)
	struct U*226eb62c2c* Curve_TPP2FPP; // 0x2df0(0x08)
	struct U*226eb62c2c* Curve_FPP2TPP; // 0x2df8(0x08)
	struct U*226eb62c2c* Curve_TPP2FPP_Pitch; // 0x2e00(0x08)
	struct U*226eb62c2c* Curve_FPP2TPP_Pitch; // 0x2e08(0x08)
	bool bIsWeaponShoulderAttached; // 0x2e10(0x01)
	char pad_2E11[0x3]; // 0x2e11(0x03)
	float ADS_ReadyAngle; // 0x2e14(0x04)
	float SocketOffset_YZ; // 0x2e18(0x04)
	char pad_2E1C[0x4]; // 0x2e1c(0x04)
	struct ATslWeapon_Gun* ActiveGunRef; // 0x2e20(0x08)
	bool bCameraUnderWater; // 0x2e28(0x01)
	char pad_2E29[0x7]; // 0x2e29(0x07)
	struct ABP_CameraMan_C* CameraManRef; // 0x2e30(0x08)
	float YawTarget; // 0x2e38(0x04)
	float YawStep; // 0x2e3c(0x04)
	float GameTime; // 0x2e40(0x04)
	char pad_2E44[0x4]; // 0x2e44(0x04)
	struct U*b78b10b0de* Shake; // 0x2e48(0x08)
	float WeaponCollisionAlpha; // 0x2e50(0x04)
	char pad_2E54[0x4]; // 0x2e54(0x04)
	struct UW_SprintBar_C* SprintBarWidget; // 0x2e58(0x08)
	struct UStaticMeshComponent* ImpactMeshRef; // 0x2e60(0x08)
	bool HeavyFallStarted; // 0x2e68(0x01)
	bool PhysicalAnimationInitialized; // 0x2e69(0x01)
	char pad_2E6A[0x6]; // 0x2e6a(0x06)
	struct AAudioTestActor_C* AudioActorRef; // 0x2e70(0x08)
	struct UCurveFloat* Curve_EjectDamage; // 0x2e78(0x08)
	struct ABP_BulletCamActor_C* WeaponBulletCamRef; // 0x2e80(0x08)
	struct UW_WeaponMenu_C* WeapMenuRef; // 0x2e88(0x08)
	struct ABP_ActiveRagdollActor_C* RagdollActorRef; // 0x2e90(0x08)
	struct FVector RagdollActorPos; // 0x2e98(0x0c)
	char pad_2EA4[0x4]; // 0x2ea4(0x04)
	struct UW_RecoilDebugMenu_C* RecoilMenuRef; // 0x2ea8(0x08)
	struct TArray<struct FName> DistributedLoadout; // 0x2eb0(0x10)
	struct F*9147081c37 AudioTestClassString; // 0x2ec0(0x10)
	struct UW_AIItemMenu_C* aiWeapMenu; // 0x2ed0(0x08)

	void GetAIController(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GetAIController // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x21d2c4
	void AIWeaponMenuInit(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AIWeaponMenuInit // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void DistributeCurrentLoadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.DistributeCurrentLoadout // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void RecoilDebug_ToggleMouse(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_ToggleMouse // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void RecoilDebug_Reset(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_Reset // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void RecoilDebug_AddDataRow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_AddDataRow // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void BlurScopeOutside(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Tick_PhysicalAnimation(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void TEMP_WeapMenu_InitShow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void FixupThirdPersonCamera(); // Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void InitBulletCam(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ProcessMPC(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void TestInspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void TickSimulatePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ProcessPhysicalAnimation(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ProcessLocalOnlyFunctions(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void TEMPORARY_ProcessSprintBar(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void InitializePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void CheckWeaponCollision(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void HandleMovementParameters(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void CheckCameraUnderwater(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void SetInertia(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ScopingSocketOffsetMoving(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void AdjustCameraSwitching(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void CheckForScoping(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void push(); // Function PlayerPawn_v2.PlayerPawn_v2_C.push // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void UserConstructionScript(); // Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadZero_*5993371acc_40(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_*5993371acc_40 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Multiply_*5993371acc_39(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_*5993371acc_39 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadSix_*5993371acc_38(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*5993371acc_38 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadSix_*5993371acc_37(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*5993371acc_37 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadFour_*5993371acc_36(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*5993371acc_36 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadFour_*5993371acc_35(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*5993371acc_35 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadOne_*5993371acc_34(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_*5993371acc_34 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Add_*5993371acc_33(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_*5993371acc_33 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Subtract_*5993371acc_32(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_*5993371acc_32 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadThree_*5993371acc_31(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_*5993371acc_31 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadSeven_*5993371acc_30(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_*5993371acc_30 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadNine_*5993371acc_29(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_*5993371acc_29 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadEight_*5993371acc_28(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_*5993371acc_28 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadTwo_*5993371acc_27(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_*5993371acc_27 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_NumPadFive_*5993371acc_26(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_*5993371acc_26 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Decimal_*5993371acc_25(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_*5993371acc_25 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Divide_*5993371acc_24(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_*5993371acc_24 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Comma_*5993371acc_23(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_*5993371acc_23 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Period_*5993371acc_22(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_*5993371acc_22 // BlueprintEvent // @ game+0x21d2c4
	void InpActEvt_Semicolon_*5993371acc_21(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Semicolon_*5993371acc_21 // BlueprintEvent // @ game+0x21d2c4
	void OnInvulnerable(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable // BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void OnTest_SetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon // BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void OnFreeMoveMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode // BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ReceiveBeginPlay(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x21d2c4
	void OnDecreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnIncreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SetupWeaponBlueprint(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void OnTest_InspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SpawnBulletPassByEffect(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void ServerSetInvulnerability(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void NotHaveHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void NotHaveBoostItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void ActivateADS_Debuff(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Cheat_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem // BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Cheat_Server_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Cheat_Give_Current_Ammo(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo // BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Cheat_RevivePlayer(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer // BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void NotHaveThrowItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void ServerFreeMove(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Server_SetActiveRagdoll(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Client_ResetMesh(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Server_HandleRagdollActor(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Server_setRagdollActorPos(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void HaveNotAnyHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void ServerSetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Client_AdjustFlySpeed(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_AdjustFlySpeed // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ToggleFreeMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void ToggleInvincibility(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SimulateHeadShot(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void OnTakeAnyDamage_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTakeAnyDamage_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void OnLanded(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x21d2c4
	void OnCharacterWeaponRecoil_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnCharacterWeaponRecoil_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void GiveShieldToPlayer_BP(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GiveShieldToPlayer_BP // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void Server_AttachShield(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_AttachShield // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Cheat_Server_Distribute_Loadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_Distribute_Loadout // Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Server_GiveAIItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_GiveAIItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Server_UseMedItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_UseMedItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ReceiveTick(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SetRecoilDebugMenuWidget(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetRecoilDebugMenuWidget // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void ExecuteUbergraph_PlayerPawn_v2(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2 // HasDefaults // @ game+0x21d2c4
};

