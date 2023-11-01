// BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C
// Size: 0x2ed8 (Inherited: 0x2d80)
struct APlayerPawn_v2_C : ATslCharacter {
	struct F*abc8f374e0 UberGraphFrame; // 0x2d80(0x08)
	struct UPawnNoiseEmitterComponent* PawnNoiseEmitter; // 0x2d88(0x08)
	struct UCapsuleComponent* Hit_Prone; // 0x2d90(0x08)
	struct UCapsuleComponent* Hit_Stand; // 0x2d98(0x08)
	struct F*da672abddc TestInspectHandle; // 0x2da0(0x08)
	struct UAnimInstance* BaseAnimInstance; // 0x2da8(0x08)
	bool AudioListenerIsSet; // 0x2db0(0x01)
	char pad_2DB1[0x3]; // 0x2db1(0x03)
	float MinVCut; // 0x2db4(0x04)
	float MinZVCut; // 0x2db8(0x04)
	float DmgFactor; // 0x2dbc(0x04)
	float VDampingZ; // 0x2dc0(0x04)
	char pad_2DC4[0x4]; // 0x2dc4(0x04)
	struct F*1b4ab4ebac TestWeaponItemClass; // 0x2dc8(0x08)
	struct F*1b4ab4ebac TestAmmoItemClass; // 0x2dd0(0x08)
	float MaxJumpZVelocity; // 0x2dd8(0x04)
	float MovementAfterJumpCounter; // 0x2ddc(0x04)
	float MinJumpZVelocity; // 0x2de0(0x04)
	float MovementAfterJumpCounterDecrease; // 0x2de4(0x04)
	float MaxMovementAfterJumpCounter; // 0x2de8(0x04)
	char pad_2DEC[0x4]; // 0x2dec(0x04)
	struct U*59a0aeaef9* Curve_TPP2FPP; // 0x2df0(0x08)
	struct U*59a0aeaef9* Curve_FPP2TPP; // 0x2df8(0x08)
	struct U*59a0aeaef9* Curve_TPP2FPP_Pitch; // 0x2e00(0x08)
	struct U*59a0aeaef9* Curve_FPP2TPP_Pitch; // 0x2e08(0x08)
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
	struct U*50a4472fea* Shake; // 0x2e48(0x08)
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
	struct F*dbf31c1c98 AudioTestClassString; // 0x2ec0(0x10)
	struct UW_AIItemMenu_C* aiWeapMenu; // 0x2ed0(0x08)

	int32 GetAIController(struct ATslNewBotCharacter* CallFunc_Array_Get_Item, bool CallFunc__249bb33a55_ReturnValue, bool K2Node_DynamicCast_bSuccess); // Function PlayerPawn_v2.PlayerPawn_v2_C.GetAIController // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x2cd4ac
	bool AIWeaponMenuInit(struct APlayerController* CallFunc__d16dbecb58_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.AIWeaponMenuInit // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void DistributeCurrentLoadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.DistributeCurrentLoadout // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct APlayerController* RecoilDebug_ToggleMouse(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_ToggleMouse // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void RecoilDebug_Reset(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_Reset // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct ATslWeapon_Trajectory* RecoilDebug_AddDataRow(bool CallFunc_IsValid_ReturnValue2, struct ATslWeapon_Trajectory* CallFunc__b868dfc56e_ReturnValue2, struct FVector CallFunc__e4b877dc4d_ReturnValue, int32 CallFunc__25a9a0b9cf_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_AddDataRow // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct TArray<struct UStaticMesh*> BlurScopeOutside(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool Tick_PhysicalAnimation(struct FName ___name_Variable2, struct FName K2Node_Select_Default, bool CallFunc__cd2880c3b9_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	bool TEMP_WeapMenu_InitShow(bool ForceClose); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void FixupThirdPersonCamera(); // Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct U*6587928b02* InitBulletCam(struct FTransform CallFunc__d1e160453f_ReturnValue, struct ATslWeapon_Trajectory* K2Node_DynamicCast_AsTsl_Weapon_Trajectory, struct ABP_BulletCamActor_C* CallFunc_FinishSpawningActor_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ProcessMPC(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FString TestInspectObject(struct FVector CallFunc__7251d91d5f_ReturnValue, struct FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_BreakHitResult_bBlockingHit, float CallFunc_BreakHitResult_Time, struct FVector CallFunc_BreakHitResult_TraceStart, struct FVector CallFunc__bb5aca395e_ReturnValue, float CallFunc__25fb9d0a2f_ReturnValue, float CallFunc__846c340432_ReturnValue, struct FText CallFunc__fb3375bcdc_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void TickSimulatePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ProcessPhysicalAnimation(bool CallFunc__55a1a9ac5e_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ProcessLocalOnlyFunctions(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct UW_SprintBar_C* TEMPORARY_ProcessSprintBar(bool CallFunc_HasAuthority_ReturnValue, float CallFunc__78e450cb02_ReturnValue, bool CallFunc__cd2880c3b9_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void InitializePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	int32 CheckWeaponCollision(struct FVector CallFunc__7251d91d5f_ReturnValue, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bInitialOverlap, struct FVector CallFunc_BreakHitResult_Location, struct FVector CallFunc_BreakHitResult_TraceStart); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float HandleMovementParameters(struct FVector CallFunc__49913882bb_ReturnValue, float CallFunc__25fb9d0a2f_ReturnValue, bool CallFunc__43787c8a99_ReturnValue, float CallFunc__56186420ac_ReturnValue3); // Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void CheckCameraUnderwater(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float SetInertia(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float ScopingSocketOffsetMoving(struct FVector CallFunc__49913882bb_ReturnValue, struct FVector CallFunc__c33c3612ca_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Z, struct FVector CallFunc__e779c0903a_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Z2, struct FVector CallFunc__e779c0903a_ReturnValue2, float CallFunc__449286a277_ReturnValue5); // Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void AdjustCameraSwitching(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void CheckForScoping(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void push(struct FVector Delta Location, struct FVector CallFunc__5631d92e96_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.push // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UserConstructionScript(); // Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadZero_*41702fca2c_40(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_*41702fca2c_40 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Multiply_*41702fca2c_39(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_*41702fca2c_39 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadSix_*41702fca2c_38(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*41702fca2c_38 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadSix_*41702fca2c_37(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*41702fca2c_37 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadFour_*41702fca2c_36(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*41702fca2c_36 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadFour_*41702fca2c_35(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*41702fca2c_35 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadOne_*41702fca2c_34(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_*41702fca2c_34 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Add_*41702fca2c_33(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_*41702fca2c_33 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Subtract_*41702fca2c_32(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_*41702fca2c_32 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadThree_*41702fca2c_31(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_*41702fca2c_31 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadSeven_*41702fca2c_30(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_*41702fca2c_30 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadNine_*41702fca2c_29(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_*41702fca2c_29 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadEight_*41702fca2c_28(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_*41702fca2c_28 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadTwo_*41702fca2c_27(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_*41702fca2c_27 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_NumPadFive_*41702fca2c_26(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_*41702fca2c_26 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Decimal_*41702fca2c_25(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_*41702fca2c_25 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Divide_*41702fca2c_24(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_*41702fca2c_24 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Comma_*41702fca2c_23(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_*41702fca2c_23 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Period_*41702fca2c_22(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_*41702fca2c_22 // BlueprintEvent // @ game+0x2cd4ac
	void InpActEvt_Semicolon_*41702fca2c_21(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Semicolon_*41702fca2c_21 // BlueprintEvent // @ game+0x2cd4ac
	void OnInvulnerable(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void OnTest_SetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void OnFreeMoveMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void OnDecreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnIncreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetupWeaponBlueprint(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void OnTest_InspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FVector SpawnBulletPassByEffect(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ServerSetInvulnerability(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct UPrimitiveComponent* BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void NotHaveHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void NotHaveBoostItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ActivateADS_Debuff(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Cheat_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Cheat_Server_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Cheat_Give_Current_Ammo(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Cheat_RevivePlayer(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void NotHaveThrowItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void ServerFreeMove(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Server_SetActiveRagdoll(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Client_ResetMesh(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Server_HandleRagdollActor(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Server_setRagdollActorPos(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void HaveNotAnyHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ServerSetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	float Client_AdjustFlySpeed(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_AdjustFlySpeed // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ToggleFreeMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ToggleInvincibility(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FTransform SimulateHeadShot(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	float OnTakeAnyDamage_Event_1(struct AController* InstigatedBy); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTakeAnyDamage_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void OnLanded(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void OnCharacterWeaponRecoil_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnCharacterWeaponRecoil_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void GiveShieldToPlayer_BP(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GiveShieldToPlayer_BP // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void Server_AttachShield(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_AttachShield // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Cheat_Server_Distribute_Loadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_Distribute_Loadout // Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Server_GiveAIItem(struct FName ItemID); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_GiveAIItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Server_UseMedItem(struct TArray<struct ATslNewBotCharacter*> aiCharacter); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_UseMedItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveTick(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetRecoilDebugMenuWidget(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetRecoilDebugMenuWidget // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FKey ExecuteUbergraph_PlayerPawn_v2(bool CallFunc__43787c8a99_ReturnValue, bool CallFunc__03e2207fb1_ReturnValue, bool CallFunc_IsValid_ReturnValue2, struct FVector CallFunc__514480e957_ReturnValue, struct ATslWeapon_Trajectory* CallFunc__b868dfc56e_ReturnValue2, bool CallFunc__03e2207fb1_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, bool CallFunc__0afc1c4a4a_ReturnValue, struct UPrimitiveComponent* _9c8a0f6927_HitComponent, struct UPrimitiveComponent* _9c8a0f6927_OtherComp, struct FHitResult _9c8a0f6927_Hit, bool CallFunc__50ba42cd82_ReturnValue5, bool CallFunc_IsValid_ReturnValue11, bool CallFunc_IsValid_ReturnValue12, bool CallFunc__50ba42cd82_ReturnValue7, struct FKey _41702fca2c_Key, bool CallFunc__b8829370e0_ReturnValue10, bool CallFunc_Not_PreBool_ReturnValue6, bool CallFunc__b8829370e0_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue8, struct UAkComponent* CallFunc__da92214637_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue13, struct FName K2Node_CustomEvent_ItemRef2, int32 CallFunc__814fbf43be_ReturnValue3, bool CallFunc__b8829370e0_ReturnValue18, DelegateProperty _61b405a872_OutputDelegate, struct TArray<struct FFormatArgumentData> _30710d0ceb_Array, struct FText CallFunc_Format_ReturnValue, struct TArray<struct FFormatArgumentData> _30710d0ceb_Array2, struct FText CallFunc_Format_ReturnValue2, bool CallFunc__b8829370e0_ReturnValue20, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character2, bool CallFunc__b8829370e0_ReturnValue22, struct FVector K2Node_CustomEvent_InPos, struct AController* CallFunc_GetController_ReturnValue, bool CallFunc__b8829370e0_ReturnValue26, struct FKey _41702fca2c_Key4, float K2Node_CustomEvent_MaxAccel, struct FTransform K2Node_Event_SpawnTransform, struct TArray<struct FFormatArgumentData> _30710d0ceb_Array6, struct APlayerController* CallFunc__d16dbecb58_ReturnValue, int32 ___int_Loop_Counter_Variable2, struct TArray<struct FFormatArgumentData> _30710d0ceb_Array7, struct FHitResult K2Node_Event_Hit, bool CallFunc_IsValid_ReturnValue16, bool CallFunc_Not_PreBool_ReturnValue20, struct FVector CallFunc__613e01c62a_ReturnValue2, struct FTransform CallFunc_MakeTransform_ReturnValue, struct AActor* CallFunc__6e3d67b9ba_ReturnValue, struct ATslPlayerController* CallFunc_GetTslPlayerController_ReturnValue, struct UAnimInstance* CallFunc__930fde712a_ReturnValue, struct U*c1324381b8* CallFunc__d47adb9f0b_ReturnValue2, bool CallFunc_IsValid_ReturnValue18, float K2Node_Event_DeltaSeconds, struct TArray<struct FFormatArgumentData> _30710d0ceb_Array8, struct FText CallFunc_Format_ReturnValue8, struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData8, bool K2Node_DynamicCast_bSuccess4, enum class EGameModeType CallFunc__a8929d7605_ReturnValue, struct UWidget* K2Node_Event_Widget, bool K2Node_DynamicCast_bSuccess5, float CallFunc_FClamp_ReturnValue3, struct FKey _41702fca2c_Key15, float CallFunc__3d182b442e_ReturnValue7, float CallFunc_FClamp_ReturnValue4, struct FRotator CallFunc__8b89fd6520_ReturnValue, struct AActor* CallFunc__6e3d67b9ba_ReturnValue2, struct UClass* K2Node_ClassDynamicCast_AsActor, struct APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue2, bool CallFunc_BreakHitResult_bInitialOverlap, struct FVector CallFunc_BreakHitResult_Location, struct FVector CallFunc_BreakHitResult_Normal, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, struct FVector CallFunc_BreakHitResult_TraceEnd, struct FTransform CallFunc_MakeTransform_ReturnValue3, struct AActor* CallFunc__6e3d67b9ba_ReturnValue3, struct AActor* CallFunc_FinishSpawningActor_ReturnValue3, bool CallFunc_SphereTraceSingle_ReturnValue2, struct FVector CallFunc_BreakHitResult_ImpactNormal2, struct AActor* CallFunc_BreakHitResult_HitActor2, struct FName CallFunc_BreakHitResult_HitBoneName2, int32 CallFunc_BreakHitResult_FaceIndex2); // Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2 // HasDefaults // @ game+0x2cd4ac
};

