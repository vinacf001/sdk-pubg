// Enum Engine.ETextGender
enum class ETextGender : uint8 {
	Masculine,
	Feminine,
	Neuter,
	ETextGender_MAX,
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	Int,
	UInt,
	Float,
	Double,
	Text,
	Gender,
	EFormatArgumentType_MAX,
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	Destroyed,
	LevelTransition,
	EndPlayInEditor,
	RemovedFromWorld,
	Quit,
	EEndPlayReason_MAX,
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	Cleared,
	NewPath,
	UpdatedDueToGoalMoved,
	UpdatedDueToNavigationChanged,
	Invalidated,
	RePathFailed,
	MetaPathUpdate,
	Custom,
	ENavPathEvent_MAX,
};

// Enum Engine.*0d10befbc7
enum class *0d10befbc7 : uint8 {
	*01b74de44e,
	*8cd9083156,
	*4a6f88e8ae,
	*d0a47deed4,
	*b40dc504a7,
	*0d10befbc7_MAX,
};

// Enum Engine.*bcebe0d081
enum class *bcebe0d081 : uint8 {
	*b68e006b67,
	*12cf31f161,
	*805fe117f9,
	*0e09f7fec0,
	*4fde362fd8,
	*bcebe0d081_MAX,
};

// Enum Engine.*3a1b104e86
enum class *3a1b104e86 : uint8 {
	*ed526f80cc,
	*528ad7cbdb,
	*16f9ec168c,
	*69af6883b2,
	*3dd136f813,
	*3a1b104e86_MAX,
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8 {
	RCCE_Cycle,
	RCCE_CycleWithOffset,
	RCCE_Oscillate,
	RCCE_Linear,
	RCCE_Constant,
	RCCE_None,
	RCCE_MAX,
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	Absolute,
	Relative,
	Proportional,
	EAnimLinkMethod_MAX,
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 {
	NoFiltering,
	LOD,
	ENotifyFilterType_MAX,
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	Queued,
	BranchingPoint,
	EMontageNotifyTickType_MAX,
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	Begin,
	End,
	EAnimNotifyEventType_MAX,
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 {
	RefPose,
	AnimFirstFrame,
	Zero,
	ERootMotionRootLock_MAX,
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 {
	Linear,
	Cubic,
	HermiteCubic,
	Sinusoidal,
	QuadraticInOut,
	CubicInOut,
	QuarticInOut,
	QuinticInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	ExpIn,
	ExpOut,
	ExpInOut,
	Custom,
	EAlphaBlendOption_MAX,
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists,
	NetDriverCreateFailure,
	NetDriverListenFailure,
	ConnectionLost,
	ConnectionTimeout,
	FailureReceived,
	OutdatedClient,
	OutdatedServer,
	PendingConnectionFailure,
	NetGuidMismatch,
	NetChecksumMismatch,
	ENetworkFailure_MAX,
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	NoLevel,
	LoadMapFailure,
	InvalidURL,
	PackageMissing,
	PackageVersion,
	NoDownload,
	TravelFailure,
	CheatCommands,
	PendingNetGameCreateFailure,
	CloudSaveFailure,
	ServerTravelFailure,
	ClientTravelFailure,
	ETravelFailure_MAX,
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 {
	TG_PrePhysics,
	TG_StartPhysics,
	TG_DuringPhysics,
	TG_EndPhysics,
	TG_PostPhysics,
	TG_PostUpdateWork,
	TG_LastDemotable,
	TG_NewlySpawned,
	TG_MAX,
};

// Enum Engine.EPendingCreationType
enum class EPendingCreationType : uint8 {
	None,
	IncrementalAndOnDemand,
	OnDemandOnly,
	EPendingCreationType_MAX,
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 {
	Native,
	SimpleConstructionScript,
	UserConstructionScript,
	Instance,
	EComponentCreationMethod_MAX,
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	Custom,
	X,
	Y,
	Z,
	UseGlobalPhysicsSetting,
	EPlaneConstraintAxisSetting_MAX,
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 {
	OneShot,
	OneShot_Reverse,
	Loop_Reset,
	PingPong,
	EInterpToBehaviourType_MAX,
};

// Enum Engine.*12f3cc3e43
enum class *12f3cc3e43 : uint8 {
	*f37413f388,
	*adfdf3fd84,
	*f3b73351f3,
	*6e1c96848a,
	*c16878975f,
	*7b089c672d,
	*014489ac32,
	*12f3cc3e43_MAX,
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8 {
	MOVE_None,
	MOVE_Walking,
	MOVE_NavWalking,
	MOVE_Falling,
	MOVE_Swimming,
	MOVE_Flying,
	MOVE_Custom,
	MOVE_MAX,
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	Unknown,
	Portrait,
	PortraitUpsideDown,
	LandscapeLeft,
	LandscapeRight,
	FaceUp,
	FaceDown,
	EScreenOrientation_MAX,
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 {
	ObjectTypeQuery1,
	ObjectTypeQuery2,
	ObjectTypeQuery3,
	ObjectTypeQuery4,
	ObjectTypeQuery5,
	ObjectTypeQuery6,
	ObjectTypeQuery7,
	ObjectTypeQuery8,
	ObjectTypeQuery9,
	ObjectTypeQuery10,
	ObjectTypeQuery11,
	ObjectTypeQuery12,
	ObjectTypeQuery13,
	ObjectTypeQuery14,
	ObjectTypeQuery15,
	ObjectTypeQuery16,
	ObjectTypeQuery17,
	ObjectTypeQuery18,
	ObjectTypeQuery19,
	ObjectTypeQuery20,
	ObjectTypeQuery21,
	ObjectTypeQuery22,
	ObjectTypeQuery23,
	ObjectTypeQuery24,
	ObjectTypeQuery25,
	ObjectTypeQuery26,
	ObjectTypeQuery27,
	ObjectTypeQuery28,
	ObjectTypeQuery29,
	ObjectTypeQuery30,
	ObjectTypeQuery31,
	ObjectTypeQuery32,
	ObjectTypeQuery_MAX,
	EObjectTypeQuery_MAX,
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 {
	None,
	ForOneFrame,
	ForDuration,
	Persistent,
	EDrawDebugTrace_MAX,
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 {
	TraceTypeQuery1,
	TraceTypeQuery2,
	TraceTypeQuery3,
	TraceTypeQuery4,
	TraceTypeQuery5,
	TraceTypeQuery6,
	TraceTypeQuery7,
	TraceTypeQuery8,
	TraceTypeQuery9,
	TraceTypeQuery10,
	TraceTypeQuery11,
	TraceTypeQuery12,
	TraceTypeQuery13,
	TraceTypeQuery14,
	TraceTypeQuery15,
	TraceTypeQuery16,
	TraceTypeQuery17,
	TraceTypeQuery18,
	TraceTypeQuery19,
	TraceTypeQuery20,
	TraceTypeQuery21,
	TraceTypeQuery22,
	TraceTypeQuery23,
	TraceTypeQuery24,
	TraceTypeQuery25,
	TraceTypeQuery26,
	TraceTypeQuery27,
	TraceTypeQuery28,
	TraceTypeQuery29,
	TraceTypeQuery30,
	TraceTypeQuery31,
	TraceTypeQuery32,
	TraceTypeQuery_MAX,
	ETraceTypeQuery_MAX,
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 {
	Move,
	Stop,
	Return,
	EMoveComponentAction_MAX,
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	Quit,
	Background,
	EQuitPreference_MAX,
};

// Enum Engine.*1148c7239b
enum class *1148c7239b : uint8 {
	*d923e15de1,
	*4fa96d595c,
	*214d68622b,
	*2aca78b3c8,
	*eea4ba1114,
	*c4945442af,
	*1148c7239b_MAX,
};

// Enum Engine.EStanceMode
enum class EStanceMode : uint8 {
	STANCE_None,
	STANCE_Stand,
	STANCE_Crouch,
	STANCE_Prone,
	STANCE_Carry,
	STANCE_Carried,
	STANCE_MAX,
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	KeepRelativeOffset,
	KeepWorldPosition,
	SnapToTarget,
	SnapToTargetIncludingScale,
	EAttachLocation_MAX,
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	KeepRelative,
	KeepWorld,
	SnapToTarget,
	EAttachmentRule_MAX,
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None,
	ROLE_SimulatedProxy,
	ROLE_AutonomousProxy,
	ROLE_Authority,
	ROLE_MAX,
};

// Enum Engine.*90c9408cc7
enum class *90c9408cc7 : uint8 {
	*1a3f61cb20,
	*b02e3dc5ff,
	*6ed24c2ece,
	*90c9408cc7_MAX,
};

// Enum Engine.*3d79023269
enum class *3d79023269 : uint8 {
	*8d54eb56a8,
	*39e77115ea,
	*163d222e23,
	*c1dec7a6e3,
	*3d79023269_MAX,
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 {
	Disabled,
	Player0,
	Player1,
	Player2,
	Player3,
	Player4,
	Player5,
	Player6,
	Player7,
	EAutoReceiveInput_MAX,
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	Undefined,
	AlwaysSpawn,
	AdjustIfPossibleButAlwaysSpawn,
	AdjustIfPossibleButDontSpawnIfColliding,
	DontSpawnIfColliding,
	ESpawnActorCollisionHandlingMethod_MAX,
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 {
	UseConfigDefault,
	AlwaysUpdate,
	OnlyUpdateMovable,
	NeverUpdate,
	EActorUpdateOverlapsMethod_MAX,
};

// Enum Engine.*1148c445f2
enum class *1148c445f2 : uint8 {
	*0268534aee,
	*05a4d433b5,
	*11dc5c7ccd,
	*1148c445f2_MAX,
};

// Enum Engine.*2e833bd098
enum class *2e833bd098 : uint8 {
	*f10336229c,
	*50656cc808,
	*0101ce1c11,
	*f04e62027b,
	*2e833bd098_MAX,
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	Disabled,
	PlacedInWorld,
	Spawned,
	PlacedInWorldOrSpawned,
	EAutoPossessAI_MAX,
};

// Enum Engine.*602ce54d82
enum class *602ce54d82 : uint8 {
	*0cd79476bf,
	*c74197b317,
	*fe84982a11,
	*e5fcf260e3,
	*6077930ec0,
	*e07bb6c464,
	*602ce54d82_MAX,
};

// Enum Engine.EDecalChannel
enum class EDecalChannel : uint8 {
	Channel0,
	Channel1,
	Channel2,
	Channel3,
	Num,
	EDecalChannel_MAX,
};

// Enum Engine.*f1e85ae637
enum class *f1e85ae637 : uint8 {
	*d6f8d95fbe,
	*61192dcf01,
	*4dc046c968,
	*e69cb98ad4,
	*066edcfaea,
	*f1e85ae637_MAX,
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	Default,
	ForceCPUAndGPU,
	EMeshBufferAccess_MAX,
};

// Enum Engine.*31a328f8be
enum class *31a328f8be : uint8 {
	*8336029e07,
	*fd51e83770,
	*0915ee9803,
	*31a328f8be_MAX,
};

// Enum Engine.*86b9f525fb
enum class *86b9f525fb : uint8 {
	*9cb5e759e5,
	*3c9394116d,
	*303cfeab46,
	*bc02868fc6,
	*86b9f525fb_MAX,
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 {
	Invalid,
	Bone,
	Socket,
	EComponentSocketType_MAX,
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 {
	Static,
	Stationary,
	Movable,
	EComponentMobility_MAX,
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8 {
	SurfaceType_Default,
	SurfaceType1,
	SurfaceType2,
	SurfaceType3,
	SurfaceType4,
	SurfaceType5,
	SurfaceType6,
	SurfaceType7,
	SurfaceType8,
	SurfaceType9,
	SurfaceType10,
	SurfaceType11,
	SurfaceType12,
	SurfaceType13,
	SurfaceType14,
	SurfaceType15,
	SurfaceType16,
	SurfaceType17,
	SurfaceType18,
	SurfaceType19,
	SurfaceType20,
	SurfaceType21,
	SurfaceType22,
	SurfaceType23,
	SurfaceType24,
	SurfaceType25,
	SurfaceType26,
	SurfaceType27,
	SurfaceType28,
	SurfaceType29,
	SurfaceType30,
	SurfaceType31,
	SurfaceType32,
	SurfaceType33,
	SurfaceType34,
	SurfaceType35,
	SurfaceType36,
	SurfaceType37,
	SurfaceType38,
	SurfaceType39,
	SurfaceType40,
	SurfaceType41,
	SurfaceType42,
	SurfaceType43,
	SurfaceType44,
	SurfaceType45,
	SurfaceType46,
	SurfaceType47,
	SurfaceType48,
	SurfaceType49,
	SurfaceType50,
	SurfaceType51,
	SurfaceType52,
	SurfaceType53,
	SurfaceType54,
	SurfaceType55,
	SurfaceType56,
	SurfaceType57,
	SurfaceType58,
	SurfaceType59,
	SurfaceType60,
	SurfaceType61,
	SurfaceType62,
	SurfaceType_Max,
	EPhysicalSurface_MAX,
};

// Enum Engine.*a2319fa2a4
enum class *a2319fa2a4 : uint8 {
	*fe4df0d7fb,
	*5edc3e369e,
	*ab0a7f5fb3,
	*21971aaadd,
	*43bc9c9c58,
	*a2319fa2a4_MAX,
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 {
	DORM_Never,
	DORM_Awake,
	DORM_DormantAll,
	DORM_DormantPartial,
	DORM_ConnectedDormantPartial,
	DORM_Initial,
	DORN_MAX,
	ENetDormancy_MAX,
};

// Enum Engine.*09228c6f17
enum class *09228c6f17 : uint8 {
	*6d42002dee,
	*d6564345a0,
	*456553569b,
	*e1d1716523,
	*8a351c952d,
	*d590f915f8,
	*e37192124f,
	*ea9e708934,
	*09228c6f17_MAX,
};

// Enum Engine.*1701574191
enum class *1701574191 : uint8 {
	*5e38f32436,
	*c522123fdb,
	*b7d2443e47,
	*1701574191_MAX,
};

// Enum Engine.*3614c2f25f
enum class *3614c2f25f : uint8 {
	*8b6ec1c87d,
	*f1d27fa639,
	*3e98a60d6d,
	*57382399de,
	*3614c2f25f_MAX,
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	NoCollision,
	QueryOnly,
	PhysicsOnly,
	QueryAndPhysics,
	ECollisionEnabled_MAX,
};

// Enum Engine.*15fac4c7a0
enum class *15fac4c7a0 : uint8 {
	*8883d297c8,
	*a42d75dd72,
	*9ed2c46bc6,
	*9f8bda73b6,
	*3ec4db86d6,
	*b9c4728d96,
	*15fac4c7a0_MAX,
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 {
	Normal,
	Sensitive,
	Custom,
	ESleepFamily_MAX,
};

// Enum Engine.*92e9a571fb
enum class *92e9a571fb : uint8 {
	*72386f3caf,
	*507bdee773,
	*7249ccf55b,
	*92e9a571fb_MAX,
};

// Enum Engine.*0a26e1cb3e
enum class *0a26e1cb3e : uint8 {
	*a3b91fe4f1,
	*c3c3f6586b,
	*7eb687e764,
	*f799cf72fd,
	*0a26e1cb3e_MAX,
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore,
	ECR_Overlap,
	ECR_Block,
	ECR_MAX,
};

// Enum Engine.*7c017018a5
enum class *7c017018a5 : uint8 {
	*4be66b5811,
	*ca1d9071e7,
	*2691894ee9,
	*ed116b75d5,
	*7c017018a5_MAX,
};

// Enum Engine.*fe2da03ea4
enum class *fe2da03ea4 : uint8 {
	*35f69bf6b3,
	*a21dc16366,
	*9e9fa1184f,
	*b4eb35523c,
	*fe2da03ea4_MAX,
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 {
	ECC_WorldStatic,
	ECC_WorldDynamic,
	ECC_Pawn,
	ECC_Visibility,
	ECC_Camera,
	ECC_PhysicsBody,
	ECC_Vehicle,
	ECC_Destructible,
	ECC_EngineTraceChannel1,
	ECC_EngineTraceChannel2,
	ECC_EngineTraceChannel3,
	ECC_EngineTraceChannel4,
	ECC_EngineTraceChannel5,
	ECC_EngineTraceChannel6,
	ECC_GameTraceChannel1,
	ECC_GameTraceChannel2,
	ECC_GameTraceChannel3,
	ECC_GameTraceChannel4,
	ECC_GameTraceChannel5,
	ECC_GameTraceChannel6,
	ECC_GameTraceChannel7,
	ECC_GameTraceChannel8,
	ECC_GameTraceChannel9,
	ECC_GameTraceChannel10,
	ECC_GameTraceChannel11,
	ECC_GameTraceChannel12,
	ECC_GameTraceChannel13,
	ECC_GameTraceChannel14,
	ECC_GameTraceChannel15,
	ECC_GameTraceChannel16,
	ECC_GameTraceChannel17,
	ECC_GameTraceChannel18,
	ECC_OverlapAll_Deprecated,
	ECC_MAX,
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	Disabled,
	Linear,
	Exponential,
	Replay,
	RotationOnly,
	ENetworkSmoothingMode_MAX,
};

// Enum Engine.*9445aa473a
enum class *9445aa473a : uint8 {
	*eb0c5c2801,
	*8043f198bf,
	*850621ecf2,
	*31323d1140,
	*9445aa473a_MAX,
};

// Enum Engine.*187cbd7e6e
enum class *187cbd7e6e : uint8 {
	*ea5f5efeea,
	*56f9fa9c90,
	*852997cde6,
	*3ef9817e35,
	*ae486260fa,
	*75c03b62fe,
	*bc413e5893,
	*187cbd7e6e_MAX,
};

// Enum Engine.*cd738af426
enum class *cd738af426 : uint8 {
	*7f180fe4f3,
	*5b25a84365,
	*401b9dd805,
	*77bb81659e,
	*891c028283,
	*cd738af426_MAX,
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 {
	SAMPLERTYPE_Color,
	SAMPLERTYPE_Grayscale,
	SAMPLERTYPE_Alpha,
	SAMPLERTYPE_Normal,
	SAMPLERTYPE_Masks,
	SAMPLERTYPE_DistanceFieldFont,
	SAMPLERTYPE_LinearColor,
	SAMPLERTYPE_LinearGrayscale,
	SAMPLERTYPE_MAX,
};

// Enum Engine.*2dd51cc1f4
enum class *2dd51cc1f4 : uint8 {
	*5b55ebf6c1,
	*3762ecdcd8,
	*db19f7dbf3,
	*a6babb711e,
	*2dd51cc1f4_MAX,
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 {
	MSM_Unlit,
	MSM_DefaultLit,
	MSM_Subsurface,
	MSM_PreintegratedSkin,
	MSM_ClearCoat,
	MSM_SubsurfaceProfile,
	MSM_TwoSidedFoliage,
	MSM_Hair,
	MSM_Cloth,
	MSM_Eye,
	MSM_MAX,
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 {
	SceneDepth,
	DistanceField,
	HeightBuffer,
	EParticleCollisionMode_MAX,
};

// Enum Engine.*37b72e83a6
enum class *37b72e83a6 : uint8 {
	*3d5d06b85c,
	*c7feaedf05,
	*ca94933399,
	*2494e361a1,
	*37b72e83a6_MAX,
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	Force8BitsPerChannel,
	Default,
	HighPrecisionNormals,
	Force16BitsPerChannel,
	EGBufferFormat_MAX,
};

// Enum Engine.*d1df128539
enum class *d1df128539 : uint8 {
	*c1dc3ca280,
	*3dd08695fb,
	*ba6eba3dec,
	*6b400d05e5,
	*d1df128539_MAX,
};

// Enum Engine.*b7ca9f4a0d
enum class *b7ca9f4a0d : uint8 {
	*d33cf1cc58,
	*c7e5d77a73,
	*1c466f53ed,
	*79c7c4c39d,
	*0549eb6746,
	*e40d973018,
	*16ea01a610,
	*1875c46ac6,
	*7bf56b70db,
	*a874af62c4,
	*383967da65,
	*817418c16e,
	*b7ca9f4a0d_MAX,
};

// Enum Engine.*2c35a18f07
enum class *2c35a18f07 : uint8 {
	*ff0b3d34b1,
	*f0abce9e48,
	*cac66b50c1,
	*aa51edce90,
	*2c35a18f07_MAX,
};

// Enum Engine.*7bbadfea61
enum class *7bbadfea61 : uint8 {
	*6c82b0ad29,
	*0f787ff323,
	*c0d300f348,
	*7bbadfea61_MAX,
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 {
	TLM_VolumetricNonDirectional,
	TLM_VolumetricDirectional,
	TLM_VolumetricPerVertexNonDirectional,
	TLM_VolumetricPerVertexDirectional,
	TLM_Surface,
	TLM_SurfaceDirectional,
	TLM_SurfacePerVertexNonDirectional,
	TLM_SurfacePerVertexDirectional,
	TLM_MAX,
};

// Enum Engine.*481d0f6880
enum class *481d0f6880 : uint8 {
	*45c95b2f95,
	*dce4914445,
	*97d99dd697,
	*1865275ad5,
	*481d0f6880_MAX,
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8 {
	BLEND_Opaque,
	BLEND_Masked,
	BLEND_Translucent,
	BLEND_Additive,
	BLEND_Modulate,
	BLEND_AlphaComposite,
	BLEND_MAX,
};

// Enum Engine.*3285c2fab5
enum class *3285c2fab5 : uint8 {
	*172c676a14,
	*7ef4893368,
	*5eeca91eb6,
	*3285c2fab5_MAX,
};

// Enum Engine.*5b12535706
enum class *5b12535706 : uint8 {
	*1ca8d66d53,
	*feb6938fd2,
	*2627f3a432,
	*6991364b1d,
	*5b12535706_MAX,
};

// Enum Engine.*b2d3e352d1
enum class *b2d3e352d1 : uint8 {
	*d3d1855d13,
	*e29edd1bb5,
	*0e8a342cc2,
	*b2d3e352d1_MAX,
};

// Enum Engine.*1c533ed9a0
enum class *1c533ed9a0 : uint8 {
	*5c7116a7ae,
	*61b1a7cf05,
	*11f5137997,
	*6ccd0ada39,
	*1c533ed9a0_MAX,
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV,
	AspectRatio_MaintainXFOV,
	AspectRatio_MajorAxisFOV,
	AspectRatio_MAX,
};

// Enum Engine.*e9d7c06b57
enum class *e9d7c06b57 : uint8 {
	*6e0b67f804,
	*5076742bd6,
	*ff91d0f9af,
	*0cf0d3870f,
	*ec6fdf6434,
	*458244c747,
	*70b2c71381,
	*e0c22cf837,
	*7efe3f1247,
	*09fe4846ea,
	*818f37bde2,
	*1c76dffc94,
	*e9a63490fd,
	*3f593fc27a,
	*d79e3de59f,
	*066194d4bd,
	*8bc3de2895,
	*fbf9d9def5,
	*ea7a4b931f,
	*2205b45343,
	*bf924fbf65,
	*3cf3b08cb2,
	*15f456480e,
	*79b0ca3491,
	*478039fe4c,
	*8427897a8f,
	*186957c04e,
	*553082b083,
	*47e3377f45,
	*3d67956fbb,
	*8816031fc3,
	*a86ac20404,
	*e9d7c06b57_MAX,
};

// Enum Engine.EDemoFailure
enum class EDemoFailure : uint8 {
	None,
	PlayCommand,
	PlayNoWorld,
	PlayPIE,
	PlayCreateDemoDriver,
	Connect,
	ConnectNoWorld,
	ConnectNoGameInstance,
	ConnectInitBase,
	ConnectStreamingReady,
	ConnectDemoNotFound,
	ConnectCorrupt,
	ConnectSpecificCorrupt,
	ConnectPostNoWorld,
	ConnectLoadMap,
	TickDispatchStreamer,
	TickDispatchFileAr,
	ConditionallyReadFrame,
	ConditionallyReadFrameFileAr,
	ConditionallyReadFrameStreamer,
	ConditionallyReadFrameTimeChecksum,
	ConditionallyReadFrameFileAr2,
	ConditionallyReadFrameExternalData,
	ConditionallyReadFramePacket,
	ConditionallyProcessPacket,
	DownloadHeader,
	DownloadHeaderDemoNotFound,
	DownloadHeaderCorrupt,
	DownloadHeaderSpecificCorrupt,
	DownloadHeaderLevelNamesAndTimes,
	CheckpointReady,
	CheckpointArchiveEmpty,
	CheckpointReadFrame,
	CheckpointReadFrameFileAr,
	CheckpointReadFrameStreamer,
	CheckpointReadFrameTimeChecksum,
	CheckpointReadFrameFileAr2,
	CheckpointReadFrameExternalData,
	CheckpointReadFramePacket,
	CheckpointProcessPacket,
	RecCommand,
	RecNoReplays,
	RecNoWorld,
	RecPIE,
	RecAlreadyPlay,
	RecCreateDemoDriver,
	Listen,
	ListenInitBase,
	ListenNoWorldSettings,
	ListenWriteHeader,
	ListenStreamingReady,
	TickFlushStreamer,
	TickFlushFileAr,
	SeamlessTravelWriteHeader,
	EDemoFailure_MAX,
};

// Enum Engine.*023f32a08d
enum class *023f32a08d : uint8 {
	*316451e7e1,
	*b5aba3abd9,
	*3d579b88fa,
	*bed85f6eb7,
	*023f32a08d_MAX,
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	NotLagging,
	Lagging,
	ENetworkLagState_MAX,
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	DoNotLock,
	LockOnCapture,
	LockAlways,
	EMouseLockMode_MAX,
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	NoCapture,
	CapturePermanently,
	CapturePermanently_IncludingInitialMouseDown,
	CaptureDuringMouseDown,
	CaptureDuringRightMouseDown,
	EMouseCaptureMode_MAX,
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 {
	Enabled,
	Disabled,
	DevelopmentOnly,
	ENodeEnabledState_MAX,
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	NoPins,
	Shown,
	Hidden,
	ENodeAdvancedPins_MAX,
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	FullTitle,
	ListView,
	EditableTitle,
	MenuTitle,
	MAX_TitleTypes,
	ENodeTitleType_MAX,
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 {
	EGPD_Input,
	EGPD_Output,
	EGPD_MAX,
};

// Enum Engine.*43ae090df0
enum class *43ae090df0 : uint8 {
	*22804d5936,
	*0eb4d90b03,
	*ed712d8135,
	*43ae090df0_MAX,
};

// Enum Engine.*22ea206da9
enum class *22ea206da9 : uint8 {
	*503ee0aae7,
	*6b88547f70,
	*14dd497669,
	*657f2fc176,
	*8262e3e7f1,
	*22ea206da9_MAX,
};

// Enum Engine.*40da61f0d8
enum class *40da61f0d8 : uint8 {
	*4334cd61e9,
	*5bddaaf0c2,
	*dd86cb7bc4,
	*18bb0bf989,
	*40da61f0d8_MAX,
};

// Enum Engine.*5c20a305ae
enum class *5c20a305ae : uint8 {
	*a8c093a846,
	*c73272ee23,
	*5a401e814b,
	*ec9cd10b36,
	*8f8a2bca1b,
	*bac2503c1d,
	*75b1cd1e22,
	*1b9a6bfb73,
	*80c12f005d,
	*ae8afcbee6,
	*9832ea940c,
	*1184be0cfb,
	*61a012287f,
	*92b1db4521,
	*5c20a305ae_MAX,
};

// Enum Engine.*fcc1c03597
enum class *fcc1c03597 : uint8 {
	*c8c05a43d4,
	*999ba5082b,
	*55e377e845,
	*1ddd80c911,
	*a484ab1ef3,
	*27d944ee2a,
	*47c4c0564c,
	*17fe4adc25,
	*6e1ef5062c,
	*fcc1c03597_MAX,
};

// Enum Engine.ESimplygonColorChannels
enum class ESimplygonColorChannels : uint8 {
	RGBA,
	RGB,
	L,
	ESimplygonColorChannels_MAX,
};

// Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8 {
	Poor,
	Low,
	Medium,
	High,
	ESimplygonTextureSamplingQuality_MAX,
};

// Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8 {
	None,
	Color,
	Normals,
	Opacity,
	ESimplygonCasterType_MAX,
};

// Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8 {
	None,
	VerySmall,
	Small,
	Medium,
	Large,
	VeryLarge,
	ESimplygonTextureStrech_MAX,
};

// Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8 {
	Off,
	BakeTexture,
	BakeVertexColor,
	Replace,
	EMaterialLODType_MAX,
};

// Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8 {
	Reduction,
	Remeshing,
	ESimplygonLODType_MAX,
};

// Enum Engine.EOptimizationMetric
enum class EOptimizationMetric : uint8 {
	TrianglePercentage,
	OnScreenSize,
	MaxDeviation,
	EOptimizationMetric_MAX,
};

// Enum Engine.EMaterialProxySmaplingQuality
enum class EMaterialProxySmaplingQuality : uint8 {
	Poor,
	Low,
	Medium,
	High,
	EMaterialProxySmaplingQuality_MAX,
};

// Enum Engine.EUVStrech
enum class EUVStrech : uint8 {
	Small,
	Medium,
	Large,
	VeryLarge,
	EUVStrech_MAX,
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 {
	MaterialMergeType_Default,
	MaterialMergeType_Simplygon,
	MaterialMergeType_MAX,
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 {
	TextureSizingType_UseSingleTextureSize,
	TextureSizingType_UseAutomaticBiasedSizes,
	TextureSizingType_UseManualOverrideTextureSize,
	TextureSizingType_UseSimplygonAutomaticSizing,
	TextureSizingType_MAX,
};

// Enum Engine.*cae46666e3
enum class *cae46666e3 : uint8 {
	*a5f9b080c2,
	*a187c2397d,
	*15518f52fa,
	*cae46666e3_MAX,
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	AllLODs,
	SpecificLOD,
	CalculateLOD,
	LowestDetailLOD,
	EMeshLODSelectionType_MAX,
};

// Enum Engine.*dda2f6ee34
enum class *dda2f6ee34 : uint8 {
	*194fcd5dbf,
	*25bb8ad090,
	*4b176d1d3a,
	*0e084014a4,
	*dda2f6ee34_MAX,
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	High,
	Medium,
	Low,
	ELandscapeCullingPrecision_MAX,
};

// Enum Engine.EPhysXAggregationMode
enum class EPhysXAggregationMode : uint8 {
	NoCollision,
	BlockAllWithComplexAsSimple,
	EPhysXAggregationMode_MAX,
};

// Enum Engine.EChartAggregationMode
enum class EChartAggregationMode : uint8 {
	TextureSize,
	SurfaceArea,
	PixelDensity,
	UVSize,
	EChartAggregationMode_MAX,
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 {
	Triangles,
	Vertices,
	Any,
	EStaticMeshReductionTerimationCriterion_MAX,
};

// Enum Engine.EImposterCaptureType
enum class EImposterCaptureType : uint8 {
	No,
	Quarter,
	Half,
	Full,
	EImposterCaptureType_MAX,
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	Off,
	Lowest,
	Low,
	Normal,
	High,
	Highest,
	EMeshFeatureImportance_MAX,
};

// Enum Engine.EAutoBenchPathType
enum class EAutoBenchPathType : uint8 {
	SnakeCurve,
	HilbertCurve,
	EAutoBenchPathType_MAX,
};

// Enum Engine.EAutoBenchViewMode
enum class EAutoBenchViewMode : uint8 {
	Default,
	Top,
	EAutoBenchViewMode_MAX,
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 {
	MP_EmissiveColor,
	MP_Opacity,
	MP_OpacityMask,
	MP_DiffuseColor,
	MP_SpecularColor,
	MP_BaseColor,
	MP_Metallic,
	MP_Specular,
	MP_Roughness,
	MP_Normal,
	MP_WorldPositionOffset,
	MP_WorldDisplacement,
	MP_TessellationMultiplier,
	MP_SubsurfaceColor,
	MP_SubsurfaceProfile,
	MP_CustomData0,
	MP_CustomData1,
	MP_AmbientOcclusion,
	MP_Refraction,
	MP_CustomizedUVs0,
	MP_CustomizedUVs1,
	MP_CustomizedUVs2,
	MP_CustomizedUVs3,
	MP_CustomizedUVs4,
	MP_CustomizedUVs5,
	MP_CustomizedUVs6,
	MP_CustomizedUVs7,
	MP_PixelDepthOffset,
	MP_Temperature,
	MP_TemperatureAlpha,
	MP_MaterialAttributes,
	MP_CustomOutput,
	MP_MAX,
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	Default,
	SixDOF,
	YZPlane,
	XZPlane,
	XYPlane,
	CustomPlane,
	None,
	EDOFMode_MAX,
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	Invalid,
	Error,
	Fail,
	Success,
	ENavigationQueryResult_MAX,
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	Invalid,
	Instant,
	Lazy,
	ENavDataGatheringModeConfig_MAX,
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	Default,
	Instant,
	Lazy,
	ENavDataGatheringMode_MAX,
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	Default,
	Enable,
	Disable,
	MAX,
	ENavigationOptionFlag_MAX,
};

// Enum Engine.*5081dde572
enum class *5081dde572 : uint8 {
	*ee7ac7cb04,
	*e7ee847b59,
	*a18446eef7,
	*b98082c100,
	*7a1184754e,
	*ed06953f78,
	*caa9840198,
	*d37d32c0d9,
	*9e3deb0a50,
	*a175521632,
	*2057e0274e,
	*5081dde572_MAX,
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	No,
	Yes,
	EvenIfNotCollidable,
	DontExport,
	EHasCustomNavigableGeometry_MAX,
};

// Enum Engine.*4c9c4152b1
enum class *4c9c4152b1 : uint8 {
	*e8433ea6a7,
	*3055e1b7b4,
	*f336e44c21,
	*b3f8a9e774,
	*4c9c4152b1_MAX,
};

// Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8 {
	Reduction,
	Proxy,
	EStaticMeshLODType_MAX,
};

// Enum Engine.*cf6e643908
enum class *cf6e643908 : uint8 {
	*9d6add3305,
	*82dc0b391a,
	*874f087812,
	*cf6e643908_MAX,
};

// Enum Engine.*d43ff164d5
enum class *d43ff164d5 : uint8 {
	*83e163304d,
	*4090f169b4,
	*bff65b9900,
	*400fb44b21,
	*da19ae5405,
	*6d70320c1b,
	*5c7b008d46,
	*2daabc5206,
	*d43ff164d5_MAX,
};

// Enum Engine.*0b029abf14
enum class *0b029abf14 : uint8 {
	*9d0d2d1196,
	*c865e5e670,
	*69925cd0f3,
	*9449523f73,
	*309c81d1c4,
	*16e4da713c,
	*0b029abf14_MAX,
};

// Enum Engine.*6e8770e217
enum class *6e8770e217 : uint8 {
	*b9bbab4465,
	*2dcd3db237,
	*9265487a83,
	*dac4718b32,
	*6e8770e217_MAX,
};

// Enum Engine.*c54f5ab720
enum class *c54f5ab720 : uint8 {
	*2a4a1eff9c,
	*59ca15224c,
	*5f27abbcdb,
	*adfa3769ca,
	*11de3144d6,
	*b09e95ca51,
	*b7fb0f91c6,
	*c54f5ab720_MAX,
};

// Enum Engine.*ef2a1d9574
enum class *ef2a1d9574 : uint8 {
	*a64ddc3a80,
	*5935a96d1d,
	*b1f54066e9,
	*4586c83296,
	*3232550a96,
	*c5a02b9fbb,
	*2e7be0a50f,
	*e9c4dbad07,
	*87fd110774,
	*b89b385816,
	*ef81122bf4,
	*ffe3317076,
	*f792196dcc,
	*ad540fb3ef,
	*6b807b1e92,
	*b19ba53ba3,
	*6fc7e3bcf9,
	*aec43fcf89,
	*508bdd6504,
	*6c5015dc1e,
	*35cd409be1,
	*84863c08fa,
	*785404df0b,
	*4889ed7d73,
	*ef2a1d9574_MAX,
};

// Enum Engine.*7d7353c297
enum class *7d7353c297 : uint8 {
	*89038b9d8d,
	*53385326b7,
	*3bf654d696,
	*d001530bc8,
	*09c065f893,
	*5fa721e27e,
	*7d7353c297_MAX,
};

// Enum Engine.*647e6c61b7
enum class *647e6c61b7 : uint8 {
	*04cc8a8f77,
	*12cb284036,
	*5cfab44b23,
	*9872e9544d,
	*1eb5f89ccb,
	*647e6c61b7_MAX,
};

// Enum Engine.EHBAOBlurRadius
enum class EHBAOBlurRadius : uint8 {
	AOBR_BlurRadius0,
	AOBR_BlurRadius2,
	AOBR_BlurRadius4,
	AOBR_MAX,
};

// Enum Engine.*5082b992ef
enum class *5082b992ef : uint8 {
	*5408d3a19c,
	*36dccf5e16,
	*faaf342114,
	*5082b992ef_MAX,
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram,
	AEM_Basic,
	AEM_MAX,
};

// Enum Engine.*db5c5fa16a
enum class *db5c5fa16a : uint8 {
	*306e9f779b,
	*c597509de5,
	*2711d7fbdb,
	*d3192c5240,
	*bb00fe11fe,
	*db5c5fa16a_MAX,
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 {
	DOFM_BokehDOF,
	DOFM_Gaussian,
	DOFM_CircleDOF,
	DOFM_MAX,
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8 {
	CameraLocal,
	World,
	UserDefined,
	ECameraAnimPlaySpace_MAX,
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	Perspective,
	Orthographic,
	ECameraProjectionMode_MAX,
};

// Enum Engine.*88aaf8a3e0
enum class *88aaf8a3e0 : uint8 {
	*62a8a8b62f,
	*188a642afc,
	*068e1fb202,
	*88aaf8a3e0_MAX,
};

// Enum Engine.*c611b257d7
enum class *c611b257d7 : uint8 {
	*b6971f200e,
	*97cf98a897,
	*722e283744,
	*c611b257d7_MAX,
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	Start,
	Update,
	Stop,
	EDynamicForceFeedbackAction_MAX,
};

// Enum Engine.*2ae6492e0a
enum class *2ae6492e0a : uint8 {
	*620cd63683,
	*ac32381989,
	*866e9e072d,
	*a6b86ecd65,
	*2ae6492e0a_MAX,
};

// Enum Engine.*192e2d8642
enum class *192e2d8642 : uint8 {
	*a0c1d5985b,
	*02fb08c5a4,
	*a6f2d163a2,
	*81fa9b0895,
	*192e2d8642_MAX,
};

// Enum Engine.*23fe9b94f9
enum class *23fe9b94f9 : uint8 {
	*06d72e0660,
	*e5bb29b05c,
	*0932b1171c,
	*5e6c7978d3,
	*e1b3fd615e,
	*23fe9b94f9_MAX,
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 {
	MD_Surface,
	MD_DeferredDecal,
	MD_LightFunction,
	MD_Volume,
	MD_PostProcess,
	MD_UI,
	MD_MAX,
};

// Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8 {
	Static,
	DynamicModifiersOnly,
	Dynamic,
	LegacyGeneration,
	ERuntimeGenerationType_MAX,
};

// Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8 {
	Monotone,
	Watershed,
	ChunkyMonotone,
	ERecastPartitioning_MAX,
};

// Enum Engine.*79356f9b57
enum class *79356f9b57 : uint8 {
	*cc7b8342a8,
	*050d91d576,
	*4bb3993a5c,
	*f912115aa2,
	*79356f9b57_MAX,
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	BothWays,
	LeftToRight,
	RightToLeft,
	ENavLinkDirection_MAX,
};

// Enum Engine.*cc65e5572c
enum class *cc65e5572c : uint8 {
	*d570a58b40,
	*d4ee4542a0,
	*9788812dc0,
	*46b14f5070,
	*cc65e5572c_MAX,
};

// Enum Engine.*d8246e725f
enum class *d8246e725f : uint8 {
	*87038b600b,
	*ac8d4c9edf,
	*67b3b968e5,
	*500831ed9f,
	*d8246e725f_MAX,
};

// Enum Engine.*f89e63963b
enum class *f89e63963b : uint8 {
	*1ba4f17f35,
	*a5f5224147,
	*7f0c6bb08c,
	*f89e63963b_MAX,
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 {
	EPET_Any,
	EPET_Spawn,
	EPET_Death,
	EPET_Collision,
	EPET_Burst,
	EPET_Blueprint,
	EPET_MAX,
};

// Enum Engine.*97f6ff207e
enum class *97f6ff207e : uint8 {
	*ac246c17b5,
	*122b81f1be,
	*906dc8384d,
	*5f2b9a752e,
	*97f6ff207e_MAX,
};

// Enum Engine.*3c29a9e4d6
enum class *3c29a9e4d6 : uint8 {
	*766862cc0e,
	*0baf2596e0,
	*7aa5b60988,
	*b764e735f2,
	*931e3296c1,
	*98562ccec9,
	*e077700bdd,
	*66595e7a73,
	*e90858a9f9,
	*3c29a9e4d6_MAX,
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	X,
	Y,
	Z,
	X_Neg,
	Y_Neg,
	Z_Neg,
	Custom,
	EAxisOption_MAX,
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	Linear,
	Step,
	EAnimInterpolationType_MAX,
};

// Enum Engine.*25bebd741c
enum class *25bebd741c : uint8 {
	*a2bd07333b,
	*96935f0de0,
	*0c47323a11,
	*fe9ce2ae67,
	*25bebd741c_MAX,
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None,
	AAT_LocalSpaceBase,
	AAT_RotationOffsetMeshSpace,
	AAT_MAX,
};

// Enum Engine.*7be84fcd7b
enum class *7be84fcd7b : uint8 {
	*d900d57590,
	*238c1682f9,
	*d47a92b958,
	*7b37528fd4,
	*7be84fcd7b_MAX,
};

// Enum Engine.*4c02c9923e
enum class *4c02c9923e : uint8 {
	*5f35d4d155,
	*f219de64b7,
	*e0a7030703,
	*7fd05d1da6,
	*aa2c96b9e4,
	*4c02c9923e_MAX,
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 {
	BA_X,
	BA_Y,
	BA_Z,
	BA_MAX,
};

// Enum Engine.ESkeletalMeshLODType
enum class ESkeletalMeshLODType : uint8 {
	Reduction,
	Proxy,
	ESkeletalMeshLODType_MAX,
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 {
	SMOT_NumOfTriangles,
	SMOT_MaxDeviation,
	SMOT_ScreenSize,
	SMOT_MAX,
};

// Enum Engine.*b612e8eefb
enum class *b612e8eefb : uint8 {
	*defc30a753,
	*090a96e00e,
	*37842bd49c,
	*e8a2614630,
	*4ea37fac08,
	*dbde7d09d7,
	*a0d15e3b14,
	*b612e8eefb_MAX,
};

// Enum Engine.*d38e227f9d
enum class *d38e227f9d : uint8 {
	*2d038d0416,
	*3a22e816fd,
	*0a7d98f163,
	*6ebe12fd12,
	*b76e27f652,
	*1feb8fd64c,
	*1d41768c6f,
	*d38e227f9d_MAX,
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 {
	ACF_None,
	ACF_Float96NoW,
	ACF_Fixed48NoW,
	ACF_IntervalFixed32NoW,
	ACF_Fixed32NoW,
	ACF_Float32NoW,
	ACF_Identity,
	ACF_MAX,
};

// Enum Engine.*dd5f25cf0f
enum class *dd5f25cf0f : uint8 {
	*4c06b7cdf5,
	*7f96b3f919,
	*32944511e9,
	*7ddc59faca,
	*e95b4b4321,
	*dd5f25cf0f_MAX,
};

// Enum Engine.*bad4eeba2c
enum class *bad4eeba2c : uint8 {
	*6d95016faf,
	*c847676ef8,
	*06f92474b1,
	*c8968e9173,
	*2e47d2a368,
	*bad4eeba2c_MAX,
};

// Enum Engine.*99fad6e401
enum class *99fad6e401 : uint8 {
	*534eececdd,
	*013ad2c9e8,
	*cbc19396dc,
	*c25a775f92,
	*209f749df5,
	*99fad6e401_MAX,
};

// Enum Engine.*8b74868674
enum class *8b74868674 : uint8 {
	*a56a81a037,
	*23285017cb,
	*7fdbea291d,
	*15f5c80749,
	*8b74868674_MAX,
};

// Enum Engine.*b472ec0b7a
enum class *b472ec0b7a : uint8 {
	*081f64e07a,
	*815a8fc0df,
	*711aebf5be,
	*7e5b453dfe,
	*b472ec0b7a_MAX,
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 {
	Prepared,
	Finished,
	MarkedForRemoval,
	ERootMotionSourceStatusFlags_MAX,
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 {
	Override,
	Additive,
	ERootMotionAccumulateMode_MAX,
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	Animation,
	Skeleton,
	AnimationScaled,
	AnimationRelative,
	EBoneTranslationRetargetingMode_MAX,
};

// Enum Engine.*01ab686d54
enum class *01ab686d54 : uint8 {
	*ead8de52ae,
	*e6cf9e3f46,
	*380febcda3,
	*54186c293a,
	*01ab686d54_MAX,
};

// Enum Engine.*b5b4c49ec1
enum class *b5b4c49ec1 : uint8 {
	*f8a6c421ea,
	*004e08c9fd,
	*179122ace4,
	*034da25e88,
	*32ae018900,
	*dac6900e47,
	*5a20fa45e4,
	*96ae2af142,
	*b5b4c49ec1_MAX,
};

// Enum Engine.*d998367a62
enum class *d998367a62 : uint8 {
	*ee793473e4,
	*0cff7847df,
	*cb75c7e7de,
	*1ce0e6d707,
	*d998367a62_MAX,
};

// Enum Engine.*969e6dff50
enum class *969e6dff50 : uint8 {
	*61e9f15222,
	*cdd44b4266,
	*9a8f6ce61c,
	*c2b756a893,
	*969e6dff50_MAX,
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 {
	SLERP,
	TwistAndSwing,
	EAngularDriveMode_MAX,
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	Sphere,
	Capsule,
	Box,
	Cone,
	EAttenuationShape_MAX,
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	Linear,
	Logarithmic,
	Inverse,
	LogReverse,
	NaturalSound,
	Custom,
	EAttenuationDistanceModel_MAX,
};

// Enum Engine.*4396c1dba5
enum class *4396c1dba5 : uint8 {
	*b0588d4c4c,
	*d2973acd11,
	*d37b175304,
	*4396c1dba5_MAX,
};

// Enum Engine.*acdd45e961
enum class *acdd45e961 : uint8 {
	*1e6ec49c99,
	*a47c387d84,
	*ecaf28beee,
	*0bd9b7c171,
	*1a02be6b5e,
	*acdd45e961_MAX,
};

// Enum Engine.EPreviewIndexType
enum class EPreviewIndexType : uint8 {
	RandomSeed,
	VariantIndex,
	PermutationIndex,
	EPreviewIndexType_MAX,
};

// Enum Engine.ESpawnPointRollType
enum class ESpawnPointRollType : uint8 {
	Probability,
	LocalRatio,
	GlobalRatio,
	ESpawnPointRollType_MAX,
};

// Enum Engine.*0ea8f0310f
enum class *0ea8f0310f : uint8 {
	*b98a29dbbd,
	*53fb84ee23,
	*34eedcbaf8,
	*0ea8f0310f_MAX,
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	WorldSpace,
	ComponentSpace,
	EBoneSpaces_MAX,
};

// Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8 {
	AlwaysTickPoseAndRefreshBones,
	AlwaysTickPose,
	OnlyTickPoseWhenRendered,
	EMeshComponentUpdateFlag_MAX,
};

// Enum Engine.*58b4be883c
enum class *58b4be883c : uint8 {
	*e1f0f5767b,
	*56394ff626,
	*c3424160d0,
	*58b4be883c_MAX,
};

// Enum Engine.*3ed523434e
enum class *3ed523434e : uint8 {
	*6c0a445f93,
	*94bdbf2d69,
	*4de981f111,
	*cf2c755185,
	*3ed523434e_MAX,
};

// Enum Engine.*3c8dc5cc54
enum class *3c8dc5cc54 : uint8 {
	*70aa083fd8,
	*7a3792fb72,
	*6fbe1662f5,
	*3c8dc5cc54_MAX,
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	AnimationBlueprint,
	AnimationSingleNode,
	AnimationCustomMode,
	EAnimationMode_MAX,
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	SkipSimulatingBones,
	SkipAllBones,
	EKinematicBonesUpdateToPhysics_MAX,
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	X,
	Y,
	Z,
	ESplineMeshAxis_MAX,
};

// Enum Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8 {
	Default,
	Unfiltered,
	SimpleAverage,
	Sharpen0,
	Sharpen1,
	Sharpen2,
	Sharpen3,
	Sharpen4,
	Sharpen5,
	Sharpen6,
	Sharpen7,
	Sharpen8,
	Sharpen9,
	Sharpen10,
	ETextureDownscaleOptions_MAX,
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	Point,
	Bilinear,
	Trilinear,
	AnisotropicPoint,
	AnisotropicLinear,
	ETextureSamplerFilter_MAX,
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	None,
	PadToPowerOfTwo,
	PadToSquarePowerOfTwo,
	ETexturePowerOfTwoSetting_MAX,
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 {
	TMGS_FromTextureGroup,
	TMGS_SimpleAverage,
	TMGS_Sharpen0,
	TMGS_Sharpen1,
	TMGS_Sharpen2,
	TMGS_Sharpen3,
	TMGS_Sharpen4,
	TMGS_Sharpen5,
	TMGS_Sharpen6,
	TMGS_Sharpen7,
	TMGS_Sharpen8,
	TMGS_Sharpen9,
	TMGS_Sharpen10,
	TMGS_NoMipmaps,
	TMGS_LeaveExistingMips,
	TMGS_Blur1,
	TMGS_Blur2,
	TMGS_Blur3,
	TMGS_Blur4,
	TMGS_Blur5,
	TMGS_MAX,
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8 {
	TEXTUREGROUP_World,
	TEXTUREGROUP_WorldNormalMap,
	TEXTUREGROUP_WorldSpecular,
	TEXTUREGROUP_Character,
	TEXTUREGROUP_CharacterNormalMap,
	TEXTUREGROUP_CharacterSpecular,
	TEXTUREGROUP_Weapon,
	TEXTUREGROUP_WeaponNormalMap,
	TEXTUREGROUP_WeaponSpecular,
	TEXTUREGROUP_Vehicle,
	TEXTUREGROUP_VehicleNormalMap,
	TEXTUREGROUP_VehicleSpecular,
	TEXTUREGROUP_Landscape,
	TEXTUREGROUP_LandscapeNormalMap,
	TEXTUREGROUP_LandscapeSpecular,
	TEXTUREGROUP_Cinematic,
	TEXTUREGROUP_Effects,
	TEXTUREGROUP_EffectsNotFiltered,
	TEXTUREGROUP_Skybox,
	TEXTUREGROUP_UI,
	TEXTUREGROUP_Lightmap,
	TEXTUREGROUP_RenderTarget,
	TEXTUREGROUP_MobileFlattened,
	TEXTUREGROUP_ProcBuilding_Face,
	TEXTUREGROUP_ProcBuilding_LightMap,
	TEXTUREGROUP_Shadowmap,
	TEXTUREGROUP_ColorLookupTable,
	TEXTUREGROUP_Terrain_Heightmap,
	TEXTUREGROUP_Terrain_Weightmap,
	TEXTUREGROUP_Bokeh,
	TEXTUREGROUP_IESLightProfile,
	TEXTUREGROUP_Pixels2D,
	TEXTUREGROUP_HierarchicalLOD,
	TEXTUREGROUP_MAX,
};

// Enum Engine.*28199a6c12
enum class *28199a6c12 : uint8 {
	*8aa74ca88b,
	*bdf35d8cb8,
	*14000b97ce,
	*13406feade,
	*6cf2e622b5,
	*2993db95d2,
	*f656cb19b9,
	*852cd95741,
	*7de1ed3859,
	*8cf0446b33,
	*e703a7a73b,
	*28199a6c12_MAX,
};

// Enum Engine.*8d5db1940d
enum class *8d5db1940d : uint8 {
	*85de535005,
	*40def97e73,
	*1b2bcce9a0,
	*02e288bf2d,
	*8d5db1940d_MAX,
};

// Enum Engine.*11ae384a70
enum class *11ae384a70 : uint8 {
	*ab4afe9b01,
	*a9004de2d7,
	*3324b3da89,
	*64c6c9b7fc,
	*11ae384a70_MAX,
};

// Enum Engine.*6502e2b48c
enum class *6502e2b48c : uint8 {
	*51191d196d,
	*0c160117cb,
	*65292cf853,
	*8a0b00186b,
	*637908dcb2,
	*f1778b57c4,
	*6502e2b48c_MAX,
};

// Enum Engine.*5476cf1861
enum class *5476cf1861 : uint8 {
	*e76af7d62e,
	*66adf21df8,
	*ffa53d7fb9,
	*89e60686cb,
	*5476cf1861_MAX,
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8 {
	TF_Nearest,
	TF_Bilinear,
	TF_Trilinear,
	TF_Default,
	TF_MAX,
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 {
	TC_Default,
	TC_Normalmap,
	TC_Masks,
	TC_Grayscale,
	TC_Displacementmap,
	TC_VectorDisplacementmap,
	TC_HDR,
	TC_EditorIcon,
	TC_Alpha,
	TC_DistanceFieldFont,
	TC_HDR_Compressed,
	TC_BC7,
	TC_MAX,
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	Local,
	World,
	ESplineCoordinateSpace_MAX,
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	Linear,
	Curve,
	Constant,
	CurveClamped,
	CurveCustomTangent,
	ESplinePointType_MAX,
};

// Enum Engine.*27c6dd5b03
enum class *27c6dd5b03 : uint8 {
	*3f3d1edc58,
	*7174250568,
	*b014196050,
	*4216c32edd,
	*fde0ec921e,
	*27c6dd5b03_MAX,
};

// Enum Engine.*f0109e811a
enum class *f0109e811a : uint8 {
	*57712bc0c5,
	*853d02355a,
	*1b20ed25db,
	*0de3cee91f,
	*f0109e811a_MAX,
};

// Enum Engine.*e74a00b599
enum class *e74a00b599 : uint8 {
	*1b06e06667,
	*ae3530befe,
	*6081e8b216,
	*e74a00b599_MAX,
};

// Enum Engine.*d85dc7030d
enum class *d85dc7030d : uint8 {
	*b163332083,
	*d914eef86d,
	*165d629fc4,
	*d8feb4a363,
	*d85dc7030d_MAX,
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 {
	SLT_WorldLocked,
	SLT_TrackerLocked,
	SLT_FaceLocked,
	SLT_MAX,
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	Directional,
	Point,
	EWindSourceType_MAX,
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	Forward,
	Backward,
	ETimelineDirection_MAX,
};

// Enum Engine.*1d7cbf4b50
enum class *1d7cbf4b50 : uint8 {
	*69c4cc1729,
	*3da6fad9ed,
	*ad2c6ef005,
	*1d7cbf4b50_MAX,
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 {
	AKF_ConstantKeyLerp,
	AKF_VariableKeyLerp,
	AKF_PerTrackCompression,
	AKF_MAX,
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 {
	AllAnimations,
	HighestWeightedAnimation,
	None,
	ENotifyTriggerMode_MAX,
};

// Enum Engine.*6a0c482f9f
enum class *6a0c482f9f : uint8 {
	*2213a705e1,
	*348fe86726,
	*1b35831c10,
	*5d2c86d2dd,
	*6a0c482f9f_MAX,
};

// Enum Engine.*de69d6ec78
enum class *de69d6ec78 : uint8 {
	*d4b5c5c086,
	*5e0f2896a9,
	*65910fffe4,
	*de69d6ec78_MAX,
};

// Enum Engine.*b8b0f3ec35
enum class *b8b0f3ec35 : uint8 {
	*f31fafb136,
	*a21a1de35e,
	*2c291c8c4c,
	*b8b0f3ec35_MAX,
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	MontageLength,
	Duration,
	EMontagePlayReturnType_MAX,
};

// Enum Engine.*6eba6d2bbc
enum class *6eba6d2bbc : uint8 {
	*3d475767d9,
	*b98e428c53,
	*03d0be957f,
	*9f3f65ee58,
	*de02754642,
	*6eba6d2bbc_MAX,
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 {
	Unknown,
	NeverCook,
	DevelopmentCook,
	AlwaysCook,
	EPrimaryAssetCookRule_MAX,
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 {
	Disabled,
	Dependency,
	ExplicitlyEnabled,
	EBlueprintNativizationFlag_MAX,
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	Default,
	Development,
	FinalRelease,
	EBlueprintCompileMode_MAX,
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 {
	BPTYPE_Normal,
	BPTYPE_Const,
	BPTYPE_MacroLibrary,
	BPTYPE_Interface,
	BPTYPE_LevelScript,
	BPTYPE_FunctionLibrary,
	BPTYPE_MAX,
};

// Enum Engine.*154c00fc7a
enum class *154c00fc7a : uint8 {
	*64d2bdb840,
	*705b2544b7,
	*a7c26efe73,
	*5f575a4392,
	*0f190d1b4e,
	*1576aa8bab,
	*1b2b056880,
	*154c00fc7a_MAX,
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	RowFound,
	RowNotFound,
	EEvaluateCurveTableResult_MAX,
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	Singular,
	Plural,
	EGrammaticalNumber_MAX,
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	Neuter,
	Masculine,
	Feminine,
	Mixed,
	EGrammaticalGender_MAX,
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 {
	DoNotTrace,
	TraceFullPath,
	OnlyTraceWhileAscending,
	ESuggestProjVelocityTraceOption_MAX,
};

// Enum Engine.EHMDWornState
enum class EHMDWornState : uint8 {
	Unknown,
	Worn,
	NotWorn,
	EHMDWornState_MAX,
};

// Enum Engine.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	Floor,
	Eye,
	EHMDTrackingOrigin_MAX,
};

// Enum Engine.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	Orientation,
	Position,
	OrientationAndPosition,
	EOrientPositionSelector_MAX,
};

// Enum Engine.*887cd43ef0
enum class *887cd43ef0 : uint8 {
	*d9fae6d20f,
	*006d34f9e0,
	*7c336e1407,
	*ccc0d2ef66,
	*887cd43ef0_MAX,
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	Linear,
	Step,
	SinusoidalIn,
	SinusoidalOut,
	SinusoidalInOut,
	EaseIn,
	EaseOut,
	EaseInOut,
	ExpoIn,
	ExpoOut,
	ExpoInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	EEasingFunc_MAX,
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8 {
	HalfToEven,
	HalfFromZero,
	HalfToZero,
	FromZero,
	ToZero,
	ToNegativeInfinity,
	ToPositiveInfinity,
	ERoundingMode_MAX,
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	InvalidMode,
	GameMode,
	EditorMode,
	SimulationMode,
	PIEMode,
	FNavigationSystemRunMode_MAX,
};

// Enum Engine.*693d8761ce
enum class *693d8761ce : uint8 {
	*db1559db6b,
	*361f1a73c6,
	*5689456432,
	*693d8761ce_MAX,
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8 {
	PhysType_Default,
	PhysType_Kinematic,
	PhysType_Simulated,
	PhysType_MAX,
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8 {
	CTF_UseDefault,
	CTF_UseSimpleAndComplex,
	CTF_UseSimpleAsComplex,
	CTF_UseComplexAsSimple,
	CTF_MAX,
};

// Enum Engine.*0c5da8e167
enum class *0c5da8e167 : uint8 {
	*11867369ab,
	*a68af594e5,
	*03a260301c,
	*0c5da8e167_MAX,
};

// Enum Engine.*5bfc0775d8
enum class *5bfc0775d8 : uint8 {
	*df4a7a841b,
	*c589f92b43,
	*8022320e2b,
	*33f696a08d,
	*d62cf101b4,
	*9e5af3c759,
	*9de9108594,
	*0a913b4478,
	*5bfc0775d8_MAX,
};

// Enum Engine.*4d0d7d4b5d
enum class *4d0d7d4b5d : uint8 {
	*91e6624494,
	*cefd615a10,
	*7921be0b01,
	*7679de516d,
	*448be52e12,
	*2be7c1d1a5,
	*4d0d7d4b5d_MAX,
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8 {
	Average,
	Min,
	Multiply,
	Max,
	EFrictionCombineMode_MAX,
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 {
	None,
	X,
	Y,
	Z,
	Invalid,
	ESettingsLockedAxis_MAX,
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	Full3D,
	YZPlane,
	XZPlane,
	XYPlane,
	ESettingsDOF_MAX,
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	AEM_Histogram,
	AEM_Basic,
	AEM_MAX,
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	None,
	OpaqueOnly,
	OpaqueAndMasked,
	Auto,
	EEarlyZPass_MAX,
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	Disabled,
	Enabled,
	EnabledOnDemand,
	EnabledWithStencil,
	ECustomDepthStencil_MAX,
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8 {
	One,
	Two,
	Four,
	Eight,
	EMobileMSAASampleCount_MAX,
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	One,
	Two,
	Four,
	Eight,
	ECompositingSampleCount_MAX,
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	NoClear,
	HardwareClear,
	QuadAtMaxZ,
	EClearSceneOptions_MAX,
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 {
	ShortestSide,
	LongestSide,
	Horizontal,
	Vertical,
	Custom,
	EUIScalingRule_MAX,
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 {
	Always,
	NonPointer,
	NavigationOnly,
	Never,
	ERenderFocusRule_MAX,
};

// Enum Engine.*88cda74aac
enum class *88cda74aac : uint8 {
	*da102e41b4,
	*4e96b55c14,
	*c0e4515b46,
	*b1fa40b90d,
	*88cda74aac_MAX,
};

// Enum Engine.*255c62f6c6
enum class *255c62f6c6 : uint8 {
	*1b282613b0,
	*c9fea5c48c,
	*71ee60825c,
	*5c209e84c9,
	*255c62f6c6_MAX,
};

// Enum Engine.*e7555019dc
enum class *e7555019dc : uint8 {
	*1a70b5dba0,
	*4f77f05282,
	*ee495aa4f0,
	*b1206a27fa,
	*8499793940,
	*96597245a6,
	*e7555019dc_MAX,
};

// Enum Engine.*4b7214b1e4
enum class *4b7214b1e4 : uint8 {
	*e0affda0e8,
	*d355adf717,
	*6fb8f014f6,
	*6566fa1176,
	*6ba033c9e0,
	*4a226aa4b3,
	*a685332457,
	*4b7214b1e4_MAX,
};

// Enum Engine.*4b8cbb83fc
enum class *4b8cbb83fc : uint8 {
	*b5b3583633,
	*87f0e5f8ad,
	*9221483bb0,
	*2f5199139a,
	*072c065a47,
	*3b6804f3db,
	*4b8cbb83fc_MAX,
};

// Enum Engine.*21b6d9f52d
enum class *21b6d9f52d : uint8 {
	*06302e547f,
	*d5ac4e3413,
	*c0f734c5fa,
	*fb1221e138,
	*21b6d9f52d_MAX,
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 {
	Offline,
	Runtime,
	EFontCacheType_MAX,
};

// Enum Engine.EGraphicsAPIType
enum class EGraphicsAPIType : uint8 {
	DX11,
	DX11_Enhanced,
	DX12,
	EGraphicsAPIType_MAX,
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	Fullscreen,
	WindowedFullscreen,
	Windowed,
	EWindowMode_MAX,
};

// Enum Engine.*a9f8f0e913
enum class *a9f8f0e913 : uint8 {
	*51031b789c,
	*f4d7be0216,
	*e7a400e81a,
	*a7faf4b6f4,
	*a9f8f0e913_MAX,
};

// Enum Engine.*5b91717ac4
enum class *5b91717ac4 : uint8 {
	*b1f9f82d42,
	*6e9ab17216,
	*661d2de408,
	*efb199f46e,
	*5b91717ac4_MAX,
};

// Enum Engine.*23c576004a
enum class *23c576004a : uint8 {
	*3cbd9ef4e2,
	*84762d59aa,
	*e22738c1b8,
	*9f54773305,
	*41ed15d459,
	*20eda16424,
	*10b340ddf6,
	*23c576004a_MAX,
};

// Enum Engine.*917b9095d7
enum class *917b9095d7 : uint8 {
	*349573ec30,
	*264cacb6c9,
	*fd20f4423f,
	*d693e69c0b,
	*3e91c93b52,
	*917b9095d7_MAX,
};

// Enum Engine.*7e61c91cae
enum class *7e61c91cae : uint8 {
	*53f4e79600,
	*e1da05a211,
	*cb81ecc6a6,
	*06ea847fbc,
	*7e61c91cae_MAX,
};

// Enum Engine.*31ba50c4e5
enum class *31ba50c4e5 : uint8 {
	*9ac3fda3c5,
	*911f34b1d5,
	*8207336ccb,
	*df95d64e65,
	*31ba50c4e5_MAX,
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	Blend,
	UseA,
	UseB,
	EMaterialAttributeBlend_MAX,
};

// Enum Engine.*ac18ce742b
enum class *ac18ce742b : uint8 {
	*6236b9febc,
	*fddd45e837,
	*940a90fbae,
	*1740daa190,
	*ac18ce742b_MAX,
};

// Enum Engine.*358eea2714
enum class *358eea2714 : uint8 {
	*d9ec9e6098,
	*fe8fbf6d43,
	*6c68a02430,
	*61136eecfb,
	*37114be074,
	*358eea2714_MAX,
};

// Enum Engine.*06c9c8edbb
enum class *06c9c8edbb : uint8 {
	*f30dc82b41,
	*7e4597587d,
	*971ae643a6,
	*c0646dcbe0,
	*b7b30e6b04,
	*06c9c8edbb_MAX,
};

// Enum Engine.*c59a512548
enum class *c59a512548 : uint8 {
	*71afc27095,
	*5d8a1974bc,
	*f620165e49,
	*4c34abc091,
	*b49c56c66a,
	*8d9eb326e2,
	*c497cb7e65,
	*c5f8f638c3,
	*6b414c8788,
	*c1af40f03a,
	*c59a512548_MAX,
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 {
	NOISEFUNCTION_SimplexTex,
	NOISEFUNCTION_GradientTex,
	NOISEFUNCTION_GradientTex3D,
	NOISEFUNCTION_GradientALU,
	NOISEFUNCTION_ValueALU,
	NOISEFUNCTION_VoronoiALU,
	NOISEFUNCTION_MAX,
};

// Enum Engine.*2c4fe4aa9e
enum class *2c4fe4aa9e : uint8 {
	*59e2ec19e4,
	*bdaa119f5e,
	*03a80c49c1,
	*2c4fe4aa9e_MAX,
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 {
	Coordinates,
	OffsetFraction,
	EMaterialSceneAttributeInputMode_MAX,
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 {
	PPI_SceneColor,
	PPI_SceneDepth,
	PPI_DiffuseColor,
	PPI_SpecularColor,
	PPI_SubsurfaceColor,
	PPI_BaseColor,
	PPI_Specular,
	PPI_Metallic,
	PPI_WorldNormal,
	PPI_SeparateTranslucency,
	PPI_Opacity,
	PPI_Roughness,
	PPI_MaterialAO,
	PPI_CustomDepth,
	PPI_PostProcessInput0,
	PPI_PostProcessInput1,
	PPI_PostProcessInput2,
	PPI_PostProcessInput3,
	PPI_PostProcessInput4,
	PPI_PostProcessInput5,
	PPI_PostProcessInput6,
	PPI_DecalMask,
	PPI_ShadingModel,
	PPI_AmbientOcclusion,
	PPI_CustomStencil,
	PPI_StoredBaseColor,
	PPI_StoredSpecular,
	PPI_ScreenCopy,
	PPI_SceneStencil,
	PPI_IndoorMask,
	PPI_GIVolumes,
	PPI_Thermal,
	PPI_MAX,
};

// Enum Engine.*a77fb80dcf
enum class *a77fb80dcf : uint8 {
	*03c8390ed9,
	*487a994cc9,
	*272b03bc14,
	*33d5c6c854,
	*a77fb80dcf_MAX,
};

// Enum Engine.*9d8c6ec16a
enum class *9d8c6ec16a : uint8 {
	*6ee934f6b9,
	*9610b60875,
	*146a8f3941,
	*9d8c6ec16a_MAX,
};

// Enum Engine.*c9b050ae51
enum class *c9b050ae51 : uint8 {
	*9f31de560f,
	*798551cf9a,
	*14a9787540,
	*f5cb170e66,
	*f4c41819e0,
	*b1e2fa02fe,
	*2325afb978,
	*5d35da8db2,
	*c9b050ae51_MAX,
};

// Enum Engine.*e1b0bcf3bb
enum class *e1b0bcf3bb : uint8 {
	*b7e85b4441,
	*0f2bd596f8,
	*0d6364df2c,
	*6dc9e5b277,
	*7a4a4070b1,
	*8a8a124fa2,
	*e1b0bcf3bb_MAX,
};

// Enum Engine.ETextureChannel
enum class ETextureChannel : uint8 {
	R,
	G,
	B,
	A,
	ETextureChannel_MAX,
};

// Enum Engine.*fba3aa3d60
enum class *fba3aa3d60 : uint8 {
	*ea10c2853b,
	*e4990a1a85,
	*d46154c017,
	*b02908e412,
	*65ddaf5a55,
	*fba3aa3d60_MAX,
};

// Enum Engine.*7906c18529
enum class *7906c18529 : uint8 {
	*067e2a0698,
	*4c52a9d9d0,
	*961e55f771,
	*da5709f814,
	*033cd727e4,
	*7906c18529_MAX,
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 {
	TMTM_TextureSize,
	TMTM_TexelSize,
	TMTM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 {
	TRANSFORM_Tangent,
	TRANSFORM_Local,
	TRANSFORM_World,
	TRANSFORM_View,
	TRANSFORM_Camera,
	TRANSFORM_ParticleWorld,
	TRANSFORM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 {
	TRANSFORMSOURCE_Tangent,
	TRANSFORMSOURCE_Local,
	TRANSFORMSOURCE_World,
	TRANSFORMSOURCE_View,
	TRANSFORMSOURCE_Camera,
	TRANSFORMSOURCE_ParticleWorld,
	TRANSFORMSOURCE_MAX,
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 {
	TRANSFORMPOSSOURCE_Local,
	TRANSFORMPOSSOURCE_World,
	TRANSFORMPOSSOURCE_TranslatedWorld,
	TRANSFORMPOSSOURCE_View,
	TRANSFORMPOSSOURCE_Camera,
	TRANSFORMPOSSOURCE_Particle,
	TRANSFORMPOSSOURCE_MAX,
};

// Enum Engine.*2c33585321
enum class *2c33585321 : uint8 {
	*fdf497063a,
	*eb60366383,
	*dd38904e59,
	*9ecba8b899,
	*1a78fab300,
	*ad0a9a8413,
	*2c33585321_MAX,
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 {
	MEVP_BufferSize,
	MEVP_FieldOfView,
	MEVP_TanHalfFieldOfView,
	MEVP_ViewSize,
	MEVP_WorldSpaceViewPosition,
	MEVP_WorldSpaceCameraPosition,
	MEVP_ViewportOffset,
	MEVP_MAX,
};

// Enum Engine.*44b7fab71c
enum class *44b7fab71c : uint8 {
	*91013a33ab,
	*645c507230,
	*c99bbe72dc,
	*0369267fab,
	*31ae16f1c1,
	*85d9029e81,
	*8d65b53757,
	*44b7fab71c_MAX,
};

// Enum Engine.*71718e2da4
enum class *71718e2da4 : uint8 {
	*46ab4dcc0b,
	*76d2afc349,
	*f917fcee1c,
	*3b1e3058ed,
	*cc33f40a1b,
	*e7585ccbf5,
	*d2a3933ee6,
	*8db03b8548,
	*24ee4288eb,
	*71718e2da4_MAX,
};

// Enum Engine.*ef37dfb4e2
enum class *ef37dfb4e2 : uint8 {
	*15c72443e1,
	*de4e9ed341,
	*7db7983fe1,
	*4c78cb8eba,
	*21b47861ba,
	*9d75e444f2,
	*c078aef204,
	*19210dc66b,
	*27330d481f,
	*a1d192cea2,
	*98fabc43f7,
	*a8bb0bff48,
	*290f089200,
	*ef37dfb4e2_MAX,
};

// Enum Engine.*2e33f76648
enum class *2e33f76648 : uint8 {
	*a9791f40d6,
	*3c44034d22,
	*50f96977cb,
	*0ee5e51dc4,
	*b21ba3799c,
	*d3a65b0d38,
	*2e33f76648_MAX,
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 {
	PSUVIM_None,
	PSUVIM_Linear,
	PSUVIM_Linear_Blend,
	PSUVIM_Random,
	PSUVIM_Random_Blend,
	PSUVIM_MAX,
};

// Enum Engine.*a7190cabac
enum class *a7190cabac : uint8 {
	*d613cb5d65,
	*a4e1333170,
	*4fc890519b,
	*a7190cabac_MAX,
};

// Enum Engine.*95da0e439e
enum class *95da0e439e : uint8 {
	*44ec4e57ec,
	*05dd39cdbf,
	*6d42a5e43a,
	*56062c450c,
	*47c743a793,
	*00392bc6ec,
	*588fbbc5a0,
	*b6a2c62dec,
	*95da0e439e_MAX,
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 {
	Auto,
	Complete,
	DisableTick,
	DisableTickAndKill,
	Num,
	EParticleSystemInsignificanceReaction_MAX,
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	Low,
	Medium,
	High,
	Critical,
	Num,
	EParticleSignificanceLevel_MAX,
};

// Enum Engine.*b18a229ca4
enum class *b18a229ca4 : uint8 {
	*b98025a085,
	*d705c0ce7f,
	*ab5b662f87,
	*b18a229ca4_MAX,
};

// Enum Engine.*89ab65523b
enum class *89ab65523b : uint8 {
	*f0039dfdca,
	*a05c46c1ce,
	*b5f5449a07,
	*dbd1fbc43c,
	*392fea2a1b,
	*0cec966cfb,
	*bebe5924e5,
	*d44080634c,
	*5a119d4384,
	*cc7c3c3661,
	*89ab65523b_MAX,
};

// Enum Engine.*d88b105a49
enum class *d88b105a49 : uint8 {
	*2ef1e67449,
	*e879d3abaf,
	*7a08230aff,
	*d88b105a49_MAX,
};

// Enum Engine.*358355e0e4
enum class *358355e0e4 : uint8 {
	*f061b33167,
	*4674559bd0,
	*ea348b7602,
	*d803200704,
	*a04589751e,
	*358355e0e4_MAX,
};

// Enum Engine.*10d5025a6a
enum class *10d5025a6a : uint8 {
	*e05791551a,
	*75ee537683,
	*26ef1f7c04,
	*0b6bdbfc7b,
	*14f3283016,
	*fabe6674d5,
	*10d5025a6a_MAX,
};

// Enum Engine.*08a0696eac
enum class *08a0696eac : uint8 {
	*3f09733b94,
	*1c8eed51f6,
	*6a8a5a7805,
	*08a0696eac_MAX,
};

// Enum Engine.*ee73659f02
enum class *ee73659f02 : uint8 {
	*222b11a288,
	*0d902f29a7,
	*56cef4859c,
	*644d7fa01b,
	*ee73659f02_MAX,
};

// Enum Engine.*260cdfc5d5
enum class *260cdfc5d5 : uint8 {
	*339dc1e466,
	*254eee50c6,
	*09517f01ac,
	*2bc43a5577,
	*04e12791dc,
	*3f492f455a,
	*1c04df645b,
	*260cdfc5d5_MAX,
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	Bounce,
	Stop,
	Kill,
	EParticleCollisionResponse_MAX,
};

// Enum Engine.*4a1387e041
enum class *4a1387e041 : uint8 {
	*9527bcbebb,
	*0a9ef471ea,
	*074ecaa74d,
	*4a1387e041_MAX,
};

// Enum Engine.*7566d9031e
enum class *7566d9031e : uint8 {
	*ee46c14853,
	*ec3fb8a489,
	*b4f48349c7,
	*7566d9031e_MAX,
};

// Enum Engine.*f5cebc1cd4
enum class *f5cebc1cd4 : uint8 {
	*de4b948919,
	*f84e194823,
	*9993277b78,
	*f5cebc1cd4_MAX,
};

// Enum Engine.*676dcb6f8c
enum class *676dcb6f8c : uint8 {
	*8a7201e179,
	*0effc320e3,
	*2ce0dabfa5,
	*ce74253630,
	*676dcb6f8c_MAX,
};

// Enum Engine.*c9ba3aca70
enum class *c9ba3aca70 : uint8 {
	*4bf7a386c6,
	*e38cc67d61,
	*fcec535b70,
	*c9ba3aca70_MAX,
};

// Enum Engine.*883832f9ba
enum class *883832f9ba : uint8 {
	*81e7b9d12c,
	*d698fc68d4,
	*bc9bb560d5,
	*668aa8beb1,
	*883832f9ba_MAX,
};

// Enum Engine.*550ca13e03
enum class *550ca13e03 : uint8 {
	*c3a0411543,
	*d85bc89500,
	*f264c3eb16,
	*c2c72d8553,
	*bd385e2e0c,
	*2ec1569f0e,
	*4fa48978ae,
	*7cecc09fed,
	*43e216f7fb,
	*4ecd2ed5cb,
	*396f147ca1,
	*550ca13e03_MAX,
};

// Enum Engine.*0c74b6f2b1
enum class *0c74b6f2b1 : uint8 {
	*2d08627f87,
	*6a14f821ab,
	*4af3591407,
	*aa52568a6e,
	*1f3acf8b58,
	*121f2ad53b,
	*23149006fc,
	*0c74b6f2b1_MAX,
};

// Enum Engine.*3223c2051b
enum class *3223c2051b : uint8 {
	*5b0154758e,
	*8ec1034047,
	*2af02b728b,
	*0a96f7942c,
	*b7d4d3a053,
	*44b184e994,
	*3223c2051b_MAX,
};

// Enum Engine.*8fde7fcf2f
enum class *8fde7fcf2f : uint8 {
	*53609d35b8,
	*f453f09949,
	*f8180b0abc,
	*8fde7fcf2f_MAX,
};

// Enum Engine.*f0b29078c7
enum class *f0b29078c7 : uint8 {
	*29d2257ed5,
	*4cec6fad56,
	*4f500c877b,
	*2a149ccb7d,
	*f0b29078c7_MAX,
};

// Enum Engine.*184ad2a92d
enum class *184ad2a92d : uint8 {
	*9684ebd4fa,
	*49150b9720,
	*18ad5b9df1,
	*0579ffacba,
	*eb3188dcf1,
	*d28ba8f620,
	*184ad2a92d_MAX,
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 {
	None,
	FlipUV,
	FlipUOnly,
	FlipVOnly,
	RandomFlipUV,
	RandomFlipUOnly,
	RandomFlipVOnly,
	RandomFlipUVIndependent,
	EParticleUVFlipMode_MAX,
};

// Enum Engine.*e8d8707024
enum class *e8d8707024 : uint8 {
	*017d71c993,
	*bb0d4b9e94,
	*f760cbd22c,
	*41c5eefeb8,
	*e8d8707024_MAX,
};

// Enum Engine.*75ffd13421
enum class *75ffd13421 : uint8 {
	*78d851cd17,
	*8e3380fd66,
	*f92006ffe7,
	*c99e1935ab,
	*75ffd13421_MAX,
};

// Enum Engine.*67c8017379
enum class *67c8017379 : uint8 {
	*ae652e43c2,
	*89ef2f3049,
	*1e98d70445,
	*d46ce009a8,
	*67c8017379_MAX,
};

// Enum Engine.*442dcf6b8f
enum class *442dcf6b8f : uint8 {
	*64a4010c80,
	*18efba9f61,
	*601a5fc821,
	*e00bcdaba3,
	*35726f06c2,
	*9a9c2f951b,
	*e84768c478,
	*e9fa36ad66,
	*5e2a03569f,
	*4d689e3a13,
	*1592743c9d,
	*46318f41bc,
	*512d2c29bc,
	*3584039e91,
	*442dcf6b8f_MAX,
};

// Enum Engine.*e3b7f44bb4
enum class *e3b7f44bb4 : uint8 {
	*313550f9ca,
	*19a2f7ab56,
	*2de8e3c9ad,
	*806a56b0fa,
	*27ae1be033,
	*336d1e2f71,
	*e3b7f44bb4_MAX,
};

// Enum Engine.*bd2be022d0
enum class *bd2be022d0 : uint8 {
	*9b65d8e046,
	*19aa8b568a,
	*92f737d8ab,
	*b7682d3ad0,
	*bd2be022d0_MAX,
};

// Enum Engine.*78359ff7c5
enum class *78359ff7c5 : uint8 {
	*095899c74b,
	*5f1277611c,
	*8675ece3a3,
	*36aa505808,
	*78359ff7c5_MAX,
};

// Enum Engine.*c92514d91f
enum class *c92514d91f : uint8 {
	*c24b237e67,
	*835824cf78,
	*2eb184ac16,
	*ddd1ad68a5,
	*05ce22a553,
	*885cec482e,
	*c04b33d2f4,
	*096c797ad2,
	*c92514d91f_MAX,
};

// Enum Engine.*45fd9db842
enum class *45fd9db842 : uint8 {
	*f2b8d9b050,
	*7ce5656d0e,
	*b04ea22a33,
	*45fd9db842_MAX,
};

// Enum Engine.*425f1bb0d4
enum class *425f1bb0d4 : uint8 {
	*a1ba2ea1ed,
	*a6540bdca6,
	*d6aab9d081,
	*79ffd4d01c,
	*935d22da46,
	*425f1bb0d4_MAX,
};

// Enum Engine.*74cc588570
enum class *74cc588570 : uint8 {
	*593935ca80,
	*ad0b5bddf7,
	*35bdc6b3c7,
	*74cc588570_MAX,
};

// Enum Engine.*616c0f520f
enum class *616c0f520f : uint8 {
	*c4857c9bfe,
	*55c50b8a7b,
	*38bc23c082,
	*609fc5884a,
	*616c0f520f_MAX,
};

// Enum Engine.*0580551495
enum class *0580551495 : uint8 {
	*d0e0095bdd,
	*9e007fd11e,
	*fbdf6c03f5,
	*21016871a2,
	*0580551495_MAX,
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 {
	Line,
	Dash,
	EReporterLineStyle_MAX,
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	Outside,
	Inside,
	ELegendPosition_MAX,
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	Lines,
	Filled,
	EGraphDataStyle_MAX,
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	Lines,
	Notches,
	Grid,
	EGraphAxisStyle_MAX,
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 {
	Absolute,
	Relative,
	EConstraintTransform_MAX,
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	Orientation,
	Translation,
	Max,
	EControlConstraint_MAX,
};

// Enum Engine.*b4bb464609
enum class *b4bb464609 : uint8 {
	*129a2249de,
	*b47b6b9a4d,
	*639e0d1fd2,
	*734376484c,
	*b4bb464609_MAX,
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	PreventNew,
	StopOldest,
	StopFarthestThenPreventNew,
	StopFarthestThenOldest,
	StopLowestPriority,
	StopQuietest,
	StopLowestPriorityThenPreventNew,
	EMaxConcurrentResolutionRule_MAX,
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 {
	SOUNDGROUP_Default,
	SOUNDGROUP_Effects,
	SOUNDGROUP_UI,
	SOUNDGROUP_Music,
	SOUNDGROUP_Voice,
	SOUNDGROUP_GameSoundGroup1,
	SOUNDGROUP_GameSoundGroup2,
	SOUNDGROUP_GameSoundGroup3,
	SOUNDGROUP_GameSoundGroup4,
	SOUNDGROUP_GameSoundGroup5,
	SOUNDGROUP_GameSoundGroup6,
	SOUNDGROUP_GameSoundGroup7,
	SOUNDGROUP_GameSoundGroup8,
	SOUNDGROUP_GameSoundGroup9,
	SOUNDGROUP_GameSoundGroup10,
	SOUNDGROUP_GameSoundGroup11,
	SOUNDGROUP_GameSoundGroup12,
	SOUNDGROUP_GameSoundGroup13,
	SOUNDGROUP_GameSoundGroup14,
	SOUNDGROUP_GameSoundGroup15,
	SOUNDGROUP_GameSoundGroup16,
	SOUNDGROUP_GameSoundGroup17,
	SOUNDGROUP_GameSoundGroup18,
	SOUNDGROUP_GameSoundGroup19,
	SOUNDGROUP_GameSoundGroup20,
	SOUNDGROUP_MAX,
};

// Enum Engine.*89519616fd
enum class *89519616fd : uint8 {
	*cc83052323,
	*3bb0453349,
	*451592826b,
	*ce1a265c2e,
	*74e43c40e3,
	*3484503be3,
	*e565b289fb,
	*c77006afc1,
	*e258278558,
	*89519616fd_MAX,
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	Speaker,
	Controller,
	ControllerFallbackToSpeaker,
	EAudioOutputTarget_MAX,
};

// Enum Engine.*3854cf2a01
enum class *3854cf2a01 : uint8 {
	*d1f7a0682f,
	*68541cae3d,
	*c20e867b4f,
	*02068dbf34,
	*3854cf2a01_MAX,
};

// Enum Engine.*b790817617
enum class *b790817617 : uint8 {
	*335d48f910,
	*ccf06143d1,
	*61af895285,
	*65685fcbf5,
	*a940fc0bb9,
	*b790817617_MAX,
};

// Enum Engine.*0d2d8dba28
enum class *0d2d8dba28 : uint8 {
	*a536826dcd,
	*de9b77005f,
	*6dee62d706,
	*0d2d8dba28_MAX,
};

// Enum Engine.EVolumetricDataFormat
enum class EVolumetricDataFormat : uint8 {
	R8,
	RG8,
	RGBA8,
	R16,
	RG16,
	R16_Float,
	RG16_Float,
	RGBA16_Float,
	R32_Float,
	RG32_Float,
	RGBA32_Float,
	EVolumetricDataFormat_MAX,
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	None,
	LogicalNegateBool,
	Dereference,
	EPostCopyOperation_MAX,
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	NeverAsPin,
	PinHiddenByDefault,
	PinShownByDefault,
	AlwaysAsPin,
	EPinHidingMode_MAX,
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 {
	Float,
	Bool,
	Curve,
	EAnimAlphaInputType_MAX,
};

// Enum Engine.*f07dfb15f6
enum class *f07dfb15f6 : uint8 {
	*2d3f7d99e3,
	*d4267051eb,
	*e8ae0b90e6,
	*da1d6198da,
	*f07dfb15f6_MAX,
};

// Enum Engine.*a0161ee846
enum class *a0161ee846 : uint8 {
	*dc5f7b7a5e,
	*4a752e4a73,
	*b364c063ef,
	*a0161ee846_MAX,
};

// Enum Engine.*f1a2b68f31
enum class *f1a2b68f31 : uint8 {
	*578912169a,
	*7997b60e1d,
	*aaab5affd6,
	*f1a2b68f31_MAX,
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	X,
	Y,
	Z,
	EVertexPaintAxis_MAX,
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	DirectionalArrow,
	Sphere,
	Line,
	OnScreenMessage,
	CoordinateSystem,
	EDrawDebugItemType_MAX,
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	CoM,
	CustomSphere,
	InnerSphere,
	OuterSphere,
	AnimPhysCollisionType_MAX,
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AxisX,
	AxisY,
	AxisZ,
	AnimPhysTwistAxis_MAX,
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	Overlay,
	VerticalBox,
	EWindowTitleBarMode_MAX,
};

// ScriptStruct Engine.DistributionLookupTable
// Size: 0x28 (Inherited: 0x00)
struct FDistributionLookupTable {
	bool Op; // 0x00(0x01)
	bool EntryCount; // 0x01(0x01)
	bool EntryStride; // 0x02(0x01)
	bool SubEntryStride; // 0x03(0x01)
	float TimeScale; // 0x04(0x04)
	float TimeBias; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> Values; // 0x10(0x10)
	bool LockFlag; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.RawDistribution
// Size: 0x28 (Inherited: 0x00)
struct FRawDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x28 (Inherited: 0x00)
struct FFloatDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x28 (Inherited: 0x00)
struct FVectorDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x28 (Inherited: 0x00)
struct FVector4Distribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x00)
struct FFormatArgumentData {
	struct FString ArgumentName; // 0x00(0x10)
	enum class EFormatArgumentType ArgumentValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText ArgumentValue; // 0x18(0x18)
	int32 ArgumentValueInt; // 0x30(0x04)
	float ArgumentValueFloat; // 0x34(0x04)
	enum class ETextGender ArgumentValueGender; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x38 (Inherited: 0x00)
struct FExpressionInput {
	int32 OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString InputName; // 0x08(0x10)
	int32 Mask; // 0x18(0x04)
	int32 MaskR; // 0x1c(0x04)
	int32 MaskG; // 0x20(0x04)
	int32 MaskB; // 0x24(0x04)
	int32 MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ExpressionName; // 0x30(0x08)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x40 (Inherited: 0x38)
struct FMaterialAttributesInput : FExpressionInput {
	int32 PropertyConnectedBitmask; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x28 (Inherited: 0x00)
struct FExpressionOutput {
	struct FString OutputName; // 0x00(0x10)
	int32 Mask; // 0x10(0x04)
	int32 MaskR; // 0x14(0x04)
	int32 MaskG; // 0x18(0x04)
	int32 MaskB; // 0x1c(0x04)
	int32 MaskA; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.MaterialInput
// Size: 0x38 (Inherited: 0x00)
struct FMaterialInput {
	int32 OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString InputName; // 0x08(0x10)
	int32 Mask; // 0x18(0x04)
	int32 MaskR; // 0x1c(0x04)
	int32 MaskG; // 0x20(0x04)
	int32 MaskB; // 0x24(0x04)
	int32 MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ExpressionName; // 0x30(0x08)
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x40 (Inherited: 0x38)
struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FColor Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x40 (Inherited: 0x38)
struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x48 (Inherited: 0x38)
struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector Constant; // 0x3c(0x0c)
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x48 (Inherited: 0x38)
struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ConstantX; // 0x3c(0x04)
	float ConstantY; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.HitResult
// Size: 0x88 (Inherited: 0x00)
struct FHitResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bStartPenetrating : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Time; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	struct FVector_NetQuantize ImpactPoint; // 0x18(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x24(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x30(0x0c)
	struct FVector_NetQuantize TraceStart; // 0x3c(0x0c)
	struct FVector_NetQuantize TraceEnd; // 0x48(0x0c)
	float PenetrationDepth; // 0x54(0x04)
	int32 Item; // 0x58(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x5c(0x08)
	struct AActor* Actor; // 0x64(0x08)
	struct UPrimitiveComponent* Component; // 0x6c(0x08)
	char pad_74[0x4]; // 0x74(0x04)
	struct FName BoneName; // 0x78(0x08)
	int32 FaceIndex; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize : FVector {
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantizeNormal : FVector {
};

// ScriptStruct Engine.*40925e0dd9
// Size: 0x10 (Inherited: 0x00)
struct F*40925e0dd9 {
	struct TArray<struct FFloatCurve> *b4cff3aa9f; // 0x00(0x10)
};

// ScriptStruct Engine.FloatCurve
// Size: 0x90 (Inherited: 0x20)
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; // 0x20(0x70)
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x20 (Inherited: 0x00)
struct FAnimCurveBase {
	struct FName LastObservedName; // 0x00(0x08)
	struct FSmartName Name; // 0x08(0x10)
	int32 CurveTypeFlags; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.SmartName
// Size: 0x10 (Inherited: 0x00)
struct FSmartName {
	struct FName DisplayName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.RichCurve
// Size: 0x70 (Inherited: 0x58)
struct FRichCurve : FIndexedCurve {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x58(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float DefaultValue; // 0x5c(0x04)
	struct TArray<struct FRichCurveKey> Keys; // 0x60(0x10)
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x58 (Inherited: 0x00)
struct FIndexedCurve {
	char pad_0[0x8]; // 0x00(0x08)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x50)
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x50 (Inherited: 0x00)
struct FKeyHandleMap {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FRichCurveKey {
	enum class *3a1b104e86 InterpMode; // 0x00(0x01)
	enum class *bcebe0d081 TangentMode; // 0x01(0x01)
	enum class *0d10befbc7 TangentWeightMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xa8 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30(0x04)
	float *0c44459fa0; // 0x34(0x04)
	float *05163ab408; // 0x38(0x04)
	float TriggerWeightThreshold; // 0x3c(0x04)
	struct FName NotifyName; // 0x40(0x08)
	struct UAnimNotify* Notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool *a2609b6760; // 0x90(0x01)
	enum class EMontageNotifyTickType MontageTickType; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float NotifyTriggerChance; // 0x94(0x04)
	enum class ENotifyFilterType NotifyFilterType; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 NotifyFilterLOD; // 0x9c(0x04)
	bool bTriggerOnDedicatedServer; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 TrackIndex; // 0xa4(0x04)
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)
struct FAnimLinkableElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* *e8cb2d43da; // 0x08(0x08)
	int32 SlotIndex; // 0x10(0x04)
	int32 *e7dc0c820e; // 0x14(0x04)
	enum class EAnimLinkMethod *ff8f089b62; // 0x18(0x01)
	enum class EAnimLinkMethod *ea64c8dd8c; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float *1a2bcd112c; // 0x1c(0x04)
	float *6251980936; // 0x20(0x04)
	float *ac41325271; // 0x24(0x04)
	struct UAnimSequenceBase* *9fcd274e49; // 0x28(0x08)
};

// ScriptStruct Engine.*0b19d470e1
// Size: 0x0c (Inherited: 0x00)
struct F*0b19d470e1 {
	int32 *403e53f3cb; // 0x00(0x04)
	float *69c4b4f963; // 0x04(0x04)
	enum class EAnimNotifyEventType *b91619f67e; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x08)
	float DisplayTime; // 0x38(0x04)
	float *0c44459fa0; // 0x3c(0x04)
};

// ScriptStruct Engine.*957be081ef
// Size: 0x18 (Inherited: 0x00)
struct F*957be081ef {
	struct FName SlotName; // 0x00(0x08)
	struct FAnimTrack AnimTrack; // 0x08(0x10)
};

// ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x00)
struct FAnimTrack {
	struct TArray<struct FAnimSegment> AnimSegments; // 0x00(0x10)
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; // 0x00(0x08)
	float StartPos; // 0x08(0x04)
	float AnimStartTime; // 0x0c(0x04)
	float AnimEndTime; // 0x10(0x04)
	float AnimPlayRate; // 0x14(0x04)
	int32 LoopingCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*2cb2c0879d
// Size: 0x58 (Inherited: 0x30)
struct F*2cb2c0879d : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FName *b5ddbf10e2; // 0x40(0x08)
	struct TArray<struct U*ab57198cce*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.*9623d1fbbe
// Size: 0x20 (Inherited: 0x00)
struct F*9623d1fbbe {
	struct TArray<struct F*4afd2fe966> AuthoredSyncMarkers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*4afd2fe966
// Size: 0x10 (Inherited: 0x00)
struct F*4afd2fe966 {
	struct FName MarkerName; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x38 (Inherited: 0x00)
struct FAlphaBlend {
	enum class EAlphaBlendOption BlendOption; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* CustomCurve; // 0x08(0x08)
	float BlendTime; // 0x10(0x04)
	char pad_14[0x24]; // 0x14(0x24)
};

// ScriptStruct Engine.*c38d7c58d8
// Size: 0x20 (Inherited: 0x00)
struct F*c38d7c58d8 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FName MemberName; // 0x08(0x08)
	struct FGuid *13a0549680; // 0x10(0x10)
};

// ScriptStruct Engine.*4325a9ec93
// Size: 0x58 (Inherited: 0x50)
struct F*4325a9ec93 : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*945c915f06
// Size: 0x50 (Inherited: 0x00)
struct F*945c915f06 {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ETickingGroup *489e66727a; // 0x08(0x01)
	enum class ETickingGroup *2c190c7e05; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	char *7d6ddeb036 : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *af32c97504 : 1; // 0x0c(0x01)
	char *eb8d91587b : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x33]; // 0x0d(0x33)
	float TickInterval; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct Engine.*3f4e85b7ef
// Size: 0x20 (Inherited: 0x00)
struct F*3f4e85b7ef {
	struct FText Text; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*d29c4cc7dc
// Size: 0x1c (Inherited: 0x00)
struct F*d29c4cc7dc {
	struct FVector PositionControlPoint; // 0x00(0x0c)
	bool bPositionIsRelative; // 0x0c(0x01)
	char pad_D[0xf]; // 0x0d(0x0f)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x18 (Inherited: 0x01)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct Engine.*358e0c908c
// Size: 0x38 (Inherited: 0x00)
struct F*358e0c908c {
	bool *0653c2d345; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*ada569f82b Data; // 0x08(0x30)
};

// ScriptStruct Engine.*ada569f82b
// Size: 0x30 (Inherited: 0x00)
struct F*ada569f82b {
	struct FName *e9b6deb380; // 0x00(0x08)
	enum class *12f3cc3e43 Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* *fc391c4346; // 0x28(0x08)
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)
struct FDebugFloatHistory {
	struct TArray<float> Samples; // 0x00(0x10)
	float MaxSamples; // 0x10(0x04)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	bool bAutoAdjustMinMax; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*b2f5f3e08e
// Size: 0x08 (Inherited: 0x00)
struct F*b2f5f3e08e {
	uint64 Handle; // 0x00(0x08)
};

// ScriptStruct Engine.*19a0b3e5a0
// Size: 0x18 (Inherited: 0x00)
struct F*19a0b3e5a0 {
	int32 Linkage; // 0x00(0x04)
	int32 UUID; // 0x04(0x04)
	struct FName *522ed4793a; // 0x08(0x08)
	struct UObject* *3af9dc5d42; // 0x10(0x08)
};

// ScriptStruct Engine.*12ab4c6334
// Size: 0x04 (Inherited: 0x00)
struct F*12ab4c6334 {
	int32 Data; // 0x00(0x04)
};

// ScriptStruct Engine.*a05904e2c7
// Size: 0x18 (Inherited: 0x00)
struct F*a05904e2c7 {
	struct FString ActionName; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)
struct FCollisionProfileName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Engine.*fb4b8581ea
// Size: 0x0c (Inherited: 0x00)
struct F*fb4b8581ea {
	int32 *2cfce9eebe; // 0x00(0x04)
	int32 *e88a80659d; // 0x04(0x04)
	int32 *d7642ee20c; // 0x08(0x04)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize10 : FVector {
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize100 : FVector {
};

// ScriptStruct Engine.*6c20ef31e6
// Size: 0xb0 (Inherited: 0x00)
struct F*6c20ef31e6 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*1879e55951
// Size: 0x18 (Inherited: 0x00)
struct F*1879e55951 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FAttackId AttackId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *ae3937fa3a; // 0x10(0x08)
};

// ScriptStruct Engine.AttackId
// Size: 0x04 (Inherited: 0x00)
struct FAttackId {
	int32 ID; // 0x00(0x04)
};

// ScriptStruct Engine.*0a81d45cd1
// Size: 0x58 (Inherited: 0x50)
struct F*0a81d45cd1 : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*e12fd4230c
// Size: 0x40 (Inherited: 0x00)
struct F*e12fd4230c {
	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 *0c7ddffc16; // 0x08(0x0c)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0x0c)
	struct FRotator *b1eb6e4327; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName *371e8d050e; // 0x30(0x08)
	struct USceneComponent* AttachComponent; // 0x38(0x08)
};

// ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x00)
struct FRepMovement {
	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char *ecbb525575 : 1; // 0x30(0x01)
	char *5a9e40c6be : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	enum class *2e833bd098 *fc4749af31; // 0x31(0x01)
	enum class *2e833bd098 *bc74df31b0; // 0x32(0x01)
	enum class *1148c445f2 *847d85da1b; // 0x33(0x01)
};

// ScriptStruct Engine.*656446cb71
// Size: 0x04 (Inherited: 0x00)
struct F*656446cb71 {
	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*afffc9221e
// Size: 0x20 (Inherited: 0x04)
struct F*afffc9221e : F*656446cb71 {
	float AgentRadius; // 0x04(0x04)
	float AgentHeight; // 0x08(0x04)
	float AgentStepHeight; // 0x0c(0x04)
	float NavWalkingSearchHeightScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* PreferredNavData; // 0x18(0x08)
};

// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)
struct FTableRowBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x58 (Inherited: 0x30)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	bool bIgnoreForRelevancyTest; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 GroupIndex; // 0x34(0x04)
	enum class *99fad6e401 GroupRole; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float BlendWeight; // 0x3c(0x04)
	float InternalTimeAccumulator; // 0x40(0x04)
	char pad_44[0x14]; // 0x44(0x14)
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x30 (Inherited: 0x00)
struct FAnimNode_Base {
	char pad_0[0x8]; // 0x00(0x08)
	struct FExposedValueHandler EvaluateGraphExposedInputs; // 0x08(0x28)
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x28 (Inherited: 0x00)
struct FExposedValueHandler {
	struct FName BoundFunction; // 0x00(0x08)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x80 (Inherited: 0x00)
struct FExposedValueCopyRecord {
	struct UProperty* SourceProperty; // 0x00(0x08)
	struct FName SourcePropertyName; // 0x08(0x08)
	struct FName SourceSubPropertyName; // 0x10(0x08)
	int32 SourceArrayIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UProperty* DestProperty; // 0x20(0x08)
	int32 DestArrayIndex; // 0x28(0x04)
	int32 Size; // 0x2c(0x04)
	bool bInstanceIsTarget; // 0x30(0x01)
	enum class EPostCopyOperation PostCopyOperation; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UBoolProperty* CachedBoolSourceProperty; // 0x38(0x08)
	struct UBoolProperty* CachedBoolDestProperty; // 0x40(0x08)
	struct UStructProperty* CachedStructDestProperty; // 0x48(0x08)
	struct UObjectProperty* CachedObjectSourceProperty; // 0x50(0x08)
	struct UProperty* CachedObjectSubProperty; // 0x58(0x08)
	char pad_60[0x20]; // 0x60(0x20)
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x00)
struct FBlendSampleData {
	int32 SampleDataIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* Animation; // 0x08(0x08)
	float TotalWeight; // 0x10(0x04)
	float Time; // 0x14(0x04)
	float PreviousTime; // 0x18(0x04)
	char pad_1C[0x24]; // 0x1c(0x24)
};

// ScriptStruct Engine.BlendFilter
// Size: 0x90 (Inherited: 0x00)
struct FBlendFilter {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x00)
struct FInputScaleBiasClamp {
	bool bMapRange; // 0x00(0x01)
	bool bClampResult; // 0x01(0x01)
	bool bInterpResult; // 0x02(0x01)
	bool bInitialized; // 0x03(0x01)
	struct FInputRange InRange; // 0x04(0x08)
	struct FInputRange OutRange; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	float ClampMin; // 0x1c(0x04)
	float ClampMax; // 0x20(0x04)
	float InterpSpeedIncreasing; // 0x24(0x04)
	float InterpSpeedDecreasing; // 0x28(0x04)
	float InterpolatedResult; // 0x2c(0x04)
};

// ScriptStruct Engine.InputRange
// Size: 0x08 (Inherited: 0x00)
struct FInputRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x50 (Inherited: 0x00)
struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
	enum class EAlphaBlendOption BlendOption; // 0x08(0x01)
	bool bInitialized; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UCurveFloat* CustomCurve; // 0x10(0x08)
	struct FAlphaBlend AlphaBlend; // 0x18(0x38)
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBias {
	float Scale; // 0x00(0x04)
	float Bias; // 0x04(0x04)
};

// ScriptStruct Engine.BoneReference
// Size: 0x18 (Inherited: 0x00)
struct FBoneReference {
	struct FName BoneName; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.PoseLink
// Size: 0x18 (Inherited: 0x18)
struct FPoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x18 (Inherited: 0x00)
struct FPoseLinkBase {
	int32 LinkID; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x18 (Inherited: 0x18)
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.Axis
// Size: 0x10 (Inherited: 0x00)
struct FAxis {
	struct FVector Axis; // 0x00(0x0c)
	bool bInLocalSpace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x70 (Inherited: 0x58)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x58(0x08)
	bool bLoopAnimation; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float PlayRate; // 0x64(0x04)
	float StartPosition; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.*29144ded29
// Size: 0x520 (Inherited: 0x00)
struct F*29144ded29 {
	char pad_0[0x520]; // 0x00(0x520)
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size: 0x10 (Inherited: 0x00)
struct FBranchFilter {
	struct FName BoneName; // 0x00(0x08)
	int32 BlendDepth; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*dfd238f456
// Size: 0xb0 (Inherited: 0x18)
struct F*dfd238f456 : F*1879e55951 {
	float Damage; // 0x18(0x04)
	struct FVector_NetQuantizeNormal *48b69cfae0; // 0x1c(0x0c)
	struct FHitResult *885ee6f6b8; // 0x28(0x88)
};

// ScriptStruct Engine.*23e36f4259
// Size: 0x01 (Inherited: 0x00)
struct F*23e36f4259 {
	char pad_0_0 : 1; // 0x00(0x01)
	char *bed0f86575 : 1; // 0x00(0x01)
	char *a4ad88f6a8 : 1; // 0x00(0x01)
	char *96d054e9ab : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x78 (Inherited: 0x00)
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; // 0x00(0x70)
	struct UCurveFloat* ExternalCurve; // 0x70(0x08)
};

// ScriptStruct Engine.LightingChannels
// Size: 0x03 (Inherited: 0x00)
struct FLightingChannels {
	bool bChannel0; // 0x00(0x01)
	bool bChannel1; // 0x01(0x01)
	bool bChannel2; // 0x02(0x01)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerBoneBlendWeight {
	int32 SourceIndex; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)
};

// ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FPoseSnapshot {
	struct TArray<struct FTransform> LocalTransforms; // 0x00(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x08)
	struct FName SnapshotName; // 0x28(0x08)
	bool bIsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.SplineCurves
// Size: 0x60 (Inherited: 0x00)
struct FSplineCurves {
	struct FInterpCurveVector Position; // 0x00(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
};

// ScriptStruct Engine.AnimCurveParam
// Size: 0x10 (Inherited: 0x00)
struct FAnimCurveParam {
	struct FName Name; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*9953b1ece2
// Size: 0x70 (Inherited: 0x58)
struct F*9953b1ece2 : FIndexedCurve {
	struct TArray<struct F*e1f9cceb99> Keys; // 0x58(0x10)
	int32 DefaultValue; // 0x68(0x04)
	bool *623d8efb86; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*e1f9cceb99
// Size: 0x08 (Inherited: 0x00)
struct F*e1f9cceb99 {
	float Time; // 0x00(0x04)
	int32 Value; // 0x04(0x04)
};

// ScriptStruct Engine.*71d5760fff
// Size: 0x78 (Inherited: 0x58)
struct F*71d5760fff : FIndexedCurve {
	struct FString DefaultValue; // 0x58(0x10)
	struct TArray<struct F*7cb9d5e99c> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.*7cb9d5e99c
// Size: 0x18 (Inherited: 0x00)
struct F*7cb9d5e99c {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath {
	struct FString path; // 0x00(0x10)
};

// ScriptStruct Engine.*1bd8d8b2a5
// Size: 0x60 (Inherited: 0x00)
struct F*1bd8d8b2a5 {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UTexture2D* Heightmap; // 0x08(0x08)
	struct UTexture2D* Normalmap; // 0x10(0x08)
	struct TArray<struct UTexture2D*> Weightmaps; // 0x18(0x10)
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct Engine.*f2f0781581
// Size: 0x60 (Inherited: 0x00)
struct F*f2f0781581 {
	struct FVector2D V0_Pos; // 0x00(0x08)
	struct FVector2D V0_UV; // 0x08(0x08)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x08)
	struct FVector2D V1_UV; // 0x28(0x08)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x08)
	struct FVector2D V2_UV; // 0x48(0x08)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// ScriptStruct Engine.*61c770225a
// Size: 0x28 (Inherited: 0x00)
struct F*61c770225a {
	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*9474f10ff0 GlowInfo; // 0x04(0x24)
};

// ScriptStruct Engine.*9474f10ff0
// Size: 0x24 (Inherited: 0x00)
struct F*9474f10ff0 {
	char bEnableGlow : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor GlowColor; // 0x04(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x08)
	struct FVector2D GlowInnerRadius; // 0x1c(0x08)
};

// ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x00)
struct FRedirector {
	struct FName OldName; // 0x00(0x08)
	struct FName NewName; // 0x08(0x08)
};

// ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x00)
struct FFilePath {
	struct FString FilePath; // 0x00(0x10)
};

// ScriptStruct Engine.*689ecced4f
// Size: 0x18 (Inherited: 0x00)
struct F*689ecced4f {
	struct AActor* OtherActor; // 0x00(0x08)
	struct FName *47aafad476; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.*6aefee631c
// Size: 0x08 (Inherited: 0x00)
struct F*6aefee631c {
	struct FName ComponentName; // 0x00(0x08)
};

// ScriptStruct Engine.*630cf25516
// Size: 0x10 (Inherited: 0x00)
struct F*630cf25516 {
	enum class *a2319fa2a4 WalkableSlopeBehavior; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*574134f35c
// Size: 0x58 (Inherited: 0x28)
struct F*574134f35c : F*e6202be022 {
	struct F*fb4c792c61 Params; // 0x28(0x14)
	struct FVector Origin; // 0x3c(0x0c)
	struct TArray<struct FHitResult> *7aa1330b1e; // 0x48(0x10)
};

// ScriptStruct Engine.*e6202be022
// Size: 0x28 (Inherited: 0x18)
struct F*e6202be022 : F*1879e55951 {
	struct FVector *89c999e3ee; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*fb4c792c61
// Size: 0x14 (Inherited: 0x00)
struct F*fb4c792c61 {
	float *ca40ccbe76; // 0x00(0x04)
	float *9dce7d1ad0; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float *8971376268; // 0x10(0x04)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x40 (Inherited: 0x00)
struct FMeshBuildSettings {
	bool *ff2bd1985d; // 0x00(0x01)
	bool bRecomputeNormals; // 0x01(0x01)
	bool bRecomputeTangents; // 0x02(0x01)
	bool bRemoveDegenerates; // 0x03(0x01)
	bool bBuildAdjacencyBuffer; // 0x04(0x01)
	bool bBuildReversedIndexBuffer; // 0x05(0x01)
	bool bUseHighPrecisionTangentBasis; // 0x06(0x01)
	bool bUseFullPrecisionUVs; // 0x07(0x01)
	bool bGenerateLightmapUVs; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 MinLightmapResolution; // 0x0c(0x04)
	int32 SrcLightmapIndex; // 0x10(0x04)
	int32 DstLightmapIndex; // 0x14(0x04)
	float BuildScale; // 0x18(0x04)
	struct FVector BuildScale3D; // 0x1c(0x0c)
	float DistanceFieldResolutionScale; // 0x28(0x04)
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float DistanceFieldBias; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x38(0x08)
};

// ScriptStruct Engine.*08b2f76dfb
// Size: 0x1c (Inherited: 0x00)
struct F*08b2f76dfb {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};

// ScriptStruct Engine.*33cb0e9eb9
// Size: 0x88 (Inherited: 0x00)
struct F*33cb0e9eb9 {
	char pad_0[0x4]; // 0x00(0x04)
	int32 UpdateRate; // 0x04(0x04)
	int32 *2610695b2d; // 0x08(0x04)
	bool *84d4e90ee9; // 0x0c(0x01)
	bool *d07efcd16b; // 0x0d(0x01)
	bool *78fb13c167; // 0x0e(0x01)
	bool *770f6a1980; // 0x0f(0x01)
	float *64cf221340; // 0x10(0x04)
	float *c75ac22bf3; // 0x14(0x04)
	char pad_18[0x4]; // 0x18(0x04)
	int32 *68dfe9b3a0; // 0x1c(0x04)
	struct TArray<float> *f943c54863; // 0x20(0x10)
	struct TMap<int32, int32> *382cef96cd; // 0x30(0x50)
	int32 *659d399255; // 0x80(0x04)
	enum class *09228c6f17 *d007e97f5e; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct Engine.*1c83c8fac6
// Size: 0x10 (Inherited: 0x00)
struct F*1c83c8fac6 {
	struct FName SlotName; // 0x00(0x08)
	int32 *e5d958eb2c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*002bd8cca1
// Size: 0x18 (Inherited: 0x00)
struct F*002bd8cca1 {
	struct FName SlotName; // 0x00(0x08)
	struct TArray<float> *1baf5a6720; // 0x08(0x10)
};

// ScriptStruct Engine.*cd0bdb01c8
// Size: 0x10 (Inherited: 0x00)
struct F*cd0bdb01c8 {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct Engine.*014667c7d0
// Size: 0x18 (Inherited: 0x00)
struct F*014667c7d0 {
	struct AActor* Actor; // 0x00(0x08)
	struct UPrimitiveComponent* Component; // 0x08(0x08)
	char pad_10[0x4]; // 0x10(0x04)
	char bBlockingHit : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.*329809ddd5
// Size: 0x18 (Inherited: 0x00)
struct F*329809ddd5 {
	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	struct UDecalComponent* Decal; // 0x08(0x08)
	int32 ElementIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*211b9dfccf
// Size: 0x04 (Inherited: 0x00)
struct F*211b9dfccf {
	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char *aaff20ef47 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*4a5ebc420d
// Size: 0x10 (Inherited: 0x00)
struct F*4a5ebc420d {
	char bDebugMode : 1; // 0x00(0x01)
	char bStatsEnabled : 1; // 0x00(0x01)
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CoplanarTolerance; // 0x04(0x04)
	char bUseImmediateImport : 1; // 0x08(0x01)
	char bImmediateProcessMappings : 1; // 0x08(0x01)
	char bSortMappings : 1; // 0x08(0x01)
	char bDumpBinaryFiles : 1; // 0x08(0x01)
	char bDebugMaterials : 1; // 0x08(0x01)
	char bPadMappings : 1; // 0x08(0x01)
	char bDebugPaddings : 1; // 0x08(0x01)
	char bOnlyCalcDebugTexelMappings : 1; // 0x08(0x01)
	char bUseRandomColors : 1; // 0x09(0x01)
	char bColorBordersGreen : 1; // 0x09(0x01)
	char bColorByExecutionTime : 1; // 0x09(0x01)
	char pad_9_3 : 5; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float ExecutionTimeDivisor; // 0x0c(0x04)
};

// ScriptStruct Engine.*886b75ca22
// Size: 0x18 (Inherited: 0x00)
struct F*886b75ca22 {
	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *98f830791b; // 0x04(0x04)
	float *85832d4d35; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float DiffuseBoost; // 0x10(0x04)
	float FullyOccludedSamplesFraction; // 0x14(0x04)
};

// ScriptStruct Engine.*1a70427812
// Size: 0x10 (Inherited: 0x0c)
struct F*1a70427812 : F*cacf63e5c1 {
	float LightSourceAngle; // 0x0c(0x04)
};

// ScriptStruct Engine.*cacf63e5c1
// Size: 0x0c (Inherited: 0x00)
struct F*cacf63e5c1 {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*f8d7d65c3a
// Size: 0x0c (Inherited: 0x0c)
struct F*f8d7d65c3a : F*cacf63e5c1 {
};

// ScriptStruct Engine.*b57c6c340b
// Size: 0x28 (Inherited: 0x00)
struct F*b57c6c340b {
	struct FString *a708d7aeca; // 0x00(0x10)
	struct TArray<struct F*3f4e85b7ef> Subtitles; // 0x10(0x10)
	char *d7b6c5060d : 1; // 0x20(0x01)
	char *dc219157b6 : 1; // 0x20(0x01)
	char *3e730f2b50 : 1; // 0x20(0x01)
	char pad_20_3 : 5; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*287675e4c0
// Size: 0x38 (Inherited: 0x00)
struct F*287675e4c0 {
	struct AActor* Base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FVector *23774b96a6; // 0x14(0x0c)
	struct FRotator *e8b160b232; // 0x20(0x0c)
	struct FVector *b3c2a13920; // 0x2c(0x0c)
};

// ScriptStruct Engine.*096817792e
// Size: 0x10 (Inherited: 0x00)
struct F*096817792e {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)
};

// ScriptStruct Engine.*c25552a427
// Size: 0x28 (Inherited: 0x00)
struct F*c25552a427 {
	struct TArray<struct F*851bf765eb> *d008ded0b7; // 0x00(0x10)
	struct FVector *5a41d3e00c; // 0x10(0x0c)
	struct FVector *97f23aa343; // 0x1c(0x0c)
};

// ScriptStruct Engine.*851bf765eb
// Size: 0x30 (Inherited: 0x00)
struct F*851bf765eb {
	struct FVector *35ec448c30; // 0x00(0x0c)
	struct FVector *4d4cfb51e9; // 0x0c(0x0c)
	float *7b178d4f5a; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UPhysicalMaterial* PhysMaterial[0x02]; // 0x20(0x10)
};

// ScriptStruct Engine.*1d97e2f35e
// Size: 0x1c (Inherited: 0x00)
struct F*1d97e2f35e {
	float LinearDeltaThresholdSq; // 0x00(0x04)
	float LinearInterpAlpha; // 0x04(0x04)
	float LinearRecipFixTime; // 0x08(0x04)
	float AngularDeltaThreshold; // 0x0c(0x04)
	float AngularInterpAlpha; // 0x10(0x04)
	float AngularRecipFixTime; // 0x14(0x04)
	float BodySpeedThresholdSq; // 0x18(0x04)
};

// ScriptStruct Engine.*f47d0680d4
// Size: 0x40 (Inherited: 0x00)
struct F*f47d0680d4 {
	struct FVector_NetQuantize100 Position; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 *2f438835b0; // 0x20(0x0c)
	struct FVector_NetQuantize100 AngVel; // 0x2c(0x0c)
	bool Flags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)
struct FCollisionResponseContainer {
	enum class ECollisionResponse WorldStatic; // 0x00(0x01)
	enum class ECollisionResponse WorldDynamic; // 0x01(0x01)
	enum class ECollisionResponse Pawn; // 0x02(0x01)
	enum class ECollisionResponse Visibility; // 0x03(0x01)
	enum class ECollisionResponse Camera; // 0x04(0x01)
	enum class ECollisionResponse PhysicsBody; // 0x05(0x01)
	enum class ECollisionResponse Vehicle; // 0x06(0x01)
	enum class ECollisionResponse Destructible; // 0x07(0x01)
	enum class ECollisionResponse EngineTraceChannel1; // 0x08(0x01)
	enum class ECollisionResponse EngineTraceChannel2; // 0x09(0x01)
	enum class ECollisionResponse EngineTraceChannel3; // 0x0a(0x01)
	enum class ECollisionResponse EngineTraceChannel4; // 0x0b(0x01)
	enum class ECollisionResponse EngineTraceChannel5; // 0x0c(0x01)
	enum class ECollisionResponse EngineTraceChannel6; // 0x0d(0x01)
	enum class ECollisionResponse GameTraceChannel1; // 0x0e(0x01)
	enum class ECollisionResponse GameTraceChannel2; // 0x0f(0x01)
	enum class ECollisionResponse GameTraceChannel3; // 0x10(0x01)
	enum class ECollisionResponse GameTraceChannel4; // 0x11(0x01)
	enum class ECollisionResponse GameTraceChannel5; // 0x12(0x01)
	enum class ECollisionResponse GameTraceChannel6; // 0x13(0x01)
	enum class ECollisionResponse GameTraceChannel7; // 0x14(0x01)
	enum class ECollisionResponse GameTraceChannel8; // 0x15(0x01)
	enum class ECollisionResponse GameTraceChannel9; // 0x16(0x01)
	enum class ECollisionResponse GameTraceChannel10; // 0x17(0x01)
	enum class ECollisionResponse GameTraceChannel11; // 0x18(0x01)
	enum class ECollisionResponse GameTraceChannel12; // 0x19(0x01)
	enum class ECollisionResponse GameTraceChannel13; // 0x1a(0x01)
	enum class ECollisionResponse GameTraceChannel14; // 0x1b(0x01)
	enum class ECollisionResponse GameTraceChannel15; // 0x1c(0x01)
	enum class ECollisionResponse GameTraceChannel16; // 0x1d(0x01)
	enum class ECollisionResponse GameTraceChannel17; // 0x1e(0x01)
	enum class ECollisionResponse GameTraceChannel18; // 0x1f(0x01)
};

// ScriptStruct Engine.*35cd224f29
// Size: 0x10 (Inherited: 0x00)
struct F*35cd224f29 {
	struct FName Channel; // 0x00(0x08)
	enum class ECollisionResponse Response; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)
struct FExposureSettings {
	int32 *219596d133; // 0x00(0x04)
	bool *f10762cb7d; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.URL
// Size: 0x70 (Inherited: 0x00)
struct FURL {
	struct FString Protocol; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32 Port; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
	int32 Valid; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.*71789ef7cf
// Size: 0x58 (Inherited: 0x50)
struct F*71789ef7cf : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*514bba8950
// Size: 0x58 (Inherited: 0x50)
struct F*514bba8950 : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*e2d1b9a3fe
// Size: 0x58 (Inherited: 0x50)
struct F*e2d1b9a3fe : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*61279c59bf
// Size: 0x10 (Inherited: 0x00)
struct F*61279c59bf {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*13f0692f27
// Size: 0x30 (Inherited: 0x00)
struct F*13f0692f27 {
	struct FString *82ce50c703; // 0x00(0x10)
	struct FString *df87e70ef8; // 0x10(0x10)
	struct UObject* *44fdfdf6b5; // 0x20(0x08)
	bool *dd37e21728; // 0x28(0x01)
	bool *455a87b8f2; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*c9d49aefff
// Size: 0x18 (Inherited: 0x00)
struct F*c9d49aefff {
	struct UEdGraphNode* *1ce754ad80; // 0x00(0x08)
	struct FGuid *898398f160; // 0x08(0x10)
};

// ScriptStruct Engine.*dcaec3c3e2
// Size: 0x80 (Inherited: 0x00)
struct F*dcaec3c3e2 {
	struct FString PinCategory; // 0x00(0x10)
	struct FString *cd5ad18670; // 0x10(0x10)
	struct UObject* *195d6cf120; // 0x20(0x08)
	struct FSimpleMemberReference *ffa862128c; // 0x28(0x20)
	struct F*13f0692f27 *ebd9c35d99; // 0x48(0x30)
	bool *f73c221835; // 0x78(0x01)
	bool *d02ee41101; // 0x79(0x01)
	bool *94abc1448e; // 0x7a(0x01)
	bool *0337958e36; // 0x7b(0x01)
	bool *4df499490e; // 0x7c(0x01)
	bool *4c48913b71; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// ScriptStruct Engine.*70d7fdf8a8
// Size: 0x10 (Inherited: 0x00)
struct F*70d7fdf8a8 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*28df80a383
// Size: 0x90 (Inherited: 0x00)
struct F*28df80a383 {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.*e01f82972b
// Size: 0x80 (Inherited: 0x00)
struct F*e01f82972b {
	bool bActive; // 0x00(0x01)
	enum class EMaterialLODType *c6a16a7df8; // 0x01(0x01)
	bool *c029595558; // 0x02(0x01)
	enum class *fcc1c03597 *86c781fb1f; // 0x03(0x01)
	enum class *fcc1c03597 *e7bce5fd41; // 0x04(0x01)
	enum class ESimplygonTextureSamplingQuality SamplingQuality; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32 GutterSpace; // 0x08(0x04)
	enum class ESimplygonTextureStrech *3519d299db; // 0x0c(0x01)
	bool *6d33246149; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct F*4c719ddaa3> *bc480ce97c; // 0x10(0x10)
	bool *4b0d939eae; // 0x20(0x01)
	bool *4fd5221b84; // 0x21(0x01)
	bool *3cd0cc8cdb; // 0x22(0x01)
	bool *190e7a7fe1; // 0x23(0x01)
	bool *c56d2deaa9; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct F*b13cd984c6 *b13cd984c6; // 0x28(0x58)
};

// ScriptStruct Engine.*b13cd984c6
// Size: 0x58 (Inherited: 0x00)
struct F*b13cd984c6 {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Engine.*4c719ddaa3
// Size: 0x10 (Inherited: 0x00)
struct F*4c719ddaa3 {
	enum class *5c20a305ae *bf4fc7d344; // 0x00(0x01)
	enum class ESimplygonCasterType *74c8da149b; // 0x01(0x01)
	bool bActive; // 0x02(0x01)
	enum class ESimplygonColorChannels *49125c76ef; // 0x03(0x01)
	int32 *c0975b52bb; // 0x04(0x04)
	bool *d372fb7a81; // 0x08(0x01)
	bool *40893fd213; // 0x09(0x01)
	bool *44fb7e1476; // 0x0a(0x01)
	bool *b113fc509e; // 0x0b(0x01)
	bool *d773c8acc1; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.MaterialProxySettings
// Size: 0x9c (Inherited: 0x00)
struct FMaterialProxySettings {
	struct FIntPoint TextureSize; // 0x00(0x08)
	enum class ETextureSizingType TextureSizingType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float GutterSpace; // 0x0c(0x04)
	enum class EMaterialProxySmaplingQuality SamplingQuality; // 0x10(0x01)
	enum class EUVStrech UVStrech; // 0x11(0x01)
	bool bSplitProxyMaterialBasedOnType; // 0x12(0x01)
	bool bUseTangentSpace; // 0x13(0x01)
	bool bNormalMap; // 0x14(0x01)
	bool bMetallicMap; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float MetallicConstant; // 0x18(0x04)
	bool bRoughnessMap; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float RoughnessConstant; // 0x20(0x04)
	bool bSpecularMap; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float SpecularConstant; // 0x28(0x04)
	bool bEmissiveMap; // 0x2c(0x01)
	bool bOpacityMap; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float OpacityConstant; // 0x30(0x04)
	bool bAmbientOcclusionMap; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float AOConstant; // 0x38(0x04)
	float AmbientOcclusionConstant; // 0x3c(0x04)
	bool bOpacityMaskMap; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float OpacityMaskConstant; // 0x44(0x04)
	struct FIntPoint DiffuseTextureSize; // 0x48(0x08)
	struct FIntPoint NormalTextureSize; // 0x50(0x08)
	struct FIntPoint MetallicTextureSize; // 0x58(0x08)
	struct FIntPoint RoughnessTextureSize; // 0x60(0x08)
	struct FIntPoint SpecularTextureSize; // 0x68(0x08)
	struct FIntPoint EmissiveTextureSize; // 0x70(0x08)
	struct FIntPoint OpacityTextureSize; // 0x78(0x08)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x80(0x08)
	struct FIntPoint OpacityMaskTextureSize; // 0x88(0x08)
	enum class EMaterialMergeType MaterialMergeType; // 0x90(0x01)
	enum class EBlendMode BlendMode; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	int32 BakingTextureSizeRatioOutdoor; // 0x94(0x04)
	int32 BakingTextureSizeRatioIndoor; // 0x98(0x04)
};

// ScriptStruct Engine.*8f0fa81020
// Size: 0xa8 (Inherited: 0x00)
struct F*8f0fa81020 {
	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 ScreenSize; // 0x04(0x04)
	bool bRecalculateNormals; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float HardAngleThreshold; // 0x0c(0x04)
	int32 MergeDistance; // 0x10(0x04)
	bool *1fb6f4b903; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *562267a9a9; // 0x18(0x04)
	int32 *871e7fb199; // 0x1c(0x04)
	bool *b58a36a484; // 0x20(0x01)
	bool *c5b1d25268; // 0x21(0x01)
	bool *dc58dbc4ab; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct F*e01f82972b *5cdeada271; // 0x28(0x80)
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0xd4 (Inherited: 0x00)
struct FMeshMergingSettings {
	bool bGenerateLightMapUV; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 TargetLightMapResolution; // 0x04(0x04)
	bool bImportVertexColors; // 0x08(0x01)
	bool bPivotPointAtZero; // 0x09(0x01)
	bool bMergePhysicsData; // 0x0a(0x01)
	bool bAssignLODGroup; // 0x0b(0x01)
	int32 LODGroupIndex; // 0x0c(0x04)
	bool bMergeMaterials; // 0x10(0x01)
	bool bForceUniqueUVGeneration; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FMaterialProxySettings MaterialSettings; // 0x14(0x9c)
	bool bBakeVertexDataToMesh; // 0xb0(0x01)
	bool bUseVertexDataForBakingMaterial; // 0xb1(0x01)
	bool bUseTextureBinning; // 0xb2(0x01)
	bool bCalculateCorrectLODModel; // 0xb3(0x01)
	enum class EMeshLODSelectionType LODSelectionType; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 ExportSpecificLOD; // 0xb8(0x04)
	int32 SpecificLOD; // 0xbc(0x04)
	bool bUseLandscapeCulling; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float MinimalBoundsSize; // 0xc4(0x04)
	bool bExportNormalMap; // 0xc8(0x01)
	bool bExportMetallicMap; // 0xc9(0x01)
	bool bExportRoughnessMap; // 0xca(0x01)
	bool bExportSpecularMap; // 0xcb(0x01)
	int32 MergedMaterialAtlasResolution; // 0xcc(0x04)
	char pad_D0[0x4]; // 0xd0(0x04)
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0xfc (Inherited: 0x00)
struct FMeshProxySettings {
	int32 ScreenSize; // 0x00(0x04)
	char bOverrideVoxelSize : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float VoxelSize; // 0x08(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x0c(0x9c)
	int32 TextureWidth; // 0xa8(0x04)
	int32 TextureHeight; // 0xac(0x04)
	bool bExportNormalMap; // 0xb0(0x01)
	bool bExportMetallicMap; // 0xb1(0x01)
	bool bExportRoughnessMap; // 0xb2(0x01)
	bool bExportSpecularMap; // 0xb3(0x01)
	bool bCalculateCorrectLODModel; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float OverrideDistanceForLevelLOD; // 0xb8(0x04)
	float MergeDistance; // 0xbc(0x04)
	float *2f741e2f7b; // 0xc0(0x04)
	struct FColor *62a27cca17; // 0xc4(0x04)
	bool bOverrideTransferDistance; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float *4a1e5f0d5e; // 0xcc(0x04)
	bool *e027a0b5a4; // 0xd0(0x01)
	bool bComputeLightMapResolution; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	float HardAngleThreshold; // 0xd4(0x04)
	enum class *dda2f6ee34 NormalCalculationMethod; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32 LightMapResolution; // 0xdc(0x04)
	bool bRecalculateNormals; // 0xe0(0x01)
	bool bBakeVertexData; // 0xe1(0x01)
	bool bUseLandscapeCulling; // 0xe2(0x01)
	enum class ELandscapeCullingPrecision *e1d7158d8c; // 0xe3(0x01)
	bool bAllowAdjacency; // 0xe4(0x01)
	bool bAllowDistanceField; // 0xe5(0x01)
	bool bReuseMeshLightmapUVs; // 0xe6(0x01)
	bool bCreateCollision; // 0xe7(0x01)
	bool bAllowVertexColors; // 0xe8(0x01)
	bool bGenerateLightmapUVs; // 0xe9(0x01)
	bool *2b98a62c8c; // 0xea(0x01)
	char pad_EB[0x1]; // 0xeb(0x01)
	int32 *133614ca13; // 0xec(0x04)
	bool *88907ab57c; // 0xf0(0x01)
	enum class EChartAggregationMode *ab951b635a; // 0xf1(0x01)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0xf2(0x01)
	bool *9cd24e43f5; // 0xf3(0x01)
	float MergeBoldness; // 0xf4(0x04)
	float MaxTriangleSize; // 0xf8(0x04)
};

// ScriptStruct Engine.*9156f9f612
// Size: 0x28 (Inherited: 0x00)
struct F*9156f9f612 {
	char *c83c06e9a8 : 1; // 0x00(0x01)
	char *b86b4ef21b : 1; // 0x00(0x01)
	char *745e9b8986 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	enum class EImposterCaptureType *0e86366448; // 0x01(0x01)
	enum class EImposterCaptureType *3852552da2; // 0x02(0x01)
	enum class EImposterCaptureType *96b6606ab3; // 0x03(0x01)
	enum class EImposterCaptureType *7c5296c2bd; // 0x04(0x01)
	enum class EImposterCaptureType *7697e5abdd; // 0x05(0x01)
	bool *fcba4d8dfa; // 0x06(0x01)
	bool *aa2fb80515; // 0x07(0x01)
	float ScreenSize; // 0x08(0x04)
	struct FLinearColor *2f12d0d4e3; // 0x0c(0x10)
	float BaseSaturation; // 0x1c(0x04)
	float VariationBrightness; // 0x20(0x04)
	float BaseBrightness; // 0x24(0x04)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x158 (Inherited: 0x00)
struct FMeshReductionSettings {
	int32 BaseLODModel; // 0x00(0x04)
	enum class EOptimizationMetric *26aba7b5da; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float PercentTriangles; // 0x08(0x04)
	float ScreenSize; // 0x0c(0x04)
	float MaxDeviation; // 0x10(0x04)
	float PixelError; // 0x14(0x04)
	float WeldingThreshold; // 0x18(0x04)
	enum class EMeshFeatureImportance SilhouetteImportance; // 0x1c(0x01)
	enum class EMeshFeatureImportance TextureImportance; // 0x1d(0x01)
	enum class EMeshFeatureImportance ShadingImportance; // 0x1e(0x01)
	enum class EMeshFeatureImportance VertexColorImportance; // 0x1f(0x01)
	float PercentVertices; // 0x20(0x04)
	bool bRecalculateNormals; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float HardAngleThreshold; // 0x28(0x04)
	bool bActive; // 0x2c(0x01)
	bool *629d8aa1d5; // 0x2d(0x01)
	bool *9a422e8fb5; // 0x2e(0x01)
	bool *5df576d3b1; // 0x2f(0x01)
	bool *4b8f691de3; // 0x30(0x01)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x31(0x01)
	enum class EMeshFeatureImportance *76954e4444; // 0x32(0x01)
	bool *c56d2deaa9; // 0x33(0x01)
	bool *48b0c9e562; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct F*e01f82972b MaterialLODSettings; // 0x38(0x80)
	struct FMaterialProxySettings MaterialProxySettings; // 0xb8(0x9c)
	char pad_154[0x4]; // 0x154(0x04)
};

// ScriptStruct Engine.*c9ffa053a0
// Size: 0x168 (Inherited: 0x00)
struct F*c9ffa053a0 {
	bool bCreatePackagePerAsset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DetailsPercentage; // 0x04(0x04)
	float MergeDistance; // 0x08(0x04)
	float *2f741e2f7b; // 0x0c(0x04)
	float MergeBoldness; // 0x10(0x04)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MaxTriangleSize; // 0x18(0x04)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x1c(0x9c)
	bool bOverrideLandscapeExportLOD; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *b0d71ab878; // 0xbc(0x04)
	struct FMaterialProxySettings *cd51c413d7; // 0xc0(0x9c)
	bool bBakeFoliageToLandscape; // 0x15c(0x01)
	bool bBakeGrassToLandscape; // 0x15d(0x01)
	bool bGenerateMeshNormalMap; // 0x15e(0x01)
	bool bGenerateMeshMetallicMap; // 0x15f(0x01)
	bool bGenerateMeshRoughnessMap; // 0x160(0x01)
	bool bGenerateMeshSpecularMap; // 0x161(0x01)
	bool bGenerateLandscapeNormalMap; // 0x162(0x01)
	bool bGenerateLandscapeMetallicMap; // 0x163(0x01)
	bool bGenerateLandscapeRoughnessMap; // 0x164(0x01)
	bool bGenerateLandscapeSpecularMap; // 0x165(0x01)
	bool bUseLandscapeCulling; // 0x166(0x01)
	enum class ELandscapeCullingPrecision *e1d7158d8c; // 0x167(0x01)
};

// ScriptStruct Engine.*6efbd680b0
// Size: 0x38 (Inherited: 0x28)
struct F*6efbd680b0 : F*5496d416f9 {
	struct UTexture2D* Texture; // 0x28(0x08)
	bool *73c9a68dec; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *b634fb546c; // 0x34(0x04)
};

// ScriptStruct Engine.*5496d416f9
// Size: 0x28 (Inherited: 0x00)
struct F*5496d416f9 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.*cc01e78d73
// Size: 0x20 (Inherited: 0x00)
struct F*cc01e78d73 {
	enum class EAutoBenchViewMode ViewMode; // 0x00(0x01)
	enum class EAutoBenchPathType PathType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 CameraSpeed; // 0x04(0x04)
	int32 CameraHeightOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FString> StatNames; // 0x10(0x10)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x230 (Inherited: 0x00)
struct FBodyInstance {
	char pad_0[0x12]; // 0x00(0x12)
	struct FCollisionResponseContainer ResponseToChannels; // 0x12(0x20)
	char pad_32[0x6]; // 0x32(0x06)
	struct FName CollisionProfileName; // 0x38(0x08)
	struct F*c0ea5e6696 CollisionResponses; // 0x40(0x30)
	char pad_70[0x4]; // 0x70(0x04)
	char bUseCCD : 1; // 0x74(0x01)
	char bNotifyRigidBodyCollision : 1; // 0x74(0x01)
	char bSimulatePhysics : 1; // 0x74(0x01)
	char bUseComplexForSimulation : 1; // 0x74(0x01)
	char bOverrideMass : 1; // 0x74(0x01)
	char bEnableGravity : 1; // 0x74(0x01)
	char bAutoWeld : 1; // 0x74(0x01)
	char bStartAwake : 1; // 0x74(0x01)
	char bGenerateWakeEvents : 1; // 0x75(0x01)
	char *5030218142 : 1; // 0x75(0x01)
	char *2e216630bb : 1; // 0x75(0x01)
	char *a1f4670fff : 1; // 0x75(0x01)
	char *64cb4dbbb8 : 1; // 0x75(0x01)
	char *df6dc52a51 : 1; // 0x75(0x01)
	char *dff2c58b7c : 1; // 0x75(0x01)
	char *a101899b93 : 1; // 0x75(0x01)
	char *130fd656e1 : 1; // 0x76(0x01)
	char *b0b06b6f07 : 1; // 0x76(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x76(0x01)
	char pad_76_3 : 4; // 0x76(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x76(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x77(0x01)
	char pad_77_1 : 7; // 0x77(0x01)
	float MaxDepenetrationVelocity; // 0x78(0x04)
	char pad_7C[0x8]; // 0x7c(0x08)
	float MassInKgOverride; // 0x84(0x04)
	float LinearDamping; // 0x88(0x04)
	float AngularDamping; // 0x8c(0x04)
	struct FVector CustomDOFPlaneNormal; // 0x90(0x0c)
	struct FVector COMNudge; // 0x9c(0x0c)
	char pad_A8[0x10]; // 0xa8(0x10)
	float MassScale; // 0xb8(0x04)
	char pad_BC[0x14]; // 0xbc(0x14)
	struct F*630cf25516 WalkableSlopeOverride; // 0xd0(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xe0(0x08)
	float MaxAngularVelocity; // 0xe8(0x04)
	float CustomSleepThresholdMultiplier; // 0xec(0x04)
	float StabilizationThresholdMultiplier; // 0xf0(0x04)
	float *a518971628; // 0xf4(0x04)
	int32 PositionSolverIterationCount; // 0xf8(0x04)
	char pad_FC[0x24]; // 0xfc(0x24)
	uint64 *34e05e41e0; // 0x120(0x08)
	int32 VelocitySolverIterationCount; // 0x128(0x04)
	char pad_12C[0xf8]; // 0x12c(0xf8)
	enum class ESleepFamily SleepFamily; // 0x224(0x01)
	enum class EDOFMode DOFMode; // 0x225(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x226(0x01)
	enum class ECollisionChannel ObjectType; // 0x227(0x01)
	char pad_228[0x8]; // 0x228(0x08)
};

// ScriptStruct Engine.*c0ea5e6696
// Size: 0x30 (Inherited: 0x00)
struct F*c0ea5e6696 {
	struct FCollisionResponseContainer *4feca35fce; // 0x00(0x20)
	struct TArray<struct F*35cd224f29> *e1e675e571; // 0x20(0x10)
};

// ScriptStruct Engine.*b5b893870e
// Size: 0x0c (Inherited: 0x00)
struct F*b5b893870e {
	uint32 *cdc293b242; // 0x00(0x04)
	int32 *09b6266da6; // 0x04(0x04)
	float *caff5ccc3f; // 0x08(0x04)
};

// ScriptStruct Engine.*fbe1ab601b
// Size: 0x30 (Inherited: 0x00)
struct F*fbe1ab601b {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FBoxSphereBounds Bounds; // 0x08(0x1c)
	float *caff5ccc3f; // 0x24(0x04)
	uint32 *cdc293b242; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*0fdc6dd237
// Size: 0x04 (Inherited: 0x00)
struct F*0fdc6dd237 {
	char *3cf879eb4c : 1; // 0x00(0x01)
	char *c52b7d06bf : 1; // 0x00(0x01)
	char *296bb04cf1 : 1; // 0x00(0x01)
	char *3e92085512 : 1; // 0x00(0x01)
	char *3316f9adf6 : 1; // 0x00(0x01)
	char *4c082a5a2d : 1; // 0x00(0x01)
	char *0f39c42220 : 1; // 0x00(0x01)
	char *fac47f37e7 : 1; // 0x00(0x01)
	char *7464d48c8e : 1; // 0x01(0x01)
	char *cd01b03e22 : 1; // 0x01(0x01)
	char *a9ccaf3b30 : 1; // 0x01(0x01)
	char *a99725e381 : 1; // 0x01(0x01)
	char *e55b82ae15 : 1; // 0x01(0x01)
	char *4679d15587 : 1; // 0x01(0x01)
	char *02ec6385a5 : 1; // 0x01(0x01)
	char *31db9fddf4 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*6c9a74e1a9
// Size: 0x18 (Inherited: 0x00)
struct F*6c9a74e1a9 {
	struct UClass* AreaClass; // 0x00(0x08)
	float *92b3461422; // 0x08(0x04)
	float *6dabb8bbe5; // 0x0c(0x04)
	char *37e1d4777f : 1; // 0x10(0x01)
	char bOverrideTravelCost : 1; // 0x10(0x01)
	char bOverrideEnteringCost : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*cbd6f80afe
// Size: 0x14 (Inherited: 0x00)
struct F*cbd6f80afe {
	struct FVector TargetLocation; // 0x00(0x0c)
	float GenerateRadiusMin; // 0x0c(0x04)
	float GenerateRadiusMax; // 0x10(0x04)
};

// ScriptStruct Engine.*462177a17f
// Size: 0x50 (Inherited: 0x20)
struct F*462177a17f : F*afffc9221e {
	struct FName Name; // 0x20(0x08)
	struct FColor Color; // 0x28(0x04)
	struct FVector DefaultQueryExtent; // 0x2c(0x0c)
	struct UClass* NavigationDataClass; // 0x38(0x08)
	struct FStringClassReference NavigationDataClassName; // 0x40(0x10)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector {
	char *e1c2bd6b7c : 1; // 0x00(0x01)
	char *733b130c99 : 1; // 0x00(0x01)
	char *adb35f1fbe : 1; // 0x00(0x01)
	char *f2b66aa223 : 1; // 0x00(0x01)
	char *83b0ed975e : 1; // 0x00(0x01)
	char *12d3913d43 : 1; // 0x00(0x01)
	char *e055976469 : 1; // 0x00(0x01)
	char *e39229b017 : 1; // 0x00(0x01)
	char *3b06182400 : 1; // 0x01(0x01)
	char *d95aae70dc : 1; // 0x01(0x01)
	char *e74289e699 : 1; // 0x01(0x01)
	char *f15690506a : 1; // 0x01(0x01)
	char *ce11bf2bfa : 1; // 0x01(0x01)
	char *899c61b8b0 : 1; // 0x01(0x01)
	char *2bfe92c6a8 : 1; // 0x01(0x01)
	char *b7999b244e : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*1a6c629748
// Size: 0x38 (Inherited: 0x00)
struct F*1a6c629748 {
	struct FName Category; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Engine.*5f6ee19796
// Size: 0x14 (Inherited: 0x00)
struct F*5f6ee19796 {
	bool *aaff20ef47; // 0x00(0x01)
	bool bOverrideDensities; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *13ea1565d4[0x04]; // 0x04(0x10)
};

// ScriptStruct Engine.*95c39fad8b
// Size: 0x18 (Inherited: 0x00)
struct F*95c39fad8b {
	uint32 *ff57146863; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *600575a9bd; // 0x08(0x10)
};

// ScriptStruct Engine.*9b3c03c912
// Size: 0x28 (Inherited: 0x00)
struct F*9b3c03c912 {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct F*5f6ee19796 UVChannelData; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*93cec5ddba
// Size: 0x28 (Inherited: 0x00)
struct F*93cec5ddba {
	bool *d02ee41101; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *0532b4dd56; // 0x04(0x0c)
	struct FVector *0636f8891a; // 0x10(0x0c)
	struct FRotator *4e04aee6e9; // 0x1c(0x0c)
};

// ScriptStruct Engine.*a74b4a22a5
// Size: 0x50 (Inherited: 0x00)
struct F*a74b4a22a5 {
	struct TMap<struct FString, struct F*efb6d906a0> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*efb6d906a0
// Size: 0x50 (Inherited: 0x00)
struct F*efb6d906a0 {
	struct TMap<uint32, struct F*693a93c44a> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*693a93c44a
// Size: 0x08 (Inherited: 0x00)
struct F*693a93c44a {
	int32 MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool *2f48721731; // 0x05(0x01)
	bool *06aa8ca8ca; // 0x06(0x01)
	bool IndoorOutdoorMask; // 0x07(0x01)
};

// ScriptStruct Engine.*2cc7c17239
// Size: 0x04 (Inherited: 0x00)
struct F*2cc7c17239 {
	uint16 LODIndex; // 0x00(0x02)
	uint16 SectionIndex; // 0x02(0x02)
};

// ScriptStruct Engine.*756fbc191b
// Size: 0x4b0 (Inherited: 0x00)
struct F*756fbc191b {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x40)
	struct FMeshReductionSettings ReductionSettings; // 0x40(0x158)
	struct F*8f0fa81020 RemeshingSettings; // 0x198(0xa8)
	bool *9e942f2dc8; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FGroupedStaticMeshOptimizationSettings OptimizationSettings; // 0x248(0x260)
	float LODDistance; // 0x4a8(0x04)
	float ScreenSize; // 0x4ac(0x04)
};

// ScriptStruct Engine.GroupedStaticMeshOptimizationSettings
// Size: 0x260 (Inherited: 0x00)
struct FGroupedStaticMeshOptimizationSettings {
	enum class EStaticMeshLODType *f15bbe9962; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMeshReductionSettings ReductionSettings; // 0x08(0x158)
	struct FMeshProxySettings ProxySettings; // 0x160(0xfc)
	char pad_25C[0x4]; // 0x25c(0x04)
};

// ScriptStruct Engine.*b140e3f068
// Size: 0x1c (Inherited: 0x00)
struct F*b140e3f068 {
	enum class *cf6e643908 *2f013a77f5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *7e3faec9c5; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *cb640faf1f; // 0x14(0x04)
	bool SilhouetteImportance; // 0x18(0x01)
	bool TextureImportance; // 0x19(0x01)
	bool ShadingImportance; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.*8f50c6ced6
// Size: 0xc8 (Inherited: 0x00)
struct F*8f50c6ced6 {
	bool bUseCustomCapture; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Saturation; // 0x04(0x04)
	struct FLinearColor *f25aa6a237; // 0x08(0x10)
	struct FLinearColor *6bcf9f47a8; // 0x18(0x10)
	struct FLinearColor *a0a092b365; // 0x28(0x10)
	struct FLinearColor *ef15397124; // 0x38(0x10)
	struct FLinearColor *73198caa6c; // 0x48(0x10)
	struct FLinearColor *3ee4b4c030; // 0x58(0x10)
	struct FLinearColor *6ebf83b30f; // 0x68(0x10)
	struct FLinearColor *efdcb56383; // 0x78(0x10)
	struct FLinearColor *60e4d3e236; // 0x88(0x10)
	struct FLinearColor *4f5d49810d; // 0x98(0x10)
	struct FLinearColor *310b9b76fd; // 0xa8(0x10)
	struct FLinearColor *c6419c6285; // 0xb8(0x10)
};

// ScriptStruct Engine.AmbientCube
// Size: 0x94 (Inherited: 0x00)
struct FAmbientCube {
	float Saturation; // 0x00(0x04)
	struct F*9ea2a9d665 Faces[0x06]; // 0x04(0x90)
};

// ScriptStruct Engine.*9ea2a9d665
// Size: 0x18 (Inherited: 0x00)
struct F*9ea2a9d665 {
	struct FColor Color; // 0x00(0x04)
	struct FLinearColor Tint; // 0x04(0x10)
	float FaceSaturation; // 0x14(0x04)
};

// ScriptStruct Engine.*9c7d57f967
// Size: 0x0c (Inherited: 0x00)
struct F*9c7d57f967 {
	int32 Type; // 0x00(0x04)
	int32 Index; // 0x04(0x04)
	int32 *fcf08a7bc6; // 0x08(0x04)
};

// ScriptStruct Engine.*391dcb41c3
// Size: 0x24 (Inherited: 0x00)
struct F*391dcb41c3 {
	char bIsWorldSettings : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ExteriorVolume; // 0x04(0x04)
	float ExteriorTime; // 0x08(0x04)
	float ExteriorLPF; // 0x0c(0x04)
	float ExteriorLPFTime; // 0x10(0x04)
	float InteriorVolume; // 0x14(0x04)
	float InteriorTime; // 0x18(0x04)
	float InteriorLPF; // 0x1c(0x04)
	float InteriorLPFTime; // 0x20(0x04)
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x18 (Inherited: 0x00)
struct FReverbSettings {
	char bApplyReverb : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class *ef2a1d9574 ReverbType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	float Volume; // 0x10(0x04)
	float FadeTime; // 0x14(0x04)
};

// ScriptStruct Engine.*dcfd236c03
// Size: 0x08 (Inherited: 0x00)
struct F*dcfd236c03 {
	float Size; // 0x00(0x04)
	float CullDistance; // 0x04(0x04)
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x570 (Inherited: 0x00)
struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_ColorContrast : 1; // 0x00(0x01)
	char bOverride_ColorGamma : 1; // 0x00(0x01)
	char bOverride_ColorGain : 1; // 0x00(0x01)
	char bOverride_ColorOffset : 1; // 0x00(0x01)
	char bOverride_ColorSaturationShadows : 1; // 0x00(0x01)
	char bOverride_ColorContrastShadows : 1; // 0x01(0x01)
	char bOverride_ColorGammaShadows : 1; // 0x01(0x01)
	char bOverride_ColorGainShadows : 1; // 0x01(0x01)
	char bOverride_ColorOffsetShadows : 1; // 0x01(0x01)
	char bOverride_ColorSaturationMidtones : 1; // 0x01(0x01)
	char bOverride_ColorContrastMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGammaMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGainMidtones : 1; // 0x01(0x01)
	char bOverride_ColorOffsetMidtones : 1; // 0x02(0x01)
	char bOverride_ColorSaturationHighlights : 1; // 0x02(0x01)
	char bOverride_ColorContrastHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGammaHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGainHighlights : 1; // 0x02(0x01)
	char bOverride_ColorOffsetHighlights : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x02(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x03(0x01)
	char bOverride_FilmSaturation : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x03(0x01)
	char bOverride_FilmContrast : 1; // 0x03(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x03(0x01)
	char bOverride_FilmHealAmount : 1; // 0x03(0x01)
	char bOverride_FilmToeAmount : 1; // 0x04(0x01)
	char bOverride_FilmShadowTint : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x04(0x01)
	char bOverride_FilmSlope : 1; // 0x04(0x01)
	char bOverride_FilmToe : 1; // 0x04(0x01)
	char bOverride_FilmShoulder : 1; // 0x04(0x01)
	char bOverride_FilmBlackClip : 1; // 0x04(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x05(0x01)
	char bOverride_SceneColorTint : 1; // 0x05(0x01)
	char bOverride_SceneFringeIntensity : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x05(0x01)
	char bOverride_BloomMethod : 1; // 0x05(0x01)
	char bOverride_BloomIntensity : 1; // 0x05(0x01)
	char bOverride_BloomThreshold : 1; // 0x05(0x01)
	char bOverride_Bloom1Tint : 1; // 0x06(0x01)
	char bOverride_Bloom1Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Size : 1; // 0x06(0x01)
	char bOverride_Bloom4Tint : 1; // 0x06(0x01)
	char bOverride_Bloom4Size : 1; // 0x06(0x01)
	char bOverride_Bloom5Tint : 1; // 0x07(0x01)
	char bOverride_Bloom5Size : 1; // 0x07(0x01)
	char bOverride_Bloom6Tint : 1; // 0x07(0x01)
	char bOverride_Bloom6Size : 1; // 0x07(0x01)
	char bOverride_BloomSizeScale : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionTexture : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionSize : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionCenterUV : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionPreFilter : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionBufferScale : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskIntensity : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskTint : 1; // 0x08(0x01)
	char bOverride_BloomDirtMask : 1; // 0x08(0x01)
	char bOverride_TslBlurIntensity : 1; // 0x09(0x01)
	char bOverride_TslBlurScopeInnerEdge : 1; // 0x09(0x01)
	char bOverride_TslBlurScopeOutterEdge : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthBlackPoint : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthWhitePoint : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthGamma : 1; // 0x09(0x01)
	char bOverride_bTslBlurUseBranching : 1; // 0x09(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityStartLuminance : 1; // 0x09(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityFadeSpeed : 1; // 0x0a(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier : 1; // 0x0a(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityReticleOpacity : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x0a(0x01)
	char bOverride_AutoExposureLowPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x0b(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x0b(0x01)
	char bOverride_AutoExposureBias : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMin : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMax : 1; // 0x0b(0x01)
	char bOverride_LensFlareIntensity : 1; // 0x0b(0x01)
	char bOverride_LensFlareTint : 1; // 0x0b(0x01)
	char bOverride_LensFlareTints : 1; // 0x0b(0x01)
	char bOverride_LensFlareBokehSize : 1; // 0x0c(0x01)
	char bOverride_LensFlareBokehShape : 1; // 0x0c(0x01)
	char bOverride_LensFlareThreshold : 1; // 0x0c(0x01)
	char bOverride_VignetteIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainJitter : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x0d(0x01)
	char bOverride_HBAOPowerExponent : 1; // 0x0d(0x01)
	char bOverride_HBAORadius : 1; // 0x0d(0x01)
	char bOverride_HBAOBias : 1; // 0x0d(0x01)
	char bOverride_HBAODetailAO : 1; // 0x0d(0x01)
	char bOverride_HBAOBlurRadius : 1; // 0x0d(0x01)
	char bOverride_HBAOBlurSharpness : 1; // 0x0e(0x01)
	char bOverride_HBAOMaxViewDepth : 1; // 0x0e(0x01)
	char bOverride_HBAODepthSharpness : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionDistance : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x0f(0x01)
	char bOverride_LPVIntensity : 1; // 0x0f(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0f(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0f(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0f(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x0f(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSize : 1; // 0x10(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x10(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x10(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x10(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVFadeRange : 1; // 0x11(0x01)
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x11(0x01)
	char bOverride_IndirectLightingColor : 1; // 0x11(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x11(0x01)
	char bOverride_ColorGradingIntensity : 1; // 0x11(0x01)
	char bOverride_ColorGradingLUT : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldFstop : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldScopeSize : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldScale : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldMaxBokehSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldMethod : 1; // 0x13(0x01)
	char bOverride_MobileHQGaussian : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldBokehShape : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldOcclusion : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldColorThreshold : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldSizeThreshold : 1; // 0x14(0x01)
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x14(0x01)
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x14(0x01)
	char bOverride_MotionBlurAmount : 1; // 0x14(0x01)
	char bOverride_MotionBlurMax : 1; // 0x14(0x01)
	char bOverride_MotionBlurPerObjectSize : 1; // 0x14(0x01)
	char bOverride_ScreenPercentage : 1; // 0x14(0x01)
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x14(0x01)
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x15(0x01)
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x15(0x01)
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x15(0x01)
	char bOverride_OutlineSettings : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTexture : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTextureScale : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTextureScrollSpeed : 1; // 0x15(0x01)
	char pad_15_7 : 1; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float WhiteTemp; // 0x18(0x04)
	float WhiteTint; // 0x1c(0x04)
	struct FVector4 ColorSaturation; // 0x20(0x10)
	struct FVector4 ColorContrast; // 0x30(0x10)
	struct FVector4 ColorGamma; // 0x40(0x10)
	struct FVector4 ColorGain; // 0x50(0x10)
	struct FVector4 ColorOffset; // 0x60(0x10)
	struct FVector4 ColorSaturationShadows; // 0x70(0x10)
	struct FVector4 ColorContrastShadows; // 0x80(0x10)
	struct FVector4 ColorGammaShadows; // 0x90(0x10)
	struct FVector4 ColorGainShadows; // 0xa0(0x10)
	struct FVector4 ColorOffsetShadows; // 0xb0(0x10)
	float ColorCorrectionShadowsMax; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FVector4 ColorSaturationMidtones; // 0xd0(0x10)
	struct FVector4 ColorContrastMidtones; // 0xe0(0x10)
	struct FVector4 ColorGammaMidtones; // 0xf0(0x10)
	struct FVector4 ColorGainMidtones; // 0x100(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x110(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x120(0x10)
	struct FVector4 ColorContrastHighlights; // 0x130(0x10)
	struct FVector4 ColorGammaHighlights; // 0x140(0x10)
	struct FVector4 ColorGainHighlights; // 0x150(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x160(0x10)
	float ColorCorrectionHighlightsMin; // 0x170(0x04)
	float FilmSlope; // 0x174(0x04)
	float FilmToe; // 0x178(0x04)
	float FilmShoulder; // 0x17c(0x04)
	float FilmBlackClip; // 0x180(0x04)
	float FilmWhiteClip; // 0x184(0x04)
	struct FLinearColor FilmWhitePoint; // 0x188(0x10)
	struct FLinearColor FilmShadowTint; // 0x198(0x10)
	float FilmShadowTintBlend; // 0x1a8(0x04)
	float FilmShadowTintAmount; // 0x1ac(0x04)
	float FilmSaturation; // 0x1b0(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x1b4(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x1c4(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x1d4(0x10)
	float FilmContrast; // 0x1e4(0x04)
	float FilmToeAmount; // 0x1e8(0x04)
	float FilmHealAmount; // 0x1ec(0x04)
	float FilmDynamicRange; // 0x1f0(0x04)
	struct FLinearColor SceneColorTint; // 0x1f4(0x10)
	float SceneFringeIntensity; // 0x204(0x04)
	enum class *5082b992ef BloomMethod; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	float BloomIntensity; // 0x20c(0x04)
	float BloomThreshold; // 0x210(0x04)
	float BloomSizeScale; // 0x214(0x04)
	float Bloom1Size; // 0x218(0x04)
	float Bloom2Size; // 0x21c(0x04)
	float Bloom3Size; // 0x220(0x04)
	float Bloom4Size; // 0x224(0x04)
	float Bloom5Size; // 0x228(0x04)
	float Bloom6Size; // 0x22c(0x04)
	struct FLinearColor Bloom1Tint; // 0x230(0x10)
	struct FLinearColor Bloom2Tint; // 0x240(0x10)
	struct FLinearColor Bloom3Tint; // 0x250(0x10)
	struct FLinearColor Bloom4Tint; // 0x260(0x10)
	struct FLinearColor Bloom5Tint; // 0x270(0x10)
	struct FLinearColor Bloom6Tint; // 0x280(0x10)
	struct UTexture2D* BloomConvolutionTexture; // 0x290(0x08)
	float BloomConvolutionSize; // 0x298(0x04)
	struct FVector2D BloomConvolutionCenterUV; // 0x29c(0x08)
	struct FVector BloomConvolutionPreFilter; // 0x2a4(0x0c)
	float BloomConvolutionPreFilterMin; // 0x2b0(0x04)
	float BloomConvolutionPreFilterMax; // 0x2b4(0x04)
	float BloomConvolutionPreFilterMult; // 0x2b8(0x04)
	float BloomConvolutionBufferScale; // 0x2bc(0x04)
	struct UTexture* BloomDirtMask; // 0x2c0(0x08)
	float BloomDirtMaskIntensity; // 0x2c8(0x04)
	struct FLinearColor BloomDirtMaskTint; // 0x2cc(0x10)
	float TslBlurIntensity; // 0x2dc(0x04)
	float TslBlurScopeInnerEdge; // 0x2e0(0x04)
	float TslBlurScopeOutterEdge; // 0x2e4(0x04)
	float TslBlurReticleBrightSceneVisibilityStartLuminance; // 0x2e8(0x04)
	float TslBlurReticleBrightSceneVisibilityFadeSpeed; // 0x2ec(0x04)
	float TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier; // 0x2f0(0x04)
	float TslBlurReticleBrightSceneVisibilityReticleOpacity; // 0x2f4(0x04)
	float TslBlurDepthBlackPoint; // 0x2f8(0x04)
	float TslBlurDepthWhitePoint; // 0x2fc(0x04)
	float TslBlurDepthGamma; // 0x300(0x04)
	bool bTslBlurUseBranching; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct FLinearColor AmbientCubemapTint; // 0x308(0x10)
	float AmbientCubemapIntensity; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UTextureCube* AmbientCubemap; // 0x320(0x08)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	float AutoExposureLowPercent; // 0x32c(0x04)
	float AutoExposureHighPercent; // 0x330(0x04)
	float AutoExposureMinBrightness; // 0x334(0x04)
	float AutoExposureMaxBrightness; // 0x338(0x04)
	float AutoExposureSpeedUp; // 0x33c(0x04)
	float AutoExposureSpeedDown; // 0x340(0x04)
	float AutoExposureBias; // 0x344(0x04)
	float HistogramLogMin; // 0x348(0x04)
	float HistogramLogMax; // 0x34c(0x04)
	float LensFlareIntensity; // 0x350(0x04)
	struct FLinearColor LensFlareTint; // 0x354(0x10)
	float LensFlareBokehSize; // 0x364(0x04)
	float LensFlareThreshold; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UTexture* LensFlareBokehShape; // 0x370(0x08)
	struct FLinearColor LensFlareTints[0x08]; // 0x378(0x80)
	float VignetteIntensity; // 0x3f8(0x04)
	float GrainJitter; // 0x3fc(0x04)
	float GrainIntensity; // 0x400(0x04)
	float HBAOPowerExponent; // 0x404(0x04)
	float HBAORadius; // 0x408(0x04)
	float HBAOBias; // 0x40c(0x04)
	float HBAODetailAO; // 0x410(0x04)
	enum class EHBAOBlurRadius HBAOBlurRadius; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	float HBAOBlurSharpness; // 0x418(0x04)
	float HBAOMaxViewDepth; // 0x41c(0x04)
	float HBAODepthSharpness; // 0x420(0x04)
	float AmbientOcclusionIntensity; // 0x424(0x04)
	float AmbientOcclusionStaticFraction; // 0x428(0x04)
	float AmbientOcclusionRadius; // 0x42c(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float AmbientOcclusionFadeDistance; // 0x434(0x04)
	float AmbientOcclusionFadeRadius; // 0x438(0x04)
	float AmbientOcclusionDistance; // 0x43c(0x04)
	float AmbientOcclusionPower; // 0x440(0x04)
	float AmbientOcclusionBias; // 0x444(0x04)
	float AmbientOcclusionQuality; // 0x448(0x04)
	float AmbientOcclusionMipBlend; // 0x44c(0x04)
	float AmbientOcclusionMipScale; // 0x450(0x04)
	float AmbientOcclusionMipThreshold; // 0x454(0x04)
	struct FLinearColor IndirectLightingColor; // 0x458(0x10)
	float IndirectLightingIntensity; // 0x468(0x04)
	float ColorGradingIntensity; // 0x46c(0x04)
	struct UTexture* ColorGradingLUT; // 0x470(0x08)
	enum class EDepthOfFieldMethod DepthOfFieldMethod; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	char bMobileHQGaussian : 1; // 0x47c(0x01)
	char pad_47C_1 : 7; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	float DepthOfFieldFstop; // 0x480(0x04)
	float DepthOfFieldSensorWidth; // 0x484(0x04)
	float DepthOfFieldFocalDistance; // 0x488(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x48c(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x490(0x04)
	float DepthOfFieldFocalRegion; // 0x494(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x498(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x49c(0x04)
	float DepthOfFieldScale; // 0x4a0(0x04)
	float DepthOfFieldMaxBokehSize; // 0x4a4(0x04)
	float DepthOfFieldNearBlurSize; // 0x4a8(0x04)
	float DepthOfFieldFarBlurSize; // 0x4ac(0x04)
	struct UTexture* DepthOfFieldBokehShape; // 0x4b0(0x08)
	float DepthOfFieldOcclusion; // 0x4b8(0x04)
	float DepthOfFieldColorThreshold; // 0x4bc(0x04)
	float DepthOfFieldSizeThreshold; // 0x4c0(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x4c4(0x04)
	float DepthOfFieldVignetteSize; // 0x4c8(0x04)
	float MotionBlurAmount; // 0x4cc(0x04)
	float MotionBlurMax; // 0x4d0(0x04)
	float MotionBlurPerObjectSize; // 0x4d4(0x04)
	float LPVIntensity; // 0x4d8(0x04)
	float LPVVplInjectionBias; // 0x4dc(0x04)
	float LPVSize; // 0x4e0(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x4e4(0x04)
	float LPVSecondaryBounceIntensity; // 0x4e8(0x04)
	float LPVGeometryVolumeBias; // 0x4ec(0x04)
	float LPVEmissiveInjectionIntensity; // 0x4f0(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x4f4(0x04)
	float LPVDirectionalOcclusionRadius; // 0x4f8(0x04)
	float LPVDiffuseOcclusionExponent; // 0x4fc(0x04)
	float LPVSpecularOcclusionExponent; // 0x500(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x504(0x04)
	float LPVSpecularOcclusionIntensity; // 0x508(0x04)
	float ScreenSpaceReflectionIntensity; // 0x50c(0x04)
	float ScreenSpaceReflectionQuality; // 0x510(0x04)
	float ScreenSpaceReflectionMaxRoughness; // 0x514(0x04)
	float LPVFadeRange; // 0x518(0x04)
	float LPVDirectionalOcclusionFadeRange; // 0x51c(0x04)
	float ScreenPercentage; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UTexture2D* OutlineMaskTexture; // 0x528(0x08)
	struct FVector2D OutlineMaskTextureScale; // 0x530(0x08)
	struct FVector2D OutlineMaskTextureScrollSpeed; // 0x538(0x08)
	struct TArray<struct FPostProcessOutlineSettings> OutlineSettings; // 0x540(0x10)
	struct FWeightedBlendables WeightedBlendables; // 0x550(0x10)
	struct TArray<struct UObject*> Blendables; // 0x560(0x10)
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; // 0x00(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendable {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* Object; // 0x08(0x08)
};

// ScriptStruct Engine.PostProcessOutlineSettings
// Size: 0x1c (Inherited: 0x00)
struct FPostProcessOutlineSettings {
	struct FLinearColor Color; // 0x00(0x10)
	float OuterRadius; // 0x10(0x04)
	float InnerRadius; // 0x14(0x04)
	bool bUseNoiseTexture; // 0x18(0x01)
	bool bXRay; // 0x19(0x01)
	bool CustomStencilValue; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.LatentActionManager
// Size: 0xf0 (Inherited: 0x00)
struct FLatentActionManager {
	char pad_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct Engine.*b08efd8351
// Size: 0x38 (Inherited: 0x00)
struct F*b08efd8351 {
	char pad_0[0x30]; // 0x00(0x30)
	bool *f94ea59492; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 *d5d4106843; // 0x34(0x04)
};

// ScriptStruct Engine.*5cde951495
// Size: 0x5b0 (Inherited: 0x00)
struct F*5cde951495 {
	struct FVector Location; // 0x00(0x0c)
	float OrthoFarClipPlane; // 0x0c(0x04)
	float OrthoNearClipPlane; // 0x10(0x04)
	float OrthoWidth; // 0x14(0x04)
	char bConstrainAspectRatio : 1; // 0x18(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float PostProcessBlendWeight; // 0x1c(0x04)
	enum class ECameraProjectionMode ProjectionMode; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector2D OffCenterProjectionOffset; // 0x24(0x08)
	struct FRotator Rotation; // 0x2c(0x0c)
	float FOV; // 0x38(0x04)
	float AspectRatio; // 0x3c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x570)
};

// ScriptStruct Engine.*1b91ec26de
// Size: 0x24 (Inherited: 0x00)
struct F*1b91ec26de {
	struct F*e34584cb7c X; // 0x00(0x0c)
	struct F*e34584cb7c Y; // 0x0c(0x0c)
	struct F*e34584cb7c Z; // 0x18(0x0c)
};

// ScriptStruct Engine.*e34584cb7c
// Size: 0x0c (Inherited: 0x00)
struct F*e34584cb7c {
	float *16cab9cc7a; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class *88aaf8a3e0 *a72dc9c01b; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*2f8ce11fce
// Size: 0x24 (Inherited: 0x00)
struct F*2f8ce11fce {
	struct F*e34584cb7c Pitch; // 0x00(0x0c)
	struct F*e34584cb7c Yaw; // 0x0c(0x0c)
	struct F*e34584cb7c Roll; // 0x18(0x0c)
};

// ScriptStruct Engine.*ac0997d4df
// Size: 0x10 (Inherited: 0x00)
struct F*ac0997d4df {
	float BlendTime; // 0x00(0x04)
	enum class *602ce54d82 BlendFunction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*8aa6907eaa
// Size: 0x5d0 (Inherited: 0x00)
struct F*8aa6907eaa {
	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct F*5cde951495 POV; // 0x10(0x5b0)
	struct APlayerState* PlayerState; // 0x5c0(0x08)
	char pad_5C8[0x8]; // 0x5c8(0x08)
};

// ScriptStruct Engine.*4156116286
// Size: 0x5c0 (Inherited: 0x00)
struct F*4156116286 {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct F*5cde951495 *08b2f76dfb; // 0x10(0x5b0)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputAxisKeyMapping {
	struct FName AxisName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	float Scale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputActionKeyMapping {
	struct FName ActionName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	char bShift : 1; // 0x20(0x01)
	char bCtrl : 1; // 0x20(0x01)
	char bAlt : 1; // 0x20(0x01)
	char bCmd : 1; // 0x20(0x01)
	char pad_20_4 : 4; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x28 (Inherited: 0x00)
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x00(0x08)
	struct F*9a4680a8af AxisProperties; // 0x08(0x20)
};

// ScriptStruct Engine.*9a4680a8af
// Size: 0x20 (Inherited: 0x00)
struct F*9a4680a8af {
	float DEADZONE; // 0x00(0x04)
	float OuterDeadZone; // 0x04(0x04)
	float Sensitivity; // 0x08(0x04)
	float Exponent; // 0x0c(0x04)
	char bInvert : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UCurveFloat* MultiplierAxisValueCurve; // 0x18(0x08)
};

// ScriptStruct Engine.*2717edfafa
// Size: 0x30 (Inherited: 0x00)
struct F*2717edfafa {
	struct FKey Key; // 0x00(0x18)
	struct FString Command; // 0x18(0x10)
	char Control : 1; // 0x28(0x01)
	char Shift : 1; // 0x28(0x01)
	char Alt : 1; // 0x28(0x01)
	char Cmd : 1; // 0x28(0x01)
	char bIgnoreCtrl : 1; // 0x28(0x01)
	char bIgnoreShift : 1; // 0x28(0x01)
	char bIgnoreAlt : 1; // 0x28(0x01)
	char bIgnoreCmd : 1; // 0x28(0x01)
	char *c9b339217a : 1; // 0x29(0x01)
	char pad_29_1 : 7; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*82896a6c76
// Size: 0x10 (Inherited: 0x00)
struct F*82896a6c76 {
	struct FName ActionName; // 0x00(0x08)
	enum class *1148c7239b KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*526a26a06d
// Size: 0x70 (Inherited: 0x00)
struct F*526a26a06d {
	struct UPlayerInput* PlayerInput; // 0x00(0x08)
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct Engine.*3715816a7a
// Size: 0x18 (Inherited: 0x00)
struct F*3715816a7a {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*205de32a17
// Size: 0x80 (Inherited: 0x00)
struct F*205de32a17 {
	char *99d6c1a1c2 : 1; // 0x00(0x01)
	char *62bd103d88 : 1; // 0x00(0x01)
	char *124cfd5ff0 : 1; // 0x00(0x01)
	char *3071d86138 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x78)
};

// ScriptStruct Engine.*7c60183dc5
// Size: 0x10 (Inherited: 0x00)
struct F*7c60183dc5 {
	struct FName PackageName; // 0x00(0x08)
	char bIsVisible : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*a13a530379
// Size: 0x10 (Inherited: 0x00)
struct F*a13a530379 {
	struct FName PackageName; // 0x00(0x08)
	int32 LODIndex; // 0x08(0x04)
	char *907a19b391 : 1; // 0x0c(0x01)
	char *57c2c71fb7 : 1; // 0x0c(0x01)
	char *c2afc2b424 : 1; // 0x0c(0x01)
	char pad_C_3 : 5; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*3211ef0a69
// Size: 0x60 (Inherited: 0x00)
struct F*3211ef0a69 {
	struct AActor* *e2c69f7b7e; // 0x00(0x08)
	struct FVector *51a8715eb5; // 0x08(0x0c)
	struct FVector *8d82fc9087; // 0x14(0x0c)
	struct FString *3986b747f2; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct FColor TextColor; // 0x38(0x04)
	char bAbsoluteLocation : 1; // 0x3c(0x01)
	char *211378e220 : 1; // 0x3c(0x01)
	char *a7b56c55dc : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector *e51d8a0c24; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFont* Font; // 0x50(0x08)
	float *c86ee4421c; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.*1029adc9f4
// Size: 0x28 (Inherited: 0x00)
struct F*1029adc9f4 {
	bool bUseMBPOnClient; // 0x00(0x01)
	bool bUseMBPOnServer; // 0x01(0x01)
	bool bUseMBPOuterBounds; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FBox MBPBounds; // 0x04(0x1c)
	float MBPOuterBoundsExpandSize; // 0x20(0x04)
	uint32 MBPNumSubdivs; // 0x24(0x04)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0x1e8 (Inherited: 0x00)
struct FHierarchicalSimplification {
	char pad_0[0x4]; // 0x00(0x04)
	float *6d2629e2ca; // 0x04(0x04)
	bool *975e81d19d; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FMeshProxySettings *434a860d06; // 0x0c(0xfc)
	struct FMeshMergingSettings *1010170f30; // 0x108(0xd4)
	float *1c6e7bf1fe; // 0x1dc(0x04)
	float *e7aaec9b96; // 0x1e0(0x04)
	int32 *fd3d33c951; // 0x1e4(0x04)
};

// ScriptStruct Engine.*9916c97180
// Size: 0x30 (Inherited: 0x00)
struct F*9916c97180 {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* *a2fa2e1d42; // 0x08(0x08)
	struct AActor* ViewTarget; // 0x10(0x08)
	struct FVector ViewLocation; // 0x18(0x0c)
	struct FVector ViewDir; // 0x24(0x0c)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x44 (Inherited: 0x00)
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x00(0x04)
	int32 *88a5d46b76; // 0x04(0x04)
	float *57bdd7868b; // 0x08(0x04)
	float *412f991d9e; // 0x0c(0x04)
	struct FColor EnvironmentColor; // 0x10(0x04)
	float *637a6c1d3c; // 0x14(0x04)
	float EmissiveBoost; // 0x18(0x04)
	float DiffuseBoost; // 0x1c(0x04)
	char *61fa3df994 : 1; // 0x20(0x01)
	char *474d204824 : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *4cf167b6e8; // 0x24(0x04)
	float *3bc966afe4; // 0x28(0x04)
	float OcclusionExponent; // 0x2c(0x04)
	float *0d226493c1; // 0x30(0x04)
	float MaxOcclusionDistance; // 0x34(0x04)
	char *bd62a914b7 : 1; // 0x38(0x01)
	char *2c8649c624 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *d85d69c55f; // 0x3c(0x04)
	char bCompressLightmaps : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.*6a44e1a314
// Size: 0x04 (Inherited: 0x00)
struct F*6a44e1a314 {
	char bWaterSurface : 1; // 0x00(0x01)
	char bWaterFX : 1; // 0x00(0x01)
	char bWeather : 1; // 0x00(0x01)
	char bEnvironment : 1; // 0x00(0x01)
	char bVegetationSmall : 1; // 0x00(0x01)
	char bVegetationMedium : 1; // 0x00(0x01)
	char bVegetationLarge : 1; // 0x00(0x01)
	char bVegetationHuge : 1; // 0x00(0x01)
	char bSmokeGrenade : 1; // 0x01(0x01)
	char bSmoke : 1; // 0x01(0x01)
	char bExplosion : 1; // 0x01(0x01)
	char bMolotov : 1; // 0x01(0x01)
	char bFire : 1; // 0x01(0x01)
	char bSparks : 1; // 0x01(0x01)
	char bDebris : 1; // 0x01(0x01)
	char bWeaponFX : 1; // 0x01(0x01)
	char bVehicleFX : 1; // 0x02(0x01)
	char bOther : 1; // 0x02(0x01)
	char pad_2_2 : 6; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
};

// ScriptStruct Engine.*ec346d410d
// Size: 0x10 (Inherited: 0x00)
struct F*ec346d410d {
	float SamplingScale; // 0x00(0x04)
	int32 *a458854d64; // 0x04(0x04)
	struct FName TextureName; // 0x08(0x08)
};

// ScriptStruct Engine.*5f515f80fd
// Size: 0x14 (Inherited: 0x00)
struct F*5f515f80fd {
	char bCastShadowAsMasked : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EmissiveBoost; // 0x04(0x04)
	float DiffuseBoost; // 0x08(0x04)
	float ExportResolutionScale; // 0x0c(0x04)
	char *6434f2723f : 1; // 0x10(0x01)
	char *bff6ecf17d : 1; // 0x10(0x01)
	char *66bbf58fc6 : 1; // 0x10(0x01)
	char *c8957e4446 : 1; // 0x10(0x01)
	char pad_10_4 : 4; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*fec1278a78
// Size: 0xa0 (Inherited: 0x00)
struct F*fec1278a78 {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct F*316d087e81> PaintedVertices; // 0x20(0x10)
	char pad_30[0x70]; // 0x30(0x70)
};

// ScriptStruct Engine.*316d087e81
// Size: 0x14 (Inherited: 0x00)
struct F*316d087e81 {
	struct FVector Position; // 0x00(0x0c)
	struct FPackedNormal Normal; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
};

// ScriptStruct Engine.*a6ac1c6a52
// Size: 0x18 (Inherited: 0x00)
struct F*a6ac1c6a52 {
	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct AActor*> Actors; // 0x08(0x10)
};

// ScriptStruct Engine.*7583eb68ff
// Size: 0x10 (Inherited: 0x00)
struct F*7583eb68ff {
	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct Engine.*0d9672f37f
// Size: 0x20 (Inherited: 0x00)
struct F*0d9672f37f {
	struct FString *9ade7cf49e; // 0x00(0x10)
	int32 *7dab340d4b; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* AreaClass; // 0x18(0x08)
};

// ScriptStruct Engine.*c51e7b128b
// Size: 0x18 (Inherited: 0x00)
struct F*c51e7b128b {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*0e24587e07
// Size: 0x18 (Inherited: 0x00)
struct F*0e24587e07 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0x68 (Inherited: 0x38)
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; // 0x38(0x0c)
	struct FVector LeftEnd; // 0x44(0x0c)
	struct FVector RightStart; // 0x50(0x0c)
	struct FVector RightEnd; // 0x5c(0x0c)
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x38 (Inherited: 0x00)
struct FNavigationLinkBase {
	float *2bdc904e7b; // 0x00(0x04)
	float *d51f52715c; // 0x04(0x04)
	enum class ENavLinkDirection Direction; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	float *989f39fdd9; // 0x10(0x04)
	float *430dac77ef; // 0x14(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x18(0x04)
	char *e1c2bd6b7c : 1; // 0x1c(0x01)
	char *733b130c99 : 1; // 0x1c(0x01)
	char *adb35f1fbe : 1; // 0x1c(0x01)
	char *f2b66aa223 : 1; // 0x1c(0x01)
	char *83b0ed975e : 1; // 0x1c(0x01)
	char *12d3913d43 : 1; // 0x1c(0x01)
	char *e055976469 : 1; // 0x1c(0x01)
	char *e39229b017 : 1; // 0x1c(0x01)
	char *3b06182400 : 1; // 0x1d(0x01)
	char *d95aae70dc : 1; // 0x1d(0x01)
	char *e74289e699 : 1; // 0x1d(0x01)
	char *f15690506a : 1; // 0x1d(0x01)
	char *ce11bf2bfa : 1; // 0x1d(0x01)
	char *899c61b8b0 : 1; // 0x1d(0x01)
	char *2bfe92c6a8 : 1; // 0x1d(0x01)
	char *b7999b244e : 1; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	char bUseSnapHeight : 1; // 0x20(0x01)
	char *4714768551 : 1; // 0x20(0x01)
	char *823900186d : 1; // 0x20(0x01)
	char *9a1a2a9128 : 1; // 0x20(0x01)
	char *75f727e83c : 1; // 0x20(0x01)
	char *d1d5725453 : 1; // 0x20(0x01)
	char *db52979710 : 1; // 0x20(0x01)
	char *fc4a2bac12 : 1; // 0x20(0x01)
	char *28476107b5 : 1; // 0x21(0x01)
	char *fbb02391a1 : 1; // 0x21(0x01)
	char pad_21_2 : 6; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct UClass* AreaClass; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Engine.NavigationLink
// Size: 0x50 (Inherited: 0x38)
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; // 0x38(0x0c)
	struct FVector Right; // 0x44(0x0c)
};

// ScriptStruct Engine.*e7e18997c1
// Size: 0x10 (Inherited: 0x00)
struct F*e7e18997c1 {
	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Engine.*f3c706b9ad
// Size: 0x10 (Inherited: 0x00)
struct F*f3c706b9ad {
	struct TArray<bool> *7e504f2823; // 0x00(0x10)
};

// ScriptStruct Engine.*e0932b265f
// Size: 0x01 (Inherited: 0x00)
struct F*e0932b265f {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x00)
struct FParticleSysParam {
	struct FName Name; // 0x00(0x08)
	enum class *3c29a9e4d6 ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scalar; // 0x0c(0x04)
	float Scalar_Low; // 0x10(0x04)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Vector_Low; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
	struct AActor* Actor; // 0x30(0x08)
	struct UMaterialInterface* Material; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct Engine.*c1c997f5f5
// Size: 0x10 (Inherited: 0x00)
struct F*c1c997f5f5 {
	struct TArray<struct F*6e1edd0b52> *33947734aa; // 0x00(0x10)
};

// ScriptStruct Engine.*6e1edd0b52
// Size: 0x30 (Inherited: 0x00)
struct F*6e1edd0b52 {
	struct UObject* *babf10c5c6; // 0x00(0x20)
	struct UObject* Object; // 0x20(0x08)
	struct FName *7ea87b15af; // 0x28(0x08)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x00)
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x00(0x08)
	struct FLinearColor TrackColor; // 0x08(0x10)
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct Engine.*6c1546cba5
// Size: 0x10 (Inherited: 0x00)
struct F*6c1546cba5 {
	struct TArray<struct FPerBoneBlendWeight> *2e091d6fce; // 0x00(0x10)
};

// ScriptStruct Engine.*e5b9c0d039
// Size: 0x30 (Inherited: 0x00)
struct F*e5b9c0d039 {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	bool bEnableShadowCasting; // 0x08(0x01)
	bool bRecomputeTangent; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName MaterialSlotName; // 0x10(0x08)
	struct F*5f6ee19796 UVChannelData; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)
struct FClothingAssetData_Legacy {
	struct FName AssetName; // 0x00(0x08)
	struct FString *7211471af4; // 0x08(0x10)
	bool *35b9ceb017; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FClothPhysicsProperties_Legacy *d7749d94b5; // 0x1c(0x50)
	char pad_6C[0xc]; // 0x6c(0x0c)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)
struct FClothPhysicsProperties_Legacy {
	float *cc9da6f66e; // 0x00(0x04)
	float *195bb7acd0; // 0x04(0x04)
	float *bc2f33c353; // 0x08(0x04)
	float *4a0c9b869d; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float TetherStiffness; // 0x18(0x04)
	float TetherLimit; // 0x1c(0x04)
	float Drag; // 0x20(0x04)
	float StiffnessFrequency; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	float MassScale; // 0x2c(0x04)
	float *4cc643c8bf; // 0x30(0x04)
	float SelfCollisionThickness; // 0x34(0x04)
	float SelfCollisionSquashScale; // 0x38(0x04)
	float SelfCollisionStiffness; // 0x3c(0x04)
	float SolverFrequency; // 0x40(0x04)
	float *8d712a14c3; // 0x44(0x04)
	float *981c356215; // 0x48(0x04)
	float *5322a176e7; // 0x4c(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0x540 (Inherited: 0x00)
struct FSkeletalMeshLODInfo {
	float ScreenSize; // 0x00(0x04)
	float *2c76369477; // 0x04(0x04)
	struct TArray<int32> LODMaterialMap; // 0x08(0x10)
	struct TArray<bool> bEnableShadowCasting; // 0x18(0x10)
	struct TArray<struct FTriangleSortSettings> TriangleSortSettings; // 0x28(0x10)
	char *9e942f2dc8 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x188)
	struct TArray<struct FBoneReference> *cd497d8d05; // 0x1c8(0x10)
	float *43e8f60723; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct F*8f0fa81020 RemeshingSettings; // 0x1e0(0xa8)
	struct FGroupedSkeletalOptimizationSettings OptimizationSettings; // 0x288(0x290)
	struct TArray<struct FName> RemovedBones; // 0x518(0x10)
	struct FString *2d63b544f9; // 0x528(0x10)
	char *a31c97ddc0 : 1; // 0x538(0x01)
	char pad_538_1 : 7; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
};

// ScriptStruct Engine.GroupedSkeletalOptimizationSettings
// Size: 0x290 (Inherited: 0x00)
struct FGroupedSkeletalOptimizationSettings {
	bool *b7443a3144; // 0x00(0x01)
	enum class ESkeletalMeshLODType *f15bbe9962; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x08(0x188)
	struct FMeshProxySettings ProxySettings; // 0x190(0xfc)
	bool *db0654c1cf; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x188 (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings {
	enum class *d38e227f9d *c16bafd799; // 0x00(0x01)
	enum class SkeletalMeshOptimizationType *2f013a77f5; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *88c13e3870; // 0x08(0x04)
	uint32 *7db1b6f340; // 0x0c(0x04)
	uint32 *adad3b31fa; // 0x10(0x04)
	float *21178c4c19; // 0x14(0x04)
	float *7e3faec9c5; // 0x18(0x04)
	int32 ScreenSize; // 0x1c(0x04)
	float WeldingThreshold; // 0x20(0x04)
	bool bRecalcNormals; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float *cb640faf1f; // 0x28(0x04)
	enum class *b612e8eefb SilhouetteImportance; // 0x2c(0x01)
	enum class *b612e8eefb TextureImportance; // 0x2d(0x01)
	enum class *b612e8eefb ShadingImportance; // 0x2e(0x01)
	enum class *b612e8eefb SkinningImportance; // 0x2f(0x01)
	float *f3e6dd7804; // 0x30(0x04)
	int32 MaxBonesPerVertex; // 0x34(0x04)
	bool *c4acb0fa9d; // 0x38(0x01)
	bool *c77f010535; // 0x39(0x01)
	bool *563712e482; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x40(0x10)
	int32 BaseLOD; // 0x50(0x04)
	int32 *a0275c8dd9; // 0x54(0x04)
	bool *c56d2deaa9; // 0x58(0x01)
	bool *5f0209daef; // 0x59(0x01)
	bool *48b0c9e562; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct F*e01f82972b MaterialLODSettings; // 0x60(0x80)
	struct FMaterialProxySettings MaterialSettings; // 0xe0(0x9c)
	bool *a7cb28b499; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct UAnimSequence* BakePose; // 0x180(0x08)
};

// ScriptStruct Engine.TriangleSortSettings
// Size: 0x10 (Inherited: 0x00)
struct FTriangleSortSettings {
	enum class *187cbd7e6e TriangleSorting; // 0x00(0x01)
	enum class *9445aa473a *c1a268fe4d; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FName *c37c615c2f; // 0x08(0x08)
};

// ScriptStruct Engine.*2f09fb1abe
// Size: 0x50 (Inherited: 0x00)
struct F*2f09fb1abe {
	struct FString AssetName; // 0x00(0x10)
	int32 LODIndex; // 0x10(0x04)
	int32 SourceSection; // 0x14(0x04)
	bool *05a06d9b1c; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UPhysicsAsset* PhysicsAsset; // 0x20(0x20)
	bool bTryAutoFix; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *7c7f40b9a4; // 0x44(0x04)
	float *b24520621d; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.*dd48e99ffa
// Size: 0x18 (Inherited: 0x00)
struct F*dd48e99ffa {
	struct FName BoneName; // 0x00(0x08)
	struct FName SourceBoneName; // 0x08(0x08)
	enum class EAxis *0c010eaa8a; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*af99d1f376
// Size: 0x08 (Inherited: 0x00)
struct F*af99d1f376 {
	int32 *41012e2551; // 0x00(0x04)
	enum class EAxis *0c010eaa8a; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*3e1366dc33
// Size: 0x10 (Inherited: 0x00)
struct F*3e1366dc33 {
	struct FName GroupName; // 0x00(0x08)
	enum class *99fad6e401 *88858292ce; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*627659f0e8
// Size: 0x40 (Inherited: 0x00)
struct F*627659f0e8 {
	bool *a470da5ab1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *77939e0d66; // 0x10(0x30)
};

// ScriptStruct Engine.*71a9ff5c36
// Size: 0x80 (Inherited: 0x00)
struct F*71a9ff5c36 {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Engine.*a508e87271
// Size: 0x48 (Inherited: 0x00)
struct F*a508e87271 {
	struct UAnimationAsset* *3586bac310; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.*38341cf260
// Size: 0x18 (Inherited: 0x00)
struct F*38341cf260 {
	struct FName *b83f108013; // 0x00(0x08)
	struct FName *896d067ee5; // 0x08(0x08)
	float *15b145506c; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x100 (Inherited: 0x00)
struct FRootMotionSourceGroup {
	char pad_0[0xe8]; // 0x00(0xe8)
	bool *45aa3668d1; // 0xe8(0x01)
	bool *5a8b9efaa4; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FVector_NetQuantize10 *f014970041; // 0xec(0x0c)
	bool *2b197126ce; // 0xf8(0x01)
	struct F*1a119e1853 *850c3dbb8e; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// ScriptStruct Engine.*1a119e1853
// Size: 0x01 (Inherited: 0x00)
struct F*1a119e1853 {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*d2f64abe5c
// Size: 0xd0 (Inherited: 0xa0)
struct F*d2f64abe5c : F*73bb692893 {
	struct FRotator Rotation; // 0x98(0x0c)
	float Distance; // 0xa4(0x04)
	float Height; // 0xa8(0x04)
	bool *4ff01d85a8; // 0xac(0x01)
	struct U*226eb62c2c* *563ada7118; // 0xb0(0x08)
	struct UCurveFloat* *722a0c8e77; // 0xb8(0x08)
	char pad_C5[0xb]; // 0xc5(0x0b)
};

// ScriptStruct Engine.*73bb692893
// Size: 0xa0 (Inherited: 0x00)
struct F*73bb692893 {
	char pad_0[0x10]; // 0x00(0x10)
	uint16 Priority; // 0x10(0x02)
	uint16 *0df79a24ed; // 0x12(0x02)
	enum class ERootMotionAccumulateMode *ef458855e6; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName *d82aaafc91; // 0x18(0x08)
	float StartTime; // 0x20(0x04)
	float CurrentTime; // 0x24(0x04)
	float *50dc1af97f; // 0x28(0x04)
	float Duration; // 0x2c(0x04)
	struct F*cb5d9812e3 Status; // 0x30(0x01)
	struct F*1a119e1853 Settings; // 0x31(0x01)
	bool *facb7a9159; // 0x32(0x01)
	char pad_33[0xd]; // 0x33(0x0d)
	struct F*627659f0e8 *add4ad8474; // 0x40(0x40)
	struct F*a9cc731717 *611e7772c5; // 0x80(0x14)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*a9cc731717
// Size: 0x14 (Inherited: 0x00)
struct F*a9cc731717 {
	enum class *8b74868674 Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *23285017cb; // 0x04(0x0c)
	float *7fdbea291d; // 0x10(0x04)
};

// ScriptStruct Engine.*cb5d9812e3
// Size: 0x01 (Inherited: 0x00)
struct F*cb5d9812e3 {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*a25537cf65
// Size: 0xd0 (Inherited: 0xa0)
struct F*a25537cf65 : F*73bb692893 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector *98b49bad22; // 0xa4(0x0c)
	struct FVector TargetLocation; // 0xb0(0x0c)
	bool *a2be20200e; // 0xbc(0x01)
	struct U*226eb62c2c* *563ada7118; // 0xc0(0x08)
	struct UCurveFloat* *722a0c8e77; // 0xc8(0x08)
};

// ScriptStruct Engine.*ae84e19efc
// Size: 0xc0 (Inherited: 0xa0)
struct F*ae84e19efc : F*73bb692893 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector TargetLocation; // 0xa4(0x0c)
	bool *a2be20200e; // 0xb0(0x01)
	struct U*226eb62c2c* *563ada7118; // 0xb8(0x08)
};

// ScriptStruct Engine.*b998b76854
// Size: 0xe0 (Inherited: 0xa0)
struct F*b998b76854 : F*73bb692893 {
	struct FVector Location; // 0x98(0x0c)
	struct AActor* *fd564c3007; // 0xa8(0x08)
	float Radius; // 0xb0(0x04)
	float Strength; // 0xb4(0x04)
	bool *14653615d0; // 0xb8(0x01)
	bool *4c98d45509; // 0xb9(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct UCurveFloat* *b78e36b437; // 0xc0(0x08)
	struct UCurveFloat* *5b38dc5497; // 0xc8(0x08)
	bool *238c940475; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FRotator *1a7f6adb6c; // 0xd4(0x0c)
};

// ScriptStruct Engine.*3b6a81bfb0
// Size: 0xb0 (Inherited: 0xa0)
struct F*3b6a81bfb0 : F*73bb692893 {
	struct FVector force; // 0x98(0x0c)
	struct UCurveFloat* *5b38dc5497; // 0xa8(0x08)
};

// ScriptStruct Engine.*fdb76a0b2f
// Size: 0x48 (Inherited: 0x00)
struct F*fdb76a0b2f {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize100 Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool *c6a365cc41; // 0x28(0x01)
	bool *a00a44d42c; // 0x29(0x01)
	bool *e0cc0dde06; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct UPrimitiveComponent* *d17b8928d9; // 0x30(0x08)
	struct FVector *5c56a514ec; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.*9758e900e3
// Size: 0x168 (Inherited: 0x00)
struct F*9758e900e3 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*a9dde184de RootMotion; // 0x08(0x160)
};

// ScriptStruct Engine.*a9dde184de
// Size: 0x160 (Inherited: 0x00)
struct F*a9dde184de {
	bool *bdff81749e; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	float Position; // 0x10(0x04)
	struct FVector_NetQuantize100 Location; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x08)
	struct FName *45003bc5ed; // 0x38(0x08)
	bool *a582afc35a; // 0x40(0x01)
	bool *a00a44d42c; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FRootMotionSourceGroup *fda7eddc44; // 0x48(0x100)
	struct FVector_NetQuantize10 Acceleration; // 0x148(0x0c)
	struct FVector_NetQuantize10 LinearVelocity; // 0x154(0x0c)
};

// ScriptStruct Engine.*77a1aee504
// Size: 0x08 (Inherited: 0x00)
struct F*77a1aee504 {
	int32 *a7c40ec97c; // 0x00(0x04)
	int32 Num; // 0x04(0x04)
};

// ScriptStruct Engine.*7f46301700
// Size: 0x10 (Inherited: 0x00)
struct F*7f46301700 {
	struct FName *56709ca8b5; // 0x00(0x08)
	int32 *c78601d565; // 0x08(0x04)
	int32 InstanceId; // 0x0c(0x04)
};

// ScriptStruct Engine.*33e72698b8
// Size: 0x40 (Inherited: 0x00)
struct F*33e72698b8 {
	struct FVector4 *e8f4e69c31; // 0x00(0x10)
	struct FVector4 *83c4611f35; // 0x10(0x10)
	struct FVector4 *0d312bf0e2; // 0x20(0x10)
	struct FVector4 *9b7f57422b; // 0x30(0x10)
};

// ScriptStruct Engine.*7548092c32
// Size: 0x04 (Inherited: 0x00)
struct F*7548092c32 {
	int32 RandomSeed; // 0x00(0x04)
};

// ScriptStruct Engine.*40454bca06
// Size: 0x50 (Inherited: 0x00)
struct F*40454bca06 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.*a6c7f4e0f5
// Size: 0xf8 (Inherited: 0x00)
struct F*a6c7f4e0f5 {
	char pad_0[0xf8]; // 0x00(0xf8)
};

// ScriptStruct Engine.*d07af06474
// Size: 0x18 (Inherited: 0x00)
struct F*d07af06474 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*1fb6f16f80
// Size: 0x02 (Inherited: 0x00)
struct F*1fb6f16f80 {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Engine.*2594df2bfb
// Size: 0x18 (Inherited: 0x00)
struct F*2594df2bfb {
	struct FName SourceBoneName; // 0x00(0x08)
	struct FName TargetBoneName; // 0x08(0x08)
	struct FName *b016f90362; // 0x10(0x08)
};

// ScriptStruct Engine.*02c9b626eb
// Size: 0x18 (Inherited: 0x00)
struct F*02c9b626eb {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> SlotNames; // 0x08(0x10)
};

// ScriptStruct Engine.*fea517f6ad
// Size: 0x18 (Inherited: 0x00)
struct F*fea517f6ad {
	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct F*5dcfd244b6> *d0ecdac027; // 0x08(0x10)
};

// ScriptStruct Engine.*5dcfd244b6
// Size: 0x10 (Inherited: 0x00)
struct F*5dcfd244b6 {
	struct FName NodeName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct Engine.*960e11038e
// Size: 0x10 (Inherited: 0x00)
struct F*960e11038e {
	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)
struct FReferencePose {
	struct FName PoseName; // 0x00(0x08)
	struct TArray<struct FTransform> ReferencePose; // 0x08(0x10)
};

// ScriptStruct Engine.*5968031f66
// Size: 0x10 (Inherited: 0x00)
struct F*5968031f66 {
	struct FName Name; // 0x00(0x08)
	int32 ParentIndex; // 0x08(0x04)
	enum class EBoneTranslationRetargetingMode *5e93d1f5cf; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*4e0ffd482b
// Size: 0x20 (Inherited: 0x00)
struct F*4e0ffd482b {
	struct TArray<int32> *55504e3357; // 0x00(0x10)
	struct TArray<int32> *6b1225e991; // 0x10(0x10)
};

// ScriptStruct Engine.*493cf0b40c
// Size: 0x470 (Inherited: 0x20)
struct F*493cf0b40c : FAnimCurveBase {
	struct FVectorCurve *cd1188fc31; // 0x20(0x170)
	struct FVectorCurve *054f4fd12f; // 0x190(0x170)
	struct FVectorCurve *c8ce31d780; // 0x300(0x170)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x170 (Inherited: 0x20)
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve *b4cff3aa9f[0x03]; // 0x20(0x150)
};

// ScriptStruct Engine.*1adba683ba
// Size: 0x10 (Inherited: 0x00)
struct F*1adba683ba {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float EndPosition; // 0x0c(0x04)
};

// ScriptStruct Engine.*abbbb920e0
// Size: 0x1e0 (Inherited: 0x00)
struct F*abbbb920e0 {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0xd8]; // 0x08(0xd8)
	bool *68aa6cc295; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *53f031b8e0; // 0xe4(0x04)
	char pad_E8[0x28]; // 0xe8(0x28)
	struct TArray<int32> *2e9de42131; // 0x110(0x10)
	struct TArray<int32> *8c10f83fcc; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct TArray<struct FAnimNotifyEvent> *b3875b8b49; // 0x140(0x10)
	float Position; // 0x150(0x04)
	float PlayRate; // 0x154(0x04)
	struct FAlphaBlend Blend; // 0x158(0x38)
	char pad_190[0x20]; // 0x190(0x20)
	int32 *3c3c2d5758; // 0x1b0(0x04)
	char pad_1B4[0x2c]; // 0x1b4(0x2c)
};

// ScriptStruct Engine.*056e48c16d
// Size: 0x04 (Inherited: 0x00)
struct F*056e48c16d {
	char bGroup0 : 1; // 0x00(0x01)
	char bGroup1 : 1; // 0x00(0x01)
	char bGroup2 : 1; // 0x00(0x01)
	char bGroup3 : 1; // 0x00(0x01)
	char bGroup4 : 1; // 0x00(0x01)
	char bGroup5 : 1; // 0x00(0x01)
	char bGroup6 : 1; // 0x00(0x01)
	char bGroup7 : 1; // 0x00(0x01)
	char bGroup8 : 1; // 0x01(0x01)
	char bGroup9 : 1; // 0x01(0x01)
	char bGroup10 : 1; // 0x01(0x01)
	char bGroup11 : 1; // 0x01(0x01)
	char bGroup12 : 1; // 0x01(0x01)
	char bGroup13 : 1; // 0x01(0x01)
	char bGroup14 : 1; // 0x01(0x01)
	char bGroup15 : 1; // 0x01(0x01)
	char bGroup16 : 1; // 0x02(0x01)
	char bGroup17 : 1; // 0x02(0x01)
	char bGroup18 : 1; // 0x02(0x01)
	char bGroup19 : 1; // 0x02(0x01)
	char bGroup20 : 1; // 0x02(0x01)
	char bGroup21 : 1; // 0x02(0x01)
	char bGroup22 : 1; // 0x02(0x01)
	char bGroup23 : 1; // 0x02(0x01)
	char bGroup24 : 1; // 0x03(0x01)
	char bGroup25 : 1; // 0x03(0x01)
	char bGroup26 : 1; // 0x03(0x01)
	char bGroup27 : 1; // 0x03(0x01)
	char bGroup28 : 1; // 0x03(0x01)
	char bGroup29 : 1; // 0x03(0x01)
	char bGroup30 : 1; // 0x03(0x01)
	char bGroup31 : 1; // 0x03(0x01)
};

// ScriptStruct Engine.*76138ff06a
// Size: 0x58 (Inherited: 0x50)
struct F*76138ff06a : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*722e4d89eb
// Size: 0x98 (Inherited: 0x00)
struct F*722e4d89eb {
	char bBlockingHit : 1; // 0x00(0x01)
	char bWalkableFloor : 1; // 0x00(0x01)
	char bLineTrace : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FloorDist; // 0x04(0x04)
	float LineDist; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FHitResult HitResult; // 0x10(0x88)
};

// ScriptStruct Engine.*d51cdf9405
// Size: 0x1c (Inherited: 0x14)
struct F*d51cdf9405 : F*e04cf45ed7 {
	float *821997d10f; // 0x14(0x04)
	enum class *86b9f525fb *5646f67d26; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.*e04cf45ed7
// Size: 0x14 (Inherited: 0x00)
struct F*e04cf45ed7 {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float Restitution; // 0x08(0x04)
	float ContactDistance; // 0x0c(0x04)
	char bSoftConstraint : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*28400cab9f
// Size: 0x20 (Inherited: 0x14)
struct F*28400cab9f : F*e04cf45ed7 {
	float *bad609ff46; // 0x14(0x04)
	float *ce90706018; // 0x18(0x04)
	enum class *86b9f525fb *0119802c07; // 0x1c(0x01)
	enum class *86b9f525fb *47bce073ac; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Engine.*d4ec405280
// Size: 0x1c (Inherited: 0x14)
struct F*d4ec405280 : F*e04cf45ed7 {
	float Limit; // 0x14(0x04)
	enum class *969e6dff50 *e38e3a4469; // 0x18(0x01)
	enum class *969e6dff50 *21f9f83d9b; // 0x19(0x01)
	enum class *969e6dff50 *cdd14d1b27; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.*98e0cd084b
// Size: 0x4c (Inherited: 0x00)
struct F*98e0cd084b {
	struct F*bca0c06434 *3e66838300; // 0x00(0x10)
	struct F*bca0c06434 *168722cf2e; // 0x10(0x10)
	struct F*bca0c06434 *e710a63711; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0x0c)
	struct FVector AngularVelocityTarget; // 0x3c(0x0c)
	enum class EAngularDriveMode AngularDriveMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.*bca0c06434
// Size: 0x10 (Inherited: 0x00)
struct F*bca0c06434 {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxForce; // 0x08(0x04)
	char *01e8aa4582 : 1; // 0x0c(0x01)
	char *711bfb9925 : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*daa9026d62
// Size: 0x4c (Inherited: 0x00)
struct F*daa9026d62 {
	struct FVector PositionTarget; // 0x00(0x0c)
	struct FVector VelocityTarget; // 0x0c(0x0c)
	struct F*bca0c06434 *65b8814027; // 0x18(0x10)
	struct F*bca0c06434 *87147053c6; // 0x28(0x10)
	struct F*bca0c06434 *0a170aa07c; // 0x38(0x10)
	char *01e8aa4582 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x1f0 (Inherited: 0x00)
struct FConstraintInstance {
	char pad_0[0x18]; // 0x00(0x18)
	struct FName *7cf4afe26c; // 0x18(0x08)
	struct FName *7ef5665cc7; // 0x20(0x08)
	struct FName *62d4974358; // 0x28(0x08)
	struct FVector *65b173e56f; // 0x30(0x0c)
	struct FVector *5c6c308f85; // 0x3c(0x0c)
	struct FVector *b6677599e3; // 0x48(0x0c)
	struct FVector *86b97e597d; // 0x54(0x0c)
	struct FVector *623f80b256; // 0x60(0x0c)
	struct FVector *39b8764073; // 0x6c(0x0c)
	struct FRotator *16a012dbfa; // 0x78(0x0c)
	char *f09453a218 : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	char pad_85[0x7]; // 0x85(0x07)
	struct F*ec0db6b5c0 *3f202d87f4; // 0x8c(0x104)
	char pad_190[0x60]; // 0x190(0x60)
};

// ScriptStruct Engine.*ec0db6b5c0
// Size: 0x104 (Inherited: 0x00)
struct F*ec0db6b5c0 {
	float ProjectionLinearTolerance; // 0x00(0x04)
	float ProjectionAngularTolerance; // 0x04(0x04)
	float *1486b89ae6; // 0x08(0x04)
	float *616a8984c4; // 0x0c(0x04)
	struct F*d4ec405280 LinearLimit; // 0x10(0x1c)
	struct F*28400cab9f *bfd1365d2b; // 0x2c(0x20)
	struct F*d51cdf9405 TwistLimit; // 0x4c(0x1c)
	struct F*daa9026d62 *718ef6f57b; // 0x68(0x4c)
	struct F*98e0cd084b *c376b382ea; // 0xb4(0x4c)
	char *80d1f14af7 : 1; // 0x100(0x01)
	char bEnableProjection : 1; // 0x100(0x01)
	char bAngularBreakable : 1; // 0x100(0x01)
	char *ef1c38ac78 : 1; // 0x100(0x01)
	char pad_100_4 : 4; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
};

// ScriptStruct Engine.*ad43bd9124
// Size: 0x28 (Inherited: 0x00)
struct F*ad43bd9124 {
	struct FName *3aeb69f612; // 0x00(0x08)
	char bIsLocalSimulation : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OrientationStrength; // 0x0c(0x04)
	float AngularVelocityStrength; // 0x10(0x04)
	float PositionStrength; // 0x14(0x04)
	float VelocityStrength; // 0x18(0x04)
	float MaxLinearForce; // 0x1c(0x04)
	float MaxAngularForce; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*2f8ed02fc4
// Size: 0x08 (Inherited: 0x00)
struct F*2f8ed02fc4 {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.*d5fd68aa49
// Size: 0x2c (Inherited: 0x00)
struct F*d5fd68aa49 {
	float DensityHeight; // 0x00(0x04)
	float DecayHeight; // 0x04(0x04)
	int32 MaxScatteringOrder; // 0x08(0x04)
	int32 *229bba8291; // 0x0c(0x04)
	int32 *f280f0d57f; // 0x10(0x04)
	int32 *fb0c0dfca6; // 0x14(0x04)
	int32 *50bfcff4fb; // 0x18(0x04)
	int32 InscatterAltitudeSampleNum; // 0x1c(0x04)
	int32 *0a0dc77448; // 0x20(0x04)
	int32 *6a4a2b2eca; // 0x24(0x04)
	int32 *6e0c836efb; // 0x28(0x04)
};

// ScriptStruct Engine.*bb04decc2e
// Size: 0xa8 (Inherited: 0x00)
struct F*bb04decc2e {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x10(0x78)
	enum class EAttenuationShape AttenuationShape; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float dBAttenuationAtMax; // 0x8c(0x04)
	struct FVector AttenuationShapeExtents; // 0x90(0x0c)
	float ConeOffset; // 0x9c(0x04)
	float FalloffDistance; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x130 (Inherited: 0xa8)
struct FSoundAttenuationSettings : F*bb04decc2e {
	char bAttenuate : 1; // 0xa8(0x01)
	char bSpatialize : 1; // 0xa8(0x01)
	char bAttenuateWithLPF : 1; // 0xa8(0x01)
	char bEnableListenerFocus : 1; // 0xa8(0x01)
	char bEnableOcclusion : 1; // 0xa8(0x01)
	char bUseComplexCollisionForOcclusion : 1; // 0xa8(0x01)
	char pad_A8_6 : 2; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class *acdd45e961 DistanceType; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float OmniRadius; // 0xb0(0x04)
	float StereoSpread; // 0xb4(0x04)
	enum class *4396c1dba5 SpatializationAlgorithm; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct U*0a501b0c59* SpatializationPluginSettings; // 0xc0(0x08)
	float RadiusMin; // 0xc8(0x04)
	float RadiusMax; // 0xcc(0x04)
	float LPFRadiusMin; // 0xd0(0x04)
	float LPFRadiusMax; // 0xd4(0x04)
	float LPFFrequencyAtMin; // 0xd8(0x04)
	float LPFFrequencyAtMax; // 0xdc(0x04)
	float FocusAzimuth; // 0xe0(0x04)
	float NonFocusAzimuth; // 0xe4(0x04)
	float FocusDistanceScale; // 0xe8(0x04)
	float NonFocusDistanceScale; // 0xec(0x04)
	float FocusPriorityScale; // 0xf0(0x04)
	float NonFocusPriorityScale; // 0xf4(0x04)
	float FocusVolumeAttenuation; // 0xf8(0x04)
	float NonFocusVolumeAttenuation; // 0xfc(0x04)
	enum class ECollisionChannel OcclusionTraceChannel; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float OcclusionLowPassFilterFrequency; // 0x104(0x04)
	float OcclusionVolumeAttenuation; // 0x108(0x04)
	float OcclusionInterpolationTime; // 0x10c(0x04)
	struct U*d1cdb13024* OcclusionPluginSettings; // 0x110(0x08)
	struct U*d1399bd806* ReverbPluginSettings; // 0x118(0x08)
	float ReverbWetLevelMin; // 0x120(0x04)
	float ReverbWetLevelMax; // 0x124(0x04)
	float ReverbDistanceMin; // 0x128(0x04)
	float ReverbDistanceMax; // 0x12c(0x04)
};

// ScriptStruct Engine.*962c094bd5
// Size: 0x20 (Inherited: 0x00)
struct F*962c094bd5 {
	struct FName ParamName; // 0x00(0x08)
	float FloatParam; // 0x08(0x04)
	bool BoolParam; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32 IntParam; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWaveParam; // 0x18(0x08)
};

// ScriptStruct Engine.*265c70b8b9
// Size: 0x08 (Inherited: 0x00)
struct F*265c70b8b9 {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xa8 (Inherited: 0xa8)
struct FForceFeedbackAttenuationSettings : F*bb04decc2e {
};

// ScriptStruct Engine.*a0bf624a05
// Size: 0x80 (Inherited: 0x00)
struct F*a0bf624a05 {
	struct FMatrix Transform; // 0x00(0x40)
	struct FSplineParams SplineParams; // 0x40(0x38)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.SplineParams
// Size: 0x38 (Inherited: 0x00)
struct FSplineParams {
	struct FVector *02a8e87971; // 0x00(0x0c)
	struct FVector *2e8272bb2e; // 0x0c(0x0c)
	float *a4683f2aca; // 0x18(0x04)
	struct FVector *f1b3c08aee; // 0x1c(0x0c)
	struct FVector *2e38dc6170; // 0x28(0x0c)
	float *67d13022de; // 0x34(0x04)
};

// ScriptStruct Engine.*c5bebe82ba
// Size: 0x28 (Inherited: 0x00)
struct F*c5bebe82ba {
	struct FStringAssetReference Template; // 0x00(0x10)
	float Probability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*7228c1a296> *8d96dfcdf7; // 0x18(0x10)
};

// ScriptStruct Engine.*7228c1a296
// Size: 0x0c (Inherited: 0x00)
struct F*7228c1a296 {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Step; // 0x08(0x04)
};

// ScriptStruct Engine.*2a1f39e224
// Size: 0x08 (Inherited: 0x00)
struct F*2a1f39e224 {
	float CellSize; // 0x00(0x04)
	float MaxRadius; // 0x04(0x04)
};

// ScriptStruct Engine.*afa2d7bfe2
// Size: 0x18 (Inherited: 0x00)
struct F*afa2d7bfe2 {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct TArray<uint16> InstanceIndices; // 0x08(0x10)
};

// ScriptStruct Engine.*bb78d6493c
// Size: 0x24 (Inherited: 0x00)
struct F*bb78d6493c {
	struct FVector Center; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FVector Extent; // 0x18(0x0c)
};

// ScriptStruct Engine.*15dedb1597
// Size: 0x28 (Inherited: 0x00)
struct F*15dedb1597 {
	struct FVector Position; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float PointSize; // 0x1c(0x04)
	float *0681b4d4f1; // 0x20(0x04)
	bool *87dcfc399f; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.*8cc5e93275
// Size: 0x34 (Inherited: 0x00)
struct F*8cc5e93275 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float *0681b4d4f1; // 0x2c(0x04)
	bool *87dcfc399f; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Engine.*ddb3f05e8a
// Size: 0x28 (Inherited: 0x00)
struct F*ddb3f05e8a {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
};

// ScriptStruct Engine.*6785417a7c
// Size: 0x20 (Inherited: 0x00)
struct F*6785417a7c {
	struct TArray<bool> *3cbbd5708a; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*2d76a0ca1c
// Size: 0x28 (Inherited: 0x00)
struct F*2d76a0ca1c {
	int32 Bones[0x08]; // 0x00(0x20)
	bool Weights[0x08]; // 0x20(0x08)
};

// ScriptStruct Engine.*6592b79d68
// Size: 0x18 (Inherited: 0x00)
struct F*6592b79d68 {
	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	char bSavedLooping : 1; // 0x08(0x01)
	char bSavedPlaying : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SavedPosition; // 0x0c(0x04)
	float SavedPlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*265c2de20e
// Size: 0x58 (Inherited: 0x50)
struct F*265c2de20e : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*ea44060d6d
// Size: 0x58 (Inherited: 0x50)
struct F*ea44060d6d : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*bc9959e0ff
// Size: 0x58 (Inherited: 0x00)
struct F*bc9959e0ff {
	struct FVector StartPos; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector2D StartScale; // 0x18(0x08)
	float StartRoll; // 0x20(0x04)
	struct FVector2D StartOffset; // 0x24(0x08)
	struct FVector EndPos; // 0x2c(0x0c)
	struct FVector EndTangent; // 0x38(0x0c)
	struct FVector2D EndScale; // 0x44(0x08)
	float EndRoll; // 0x4c(0x04)
	struct FVector2D EndOffset; // 0x50(0x08)
};

// ScriptStruct Engine.*1d08b113c9
// Size: 0x64 (Inherited: 0x00)
struct F*1d08b113c9 {
	struct F*bc9959e0ff *bc9959e0ff; // 0x00(0x58)
	struct FVector SplineUpDir; // 0x58(0x0c)
};

// ScriptStruct Engine.*91c2e21207
// Size: 0x08 (Inherited: 0x00)
struct F*91c2e21207 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*4c863aba6e
// Size: 0x50 (Inherited: 0x00)
struct F*4c863aba6e {
	struct FMatrix Transform; // 0x00(0x40)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*6ef1bbe7c5
// Size: 0x28 (Inherited: 0x00)
struct F*6ef1bbe7c5 {
	struct FVector *7f6067f11c; // 0x00(0x0c)
	int32 *09cef1a8d2; // 0x0c(0x04)
	struct FVector *60c3d3f3c7; // 0x10(0x0c)
	int32 *3be5cbdbda; // 0x1c(0x04)
	int32 *8bcd8363cc; // 0x20(0x04)
	int32 *7b3b83929b; // 0x24(0x04)
};

// ScriptStruct Engine.PerPlatformFloat
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformFloat {
	float Default; // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformInt {
	int32 Default; // 0x00(0x04)
};

// ScriptStruct Engine.*643ac71384
// Size: 0x18 (Inherited: 0x00)
struct F*643ac71384 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*108081b98a
// Size: 0x90 (Inherited: 0x00)
struct F*108081b98a {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x00)
struct FSplinePoint {
	float InputKey; // 0x00(0x04)
	struct FVector Position; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
	enum class ESplinePointType Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.*fda7674ce5
// Size: 0x20 (Inherited: 0x00)
struct F*fda7674ce5 {
	struct UObject* Obj; // 0x00(0x08)
	struct UClass* *980102aaa9; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*b7c981d2f2
// Size: 0x18 (Inherited: 0x00)
struct F*b7c981d2f2 {
	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.Timeline
// Size: 0xe0 (Inherited: 0x00)
struct FTimeline {
	enum class *1d7cbf4b50 *ef5644458f; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Length; // 0x04(0x04)
	char bLooping : 1; // 0x08(0x01)
	char *fbf73c90fe : 1; // 0x08(0x01)
	char *68aa6cc295 : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float PlayRate; // 0x0c(0x04)
	float Position; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*ed8c7a62d8> Events; // 0x18(0x10)
	struct TArray<struct F*0947848777> *28e680750a; // 0x28(0x10)
	struct TArray<struct F*9ae32d0780> *5b1c53536f; // 0x38(0x10)
	struct TArray<struct F*d5c76cc397> *addf0f324c; // 0x48(0x10)
	DelegateProperty *af775373dc; // 0x58(0x10)
	DelegateProperty *92621caf55; // 0x68(0x10)
	char pad_78[0x48]; // 0x78(0x48)
	struct UObject* *c5fe0407ee; // 0xc0(0x08)
	struct FName *91f1722c95; // 0xc8(0x08)
	struct UProperty* *f136ca03c1; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct Engine.*d5c76cc397
// Size: 0x70 (Inherited: 0x00)
struct F*d5c76cc397 {
	struct U*e9d5a49b26* *98fc011338; // 0x00(0x08)
	DelegateProperty *7d08e00680; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *be9e2b9ffc; // 0x20(0x08)
	struct UStructProperty* *c8b3ddc87d; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*9ae32d0780
// Size: 0x70 (Inherited: 0x00)
struct F*9ae32d0780 {
	struct UCurveFloat* *aa79e9f954; // 0x00(0x08)
	DelegateProperty *7d08e00680; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *d91d01717d; // 0x20(0x08)
	struct UFloatProperty* *16b8395dda; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*0947848777
// Size: 0x70 (Inherited: 0x00)
struct F*0947848777 {
	struct U*226eb62c2c* VectorCurve; // 0x00(0x08)
	DelegateProperty *7d08e00680; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *2266cf2cd3; // 0x20(0x08)
	struct UStructProperty* *d3473c8177; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*ed8c7a62d8
// Size: 0x18 (Inherited: 0x00)
struct F*ed8c7a62d8 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	DelegateProperty *f143ec9fbd; // 0x08(0x10)
};

// ScriptStruct Engine.*b09ba878de
// Size: 0x38 (Inherited: 0x00)
struct F*b09ba878de {
	struct TArray<bool> *e6c1414ba6; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float *1548d3f79c[0x03]; // 0x20(0x0c)
	float Ranges[0x03]; // 0x2c(0x0c)
};

// ScriptStruct Engine.*63f116c060
// Size: 0x18 (Inherited: 0x00)
struct F*63f116c060 {
	struct FName CurveName; // 0x00(0x08)
	struct TArray<float> *7a6539d1d2; // 0x08(0x10)
};

// ScriptStruct Engine.*3a112d7300
// Size: 0x20 (Inherited: 0x00)
struct F*3a112d7300 {
	struct TArray<struct FVector> ScaleKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*f1fecac759
// Size: 0x20 (Inherited: 0x00)
struct F*f1fecac759 {
	struct TArray<struct FQuat> *1948032dc1; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*97ffe3e47d
// Size: 0x20 (Inherited: 0x00)
struct F*97ffe3e47d {
	struct TArray<struct FVector> *7d421f7339; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*cc46050e3a
// Size: 0x04 (Inherited: 0x00)
struct F*cc46050e3a {
	int32 *7553d2a05d; // 0x00(0x04)
};

// ScriptStruct Engine.*9d4209c28a
// Size: 0x20 (Inherited: 0x00)
struct F*9d4209c28a {
	struct TArray<struct F*1540a07cfa> *b66e672f7e; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.*1540a07cfa
// Size: 0x30 (Inherited: 0x00)
struct F*1540a07cfa {
	struct TArray<struct FVector> *7d421f7339; // 0x00(0x10)
	struct TArray<struct FQuat> *1948032dc1; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// ScriptStruct Engine.*38da5586b4
// Size: 0x20 (Inherited: 0x00)
struct F*38da5586b4 {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *e808bc91a0; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*2a2092a45f
// Size: 0x1c (Inherited: 0x00)
struct F*2a2092a45f {
	struct F*b756731601 *6e743a2011; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)
};

// ScriptStruct Engine.*b756731601
// Size: 0x18 (Inherited: 0x00)
struct F*b756731601 {
	int32 Indices[0x03]; // 0x00(0x0c)
	float Weights[0x03]; // 0x0c(0x0c)
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector *61999403bf; // 0x08(0x0c)
	float *3fb217b34a; // 0x14(0x04)
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)
struct FBlendParameter {
	struct FString DisplayName; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
	int32 GridNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x08 (Inherited: 0x00)
struct FInterpolationParameter {
	float *aff7f70ed0; // 0x00(0x04)
	enum class *0a26e1cb3e InterpolationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*a0028bf90e
// Size: 0x90 (Inherited: 0x00)
struct F*a0028bf90e {
	struct TArray<struct FSmartName> *dd199c8115; // 0x00(0x10)
	struct TArray<struct F*9845045f3a> Poses; // 0x10(0x10)
	struct TArray<struct FName> Tracks; // 0x20(0x10)
	struct TMap<struct FName, int32> *8dc818fbbe; // 0x30(0x50)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// ScriptStruct Engine.*9845045f3a
// Size: 0x30 (Inherited: 0x00)
struct F*9845045f3a {
	struct TArray<struct FTransform> *2f74b1064a; // 0x00(0x10)
	struct TArray<bool> *8dc7804f93; // 0x10(0x10)
	struct TArray<float> *2866f279ad; // 0x20(0x10)
};

// ScriptStruct Engine.*76521713df
// Size: 0x30 (Inherited: 0x00)
struct F*76521713df {
	struct FName *bfd28be316; // 0x00(0x08)
	int32 *50c26338cf; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*c088c9db93> States; // 0x10(0x10)
	struct TArray<struct F*50a6403444> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.*50a6403444
// Size: 0x40 (Inherited: 0x08)
struct F*50a6403444 : F*51089ce467 {
	int32 *320575f772; // 0x08(0x04)
	int32 NextState; // 0x0c(0x04)
	float CrossfadeDuration; // 0x10(0x04)
	int32 *e73bca62e2; // 0x14(0x04)
	int32 *ef13843d15; // 0x18(0x04)
	int32 *4a4192dc93; // 0x1c(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	struct UBlendProfile* BlendProfile; // 0x30(0x08)
	enum class *de69d6ec78 LogicType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.*51089ce467
// Size: 0x08 (Inherited: 0x00)
struct F*51089ce467 {
	struct FName StateName; // 0x00(0x08)
};

// ScriptStruct Engine.*c088c9db93
// Size: 0x48 (Inherited: 0x00)
struct F*c088c9db93 {
	struct FName StateName; // 0x00(0x08)
	struct TArray<struct F*4bea8226bb> Transitions; // 0x08(0x10)
	int32 *b2ef796150; // 0x18(0x04)
	int32 *e73bca62e2; // 0x1c(0x04)
	int32 *ef13843d15; // 0x20(0x04)
	int32 *73019cd4a7; // 0x24(0x04)
	bool *401f8bc74d; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 *f8794fae80; // 0x2c(0x04)
	struct TArray<int32> *58bb630f77; // 0x30(0x10)
	bool *0d9e4452b1; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Engine.*4bea8226bb
// Size: 0x20 (Inherited: 0x00)
struct F*4bea8226bb {
	int32 *094482df10; // 0x00(0x04)
	int32 *aeaed84835; // 0x04(0x04)
	int32 TransitionIndex; // 0x08(0x04)
	bool *ee2ceb691f; // 0x0c(0x01)
	bool *5d93d984c8; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<int32> *cc37efda2a; // 0x10(0x10)
};

// ScriptStruct Engine.*a6959be863
// Size: 0x28 (Inherited: 0x08)
struct F*a6959be863 : F*51089ce467 {
	struct TArray<struct F*6c86583520> Transitions; // 0x08(0x10)
	int32 *b2ef796150; // 0x18(0x04)
	int32 *e73bca62e2; // 0x1c(0x04)
	int32 *ef13843d15; // 0x20(0x04)
	int32 *73019cd4a7; // 0x24(0x04)
};

// ScriptStruct Engine.*6c86583520
// Size: 0x10 (Inherited: 0x00)
struct F*6c86583520 {
	struct FName *cd5176947c; // 0x00(0x08)
	bool *e4d58241c8; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 TransitionIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*f501842fad
// Size: 0x40 (Inherited: 0x00)
struct F*f501842fad {
	enum class EAdditiveAnimationType *dfe63e4cfe; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Engine.*6d191f29a2
// Size: 0x28 (Inherited: 0x10)
struct F*6d191f29a2 : F*7d4530fd16 {
	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<bool> *b9a5f0dc4e; // 0x18(0x10)
};

// ScriptStruct Engine.*7d4530fd16
// Size: 0x10 (Inherited: 0x00)
struct F*7d4530fd16 {
	struct TArray<struct FTransform> Bones; // 0x00(0x10)
};

// ScriptStruct Engine.*6bd305e3cf
// Size: 0x10 (Inherited: 0x00)
struct F*6bd305e3cf {
	struct TArray<int32> *9c8a1959a8; // 0x00(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*79e336aa6c
// Size: 0x80 (Inherited: 0x00)
struct F*79e336aa6c {
	struct FName PrimaryAssetType; // 0x00(0x08)
	struct UClass* AssetBaseClass; // 0x08(0x20)
	struct UClass* *2f5cbe0eae; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	bool bIsEditorOnly; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FDirectoryPath> Directories; // 0x38(0x10)
	struct TArray<struct FStringAssetReference> *119f985015; // 0x48(0x10)
	struct F*3e99e8a95d Rules; // 0x58(0x10)
	struct TArray<struct FString> *b51b0ef936; // 0x68(0x10)
	bool *1b8a809f00; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 *e9371b339e; // 0x7c(0x04)
};

// ScriptStruct Engine.*3e99e8a95d
// Size: 0x10 (Inherited: 0x00)
struct F*3e99e8a95d {
	int32 Priority; // 0x00(0x04)
	bool *fb615df890; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 ChunkId; // 0x08(0x04)
	enum class EPrimaryAssetCookRule CookRule; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*a339858462
// Size: 0x10 (Inherited: 0x00)
struct F*a339858462 {
	struct UAnimationAsset* *3586bac310; // 0x00(0x08)
	struct UAnimationAsset* *83a08077e8; // 0x08(0x08)
};

// ScriptStruct Engine.*b4bbbd0321
// Size: 0x20 (Inherited: 0x00)
struct F*b4bbbd0321 {
	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.*2f0ad4c8ba
// Size: 0x18 (Inherited: 0x00)
struct F*2f0ad4c8ba {
	struct FStringAssetReference PerformanceTestmap; // 0x00(0x10)
	int32 TestTimer; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*5932c779f4
// Size: 0x1f0 (Inherited: 0x00)
struct F*5932c779f4 {
	struct FFilePath *c16996faea; // 0x00(0x10)
	struct F*0ac453a3ae *2d2058bc24; // 0x10(0x150)
	struct F*fe017bedb3 *fde69da4a7; // 0x160(0x60)
	struct F*858a092a1d *0003c17e12; // 0x1c0(0x20)
	struct FFilePath *df41cf83c9; // 0x1e0(0x10)
};

// ScriptStruct Engine.*858a092a1d
// Size: 0x20 (Inherited: 0x00)
struct F*858a092a1d {
	struct FDirectoryPath *cb6479446a; // 0x00(0x10)
	struct FString *c7c37a3aa9; // 0x10(0x10)
};

// ScriptStruct Engine.*fe017bedb3
// Size: 0x60 (Inherited: 0x00)
struct F*fe017bedb3 {
	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.*0ac453a3ae
// Size: 0x150 (Inherited: 0x00)
struct F*0ac453a3ae {
	struct F*1938b05f47 Diffuse; // 0x00(0x20)
	struct F*1938b05f47 Normal; // 0x20(0x20)
	struct F*1938b05f47 StaticMesh; // 0x40(0x20)
	struct F*1938b05f47 ReimportStaticMesh; // 0x60(0x20)
	struct F*1938b05f47 BlendShapeMesh; // 0x80(0x20)
	struct F*1938b05f47 MorphMesh; // 0xa0(0x20)
	struct F*1938b05f47 SkeletalMesh; // 0xc0(0x20)
	struct F*1938b05f47 Animation; // 0xe0(0x20)
	struct F*1938b05f47 Sound; // 0x100(0x20)
	struct F*1938b05f47 SurroundSound; // 0x120(0x20)
	struct TArray<struct F*1938b05f47> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.*1938b05f47
// Size: 0x20 (Inherited: 0x00)
struct F*1938b05f47 {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct F*4e810719b2> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.*4e810719b2
// Size: 0x20 (Inherited: 0x00)
struct F*4e810719b2 {
	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.*fb61250bda
// Size: 0x30 (Inherited: 0x00)
struct F*fb61250bda {
	struct FFilePath *a66450dfee; // 0x00(0x10)
	struct FFilePath *bd090444dd; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// ScriptStruct Engine.*ae6ce9e170
// Size: 0x10 (Inherited: 0x00)
struct F*ae6ce9e170 {
	struct FFilePath DefaultParticleAsset; // 0x00(0x10)
};

// ScriptStruct Engine.*19f7ff005d
// Size: 0x30 (Inherited: 0x00)
struct F*19f7ff005d {
	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.*d044e6efbf
// Size: 0x38 (Inherited: 0x00)
struct F*d044e6efbf {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct F*4e810719b2> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.*41485582e8
// Size: 0x60 (Inherited: 0x00)
struct F*41485582e8 {
	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.*1772e8cb65
// Size: 0x3c (Inherited: 0x00)
struct F*1772e8cb65 {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.*41cf1857cd
// Size: 0x20 (Inherited: 0x00)
struct F*41cf1857cd {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *0000009f24; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*f762a73a0f
// Size: 0x18 (Inherited: 0x00)
struct F*f762a73a0f {
	struct UObject* *a502ee8732; // 0x00(0x08)
	struct FVector2D *23ba9b5463; // 0x08(0x08)
	float *2bc9e2e2eb; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*29b39b803c
// Size: 0x18 (Inherited: 0x00)
struct F*29b39b803c {
	struct UClass* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)
};

// ScriptStruct Engine.*20f2fdb3a8
// Size: 0xf8 (Inherited: 0x00)
struct F*20f2fdb3a8 {
	struct FName VarName; // 0x00(0x08)
	struct FGuid *b76c9d1698; // 0x08(0x10)
	struct F*dcaec3c3e2 VarType; // 0x18(0x80)
	struct FString FriendlyName; // 0x98(0x10)
	struct FText Category; // 0xa8(0x18)
	uint64 PropertyFlags; // 0xc0(0x08)
	struct FName *e82e5ab76c; // 0xc8(0x08)
	enum class ELifetimeCondition *dd67a9d2f1; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct F*63fd250c8e> *f6a1c77db0; // 0xd8(0x10)
	struct FString DefaultValue; // 0xe8(0x10)
};

// ScriptStruct Engine.*63fd250c8e
// Size: 0x18 (Inherited: 0x00)
struct F*63fd250c8e {
	struct FName *91cfe55c7a; // 0x00(0x08)
	struct FString *8d3867fbb7; // 0x08(0x10)
};

// ScriptStruct Engine.*96889f8916
// Size: 0x01 (Inherited: 0x00)
struct F*96889f8916 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*df9ebfb186
// Size: 0x80 (Inherited: 0x00)
struct F*df9ebfb186 {
	struct FName PlatformName; // 0x00(0x08)
	bool *1cc651ee60; // 0x08(0x01)
	bool *dda9352125; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FName> *48b98f41b0; // 0x10(0x10)
	SetProperty ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// ScriptStruct Engine.*4b184f53b1
// Size: 0x18 (Inherited: 0x00)
struct F*4b184f53b1 {
	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid *f975f91e63; // 0x08(0x10)
};

// ScriptStruct Engine.*450ffba795
// Size: 0x18 (Inherited: 0x00)
struct F*450ffba795 {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName ColumnName; // 0x08(0x08)
	struct FName RowContents; // 0x10(0x08)
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FDataTableRowHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x00)
struct FCustomProfile {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*35cd224f29> CustomResponses; // 0x08(0x10)
};

// ScriptStruct Engine.*70258182d6
// Size: 0x18 (Inherited: 0x00)
struct F*70258182d6 {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
	enum class ECollisionResponse DefaultResponse; // 0x10(0x01)
	bool bTraceType; // 0x11(0x01)
	bool bStaticObject; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Engine.*ca842f2a81
// Size: 0x60 (Inherited: 0x00)
struct F*ca842f2a81 {
	struct FName Name; // 0x00(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName ObjectTypeName; // 0x10(0x08)
	struct TArray<struct F*35cd224f29> CustomResponses; // 0x18(0x10)
	struct FString HelpMessage; // 0x28(0x10)
	bool bCanModify; // 0x38(0x01)
	char pad_39[0x27]; // 0x39(0x27)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; // 0x00(0x08)
	struct FDialogueContext Context; // 0x08(0x18)
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)
struct FDialogueContext {
	struct UDialogueVoice* Speaker; // 0x00(0x08)
	struct TArray<struct UDialogueVoice*> Targets; // 0x08(0x10)
};

// ScriptStruct Engine.*09065f9d9d
// Size: 0xb8 (Inherited: 0x00)
struct F*09065f9d9d {
	struct TArray<struct F*69fdf42708> PathData; // 0x00(0x10)
	struct F*69fdf42708 LastTraceDestination; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FHitResult HitResult; // 0x30(0x88)
};

// ScriptStruct Engine.*69fdf42708
// Size: 0x1c (Inherited: 0x00)
struct F*69fdf42708 {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Time; // 0x18(0x04)
};

// ScriptStruct Engine.*9a6ae5668f
// Size: 0x130 (Inherited: 0x00)
struct F*9a6ae5668f {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector LaunchVelocity; // 0x0c(0x0c)
	bool bTraceWithCollision; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ProjectileRadius; // 0x1c(0x04)
	float MaxSimTime; // 0x20(0x04)
	bool bTraceWithChannel; // 0x24(0x01)
	bool bTraceWithProfile; // 0x25(0x01)
	char pad_26[0xaa]; // 0x26(0xaa)
	enum class ECollisionChannel TraceChannel; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FName TraceProfile; // 0xd8(0x08)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xe0(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0xf0(0x10)
	float SimFrequency; // 0x100(0x04)
	float OverrideGravityZ; // 0x104(0x04)
	float DragForce; // 0x108(0x04)
	float MaxSpeed; // 0x10c(0x04)
	struct UCurveFloat* MaxSpeedOverTimeCurve; // 0x110(0x08)
	enum class EDrawDebugTrace DrawDebugType; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float DrawDebugTime; // 0x11c(0x04)
	bool bTraceComplex; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct Engine.*492dccabd5
// Size: 0x18 (Inherited: 0x00)
struct F*492dccabd5 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*cc3ce9572d
// Size: 0x08 (Inherited: 0x00)
struct F*cc3ce9572d {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*8a2797dbdf
// Size: 0x10 (Inherited: 0x00)
struct F*8a2797dbdf {
	struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*1489c052de
// Size: 0x50 (Inherited: 0x00)
struct F*1489c052de {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*0eeadfe5f0> *8fdf1f62ea; // 0x08(0x10)
	char pad_18[0x38]; // 0x18(0x38)
};

// ScriptStruct Engine.*0eeadfe5f0
// Size: 0x18 (Inherited: 0x00)
struct F*0eeadfe5f0 {
	struct FName PropertyName; // 0x00(0x08)
	int32 ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* *eb1e3db911; // 0x10(0x08)
};

// ScriptStruct Engine.*a3aa512dca
// Size: 0x10 (Inherited: 0x00)
struct F*a3aa512dca {
	struct UFunction* *66161a9d27; // 0x00(0x08)
	int32 *2025b1cd24; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*645922f75f
// Size: 0x01 (Inherited: 0x00)
struct F*645922f75f {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*a3d8ff36c0
// Size: 0x08 (Inherited: 0x00)
struct F*a3d8ff36c0 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*92b19b8210
// Size: 0x1e0 (Inherited: 0x00)
struct F*92b19b8210 {
	char pad_0[0x1e0]; // 0x00(0x1e0)
};

// ScriptStruct Engine.*a3d626fc66
// Size: 0x14 (Inherited: 0x00)
struct F*a3d626fc66 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*fd96673fc5
// Size: 0x01 (Inherited: 0x00)
struct F*fd96673fc5 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*74a8a7e525
// Size: 0xb0 (Inherited: 0x00)
struct F*74a8a7e525 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*f6a403fe72
// Size: 0x20 (Inherited: 0x00)
struct F*f6a403fe72 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.*6757a2a6d8
// Size: 0x90 (Inherited: 0x20)
struct F*6757a2a6d8 : F*f6a403fe72 {
	struct TArray<struct FVector> *86817cd4a3; // 0x20(0x10)
	struct FBox *c5d2cdc61c; // 0x30(0x1c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FTransform Transform; // 0x50(0x30)
	char pad_80[0x10]; // 0x80(0x10)
};

// ScriptStruct Engine.*267a32d86b
// Size: 0xa0 (Inherited: 0x20)
struct F*267a32d86b : F*f6a403fe72 {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float X; // 0x88(0x04)
	float Y; // 0x8c(0x04)
	float Z; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*75f1d18702
// Size: 0x70 (Inherited: 0x20)
struct F*75f1d18702 : F*f6a403fe72 {
	struct FMatrix TM; // 0x20(0x40)
	struct FVector Center; // 0x60(0x0c)
	float Radius; // 0x6c(0x04)
};

// ScriptStruct Engine.*43cce460bc
// Size: 0x90 (Inherited: 0x20)
struct F*43cce460bc : F*f6a403fe72 {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float Radius; // 0x88(0x04)
	float Length; // 0x8c(0x04)
};

// ScriptStruct Engine.*dfa9818601
// Size: 0x48 (Inherited: 0x00)
struct F*dfa9818601 {
	struct TArray<struct F*75f1d18702> *9f612728e8; // 0x00(0x10)
	struct TArray<struct F*267a32d86b> *1347b2aa61; // 0x10(0x10)
	struct TArray<struct F*43cce460bc> *5003d315e7; // 0x20(0x10)
	struct TArray<struct F*6757a2a6d8> *51ddde726b; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.*6f65868d79
// Size: 0x30 (Inherited: 0x00)
struct F*6f65868d79 {
	struct TArray<struct F*3c7490439c> *4b0bbd0458; // 0x00(0x10)
	struct TArray<struct F*a94a0d184c> *df9754ece5; // 0x10(0x10)
	struct TArray<struct F*89020736f1> *c1fd12d1f2; // 0x20(0x10)
};

// ScriptStruct Engine.*89020736f1
// Size: 0x10 (Inherited: 0x00)
struct F*89020736f1 {
	struct TArray<struct FVector2D> *86817cd4a3; // 0x00(0x10)
};

// ScriptStruct Engine.*a94a0d184c
// Size: 0x14 (Inherited: 0x00)
struct F*a94a0d184c {
	struct FVector2D Center; // 0x00(0x08)
	float Width; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float Angle; // 0x10(0x04)
};

// ScriptStruct Engine.*3c7490439c
// Size: 0x0c (Inherited: 0x00)
struct F*3c7490439c {
	struct FVector2D Center; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct Engine.*f2c537b8d4
// Size: 0x30 (Inherited: 0x00)
struct F*f2c537b8d4 {
	struct FName ProfileName; // 0x00(0x08)
	struct F*ad43bd9124 *ad43bd9124; // 0x08(0x28)
};

// ScriptStruct Engine.*d250a414b5
// Size: 0x28 (Inherited: 0x00)
struct F*d250a414b5 {
	struct TArray<int32> VertexIndices; // 0x00(0x10)
	int32 Direction; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName ItemName; // 0x18(0x08)
	int32 PolyFlags; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*a986680f93
// Size: 0x18 (Inherited: 0x00)
struct F*a986680f93 {
	struct FString Value; // 0x00(0x10)
	struct FVector2D *a2dc5287af; // 0x10(0x08)
};

// ScriptStruct Engine.*7e1b610c0d
// Size: 0x28 (Inherited: 0x00)
struct F*7e1b610c0d {
	float *04d88038e5; // 0x00(0x04)
	float *751a1e7203; // 0x04(0x04)
	float *f002f34a03; // 0x08(0x04)
	float *5935f6adba; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x08)
	struct UFont* *99ea286966; // 0x18(0x08)
	struct FVector2D *0bf7062f9e; // 0x20(0x08)
};

// ScriptStruct Engine.*f8c56a6e1d
// Size: 0x18 (Inherited: 0x00)
struct F*f8c56a6e1d {
	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)
};

// ScriptStruct Engine.*bc7fe12051
// Size: 0x18 (Inherited: 0x00)
struct F*bc7fe12051 {
	struct FGuid *a377647193; // 0x00(0x10)
	struct FIntPoint ComponentId; // 0x10(0x08)
};

// ScriptStruct Engine.*5e6079eb99
// Size: 0x80 (Inherited: 0x00)
struct F*5e6079eb99 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AGameStateBase* GameState; // 0x08(0x08)
	struct UNetDriver* NetDriver; // 0x10(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x08)
	struct ULevel* PersistentLevel; // 0x20(0x08)
	SetProperty Levels; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.*e9112a36e8
// Size: 0x58 (Inherited: 0x50)
struct F*e9112a36e8 : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*4a73b1d6cd
// Size: 0x58 (Inherited: 0x50)
struct F*4a73b1d6cd : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*71e2c896f1
// Size: 0x20 (Inherited: 0x00)
struct F*71e2c896f1 {
	struct FVector *a16745b759; // 0x00(0x0c)
	struct FRotator *9d1fdb7855; // 0x0c(0x0c)
	float *8125daef3d; // 0x18(0x04)
	bool *9664a3589a; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*2dbfe53fec
// Size: 0x20 (Inherited: 0x00)
struct F*2dbfe53fec {
	struct FString *5a0dd69378; // 0x00(0x10)
	struct FString *9c45d2d06b; // 0x10(0x10)
};

// ScriptStruct Engine.*a26d903e83
// Size: 0x10 (Inherited: 0x00)
struct F*a26d903e83 {
	struct FName *c4ee1b2460; // 0x00(0x08)
	struct FName *dd556f7104; // 0x08(0x08)
};

// ScriptStruct Engine.*be03b16f81
// Size: 0x40 (Inherited: 0x00)
struct F*be03b16f81 {
	struct FName ObjectName; // 0x00(0x08)
	struct FName OldClassName; // 0x08(0x08)
	struct FName NewClassName; // 0x10(0x08)
	struct FName OldSubobjName; // 0x18(0x08)
	struct FName NewSubobjName; // 0x20(0x08)
	struct FName *52222b4c7b; // 0x28(0x08)
	struct FName *25483b6d62; // 0x30(0x08)
	bool InstanceOnly; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.*5d92169511
// Size: 0x10 (Inherited: 0x00)
struct F*5d92169511 {
	struct FName OldGameName; // 0x00(0x08)
	struct FName NewGameName; // 0x08(0x08)
};

// ScriptStruct Engine.*81e686227b
// Size: 0x30 (Inherited: 0x00)
struct F*81e686227b {
	uint64 Key; // 0x00(0x08)
	struct FString *af0924e406; // 0x08(0x10)
	struct FColor DisplayColor; // 0x18(0x04)
	float *0160473313; // 0x1c(0x04)
	float *a44e8516b4; // 0x20(0x04)
	struct FVector2D *6e300f30da; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*7bed299cf3
// Size: 0x28 (Inherited: 0x00)
struct F*7bed299cf3 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FString Comment; // 0x18(0x10)
};

// ScriptStruct Engine.*79d333047c
// Size: 0x28 (Inherited: 0x00)
struct F*79d333047c {
	struct FString StatName; // 0x00(0x10)
	struct TArray<struct F*d51794737d> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*d51794737d
// Size: 0x08 (Inherited: 0x00)
struct F*d51794737d {
	float In; // 0x00(0x04)
	struct FColor Out; // 0x04(0x04)
};

// ScriptStruct Engine.WorldContext
// Size: 0x2a8 (Inherited: 0x00)
struct FWorldContext {
	char pad_0[0x8]; // 0x00(0x08)
	struct FURL *b5cfa248f4; // 0x08(0x70)
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct U*f633e75a6f*> *4b8fad4d6c; // 0x80(0x10)
	char pad_90[0x20]; // 0x90(0x20)
	struct TArray<struct F*055697d8f7> *6b4a4246de; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct UGameInstance* *1d311e10e5; // 0xc8(0x08)
	char pad_D0[0x10]; // 0xd0(0x10)
	struct UGameViewportClient* GameViewport; // 0xe0(0x08)
	struct U*ecaf7d9876* *ecaf7d9876; // 0xe8(0x08)
	char pad_F0[0x10]; // 0xf0(0x10)
	struct TArray<struct F*270e8b5d12> PackagesToFullyLoad; // 0x100(0x10)
	char pad_110[0x28]; // 0x110(0x28)
	struct TArray<struct F*748cdb5bcc> *f91257b2df; // 0x138(0x10)
	char pad_148[0xd0]; // 0x148(0xd0)
	struct FURL *67a79206d3; // 0x218(0x70)
	char pad_288[0x8]; // 0x288(0x08)
	struct TArray<struct ULevel*> *bc7eaca6b4; // 0x290(0x10)
	char pad_2A0[0x8]; // 0x2a0(0x08)
};

// ScriptStruct Engine.*748cdb5bcc
// Size: 0x10 (Inherited: 0x00)
struct F*748cdb5bcc {
	struct UNetDriver* NetDriver; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*270e8b5d12
// Size: 0x38 (Inherited: 0x00)
struct F*270e8b5d12 {
	enum class *4d0d7d4b5d *60ff2bb2ef; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> *e03135487e; // 0x18(0x10)
	struct TArray<struct UObject*> *a42a5214b7; // 0x28(0x10)
};

// ScriptStruct Engine.*055697d8f7
// Size: 0x10 (Inherited: 0x00)
struct F*055697d8f7 {
	struct FName PackageName; // 0x00(0x08)
	char *16761001ae : 1; // 0x08(0x01)
	char *25d4f7d7b0 : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32 LODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*ac3a1c14b3
// Size: 0x18 (Inherited: 0x00)
struct F*ac3a1c14b3 {
	struct FName DefName; // 0x00(0x08)
	struct FName DriverClassName; // 0x08(0x08)
	struct FName DriverClassNameFallback; // 0x10(0x08)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x1c8 (Inherited: 0x00)
struct FRuntimeCurveLinearColor {
	struct FRichCurve *8a66cc173d[0x04]; // 0x00(0x1c0)
	struct U*e9d5a49b26* ExternalCurve; // 0x1c0(0x08)
};

// ScriptStruct Engine.*3e547ed825
// Size: 0x10 (Inherited: 0x00)
struct F*3e547ed825 {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x20 (Inherited: 0x00)
struct FPreviewMeshCollectionEntry {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x20)
};

// ScriptStruct Engine.*aa4a81beed
// Size: 0x04 (Inherited: 0x00)
struct F*aa4a81beed {
	bool *1ff83c00b2; // 0x00(0x01)
	bool *a9c4221f56; // 0x01(0x01)
	bool *34584fe3c2; // 0x02(0x01)
	bool *f2a29931c4; // 0x03(0x01)
};

// ScriptStruct Engine.*9e38abbf1f
// Size: 0x24 (Inherited: 0x00)
struct F*9e38abbf1f {
	struct FVector2D UVScale; // 0x00(0x08)
	struct FVector2D *a4c2705366; // 0x08(0x08)
	struct FVector Tangent; // 0x10(0x0c)
	float *88a63a37a8; // 0x1c(0x04)
	int32 *75fbb8a25d; // 0x20(0x04)
};

// ScriptStruct Engine.*417b31e39e
// Size: 0x20 (Inherited: 0x00)
struct F*417b31e39e {
	struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
	struct F*3e99e8a95d Rules; // 0x10(0x10)
};

// ScriptStruct Engine.*ab84f486b1
// Size: 0x20 (Inherited: 0x00)
struct F*ab84f486b1 {
	struct FString Old; // 0x00(0x10)
	struct FString New; // 0x10(0x10)
};

// ScriptStruct Engine.*24266ea0bd
// Size: 0x20 (Inherited: 0x00)
struct F*24266ea0bd {
	struct FText DisplayName; // 0x00(0x18)
	int32 MaxChannels; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*19feba02a1
// Size: 0x10 (Inherited: 0x00)
struct F*19feba02a1 {
	enum class EPhysicalSurface Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.*645e9905ec
// Size: 0x10 (Inherited: 0x00)
struct F*645e9905ec {
	struct FName *7183bb25c9; // 0x00(0x08)
	struct FVector2D *e7b2783637; // 0x08(0x08)
};

// ScriptStruct Engine.*6e85cf4538
// Size: 0x38 (Inherited: 0x00)
struct F*6e85cf4538 {
	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct FString *f7405a661d; // 0x20(0x10)
	struct U*012e5d8f7a* Proxy; // 0x30(0x08)
};

// ScriptStruct Engine.*1f6ca76ce9
// Size: 0x38 (Inherited: 0x28)
struct F*1f6ca76ce9 : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct U*fcaa61cf2b* Distribution; // 0x30(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x50 (Inherited: 0x28)
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct FVector *865b555eae; // 0x30(0x0c)
	struct FVector *4798e6cf23; // 0x3c(0x0c)
	struct U*176547bb0f* Distribution; // 0x48(0x08)
};

// ScriptStruct Engine.*909945f8fd
// Size: 0x18 (Inherited: 0x00)
struct F*909945f8fd {
	struct FName ComponentPropertyName; // 0x00(0x08)
	struct FName DelegatePropertyName; // 0x08(0x08)
	struct FName *7192fbbd1f; // 0x10(0x08)
};

// ScriptStruct Engine.*b8261aef3e
// Size: 0x04 (Inherited: 0x00)
struct F*b8261aef3e {
	char *f670ef5788 : 1; // 0x00(0x01)
	char *9dae3664a2 : 1; // 0x00(0x01)
	char *9f7e3a6503 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*0d1876079b
// Size: 0x20 (Inherited: 0x04)
struct F*0d1876079b : F*b8261aef3e {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputActionName; // 0x08(0x08)
	enum class *1148c7239b *0b05f45e36; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FName *7192fbbd1f; // 0x18(0x08)
};

// ScriptStruct Engine.*a5a8f44d14
// Size: 0x18 (Inherited: 0x04)
struct F*a5a8f44d14 : F*b8261aef3e {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputAxisName; // 0x08(0x08)
	struct FName *7192fbbd1f; // 0x10(0x08)
};

// ScriptStruct Engine.*e1404b9042
// Size: 0x28 (Inherited: 0x04)
struct F*e1404b9042 : F*b8261aef3e {
	char pad_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x18)
	struct FName *7192fbbd1f; // 0x20(0x08)
};

// ScriptStruct Engine.*9acfcacdbf
// Size: 0x38 (Inherited: 0x04)
struct F*9acfcacdbf : F*b8261aef3e {
	char pad_4[0x4]; // 0x04(0x04)
	struct F*b77ea41268 *b77ea41268; // 0x08(0x20)
	enum class *1148c7239b *0b05f45e36; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName *7192fbbd1f; // 0x30(0x08)
};

// ScriptStruct Engine.*3af646faf7
// Size: 0x10 (Inherited: 0x04)
struct F*3af646faf7 : F*b8261aef3e {
	enum class *1148c7239b *0b05f45e36; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName *7192fbbd1f; // 0x08(0x08)
};

// ScriptStruct Engine.*cd8c214146
// Size: 0x20 (Inherited: 0x00)
struct F*cd8c214146 {
	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* *b165492609; // 0x08(0x08)
	struct FGuid *c7dbacc78b; // 0x10(0x10)
};

// ScriptStruct Engine.*5f4b462e09
// Size: 0x108 (Inherited: 0x100)
struct F*5f4b462e09 : F*caae767175 {
	struct UEdGraphNode* *c913c53932; // 0x100(0x08)
};

// ScriptStruct Engine.*caae767175
// Size: 0x100 (Inherited: 0x00)
struct F*caae767175 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FText *55334309c3; // 0x08(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32 Grouping; // 0x68(0x04)
	int32 SectionID; // 0x6c(0x04)
	struct TArray<struct FString> *5ee69b2033; // 0x70(0x10)
	struct TArray<struct FString> *1f6dc4f6c4; // 0x80(0x10)
	struct TArray<struct FString> *61145cae72; // 0x90(0x10)
	struct TArray<struct FString> *cb639dee4f; // 0xa0(0x10)
	struct TArray<struct FString> *f8c921e7a5; // 0xb0(0x10)
	struct TArray<struct FString> *c58134e7e8; // 0xc0(0x10)
	struct TArray<struct FString> *69a5b6757b; // 0xd0(0x10)
	struct TArray<struct FString> *731e7ff585; // 0xe0(0x10)
	struct FString *850088111b; // 0xf0(0x10)
};

// ScriptStruct Engine.*f121636d03
// Size: 0x10 (Inherited: 0x00)
struct F*f121636d03 {
	struct FName *56709ca8b5; // 0x00(0x08)
	int32 BeginIndex; // 0x08(0x04)
	int32 EndIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*4a57608e62
// Size: 0xb0 (Inherited: 0x00)
struct F*4a57608e62 {
	struct FString FontName; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char *43d69da0bf : 1; // 0x14(0x01)
	char *ce724950e0 : 1; // 0x14(0x01)
	char *2be9d321b9 : 1; // 0x14(0x01)
	char *8cb529d5f2 : 1; // 0x14(0x01)
	char *42d28e3690 : 1; // 0x14(0x01)
	char pad_14_5 : 3; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	enum class *21b6d9f52d *4c35d67363; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString *fa6a9b4159; // 0x20(0x10)
	struct FString *2dfd3dd0c6; // 0x30(0x10)
	struct FString *6bdbf67dbd; // 0x40(0x10)
	struct FString *70afa74729; // 0x50(0x10)
	char *3b11a6e13b : 1; // 0x60(0x01)
	char *47fcd0f170 : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char *4e23e33fb2 : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	int32 *e55e1e445b; // 0x78(0x04)
	int32 *a0cd28f914; // 0x7c(0x04)
	int32 *c8c90ae56c; // 0x80(0x04)
	int32 *3cd1da1728; // 0x84(0x04)
	int32 *e9d1e42129; // 0x88(0x04)
	int32 *57064fa7e1; // 0x8c(0x04)
	int32 *ebe5cb73ad; // 0x90(0x04)
	int32 *fc0305b8ff; // 0x94(0x04)
	char *1b2a90152e : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 Kerning; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 *9363d891bd; // 0xa4(0x04)
	float *08e448c744; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*9d041ee9a6
// Size: 0x18 (Inherited: 0x00)
struct F*9d041ee9a6 {
	int32 *b64e497d21; // 0x00(0x04)
	int32 *8d826d82aa; // 0x04(0x04)
	int32 *a67c18a063; // 0x08(0x04)
	int32 *d295b6bc38; // 0x0c(0x04)
	bool *1c9ee7a41e; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *96e9409f9c; // 0x14(0x04)
};

// ScriptStruct Engine.*237b0a2197
// Size: 0x18 (Inherited: 0x00)
struct F*237b0a2197 {
	struct U*f1b0840319* *c496eaad15; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0xf0 (Inherited: 0x00)
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; // 0x00(0x78)
	struct FRuntimeFloatCurve *16cab9cc7a; // 0x78(0x78)
};

// ScriptStruct Engine.*edc1520719
// Size: 0x80 (Inherited: 0x00)
struct F*edc1520719 {
	struct UClass* ComponentClass; // 0x00(0x08)
	struct UActorComponent* *9e83f695db; // 0x08(0x08)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct F*1489c052de *8f11984777; // 0x30(0x50)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)
struct FComponentKey {
	struct UClass* *60b1ebe01b; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x08)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// ScriptStruct Engine.*5468d61b6d
// Size: 0x30 (Inherited: 0x00)
struct F*5468d61b6d {
	struct FString TabName; // 0x00(0x10)
	struct TArray<struct F*e25173f538> Curves; // 0x10(0x10)
	float *94a885b7bc; // 0x20(0x04)
	float *244f8f5731; // 0x24(0x04)
	float *baf49f0ef5; // 0x28(0x04)
	float *6d814e1225; // 0x2c(0x04)
};

// ScriptStruct Engine.*e25173f538
// Size: 0x38 (Inherited: 0x00)
struct F*e25173f538 {
	struct UObject* *0d39e53371; // 0x00(0x08)
	struct FColor *b521504a2e; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32 *d6b4b6b0d5; // 0x20(0x04)
	int32 *d8dee0dc1e; // 0x24(0x04)
	int32 *bd3b5075e2; // 0x28(0x04)
	int32 *844c96490d; // 0x2c(0x04)
	float *14672e7fb1; // 0x30(0x04)
	float *a2c179ec09; // 0x34(0x04)
};

// ScriptStruct Engine.*6716762b5f
// Size: 0x18 (Inherited: 0x00)
struct F*6716762b5f {
	struct U*99f73124f9* Group; // 0x00(0x08)
	struct U*1a291a585f* Track; // 0x08(0x08)
	int32 *e9572a1972; // 0x10(0x04)
	float *582f7dd7c5; // 0x14(0x04)
};

// ScriptStruct Engine.*817a96be40
// Size: 0x30 (Inherited: 0x00)
struct F*817a96be40 {
	struct UClass* PawnClass; // 0x00(0x08)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct APawn* *8f636fd297; // 0x28(0x08)
};

// ScriptStruct Engine.*b8401e3177
// Size: 0x28 (Inherited: 0x00)
struct F*b8401e3177 {
	struct FString GroupName; // 0x00(0x10)
	struct TArray<int32> *d188b964e1; // 0x10(0x10)
	char *420c20055f : 1; // 0x20(0x01)
	char *4aea640751 : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*8a7d681828
// Size: 0x20 (Inherited: 0x00)
struct F*8a7d681828 {
	struct UClass* *990f581958; // 0x00(0x08)
	struct FString *ff2490efee; // 0x08(0x10)
	int32 *dceec8204e; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*3e18cb2726
// Size: 0x08 (Inherited: 0x00)
struct F*3e18cb2726 {
	float Time; // 0x00(0x04)
	char Value : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*34a9fba3e1
// Size: 0x18 (Inherited: 0x00)
struct F*34a9fba3e1 {
	float Time; // 0x00(0x04)
	float *956ff9333e; // 0x04(0x04)
	struct FName *1f5a2d781f; // 0x08(0x08)
	int32 ShotNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*4020cdf762
// Size: 0x10 (Inherited: 0x00)
struct F*4020cdf762 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName EventName; // 0x08(0x08)
};

// ScriptStruct Engine.*fe7256c39c
// Size: 0x20 (Inherited: 0x00)
struct F*fe7256c39c {
	float StartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	float *7cfdeb454d; // 0x10(0x04)
	float *d7927f466f; // 0x14(0x04)
	float AnimPlayRate; // 0x18(0x04)
	char bLooping : 1; // 0x1c(0x01)
	char *b8708eb9e5 : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*e265809578
// Size: 0x10 (Inherited: 0x00)
struct F*e265809578 {
	struct TArray<struct F*96dbb3936e> Points; // 0x00(0x10)
};

// ScriptStruct Engine.*96dbb3936e
// Size: 0x10 (Inherited: 0x00)
struct F*96dbb3936e {
	struct FName GroupName; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*9da80dbf2a
// Size: 0x0c (Inherited: 0x00)
struct F*9da80dbf2a {
	float Time; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	int32 ClipIDNumber; // 0x08(0x04)
};

// ScriptStruct Engine.*0e7f2854bf
// Size: 0x08 (Inherited: 0x00)
struct F*0e7f2854bf {
	float Time; // 0x00(0x04)
	enum class *917b9095d7 ToggleAction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*e7bc68dde1
// Size: 0x18 (Inherited: 0x00)
struct F*e7bc68dde1 {
	float Time; // 0x00(0x04)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USoundBase* Sound; // 0x10(0x08)
};

// ScriptStruct Engine.*9bd246f1b3
// Size: 0x08 (Inherited: 0x00)
struct F*9bd246f1b3 {
	float Time; // 0x00(0x04)
	enum class *31ba50c4e5 Action; // 0x04(0x01)
	enum class *7e61c91cae *1b2306d5cd; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Engine.*5434d42aca
// Size: 0x38 (Inherited: 0x00)
struct F*5434d42aca {
	struct U*e208bd34a5* Container; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Engine.*cb9dfe0e61
// Size: 0x110 (Inherited: 0x00)
struct F*cb9dfe0e61 {
	struct FName *56709ca8b5; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FIntPoint Size; // 0x40(0x08)
	struct FIntPoint *1c4f38f4ab; // 0x48(0x08)
	char *d6f5162d72 : 1; // 0x50(0x01)
	char *8294ee99dc : 1; // 0x50(0x01)
	char *838940512e : 1; // 0x50(0x01)
	char *edeb351581 : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FName> *57b3c5bee5; // 0x58(0x10)
	struct TArray<bool> *626b589b8d; // 0x68(0x10)
	struct TArray<struct U*3f112a2a4a*> *ac76cc1fea; // 0x78(0x10)
	char pad_88[0x88]; // 0x88(0x88)
};

// ScriptStruct Engine.*35bc27a1ad
// Size: 0x10 (Inherited: 0x00)
struct F*35bc27a1ad {
	struct UClass* Type; // 0x00(0x08)
	int32 Total; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*b599cdcf27
// Size: 0x20 (Inherited: 0x00)
struct F*b599cdcf27 {
	struct FVector *63cf8f1851; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInterface* DecalMaterial; // 0x10(0x08)
	int32 SortOrder; // 0x18(0x04)
	bool *b0e30f4b67; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*f9829fc50c
// Size: 0x30 (Inherited: 0x00)
struct F*f9829fc50c {
	struct FName *56709ca8b5; // 0x00(0x08)
	struct F*bb78d6493c Volume; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*569d99ab87
// Size: 0x40 (Inherited: 0x00)
struct F*569d99ab87 {
	struct FName *56709ca8b5; // 0x00(0x08)
	uint32 TypeId; // 0x08(0x04)
	char *64ab4844a1 : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*98941f2132
// Size: 0x08 (Inherited: 0x00)
struct F*98941f2132 {
	struct ULevelBlockType* LevelBlockType; // 0x00(0x08)
};

// ScriptStruct Engine.*48225470ba
// Size: 0x50 (Inherited: 0x00)
struct F*48225470ba {
	struct FName *56709ca8b5; // 0x00(0x08)
	struct U*4731177e12* Data; // 0x08(0x08)
	struct FVector2D Offset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x30)
};

// ScriptStruct Engine.*50b968a31c
// Size: 0x40 (Inherited: 0x00)
struct F*50b968a31c {
	struct FName *56709ca8b5; // 0x00(0x08)
	struct U*4032b41f9c* Data; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*d3a8885003
// Size: 0xb0 (Inherited: 0x00)
struct F*d3a8885003 {
	struct FString *56709ca8b5; // 0x00(0x10)
	struct FTransform *9a64183c94; // 0x10(0x30)
	struct FString *e61af69756; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct TMap<struct FVector, struct FString> *dae8a3514d; // 0x58(0x50)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct Engine.*8998a4ad25
// Size: 0xa0 (Inherited: 0x00)
struct F*8998a4ad25 {
	struct FString *56709ca8b5; // 0x00(0x10)
	struct FTransform *9a64183c94; // 0x10(0x30)
	struct FString *79384b7e61; // 0x40(0x10)
	struct FTransform *b9bd7c90a7; // 0x50(0x30)
	char pad_80[0x20]; // 0x80(0x20)
};

// ScriptStruct Engine.*4aa69b907b
// Size: 0x60 (Inherited: 0x00)
struct F*4aa69b907b {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.*61cb1379d8
// Size: 0xb0 (Inherited: 0x00)
struct F*61cb1379d8 {
	char *f47bf549cb : 1; // 0x00(0x01)
	char *78544bd070 : 1; // 0x00(0x01)
	char *023e3acb08 : 1; // 0x00(0x01)
	char *9c8f66ee5e : 1; // 0x00(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x00(0x01)
	char LightingChannel0 : 1; // 0x00(0x01)
	char LightingChannel1 : 1; // 0x00(0x01)
	char *7f0377061d : 1; // 0x00(0x01)
	char *e2b5f86e9f : 1; // 0x01(0x01)
	char *c1ca00b13f : 1; // 0x01(0x01)
	char *ea3da5ead6 : 1; // 0x01(0x01)
	char bUseInverseSquaredFalloff : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UMaterialInterface* *c6922983bf; // 0x08(0x20)
	struct U*42bee7f7f3* IESTexture; // 0x28(0x20)
	float Temperature; // 0x48(0x04)
	float MaxDrawDistance; // 0x4c(0x04)
	float *f173d485a6; // 0x50(0x04)
	float *3b729f7b42; // 0x54(0x04)
	float *3b0502872f; // 0x58(0x04)
	float *f7436ad84d; // 0x5c(0x04)
	float ShadowSharpen; // 0x60(0x04)
	float *250ebfdfa3; // 0x64(0x04)
	struct FVector *8a5befb43d; // 0x68(0x0c)
	float *67bbdb1c0e; // 0x74(0x04)
	float *77c15ea0bc; // 0x78(0x04)
	float *a0c382d70a; // 0x7c(0x04)
	float *c7aefbb78c; // 0x80(0x04)
	float BloomThreshold; // 0x84(0x04)
	struct FColor *7ac39fab8e; // 0x88(0x04)
	float RayStartOffsetDepthScale; // 0x8c(0x04)
	float AttenuationRadius; // 0x90(0x04)
	float LightFalloffExponent; // 0x94(0x04)
	float *10e041b05f; // 0x98(0x04)
	float *8b33a7337e; // 0x9c(0x04)
	float InnerConeAngle; // 0xa0(0x04)
	float OuterConeAngle; // 0xa4(0x04)
	float *79de17360b; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*f07a8332b0
// Size: 0x50 (Inherited: 0x00)
struct F*f07a8332b0 {
	struct FTransform Transform; // 0x00(0x30)
	float *a40f146202; // 0x30(0x04)
	float Alpha; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*58e8763394
// Size: 0x78 (Inherited: 0x00)
struct F*58e8763394 {
	struct UStaticMesh* Mesh; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *3614c0bf6e; // 0x20(0x10)
	char pad_30[0x1c]; // 0x30(0x1c)
	float CachedMaxDrawDistance; // 0x4c(0x04)
	char bImportantMesh : 1; // 0x50(0x01)
	char *8c318b8553 : 1; // 0x50(0x01)
	char LightingChannel0 : 1; // 0x50(0x01)
	char LightingChannel1 : 1; // 0x50(0x01)
	char *7f0377061d : 1; // 0x50(0x01)
	char *994650040e : 1; // 0x50(0x01)
	char *b6b3ba4dd3 : 1; // 0x50(0x01)
	char pad_50_7 : 1; // 0x50(0x01)
	enum class *f1e85ae637 IndoorOutdoorMask; // 0x51(0x01)
	enum class ECollisionChannel *8dd0d639e5; // 0x52(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*35cd224f29> *0fbe3f83e3; // 0x58(0x10)
	struct FName CollisionProfileName; // 0x68(0x08)
	int32 MeshSize; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.*3fd9c6cf4c
// Size: 0x40 (Inherited: 0x00)
struct F*3fd9c6cf4c {
	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x08)
	int32 *2cea562664; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *a31293190d; // 0x18(0x10)
	struct APlayerState* *ffd53c5584; // 0x28(0x08)
	struct APlayerState* *bc8e2014a7; // 0x30(0x08)
	struct UObject* *f4feffb02a; // 0x38(0x08)
};

// ScriptStruct Engine.*739e357436
// Size: 0x48 (Inherited: 0x00)
struct F*739e357436 {
	struct FString InputName; // 0x00(0x10)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Engine.*05fd31b745
// Size: 0x40 (Inherited: 0x00)
struct F*05fd31b745 {
	struct U*9123894fc1* *2199a5b579; // 0x00(0x08)
	struct FGuid *87b0ca0958; // 0x08(0x10)
	struct FExpressionOutput Output; // 0x18(0x28)
};

// ScriptStruct Engine.*6eeac18253
// Size: 0x50 (Inherited: 0x00)
struct F*6eeac18253 {
	struct U*b0510e25a9* ExpressionInput; // 0x00(0x08)
	struct FGuid *a44a352137; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x38)
};

// ScriptStruct Engine.*5b77a6efc7
// Size: 0x128 (Inherited: 0x00)
struct F*5b77a6efc7 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput *1fc15ae10f; // 0x80(0x38)
	struct FExpressionInput DiffuseTexture; // 0xb8(0x38)
	struct FExpressionInput NormalTexture; // 0xf0(0x38)
};

// ScriptStruct Engine.*1d31da226c
// Size: 0x128 (Inherited: 0x00)
struct F*1d31da226c {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput DiffuseTexture; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
	struct FExpressionInput Specular; // 0xf0(0x38)
};

// ScriptStruct Engine.*803094c129
// Size: 0xf0 (Inherited: 0x00)
struct F*803094c129 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput DiffuseTexture; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
};

// ScriptStruct Engine.*98033a7972
// Size: 0x18 (Inherited: 0x00)
struct F*98033a7972 {
	struct FGuid *0ce71e6b22; // 0x00(0x10)
	struct UMaterialParameterCollection* *fad4c100d3; // 0x10(0x08)
};

// ScriptStruct Engine.*47105f3405
// Size: 0x18 (Inherited: 0x00)
struct F*47105f3405 {
	struct FGuid *0ce71e6b22; // 0x00(0x10)
	struct UMaterialFunction* Function; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x24 (Inherited: 0x00)
struct FMaterialInstanceBasePropertyOverrides {
	bool bOverride_OpacityMaskClipValue; // 0x00(0x01)
	bool bOverride_BlendMode; // 0x01(0x01)
	bool bOverride_ShadingModel; // 0x02(0x01)
	bool bOverride_PrepassMasked; // 0x03(0x01)
	bool bOverride_DitheredLODTransition; // 0x04(0x01)
	bool bOverride_TwoSided; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float OpacityMaskClipValue; // 0x08(0x04)
	enum class EBlendMode BlendMode; // 0x0c(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	char PrepassMasked : 1; // 0x10(0x01)
	char TwoSided : 1; // 0x10(0x01)
	char DitheredLODTransition : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	bool bOverride_bApplyMaterialClipVolumes; // 0x14(0x01)
	bool bOverride_MaterialClipVolumeTypes; // 0x15(0x01)
	bool bOverride_MaterialClipVolumeImportance; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct F*6a44e1a314 MaterialClipVolumeTypes; // 0x1c(0x04)
	enum class *23fe9b94f9 MaterialClipVolumeImportance; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Engine.*ded523a6c8
// Size: 0x28 (Inherited: 0x00)
struct F*ded523a6c8 {
	struct FName ParameterName; // 0x00(0x08)
	struct FLinearColor ParameterValue; // 0x08(0x10)
	struct FGuid *4dd4dd7063; // 0x18(0x10)
};

// ScriptStruct Engine.*a504c41607
// Size: 0x20 (Inherited: 0x00)
struct F*a504c41607 {
	struct FName ParameterName; // 0x00(0x08)
	struct UTexture* ParameterValue; // 0x08(0x08)
	struct FGuid *4dd4dd7063; // 0x10(0x10)
};

// ScriptStruct Engine.*40219917e5
// Size: 0x20 (Inherited: 0x00)
struct F*40219917e5 {
	struct FName ParameterName; // 0x00(0x08)
	float ParameterValue; // 0x08(0x04)
	struct FGuid *4dd4dd7063; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*2f1f908113
// Size: 0x28 (Inherited: 0x00)
struct F*2f1f908113 {
	struct FName ParameterName; // 0x00(0x08)
	struct UFont* FontValue; // 0x08(0x08)
	int32 FontPage; // 0x10(0x04)
	struct FGuid *4dd4dd7063; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*22474b51cd
// Size: 0x28 (Inherited: 0x18)
struct F*22474b51cd : F*91ca8d9eaf {
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// ScriptStruct Engine.*91ca8d9eaf
// Size: 0x18 (Inherited: 0x00)
struct F*91ca8d9eaf {
	struct FName ParameterName; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
};

// ScriptStruct Engine.*ad9a0fd7e8
// Size: 0x20 (Inherited: 0x18)
struct F*ad9a0fd7e8 : F*91ca8d9eaf {
	float DefaultValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*2d6195cb0d
// Size: 0x18 (Inherited: 0x00)
struct F*2d6195cb0d {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
};

// ScriptStruct Engine.*ff3ef9d9bb
// Size: 0x14 (Inherited: 0x00)
struct F*ff3ef9d9bb {
	struct FVector Offset; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float Height; // 0x10(0x04)
};

// ScriptStruct Engine.PacketSimulationSettings
// Size: 0x14 (Inherited: 0x00)
struct FPacketSimulationSettings {
	int32 PktLoss; // 0x00(0x04)
	int32 PktOrder; // 0x04(0x04)
	int32 PktDup; // 0x08(0x04)
	int32 PktLag; // 0x0c(0x04)
	int32 PktLagVariance; // 0x10(0x04)
};

// ScriptStruct Engine.*ca62b3ee9d
// Size: 0x30 (Inherited: 0x00)
struct F*ca62b3ee9d {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Archetype; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
	struct ULevel* Level; // 0x28(0x08)
};

// ScriptStruct Engine.*74d2e6ef69
// Size: 0x18 (Inherited: 0x00)
struct F*74d2e6ef69 {
	struct FString LevelName; // 0x00(0x10)
	uint32 *5df2cc0b3b; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*e9f68e0c59
// Size: 0x40 (Inherited: 0x00)
struct F*e9f68e0c59 {
	struct FName *b8fb629e92; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *8a4d90af0b; // 0x10(0x30)
};

// ScriptStruct Engine.*be6bfef784
// Size: 0x0c (Inherited: 0x00)
struct F*be6bfef784 {
	int32 Count; // 0x00(0x04)
	int32 *97b5d643b6; // 0x04(0x04)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.*1174241ce4
// Size: 0x20 (Inherited: 0x00)
struct F*1174241ce4 {
	struct FName ParameterName; // 0x00(0x08)
	char *1a4a99e9e4 : 1; // 0x08(0x01)
	char *bf827d93c6 : 1; // 0x08(0x01)
	char *dbb10d4bfb : 1; // 0x08(0x01)
	char *b4598b5f1c : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<int32> *147de48824; // 0x10(0x10)
};

// ScriptStruct Engine.*0e09fc41e7
// Size: 0x18 (Inherited: 0x00)
struct F*0e09fc41e7 {
	struct FString CurveName; // 0x00(0x10)
	struct UObject* *0d39e53371; // 0x10(0x08)
};

// ScriptStruct Engine.*7650be3db8
// Size: 0x04 (Inherited: 0x00)
struct F*7650be3db8 {
	char *3f090d06a5 : 1; // 0x00(0x01)
	char *e220557245 : 1; // 0x00(0x01)
	char bLock : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*bf4552732e
// Size: 0x28 (Inherited: 0x00)
struct F*bf4552732e {
	enum class EParticleEventType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Frequency; // 0x04(0x04)
	int32 *1a1e31f4d7; // 0x08(0x04)
	char *d2ca1d97cf : 1; // 0x0c(0x01)
	char *c46bc43921 : 1; // 0x0c(0x01)
	char *e2435a790f : 1; // 0x0c(0x01)
	char *dd614649df : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName *820c23629f; // 0x10(0x08)
	struct TArray<struct U*987a7e4edb*> *91fe2376e0; // 0x18(0x10)
};

// ScriptStruct Engine.*5ac2ee893c
// Size: 0x18 (Inherited: 0x00)
struct F*5ac2ee893c {
	struct FName *eb90683605; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*b021185d8b
// Size: 0x04 (Inherited: 0x00)
struct F*b021185d8b {
	char *393233ece8 : 1; // 0x00(0x01)
	char *85e63551b9 : 1; // 0x00(0x01)
	char *8d0ea853a6 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*ee7cb4da81
// Size: 0x50 (Inherited: 0x00)
struct F*ee7cb4da81 {
	struct FName ParamName; // 0x00(0x08)
	char *8d0ea853a6 : 1; // 0x08(0x01)
	char *416b7febd1 : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	enum class *0c74b6f2b1 *a3f28e048e; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	char *8c0b957b99 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct F*1f6ca76ce9 *7f0be946d8; // 0x18(0x38)
};

// ScriptStruct Engine.*4232e2fc97
// Size: 0x10 (Inherited: 0x00)
struct F*4232e2fc97 {
	struct FName TargetName; // 0x00(0x08)
	float *c178265098; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*ce9d577b6b
// Size: 0x160 (Inherited: 0x00)
struct F*ce9d577b6b {
	struct TArray<struct FColor> *4d08c32cde; // 0x00(0x10)
	struct TArray<struct FColor> *062e378dc8; // 0x10(0x10)
	struct TArray<struct FColor> *80c771866e; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 *66814769be; // 0x40(0x10)
	struct FVector4 *3207a3b606; // 0x50(0x10)
	struct FVector4 *284082cb5b; // 0x60(0x10)
	struct FVector4 *59580c290b; // 0x70(0x10)
	struct FVector4 *b70a1a8092; // 0x80(0x10)
	struct FVector4 *3781fcc60a; // 0x90(0x10)
	struct FVector4 *0a2da255fd; // 0xa0(0x10)
	struct FVector *9b12dadb0e; // 0xb0(0x0c)
	struct FVector *e00c5c7442; // 0xbc(0x0c)
	struct FVector *1fd05651aa; // 0xc8(0x0c)
	struct FVector *cec64d5835; // 0xd4(0x0c)
	struct FVector *edfbf99c50; // 0xe0(0x0c)
	struct FVector *e8cdf2a178; // 0xec(0x0c)
	struct FVector *5a6aac3c02; // 0xf8(0x0c)
	float *6b51e691cd; // 0x104(0x04)
	float *e389085b91; // 0x108(0x04)
	float *320cc4ebdd; // 0x10c(0x04)
	float *7251eb30bd; // 0x110(0x04)
	float *f4f87c1236; // 0x114(0x04)
	float *06792f6c58; // 0x118(0x04)
	float *d092688a56; // 0x11c(0x04)
	float *8dbbb780fc; // 0x120(0x04)
	float *ab709a25d1; // 0x124(0x04)
	float *527971d00b; // 0x128(0x04)
	float *3dc1c16b00; // 0x12c(0x04)
	float *3cdf98b350; // 0x130(0x04)
	float *1b04ad0d06; // 0x134(0x04)
	float *77532ea5de; // 0x138(0x04)
	float *a956b99340; // 0x13c(0x04)
	float *f791c743a0; // 0x140(0x04)
	enum class *95da0e439e *aee268ba85; // 0x144(0x01)
	enum class *550ca13e03 *d457e51608; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	struct FVector2D *4b9c166f43; // 0x148(0x08)
	char *6da397a322 : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float *597bdca05d; // 0x154(0x04)
	float *c3dcd6a0f5; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct Engine.*a9ca3abd5e
// Size: 0x2c0 (Inherited: 0x00)
struct F*a9ca3abd5e {
	struct UParticleModuleRequired* *8a67746d79; // 0x00(0x08)
	struct UParticleModuleSpawn* *454db5a5fd; // 0x08(0x08)
	struct U*9f93b8556c* *e404f38c8b; // 0x10(0x08)
	struct TArray<struct UParticleModule*> *59031c4ffa; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct F*196d5b4c15 *9d8b4b25d8; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xa0(0x28)
	struct FFloatDistribution DragCoefficient; // 0xc8(0x28)
	struct FFloatDistribution *daa24eab7c; // 0xf0(0x28)
	struct FFloatDistribution *725e162a6a; // 0x118(0x28)
	struct FVector *9b12dadb0e; // 0x140(0x0c)
	struct FVector *9d990805e1; // 0x14c(0x0c)
	float *d5582d3671; // 0x158(0x04)
	struct FVector *e00c5c7442; // 0x15c(0x0c)
	struct FVector *1fd05651aa; // 0x168(0x0c)
	struct FVector2D *b6416e459b; // 0x174(0x08)
	float *4d0663254c; // 0x17c(0x04)
	float *764914027d; // 0x180(0x04)
	int32 *7fa96bca95; // 0x184(0x04)
	enum class *95da0e439e *aee268ba85; // 0x188(0x01)
	enum class *550ca13e03 *d457e51608; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	char bEnableCollision : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	enum class EParticleCollisionMode *0ecc1f7166; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	char *6da397a322 : 1; // 0x194(0x01)
	char pad_194_1 : 7; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float *597bdca05d; // 0x198(0x04)
	float *c3dcd6a0f5; // 0x19c(0x04)
	struct FRawDistributionVector *a0f59b9057; // 0x1a0(0x50)
	struct F*1f6ca76ce9 *dfa7e4e2ad; // 0x1f0(0x38)
	struct FRawDistributionVector *99e75825f8; // 0x228(0x50)
	struct F*1f6ca76ce9 *6075960439; // 0x278(0x38)
	char pad_2B0[0x10]; // 0x2b0(0x10)
};

// ScriptStruct Engine.*196d5b4c15
// Size: 0x70 (Inherited: 0x00)
struct F*196d5b4c15 {
	struct UVectorField* Field; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator *fe0871a6e8; // 0x40(0x0c)
	struct FRotator *4f9b6caddf; // 0x4c(0x0c)
	struct FRotator RotationRate; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float *93c60fe53a; // 0x68(0x04)
	char *d22adcbf96 : 1; // 0x6c(0x01)
	char *95ac34b8eb : 1; // 0x6c(0x01)
	char *5a5fd38ba7 : 1; // 0x6c(0x01)
	char *a2db8a7133 : 1; // 0x6c(0x01)
	char *db4fa2bfd4 : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*60811ba349
// Size: 0x10 (Inherited: 0x00)
struct F*60811ba349 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*600cd08d32
// Size: 0x10 (Inherited: 0x00)
struct F*600cd08d32 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*68f296e702
// Size: 0x10 (Inherited: 0x00)
struct F*68f296e702 {
	struct U*6793628d35* *6793628d35; // 0x00(0x08)
	float *9af29b21eb; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*c1ca0859fa
// Size: 0x110 (Inherited: 0x00)
struct F*c1ca0859fa {
	struct F*ec0db6b5c0 *4db20e2855; // 0x00(0x104)
	char pad_104[0x4]; // 0x104(0x04)
	struct FName ProfileName; // 0x108(0x08)
};

// ScriptStruct Engine.*74a3712136
// Size: 0x10 (Inherited: 0x00)
struct F*74a3712136 {
	struct TArray<DelegateProperty> Delegates; // 0x00(0x10)
};

// ScriptStruct Engine.*04144a7a7e
// Size: 0x40 (Inherited: 0x00)
struct F*04144a7a7e {
	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString *3e4b51d3c3; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.*94b0348d76
// Size: 0x30 (Inherited: 0x00)
struct F*94b0348d76 {
	struct TArray<bool> Data; // 0x00(0x10)
	struct FString GroupName; // 0x10(0x10)
	struct FString *d81d702310; // 0x20(0x10)
};

// ScriptStruct Engine.*ae42bf7020
// Size: 0x28 (Inherited: 0x00)
struct F*ae42bf7020 {
	struct FName Node; // 0x00(0x08)
	struct F*a65a525962 Constraints[0x02]; // 0x08(0x20)
};

// ScriptStruct Engine.*a65a525962
// Size: 0x10 (Inherited: 0x00)
struct F*a65a525962 {
	struct TArray<struct F*e46c382db2> *db64f69568; // 0x00(0x10)
};

// ScriptStruct Engine.*e46c382db2
// Size: 0x18 (Inherited: 0x00)
struct F*e46c382db2 {
	enum class EConstraintTransform *8e6198e0d9; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *ca7ad90619; // 0x08(0x08)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x00)
struct FNode {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool *93db39acc4; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct Engine.DestructibleParameters
// Size: 0x88 (Inherited: 0x00)
struct FDestructibleParameters {
	struct F*12f2f7e605 DamageParameters; // 0x00(0x1c)
	struct F*c9f19e5180 DebrisParameters; // 0x1c(0x2c)
	struct F*523d5fe942 AdvancedParameters; // 0x48(0x10)
	struct F*3e6721c09d SpecialHierarchyDepths; // 0x58(0x14)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FDestructibleDepthParameters> DepthParameters; // 0x70(0x10)
	struct FDestructibleParametersFlag Flags; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Engine.DestructibleParametersFlag
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleParametersFlag {
	char *f33e9ffbbd : 1; // 0x00(0x01)
	char *f0aae814b7 : 1; // 0x00(0x01)
	char *b4f635d33e : 1; // 0x00(0x01)
	char *a823b359cd : 1; // 0x00(0x01)
	char *bf4334461b : 1; // 0x00(0x01)
	char *e6339fe4bf : 1; // 0x00(0x01)
	char *4da96787e1 : 1; // 0x00(0x01)
	char *16ba939322 : 1; // 0x00(0x01)
	char *a77ac18011 : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.DestructibleDepthParameters
// Size: 0x01 (Inherited: 0x00)
struct FDestructibleDepthParameters {
	enum class *b4bb464609 *154400bb9f; // 0x00(0x01)
};

// ScriptStruct Engine.*3e6721c09d
// Size: 0x14 (Inherited: 0x00)
struct F*3e6721c09d {
	int32 SupportDepth; // 0x00(0x04)
	int32 MinimumFractureDepth; // 0x04(0x04)
	bool bEnableDebris; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 DebrisDepth; // 0x0c(0x04)
	int32 EssentialDepth; // 0x10(0x04)
};

// ScriptStruct Engine.*523d5fe942
// Size: 0x10 (Inherited: 0x00)
struct F*523d5fe942 {
	float DamageCap; // 0x00(0x04)
	float ImpactVelocityThreshold; // 0x04(0x04)
	float MaxChunkSpeed; // 0x08(0x04)
	float FractureImpulseScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*c9f19e5180
// Size: 0x2c (Inherited: 0x00)
struct F*c9f19e5180 {
	float DebrisLifetimeMin; // 0x00(0x04)
	float DebrisLifetimeMax; // 0x04(0x04)
	float DebrisMaxSeparationMin; // 0x08(0x04)
	float DebrisMaxSeparationMax; // 0x0c(0x04)
	struct FBox ValidBounds; // 0x10(0x1c)
};

// ScriptStruct Engine.*12f2f7e605
// Size: 0x1c (Inherited: 0x00)
struct F*12f2f7e605 {
	float DamageThreshold; // 0x00(0x04)
	float DamageSpread; // 0x04(0x04)
	bool bEnableImpactDamage; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *cdd714181d; // 0x0c(0x04)
	int32 *a8a3417fbb; // 0x10(0x04)
	bool bCustomImpactResistance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *1c82ac1620; // 0x18(0x04)
};

// ScriptStruct Engine.*fb71fdc1c8
// Size: 0x190 (Inherited: 0x00)
struct F*fb71fdc1c8 {
	float ScreenSize; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSkeletalMeshOptimizationSettings OptimizationSettings; // 0x08(0x188)
};

// ScriptStruct Engine.*e08a607206
// Size: 0x10 (Inherited: 0x00)
struct F*e08a607206 {
	int32 MaxCount; // 0x00(0x04)
	char bLimitToOwner : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float VolumeScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*aa7ad87262
// Size: 0x10 (Inherited: 0x00)
struct F*aa7ad87262 {
	float *fa18ee33da; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USoundSubmix* SoundSubmix; // 0x08(0x08)
};

// ScriptStruct Engine.*f4d0624761
// Size: 0x08 (Inherited: 0x00)
struct F*f4d0624761 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroup {
	enum class ESoundGroup SoundGroup; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DisplayName; // 0x08(0x10)
	char bAlwaysDecompressOnLoad : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DecompressedDuration; // 0x1c(0x04)
};

// ScriptStruct Engine.*0d7a7cb15a
// Size: 0x20 (Inherited: 0x00)
struct F*0d7a7cb15a {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float *9fe517f1a7; // 0x0c(0x04)
};

// ScriptStruct Engine.*0e13ba3944
// Size: 0x2c (Inherited: 0x00)
struct F*0e13ba3944 {
	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float *28dab763cc; // 0x08(0x04)
	float *b800648c3b; // 0x0c(0x04)
	float *21a6afc43d; // 0x10(0x04)
	float *21515d39d0; // 0x14(0x04)
	float *2f76e68ecf; // 0x18(0x04)
	char *82b96e9a3d : 1; // 0x1c(0x01)
	char *980f837979 : 1; // 0x1c(0x01)
	char *e70b806590 : 1; // 0x1c(0x01)
	char *9ea9de273a : 1; // 0x1c(0x01)
	char *db14561cfd : 1; // 0x1c(0x01)
	char pad_1C_5 : 3; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *442e1ef185; // 0x20(0x04)
	char *27a023992f : 1; // 0x24(0x01)
	char *2715ed751e : 1; // 0x24(0x01)
	char pad_24_2 : 6; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	enum class EAudioOutputTarget *3661cf212b; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Engine.*d955d2ac1a
// Size: 0x08 (Inherited: 0x00)
struct F*d955d2ac1a {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*128c807eb7
// Size: 0x10 (Inherited: 0x00)
struct F*128c807eb7 {
	struct U*d07c698665* preset; // 0x00(0x08)
	char bBypass : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*d2a15c58d6
// Size: 0x18 (Inherited: 0x00)
struct F*d2a15c58d6 {
	struct USoundClass* *4d164f8034; // 0x00(0x08)
	float *90102d9916; // 0x08(0x04)
	float *c01fd64210; // 0x0c(0x04)
	char *56da89ff12 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *f9e9519fc3; // 0x14(0x04)
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x38 (Inherited: 0x00)
struct FAudioEQEffect {
	char pad_0[0x8]; // 0x00(0x08)
	float FrequencyCenter0; // 0x08(0x04)
	float Gain0; // 0x0c(0x04)
	float Bandwidth0; // 0x10(0x04)
	float FrequencyCenter1; // 0x14(0x04)
	float Gain1; // 0x18(0x04)
	float Bandwidth1; // 0x1c(0x04)
	float FrequencyCenter2; // 0x20(0x04)
	float Gain2; // 0x24(0x04)
	float Bandwidth2; // 0x28(0x04)
	float FrequencyCenter3; // 0x2c(0x04)
	float Gain3; // 0x30(0x04)
	float Bandwidth3; // 0x34(0x04)
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FDistanceDatum {
	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)
};

// ScriptStruct Engine.*f297ac1a47
// Size: 0x20 (Inherited: 0x00)
struct F*f297ac1a47 {
	struct FName ParameterName; // 0x00(0x08)
	float Default; // 0x08(0x04)
	float *1ef064120c; // 0x0c(0x04)
	float *3f75091bfb; // 0x10(0x04)
	float *47841f1952; // 0x14(0x04)
	float *8e725862de; // 0x18(0x04)
	enum class *3854cf2a01 *c236a8c772; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x24 (Inherited: 0x00)
struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x00(0x04)
	struct FLinearColor SubsurfaceColor; // 0x04(0x10)
	struct FLinearColor FalloffColor; // 0x14(0x10)
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x40 (Inherited: 0x00)
struct FTextureLODGroup {
	enum class TextureGroup Group; // 0x00(0x01)
	char pad_1[0xb]; // 0x01(0x0b)
	int32 LODBias; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
	int32 NumStreamedMips; // 0x14(0x04)
	enum class TextureMipGenSettings MipGenSettings; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 MinLODSize; // 0x1c(0x04)
	int32 MaxLODSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName MinMagFilter; // 0x28(0x08)
	struct FName MipFilter; // 0x30(0x08)
	float *a672ac06c4; // 0x38(0x04)
	enum class ETextureDownscaleOptions *77c365cd28; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Engine.*db1528815f
// Size: 0x18 (Inherited: 0x10)
struct F*db1528815f : F*b3c2971426 {
	struct U*e9d5a49b26* *e9d5a49b26; // 0x10(0x08)
};

// ScriptStruct Engine.*b3c2971426
// Size: 0x10 (Inherited: 0x00)
struct F*b3c2971426 {
	struct FName TrackName; // 0x00(0x08)
	bool *0ea57d5a44; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*34a639fbe9
// Size: 0x18 (Inherited: 0x10)
struct F*34a639fbe9 : F*b3c2971426 {
	struct U*226eb62c2c* *226eb62c2c; // 0x10(0x08)
};

// ScriptStruct Engine.*a5cd0c4b6f
// Size: 0x18 (Inherited: 0x10)
struct F*a5cd0c4b6f : F*b3c2971426 {
	struct UCurveFloat* CurveFloat; // 0x10(0x08)
};

// ScriptStruct Engine.*2d64b7c056
// Size: 0x18 (Inherited: 0x10)
struct F*2d64b7c056 : F*b3c2971426 {
	struct UCurveFloat* *847e60216b; // 0x10(0x08)
};

// ScriptStruct Engine.*b2c6bf31e7
// Size: 0x68 (Inherited: 0x00)
struct F*b2c6bf31e7 {
	struct UTexture2D* Image1; // 0x00(0x08)
	struct UTexture2D* Image2; // 0x08(0x08)
	struct FVector2D Center; // 0x10(0x08)
	struct FVector2D *1ba705533d; // 0x18(0x08)
	struct FVector2D *bab691d4cf; // 0x20(0x08)
	struct FVector2D *2b375c24b6; // 0x28(0x08)
	struct FVector2D *d2b06d270b; // 0x30(0x08)
	struct FKey *8bfca62be4; // 0x38(0x18)
	struct FKey *817a76d07a; // 0x50(0x18)
};

// ScriptStruct Engine.*a1a128a80a
// Size: 0x0c (Inherited: 0x00)
struct F*a1a128a80a {
	bool *6c01abfcaf; // 0x00(0x01)
	bool *19147f28ac; // 0x01(0x01)
	bool *ef9d168161; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SampleRate; // 0x04(0x04)
	float Length; // 0x08(0x04)
};

// ScriptStruct Engine.*eba0387818
// Size: 0x20 (Inherited: 0x00)
struct F*eba0387818 {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*2f74b1064a
// Size: 0x20 (Inherited: 0x00)
struct F*2f74b1064a {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*3de13e6f68
// Size: 0x40 (Inherited: 0x00)
struct F*3de13e6f68 {
	struct FTransform Value; // 0x00(0x30)
	struct FName Name; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Engine.*ebc4d2c7a4
// Size: 0x10 (Inherited: 0x00)
struct F*ebc4d2c7a4 {
	struct FColor Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.*9324f78d73
// Size: 0x18 (Inherited: 0x00)
struct F*9324f78d73 {
	struct FVector Value; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName Name; // 0x10(0x08)
};

// ScriptStruct Engine.*b1c34afa28
// Size: 0x10 (Inherited: 0x00)
struct F*b1c34afa28 {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0x108 (Inherited: 0x30)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x30(0x18)
	struct FPoseLink Additive; // 0x48(0x18)
	int32 LODThreshold; // 0x60(0x04)
	float ActualAlpha; // 0x64(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Alpha; // 0x6c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x70(0x08)
	bool bAlphaBoolEnabled; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x80(0x50)
	struct FName AlphaCurveName; // 0xd0(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xd8(0x30)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xe0 (Inherited: 0x30)
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	struct FPoseLink Pose; // 0x30(0x18)
	struct FName CachePoseName; // 0x48(0x08)
	float GlobalWeight; // 0x50(0x04)
	char pad_54[0x8c]; // 0x54(0x8c)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xe0 (Inherited: 0x30)
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32 StateMachineIndexInClass; // 0x30(0x04)
	int32 MaxTransitionsPerFrame; // 0x34(0x04)
	bool bSkipFirstUpdateTransition; // 0x38(0x01)
	char pad_39[0xf]; // 0x39(0x0f)
	int32 CurrentState; // 0x48(0x04)
	float ElapsedTime; // 0x4c(0x04)
	char pad_50[0x90]; // 0x50(0x90)
};

// ScriptStruct Engine.*cf97ab221c
// Size: 0x30 (Inherited: 0x00)
struct F*cf97ab221c {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.*ba1893c2e8
// Size: 0xd0 (Inherited: 0x00)
struct F*ba1893c2e8 {
	char pad_0[0x90]; // 0x00(0x90)
	struct UBlendProfile* BlendProfile; // 0x90(0x08)
	char pad_98[0x38]; // 0x98(0x38)
};

// ScriptStruct Engine.AnimNode_SubInput
// Size: 0x68 (Inherited: 0x30)
struct FAnimNode_SubInput : FAnimNode_Base {
	char pad_30[0x38]; // 0x30(0x38)
};

// ScriptStruct Engine.AnimNode_SubInstance
// Size: 0xd8 (Inherited: 0x30)
struct FAnimNode_SubInstance : FAnimNode_Base {
	struct FPoseLink InPose; // 0x30(0x18)
	struct UClass* InstanceClass; // 0x48(0x08)
	bool bShouldReinitialize; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName ReinitializePropertyName; // 0x58(0x08)
	struct UAnimInstance* InstanceToRun; // 0x60(0x08)
	struct TArray<struct UProperty*> InstanceProperties; // 0x68(0x10)
	struct TArray<struct UProperty*> SubInstanceProperties; // 0x78(0x10)
	struct TArray<struct FName> SourcePropertyNames; // 0x88(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)
	struct UBoolProperty* ReinitializeProperty; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x78 (Inherited: 0x30)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	enum class *a0161ee846 DataSource; // 0x30(0x01)
	enum class *f07dfb15f6 EvaluatorMode; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 FramesToCachePose; // 0x34(0x04)
	char pad_38[0x38]; // 0x38(0x38)
	int32 CacheFramesRemaining; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x80 (Inherited: 0x30)
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x30(0x01)
	char pad_31[0x4f]; // 0x31(0x4f)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x50 (Inherited: 0x30)
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; // 0x30(0x18)
	struct FName CachePoseName; // 0x48(0x08)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; // 0x30(0x18)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x30(0x18)
};

// ScriptStruct Engine.*623f027255
// Size: 0x01 (Inherited: 0x00)
struct F*623f027255 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*e8e6462e26
// Size: 0x68 (Inherited: 0x58)
struct F*e8e6462e26 : FIndexedCurve {
	struct TArray<struct F*f045dcf049> Keys; // 0x58(0x10)
};

// ScriptStruct Engine.*f045dcf049
// Size: 0x10 (Inherited: 0x00)
struct F*f045dcf049 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Value; // 0x08(0x08)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FString *89aa5d0a45; // 0x08(0x10)
	struct FName MemberName; // 0x18(0x08)
	struct FGuid *13a0549680; // 0x20(0x10)
	bool *798c78b114; // 0x30(0x01)
	bool *eeceabe526; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Engine.*576d4bf882
// Size: 0x68 (Inherited: 0x00)
struct F*576d4bf882 {
	enum class EDrawDebugItemType *466d4d9ab0; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *97f5f8c460; // 0x04(0x0c)
	struct FVector *2b7740fc99; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
	float Size; // 0x38(0x04)
	int32 Segments; // 0x3c(0x04)
	struct FColor Color; // 0x40(0x04)
	bool *83a528f399; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LifeTime; // 0x48(0x04)
	float Thickness; // 0x4c(0x04)
	struct FString Message; // 0x50(0x10)
	struct FVector2D *6e300f30da; // 0x60(0x08)
};

// ScriptStruct Engine.*f1f408137c
// Size: 0x6a0 (Inherited: 0x520)
struct F*f1f408137c : F*29144ded29 {
	char pad_520[0x180]; // 0x520(0x180)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x58 (Inherited: 0x30)
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
};

// ScriptStruct Engine.*51c61d2a2b
// Size: 0x20 (Inherited: 0x00)
struct F*51c61d2a2b {
	struct FVector4 Plane; // 0x00(0x10)
	float PlaneOffsetOutside; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Engine.*dca3fa6f7e
// Size: 0x70 (Inherited: 0x50)
struct F*dca3fa6f7e : F*5a4f8d3f5c {
	struct FVector PlaneX; // 0x50(0x0c)
	struct FVector PlaneY; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Engine.*5a4f8d3f5c
// Size: 0x50 (Inherited: 0x00)
struct F*5a4f8d3f5c {
	struct FVector4 Plane; // 0x00(0x10)
	struct FVector2D PlaneOffset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVector4 PlaneRadiusXYInOut; // 0x20(0x10)
	struct FVector4 FadeRangeXYInOut; // 0x30(0x10)
	struct FVector2D UprightMulAdd; // 0x40(0x08)
	bool bAdditive; // 0x48(0x01)
	enum class *23fe9b94f9 SoftPlaneImportance; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Engine.*bc1b9b7610
// Size: 0xd0 (Inherited: 0x00)
struct F*bc1b9b7610 {
	char pad_0[0x4]; // 0x00(0x04)
	float BlurLevel; // 0x04(0x04)
	float DepthBlurPower; // 0x08(0x04)
	float DepthBlurBlackPoint; // 0x0c(0x04)
	float DepthBlurWhitePoint; // 0x10(0x04)
	float ScopeRadiusNear; // 0x14(0x04)
	float ScopeRadiusFar; // 0x18(0x04)
	float ScopeEllipseRatio; // 0x1c(0x04)
	char bReverseScopeMask : 1; // 0x20(0x01)
	char bReticleExtendTextureBorder : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float ReticleAngularSize; // 0x24(0x04)
	struct FVector2D ReticleTextureCenter; // 0x28(0x08)
	float ReticleGamma; // 0x30(0x04)
	struct FLinearColor ReticleTint; // 0x34(0x10)
	float LensDistortion; // 0x44(0x04)
	float LensCA; // 0x48(0x04)
	float OuterBrightness; // 0x4c(0x04)
	struct FLinearColor LensTint; // 0x50(0x10)
	float ParallaxMovementScale; // 0x60(0x04)
	float ParallaxRadiusScale; // 0x64(0x04)
	struct FVector ScopeCenterNear; // 0x68(0x0c)
	struct FVector ScopeCenterFar; // 0x74(0x0c)
	struct FVector ReticleCenter; // 0x80(0x0c)
	struct FVector ReticleUp; // 0x8c(0x0c)
	struct FVector2D ReticleRect; // 0x98(0x08)
	struct UTexture2D* ReticleTexture; // 0xa0(0x08)
	float ReticleDirtPower; // 0xa8(0x04)
	float ReticleDirtSize; // 0xac(0x04)
	struct UTexture2D* ReticleDirtTexture; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FVector4 ReticleBrightSceneVisibilityMultipliers; // 0xc0(0x10)
};

