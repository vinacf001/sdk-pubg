// BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C
// Size: 0x35d8 (Inherited: 0x3480)
struct APlayerPawn_v2_C : ATslCharacter {
	struct F*a6c93df757 UberGraphFrame; // 0x3480(0x08)
	struct UPawnNoiseEmitterComponent* PawnNoiseEmitter; // 0x3488(0x08)
	struct UCapsuleComponent* Hit_Prone; // 0x3490(0x08)
	struct UCapsuleComponent* Hit_Stand; // 0x3498(0x08)
	struct F*2ef3a887d0 TestInspectHandle; // 0x34a0(0x08)
	struct UAnimInstance* BaseAnimInstance; // 0x34a8(0x08)
	bool AudioListenerIsSet; // 0x34b0(0x01)
	char pad_34B1[0x3]; // 0x34b1(0x03)
	float MinVCut; // 0x34b4(0x04)
	float MinZVCut; // 0x34b8(0x04)
	float DmgFactor; // 0x34bc(0x04)
	float VDampingZ; // 0x34c0(0x04)
	char pad_34C4[0x4]; // 0x34c4(0x04)
	struct F*ab0db8ae6e TestWeaponItemClass; // 0x34c8(0x08)
	struct F*ab0db8ae6e TestAmmoItemClass; // 0x34d0(0x08)
	float MaxJumpZVelocity; // 0x34d8(0x04)
	float MovementAfterJumpCounter; // 0x34dc(0x04)
	float MinJumpZVelocity; // 0x34e0(0x04)
	float MovementAfterJumpCounterDecrease; // 0x34e4(0x04)
	float MaxMovementAfterJumpCounter; // 0x34e8(0x04)
	char pad_34EC[0x4]; // 0x34ec(0x04)
	struct U*e6746d9844* Curve_TPP2FPP; // 0x34f0(0x08)
	struct U*e6746d9844* Curve_FPP2TPP; // 0x34f8(0x08)
	struct U*e6746d9844* Curve_TPP2FPP_Pitch; // 0x3500(0x08)
	struct U*e6746d9844* Curve_FPP2TPP_Pitch; // 0x3508(0x08)
	bool bIsWeaponShoulderAttached; // 0x3510(0x01)
	char pad_3511[0x3]; // 0x3511(0x03)
	float ADS_ReadyAngle; // 0x3514(0x04)
	float SocketOffset_YZ; // 0x3518(0x04)
	char pad_351C[0x4]; // 0x351c(0x04)
	struct ATslWeapon_Gun* ActiveGunRef; // 0x3520(0x08)
	bool bCameraUnderWater; // 0x3528(0x01)
	char pad_3529[0x7]; // 0x3529(0x07)
	struct ABP_CameraMan_C* CameraManRef; // 0x3530(0x08)
	float YawTarget; // 0x3538(0x04)
	float YawStep; // 0x353c(0x04)
	float GameTime; // 0x3540(0x04)
	char pad_3544[0x4]; // 0x3544(0x04)
	struct U*f2efdc3e42* Shake; // 0x3548(0x08)
	float WeaponCollisionAlpha; // 0x3550(0x04)
	char pad_3554[0x4]; // 0x3554(0x04)
	struct UW_SprintBar_C* SprintBarWidget; // 0x3558(0x08)
	struct UStaticMeshComponent* ImpactMeshRef; // 0x3560(0x08)
	bool HeavyFallStarted; // 0x3568(0x01)
	bool PhysicalAnimationInitialized; // 0x3569(0x01)
	char pad_356A[0x6]; // 0x356a(0x06)
	struct AAudioTestActor_C* AudioActorRef; // 0x3570(0x08)
	struct UCurveFloat* Curve_EjectDamage; // 0x3578(0x08)
	struct ABP_BulletCamActor_C* WeaponBulletCamRef; // 0x3580(0x08)
	struct UW_WeaponMenu_C* WeapMenuRef; // 0x3588(0x08)
	struct ABP_ActiveRagdollActor_C* RagdollActorRef; // 0x3590(0x08)
	struct FVector RagdollActorPos; // 0x3598(0x0c)
	char pad_35A4[0x4]; // 0x35a4(0x04)
	struct UW_RecoilDebugMenu_C* RecoilMenuRef; // 0x35a8(0x08)
	struct TArray<struct FName> DistributedLoadout; // 0x35b0(0x10)
	struct F*618af039d3 AudioTestClassString; // 0x35c0(0x10)
	struct UW_AIItemMenu_C* aiWeapMenu; // 0x35d0(0x08)

	void AIWeaponMenuInit(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AIWeaponMenuInit // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void DistributeCurrentLoadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.DistributeCurrentLoadout // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void RecoilDebug_ToggleMouse(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_ToggleMouse // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void RecoilDebug_Reset(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_Reset // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void RecoilDebug_AddDataRow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_AddDataRow // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void BlurScopeOutside(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Tick_PhysicalAnimation(struct FName ___name_Variable, struct FName ___name_Variable2, bool CallFunc__9837ff2fb1_ReturnValue, struct FName K2Node_Select_Default, struct FVector CallFunc__dd99459d4b_ReturnValue, bool CallFunc__3c5cc3769a_ReturnValue, struct FName CallFunc__28349543ea_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void TEMP_WeapMenu_InitShow(bool ForceClose, struct APlayerController* CallFunc__8b5701c55f_ReturnValue, struct APlayerController* CallFunc__8b5701c55f_ReturnValue2, struct UW_WeaponMenu_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void FixupThirdPersonCamera(struct USceneComponent* AttachComponent); // Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void InitBulletCam(struct APlayerController* CallFunc__8b5701c55f_ReturnValue, struct ATslWeapon_Gun* CallFunc__616d27eea4_ReturnValue, struct AActor* CallFunc__3dcfe68cdd_ReturnValue, struct U*b389c20ca0* CallFunc_GetWeaponMesh_ReturnValue, bool CallFunc__05ed8812ea_ReturnValue, struct FTransform CallFunc__5828b2e365_ReturnValue, struct AActor* CallFunc__f8ded2558f_ReturnValue, struct ATslWeapon_Trajectory* K2Node_DynamicCast_AsTsl_Weapon_Trajectory, bool K2Node_DynamicCast_bSuccess, struct ABP_BulletCamActor_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ProcessMPC(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void TestInspectObject(struct TArray<struct AActor*> ___object_Variable, struct FVector CallFunc__806c296001_ReturnValue, struct FVector CallFunc__dd99459d4b_ReturnValue, struct AController* CallFunc_GetController_ReturnValue, struct APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, struct FRotator CallFunc__d36a44000d_ReturnValue, struct FVector CallFunc__1356d9ef59_ReturnValue, struct FVector CallFunc__29f62b02c5_ReturnValue, struct FVector CallFunc__1429d76ba8_ReturnValue, struct FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, struct FVector CallFunc_BreakHitResult_Location, struct FVector CallFunc_BreakHitResult_ImpactPoint, struct FVector CallFunc_BreakHitResult_Normal, struct FVector CallFunc_BreakHitResult_ImpactNormal, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, struct AActor* CallFunc_BreakHitResult_HitActor, struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, struct FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector CallFunc_BreakHitResult_TraceStart, struct FVector CallFunc_BreakHitResult_TraceEnd, struct FVector CallFunc__4efcfaba5e_ReturnValue, bool CallFunc_IsValid_ReturnValue2, float CallFunc__b748c09796_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue, struct UClass* CallFunc__f5b2c55402_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void TickSimulatePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ProcessPhysicalAnimation(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ProcessLocalOnlyFunctions(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void TEMPORARY_ProcessSprintBar(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void InitializePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void CheckWeaponCollision(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void HandleMovementParameters(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void CheckCameraUnderwater(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void SetInertia(float CallFunc__c6a9c866fe_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue2, struct FRotator CallFunc_MakeRotator_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ScopingSocketOffsetMoving(struct FVector CallFunc_GetVelocity_ReturnValue, struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, struct FVector CallFunc__b41276535f_ReturnValue, struct FVector CallFunc__b98b710f35_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, struct FVector CallFunc__29f62b02c5_ReturnValue, float CallFunc__ace9454687_ReturnValue, float CallFunc__ace9454687_ReturnValue2, float CallFunc__c6a9c866fe_ReturnValue, float CallFunc__7e0da19a6a_ReturnValue, float CallFunc__ace9454687_ReturnValue3, struct FVector CallFunc__cae9ec1747_ReturnValue, struct FVector CallFunc__29f62b02c5_ReturnValue2, float CallFunc__ace9454687_ReturnValue4, float CallFunc_Abs_ReturnValue, struct FVector CallFunc__dd99459d4b_ReturnValue, struct FVector CallFunc__29f62b02c5_ReturnValue3, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, struct FVector CallFunc__1429d76ba8_ReturnValue, struct FVector CallFunc__dd99459d4b_ReturnValue2, struct FVector CallFunc__1429d76ba8_ReturnValue2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc__4c7fe8bf18_ReturnValue, float CallFunc__80f461a53c_ReturnValue, float CallFunc_Abs_ReturnValue2, float CallFunc__4c7fe8bf18_ReturnValue2, float CallFunc_FClamp_ReturnValue, float CallFunc__ace9454687_ReturnValue5, float CallFunc__0ee1ca7908_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void AdjustCameraSwitching(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void CheckForScoping(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void push(struct FVector Delta Location, struct FVector CallFunc__806c296001_ReturnValue, struct FVector CallFunc__1429d76ba8_ReturnValue, struct FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.push // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UserConstructionScript(DelegateProperty K2Node_CreateDelegate_OutputDelegate); // Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadZero_*bcd26d28fe_40(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_*bcd26d28fe_40 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_Multiply_*bcd26d28fe_39(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_*bcd26d28fe_39 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadSix_*bcd26d28fe_38(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*bcd26d28fe_38 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadSix_*bcd26d28fe_37(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*bcd26d28fe_37 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadFour_*bcd26d28fe_36(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*bcd26d28fe_36 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadFour_*bcd26d28fe_35(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*bcd26d28fe_35 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadOne_*bcd26d28fe_34(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_*bcd26d28fe_34 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_Add_*bcd26d28fe_33(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_*bcd26d28fe_33 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_Subtract_*bcd26d28fe_32(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_*bcd26d28fe_32 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadThree_*bcd26d28fe_31(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_*bcd26d28fe_31 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadSeven_*bcd26d28fe_30(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_*bcd26d28fe_30 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadNine_*bcd26d28fe_29(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_*bcd26d28fe_29 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadEight_*bcd26d28fe_28(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_*bcd26d28fe_28 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadTwo_*bcd26d28fe_27(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_*bcd26d28fe_27 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_NumPadFive_*bcd26d28fe_26(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_*bcd26d28fe_26 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_Decimal_*bcd26d28fe_25(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_*bcd26d28fe_25 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_Divide_*bcd26d28fe_24(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_*bcd26d28fe_24 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_Comma_*bcd26d28fe_23(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_*bcd26d28fe_23 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_Period_*bcd26d28fe_22(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_*bcd26d28fe_22 // BlueprintEvent // @ game+0x20a5d0
	void InpActEvt_Semicolon_*bcd26d28fe_21(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Semicolon_*bcd26d28fe_21 // BlueprintEvent // @ game+0x20a5d0
	void OnInvulnerable(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void OnTest_SetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void OnFreeMoveMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveBeginPlay(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	void OnDecreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void OnIncreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void SetupWeaponBlueprint(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void OnTest_InspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void SpawnBulletPassByEffect(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ServerSetInvulnerability(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x20a5d0
	void NotHaveHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x20a5d0
	void NotHaveBoostItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ActivateADS_Debuff(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Cheat_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Cheat_Server_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Cheat_Give_Current_Ammo(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Cheat_RevivePlayer(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void NotHaveThrowItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x20a5d0
	void ServerFreeMove(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Server_SetActiveRagdoll(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Client_ResetMesh(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Server_HandleRagdollActor(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Server_setRagdollActorPos(struct FVector InPos); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void HaveNotAnyHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ServerSetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Client_AdjustFlySpeed(float MaxSpeed, float MaxAccel, float Deccel); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_AdjustFlySpeed // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ToggleFreeMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ToggleInvincibility(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void SimulateHeadShot(struct FTransform SpawnTransform, struct FTransform ImpactTransform); // Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x20a5d0
	void OnTakeAnyDamage_Event_1(struct AActor* DamagedActor, float Damage, struct U*0ad023d030* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTakeAnyDamage_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void OnLanded(struct FHitResult Hit); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x20a5d0
	void OnCharacterWeaponRecoil_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnCharacterWeaponRecoil_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void GiveShieldToPlayer_BP(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GiveShieldToPlayer_BP // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void Server_AttachShield(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_AttachShield // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Cheat_Server_Distribute_Loadout(struct TArray<struct FName> ItemRef); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_Distribute_Loadout // Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveTick(float DeltaSeconds); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void SetRecoilDebugMenuWidget(struct UWidget* Widget); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetRecoilDebugMenuWidget // Event|Public|BlueprintEvent // @ game+0x20a5d0
	bool ExecuteUbergraph_PlayerPawn_v2(int32 EntryPoint, bool CallFunc__1c9729ad49_ReturnValue, struct FVector K2Node_Event_Location, float K2Node_Event_BulletVelocity, float CallFunc__9e9f800a8e_ReturnValue, struct ATslWeapon_Trajectory* CallFunc__a3245a0f6e_ReturnValue, bool CallFunc__8c720203dd_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc__863609e119_ReturnValue, bool CallFunc__da3bea6fb8_ReturnValue, bool CallFunc_IsValid_ReturnValue2, struct FRotator CallFunc_K2_GetActorRotation_ReturnValue, struct FVector CallFunc__1356d9ef59_ReturnValue, struct FVector CallFunc__29f62b02c5_ReturnValue, struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc__7e0da19a6a_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc__7e0da19a6a_ReturnValue2, float CallFunc_FClamp_ReturnValue2, struct FString CallFunc__e22fa5e649_ReturnValue, struct FString CallFunc__a4f37e3e14_ReturnValue, bool CallFunc_IsValid_ReturnValue3, struct ATslWeapon_Trajectory* CallFunc__a3245a0f6e_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, bool CallFunc__863609e119_ReturnValue2, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, int32 ___int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue7, int32 CallFunc__f53d173295_ReturnValue, struct FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult, struct TArray<struct AActor*> ___object_Variable); // Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2 // HasDefaults // @ game+0x20a5d0
};

