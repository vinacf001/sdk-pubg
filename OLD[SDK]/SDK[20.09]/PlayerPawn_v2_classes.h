// BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C
// Size: 0x2ed8 (Inherited: 0x2d80)
struct APlayerPawn_v2_C : ATslCharacter {
	struct F*73a77c28fa UberGraphFrame; // 0x2d80(0x08)
	struct UPawnNoiseEmitterComponent* PawnNoiseEmitter; // 0x2d88(0x08)
	struct UCapsuleComponent* Hit_Prone; // 0x2d90(0x08)
	struct UCapsuleComponent* Hit_Stand; // 0x2d98(0x08)
	struct F*9c84e0ea54 TestInspectHandle; // 0x2da0(0x08)
	struct UAnimInstance* BaseAnimInstance; // 0x2da8(0x08)
	bool AudioListenerIsSet; // 0x2db0(0x01)
	char pad_2DB1[0x3]; // 0x2db1(0x03)
	float MinVCut; // 0x2db4(0x04)
	float MinZVCut; // 0x2db8(0x04)
	float DmgFactor; // 0x2dbc(0x04)
	float VDampingZ; // 0x2dc0(0x04)
	char pad_2DC4[0x4]; // 0x2dc4(0x04)
	struct F*8203a30396 TestWeaponItemClass; // 0x2dc8(0x08)
	struct F*8203a30396 TestAmmoItemClass; // 0x2dd0(0x08)
	float MaxJumpZVelocity; // 0x2dd8(0x04)
	float MovementAfterJumpCounter; // 0x2ddc(0x04)
	float MinJumpZVelocity; // 0x2de0(0x04)
	float MovementAfterJumpCounterDecrease; // 0x2de4(0x04)
	float MaxMovementAfterJumpCounter; // 0x2de8(0x04)
	char pad_2DEC[0x4]; // 0x2dec(0x04)
	struct U*1ba2d2b086* Curve_TPP2FPP; // 0x2df0(0x08)
	struct U*1ba2d2b086* Curve_FPP2TPP; // 0x2df8(0x08)
	struct U*1ba2d2b086* Curve_TPP2FPP_Pitch; // 0x2e00(0x08)
	struct U*1ba2d2b086* Curve_FPP2TPP_Pitch; // 0x2e08(0x08)
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
	struct U*436388bfde* Shake; // 0x2e48(0x08)
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
	struct F*dae3044c79 AudioTestClassString; // 0x2ec0(0x10)
	struct UW_AIItemMenu_C* aiWeapMenu; // 0x2ed0(0x08)

	bool GetAIController(struct ATslNewBotAIController* AsTsl New Bot AIController, int32 ___int_Array_Index_Variable, struct ATslNewBotCharacter* CallFunc_Array_Get_Item, bool CallFunc__d1b7f5dc7b_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.GetAIController // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1e037c
	bool AIWeaponMenuInit(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AIWeaponMenuInit // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void DistributeCurrentLoadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.DistributeCurrentLoadout // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void RecoilDebug_ToggleMouse(struct APlayerController* CallFunc__ac2abd9ff0_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_ToggleMouse // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void RecoilDebug_Reset(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_Reset // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	int32 RecoilDebug_AddDataRow(struct ATslWeapon_Trajectory* CallFunc__851e147cf7_ReturnValue, bool CallFunc_IsValid_ReturnValue2); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_AddDataRow // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct U*1ba2d2b086* BlurScopeOutside(struct TArray<struct UStaticMesh*> ScopeMeshes); // Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool Tick_PhysicalAnimation(bool ___bool_Variable, struct FName ___name_Variable2, struct FName K2Node_Select_Default); // Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	bool TEMP_WeapMenu_InitShow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void FixupThirdPersonCamera(); // Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct ABP_BulletCamActor_C* InitBulletCam(struct ATslWeapon_Gun* CallFunc__163cd76439_ReturnValue, struct U*3af93f9c2e* CallFunc_GetWeaponMesh_ReturnValue, struct FTransform CallFunc__716c958ce4_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ProcessMPC(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct TArray<struct FFormatArgumentData> TestInspectObject(bool K2Node_DynamicCast_bSuccess, struct FRotator CallFunc__b9aa07e814_ReturnValue, struct FVector CallFunc__4b0e328c81_ReturnValue, struct FHitResult CallFunc_LineTraceSingle_OutHit, struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, int32 CallFunc_BreakHitResult_HitItem, struct FVector CallFunc_BreakHitResult_TraceStart, struct FVector CallFunc__72ed3d5557_ReturnValue, struct FString CallFunc__e95ba037ed_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void TickSimulatePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ProcessPhysicalAnimation(bool CallFunc__35f9ee4638_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ProcessLocalOnlyFunctions(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct UW_SprintBar_C* TEMPORARY_ProcessSprintBar(bool CallFunc_HasAuthority_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void InitializePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct AActor* CheckWeaponCollision(struct FVector CallFunc__4883fee90d_ReturnValue, struct FVector CallFunc__b2bbe8df8c_ReturnValue, struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array, struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_BreakHitResult_bBlockingHit, struct FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_FaceIndex); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float HandleMovementParameters(bool CallFunc__5edeeddff6_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void CheckCameraUnderwater(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float SetInertia(float CallFunc__abc2022f64_ReturnValue, float CallFunc__917c13b33f_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float ScopingSocketOffsetMoving(struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, struct FVector CallFunc__58a526a7ed_ReturnValue, struct FVector CallFunc__fdc9f4ce48_ReturnValue, float CallFunc__ae60dcbe74_ReturnValue4, float CallFunc_Abs_ReturnValue, struct FVector CallFunc__4b0e328c81_ReturnValue3, float CallFunc__d1b7da2a10_ReturnValue, float CallFunc_Abs_ReturnValue2, float CallFunc_FClamp_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void AdjustCameraSwitching(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void CheckForScoping(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FHitResult push(struct FVector CallFunc__a487955527_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.push // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadZero_*081c3f41d2_40(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_*081c3f41d2_40 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_Multiply_*081c3f41d2_39(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_*081c3f41d2_39 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadSix_*081c3f41d2_38(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*081c3f41d2_38 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadSix_*081c3f41d2_37(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*081c3f41d2_37 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadFour_*081c3f41d2_36(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*081c3f41d2_36 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadFour_*081c3f41d2_35(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*081c3f41d2_35 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadOne_*081c3f41d2_34(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_*081c3f41d2_34 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_Add_*081c3f41d2_33(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_*081c3f41d2_33 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_Subtract_*081c3f41d2_32(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_*081c3f41d2_32 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadThree_*081c3f41d2_31(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_*081c3f41d2_31 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadSeven_*081c3f41d2_30(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_*081c3f41d2_30 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadNine_*081c3f41d2_29(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_*081c3f41d2_29 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadEight_*081c3f41d2_28(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_*081c3f41d2_28 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadTwo_*081c3f41d2_27(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_*081c3f41d2_27 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_NumPadFive_*081c3f41d2_26(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_*081c3f41d2_26 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_Decimal_*081c3f41d2_25(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_*081c3f41d2_25 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_Divide_*081c3f41d2_24(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_*081c3f41d2_24 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_Comma_*081c3f41d2_23(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_*081c3f41d2_23 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_Period_*081c3f41d2_22(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_*081c3f41d2_22 // BlueprintEvent // @ game+0x1e037c
	void InpActEvt_Semicolon_*081c3f41d2_21(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Semicolon_*081c3f41d2_21 // BlueprintEvent // @ game+0x1e037c
	void OnInvulnerable(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void OnTest_SetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void OnFreeMoveMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void OnDecreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnIncreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x1e037c
	void SetupWeaponBlueprint(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint // Event|Public|BlueprintEvent // @ game+0x1e037c
	void OnTest_InspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject // Event|Public|BlueprintEvent // @ game+0x1e037c
	void SpawnBulletPassByEffect(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ServerSetInvulnerability(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct AActor* OtherActor, struct FVector NormalImpulse); // Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x1e037c
	void NotHaveHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void NotHaveBoostItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ActivateADS_Debuff(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Cheat_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Cheat_Server_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Cheat_Give_Current_Ammo(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Cheat_RevivePlayer(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void NotHaveThrowItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void ServerFreeMove(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Server_SetActiveRagdoll(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Client_ResetMesh(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Server_HandleRagdollActor(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Server_setRagdollActorPos(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void HaveNotAnyHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ServerSetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	float Client_AdjustFlySpeed(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_AdjustFlySpeed // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ToggleFreeMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ToggleInvincibility(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FTransform SimulateHeadShot(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void OnTakeAnyDamage_Event_1(struct AActor* DamagedActor, struct U*498af98d1d* DamageType); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTakeAnyDamage_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void OnLanded(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void OnCharacterWeaponRecoil_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnCharacterWeaponRecoil_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void GiveShieldToPlayer_BP(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GiveShieldToPlayer_BP // Event|Public|BlueprintEvent // @ game+0x1e037c
	void Server_AttachShield(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_AttachShield // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Cheat_Server_Distribute_Loadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_Distribute_Loadout // Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct FName Server_GiveAIItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_GiveAIItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct TArray<struct ATslNewBotCharacter*> Server_UseMedItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_UseMedItem // Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveTick(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	void SetRecoilDebugMenuWidget(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetRecoilDebugMenuWidget // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FKey ExecuteUbergraph_PlayerPawn_v2(bool CallFunc__5e894ae09c_ReturnValue, float K2Node_Event_BulletVelocity, struct ATslWeapon_Trajectory* CallFunc__851e147cf7_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc__01b76916b4_ReturnValue, struct FString CallFunc__d03917fad9_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, float CallFunc__c22e42a3a5_ReturnValue3, struct AInventoryFacade* CallFunc__0558dcba9a_ReturnValue, int32 CallFunc__12ce13b129_ReturnValue2, bool CallFunc__6ea3559d3b_ReturnValue, struct AActor* _05982889a1_OtherActor, bool CallFunc__6ea3559d3b_ReturnValue3, bool CallFunc__5e894ae09c_ReturnValue4, struct UW_RecoilDebugMenu_C* CallFunc_Create_ReturnValue, bool CallFunc__6ea3559d3b_ReturnValue4, bool CallFunc__6ea3559d3b_ReturnValue7, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc__6ea3559d3b_ReturnValue9, bool CallFunc_Not_PreBool_ReturnValue5, bool CallFunc__6ea3559d3b_ReturnValue11, bool CallFunc_Not_PreBool_ReturnValue12, struct UAkComponent* CallFunc__86e7017472_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue13, struct FName K2Node_CustomEvent_ItemRef2, bool CallFunc_HasAuthority_ReturnValue, struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData2, DelegateProperty _37b0074df2_OutputDelegate, struct FText CallFunc__ace63d1958_ReturnValue, struct TArray<struct FFormatArgumentData> _603cbf0def_Array2, struct FText CallFunc_Format_ReturnValue2, struct TArray<struct FFormatArgumentData> _603cbf0def_Array3, struct FText CallFunc_Format_ReturnValue3, bool CallFunc__6ea3559d3b_ReturnValue23, bool CallFunc__6ea3559d3b_ReturnValue25, struct FText CallFunc_Format_ReturnValue5, bool CallFunc__6ea3559d3b_ReturnValue27, float K2Node_CustomEvent_MaxSpeed, struct UAkComponent* CallFunc__86e7017472_ReturnValue2, bool ___bool_Variable, struct FText CallFunc__24c3fefcba_ReturnValue, struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData6, bool ___bool_Variable2, struct FText CallFunc__24c3fefcba_ReturnValue2, struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData7, struct FText CallFunc_Format_ReturnValue7, int32 ___int_Array_Index_Variable2, bool CallFunc__6ea3559d3b_ReturnValue29, bool CallFunc__6ea3559d3b_ReturnValue30, struct FKey _081c3f41d2_Key10, struct APlayerPawn_v2_C* CallFunc_Array_Get_Item2, bool CallFunc__d1b7f5dc7b_ReturnValue2, bool ___bool_Variable3, bool CallFunc_Not_PreBool_ReturnValue21, struct ATslNewBotAIController* CallFunc_GetAIController_AsTsl_New_Bot_AIController, enum class ECastableItemType K2Node_CustomEvent_ItemType, bool CallFunc__6ea3559d3b_ReturnValue32, struct ATslGameState* K2Node_DynamicCast_AsTsl_Game_State, bool CallFunc__254021fe6a_ReturnValue, struct FKey _081c3f41d2_Key12, struct FKey _081c3f41d2_Key14, float CallFunc__c22e42a3a5_ReturnValue6, struct FKey ___struct_Variable, struct FKey ___struct_Variable2, struct FKey _081c3f41d2_Key17, struct FTransform CallFunc_MakeTransform_ReturnValue2, struct ABP_CameraMan_C* CallFunc_FinishSpawningActor_ReturnValue2, struct UClass* CallFunc__a5e78d9ea4_ReturnValue, struct FHitResult CallFunc_SphereTraceSingle_OutHit, struct FRotator CallFunc__b9aa07e814_ReturnValue3, bool CallFunc_BreakHitResult_bBlockingHit, float CallFunc_BreakHitResult_Time, struct FVector CallFunc_BreakHitResult_TraceEnd, struct FTransform CallFunc_MakeTransform_ReturnValue3, struct AActor* CallFunc__f0ce07f5a2_ReturnValue3, struct AActor* CallFunc_FinishSpawningActor_ReturnValue3, struct FVector CallFunc_BreakHitResult_ImpactPoint2, struct FVector CallFunc_BreakHitResult_ImpactNormal2, struct AActor* CallFunc_BreakHitResult_HitActor2, struct FName CallFunc_BreakHitResult_HitBoneName2, int32 CallFunc_BreakHitResult_FaceIndex2); // Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2 // HasDefaults // @ game+0x1e037c
};

