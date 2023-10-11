// Class OceanPlugin.BuoyancyForceComponent
// Size: 0x590 (Inherited: 0x4e0)
struct UBuoyancyForceComponent : USceneComponent {
	struct AOceanManager* OceanManager; // 0x4e0(0x08)
	float MeshDensity; // 0x4e8(0x04)
	float FluidDensity; // 0x4ec(0x04)
	float FluidLinearDamping; // 0x4f0(0x04)
	float FluidAngularDamping; // 0x4f4(0x04)
	struct FVector VelocityDamper; // 0x4f8(0x0c)
	bool ClampMaxVelocity; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	float MaxUnderwaterVelocity; // 0x508(0x04)
	float TestPointRadius; // 0x50c(0x04)
	struct TArray<struct FVector> TestPoints; // 0x510(0x10)
	bool ApplyForceToBones; // 0x520(0x01)
	bool SnapToSurfaceIfNoPhysics; // 0x521(0x01)
	bool TwoGerstnerIterations; // 0x522(0x01)
	char pad_523[0x5]; // 0x523(0x05)
	struct TArray<float> PointDensityOverride; // 0x528(0x10)
	struct TArray<struct F*00b2c3492a> BoneOverride; // 0x538(0x10)
	bool DrawDebugPoints; // 0x548(0x01)
	bool EnableStayUprightConstraint; // 0x549(0x01)
	char pad_54A[0x2]; // 0x54a(0x02)
	float StayUprightStiffness; // 0x54c(0x04)
	float StayUprightDamping; // 0x550(0x04)
	struct FRotator StayUprightDesiredRotation; // 0x554(0x0c)
	bool EnableWaveForces; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float WaveForceMultiplier; // 0x564(0x04)
	enum class ETickingGroup TickGroup; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	float WaveHightMultiplier; // 0x56c(0x04)
	bool *5372734d98; // 0x570(0x01)
	char pad_571[0x1f]; // 0x571(0x1f)
};

// Class OceanPlugin.OceanManager
// Size: 0x488 (Inherited: 0x400)
struct AOceanManager : AActor {
	bool EnableGerstnerWaves; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FVector2D GlobalWaveDirection; // 0x404(0x08)
	float GlobalWaveSpeed; // 0x40c(0x04)
	float GlobalWaveAmplitude; // 0x410(0x04)
	float DistanceCheck; // 0x414(0x04)
	struct TArray<struct F*a8ec53011e> WaveClusters; // 0x418(0x10)
	struct TArray<struct F*6f9a383ca9> WaveSetOffsetsOverride; // 0x428(0x10)
	float NetWorkTimeOffset; // 0x438(0x04)
	bool bEnableLandscapeModulation; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	float ModulationStartHeight; // 0x440(0x04)
	float ModulationMaxHeight; // 0x444(0x04)
	float ModulationPower; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct ALandscape* Landscape; // 0x450(0x08)
	struct UTexture2D* HeightmapTexture; // 0x458(0x08)
	char pad_460[0x28]; // 0x460(0x28)

	struct FLinearColor *647bcbc832(); // Function OceanPlugin.OceanManager.*647bcbc832 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6938fec
	struct UTexture2D* *72cdf8bb4c(); // Function OceanPlugin.OceanManager.*72cdf8bb4c // Final|Native|Public|BlueprintCallable // @ game+0x6939410
	struct FVector *7decd84e27(); // Function OceanPlugin.OceanManager.*7decd84e27 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x787070
};

// Class OceanPlugin.*2f7dca983b
// Size: 0x600 (Inherited: 0x4e0)
struct U*2f7dca983b : USceneComponent {
	bool bUseDrag; // 0x4e0(0x01)
	bool bDebugOn; // 0x4e1(0x01)
	char pad_4E2[0x6]; // 0x4e2(0x06)
	struct AOceanManager* TheOcean; // 0x4e8(0x08)
	float WaterDensity; // 0x4f0(0x04)
	float Gravity; // 0x4f4(0x04)
	float MeshDensity; // 0x4f8(0x04)
	char pad_4FC[0x14]; // 0x4fc(0x14)
	struct UStaticMeshComponent* BuoyantMesh; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)
	struct FTransform MeshTransform; // 0x520(0x30)
	float FalseVolume; // 0x550(0x04)
	float BuoyancyReductionCoefficient; // 0x554(0x04)
	float BuoyancyPitchReductionCoefficient; // 0x558(0x04)
	float DensityCorrection; // 0x55c(0x04)
	float DensityCorrectionModifier; // 0x560(0x04)
	float SubmergedVolume; // 0x564(0x04)
	float ImpactCoefficient; // 0x568(0x04)
	struct FVector DragCoefficient; // 0x56c(0x0c)
	struct FVector SuctionCoefficient; // 0x578(0x0c)
	float ViscousDragCoefficient; // 0x584(0x04)
	float MaxSlamAcceleration; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct TArray<struct FVector> AdvancedGridHeight; // 0x590(0x10)
	struct TArray<struct F*ba107aed0a> SubmergedTris; // 0x5a0(0x10)
	struct TArray<float> TriSizes; // 0x5b0(0x10)
	struct TArray<float> TriSubmergedArea; // 0x5c0(0x10)
	char pad_5D0[0x30]; // 0x5d0(0x30)

	float TriangleArea(); // Function OceanPlugin.*2f7dca983b.TriangleArea // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6939e38
	void *0ec6749750(); // Function OceanPlugin.*2f7dca983b.*0ec6749750 // Final|Native|Public|BlueprintCallable // @ game+0x6939108
	struct F*ba107aed0a *ad7093360a(); // Function OceanPlugin.*2f7dca983b.*ad7093360a // Final|Native|Public|BlueprintCallable // @ game+0x693897c
	float *d770a52895(); // Function OceanPlugin.*2f7dca983b.*d770a52895 // Final|Native|Public|BlueprintCallable // @ game+0x6939ae0
	struct TArray<struct F*ba107aed0a> *f3517596ee(); // Function OceanPlugin.*2f7dca983b.*f3517596ee // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6939bdc
	struct FColor *6b958f4d33(); // Function OceanPlugin.*2f7dca983b.*6b958f4d33 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6938c64
	float *8209657dec(); // Function OceanPlugin.*2f7dca983b.*8209657dec // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x693911c
	struct FVector *f46ea16e80(); // Function OceanPlugin.*2f7dca983b.*f46ea16e80 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6938a6c
};

// Class OceanPlugin.*30573e6b9c
// Size: 0x2d0 (Inherited: 0x250)
struct U*30573e6b9c : UMovementComponent {
	struct AOceanManager* OceanManager; // 0x248(0x08)
	float MeshDensity; // 0x250(0x04)
	float FluidDensity; // 0x254(0x04)
	float FluidLinearDamping; // 0x258(0x04)
	float FluidAngularDamping; // 0x25c(0x04)
	struct FVector VelocityDamper; // 0x260(0x0c)
	bool ClampMaxVelocity; // 0x26c(0x01)
	float MaxUnderwaterVelocity; // 0x270(0x04)
	float TestPointRadius; // 0x274(0x04)
	struct TArray<struct FVector> TestPoints; // 0x278(0x10)
	struct TArray<float> PointDensityOverride; // 0x288(0x10)
	bool DrawDebugPoints; // 0x298(0x01)
	bool EnableStayUprightConstraint; // 0x299(0x01)
	float StayUprightStiffness; // 0x29c(0x04)
	float StayUprightDamping; // 0x2a0(0x04)
	struct FRotator StayUprightDesiredRotation; // 0x2a4(0x0c)
	bool EnableWaveForces; // 0x2b0(0x01)
	float WaveForceMultiplier; // 0x2b4(0x04)
	char pad_2B8[0x18]; // 0x2b8(0x18)
};

// Class OceanPlugin.*ed33f09e51
// Size: 0xdc0 (Inherited: 0xd70)
struct U*ed33f09e51 : UDestructibleComponent {
	char pad_D70[0x10]; // 0xd70(0x10)
	struct AOceanManager* OceanManager; // 0xd80(0x08)
	float ChunkDensity; // 0xd88(0x04)
	float FluidDensity; // 0xd8c(0x04)
	float FluidLinearDamping; // 0xd90(0x04)
	float FluidAngularDamping; // 0xd94(0x04)
	struct FVector VelocityDamper; // 0xd98(0x0c)
	bool ClampMaxVelocity; // 0xda4(0x01)
	char pad_DA5[0x3]; // 0xda5(0x03)
	float MaxUnderwaterVelocity; // 0xda8(0x04)
	float TestPointRadius; // 0xdac(0x04)
	bool DrawDebugPoints; // 0xdb0(0x01)
	bool EnableWaveForces; // 0xdb1(0x01)
	char pad_DB2[0x2]; // 0xdb2(0x02)
	float WaveForceMultiplier; // 0xdb4(0x04)
	float ChunkSleepThreshold; // 0xdb8(0x04)
	float ChunkStabilizationThreshold; // 0xdbc(0x04)
};

// Class OceanPlugin.BuoyantDestructible
// Size: 0x408 (Inherited: 0x400)
struct ABuoyantDestructible : AActor {
	struct U*ed33f09e51* BuoyantDestructibleComponent; // 0x400(0x08)
};

// Class OceanPlugin.*2f44e2ab6e
// Size: 0xc20 (Inherited: 0xbb0)
struct U*2f44e2ab6e : UStaticMeshComponent {
	char pad_BB0[0x8]; // 0xbb0(0x08)
	bool bVerticalForcesOnly; // 0xbb8(0x01)
	bool bUseWaterPatch; // 0xbb9(0x01)
	bool bUseStaticForces; // 0xbba(0x01)
	bool bUseDynamicForces; // 0xbbb(0x01)
	char pad_BBC[0x4]; // 0xbbc(0x04)
	struct AOceanManager* OceanManager; // 0xbc0(0x08)
	bool bDrawForceArrows; // 0xbc8(0x01)
	bool bDrawWaterline; // 0xbc9(0x01)
	bool bDrawVertices; // 0xbca(0x01)
	bool bDrawTriangles; // 0xbcb(0x01)
	bool bDrawSubtriangles; // 0xbcc(0x01)
	char pad_BCD[0x3]; // 0xbcd(0x03)
	float ForceArrowSize; // 0xbd0(0x04)
	bool bOverrideMeshDensity; // 0xbd4(0x01)
	char pad_BD5[0x3]; // 0xbd5(0x03)
	float MeshDensity; // 0xbd8(0x04)
	bool bOverrideMass; // 0xbdc(0x01)
	char pad_BDD[0x3]; // 0xbdd(0x03)
	float Mass; // 0xbe0(0x04)
	float WaterDensity; // 0xbe4(0x04)
	char pad_BE8[0x28]; // 0xbe8(0x28)
	struct U*5571daa0c5* *0cb59b0923; // 0xc10(0x08)
	char pad_C18[0x8]; // 0xc18(0x08)
};

// Class OceanPlugin.CustomVehicleController
// Size: 0x7c0 (Inherited: 0x7b0)
struct ACustomVehicleController : APlayerController {
	struct APawn* *500819249d; // 0x7b0(0x08)
	char pad_7B8[0x8]; // 0x7b8(0x08)

	bool *ae12026cb6(); // Function OceanPlugin.CustomVehicleController.*ae12026cb6 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x69390e0
	struct APawn* *6a38329ad8(); // Function OceanPlugin.CustomVehicleController.*6a38329ad8 // Native|Public|BlueprintCallable // @ game+0x6938d58
	void EnableBuoyancy(); // Function OceanPlugin.CustomVehicleController.EnableBuoyancy // Exec|Native|Public // @ game+0x6938d40
	void DrawBuoyancyPoints(); // Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints // Exec|Native|Public // @ game+0x6938c4c
	void *31abef4fa9(); // Function OceanPlugin.CustomVehicleController.*31abef4fa9 // Native|Public|BlueprintCallable // @ game+0x593d6d0
};

// Class OceanPlugin.FishManager
// Size: 0x458 (Inherited: 0x400)
struct AFishManager : AActor {
	struct TArray<struct UClass*> flockTypes; // 0x400(0x10)
	struct TArray<float> numInFlock; // 0x410(0x10)
	float minZ; // 0x420(0x04)
	float maxZ; // 0x424(0x04)
	float underwaterBoxLength; // 0x428(0x04)
	bool attachToPlayer; // 0x42c(0x01)
	bool DebugMode; // 0x42d(0x01)
	char pad_42E[0x2]; // 0x42e(0x02)
	struct UClass* PlayerType; // 0x430(0x08)
	char pad_438[0x20]; // 0x438(0x20)
};

// Class OceanPlugin.FlockFish
// Size: 0x5e0 (Inherited: 0x460)
struct AFlockFish : APawn {
	char pad_460[0x10]; // 0x460(0x10)
	struct USphereComponent* FishInteractionSphere; // 0x470(0x08)
	bool isLeader; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct TArray<struct UClass*> enemyTypes; // 0x480(0x10)
	struct TArray<struct UClass*> preyTypes; // 0x490(0x10)
	struct UClass* neighborType; // 0x4a0(0x08)
	float followDist; // 0x4a8(0x04)
	float Speed; // 0x4ac(0x04)
	float MaxSpeed; // 0x4b0(0x04)
	float turnSpeed; // 0x4b4(0x04)
	float turnFrequency; // 0x4b8(0x04)
	float hungerResetTime; // 0x4bc(0x04)
	float distBehindSpeedUpRange; // 0x4c0(0x04)
	float SeperationDistanceMultiplier; // 0x4c4(0x04)
	float FleeDistanceMultiplier; // 0x4c8(0x04)
	float FleeAccelerationMultiplier; // 0x4cc(0x04)
	float ChaseAccelerationMultiplier; // 0x4d0(0x04)
	float SeekDecelerationMultiplier; // 0x4d4(0x04)
	float AvoidForceMultiplier; // 0x4d8(0x04)
	float AvoidanceForce; // 0x4dc(0x04)
	struct UClass* PlayerType; // 0x4e0(0x08)
	struct FVector underwaterMin; // 0x4e8(0x0c)
	struct FVector underwaterMax; // 0x4f4(0x0c)
	float CustomZSeekMin; // 0x500(0x04)
	float CustomZSeekMax; // 0x504(0x04)
	float NumNeighborsToEvaluate; // 0x508(0x04)
	float UpdateEveryTick; // 0x50c(0x04)
	char pad_510[0x10]; // 0x510(0x10)
	bool DebugMode; // 0x520(0x01)
	char pad_521[0xbf]; // 0x521(0xbf)

	int32 OnEndOverlap(); // Function OceanPlugin.FlockFish.OnEndOverlap // Final|Native|Protected // @ game+0x69396f0
	struct FHitResult OnBeginOverlap(); // Function OceanPlugin.FlockFish.OnBeginOverlap // Final|Native|Protected|HasOutParms // @ game+0x69394a0
};

// Class OceanPlugin.*d535d36a34
// Size: 0x500 (Inherited: 0x4e0)
struct U*d535d36a34 : USceneComponent {
	bool UpdateInEditor; // 0x4e0(0x01)
	enum class EFollowMethod FollowMethod; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float GridSnapSize; // 0x4e4(0x04)
	float MaxLookAtDistance; // 0x4e8(0x04)
	bool ScaleByDistance; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	float ScaleDistanceFactor; // 0x4f0(0x04)
	float ScaleStartDistance; // 0x4f4(0x04)
	float ScaleMin; // 0x4f8(0x04)
	float ScaleMax; // 0x4fc(0x04)
};

// Class OceanPlugin.OceanMeshComponent
// Size: 0xa40 (Inherited: 0xa10)
struct UOceanMeshComponent : UPrimitiveComponent {
	struct UStaticMesh* SourceMesh; // 0xa08(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0xa10(0x08)
	struct UMaterialInterface* LODMaterial; // 0xa18(0x08)
	struct UMaterialInterface* SimpleMaterial; // 0xa20(0x08)
	struct FVector BoundsExtent; // 0xa28(0x0c)
	float LODTransitionStart; // 0xa34(0x04)
	float LODTransitionEnd; // 0xa38(0x04)

	float *f3d3b89316(); // Function OceanPlugin.OceanMeshComponent.*f3d3b89316 // Final|Native|Public|BlueprintCallable // @ game+0x6939a04
	struct FVector *f4bc875ded(); // Function OceanPlugin.OceanMeshComponent.*f4bc875ded // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x693986c
};

// Class OceanPlugin.TimeManager
// Size: 0x4c8 (Inherited: 0x400)
struct ATimeManager : AActor {
	struct F*de25589e23 CurrentLocalTime; // 0x400(0x1c)
	float Latitude; // 0x41c(0x04)
	float Longitude; // 0x420(0x04)
	int32 OffsetUTC; // 0x424(0x04)
	int32 OffsetDST; // 0x428(0x04)
	bool bAllowDaylightSavings; // 0x42c(0x01)
	bool bDaylightSavingsActive; // 0x42d(0x01)
	char pad_42E[0x2]; // 0x42e(0x02)
	float TimeScaleMultiplier; // 0x430(0x04)
	float SolarTime; // 0x434(0x04)
	float LocalClockTime; // 0x438(0x04)
	float TimeCorrection; // 0x43c(0x04)
	int32 LSTM; // 0x440(0x04)
	int32 DayOfYear; // 0x444(0x04)
	float EoT; // 0x448(0x04)
	float SolarAltAngle; // 0x44c(0x04)
	float SolarDeclination; // 0x450(0x04)
	float SolarAzimuth; // 0x454(0x04)
	float SolarHRA; // 0x458(0x04)
	float SiderealTime; // 0x45c(0x04)
	float LunarAltAngle; // 0x460(0x04)
	float LunarHRA; // 0x464(0x04)
	float LunarDeclination; // 0x468(0x04)
	float LunarAzimuth; // 0x46c(0x04)
	float LunarRightAsc; // 0x470(0x04)
	float LunarElapsedDays; // 0x474(0x04)
	float EcLongitude; // 0x478(0x04)
	float EcLatitude; // 0x47c(0x04)
	float EcDistance; // 0x480(0x04)
	float PartL; // 0x484(0x04)
	float PartM; // 0x488(0x04)
	float PartF; // 0x48c(0x04)
	char pad_490[0x38]; // 0x490(0x38)

	float *452b60b89f(); // Function OceanPlugin.TimeManager.*452b60b89f // Final|Native|Public|BlueprintCallable // @ game+0x6938fcc
	struct FRotator *54a524981e(); // Function OceanPlugin.TimeManager.*54a524981e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6938c18
	float *c0a4435af6(); // Function OceanPlugin.TimeManager.*c0a4435af6 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6938ec0
	float *2aa4474fb2(); // Function OceanPlugin.TimeManager.*2aa4474fb2 // Final|Native|Public|BlueprintCallable // @ game+0x6939240
	float *c893e98211(); // Function OceanPlugin.TimeManager.*c893e98211 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6939218
	struct F*de25589e23 *65c0af23b6(); // Function OceanPlugin.TimeManager.*65c0af23b6 // Final|Native|Public|BlueprintCallable // @ game+0x69392d8
	int32 *924cca3e51(); // Function OceanPlugin.TimeManager.*924cca3e51 // Final|Native|Public|BlueprintCallable // @ game+0x66bee18
	int32 *4f48b68109(); // Function OceanPlugin.TimeManager.*4f48b68109 // Final|Native|Public|BlueprintCallable // @ game+0x6938ef8
	bool IsLeapYear(); // Function OceanPlugin.TimeManager.IsLeapYear // Final|Native|Public|BlueprintCallable // @ game+0x6939384
	struct FRotator *651b16b16d(); // Function OceanPlugin.TimeManager.*651b16b16d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6938b74
	float *3263eb45e0(); // Function OceanPlugin.TimeManager.*3263eb45e0 // Final|Native|Public|BlueprintCallable // @ game+0x693996c
	float *2fef94a4d0(); // Function OceanPlugin.TimeManager.*2fef94a4d0 // Final|Native|Public|BlueprintCallable // @ game+0x6938ba8
	int32 GetDayOfYear(); // Function OceanPlugin.TimeManager.GetDayOfYear // Final|Native|Public|BlueprintCallable // @ game+0x6938dec
};

// Class OceanPlugin.*5571daa0c5
// Size: 0x280 (Inherited: 0x200)
struct U*5571daa0c5 : UActorComponent {
	float DesiredCellSize; // 0x200(0x04)
	bool bOnlyCollidingComponents; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float GridSizeMultiplier; // 0x208(0x04)
	bool bDrawUsedTriangles; // 0x20c(0x01)
	bool bDrawHeightmap; // 0x20d(0x01)
	char pad_20E[0x62]; // 0x20e(0x62)
	struct AOceanManager* *5f6aac570d; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
};

