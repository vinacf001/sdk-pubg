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

	bool GetAIController(struct TArray<struct ATslNewBotCharacter*> Array, int32 CallFunc__0bad7adb6e_ReturnValue, int32 ___int_Loop_Counter_Variable, struct AAIController* CallFunc__5c3c8c430a_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.GetAIController // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x293938
	bool AIWeaponMenuInit(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AIWeaponMenuInit // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void DistributeCurrentLoadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.DistributeCurrentLoadout // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void RecoilDebug_ToggleMouse(struct APlayerController* CallFunc__e33fbd32a1_ReturnValue2); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_ToggleMouse // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void RecoilDebug_Reset(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_Reset // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	int32 RecoilDebug_AddDataRow(bool CallFunc_IsValid_ReturnValue, bool CallFunc__4914a02b21_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_AddDataRow // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct U*226eb62c2c* BlurScopeOutside(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool Tick_PhysicalAnimation(struct FName ___name_Variable, bool CallFunc__e57dda0cc7_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct UW_WeaponMenu_C* TEMP_WeapMenu_InitShow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void FixupThirdPersonCamera(); // Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct ABP_BulletCamActor_C* InitBulletCam(struct APlayerController* CallFunc__e33fbd32a1_ReturnValue, struct AActor* CallFunc__869d9be173_ReturnValue, bool CallFunc__e42fa8abdc_ReturnValue, struct AActor* CallFunc__156662a2f2_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ProcessMPC(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FFormatArgumentData TestInspectObject(struct APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool CallFunc_IsValid_ReturnValue, struct FVector CallFunc__4e30d5fb44_ReturnValue, struct FVector CallFunc__7b95fb5251_ReturnValue, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, struct AActor* CallFunc_BreakHitResult_HitActor, struct FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector CallFunc_BreakHitResult_TraceEnd, struct FText CallFunc_Format_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void TickSimulatePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ProcessPhysicalAnimation(bool CallFunc__0791eb7166_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ProcessLocalOnlyFunctions(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct UW_SprintBar_C* TEMPORARY_ProcessSprintBar(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void InitializePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct UPhysicalMaterial* CheckWeaponCollision(struct TArray<struct AActor*> ___object_Variable, struct FVector CallFunc__21797244da_ReturnValue, struct FVector CallFunc__4e30d5fb44_ReturnValue, struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array, struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit, struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, int32 CallFunc_BreakHitResult_HitItem, struct FVector CallFunc_BreakHitResult_TraceStart); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	float HandleMovementParameters(struct FVector CallFunc_GetVelocity_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void CheckCameraUnderwater(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void SetInertia(float CallFunc__7cd9bf7d62_ReturnValue2, bool CallFunc_HasAuthority_ReturnValue, float CallFunc__341c4c2120_ReturnValue2); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	float ScopingSocketOffsetMoving(struct FVector CallFunc_GetVelocity_ReturnValue, float CallFunc__aa1f1a3bef_ReturnValue3, struct FVector CallFunc__081726cede_ReturnValue2, struct FVector CallFunc__2529aa9c4b_ReturnValue, float CallFunc_BreakVector_Z3, float CallFunc__bfdcaa3274_ReturnValue, float CallFunc__d3f5532c39_ReturnValue2, float CallFunc__aa1f1a3bef_ReturnValue5); // Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void AdjustCameraSwitching(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void CheckForScoping(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FHitResult push(); // Function PlayerPawn_v2.PlayerPawn_v2_C.push // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void UserConstructionScript(); // Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadZero_*5993371acc_40(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_*5993371acc_40 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Multiply_*5993371acc_39(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_*5993371acc_39 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadSix_*5993371acc_38(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*5993371acc_38 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadSix_*5993371acc_37(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*5993371acc_37 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadFour_*5993371acc_36(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*5993371acc_36 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadFour_*5993371acc_35(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*5993371acc_35 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadOne_*5993371acc_34(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_*5993371acc_34 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Add_*5993371acc_33(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_*5993371acc_33 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Subtract_*5993371acc_32(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_*5993371acc_32 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadThree_*5993371acc_31(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_*5993371acc_31 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadSeven_*5993371acc_30(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_*5993371acc_30 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadNine_*5993371acc_29(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_*5993371acc_29 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadEight_*5993371acc_28(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_*5993371acc_28 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadTwo_*5993371acc_27(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_*5993371acc_27 // BlueprintEvent // @ game+0x293938
	void InpActEvt_NumPadFive_*5993371acc_26(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_*5993371acc_26 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Decimal_*5993371acc_25(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_*5993371acc_25 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Divide_*5993371acc_24(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_*5993371acc_24 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Comma_*5993371acc_23(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_*5993371acc_23 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Period_*5993371acc_22(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_*5993371acc_22 // BlueprintEvent // @ game+0x293938
	void InpActEvt_Semicolon_*5993371acc_21(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Semicolon_*5993371acc_21 // BlueprintEvent // @ game+0x293938
	void OnInvulnerable(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void OnTest_SetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void OnFreeMoveMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveBeginPlay(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x293938
	void OnDecreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x293938
	void OnIncreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x293938
	void SetupWeaponBlueprint(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint // Event|Public|BlueprintEvent // @ game+0x293938
	void OnTest_InspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject // Event|Public|BlueprintEvent // @ game+0x293938
	void SpawnBulletPassByEffect(struct FVector Location); // Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect // Event|Public|BlueprintEvent // @ game+0x293938
	void ServerSetInvulnerability(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct UPrimitiveComponent* OtherComp); // Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x293938
	void NotHaveHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void NotHaveBoostItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x293938
	void ActivateADS_Debuff(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Cheat_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Cheat_Server_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Cheat_Give_Current_Ammo(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Cheat_RevivePlayer(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void NotHaveThrowItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void ServerFreeMove(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Server_SetActiveRagdoll(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Client_ResetMesh(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Server_HandleRagdollActor(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Server_setRagdollActorPos(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void HaveNotAnyHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x293938
	void ServerSetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x293938
	float Client_AdjustFlySpeed(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_AdjustFlySpeed // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ToggleFreeMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode // Event|Public|BlueprintEvent // @ game+0x293938
	void ToggleInvincibility(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility // Event|Public|BlueprintEvent // @ game+0x293938
	void SimulateHeadShot(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x293938
	void OnTakeAnyDamage_Event_1(float Damage, struct AController* InstigatedBy); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTakeAnyDamage_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void OnLanded(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x293938
	void OnCharacterWeaponRecoil_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnCharacterWeaponRecoil_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x293938
	void GiveShieldToPlayer_BP(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GiveShieldToPlayer_BP // Event|Public|BlueprintEvent // @ game+0x293938
	void Server_AttachShield(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_AttachShield // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Cheat_Server_Distribute_Loadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_Distribute_Loadout // Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FName Server_GiveAIItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_GiveAIItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct TArray<struct ATslNewBotCharacter*> Server_UseMedItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_UseMedItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void ReceiveTick(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x293938
	void SetRecoilDebugMenuWidget(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetRecoilDebugMenuWidget // Event|Public|BlueprintEvent // @ game+0x293938
	struct FKey ExecuteUbergraph_PlayerPawn_v2(int32 EntryPoint, struct FVector K2Node_Event_Location, float CallFunc__341c4c2120_ReturnValue, bool CallFunc__5a350224e5_ReturnValue, float CallFunc_FClamp_ReturnValue2, struct FString CallFunc__3cb7b87e18_ReturnValue, struct ATslWeapon_Trajectory* CallFunc__3bb4848621_ReturnValue2, bool CallFunc__4914a02b21_ReturnValue2, struct TArray<struct AActor*> ___object_Variable2, int32 CallFunc__c74b2d7549_ReturnValue, bool CallFunc__f325042bb5_ReturnValue, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_IsValid_ReturnValue10, bool CallFunc__00208cf5ed_ReturnValue5, bool CallFunc_IsValid_ReturnValue11, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc__f5786fb9d0_ReturnValue8, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc__f5786fb9d0_ReturnValue10, bool CallFunc__f5786fb9d0_ReturnValue16, bool CallFunc_Not_PreBool_ReturnValue12, struct UAkComponent* CallFunc__2f1f587787_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue13, bool CallFunc__f5786fb9d0_ReturnValue19, bool CallFunc_HasAuthority_ReturnValue, struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData2, DelegateProperty _d01ead63d9_OutputDelegate, bool K2Node_DynamicCast_bSuccess, bool CallFunc__d8d4d3d439_ReturnValue, struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData3, float CallFunc__658ba87d09_ReturnValue, struct FText CallFunc__8ede4714d5_ReturnValue2, struct TArray<struct FFormatArgumentData> _dda1b9be9a_Array3, struct FText CallFunc_Format_ReturnValue3, bool CallFunc__7606962da1_ReturnValue, struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData5, bool CallFunc__f5786fb9d0_ReturnValue25, struct FText CallFunc_Format_ReturnValue5, bool CallFunc__abdc1da901_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, struct UAkComponent* CallFunc__2f1f587787_ReturnValue2, bool ___bool_Variable, struct FText CallFunc__aa513eb250_ReturnValue, struct U*f23bfe8a1c* K2Node_CustomEvent_DamageType, struct AActor* K2Node_CustomEvent_DamageCauser, bool ___bool_Variable2, struct FText CallFunc__aa513eb250_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue18, struct FKey _5993371acc_Key7, int32 ___int_Array_Index_Variable2, bool CallFunc__f5786fb9d0_ReturnValue29, bool CallFunc__f5786fb9d0_ReturnValue30, int32 CallFunc__0bad7adb6e_ReturnValue, bool CallFunc__2bff9823d8_ReturnValue, struct APlayerPawn_v2_C* CallFunc_Array_Get_Item2, bool CallFunc__2bff9823d8_ReturnValue2, struct FName K2Node_CustomEvent_ItemId, bool CallFunc_Not_PreBool_ReturnValue22, struct ATslNewBotAIController* CallFunc_GetAIController_AsTsl_New_Bot_AIController, enum class ECastableItemType K2Node_CustomEvent_ItemType, struct TArray<struct FFormatArgumentData> _dda1b9be9a_Array10, struct FText CallFunc_Format_ReturnValue10, bool CallFunc__f5786fb9d0_ReturnValue32, struct ATslGameState* K2Node_DynamicCast_AsTsl_Game_State, bool CallFunc_IsValid_ReturnValue21, struct FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult2, struct FKey _5993371acc_Key12, struct FKey _5993371acc_Key14, float CallFunc__23a8e3a7f4_ReturnValue6, struct FVector CallFunc__21797244da_ReturnValue, struct APlayerController* CallFunc__e33fbd32a1_ReturnValue3, struct FKey ___struct_Variable2, struct FKey _5993371acc_Key17, struct FVector CallFunc__4e30d5fb44_ReturnValue2, struct FVector CallFunc__fb39f794ac_ReturnValue, struct FHitResult CallFunc_SphereTraceSingle_OutHit, struct FRotator CallFunc__77a059e7d8_ReturnValue3, bool CallFunc_BreakHitResult_bBlockingHit, int32 CallFunc_BreakHitResult_HitItem, struct FHitResult CallFunc_SphereTraceSingle_OutHit2, struct AAudioTestActor_C* K2Node_DynamicCast_AsAudio_Test_Actor, bool CallFunc_BreakHitResult_bBlockingHit2, float CallFunc_BreakHitResult_Time2, struct FVector CallFunc_BreakHitResult_TraceStart2, struct FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue27, struct FKey _5993371acc_Key19); // Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2 // HasDefaults // @ game+0x293938
};

