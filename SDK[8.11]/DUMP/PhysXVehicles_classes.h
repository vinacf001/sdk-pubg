// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x910 (Inherited: 0x3a0)
struct UVehicleAnimInstance : UAnimInstance {
	char pad_3A0[0x550]; // 0x3a0(0x550)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x8f0(0x08)
	bool *1188cc80b4; // 0x8f8(0x01)
	char pad_8F9[0x3]; // 0x8f9(0x03)
	float *151ef8a1e4; // 0x8fc(0x04)
	float *d70ad18314; // 0x900(0x04)
	float *311b5632f0; // 0x904(0x04)
	char pad_908[0x8]; // 0x908(0x08)

	void *71bbdbf9a7(); // Function PhysXVehicles.VehicleAnimInstance.*71bbdbf9a7 // Final|Native|Public|BlueprintCallable // @ game+0x6906cfc
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x458 (Inherited: 0x448)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x448(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x450(0x08)
};

// Class PhysXVehicles.VehicleWheel
// Size: 0x188 (Inherited: 0x28)
struct UVehicleWheel : UObject {
	struct UStaticMesh* *4819df7bde; // 0x28(0x08)
	bool *e1f625cc37; // 0x30(0x01)
	bool *925189f69f; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FVector Offset; // 0x34(0x0c)
	float *689db1a782; // 0x40(0x04)
	float *5939d97d0b; // 0x44(0x04)
	float Mass; // 0x48(0x04)
	float *661cd2d87a; // 0x4c(0x04)
	float SteerAngle; // 0x50(0x04)
	bool *dd74db1398; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct U*6793628d35* *6793628d35; // 0x58(0x08)
	struct U*6c05253c73* *6c05253c73; // 0x60(0x08)
	float *aad6587c23; // 0x68(0x04)
	float *f296fd9781; // 0x6c(0x04)
	float *1a2336ed0a; // 0x70(0x04)
	float *dc475cc0d5; // 0x74(0x04)
	float *dd2776432c; // 0x78(0x04)
	struct FVector *330e82fa18; // 0x7c(0x0c)
	struct FVector *78735ef217; // 0x88(0x0c)
	float *e083bfb911; // 0x94(0x04)
	float *b04ac0d2c1; // 0x98(0x04)
	float *449938e271; // 0x9c(0x04)
	float *8b9e151080; // 0xa0(0x04)
	float *fd005f6010; // 0xa4(0x04)
	float *286949dad3; // 0xa8(0x04)
	float *859979d79c; // 0xac(0x04)
	struct F*b1911e6c32 *b1911e6c32; // 0xb0(0x14)
	float *bf75bc054f; // 0xc4(0x04)
	float *ad71abcb57; // 0xc8(0x04)
	enum class ECollisionChannel *d8b22baa7f; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0xd0(0x08)
	int32 *10e583adf6; // 0xd8(0x04)
	float *71d64e4f48; // 0xdc(0x04)
	float *55a53b999a; // 0xe0(0x04)
	float *3cb73623a9; // 0xe4(0x04)
	char pad_E8[0x4]; // 0xe8(0x04)
	float *919a37ce66; // 0xec(0x04)
	float *d3c5fea5b4; // 0xf0(0x04)
	float *cf1b1f3521; // 0xf4(0x04)
	struct FVector Location; // 0xf8(0x0c)
	struct FVector OldLocation; // 0x104(0x0c)
	struct FVector Velocity; // 0x110(0x0c)
	float *b0348b7837; // 0x11c(0x04)
	char pad_120[0x68]; // 0x120(0x68)

	void *df87c0dfe0(); // Function PhysXVehicles.VehicleWheel.*df87c0dfe0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906c14
	void *3c368bd650(); // Function PhysXVehicles.VehicleWheel.*3c368bd650 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906c60
	void *617cee7820(); // Function PhysXVehicles.VehicleWheel.*617cee7820 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906d48
	void *e89224a876(); // Function PhysXVehicles.VehicleWheel.*e89224a876 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906be4
	void *d73aad7d4b(); // Function PhysXVehicles.VehicleWheel.*d73aad7d4b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906bfc
	void *8d12ba413b(); // Function PhysXVehicles.VehicleWheel.*8d12ba413b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906c84
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x530 (Inherited: 0x280)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char pad_280[0x14]; // 0x280(0x14)
	char *7ea7595287 : 1; // 0x294(0x01)
	char pad_294_1 : 7; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct TArray<bool> *d0b6cdd7cf; // 0x298(0x10)
	struct TArray<struct F*7cc0cfa72d> *fe8b709711; // 0x2a8(0x10)
	struct TArray<struct F*ea4c7408d4> *f9ef5765c9; // 0x2b8(0x10)
	float Mass; // 0x2c8(0x04)
	float DragCoefficient; // 0x2cc(0x04)
	float *b1c44670c5; // 0x2d0(0x04)
	float *13d38b6cf8; // 0x2d4(0x04)
	bool *9aab3e5876; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float *8190616e48; // 0x2dc(0x04)
	float *d7f5471743; // 0x2e0(0x04)
	float *204dcfff2f; // 0x2e4(0x04)
	float *6e26ea350f; // 0x2e8(0x04)
	struct FVector *f32564de48; // 0x2ec(0x0c)
	float *d8282f3a35; // 0x2f8(0x04)
	float *c62d46b5a1; // 0x2fc(0x04)
	float *2d87cece99; // 0x300(0x04)
	float *5a55bc4d87; // 0x304(0x04)
	float *86c23d5adb; // 0x308(0x04)
	float *7c2ae7810b; // 0x30c(0x04)
	int32 LowForwardSpeedSubStepCount; // 0x310(0x04)
	int32 HighForwardSpeedSubStepCount; // 0x314(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x318(0x10)
	char pad_328[0x18]; // 0x328(0x18)
	char bUseRVOAvoidance : 1; // 0x340(0x01)
	char pad_340_1 : 7; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float RVOAvoidanceRadius; // 0x344(0x04)
	float RVOAvoidanceHeight; // 0x348(0x04)
	float AvoidanceConsiderationRadius; // 0x34c(0x04)
	float RVOSteeringStep; // 0x350(0x04)
	float RVOThrottleStep; // 0x354(0x04)
	int32 AvoidanceUID; // 0x358(0x04)
	struct F*056e48c16d AvoidanceGroup; // 0x35c(0x04)
	struct F*056e48c16d GroupsToAvoid; // 0x360(0x04)
	struct F*056e48c16d GroupsToIgnore; // 0x364(0x04)
	float AvoidanceWeight; // 0x368(0x04)
	struct FVector *2a911bb8e7; // 0x36c(0x0c)
	char pad_378[0x4]; // 0x378(0x04)
	struct F*9ec7b26f1e *f5d1926001; // 0x37c(0x1c)
	char pad_398[0xf8]; // 0x398(0xf8)
	float *c1dd423880; // 0x490(0x04)
	float *e533d87370; // 0x494(0x04)
	float *edb9c9a0f3; // 0x498(0x04)
	char *08b9fed733 : 1; // 0x49c(0x01)
	char *e7f2598fe0 : 1; // 0x49c(0x01)
	char *4f50b0f865 : 1; // 0x49c(0x01)
	char pad_49C_3 : 5; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	float *ab6237337a; // 0x4a0(0x04)
	float *fbab34e10a; // 0x4a4(0x04)
	float *044220df45; // 0x4a8(0x04)
	int32 *049b850c5c; // 0x4ac(0x04)
	float *5a7d8abdb4; // 0x4b0(0x04)
	float *303ff826d6; // 0x4b4(0x04)
	float BrakeInput; // 0x4b8(0x04)
	float *1d05c95215; // 0x4bc(0x04)
	float *daccee66a6; // 0x4c0(0x04)
	float *85bc4bbd9f; // 0x4c4(0x04)
	float *842f5b251a; // 0x4c8(0x04)
	struct F*a707bb3f5b *0d22dc0236; // 0x4cc(0x08)
	struct F*a707bb3f5b *8cdce845d0; // 0x4d4(0x08)
	struct F*a707bb3f5b *08b3a521e6; // 0x4dc(0x08)
	struct F*a707bb3f5b *366e6bff74; // 0x4e4(0x08)
	char *628968668d : 1; // 0x4ec(0x01)
	char pad_4EC_1 : 7; // 0x4ec(0x01)
	char pad_4ED[0x43]; // 0x4ed(0x43)

	void *8fa8bad4f7(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*8fa8bad4f7 // Final|Native|Public|BlueprintCallable // @ game+0x69077d4
	void *b6d05d82b9(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b6d05d82b9 // Final|Native|Public|BlueprintCallable // @ game+0x6907a10
	void *396c3c50d5(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*396c3c50d5 // Final|Native|Public|BlueprintCallable // @ game+0x690765c
	void *715ed31ca8(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*715ed31ca8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906b80
	void *a5cf09965c(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*a5cf09965c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906cd4
	void *3381ffeeb0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*3381ffeeb0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906c38
	void *5dde366a98(int32 GearNum); // Function PhysXVehicles.WheeledVehicleMovementComponent.*5dde366a98 // Final|Native|Public|BlueprintCallable // @ game+0x6907884
	void *147ef7dd14(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*147ef7dd14 // Final|Native|Public|BlueprintCallable // @ game+0x6906f3c
	void *32b30e1f68(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*32b30e1f68 // Final|Native|Public|BlueprintCallable // @ game+0x6907064
	void OnRep_TirePunctured(); // Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured // Native|Public // @ game+0x6906d60
	void *ecfedd45dd(float Param0, float Param2, int32 Param4); // Function PhysXVehicles.WheeledVehicleMovementComponent.*ecfedd45dd // Net|Native|Event|Protected|NetServer|NetValidate // @ game+0xc3e524
	void *d87d4eadbf(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*d87d4eadbf // Final|Native|Public|BlueprintCallable // @ game+0x690740c
	void *636d457870(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*636d457870 // Final|Native|Public|BlueprintCallable // @ game+0x6907370
	void *7783a30923(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*7783a30923 // Final|Native|Public|BlueprintCallable // @ game+0x69072d4
	void *ad10223b05(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*ad10223b05 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906b68
	void *9fd6ee3699(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*9fd6ee3699 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6906fc8
	void *229be1238c(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*229be1238c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906b98
	void *c321d72587(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c321d72587 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69075c0
	void *95968aeab4(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*95968aeab4 // Final|Native|Public|BlueprintCallable // @ game+0x6907960
	void *a29777516d(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*a29777516d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6907498
	void GetVelocity(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetVelocity // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6906d20
	void *9258fe5724(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*9258fe5724 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906b30
	void *0c76887b2d(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*0c76887b2d // Final|Native|Public|BlueprintCallable // @ game+0x6906e54
	void *b86a3f4bf4(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b86a3f4bf4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6906c9c
	void *e20c938d2b(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*e20c938d2b // Final|Native|Public|BlueprintCallable // @ game+0x6907534
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x690 (Inherited: 0x530)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct F*a3e4905c7f EngineSetup; // 0x528(0x90)
	struct F*b1d66bf7c5 *914b705e34; // 0x5b8(0x1c)
	struct FVehicleTransmissionData *69aca043d3; // 0x5d8(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x608(0x78)
	float *b47b7125bd; // 0x680(0x04)
	char pad_688[0x8]; // 0x688(0x08)
};

// Class PhysXVehicles.*6c05253c73
// Size: 0x80 (Inherited: 0x30)
struct U*6c05253c73 : UDataAsset {
	float *9af29b21eb; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*d689347095> *eb3e86b304; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct F*a52459bea9 *0fa28a579a; // 0x50(0x28)
	bool *61077c7081; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *8e16d07d18; // 0x7c(0x04)
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x530 (Inherited: 0x530)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	void *d4bd1f0aa9(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*d4bd1f0aa9 // Final|Native|Public|BlueprintCallable // @ game+0x69076f4
	float *b5ac1b1f70(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*b5ac1b1f70 // Final|Native|Public|BlueprintCallable // @ game+0x69071f4
	float *fdd8012775(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*fdd8012775 // Final|Native|Public|BlueprintCallable // @ game+0x6907114
};

