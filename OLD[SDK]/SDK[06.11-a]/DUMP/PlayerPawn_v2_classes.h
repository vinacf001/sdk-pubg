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

	bool AIWeaponMenuInit(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AIWeaponMenuInit // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct TArray<struct FName> DistributeCurrentLoadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.DistributeCurrentLoadout // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct APlayerController* RecoilDebug_ToggleMouse(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_ToggleMouse // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool RecoilDebug_Reset(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_Reset // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct F*83215e03d0 RecoilDebug_AddDataRow(); // Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_AddDataRow // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct U*e6746d9844* BlurScopeOutside(struct TArray<struct UStaticMesh*> ScopeMeshes, struct TArray<struct UStaticMesh*> _761f03a5cc_Array); // Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Tick_PhysicalAnimation(bool CallFunc__9837ff2fb1_ReturnValue, struct FName K2Node_Select_Default, struct FVector CallFunc__dd99459d4b_ReturnValue, bool CallFunc__3c5cc3769a_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void TEMP_WeapMenu_InitShow(struct APlayerController* CallFunc__8b5701c55f_ReturnValue2, struct UW_WeaponMenu_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void FixupThirdPersonCamera(); // Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool InitBulletCam(struct ATslWeapon_Gun* CallFunc__616d27eea4_ReturnValue, struct AActor* CallFunc__3dcfe68cdd_ReturnValue, struct U*b389c20ca0* CallFunc_GetWeaponMesh_ReturnValue, bool CallFunc__05ed8812ea_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ProcessMPC(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FVector TestInspectObject(struct FVector CallFunc_BreakHitResult_TraceEnd, struct FVector CallFunc__4efcfaba5e_ReturnValue, bool CallFunc_IsValid_ReturnValue2, float CallFunc__b748c09796_ReturnValue, struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, struct TArray<struct FFormatArgumentData> _761f03a5cc_Array, struct FText CallFunc_Format_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void TickSimulatePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ProcessPhysicalAnimation(bool CallFunc__6f341141c2_ReturnValue, bool CallFunc__d95363a147_ReturnValue, struct FName CallFunc__28349543ea_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ProcessLocalOnlyFunctions(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void TEMPORARY_ProcessSprintBar(float CallFunc__385a32c547_ReturnValue, bool CallFunc__3c5cc3769a_ReturnValue, struct UW_SprintBar_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void InitializePhysicsForAccessories(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FVector CheckWeaponCollision(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float HandleMovementParameters(float CallFunc__3125d90e01_ReturnValue, float CallFunc__3125d90e01_ReturnValue2); // Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void CheckCameraUnderwater(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void SetInertia(float CallFunc__9e9f800a8e_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue2, struct FRotator CallFunc_MakeRotator_ReturnValue); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float ScopingSocketOffsetMoving(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, struct FVector CallFunc__29f62b02c5_ReturnValue, float CallFunc__ace9454687_ReturnValue3, struct FVector CallFunc__cae9ec1747_ReturnValue, struct FVector CallFunc__29f62b02c5_ReturnValue2, float CallFunc__ace9454687_ReturnValue4); // Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void AdjustCameraSwitching(); // Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void CheckForScoping(); // Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	bool push(); // Function PlayerPawn_v2.PlayerPawn_v2_C.push // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	DelegateProperty UserConstructionScript(); // Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FKey InpActEvt_NumPadZero_*bcd26d28fe_40(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_*bcd26d28fe_40 // BlueprintEvent // @ game+0x370fbc
	struct FKey InpActEvt_Multiply_*bcd26d28fe_39(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_*bcd26d28fe_39 // BlueprintEvent // @ game+0x370fbc
	struct FKey InpActEvt_NumPadSix_*bcd26d28fe_38(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*bcd26d28fe_38 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadSix_*bcd26d28fe_37(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_*bcd26d28fe_37 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadFour_*bcd26d28fe_36(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*bcd26d28fe_36 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadFour_*bcd26d28fe_35(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_*bcd26d28fe_35 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadOne_*bcd26d28fe_34(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_*bcd26d28fe_34 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_Add_*bcd26d28fe_33(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_*bcd26d28fe_33 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_Subtract_*bcd26d28fe_32(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_*bcd26d28fe_32 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadThree_*bcd26d28fe_31(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_*bcd26d28fe_31 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadSeven_*bcd26d28fe_30(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_*bcd26d28fe_30 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadNine_*bcd26d28fe_29(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_*bcd26d28fe_29 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadEight_*bcd26d28fe_28(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_*bcd26d28fe_28 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadTwo_*bcd26d28fe_27(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_*bcd26d28fe_27 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_NumPadFive_*bcd26d28fe_26(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_*bcd26d28fe_26 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_Decimal_*bcd26d28fe_25(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_*bcd26d28fe_25 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_Divide_*bcd26d28fe_24(struct FKey Key); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_*bcd26d28fe_24 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_Comma_*bcd26d28fe_23(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_*bcd26d28fe_23 // BlueprintEvent // @ game+0x370fbc
	void InpActEvt_Period_*bcd26d28fe_22(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_*bcd26d28fe_22 // BlueprintEvent // @ game+0x370fbc
	struct FKey InpActEvt_Semicolon_*bcd26d28fe_21(); // Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Semicolon_*bcd26d28fe_21 // BlueprintEvent // @ game+0x370fbc
	void OnInvulnerable(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void OnTest_SetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void OnFreeMoveMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void OnDecreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnIncreaseMaxFlyAccerleration(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration // Event|Public|BlueprintEvent // @ game+0x370fbc
	void SetupWeaponBlueprint(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnTest_InspectObject(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject // Event|Public|BlueprintEvent // @ game+0x370fbc
	float SpawnBulletPassByEffect(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ServerSetInvulnerability(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FHitResult BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x370fbc
	struct FText NotHaveHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x370fbc
	void NotHaveBoostItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ActivateADS_Debuff(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FName Cheat_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FName Cheat_Server_GiveItem(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Cheat_Give_Current_Ammo(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Cheat_RevivePlayer(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FText NotHaveThrowItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage // Event|Public|HasOutParms|BlueprintEvent // @ game+0x370fbc
	void ServerFreeMove(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Server_SetActiveRagdoll(bool InActivate); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Client_ResetMesh(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Server_HandleRagdollActor(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Server_setRagdollActorPos(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void HaveNotAnyHealItemNotifyMessage(); // Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ServerSetupWeapon(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon // Net|NetServer|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Client_AdjustFlySpeed(float MaxSpeed, float MaxAccel); // Function PlayerPawn_v2.PlayerPawn_v2_C.Client_AdjustFlySpeed // Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ToggleFreeMode(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ToggleInvincibility(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility // Event|Public|BlueprintEvent // @ game+0x370fbc
	void SimulateHeadShot(struct FTransform SpawnTransform, struct FTransform ImpactTransform); // Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x370fbc
	void OnTakeAnyDamage_Event_1(struct AActor* DamagedActor); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnTakeAnyDamage_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void OnLanded(struct FHitResult Hit); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x370fbc
	void OnCharacterWeaponRecoil_Event_1(); // Function PlayerPawn_v2.PlayerPawn_v2_C.OnCharacterWeaponRecoil_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void GiveShieldToPlayer_BP(); // Function PlayerPawn_v2.PlayerPawn_v2_C.GiveShieldToPlayer_BP // Event|Public|BlueprintEvent // @ game+0x370fbc
	void Server_AttachShield(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Server_AttachShield // Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Cheat_Server_Distribute_Loadout(); // Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_Distribute_Loadout // Net|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float ReceiveTick(); // Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x370fbc
	struct UWidget* SetRecoilDebugMenuWidget(); // Function PlayerPawn_v2.PlayerPawn_v2_C.SetRecoilDebugMenuWidget // Event|Public|BlueprintEvent // @ game+0x370fbc
	bool ExecuteUbergraph_PlayerPawn_v2(int32 ___int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue7, int32 CallFunc__f53d173295_ReturnValue, struct FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult, struct TArray<struct AActor*> ___object_Variable2, struct AInventoryFacade* CallFunc__977b93f581_ReturnValue, int32 CallFunc__436497f76a_ReturnValue, struct AActor* _5c6cfaa940_OtherActor, struct UPrimitiveComponent* _5c6cfaa940_OtherComp, struct FVector _5c6cfaa940_NormalImpulse, struct FHitResult _5c6cfaa940_Hit, bool CallFunc__1c9729ad49_ReturnValue3, bool CallFunc_IsValid_ReturnValue9, bool CallFunc__ea6b17b9f5_ReturnValue3, bool CallFunc_IsValid_ReturnValue10, bool CallFunc__ea6b17b9f5_ReturnValue17, bool CallFunc_Not_PreBool_ReturnValue13, struct FName K2Node_CustomEvent_ItemRef3, struct FName K2Node_CustomEvent_ItemRef2, bool CallFunc_IsValid_ReturnValue14, bool CallFunc_Not_PreBool_ReturnValue14, struct FName CallFunc__43f1607768_ReturnValue, bool CallFunc__ea6b17b9f5_ReturnValue19, int32 ___int_Array_Index_Variable, DelegateProperty _d8b1f23a78_OutputDelegate, struct FKey _bcd26d28fe_Key2, struct FKey _bcd26d28fe_Key3, bool CallFunc_IsValid_ReturnValue15, bool K2Node_CustomEvent_InActivate, struct ACharacter* CallFunc__22e1e03c58_ReturnValue, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, bool CallFunc__ea6b17b9f5_ReturnValue25, struct TArray<struct FFormatArgumentData> _761f03a5cc_Array5, struct FText CallFunc_Format_ReturnValue5, float K2Node_CustomEvent_MaxAccel, float K2Node_CustomEvent_Deccel, struct FTransform K2Node_Event_SpawnTransform, struct FTransform K2Node_Event_ImpactTransform, struct FVector CallFunc__1429d76ba8_ReturnValue, struct UAkComponent* CallFunc__ee958295f0_ReturnValue2, struct UAkComponent* CallFunc__ee958295f0_ReturnValue3, bool ___bool_Variable, struct TArray<struct FFormatArgumentData> _761f03a5cc_Array6, struct FText CallFunc_Format_ReturnValue6, struct APlayerController* CallFunc__8b5701c55f_ReturnValue, struct ATslBuff* CallFunc__6add995e7c_ReturnValue, struct ABP_Shield_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc__34ad69eaa1_ReturnValue, bool CallFunc__045254c93f_ReturnValue, struct ATslPlayerController* CallFunc_GetTslPlayerController_ReturnValue, bool ___bool_Variable3, struct UAnimInstance* CallFunc__c11c201962_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue21, bool CallFunc_Not_PreBool_ReturnValue22, float K2Node_Event_DeltaSeconds, struct FText CallFunc_Format_ReturnValue8, struct FText CallFunc_Format_ReturnValue9, struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData8, struct ATslWeapon_Trajectory* CallFunc__a3245a0f6e_ReturnValue3, bool CallFunc__863609e119_ReturnValue3, bool CallFunc__ea6b17b9f5_ReturnValue32, struct AGameStateBase* CallFunc_GetGameState_ReturnValue, struct ATslGameState* K2Node_DynamicCast_AsTsl_Game_State, bool CallFunc__055a659f43_ReturnValue, struct UWidget* K2Node_Event_Widget, struct UW_RecoilDebugMenu_C* K2Node_DynamicCast_AsW_Recoil_Debug_Menu, bool K2Node_DynamicCast_bSuccess5, struct APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue2, struct FRotator CallFunc__d36a44000d_ReturnValue2, bool CallFunc_IsValid_ReturnValue26, struct FVector CallFunc__1356d9ef59_ReturnValue2, struct FHitResult CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, struct FRotator CallFunc__d36a44000d_ReturnValue3, struct FVector CallFunc__1356d9ef59_ReturnValue3, struct FVector CallFunc_BreakHitResult_ImpactPoint, struct FVector CallFunc_BreakHitResult_Normal, struct FVector CallFunc_BreakHitResult_ImpactNormal, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector CallFunc_BreakHitResult_TraceStart, struct FVector CallFunc_BreakHitResult_TraceEnd, struct FVector CallFunc__29f62b02c5_ReturnValue3); // Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2 // HasDefaults // @ game+0x370fbc
};

