// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x910 (Inherited: 0x398)
struct UVehicleAnimInstance : UAnimInstance {
	char pad_398[0x558]; // 0x398(0x558)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent[0x08]; // 0x8f0(0x08)
	bool *1862afc019; // 0x8f8(0x01)
	char pad_8F9[0x3]; // 0x8f9(0x03)
	float *7ebbc29f62[0x04]; // 0x8fc(0x04)
	float *b792a26596[0x04]; // 0x900(0x04)
	float *137967b87b[0x04]; // 0x904(0x04)
	char pad_908[0x8]; // 0x908(0x08)

	void *1373ed96fc(); // Function PhysXVehicles.VehicleAnimInstance.*1373ed96fc // Final|Native|Public|BlueprintCallable // @ game+0x69e9414
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x458 (Inherited: 0x448)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh[0x08]; // 0x448(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement[0x08]; // 0x450(0x08)
};

// Class PhysXVehicles.VehicleWheel
// Size: 0x188 (Inherited: 0x28)
struct UVehicleWheel : UObject {
	struct UStaticMesh* *a70c05f3b9[0x08]; // 0x28(0x08)
	bool *bc34d8b9e9; // 0x30(0x01)
	bool *8f23d4aba4; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FVector Offset[0x0c]; // 0x34(0x0c)
	float *a6fad8133e[0x04]; // 0x40(0x04)
	float *b5086a1f8f[0x04]; // 0x44(0x04)
	float Mass[0x04]; // 0x48(0x04)
	float *0cd6b72831[0x04]; // 0x4c(0x04)
	float SteerAngle[0x04]; // 0x50(0x04)
	bool *9d0039d379; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct U*1c2e584736* *1c2e584736[0x08]; // 0x58(0x08)
	struct U*4a072dac49* *4a072dac49[0x08]; // 0x60(0x08)
	float *5c41d3570b[0x04]; // 0x68(0x04)
	float *85b3915485[0x04]; // 0x6c(0x04)
	float *954eed9daf[0x04]; // 0x70(0x04)
	float *bf5266eea9[0x04]; // 0x74(0x04)
	float *819bd22477[0x04]; // 0x78(0x04)
	struct FVector *753d2825c3[0x0c]; // 0x7c(0x0c)
	struct FVector *a962ba2ca3[0x0c]; // 0x88(0x0c)
	float *9a93643092[0x04]; // 0x94(0x04)
	float *5cca6d2acf[0x04]; // 0x98(0x04)
	float *1bd2bf6fa3[0x04]; // 0x9c(0x04)
	float *943de7e5fb[0x04]; // 0xa0(0x04)
	float *81756536d3[0x04]; // 0xa4(0x04)
	float *7ca7ad3289[0x04]; // 0xa8(0x04)
	float *815c148354[0x04]; // 0xac(0x04)
	struct F*8523fec421 *8523fec421[0x14]; // 0xb0(0x14)
	float *d26b05c27f[0x04]; // 0xc4(0x04)
	float *4b14da5fb6[0x04]; // 0xc8(0x04)
	enum class ECollisionChannel *4441f491a6; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UWheeledVehicleMovementComponent* VehicleSim[0x08]; // 0xd0(0x08)
	int32 *c59b13a648[0x04]; // 0xd8(0x04)
	float *80f951c974[0x04]; // 0xdc(0x04)
	float *658b1e35d2[0x04]; // 0xe0(0x04)
	float *fc25da49f0[0x04]; // 0xe4(0x04)
	char pad_E8[0x4]; // 0xe8(0x04)
	float *5624989783[0x04]; // 0xec(0x04)
	float *a524cac3eb[0x04]; // 0xf0(0x04)
	float *1576a0580d[0x04]; // 0xf4(0x04)
	struct FVector Location[0x0c]; // 0xf8(0x0c)
	struct FVector OldLocation[0x0c]; // 0x104(0x0c)
	struct FVector Velocity[0x0c]; // 0x110(0x0c)
	float *a788eb2b5f[0x04]; // 0x11c(0x04)
	char pad_120[0x68]; // 0x120(0x68)

	void *e440c953e6(); // Function PhysXVehicles.VehicleWheel.*e440c953e6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e939c
	void *b3ce88e75e(); // Function PhysXVehicles.VehicleWheel.*b3ce88e75e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e9378
	void *7281c01ce0(); // Function PhysXVehicles.VehicleWheel.*7281c01ce0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e9314
	void *0c48501eba(); // Function PhysXVehicles.VehicleWheel.*0c48501eba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e932c
	void *0c46290f70(); // Function PhysXVehicles.VehicleWheel.*0c46290f70 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e92fc
	void *523d55e80f(); // Function PhysXVehicles.VehicleWheel.*523d55e80f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e9460
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x530 (Inherited: 0x280)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char pad_280[0x14]; // 0x280(0x14)
	char *fc74aeead9 : 1; // 0x294(0x01)
	char pad_294_1 : 7; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct TArray<bool> *bbc44a9454[0x10]; // 0x298(0x10)
	struct TArray<struct F*4bbb30343f> *ed2151afc1[0x10]; // 0x2a8(0x10)
	struct TArray<struct F*5f66ed682c> *83dd50c122[0x10]; // 0x2b8(0x10)
	float Mass[0x04]; // 0x2c8(0x04)
	float DragCoefficient[0x04]; // 0x2cc(0x04)
	float *613c932735[0x04]; // 0x2d0(0x04)
	float *b72731dcfd[0x04]; // 0x2d4(0x04)
	bool *e0c71cc22f; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float *fe83aa1903[0x04]; // 0x2dc(0x04)
	float *881fefe4f0[0x04]; // 0x2e0(0x04)
	float *cd6f35e8dc[0x04]; // 0x2e4(0x04)
	float *9b74103b03[0x04]; // 0x2e8(0x04)
	struct FVector *292e1b1f1a[0x0c]; // 0x2ec(0x0c)
	float *f92e9c22e1[0x04]; // 0x2f8(0x04)
	float *e327e8b972[0x04]; // 0x2fc(0x04)
	float *dc306b8228[0x04]; // 0x300(0x04)
	float *e61bd34036[0x04]; // 0x304(0x04)
	float *6fec0a364a[0x04]; // 0x308(0x04)
	float *5147fec91d[0x04]; // 0x30c(0x04)
	int32 LowForwardSpeedSubStepCount[0x04]; // 0x310(0x04)
	int32 HighForwardSpeedSubStepCount[0x04]; // 0x314(0x04)
	struct TArray<struct UVehicleWheel*> Wheels[0x10]; // 0x318(0x10)
	char pad_328[0x18]; // 0x328(0x18)
	char bUseRVOAvoidance : 1; // 0x340(0x01)
	char pad_340_1 : 7; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float RVOAvoidanceRadius[0x04]; // 0x344(0x04)
	float RVOAvoidanceHeight[0x04]; // 0x348(0x04)
	float AvoidanceConsiderationRadius[0x04]; // 0x34c(0x04)
	float RVOSteeringStep[0x04]; // 0x350(0x04)
	float RVOThrottleStep[0x04]; // 0x354(0x04)
	int32 AvoidanceUID[0x04]; // 0x358(0x04)
	struct F*f2710e04b9 AvoidanceGroup[0x04]; // 0x35c(0x04)
	struct F*f2710e04b9 GroupsToAvoid[0x04]; // 0x360(0x04)
	struct F*f2710e04b9 GroupsToIgnore[0x04]; // 0x364(0x04)
	float AvoidanceWeight[0x04]; // 0x368(0x04)
	struct FVector *e29a3efc6f[0x0c]; // 0x36c(0x0c)
	char pad_378[0x4]; // 0x378(0x04)
	struct F*ea6b647fa8 *1b892d1067[0x1c]; // 0x37c(0x1c)
	char pad_398[0xf8]; // 0x398(0xf8)
	float *55a9e199e6[0x04]; // 0x490(0x04)
	float *09b9af4d9f[0x04]; // 0x494(0x04)
	float *30f956f0e2[0x04]; // 0x498(0x04)
	char *5b6fb1b414 : 1; // 0x49c(0x01)
	char *b476282e86 : 1; // 0x49c(0x01)
	char *07ec7223c9 : 1; // 0x49c(0x01)
	char pad_49C_3 : 5; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	float *92e2c3902f[0x04]; // 0x4a0(0x04)
	float *965bf1f225[0x04]; // 0x4a4(0x04)
	float *76c0240d50[0x04]; // 0x4a8(0x04)
	int32 *edec843a95[0x04]; // 0x4ac(0x04)
	float *b486c6fc45[0x04]; // 0x4b0(0x04)
	float *511051753a[0x04]; // 0x4b4(0x04)
	float BrakeInput[0x04]; // 0x4b8(0x04)
	float *40b41e4b8d[0x04]; // 0x4bc(0x04)
	float *7cd228f39a[0x04]; // 0x4c0(0x04)
	float *8fc7945ad0[0x04]; // 0x4c4(0x04)
	float *60bb788f85[0x04]; // 0x4c8(0x04)
	struct F*9d54d4c4f6 *7ff2d7b2c9[0x08]; // 0x4cc(0x08)
	struct F*9d54d4c4f6 *9ddff5acd8[0x08]; // 0x4d4(0x08)
	struct F*9d54d4c4f6 *08e3abdb0f[0x08]; // 0x4dc(0x08)
	struct F*9d54d4c4f6 *57651e2f96[0x08]; // 0x4e4(0x08)
	char *fbcb4f7122 : 1; // 0x4ec(0x01)
	char pad_4EC_1 : 7; // 0x4ec(0x01)
	char pad_4ED[0x43]; // 0x4ed(0x43)

	void *18e1c80ce6(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*18e1c80ce6 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69e96e0
	void *6938179b38(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*6938179b38 // Final|Native|Public|BlueprintCallable // @ game+0x69e9f9c
	void *04bcc86aa0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*04bcc86aa0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e9248
	void *0474618186(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*0474618186 // Final|Native|Public|BlueprintCallable // @ game+0x69ea128
	void *1e94ed79dc(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*1e94ed79dc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e9298
	void *49913882bb(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*49913882bb // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x69e9438
	void *4c989de930(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*4c989de930 // Final|Native|Public|BlueprintCallable // @ game+0x69e9654
	void OnRep_TirePunctured(); // Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured // Native|Public // @ game+0x69e9478
	void *c70f537a0a(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c70f537a0a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69e9bb0
	void *b48d7af4cd(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b48d7af4cd // Final|Native|Public|BlueprintCallable // @ game+0x69e977c
	void *a4ebf22dc8(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*a4ebf22dc8 // Final|Native|Public|BlueprintCallable // @ game+0x69e9c4c
	void *3958f736ff(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*3958f736ff // Final|Native|Public|BlueprintCallable // @ game+0x69ea078
	void *7a8a5cab6d(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*7a8a5cab6d // Final|Native|Public|BlueprintCallable // @ game+0x69e9a88
	void *284edf62e0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*284edf62e0 // Final|Native|Public|BlueprintCallable // @ game+0x69e956c
	void *ae7f14da74(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*ae7f14da74 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69e9cd8
	void *b4ecc85f1e(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b4ecc85f1e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e93ec
	void *86620e7512(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*86620e7512 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e92b0
	void *b2cecce95e(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b2cecce95e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e9280
	void *40a0df3f25(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*40a0df3f25 // Final|Native|Public|BlueprintCallable // @ game+0x69e9eec
	int32 *e73d1ef7e4(float* Param1); // Function PhysXVehicles.WheeledVehicleMovementComponent.*e73d1ef7e4 // Net|Native|Event|Protected|NetServer|NetValidate // @ game+0xc76c90
	void *c686538277(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c686538277 // Final|Native|Public|BlueprintCallable // @ game+0x69e9b24
	void *fb71225393(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*fb71225393 // Final|Native|Public|BlueprintCallable // @ game+0x69e9d74
	void *6f09318285(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*6f09318285 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e93b4
	void *81759e0f03(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*81759e0f03 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69e9350
	void *da25fdac75(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*da25fdac75 // Final|Native|Public|BlueprintCallable // @ game+0x69e99ec
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x690 (Inherited: 0x530)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct F*59dac41ed6 EngineSetup[0x90]; // 0x528(0x90)
	struct F*e57d981de0 *90c75b2078[0x1c]; // 0x5b8(0x1c)
	struct FVehicleTransmissionData *75ff14b76b[0x30]; // 0x5d8(0x30)
	struct FRuntimeFloatCurve SteeringCurve[0x78]; // 0x608(0x78)
	float *103ab4cebd[0x04]; // 0x680(0x04)
	char pad_688[0x8]; // 0x688(0x08)
};

// Class PhysXVehicles.*4a072dac49
// Size: 0x80 (Inherited: 0x30)
struct U*4a072dac49 : UDataAsset {
	float *d721b555b8[0x04]; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*42ae5cb29f> *e11ee3dc6e[0x10]; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct F*0b9c1223db *81ac8ba2ff[0x28]; // 0x50(0x28)
	bool *ccf97c98ce; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *17df7c5e1b[0x04]; // 0x7c(0x04)
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x530 (Inherited: 0x530)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	void *ebfbb1603c(float* SteerAngle); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*ebfbb1603c // Final|Native|Public|BlueprintCallable // @ game+0x69e9e0c
	void *019d623156(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*019d623156 // Final|Native|Public|BlueprintCallable // @ game+0x69e990c
	float *7cb2fd4016(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*7cb2fd4016 // Final|Native|Public|BlueprintCallable // @ game+0x69e982c
};

