// BlueprintGeneratedClass DefaultRifleSetting.DefaultRifleSetting_C
// Size: 0x1080 (Inherited: 0x1080)
struct ADefaultRifleSetting_C : ATslWeapon_Trajectory {
	float TrajectoryGravityZ; // 0xf6c(0x04)
	struct UParticleSystem* *da32db4b42; // 0xf78(0x08)
	float *d6b6bf7e4a; // 0xf80(0x04)
	struct FMulticastDelegate OnWeaponRecoil; // 0xf90(0x10)
	struct FName *9ed922e5aa; // 0xfb0(0x08)
	bool *cacfecc15a; // 0xfc8(0x01)
	struct UClass* *220ee606ae; // 0xfd0(0x08)
	struct UClass* *2a8465bfef; // 0xfd8(0x08)
	struct TMap<float, struct UClass*> *d027e00feb; // 0xfe0(0x50)
	struct UWeaponTrajectoryData* WeaponTrajectoryData; // 0x1040(0x08)

	void *ea6ab9daa9(); // Function TslGame.TslWeapon_Trajectory.*ea6ab9daa9 // Net|NetReliableNative|Event|Protected|HasDefaults|NetClient|Const // @ game+0x5b17348
	void *91686ae310(struct F*92441717b3 ReturnValue); // Function TslGame.TslWeapon_Trajectory.*91686ae310 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5b1ba10
	void *f05fb0a57b(struct FVector Param0, struct FVector Param1, struct FAttackId Param2); // Function TslGame.TslWeapon_Trajectory.*f05fb0a57b // Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults // @ game+0x5b2bf38
	void *2e97c608d8(struct F*83215e03d0 ReturnValue); // Function TslGame.TslWeapon_Trajectory.*2e97c608d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5b1ba48
	void *6f942f65f0(struct FHitResult Param0, struct F*78a50b9ae4 Param1, struct AActor* Param2, struct ATslPlayerState* Param3); // Function TslGame.TslWeapon_Trajectory.*6f942f65f0 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x5b1719c
	void *b1225afff9(bool ReturnValue); // Function TslGame.TslWeapon_Trajectory.*b1225afff9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5b1d664
	void *a534a0a1d9(struct FVector Param0, struct FVector Param1, struct FAttackId Param2); // Function TslGame.TslWeapon_Trajectory.*a534a0a1d9 // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x5b230cc
	void *da23286fad(struct FVector Param0); // Function TslGame.TslWeapon_Trajectory.*da23286fad // Net|Native|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x5b260ac
	void *7f796a7aed(struct FAttackId Param0, int32 Param1); // Function TslGame.TslWeapon_Trajectory.*7f796a7aed // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x5b256b0
	void OnRep_WeaponSpread(float Param0); // Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread // Final|Native|Protected // @ game+0xeae1e0
	void *51a4c4a58a(struct FVector Param0, struct FVector Param1); // Function TslGame.TslWeapon_Trajectory.*51a4c4a58a // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|Const|NetValidate // @ game+0x5b25400
	void *719810178c(struct FHitResult Param0, struct FVector2D Param1, struct AActor* Param2); // Function TslGame.TslWeapon_Trajectory.*719810178c // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x5b24988
	void *8780c893fd(struct FVector Param0, struct FVector Param1); // Function TslGame.TslWeapon_Trajectory.*8780c893fd // Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|Const|NetValidate // @ game+0x5b257bc
	void *8ed81e2211(float ReturnValue); // Function TslGame.TslWeapon_Trajectory.*8ed81e2211 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5b1979c
	void *645227d558(struct ATslCharacter* Param0); // Function TslGame.TslWeapon_Trajectory.*645227d558 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x5b24afc
	void *e8dba45f36(struct FVector Param0, struct FVector Param1); // Function TslGame.TslWeapon_Trajectory.*e8dba45f36 // Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults // @ game+0x5b2bd18
	void *863609e119(bool ReturnValue); // Function TslGame.TslWeapon_Trajectory.*863609e119 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x33a5e4
	void *543c9488c5(enum class EAnimStance Stance, float ReturnValue); // Function TslGame.TslWeapon_Trajectory.*543c9488c5 // Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5acac90
	void *0d1deb946f(struct FHitResult Param0, struct FVector Param1, bool Param2); // Function TslGame.TslWeapon_Trajectory.*0d1deb946f // Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults // @ game+0xc9b6ec
	void *21387c75e3(float ReturnValue); // Function TslGame.TslWeapon_Trajectory.*21387c75e3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5aeced4
	void *50f5e1cc98(int32 ReturnValue); // Function TslGame.TslWeapon_Trajectory.*50f5e1cc98 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5b1ba30
	void *519ad89da6(struct FVector Param0, struct FVector Param1, float Param2); // Function TslGame.TslWeapon_Trajectory.*519ad89da6 // Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults // @ game+0x5b2bdfc
	void *b2d1829b71(struct FVector ReturnValue); // Function TslGame.TslWeapon_Trajectory.*b2d1829b71 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5b19070
	void *e2cf38fe0c(); // Function TslGame.TslWeapon_Trajectory.*e2cf38fe0c // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x5b22f24
	void *689292ea86(); // Function TslGame.TslWeapon_Trajectory.*689292ea86 // Net|Native|Event|NetMulticast|Protected|HasDefaults // @ game+0x7ea7a4
	void *3b2e254f77(); // Function TslGame.TslWeapon_Trajectory.*3b2e254f77 // Net|Native|Event|Protected|NetServer|NetValidate // @ game+0x5b23224
	void *fa2428d214(bool Param49, int32 Param50, bool Param51, bool Param52, bool Param53, bool Param54); // Function TslGame.TslWeapon_Trajectory.*fa2428d214 // Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate // @ game+0x5b23398
	void *e049f0f08d(struct FVector Param0); // Function TslGame.TslWeapon_Trajectory.*e049f0f08d // Final|Native|Private|HasDefaults // @ game+0x5b221ec
	void *5bcb481f5e(struct FRotator ReturnValue); // Function TslGame.TslWeapon_Trajectory.*5bcb481f5e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5b190a4
	void *3a8533bdaf(struct FVector ReturnValue); // Function TslGame.TslWeapon_Trajectory.*3a8533bdaf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5b19a1c
	void *bfb59881b8(float ReturnValue); // Function TslGame.TslWeapon_Trajectory.*bfb59881b8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5b197e0
	void *151ae6b0b3(struct FVector2D ReturnValue); // Function TslGame.TslWeapon_Trajectory.*151ae6b0b3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x5b19774
};

