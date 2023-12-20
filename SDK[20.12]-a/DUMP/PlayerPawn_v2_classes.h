// BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C
// Size: 0x3558 (Inherited: 0x3400)
struct APlayerPawn_v2_C : ATslCharacter {
	struct F*a6c93df757 UberGraphFrame; // 0x3400(0x08)
	struct UPawnNoiseEmitterComponent* PawnNoiseEmitter; // 0x3408(0x08)
	struct UCapsuleComponent* Hit_Prone; // 0x3410(0x08)
	struct UCapsuleComponent* Hit_Stand; // 0x3418(0x08)
	struct F*2ef3a887d0 TestInspectHandle; // 0x3420(0x08)
	struct UAnimInstance* BaseAnimInstance; // 0x3428(0x08)
	bool AudioListenerIsSet; // 0x3430(0x01)
	char pad_3431[0x3]; // 0x3431(0x03)
	float MinVCut; // 0x3434(0x04)
	float MinZVCut; // 0x3438(0x04)
	float DmgFactor; // 0x343c(0x04)
	float VDampingZ; // 0x3440(0x04)
	char pad_3444[0x4]; // 0x3444(0x04)
	struct F*ab0db8ae6e TestWeaponItemClass; // 0x3448(0x08)
	struct F*ab0db8ae6e TestAmmoItemClass; // 0x3450(0x08)
	float MaxJumpZVelocity; // 0x3458(0x04)
	float MovementAfterJumpCounter; // 0x345c(0x04)
	float MinJumpZVelocity; // 0x3460(0x04)
	float MovementAfterJumpCounterDecrease; // 0x3464(0x04)
	float MaxMovementAfterJumpCounter; // 0x3468(0x04)
	char pad_346C[0x4]; // 0x346c(0x04)
	struct U*e6746d9844* Curve_TPP2FPP; // 0x3470(0x08)
	struct U*e6746d9844* Curve_FPP2TPP; // 0x3478(0x08)
	struct U*e6746d9844* Curve_TPP2FPP_Pitch; // 0x3480(0x08)
	struct U*e6746d9844* Curve_FPP2TPP_Pitch; // 0x3488(0x08)
	bool bIsWeaponShoulderAttached; // 0x3490(0x01)
	char pad_3491[0x3]; // 0x3491(0x03)
	float ADS_ReadyAngle; // 0x3494(0x04)
	float SocketOffset_YZ; // 0x3498(0x04)
	char pad_349C[0x4]; // 0x349c(0x04)
	struct ATslWeapon_Gun* ActiveGunRef; // 0x34a0(0x08)
	bool bCameraUnderWater; // 0x34a8(0x01)
	char pad_34A9[0x7]; // 0x34a9(0x07)
	struct ABP_CameraMan_C* CameraManRef; // 0x34b0(0x08)
	float YawTarget; // 0x34b8(0x04)
	float YawStep; // 0x34bc(0x04)
	float GameTime; // 0x34c0(0x04)
	char pad_34C4[0x4]; // 0x34c4(0x04)
	struct U*f2efdc3e42* Shake; // 0x34c8(0x08)
	float WeaponCollisionAlpha; // 0x34d0(0x04)
	char pad_34D4[0x4]; // 0x34d4(0x04)
	struct UW_SprintBar_C* SprintBarWidget; // 0x34d8(0x08)
	struct UStaticMeshComponent* ImpactMeshRef; // 0x34e0(0x08)
	bool HeavyFallStarted; // 0x34e8(0x01)
	bool PhysicalAnimationInitialized; // 0x34e9(0x01)
	char pad_34EA[0x6]; // 0x34ea(0x06)
	struct AAudioTestActor_C* AudioActorRef; // 0x34f0(0x08)
	struct UCurveFloat* Curve_EjectDamage; // 0x34f8(0x08)
	struct ABP_BulletCamActor_C* WeaponBulletCamRef; // 0x3500(0x08)
	struct UW_WeaponMenu_C* WeapMenuRef; // 0x3508(0x08)
	struct ABP_ActiveRagdollActor_C* RagdollActorRef; // 0x3510(0x08)
	struct FVector RagdollActorPos; // 0x3518(0x0c)
	char pad_3524[0x4]; // 0x3524(0x04)
	struct UW_RecoilDebugMenu_C* RecoilMenuRef; // 0x3528(0x08)
	struct TArray<struct FName> DistributedLoadout; // 0x3530(0x10)
	struct F*618af039d3 AudioTestClassString; // 0x3540(0x10)
	struct UW_AIItemMenu_C* aiWeapMenu; // 0x3550(0x08)

	void AIWeaponMenuInit(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AIWeaponMenuInit // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void DistributeCurrentLoadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.DistributeCurrentLoadout // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void RecoilDebug_ToggleMouse(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_ToggleMouse // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void RecoilDebug_Reset(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_Reset // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void RecoilDebug_AddDataRow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_AddDataRow // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void BlurScopeOutside(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Tick_PhysicalAnimation(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void TEMP_WeapMenu_InitShow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void FixupThirdPersonCamera(); // Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void InitBulletCam(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ProcessMPC(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void TestInspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void TickSimulatePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ProcessPhysicalAnimation(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ProcessLocalOnlyFunctions(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void TEMPORARY_ProcessSprintBar(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void InitializePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void CheckWeaponCollision(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void HandleMovementParameters(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void CheckCameraUnderwater(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void SetInertia(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ScopingSocketOffsetMoving(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void AdjustCameraSwitching(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void CheckForScoping(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void push(); // Function PlayerPawn_v2.PlayerPawn_v2_C.push // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadZero_*bcd26d28fe_40(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_*bcd26d28fe_40 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Multiply_*bcd26d28fe_39(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_*bcd26d28fe_39 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadSix_*bcd26d28fe_38(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*bcd26d28fe_38 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadSix_*bcd26d28fe_37(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*bcd26d28fe_37 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadFour_*bcd26d28fe_36(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*bcd26d28fe_36 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadFour_*bcd26d28fe_35(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*bcd26d28fe_35 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadOne_*bcd26d28fe_34(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_*bcd26d28fe_34 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Add_*bcd26d28fe_33(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_*bcd26d28fe_33 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Subtract_*bcd26d28fe_32(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_*bcd26d28fe_32 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadThree_*bcd26d28fe_31(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_*bcd26d28fe_31 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadSeven_*bcd26d28fe_30(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_*bcd26d28fe_30 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadNine_*bcd26d28fe_29(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_*bcd26d28fe_29 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadEight_*bcd26d28fe_28(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_*bcd26d28fe_28 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadTwo_*bcd26d28fe_27(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_*bcd26d28fe_27 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_NumPadFive_*bcd26d28fe_26(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_*bcd26d28fe_26 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Decimal_*bcd26d28fe_25(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_*bcd26d28fe_25 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Divide_*bcd26d28fe_24(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_*bcd26d28fe_24 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Comma_*bcd26d28fe_23(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_*bcd26d28fe_23 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Period_*bcd26d28fe_22(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_*bcd26d28fe_22 // BlueprintEvent // @ game+0x3b43ac
	void InpActEvt_Semicolon_*bcd26d28fe_21(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Semicolon_*bcd26d28fe_21 // BlueprintEvent // @ game+0x3b43ac
	void OnInvulnerable(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnTest_SetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnFreeMoveMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void OnDecreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnIncreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SetupWeaponBlueprint(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void OnTest_InspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SpawnBulletPassByEffect(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ServerSetInvulnerability(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void NotHaveHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void NotHaveBoostItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ActivateADS_Debuff(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Cheat_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Cheat_Server_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Cheat_Give_Current_Ammo(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Cheat_RevivePlayer(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void NotHaveThrowItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void ServerFreeMove(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Server_SetActiveRagdoll(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Client_ResetMesh(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Server_HandleRagdollActor(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Server_setRagdollActorPos(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void HaveNotAnyHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ServerSetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Client_AdjustFlySpeed(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_AdjustFlySpeed // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ToggleFreeMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ToggleInvincibility(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SimulateHeadShot(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnTakeAnyDamage_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTakeAnyDamage_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void OnLanded(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x3b43ac
	void OnCharacterWeaponRecoil_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnCharacterWeaponRecoil_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void GiveShieldToPlayer_BP(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GiveShieldToPlayer_BP // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void Server_AttachShield(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_AttachShield // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void Cheat_Server_Distribute_Loadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_Distribute_Loadout // Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void SetRecoilDebugMenuWidget(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetRecoilDebugMenuWidget // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_PlayerPawn_v2(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2 // HasDefaults // @ game+0x3b43ac
};

