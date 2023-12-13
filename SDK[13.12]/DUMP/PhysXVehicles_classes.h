// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x920 (Inherited: 0x3a8)
struct UVehicleAnimInstance : UAnimInstance {
	char pad_3A8[0x558]; // 0x3a8(0x558)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x900(0x08)
	bool *4e9385f7a3; // 0x908(0x01)
	char pad_909[0x3]; // 0x909(0x03)
	float *545b5355e8; // 0x90c(0x04)
	float *776577aa46; // 0x910(0x04)
	float *146b6a5b89; // 0x914(0x04)
	char pad_918[0x8]; // 0x918(0x08)

	void *f345ee505b(struct AWheeledVehicle* ReturnValue); // Function PhysXVehicles.VehicleAnimInstance.*f345ee505b // Final|Native|Public|BlueprintCallable // @ game+0x6cc0324
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x460 (Inherited: 0x450)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x450(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x458(0x08)
};

// Class PhysXVehicles.VehicleWheel
// Size: 0x190 (Inherited: 0x30)
struct UVehicleWheel : UObject {
	struct UStaticMesh* *791bdb0708; // 0x30(0x08)
	bool *5640ad4be2; // 0x38(0x01)
	bool *f95c64e861; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector Offset; // 0x3c(0x0c)
	float *229beca71a; // 0x48(0x04)
	float *7f20a57e15; // 0x4c(0x04)
	float Mass; // 0x50(0x04)
	float *2203576384; // 0x54(0x04)
	float SteerAngle; // 0x58(0x04)
	bool *715cfb8ecb; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct U*e9cc7f9b0a* *e9cc7f9b0a; // 0x60(0x08)
	struct U*11ff991b3f* *11ff991b3f; // 0x68(0x08)
	float *b55a5f1e56; // 0x70(0x04)
	float *a6fed5bb95; // 0x74(0x04)
	float *4b890c6a55; // 0x78(0x04)
	float *ee239b5b8c; // 0x7c(0x04)
	float *63a7cf51a2; // 0x80(0x04)
	struct FVector *84f1dc90e4; // 0x84(0x0c)
	struct FVector *09a47d5f9d; // 0x90(0x0c)
	float *fdcd9d1ead; // 0x9c(0x04)
	float *f1f35e6818; // 0xa0(0x04)
	float *ac5b1f6017; // 0xa4(0x04)
	float *7ec54a236c; // 0xa8(0x04)
	float *2d45e93442; // 0xac(0x04)
	float *4d7066fe98; // 0xb0(0x04)
	float *d7e38811b3; // 0xb4(0x04)
	struct F*b9d73fdcc4 *b9d73fdcc4; // 0xb8(0x14)
	float *2f32afc4fe; // 0xcc(0x04)
	float *e6d3c0aefd; // 0xd0(0x04)
	enum class ECollisionChannel *e551ed3a6b; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0xd8(0x08)
	int32 *ab55d5cd3c; // 0xe0(0x04)
	float *2a5806e10a; // 0xe4(0x04)
	float *ef1195e81e; // 0xe8(0x04)
	float *fa812e24ac; // 0xec(0x04)
	char pad_F0[0x4]; // 0xf0(0x04)
	float *37e3deeb71; // 0xf4(0x04)
	float *d71bc0daed; // 0xf8(0x04)
	float *7b201382ea; // 0xfc(0x04)
	struct FVector Location; // 0x100(0x0c)
	struct FVector OldLocation; // 0x10c(0x0c)
	struct FVector Velocity; // 0x118(0x0c)
	float *4ea88e3264; // 0x124(0x04)
	char pad_128[0x68]; // 0x128(0x68)

	void *bc59a0291d(); // Function PhysXVehicles.VehicleWheel.*bc59a0291d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc0288
	void *ec3841a401(); // Function PhysXVehicles.VehicleWheel.*ec3841a401 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc0370
	void *d953fcd879(); // Function PhysXVehicles.VehicleWheel.*d953fcd879 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc023c
	void *4627b6be4e(); // Function PhysXVehicles.VehicleWheel.*4627b6be4e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc02ac
	void *c641e56e3a(); // Function PhysXVehicles.VehicleWheel.*c641e56e3a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc020c
	void *5cec29ca7c(); // Function PhysXVehicles.VehicleWheel.*5cec29ca7c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc0224
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x540 (Inherited: 0x290)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char pad_290[0x14]; // 0x290(0x14)
	char *725ef187c5 : 1; // 0x2a4(0x01)
	char pad_2A4_1 : 7; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct TArray<bool> *f81e3ccbf6; // 0x2a8(0x10)
	struct TArray<struct F*3c0021b181> *648be1d669; // 0x2b8(0x10)
	struct TArray<struct F*e412e043c3> *658e2064d3; // 0x2c8(0x10)
	float Mass; // 0x2d8(0x04)
	float DragCoefficient; // 0x2dc(0x04)
	float *79bb3fa6a9; // 0x2e0(0x04)
	float *ae41d7fb49; // 0x2e4(0x04)
	bool *ac8c7fa57f; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float *7af6a2e58d; // 0x2ec(0x04)
	float *dcd93335be; // 0x2f0(0x04)
	float *611c356e81; // 0x2f4(0x04)
	float *1fa49a7571; // 0x2f8(0x04)
	struct FVector *f52dc885a9; // 0x2fc(0x0c)
	float *32f2cdfccf; // 0x308(0x04)
	float *72ca2943d8; // 0x30c(0x04)
	float *2f0bba2ed3; // 0x310(0x04)
	float *8c8e2000c1; // 0x314(0x04)
	float *e89e2b011f; // 0x318(0x04)
	float *80aeee7fcb; // 0x31c(0x04)
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
	struct F*c4bee3ea12 AvoidanceGroup; // 0x36c(0x04)
	struct F*c4bee3ea12 GroupsToAvoid; // 0x370(0x04)
	struct F*c4bee3ea12 GroupsToIgnore; // 0x374(0x04)
	float AvoidanceWeight; // 0x378(0x04)
	struct FVector *914bfba552; // 0x37c(0x0c)
	char pad_388[0x4]; // 0x388(0x04)
	struct F*877f287ff5 *60aebd5418; // 0x38c(0x1c)
	char pad_3A8[0xf8]; // 0x3a8(0xf8)
	float *4896d37741; // 0x4a0(0x04)
	float *42ef6b1eba; // 0x4a4(0x04)
	float *4e0e806df1; // 0x4a8(0x04)
	char *57d26e4d5c : 1; // 0x4ac(0x01)
	char *89d68c30a4 : 1; // 0x4ac(0x01)
	char *5c39201e48 : 1; // 0x4ac(0x01)
	char pad_4AC_3 : 5; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	float *6f02247d8d; // 0x4b0(0x04)
	float *7378d45af9; // 0x4b4(0x04)
	float *7a2538aff7; // 0x4b8(0x04)
	int32 *8b23f1c46b; // 0x4bc(0x04)
	float *3952c1debe; // 0x4c0(0x04)
	float *4c35aac3e2; // 0x4c4(0x04)
	float BrakeInput; // 0x4c8(0x04)
	float *fddb27637c; // 0x4cc(0x04)
	float *8d4346ab7e; // 0x4d0(0x04)
	float *de9e604e8b; // 0x4d4(0x04)
	float *19e46c7797; // 0x4d8(0x04)
	struct F*a628692c6e *c18a75a8cc; // 0x4dc(0x08)
	struct F*a628692c6e *59a4b07654; // 0x4e4(0x08)
	struct F*a628692c6e *923d2ee287; // 0x4ec(0x08)
	struct F*a628692c6e *b79f3fe20e; // 0x4f4(0x08)
	char *4683070ca7 : 1; // 0x4fc(0x01)
	char pad_4FC_1 : 7; // 0x4fc(0x01)
	char pad_4FD[0x43]; // 0x4fd(0x43)

	void *49a4796512(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*49a4796512 // Final|Native|Public|BlueprintCallable // @ game+0x6cc08fc
	void *4acbc73bf1(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*4acbc73bf1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc0260
	void *453ca56b97(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*453ca56b97 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0c84
	void *865b67218d(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*865b67218d // Final|Native|Public|BlueprintCallable // @ game+0x6cc0564
	void *89d57a4775(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*89d57a4775 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0998
	void *ea805810b1(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*ea805810b1 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0f88
	void *c9609777c9(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c9609777c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc02fc
	void *0fddc8929b(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*0fddc8929b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6cc0be8
	void *8ed1cc781b(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*8ed1cc781b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc01a8
	void *e102887b62(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*e102887b62 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0a34
	void *5eaed47ac8(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*5eaed47ac8 // Final|Native|Public|BlueprintCallable // @ game+0x6cc047c
	void *881f7f59d5(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*881f7f59d5 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0eac
	void GetVelocity(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetVelocity // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc0348
	void *7e3a733b75(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.*7e3a733b75 // Final|Native|Public|BlueprintCallable // @ game+0x6cc068c
	void *ae0db5a029(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.*ae0db5a029 // Final|Native|Public|BlueprintCallable // @ game+0x6cc1038
	void *fb3c681604(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.*fb3c681604 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0dfc
	void *0c71812783(struct F*c4bee3ea12 GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.*0c71812783 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6cc0ac0
	void *4ed3e42e4c(int32 GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.*4ed3e42e4c // Final|Native|Public|BlueprintCallable // @ game+0x6cc0b5c
	void OnRep_TirePunctured(struct TArray<bool> Param0); // Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured // Native|Public // @ game+0x6cc0388
	void *564cc441b7(float ReturnValue); // Function PhysXVehicles.WheeledVehicleMovementComponent.*564cc441b7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc01c0
	void *97cd786904(struct F*c4bee3ea12 GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.*97cd786904 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6cc05f0
	void *366b0705a0(int32 ReturnValue); // Function PhysXVehicles.WheeledVehicleMovementComponent.*366b0705a0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc0170
	void *f7d598ce9e(float ReturnValue); // Function PhysXVehicles.WheeledVehicleMovementComponent.*f7d598ce9e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a85bd8
	void *1c26d21665(int32 ReturnValue); // Function PhysXVehicles.WheeledVehicleMovementComponent.*1c26d21665 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc02c4
	void *2084ea71b9(float Param0, float Param1, float Param2, float Param3, int32 Param4, uint32 Param5); // Function PhysXVehicles.WheeledVehicleMovementComponent.*2084ea71b9 // Net|Native|Event|Protected|NetServer|NetValidate // @ game+0xd3b9dc
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x6a0 (Inherited: 0x540)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct F*4aae3f54bd EngineSetup; // 0x538(0x90)
	struct F*83e77e4cf5 *e6acb8d75b; // 0x5c8(0x1c)
	struct FVehicleTransmissionData *46e7e32a5f; // 0x5e8(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x618(0x78)
	float *68f74cebf9; // 0x690(0x04)
	char pad_698[0x8]; // 0x698(0x08)
};

// Class PhysXVehicles.*11ff991b3f
// Size: 0x88 (Inherited: 0x38)
struct U*11ff991b3f : UDataAsset {
	float *569dda12ee; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct F*5b8465806f> *9f45a71333; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct F*3038dddb2f *56ebc8edce; // 0x58(0x28)
	bool *9c9e9c028a; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *39d1ebec55; // 0x84(0x04)
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x540 (Inherited: 0x540)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {
	char *725ef187c5 : 1; // 0x2a4(0x01)
	struct TArray<bool> *f81e3ccbf6; // 0x2a8(0x10)
	struct TArray<struct F*3c0021b181> *648be1d669; // 0x2b8(0x10)
	struct TArray<struct F*e412e043c3> *658e2064d3; // 0x2c8(0x10)
	float Mass; // 0x2d8(0x04)
	float DragCoefficient; // 0x2dc(0x04)
	float *79bb3fa6a9; // 0x2e0(0x04)
	float *ae41d7fb49; // 0x2e4(0x04)
	bool *ac8c7fa57f; // 0x2e8(0x01)
	float *7af6a2e58d; // 0x2ec(0x04)
	float *dcd93335be; // 0x2f0(0x04)
	float *611c356e81; // 0x2f4(0x04)
	float *1fa49a7571; // 0x2f8(0x04)
	struct FVector *f52dc885a9; // 0x2fc(0x0c)
	float *32f2cdfccf; // 0x308(0x04)
	float *72ca2943d8; // 0x30c(0x04)
	float *2f0bba2ed3; // 0x310(0x04)
	float *8c8e2000c1; // 0x314(0x04)
	float *e89e2b011f; // 0x318(0x04)
	float *80aeee7fcb; // 0x31c(0x04)
	int32 LowForwardSpeedSubStepCount; // 0x320(0x04)
	int32 HighForwardSpeedSubStepCount; // 0x324(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x328(0x10)
	char bUseRVOAvoidance : 1; // 0x350(0x01)
	float RVOAvoidanceRadius; // 0x354(0x04)
	float RVOAvoidanceHeight; // 0x358(0x04)
	float AvoidanceConsiderationRadius; // 0x35c(0x04)
	float RVOSteeringStep; // 0x360(0x04)
	float RVOThrottleStep; // 0x364(0x04)
	int32 AvoidanceUID; // 0x368(0x04)
	struct F*c4bee3ea12 AvoidanceGroup; // 0x36c(0x04)
	struct F*c4bee3ea12 GroupsToAvoid; // 0x370(0x04)
	struct F*c4bee3ea12 GroupsToIgnore; // 0x374(0x04)
	float AvoidanceWeight; // 0x378(0x04)
	struct FVector *914bfba552; // 0x37c(0x0c)
	struct F*877f287ff5 *60aebd5418; // 0x38c(0x1c)
	float *4896d37741; // 0x4a0(0x04)
	float *42ef6b1eba; // 0x4a4(0x04)
	float *4e0e806df1; // 0x4a8(0x04)
	char *57d26e4d5c : 1; // 0x4ac(0x01)
	char *89d68c30a4 : 1; // 0x4ac(0x01)
	char *5c39201e48 : 1; // 0x4ac(0x01)
	float *6f02247d8d; // 0x4b0(0x04)
	float *7378d45af9; // 0x4b4(0x04)
	float *7a2538aff7; // 0x4b8(0x04)
	int32 *8b23f1c46b; // 0x4bc(0x04)
	float *3952c1debe; // 0x4c0(0x04)
	float *4c35aac3e2; // 0x4c4(0x04)
	float BrakeInput; // 0x4c8(0x04)
	float *fddb27637c; // 0x4cc(0x04)
	float *8d4346ab7e; // 0x4d0(0x04)
	float *de9e604e8b; // 0x4d4(0x04)
	float *19e46c7797; // 0x4d8(0x04)
	struct F*a628692c6e *c18a75a8cc; // 0x4dc(0x08)
	struct F*a628692c6e *59a4b07654; // 0x4e4(0x08)
	struct F*a628692c6e *923d2ee287; // 0x4ec(0x08)
	struct F*a628692c6e *b79f3fe20e; // 0x4f4(0x08)
	char *4683070ca7 : 1; // 0x4fc(0x01)

	void *49a4796512(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*49a4796512 // Final|Native|Public|BlueprintCallable // @ game+0x6cc08fc
	void *4acbc73bf1(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*4acbc73bf1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc0260
	void *453ca56b97(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*453ca56b97 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0c84
	void *865b67218d(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*865b67218d // Final|Native|Public|BlueprintCallable // @ game+0x6cc0564
	void *89d57a4775(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*89d57a4775 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0998
	void *ea805810b1(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*ea805810b1 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0f88
	void *c9609777c9(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c9609777c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc02fc
	void *0fddc8929b(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*0fddc8929b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6cc0be8
	void *8ed1cc781b(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*8ed1cc781b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc01a8
	void *e102887b62(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*e102887b62 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0a34
	void *5eaed47ac8(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*5eaed47ac8 // Final|Native|Public|BlueprintCallable // @ game+0x6cc047c
	void *881f7f59d5(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*881f7f59d5 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0eac
	void GetVelocity(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetVelocity // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc0348
	void *7e3a733b75(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.*7e3a733b75 // Final|Native|Public|BlueprintCallable // @ game+0x6cc068c
	void *ae0db5a029(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.*ae0db5a029 // Final|Native|Public|BlueprintCallable // @ game+0x6cc1038
	void *fb3c681604(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.*fb3c681604 // Final|Native|Public|BlueprintCallable // @ game+0x6cc0dfc
	void *0c71812783(struct F*c4bee3ea12 GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.*0c71812783 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6cc0ac0
	void *4ed3e42e4c(int32 GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.*4ed3e42e4c // Final|Native|Public|BlueprintCallable // @ game+0x6cc0b5c
	void OnRep_TirePunctured(struct TArray<bool> Param0); // Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured // Native|Public // @ game+0x6cc0388
	void *564cc441b7(float ReturnValue); // Function PhysXVehicles.WheeledVehicleMovementComponent.*564cc441b7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc01c0
	void *97cd786904(struct F*c4bee3ea12 GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.*97cd786904 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6cc05f0
	void *366b0705a0(int32 ReturnValue); // Function PhysXVehicles.WheeledVehicleMovementComponent.*366b0705a0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc0170
	void *f7d598ce9e(float ReturnValue); // Function PhysXVehicles.WheeledVehicleMovementComponent.*f7d598ce9e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5a85bd8
	void *1c26d21665(int32 ReturnValue); // Function PhysXVehicles.WheeledVehicleMovementComponent.*1c26d21665 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6cc02c4
	void *2084ea71b9(float Param0, float Param1, float Param2, float Param3, int32 Param4, uint32 Param5); // Function PhysXVehicles.WheeledVehicleMovementComponent.*2084ea71b9 // Net|Native|Event|Protected|NetServer|NetValidate // @ game+0xd3b9dc
};

