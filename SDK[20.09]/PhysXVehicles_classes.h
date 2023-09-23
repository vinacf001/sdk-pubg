// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x910 (Inherited: 0x398)
struct UVehicleAnimInstance : UAnimInstance {
	char pad_398[0x558]; // 0x398(0x558)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x8f0(0x08)
	bool *d24c9b4d9d; // 0x8f8(0x01)
	char pad_8F9[0x3]; // 0x8f9(0x03)
	float *fca725b873; // 0x8fc(0x04)
	float *e669078311; // 0x900(0x04)
	float *fd930d530a; // 0x904(0x04)
	char pad_908[0x8]; // 0x908(0x08)

	void *a95919746e(); // Function PhysXVehicles.VehicleAnimInstance.*a95919746e // Final|Native|Public|BlueprintCallable // @ game+0x67941b0
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x460 (Inherited: 0x450)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x450(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x458(0x08)
};

// Class PhysXVehicles.VehicleWheel
// Size: 0x188 (Inherited: 0x28)
struct UVehicleWheel : UObject {
	struct UStaticMesh* *251081a678; // 0x28(0x08)
	bool *17d4d3b3b3; // 0x30(0x01)
	bool *729c3cfb3d; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FVector Offset; // 0x34(0x0c)
	float *4dc7b8ae10; // 0x40(0x04)
	float *3d58d8ef5c; // 0x44(0x04)
	float Mass; // 0x48(0x04)
	float *c5a8821c46; // 0x4c(0x04)
	float SteerAngle; // 0x50(0x04)
	bool *f39997e56d; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct U*3ce513432f* *3ce513432f; // 0x58(0x08)
	struct U*704f195cdf* *704f195cdf; // 0x60(0x08)
	float *083638bc05; // 0x68(0x04)
	float *54258c7f2e; // 0x6c(0x04)
	float *1f51661eec; // 0x70(0x04)
	float *07b0901c38; // 0x74(0x04)
	float *3793b7728f; // 0x78(0x04)
	struct FVector *1d495e0775; // 0x7c(0x0c)
	struct FVector *ad07d9845c; // 0x88(0x0c)
	float *5c766f5ade; // 0x94(0x04)
	float *10d1d5e7d7; // 0x98(0x04)
	float *bc963aef23; // 0x9c(0x04)
	float *acf61332b6; // 0xa0(0x04)
	float *34aaf30246; // 0xa4(0x04)
	float *9b3ca1c84f; // 0xa8(0x04)
	float *4d823fe5b7; // 0xac(0x04)
	struct F*2df6460ee3 *2df6460ee3; // 0xb0(0x14)
	float *1b05d75486; // 0xc4(0x04)
	float *a42cf5e101; // 0xc8(0x04)
	enum class ECollisionChannel *83971b04cd; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0xd0(0x08)
	int32 *11c862bc5a; // 0xd8(0x04)
	float *944b05417f; // 0xdc(0x04)
	float *66531e88d3; // 0xe0(0x04)
	float *60e77847c8; // 0xe4(0x04)
	char pad_E8[0x4]; // 0xe8(0x04)
	float *966b0b31b5; // 0xec(0x04)
	float *44ad2d0e29; // 0xf0(0x04)
	float *fcf9a7cff6; // 0xf4(0x04)
	struct FVector Location; // 0xf8(0x0c)
	struct FVector OldLocation; // 0x104(0x0c)
	struct FVector Velocity; // 0x110(0x0c)
	float *95c32983e5; // 0x11c(0x04)
	char pad_120[0x68]; // 0x120(0x68)

	void *b2b95cf3d5(); // Function PhysXVehicles.VehicleWheel.*b2b95cf3d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6794138
	void *169e8cd187(); // Function PhysXVehicles.VehicleWheel.*169e8cd187 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67940b0
	void *622df17385(); // Function PhysXVehicles.VehicleWheel.*622df17385 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67941fc
	void *9bdd770d31(); // Function PhysXVehicles.VehicleWheel.*9bdd770d31 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6794098
	void *8b906954bb(); // Function PhysXVehicles.VehicleWheel.*8b906954bb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6794114
	void *13622fd4ee(); // Function PhysXVehicles.VehicleWheel.*13622fd4ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67940c8
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x530 (Inherited: 0x280)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char pad_280[0x14]; // 0x280(0x14)
	char *7cc9de4582 : 1; // 0x294(0x01)
	char pad_294_1 : 7; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct TArray<bool> *0a7df20e24; // 0x298(0x10)
	struct TArray<struct F*ebd8454d75> *86ed86b164; // 0x2a8(0x10)
	struct TArray<struct F*1e93597ec8> *f63712ee4c; // 0x2b8(0x10)
	float Mass; // 0x2c8(0x04)
	float DragCoefficient; // 0x2cc(0x04)
	float *32af9036e0; // 0x2d0(0x04)
	float *12a418d350; // 0x2d4(0x04)
	bool *f68a4d2539; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float *5c7c544285; // 0x2dc(0x04)
	float *d874af96b9; // 0x2e0(0x04)
	float *95370f269f; // 0x2e4(0x04)
	float *ede5384912; // 0x2e8(0x04)
	struct FVector *4b7f3b3925; // 0x2ec(0x0c)
	float *e73d98409e; // 0x2f8(0x04)
	float *e86fc84258; // 0x2fc(0x04)
	float *f26fe44b3d; // 0x300(0x04)
	float *ae22b727e7; // 0x304(0x04)
	float *9010a424aa; // 0x308(0x04)
	float *6a10976da2; // 0x30c(0x04)
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
	struct F*4c8082789d AvoidanceGroup; // 0x35c(0x04)
	struct F*4c8082789d GroupsToAvoid; // 0x360(0x04)
	struct F*4c8082789d GroupsToIgnore; // 0x364(0x04)
	float AvoidanceWeight; // 0x368(0x04)
	struct FVector *2aeb3bd7b1; // 0x36c(0x0c)
	char pad_378[0x4]; // 0x378(0x04)
	struct F*cefae821e6 *3eb4d48483; // 0x37c(0x1c)
	char pad_398[0xf8]; // 0x398(0xf8)
	float *3d3ae110da; // 0x490(0x04)
	float *37f0289bfe; // 0x494(0x04)
	float *a626b00f54; // 0x498(0x04)
	char *e50c2a2975 : 1; // 0x49c(0x01)
	char *a6e497d4f5 : 1; // 0x49c(0x01)
	char *6a6d06678d : 1; // 0x49c(0x01)
	char pad_49C_3 : 5; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	float *62d6eb897e; // 0x4a0(0x04)
	float *1a9cc1937e; // 0x4a4(0x04)
	float *5f64e6bc81; // 0x4a8(0x04)
	int32 *2251157353; // 0x4ac(0x04)
	float *34102327b8; // 0x4b0(0x04)
	float *96c7307160; // 0x4b4(0x04)
	float BrakeInput; // 0x4b8(0x04)
	float *8dd560971b; // 0x4bc(0x04)
	float *4b4dc38ac3; // 0x4c0(0x04)
	float *a48e3df6d1; // 0x4c4(0x04)
	float *76ece5c979; // 0x4c8(0x04)
	struct F*bdf082e32e *c6daf71cb3; // 0x4cc(0x08)
	struct F*bdf082e32e *c9212502bd; // 0x4d4(0x08)
	struct F*bdf082e32e *f43a206a7b; // 0x4dc(0x08)
	struct F*bdf082e32e *30de0de976; // 0x4e4(0x08)
	char *0dbc1fe19f : 1; // 0x4ec(0x01)
	char pad_4EC_1 : 7; // 0x4ec(0x01)
	char pad_4ED[0x43]; // 0x4ed(0x43)

	void *724cefc729(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*724cefc729 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67941d4
	void *84929fc112(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*84929fc112 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6794cdc
	void *c8138f380f(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c8138f380f // Final|Native|Public|BlueprintCallable // @ game+0x679507c
	void *11603f3271(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*11603f3271 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6794bb4
	void *6711196e50(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*6711196e50 // Final|Native|Public|BlueprintCallable // @ game+0x6794d78
	void *498e7f603b(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*498e7f603b // Final|Native|Public|BlueprintCallable // @ game+0x6794a8c
	void *326fc8e4df(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*326fc8e4df // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67940ec
	void *9edb794e7a(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*9edb794e7a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679404c
	void *cd65943cf6(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*cd65943cf6 // Final|Native|Public|BlueprintCallable // @ game+0x679512c
	void *2c03648be5(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*2c03648be5 // Final|Native|Public|BlueprintCallable // @ game+0x6794570
	void *937341792a(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*937341792a // Final|Native|Public|BlueprintCallable // @ game+0x6794fa0
	int32 *bdd033d741(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*bdd033d741 // Net|Native|Event|Protected|NetServer|NetValidate // @ game+0x6794308
	void *8381acd31f(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*8381acd31f // Final|Native|Public|BlueprintCallable // @ game+0x6794b28
	void *b32b5ec1b0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b32b5ec1b0 // Final|Native|Public|BlueprintCallable // @ game+0x6794658
	void *063934e150(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*063934e150 // Final|Native|Public|BlueprintCallable // @ game+0x67949f0
	void *59771a8f0f(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*59771a8f0f // Final|Native|Public|BlueprintCallable // @ game+0x6794780
	void *d227cb1c04(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*d227cb1c04 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6794188
	void *86f0adc364(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*86f0adc364 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6794034
	void *60ff66bd47(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*60ff66bd47 // Final|Native|Public|BlueprintCallable // @ game+0x6794c50
	void *c9146df6e9(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c9146df6e9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6793fe4
	void *9c4d7de372(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*9c4d7de372 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679401c
	void OnRep_TirePunctured(); // Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured // Native|Public // @ game+0x6794214
	void *b7bddfd0e0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b7bddfd0e0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6794150
	void *fb06094432(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*fb06094432 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67946e4
	void *38ff5fe855(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*38ff5fe855 // Final|Native|Public|BlueprintCallable // @ game+0x6794ef0
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x690 (Inherited: 0x530)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct F*e2734b7252 EngineSetup; // 0x528(0x90)
	struct F*5d902b5339 *5b5cbbc950; // 0x5b8(0x1c)
	struct FVehicleTransmissionData *e30eb4c9f5; // 0x5d8(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x608(0x78)
	float *ed5bca9206; // 0x680(0x04)
	char pad_688[0x8]; // 0x688(0x08)
};

// Class PhysXVehicles.*704f195cdf
// Size: 0x80 (Inherited: 0x30)
struct U*704f195cdf : UDataAsset {
	float *7b5d5a514f; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*b469a3281a> *a50a4cf3a3; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct F*ee089b9d28 *fe17edd0dd; // 0x50(0x28)
	bool *790593cf98; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *3bc861b640; // 0x7c(0x04)
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x530 (Inherited: 0x530)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {
	char *7cc9de4582 : 1; // 0x294(0x01)
	struct TArray<bool> *0a7df20e24; // 0x298(0x10)
	struct TArray<struct F*ebd8454d75> *86ed86b164; // 0x2a8(0x10)
	struct TArray<struct F*1e93597ec8> *f63712ee4c; // 0x2b8(0x10)
	float Mass; // 0x2c8(0x04)
	float DragCoefficient; // 0x2cc(0x04)
	float *32af9036e0; // 0x2d0(0x04)
	float *12a418d350; // 0x2d4(0x04)
	bool *f68a4d2539; // 0x2d8(0x01)
	float *5c7c544285; // 0x2dc(0x04)
	float *d874af96b9; // 0x2e0(0x04)
	float *95370f269f; // 0x2e4(0x04)
	float *ede5384912; // 0x2e8(0x04)
	struct FVector *4b7f3b3925; // 0x2ec(0x0c)
	float *e73d98409e; // 0x2f8(0x04)
	float *e86fc84258; // 0x2fc(0x04)
	float *f26fe44b3d; // 0x300(0x04)
	float *ae22b727e7; // 0x304(0x04)
	float *9010a424aa; // 0x308(0x04)
	float *6a10976da2; // 0x30c(0x04)
	int32 LowForwardSpeedSubStepCount; // 0x310(0x04)
	int32 HighForwardSpeedSubStepCount; // 0x314(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x318(0x10)
	char bUseRVOAvoidance : 1; // 0x340(0x01)
	float RVOAvoidanceRadius; // 0x344(0x04)
	float RVOAvoidanceHeight; // 0x348(0x04)
	float AvoidanceConsiderationRadius; // 0x34c(0x04)
	float RVOSteeringStep; // 0x350(0x04)
	float RVOThrottleStep; // 0x354(0x04)
	int32 AvoidanceUID; // 0x358(0x04)
	struct F*4c8082789d AvoidanceGroup; // 0x35c(0x04)
	struct F*4c8082789d GroupsToAvoid; // 0x360(0x04)
	struct F*4c8082789d GroupsToIgnore; // 0x364(0x04)
	float AvoidanceWeight; // 0x368(0x04)
	struct FVector *2aeb3bd7b1; // 0x36c(0x0c)
	struct F*cefae821e6 *3eb4d48483; // 0x37c(0x1c)
	float *3d3ae110da; // 0x490(0x04)
	float *37f0289bfe; // 0x494(0x04)
	float *a626b00f54; // 0x498(0x04)
	char *e50c2a2975 : 1; // 0x49c(0x01)
	char *a6e497d4f5 : 1; // 0x49c(0x01)
	char *6a6d06678d : 1; // 0x49c(0x01)
	float *62d6eb897e; // 0x4a0(0x04)
	float *1a9cc1937e; // 0x4a4(0x04)
	float *5f64e6bc81; // 0x4a8(0x04)
	int32 *2251157353; // 0x4ac(0x04)
	float *34102327b8; // 0x4b0(0x04)
	float *96c7307160; // 0x4b4(0x04)
	float BrakeInput; // 0x4b8(0x04)
	float *8dd560971b; // 0x4bc(0x04)
	float *4b4dc38ac3; // 0x4c0(0x04)
	float *a48e3df6d1; // 0x4c4(0x04)
	float *76ece5c979; // 0x4c8(0x04)
	struct F*bdf082e32e *c6daf71cb3; // 0x4cc(0x08)
	struct F*bdf082e32e *c9212502bd; // 0x4d4(0x08)
	struct F*bdf082e32e *f43a206a7b; // 0x4dc(0x08)
	struct F*bdf082e32e *30de0de976; // 0x4e4(0x08)
	char *0dbc1fe19f : 1; // 0x4ec(0x01)

	void *724cefc729(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*724cefc729 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67941d4
	void *84929fc112(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*84929fc112 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6794cdc
	void *c8138f380f(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c8138f380f // Final|Native|Public|BlueprintCallable // @ game+0x679507c
	void *11603f3271(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*11603f3271 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6794bb4
	void *6711196e50(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*6711196e50 // Final|Native|Public|BlueprintCallable // @ game+0x6794d78
	void *498e7f603b(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*498e7f603b // Final|Native|Public|BlueprintCallable // @ game+0x6794a8c
	void *326fc8e4df(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*326fc8e4df // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67940ec
	void *9edb794e7a(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*9edb794e7a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679404c
	void *cd65943cf6(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*cd65943cf6 // Final|Native|Public|BlueprintCallable // @ game+0x679512c
	void *2c03648be5(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*2c03648be5 // Final|Native|Public|BlueprintCallable // @ game+0x6794570
	void *937341792a(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*937341792a // Final|Native|Public|BlueprintCallable // @ game+0x6794fa0
	int32 *bdd033d741(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*bdd033d741 // Net|Native|Event|Protected|NetServer|NetValidate // @ game+0x6794308
	void *8381acd31f(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*8381acd31f // Final|Native|Public|BlueprintCallable // @ game+0x6794b28
	void *b32b5ec1b0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b32b5ec1b0 // Final|Native|Public|BlueprintCallable // @ game+0x6794658
	void *063934e150(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*063934e150 // Final|Native|Public|BlueprintCallable // @ game+0x67949f0
	void *59771a8f0f(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*59771a8f0f // Final|Native|Public|BlueprintCallable // @ game+0x6794780
	void *d227cb1c04(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*d227cb1c04 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6794188
	void *86f0adc364(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*86f0adc364 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6794034
	void *60ff66bd47(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*60ff66bd47 // Final|Native|Public|BlueprintCallable // @ game+0x6794c50
	void *c9146df6e9(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c9146df6e9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6793fe4
	void *9c4d7de372(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*9c4d7de372 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679401c
	void OnRep_TirePunctured(); // Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured // Native|Public // @ game+0x6794214
	void *b7bddfd0e0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b7bddfd0e0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6794150
	void *fb06094432(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*fb06094432 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67946e4
	void *38ff5fe855(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*38ff5fe855 // Final|Native|Public|BlueprintCallable // @ game+0x6794ef0
};

