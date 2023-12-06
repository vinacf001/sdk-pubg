// BlueprintGeneratedClass WeapKar98k.WeapKar98k_C
// Size: 0x1080 (Inherited: 0x1080)
struct AWeapKar98k_C : ADefaultRifleSetting_C {
	struct TMap<float, struct UClass*> *d027e00feb; // 0xf68(0x50)
	struct FName *9ed922e5aa; // 0xfd8(0x08)
	float TrajectoryGravityZ; // 0xfe4(0x04)
	struct FMulticastDelegate OnWeaponRecoil; // 0xff0(0x10)
	bool *cacfecc15a; // 0x1018(0x01)
	struct UClass* *220ee606ae; // 0x1020(0x08)
	struct UClass* *2a8465bfef; // 0x1028(0x08)
	float *d6b6bf7e4a; // 0x1030(0x04)
	struct UParticleSystem* *da32db4b42; // 0x1038(0x08)
	struct UWeaponTrajectoryData* WeaponTrajectoryData; // 0x1048(0x08)

	void *519ad89da6(); // Function TslGame.TslWeapon_Trajectory.*519ad89da6 // Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults // @ game+0x5e293dc
	struct FVector *8780c893fd(); // Function TslGame.TslWeapon_Trajectory.*8780c893fd // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|Const|NetValidate // @ game+0x5e22d9c
	bool *0d1deb946f(); // Function TslGame.TslWeapon_Trajectory.*0d1deb946f // Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults // @ game+0x75b2f0
	struct AActor* *719810178c(); // Function TslGame.TslWeapon_Trajectory.*719810178c // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x5e21f68
	struct FRotator *5bcb481f5e(); // Function TslGame.TslWeapon_Trajectory.*5bcb481f5e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e165ac
	bool *fa2428d214(int32 Param16, int32 Param17, struct FVector Param18, struct FVector Param19, bool Param24, struct FVector Param25, float Param26, struct FVector Param27, struct FVector Param31, struct FVector Param32, struct FVector Param33, struct FVector_NetQuantizeNormal Param34, struct FVector Param39, float Param40, struct FVector Param41, float Param42); // Function TslGame.TslWeapon_Trajectory.*fa2428d214 // Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate // @ game+0x5e20978
	bool *b1225afff9(); // Function TslGame.TslWeapon_Trajectory.*b1225afff9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e1ac20
	struct FVector *da23286fad(); // Function TslGame.TslWeapon_Trajectory.*da23286fad // Net|Native|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x5e2368c
	struct F*83215e03d0 *2e97c608d8(); // Function TslGame.TslWeapon_Trajectory.*2e97c608d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e18f74
	struct FVector *e8dba45f36(); // Function TslGame.TslWeapon_Trajectory.*e8dba45f36 // Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults // @ game+0x5e292f8
	bool *863609e119(); // Function TslGame.TslWeapon_Trajectory.*863609e119 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xb87394
	struct FAttackId *f05fb0a57b(); // Function TslGame.TslWeapon_Trajectory.*f05fb0a57b // Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults // @ game+0x5e29518
	float *543c9488c5(); // Function TslGame.TslWeapon_Trajectory.*543c9488c5 // Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5dc7fc8
	float *21387c75e3(); // Function TslGame.TslWeapon_Trajectory.*21387c75e3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5dea348
	struct ATslCharacter* *645227d558(); // Function TslGame.TslWeapon_Trajectory.*645227d558 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x5e220dc
	void *51a4c4a58a(struct FVector Param0, struct FVector Param1); // Function TslGame.TslWeapon_Trajectory.*51a4c4a58a // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|Const|NetValidate // @ game+0x5e229e0
	void *e2cf38fe0c(int32 Param0); // Function TslGame.TslWeapon_Trajectory.*e2cf38fe0c // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x5e20504
	void *91686ae310(); // Function TslGame.TslWeapon_Trajectory.*91686ae310 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e18f3c
	void *151ae6b0b3(struct FVector2D ReturnValue); // Function TslGame.TslWeapon_Trajectory.*151ae6b0b3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e16c7c
	void *a534a0a1d9(struct FVector Param0); // Function TslGame.TslWeapon_Trajectory.*a534a0a1d9 // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x5e206ac
	void OnRep_WeaponSpread(); // Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread // Final|Native|Protected // @ game+0xf5b4c4
	void *8ed81e2211(float ReturnValue); // Function TslGame.TslWeapon_Trajectory.*8ed81e2211 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e16ca4
	void *689292ea86(struct FHitResult Param0); // Function TslGame.TslWeapon_Trajectory.*689292ea86 // Net|Native|Event|NetMulticast|Protected|HasDefaults // @ game+0x751b6c
	void *b2d1829b71(); // Function TslGame.TslWeapon_Trajectory.*b2d1829b71 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e16578
	void *6f942f65f0(struct FHitResult Param0, struct F*78a50b9ae4 Param1, struct AActor* Param2); // Function TslGame.TslWeapon_Trajectory.*6f942f65f0 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x5e1468c
	void *7f796a7aed(); // Function TslGame.TslWeapon_Trajectory.*7f796a7aed // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x5e22c90
	float *3b2e254f77(); // Function TslGame.TslWeapon_Trajectory.*3b2e254f77 // Net|Native|Event|Protected|NetServer|NetValidate // @ game+0x5e20804
	struct FVector *e049f0f08d(); // Function TslGame.TslWeapon_Trajectory.*e049f0f08d // Final|Native|Private|HasDefaults // @ game+0x5e1f7cc
	struct FVector *ea6ab9daa9(); // Function TslGame.TslWeapon_Trajectory.*ea6ab9daa9 // Net|NetReliableNative|Event|Protected|HasDefaults|NetClient|Const // @ game+0x5e14838
	struct FVector *3a8533bdaf(); // Function TslGame.TslWeapon_Trajectory.*3a8533bdaf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5e16f24
	float *bfb59881b8(); // Function TslGame.TslWeapon_Trajectory.*bfb59881b8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e16ce8
	int32 *50f5e1cc98(); // Function TslGame.TslWeapon_Trajectory.*50f5e1cc98 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e18f5c
};

