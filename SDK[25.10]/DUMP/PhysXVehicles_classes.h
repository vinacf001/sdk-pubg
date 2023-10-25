// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x910 (Inherited: 0x3a0)
struct UVehicleAnimInstance : UAnimInstance {
	char pad_3A0[0x550]; // 0x3a0(0x550)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x8f0(0x08)
	bool *1862afc019; // 0x8f8(0x01)
	char pad_8F9[0x3]; // 0x8f9(0x03)
	float *7ebbc29f62; // 0x8fc(0x04)
	float *b792a26596; // 0x900(0x04)
	float *137967b87b; // 0x904(0x04)
	char pad_908[0x8]; // 0x908(0x08)

	struct AWheeledVehicle* *1373ed96fc(); // Function PhysXVehicles.VehicleAnimInstance.*1373ed96fc // Final|Native|Public|BlueprintCallable // @ game+0x6e1db78
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x468 (Inherited: 0x458)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x458(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x460(0x08)
};

// Class PhysXVehicles.VehicleWheel
// Size: 0x190 (Inherited: 0x30)
struct UVehicleWheel : UObject {
	struct UStaticMesh* *a70c05f3b9; // 0x30(0x08)
	bool *bc34d8b9e9; // 0x38(0x01)
	bool *8f23d4aba4; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector Offset; // 0x3c(0x0c)
	float *a6fad8133e; // 0x48(0x04)
	float *b5086a1f8f; // 0x4c(0x04)
	float Mass; // 0x50(0x04)
	float *0cd6b72831; // 0x54(0x04)
	float SteerAngle; // 0x58(0x04)
	bool *9d0039d379; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct U*1c2e584736* *1c2e584736; // 0x60(0x08)
	struct U*4a072dac49* *4a072dac49; // 0x68(0x08)
	float *5c41d3570b; // 0x70(0x04)
	float *85b3915485; // 0x74(0x04)
	float *954eed9daf; // 0x78(0x04)
	float *bf5266eea9; // 0x7c(0x04)
	float *819bd22477; // 0x80(0x04)
	struct FVector *753d2825c3; // 0x84(0x0c)
	struct FVector *a962ba2ca3; // 0x90(0x0c)
	float *9a93643092; // 0x9c(0x04)
	float *5cca6d2acf; // 0xa0(0x04)
	float *1bd2bf6fa3; // 0xa4(0x04)
	float *943de7e5fb; // 0xa8(0x04)
	float *81756536d3; // 0xac(0x04)
	float *7ca7ad3289; // 0xb0(0x04)
	float *815c148354; // 0xb4(0x04)
	struct F*8523fec421 *8523fec421; // 0xb8(0x14)
	float *d26b05c27f; // 0xcc(0x04)
	float *4b14da5fb6; // 0xd0(0x04)
	enum class ECollisionChannel *4441f491a6; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0xd8(0x08)
	int32 *c59b13a648; // 0xe0(0x04)
	float *80f951c974; // 0xe4(0x04)
	float *658b1e35d2; // 0xe8(0x04)
	float *fc25da49f0; // 0xec(0x04)
	char pad_F0[0x4]; // 0xf0(0x04)
	float *5624989783; // 0xf4(0x04)
	float *a524cac3eb; // 0xf8(0x04)
	float *1576a0580d; // 0xfc(0x04)
	struct FVector Location; // 0x100(0x0c)
	struct FVector OldLocation; // 0x10c(0x0c)
	struct FVector Velocity; // 0x118(0x0c)
	float *a788eb2b5f; // 0x124(0x04)
	char pad_128[0x68]; // 0x128(0x68)

	float *e440c953e6(); // Function PhysXVehicles.VehicleWheel.*e440c953e6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1db00
	float *b3ce88e75e(); // Function PhysXVehicles.VehicleWheel.*b3ce88e75e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1dadc
	float *7281c01ce0(); // Function PhysXVehicles.VehicleWheel.*7281c01ce0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1da78
	float *0c48501eba(); // Function PhysXVehicles.VehicleWheel.*0c48501eba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1da90
	float *0c46290f70(); // Function PhysXVehicles.VehicleWheel.*0c46290f70 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1da60
	bool *523d55e80f(); // Function PhysXVehicles.VehicleWheel.*523d55e80f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1dbc4
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x540 (Inherited: 0x290)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char pad_290[0x14]; // 0x290(0x14)
	char *fc74aeead9 : 1; // 0x2a4(0x01)
	char pad_2A4_1 : 7; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct TArray<bool> *bbc44a9454; // 0x2a8(0x10)
	struct TArray<struct F*4bbb30343f> *ed2151afc1; // 0x2b8(0x10)
	struct TArray<struct F*5f66ed682c> *83dd50c122; // 0x2c8(0x10)
	float Mass; // 0x2d8(0x04)
	float DragCoefficient; // 0x2dc(0x04)
	float *613c932735; // 0x2e0(0x04)
	float *b72731dcfd; // 0x2e4(0x04)
	bool *e0c71cc22f; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float *fe83aa1903; // 0x2ec(0x04)
	float *881fefe4f0; // 0x2f0(0x04)
	float *cd6f35e8dc; // 0x2f4(0x04)
	float *9b74103b03; // 0x2f8(0x04)
	struct FVector *292e1b1f1a; // 0x2fc(0x0c)
	float *f92e9c22e1; // 0x308(0x04)
	float *e327e8b972; // 0x30c(0x04)
	float *dc306b8228; // 0x310(0x04)
	float *e61bd34036; // 0x314(0x04)
	float *6fec0a364a; // 0x318(0x04)
	float *5147fec91d; // 0x31c(0x04)
	int32 LowForwardSpeedSubStepCount; // 0x320(0x04)
	int32 HighForwardSpeedSubStepCount; // 0x324(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x328(0x10)
	char pad_338[0x18]; // 0x338(0x18)
	char bUseRVOAvoidance : 1; // 0x350(0x01)
	char pad_350_1 : 7; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	float RVOAvoidanceRadius; // 0x354(0x04)
	float RVOAvoidanceHeight; // 0x358(0x04)
	float AvoidanceConsiderationRadius; // 0x35c(0x04)
	float RVOSteeringStep; // 0x360(0x04)
	float RVOThrottleStep; // 0x364(0x04)
	int32 AvoidanceUID; // 0x368(0x04)
	struct F*f2710e04b9 AvoidanceGroup; // 0x36c(0x04)
	struct F*f2710e04b9 GroupsToAvoid; // 0x370(0x04)
	struct F*f2710e04b9 GroupsToIgnore; // 0x374(0x04)
	float AvoidanceWeight; // 0x378(0x04)
	struct FVector *e29a3efc6f; // 0x37c(0x0c)
	char pad_388[0x4]; // 0x388(0x04)
	struct F*ea6b647fa8 *1b892d1067; // 0x38c(0x1c)
	char pad_3A8[0xf8]; // 0x3a8(0xf8)
	float *55a9e199e6; // 0x4a0(0x04)
	float *09b9af4d9f; // 0x4a4(0x04)
	float *30f956f0e2; // 0x4a8(0x04)
	char *5b6fb1b414 : 1; // 0x4ac(0x01)
	char *b476282e86 : 1; // 0x4ac(0x01)
	char *07ec7223c9 : 1; // 0x4ac(0x01)
	char pad_4AC_3 : 5; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	float *92e2c3902f; // 0x4b0(0x04)
	float *965bf1f225; // 0x4b4(0x04)
	float *76c0240d50; // 0x4b8(0x04)
	int32 *edec843a95; // 0x4bc(0x04)
	float *b486c6fc45; // 0x4c0(0x04)
	float *511051753a; // 0x4c4(0x04)
	float BrakeInput; // 0x4c8(0x04)
	float *40b41e4b8d; // 0x4cc(0x04)
	float *7cd228f39a; // 0x4d0(0x04)
	float *8fc7945ad0; // 0x4d4(0x04)
	float *60bb788f85; // 0x4d8(0x04)
	struct F*9d54d4c4f6 *7ff2d7b2c9; // 0x4dc(0x08)
	struct F*9d54d4c4f6 *9ddff5acd8; // 0x4e4(0x08)
	struct F*9d54d4c4f6 *08e3abdb0f; // 0x4ec(0x08)
	struct F*9d54d4c4f6 *57651e2f96; // 0x4f4(0x08)
	char *fbcb4f7122 : 1; // 0x4fc(0x01)
	char pad_4FC_1 : 7; // 0x4fc(0x01)
	char pad_4FD[0x43]; // 0x4fd(0x43)

	struct F*f2710e04b9 *18e1c80ce6(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*18e1c80ce6 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6e1de40
	bool *6938179b38(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*6938179b38 // Final|Native|Public|BlueprintCallable // @ game+0x6e1e6fc
	int32 *04bcc86aa0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*04bcc86aa0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1d9c4
	bool *0474618186(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*0474618186 // Final|Native|Public|BlueprintCallable // @ game+0x6e1e888
	float *1e94ed79dc(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*1e94ed79dc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5c13c78
	struct FVector *49913882bb(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*49913882bb // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1db9c
	int32 *4c989de930(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*4c989de930 // Final|Native|Public|BlueprintCallable // @ game+0x6e1ddb4
	struct TArray<bool> OnRep_TirePunctured(); // Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured // Native|Public // @ game+0x6e1dbdc
	struct F*f2710e04b9 *c70f537a0a(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c70f537a0a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6e1e310
	float *b48d7af4cd(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b48d7af4cd // Final|Native|Public|BlueprintCallable // @ game+0x6e1dedc
	int32 *a4ebf22dc8(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*a4ebf22dc8 // Final|Native|Public|BlueprintCallable // @ game+0x6e1e3ac
	float *3958f736ff(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*3958f736ff // Final|Native|Public|BlueprintCallable // @ game+0x6e1e7d8
	bool *7a8a5cab6d(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*7a8a5cab6d // Final|Native|Public|BlueprintCallable // @ game+0x6e1e1e8
	bool *284edf62e0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*284edf62e0 // Final|Native|Public|BlueprintCallable // @ game+0x6e1dcd0
	struct F*f2710e04b9 *ae7f14da74(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*ae7f14da74 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6e1e438
	bool *b4ecc85f1e(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b4ecc85f1e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1db50
	float *86620e7512(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*86620e7512 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1da14
	float *b2cecce95e(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b2cecce95e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1d9fc
	float *40a0df3f25(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*40a0df3f25 // Final|Native|Public|BlueprintCallable // @ game+0x6e1e64c
	uint32 *e73d1ef7e4(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*e73d1ef7e4 // Net|Native|Event|Protected|NetServer|NetValidate // @ game+0xc0a918
	int32 *c686538277(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c686538277 // Final|Native|Public|BlueprintCallable // @ game+0x6e1e284
	bool *fb71225393(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*fb71225393 // Final|Native|Public|BlueprintCallable // @ game+0x6e1e4d4
	int32 *6f09318285(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*6f09318285 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1db18
	float *81759e0f03(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*81759e0f03 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6e1dab4
	bool *da25fdac75(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*da25fdac75 // Final|Native|Public|BlueprintCallable // @ game+0x6e1e14c
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x6a0 (Inherited: 0x540)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct F*59dac41ed6 EngineSetup; // 0x538(0x90)
	struct F*e57d981de0 *90c75b2078; // 0x5c8(0x1c)
	struct FVehicleTransmissionData *75ff14b76b; // 0x5e8(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x618(0x78)
	float *103ab4cebd; // 0x690(0x04)
	char pad_698[0x8]; // 0x698(0x08)
};

// Class PhysXVehicles.*4a072dac49
// Size: 0x88 (Inherited: 0x38)
struct U*4a072dac49 : UDataAsset {
	float *d721b555b8; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct F*42ae5cb29f> *e11ee3dc6e; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct F*0b9c1223db *81ac8ba2ff; // 0x58(0x28)
	bool *ccf97c98ce; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *17df7c5e1b; // 0x84(0x04)
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x540 (Inherited: 0x540)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	int32 *ebfbb1603c(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*ebfbb1603c // Final|Native|Public|BlueprintCallable // @ game+0x6e1e56c
	int32 *019d623156(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*019d623156 // Final|Native|Public|BlueprintCallable // @ game+0x6e1e06c
	int32 *7cb2fd4016(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*7cb2fd4016 // Final|Native|Public|BlueprintCallable // @ game+0x6e1df8c
};

