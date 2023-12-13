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

// Enum Engine.*ee1c915069
enum class *ee1c915069 : uint8 {
	*c2fbe365da,
	*a457181069,
	*19770c61f2,
	*14dc7ac01e,
	*0939da74d3,
	*ee1c915069_MAX,
};

// Enum Engine.*838c73adf2
enum class *838c73adf2 : uint8 {
	*e2e261ed85,
	*3de99ad342,
	*a4f7a3a5fd,
	*269c68e995,
	*ea7fdfd54c,
	*838c73adf2_MAX,
};

// Enum Engine.*abb37aa6f0
enum class *abb37aa6f0 : uint8 {
	*1ce201244d,
	*7a815b83ec,
	*71c2f1580f,
	*6d59e6b9bc,
	*6325aa9d47,
	*abb37aa6f0_MAX,
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

// Enum Engine.*d64330bf40
enum class *d64330bf40 : uint8 {
	*c582237501,
	*27b795d9e7,
	*e8145678d7,
	*abb4a30c4a,
	*48cfe66112,
	*41ef850d29,
	*93efe6cea9,
	*d64330bf40_MAX,
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

// Enum Engine.*b1be654dc6
enum class *b1be654dc6 : uint8 {
	*ddc6e63a7d,
	*87f5cee26e,
	*ab2d78561f,
	*ee7fdcd18d,
	*8958c58629,
	*4ccb780f9b,
	*b1be654dc6_MAX,
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

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	KeepRelative,
	KeepWorld,
	SnapToTarget,
	EAttachmentRule_MAX,
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	KeepRelativeOffset,
	KeepWorldPosition,
	SnapToTarget,
	SnapToTargetIncludingScale,
	EAttachLocation_MAX,
};

// Enum Engine.*ecdd115207
enum class *ecdd115207 : uint8 {
	*5ceb13263b,
	*b1e4d4f1cd,
	*a74da8f7a2,
	*ecdd115207_MAX,
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None,
	ROLE_SimulatedProxy,
	ROLE_AutonomousProxy,
	ROLE_Authority,
	ROLE_MAX,
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

// Enum Engine.*d729d3c5a5
enum class *d729d3c5a5 : uint8 {
	*5612ab5bab,
	*af910b7de9,
	*954fa4e4f3,
	*49fb49c247,
	*d729d3c5a5_MAX,
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

// Enum Engine.*2387aac912
enum class *2387aac912 : uint8 {
	*fc000753ed,
	*713ca3da5e,
	*43f1a920d1,
	*2387aac912_MAX,
};

// Enum Engine.*87733dbfe1
enum class *87733dbfe1 : uint8 {
	*3b7306b396,
	*b3c8d25315,
	*51d523f8be,
	*a157dee989,
	*87733dbfe1_MAX,
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	Disabled,
	PlacedInWorld,
	Spawned,
	PlacedInWorldOrSpawned,
	EAutoPossessAI_MAX,
};

// Enum Engine.*1789b5db7d
enum class *1789b5db7d : uint8 {
	*e42dcf6577,
	*1b1e2f7fea,
	*e7076a8920,
	*e8b186081a,
	*be34ec0698,
	*45d1bcba06,
	*1789b5db7d_MAX,
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

// Enum Engine.*c276e29a27
enum class *c276e29a27 : uint8 {
	*615626cf02,
	*f21941e426,
	*fd39bda093,
	*1f3c3cc136,
	*3d13abc594,
	*c276e29a27_MAX,
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	Default,
	ForceCPUAndGPU,
	EMeshBufferAccess_MAX,
};

// Enum Engine.*16f5f5a607
enum class *16f5f5a607 : uint8 {
	*561e3fe41b,
	*8aefeb02ca,
	*30f1631408,
	*16f5f5a607_MAX,
};

// Enum Engine.*f4b7eb4f8a
enum class *f4b7eb4f8a : uint8 {
	*6d9f031871,
	*0995e6b30f,
	*a5181abee0,
	*9dc2d48064,
	*f4b7eb4f8a_MAX,
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

// Enum Engine.*7f4f622ab6
enum class *7f4f622ab6 : uint8 {
	*e45f2beb12,
	*47d17dd67b,
	*912011cdb8,
	*14efd7f8e8,
	*f1ec815680,
	*7f4f622ab6_MAX,
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

// Enum Engine.*2ebfe559fe
enum class *2ebfe559fe : uint8 {
	*cb9fc7b277,
	*d034d58df8,
	*aa12a0cdd6,
	*ce02820bb7,
	*34a3fe6f53,
	*8654dcabb3,
	*4d3a4d2790,
	*cde2af9971,
	*2ebfe559fe_MAX,
};

// Enum Engine.*07a6ada526
enum class *07a6ada526 : uint8 {
	*d9ab958c5d,
	*a2b2b7d5a4,
	*e42fde93e3,
	*07a6ada526_MAX,
};

// Enum Engine.*2541884b30
enum class *2541884b30 : uint8 {
	*dbcf8a5710,
	*276dffbd15,
	*9fd087d6d9,
	*81946b0be3,
	*2541884b30_MAX,
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	NoCollision,
	QueryOnly,
	PhysicsOnly,
	QueryAndPhysics,
	ECollisionEnabled_MAX,
};

// Enum Engine.*6876c7e1da
enum class *6876c7e1da : uint8 {
	*881581614f,
	*bbbbd9c9b3,
	*7d164f9b57,
	*9cfa959b12,
	*e63b5ee958,
	*986fe49a08,
	*6876c7e1da_MAX,
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 {
	Normal,
	Sensitive,
	Custom,
	ESleepFamily_MAX,
};

// Enum Engine.*cb41f937c0
enum class *cb41f937c0 : uint8 {
	*758721f032,
	*4d3d7807b3,
	*4b758d9978,
	*cb41f937c0_MAX,
};

// Enum Engine.*d8acf2a06f
enum class *d8acf2a06f : uint8 {
	*52d9c61983,
	*cc097182af,
	*8fb990ea9f,
	*e0ada5d96e,
	*d8acf2a06f_MAX,
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore,
	ECR_Overlap,
	ECR_Block,
	ECR_MAX,
};

// Enum Engine.*f4c46f1492
enum class *f4c46f1492 : uint8 {
	*dafae44966,
	*dfcbab1f4c,
	*1e4a57bdbf,
	*f4c46f1492_MAX,
};

// Enum Engine.*e2ef4bc81c
enum class *e2ef4bc81c : uint8 {
	*b9bed6e224,
	*bbba609a7c,
	*875c88bfcc,
	*d645b9e56c,
	*e2ef4bc81c_MAX,
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

// Enum Engine.*321f70c77d
enum class *321f70c77d : uint8 {
	*831fe833c3,
	*bacc0a11b8,
	*224415890f,
	*38c71f71d1,
	*321f70c77d_MAX,
};

// Enum Engine.*8d8fbd9abe
enum class *8d8fbd9abe : uint8 {
	*35aa69cb2b,
	*4023f23659,
	*2ff21cb152,
	*1f2889409c,
	*6f4d960753,
	*0126241ae1,
	*47c37d24e5,
	*8d8fbd9abe_MAX,
};

// Enum Engine.*410dbd0c18
enum class *410dbd0c18 : uint8 {
	*1cbb58c7d1,
	*3fac682d76,
	*7c6ec1794d,
	*65479469d9,
	*648f7d61cc,
	*410dbd0c18_MAX,
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

// Enum Engine.*60542ade72
enum class *60542ade72 : uint8 {
	*7f518017d8,
	*0ff4c59f79,
	*1aed8e678c,
	*18b5aed171,
	*60542ade72_MAX,
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

// Enum Engine.*bd668c4815
enum class *bd668c4815 : uint8 {
	*4d587e360a,
	*5a0baaeb3b,
	*bc79989993,
	*cafe1f8857,
	*bd668c4815_MAX,
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	Force8BitsPerChannel,
	Default,
	HighPrecisionNormals,
	Force16BitsPerChannel,
	EGBufferFormat_MAX,
};

// Enum Engine.*307db859c9
enum class *307db859c9 : uint8 {
	*e4671079dc,
	*05dd22fe8f,
	*ed301bc3e2,
	*e7076bfabf,
	*307db859c9_MAX,
};

// Enum Engine.*e151b8259b
enum class *e151b8259b : uint8 {
	*d09e7d7086,
	*a72af3eb21,
	*758fb7a2b6,
	*594aa54efa,
	*b3a80a9874,
	*995cc2c1c7,
	*c6d0f12ca0,
	*117db02a97,
	*6698174744,
	*057b5f16eb,
	*94ccc167ec,
	*178f28abf6,
	*e151b8259b_MAX,
};

// Enum Engine.*e8fba6f159
enum class *e8fba6f159 : uint8 {
	*92fc68592c,
	*0073a0df75,
	*2fd4e6c8ef,
	*ff42c5f4e6,
	*e8fba6f159_MAX,
};

// Enum Engine.*1850b152a2
enum class *1850b152a2 : uint8 {
	*6587dbdfc9,
	*a7edf4a93d,
	*107bdd5935,
	*1850b152a2_MAX,
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

// Enum Engine.*d18862b868
enum class *d18862b868 : uint8 {
	*36fb8ea021,
	*d9b0a758cb,
	*22cfd7ca41,
	*106873389f,
	*d18862b868_MAX,
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

// Enum Engine.*f4d37bdffc
enum class *f4d37bdffc : uint8 {
	*520ab9d47c,
	*c5fa5b9620,
	*592d94c6a8,
	*f4d37bdffc_MAX,
};

// Enum Engine.*5e872d5d99
enum class *5e872d5d99 : uint8 {
	*e572eebe7c,
	*6d1f2f193c,
	*b2a469c610,
	*6174633408,
	*5e872d5d99_MAX,
};

// Enum Engine.*4c2c3fa7ba
enum class *4c2c3fa7ba : uint8 {
	*d2d80e6222,
	*14ba3811a1,
	*556f6b4b57,
	*4c2c3fa7ba_MAX,
};

// Enum Engine.*b7f71e80c5
enum class *b7f71e80c5 : uint8 {
	*29dab4e51a,
	*6ca4bed051,
	*c81022869c,
	*5ebb7b54d0,
	*b7f71e80c5_MAX,
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV,
	AspectRatio_MaintainXFOV,
	AspectRatio_MajorAxisFOV,
	AspectRatio_MAX,
};

// Enum Engine.*94ed3382ed
enum class *94ed3382ed : uint8 {
	*16b4bf2d4f,
	*37ea0c59b7,
	*7089682d37,
	*30516f7d41,
	*a1943da84e,
	*aad0ed38a7,
	*7569ecadab,
	*a70fc0493b,
	*044ff6247d,
	*c335b4050e,
	*40786280ed,
	*6850cf918b,
	*0067876b49,
	*0622e872c9,
	*4b5eaa37c6,
	*5f2f7beb33,
	*36c6aadc6a,
	*5fafe43290,
	*50575d4754,
	*9b52fa0386,
	*ee9a13e0bc,
	*b51d7f433a,
	*18303e7d7f,
	*679a75cc92,
	*bb4f91e26d,
	*775f8cb294,
	*2acb0c391b,
	*5b59a7db75,
	*7bbae7bed3,
	*4e65f1a6b9,
	*067c7daf7f,
	*4b00b33323,
	*94ed3382ed_MAX,
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

// Enum Engine.*5d50154142
enum class *5d50154142 : uint8 {
	*68b1534d03,
	*36e4a30cbf,
	*d831381b97,
	*d6ca94b6ad,
	*5d50154142_MAX,
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

// Enum Engine.*c1cb1bc160
enum class *c1cb1bc160 : uint8 {
	*9611c56c77,
	*a0bbfcb3b8,
	*67e05d6a9f,
	*c1cb1bc160_MAX,
};

// Enum Engine.*fcf3403ee5
enum class *fcf3403ee5 : uint8 {
	*672ef5a988,
	*1969dbfe9f,
	*17e5f7d364,
	*628de6a2f6,
	*78c76938d8,
	*fcf3403ee5_MAX,
};

// Enum Engine.*92a8d5bca4
enum class *92a8d5bca4 : uint8 {
	*4b331579dd,
	*46f3668f5a,
	*9ee086853f,
	*19f29e5e64,
	*92a8d5bca4_MAX,
};

// Enum Engine.*7c68fc9df5
enum class *7c68fc9df5 : uint8 {
	*bb1280bbb6,
	*bce31ae868,
	*614d1ee823,
	*9b852dd291,
	*c76077951f,
	*1268647674,
	*c511f3179b,
	*063e83d56a,
	*061b4de01b,
	*7f3a210603,
	*4bfe806325,
	*c5f961e34b,
	*5a4d43f423,
	*37b04ad33b,
	*7c68fc9df5_MAX,
};

// Enum Engine.*44fced22f6
enum class *44fced22f6 : uint8 {
	*c0bca45384,
	*204c342c9f,
	*ce8f968039,
	*6e8467db59,
	*845c985ff0,
	*4da8210618,
	*a84de9b501,
	*440d5d9c5c,
	*9752a59ffc,
	*44fced22f6_MAX,
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

// Enum Engine.*d20a297015
enum class *d20a297015 : uint8 {
	*6fefd4a21a,
	*545440b71a,
	*497ca4c710,
	*d20a297015_MAX,
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	AllLODs,
	SpecificLOD,
	CalculateLOD,
	LowestDetailLOD,
	EMeshLODSelectionType_MAX,
};

// Enum Engine.*9e97596d48
enum class *9e97596d48 : uint8 {
	*af2000b069,
	*1d1d1315fc,
	*6ca46a5838,
	*087cddb2ad,
	*9e97596d48_MAX,
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

// Enum Engine.*e33f967072
enum class *e33f967072 : uint8 {
	*0d453a9c36,
	*c8fc82c27f,
	*6358d979cb,
	*c1e7abb7d3,
	*f1516744a0,
	*124440b683,
	*7f72d63dfd,
	*25bca1d1b0,
	*98198acf0f,
	*46e77b488c,
	*ad167d3853,
	*e33f967072_MAX,
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	No,
	Yes,
	EvenIfNotCollidable,
	DontExport,
	EHasCustomNavigableGeometry_MAX,
};

// Enum Engine.*7235c251e5
enum class *7235c251e5 : uint8 {
	*0b5c803fb2,
	*03ae4f1466,
	*52db16300e,
	*26c140d54c,
	*7235c251e5_MAX,
};

// Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8 {
	Reduction,
	Proxy,
	EStaticMeshLODType_MAX,
};

// Enum Engine.*a790f9254b
enum class *a790f9254b : uint8 {
	*fb32836e6e,
	*9890876b09,
	*15237cfe1b,
	*a790f9254b_MAX,
};

// Enum Engine.*783144718f
enum class *783144718f : uint8 {
	*ad68094206,
	*1fe5a5dfc3,
	*a0dcb1140f,
	*c5a4c35db7,
	*4e3b031f48,
	*7b428ed706,
	*ccdcf2ba27,
	*230b34916d,
	*783144718f_MAX,
};

// Enum Engine.*c64235c2c9
enum class *c64235c2c9 : uint8 {
	*49f9f0b74c,
	*2075fe1050,
	*542c4be247,
	*66844b6202,
	*096c10a70a,
	*6bbb60b2e4,
	*c64235c2c9_MAX,
};

// Enum Engine.*e0edfbd9de
enum class *e0edfbd9de : uint8 {
	*29905dafea,
	*48c870e2d3,
	*a0e25e182b,
	*a3a4bb29a5,
	*e0edfbd9de_MAX,
};

// Enum Engine.*86892117bc
enum class *86892117bc : uint8 {
	*b0474e94cb,
	*f9219aa2f6,
	*f78be87d86,
	*4788e2c141,
	*ed546a945a,
	*1f278c87b2,
	*fc56a463ed,
	*86892117bc_MAX,
};

// Enum Engine.*fa270931cd
enum class *fa270931cd : uint8 {
	*357fb19c4b,
	*258ca94a02,
	*23e2d9882b,
	*5808c30a8f,
	*47244f3a10,
	*4f57b1e0f5,
	*14c902c4aa,
	*c8dabcaf05,
	*7e0fd11bb4,
	*ce72c0fc82,
	*e2fd5a203e,
	*b5a8a6f19b,
	*b8451b0841,
	*79acae0b6c,
	*e7c5418631,
	*5e578ca2a0,
	*19909418ed,
	*780fff0e67,
	*2366517d44,
	*62799c223c,
	*b17252b773,
	*a9f13b13d6,
	*e596e48726,
	*5f6d2cd16a,
	*fa270931cd_MAX,
};

// Enum Engine.*40de190205
enum class *40de190205 : uint8 {
	*9352064a6c,
	*a42d2e2737,
	*419f311ea7,
	*d730d7a336,
	*a47f880659,
	*5357df5152,
	*40de190205_MAX,
};

// Enum Engine.*bab6308d38
enum class *bab6308d38 : uint8 {
	*f868ad7a0b,
	*2d35ff52fd,
	*273ba714b4,
	*0bb646fe27,
	*cee0959fee,
	*bab6308d38_MAX,
};

// Enum Engine.EHBAOBlurRadius
enum class EHBAOBlurRadius : uint8 {
	AOBR_BlurRadius0,
	AOBR_BlurRadius2,
	AOBR_BlurRadius4,
	AOBR_MAX,
};

// Enum Engine.*64b7408e39
enum class *64b7408e39 : uint8 {
	*602fde519f,
	*6019f8573b,
	*b638fe9451,
	*64b7408e39_MAX,
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram,
	AEM_Basic,
	AEM_MAX,
};

// Enum Engine.*833e8192b7
enum class *833e8192b7 : uint8 {
	*228cbf321f,
	*60dc0d6273,
	*0bddb9aebb,
	*47637bb288,
	*bdf003f15e,
	*833e8192b7_MAX,
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

// Enum Engine.*34956799e0
enum class *34956799e0 : uint8 {
	*41a3d3d862,
	*27c018ceab,
	*8e633bcbb1,
	*34956799e0_MAX,
};

// Enum Engine.*c468688427
enum class *c468688427 : uint8 {
	*f16e02bad5,
	*7fcde91290,
	*04691ca03e,
	*c468688427_MAX,
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	Start,
	Update,
	Stop,
	EDynamicForceFeedbackAction_MAX,
};

// Enum Engine.*081905eef7
enum class *081905eef7 : uint8 {
	*bca50e8515,
	*82a73e9fea,
	*1986d2223f,
	*4499dc5e67,
	*081905eef7_MAX,
};

// Enum Engine.*93c77fd157
enum class *93c77fd157 : uint8 {
	*19bec30d7f,
	*55167797e8,
	*c9a540a89d,
	*6b333c35e7,
	*93c77fd157_MAX,
};

// Enum Engine.*f6de29b1ba
enum class *f6de29b1ba : uint8 {
	*1be531979c,
	*00951e3af5,
	*eb518e8299,
	*f94477c5af,
	*d528726cbf,
	*f6de29b1ba_MAX,
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

// Enum Engine.*239f90df3d
enum class *239f90df3d : uint8 {
	*191f62d517,
	*8b1b446ed6,
	*50215bb191,
	*5a8ac2bf47,
	*239f90df3d_MAX,
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	BothWays,
	LeftToRight,
	RightToLeft,
	ENavLinkDirection_MAX,
};

// Enum Engine.*43fe6982b9
enum class *43fe6982b9 : uint8 {
	*4613fad02d,
	*96288edb67,
	*50c12fa7fe,
	*2e56f40171,
	*43fe6982b9_MAX,
};

// Enum Engine.*f6a419821d
enum class *f6a419821d : uint8 {
	*718ae57540,
	*0adf20d1f1,
	*9989dc5d3d,
	*f173d8b313,
	*f6a419821d_MAX,
};

// Enum Engine.*f8a90a4542
enum class *f8a90a4542 : uint8 {
	*7b73c1025d,
	*097fea19f8,
	*93e296f0bd,
	*f8a90a4542_MAX,
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

// Enum Engine.*22a8a566b4
enum class *22a8a566b4 : uint8 {
	*608de8cd27,
	*cb8f3619ed,
	*cf19aa9b9b,
	*70bcef3d89,
	*22a8a566b4_MAX,
};

// Enum Engine.*922d61db52
enum class *922d61db52 : uint8 {
	*8f8b36d7fd,
	*578e128aea,
	*e968d8ad19,
	*032587158e,
	*0ad1c12c7e,
	*ef0be603d3,
	*cf73374ca0,
	*c00ffbbaf8,
	*197fce5926,
	*922d61db52_MAX,
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

// Enum Engine.*e010c2fbb2
enum class *e010c2fbb2 : uint8 {
	*de915cf716,
	*e6cdd6d399,
	*e0640508f5,
	*d066b235b7,
	*e010c2fbb2_MAX,
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None,
	AAT_LocalSpaceBase,
	AAT_RotationOffsetMeshSpace,
	AAT_MAX,
};

// Enum Engine.*b396554497
enum class *b396554497 : uint8 {
	*c27cb92594,
	*c29b63d692,
	*f9b38cf347,
	*68675394cd,
	*b396554497_MAX,
};

// Enum Engine.*627034402d
enum class *627034402d : uint8 {
	*6718d17c6a,
	*c9704a20a9,
	*f8c3386290,
	*4c74b568b2,
	*8cd24b2f65,
	*627034402d_MAX,
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

// Enum Engine.*c02995f596
enum class *c02995f596 : uint8 {
	*8e633be381,
	*89d4b66b55,
	*f1ca67f14d,
	*4cee6a459f,
	*16ae029f10,
	*cfe156385a,
	*64b0ec8c2c,
	*c02995f596_MAX,
};

// Enum Engine.*df5e59bf9d
enum class *df5e59bf9d : uint8 {
	*23a618a0e8,
	*dd3818c130,
	*bb3bb318f6,
	*3653f47c12,
	*d9620c3518,
	*32cc95f075,
	*8a33f298f5,
	*df5e59bf9d_MAX,
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

// Enum Engine.*2578c2f9db
enum class *2578c2f9db : uint8 {
	*e54e9e947c,
	*afc203d0ff,
	*aff7a751d2,
	*b0f7a64903,
	*951f149d37,
	*2578c2f9db_MAX,
};

// Enum Engine.*0accfd5352
enum class *0accfd5352 : uint8 {
	*d40408cacd,
	*508e1391f8,
	*fcfbfb16d0,
	*9525e15300,
	*227e881fb0,
	*0accfd5352_MAX,
};

// Enum Engine.*8e285791d6
enum class *8e285791d6 : uint8 {
	*5eb5dcdd8f,
	*8f4f90d1de,
	*5c931a0c80,
	*b513c818a4,
	*b30ceba230,
	*8e285791d6_MAX,
};

// Enum Engine.*46b4b581d7
enum class *46b4b581d7 : uint8 {
	*b490602762,
	*f404f10dde,
	*c765353093,
	*4d01cc05c1,
	*46b4b581d7_MAX,
};

// Enum Engine.*5d3b2e9b66
enum class *5d3b2e9b66 : uint8 {
	*39e4af7f90,
	*bb2f06e6c2,
	*884701da85,
	*e234ba215a,
	*5d3b2e9b66_MAX,
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

// Enum Engine.*462f41d1e3
enum class *462f41d1e3 : uint8 {
	*788a4c752c,
	*8e82009d40,
	*50af2484d6,
	*d226533518,
	*462f41d1e3_MAX,
};

// Enum Engine.ESplineDecalActorSelector
enum class ESplineDecalActorSelector : uint8 {
	Use_1,
	Use_2,
	Use_3,
	Use_4,
	None,
	ESplineDecalActorSelector_MAX,
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	Animation,
	Skeleton,
	AnimationScaled,
	AnimationRelative,
	EBoneTranslationRetargetingMode_MAX,
};

// Enum Engine.*f38b07324a
enum class *f38b07324a : uint8 {
	*ca2142e013,
	*b3d9e65ecf,
	*c5d15221eb,
	*819a6a83be,
	*f38b07324a_MAX,
};

// Enum Engine.*764e603395
enum class *764e603395 : uint8 {
	*e29abca838,
	*67e37aada0,
	*08244d43b6,
	*f8b6acfbc0,
	*29c3cbe662,
	*1d8c058cb0,
	*8c1190acbe,
	*51bc336440,
	*764e603395_MAX,
};

// Enum Engine.*93caa0daec
enum class *93caa0daec : uint8 {
	*14ae9c2464,
	*7e71b4786e,
	*1a63c9843b,
	*5e8f9bc7bd,
	*93caa0daec_MAX,
};

// Enum Engine.*5c83c771ea
enum class *5c83c771ea : uint8 {
	*65426f1376,
	*bf31fb3eec,
	*9a78a59aa4,
	*b346ff2fa9,
	*5c83c771ea_MAX,
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

// Enum Engine.*a4f623669f
enum class *a4f623669f : uint8 {
	*7616974118,
	*4a52e0e329,
	*5626fe34cd,
	*a4f623669f_MAX,
};

// Enum Engine.*3f7d477fb4
enum class *3f7d477fb4 : uint8 {
	*f24c4f8783,
	*5e7b76a955,
	*450167895c,
	*b99dfd5d5d,
	*2f18aa56c4,
	*3f7d477fb4_MAX,
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

// Enum Engine.*e07fd1573d
enum class *e07fd1573d : uint8 {
	*bf436cdd2c,
	*430ea1e0d2,
	*8f66675070,
	*e07fd1573d_MAX,
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

// Enum Engine.*b8ba79008c
enum class *b8ba79008c : uint8 {
	*502aa18817,
	*c203474f8b,
	*d6e23078c2,
	*b8ba79008c_MAX,
};

// Enum Engine.*ca26ffcdd5
enum class *ca26ffcdd5 : uint8 {
	*0cd7d4c1b9,
	*ee5bf0a555,
	*33e205ad95,
	*2eb89f9423,
	*ca26ffcdd5_MAX,
};

// Enum Engine.*05c097b6a7
enum class *05c097b6a7 : uint8 {
	*daf319507b,
	*bdcf6a76a6,
	*7f68b56b68,
	*05c097b6a7_MAX,
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

// Enum Engine.*196b0be2e8
enum class *196b0be2e8 : uint8 {
	*c3735c2fbf,
	*ba68293b69,
	*eb4ef305ec,
	*90355249f1,
	*b2c78a109c,
	*af81969ecd,
	*1a7579401b,
	*7b687b379d,
	*9b0330629a,
	*b36ba85486,
	*3e460df163,
	*196b0be2e8_MAX,
};

// Enum Engine.*72e586ce54
enum class *72e586ce54 : uint8 {
	*ab5284767c,
	*578981e8d9,
	*1236d58f95,
	*88e4e86dd1,
	*72e586ce54_MAX,
};

// Enum Engine.*81f0baed38
enum class *81f0baed38 : uint8 {
	*8fe228ded5,
	*21583c49a8,
	*14689764f0,
	*a44ae8c2ef,
	*81f0baed38_MAX,
};

// Enum Engine.*b37b60339c
enum class *b37b60339c : uint8 {
	*7302db9013,
	*72797df8c4,
	*0d416c30eb,
	*3a1c6dd42e,
	*4a6fe9812d,
	*91ce14d444,
	*b37b60339c_MAX,
};

// Enum Engine.*f13c8e8821
enum class *f13c8e8821 : uint8 {
	*9cc50341c4,
	*b9cc278cf6,
	*843ebe420a,
	*fa29419ad1,
	*f13c8e8821_MAX,
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

// Enum Engine.*94eb13dd26
enum class *94eb13dd26 : uint8 {
	*4258b86531,
	*d028739449,
	*2864c96f45,
	*22a81ed7d4,
	*821622360a,
	*94eb13dd26_MAX,
};

// Enum Engine.*f608644cf4
enum class *f608644cf4 : uint8 {
	*df51075157,
	*dc989c2638,
	*107018f456,
	*ed16f95e92,
	*f608644cf4_MAX,
};

// Enum Engine.*1550a9d5f9
enum class *1550a9d5f9 : uint8 {
	*438c9cec76,
	*c7cb6592ef,
	*99743e4aaa,
	*1550a9d5f9_MAX,
};

// Enum Engine.*cdea9c548d
enum class *cdea9c548d : uint8 {
	*d0a9afd9d9,
	*97b3cd7e45,
	*5836d1ddf1,
	*29ef056df5,
	*cdea9c548d_MAX,
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

// Enum Engine.*76dbde8383
enum class *76dbde8383 : uint8 {
	*fa6eca9750,
	*46b38c6ce4,
	*0246162477,
	*76dbde8383_MAX,
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

// Enum Engine.*da3800e75b
enum class *da3800e75b : uint8 {
	*6ff7c35665,
	*badc399c73,
	*e61e659378,
	*103659b673,
	*da3800e75b_MAX,
};

// Enum Engine.*7807b0b342
enum class *7807b0b342 : uint8 {
	*704dd14da7,
	*2844f4369b,
	*a7fd2815b7,
	*7807b0b342_MAX,
};

// Enum Engine.*85e8c0bd81
enum class *85e8c0bd81 : uint8 {
	*56caa6a56c,
	*5ff5330eb1,
	*126f8306f9,
	*85e8c0bd81_MAX,
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	MontageLength,
	Duration,
	EMontagePlayReturnType_MAX,
};

// Enum Engine.*21f457765c
enum class *21f457765c : uint8 {
	*c5fe48add1,
	*91316e880b,
	*083b4e3434,
	*286cc97170,
	*1808eff047,
	*21f457765c_MAX,
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

// Enum Engine.*bd3e9ff45e
enum class *bd3e9ff45e : uint8 {
	*b987265f9f,
	*211b841f95,
	*960131502b,
	*e375624727,
	*ef59689955,
	*ec36e04d7c,
	*87d06da7c6,
	*bd3e9ff45e_MAX,
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

// Enum Engine.*6bd8891b9c
enum class *6bd8891b9c : uint8 {
	*e9818eae78,
	*0c85286944,
	*0c94440298,
	*c53a82ed9c,
	*6bd8891b9c_MAX,
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

// Enum Engine.*62a2518dba
enum class *62a2518dba : uint8 {
	*25cfb51135,
	*26af3cd20e,
	*7aaba8c201,
	*62a2518dba_MAX,
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

// Enum Engine.*c398a565cf
enum class *c398a565cf : uint8 {
	*f9cbb92ab5,
	*e2a7eedb0f,
	*ec9b9185c0,
	*c398a565cf_MAX,
};

// Enum Engine.*dcab1bab62
enum class *dcab1bab62 : uint8 {
	*0c4b6725ac,
	*7edfe861ea,
	*3f13ea2ac7,
	*97c8ed8e6f,
	*5c3c79f74b,
	*2071728cd1,
	*e1f29d1cdf,
	*dba07b3771,
	*dcab1bab62_MAX,
};

// Enum Engine.*04d6ac5fa9
enum class *04d6ac5fa9 : uint8 {
	*ae1b03ed0e,
	*39749f6f05,
	*2c639c8fcb,
	*44c2848667,
	*c8e91f9945,
	*88b4d4445b,
	*04d6ac5fa9_MAX,
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

// Enum Engine.*dcbc474dce
enum class *dcbc474dce : uint8 {
	*39e0c2b950,
	*6b3a39bb34,
	*edb7dca6b2,
	*d796a3dfca,
	*dcbc474dce_MAX,
};

// Enum Engine.*4472c1addc
enum class *4472c1addc : uint8 {
	*fd93cf02b4,
	*7115fa0836,
	*a198b79d7b,
	*d1195316e0,
	*4472c1addc_MAX,
};

// Enum Engine.*e54c151ccf
enum class *e54c151ccf : uint8 {
	*10c5d32014,
	*59ae99f5b4,
	*088ad50891,
	*b55521fce9,
	*12a56805fe,
	*13c88568a3,
	*e54c151ccf_MAX,
};

// Enum Engine.*a01f88b755
enum class *a01f88b755 : uint8 {
	*700b4fbaaf,
	*bbe77c2d4b,
	*63ffaf3c52,
	*73935ae54b,
	*6a86c4c08b,
	*19a645349f,
	*67a99b9c32,
	*a01f88b755_MAX,
};

// Enum Engine.*35ca2328eb
enum class *35ca2328eb : uint8 {
	*80e1da9adf,
	*656e2c483b,
	*e4ab006fe9,
	*5c0c3f05ad,
	*13b621a1db,
	*8f5b764385,
	*35ca2328eb_MAX,
};

// Enum Engine.*c24285bf50
enum class *c24285bf50 : uint8 {
	*0825ffb1a9,
	*50dc82610b,
	*56ece80dc5,
	*fc381b4c32,
	*c24285bf50_MAX,
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

// Enum Engine.*b351749ddd
enum class *b351749ddd : uint8 {
	*777157785b,
	*6cd7449d6b,
	*812c38703a,
	*ddf7b8abb7,
	*b351749ddd_MAX,
};

// Enum Engine.*994c03ffeb
enum class *994c03ffeb : uint8 {
	*ca8b198353,
	*622bddb3fa,
	*bc1448bd01,
	*cd8568f72f,
	*994c03ffeb_MAX,
};

// Enum Engine.*1614f8b52b
enum class *1614f8b52b : uint8 {
	*2515a04e01,
	*066fd202d3,
	*f1d04417f1,
	*e6af53f9f4,
	*28e861ddf3,
	*50a8b53276,
	*e98c564452,
	*1614f8b52b_MAX,
};

// Enum Engine.*b8c9672abe
enum class *b8c9672abe : uint8 {
	*dc54cd4c3b,
	*bcb370ec59,
	*1574c3177e,
	*cc3bb138b5,
	*1e07907906,
	*b8c9672abe_MAX,
};

// Enum Engine.*603fd8e08d
enum class *603fd8e08d : uint8 {
	*b1a64b5db2,
	*346172e22f,
	*55db9a393e,
	*6b7bf2d115,
	*603fd8e08d_MAX,
};

// Enum Engine.*0e8e66d5fd
enum class *0e8e66d5fd : uint8 {
	*51de1f98be,
	*6d71c8a5f7,
	*7ce5d8f15e,
	*b204b8fe13,
	*0e8e66d5fd_MAX,
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	Blend,
	UseA,
	UseB,
	EMaterialAttributeBlend_MAX,
};

// Enum Engine.*b24aa0fa24
enum class *b24aa0fa24 : uint8 {
	*a704a0d9fb,
	*97551a3420,
	*84df5e283e,
	*9351e90f17,
	*b24aa0fa24_MAX,
};

// Enum Engine.*cb0aa7aeb7
enum class *cb0aa7aeb7 : uint8 {
	*3af47a1fba,
	*e1a4524465,
	*87cc91a6e8,
	*03aa12434a,
	*209ad91d68,
	*cb0aa7aeb7_MAX,
};

// Enum Engine.*93911cb5e4
enum class *93911cb5e4 : uint8 {
	*ead84b20fc,
	*cc1898f9f8,
	*313b44bd54,
	*134736730d,
	*54b91ab64d,
	*93911cb5e4_MAX,
};

// Enum Engine.*ac8c685758
enum class *ac8c685758 : uint8 {
	*ef6d0d29fe,
	*cc002b40ee,
	*b219bad6be,
	*b64c4e9cba,
	*dc5792ccc9,
	*2625da8d60,
	*07ee33b518,
	*a3b1ae1fdc,
	*766af438e2,
	*50a3b0c898,
	*ac8c685758_MAX,
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

// Enum Engine.*cfcb7592fe
enum class *cfcb7592fe : uint8 {
	*1810c2e157,
	*fa064232d0,
	*d2f3f6f1ac,
	*cfcb7592fe_MAX,
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

// Enum Engine.*99d47c34bb
enum class *99d47c34bb : uint8 {
	*a06aeeda06,
	*dec3f2867c,
	*87fa62ace9,
	*98279052be,
	*99d47c34bb_MAX,
};

// Enum Engine.*81ca03137a
enum class *81ca03137a : uint8 {
	*d07446b815,
	*4a11c3dc38,
	*219fc75663,
	*81ca03137a_MAX,
};

// Enum Engine.*66abcb0d1e
enum class *66abcb0d1e : uint8 {
	*14b5ef4f0a,
	*f10a3fc31a,
	*33962acd4f,
	*9f770a10af,
	*9c6dc98885,
	*5b561b48e6,
	*f2c6f6bba0,
	*4d145301e3,
	*66abcb0d1e_MAX,
};

// Enum Engine.*4a160ffb21
enum class *4a160ffb21 : uint8 {
	*c01184f3e9,
	*c221c51571,
	*e8b6dede85,
	*5895a49e5a,
	*552f7f877c,
	*b3ca55b15f,
	*4a160ffb21_MAX,
};

// Enum Engine.ETextureChannel
enum class ETextureChannel : uint8 {
	R,
	G,
	B,
	A,
	ETextureChannel_MAX,
};

// Enum Engine.*7adf0a8cf1
enum class *7adf0a8cf1 : uint8 {
	*b837c0dbce,
	*cc4a181e3f,
	*a4cd00dd7b,
	*d2510beb8d,
	*4804407774,
	*7adf0a8cf1_MAX,
};

// Enum Engine.*0bc8cf689a
enum class *0bc8cf689a : uint8 {
	*faa88554ef,
	*f81bf276eb,
	*3a19a9bf38,
	*2456533e27,
	*cf83afa1cc,
	*0bc8cf689a_MAX,
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

// Enum Engine.*f01eeccd92
enum class *f01eeccd92 : uint8 {
	*dfbac321db,
	*44d708b3a7,
	*0d57bf3e80,
	*84f7194e78,
	*9415a77370,
	*6d44a1e659,
	*f01eeccd92_MAX,
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

// Enum Engine.*a9ab81e1fd
enum class *a9ab81e1fd : uint8 {
	*141e98172d,
	*394cc2865e,
	*5b28d699bd,
	*487adf1a1d,
	*3f9bfe9250,
	*96dfb4c80b,
	*9b90a5f8ce,
	*a9ab81e1fd_MAX,
};

// Enum Engine.*7dc92c8511
enum class *7dc92c8511 : uint8 {
	*211ffff95b,
	*13f0667a59,
	*600a433763,
	*1f70b64383,
	*53395d3c64,
	*050ef7fa33,
	*791cdff68a,
	*600448ecdc,
	*9896e7eeee,
	*7dc92c8511_MAX,
};

// Enum Engine.*54dd39b5c6
enum class *54dd39b5c6 : uint8 {
	*8da4c0667a,
	*ff7b265204,
	*5565ab2754,
	*4020e1d348,
	*85cd50f15c,
	*22030ec75e,
	*2226ad7b0f,
	*f15a59c9a2,
	*0be0fe44a9,
	*f9967efbc8,
	*3237fc9166,
	*550200d802,
	*9fa8801706,
	*54dd39b5c6_MAX,
};

// Enum Engine.*226dd4d07e
enum class *226dd4d07e : uint8 {
	*5c55cae309,
	*cc6e849929,
	*e5a616dd36,
	*8e4980752b,
	*19948c1efc,
	*c2caf2da43,
	*226dd4d07e_MAX,
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

// Enum Engine.*4e04d46b0d
enum class *4e04d46b0d : uint8 {
	*8f13cd8d8a,
	*fc36c20190,
	*debd4f2f31,
	*4e04d46b0d_MAX,
};

// Enum Engine.*a53eea5d4f
enum class *a53eea5d4f : uint8 {
	*dbeb2d0e5c,
	*458ffe9545,
	*3e33b987db,
	*87991c37e5,
	*a19064e6d5,
	*2cac7b8d23,
	*0e63cf5141,
	*5646e0a17e,
	*a53eea5d4f_MAX,
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

// Enum Engine.*154d6c3a55
enum class *154d6c3a55 : uint8 {
	*dac82a38d8,
	*6c9d48c7d8,
	*232d5ee807,
	*154d6c3a55_MAX,
};

// Enum Engine.*510c485379
enum class *510c485379 : uint8 {
	*49f9931214,
	*fcd8bcfad0,
	*f3a0ecf1a3,
	*a157140e94,
	*d343c5c2de,
	*b9305b60ae,
	*d93515591f,
	*67725aff34,
	*8991f8a24a,
	*95146e1941,
	*510c485379_MAX,
};

// Enum Engine.*64d3a91a5a
enum class *64d3a91a5a : uint8 {
	*7d2db94c37,
	*a49401d791,
	*6a7d08dd79,
	*64d3a91a5a_MAX,
};

// Enum Engine.*946ba0509f
enum class *946ba0509f : uint8 {
	*d725efe13b,
	*b595d2a504,
	*93a9b71e25,
	*a4cd30efea,
	*d04695bfbb,
	*946ba0509f_MAX,
};

// Enum Engine.*22f73ca00e
enum class *22f73ca00e : uint8 {
	*e94a84cb84,
	*25c8373283,
	*bd9169b1c3,
	*f0397e744b,
	*7afb9fae3c,
	*914477233f,
	*22f73ca00e_MAX,
};

// Enum Engine.*c7679867c8
enum class *c7679867c8 : uint8 {
	*a6376e93d3,
	*dcb8d98abb,
	*fad75fa689,
	*c7679867c8_MAX,
};

// Enum Engine.*7524a7ddb9
enum class *7524a7ddb9 : uint8 {
	*005e6b9685,
	*c0c9643705,
	*9bd62cecf6,
	*e828a6e891,
	*7524a7ddb9_MAX,
};

// Enum Engine.*e61d6bcc13
enum class *e61d6bcc13 : uint8 {
	*f402352057,
	*70e953d137,
	*568d2d92e0,
	*aa14f7bf3a,
	*ec310dfbfd,
	*0129666da5,
	*ba47a84791,
	*e61d6bcc13_MAX,
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	Bounce,
	Stop,
	Kill,
	EParticleCollisionResponse_MAX,
};

// Enum Engine.*cc89c0214f
enum class *cc89c0214f : uint8 {
	*702bea3aa6,
	*21f03503e9,
	*924b553da1,
	*cc89c0214f_MAX,
};

// Enum Engine.*c311fc8e98
enum class *c311fc8e98 : uint8 {
	*71fa0004df,
	*41d51ca492,
	*26673d0f6a,
	*c311fc8e98_MAX,
};

// Enum Engine.*a69951d2aa
enum class *a69951d2aa : uint8 {
	*bf9ad5be17,
	*0c06aee89a,
	*84cf77bd43,
	*a69951d2aa_MAX,
};

// Enum Engine.*50be57f232
enum class *50be57f232 : uint8 {
	*7a5828b6e7,
	*281745f3c5,
	*e984cb547c,
	*fdbb4152f7,
	*50be57f232_MAX,
};

// Enum Engine.*dded1e51ff
enum class *dded1e51ff : uint8 {
	*10fe7d9397,
	*d47e8e1ba3,
	*089e7ae1ba,
	*dded1e51ff_MAX,
};

// Enum Engine.*33101a9594
enum class *33101a9594 : uint8 {
	*36fe097707,
	*9be54c0e25,
	*dc0e252d79,
	*ecd2773fc4,
	*33101a9594_MAX,
};

// Enum Engine.*638bc4a2a0
enum class *638bc4a2a0 : uint8 {
	*2e148109a6,
	*848169e35c,
	*680d80df3d,
	*75d0c71553,
	*421518d029,
	*6ca4b530d7,
	*c1a6495e04,
	*a102ff6eeb,
	*7e50ba8770,
	*6ed5629053,
	*17de24a144,
	*638bc4a2a0_MAX,
};

// Enum Engine.*b21c089c30
enum class *b21c089c30 : uint8 {
	*c75b56ca52,
	*bf8d1448c7,
	*633d2dc6ee,
	*74afde3c10,
	*cee4c9654d,
	*33aad640eb,
	*982b8c2ed6,
	*b21c089c30_MAX,
};

// Enum Engine.*ca7d4a8963
enum class *ca7d4a8963 : uint8 {
	*b2de7d67db,
	*22fc5d6b01,
	*f5c6998933,
	*862a7c26f5,
	*18e0ee1cc0,
	*1f573d7e37,
	*ca7d4a8963_MAX,
};

// Enum Engine.*10d2470a2e
enum class *10d2470a2e : uint8 {
	*efad224c64,
	*98e0f991f1,
	*96eadcba05,
	*10d2470a2e_MAX,
};

// Enum Engine.*eb81cc9fe3
enum class *eb81cc9fe3 : uint8 {
	*011613a7d5,
	*84f12ad46b,
	*375292034a,
	*a3c7ad8e71,
	*eb81cc9fe3_MAX,
};

// Enum Engine.*aa36bf9756
enum class *aa36bf9756 : uint8 {
	*5ecc8823f2,
	*99338d71e7,
	*5edfa3ad6b,
	*1794072d9a,
	*8695ff6c0a,
	*925b29e1c2,
	*aa36bf9756_MAX,
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

// Enum Engine.*7c31e01eae
enum class *7c31e01eae : uint8 {
	*ae63de2eaa,
	*79e3b95617,
	*38a769d5d5,
	*64ddf514cb,
	*7c31e01eae_MAX,
};

// Enum Engine.*f2f176f81a
enum class *f2f176f81a : uint8 {
	*3768d10b6d,
	*b929e8a9b0,
	*a3245e9df0,
	*f09ed83c30,
	*f2f176f81a_MAX,
};

// Enum Engine.*9ef84ad3a9
enum class *9ef84ad3a9 : uint8 {
	*a07e36d4cd,
	*0a74beaede,
	*40fb5d93e8,
	*fbb7e4edc1,
	*9ef84ad3a9_MAX,
};

// Enum Engine.*6253d48522
enum class *6253d48522 : uint8 {
	*e50d759519,
	*65c1f8293e,
	*751690d8d5,
	*b3f86a5d25,
	*670504f896,
	*18097ec7c0,
	*70a67d81c7,
	*169a9909a0,
	*8991f820ed,
	*1961be5f50,
	*6b689046dc,
	*b16c313335,
	*ee5b51de15,
	*b781b9a645,
	*6253d48522_MAX,
};

// Enum Engine.*4e2379919f
enum class *4e2379919f : uint8 {
	*5da2dc0181,
	*c830a34b3d,
	*d35aee642f,
	*36a86ed8ad,
	*b4a7527030,
	*34bdef67b7,
	*4e2379919f_MAX,
};

// Enum Engine.*2e18f82e38
enum class *2e18f82e38 : uint8 {
	*b25293c743,
	*345ea3725b,
	*34dd7848fe,
	*b87f02257f,
	*2e18f82e38_MAX,
};

// Enum Engine.*72859ab004
enum class *72859ab004 : uint8 {
	*0db0921a9c,
	*da35a4aaa9,
	*a7be8310ea,
	*17921c844a,
	*72859ab004_MAX,
};

// Enum Engine.*a95c3505bb
enum class *a95c3505bb : uint8 {
	*51412f0c18,
	*80b0ddcdec,
	*8d2d612bbd,
	*28461c4254,
	*fcbc47c513,
	*bab98e43da,
	*bda5fdef10,
	*bb326a5c2c,
	*a95c3505bb_MAX,
};

// Enum Engine.*9293f8f926
enum class *9293f8f926 : uint8 {
	*513e1d319a,
	*5e289ec421,
	*64e29bafa9,
	*9293f8f926_MAX,
};

// Enum Engine.*85a1bb8847
enum class *85a1bb8847 : uint8 {
	*781b0a305b,
	*88db57e5ee,
	*8b4eab7634,
	*23db72a0b9,
	*19f2f67d19,
	*85a1bb8847_MAX,
};

// Enum Engine.*debda00f7b
enum class *debda00f7b : uint8 {
	*d7d389390f,
	*653ec8af37,
	*9069a3f229,
	*debda00f7b_MAX,
};

// Enum Engine.*de3ae26065
enum class *de3ae26065 : uint8 {
	*0d1c823de9,
	*f51c76a5be,
	*dd1acedb3b,
	*792f5873ec,
	*de3ae26065_MAX,
};

// Enum Engine.*90e5264185
enum class *90e5264185 : uint8 {
	*22bfc9d819,
	*5c33ac2196,
	*c6ad30a1a6,
	*73fc5f7a2d,
	*90e5264185_MAX,
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

// Enum Engine.*e63f6143bf
enum class *e63f6143bf : uint8 {
	*894e8f6d74,
	*e897b44bc3,
	*de1512b9a1,
	*da2dad966d,
	*e63f6143bf_MAX,
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

// Enum Engine.*a13bc86e5a
enum class *a13bc86e5a : uint8 {
	*0259b81be2,
	*1237cf6d6a,
	*a6f98813eb,
	*22a3fc5bed,
	*4aea4ed320,
	*ca1c18fe0c,
	*43d3ca7dd9,
	*9bfc7df898,
	*12e572d6d6,
	*a13bc86e5a_MAX,
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	Speaker,
	Controller,
	ControllerFallbackToSpeaker,
	EAudioOutputTarget_MAX,
};

// Enum Engine.*2e48319a10
enum class *2e48319a10 : uint8 {
	*b8f378e263,
	*6b970b13dd,
	*30d3d73712,
	*dab7dd2c3c,
	*2e48319a10_MAX,
};

// Enum Engine.*7321e6cd5f
enum class *7321e6cd5f : uint8 {
	*278e2883de,
	*c7e2320508,
	*ecf51311e0,
	*5aabf4eec4,
	*413614d603,
	*7321e6cd5f_MAX,
};

// Enum Engine.*45bf7197dd
enum class *45bf7197dd : uint8 {
	*6054f30518,
	*01fdc12044,
	*c856ef567b,
	*45bf7197dd_MAX,
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

// Enum Engine.*41fce53044
enum class *41fce53044 : uint8 {
	*2700788fe9,
	*268a46dd5d,
	*37a6721715,
	*6916510eaf,
	*41fce53044_MAX,
};

// Enum Engine.*6995125d9d
enum class *6995125d9d : uint8 {
	*d616d43f7d,
	*fc30fbb495,
	*5f8fbcb946,
	*6995125d9d_MAX,
};

// Enum Engine.*d4d56d7a0f
enum class *d4d56d7a0f : uint8 {
	*44b3ef6b73,
	*936d04d274,
	*643f51a75c,
	*d4d56d7a0f_MAX,
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
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantizeNormal : FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct Engine.*bee37b88e1
// Size: 0x10 (Inherited: 0x00)
struct F*bee37b88e1 {
	struct TArray<struct FFloatCurve> *a77b996849; // 0x00(0x10)
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
	enum class *abb37aa6f0 InterpMode; // 0x00(0x01)
	enum class *838c73adf2 TangentMode; // 0x01(0x01)
	enum class *ee1c915069 TangentWeightMode; // 0x02(0x01)
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
	float *bba82a083e; // 0x34(0x04)
	float *c14a8445da; // 0x38(0x04)
	float TriggerWeightThreshold; // 0x3c(0x04)
	struct FName NotifyName; // 0x40(0x08)
	struct UAnimNotify* Notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool *f9c903d84f; // 0x90(0x01)
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
	struct UAnimMontage* *3f988898bb; // 0x08(0x08)
	int32 SlotIndex; // 0x10(0x04)
	int32 *c25fa7c99a; // 0x14(0x04)
	enum class EAnimLinkMethod *a549ef9cf5; // 0x18(0x01)
	enum class EAnimLinkMethod *c07c9e6fb3; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float *ea094b4af2; // 0x1c(0x04)
	float *f97e585543; // 0x20(0x04)
	float *bfe4746090; // 0x24(0x04)
	struct UAnimSequenceBase* *ac0def806b; // 0x28(0x08)
};

// ScriptStruct Engine.*d4948187cd
// Size: 0x0c (Inherited: 0x00)
struct F*d4948187cd {
	int32 *640c68156b; // 0x00(0x04)
	float *3667ff329b; // 0x04(0x04)
	enum class EAnimNotifyEventType *daad69ac54; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x08)
	float DisplayTime; // 0x38(0x04)
	float *bba82a083e; // 0x3c(0x04)
};

// ScriptStruct Engine.*b2c74e37eb
// Size: 0x18 (Inherited: 0x00)
struct F*b2c74e37eb {
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

// ScriptStruct Engine.*1cfb3b4b4d
// Size: 0x58 (Inherited: 0x30)
struct F*1cfb3b4b4d : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FName *083c22fc0e; // 0x40(0x08)
	struct TArray<struct U*6802b428b0*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.*eec764eb71
// Size: 0x20 (Inherited: 0x00)
struct F*eec764eb71 {
	struct TArray<struct F*47de61c745> AuthoredSyncMarkers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*47de61c745
// Size: 0x10 (Inherited: 0x00)
struct F*47de61c745 {
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

// ScriptStruct Engine.*0a13b2b429
// Size: 0x20 (Inherited: 0x00)
struct F*0a13b2b429 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FName MemberName; // 0x08(0x08)
	struct FGuid *1f818d880b; // 0x10(0x10)
};

// ScriptStruct Engine.*8d4039fc59
// Size: 0x58 (Inherited: 0x50)
struct F*8d4039fc59 : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*327e2c5151
// Size: 0x50 (Inherited: 0x00)
struct F*327e2c5151 {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x33]; // 0x0d(0x33)
	float TickInterval; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct Engine.*f405a0a7cd
// Size: 0x20 (Inherited: 0x00)
struct F*f405a0a7cd {
	struct FText Text; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*66d7cac480
// Size: 0x1c (Inherited: 0x00)
struct F*66d7cac480 {
	struct FVector PositionControlPoint; // 0x00(0x0c)
	bool bPositionIsRelative; // 0x0c(0x01)
	char pad_D[0xf]; // 0x0d(0x0f)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x18 (Inherited: 0x01)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct Engine.*c48e566aba
// Size: 0x38 (Inherited: 0x00)
struct F*c48e566aba {
	bool *6f8229077d; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*4373527da6 Data; // 0x08(0x30)
};

// ScriptStruct Engine.*4373527da6
// Size: 0x30 (Inherited: 0x00)
struct F*4373527da6 {
	struct FName *364397752a; // 0x00(0x08)
	enum class *d64330bf40 Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* *0a8c72d254; // 0x28(0x08)
};

// ScriptStruct Engine.*fc9e379a45
// Size: 0x18 (Inherited: 0x00)
struct F*fc9e379a45 {
	struct FString ActionName; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.*2ef3a887d0
// Size: 0x08 (Inherited: 0x00)
struct F*2ef3a887d0 {
	uint64 Handle; // 0x00(0x08)
};

// ScriptStruct Engine.*badb9cc575
// Size: 0x18 (Inherited: 0x00)
struct F*badb9cc575 {
	int32 Linkage; // 0x00(0x04)
	int32 UUID; // 0x04(0x04)
	struct FName *da860d3bdf; // 0x08(0x08)
	struct UObject* *a887cc044f; // 0x10(0x08)
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

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)
struct FCollisionProfileName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Engine.*87ca072a6c
// Size: 0x04 (Inherited: 0x00)
struct F*87ca072a6c {
	int32 Data; // 0x00(0x04)
};

// ScriptStruct Engine.*0c19896e8c
// Size: 0x18 (Inherited: 0x00)
struct F*0c19896e8c {
	char pad_0[0x8]; // 0x00(0x08)
	struct FAttackId AttackId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *8a1dd6595f; // 0x10(0x08)
};

// ScriptStruct Engine.AttackId
// Size: 0x04 (Inherited: 0x00)
struct FAttackId {
	int32 ID; // 0x00(0x04)
};

// ScriptStruct Engine.*1eecbbbccc
// Size: 0x0c (Inherited: 0x00)
struct F*1eecbbbccc {
	int32 *44003b07d5; // 0x00(0x04)
	int32 *668a15b3bd; // 0x04(0x04)
	int32 *4d16516cff; // 0x08(0x04)
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
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize100 : FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct Engine.*6408361421
// Size: 0xb0 (Inherited: 0x00)
struct F*6408361421 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*b3a779a928
// Size: 0x58 (Inherited: 0x50)
struct F*b3a779a928 : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*163cdb3029
// Size: 0x40 (Inherited: 0x00)
struct F*163cdb3029 {
	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 *5d15b09bdc; // 0x08(0x0c)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0x0c)
	struct FRotator *3bbfa7433f; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName *c87545151c; // 0x30(0x08)
	struct USceneComponent* AttachComponent; // 0x38(0x08)
};

// ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x00)
struct FRepMovement {
	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char *7988f1e7e1 : 1; // 0x30(0x01)
	char *c9a3fa45ea : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	enum class *87733dbfe1 *fe0cff63b5; // 0x31(0x01)
	enum class *87733dbfe1 *19f0c1e1f1; // 0x32(0x01)
	enum class *2387aac912 *d959215afc; // 0x33(0x01)
};

// ScriptStruct Engine.*060c159331
// Size: 0x04 (Inherited: 0x00)
struct F*060c159331 {
	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*ae60ea2542
// Size: 0x20 (Inherited: 0x04)
struct F*ae60ea2542 : F*060c159331 {
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
	enum class *8e285791d6 GroupRole; // 0x38(0x01)
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
	int32 LinkID; // 0x00(0x04)
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
	int32 LinkID; // 0x00(0x04)
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

// ScriptStruct Engine.*c3868df940
// Size: 0x520 (Inherited: 0x00)
struct F*c3868df940 {
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

// ScriptStruct Engine.*4d95d8c4cd
// Size: 0xb0 (Inherited: 0x18)
struct F*4d95d8c4cd : F*0c19896e8c {
	float Damage; // 0x18(0x04)
	struct FVector_NetQuantizeNormal *3600f360b9; // 0x1c(0x0c)
	struct FHitResult *18383a9989; // 0x28(0x88)
};

// ScriptStruct Engine.*87cf230eda
// Size: 0x01 (Inherited: 0x00)
struct F*87cf230eda {
	char pad_0_0 : 1; // 0x00(0x01)
	char *0ff0fe4e0b : 1; // 0x00(0x01)
	char *8e634db00a : 1; // 0x00(0x01)
	char *d46c0b13c3 : 1; // 0x00(0x01)
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

// ScriptStruct Engine.*0bb3c50063
// Size: 0x70 (Inherited: 0x58)
struct F*0bb3c50063 : FIndexedCurve {
	struct TArray<struct F*e78a21723f> Keys; // 0x58(0x10)
	int32 DefaultValue; // 0x68(0x04)
	bool *8aef6521d9; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*e78a21723f
// Size: 0x08 (Inherited: 0x00)
struct F*e78a21723f {
	float Time; // 0x00(0x04)
	int32 Value; // 0x04(0x04)
};

// ScriptStruct Engine.*af85ca4d93
// Size: 0x78 (Inherited: 0x58)
struct F*af85ca4d93 : FIndexedCurve {
	struct FString DefaultValue; // 0x58(0x10)
	struct TArray<struct F*1f8b172288> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.*1f8b172288
// Size: 0x18 (Inherited: 0x00)
struct F*1f8b172288 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath {
	struct FString path; // 0x00(0x10)
};

// ScriptStruct Engine.*05429c5581
// Size: 0x60 (Inherited: 0x00)
struct F*05429c5581 {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UTexture2D* Heightmap; // 0x08(0x08)
	struct UTexture2D* Normalmap; // 0x10(0x08)
	struct TArray<struct UTexture2D*> Weightmaps; // 0x18(0x10)
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct Engine.*35d6ebc38c
// Size: 0x60 (Inherited: 0x00)
struct F*35d6ebc38c {
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

// ScriptStruct Engine.*76073804d9
// Size: 0x28 (Inherited: 0x00)
struct F*76073804d9 {
	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*752419edcd GlowInfo; // 0x04(0x24)
};

// ScriptStruct Engine.*752419edcd
// Size: 0x24 (Inherited: 0x00)
struct F*752419edcd {
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

// ScriptStruct Engine.*753532701a
// Size: 0x18 (Inherited: 0x00)
struct F*753532701a {
	struct AActor* OtherActor; // 0x00(0x08)
	struct FName *bb93b69dba; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.*a41316d8a1
// Size: 0x08 (Inherited: 0x00)
struct F*a41316d8a1 {
	struct FName ComponentName; // 0x00(0x08)
};

// ScriptStruct Engine.*705bbdf923
// Size: 0x10 (Inherited: 0x00)
struct F*705bbdf923 {
	enum class *7f4f622ab6 WalkableSlopeBehavior; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*89f7bcd58e
// Size: 0x58 (Inherited: 0x28)
struct F*89f7bcd58e : F*c814f0fd46 {
	struct F*637f2447de Params; // 0x28(0x14)
	struct FVector Origin; // 0x3c(0x0c)
	struct TArray<struct FHitResult> *2031551c57; // 0x48(0x10)
};

// ScriptStruct Engine.*c814f0fd46
// Size: 0x28 (Inherited: 0x18)
struct F*c814f0fd46 : F*0c19896e8c {
	struct FVector *b59f0532cb; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*637f2447de
// Size: 0x14 (Inherited: 0x00)
struct F*637f2447de {
	float *6111c1db5e; // 0x00(0x04)
	float *9e0f50d292; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float *d95f8b297d; // 0x10(0x04)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x40 (Inherited: 0x00)
struct FMeshBuildSettings {
	bool *3ab9d9e740; // 0x00(0x01)
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

// ScriptStruct Engine.*4fc1364ad4
// Size: 0x1c (Inherited: 0x00)
struct F*4fc1364ad4 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};

// ScriptStruct Engine.*baeeab825a
// Size: 0x88 (Inherited: 0x00)
struct F*baeeab825a {
	char pad_0[0x4]; // 0x00(0x04)
	int32 UpdateRate; // 0x04(0x04)
	int32 *3a651f369a; // 0x08(0x04)
	bool *d15ebd1510; // 0x0c(0x01)
	bool *f7233c67ee; // 0x0d(0x01)
	bool *7d89fe7eb6; // 0x0e(0x01)
	bool *a7c2e624ce; // 0x0f(0x01)
	float *c16bdba9ba; // 0x10(0x04)
	float *d7c79e30fb; // 0x14(0x04)
	char pad_18[0x4]; // 0x18(0x04)
	int32 *fce82db0cd; // 0x1c(0x04)
	struct TArray<float> *e55425c162; // 0x20(0x10)
	struct TMap<int32, int32> *4b13551423; // 0x30(0x50)
	int32 *391ed1ef70; // 0x80(0x04)
	enum class *2ebfe559fe *4410418c1f; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct Engine.*3874fcf77d
// Size: 0x10 (Inherited: 0x00)
struct F*3874fcf77d {
	struct FName SlotName; // 0x00(0x08)
	int32 *4a3d578517; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*3efea369de
// Size: 0x18 (Inherited: 0x00)
struct F*3efea369de {
	struct FName SlotName; // 0x00(0x08)
	struct TArray<float> *468e980dd5; // 0x08(0x10)
};

// ScriptStruct Engine.*3ec140fd03
// Size: 0x10 (Inherited: 0x00)
struct F*3ec140fd03 {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct Engine.*94075cb6b8
// Size: 0x18 (Inherited: 0x00)
struct F*94075cb6b8 {
	struct AActor* Actor; // 0x00(0x08)
	struct UPrimitiveComponent* Component; // 0x08(0x08)
	char pad_10[0x4]; // 0x10(0x04)
	char bBlockingHit : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.*ea993fb788
// Size: 0x18 (Inherited: 0x00)
struct F*ea993fb788 {
	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	struct UDecalComponent* Decal; // 0x08(0x08)
	int32 ElementIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*4046c3eb1d
// Size: 0x04 (Inherited: 0x00)
struct F*4046c3eb1d {
	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char *2bd61c03cc : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*9d9d11fdf2
// Size: 0x10 (Inherited: 0x00)
struct F*9d9d11fdf2 {
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

// ScriptStruct Engine.*2ca2c467d8
// Size: 0x18 (Inherited: 0x00)
struct F*2ca2c467d8 {
	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *de2975515a; // 0x04(0x04)
	float *c25b5245ee; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float DiffuseBoost; // 0x10(0x04)
	float FullyOccludedSamplesFraction; // 0x14(0x04)
};

// ScriptStruct Engine.*241342aeed
// Size: 0x10 (Inherited: 0x0c)
struct F*241342aeed : F*84467354e7 {
	float LightSourceAngle; // 0x0c(0x04)
};

// ScriptStruct Engine.*84467354e7
// Size: 0x0c (Inherited: 0x00)
struct F*84467354e7 {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*d176fa0a45
// Size: 0x0c (Inherited: 0x0c)
struct F*d176fa0a45 : F*84467354e7 {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
};

// ScriptStruct Engine.*c9e48fc552
// Size: 0x28 (Inherited: 0x00)
struct F*c9e48fc552 {
	struct FString *aff5102fc1; // 0x00(0x10)
	struct TArray<struct F*f405a0a7cd> Subtitles; // 0x10(0x10)
	char *a420786d29 : 1; // 0x20(0x01)
	char *43b02f3d36 : 1; // 0x20(0x01)
	char *c518c75407 : 1; // 0x20(0x01)
	char pad_20_3 : 5; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*e494b09d9e
// Size: 0x38 (Inherited: 0x00)
struct F*e494b09d9e {
	struct AActor* Base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FVector *95f75bfe82; // 0x14(0x0c)
	struct FRotator *3343792029; // 0x20(0x0c)
	struct FVector *f6953b4818; // 0x2c(0x0c)
};

// ScriptStruct Engine.*ab298b5726
// Size: 0x10 (Inherited: 0x00)
struct F*ab298b5726 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)
};

// ScriptStruct Engine.*d2da6fa6bc
// Size: 0x28 (Inherited: 0x00)
struct F*d2da6fa6bc {
	struct TArray<struct F*ecdd4def53> *68866667b3; // 0x00(0x10)
	struct FVector *cf92384fbe; // 0x10(0x0c)
	struct FVector *6ae2589056; // 0x1c(0x0c)
};

// ScriptStruct Engine.*ecdd4def53
// Size: 0x30 (Inherited: 0x00)
struct F*ecdd4def53 {
	struct FVector *20cc18dc06; // 0x00(0x0c)
	struct FVector *3dc9930bfa; // 0x0c(0x0c)
	float *79328ca2c1; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UPhysicalMaterial* PhysMaterial[0x02]; // 0x20(0x10)
};

// ScriptStruct Engine.*a670be9e73
// Size: 0x1c (Inherited: 0x00)
struct F*a670be9e73 {
	float LinearDeltaThresholdSq; // 0x00(0x04)
	float LinearInterpAlpha; // 0x04(0x04)
	float LinearRecipFixTime; // 0x08(0x04)
	float AngularDeltaThreshold; // 0x0c(0x04)
	float AngularInterpAlpha; // 0x10(0x04)
	float AngularRecipFixTime; // 0x14(0x04)
	float BodySpeedThresholdSq; // 0x18(0x04)
};

// ScriptStruct Engine.*f40e584b96
// Size: 0x40 (Inherited: 0x00)
struct F*f40e584b96 {
	struct FVector_NetQuantize100 Position; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 *f9f78858ca; // 0x20(0x0c)
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

// ScriptStruct Engine.*a32e481cc4
// Size: 0x10 (Inherited: 0x00)
struct F*a32e481cc4 {
	struct FName Channel; // 0x00(0x08)
	enum class ECollisionResponse Response; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)
struct FExposureSettings {
	int32 *d35c4ae035; // 0x00(0x04)
	bool *0ce1b462b6; // 0x04(0x01)
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

// ScriptStruct Engine.*254b7d2b0f
// Size: 0x58 (Inherited: 0x50)
struct F*254b7d2b0f : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*5685ed64a8
// Size: 0x58 (Inherited: 0x50)
struct F*5685ed64a8 : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*e5b86167d7
// Size: 0x58 (Inherited: 0x50)
struct F*e5b86167d7 : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*3b303ae20d
// Size: 0x10 (Inherited: 0x00)
struct F*3b303ae20d {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*91f90a39f4
// Size: 0x30 (Inherited: 0x00)
struct F*91f90a39f4 {
	struct FString *8b409d4967; // 0x00(0x10)
	struct FString *f2d92db6c0; // 0x10(0x10)
	struct UObject* *b947c1246d; // 0x20(0x08)
	bool *99a50f541b; // 0x28(0x01)
	bool *ece6ab16c7; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*32bc9536ab
// Size: 0x18 (Inherited: 0x00)
struct F*32bc9536ab {
	struct UEdGraphNode* *c0ff55fc9c; // 0x00(0x08)
	struct FGuid *f819c6313b; // 0x08(0x10)
};

// ScriptStruct Engine.*7e1b7fab5a
// Size: 0x80 (Inherited: 0x00)
struct F*7e1b7fab5a {
	struct FString PinCategory; // 0x00(0x10)
	struct FString *58ddf1490d; // 0x10(0x10)
	struct UObject* *537d90e598; // 0x20(0x08)
	struct FSimpleMemberReference *735ee9df3c; // 0x28(0x20)
	struct F*91f90a39f4 *d486833cc4; // 0x48(0x30)
	bool *e3e787535f; // 0x78(0x01)
	bool *e48457fd17; // 0x79(0x01)
	bool *384054047c; // 0x7a(0x01)
	bool *bcba0409f1; // 0x7b(0x01)
	bool *5907f82e52; // 0x7c(0x01)
	bool *28b7b80e85; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// ScriptStruct Engine.*4bf9558d63
// Size: 0x10 (Inherited: 0x00)
struct F*4bf9558d63 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*0f151f07b7
// Size: 0x90 (Inherited: 0x00)
struct F*0f151f07b7 {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.*bebd0d9c94
// Size: 0x80 (Inherited: 0x00)
struct F*bebd0d9c94 {
	bool bActive; // 0x00(0x01)
	enum class EMaterialLODType *9e8de8cb31; // 0x01(0x01)
	bool *6b16a41a39; // 0x02(0x01)
	enum class *44fced22f6 *7d93a8c147; // 0x03(0x01)
	enum class *44fced22f6 *f101c89ca3; // 0x04(0x01)
	enum class ESimplygonTextureSamplingQuality SamplingQuality; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32 GutterSpace; // 0x08(0x04)
	enum class ESimplygonTextureStrech *f389b9549f; // 0x0c(0x01)
	bool *56715e5312; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct F*cfbe4d1a83> *ebc3285688; // 0x10(0x10)
	bool *8b673a67fe; // 0x20(0x01)
	bool *7b5133c520; // 0x21(0x01)
	bool *111fa898d3; // 0x22(0x01)
	bool *0a72ad283e; // 0x23(0x01)
	bool *20c803190d; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct F*88256c5add *88256c5add; // 0x28(0x58)
};

// ScriptStruct Engine.*88256c5add
// Size: 0x58 (Inherited: 0x00)
struct F*88256c5add {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Engine.*cfbe4d1a83
// Size: 0x10 (Inherited: 0x00)
struct F*cfbe4d1a83 {
	enum class *7c68fc9df5 *3fcbbca471; // 0x00(0x01)
	enum class ESimplygonCasterType *8132b83152; // 0x01(0x01)
	bool bActive; // 0x02(0x01)
	enum class ESimplygonColorChannels *c755cf7462; // 0x03(0x01)
	int32 *7cfed934d9; // 0x04(0x04)
	bool *5496d8014f; // 0x08(0x01)
	bool *910baa590f; // 0x09(0x01)
	bool *d4758789fd; // 0x0a(0x01)
	bool *328803bb44; // 0x0b(0x01)
	bool *fba184d669; // 0x0c(0x01)
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

// ScriptStruct Engine.*c8f3480d0f
// Size: 0xa8 (Inherited: 0x00)
struct F*c8f3480d0f {
	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 ScreenSize; // 0x04(0x04)
	bool bRecalculateNormals; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float HardAngleThreshold; // 0x0c(0x04)
	int32 MergeDistance; // 0x10(0x04)
	bool *7c3d0edb17; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *8738b2b505; // 0x18(0x04)
	int32 *30369a416d; // 0x1c(0x04)
	bool *cd22751f2e; // 0x20(0x01)
	bool *bb11674362; // 0x21(0x01)
	bool *e7c6dc8e92; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct F*bebd0d9c94 *cb8fbf541b; // 0x28(0x80)
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
	float *f66862b96e; // 0xc0(0x04)
	struct FColor *17a94b667d; // 0xc4(0x04)
	bool bOverrideTransferDistance; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float *f0dd630e9e; // 0xcc(0x04)
	bool *383ad8f57b; // 0xd0(0x01)
	bool bComputeLightMapResolution; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	float HardAngleThreshold; // 0xd4(0x04)
	enum class *9e97596d48 NormalCalculationMethod; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32 LightMapResolution; // 0xdc(0x04)
	bool bRecalculateNormals; // 0xe0(0x01)
	bool bBakeVertexData; // 0xe1(0x01)
	bool bUseLandscapeCulling; // 0xe2(0x01)
	enum class ELandscapeCullingPrecision *c9db526418; // 0xe3(0x01)
	bool bAllowAdjacency; // 0xe4(0x01)
	bool bAllowDistanceField; // 0xe5(0x01)
	bool bReuseMeshLightmapUVs; // 0xe6(0x01)
	bool bCreateCollision; // 0xe7(0x01)
	bool bAllowVertexColors; // 0xe8(0x01)
	bool bGenerateLightmapUVs; // 0xe9(0x01)
	bool *d9e11f0cfe; // 0xea(0x01)
	char pad_EB[0x1]; // 0xeb(0x01)
	int32 *8dbbbfec72; // 0xec(0x04)
	bool *b9cf23dce5; // 0xf0(0x01)
	enum class EChartAggregationMode *032735b93b; // 0xf1(0x01)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0xf2(0x01)
	bool *9f95f22d79; // 0xf3(0x01)
	float MergeBoldness; // 0xf4(0x04)
	float MaxTriangleSize; // 0xf8(0x04)
};

// ScriptStruct Engine.*1565070a2a
// Size: 0x28 (Inherited: 0x00)
struct F*1565070a2a {
	char *b09abc8d8f : 1; // 0x00(0x01)
	char *e6c85b1793 : 1; // 0x00(0x01)
	char *3aeecd9006 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	enum class EImposterCaptureType *4e8c9006c3; // 0x01(0x01)
	enum class EImposterCaptureType *b329fa7d14; // 0x02(0x01)
	enum class EImposterCaptureType *2ab83e47ed; // 0x03(0x01)
	enum class EImposterCaptureType *c225568523; // 0x04(0x01)
	enum class EImposterCaptureType *e56cc8634a; // 0x05(0x01)
	bool *9b16c11909; // 0x06(0x01)
	bool *06ff9f539b; // 0x07(0x01)
	float ScreenSize; // 0x08(0x04)
	struct FLinearColor *8918cf8b6c; // 0x0c(0x10)
	float BaseSaturation; // 0x1c(0x04)
	float VariationBrightness; // 0x20(0x04)
	float BaseBrightness; // 0x24(0x04)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x158 (Inherited: 0x00)
struct FMeshReductionSettings {
	int32 BaseLODModel; // 0x00(0x04)
	enum class EOptimizationMetric *71a9d348f6; // 0x04(0x01)
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
	bool *92a025d55c; // 0x2d(0x01)
	bool *9db0562977; // 0x2e(0x01)
	bool *ad96b44b74; // 0x2f(0x01)
	bool *326f6b19cd; // 0x30(0x01)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x31(0x01)
	enum class EMeshFeatureImportance *84d9a928e7; // 0x32(0x01)
	bool *20c803190d; // 0x33(0x01)
	bool *929780a4f2; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct F*bebd0d9c94 MaterialLODSettings; // 0x38(0x80)
	struct FMaterialProxySettings MaterialProxySettings; // 0xb8(0x9c)
	char pad_154[0x4]; // 0x154(0x04)
};

// ScriptStruct Engine.*2c524aa3a9
// Size: 0x168 (Inherited: 0x00)
struct F*2c524aa3a9 {
	bool bCreatePackagePerAsset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DetailsPercentage; // 0x04(0x04)
	float MergeDistance; // 0x08(0x04)
	float *f66862b96e; // 0x0c(0x04)
	float MergeBoldness; // 0x10(0x04)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MaxTriangleSize; // 0x18(0x04)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x1c(0x9c)
	bool bOverrideLandscapeExportLOD; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *9db8714dac; // 0xbc(0x04)
	struct FMaterialProxySettings *47451ad7fd; // 0xc0(0x9c)
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
	enum class ELandscapeCullingPrecision *c9db526418; // 0x167(0x01)
};

// ScriptStruct Engine.*5244bce670
// Size: 0x38 (Inherited: 0x28)
struct F*5244bce670 : F*2e2970834a {
	struct UTexture2D* Texture; // 0x28(0x08)
	bool *13515f080a; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *66e27d1504; // 0x34(0x04)
};

// ScriptStruct Engine.*2e2970834a
// Size: 0x28 (Inherited: 0x00)
struct F*2e2970834a {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.*27572cdce5
// Size: 0x20 (Inherited: 0x00)
struct F*27572cdce5 {
	enum class EAutoBenchViewMode ViewMode; // 0x00(0x01)
	enum class EAutoBenchPathType PathType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 CameraSpeed; // 0x04(0x04)
	int32 CameraHeightOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FString> StatNames; // 0x10(0x10)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x240 (Inherited: 0x00)
struct FBodyInstance {
	char pad_0[0x14]; // 0x00(0x14)
	struct FCollisionResponseContainer ResponseToChannels; // 0x14(0x20)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName CollisionProfileName; // 0x38(0x08)
	struct F*4a533ce02b CollisionResponses; // 0x40(0x30)
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
	char *af447e55ea : 1; // 0x75(0x01)
	char *7c95974e8e : 1; // 0x75(0x01)
	char *33eb031094 : 1; // 0x75(0x01)
	char *228450a88f : 1; // 0x75(0x01)
	char *6ee36c4023 : 1; // 0x75(0x01)
	char *88e161bc73 : 1; // 0x75(0x01)
	char *3fd45c2c49 : 1; // 0x75(0x01)
	char *01aa5dca4e : 1; // 0x76(0x01)
	char *7677521a4f : 1; // 0x76(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x76(0x01)
	char pad_76_3 : 4; // 0x76(0x01)
	char bUseAsyncScene : 1; // 0x76(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x77(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x77(0x01)
	char pad_77_2 : 6; // 0x77(0x01)
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
	struct F*705bbdf923 WalkableSlopeOverride; // 0xd0(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xe0(0x08)
	float MaxAngularVelocity; // 0xe8(0x04)
	float CustomSleepThresholdMultiplier; // 0xec(0x04)
	float StabilizationThresholdMultiplier; // 0xf0(0x04)
	float *3df1565ed1; // 0xf4(0x04)
	int32 PositionSolverIterationCount; // 0xf8(0x04)
	char pad_FC[0x2c]; // 0xfc(0x2c)
	uint64 *58f5042dc6; // 0x128(0x08)
	uint64 *6b8643a8e9; // 0x130(0x08)
	int32 VelocitySolverIterationCount; // 0x138(0x04)
	char pad_13C[0xf8]; // 0x13c(0xf8)
	enum class ESleepFamily SleepFamily; // 0x234(0x01)
	enum class EDOFMode DOFMode; // 0x235(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x236(0x01)
	enum class ECollisionChannel ObjectType; // 0x237(0x01)
	char pad_238[0x8]; // 0x238(0x08)
};

// ScriptStruct Engine.*4a533ce02b
// Size: 0x30 (Inherited: 0x00)
struct F*4a533ce02b {
	struct FCollisionResponseContainer *88be1b5444; // 0x00(0x20)
	struct TArray<struct F*a32e481cc4> *b94f2e1f73; // 0x20(0x10)
};

// ScriptStruct Engine.*8760f7f7d5
// Size: 0x0c (Inherited: 0x00)
struct F*8760f7f7d5 {
	uint32 *d05de36e89; // 0x00(0x04)
	int32 *4a0fdbcd51; // 0x04(0x04)
	float *2a8370795d; // 0x08(0x04)
};

// ScriptStruct Engine.*a6bf96dd33
// Size: 0x30 (Inherited: 0x00)
struct F*a6bf96dd33 {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FBoxSphereBounds Bounds; // 0x08(0x1c)
	float *2a8370795d; // 0x24(0x04)
	uint32 *d05de36e89; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*a0d435eae7
// Size: 0x04 (Inherited: 0x00)
struct F*a0d435eae7 {
	char *8cf6764bee : 1; // 0x00(0x01)
	char *77ff4ebddb : 1; // 0x00(0x01)
	char *aba94f5692 : 1; // 0x00(0x01)
	char *60b665df83 : 1; // 0x00(0x01)
	char *bd0e150650 : 1; // 0x00(0x01)
	char *abc3592541 : 1; // 0x00(0x01)
	char *838781efa0 : 1; // 0x00(0x01)
	char *a53e3afca8 : 1; // 0x00(0x01)
	char *e75d745174 : 1; // 0x01(0x01)
	char *cc289d0b13 : 1; // 0x01(0x01)
	char *8bf4e6e99e : 1; // 0x01(0x01)
	char *21ac985054 : 1; // 0x01(0x01)
	char *a50790f794 : 1; // 0x01(0x01)
	char *01a99d4508 : 1; // 0x01(0x01)
	char *09ab6d3401 : 1; // 0x01(0x01)
	char *b64d8ac9bf : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*67bc07c1f6
// Size: 0x18 (Inherited: 0x00)
struct F*67bc07c1f6 {
	struct UClass* AreaClass; // 0x00(0x08)
	float *696b6b379d; // 0x08(0x04)
	float *376a875ed8; // 0x0c(0x04)
	char *4a1139c869 : 1; // 0x10(0x01)
	char bOverrideTravelCost : 1; // 0x10(0x01)
	char bOverrideEnteringCost : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*e11f2ef86c
// Size: 0x14 (Inherited: 0x00)
struct F*e11f2ef86c {
	struct FVector TargetLocation; // 0x00(0x0c)
	float GenerateRadiusMin; // 0x0c(0x04)
	float GenerateRadiusMax; // 0x10(0x04)
};

// ScriptStruct Engine.*b03cbfc63f
// Size: 0x50 (Inherited: 0x20)
struct F*b03cbfc63f : F*ae60ea2542 {
	struct FName Name; // 0x20(0x08)
	struct FColor Color; // 0x28(0x04)
	struct FVector DefaultQueryExtent; // 0x2c(0x0c)
	struct UClass* NavigationDataClass; // 0x38(0x08)
	struct FStringClassReference NavigationDataClassName; // 0x40(0x10)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector {
	char *7977a38b17 : 1; // 0x00(0x01)
	char *02c3c27401 : 1; // 0x00(0x01)
	char *29fb5bd1c0 : 1; // 0x00(0x01)
	char *8e017ddf4a : 1; // 0x00(0x01)
	char *3fdb6b5b43 : 1; // 0x00(0x01)
	char *df1a90c463 : 1; // 0x00(0x01)
	char *daabb0f6b2 : 1; // 0x00(0x01)
	char *78d7b84bd8 : 1; // 0x00(0x01)
	char *5fa3333bb8 : 1; // 0x01(0x01)
	char *d65f190a66 : 1; // 0x01(0x01)
	char *e2ddc5b196 : 1; // 0x01(0x01)
	char *b9e2db1c4c : 1; // 0x01(0x01)
	char *14fdd3aa8f : 1; // 0x01(0x01)
	char *46050a3212 : 1; // 0x01(0x01)
	char *b8e73b0f95 : 1; // 0x01(0x01)
	char *54c77bcf16 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*2503b2fb4a
// Size: 0x38 (Inherited: 0x00)
struct F*2503b2fb4a {
	struct FName Category; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Engine.*ea93fc227b
// Size: 0x14 (Inherited: 0x00)
struct F*ea93fc227b {
	bool *2bd61c03cc; // 0x00(0x01)
	bool bOverrideDensities; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *71f4fc15e9[0x04]; // 0x04(0x10)
};

// ScriptStruct Engine.*2456cc3dba
// Size: 0x18 (Inherited: 0x00)
struct F*2456cc3dba {
	uint32 *109a421129; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *d50b3553af; // 0x08(0x10)
};

// ScriptStruct Engine.*b95e578402
// Size: 0x28 (Inherited: 0x00)
struct F*b95e578402 {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct F*ea93fc227b UVChannelData; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*7b71286401
// Size: 0x28 (Inherited: 0x00)
struct F*7b71286401 {
	bool *e48457fd17; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *a656138570; // 0x04(0x0c)
	struct FVector *7aed6b555e; // 0x10(0x0c)
	struct FRotator *5c3dec8f0f; // 0x1c(0x0c)
};

// ScriptStruct Engine.*8966e3856c
// Size: 0x50 (Inherited: 0x00)
struct F*8966e3856c {
	struct TMap<struct FString, struct F*69041440c6> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*69041440c6
// Size: 0x50 (Inherited: 0x00)
struct F*69041440c6 {
	struct TMap<uint32, struct F*6136fe202a> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*6136fe202a
// Size: 0x08 (Inherited: 0x00)
struct F*6136fe202a {
	int32 MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool *0d8d5f427c; // 0x05(0x01)
	bool *17cc3beaef; // 0x06(0x01)
	bool IndoorOutdoorMask; // 0x07(0x01)
};

// ScriptStruct Engine.*917a94a1f1
// Size: 0x04 (Inherited: 0x00)
struct F*917a94a1f1 {
	uint16 LODIndex; // 0x00(0x02)
	uint16 SectionIndex; // 0x02(0x02)
};

// ScriptStruct Engine.*7f5182b4b8
// Size: 0x4b0 (Inherited: 0x00)
struct F*7f5182b4b8 {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x40)
	struct FMeshReductionSettings ReductionSettings; // 0x40(0x158)
	struct F*c8f3480d0f RemeshingSettings; // 0x198(0xa8)
	bool *7dc0728574; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FGroupedStaticMeshOptimizationSettings OptimizationSettings; // 0x248(0x260)
	float LODDistance; // 0x4a8(0x04)
	float ScreenSize; // 0x4ac(0x04)
};

// ScriptStruct Engine.GroupedStaticMeshOptimizationSettings
// Size: 0x260 (Inherited: 0x00)
struct FGroupedStaticMeshOptimizationSettings {
	enum class EStaticMeshLODType *7924760f10; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMeshReductionSettings ReductionSettings; // 0x08(0x158)
	struct FMeshProxySettings ProxySettings; // 0x160(0xfc)
	char pad_25C[0x4]; // 0x25c(0x04)
};

// ScriptStruct Engine.*f86bdf9c05
// Size: 0x1c (Inherited: 0x00)
struct F*f86bdf9c05 {
	enum class *a790f9254b *02bedfd184; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *2e1c306d98; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *cbc71711d7; // 0x14(0x04)
	bool SilhouetteImportance; // 0x18(0x01)
	bool TextureImportance; // 0x19(0x01)
	bool ShadingImportance; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.*bdabc767c1
// Size: 0xc8 (Inherited: 0x00)
struct F*bdabc767c1 {
	bool bUseCustomCapture; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Saturation; // 0x04(0x04)
	struct FLinearColor *7ed02def4b; // 0x08(0x10)
	struct FLinearColor *6c69d9a8ec; // 0x18(0x10)
	struct FLinearColor *5ca684643b; // 0x28(0x10)
	struct FLinearColor *d1f36f76d6; // 0x38(0x10)
	struct FLinearColor *c7c365cb1d; // 0x48(0x10)
	struct FLinearColor *3449ffe7db; // 0x58(0x10)
	struct FLinearColor *7af1d5ed69; // 0x68(0x10)
	struct FLinearColor *dc52f059c3; // 0x78(0x10)
	struct FLinearColor *4e28708826; // 0x88(0x10)
	struct FLinearColor *20119838cb; // 0x98(0x10)
	struct FLinearColor *7290b4d2ef; // 0xa8(0x10)
	struct FLinearColor *6fecaa6ace; // 0xb8(0x10)
};

// ScriptStruct Engine.AmbientCube
// Size: 0x94 (Inherited: 0x00)
struct FAmbientCube {
	float Saturation; // 0x00(0x04)
	struct F*dd757fe163 Faces[0x06]; // 0x04(0x90)
};

// ScriptStruct Engine.*dd757fe163
// Size: 0x18 (Inherited: 0x00)
struct F*dd757fe163 {
	struct FColor Color; // 0x00(0x04)
	struct FLinearColor Tint; // 0x04(0x10)
	float FaceSaturation; // 0x14(0x04)
};

// ScriptStruct Engine.*26d590dcc1
// Size: 0x0c (Inherited: 0x00)
struct F*26d590dcc1 {
	int32 Type; // 0x00(0x04)
	int32 Index; // 0x04(0x04)
	int32 *44a5e9a7c1; // 0x08(0x04)
};

// ScriptStruct Engine.*d94406f7f4
// Size: 0x24 (Inherited: 0x00)
struct F*d94406f7f4 {
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
	enum class *fa270931cd ReverbType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	float Volume; // 0x10(0x04)
	float FadeTime; // 0x14(0x04)
};

// ScriptStruct Engine.*5149d535a7
// Size: 0x08 (Inherited: 0x00)
struct F*5149d535a7 {
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
	enum class *64b7408e39 BloomMethod; // 0x208(0x01)
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

// ScriptStruct Engine.*8a20daaf67
// Size: 0x38 (Inherited: 0x00)
struct F*8a20daaf67 {
	char pad_0[0x30]; // 0x00(0x30)
	bool *34fba7fded; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 *a96fef28dc; // 0x34(0x04)
};

// ScriptStruct Engine.*067063007d
// Size: 0x5c0 (Inherited: 0x00)
struct F*067063007d {
	float OrthoNearClipPlane; // 0x00(0x04)
	float OrthoFarClipPlane; // 0x04(0x04)
	float OrthoWidth; // 0x08(0x04)
	struct FVector Location; // 0x0c(0x0c)
	float AspectRatio; // 0x18(0x04)
	float PostProcessBlendWeight; // 0x1c(0x04)
	struct FVector2D OffCenterProjectionOffset; // 0x20(0x08)
	float FOV; // 0x28(0x04)
	struct FRotator Rotation; // 0x2c(0x0c)
	char pad_38[0x8]; // 0x38(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x570)
	enum class ECameraProjectionMode ProjectionMode; // 0x5b0(0x01)
	char pad_5B1[0x3]; // 0x5b1(0x03)
	char bConstrainAspectRatio : 1; // 0x5b4(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x5b4(0x01)
	char pad_5B4_2 : 6; // 0x5b4(0x01)
	char pad_5B5[0xb]; // 0x5b5(0x0b)
};

// ScriptStruct Engine.*06e6e74a48
// Size: 0x24 (Inherited: 0x00)
struct F*06e6e74a48 {
	struct F*dc02247a53 X; // 0x00(0x0c)
	struct F*dc02247a53 Y; // 0x0c(0x0c)
	struct F*dc02247a53 Z; // 0x18(0x0c)
};

// ScriptStruct Engine.*dc02247a53
// Size: 0x0c (Inherited: 0x00)
struct F*dc02247a53 {
	float *06dda8853c; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class *34956799e0 *b8c78dcf3d; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*f7217abe10
// Size: 0x24 (Inherited: 0x00)
struct F*f7217abe10 {
	struct F*dc02247a53 Pitch; // 0x00(0x0c)
	struct F*dc02247a53 Yaw; // 0x0c(0x0c)
	struct F*dc02247a53 Roll; // 0x18(0x0c)
};

// ScriptStruct Engine.*12ea908fc3
// Size: 0x10 (Inherited: 0x00)
struct F*12ea908fc3 {
	float BlendTime; // 0x00(0x04)
	enum class *1789b5db7d BlendFunction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*67dd5045be
// Size: 0x5e0 (Inherited: 0x00)
struct F*67dd5045be {
	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct F*067063007d POV; // 0x10(0x5c0)
	struct APlayerState* PlayerState; // 0x5d0(0x08)
	char pad_5D8[0x8]; // 0x5d8(0x08)
};

// ScriptStruct Engine.*506119bf4d
// Size: 0x5d0 (Inherited: 0x00)
struct F*506119bf4d {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct F*067063007d *4fc1364ad4; // 0x10(0x5c0)
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
	struct F*b00c79c488 AxisProperties; // 0x08(0x20)
};

// ScriptStruct Engine.*b00c79c488
// Size: 0x20 (Inherited: 0x00)
struct F*b00c79c488 {
	float DEADZONE; // 0x00(0x04)
	float OuterDeadZone; // 0x04(0x04)
	float Sensitivity; // 0x08(0x04)
	float Exponent; // 0x0c(0x04)
	char bInvert : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UCurveFloat* MultiplierAxisValueCurve; // 0x18(0x08)
};

// ScriptStruct Engine.*bddce5acd0
// Size: 0x30 (Inherited: 0x00)
struct F*bddce5acd0 {
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
	char *8a5e9c2971 : 1; // 0x29(0x01)
	char pad_29_1 : 7; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*f4d705ce7a
// Size: 0x10 (Inherited: 0x00)
struct F*f4d705ce7a {
	struct FName ActionName; // 0x00(0x08)
	enum class *b1be654dc6 KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*a490466ff0
// Size: 0x70 (Inherited: 0x00)
struct F*a490466ff0 {
	struct UPlayerInput* PlayerInput; // 0x00(0x08)
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct Engine.*444f71f5b9
// Size: 0x18 (Inherited: 0x00)
struct F*444f71f5b9 {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*ef998f31f9
// Size: 0x80 (Inherited: 0x00)
struct F*ef998f31f9 {
	char *26ad10735a : 1; // 0x00(0x01)
	char *7172363586 : 1; // 0x00(0x01)
	char *dab63f1063 : 1; // 0x00(0x01)
	char *7bdd864cc2 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x78)
};

// ScriptStruct Engine.*956690b004
// Size: 0x10 (Inherited: 0x00)
struct F*956690b004 {
	struct FName PackageName; // 0x00(0x08)
	char bIsVisible : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*e276d3ecaf
// Size: 0x10 (Inherited: 0x00)
struct F*e276d3ecaf {
	struct FName PackageName; // 0x00(0x08)
	int32 LODIndex; // 0x08(0x04)
	char *cf0fb9d6d1 : 1; // 0x0c(0x01)
	char *7b07760c6d : 1; // 0x0c(0x01)
	char *c6022e0397 : 1; // 0x0c(0x01)
	char pad_C_3 : 5; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*ed6dead525
// Size: 0x60 (Inherited: 0x00)
struct F*ed6dead525 {
	struct AActor* *c27920f838; // 0x00(0x08)
	struct FVector *1d44237ed2; // 0x08(0x0c)
	struct FVector *0f5f7c9666; // 0x14(0x0c)
	struct FString *aea2e7b977; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct FColor TextColor; // 0x38(0x04)
	char bAbsoluteLocation : 1; // 0x3c(0x01)
	char *add6570bbc : 1; // 0x3c(0x01)
	char *0646f16c35 : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector *bd9d0365a6; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFont* Font; // 0x50(0x08)
	float *f610b0c01d; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.*27e81fb8bf
// Size: 0x28 (Inherited: 0x00)
struct F*27e81fb8bf {
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
	float *0123a7fa86; // 0x04(0x04)
	bool *f4a89a49cd; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FMeshProxySettings *3253b7742d; // 0x0c(0xfc)
	struct FMeshMergingSettings *fcdaf25e4a; // 0x108(0xd4)
	float *3544a7becf; // 0x1dc(0x04)
	float *79e892c57c; // 0x1e0(0x04)
	int32 *cc369ff79f; // 0x1e4(0x04)
};

// ScriptStruct Engine.*552ef1334c
// Size: 0x30 (Inherited: 0x00)
struct F*552ef1334c {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* *c676e808e9; // 0x08(0x08)
	struct AActor* ViewTarget; // 0x10(0x08)
	struct FVector ViewLocation; // 0x18(0x0c)
	struct FVector ViewDir; // 0x24(0x0c)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x44 (Inherited: 0x00)
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x00(0x04)
	int32 *96eb019b17; // 0x04(0x04)
	float *9746bfeeab; // 0x08(0x04)
	float *807a39f0c3; // 0x0c(0x04)
	struct FColor EnvironmentColor; // 0x10(0x04)
	float *57a7cc89b8; // 0x14(0x04)
	float EmissiveBoost; // 0x18(0x04)
	float DiffuseBoost; // 0x1c(0x04)
	char *f81ede29e3 : 1; // 0x20(0x01)
	char *09c565b8b8 : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *7797b7a5aa; // 0x24(0x04)
	float *5bd9e0a0c3; // 0x28(0x04)
	float OcclusionExponent; // 0x2c(0x04)
	float *a622e00cb2; // 0x30(0x04)
	float MaxOcclusionDistance; // 0x34(0x04)
	char *fa8fadaeea : 1; // 0x38(0x01)
	char *df2459fe30 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *1d7ddd8bc1; // 0x3c(0x04)
	char bCompressLightmaps : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.*cbc183fb78
// Size: 0x04 (Inherited: 0x00)
struct F*cbc183fb78 {
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

// ScriptStruct Engine.*4843f69936
// Size: 0x10 (Inherited: 0x00)
struct F*4843f69936 {
	float SamplingScale; // 0x00(0x04)
	int32 *7d72902ee7; // 0x04(0x04)
	struct FName TextureName; // 0x08(0x08)
};

// ScriptStruct Engine.*ed15892812
// Size: 0x14 (Inherited: 0x00)
struct F*ed15892812 {
	char bCastShadowAsMasked : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EmissiveBoost; // 0x04(0x04)
	float DiffuseBoost; // 0x08(0x04)
	float ExportResolutionScale; // 0x0c(0x04)
	char *0d3a41780b : 1; // 0x10(0x01)
	char *966a7afb12 : 1; // 0x10(0x01)
	char *2ad39bf57b : 1; // 0x10(0x01)
	char *57ebffbf2b : 1; // 0x10(0x01)
	char pad_10_4 : 4; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*87fceb50c7
// Size: 0xa0 (Inherited: 0x00)
struct F*87fceb50c7 {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct F*0aa6cebf61> PaintedVertices; // 0x20(0x10)
	char pad_30[0x70]; // 0x30(0x70)
};

// ScriptStruct Engine.*0aa6cebf61
// Size: 0x14 (Inherited: 0x00)
struct F*0aa6cebf61 {
	struct FVector Position; // 0x00(0x0c)
	struct FPackedNormal Normal; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
};

// ScriptStruct Engine.*097c3ea9ba
// Size: 0x18 (Inherited: 0x00)
struct F*097c3ea9ba {
	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct AActor*> Actors; // 0x08(0x10)
};

// ScriptStruct Engine.*c74a172e6a
// Size: 0x10 (Inherited: 0x00)
struct F*c74a172e6a {
	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct Engine.*75098b10ea
// Size: 0x20 (Inherited: 0x00)
struct F*75098b10ea {
	struct FString *f39ef6f3aa; // 0x00(0x10)
	int32 *a1ddc31e2a; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* AreaClass; // 0x18(0x08)
};

// ScriptStruct Engine.*3fc6081d30
// Size: 0x18 (Inherited: 0x00)
struct F*3fc6081d30 {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*e9bec50cb4
// Size: 0x18 (Inherited: 0x00)
struct F*e9bec50cb4 {
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
	float *f269869f18; // 0x00(0x04)
	float *9548dd2c19; // 0x04(0x04)
	enum class ENavLinkDirection Direction; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	float *27cd26c112; // 0x10(0x04)
	float *e2bde94b34; // 0x14(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x18(0x04)
	char *7977a38b17 : 1; // 0x1c(0x01)
	char *02c3c27401 : 1; // 0x1c(0x01)
	char *29fb5bd1c0 : 1; // 0x1c(0x01)
	char *8e017ddf4a : 1; // 0x1c(0x01)
	char *3fdb6b5b43 : 1; // 0x1c(0x01)
	char *df1a90c463 : 1; // 0x1c(0x01)
	char *daabb0f6b2 : 1; // 0x1c(0x01)
	char *78d7b84bd8 : 1; // 0x1c(0x01)
	char *5fa3333bb8 : 1; // 0x1d(0x01)
	char *d65f190a66 : 1; // 0x1d(0x01)
	char *e2ddc5b196 : 1; // 0x1d(0x01)
	char *b9e2db1c4c : 1; // 0x1d(0x01)
	char *14fdd3aa8f : 1; // 0x1d(0x01)
	char *46050a3212 : 1; // 0x1d(0x01)
	char *b8e73b0f95 : 1; // 0x1d(0x01)
	char *54c77bcf16 : 1; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	char bUseSnapHeight : 1; // 0x20(0x01)
	char *7dc5384910 : 1; // 0x20(0x01)
	char *ba6d938489 : 1; // 0x20(0x01)
	char *e12797037b : 1; // 0x20(0x01)
	char *7293d836a9 : 1; // 0x20(0x01)
	char *aed0f3f810 : 1; // 0x20(0x01)
	char *0cbcfcf372 : 1; // 0x20(0x01)
	char *7c750638e4 : 1; // 0x20(0x01)
	char *f00b3c8d58 : 1; // 0x21(0x01)
	char *a1214a20d1 : 1; // 0x21(0x01)
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

// ScriptStruct Engine.*5328669c11
// Size: 0x10 (Inherited: 0x00)
struct F*5328669c11 {
	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Engine.*a556a98cec
// Size: 0x10 (Inherited: 0x00)
struct F*a556a98cec {
	struct TArray<bool> *194708fe5a; // 0x00(0x10)
};

// ScriptStruct Engine.*c03c9e6100
// Size: 0x01 (Inherited: 0x00)
struct F*c03c9e6100 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x00)
struct FParticleSysParam {
	struct FName Name; // 0x00(0x08)
	enum class *922d61db52 ParamType; // 0x08(0x01)
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

// ScriptStruct Engine.*adfeeb118d
// Size: 0x10 (Inherited: 0x00)
struct F*adfeeb118d {
	struct TArray<struct F*b603498e0b> *6e3a4e8d5f; // 0x00(0x10)
};

// ScriptStruct Engine.*b603498e0b
// Size: 0x30 (Inherited: 0x00)
struct F*b603498e0b {
	struct UObject* *e5c5f4759c; // 0x00(0x20)
	struct UObject* Object; // 0x20(0x08)
	struct FName *92919dfa2f; // 0x28(0x08)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x00)
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x00(0x08)
	struct FLinearColor TrackColor; // 0x08(0x10)
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct Engine.*bd4e3a5c8e
// Size: 0x10 (Inherited: 0x00)
struct F*bd4e3a5c8e {
	struct TArray<struct FPerBoneBlendWeight> *c831cb2e00; // 0x00(0x10)
};

// ScriptStruct Engine.*ac3133cced
// Size: 0x30 (Inherited: 0x00)
struct F*ac3133cced {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	bool bEnableShadowCasting; // 0x08(0x01)
	bool bRecomputeTangent; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName MaterialSlotName; // 0x10(0x08)
	struct F*ea93fc227b UVChannelData; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)
struct FClothingAssetData_Legacy {
	struct FName AssetName; // 0x00(0x08)
	struct FString *bb66ed466d; // 0x08(0x10)
	bool *f469e8e343; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FClothPhysicsProperties_Legacy *22b8307649; // 0x1c(0x50)
	char pad_6C[0xc]; // 0x6c(0x0c)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)
struct FClothPhysicsProperties_Legacy {
	float *9e1f6459bc; // 0x00(0x04)
	float *468707a27c; // 0x04(0x04)
	float *e9816ec360; // 0x08(0x04)
	float *34159f7e49; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float TetherStiffness; // 0x18(0x04)
	float TetherLimit; // 0x1c(0x04)
	float Drag; // 0x20(0x04)
	float StiffnessFrequency; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	float MassScale; // 0x2c(0x04)
	float *4bfd8ff9e6; // 0x30(0x04)
	float SelfCollisionThickness; // 0x34(0x04)
	float SelfCollisionSquashScale; // 0x38(0x04)
	float SelfCollisionStiffness; // 0x3c(0x04)
	float SolverFrequency; // 0x40(0x04)
	float *8c257ffca7; // 0x44(0x04)
	float *bbe7a815c0; // 0x48(0x04)
	float *bed71f1488; // 0x4c(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0x540 (Inherited: 0x00)
struct FSkeletalMeshLODInfo {
	float ScreenSize; // 0x00(0x04)
	float *fe5c14883c; // 0x04(0x04)
	struct TArray<int32> LODMaterialMap; // 0x08(0x10)
	struct TArray<bool> bEnableShadowCasting; // 0x18(0x10)
	struct TArray<struct FTriangleSortSettings> TriangleSortSettings; // 0x28(0x10)
	char *7dc0728574 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x188)
	struct TArray<struct FBoneReference> *7f8a4c0985; // 0x1c8(0x10)
	float *e1654a3f3a; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct F*c8f3480d0f RemeshingSettings; // 0x1e0(0xa8)
	struct FGroupedSkeletalOptimizationSettings OptimizationSettings; // 0x288(0x290)
	struct TArray<struct FName> RemovedBones; // 0x518(0x10)
	struct FString *f9ea9eb5ed; // 0x528(0x10)
	char *0c2a34ae47 : 1; // 0x538(0x01)
	char pad_538_1 : 7; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
};

// ScriptStruct Engine.GroupedSkeletalOptimizationSettings
// Size: 0x290 (Inherited: 0x00)
struct FGroupedSkeletalOptimizationSettings {
	bool *4d740395af; // 0x00(0x01)
	enum class ESkeletalMeshLODType *7924760f10; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x08(0x188)
	struct FMeshProxySettings ProxySettings; // 0x190(0xfc)
	bool *27d2f130be; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x188 (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings {
	enum class *df5e59bf9d *e8c7dc49a0; // 0x00(0x01)
	enum class SkeletalMeshOptimizationType *02bedfd184; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *7a27b944ef; // 0x08(0x04)
	uint32 *a1246ceb5c; // 0x0c(0x04)
	uint32 *b7dc3346e4; // 0x10(0x04)
	float *26be45e5ee; // 0x14(0x04)
	float *2e1c306d98; // 0x18(0x04)
	int32 ScreenSize; // 0x1c(0x04)
	float WeldingThreshold; // 0x20(0x04)
	bool bRecalcNormals; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float *cbc71711d7; // 0x28(0x04)
	enum class *c02995f596 SilhouetteImportance; // 0x2c(0x01)
	enum class *c02995f596 TextureImportance; // 0x2d(0x01)
	enum class *c02995f596 ShadingImportance; // 0x2e(0x01)
	enum class *c02995f596 SkinningImportance; // 0x2f(0x01)
	float *2c7e43020f; // 0x30(0x04)
	int32 MaxBonesPerVertex; // 0x34(0x04)
	bool *0da41225e7; // 0x38(0x01)
	bool *100a35be50; // 0x39(0x01)
	bool *e3c2abd874; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x40(0x10)
	int32 BaseLOD; // 0x50(0x04)
	int32 *b94e061167; // 0x54(0x04)
	bool *20c803190d; // 0x58(0x01)
	bool *81fefb3ad0; // 0x59(0x01)
	bool *929780a4f2; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct F*bebd0d9c94 MaterialLODSettings; // 0x60(0x80)
	struct FMaterialProxySettings MaterialSettings; // 0xe0(0x9c)
	bool *5dcce64052; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct UAnimSequence* BakePose; // 0x180(0x08)
};

// ScriptStruct Engine.TriangleSortSettings
// Size: 0x10 (Inherited: 0x00)
struct FTriangleSortSettings {
	enum class *8d8fbd9abe TriangleSorting; // 0x00(0x01)
	enum class *321f70c77d *596470e5be; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FName *1c381ce453; // 0x08(0x08)
};

// ScriptStruct Engine.*4551c9279d
// Size: 0x50 (Inherited: 0x00)
struct F*4551c9279d {
	struct FString AssetName; // 0x00(0x10)
	int32 LODIndex; // 0x10(0x04)
	int32 SourceSection; // 0x14(0x04)
	bool *3e141ecd51; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UPhysicsAsset* PhysicsAsset; // 0x20(0x20)
	bool bTryAutoFix; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *bb3be08d56; // 0x44(0x04)
	float *d53688415c; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.*7b2d5b020a
// Size: 0x18 (Inherited: 0x00)
struct F*7b2d5b020a {
	struct FName BoneName; // 0x00(0x08)
	struct FName SourceBoneName; // 0x08(0x08)
	enum class EAxis *09cf130fc2; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*ada7c544f6
// Size: 0x08 (Inherited: 0x00)
struct F*ada7c544f6 {
	int32 *386fe17c7f; // 0x00(0x04)
	enum class EAxis *09cf130fc2; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*05bb5b9d81
// Size: 0x10 (Inherited: 0x00)
struct F*05bb5b9d81 {
	struct FName GroupName; // 0x00(0x08)
	enum class *8e285791d6 *ed1ab93e0f; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*515b98ffe7
// Size: 0x40 (Inherited: 0x00)
struct F*515b98ffe7 {
	bool *a1c3e688cf; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *99214b0afa; // 0x10(0x30)
};

// ScriptStruct Engine.*1600866876
// Size: 0x80 (Inherited: 0x00)
struct F*1600866876 {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Engine.*f437916f76
// Size: 0x48 (Inherited: 0x00)
struct F*f437916f76 {
	struct UAnimationAsset* *0b3e5abbe6; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.*c74ca801af
// Size: 0x18 (Inherited: 0x00)
struct F*c74ca801af {
	struct FName *55ca4ffcd7; // 0x00(0x08)
	struct FName *5a057d8e0f; // 0x08(0x08)
	float *048dd649a0; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x100 (Inherited: 0x00)
struct FRootMotionSourceGroup {
	char pad_0[0xe8]; // 0x00(0xe8)
	bool *95e65b7a41; // 0xe8(0x01)
	bool *3269dbc9cf; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FVector_NetQuantize10 *a28697ba3b; // 0xec(0x0c)
	bool *5ca9b566b1; // 0xf8(0x01)
	struct F*63ad18f9a0 *c6e131badf; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// ScriptStruct Engine.*63ad18f9a0
// Size: 0x01 (Inherited: 0x00)
struct F*63ad18f9a0 {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*d9f0d7c69c
// Size: 0xd0 (Inherited: 0xa0)
struct F*d9f0d7c69c : F*6a646f5d94 {
	struct FRotator Rotation; // 0x98(0x0c)
	float Distance; // 0xa4(0x04)
	float Height; // 0xa8(0x04)
	bool *ea3c5d5be8; // 0xac(0x01)
	struct U*e6746d9844* *865de25d47; // 0xb0(0x08)
	struct UCurveFloat* *6b1726fb3b; // 0xb8(0x08)
	char pad_C5[0xb]; // 0xc5(0x0b)
};

// ScriptStruct Engine.*6a646f5d94
// Size: 0xa0 (Inherited: 0x00)
struct F*6a646f5d94 {
	char pad_0[0x10]; // 0x00(0x10)
	uint16 Priority; // 0x10(0x02)
	uint16 *4cc3b9dc16; // 0x12(0x02)
	enum class ERootMotionAccumulateMode *31eb3bc436; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName *b5bab39c62; // 0x18(0x08)
	float StartTime; // 0x20(0x04)
	float CurrentTime; // 0x24(0x04)
	float *4106cf1064; // 0x28(0x04)
	float Duration; // 0x2c(0x04)
	struct F*c1e7388a9b Status; // 0x30(0x01)
	struct F*63ad18f9a0 Settings; // 0x31(0x01)
	bool *87ced2d292; // 0x32(0x01)
	char pad_33[0xd]; // 0x33(0x0d)
	struct F*515b98ffe7 *bd0a57294d; // 0x40(0x40)
	struct F*6dc743e90f *48b09509b7; // 0x80(0x14)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*6dc743e90f
// Size: 0x14 (Inherited: 0x00)
struct F*6dc743e90f {
	enum class *46b4b581d7 Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *f404f10dde; // 0x04(0x0c)
	float *c765353093; // 0x10(0x04)
};

// ScriptStruct Engine.*c1e7388a9b
// Size: 0x01 (Inherited: 0x00)
struct F*c1e7388a9b {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*0af48e83a8
// Size: 0xd0 (Inherited: 0xa0)
struct F*0af48e83a8 : F*6a646f5d94 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector *a8870b024a; // 0xa4(0x0c)
	struct FVector TargetLocation; // 0xb0(0x0c)
	bool *636ae39ed3; // 0xbc(0x01)
	struct U*e6746d9844* *865de25d47; // 0xc0(0x08)
	struct UCurveFloat* *6b1726fb3b; // 0xc8(0x08)
};

// ScriptStruct Engine.*427f7bd7de
// Size: 0xc0 (Inherited: 0xa0)
struct F*427f7bd7de : F*6a646f5d94 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector TargetLocation; // 0xa4(0x0c)
	bool *636ae39ed3; // 0xb0(0x01)
	struct U*e6746d9844* *865de25d47; // 0xb8(0x08)
};

// ScriptStruct Engine.*f519d8585a
// Size: 0xe0 (Inherited: 0xa0)
struct F*f519d8585a : F*6a646f5d94 {
	struct FVector Location; // 0x98(0x0c)
	struct AActor* *e492e33ada; // 0xa8(0x08)
	float Radius; // 0xb0(0x04)
	float Strength; // 0xb4(0x04)
	bool *e9045a51f0; // 0xb8(0x01)
	bool *6a5a99bcd6; // 0xb9(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct UCurveFloat* *d9fe9d7897; // 0xc0(0x08)
	struct UCurveFloat* *49d8d8c542; // 0xc8(0x08)
	bool *f5aa61c72b; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FRotator *2deaa68673; // 0xd4(0x0c)
};

// ScriptStruct Engine.*b3603c7764
// Size: 0xb0 (Inherited: 0xa0)
struct F*b3603c7764 : F*6a646f5d94 {
	struct FVector force; // 0x98(0x0c)
	struct UCurveFloat* *49d8d8c542; // 0xa8(0x08)
};

// ScriptStruct Engine.*d11a7f4b1f
// Size: 0x48 (Inherited: 0x00)
struct F*d11a7f4b1f {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize100 Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool *2f2f465815; // 0x28(0x01)
	bool *28f3cfbd9d; // 0x29(0x01)
	bool *31d42fc9fc; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct UPrimitiveComponent* *6fe1f23690; // 0x30(0x08)
	struct FVector *603090e87f; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.*2a96cdbee5
// Size: 0x168 (Inherited: 0x00)
struct F*2a96cdbee5 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*0e21200897 RootMotion; // 0x08(0x160)
};

// ScriptStruct Engine.*0e21200897
// Size: 0x160 (Inherited: 0x00)
struct F*0e21200897 {
	bool *37789dceb0; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	float Position; // 0x10(0x04)
	struct FVector_NetQuantize100 Location; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x08)
	struct FName *1ca8681c64; // 0x38(0x08)
	bool *b129e7c018; // 0x40(0x01)
	bool *28f3cfbd9d; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FRootMotionSourceGroup *e13003e6e4; // 0x48(0x100)
	struct FVector_NetQuantize10 Acceleration; // 0x148(0x0c)
	struct FVector_NetQuantize10 LinearVelocity; // 0x154(0x0c)
};

// ScriptStruct Engine.*a6f7b095fb
// Size: 0x2c (Inherited: 0x00)
struct F*a6f7b095fb {
	int32 SortOrder; // 0x00(0x04)
	float *383a844699; // 0x04(0x04)
	float *9da3e80c58; // 0x08(0x04)
	float *e46b567073; // 0x0c(0x04)
	char *0352bf3917 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	struct F*87cf230eda *87cf230eda; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FVector *f3c745392e; // 0x14(0x0c)
	float *8e22a0bf04; // 0x20(0x04)
	float *3f385b264b; // 0x24(0x04)
	float *9be4236c51; // 0x28(0x04)
};

// ScriptStruct Engine.*e3354a98cb
// Size: 0x08 (Inherited: 0x00)
struct F*e3354a98cb {
	int32 *f9e8a3621e; // 0x00(0x04)
	int32 Num; // 0x04(0x04)
};

// ScriptStruct Engine.*23672d5787
// Size: 0x10 (Inherited: 0x00)
struct F*23672d5787 {
	struct FName *37ddc581e7; // 0x00(0x08)
	int32 *a91929da08; // 0x08(0x04)
	int32 InstanceId; // 0x0c(0x04)
};

// ScriptStruct Engine.*a45bd112ab
// Size: 0x40 (Inherited: 0x00)
struct F*a45bd112ab {
	struct FVector4 *9ccc8be317; // 0x00(0x10)
	struct FVector4 *ac0f2c122b; // 0x10(0x10)
	struct FVector4 *992de6163d; // 0x20(0x10)
	struct FVector4 *498725431a; // 0x30(0x10)
};

// ScriptStruct Engine.*dad7f4357c
// Size: 0x04 (Inherited: 0x00)
struct F*dad7f4357c {
	int32 RandomSeed; // 0x00(0x04)
};

// ScriptStruct Engine.*26c588250a
// Size: 0x50 (Inherited: 0x00)
struct F*26c588250a {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.*c632bc670b
// Size: 0xf8 (Inherited: 0x00)
struct F*c632bc670b {
	char pad_0[0xf8]; // 0x00(0xf8)
};

// ScriptStruct Engine.*d70ea1051a
// Size: 0x18 (Inherited: 0x00)
struct F*d70ea1051a {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*ddf4b0b011
// Size: 0x02 (Inherited: 0x00)
struct F*ddf4b0b011 {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Engine.*ebee4ee022
// Size: 0x18 (Inherited: 0x00)
struct F*ebee4ee022 {
	struct FName SourceBoneName; // 0x00(0x08)
	struct FName TargetBoneName; // 0x08(0x08)
	struct FName *df5b1599e0; // 0x10(0x08)
};

// ScriptStruct Engine.*1d49069ddd
// Size: 0x18 (Inherited: 0x00)
struct F*1d49069ddd {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> SlotNames; // 0x08(0x10)
};

// ScriptStruct Engine.*d30c1abfc5
// Size: 0x18 (Inherited: 0x00)
struct F*d30c1abfc5 {
	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct F*c9e986a2d4> *75a890da87; // 0x08(0x10)
};

// ScriptStruct Engine.*c9e986a2d4
// Size: 0x10 (Inherited: 0x00)
struct F*c9e986a2d4 {
	struct FName NodeName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct Engine.*ee7ba68263
// Size: 0x10 (Inherited: 0x00)
struct F*ee7ba68263 {
	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)
struct FReferencePose {
	struct FName PoseName; // 0x00(0x08)
	struct TArray<struct FTransform> ReferencePose; // 0x08(0x10)
};

// ScriptStruct Engine.*969d71bd84
// Size: 0x10 (Inherited: 0x00)
struct F*969d71bd84 {
	struct FName Name; // 0x00(0x08)
	int32 ParentIndex; // 0x08(0x04)
	enum class EBoneTranslationRetargetingMode *704f24f32c; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*f2fadbbf9a
// Size: 0x20 (Inherited: 0x00)
struct F*f2fadbbf9a {
	struct TArray<int32> *a5317be41d; // 0x00(0x10)
	struct TArray<int32> *648690fa8a; // 0x10(0x10)
};

// ScriptStruct Engine.*75525703c5
// Size: 0x470 (Inherited: 0x20)
struct F*75525703c5 : FAnimCurveBase {
	struct FVectorCurve *079bc5575e; // 0x20(0x170)
	struct FVectorCurve *a5b32a1550; // 0x190(0x170)
	struct FVectorCurve *580f37dfff; // 0x300(0x170)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x170 (Inherited: 0x20)
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve *a77b996849[0x03]; // 0x20(0x150)
};

// ScriptStruct Engine.*675a533342
// Size: 0x10 (Inherited: 0x00)
struct F*675a533342 {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float EndPosition; // 0x0c(0x04)
};

// ScriptStruct Engine.*688dd8cce0
// Size: 0x1e0 (Inherited: 0x00)
struct F*688dd8cce0 {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0xd8]; // 0x08(0xd8)
	bool *f7e4f9d69b; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *39e2dda7c2; // 0xe4(0x04)
	char pad_E8[0x28]; // 0xe8(0x28)
	struct TArray<int32> *3fba0b6118; // 0x110(0x10)
	struct TArray<int32> *ea0c93b73f; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct TArray<struct FAnimNotifyEvent> *53ccfa237f; // 0x140(0x10)
	float Position; // 0x150(0x04)
	float PlayRate; // 0x154(0x04)
	struct FAlphaBlend Blend; // 0x158(0x38)
	char pad_190[0x20]; // 0x190(0x20)
	int32 *f50b6975fc; // 0x1b0(0x04)
	char pad_1B4[0x2c]; // 0x1b4(0x2c)
};

// ScriptStruct Engine.*c4bee3ea12
// Size: 0x04 (Inherited: 0x00)
struct F*c4bee3ea12 {
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

// ScriptStruct Engine.*4bffd29219
// Size: 0x58 (Inherited: 0x50)
struct F*4bffd29219 : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*29683cadec
// Size: 0x98 (Inherited: 0x00)
struct F*29683cadec {
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

// ScriptStruct Engine.*327a2818a0
// Size: 0x1c (Inherited: 0x14)
struct F*327a2818a0 : F*5fd80a79a2 {
	float *876202aef0; // 0x14(0x04)
	enum class *f4b7eb4f8a *c46ea34ef6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.*5fd80a79a2
// Size: 0x14 (Inherited: 0x00)
struct F*5fd80a79a2 {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float Restitution; // 0x08(0x04)
	float ContactDistance; // 0x0c(0x04)
	char bSoftConstraint : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*07423d9b3b
// Size: 0x20 (Inherited: 0x14)
struct F*07423d9b3b : F*5fd80a79a2 {
	float *654854304c; // 0x14(0x04)
	float *992eb4f0d4; // 0x18(0x04)
	enum class *f4b7eb4f8a *e88e140e09; // 0x1c(0x01)
	enum class *f4b7eb4f8a *35a95e7666; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Engine.*ee014e2c62
// Size: 0x1c (Inherited: 0x14)
struct F*ee014e2c62 : F*5fd80a79a2 {
	float Limit; // 0x14(0x04)
	enum class *5c83c771ea *eaba27a657; // 0x18(0x01)
	enum class *5c83c771ea *9aa05a3d61; // 0x19(0x01)
	enum class *5c83c771ea *32fbd57e0d; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.*814225e588
// Size: 0x4c (Inherited: 0x00)
struct F*814225e588 {
	struct F*fa2baf0434 *5736ddbdf5; // 0x00(0x10)
	struct F*fa2baf0434 *24d398d68b; // 0x10(0x10)
	struct F*fa2baf0434 *0182cbb587; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0x0c)
	struct FVector AngularVelocityTarget; // 0x3c(0x0c)
	enum class EAngularDriveMode AngularDriveMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.*fa2baf0434
// Size: 0x10 (Inherited: 0x00)
struct F*fa2baf0434 {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxForce; // 0x08(0x04)
	char *2488bd6192 : 1; // 0x0c(0x01)
	char *467a6e7ba2 : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*df50a78572
// Size: 0x4c (Inherited: 0x00)
struct F*df50a78572 {
	struct FVector PositionTarget; // 0x00(0x0c)
	struct FVector VelocityTarget; // 0x0c(0x0c)
	struct F*fa2baf0434 *cc7757bd80; // 0x18(0x10)
	struct F*fa2baf0434 *cb6f32466a; // 0x28(0x10)
	struct F*fa2baf0434 *654a1b43e6; // 0x38(0x10)
	char *2488bd6192 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x1f0 (Inherited: 0x00)
struct FConstraintInstance {
	char pad_0[0x18]; // 0x00(0x18)
	struct FName *c20bd5945c; // 0x18(0x08)
	struct FName *2fbfe00907; // 0x20(0x08)
	struct FName *2c73f2bdff; // 0x28(0x08)
	struct FVector *9dba643eb6; // 0x30(0x0c)
	struct FVector *621f8e6bb6; // 0x3c(0x0c)
	struct FVector *62938a6b36; // 0x48(0x0c)
	struct FVector *d8cb58774d; // 0x54(0x0c)
	struct FVector *7c96a8e5bc; // 0x60(0x0c)
	struct FVector *f35e0e035c; // 0x6c(0x0c)
	struct FRotator *705016b443; // 0x78(0x0c)
	char *ae067688c3 : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	char pad_85[0x7]; // 0x85(0x07)
	struct F*45e8912236 *1fc15ccc9d; // 0x8c(0x104)
	char pad_190[0x60]; // 0x190(0x60)
};

// ScriptStruct Engine.*45e8912236
// Size: 0x104 (Inherited: 0x00)
struct F*45e8912236 {
	float ProjectionLinearTolerance; // 0x00(0x04)
	float ProjectionAngularTolerance; // 0x04(0x04)
	float *b07d315508; // 0x08(0x04)
	float *aa884a8ec6; // 0x0c(0x04)
	struct F*ee014e2c62 LinearLimit; // 0x10(0x1c)
	struct F*07423d9b3b *024acc3bd9; // 0x2c(0x20)
	struct F*327a2818a0 TwistLimit; // 0x4c(0x1c)
	struct F*df50a78572 *c2490a89cc; // 0x68(0x4c)
	struct F*814225e588 *c5d5e986ae; // 0xb4(0x4c)
	char *d571b06104 : 1; // 0x100(0x01)
	char bEnableProjection : 1; // 0x100(0x01)
	char bAngularBreakable : 1; // 0x100(0x01)
	char *77d0f9a10d : 1; // 0x100(0x01)
	char pad_100_4 : 4; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
};

// ScriptStruct Engine.*d61531db2a
// Size: 0x28 (Inherited: 0x00)
struct F*d61531db2a {
	struct FName *12fd968db1; // 0x00(0x08)
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

// ScriptStruct Engine.*10fb7a30ed
// Size: 0x08 (Inherited: 0x00)
struct F*10fb7a30ed {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.*11a380e10d
// Size: 0x2c (Inherited: 0x00)
struct F*11a380e10d {
	float DensityHeight; // 0x00(0x04)
	float DecayHeight; // 0x04(0x04)
	int32 MaxScatteringOrder; // 0x08(0x04)
	int32 *d21081a3eb; // 0x0c(0x04)
	int32 *9767246982; // 0x10(0x04)
	int32 *33aac3bd19; // 0x14(0x04)
	int32 *29ec9bf906; // 0x18(0x04)
	int32 InscatterAltitudeSampleNum; // 0x1c(0x04)
	int32 *8a9e8aa3d9; // 0x20(0x04)
	int32 *677652fce1; // 0x24(0x04)
	int32 *8ff71e4a11; // 0x28(0x04)
};

// ScriptStruct Engine.*713c5e64d2
// Size: 0xa8 (Inherited: 0x00)
struct F*713c5e64d2 {
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
struct FSoundAttenuationSettings : F*713c5e64d2 {
	char bAttenuate : 1; // 0xa8(0x01)
	char bSpatialize : 1; // 0xa8(0x01)
	char bAttenuateWithLPF : 1; // 0xa8(0x01)
	char bEnableListenerFocus : 1; // 0xa8(0x01)
	char bEnableOcclusion : 1; // 0xa8(0x01)
	char bUseComplexCollisionForOcclusion : 1; // 0xa8(0x01)
	char pad_A8_6 : 2; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class *3f7d477fb4 DistanceType; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float OmniRadius; // 0xb0(0x04)
	float StereoSpread; // 0xb4(0x04)
	enum class *a4f623669f SpatializationAlgorithm; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct U*0a451e3a03* SpatializationPluginSettings; // 0xc0(0x08)
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
	struct U*a1a2706517* OcclusionPluginSettings; // 0x110(0x08)
	struct U*fc7836c682* ReverbPluginSettings; // 0x118(0x08)
	float ReverbWetLevelMin; // 0x120(0x04)
	float ReverbWetLevelMax; // 0x124(0x04)
	float ReverbDistanceMin; // 0x128(0x04)
	float ReverbDistanceMax; // 0x12c(0x04)
};

// ScriptStruct Engine.*da50679f2e
// Size: 0x20 (Inherited: 0x00)
struct F*da50679f2e {
	struct FName ParamName; // 0x00(0x08)
	float FloatParam; // 0x08(0x04)
	bool BoolParam; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32 IntParam; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWaveParam; // 0x18(0x08)
};

// ScriptStruct Engine.*a94c5a4e3a
// Size: 0x08 (Inherited: 0x00)
struct F*a94c5a4e3a {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xa8 (Inherited: 0xa8)
struct FForceFeedbackAttenuationSettings : F*713c5e64d2 {
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x10(0x78)
	enum class EAttenuationShape AttenuationShape; // 0x88(0x01)
	float dBAttenuationAtMax; // 0x8c(0x04)
	struct FVector AttenuationShapeExtents; // 0x90(0x0c)
	float ConeOffset; // 0x9c(0x04)
	float FalloffDistance; // 0xa0(0x04)
};

// ScriptStruct Engine.*7be896d8e6
// Size: 0x80 (Inherited: 0x00)
struct F*7be896d8e6 {
	struct FMatrix Transform; // 0x00(0x40)
	struct FSplineParams SplineParams; // 0x40(0x38)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.SplineParams
// Size: 0x38 (Inherited: 0x00)
struct FSplineParams {
	struct FVector *2b69146134; // 0x00(0x0c)
	struct FVector *1b45769369; // 0x0c(0x0c)
	float *32cf77023b; // 0x18(0x04)
	struct FVector *45fd614dab; // 0x1c(0x0c)
	struct FVector *b74a854157; // 0x28(0x0c)
	float *be8a13b7bc; // 0x34(0x04)
};

// ScriptStruct Engine.*a8ada71f24
// Size: 0x28 (Inherited: 0x00)
struct F*a8ada71f24 {
	struct FStringAssetReference Template; // 0x00(0x10)
	float Probability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*9b484b0fed> *611616f01e; // 0x18(0x10)
};

// ScriptStruct Engine.*9b484b0fed
// Size: 0x0c (Inherited: 0x00)
struct F*9b484b0fed {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Step; // 0x08(0x04)
};

// ScriptStruct Engine.*f1ce078d04
// Size: 0x08 (Inherited: 0x00)
struct F*f1ce078d04 {
	float CellSize; // 0x00(0x04)
	float MaxRadius; // 0x04(0x04)
};

// ScriptStruct Engine.*df90c65c66
// Size: 0x20 (Inherited: 0x00)
struct F*df90c65c66 {
	int32 NumCascade; // 0x00(0x04)
	float *ff9f661715; // 0x04(0x04)
	float WaveLengthScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector4 FoamBias; // 0x10(0x10)
};

// ScriptStruct Engine.*c242f1248f
// Size: 0x24 (Inherited: 0x00)
struct F*c242f1248f {
	float Gravity; // 0x00(0x04)
	float Lambda; // 0x04(0x04)
	float Depth; // 0x08(0x04)
	float PeakEnhancement; // 0x0c(0x04)
	float Swell; // 0x10(0x04)
	float Fetch; // 0x14(0x04)
	float SpreadBlend; // 0x18(0x04)
	float ShortWavesFade; // 0x1c(0x04)
	float TimeScale; // 0x20(0x04)
};

// ScriptStruct Engine.*a2b535fde2
// Size: 0x18 (Inherited: 0x00)
struct F*a2b535fde2 {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct TArray<uint16> InstanceIndices; // 0x08(0x10)
};

// ScriptStruct Engine.*34044f7f1f
// Size: 0x24 (Inherited: 0x00)
struct F*34044f7f1f {
	struct FVector Center; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FVector Extent; // 0x18(0x0c)
};

// ScriptStruct Engine.*b53cbeaaaa
// Size: 0x28 (Inherited: 0x00)
struct F*b53cbeaaaa {
	struct FVector Position; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float PointSize; // 0x1c(0x04)
	float *4e49d24565; // 0x20(0x04)
	bool *f9eb8a7fe3; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.*f0b833478a
// Size: 0x34 (Inherited: 0x00)
struct F*f0b833478a {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float *4e49d24565; // 0x2c(0x04)
	bool *f9eb8a7fe3; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Engine.*5d428331b5
// Size: 0x28 (Inherited: 0x00)
struct F*5d428331b5 {
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

// ScriptStruct Engine.*716b1d68f9
// Size: 0x20 (Inherited: 0x00)
struct F*716b1d68f9 {
	struct TArray<bool> *550c16229c; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*f86f4b653b
// Size: 0x28 (Inherited: 0x00)
struct F*f86f4b653b {
	int32 Bones[0x08]; // 0x00(0x20)
	bool Weights[0x08]; // 0x20(0x08)
};

// ScriptStruct Engine.*26e8fbfd7d
// Size: 0x18 (Inherited: 0x00)
struct F*26e8fbfd7d {
	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	char bSavedLooping : 1; // 0x08(0x01)
	char bSavedPlaying : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SavedPosition; // 0x0c(0x04)
	float SavedPlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*cbe1f0c703
// Size: 0x58 (Inherited: 0x50)
struct F*cbe1f0c703 : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*98f625bbe3
// Size: 0x58 (Inherited: 0x50)
struct F*98f625bbe3 : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*59a815019c
// Size: 0x58 (Inherited: 0x00)
struct F*59a815019c {
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

// ScriptStruct Engine.*e6be071fa0
// Size: 0x64 (Inherited: 0x00)
struct F*e6be071fa0 {
	struct F*59a815019c *59a815019c; // 0x00(0x58)
	struct FVector SplineUpDir; // 0x58(0x0c)
};

// ScriptStruct Engine.*cf35bf3a14
// Size: 0x08 (Inherited: 0x00)
struct F*cf35bf3a14 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*00296bd9df
// Size: 0x50 (Inherited: 0x00)
struct F*00296bd9df {
	struct FMatrix Transform; // 0x00(0x40)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*a5364bb93d
// Size: 0x28 (Inherited: 0x00)
struct F*a5364bb93d {
	struct FVector *7ee5a78e7a; // 0x00(0x0c)
	int32 *b0c823632b; // 0x0c(0x04)
	struct FVector *bbd8a1e1d3; // 0x10(0x0c)
	int32 *ae0bd9bd3a; // 0x1c(0x04)
	int32 *6e92e6dff6; // 0x20(0x04)
	int32 *852a797ab8; // 0x24(0x04)
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

// ScriptStruct Engine.*35b0282878
// Size: 0x18 (Inherited: 0x00)
struct F*35b0282878 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*33d7e3970d
// Size: 0x90 (Inherited: 0x00)
struct F*33d7e3970d {
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

// ScriptStruct Engine.*c7179e5679
// Size: 0x20 (Inherited: 0x00)
struct F*c7179e5679 {
	struct UObject* Obj; // 0x00(0x08)
	struct UClass* *cc24b3eb11; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*bf651cc96c
// Size: 0x18 (Inherited: 0x00)
struct F*bf651cc96c {
	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.Timeline
// Size: 0xe0 (Inherited: 0x00)
struct FTimeline {
	enum class *76dbde8383 *183e36a51e; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Length; // 0x04(0x04)
	char bLooping : 1; // 0x08(0x01)
	char *bdac78466e : 1; // 0x08(0x01)
	char *f7e4f9d69b : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float PlayRate; // 0x0c(0x04)
	float Position; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*982f9a21f0> Events; // 0x18(0x10)
	struct TArray<struct F*129d794aa1> *d511dbe9c5; // 0x28(0x10)
	struct TArray<struct F*939948341b> *ea1bca7e83; // 0x38(0x10)
	struct TArray<struct F*52a78f9de0> *880d472402; // 0x48(0x10)
	DelegateProperty *91cb7a0e9a; // 0x58(0x10)
	DelegateProperty *2db0b31e75; // 0x68(0x10)
	char pad_78[0x48]; // 0x78(0x48)
	struct UObject* *48f4462237; // 0xc0(0x08)
	struct FName *dafb965606; // 0xc8(0x08)
	struct UProperty* *4b78ebeec3; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct Engine.*52a78f9de0
// Size: 0x70 (Inherited: 0x00)
struct F*52a78f9de0 {
	struct U*22e8771771* *103de9f10e; // 0x00(0x08)
	DelegateProperty *c3e9b63e47; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *6b6cf29b2d; // 0x20(0x08)
	struct UStructProperty* *717fd3046f; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*939948341b
// Size: 0x70 (Inherited: 0x00)
struct F*939948341b {
	struct UCurveFloat* *0796ed81e5; // 0x00(0x08)
	DelegateProperty *c3e9b63e47; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *fbedb1945b; // 0x20(0x08)
	struct UFloatProperty* *c619a3a88c; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*129d794aa1
// Size: 0x70 (Inherited: 0x00)
struct F*129d794aa1 {
	struct U*e6746d9844* VectorCurve; // 0x00(0x08)
	DelegateProperty *c3e9b63e47; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *7acb1fd117; // 0x20(0x08)
	struct UStructProperty* *c52561e134; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*982f9a21f0
// Size: 0x18 (Inherited: 0x00)
struct F*982f9a21f0 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	DelegateProperty *7545d222de; // 0x08(0x10)
};

// ScriptStruct Engine.*eb6db7778b
// Size: 0x38 (Inherited: 0x00)
struct F*eb6db7778b {
	struct TArray<bool> *5a69a99044; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float *3d5834f8f9[0x03]; // 0x20(0x0c)
	float Ranges[0x03]; // 0x2c(0x0c)
};

// ScriptStruct Engine.*b44f5b8163
// Size: 0x18 (Inherited: 0x00)
struct F*b44f5b8163 {
	struct FName CurveName; // 0x00(0x08)
	struct TArray<float> *2087e97d75; // 0x08(0x10)
};

// ScriptStruct Engine.*4acbba2716
// Size: 0x20 (Inherited: 0x00)
struct F*4acbba2716 {
	struct TArray<struct FVector> ScaleKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*e67f2758d4
// Size: 0x20 (Inherited: 0x00)
struct F*e67f2758d4 {
	struct TArray<struct FQuat> *201de806ab; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*20ed056134
// Size: 0x20 (Inherited: 0x00)
struct F*20ed056134 {
	struct TArray<struct FVector> *ba88307dc9; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*801b1a13da
// Size: 0x04 (Inherited: 0x00)
struct F*801b1a13da {
	int32 *81ac0a5b1c; // 0x00(0x04)
};

// ScriptStruct Engine.*886e0507e7
// Size: 0x20 (Inherited: 0x00)
struct F*886e0507e7 {
	struct TArray<struct F*d8d3e9448e> *42b71d73f3; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.*d8d3e9448e
// Size: 0x30 (Inherited: 0x00)
struct F*d8d3e9448e {
	struct TArray<struct FVector> *ba88307dc9; // 0x00(0x10)
	struct TArray<struct FQuat> *201de806ab; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// ScriptStruct Engine.*1de80caba8
// Size: 0x20 (Inherited: 0x00)
struct F*1de80caba8 {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *2643d9216a; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*42b4c80c8c
// Size: 0x1c (Inherited: 0x00)
struct F*42b4c80c8c {
	struct F*9c9496e2c8 *cff2c99e0f; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)
};

// ScriptStruct Engine.*9c9496e2c8
// Size: 0x18 (Inherited: 0x00)
struct F*9c9496e2c8 {
	int32 Indices[0x03]; // 0x00(0x0c)
	float Weights[0x03]; // 0x0c(0x0c)
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector *93dce25ba5; // 0x08(0x0c)
	float *c6e0e7064b; // 0x14(0x04)
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
	float *d0f575d40a; // 0x00(0x04)
	enum class *d8acf2a06f InterpolationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*3550fb1985
// Size: 0x90 (Inherited: 0x00)
struct F*3550fb1985 {
	struct TArray<struct FSmartName> *bdfc9f2157; // 0x00(0x10)
	struct TArray<struct F*21570341ca> Poses; // 0x10(0x10)
	struct TArray<struct FName> Tracks; // 0x20(0x10)
	struct TMap<struct FName, int32> *060af5672f; // 0x30(0x50)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// ScriptStruct Engine.*21570341ca
// Size: 0x30 (Inherited: 0x00)
struct F*21570341ca {
	struct TArray<struct FTransform> *27ba162ca0; // 0x00(0x10)
	struct TArray<bool> *ffa54d75ae; // 0x10(0x10)
	struct TArray<float> *28153d9a10; // 0x20(0x10)
};

// ScriptStruct Engine.*45829eece0
// Size: 0x30 (Inherited: 0x00)
struct F*45829eece0 {
	struct FName *8740b0572e; // 0x00(0x08)
	int32 *9283f908fe; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*b66b99cac2> States; // 0x10(0x10)
	struct TArray<struct F*4e2fa86b66> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.*4e2fa86b66
// Size: 0x40 (Inherited: 0x08)
struct F*4e2fa86b66 : F*3faaef3903 {
	int32 *2511715691; // 0x08(0x04)
	int32 NextState; // 0x0c(0x04)
	float CrossfadeDuration; // 0x10(0x04)
	int32 *fe63f856cc; // 0x14(0x04)
	int32 *f97f62e187; // 0x18(0x04)
	int32 *f465856fb7; // 0x1c(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	struct UBlendProfile* BlendProfile; // 0x30(0x08)
	enum class *7807b0b342 LogicType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.*3faaef3903
// Size: 0x08 (Inherited: 0x00)
struct F*3faaef3903 {
	struct FName StateName; // 0x00(0x08)
};

// ScriptStruct Engine.*b66b99cac2
// Size: 0x48 (Inherited: 0x00)
struct F*b66b99cac2 {
	struct FName StateName; // 0x00(0x08)
	struct TArray<struct F*9132927c5d> Transitions; // 0x08(0x10)
	int32 *21daa47301; // 0x18(0x04)
	int32 *fe63f856cc; // 0x1c(0x04)
	int32 *f97f62e187; // 0x20(0x04)
	int32 *fe31562c54; // 0x24(0x04)
	bool *efdd30a7e3; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 *4394b6062e; // 0x2c(0x04)
	struct TArray<int32> *85ac2e8c27; // 0x30(0x10)
	bool *4a6a50ceab; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Engine.*9132927c5d
// Size: 0x20 (Inherited: 0x00)
struct F*9132927c5d {
	int32 *23fbf359e0; // 0x00(0x04)
	int32 *a2a847fe3e; // 0x04(0x04)
	int32 TransitionIndex; // 0x08(0x04)
	bool *8e11b82e2e; // 0x0c(0x01)
	bool *692e96be24; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<int32> *ff47a754cf; // 0x10(0x10)
};

// ScriptStruct Engine.*ff098888e4
// Size: 0x28 (Inherited: 0x08)
struct F*ff098888e4 : F*3faaef3903 {
	struct TArray<struct F*f56a2ab010> Transitions; // 0x08(0x10)
	int32 *21daa47301; // 0x18(0x04)
	int32 *fe63f856cc; // 0x1c(0x04)
	int32 *f97f62e187; // 0x20(0x04)
	int32 *fe31562c54; // 0x24(0x04)
};

// ScriptStruct Engine.*f56a2ab010
// Size: 0x10 (Inherited: 0x00)
struct F*f56a2ab010 {
	struct FName *84f6d225bf; // 0x00(0x08)
	bool *91e369e3fd; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 TransitionIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*fec4c3bcb8
// Size: 0x40 (Inherited: 0x00)
struct F*fec4c3bcb8 {
	enum class EAdditiveAnimationType *11b69375a1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Engine.*f9710fbbb8
// Size: 0x28 (Inherited: 0x10)
struct F*f9710fbbb8 : F*aca6bf514b {
	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<bool> *ce21e5df12; // 0x18(0x10)
};

// ScriptStruct Engine.*aca6bf514b
// Size: 0x10 (Inherited: 0x00)
struct F*aca6bf514b {
	struct TArray<struct FTransform> Bones; // 0x00(0x10)
};

// ScriptStruct Engine.*8fad495f16
// Size: 0x10 (Inherited: 0x00)
struct F*8fad495f16 {
	struct TArray<int32> *ae0db51894; // 0x00(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*e7db86bd45
// Size: 0x80 (Inherited: 0x00)
struct F*e7db86bd45 {
	struct FName PrimaryAssetType; // 0x00(0x08)
	struct UClass* AssetBaseClass; // 0x08(0x20)
	struct UClass* *3626adbc2c; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	bool bIsEditorOnly; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FDirectoryPath> Directories; // 0x38(0x10)
	struct TArray<struct FStringAssetReference> *a9c3a01f54; // 0x48(0x10)
	struct F*f9ffb81f61 Rules; // 0x58(0x10)
	struct TArray<struct FString> *5dd775c3b1; // 0x68(0x10)
	bool *b70d6d5660; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 *f5a85af871; // 0x7c(0x04)
};

// ScriptStruct Engine.*f9ffb81f61
// Size: 0x10 (Inherited: 0x00)
struct F*f9ffb81f61 {
	int32 Priority; // 0x00(0x04)
	bool *cca319aa22; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 ChunkId; // 0x08(0x04)
	enum class EPrimaryAssetCookRule CookRule; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*6803570612
// Size: 0x10 (Inherited: 0x00)
struct F*6803570612 {
	struct UAnimationAsset* *0b3e5abbe6; // 0x00(0x08)
	struct UAnimationAsset* *921db764bc; // 0x08(0x08)
};

// ScriptStruct Engine.*6940be5c2b
// Size: 0x20 (Inherited: 0x00)
struct F*6940be5c2b {
	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.*496a9aa88c
// Size: 0x18 (Inherited: 0x00)
struct F*496a9aa88c {
	struct FStringAssetReference PerformanceTestmap; // 0x00(0x10)
	int32 TestTimer; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*0edc55cd4d
// Size: 0x1f0 (Inherited: 0x00)
struct F*0edc55cd4d {
	struct FFilePath *90d106dce1; // 0x00(0x10)
	struct F*a7ad69851b *bc1421b1e0; // 0x10(0x150)
	struct F*4800da72e5 *176bfc4b30; // 0x160(0x60)
	struct F*304bfb7a0d *e91e93e058; // 0x1c0(0x20)
	struct FFilePath *83ee2199dd; // 0x1e0(0x10)
};

// ScriptStruct Engine.*304bfb7a0d
// Size: 0x20 (Inherited: 0x00)
struct F*304bfb7a0d {
	struct FDirectoryPath *be06c4f0db; // 0x00(0x10)
	struct FString *5fc8a3e024; // 0x10(0x10)
};

// ScriptStruct Engine.*4800da72e5
// Size: 0x60 (Inherited: 0x00)
struct F*4800da72e5 {
	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.*a7ad69851b
// Size: 0x150 (Inherited: 0x00)
struct F*a7ad69851b {
	struct F*af527bc34e Diffuse; // 0x00(0x20)
	struct F*af527bc34e Normal; // 0x20(0x20)
	struct F*af527bc34e StaticMesh; // 0x40(0x20)
	struct F*af527bc34e ReimportStaticMesh; // 0x60(0x20)
	struct F*af527bc34e BlendShapeMesh; // 0x80(0x20)
	struct F*af527bc34e MorphMesh; // 0xa0(0x20)
	struct F*af527bc34e SkeletalMesh; // 0xc0(0x20)
	struct F*af527bc34e Animation; // 0xe0(0x20)
	struct F*af527bc34e Sound; // 0x100(0x20)
	struct F*af527bc34e SurroundSound; // 0x120(0x20)
	struct TArray<struct F*af527bc34e> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.*af527bc34e
// Size: 0x20 (Inherited: 0x00)
struct F*af527bc34e {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct F*fe9949eb3d> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.*fe9949eb3d
// Size: 0x20 (Inherited: 0x00)
struct F*fe9949eb3d {
	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.*9ead6f8116
// Size: 0x30 (Inherited: 0x00)
struct F*9ead6f8116 {
	struct FFilePath *565cbe9306; // 0x00(0x10)
	struct FFilePath *3bf84e757d; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// ScriptStruct Engine.*49cd5ea799
// Size: 0x10 (Inherited: 0x00)
struct F*49cd5ea799 {
	struct FFilePath DefaultParticleAsset; // 0x00(0x10)
};

// ScriptStruct Engine.*339961fc7f
// Size: 0x30 (Inherited: 0x00)
struct F*339961fc7f {
	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.*f269be5282
// Size: 0x38 (Inherited: 0x00)
struct F*f269be5282 {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct F*fe9949eb3d> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.*9350a62a0b
// Size: 0x60 (Inherited: 0x00)
struct F*9350a62a0b {
	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.*e40e4deb7f
// Size: 0x3c (Inherited: 0x00)
struct F*e40e4deb7f {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.*ddbe12c8aa
// Size: 0x20 (Inherited: 0x00)
struct F*ddbe12c8aa {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *cd7f15e9a2; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*78ae90f5c6
// Size: 0x18 (Inherited: 0x00)
struct F*78ae90f5c6 {
	struct UObject* *9291e0f500; // 0x00(0x08)
	struct FVector2D *5dfab402c9; // 0x08(0x08)
	float *f8e2bf2e4a; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*f3fee66915
// Size: 0x18 (Inherited: 0x00)
struct F*f3fee66915 {
	struct UClass* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)
};

// ScriptStruct Engine.*5b8ec25c09
// Size: 0xf8 (Inherited: 0x00)
struct F*5b8ec25c09 {
	struct FName VarName; // 0x00(0x08)
	struct FGuid *632f029826; // 0x08(0x10)
	struct F*7e1b7fab5a VarType; // 0x18(0x80)
	struct FString FriendlyName; // 0x98(0x10)
	struct FText Category; // 0xa8(0x18)
	uint64 PropertyFlags; // 0xc0(0x08)
	struct FName *4fb153315e; // 0xc8(0x08)
	enum class ELifetimeCondition *a9396e536f; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct F*bb43cda882> *5e4ffa4dbd; // 0xd8(0x10)
	struct FString DefaultValue; // 0xe8(0x10)
};

// ScriptStruct Engine.*bb43cda882
// Size: 0x18 (Inherited: 0x00)
struct F*bb43cda882 {
	struct FName *2a03981e76; // 0x00(0x08)
	struct FString *dc57d1dc32; // 0x08(0x10)
};

// ScriptStruct Engine.*1dfbedf0fa
// Size: 0x01 (Inherited: 0x00)
struct F*1dfbedf0fa {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*d530033c3c
// Size: 0x80 (Inherited: 0x00)
struct F*d530033c3c {
	struct FName PlatformName; // 0x00(0x08)
	bool *4f1b498c01; // 0x08(0x01)
	bool *e8e2c68a3e; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FName> *e16def3baf; // 0x10(0x10)
	SetProperty ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// ScriptStruct Engine.*a24d0ee5fd
// Size: 0x18 (Inherited: 0x00)
struct F*a24d0ee5fd {
	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid *5e6c947a48; // 0x08(0x10)
};

// ScriptStruct Engine.*b2f2f9f58a
// Size: 0x18 (Inherited: 0x00)
struct F*b2f2f9f58a {
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
	struct TArray<struct F*a32e481cc4> CustomResponses; // 0x08(0x10)
};

// ScriptStruct Engine.*09bb7de291
// Size: 0x18 (Inherited: 0x00)
struct F*09bb7de291 {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
	enum class ECollisionResponse DefaultResponse; // 0x10(0x01)
	bool bTraceType; // 0x11(0x01)
	bool bStaticObject; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Engine.*c2196d8fab
// Size: 0x60 (Inherited: 0x00)
struct F*c2196d8fab {
	struct FName Name; // 0x00(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName ObjectTypeName; // 0x10(0x08)
	struct TArray<struct F*a32e481cc4> CustomResponses; // 0x18(0x10)
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

// ScriptStruct Engine.*ccfc73b3de
// Size: 0xb8 (Inherited: 0x00)
struct F*ccfc73b3de {
	struct TArray<struct F*126a126362> PathData; // 0x00(0x10)
	struct F*126a126362 LastTraceDestination; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FHitResult HitResult; // 0x30(0x88)
};

// ScriptStruct Engine.*126a126362
// Size: 0x1c (Inherited: 0x00)
struct F*126a126362 {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Time; // 0x18(0x04)
};

// ScriptStruct Engine.*cfa199a4f8
// Size: 0x130 (Inherited: 0x00)
struct F*cfa199a4f8 {
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

// ScriptStruct Engine.*eac882126f
// Size: 0x18 (Inherited: 0x00)
struct F*eac882126f {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*fb8367838c
// Size: 0x08 (Inherited: 0x00)
struct F*fb8367838c {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*8e68bd796f
// Size: 0x10 (Inherited: 0x00)
struct F*8e68bd796f {
	struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*f497c92dc8
// Size: 0x50 (Inherited: 0x00)
struct F*f497c92dc8 {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*8d734a0550> *7778381e69; // 0x08(0x10)
	char pad_18[0x38]; // 0x18(0x38)
};

// ScriptStruct Engine.*8d734a0550
// Size: 0x18 (Inherited: 0x00)
struct F*8d734a0550 {
	struct FName PropertyName; // 0x00(0x08)
	int32 ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* *7de8ac8a84; // 0x10(0x08)
};

// ScriptStruct Engine.*2d43941071
// Size: 0x10 (Inherited: 0x00)
struct F*2d43941071 {
	struct UFunction* *38c346d7d2; // 0x00(0x08)
	int32 *c79095967c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*66790d08bd
// Size: 0x01 (Inherited: 0x00)
struct F*66790d08bd {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*a6c93df757
// Size: 0x08 (Inherited: 0x00)
struct F*a6c93df757 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*bb91940795
// Size: 0x1e0 (Inherited: 0x00)
struct F*bb91940795 {
	char pad_0[0x1e0]; // 0x00(0x1e0)
};

// ScriptStruct Engine.*e533e45b50
// Size: 0x14 (Inherited: 0x00)
struct F*e533e45b50 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*48754f2530
// Size: 0x01 (Inherited: 0x00)
struct F*48754f2530 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*ddf54b5f48
// Size: 0xb0 (Inherited: 0x00)
struct F*ddf54b5f48 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*5f1808094a
// Size: 0x20 (Inherited: 0x00)
struct F*5f1808094a {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.*1b31fab98d
// Size: 0x90 (Inherited: 0x20)
struct F*1b31fab98d : F*5f1808094a {
	struct TArray<struct FVector> *cd4e49cc9b; // 0x20(0x10)
	struct FBox *140e83972a; // 0x30(0x1c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FTransform Transform; // 0x50(0x30)
	char pad_80[0x10]; // 0x80(0x10)
};

// ScriptStruct Engine.*c7e282d6b6
// Size: 0xa0 (Inherited: 0x20)
struct F*c7e282d6b6 : F*5f1808094a {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float X; // 0x88(0x04)
	float Y; // 0x8c(0x04)
	float Z; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*045e74e661
// Size: 0x70 (Inherited: 0x20)
struct F*045e74e661 : F*5f1808094a {
	struct FMatrix TM; // 0x20(0x40)
	struct FVector Center; // 0x60(0x0c)
	float Radius; // 0x6c(0x04)
};

// ScriptStruct Engine.*0192cb629d
// Size: 0x90 (Inherited: 0x20)
struct F*0192cb629d : F*5f1808094a {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float Radius; // 0x88(0x04)
	float Length; // 0x8c(0x04)
};

// ScriptStruct Engine.*2e556aea7d
// Size: 0x48 (Inherited: 0x00)
struct F*2e556aea7d {
	struct TArray<struct F*045e74e661> *a5376d5396; // 0x00(0x10)
	struct TArray<struct F*c7e282d6b6> *cb7ed82207; // 0x10(0x10)
	struct TArray<struct F*0192cb629d> *f33f212975; // 0x20(0x10)
	struct TArray<struct F*1b31fab98d> *fc96e7af28; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.*b917cfcde2
// Size: 0x30 (Inherited: 0x00)
struct F*b917cfcde2 {
	struct TArray<struct F*e072f468be> *96b68147cc; // 0x00(0x10)
	struct TArray<struct F*a059d8de80> *598bb1e34f; // 0x10(0x10)
	struct TArray<struct F*0f9c3b813e> *20e1ef077a; // 0x20(0x10)
};

// ScriptStruct Engine.*0f9c3b813e
// Size: 0x10 (Inherited: 0x00)
struct F*0f9c3b813e {
	struct TArray<struct FVector2D> *cd4e49cc9b; // 0x00(0x10)
};

// ScriptStruct Engine.*a059d8de80
// Size: 0x14 (Inherited: 0x00)
struct F*a059d8de80 {
	struct FVector2D Center; // 0x00(0x08)
	float Width; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float Angle; // 0x10(0x04)
};

// ScriptStruct Engine.*e072f468be
// Size: 0x0c (Inherited: 0x00)
struct F*e072f468be {
	struct FVector2D Center; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct Engine.*f00cf5419d
// Size: 0x30 (Inherited: 0x00)
struct F*f00cf5419d {
	struct FName ProfileName; // 0x00(0x08)
	struct F*d61531db2a *d61531db2a; // 0x08(0x28)
};

// ScriptStruct Engine.*1afc032eaa
// Size: 0x28 (Inherited: 0x00)
struct F*1afc032eaa {
	struct TArray<int32> VertexIndices; // 0x00(0x10)
	int32 Direction; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName ItemName; // 0x18(0x08)
	int32 PolyFlags; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*d475dd3f1a
// Size: 0x18 (Inherited: 0x00)
struct F*d475dd3f1a {
	struct FString Value; // 0x00(0x10)
	struct FVector2D *b6f0764592; // 0x10(0x08)
};

// ScriptStruct Engine.*5ec46437d3
// Size: 0x28 (Inherited: 0x00)
struct F*5ec46437d3 {
	float *81cbac9991; // 0x00(0x04)
	float *41a8ff19f6; // 0x04(0x04)
	float *39944335de; // 0x08(0x04)
	float *7ed0b2e885; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x08)
	struct UFont* *d8087eb6bc; // 0x18(0x08)
	struct FVector2D *8b6ca42329; // 0x20(0x08)
};

// ScriptStruct Engine.*f249c16e15
// Size: 0x18 (Inherited: 0x00)
struct F*f249c16e15 {
	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)
};

// ScriptStruct Engine.*08d289b359
// Size: 0x18 (Inherited: 0x00)
struct F*08d289b359 {
	struct FGuid *092efd01cf; // 0x00(0x10)
	struct FIntPoint ComponentId; // 0x10(0x08)
};

// ScriptStruct Engine.*306e3a1221
// Size: 0x80 (Inherited: 0x00)
struct F*306e3a1221 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AGameStateBase* GameState; // 0x08(0x08)
	struct UNetDriver* NetDriver; // 0x10(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x08)
	struct ULevel* PersistentLevel; // 0x20(0x08)
	SetProperty Levels; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.*25af40ca3b
// Size: 0x58 (Inherited: 0x50)
struct F*25af40ca3b : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*481cb54b29
// Size: 0x58 (Inherited: 0x50)
struct F*481cb54b29 : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*189d6b4ebc
// Size: 0x58 (Inherited: 0x50)
struct F*189d6b4ebc : F*327e2c5151 {
	enum class ETickingGroup *7c140ed331; // 0x08(0x01)
	enum class ETickingGroup *0fb89a0b79; // 0x09(0x01)
	char *3956a93ddf : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *f2324e263a : 1; // 0x0c(0x01)
	char *f330aecb94 : 1; // 0x0c(0x01)
	float TickInterval; // 0x40(0x04)
	char pad_56_4 : 4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// ScriptStruct Engine.*dd1a47cee8
// Size: 0x20 (Inherited: 0x00)
struct F*dd1a47cee8 {
	struct FVector *fb1959a54f; // 0x00(0x0c)
	struct FRotator *1dccf8b856; // 0x0c(0x0c)
	float *ae3a5f7715; // 0x18(0x04)
	bool *f77d35906c; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*7decbe1dec
// Size: 0x20 (Inherited: 0x00)
struct F*7decbe1dec {
	struct FString *54882efe2e; // 0x00(0x10)
	struct FString *a92c6d55f6; // 0x10(0x10)
};

// ScriptStruct Engine.*53e10b7853
// Size: 0x10 (Inherited: 0x00)
struct F*53e10b7853 {
	struct FName *d5c4823d13; // 0x00(0x08)
	struct FName *f4d624b8f0; // 0x08(0x08)
};

// ScriptStruct Engine.*c345caf06a
// Size: 0x40 (Inherited: 0x00)
struct F*c345caf06a {
	struct FName ObjectName; // 0x00(0x08)
	struct FName OldClassName; // 0x08(0x08)
	struct FName NewClassName; // 0x10(0x08)
	struct FName OldSubobjName; // 0x18(0x08)
	struct FName NewSubobjName; // 0x20(0x08)
	struct FName *ab37b5a30c; // 0x28(0x08)
	struct FName *fcb02aa056; // 0x30(0x08)
	bool InstanceOnly; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.*0ae4a8d9ad
// Size: 0x10 (Inherited: 0x00)
struct F*0ae4a8d9ad {
	struct FName OldGameName; // 0x00(0x08)
	struct FName NewGameName; // 0x08(0x08)
};

// ScriptStruct Engine.*e3a5775411
// Size: 0x30 (Inherited: 0x00)
struct F*e3a5775411 {
	uint64 Key; // 0x00(0x08)
	struct FString *18b3890652; // 0x08(0x10)
	struct FColor DisplayColor; // 0x18(0x04)
	float *0bdad3f427; // 0x1c(0x04)
	float *5b41aeafe0; // 0x20(0x04)
	struct FVector2D *a282493f22; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*ca6e9f58f0
// Size: 0x28 (Inherited: 0x00)
struct F*ca6e9f58f0 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FString Comment; // 0x18(0x10)
};

// ScriptStruct Engine.*4fc053d54d
// Size: 0x28 (Inherited: 0x00)
struct F*4fc053d54d {
	struct FString StatName; // 0x00(0x10)
	struct TArray<struct F*11d1dc2a49> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*11d1dc2a49
// Size: 0x08 (Inherited: 0x00)
struct F*11d1dc2a49 {
	float In; // 0x00(0x04)
	struct FColor Out; // 0x04(0x04)
};

// ScriptStruct Engine.WorldContext
// Size: 0x2a0 (Inherited: 0x00)
struct FWorldContext {
	struct TArray<struct F*50fa517ac7> *6e845a0cbb; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct FURL *dfec1c00f1; // 0x18(0x70)
	char pad_88[0x10]; // 0x88(0x10)
	struct TArray<struct F*81839ef2e0> *b22fe64d39; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UGameInstance* *d9161cd8f3; // 0xb0(0x08)
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FURL *cbdb4b9722; // 0xd0(0x70)
	struct UGameViewportClient* GameViewport; // 0x140(0x08)
	char pad_148[0x110]; // 0x148(0x110)
	struct TArray<struct U*b0f24f93f7*> *c0f8e6db4a; // 0x258(0x10)
	struct TArray<struct ULevel*> *d78af1966d; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)
	struct TArray<struct F*52c76088ce> PackagesToFullyLoad; // 0x280(0x10)
	struct U*3189c6f422* *3189c6f422; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// ScriptStruct Engine.*52c76088ce
// Size: 0x38 (Inherited: 0x00)
struct F*52c76088ce {
	enum class *04d6ac5fa9 *1030019a99; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> *0f2d8c6b12; // 0x18(0x10)
	struct TArray<struct UObject*> *35c6df49d4; // 0x28(0x10)
};

// ScriptStruct Engine.*81839ef2e0
// Size: 0x10 (Inherited: 0x00)
struct F*81839ef2e0 {
	struct UNetDriver* NetDriver; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*50fa517ac7
// Size: 0x10 (Inherited: 0x00)
struct F*50fa517ac7 {
	struct FName PackageName; // 0x00(0x08)
	char *61c627d8e6 : 1; // 0x08(0x01)
	char *290f19b2b0 : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32 LODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*71c8b5597f
// Size: 0x18 (Inherited: 0x00)
struct F*71c8b5597f {
	struct FName DefName; // 0x00(0x08)
	struct FName DriverClassName; // 0x08(0x08)
	struct FName DriverClassNameFallback; // 0x10(0x08)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x1c8 (Inherited: 0x00)
struct FRuntimeCurveLinearColor {
	struct FRichCurve *76a43a7b48[0x04]; // 0x00(0x1c0)
	struct U*22e8771771* ExternalCurve; // 0x1c0(0x08)
};

// ScriptStruct Engine.*5131b63981
// Size: 0x10 (Inherited: 0x00)
struct F*5131b63981 {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x20 (Inherited: 0x00)
struct FPreviewMeshCollectionEntry {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x20)
};

// ScriptStruct Engine.*7297c91968
// Size: 0x04 (Inherited: 0x00)
struct F*7297c91968 {
	bool *fe5cb3076a; // 0x00(0x01)
	bool *e24984a1bf; // 0x01(0x01)
	bool *8ce33628c0; // 0x02(0x01)
	bool *ef16bef5d1; // 0x03(0x01)
};

// ScriptStruct Engine.*720f99d694
// Size: 0x24 (Inherited: 0x00)
struct F*720f99d694 {
	struct FVector2D UVScale; // 0x00(0x08)
	struct FVector2D *358c43d60f; // 0x08(0x08)
	struct FVector Tangent; // 0x10(0x0c)
	float *99d9a90cda; // 0x1c(0x04)
	int32 *b3b6327f82; // 0x20(0x04)
};

// ScriptStruct Engine.*13efe27266
// Size: 0x20 (Inherited: 0x00)
struct F*13efe27266 {
	struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
	struct F*f9ffb81f61 Rules; // 0x10(0x10)
};

// ScriptStruct Engine.*94dae87bfe
// Size: 0x20 (Inherited: 0x00)
struct F*94dae87bfe {
	struct FString Old; // 0x00(0x10)
	struct FString New; // 0x10(0x10)
};

// ScriptStruct Engine.*1e6958a1a8
// Size: 0x20 (Inherited: 0x00)
struct F*1e6958a1a8 {
	struct FText DisplayName; // 0x00(0x18)
	int32 MaxChannels; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*7fd8b39aa9
// Size: 0x10 (Inherited: 0x00)
struct F*7fd8b39aa9 {
	enum class EPhysicalSurface Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.*6bfbb25128
// Size: 0x10 (Inherited: 0x00)
struct F*6bfbb25128 {
	struct FName *0dc9b5729b; // 0x00(0x08)
	struct FVector2D *566162972c; // 0x08(0x08)
};

// ScriptStruct Engine.*b46bba5fea
// Size: 0x38 (Inherited: 0x00)
struct F*b46bba5fea {
	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct FString *4ebf4d2473; // 0x20(0x10)
	struct U*feb76ff399* Proxy; // 0x30(0x08)
};

// ScriptStruct Engine.*5f29ae24ef
// Size: 0x38 (Inherited: 0x28)
struct F*5f29ae24ef : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct U*f98789818a* Distribution; // 0x30(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x50 (Inherited: 0x28)
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct FVector *6ec1407f76; // 0x30(0x0c)
	struct FVector *06a8cc7827; // 0x3c(0x0c)
	struct U*00ce0779c7* Distribution; // 0x48(0x08)
};

// ScriptStruct Engine.*2af4c8e1e1
// Size: 0x18 (Inherited: 0x00)
struct F*2af4c8e1e1 {
	struct FName ComponentPropertyName; // 0x00(0x08)
	struct FName DelegatePropertyName; // 0x08(0x08)
	struct FName *07d867924c; // 0x10(0x08)
};

// ScriptStruct Engine.*f4af9143d7
// Size: 0x04 (Inherited: 0x00)
struct F*f4af9143d7 {
	char *a23e95fe43 : 1; // 0x00(0x01)
	char *053e87b966 : 1; // 0x00(0x01)
	char *c8d5aaf663 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*d0cd7ae40b
// Size: 0x20 (Inherited: 0x04)
struct F*d0cd7ae40b : F*f4af9143d7 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputActionName; // 0x08(0x08)
	enum class *b1be654dc6 *75cb4b6123; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FName *07d867924c; // 0x18(0x08)
};

// ScriptStruct Engine.*5eb8eb973e
// Size: 0x18 (Inherited: 0x04)
struct F*5eb8eb973e : F*f4af9143d7 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputAxisName; // 0x08(0x08)
	struct FName *07d867924c; // 0x10(0x08)
};

// ScriptStruct Engine.*85d4f32dee
// Size: 0x28 (Inherited: 0x04)
struct F*85d4f32dee : F*f4af9143d7 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x18)
	struct FName *07d867924c; // 0x20(0x08)
};

// ScriptStruct Engine.*b8f223866d
// Size: 0x38 (Inherited: 0x04)
struct F*b8f223866d : F*f4af9143d7 {
	char pad_4[0x4]; // 0x04(0x04)
	struct F*e9a600af5c *e9a600af5c; // 0x08(0x20)
	enum class *b1be654dc6 *75cb4b6123; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName *07d867924c; // 0x30(0x08)
};

// ScriptStruct Engine.*0d447c4c00
// Size: 0x10 (Inherited: 0x04)
struct F*0d447c4c00 : F*f4af9143d7 {
	enum class *b1be654dc6 *75cb4b6123; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName *07d867924c; // 0x08(0x08)
};

// ScriptStruct Engine.*8dffe37963
// Size: 0x20 (Inherited: 0x00)
struct F*8dffe37963 {
	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* *354adb2ee2; // 0x08(0x08)
	struct FGuid *c26c2aadaf; // 0x10(0x10)
};

// ScriptStruct Engine.*2af43a338b
// Size: 0x108 (Inherited: 0x100)
struct F*2af43a338b : F*04c96a12c4 {
	struct UEdGraphNode* *8674416241; // 0x100(0x08)
};

// ScriptStruct Engine.*04c96a12c4
// Size: 0x100 (Inherited: 0x00)
struct F*04c96a12c4 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FText *aa4d838969; // 0x08(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32 Grouping; // 0x68(0x04)
	int32 SectionID; // 0x6c(0x04)
	struct TArray<struct FString> *3d6425cf81; // 0x70(0x10)
	struct TArray<struct FString> *2167db1f74; // 0x80(0x10)
	struct TArray<struct FString> *b78b55cc4e; // 0x90(0x10)
	struct TArray<struct FString> *6d67e79ed2; // 0xa0(0x10)
	struct TArray<struct FString> *de8532cac7; // 0xb0(0x10)
	struct TArray<struct FString> *8c0a72108a; // 0xc0(0x10)
	struct TArray<struct FString> *5843f3d93d; // 0xd0(0x10)
	struct TArray<struct FString> *b8a2191a1a; // 0xe0(0x10)
	struct FString *2b4b6b27da; // 0xf0(0x10)
};

// ScriptStruct Engine.*16fc3891f4
// Size: 0x10 (Inherited: 0x00)
struct F*16fc3891f4 {
	struct FName *37ddc581e7; // 0x00(0x08)
	int32 BeginIndex; // 0x08(0x04)
	int32 EndIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*a973a8e6eb
// Size: 0xb0 (Inherited: 0x00)
struct F*a973a8e6eb {
	struct FString FontName; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char *bac0a801fe : 1; // 0x14(0x01)
	char *abbcbee160 : 1; // 0x14(0x01)
	char *a22aeda764 : 1; // 0x14(0x01)
	char *cdd7ea3b2a : 1; // 0x14(0x01)
	char *c198871af3 : 1; // 0x14(0x01)
	char pad_14_5 : 3; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	enum class *c24285bf50 *5002d8c5f2; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString *c949848cbc; // 0x20(0x10)
	struct FString *15b9ea584e; // 0x30(0x10)
	struct FString *b3d64d84c5; // 0x40(0x10)
	struct FString *4130889cb3; // 0x50(0x10)
	char *49443cdfe3 : 1; // 0x60(0x01)
	char *8dc217407a : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char *4ffae36d54 : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	int32 *8b0ce6af87; // 0x78(0x04)
	int32 *258fb49206; // 0x7c(0x04)
	int32 *a50b76c144; // 0x80(0x04)
	int32 *c2eeeac4ad; // 0x84(0x04)
	int32 *45f870a211; // 0x88(0x04)
	int32 *4aaae6a632; // 0x8c(0x04)
	int32 *06672e25af; // 0x90(0x04)
	int32 *4430fea0f9; // 0x94(0x04)
	char *b21df6adbc : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 Kerning; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 *d0771f23ff; // 0xa4(0x04)
	float *83db15f242; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*0238ed319b
// Size: 0x18 (Inherited: 0x00)
struct F*0238ed319b {
	int32 *01adccf11e; // 0x00(0x04)
	int32 *0688d3e291; // 0x04(0x04)
	int32 *151431989c; // 0x08(0x04)
	int32 *b748c09796; // 0x0c(0x04)
	bool *733f16e8dd; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *656bfff199; // 0x14(0x04)
};

// ScriptStruct Engine.*bffbff22bd
// Size: 0x18 (Inherited: 0x00)
struct F*bffbff22bd {
	struct U*1badf77bd5* *30ca25a8a3; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0xf0 (Inherited: 0x00)
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; // 0x00(0x78)
	struct FRuntimeFloatCurve *06dda8853c; // 0x78(0x78)
};

// ScriptStruct Engine.*459dd2ff54
// Size: 0x80 (Inherited: 0x00)
struct F*459dd2ff54 {
	struct UClass* ComponentClass; // 0x00(0x08)
	struct UActorComponent* *97911ad1aa; // 0x08(0x08)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct F*f497c92dc8 *cc5b27c031; // 0x30(0x50)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)
struct FComponentKey {
	struct UClass* *88140ede19; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x08)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// ScriptStruct Engine.*84f9130ca0
// Size: 0x30 (Inherited: 0x00)
struct F*84f9130ca0 {
	struct FString TabName; // 0x00(0x10)
	struct TArray<struct F*c94cfb30b5> Curves; // 0x10(0x10)
	float *ee6e174fb6; // 0x20(0x04)
	float *73d55e72a6; // 0x24(0x04)
	float *73cb45c03c; // 0x28(0x04)
	float *efd413ed04; // 0x2c(0x04)
};

// ScriptStruct Engine.*c94cfb30b5
// Size: 0x38 (Inherited: 0x00)
struct F*c94cfb30b5 {
	struct UObject* *38a9bdd8c6; // 0x00(0x08)
	struct FColor *21f28916ce; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32 *ca4c0c0043; // 0x20(0x04)
	int32 *6f00246c4a; // 0x24(0x04)
	int32 *5ac1313c69; // 0x28(0x04)
	int32 *98a042325a; // 0x2c(0x04)
	float *6c02389d4c; // 0x30(0x04)
	float *2d4c9e1357; // 0x34(0x04)
};

// ScriptStruct Engine.*9e0e6c65c7
// Size: 0x18 (Inherited: 0x00)
struct F*9e0e6c65c7 {
	struct U*dcbf48820b* Group; // 0x00(0x08)
	struct U*392c969c3f* Track; // 0x08(0x08)
	int32 *c567de7299; // 0x10(0x04)
	float *0a65fa6a4d; // 0x14(0x04)
};

// ScriptStruct Engine.*6de584f463
// Size: 0x30 (Inherited: 0x00)
struct F*6de584f463 {
	struct UClass* PawnClass; // 0x00(0x08)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct APawn* *6d2714dc5f; // 0x28(0x08)
};

// ScriptStruct Engine.*9c7603e1cf
// Size: 0x28 (Inherited: 0x00)
struct F*9c7603e1cf {
	struct FString GroupName; // 0x00(0x10)
	struct TArray<int32> *db4bbd52b2; // 0x10(0x10)
	char *f886214fa5 : 1; // 0x20(0x01)
	char *d9c2bf90e2 : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*8ab31eee70
// Size: 0x20 (Inherited: 0x00)
struct F*8ab31eee70 {
	struct UClass* *3cbe08992b; // 0x00(0x08)
	struct FString *ec799d88c9; // 0x08(0x10)
	int32 *281743693a; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*7a84b8084d
// Size: 0x08 (Inherited: 0x00)
struct F*7a84b8084d {
	float Time; // 0x00(0x04)
	char Value : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*f496f763e6
// Size: 0x18 (Inherited: 0x00)
struct F*f496f763e6 {
	float Time; // 0x00(0x04)
	float *96012d9391; // 0x04(0x04)
	struct FName *8447f0de96; // 0x08(0x08)
	int32 ShotNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*7d3e9407df
// Size: 0x10 (Inherited: 0x00)
struct F*7d3e9407df {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName EventName; // 0x08(0x08)
};

// ScriptStruct Engine.*266c5702e7
// Size: 0x20 (Inherited: 0x00)
struct F*266c5702e7 {
	float StartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	float *0f7e7cd0d9; // 0x10(0x04)
	float *3bccafdf62; // 0x14(0x04)
	float AnimPlayRate; // 0x18(0x04)
	char bLooping : 1; // 0x1c(0x01)
	char *ae2ab6f58f : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*d8fc78df14
// Size: 0x10 (Inherited: 0x00)
struct F*d8fc78df14 {
	struct TArray<struct F*8db1dd654d> Points; // 0x00(0x10)
};

// ScriptStruct Engine.*8db1dd654d
// Size: 0x10 (Inherited: 0x00)
struct F*8db1dd654d {
	struct FName GroupName; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*ac5c0aaf1e
// Size: 0x0c (Inherited: 0x00)
struct F*ac5c0aaf1e {
	float Time; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	int32 ClipIDNumber; // 0x08(0x04)
};

// ScriptStruct Engine.*9802bd8e27
// Size: 0x08 (Inherited: 0x00)
struct F*9802bd8e27 {
	float Time; // 0x00(0x04)
	enum class *b8c9672abe ToggleAction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*08426744e3
// Size: 0x18 (Inherited: 0x00)
struct F*08426744e3 {
	float Time; // 0x00(0x04)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USoundBase* Sound; // 0x10(0x08)
};

// ScriptStruct Engine.*3c7da861f7
// Size: 0x08 (Inherited: 0x00)
struct F*3c7da861f7 {
	float Time; // 0x00(0x04)
	enum class *0e8e66d5fd Action; // 0x04(0x01)
	enum class *603fd8e08d *088d9f8375; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Engine.*17049021c2
// Size: 0x38 (Inherited: 0x00)
struct F*17049021c2 {
	struct U*61fa57696e* Container; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Engine.*41da2a7d49
// Size: 0x110 (Inherited: 0x00)
struct F*41da2a7d49 {
	struct FName *37ddc581e7; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FIntPoint Size; // 0x40(0x08)
	struct FIntPoint *e1bdfbfd0d; // 0x48(0x08)
	char *3a898e08b1 : 1; // 0x50(0x01)
	char *ad0d3e47d0 : 1; // 0x50(0x01)
	char *d5cc348de5 : 1; // 0x50(0x01)
	char *a7ca269d3b : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FName> *98728bc83b; // 0x58(0x10)
	struct TArray<bool> *2185aab2cb; // 0x68(0x10)
	struct TArray<struct U*6e0e7da5cb*> *5c9de64aba; // 0x78(0x10)
	char pad_88[0x88]; // 0x88(0x88)
};

// ScriptStruct Engine.*5bfdbde439
// Size: 0x10 (Inherited: 0x00)
struct F*5bfdbde439 {
	struct UClass* Type; // 0x00(0x08)
	int32 Total; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*318b74e8fa
// Size: 0x20 (Inherited: 0x00)
struct F*318b74e8fa {
	struct FVector *f3c745392e; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInterface* DecalMaterial; // 0x10(0x08)
	int32 SortOrder; // 0x18(0x04)
	bool *21d1c0290e; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*3a960e3f84
// Size: 0x30 (Inherited: 0x00)
struct F*3a960e3f84 {
	struct FName *37ddc581e7; // 0x00(0x08)
	struct F*34044f7f1f Volume; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*3a68ba7271
// Size: 0x40 (Inherited: 0x00)
struct F*3a68ba7271 {
	struct FName *37ddc581e7; // 0x00(0x08)
	uint32 TypeId; // 0x08(0x04)
	char *13cf9c44cc : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*90b0f1f90d
// Size: 0x08 (Inherited: 0x00)
struct F*90b0f1f90d {
	struct ULevelBlockType* LevelBlockType; // 0x00(0x08)
};

// ScriptStruct Engine.*6a8547e265
// Size: 0x50 (Inherited: 0x00)
struct F*6a8547e265 {
	struct FName *37ddc581e7; // 0x00(0x08)
	struct U*f5b790015b* Data; // 0x08(0x08)
	struct FVector2D Offset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x30)
};

// ScriptStruct Engine.*65dca5f959
// Size: 0x40 (Inherited: 0x00)
struct F*65dca5f959 {
	struct FName *37ddc581e7; // 0x00(0x08)
	struct U*10ecc535a6* Data; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*41a7a92896
// Size: 0xb0 (Inherited: 0x00)
struct F*41a7a92896 {
	struct FString *37ddc581e7; // 0x00(0x10)
	struct FTransform *8109b2bf20; // 0x10(0x30)
	struct FString *7935368e76; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct TMap<struct FVector, struct FString> *301a1d37cc; // 0x58(0x50)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct Engine.*3c78e755c3
// Size: 0xa0 (Inherited: 0x00)
struct F*3c78e755c3 {
	struct FString *37ddc581e7; // 0x00(0x10)
	struct FTransform *8109b2bf20; // 0x10(0x30)
	struct FString *7d2bc0647b; // 0x40(0x10)
	struct FTransform *b2a9e5da8f; // 0x50(0x30)
	char pad_80[0x20]; // 0x80(0x20)
};

// ScriptStruct Engine.*ba0cdf5ce3
// Size: 0x60 (Inherited: 0x00)
struct F*ba0cdf5ce3 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.*313e4aa24a
// Size: 0xb0 (Inherited: 0x00)
struct F*313e4aa24a {
	char *abca81ca02 : 1; // 0x00(0x01)
	char *f60b86d973 : 1; // 0x00(0x01)
	char *8cabd7c74d : 1; // 0x00(0x01)
	char *a4a77323d1 : 1; // 0x00(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x00(0x01)
	char LightingChannel0 : 1; // 0x00(0x01)
	char LightingChannel1 : 1; // 0x00(0x01)
	char *24be6c06ae : 1; // 0x00(0x01)
	char *184a038c94 : 1; // 0x01(0x01)
	char *71c6ee3ccb : 1; // 0x01(0x01)
	char *73ddaf52f5 : 1; // 0x01(0x01)
	char bUseInverseSquaredFalloff : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UMaterialInterface* *afa901329a; // 0x08(0x20)
	struct U*cf31a3bb9b* IESTexture; // 0x28(0x20)
	float Temperature; // 0x48(0x04)
	float MaxDrawDistance; // 0x4c(0x04)
	float *787d5d6e14; // 0x50(0x04)
	float *13020ff272; // 0x54(0x04)
	float *55af6ba81f; // 0x58(0x04)
	float *fb7049e782; // 0x5c(0x04)
	float ShadowSharpen; // 0x60(0x04)
	float *c7b66d4bc4; // 0x64(0x04)
	struct FVector *fe33ea5bb0; // 0x68(0x0c)
	float *37e5a52ddb; // 0x74(0x04)
	float *4f3860d7eb; // 0x78(0x04)
	float *0fab366b74; // 0x7c(0x04)
	float *54d391116e; // 0x80(0x04)
	float BloomThreshold; // 0x84(0x04)
	struct FColor *93d417cb62; // 0x88(0x04)
	float RayStartOffsetDepthScale; // 0x8c(0x04)
	float AttenuationRadius; // 0x90(0x04)
	float LightFalloffExponent; // 0x94(0x04)
	float *6b2e3d4868; // 0x98(0x04)
	float *61994007cc; // 0x9c(0x04)
	float InnerConeAngle; // 0xa0(0x04)
	float OuterConeAngle; // 0xa4(0x04)
	float *5fa0a48a2c; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*29189f1933
// Size: 0x50 (Inherited: 0x00)
struct F*29189f1933 {
	struct FTransform Transform; // 0x00(0x30)
	float *90b10a53ee; // 0x30(0x04)
	float Alpha; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*bed2dc5ec6
// Size: 0x78 (Inherited: 0x00)
struct F*bed2dc5ec6 {
	struct UStaticMesh* Mesh; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *0ad6594bd6; // 0x20(0x10)
	char pad_30[0x1c]; // 0x30(0x1c)
	float CachedMaxDrawDistance; // 0x4c(0x04)
	char bImportantMesh : 1; // 0x50(0x01)
	char *64710ff684 : 1; // 0x50(0x01)
	char LightingChannel0 : 1; // 0x50(0x01)
	char LightingChannel1 : 1; // 0x50(0x01)
	char *24be6c06ae : 1; // 0x50(0x01)
	char *2c91172548 : 1; // 0x50(0x01)
	char *a44277cfda : 1; // 0x50(0x01)
	char pad_50_7 : 1; // 0x50(0x01)
	enum class *c276e29a27 IndoorOutdoorMask; // 0x51(0x01)
	enum class ECollisionChannel *80de7b7daf; // 0x52(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*a32e481cc4> *32020d821b; // 0x58(0x10)
	struct FName CollisionProfileName; // 0x68(0x08)
	int32 MeshSize; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.*b199b6bcc7
// Size: 0x40 (Inherited: 0x00)
struct F*b199b6bcc7 {
	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x08)
	int32 *894f9d8abd; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *4405a5633c; // 0x18(0x10)
	struct APlayerState* *ccc7eef317; // 0x28(0x08)
	struct APlayerState* *a187e367fc; // 0x30(0x08)
	struct UObject* *f6937fb4ee; // 0x38(0x08)
};

// ScriptStruct Engine.*3fe9f2582d
// Size: 0x48 (Inherited: 0x00)
struct F*3fe9f2582d {
	struct FString InputName; // 0x00(0x10)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Engine.*db4206dfa4
// Size: 0x40 (Inherited: 0x00)
struct F*db4206dfa4 {
	struct U*302a403f81* *8d3bc4d397; // 0x00(0x08)
	struct FGuid *2d1bea602a; // 0x08(0x10)
	struct FExpressionOutput Output; // 0x18(0x28)
};

// ScriptStruct Engine.*50af2e6b94
// Size: 0x50 (Inherited: 0x00)
struct F*50af2e6b94 {
	struct U*9f84bb5c4f* ExpressionInput; // 0x00(0x08)
	struct FGuid *2670b31aff; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x38)
};

// ScriptStruct Engine.*24557f2ee5
// Size: 0x128 (Inherited: 0x00)
struct F*24557f2ee5 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput *2076e1ee55; // 0x80(0x38)
	struct FExpressionInput DiffuseTexture; // 0xb8(0x38)
	struct FExpressionInput NormalTexture; // 0xf0(0x38)
};

// ScriptStruct Engine.*b134dd6495
// Size: 0x128 (Inherited: 0x00)
struct F*b134dd6495 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput DiffuseTexture; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
	struct FExpressionInput Specular; // 0xf0(0x38)
};

// ScriptStruct Engine.*658ea9fc43
// Size: 0xf0 (Inherited: 0x00)
struct F*658ea9fc43 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput DiffuseTexture; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
};

// ScriptStruct Engine.*370d1e6725
// Size: 0x18 (Inherited: 0x00)
struct F*370d1e6725 {
	struct FGuid *22e2843827; // 0x00(0x10)
	struct UMaterialParameterCollection* *ced581ad76; // 0x10(0x08)
};

// ScriptStruct Engine.*e38a769251
// Size: 0x18 (Inherited: 0x00)
struct F*e38a769251 {
	struct FGuid *22e2843827; // 0x00(0x10)
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
	struct F*cbc183fb78 MaterialClipVolumeTypes; // 0x1c(0x04)
	enum class *f6de29b1ba MaterialClipVolumeImportance; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Engine.*afa0cd1358
// Size: 0x28 (Inherited: 0x00)
struct F*afa0cd1358 {
	struct FName ParameterName; // 0x00(0x08)
	struct FLinearColor ParameterValue; // 0x08(0x10)
	struct FGuid *c328c6d3dd; // 0x18(0x10)
};

// ScriptStruct Engine.*c8ae2e9849
// Size: 0x20 (Inherited: 0x00)
struct F*c8ae2e9849 {
	struct FName ParameterName; // 0x00(0x08)
	struct UTexture* ParameterValue; // 0x08(0x08)
	struct FGuid *c328c6d3dd; // 0x10(0x10)
};

// ScriptStruct Engine.*ecd50ea1e1
// Size: 0x20 (Inherited: 0x00)
struct F*ecd50ea1e1 {
	struct FName ParameterName; // 0x00(0x08)
	float ParameterValue; // 0x08(0x04)
	struct FGuid *c328c6d3dd; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*1938f889f6
// Size: 0x28 (Inherited: 0x00)
struct F*1938f889f6 {
	struct FName ParameterName; // 0x00(0x08)
	struct UFont* FontValue; // 0x08(0x08)
	int32 FontPage; // 0x10(0x04)
	struct FGuid *c328c6d3dd; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*751b50de16
// Size: 0x28 (Inherited: 0x18)
struct F*751b50de16 : F*0af02309cc {
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// ScriptStruct Engine.*0af02309cc
// Size: 0x18 (Inherited: 0x00)
struct F*0af02309cc {
	struct FName ParameterName; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
};

// ScriptStruct Engine.*a1ba061c1d
// Size: 0x20 (Inherited: 0x18)
struct F*a1ba061c1d : F*0af02309cc {
	float DefaultValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*7a4700bacd
// Size: 0x18 (Inherited: 0x00)
struct F*7a4700bacd {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
};

// ScriptStruct Engine.*e4f24fb012
// Size: 0x14 (Inherited: 0x00)
struct F*e4f24fb012 {
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

// ScriptStruct Engine.*2c11a2a2dc
// Size: 0x30 (Inherited: 0x00)
struct F*2c11a2a2dc {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Archetype; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
	struct ULevel* Level; // 0x28(0x08)
};

// ScriptStruct Engine.*fe5f1702b0
// Size: 0x18 (Inherited: 0x00)
struct F*fe5f1702b0 {
	struct FString LevelName; // 0x00(0x10)
	uint32 *1dde52218e; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*ad5700d99f
// Size: 0x40 (Inherited: 0x00)
struct F*ad5700d99f {
	struct FName *1fc60c4b3e; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *49a050d721; // 0x10(0x30)
};

// ScriptStruct Engine.*3d359c43af
// Size: 0x0c (Inherited: 0x00)
struct F*3d359c43af {
	int32 Count; // 0x00(0x04)
	int32 *0648daf1bd; // 0x04(0x04)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.*f6ca4296c5
// Size: 0x20 (Inherited: 0x00)
struct F*f6ca4296c5 {
	struct FName ParameterName; // 0x00(0x08)
	char *ae3848a8d9 : 1; // 0x08(0x01)
	char *534b364dd5 : 1; // 0x08(0x01)
	char *31fceaf4b0 : 1; // 0x08(0x01)
	char *6a6a32b4ae : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<int32> *03dd97b09c; // 0x10(0x10)
};

// ScriptStruct Engine.*357772727a
// Size: 0x18 (Inherited: 0x00)
struct F*357772727a {
	struct FString CurveName; // 0x00(0x10)
	struct UObject* *38a9bdd8c6; // 0x10(0x08)
};

// ScriptStruct Engine.*b6803004e6
// Size: 0x04 (Inherited: 0x00)
struct F*b6803004e6 {
	char *b6bb047d6a : 1; // 0x00(0x01)
	char *33ee2f3e46 : 1; // 0x00(0x01)
	char bLock : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*71db7b9762
// Size: 0x28 (Inherited: 0x00)
struct F*71db7b9762 {
	enum class EParticleEventType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Frequency; // 0x04(0x04)
	int32 *e43c4823c7; // 0x08(0x04)
	char *09477457a8 : 1; // 0x0c(0x01)
	char *0756dcc67c : 1; // 0x0c(0x01)
	char *e066d34a26 : 1; // 0x0c(0x01)
	char *78ac7f54d4 : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName *d92a2b09fb; // 0x10(0x08)
	struct TArray<struct U*995c5bd3c5*> *44056b9ffb; // 0x18(0x10)
};

// ScriptStruct Engine.*df5442dd8f
// Size: 0x18 (Inherited: 0x00)
struct F*df5442dd8f {
	struct FName *3fd863108a; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*318eb68704
// Size: 0x04 (Inherited: 0x00)
struct F*318eb68704 {
	char *b213b49943 : 1; // 0x00(0x01)
	char *b26913c6e0 : 1; // 0x00(0x01)
	char *b22b1b9957 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*21589f2100
// Size: 0x50 (Inherited: 0x00)
struct F*21589f2100 {
	struct FName ParamName; // 0x00(0x08)
	char *b22b1b9957 : 1; // 0x08(0x01)
	char *fde17a2d11 : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	enum class *b21c089c30 *1827cafe3d; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	char *e9346556f6 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct F*5f29ae24ef *a7f2f26eab; // 0x18(0x38)
};

// ScriptStruct Engine.*062bb8e42b
// Size: 0x10 (Inherited: 0x00)
struct F*062bb8e42b {
	struct FName TargetName; // 0x00(0x08)
	float *82319faac8; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*cb041a1069
// Size: 0x160 (Inherited: 0x00)
struct F*cb041a1069 {
	struct TArray<struct FColor> *a272a694ae; // 0x00(0x10)
	struct TArray<struct FColor> *2d5787ebf3; // 0x10(0x10)
	struct TArray<struct FColor> *5269216701; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 *8d7c796dbd; // 0x40(0x10)
	struct FVector4 *bbea3c00cc; // 0x50(0x10)
	struct FVector4 *d1389b89ae; // 0x60(0x10)
	struct FVector4 *7b7638ca77; // 0x70(0x10)
	struct FVector4 *19a6a84d28; // 0x80(0x10)
	struct FVector4 *31c1e43f71; // 0x90(0x10)
	struct FVector4 *77b4322693; // 0xa0(0x10)
	struct FVector *a549fcd68f; // 0xb0(0x0c)
	struct FVector *7e590ce002; // 0xbc(0x0c)
	struct FVector *dd7eb7793c; // 0xc8(0x0c)
	struct FVector *21b9d131cb; // 0xd4(0x0c)
	struct FVector *4b442dd82b; // 0xe0(0x0c)
	struct FVector *af94482e87; // 0xec(0x0c)
	struct FVector *b1685ef0bd; // 0xf8(0x0c)
	float *9911eff9ec; // 0x104(0x04)
	float *2727da8cfb; // 0x108(0x04)
	float *2dd7b71d86; // 0x10c(0x04)
	float *9503b23801; // 0x110(0x04)
	float *f5e4b6d3bb; // 0x114(0x04)
	float *c3d3899399; // 0x118(0x04)
	float *a42bcff92b; // 0x11c(0x04)
	float *617508fedb; // 0x120(0x04)
	float *5e2c8a5d05; // 0x124(0x04)
	float *f3f8ee8b77; // 0x128(0x04)
	float *2f9c832c37; // 0x12c(0x04)
	float *f8b086b2d1; // 0x130(0x04)
	float *9ac5bfeb07; // 0x134(0x04)
	float *560a7d9310; // 0x138(0x04)
	float *784bfc41c0; // 0x13c(0x04)
	float *27cdd1453c; // 0x140(0x04)
	enum class *a53eea5d4f *b08b1f1579; // 0x144(0x01)
	enum class *638bc4a2a0 *1f87be364b; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	struct FVector2D *5d8cd53ff2; // 0x148(0x08)
	char *431bf5ab5b : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float *b5b9f5151e; // 0x154(0x04)
	float *42d4fa0ad4; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct Engine.*db2ffe2210
// Size: 0x2c0 (Inherited: 0x00)
struct F*db2ffe2210 {
	struct UParticleModuleRequired* *81e4d29b94; // 0x00(0x08)
	struct UParticleModuleSpawn* *39a5d5fee2; // 0x08(0x08)
	struct U*bee627aadd* *87462ee81f; // 0x10(0x08)
	struct TArray<struct UParticleModule*> *b123169b8f; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct F*f9bf2ec6f7 *503f48f812; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xa0(0x28)
	struct FFloatDistribution DragCoefficient; // 0xc8(0x28)
	struct FFloatDistribution *b6686c80b9; // 0xf0(0x28)
	struct FFloatDistribution *43f7f5f660; // 0x118(0x28)
	struct FVector *a549fcd68f; // 0x140(0x0c)
	struct FVector *3e11a64f3a; // 0x14c(0x0c)
	float *9cdc7071f1; // 0x158(0x04)
	struct FVector *7e590ce002; // 0x15c(0x0c)
	struct FVector *dd7eb7793c; // 0x168(0x0c)
	struct FVector2D *cad1fd37fc; // 0x174(0x08)
	float *f973a234c4; // 0x17c(0x04)
	float *193cc096d4; // 0x180(0x04)
	int32 *0a77602d10; // 0x184(0x04)
	enum class *a53eea5d4f *b08b1f1579; // 0x188(0x01)
	enum class *638bc4a2a0 *1f87be364b; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	char bEnableCollision : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	enum class EParticleCollisionMode *bf4bee24b4; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	char *431bf5ab5b : 1; // 0x194(0x01)
	char pad_194_1 : 7; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float *b5b9f5151e; // 0x198(0x04)
	float *42d4fa0ad4; // 0x19c(0x04)
	struct FRawDistributionVector *2edc0cdd70; // 0x1a0(0x50)
	struct F*5f29ae24ef *7093dacf65; // 0x1f0(0x38)
	struct FRawDistributionVector *5f20569f13; // 0x228(0x50)
	struct F*5f29ae24ef *3fd1ab4818; // 0x278(0x38)
	char pad_2B0[0x10]; // 0x2b0(0x10)
};

// ScriptStruct Engine.*f9bf2ec6f7
// Size: 0x70 (Inherited: 0x00)
struct F*f9bf2ec6f7 {
	struct UVectorField* Field; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator *12c5f85582; // 0x40(0x0c)
	struct FRotator *c2e81398b5; // 0x4c(0x0c)
	struct FRotator RotationRate; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float *b612f22153; // 0x68(0x04)
	char *f904b8a741 : 1; // 0x6c(0x01)
	char *a50af67b15 : 1; // 0x6c(0x01)
	char *ebb9cd5ae4 : 1; // 0x6c(0x01)
	char *820f376e24 : 1; // 0x6c(0x01)
	char *fea1b04260 : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*4455a1ad2c
// Size: 0x10 (Inherited: 0x00)
struct F*4455a1ad2c {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*a4d5e17dc7
// Size: 0x10 (Inherited: 0x00)
struct F*a4d5e17dc7 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*527b8ab3b4
// Size: 0x10 (Inherited: 0x00)
struct F*527b8ab3b4 {
	struct U*e9cc7f9b0a* *e9cc7f9b0a; // 0x00(0x08)
	float *569dda12ee; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*a71074c103
// Size: 0x110 (Inherited: 0x00)
struct F*a71074c103 {
	struct F*45e8912236 *7098784635; // 0x00(0x104)
	char pad_104[0x4]; // 0x104(0x04)
	struct FName ProfileName; // 0x108(0x08)
};

// ScriptStruct Engine.*30600c4384
// Size: 0x10 (Inherited: 0x00)
struct F*30600c4384 {
	struct TArray<DelegateProperty> Delegates; // 0x00(0x10)
};

// ScriptStruct Engine.*e8f9f12a7a
// Size: 0x40 (Inherited: 0x00)
struct F*e8f9f12a7a {
	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString *2fb13c3a37; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.*f5f971c5f4
// Size: 0x30 (Inherited: 0x00)
struct F*f5f971c5f4 {
	struct TArray<bool> Data; // 0x00(0x10)
	struct FString GroupName; // 0x10(0x10)
	struct FString *4036517723; // 0x20(0x10)
};

// ScriptStruct Engine.*57c2900482
// Size: 0x28 (Inherited: 0x00)
struct F*57c2900482 {
	struct FName Node; // 0x00(0x08)
	struct F*b8b0bc9397 Constraints[0x02]; // 0x08(0x20)
};

// ScriptStruct Engine.*b8b0bc9397
// Size: 0x10 (Inherited: 0x00)
struct F*b8b0bc9397 {
	struct TArray<struct F*595a269b51> *f0b025a3c3; // 0x00(0x10)
};

// ScriptStruct Engine.*595a269b51
// Size: 0x18 (Inherited: 0x00)
struct F*595a269b51 {
	enum class EConstraintTransform *4e080814df; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *0b1d59ae28; // 0x08(0x08)
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
	bool *af385df62c; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct Engine.DestructibleParameters
// Size: 0x88 (Inherited: 0x00)
struct FDestructibleParameters {
	struct F*7f988197fb DamageParameters; // 0x00(0x1c)
	struct F*d3b5e3fd0b DebrisParameters; // 0x1c(0x2c)
	struct F*370a56abc2 AdvancedParameters; // 0x48(0x10)
	struct F*3478924475 SpecialHierarchyDepths; // 0x58(0x14)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FDestructibleDepthParameters> DepthParameters; // 0x70(0x10)
	struct FDestructibleParametersFlag Flags; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Engine.DestructibleParametersFlag
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleParametersFlag {
	char *8e71cb6474 : 1; // 0x00(0x01)
	char *69e6215b1c : 1; // 0x00(0x01)
	char *9ff945d9c9 : 1; // 0x00(0x01)
	char *fe10c54167 : 1; // 0x00(0x01)
	char *080ad30274 : 1; // 0x00(0x01)
	char *7abe70709e : 1; // 0x00(0x01)
	char *395a921f60 : 1; // 0x00(0x01)
	char *cdb1e5b66e : 1; // 0x00(0x01)
	char *ee052026b3 : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.DestructibleDepthParameters
// Size: 0x01 (Inherited: 0x00)
struct FDestructibleDepthParameters {
	enum class *e63f6143bf *85956abe70; // 0x00(0x01)
};

// ScriptStruct Engine.*3478924475
// Size: 0x14 (Inherited: 0x00)
struct F*3478924475 {
	int32 SupportDepth; // 0x00(0x04)
	int32 MinimumFractureDepth; // 0x04(0x04)
	bool bEnableDebris; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 DebrisDepth; // 0x0c(0x04)
	int32 EssentialDepth; // 0x10(0x04)
};

// ScriptStruct Engine.*370a56abc2
// Size: 0x10 (Inherited: 0x00)
struct F*370a56abc2 {
	float DamageCap; // 0x00(0x04)
	float ImpactVelocityThreshold; // 0x04(0x04)
	float MaxChunkSpeed; // 0x08(0x04)
	float FractureImpulseScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*d3b5e3fd0b
// Size: 0x2c (Inherited: 0x00)
struct F*d3b5e3fd0b {
	float DebrisLifetimeMin; // 0x00(0x04)
	float DebrisLifetimeMax; // 0x04(0x04)
	float DebrisMaxSeparationMin; // 0x08(0x04)
	float DebrisMaxSeparationMax; // 0x0c(0x04)
	struct FBox ValidBounds; // 0x10(0x1c)
};

// ScriptStruct Engine.*7f988197fb
// Size: 0x1c (Inherited: 0x00)
struct F*7f988197fb {
	float DamageThreshold; // 0x00(0x04)
	float DamageSpread; // 0x04(0x04)
	bool bEnableImpactDamage; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *7281338881; // 0x0c(0x04)
	int32 *8d68910002; // 0x10(0x04)
	bool bCustomImpactResistance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *e94997ea85; // 0x18(0x04)
};

// ScriptStruct Engine.*10d154c523
// Size: 0x190 (Inherited: 0x00)
struct F*10d154c523 {
	float ScreenSize; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSkeletalMeshOptimizationSettings OptimizationSettings; // 0x08(0x188)
};

// ScriptStruct Engine.*3eff319a2c
// Size: 0x10 (Inherited: 0x00)
struct F*3eff319a2c {
	int32 MaxCount; // 0x00(0x04)
	char bLimitToOwner : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float VolumeScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*f4d80fddcb
// Size: 0x10 (Inherited: 0x00)
struct F*f4d80fddcb {
	float *fa63012c39; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USoundSubmix* SoundSubmix; // 0x08(0x08)
};

// ScriptStruct Engine.*819e1cae17
// Size: 0x08 (Inherited: 0x00)
struct F*819e1cae17 {
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

// ScriptStruct Engine.*f9a3388f89
// Size: 0x20 (Inherited: 0x00)
struct F*f9a3388f89 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float *e5163261f2; // 0x0c(0x04)
};

// ScriptStruct Engine.*91bff4db2e
// Size: 0x2c (Inherited: 0x00)
struct F*91bff4db2e {
	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float *1bd5cff78a; // 0x08(0x04)
	float *0d6ac252f8; // 0x0c(0x04)
	float *eba6b2a3cc; // 0x10(0x04)
	float *5d270884b0; // 0x14(0x04)
	float *dc548d3567; // 0x18(0x04)
	char *820d5b1292 : 1; // 0x1c(0x01)
	char *53f1604aa4 : 1; // 0x1c(0x01)
	char *56d00c1def : 1; // 0x1c(0x01)
	char *ba049e1f37 : 1; // 0x1c(0x01)
	char *4fa88bab00 : 1; // 0x1c(0x01)
	char pad_1C_5 : 3; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *f6628abd73; // 0x20(0x04)
	char *dec02a0719 : 1; // 0x24(0x01)
	char *67281796cd : 1; // 0x24(0x01)
	char pad_24_2 : 6; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	enum class EAudioOutputTarget *c36505a43e; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Engine.*cd67c2722a
// Size: 0x08 (Inherited: 0x00)
struct F*cd67c2722a {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*6fabb3d16e
// Size: 0x10 (Inherited: 0x00)
struct F*6fabb3d16e {
	struct U*5cd3bab5e5* preset; // 0x00(0x08)
	char bBypass : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*1f95a9feeb
// Size: 0x18 (Inherited: 0x00)
struct F*1f95a9feeb {
	struct USoundClass* *bfc73cdb30; // 0x00(0x08)
	float *0f9d6da4f2; // 0x08(0x04)
	float *202e7ad843; // 0x0c(0x04)
	char *0cf2ea0206 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *6ac68da5cf; // 0x14(0x04)
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

// ScriptStruct Engine.*3b502e6b7b
// Size: 0x20 (Inherited: 0x00)
struct F*3b502e6b7b {
	struct FName ParameterName; // 0x00(0x08)
	float Default; // 0x08(0x04)
	float *12a4722dd3; // 0x0c(0x04)
	float *fb347cbc91; // 0x10(0x04)
	float *37abe150e9; // 0x14(0x04)
	float *fdbd0f6df1; // 0x18(0x04)
	enum class *2e48319a10 *fa2a4dc00e; // 0x1c(0x01)
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
	float *5e7a8f0a57; // 0x38(0x04)
	enum class ETextureDownscaleOptions *b30c73ba40; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Engine.*0e90ebb131
// Size: 0x18 (Inherited: 0x10)
struct F*0e90ebb131 : F*efff5ab54c {
	struct U*22e8771771* *22e8771771; // 0x10(0x08)
};

// ScriptStruct Engine.*efff5ab54c
// Size: 0x10 (Inherited: 0x00)
struct F*efff5ab54c {
	struct FName TrackName; // 0x00(0x08)
	bool *83eb980859; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*407377d95c
// Size: 0x18 (Inherited: 0x10)
struct F*407377d95c : F*efff5ab54c {
	struct U*e6746d9844* *e6746d9844; // 0x10(0x08)
};

// ScriptStruct Engine.*36f45125d8
// Size: 0x18 (Inherited: 0x10)
struct F*36f45125d8 : F*efff5ab54c {
	struct UCurveFloat* CurveFloat; // 0x10(0x08)
};

// ScriptStruct Engine.*cda3354a13
// Size: 0x18 (Inherited: 0x10)
struct F*cda3354a13 : F*efff5ab54c {
	struct UCurveFloat* *6082dd341b; // 0x10(0x08)
};

// ScriptStruct Engine.*59c323535a
// Size: 0x68 (Inherited: 0x00)
struct F*59c323535a {
	struct UTexture2D* Image1; // 0x00(0x08)
	struct UTexture2D* Image2; // 0x08(0x08)
	struct FVector2D Center; // 0x10(0x08)
	struct FVector2D *cd509673de; // 0x18(0x08)
	struct FVector2D *f77df2e9e5; // 0x20(0x08)
	struct FVector2D *be64d02e05; // 0x28(0x08)
	struct FVector2D *f1ac887471; // 0x30(0x08)
	struct FKey *2f2fa2822a; // 0x38(0x18)
	struct FKey *462401a1d7; // 0x50(0x18)
};

// ScriptStruct Engine.*5698008001
// Size: 0x0c (Inherited: 0x00)
struct F*5698008001 {
	bool *894c79993f; // 0x00(0x01)
	bool *d45dc8a5cf; // 0x01(0x01)
	bool *c259c63148; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SampleRate; // 0x04(0x04)
	float Length; // 0x08(0x04)
};

// ScriptStruct Engine.*788b74299f
// Size: 0x20 (Inherited: 0x00)
struct F*788b74299f {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*27ba162ca0
// Size: 0x20 (Inherited: 0x00)
struct F*27ba162ca0 {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*b6e18794d5
// Size: 0x40 (Inherited: 0x00)
struct F*b6e18794d5 {
	struct FTransform Value; // 0x00(0x30)
	struct FName Name; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Engine.*b6edac1dbf
// Size: 0x10 (Inherited: 0x00)
struct F*b6edac1dbf {
	struct FColor Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.*9fc8e4a5bb
// Size: 0x18 (Inherited: 0x00)
struct F*9fc8e4a5bb {
	struct FVector Value; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName Name; // 0x10(0x08)
};

// ScriptStruct Engine.*a4f9c6fd25
// Size: 0x10 (Inherited: 0x00)
struct F*a4f9c6fd25 {
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

// ScriptStruct Engine.*554b419655
// Size: 0x30 (Inherited: 0x00)
struct F*554b419655 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.*9bb7fa64e0
// Size: 0xd0 (Inherited: 0x00)
struct F*9bb7fa64e0 {
	char pad_0[0x90]; // 0x00(0x90)
	struct UBlendProfile* BlendProfile; // 0x90(0x08)
	char pad_98[0x38]; // 0x98(0x38)
};

// ScriptStruct Engine.AnimNode_SubInput
// Size: 0x68 (Inherited: 0x30)
struct FAnimNode_SubInput : FAnimNode_Base {
	struct FExposedValueHandler EvaluateGraphExposedInputs; // 0x08(0x28)
	char pad_58[0x10]; // 0x58(0x10)
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
	enum class *6995125d9d DataSource; // 0x30(0x01)
	enum class *41fce53044 EvaluatorMode; // 0x31(0x01)
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

// ScriptStruct Engine.*7214defa34
// Size: 0x01 (Inherited: 0x00)
struct F*7214defa34 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*045276c8aa
// Size: 0x68 (Inherited: 0x58)
struct F*045276c8aa : FIndexedCurve {
	struct TArray<struct F*7a3b552eb7> Keys; // 0x58(0x10)
};

// ScriptStruct Engine.*7a3b552eb7
// Size: 0x10 (Inherited: 0x00)
struct F*7a3b552eb7 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Value; // 0x08(0x08)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FString *8b56002b5a; // 0x08(0x10)
	struct FName MemberName; // 0x18(0x08)
	struct FGuid *1f818d880b; // 0x20(0x10)
	bool *773559fd83; // 0x30(0x01)
	bool *f4626a1d66; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Engine.*950b2d8147
// Size: 0x68 (Inherited: 0x00)
struct F*950b2d8147 {
	enum class EDrawDebugItemType *8e7577bcec; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *89fed5937e; // 0x04(0x0c)
	struct FVector *0115a779e4; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
	float Size; // 0x38(0x04)
	int32 Segments; // 0x3c(0x04)
	struct FColor Color; // 0x40(0x04)
	bool *c86be543c7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LifeTime; // 0x48(0x04)
	float Thickness; // 0x4c(0x04)
	struct FString Message; // 0x50(0x10)
	struct FVector2D *a282493f22; // 0x60(0x08)
};

// ScriptStruct Engine.*48360dfaec
// Size: 0x6a0 (Inherited: 0x520)
struct F*48360dfaec : F*c3868df940 {
	char pad_520[0x180]; // 0x520(0x180)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x58 (Inherited: 0x30)
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
};

// ScriptStruct Engine.*ff105c66c3
// Size: 0x20 (Inherited: 0x00)
struct F*ff105c66c3 {
	struct FVector4 Plane; // 0x00(0x10)
	float PlaneOffsetOutside; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Engine.*85977039df
// Size: 0x70 (Inherited: 0x50)
struct F*85977039df : F*024ac20564 {
	struct FVector PlaneX; // 0x50(0x0c)
	struct FVector PlaneY; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Engine.*024ac20564
// Size: 0x50 (Inherited: 0x00)
struct F*024ac20564 {
	struct FVector4 Plane; // 0x00(0x10)
	struct FVector2D PlaneOffset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVector4 PlaneRadiusXYInOut; // 0x20(0x10)
	struct FVector4 FadeRangeXYInOut; // 0x30(0x10)
	struct FVector2D UprightMulAdd; // 0x40(0x08)
	bool bAdditive; // 0x48(0x01)
	enum class *f6de29b1ba SoftPlaneImportance; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Engine.*cb429dbd12
// Size: 0xd0 (Inherited: 0x00)
struct F*cb429dbd12 {
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

