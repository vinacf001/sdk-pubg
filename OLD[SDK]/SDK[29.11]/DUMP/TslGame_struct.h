// Enum TslGame.*1d74716a1b
enum class *1d74716a1b : uint8 {
	*a8586366f2,
	*dd5e190745,
	*ac2fdaefd5,
	*1d74716a1b_MAX,
};

// Enum TslGame.ECastCancelReason
enum class ECastCancelReason : uint8 {
	Invalid,
	CasterAiming,
	CasterArming,
	CasterApnea,
	CasterSprinting,
	CasterJumping,
	CasterFallingLong,
	CasterFiring,
	CasterGroggy,
	CasterGroggyOnZeroTimeCast,
	CasterHipped,
	CasterInvalid,
	CasterNotAlive,
	CasterPickedUpDroppedItem,
	CasterPickedUpItemFromPackage,
	CasterReloading,
	CasterRolling,
	CasterTargeting,
	CasterUnarmAttacking,
	CasterVault,
	CasterStanceInvalid,
	CasterFreefalling,
	CastObjectInvalid,
	CastObjectNotExecutable,
	FailedCasterMovementDistCheckOnClient,
	FailedCasterMovementDistCheckOnServer,
	FailedCasterAndCastObjDistCheckOnClient,
	FailedCasterAndCastObjDistCheckOnServer,
	CharacterBeingRevivedDead,
	ManualCancel,
	NewCastOnClient,
	NewCastOnServer,
	VehicleLanding,
	VehicleSeatChanged,
	VehicleMoving,
	VehicleUpsideDown,
	StuntEmoteOnVehicle,
	VehicleJumping,
	EmergencyPickupAircraft,
	CasterAttackByZombieAI,
	BodyCarry,
	CasterStunned,
	VehicleFuelFull,
	CharacterBehaviorNotFound,
	TeamsPlantedBomb,
	ECastCancelReason_MAX,
};

// Enum TslGame.ETargetingType
enum class ETargetingType : uint8 {
	Targeting_None,
	Targeting_Aiming,
	Targeting_Scoping,
	Targeting_MAX,
};

// Enum TslGame.EWeaponAttachmentSlotID
enum class EWeaponAttachmentSlotID : uint8 {
	None,
	Muzzle,
	LowerRail,
	UpperRail,
	Magazine,
	Stock,
	Angled,
	TacPack1,
	TacPack2,
	TacPack3,
	TacPack4,
	DronePackage,
	EWeaponAttachmentSlotID_MAX,
};

// Enum TslGame.ESystemMessageType
enum class ESystemMessageType : uint8 {
	Debug,
	Notify,
	Warning,
	Error,
	Important,
	NotifyCommand,
	ESystemMessageType_MAX,
};

// Enum TslGame.EOutGamePlatformProvider
enum class EOutGamePlatformProvider : uint8 {
	Unknown,
	Bro,
	PcSteam,
	PcDmm,
	PcMailRu,
	PcKakao,
	PcTencent,
	ConsoleXbox,
	ConsolePsn,
	PcLiteGarena,
	PcLiteGlobalAccount,
	PcLiteGlobalAccountJp,
	ConsoleStadia,
	PcEpic,
	AI,
	Max,
	EOutGamePlatformProvider_MAX,
};

// Enum TslGame.EDamageReason
enum class EDamageReason : uint8 {
	None,
	HeadShot,
	TorsoShot,
	PelvisShot,
	ArmShot,
	LegShot,
	NonSpecific,
	Blocked,
	EDamageReason_MAX,
};

// Enum TslGame.EDamageTypeCategory
enum class EDamageTypeCategory : uint8 {
	Damage_None,
	Damage_Instant,
	Damage_Gun,
	Damage_Melee,
	Damage_Punch,
	Damage_ZombiePunch,
	Damage_Groggy,
	Damage_BlueZone,
	Damage_VehicleHit,
	Damage_VehicleCrashHit,
	Damage_Molotov,
	Damage_Explosion,
	Damage_Explosion_Grenade,
	Damage_Explosion_RedZone,
	Damage_Explosion_Vehicle,
	Damage_Explosion_PlantedTimeBomb,
	Damage_Instant_Fall,
	Damage_Drown,
	Damage_BleedOut,
	Damage_Explosion_JerryCan,
	Damage_ZombieBuff,
	Damage_CPPWinExit,
	Damage_MeleeThrow,
	Damage_Explosion_C4,
	Damage_Explosion_StickyBomb,
	Damage_Explosion_Breach,
	Damage_Explosion_PanzerFaustWarhead,
	Damage_Explosion_PanzerFaustWarheadVehicleArmorPenetration,
	Damage_Explosion_PanzerFaustBackBlast,
	Damage_Explosion_Mortar,
	Damage_Explosion_BlackZone,
	Damage_Explosion_Meteor,
	Damage_TrainHit,
	Damage_Explosion_PropaneTank,
	Damage_LootTruckHit,
	Damage_Explosion_LootTruck,
	Damage_ShipHit,
	Damage_Lava,
	Damage_KillTruckHit,
	Damage_KillTruckTurret,
	Damage_HelicopterHit,
	Damage_Explosion_Aircraft,
	Damage_BlueZoneGrenade,
	Damage_FBRMolotov,
	Damage_DronePackage,
	Damage_Monster,
	Damage_Ability,
	Damage_Ability_ChickAttack,
	Damage_Ability_ChickAttack_Wave,
	Damage_Ability_Jump_Wave,
	Damage_Ability_FireBreath,
	Damage_Ability_FeathZone,
	Damage_Rotor,
	Damage_MotorGlider,
	Damage_Gun_Penetrate_BRDM,
	Damage_Explosion_GasPump,
	Damage_Blizzard,
	Damage_SandStorm,
	Damage_CableCarHit,
	Damage_Poision,
	Damage_ZombieDash,
	Damage_MAX,
};

// Enum TslGame.*4f97cb1588
enum class *4f97cb1588 : uint8 {
	*ea877ab8cf,
	*833375ac81,
	*855e36f2ed,
	*4f97cb1588_MAX,
};

// Enum TslGame.ESkydiveState
enum class ESkydiveState : uint8 {
	Skydive_None,
	Skydive_Freefall,
	Skydive_ParachuteDeploying,
	Skydive_ParachuteDeployed,
	Skydive_ParachuteCollapsing,
	Skydive_MAX,
};

// Enum TslGame.EMarkerType
enum class EMarkerType : uint8 {
	Normal,
	Attack,
	Danger,
	Defend,
	Loot,
	Regroup,
	Vehicle,
	EMarkerType_MAX,
};

// Enum TslGame.EPlatoonSupportRequestEventType
enum class EPlatoonSupportRequestEventType : uint8 {
	Start,
	Interactible,
	Finish,
	EPlatoonSupportRequestEventType_MAX,
};

// Enum TslGame.EPlatoonCarePackageType
enum class EPlatoonCarePackageType : uint8 {
	NotDesignated,
	WeaponPackage,
	HealingPackage,
	EPlatoonCarePackageType_MAX,
};

// Enum TslGame.EOPUIMonsterType
enum class EOPUIMonsterType : uint8 {
	None,
	Chicken,
	ZombieTanker,
	ZombieC4,
	MAX,
	EOPUIMonsterType_MAX,
};

// Enum TslGame.EEquipSlotID
enum class EEquipSlotID : uint8 {
	Head,
	Hat,
	Eyes,
	Mask,
	Torso,
	TorsoArmor,
	Outer,
	Backpack,
	Hands,
	Legs,
	Feet,
	Belt,
	Special01,
	Special02,
	WeaponPrimary,
	WeaponSecondary,
	WeaponMelee,
	WeaponThrowable,
	WeaponTacticalGear,
	Bluechip,
	MaxOrNone,
	EEquipSlotID_MAX,
};

// Enum TslGame.EBreathType
enum class EBreathType : uint8 {
	Apnea,
	ADS,
	EBreathType_MAX,
};

// Enum TslGame.ERequestPartyState
enum class ERequestPartyState : uint8 {
	Wait,
	Accept,
	Decline,
	ERequestPartyState_MAX,
};

// Enum TslGame.EBlueBlockerState
enum class EBlueBlockerState : uint8 {
	Show,
	Looping,
	Hide,
	Hidden,
	EBlueBlockerState_MAX,
};

// Enum TslGame.EThrownWeaponType
enum class EThrownWeaponType : uint8 {
	Thrown_Grenade,
	Thrown_Molotov,
	Thrown_Melee,
	Thrown_Trap,
	Thrown_StickyBomb,
	Thrown_C4,
	Thrown_JerryCan,
	Thrown_BZ_Grenade,
	Thrown_TacPack,
	Thrown_TraumaBag,
	Thrown_SpotterScope,
	Thrown_Drone,
	Thrown_BlueChipDetector,
	Thrown_Toolbox,
	Thrown_CanBomb,
	Thrown_SpareTire,
	Thrown_IntegratedRepairKit,
	Thrown_PlantedBombKit,
	Thrown_DefusingBombKit,
	Thrown_Other,
	Thrown_MAX,
};

// Enum TslGame.EPickupAnimType
enum class EPickupAnimType : uint8 {
	None,
	EPickupAnimType_MAX,
};

// Enum TslGame.EHitDirection
enum class EHitDirection : uint8 {
	Hit_Front,
	Hit_Back,
	Hit_Left,
	Hit_Right,
	Hit_MAX,
};

// Enum TslGame.*63c17b6b9e
enum class *63c17b6b9e : uint8 {
	*56e3b69adf,
	*d342a05cfa,
	*7a3b4f75d7,
	*714105863f,
	*fc1888c538,
	*5fd992910f,
	*f12fb390c6,
	*1b231a9b6c,
	*63c17b6b9e_MAX,
};

// Enum TslGame.ECastAnim
enum class ECastAnim : uint8 {
	None,
	Bandage,
	FirstAid,
	Medkit,
	EnergyDrink,
	Painkiller,
	Adrenaline,
	Door,
	Battery,
	Crafting,
	SuperDrink,
	Key,
	EmergencyPickup,
	SelfRevive,
	MortarInstall,
	BicycleDeploy,
	BulletproofShield,
	VehicleSkin,
	UnlockDoor,
	Custom,
	VehicleRepair,
	ArmorRepair,
	BlueChipTower,
	RevivalTransmitter,
	OpenBox,
	PlantedBomb,
	DefusingBomb,
	ECastAnim_MAX,
};

// Enum TslGame.ECharacterNegativeEffects
enum class ECharacterNegativeEffects : uint8 {
	Blind,
	Burning,
	Stun,
	Total,
	ECharacterNegativeEffects_MAX,
};

// Enum TslGame.ETirePunctureReason
enum class ETirePunctureReason : uint8 {
	Shot,
	Environment,
	Explosion,
	PanzerFaustExplosion,
	SkipFX,
	ManualRemoval,
	Other,
	ETirePunctureReason_MAX,
};

// Enum TslGame.ETslSLBStageDifficulty
enum class ETslSLBStageDifficulty : uint8 {
	Easy,
	Normal,
	Hard,
	Max,
	ETslSLBStageDifficulty_MAX,
};

// Enum TslGame.ETslSLBStage
enum class ETslSLBStage : uint8 {
	Stage1,
	Stage2,
	Stage3,
	Stage4,
	Stage5,
	Stage6,
	Max,
	ETslSLBStage_MAX,
};

// Enum TslGame.ETslTrainingType
enum class ETslTrainingType : uint8 {
	Aim_Sound_Lab,
	Grenades,
	FiringRange,
	VehicleSpot,
	GunItemSpot,
	CarShootingRange,
	JumpSchool,
	PracticeRange,
	OneOnOneArena,
	NONE,
	ETslTrainingType_MAX,
};

// Enum TslGame.EVoiceInputMode
enum class EVoiceInputMode : uint8 {
	OpenMic,
	PushToTalk,
	Toggle,
	Disable,
	MAX,
	EVoiceInputMode_MAX,
};

// Enum TslGame.*0d98f68974
enum class *0d98f68974 : uint8 {
	*06c40cb04f,
	*979af9e5f7,
	*b821d6e975,
	*1a3541f7bc,
	*9ea76e9a35,
	*1eae44bf9a,
	*c912ad5320,
	*78606172cb,
	*0d98f68974_MAX,
};

// Enum TslGame.ETslOvercastAction
enum class ETslOvercastAction : uint8 {
	Initialized,
	Prolonged,
	CreateThunder,
	ETslOvercastAction_MAX,
};

// Enum TslGame.EBeginningState
enum class EBeginningState : uint8 {
	Invalid,
	Normal,
	StartIsland,
	Airplane,
	Skydiving,
	Parachuting,
	EBeginningState_MAX,
};

// Enum TslGame.EServerStatType
enum class EServerStatType : uint8 {
	UE,
	NET,
	FRAMEPRO,
	EServerStatType_MAX,
};

// Enum TslGame.EPartnerLevel
enum class EPartnerLevel : uint8 {
	None,
	Normal,
	Lead,
	EPartnerLevel_MAX,
};

// Enum TslGame.EQualityType
enum class EQualityType : uint8 {
	EMainQuality,
	EViewDistanceQuality,
	EShadowQuality,
	EAntiAliasingQuality,
	ETextureQuality,
	EVisualEffectQuality,
	EPostProcessingQuality,
	EFoliageQuality,
	EQualityType_MAX,
};

// Enum TslGame.EReadyToPlayState
enum class EReadyToPlayState : uint8 {
	AllFinished,
	OnPreLoadMap,
	OnPostLoadMap,
	CheckMapLoadFinished,
	NotMapFullyLoaded,
	CheckPreloadingMap,
	LoadMapRequested,
	EReadyToPlayState_MAX,
};

// Enum TslGame.EDistanceBasedEvent
enum class EDistanceBasedEvent : uint8 {
	Undefined,
	Bullet_Hitted_LivingThings,
	Bullet_Hitted_Others,
	Weapon_Gun_Firing,
	Weapon_Grenade_Bounce,
	Weapon_Grenade_Explosion,
	Weapon_Grenade_ExplosionSound,
	Vehicle_Exhausting,
	Vehicle_Crash,
	Character_FootStep,
	Character_Landing,
	MAX,
	EDistanceBasedEvent_MAX,
};

// Enum TslGame.*d1030f7587
enum class *d1030f7587 : uint8 {
	*f167b8c330,
	*01ffeda55d,
	*6117a2c107,
	*09f44dba5c,
	*41652b0b95,
	*53ac0bd9ae,
	*aee42d62ee,
	*d1030f7587_MAX,
};

// Enum TslGame.EArenaState
enum class EArenaState : uint8 {
	Idle,
	Active,
	Finished,
	EArenaState_MAX,
};

// Enum TslGame.ERevivalMethod
enum class ERevivalMethod : uint8 {
	None,
	BluechipTower,
	RevivalTransmitter,
	Cheat,
	ERevivalMethod_MAX,
};

// Enum TslGame.ERankType
enum class ERankType : uint8 {
	None,
	InvalidSMS,
	Penalty,
	Restricted,
	Unranked,
	Bronze,
	Silver,
	Gold,
	Platinum,
	Diamond,
	Master,
	ERankType_MAX,
};

// Enum TslGame.ETslAIPlayerType
enum class ETslAIPlayerType : uint8 {
	HumanPlayer,
	AITypeNone,
	CommonAI,
	PillarAI,
	DummyAI,
	ZombieAI,
	MonsterAI,
	UltronAI,
	ETslAIPlayerType_MAX,
};

// Enum TslGame.ESubjectToReport
enum class ESubjectToReport : uint8 {
	None,
	Killer,
	Spectating_Player,
	Replay_Player,
	Team_Member,
	OtherTeam_Members,
	Assistant,
	GroggyCauser,
	ESubjectToReport_MAX,
};

// Enum TslGame.*e34ddd3361
enum class *e34ddd3361 : uint8 {
	*b2481de319,
	*599a264d98,
	*06325c348d,
	*3922bca4f4,
	*e34ddd3361_MAX,
};

// Enum TslGame.EAliveNumChangeType
enum class EAliveNumChangeType : uint8 {
	None,
	Die,
	ReviveOrRespawn,
	EAliveNumChangeType_MAX,
};

// Enum TslGame.ETslMapName
enum class ETslMapName : uint8 {
	Other,
	Baltic,
	Desert,
	Sanhok,
	DihorOtok,
	Summerland,
	Paramo,
	Tiger,
	Chimera,
	Heaven,
	Kiki,
	ETslMapName_MAX,
};

// Enum TslGame.FTslHASModeAuraType
enum class FTslHASModeAuraType : uint8 {
	None,
	Prop,
	Generator,
	Character,
	FTslHASModeAuraType_MAX,
};

// Enum TslGame.EAscenderSettlePoint
enum class EAscenderSettlePoint : uint8 {
	INVALID,
	RopeAttachPoint_LOWER,
	RopeAttachPoint_UPPER,
	RopeAttachPoint_START,
	EAscenderSettlePoint_MAX,
};

// Enum TslGame.EAuxilaryIconRequestor
enum class EAuxilaryIconRequestor : uint8 {
	None,
	Minimap,
	OwningWidget,
	EAuxilaryIconRequestor_MAX,
};

// Enum TslGame.EAuxilaryIconType
enum class EAuxilaryIconType : uint8 {
	Invalid,
	Drone,
	Drone_Destroyed,
	Detected_Player,
	Detected_Player_Above,
	Detected_Player_Below,
	EAuxilaryIconType_MAX,
};

// Enum TslGame.EScopeType
enum class EScopeType : uint8 {
	Main,
	Right,
	Total,
	None,
	EScopeType_MAX,
};

// Enum TslGame.*bf00b0b84a
enum class *bf00b0b84a : uint8 {
	*734c2a4f52,
	*5065ec1e92,
	*b9f3e6fe2e,
	*fd3f9354a4,
	*bf00b0b84a_MAX,
};

// Enum TslGame.*cecd541801
enum class *cecd541801 : uint8 {
	*9e3919e642,
	*5eb707d310,
	*03feb632ad,
	*9a5235aec5,
	*c67982b797,
	*da32fe0a34,
	*a1d04b5ef2,
	*63f1f10c41,
	*a00cc73d2b,
	*885d385924,
	*9e876e8024,
	*3b449f4edf,
	*cecd541801_MAX,
};

// Enum TslGame.ECharacterActionEventType
enum class ECharacterActionEventType : uint8 {
	None,
	WeaponChange,
	ItemUseCast,
	TakeDamage,
	PostDealDamage,
	TryToUnarmedAttack,
	TryToMeleeAttack,
	ECharacterActionEventType_MAX,
};

// Enum TslGame.*a1c8f199a7
enum class *a1c8f199a7 : uint8 {
	*bdce6a0a0a,
	*5e2ddcb996,
	*845a3fa63b,
	*b8e42aa6c9,
	*21a6be4095,
	*a1c8f199a7_MAX,
};

// Enum TslGame.EInteractInputType
enum class EInteractInputType : uint8 {
	None,
	MainInteract,
	SecondaryInteract,
	EInteractInputType_MAX,
};

// Enum TslGame.EKickProcess
enum class EKickProcess : uint8 {
	Disconnect,
	Shutdown,
	ShutdownIn10Sec,
	DuplicatedLogin,
	EKickProcess_MAX,
};

// Enum TslGame.EDirectMessageType
enum class EDirectMessageType : uint8 {
	Radio,
	Direct,
	DirectReply,
	Warning,
	System,
	EDirectMessageType_MAX,
};

// Enum TslGame.EDirectMessageOutGameType
enum class EDirectMessageOutGameType : uint8 {
	Normal,
	Preset,
	System,
	ClanNormal,
	ClanSystem,
	EDirectMessageOutGameType_MAX,
};

// Enum TslGame.EFutsalGamePhase
enum class EFutsalGamePhase : uint8 {
	Waiting,
	FirstHalf,
	SecondHalf,
	AddedTime,
	End,
	EFutsalGamePhase_MAX,
};

// Enum TslGame.EUnarmedAnimType
enum class EUnarmedAnimType : uint8 {
	Default,
	Spray,
	EUnarmedAnimType_MAX,
};

// Enum TslGame.EInventorySlotStatePad
enum class EInventorySlotStatePad : uint8 {
	Normal,
	Focus,
	Link,
	Selfput,
	Disabled,
	EInventorySlotStatePad_MAX,
};

// Enum TslGame.EDualMatchingState
enum class EDualMatchingState : uint8 {
	NotMatchingState,
	Matching,
	GamePrepared,
	EDualMatchingState_MAX,
};

// Enum TslGame.ELastTeamIconState
enum class ELastTeamIconState : uint8 {
	Normal,
	Groggy,
	Die,
	ELastTeamIconState_MAX,
};

// Enum TslGame.ESeatState
enum class ESeatState : uint8 {
	Empty,
	Player,
	Teammate,
	Enemy,
	ESeatState_MAX,
};

// Enum TslGame.ETslInputDeviceTypeBranch_BPOnly
enum class ETslInputDeviceTypeBranch_BPOnly : uint8 {
	KeyboardMouse,
	XboxGamepad,
	PS4Gamepad,
	SwitchGamepad,
	QuailGamepad,
	ETslInputDeviceTypeBranch_MAX,
};

// Enum TslGame.ETslInputDeviceGroupBranch_BPOnly
enum class ETslInputDeviceGroupBranch_BPOnly : uint8 {
	KeyboardMouse,
	Gamepad,
	ETslInputDeviceGroupBranch_MAX,
};

// Enum TslGame.ETslPlatformTypeBranch_BPOnly
enum class ETslPlatformTypeBranch_BPOnly : uint8 {
	PC,
	Xbox,
	PS4,
	Quail,
	Invalid,
	ETslPlatformTypeBranch_MAX,
};

// Enum TslGame.ETslPlatformGroupBranch_BPOnly
enum class ETslPlatformGroupBranch_BPOnly : uint8 {
	PC,
	Console,
	ETslPlatformGroupBranch_MAX,
};

// Enum TslGame.EBuffPropertyType
enum class EBuffPropertyType : uint8 {
	CoolTime,
	MeleeDamageRatio,
	OtherDamageRatio,
	AllDamageRatio,
	MeleeAttackDamageRatio,
	OtherAttackDamageRatio,
	MeleeBehindAttackDamageRatio,
	LandingDamageRatio,
	GetBoostOnDeal,
	MovementSpeedModifier,
	OnFootSpeedAccelModifier,
	JumpVelocityModifier,
	MaxHpModifier,
	DecreaseRevivalCastTime,
	ReloadingSpeedModifier,
	MultiProperty,
	RecoilModifier,
	PlayerAttackDamageModifier,
	MonsterAttackDamageModifier,
	ReduceGaugeRatio,
	DebuffResistance,
	EBuffPropertyType_MAX,
};

// Enum TslGame.EAutoSpectatePriority
enum class EAutoSpectatePriority : uint8 {
	None,
	Vehicle,
	Distance,
	Combat,
	EAutoSpectatePriority_MAX,
};

// Enum TslGame.EFBRClass
enum class EFBRClass : uint8 {
	WARRIOR,
	RANGER,
	WIZARD,
	PALADIN,
	EFBRClass_MAX,
};

// Enum TslGame.ELeagueMatchStatistic
enum class ELeagueMatchStatistic : uint8 {
	Kill,
	Damage,
	Assist,
	ELeagueMatchStatistic_MAX,
};

// Enum TslGame.ELeagueMatchResultState
enum class ELeagueMatchResultState : uint8 {
	None,
	WinnerWinnerChickenDinner,
	Statistic,
	Ranking,
	ELeagueMatchResultState_MAX,
};

// Enum TslGame.EObserverHudAnimType
enum class EObserverHudAnimType : uint8 {
	TeamWipeOutAnim,
	PersonalKillingSpreeAnim,
	TeamTotalKillingSpreeAnim,
	EObserverHudAnimType_MAX,
};

// Enum TslGame.EPreviewPlatformIconType
enum class EPreviewPlatformIconType : uint8 {
	XboxOne,
	PS4,
	Switch,
	Quail,
	None,
	EPreviewPlatformIconType_MAX,
};

// Enum TslGame.EMovementBaseType
enum class EMovementBaseType : uint8 {
	None,
	Train,
	Ship,
	CableCar,
	COUNT,
	EMovementBaseType_MAX,
};

// Enum TslGame.*5f87d2f77d
enum class *5f87d2f77d : uint8 {
	*c6d07ba57f,
	*e730e6c8d7,
	*a0d106666d,
	*5f87d2f77d_MAX,
};

// Enum TslGame.EBlueZoneShape
enum class EBlueZoneShape : uint8 {
	None,
	Circle,
	Rectangle,
	EBlueZoneShape_MAX,
};

// Enum TslGame.EGameZoneType
enum class EGameZoneType : uint8 {
	SafeZone,
	PlayZone,
	BlueZone,
	RedZone,
	BlackZone,
	EGameZoneType_MAX,
};

// Enum TslGame.ERespawnType
enum class ERespawnType : uint8 {
	Airborne,
	DeadPoint,
	StartPoint,
	Selectable,
	RandomPoint,
	CheckPoint,
	ERespawnType_MAX,
};

// Enum TslGame.EPlatoonTeam
enum class EPlatoonTeam : uint8 {
	None,
	Blue,
	Red,
	EPlatoonTeam_MAX,
};

// Enum TslGame.EAutoRecoveryType
enum class EAutoRecoveryType : uint8 {
	None,
	Human,
	Zombie,
	HumanAndZombie,
	EAutoRecoveryType_MAX,
};

// Enum TslGame.EZombieVirusType
enum class EZombieVirusType : uint8 {
	None,
	Attacked,
	All,
	EZombieVirusType_MAX,
};

// Enum TslGame.EPrivateTrainingRoomType
enum class EPrivateTrainingRoomType : uint8 {
	IndoorRange,
	PracticalTrainingRoom,
	None,
	EPrivateTrainingRoomType_MAX,
};

// Enum TslGame.ETeamMateEmoteErrorType
enum class ETeamMateEmoteErrorType : uint8 {
	Normal,
	ExcessFollower,
	ExcessLimitDistance,
	ETeamMateEmoteErrorType_MAX,
};

// Enum TslGame.EInventoryRadioMessageType
enum class EInventoryRadioMessageType : uint8 {
	Vicinity,
	Inventory,
	Equipment,
	Weapon,
	Attachment,
	TacticalGear,
	Empty_Head,
	Empty_TorsoArmor,
	Empty_Backpack,
	Empty_PrimaryWeapon,
	Empty_SecondaryWeapon,
	Empty_WeaponMelee,
	Empty_WeaponThrowable,
	Empty_LowMagScope,
	Empty_HighMagScope,
	Empty_Muzzle,
	Empty_LowerRail,
	Empty_Magazine,
	Empty_Stock,
	Empty_Canted,
	None,
	EInventoryRadioMessageType_MAX,
};

// Enum TslGame.ERadioMessageInteractionType
enum class ERadioMessageInteractionType : uint8 {
	DroppedItem,
	Vehicle,
	CarepackageOrDeadbox,
	VendingMachine,
	RevivalTower,
	Normal,
	None,
	ERadioMessageInteractionType_MAX,
};

// Enum TslGame.ERadioMessageAlarmSoundCategory
enum class ERadioMessageAlarmSoundCategory : uint8 {
	Normal,
	Notify,
	Warning,
	Important,
	Invalid,
	ERadioMessageAlarmSoundCategory_MAX,
};

// Enum TslGame.ERadioMessageCategory
enum class ERadioMessageCategory : uint8 {
	Affirmative,
	ThankYou,
	NeedMed,
	Negative,
	Sorry,
	NeedAmmo,
	EnemySpotted,
	EnemyAreaSpotted,
	ItemSpotted,
	Ping,
	AreaPing,
	HelpMe,
	AreaNeedHelp,
	AreaBackup,
	WayPoint,
	EmergencyPickup,
	TeamMateEmote,
	Inventory,
	PlantingBomb,
	DefusingBomb,
	MovePlantedBombSite,
	BombCoin,
	Rush,
	Max,
	Invalid,
	ERadioMessageCategory_MAX,
};

// Enum TslGame.ERadioMessageHighlightType
enum class ERadioMessageHighlightType : uint8 {
	None,
	EnemySpotted,
	WorldMapPing,
	ERadioMessageHighlightType_MAX,
};

// Enum TslGame.EEquippedWeaponRTPC
enum class EEquippedWeaponRTPC : uint8 {
	None,
	HandBomb_Bottle,
	HandBomb_Metal,
	Melee,
	Pistol,
	SMG,
	AR,
	SR,
	Max,
	EEquippedWeaponRTPC_MAX,
};

// Enum TslGame.*10207b2a0a
enum class *10207b2a0a : uint8 {
	*8a162a8c98,
	*117990ed47,
	*f580089ef4,
	*10207b2a0a_MAX,
};

// Enum TslGame.EViewModeActorCenterPosition
enum class EViewModeActorCenterPosition : uint8 {
	None,
	Center,
	Bottom,
	EViewModeActorCenterPosition_MAX,
};

// Enum TslGame.EViewModeCategory
enum class EViewModeCategory : uint8 {
	None,
	Weapon,
	Parachute,
	Character,
	Vehicle,
	FloatingVehicle,
	LootCrate,
	EViewModeCategory_MAX,
};

// Enum TslGame.ESystemMenuButtonType
enum class ESystemMenuButtonType : uint8 {
	RESUME,
	SETTINGS,
	TEAM_MANAGEMENT,
	KEY_GUIDE,
	RESTART_LOBBY,
	LEAVE_MATCH,
	RETURN_TO_GAME,
	EXIT_TO_DESKTOP,
	GM_COMMAND_INGAME_HELPER,
	MATCH_LOG,
	ESystemMenuButtonType_MAX,
};

// Enum TslGame.*8bd9ed520b
enum class *8bd9ed520b : uint8 {
	*0f5b46e9c8,
	*ff88de383d,
	*936788ffdd,
	*8bd9ed520b_MAX,
};

// Enum TslGame.*92d13636f1
enum class *92d13636f1 : uint8 {
	*967103ef13,
	*5e495a8fba,
	*3b9d9694e4,
	*ba0b02f160,
	*f8f867b4b6,
	*92d13636f1_MAX,
};

// Enum TslGame.*f434f207ac
enum class *f434f207ac : uint8 {
	*ef51528046,
	*341d890ad4,
	*df32268a11,
	*0c00a2f34a,
	*9bb53afcf8,
	*46bee244fe,
	*ec0923719c,
	*f434f207ac_MAX,
};

// Enum TslGame.EReticleType
enum class EReticleType : uint8 {
	RedDot,
	HoloSight,
	Scope2x,
	Scope3x,
	Scope4x,
	Scope6x,
	Scope8x,
	EReticleType_MAX,
};

// Enum TslGame.EKeyHintType
enum class EKeyHintType : uint8 {
	Menu,
	Parachuting,
	Character,
	Driver,
	Rider,
	WeaponUse,
	WeaponChange,
	ADS,
	Aim,
	ADS_8x15x,
	ADS_6x,
	ADS_1x2x3x,
	ADS_CantedSight,
	ADS_IronSight,
	Throwing,
	Heal,
	Swimming,
	TeamSpectating,
	KillerSpectating,
	WorldMap,
	None,
	FreefallNew,
	ParachuteNew,
	SpikeTrap,
	MotorGlider,
	JerryCan,
	Melee,
	MeleeThrowing,
	ArenaModeHelpBox,
	Other,
	EKeyHintType_MAX,
};

// Enum TslGame.*8eec029a1b
enum class *8eec029a1b : uint8 {
	*14630ca4e1,
	*69ed2dca59,
	*8b21111016,
	*95c2d5508b,
	*0ee7231198,
	*ecc4af9ac7,
	*1cc689db6e,
	*632a151281,
	*d960c0df6e,
	*8eec029a1b_MAX,
};

// Enum TslGame.EWeatherChange
enum class EWeatherChange : uint8 {
	NoChange,
	Rainy,
	Foggy,
	EWeatherChange_MAX,
};

// Enum TslGame.*9246a5c889
enum class *9246a5c889 : uint8 {
	*a78f734bed,
	*1cdd59bbe9,
	*645d8c3f1f,
	*5ad1873cfe,
	*290eccb89c,
	*29a3328a7c,
	*9246a5c889_MAX,
};

// Enum TslGame.EMinimapColorType
enum class EMinimapColorType : uint8 {
	DESATURATED,
	SATURATED,
	EMinimapColorType_MAX,
};

// Enum TslGame.EDamageZoneType
enum class EDamageZoneType : uint8 {
	Head,
	Torso,
	Arm,
	Pelvis,
	Leg,
	EDamageZoneType_MAX,
};

// Enum TslGame.ETslWidgetCreationMethod
enum class ETslWidgetCreationMethod : uint8 {
	CreateOnInit,
	OnDemand,
	OnDemandOnOnlyPC,
	OnDemandOnOnlyConsole,
	ETslWidgetCreationMethod_MAX,
};

// Enum TslGame.ERedZoneGenerateType
enum class ERedZoneGenerateType : uint8 {
	None,
	Uniform_Distribution,
	Ringtaw,
	Outsider,
	RingtawOrOutsider,
	ERedZoneGenerateType_MAX,
};

// Enum TslGame.ETslHudType
enum class ETslHudType : uint8 {
	None,
	CharacterHud,
	SpectatorHud,
	ObserverHud,
	ReplayHud,
	LeagueReplayHud,
	ETslHudType_MAX,
};

// Enum TslGame.ETargetAnimDynamicsType
enum class ETargetAnimDynamicsType : uint8 {
	None,
	Hair,
	Coat,
	ETargetAnimDynamicsType_MAX,
};

// Enum TslGame.EAnimatableCustomizableTypes
enum class EAnimatableCustomizableTypes : uint8 {
	Hair,
	Outer,
	Legs,
	Torso,
	Head,
	Mask,
	Backpack,
	Eyes,
	TorsoArmor,
	Hands,
	Feet,
	Belt,
	Face,
	EAnimatableCustomizableTypes_MAX,
};

// Enum TslGame.EGameEndState
enum class EGameEndState : uint8 {
	None,
	CereMony,
	Cinematic,
	MatchFinish,
	EGameEndState_MAX,
};

// Enum TslGame.*13431f925c
enum class *13431f925c : uint8 {
	*86430e258b,
	*3946a14b62,
	*be40347571,
	*13431f925c_MAX,
};

// Enum TslGame.ELobbyCameraStates
enum class ELobbyCameraStates : uint8 {
	XBox_Home,
	Main_1,
	Main_2,
	Menu_1,
	Custom_1,
	Custom_2,
	EventPass_Milestone_1,
	EventPass_Milestone_2,
	EventPass_Missions,
	ViewMode_Character,
	ViewMode_Weapon,
	ViewMode_Parachute,
	EventPass_Milestone_0_Particle,
	None,
	ELobbyCameraStates_MAX,
};

// Enum TslGame.EUiShowType
enum class EUiShowType : uint8 {
	AlwaysShow,
	TpsOnlyShow,
	FpsOnlyShow,
	AlwaysHide,
	EUiShowType_MAX,
};

// Enum TslGame.EMatchLogTab
enum class EMatchLogTab : uint8 {
	All,
	Squad,
	You,
	EMatchLogTab_MAX,
};

// Enum TslGame.EMatchLogRelative
enum class EMatchLogRelative : uint8 {
	None,
	You,
	Squad,
	Other,
	EMatchLogRelative_MAX,
};

// Enum TslGame.EMatchLogType
enum class EMatchLogType : uint8 {
	None,
	KillMessage,
	SystemMessage,
	EMatchLogType_MAX,
};

// Enum TslGame.ETslApRewardLogicType
enum class ETslApRewardLogicType : uint8 {
	None,
	Public,
	ETslApRewardLogicType_MAX,
};

// Enum TslGame.ETslXpRewardLogicType
enum class ETslXpRewardLogicType : uint8 {
	None,
	Public,
	ETslXpRewardLogicType_MAX,
};

// Enum TslGame.ETslBpRewardLogicType
enum class ETslBpRewardLogicType : uint8 {
	None,
	Public,
	ScoreBased,
	ETslBpRewardLogicType_MAX,
};

// Enum TslGame.ELobbyItemStateFlags
enum class ELobbyItemStateFlags : uint8 {
	Default,
	Vehicle_DoorOpened,
	ELobbyItemStateFlags_MAX,
};

// Enum TslGame.ELobbyCustomizingSlotType
enum class ELobbyCustomizingSlotType : uint8 {
	None,
	VehicleSlot,
	WeaponSlot,
	ELobbyCustomizingSlotType_MAX,
};

// Enum TslGame.EGamepadInputResponseForTapIconWidget
enum class EGamepadInputResponseForTapIconWidget : uint8 {
	None,
	Hold,
	DoubleTap,
	EGamepadInputResponseForTapIconWidget_MAX,
};

// Enum TslGame.EActionType
enum class EActionType : uint8 {
	Action,
	Axis,
	Action_Combo,
	EActionType_MAX,
};

// Enum TslGame.EEmergencyPickupState
enum class EEmergencyPickupState : uint8 {
	None,
	Prepare,
	Aircraft,
	EEmergencyPickupState_MAX,
};

// Enum TslGame.*0147921a70
enum class *0147921a70 : uint8 {
	*0688093198,
	*327d070b42,
	*ba88b9bee7,
	*2e80417f04,
	*4c3932d902,
	*0147921a70_MAX,
};

// Enum TslGame.EGamepadInputResponseTypes
enum class EGamepadInputResponseTypes : uint8 {
	Pressed,
	Released,
	Tap,
	Hold,
	DoubleTap,
	EGamepadInputResponseTypes_MAX,
};

// Enum TslGame.ERadioMessagePresets
enum class ERadioMessagePresets : uint8 {
	Preset1,
	Preset2,
	ERadioMessagePresets_MAX,
};

// Enum TslGame.EGamepadPresets
enum class EGamepadPresets : uint8 {
	ControllerTypeA,
	ControllerTypeB,
	ControllerTypeC,
	CustomType,
	Max,
	EGamepadPresets_MAX,
};

// Enum TslGame.EKeyGuideShowCases
enum class EKeyGuideShowCases : uint8 {
	Reload,
	ExitVehicle,
	EKeyGuideShowCases_MAX,
};

// Enum TslGame.ETslInputModes
enum class ETslInputModes : uint8 {
	Toggle,
	Hold,
	DoubleTap,
	ETslInputModes_MAX,
};

// Enum TslGame.EGameplayClientReplay
enum class EGameplayClientReplay : uint8 {
	Replay,
	Killcam,
	KeyGuide,
	EGameplayClientReplay_MAX,
};

// Enum TslGame.*cf8efe2aea
enum class *cf8efe2aea : uint8 {
	*ed2f342139,
	*2fcbea3162,
	*cf8efe2aea_MAX,
};

// Enum TslGame.EInputModeSettingActions
enum class EInputModeSettingActions : uint8 {
	Crouch,
	Prone,
	Walk,
	Sprint,
	HoldRotation,
	HoldBreath,
	Peek,
	Map,
	ADS,
	Aim,
	HoldAngled,
	EInputModeSettingActions_MAX,
};

// Enum TslGame.*9428665aad
enum class *9428665aad : uint8 {
	*ae2fedf1aa,
	*069e1d373c,
	*3454a114df,
	*9428665aad_MAX,
};

// Enum TslGame.EReportDetailCauseType
enum class EReportDetailCauseType : uint8 {
	None,
	AutoAim,
	NoRecoil,
	EspOrPenetration,
	Speedhack,
	WallPenetration,
	FlyingCar,
	Other,
	EReportDetailCauseType_MAX,
};

// Enum TslGame.EReportedSessionType
enum class EReportedSessionType : uint8 {
	PublicOrCustomGame,
	Killcam,
	Replay,
	EReportedSessionType_MAX,
};

// Enum TslGame.EReportCause
enum class EReportCause : uint8 {
	Default,
	Cheat,
	TeamKill,
	Teaming,
	InappropriateID,
	VerbalHarassment,
	Griefing,
	StreamSniping,
	InappropriateClanTag,
	Abusing,
	MarketingSpamming,
	EReportCause_MAX,
};

// Enum TslGame.ItemPackageType
enum class ItemPackageType : uint8 {
	RootBox,
	CarePackage,
	DroppedEventPackage,
	VehicleTrunk,
	ItemPackageType_MAX,
};

// Enum TslGame.ECarePackageIconType
enum class ECarePackageIconType : uint8 {
	Normal,
	Flying,
	Opened,
	ECarePackageIconType_MAX,
};

// Enum TslGame.EVehicleRideType
enum class EVehicleRideType : uint8 {
	None,
	Normal,
	Aircraft,
	Mortar,
	EVehicleRideType_MAX,
};

// Enum TslGame.ECharacterIconType
enum class ECharacterIconType : uint8 {
	Normal,
	Vehicle,
	Parachute,
	Die,
	Groggy,
	Quitter,
	Observer,
	Aircraft,
	EmergencyPickup,
	ECharacterIconType_MAX,
};

// Enum TslGame.EReportUiType
enum class EReportUiType : uint8 {
	Normal,
	Respawn,
	EReportUiType_MAX,
};

// Enum TslGame.EZombieRuleType
enum class EZombieRuleType : uint8 {
	None,
	BattleRoyale,
	Survival,
	Elimination,
	EZombieRuleType_MAX,
};

// Enum TslGame.EZombieModePlayerState
enum class EZombieModePlayerState : uint8 {
	None,
	Human,
	ReadyToRevive,
	Zombie,
	EZombieModePlayerState_MAX,
};

// Enum TslGame.EFiremode
enum class EFiremode : uint8 {
	FullAuto,
	ThreeRoundBurst,
	TwoRoundBurst,
	SemiAuto,
	Single,
	FullAutoFast,
	FullAuto_SG,
	ThreeRoundBurst_SG,
	SemiAuto_SG,
	EFiremode_MAX,
};

// Enum TslGame.ETraumaBagHealMode
enum class ETraumaBagHealMode : uint8 {
	NoHealItem,
	Bandage,
	FirstAidKit,
	Medkit,
	MaxAndNone,
	ETraumaBagHealMode_MAX,
};

// Enum TslGame.EHeatState
enum class EHeatState : uint8 {
	Stable,
	IncreaseHeat,
	DecreaseHeat,
	OverHeated,
	CoolingDown,
	EHeatState_MAX,
};

// Enum TslGame.EKeyboardKeyIconDisplayType
enum class EKeyboardKeyIconDisplayType : uint8 {
	Tap,
	DoubleTap,
	Hold,
	EKeyboardKeyIconDisplayType_MAX,
};

// Enum TslGame.ETslHASInteractionState
enum class ETslHASInteractionState : uint8 {
	Normal,
	Buffed,
	Debuffed,
	Multiple,
	ETslHASInteractionState_MAX,
};

// Enum TslGame.ETslHASInteractionType
enum class ETslHASInteractionType : uint8 {
	None,
	Generator,
	Exit,
	Healing,
	BeingHealed,
	Chest,
	SelfHeal,
	Wiggle,
	Scoping,
	CabinetKnock,
	ETslHASInteractionType_MAX,
};

// Enum TslGame.ETslHASInteractionMethod
enum class ETslHASInteractionMethod : uint8 {
	None,
	Hand,
	Medkit,
	Toolbox,
	Win94,
	ETslHASInteractionMethod_MAX,
};

// Enum TslGame.EHASEndGamePhase
enum class EHASEndGamePhase : uint8 {
	NotStarted,
	Lv0,
	Lv1,
	Lv2,
	Lv3,
	Lv4,
	EHASEndGamePhase_MAX,
};

// Enum TslGame.*a081601528
enum class *a081601528 : uint8 {
	*2cf2311a91,
	*b0f815db03,
	*9348066ae9,
	*4ce78438dc,
	*a081601528_MAX,
};

// Enum TslGame.EHASSeekerWeapon
enum class EHASSeekerWeapon : uint8 {
	None,
	Win94,
	Machete,
	StickyBomb,
	EHASSeekerWeapon_MAX,
};

// Enum TslGame.EConsoleHitDirections
enum class EConsoleHitDirections : uint8 {
	None,
	Front_Right,
	Front_Left,
	Rear,
	EConsoleHitDirections_MAX,
};

// Enum TslGame.EPresetNumSlotState
enum class EPresetNumSlotState : uint8 {
	Normal,
	Focus,
	Select,
	Lock,
	Disable,
	FocusConsole,
	SelectFocus,
	SelectFocusConsole,
	EPresetNumSlotState_MAX,
};

// Enum TslGame.ETslMapMarkerTowerState
enum class ETslMapMarkerTowerState : uint8 {
	Init,
	Enable,
	Active,
	Disable,
	ETslMapMarkerTowerState_MAX,
};

// Enum TslGame.ETslNotificationMessageAnimationType
enum class ETslNotificationMessageAnimationType : uint8 {
	None,
	Appear,
	Loop,
	ETslNotificationMessageAnimationType_MAX,
};

// Enum TslGame.ETslNotificationMessageColorType
enum class ETslNotificationMessageColorType : uint8 {
	RichText,
	Default,
	Blue,
	Red,
	Yellow,
	ETslNotificationMessageColorType_MAX,
};

// Enum TslGame.ESoundType
enum class ESoundType : uint8 {
	Count,
	Start,
	ESoundType_MAX,
};

// Enum TslGame.ERoundEndPointType
enum class ERoundEndPointType : uint8 {
	Empty,
	Lost,
	Won,
	Draw,
	ERoundEndPointType_MAX,
};

// Enum TslGame.ETrainingInfoType
enum class ETrainingInfoType : uint8 {
	Latest,
	Best,
	ETrainingInfoType_MAX,
};

// Enum TslGame.ETrainingInfoSwitcherIndex
enum class ETrainingInfoSwitcherIndex : uint8 {
	Aim,
	Sound,
	ETrainingInfoSwitcherIndex_MAX,
};

// Enum TslGame.ELeaningState
enum class ELeaningState : uint8 {
	Normal,
	LeanLeft,
	LeanRight,
	ELeaningState_MAX,
};

// Enum TslGame.EEventBoostState
enum class EEventBoostState : uint8 {
	Normal,
	UsingBoost,
	CantUse,
	EEventBoostState_MAX,
};

// Enum TslGame.EVehicleAIAvoidanceMode
enum class EVehicleAIAvoidanceMode : uint8 {
	Off,
	SingleTrace,
	MultiTrace,
	EVehicleAIAvoidanceMode_MAX,
};

// Enum TslGame.ESpawnType
enum class ESpawnType : uint8 {
	Single,
	ContinuousOnTimer,
	ContinuousOnDeath,
	ESpawnType_MAX,
};

// Enum TslGame.*821998e51d
enum class *821998e51d : uint8 {
	*2d6b164cb2,
	*0c2f0d6385,
	*009aed8732,
	*595fde5baf,
	*933770aae8,
	*b4a65b5538,
	*09a04e9114,
	*e2bcd430ee,
	*2fe988d0ba,
	*5e49c7b4ea,
	*821998e51d_MAX,
};

// Enum TslGame.*b2517a3eb5
enum class *b2517a3eb5 : uint8 {
	*45ea9aafd8,
	*ac29944cdb,
	*d40db53ce8,
	*9953e8f773,
	*b2517a3eb5_MAX,
};

// Enum TslGame.ESurfaceEffect
enum class ESurfaceEffect : uint8 {
	S_None,
	S_Concrete_Roll,
	S_Concrete_Skid,
	S_Concrete_Spin,
	S_Dirt_Roll,
	S_Dirt_Skid,
	S_Dirt_Spin,
	S_Water_Roll,
	S_Water_Skid,
	S_Water_Spin,
	S_Metal_Roll,
	S_Metal_Skid,
	S_Metal_Spin,
	S_Wood_Roll,
	S_Wood_Skid,
	S_Wood_Spin,
	S_Rock_Roll,
	S_Rock_Skid,
	S_Rock_Spin,
	S_Grass_Roll,
	S_Grass_Skid,
	S_Grass_Spin,
	S_Sand_Roll,
	S_Sand_Skid,
	S_Sand_Spin,
	S_Concrete_Brake,
	S_Dirt_Brake,
	S_Water_Brake,
	S_Metal_Brake,
	S_Wood_Brake,
	S_Rock_Brake,
	S_Grass_Brake,
	S_Sand_Brake,
	S_Snow_Brake,
	S_SnowRock_Brake,
	S_Ice_Brake,
	S_Common_BrakeDisc,
	S_Concrete_Punctured_Roll,
	S_Concrete_Punctured_Skid,
	S_Concrete_Punctured_Spin,
	S_Concrete_Punctured_Brake,
	S_Snow_Roll,
	S_Snow_Skid,
	S_Snow_Spin,
	S_SnowRock_Roll,
	S_SnowRock_Skid,
	S_SnowRock_Spin,
	S_Ice_Roll,
	S_Ice_Skid,
	S_Ice_Spin,
	S_Mud_Roll,
	S_Mud_Skid,
	S_Mud_Spin,
	S_Mud_Brake,
	S_Common_Neutral,
	S_MAX,
};

// Enum TslGame.EMortarWeaponInstallState
enum class EMortarWeaponInstallState : uint8 {
	None,
	InstallInprogress,
	InstallComplete,
	Installed,
	EMortarWeaponInstallState_MAX,
};

// Enum TslGame.EDeployState
enum class EDeployState : uint8 {
	INVALID,
	UNDEPLOYED,
	DEPLOYING,
	DEPLOYED,
	EDeployState_MAX,
};

// Enum TslGame.ERepairKitMode
enum class ERepairKitMode : uint8 {
	Helmet,
	Vest,
	None,
	ERepairKitMode_MAX,
};

// Enum TslGame.*d5fce6255f
enum class *d5fce6255f : uint8 {
	*3f546539d3,
	*2c33528c9c,
	*0e3275fcc1,
	*d5fce6255f_MAX,
};

// Enum TslGame.EInfoPointType
enum class EInfoPointType : uint8 {
	InfoPoint,
	ObjectPoint,
	SafePoint,
	BeachPoint,
	EInfoPointType_MAX,
};

// Enum TslGame.EBlendSequenceByBoolStartType
enum class EBlendSequenceByBoolStartType : uint8 {
	Restart,
	SameTime,
	EBlendSequenceByBoolStartType_MAX,
};

// Enum TslGame.EJumpStartAnimationType
enum class EJumpStartAnimationType : uint8 {
	Stationary,
	Forward,
	Backward,
	EJumpStartAnimationType_MAX,
};

// Enum TslGame.ERotateBoneInputType
enum class ERotateBoneInputType : uint8 {
	Rotator,
	AngleAxis,
	ERotateBoneInputType_MAX,
};

// Enum TslGame.ERotateBoneSpace
enum class ERotateBoneSpace : uint8 {
	BoneSpace,
	LocalSpace,
	WorldSpace,
	ERotateBoneSpace_MAX,
};

// Enum TslGame.ETslLocomotionNodeState
enum class ETslLocomotionNodeState : uint8 {
	Idle,
	Locomotion,
	Start,
	Stop_Left,
	Stop_Right,
	Pivot_Left,
	Pivot_Right,
	FastTurn_Pivot,
	ETslLocomotionNodeState_MAX,
};

// Enum TslGame.EGameStartupTimeRecordType
enum class EGameStartupTimeRecordType : uint8 {
	ExecPubgBegin,
	ClientBegin,
	MoviePlaying,
	MovieEnded,
	WelcomeScreenLoadStarted,
	WelcomeScreenLoadEnded,
	LobbyLoadStarted,
	LobbyLoadEnded,
	StartMoviePlaying,
	StartMovieEnded,
	Count,
	SkipPrevRecord,
	EGameStartupTimeRecordType_MAX,
};

// Enum TslGame.*afb83b47e5
enum class *afb83b47e5 : uint8 {
	*7bcf528e5e,
	*6282ea61ea,
	*d339696bca,
	*fb0618674f,
	*afb83b47e5_MAX,
};

// Enum TslGame.ETeamChangeZombieMode
enum class ETeamChangeZombieMode : uint8 {
	None,
	LeaveTeam,
	JoinTeam,
	ETeamChangeZombieMode_MAX,
};

// Enum TslGame.*0ed626b9f0
enum class *0ed626b9f0 : uint8 {
	*5ee4941597,
	*bbae25f039,
	*f10ec91132,
	*0cb15c2c23,
	*246925a77d,
	*f9028fec4f,
	*0ed626b9f0_MAX,
};

// Enum TslGame.EObserverCameraMode
enum class EObserverCameraMode : uint8 {
	FixedCamera,
	FreeCamera,
	PlayerCamera,
	FollowCamera,
	EObserverCameraMode_MAX,
};

// Enum TslGame.EObserverAuthorityType
enum class EObserverAuthorityType : uint8 {
	None,
	FromBeginning,
	AfterDeath,
	AfterExtermination,
	ArenaModeEagleEye,
	EagleEye,
	EObserverAuthorityType_MAX,
};

// Enum TslGame.*447cb77fef
enum class *447cb77fef : uint8 {
	*3d0272ef3f,
	*763d6fc794,
	*ae00eacc22,
	*447cb77fef_MAX,
};

// Enum TslGame.EGameModeType
enum class EGameModeType : uint8 {
	BattleRoyale,
	War,
	TDM,
	Zombie,
	ZombieDefense,
	Conquest,
	Training,
	ESports,
	Arena,
	Challenger,
	ZoneTag,
	OneShot,
	Racing,
	Futsal,
	AtoZTutorial,
	ChickenRoyale,
	HAS,
	IntenseBattleRoyale,
	OverPower,
	Bomb,
	SLB,
	None,
	EGameModeType_MAX,
};

// Enum TslGame.EValueType
enum class EValueType : uint8 {
	Float,
	Int,
	String,
	Bool,
	EValueType_MAX,
};

// Enum TslGame.*0833c21d41
enum class *0833c21d41 : uint8 {
	*b377a9933e,
	*fea15241fe,
	*f540573a26,
	*c580a50edd,
	*3aab5a3199,
	*0833c21d41_MAX,
};

// Enum TslGame.*4bb1947cd2
enum class *4bb1947cd2 : uint8 {
	*2cffd8d071,
	*0d5ee5781b,
	*b479ee4f62,
	*4bb1947cd2_MAX,
};

// Enum TslGame.ENearClippingLevel
enum class ENearClippingLevel : uint8 {
	Default,
	Low,
	Middle,
	High,
	ENearClippingLevel_MAX,
};

// Enum TslGame.EThingSpotGroupType
enum class EThingSpotGroupType : uint8 {
	GroupA,
	GroupB,
	GroupC,
	GroupD,
	GroupE,
	GroupF,
	GroupG,
	GroupH,
	GroupI,
	GroupJ,
	GroupK,
	GroupL,
	GroupM,
	GroupN,
	GroupO,
	GroupP,
	GroupQ,
	GroupR,
	GroupS,
	GroupT,
	GroupU,
	GroupV,
	GroupW,
	GroupX,
	GroupY,
	GroupZ,
	MAX,
	EThingSpotGroupType_MAX,
};

// Enum TslGame.EPhysMaterialType
enum class EPhysMaterialType : uint8 {
	Unknown,
	Asphalt,
	Dirt,
	Water,
	Wood,
	Stone,
	Metal,
	EPhysMaterialType_MAX,
};

// Enum TslGame.EUIAkEvent
enum class EUIAkEvent : uint8 {
	None,
	HoverWeak,
	HoverMedium,
	SettingSlider,
	Confirm,
	Cancel,
	PopupModal,
	SystemMessage,
	EUIAkEvent_MAX,
};

// Enum TslGame.EEquipableItemSoundType
enum class EEquipableItemSoundType : uint8 {
	None,
	Vest,
	LongCoat,
	HipSack,
	Cloth,
	BackPack,
	MilitaryShoes,
	Sneakers,
	EEquipableItemSoundType_MAX,
};

// Enum TslGame.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup : uint8 {
	Default,
	Shoes,
	EEquipableItemSoundGroup_MAX,
};

// Enum TslGame.EColorBlindType
enum class EColorBlindType : uint8 {
	Normal,
	Deuteranopia,
	Protanopia,
	Tritanopia,
	EColorBlindType_MAX,
};

// Enum TslGame.EFrameRateLimitType
enum class EFrameRateLimitType : uint8 {
	Unlimited,
	Fixed_31,
	Fixed_61,
	Customizable,
	DisplayBased,
	EFrameRateLimitType_MAX,
};

// Enum TslGame.ETslOutGameCloudRequestErrorType
enum class ETslOutGameCloudRequestErrorType : uint8 {
	Unknown,
	InternalError,
	ServerError,
	RequestTimedOut,
	DataCorrupted,
	CompressionFailed,
	DecompressionFailed,
	ETslOutGameCloudRequestErrorType_MAX,
};

// Enum TslGame.ETslOutGameCloudRequestType
enum class ETslOutGameCloudRequestType : uint8 {
	Invalid,
	SaveToCloud,
	LoadFromCloud,
	ETslOutGameCloudRequestType_MAX,
};

// Enum TslGame.ETslPhysMaterialType
enum class ETslPhysMaterialType : uint8 {
	Unknown,
	Concrete,
	Dirt,
	Water,
	Metal,
	Wood,
	Grass,
	Glass,
	Flesh,
	ETslPhysMaterialType_MAX,
};

// Enum TslGame.ETppAimCameraPosition
enum class ETppAimCameraPosition : uint8 {
	LatestAimPosition,
	LastPeekingPosition,
	ResetToRightShoulderPosition,
	ResetToLeftShoulderPosition,
	ETppAimCameraPosition_MAX,
};

// Enum TslGame.EAccessorySlot
enum class EAccessorySlot : uint8 {
	Slot_Primary,
	Slot_Secondary,
	Slot_SideArm,
	Slot_Melee,
	Slot_Thrown,
	Slot_Belt,
	Slot_None,
	Slot_MAX,
};

// Enum TslGame.EInventoryListPackageType
enum class EInventoryListPackageType : uint8 {
	CarePackage,
	InventoryOrDeathDropPackage,
	TrunkPackage,
	ItemPackage,
	Ground,
	TacPack,
	Max,
	EInventoryListPackageType_MAX,
};

// Enum TslGame.EInventorySlotType
enum class EInventorySlotType : uint8 {
	Vicinity,
	Inventory,
	Crafting,
	Equipment,
	Weapon,
	Max,
	EInventorySlotType_MAX,
};

// Enum TslGame.ELobbyCharacterCameraType
enum class ELobbyCharacterCameraType : uint8 {
	None,
	WholeBodyCamera,
	TopCamera,
	HeadCamera,
	BodyCamera,
	LegCamera,
	FootCamera,
	Max,
	ELobbyCharacterCameraType_MAX,
};

// Enum TslGame.EAnimWeaponSpecificClass
enum class EAnimWeaponSpecificClass : uint8 {
	None,
	EAnimWeaponSpecificClass_MAX,
};

// Enum TslGame.EContinuousHealItem
enum class EContinuousHealItem : uint8 {
	Continuous_On,
	Bandaged_Only,
	Continuous_Off,
	EContinuousHealItem_MAX,
};

// Enum TslGame.EWeaponDisplayTypes
enum class EWeaponDisplayTypes : uint8 {
	None,
	Handgun,
	SMG,
	AR,
	Shotgun,
	SR,
	DMR,
	LMG,
	AMR,
	Melee,
	Throwable,
	Shield,
	Crossbow,
	Launcher,
	GrenadeLauncher,
	Mortar,
	TacticalGear,
	FlareGun,
	Special,
	EWeaponDisplayTypes_MAX,
};

// Enum TslGame.EWeaponClass
enum class EWeaponClass : uint8 {
	Class_None,
	Class_Pistol,
	Class_SMG,
	Class_Rifle,
	Class_Carbine,
	Class_Shotgun,
	Class_Sniper,
	Class_DMR,
	Class_LMG,
	Class_Melee,
	Class_Throwable,
	Class_Shield,
	Class_Crossbow,
	Class_Launcher,
	Class_GrenadeLauncher,
	Class_Mortar,
	EWeaponClass_MAX,
};

// Enum TslGame.EAllowedThrowMode
enum class EAllowedThrowMode : uint8 {
	Any,
	ThrowHigh,
	ThrowLow,
	EAllowedThrowMode_MAX,
};

// Enum TslGame.*b95106774f
enum class *b95106774f : uint8 {
	*48638625b8,
	*5613f3d85a,
	*2018df5889,
	*b95106774f_MAX,
};

// Enum TslGame.EAttachmentCalculateType
enum class EAttachmentCalculateType : uint8 {
	Addition,
	Multiply,
	EAttachmentCalculateType_MAX,
};

// Enum TslGame.EAutoEquipAttachmentForScopeMode
enum class EAutoEquipAttachmentForScopeMode : uint8 {
	Off,
	Sight_Only,
	ALL,
	EAutoEquipAttachmentForScopeMode_MAX,
};

// Enum TslGame.ECustomPartType
enum class ECustomPartType : uint8 {
	Vehicle,
	ECustomPartType_MAX,
};

// Enum TslGame.EItemCategory
enum class EItemCategory : uint8 {
	None,
	Equipment,
	Weapon,
	Attachment,
	Ammunition,
	Use,
	Skin,
	Event,
	Part,
	EItemCategory_MAX,
};

// Enum TslGame.EFiringMode
enum class EFiringMode : uint8 {
	Normal,
	Burst,
	FullAuto,
	FullAutoFast,
	EFiringMode_MAX,
};

// Enum TslGame.ECharacterGait
enum class ECharacterGait : uint8 {
	Walk,
	Run,
	Sprint,
	ECharacterGait_MAX,
};

// Enum TslGame.EWeaponHand
enum class EWeaponHand : uint8 {
	Left,
	Right,
	Total,
	EWeaponHand_MAX,
};

// Enum TslGame.EWeaponArmState
enum class EWeaponArmState : uint8 {
	None,
	NotArmed,
	Arming,
	Armed,
	UnArming,
	EWeaponArmState_MAX,
};

// Enum TslGame.*2f797355c1
enum class *2f797355c1 : uint8 {
	*b13bcb4245,
	*588d6fd2f5,
	*d5a03305a9,
	*2f797355c1_MAX,
};

// Enum TslGame.EAnimVehicleSeatType
enum class EAnimVehicleSeatType : uint8 {
	Rider,
	Pillion,
	VehicleDriver,
	VehiclePassenger,
	Pilot,
	AircraftPassenger,
	GliderPassenger,
	EAnimVehicleSeatType_MAX,
};

// Enum TslGame.ETurningDirection
enum class ETurningDirection : uint8 {
	None,
	Right_46,
	Right_91,
	Right_136,
	Right_181,
	Left_46,
	Left_91,
	Left_136,
	Left_181,
	ETurningDirection_MAX,
};

// Enum TslGame.*be529112d3
enum class *be529112d3 : uint8 {
	*c085f5e27c,
	*c47c77a4bf,
	*3d1b442d27,
	*4663c55312,
	*4d8c9cf6bd,
	*2c5f3ee1e6,
	*a23bde67c9,
	*e25f506282,
	*aa580117af,
	*be529112d3_MAX,
};

// Enum TslGame.EAnimStance
enum class EAnimStance : uint8 {
	Stand,
	Crouch,
	Prone,
	Groggy,
	EAnimStance_MAX,
};

// Enum TslGame.EAnimWeaponType
enum class EAnimWeaponType : uint8 {
	None,
	Rifle,
	Launcher,
	Pistol,
	Throwable,
	SpikeTrap,
	Melee,
	Shield,
	Mortar,
	MAX,
	EAnimWeaponType_MAX,
};

// Enum TslGame.*cca980e840
enum class *cca980e840 : uint8 {
	*297c0e7be8,
	*ba02cf4d64,
	*c62a58ac4d,
	*cca980e840_MAX,
};

// Enum TslGame.ECameraViewBehaviour
enum class ECameraViewBehaviour : uint8 {
	FpsAndTps,
	FpsOnly,
	TpsOnly,
	ECameraViewBehaviour_MAX,
};

// Enum TslGame.EPlayerStartType
enum class EPlayerStartType : uint8 {
	OnePlace,
	SeveralPlace,
	EPlayerStartType_MAX,
};

// Enum TslGame.EMatchStartType
enum class EMatchStartType : uint8 {
	Normal,
	Airborne,
	Monster,
	EMatchStartType_MAX,
};

// Enum TslGame.EGender
enum class EGender : uint8 {
	Male,
	Female,
	EGender_MAX,
};

// Enum TslGame.EThermalItemType
enum class EThermalItemType : uint8 {
	Character,
	Vehicle,
	Blood,
	Fire,
	Ghillie,
	CountOrNone,
	EThermalItemType_MAX,
};

// Enum TslGame.ESpecialEquipmentType
enum class ESpecialEquipmentType : uint8 {
	Default,
	BluezoneBlocker,
	EmergencyParachute,
	Toolbox,
	TacPack,
	TraumaBag,
	SoftRole,
	ESpecialEquipmentType_MAX,
};

// Enum TslGame.EEquipableItemLevelType
enum class EEquipableItemLevelType : uint8 {
	None,
	Level1,
	Level2,
	Level3,
	Level4,
	EEquipableItemLevelType_MAX,
};

// Enum TslGame.EConstraintSlotType
enum class EConstraintSlotType : uint8 {
	Block,
	Hide,
	Max,
	EConstraintSlotType_MAX,
};

// Enum TslGame.*8e9d560617
enum class *8e9d560617 : uint8 {
	*dff36baa11,
	*b6f3eb1961,
	*79b1e7dc50,
	*8e9d560617_MAX,
};

// Enum TslGame.*b3d7c18e06
enum class *b3d7c18e06 : uint8 {
	*295bf63ce3,
	*78e24b744e,
	*b1a6b763c9,
	*7c8702d29e,
	*faad2ba9b3,
	*b3d7c18e06_MAX,
};

// Enum TslGame.EItemSpotGroupType
enum class EItemSpotGroupType : uint8 {
	GroupA,
	GroupB,
	GroupC,
	GroupD,
	GroupE,
	GroupF,
	GroupG,
	GroupH,
	GroupI,
	GroupJ,
	GroupK,
	GroupL,
	GroupM,
	GroupN,
	GroupO,
	GroupP,
	GroupQ,
	GroupR,
	GroupS,
	GroupT,
	GroupU,
	GroupV,
	GroupW,
	GroupX,
	GroupY,
	GroupZ,
	MAX,
	EItemSpotGroupType_MAX,
};

// Enum TslGame.EItemSpotType
enum class EItemSpotType : uint8 {
	TypeA,
	TypeB,
	TypeC,
	TypeD,
	TypeE,
	TypeF,
	TypeG,
	TypeH,
	TypeI,
	TypeJ,
	TypeK,
	TypeL,
	TypeM,
	TypeN,
	TypeO,
	TypeP,
	TypeQ,
	TypeR,
	TypeS,
	TypeT,
	TypeU,
	TypeV,
	TypeW,
	TypeX,
	TypeY,
	TypeZ,
	MAX,
	EItemSpotType_MAX,
};

// Enum TslGame.EItemOverrideType
enum class EItemOverrideType : uint8 {
	NONE,
	TypeA,
	TypeB,
	TypeC,
	TypeD,
	TypeE,
	TypeF,
	TypeG,
	TypeH,
	TypeI,
	TypeJ,
	TypeK,
	TypeL,
	TypeM,
	TypeN,
	EItemOverrideType_MAX,
};

// Enum TslGame.ECastableItemType
enum class ECastableItemType : uint8 {
	None,
	Bandage,
	FirstAid,
	Medkit,
	EnergyDrink,
	Painkiller,
	Adrenaline,
	GasCan,
	Battery,
	Key,
	EmergencyPickup,
	SelfRevive,
	Ascender,
	RevivalTransmitter,
	TacticalGear,
	ECastableItemType_MAX,
};

// Enum TslGame.ECastLevel
enum class ECastLevel : uint8 {
	None,
	NoRestriction,
	Restriction,
	OnlyRotationRestriction,
	ECastLevel_MAX,
};

// Enum TslGame.ECastPriority
enum class ECastPriority : uint8 {
	None,
	Low,
	Normal,
	High,
	Max,
	ECastPriority_MAX,
};

// Enum TslGame.ELobbyItemPointSellingType
enum class ELobbyItemPointSellingType : uint8 {
	Normal,
	WeeklyDouble,
	ELobbyItemPointSellingType_MAX,
};

// Enum TslGame.ELobbyItemPlatform
enum class ELobbyItemPlatform : uint8 {
	PC_Steam,
	PC_NonSteam,
	Xbox,
	ELobbyItemPlatform_MAX,
};

// Enum TslGame.ELobbyItemTier
enum class ELobbyItemTier : uint8 {
	Basic,
	Common,
	Classic,
	Special,
	Rare,
	Elite,
	Epic,
	Legendary,
	Ultimate,
	Event,
	ELobbyItemTier_MAX,
};

// Enum TslGame.ELobbyItemCategory
enum class ELobbyItemCategory : uint8 {
	Belt,
	Body,
	Eyes,
	Feet,
	Head,
	Jacket,
	Legs,
	Mask,
	Hands,
	Box,
	Key,
	WeaponSkin,
	ParachuteSkin,
	HelmetSkin,
	BackpackSkin,
	TorsoArmorSkin,
	VehicleSkin,
	Multislot,
	ELobbyItemCategory_MAX,
};

// Enum TslGame.EDamageVictimActorType
enum class EDamageVictimActorType : uint8 {
	Default,
	Character,
	Vehicle,
	Wheel,
	DestructibleActor,
	ExplosiveItem,
	DummyAI,
	EDamageVictimActorType_MAX,
};

// Enum TslGame.EVehicleConvertState
enum class EVehicleConvertState : uint8 {
	None,
	Play,
	Cancel,
	Finish,
	EVehicleConvertState_MAX,
};

// Enum TslGame.EVehiclePartType
enum class EVehiclePartType : uint8 {
	BodyColor,
	WheelColor,
	BrakeCaliperColor,
	BoostEffect,
	WheelMesh,
	PinstripeColor,
	Spoiler,
	EVehiclePartType_MAX,
};

// Enum TslGame.*f3561aaaf5
enum class *f3561aaaf5 : uint8 {
	*0e377a5abe,
	*4bbfa742c3,
	*9b79cc9d12,
	*c899e87501,
	*f3561aaaf5_MAX,
};

// Enum TslGame.*1c15c94125
enum class *1c15c94125 : uint8 {
	*5c7ea17421,
	*38014767d2,
	*88e97e83b8,
	*1ef733128e,
	*9388c12a32,
	*930a4cb510,
	*b98bf81e9d,
	*6f72809495,
	*3c4a67f58c,
	*381221738b,
	*a76e6b9707,
	*38961a6936,
	*136c4d1112,
	*1e91083784,
	*efe89ffe7f,
	*288fcef33e,
	*602ba98348,
	*e4a71e33ce,
	*6a2ead2057,
	*34514bf330,
	*a6555f78e2,
	*0552571ba3,
	*45aa930d1f,
	*57b6e5d08a,
	*35c500ce12,
	*625d9473de,
	*7b6fa48a93,
	*715abe99a1,
	*bf15e67937,
	*b6b73c34d7,
	*42c37392b3,
	*b3230f0c6f,
	*f6025c875d,
	*a935e3c628,
	*2c3652586d,
	*107c679d02,
	*10928f0b7f,
	*629f5f5cb5,
	*34e8694ed1,
	*b0b0c27ad1,
	*933092d1b5,
	*851c7839d6,
	*6e31efdb69,
	*8f277513ba,
	*bc1a419505,
	*98b84c8589,
	*1a06da7228,
	*318d38cc45,
	*05db807cca,
	*6e735ffa70,
	*a116dd0a33,
	*e4e3dacc1e,
	*3976465a18,
	*b88a946762,
	*79471ae629,
	*1c15c94125_MAX,
};

// Enum TslGame.*cbd6a57fa8
enum class *cbd6a57fa8 : uint8 {
	*b4e8e7f51b,
	*6405b8610d,
	*08a5e4cb2e,
	*98bc3f59dd,
	*cbd6a57fa8_MAX,
};

// Enum TslGame.ERiderType
enum class ERiderType : uint8 {
	Driver,
	Passenger,
	ERiderType_MAX,
};

// Enum TslGame.EStatTrakState
enum class EStatTrakState : uint8 {
	Run,
	Locked,
	Error,
	EStatTrakState_MAX,
};

// Enum TslGame.*ebe673c122
enum class *ebe673c122 : uint8 {
	*0551c85f43,
	*9ec466d6dd,
	*c1c6c0f4fc,
	*acabf97f8f,
	*f2bc06f665,
	*ebe673c122_MAX,
};

// Enum TslGame.ESkinMeshType
enum class ESkinMeshType : uint8 {
	SkeletalMesh,
	AsyncStaticMesh,
	StaticMesh,
	ESkinMeshType_MAX,
};

// Enum TslGame.EVehicleSkinCategory
enum class EVehicleSkinCategory : uint8 {
	None,
	FourSeaterSUV,
	FourSeaterSedan,
	TwoSeaterSportsCar,
	TwoSeaterMotorbike,
	EVehicleSkinCategory_MAX,
};

// Enum TslGame.ESkinCategory
enum class ESkinCategory : uint8 {
	Skin_None,
	Skin_Equipment,
	Skin_Parachute,
	Skin_Weapon,
	Skin_MeleeWeapon,
	Skin_Vehicle,
	Skin_Throwable,
	Skin_MAX,
};

// Enum TslGame.EBuffOverlapSolveMethod
enum class EBuffOverlapSolveMethod : uint8 {
	IgnoreLater,
	Overwrite,
	RestartTimer,
	Stack,
	EBuffOverlapSolveMethod_MAX,
};

// Enum TslGame.*78d3f3d355
enum class *78d3f3d355 : uint8 {
	*9c776ff69d,
	*62fa271204,
	*b995eaf9ea,
	*14abb7e432,
	*78d3f3d355_MAX,
};

// Enum TslGame.EVaultAnimType
enum class EVaultAnimType : uint8 {
	VaultNone,
	Vault200_Stationary,
	Vault200_Mobile,
	Vault200_Narrow,
	Vault160_Stationary,
	Vault160_Mobile,
	Vault160_Narrow,
	Vault120_Stationary,
	Vault120_Mobile,
	Vault120_Slide,
	Vault120_Narrow,
	Vault90_Stationary,
	Vault90_Mobile,
	Vault90_Slide,
	Vault90_Narrow,
	Climb200_Stationary,
	Climb200_Mobile,
	Climb200_Slide,
	Climb200_Narrow,
	Climb160_Stationary,
	Climb160_Mobile,
	Climb160_Slide,
	Climb160_Narrow,
	Climb120_Stationary,
	Climb120_Mobile,
	Climb120_Slide,
	Climb120_Narrow,
	Climb90_Stationary,
	Climb90_Mobile,
	Climb90_Slide,
	Climb90_Narrow,
	Vault90Roll,
	Vault120Window,
	Vault60_Stationary,
	Vault60_Mobile,
	Vault60_Slide,
	Vault60_Narrow,
	Climb60_Stationary,
	Climb60_Mobile,
	Climb60_Narrow,
	LedgeGrab_Up_Climb,
	LedgeGrab_Up_Climb_Swing,
	LedgeGrab_Up_Climb_HalfSwing,
	LedgeGrab_Up_Vault,
	LedgeGrab_Up_Vault_Swing,
	LedgeGrab_Up_Vault_HalfSwing,
	LedgeGrab_High_Climb,
	LedgeGrab_High_Climb_Swing,
	LedgeGrab_High_Climb_HalfSwing,
	LedgeGrab_High_Vault,
	LedgeGrab_High_Vault_Swing,
	LedgeGrab_High_Vault_HalfSwing,
	LedgeGrab_Low_Climb,
	LedgeGrab_Low_Climb_Swing,
	LedgeGrab_Low_Climb_HalfSwing,
	LedgeGrab_Low_Vault,
	LedgeGrab_Low_Vault_Swing,
	LedgeGrab_Low_Vault_HalfSwing,
	LedgeGrab_Low_Vault_Narrow,
	LedgeGrab_Low_Vault_HalfSwing_Narrow,
	LedgeGrab_Low_Vault_Swing_Narrow,
	LedgeGrab_High_Vault_Narrow,
	LedgeGrab_High_Vault_HalfSwing_Narrow,
	LedgeGrab_High_Vault_Swing_Narrow,
	LedgeGrab_Up_Vault_Narrow,
	LedgeGrab_Up_Vault_HalfSwing_Narrow,
	LedgeGrab_Up_Vault_Swing_Narrow,
	EVaultAnimType_MAX,
};

// Enum TslGame.ECollisionProfileType
enum class ECollisionProfileType : uint8 {
	Profiles,
	DefaultChannelResponses,
	EditProfiles,
	ProfileRedirects,
	CollisionChannelRedirects,
	ECollisionProfileType_MAX,
};

// Enum TslGame.EMovingState
enum class EMovingState : uint8 {
	Walk,
	Run,
	Sprint,
	EMovingState_MAX,
};

// Enum TslGame.EPlayerInputType
enum class EPlayerInputType : uint8 {
	KeyboardMouse,
	Gamepad,
	Mixed,
	EPlayerInputType_MAX,
};

// Enum TslGame.EAntiCheatKickType
enum class EAntiCheatKickType : uint8 {
	Default,
	HWID,
	MouseMacro,
	InGame,
	BattleEye,
	EAntiCheatKickType_MAX,
};

// Enum TslGame.ECheatType
enum class ECheatType : uint8 {
	None,
	SpeedHack,
	IgnoreWall_Hit,
	IgnoreWall_Sight,
	IgnoreVelocity_Hit,
	IgnoreVelocity,
	IgnoreVelocity2,
	ItemPackage,
	CarePackageMount,
	Aimbot,
	VerifyLagSwitch,
	InvalidNetConnectionClose,
	InvalidImpact,
	InvalidImpactZ,
	InvalidImpact_Gun_C,
	InvalidOrigin_Gun,
	InvalidOrigin_Melee,
	InvalidOrigin_Punch,
	InvalidOrigin_Throwable,
	InvalidOrigin_MeleeThrow,
	InvalidSimStep_MeleeThrow,
	InvalidRange,
	InvalidRange2,
	InvalidReviving,
	InvalidKick,
	InvalidA0,
	InvalidB1,
	InvalidB1_2,
	InvalidH0,
	InvalidOrigin_Gun_C,
	InvalidD0,
	InvalidS0,
	InvalidH1,
	InvalidH2,
	InvalidH3,
	InvalidC0,
	InvalidC1,
	InvalidC2,
	InvalidC3,
	InvalidC4,
	InvalidC5,
	InvalidC6,
	InvalidC7,
	InvalidT0,
	InvalidT1,
	InvalidT2,
	InvalidAimDir,
	InvalidPelletDir,
	InvalidAmmoSpeed,
	InvalidAmmoDir,
	InvalidCharacterFlag,
	InvalidCharacterXRay,
	InvalidPropertyCrc,
	InvalidWeaponCrc,
	InvalidWeaponRecoil,
	InvalidSwayBuffer,
	InvalidCameraYaw,
	InvalidWeaponPackageCrc,
	InvalidWeaponFlag,
	InvalidHitComponent,
	InvalidCollisionProfileCrc,
	InvalidPakListCrc,
	InvalidCharacterCrc,
	InvalidHitLocation,
	InvalidSight,
	InvalidBackface,
	InvalidMovementCurveCrc,
	InvalidDriverFire,
	InvalidVehicleOverlap,
	InvalidViewRotation,
	InvalidPenetration,
	InvalidPunchSpeed,
	CHKSUM_PUNCH,
	CHKSUM_MELEE,
	CHKSUM_A0,
	CHKSUM_T0,
	CHKSUM_S0,
	CHKSUM_D0,
	CHKSUM_V0,
	CHKSUM_W0,
	CHKSUM_T1,
	CHKSUM_D1,
	CHKSUM_CD,
	CHKSUM_LC,
	CHKSUM_P0,
	CHKSUM_BP,
	CHKSUM_G1,
	CHKSUM_H2,
	CHKSUM_H3,
	CHKSUM_UO,
	CHKSUM_UF,
	VHC_RI,
	VHC_MG_FF,
	VHC_MG_FC,
	VHC_MG_SW,
	VHC_MG_OS,
	VHC_MG_BC,
	VHC_MG_TC,
	VHC_MG_PL,
	VHC_MG_HL,
	VHC_MG_SD,
	VHC_MG_AA,
	VHC_MG_AV,
	VHC_MG_AD,
	VHC_MGB_FF,
	VHC_MGB_FC,
	VHC_MGB_OS,
	VHC_MGB_BC,
	VHC_MGB_TC,
	VHC_MGB_PL,
	VHC_MGB_HL,
	VHC_MGB_AA,
	VHC_MGB_AV,
	VHC_MGB_AD,
	VHC_MGF_OS,
	VHC_MGF_TC,
	VHC_MGF_BC,
	VHC_MGF_SD,
	VHC_MGF_AA,
	VHC_MGF_AV,
	VHC_KILL,
	VHC_ED,
	VHC_SERVERSIMUL,
	VHC_SIMULATION_ACTIVATE,
	VHC_SIMULATION_DEACTIVATE,
	VHC_TRY_BYPASS_SERVERSIMUL,
	VHC_BYPASSED_SERVERSIMUL,
	VHC_FORCE_SERVERSIMUL,
	CK_ACTIVATE,
	CK_DEACTIVATE,
	AntiCheatKick_WallHack,
	AntiCheatKick_ESP,
	AntiCheatKick_SpeedHack1,
	AntiCheatKick_SpeedHack2,
	AntiCheatKick_SpeedHack3,
	AntiCheatKick_PLFC,
	AntiCheatKick_TCFC,
	AntiCheatKick_HL,
	AntiCheatKick_OS,
	AntiCheatKick_FC,
	AntiCheatKick_SV,
	VehicleSimulation_PLFC,
	VehicleSimulation_TCFC,
	VehicleSimulation_HL,
	VehicleSimulation_OS,
	VehicleSimulation_FC,
	CC_ACTIVATE,
	CC_DEACTIVATE,
	CC_FORCE_ERROR_CORRECTION,
	FLC_ACTIVATE,
	FLC_DEACTIVATE,
	FallingCorrection,
	VaultingCorrection,
	QS_AJ,
	QS_VZ,
	KGB_AF,
	InputLog,
	FireInputLog,
	ESPLog,
	ESPRatioLog,
	IsEnabledAntiESP,
	HighLocationVehicle,
	HighLocationBoat,
	UnderLandscapeBoat,
	UnderLandscapeCharacter,
	InsideMeshCharacter,
	BC_BoatCorrection,
	HBR_InvalidDashDistance,
	UNC_ACTIVATE,
	UNC_DEACTIVATE,
	UncAddUserFail,
	UncSetUserInfoFail,
	UncDeleteUserFail,
	UncGetCookieFail,
	UncCookieVerifyFail,
	UncCookieNotRespond,
	DESP_SelfInfo,
	DESP_SelfInvalidCheckSum,
	DESP_SelfInvalidCount,
	DESP_RemoteInfo,
	DESP_RemoteInvalidCheckSum,
	HitInSmoke,
	BoneFocusedShoot,
	CenterFocusedShoot,
	Combination_Undefined,
	Combination_FlyingCar,
	Combination_InsideMeshAttack,
	ECheatType_MAX,
};

// Enum TslGame.ETslCustomMovementMode
enum class ETslCustomMovementMode : uint8 {
	Vaulting,
	Freefalling,
	Parachuting,
	UsingAscender,
	ETslCustomMovementMode_MAX,
};

// Enum TslGame.*5f9f5f045f
enum class *5f9f5f045f : uint8 {
	*323d6f730e,
	*1dfd3872c3,
	*5cb3463306,
	*6d3be5477c,
	*5f9f5f045f_MAX,
};

// Enum TslGame.EPreoccupiedTeamType
enum class EPreoccupiedTeamType : uint8 {
	NEUTRAL,
	RED,
	BLUE,
	EPreoccupiedTeamType_MAX,
};

// Enum TslGame.*0c9cab8e00
enum class *0c9cab8e00 : uint8 {
	*2a2c02eb39,
	*b21f659e32,
	*dc5345544e,
	*25faea786a,
	*0c9cab8e00_MAX,
};

// Enum TslGame.EPopupStyle
enum class EPopupStyle : uint8 {
	Ok_Cancel,
	Ok,
	Yes_No,
	Controller_KeyboardMouse,
	EPopupStyle_MAX,
};

// Enum TslGame.EKillcamDisplayCode
enum class EKillcamDisplayCode : uint8 {
	NotVisible,
	OptionDisabled,
	Recording,
	Playable,
	Replay,
	FailToLoad,
	DemoFailure,
	DetectedUnusualMovement,
	EKillcamDisplayCode_MAX,
};

// Enum TslGame.EWidgetShowType
enum class EWidgetShowType : uint8 {
	Show,
	Hide,
	Toggle,
	EWidgetShowType_MAX,
};

// Enum TslGame.EAIPoseState
enum class EAIPoseState : uint8 {
	Stand,
	Crouch,
	Prone,
	Jump,
	Reload,
	UnArmed,
	EAIPoseState_MAX,
};

// Enum TslGame.ERaycastDirection
enum class ERaycastDirection : uint8 {
	Forward,
	Down_45_Degrees,
	Down,
	ERaycastDirection_MAX,
};

// Enum TslGame.EEmoteMoveType
enum class EEmoteMoveType : uint8 {
	None,
	MoveFoward,
	EEmoteMoveType_MAX,
};

// Enum TslGame.EEmotePlayType
enum class EEmotePlayType : uint8 {
	None,
	Normal,
	TeamMate,
	Interaction,
	EEmotePlayType_MAX,
};

// Enum TslGame.*f061715223
enum class *f061715223 : uint8 {
	*497e92e44a,
	*75adc38835,
	*bbaccf7957,
	*c4b4bfa963,
	*f061715223_MAX,
};

// Enum TslGame.ESpecialZoneAdditionalEffect
enum class ESpecialZoneAdditionalEffect : uint8 {
	RemoveFireAndSmoke,
	DestructDrone,
	DeactivateBluezoneBlocker,
	DeactivateSpotterScope,
	DeactivateBlueChipDetector,
	DeactivateBlueChipRevival,
	ESpecialZoneAdditionalEffect_MAX,
};

// Enum TslGame.ESpecialZoneState
enum class ESpecialZoneState : uint8 {
	Disabled,
	BeforeMatch,
	WaitingStartDelay,
	Warning,
	Activating,
	ActivationDone,
	Deactivating,
	Removed,
	Finished,
	ESpecialZoneState_MAX,
};

// Enum TslGame.ESpecialZoneType
enum class ESpecialZoneType : uint8 {
	None,
	Blizzard,
	SandStorm,
	ESpecialZoneType_MAX,
};

// Enum TslGame.EMovementSpamType
enum class EMovementSpamType : uint8 {
	LeanRight,
	LeanLeft,
	Crouch,
	EMovementSpamType_MAX,
};

// Enum TslGame.EAttackType
enum class EAttackType : uint8 {
	None,
	Weapon,
	VehicleCrash,
	VehicleExplosion,
	Fall,
	BlueZone,
	RedZone,
	BlackZone,
	EAttackType_MAX,
};

// Enum TslGame.EPlayerMoveType
enum class EPlayerMoveType : uint8 {
	OnFoot,
	OnSwim,
	OnVehicle,
	OnParachute,
	OnFreefall,
	EPlayerMoveType_MAX,
};

// Enum TslGame.EVoiceChannelType
enum class EVoiceChannelType : uint8 {
	None,
	All,
	GlobalOnly,
	TeamOnly,
	EVoiceChannelType_MAX,
};

// Enum TslGame.EVivoxResponseState
enum class EVivoxResponseState : uint8 {
	NotRequested,
	Requested,
	Fail,
	Success,
	EVivoxResponseState_MAX,
};

// Enum TslGame.ELandingSoundSwitchState
enum class ELandingSoundSwitchState : uint8 {
	None,
	Light,
	Heavy,
	VeryHeavy,
	ELandingSoundSwitchState_MAX,
};

// Enum TslGame.*4fba765f9a
enum class *4fba765f9a : uint8 {
	*4616ac1c2a,
	*3c4beb4d8f,
	*f6d637a269,
	*7f702a96dc,
	*60bc86cc2f,
	*4fba765f9a_MAX,
};

// Enum TslGame.ECustomGripBlendSpaceType
enum class ECustomGripBlendSpaceType : uint8 {
	None,
	Stand,
	Crouch,
	Prone,
	ProneTransition,
	ProneLocomotion,
	ECustomGripBlendSpaceType_MAX,
};

// Enum TslGame.EMasteryItemType
enum class EMasteryItemType : uint8 {
	Charm,
	Mesh,
	EMasteryItemType_MAX,
};

// Enum TslGame.TableType
enum class TableType : uint8 {
	Ammo,
	Attachment,
	Equipment,
	Skin,
	SkinThrowable,
	Weapon,
	WeaponThrowable,
	WeaponShield,
	Castable,
	UsedByAction,
	Event,
	Craft,
	VehiclePart,
	Bluechip,
	TableType_MAX,
};

// Enum TslGame.ESoftRoleState
enum class ESoftRoleState : uint8 {
	Open,
	Closed,
	Inspect,
	ESoftRoleState_MAX,
};

// Enum TslGame.*312d2d60bc
enum class *312d2d60bc : uint8 {
	*260a9d35d5,
	*bb27962e31,
	*0392707a99,
	*89d27d383a,
	*312d2d60bc_MAX,
};

// Enum TslGame.ESandboxConsoleGuideKeyType
enum class ESandboxConsoleGuideKeyType : uint8 {
	None,
	ExpandAndClose,
	SpawnAndBack,
	AdjustAndClose,
	ConfirmAndBack,
	SpawnAndClose,
	ESandboxConsoleGuideKeyType_MAX,
};

// Enum TslGame.ESandboxGroypType
enum class ESandboxGroypType : uint8 {
	None,
	Weapon,
	Attachment,
	Item,
	Vehicle,
	Sensitivity,
	Power,
	Special,
	ESandboxGroypType_MAX,
};

// Enum TslGame.ESandboxQuantityType
enum class ESandboxQuantityType : uint8 {
	None,
	Item,
	Vehicle,
	ESandboxQuantityType_MAX,
};

// Enum TslGame.ESandboxSpecialButtonType
enum class ESandboxSpecialButtonType : uint8 {
	None,
	EquipLv3,
	AddAmmo,
	SettingAPrevious,
	SettingAGunset,
	ESandboxSpecialButtonType_MAX,
};

// Enum TslGame.ESandboxPowerType
enum class ESandboxPowerType : uint8 {
	None,
	Fly,
	InvulnerableEffect,
	CarePackage,
	RedZone,
	Revive,
	TeamRevive,
	GiveItemToEveryone,
	BlueZone,
	ESandboxPowerType_MAX,
};

// Enum TslGame.ESandboxSoundType
enum class ESandboxSoundType : uint8 {
	None,
	ItemSpawnClick,
	ItemSpawnSuccess,
	ESandboxSoundType_MAX,
};

// Enum TslGame.*e76aa70173
enum class *e76aa70173 : uint8 {
	*649ecbaf94,
	*b2cacb5a62,
	*72d34feeba,
	*1fe1727de5,
	*8e4023e339,
	*9a2e4c0da3,
	*af1659a470,
	*e76aa70173_MAX,
};

// Enum TslGame.ECurrentSoundState
enum class ECurrentSoundState : uint8 {
	None,
	MovingUp,
	MovingUpSprinting,
	MovingDown,
	MovingDownSprinting,
	Stopping,
	ECurrentSoundState_MAX,
};

// Enum TslGame.*adc53fb654
enum class *adc53fb654 : uint8 {
	*806ad4936f,
	*a39e5d9a83,
	*2ac92ce507,
	*adc53fb654_MAX,
};

// Enum TslGame.*f075310b79
enum class *f075310b79 : uint8 {
	*f0095569e4,
	*77280230bc,
	*adb66f8321,
	*ab629ca86e,
	*f075310b79_MAX,
};

// Enum TslGame.EAscenderDirection
enum class EAscenderDirection : uint8 {
	AscenderUp,
	AscenderDown,
	Max,
	EAscenderDirection_MAX,
};

// Enum TslGame.EAscenderRopeType
enum class EAscenderRopeType : uint8 {
	None,
	AscenderRope,
	AscenderZipline,
	EAscenderRopeType_MAX,
};

// Enum TslGame.EControlType
enum class EControlType : uint8 {
	Move,
	Jump,
	Fire,
	Aim,
	Arm,
	Unarm,
	Reload,
	Interact,
	Peek,
	Roll,
	Crouch,
	Prone,
	UseItem,
	ThrowMelee,
	CookThrowable,
	ItemCatch,
	ItemThrow,
	InspectWeapon,
	ToggleFiringMode,
	ToggleThrowMode,
	EControlType_MAX,
};

// Enum TslGame.ECharFlagsNormal
enum class ECharFlagsNormal : uint8 {
	IsGroggying,
	IsActiveRagdollActive,
	HasShieldEquipped,
	IsInBluezone,
	IsBeingHealed,
	IsSelfHemostasis,
	ECharFlagsNormal_MAX,
};

// Enum TslGame.ELandingState
enum class ELandingState : uint8 {
	None,
	Falling,
	HeavyFalling,
	ExtremeFalling,
	FallingRecovery,
	PostLandingRecovery,
	ELandingState_MAX,
};

// Enum TslGame.ECharFlagsSkipOwner
enum class ECharFlagsSkipOwner : uint8 {
	WantsToRun,
	WantsToSprint,
	WantsToSprintingAuto,
	WantsToRollingLeft,
	WantsToRollingRight,
	AimStateActive,
	IsThirdPerson,
	IsReviving,
	IgnoreRotation,
	IsWeaponObstructed,
	IsCoatEquipped,
	IsThrowHigh,
	WantsToCancelVault,
	IsScopingRemote,
	IsAimingRemote,
	IsFirstPersonRemote,
	IsInVehicleRemote,
	IsPeekLeftRemote,
	IsPeekRightRemote,
	IsHoldingAngled,
	ECharFlagsSkipOwner_MAX,
};

// Enum TslGame.*9e15fc0d10
enum class *9e15fc0d10 : uint8 {
	*6a13413bf2,
	*4911684497,
	*5d7e854cd0,
	*9e15fc0d10_MAX,
};

// Enum TslGame.EMovementType
enum class EMovementType : uint8 {
	M_StandWalk,
	M_StandRun,
	M_StandSprint,
	M_CrouchWalk,
	M_CrouchRun,
	M_CrouchSprint,
	M_ProneWalk,
	M_ProneRun,
	M_ProneSprint,
	M_StandScope,
	M_CrouchScope,
	M_ProneScope,
	M_StandAim,
	M_CrouchAim,
	M_ProneAim,
	M_Swim,
	M_UnderwaterSwim,
	M_DBNO,
	Count,
	EMovementType_MAX,
};

// Enum TslGame.EAIPolyType
enum class EAIPolyType : uint8 {
	AIPoly_None,
	AIPoly_Attack,
	AIPoly_Moving,
	AIPoly_Moving_Directly,
	AIPoly_Jump,
	AIPoly_MovingTargetPos,
	AIPoly_Max,
};

// Enum TslGame.*c06d22dacc
enum class *c06d22dacc : uint8 {
	*d086a601a7,
	*0c1ede2f52,
	*cd162437fd,
	*c9a3cba158,
	*28f2bfbe84,
	*c06d22dacc_MAX,
};

// Enum TslGame.*b6493138e3
enum class *b6493138e3 : uint8 {
	*13a965b98e,
	*d859c9550c,
	*1641a9268b,
	*b6493138e3_MAX,
};

// Enum TslGame.ESurviveWeaponPropSlot
enum class ESurviveWeaponPropSlot : uint8 {
	SWPS_MainShootWeapon1,
	SWPS_MainShootWeapon2,
	SWPS_SubShootWeapon,
	SWPS_MeleeWeapon,
	SWPS_HandProp,
	SWPS_Max,
};

// Enum TslGame.*60475ea27c
enum class *60475ea27c : uint8 {
	*a50fbb778f,
	*1354fc381f,
	*d01697d1b7,
	*7dbd08150d,
	*7a57b6d701,
	*20f578abcc,
	*f528e02392,
	*51a521db18,
	*60475ea27c_MAX,
};

// Enum TslGame.*c399367f8b
enum class *c399367f8b : uint8 {
	*3705315a78,
	*c18831901b,
	*b03d5291b5,
	*869585e44a,
	*3675df1480,
	*c399367f8b_MAX,
};

// Enum TslGame.ExtraPlayerLiveState
enum class ExtraPlayerLiveState : uint8 {
	InDefault,
	InPlane,
	InParachute,
	InVehicle,
	InDying,
	InDied,
	Offline,
	ExtraPlayerLiveState_MAX,
};

// Enum TslGame.*73a493842e
enum class *73a493842e : uint8 {
	*27b5637db6,
	*6d14ec5a00,
	*6557802533,
	*73a493842e_MAX,
};

// Enum TslGame.EAIWeaponShootType
enum class EAIWeaponShootType : uint8 {
	SingleShot,
	Auto,
	EAIWeaponShootType_MAX,
};

// Enum TslGame.EAINewFocusPriority
enum class EAINewFocusPriority : uint8 {
	Default,
	Move,
	Gameplay,
	EAINewFocusPriority_MAX,
};

// Enum TslGame.EAIMovePose
enum class EAIMovePose : uint8 {
	Walk,
	Run,
	CrouchSprint,
	KeepCurrentPose,
	EAIMovePose_MAX,
};

// Enum TslGame.EAITriggerAttrType
enum class EAITriggerAttrType : uint8 {
	None,
	Health,
	Energy,
	EAITriggerAttrType_MAX,
};

// Enum TslGame.EAIAttrCompareType
enum class EAIAttrCompareType : uint8 {
	None,
	Great,
	Less,
	EAIAttrCompareType_MAX,
};

// Enum TslGame.EAIEquipSpawnItemType
enum class EAIEquipSpawnItemType : uint8 {
	Shoot_Weap,
	Backpack,
	other,
	EAIEquipSpawnItemType_MAX,
};

// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod : uint8 {
	Magazine,
	OneByOne,
	OneByOneAndClip,
	EWeaponReloadMethod_MAX,
};

// Enum TslGame.ETslRedeployPlayerState
enum class ETslRedeployPlayerState : uint8 {
	None,
	Initialized,
	RespawnTarget,
	ReadyToFight,
	Fighting,
	Dead,
	Survived,
	Redeployed,
	RevivalTarget,
	RevivalRegisted,
	Revived,
	ETslRedeployPlayerState_MAX,
};

// Enum TslGame.EDestrucibleSurfaceSourceType
enum class EDestrucibleSurfaceSourceType : uint8 {
	Unknown,
	Projectile,
	Grenade,
	Warhead,
	Slashing,
	EDestrucibleSurfaceSourceType_MAX,
};

// Enum TslGame.EAttachParent
enum class EAttachParent : uint8 {
	None,
	Character,
	WeaponGun,
	EAttachParent_MAX,
};

// Enum TslGame.EDoorState
enum class EDoorState : uint8 {
	Closed,
	Closing,
	Opened,
	Opening,
	EDoorState_MAX,
};

// Enum TslGame.*6d9af3f0f5
enum class *6d9af3f0f5 : uint8 {
	*ee1254d25a,
	*01894856c9,
	*72a8775a52,
	*9598fe0744,
	*50bb62e434,
	*6d9af3f0f5_MAX,
};

// Enum TslGame.eDESPMode
enum class eDESPMode : uint8 {
	None,
	UniformDivision,
	RadiusFromCenter,
	eDESPMode_MAX,
};

// Enum TslGame.ETdmSpawnKit
enum class ETdmSpawnKit : uint8 {
	Shotgun,
	Smg,
	Ar,
	Dmr,
	Sr,
	Etc,
	Max,
	ETdmSpawnKit_MAX,
};

// Enum TslGame.EWeaponReloadCancelReason
enum class EWeaponReloadCancelReason : uint8 {
	Default,
	PlayerInterrupted,
	PlayerMovement,
	PlayerInteraction,
	WeaponSwitch,
	PlayerIncapacitated,
	VehicleMoving,
	EWeaponReloadCancelReason_MAX,
};

// Enum TslGame.EWeaponReloadAnimExec
enum class EWeaponReloadAnimExec : uint8 {
	Tactical,
	Charge,
	Single,
	Loop,
	EWeaponReloadAnimExec_MAX,
};

// Enum TslGame.EWeaponState
enum class EWeaponState : uint8 {
	Idle,
	Firing,
	Reloading,
	EWeaponState_MAX,
};

// Enum TslGame.EWeaponTransitionState
enum class EWeaponTransitionState : uint8 {
	Stable,
	Arming,
	UnArming,
	EWeaponTransitionState_MAX,
};

// Enum TslGame.EPerceptionType
enum class EPerceptionType : uint8 {
	Sight,
	Disapp,
	Hearing,
	Attack,
	None,
	EPerceptionType_MAX,
};

// Enum TslGame.EBombGameJoinType
enum class EBombGameJoinType : uint8 {
	Normal,
	IntrusionStart,
	IntrusionFinish,
	EBombGameJoinType_MAX,
};

// Enum TslGame.EBombGameAreaType
enum class EBombGameAreaType : uint8 {
	None,
	StartArea,
	PlantedASite,
	PlantedBSite,
	NormalArea,
	EBombGameAreaType_MAX,
};

// Enum TslGame.EBombItemCategory
enum class EBombItemCategory : uint8 {
	None,
	Pistol,
	SMG,
	AR,
	SG,
	DMR,
	SR,
	Equipment,
	Throwable,
	ETC,
	EBombItemCategory_MAX,
};

// Enum TslGame.EBombTeamStateInfoType
enum class EBombTeamStateInfoType : uint8 {
	MoveASite,
	MoveBSite,
	SaveMoney,
	GiveMoney,
	Rush,
	SaveMe,
	MAX,
	EBombTeamStateInfoType_MAX,
};

// Enum TslGame.ECoinTakeType
enum class ECoinTakeType : uint8 {
	None,
	StoreSellItemToCustomer,
	CustomerSellItemToStore,
	KillReward,
	KillAssistReward,
	BombInstallReward,
	BombDefuseReward,
	RoundWin,
	Donate,
	Receipt,
	RoundStartNormal,
	RoundStartDecisive,
	RoundDefeat,
	TeamRoleChange,
	MinAllowanceCoin,
	MaxAllowanceCoin,
	ThriftyDiffSpendCoin,
	Admin,
	ECoinTakeType_MAX,
};

// Enum TslGame.EBombModeSoundType
enum class EBombModeSoundType : uint8 {
	Unknown,
	BombPlanting_Phase1,
	BombPlanting_Phase2,
	BombPlanting_Phase3,
	BombExplosion,
	BombDefusing,
	GiveCoin,
	ReceiveCoin,
	Purchase,
	BombTimerStart,
	BombTimerDismantle,
	BombTimeStop,
	RestrictionTimer,
	EBombModeSoundType_MAX,
};

// Enum TslGame.ETimeBombPhaseType
enum class ETimeBombPhaseType : uint8 {
	Unknown,
	Planting_Phase1,
	Planting_Phase2,
	Planting_Phase3,
	Explosion,
	Defusing,
	ETimeBombPhaseType_MAX,
};

// Enum TslGame.ETslBombMatchWinType
enum class ETslBombMatchWinType : uint8 {
	Draw,
	ExceedRoundWin,
	ExceedUseBombKit,
	ExceedKillCount,
	EnemyAllLogout,
	ETslBombMatchWinType_MAX,
};

// Enum TslGame.*a48665a176
enum class *a48665a176 : uint8 {
	*93badb7b08,
	*3200857fef,
	*322c44f4bd,
	*462999c1f8,
	*eb57087b7a,
	*a48665a176_MAX,
};

// Enum TslGame.ETslBombPlantedState
enum class ETslBombPlantedState : uint8 {
	NotSet,
	Planting,
	Planted,
	Defused,
	Exploded,
	ETslBombPlantedState_MAX,
};

// Enum TslGame.ETslBombRoundInProgressState
enum class ETslBombRoundInProgressState : uint8 {
	Invalid,
	TeamDecision,
	Preparing,
	Playing,
	Ending,
	ETslBombRoundInProgressState_MAX,
};

// Enum TslGame.EBombKeyNotifyState
enum class EBombKeyNotifyState : uint8 {
	None,
	InStartArea,
	DefenseTeam,
	AttackTeam,
	HoldBombPlantingKit,
	EBombKeyNotifyState_MAX,
};

// Enum TslGame.EBombRoundAttribute
enum class EBombRoundAttribute : uint8 {
	None,
	Normal,
	OverTime,
	TeamRoleChanged,
	EBombRoundAttribute_MAX,
};

// Enum TslGame.EBombRoundResultConditionType
enum class EBombRoundResultConditionType : uint8 {
	None,
	Excellent,
	Impressive,
	Overwhelming,
	Perfect,
	Thrifty,
	MAX,
	EBombRoundResultConditionType_MAX,
};

// Enum TslGame.ETslBombRoundResultHistoryType
enum class ETslBombRoundResultHistoryType : uint8 {
	None,
	TimeUp,
	BombExploded,
	BombDefused,
	TeamElimination,
	TeamGameLogout,
	ETslBombRoundResultHistoryType_MAX,
};

// Enum TslGame.EBombUITeamStatusType
enum class EBombUITeamStatusType : uint8 {
	None,
	Attack,
	Defence,
	MAX,
	EBombUITeamStatusType_MAX,
};

// Enum TslGame.EBombScopeInfo
enum class EBombScopeInfo : uint8 {
	None,
	Hologram,
	Reddot,
	Scope2x,
	Scope3x,
	Scope4x,
	Scope6x,
	Scope8x,
	Scope15x,
	MAX,
	EBombScopeInfo_MAX,
};

// Enum TslGame.ETslBombKDAMType
enum class ETslBombKDAMType : uint8 {
	Kill,
	Death,
	Assist,
	MissionInstallBomb,
	MissionDefuseBomb,
	ETslBombKDAMType_MAX,
};

// Enum TslGame.ETslBombTeamRole
enum class ETslBombTeamRole : uint8 {
	None,
	AttackTeam,
	DefenseTeam,
	ROLE_MAX,
	ETslBombTeamRole_MAX,
};

// Enum TslGame.EHealingItemType
enum class EHealingItemType : uint8 {
	HealItem,
	BoostItem,
	EHealingItemType_MAX,
};

// Enum TslGame.EComparisonTarget
enum class EComparisonTarget : uint8 {
	Value,
	BBKey,
	EComparisonTarget_MAX,
};

// Enum TslGame.EAIMapName
enum class EAIMapName : uint8 {
	Baltic,
	Desert,
	Sanhok,
	DihorOtok,
	Summerland,
	Paramo,
	Tiger,
	Chimera,
	Heaven,
	Kiki,
	Other,
	EAIMapName_MAX,
};

// Enum TslGame.ETeamModeType
enum class ETeamModeType : uint8 {
	Solo,
	Duo,
	Squad,
	ETeamModeType_MAX,
};

// Enum TslGame.*3d747d382e
enum class *3d747d382e : uint8 {
	*75cd47bc62,
	*828430b2c7,
	*93d732b5f2,
	*1abcebd06f,
	*6845446faa,
	*d77861347a,
	*3d747d382e_MAX,
};

// Enum TslGame.EAICommand
enum class EAICommand : uint8 {
	None,
	Moving,
	Battle,
	EAICommand_MAX,
};

// Enum TslGame.EAIActionState
enum class EAIActionState : uint8 {
	Idle,
	Battle,
	BattleMoving,
	Healing,
	Farming,
	Moving,
	Swimming,
	EAIActionState_MAX,
};

// Enum TslGame.EAIAliveState
enum class EAIAliveState : uint8 {
	Alive,
	Groggy,
	Dead,
	EAIAliveState_MAX,
};

// Enum TslGame.EPickupItemStatus
enum class EPickupItemStatus : uint8 {
	NeedWeapon,
	NeedBaseEquip,
	NeedOneMoreWeapon,
	NeedHealItem,
	NeedBoostItem,
	NeedThrowableItem,
	NeedPan,
	NeedNoItem,
	EPickupItemStatus_MAX,
};

// Enum TslGame.EIntoCircleLevel
enum class EIntoCircleLevel : uint8 {
	AlreadyInWhite,
	NearWhite,
	MiddleWhite,
	ReachableWhite,
	UnreachableWhite,
	EIntoCircleLevel_MAX,
};

// Enum TslGame.EValueCompareFunc
enum class EValueCompareFunc : uint8 {
	MoreThan,
	MoreThanOrEqual,
	LessThan,
	LessThanOrEqual,
	Equal,
	NotEqual,
	EValueCompareFunc_MAX,
};

// Enum TslGame.EAIParameter
enum class EAIParameter : uint8 {
	None,
	Offensive,
	PrepareType,
	EAIParameter_MAX,
};

// Enum TslGame.EPrepareType
enum class EPrepareType : uint8 {
	StopMovement,
	MoveRandomLoc,
	ThrowToy,
	TypeEnd,
	EPrepareType_MAX,
};

// Enum TslGame.EAIBehaviors
enum class EAIBehaviors : uint8 {
	Normal,
	Chasing,
	Runaway,
	EAIBehaviors_MAX,
};

// Enum TslGame.ERightMoveDirection
enum class ERightMoveDirection : uint8 {
	Left,
	Right,
	Stop,
	ERightMoveDirection_MAX,
};

// Enum TslGame.EForwardMoveDirection
enum class EForwardMoveDirection : uint8 {
	Forward,
	Backward,
	Stop,
	EForwardMoveDirection_MAX,
};

// Enum TslGame.EUltronWithCircle
enum class EUltronWithCircle : uint8 {
	InWhiteCircle,
	InBlueCircle,
	OutBlueCircle,
	MaxNum,
	EUltronWithCircle_MAX,
};

// Enum TslGame.EComparisonTargetCircle
enum class EComparisonTargetCircle : uint8 {
	WhiteCircle,
	BlueCircle,
	EComparisonTargetCircle_MAX,
};

// Enum TslGame.ETurnDirection
enum class ETurnDirection : uint8 {
	Left,
	Right,
	Stop,
	ETurnDirection_MAX,
};

// Enum TslGame.EPercivedGrenadeType
enum class EPercivedGrenadeType : uint8 {
	FragGrenade,
	StickyBomb,
	C4,
	EPercivedGrenadeType_MAX,
};

// Enum TslGame.EEnemyCompareElement
enum class EEnemyCompareElement : uint8 {
	None,
	HouseId,
	EEnemyCompareElement_MAX,
};

// Enum TslGame.EInfoPointWithHouse
enum class EInfoPointWithHouse : uint8 {
	All,
	InHouse,
	OutHouse,
	EInfoPointWithHouse_MAX,
};

// Enum TslGame.ETargetLocation
enum class ETargetLocation : uint8 {
	WhiteCircle,
	OtherLocation,
	ETargetLocation_MAX,
};

// Enum TslGame.ETestMoveDirection
enum class ETestMoveDirection : uint8 {
	Front,
	Back,
	Left,
	Right,
	ETestMoveDirection_MAX,
};

// Enum TslGame.EThownWeapon_AI
enum class EThownWeapon_AI : uint8 {
	GRENADE,
	MOLOTOV,
	SMOKEBOMB,
	FLASHBANG,
	EThownWeapon_MAX,
};

// Enum TslGame.EThrowablePoseState_AI
enum class EThrowablePoseState_AI : uint8 {
	Idle,
	PinOffStart,
	Cooking,
	WaitForThrow,
	Throwing,
	EThrowablePoseState_MAX,
};

// Enum TslGame.*b1a80747f8
enum class *b1a80747f8 : uint8 {
	*4394c7fefa,
	*e3ecfa585d,
	*c5923447d4,
	*b1a80747f8_MAX,
};

// Enum TslGame.EModifyBlackboardDataValueType
enum class EModifyBlackboardDataValueType : uint8 {
	Int,
	Float,
	Bool,
	String,
	Object,
	Vector3,
	EModifyBlackboardDataValueType_MAX,
};

// Enum TslGame.EAIBattleState
enum class EAIBattleState : uint8 {
	None,
	ReturnToSpawnLocation,
	Patrol,
	Battle,
	EAIBattleState_MAX,
};

// Enum TslGame.EThownWeapon
enum class EThownWeapon : uint8 {
	GRENADE,
	MOLOTOV,
	SMOKEBOMB,
	FLASHBANG,
	EThownWeapon_MAX,
};

// Enum TslGame.EThrowablePoseState
enum class EThrowablePoseState : uint8 {
	Idle,
	PinOffStart,
	Cooking,
	WaitForThrow,
	Throwing,
	EThrowablePoseState_MAX,
};

// Enum TslGame.EBoosterItem
enum class EBoosterItem : uint8 {
	ADRENALINE,
	PAINKILLER,
	ENERGYDRINK,
	EBoosterItem_MAX,
};

// Enum TslGame.*a5c8520112
enum class *a5c8520112 : uint8 {
	*c4fb4bccfb,
	*7f03b7872a,
	*04c71c4aee,
	*d83eb7e329,
	*6c184277ed,
	*a5c8520112_MAX,
};

// Enum TslGame.EFightMovingType
enum class EFightMovingType : uint8 {
	FM_Target,
	FM_TargetPos,
	FM_RandomPos,
	FM_Max,
};

// Enum TslGame.EMonsterPatrol
enum class EMonsterPatrol : uint8 {
	Patrol_BackDomain,
	Patrol_Flee,
	Patrol_RunawayHouse,
	Patrol_SpawnSpot,
	Patrol_Hearing,
	Patrol_Random,
	Patrol_Max,
};

// Enum TslGame.*a12164564c
enum class *a12164564c : uint8 {
	*21c7598ac0,
	*a9915fd8e1,
	*4c4f54324f,
	*e668b8df1d,
	*0d6e63109f,
	*a12164564c_MAX,
};

// Enum TslGame.*dd92d4fd50
enum class *dd92d4fd50 : uint8 {
	*90fa24e8dc,
	*d15cc7f3da,
	*f545cc016a,
	*67541541ce,
	*a366103fb2,
	*dd92d4fd50_MAX,
};

// Enum TslGame.*e7b41e0ffd
enum class *e7b41e0ffd : uint8 {
	*26fb9918cd,
	*ad62f19b84,
	*1b0e44fd96,
	*b91247078d,
	*e7b41e0ffd_MAX,
};

// Enum TslGame.EReactionObjectType
enum class EReactionObjectType : uint8 {
	Fence,
	Hay,
	Camera,
	EReactionObjectType_MAX,
};

// Enum TslGame.*fffe402d5e
enum class *fffe402d5e : uint8 {
	*f5c2a9e326,
	*d319633b8b,
	*8718549d01,
	*b390380674,
	*fffe402d5e_MAX,
};

// Enum TslGame.ECraftResult
enum class ECraftResult : uint8 {
	Success,
	Invalid_Character,
	Invalid_Inventory,
	Invalid_Equipment,
	Invalid_CraftingRuleComponent,
	Invalid_CraftItemData,
	Invalid_ReservedCraftItem,
	Invalid_PlayerState,
	Not_Enough_Material,
	Not_Enough_Space,
	Miss_Matched_RestrictFilter,
	Restricted_Stance,
	ECraftResult_MAX,
};

// Enum TslGame.*7d75b72830
enum class *7d75b72830 : uint8 {
	*7ea6af5c06,
	*0189ebef48,
	*8d9574bdea,
	*08618d059d,
	*074c84f7ae,
	*7d75b72830_MAX,
};

// Enum TslGame.ECustomCarepackageState
enum class ECustomCarepackageState : uint8 {
	Transporting,
	Falling,
	Landing,
	ECustomCarepackageState_MAX,
};

// Enum TslGame.EDecoyFiringState
enum class EDecoyFiringState : uint8 {
	Firing,
	BetweenShots,
	BetweenSequences,
	EDecoyFiringState_MAX,
};

// Enum TslGame.EDecoyState
enum class EDecoyState : uint8 {
	Uninitialized,
	Cooking,
	DelayedFiring,
	Firing,
	Reloading,
	DelayedEnding,
	EndOfLife,
	EDecoyState_MAX,
};

// Enum TslGame.EWhiteZoneShape
enum class EWhiteZoneShape : uint8 {
	None,
	Circle,
	EWhiteZoneShape_MAX,
};

// Enum TslGame.EBluezoneType
enum class EBluezoneType : uint8 {
	Normal,
	Fast,
	EBluezoneType_MAX,
};

// Enum TslGame.EVendingMachineType
enum class EVendingMachineType : uint8 {
	AMMUNITION,
	BOOSTING,
	THROWABLE,
	WEAPON,
	HEALING,
	EVendingMachineType_MAX,
};

// Enum TslGame.EPatrolSpeed
enum class EPatrolSpeed : uint8 {
	Walk,
	Run,
	Sprint,
	EPatrolSpeed_MAX,
};

// Enum TslGame.ELoadingScreenType
enum class ELoadingScreenType : uint8 {
	NONE,
	ICE_BRAKE,
	RULE_SET,
	WEAPON,
	ATTACHMENT,
	EQUIPMENT,
	ITEM,
	VEHICLE,
	SYSTEM,
	DEFAULT,
	GAME_MODE,
	EXPOSE_WITH_HIGHEST_PRIORITY,
	ELoadingScreenType_MAX,
};

// Enum TslGame.EPlayerAuthState
enum class EPlayerAuthState : uint8 {
	None,
	Login,
	Logout,
	EPlayerAuthState_MAX,
};

// Enum TslGame.EBlueChipTowerState
enum class EBlueChipTowerState : uint8 {
	IsUnavailable,
	IsAvailable,
	IsInUse,
	IsLaunching,
	RegisterFinished,
	NeedToCharge,
	Cancel,
	Broken,
	EBlueChipTowerState_MAX,
};

// Enum TslGame.EEmPickupAircraftStatus
enum class EEmPickupAircraftStatus : uint8 {
	Available,
	InvalidPhase_Early,
	InvalidPhase_Late,
	QueueFull,
	Disabled,
	EEmPickupAircraftStatus_MAX,
};

// Enum TslGame.EItemClientAnimSeqUnload
enum class EItemClientAnimSeqUnload : uint8 {
	None,
	Disable,
	Enable,
	EItemClientAnimSeqUnload_MAX,
};

// Enum TslGame.EFExplosivePropDataType
enum class EFExplosivePropDataType : uint8 {
	Default,
	PropaneTank,
	SmallTank,
	RacingExplosive,
	GasPump,
	EFExplosivePropDataType_MAX,
};

// Enum TslGame.*ff889b5df5
enum class *ff889b5df5 : uint8 {
	*96082063a5,
	*63266f99b4,
	*f13378c682,
	*ab0d87d13f,
	*ff889b5df5_MAX,
};

// Enum TslGame.ETslControllerType
enum class ETslControllerType : uint8 {
	Mouse,
	GamePad,
	Total,
	ETslControllerType_MAX,
};

// Enum TslGame.EVoiceInterfaceType
enum class EVoiceInterfaceType : uint8 {
	VIVOX,
	XIM,
	GVOICE,
	EVoiceInterfaceType_MAX,
};

// Enum TslGame.EVoiceTransmissionType
enum class EVoiceTransmissionType : uint8 {
	None,
	ToAll,
	ToChannel,
	EVoiceTransmissionType_MAX,
};

// Enum TslGame.EVoiceChannelJoinState
enum class EVoiceChannelJoinState : uint8 {
	NotJoined,
	Joining,
	Leaving,
	Joined,
	EVoiceChannelJoinState_MAX,
};

// Enum TslGame.EVoiceLoginState
enum class EVoiceLoginState : uint8 {
	NotLoggedin,
	Loggingin,
	Loggedin,
	EVoiceLoginState_MAX,
};

// Enum TslGame.EVoiceConnectionState
enum class EVoiceConnectionState : uint8 {
	NotConnected,
	Connecting,
	Connected,
	EVoiceConnectionState_MAX,
};

// Enum TslGame.ETableCheckerHideOption
enum class ETableCheckerHideOption : uint8 {
	Hide,
	Show,
	ETableCheckerHideOption_MAX,
};

// Enum TslGame.EKeyHintGradeSettingValue
enum class EKeyHintGradeSettingValue : uint8 {
	Basic,
	Advanced,
	EKeyHintGradeSettingValue_MAX,
};

// Enum TslGame.EKeyHintGradeBitmask
enum class EKeyHintGradeBitmask : uint8 {
	Basic,
	Advanced,
	EKeyHintGradeBitmask_MAX,
};

// Enum TslGame.ETslWeatherAction
enum class ETslWeatherAction : uint8 {
	NotDefined,
	Initialized,
	Prolonged,
	ETslWeatherAction_MAX,
};

// Enum TslGame.ECharacterInteractBehaviorType
enum class ECharacterInteractBehaviorType : uint8 {
	None,
	ExtraSlotForMode,
	Revive,
	BodyCarry,
	TraumaBag,
	InstantRevivalKit,
	TeamEmote,
	ItemRequest,
	RepairKit,
	ECharacterInteractBehaviorType_MAX,
};

// Enum TslGame.EInteractionPhase
enum class EInteractionPhase : uint8 {
	First,
	Second,
	EInteractionPhase_MAX,
};

// Enum TslGame.ETslSLBGeneratorState
enum class ETslSLBGeneratorState : uint8 {
	Breakdown,
	NeedFuel,
	BeforeActivate,
	Activate,
	MAX,
	ETslSLBGeneratorState_MAX,
};

// Enum TslGame.ELobbyItemBundleType
enum class ELobbyItemBundleType : uint8 {
	Bundle,
	Generator,
	ELobbyItemBundleType_MAX,
};

// Enum TslGame.EItemSpawnType
enum class EItemSpawnType : uint8 {
	FixedRatioAndAdjustableTotalNumber,
	AdjustableRatioAndFixedTotalNumber,
	AdjustableRatioAndAdjustableTotalNumber,
	Invalid,
	EItemSpawnType_MAX,
};

// Enum TslGame.EThreatType
enum class EThreatType : uint8 {
	Damage,
	Sight,
	Noise,
	EThreatType_MAX,
};

// Enum TslGame.ELocationType
enum class ELocationType : uint8 {
	LANDMARK,
	EXTRA_LANDMARK,
	CITY,
	CITY_DETAIL,
	TOWN,
	COMPOUNDS,
	EXTRA,
	TEST_SHOW_ALL,
	ELocationType_MAX,
};

// Enum TslGame.*5693bf1f41
enum class *5693bf1f41 : uint8 {
	*348ef343dd,
	*36f9d69662,
	*b5f31308a2,
	*efa63c33c0,
	*5a81da3983,
	*a7e2f9d6be,
	*af8a9cee6e,
	*c14f7ec402,
	*145f3bdc13,
	*dc46d400f1,
	*3271344471,
	*3708e8cbaf,
	*0c96bbee3c,
	*5693bf1f41_MAX,
};

// Enum TslGame.ELobbyLinkState
enum class ELobbyLinkState : uint8 {
	Disconnect,
	WaitInitialize,
	WaitStart,
	Gaming,
	Finished,
	ELobbyLinkState_MAX,
};

// Enum TslGame.ELobbyCharacterAnimationType
enum class ELobbyCharacterAnimationType : uint8 {
	Default,
	Wardrobe,
	Appearance,
	ELobbyCharacterAnimationType_MAX,
};

// Enum TslGame.EParameterLUTChannel
enum class EParameterLUTChannel : uint8 {
	R,
	G,
	B,
	A,
	RGBA,
	Undefined,
	EParameterLUTChannel_MAX,
};

// Enum TslGame.EMaterialParameterType
enum class EMaterialParameterType : uint8 {
	Bool,
	Scalar,
	Vector,
	Texture,
	Undefined,
	EMaterialParameterType_MAX,
};

// Enum TslGame.EBlackZoneState
enum class EBlackZoneState : uint8 {
	BZ_WaitingForMatchStart,
	BZ_SelectNewBlackZone,
	BZ_BeginStrike,
	BZ_FireMisile,
	BZ_EndBombing,
	BZ_MAX,
};

// Enum TslGame.*f38446698c
enum class *f38446698c : uint8 {
	*248c7f520c,
	*c1adff1396,
	*8971d5289c,
	*82e2b7ca52,
	*315e01629e,
	*f38446698c_MAX,
};

// Enum TslGame.*cea33fa8c2
enum class *cea33fa8c2 : uint8 {
	*04775c48a7,
	*c08547ae8e,
	*a7346ee49b,
	*c5994935c2,
	*cea33fa8c2_MAX,
};

// Enum TslGame.ENpcDirection
enum class ENpcDirection : uint8 {
	Forward,
	Backward,
	Left,
	Right,
	ForwardRight,
	BackwardRight,
	BackwardLeft,
	ForwardLeft,
	ENpcDirection_MAX,
};

// Enum TslGame.ENpcWalkingSpeedType
enum class ENpcWalkingSpeedType : uint8 {
	Idle,
	Walk,
	Run,
	Sprint,
	ENpcWalkingSpeedType_MAX,
};

// Enum TslGame.ENpcCharacterStateType
enum class ENpcCharacterStateType : uint8 {
	Default,
	Respawn,
	Fire1,
	Fire2,
	Fire3,
	Knockback,
	Knockdown,
	Getup,
	ThrowPhase1,
	ThrowPhase2,
	ThrowPhase3,
	Blind,
	Despawn,
	RunnerScream,
	ThrowBuff,
	Scream,
	Kidnap,
	Dash,
	InSafeZone,
	MeleeAttackWhileKidnapping,
	DoctorThrowPhase1,
	DoctorThrowPhase2,
	DoctorThrowPhase3,
	ENpcCharacterStateType_MAX,
};

// Enum TslGame.ERandomType
enum class ERandomType : uint8 {
	Random,
	Shuffle,
	Ascending,
	Descending,
	ERandomType_MAX,
};

// Enum TslGame.ECustomAnimDataType
enum class ECustomAnimDataType : uint8 {
	CustomAnimData,
	AnimSequence,
	ECustomAnimDataType_MAX,
};

// Enum TslGame.ECustomAnimSlotType
enum class ECustomAnimSlotType : uint8 {
	FullBody,
	UpperBody,
	FullBodyInstance,
	UpperBodyInstance,
	LowerBody,
	ECustomAnimSlotType_MAX,
};

// Enum TslGame.ERetriggerCounter
enum class ERetriggerCounter : uint8 {
	First,
	Sec,
	Third,
	Fourth,
	ERetriggerCounter_MAX,
};

// Enum TslGame.EPathDebugType
enum class EPathDebugType : uint8 {
	None,
	Location,
	SelectNpc,
	EPathDebugType_MAX,
};

// Enum TslGame.EOneOnOneRoomState
enum class EOneOnOneRoomState : uint8 {
	None,
	MatchPrepare,
	MatchStart,
	MatchEnd,
	MatchEndResult,
	RoundStart,
	RoundPlaying,
	GiveScore,
	BreakTime,
	RoundResult,
	RoundEnd,
	EOneOnOneRoomState_MAX,
};

// Enum TslGame.EOneOnOneStageType
enum class EOneOnOneStageType : uint8 {
	None,
	Arena,
	Audience,
	EOneOnOneStageType_MAX,
};

// Enum TslGame.EOneOnOneTicketState
enum class EOneOnOneTicketState : uint8 {
	None,
	Waiting,
	CountDown,
	Playing,
	EOneOnOneTicketState_MAX,
};

// Enum TslGame.EOneOnOneSideType
enum class EOneOnOneSideType : uint8 {
	None,
	Home,
	Away,
	Audience,
	EOneOnOneSideType_MAX,
};

// Enum TslGame.EOneOnOneInvenRecoverType
enum class EOneOnOneInvenRecoverType : uint8 {
	None,
	Empty,
	Recover,
	EOneOnOneInvenRecoverType_MAX,
};

// Enum TslGame.EOneOnOneResultType
enum class EOneOnOneResultType : uint8 {
	None,
	Lose,
	Win,
	Draw,
	Escape,
	EOneOnOneResultType_MAX,
};

// Enum TslGame.EOneOnOneMessageType
enum class EOneOnOneMessageType : uint8 {
	None,
	StartSearch_Message,
	StopSearch_Message_Normal,
	StopSearch_Message_UseDiffFacility,
	EnterArena_Message,
	ExitArena_Message_Normal,
	ExitArena_Message_FromAudience,
	CannotSearch_Message_NotInProgress,
	EOneOnOneMessageType_MAX,
};

// Enum TslGame.*b144f4465f
enum class *b144f4465f : uint8 {
	*4a3edb2da7,
	*183c8bfacc,
	*75a635850b,
	*9291244cde,
	*d0bd4c95a8,
	*b144f4465f_MAX,
};

// Enum TslGame.*f078137671
enum class *f078137671 : uint8 {
	*db83abb4a6,
	*0dcc7ad96e,
	*fbe9f2c4de,
	*d741014414,
	*f078137671_MAX,
};

// Enum TslGame.*525f57f793
enum class *525f57f793 : uint8 {
	*1087c2144f,
	*f51a40adcc,
	*b4f587e7b6,
	*b44a22d89d,
	*525f57f793_MAX,
};

// Enum TslGame.*06bdb8a6fa
enum class *06bdb8a6fa : uint8 {
	*4fb7a77c71,
	*5b7f047f3c,
	*fe92f48fc5,
	*b6edeb0e57,
	*a0d3b4ae79,
	*06bdb8a6fa_MAX,
};

// Enum TslGame.*8c58b6a757
enum class *8c58b6a757 : uint8 {
	*24081a03df,
	*f2118590d4,
	*8d55e2d69c,
	*8c58b6a757_MAX,
};

// Enum TslGame.ECorrectedSpawnLocationTraceType
enum class ECorrectedSpawnLocationTraceType : uint8 {
	Sweep,
	Trace,
	ECorrectedSpawnLocationTraceType_MAX,
};

// Enum TslGame.EThrowableState
enum class EThrowableState : uint8 {
	Idle,
	PinOff,
	Cooking,
	Throw,
	Dropped,
	EThrowableState_MAX,
};

// Enum TslGame.EProjectileExplosionStartType
enum class EProjectileExplosionStartType : uint8 {
	NotStart,
	Impact,
	Delay,
	ImpactOrDelay,
	EProjectileExplosionStartType_MAX,
};

// Enum TslGame.*f62222e453
enum class *f62222e453 : uint8 {
	*73b22db2e3,
	*2b43406d2d,
	*61aee1512a,
	*c3f6335560,
	*f62222e453_MAX,
};

// Enum TslGame.*680d3c3750
enum class *680d3c3750 : uint8 {
	*39268a0af6,
	*296d550603,
	*57fc935947,
	*7936e532de,
	*680d3c3750_MAX,
};

// Enum TslGame.*019e375b10
enum class *019e375b10 : uint8 {
	*6800a223e8,
	*b33ba4c58d,
	*d58c871af6,
	*19dec11f19,
	*019e375b10_MAX,
};

// Enum TslGame.ETslSLBAreaBlockActorState
enum class ETslSLBAreaBlockActorState : uint8 {
	Close,
	Open,
	MAX,
	ETslSLBAreaBlockActorState_MAX,
};

// Enum TslGame.ETslSLBExitActorState
enum class ETslSLBExitActorState : uint8 {
	Close,
	Open,
	MAX,
	ETslSLBExitActorState_MAX,
};

// Enum TslGame.ETargetInteractionPurpose
enum class ETargetInteractionPurpose : uint8 {
	Move,
	Reset,
	ETargetInteractionPurpose_MAX,
};

// Enum TslGame.ETrainingRoomInteractionType
enum class ETrainingRoomInteractionType : uint8 {
	None,
	Training_Stop,
	ETrainingRoomInteractionType_MAX,
};

// Enum TslGame.ESeatDirection
enum class ESeatDirection : uint8 {
	Forward,
	Backward,
	Left,
	Right,
	ESeatDirection_MAX,
};

// Enum TslGame.ESpareTireProcessState
enum class ESpareTireProcessState : uint8 {
	None,
	PutWorking,
	PutCancel,
	PutFinish,
	TakeWorking,
	TakeCancel,
	TakeFinish,
	ESpareTireProcessState_MAX,
};

// Enum TslGame.EMapColor
enum class EMapColor : uint8 {
	Undefined,
	Red,
	Green,
	Blue,
	Yellow,
	EMapColor_MAX,
};

// Enum TslGame.EVehicleEngineState
enum class EVehicleEngineState : uint8 {
	EEngineStateAutoOff,
	EEngineStateAutoOn,
	EEngineStateManualOff,
	EEngineStateManualOn,
	EVehicleEngineState_MAX,
};

// Enum TslGame.*8ddfb8c08b
enum class *8ddfb8c08b : uint8 {
	*bc2a0f8510,
	*d7f681fe2a,
	*1e974090fe,
	*6b33660896,
	*bcfd9b67bb,
	*8ddfb8c08b_MAX,
};

// Enum TslGame.EPackageState
enum class EPackageState : uint8 {
	Normal,
	Broken,
	Empty,
	EPackageState_MAX,
};

// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType : uint8 {
	None,
	Probability,
	TotalCount,
	EThingGroupSpawnType_MAX,
};

// Enum TslGame.EInteractionErrorType
enum class EInteractionErrorType : uint8 {
	None,
	Success,
	Fail_SearchingOneOnOne,
	Fail_PlayingOneOnOne,
	EInteractionErrorType_MAX,
};

// Enum TslGame.*fd5fc664cb
enum class *fd5fc664cb : uint8 {
	*3be0bd37b7,
	*9158652caf,
	*96092a892c,
	*65027dd2c3,
	*fd5fc664cb_MAX,
};

// Enum TslGame.*da516d8bdd
enum class *da516d8bdd : uint8 {
	*0ae50e5427,
	*2af5ee765d,
	*515d0bbd0f,
	*53b50b8449,
	*da516d8bdd_MAX,
};

// Enum TslGame.EContainerState
enum class EContainerState : uint8 {
	Closed,
	Opening,
	Opened,
	EContainerState_MAX,
};

// Enum TslGame.ESpawnDestroyTiming
enum class ESpawnDestroyTiming : uint8 {
	Undefined,
	SpawnOnMatchStart,
	DestoryOnMatchStart,
	ESpawnDestroyTiming_MAX,
};

// Enum TslGame.ELastMoveTask
enum class ELastMoveTask : uint8 {
	MoveTo,
	MoveDirectlyToward,
	ELastMoveTask_MAX,
};

// Enum TslGame.EEjectAllowed
enum class EEjectAllowed : uint8 {
	NotAllowed,
	Waiting,
	Allowed,
	EEjectAllowed_MAX,
};

// Enum TslGame.EUltAutoEquipItemType
enum class EUltAutoEquipItemType : uint8 {
	SubParts,
	Throwable,
	Boost,
	Heal,
	Other,
	EUltAutoEquipItemType_MAX,
};

// Enum TslGame.ECompareTeamDist
enum class ECompareTeamDist : uint8 {
	CurDest,
	FinalDest,
	SafeZone,
	ECompareTeamDist_MAX,
};

// Enum TslGame.EHelicopterState
enum class EHelicopterState : uint8 {
	Normal,
	Smoke,
	Explosion,
	EHelicopterState_MAX,
};

// Enum TslGame.EEmergencyAircraftState
enum class EEmergencyAircraftState : uint8 {
	None,
	Flame,
	Explosion,
	LastExplosion,
	Destroy,
	EEmergencyAircraftState_MAX,
};

// Enum TslGame.EEmPickup_PathValidationState
enum class EEmPickup_PathValidationState : uint8 {
	None,
	InProgress,
	Valid,
	Invalid,
	EEmPickup_MAX,
};

// Enum TslGame.*4b4c829efd
enum class *4b4c829efd : uint8 {
	*f3e82f7adf,
	*ff638068b3,
	*4b4c829efd_MAX,
};

// Enum TslGame.*c38888d688
enum class *c38888d688 : uint8 {
	*90174b8a51,
	*a9e2539380,
	*7add143225,
	*582dc7222d,
	*3129fbac06,
	*09ba852af5,
	*f4ea30e2c8,
	*3d64efc3ae,
	*ae74b3bc11,
	*36df6740f0,
	*aa564e62bc,
	*eadbca3f18,
	*ed09527cdc,
	*c38888d688_MAX,
};

// Enum TslGame.*f8a425f29f
enum class *f8a425f29f : uint8 {
	*abb32eecfc,
	*18db973b7c,
	*377ee42652,
	*220800eb5b,
	*f8a425f29f_MAX,
};

// Enum TslGame.*819c37bb54
enum class *819c37bb54 : uint8 {
	*2fa399d84a,
	*b9ffa516ee,
	*79e5ba22e7,
	*9eef5059bf,
	*6c1b758206,
	*eecf7d2c67,
	*819c37bb54_MAX,
};

// Enum TslGame.EOPUIBuffLocationType
enum class EOPUIBuffLocationType : uint8 {
	None,
	TPP,
	FPP,
	FPPWithMosnterHp,
	MAX,
	EOPUIBuffLocationType_MAX,
};

// Enum TslGame.EClanNoticeUGCLevel
enum class EClanNoticeUGCLevel : uint8 {
	Hide,
	Show,
	EClanNoticeUGCLevel_MAX,
};

// Enum TslGame.EClanNameUGCLevel
enum class EClanNameUGCLevel : uint8 {
	HideAll,
	OnlyMine,
	MineAndOthersTag,
	ShowAll,
	EClanNameUGCLevel_MAX,
};

// Enum TslGame.EPlayerArenaObserverState
enum class EPlayerArenaObserverState : uint8 {
	Off,
	RoundPreview,
	FinalRoundPreview,
	WonAlive,
	WonDead,
	RoundFinished,
	RoundFinishedWhileLoot,
	RoundResultWithObserve,
	RoundResult,
	Eliminated,
	AfterRoundLoadout,
	EPlayerArenaObserverState_MAX,
};

// Enum TslGame.EArenaMoneySource
enum class EArenaMoneySource : uint8 {
	Initial,
	Kill,
	Revive,
	WinArena,
	LoseArena,
	Buy,
	EArenaMoneySource_MAX,
};

// Enum TslGame.EArenaScreenOpen
enum class EArenaScreenOpen : uint8 {
	Loadout,
	Leaderboard,
	EArenaScreenOpen_MAX,
};

// Enum TslGame.EArenaCameraObserveState
enum class EArenaCameraObserveState : uint8 {
	Off,
	FreeFly,
	AttachedToPlayer,
	EArenaCameraObserveState_MAX,
};

// Enum TslGame.*5e559fc21f
enum class *5e559fc21f : uint8 {
	*5d484485be,
	*39ec60a0fb,
	*13116ccdf4,
	*90d248b810,
	*f2a9e0e805,
	*0c09949aeb,
	*400c160dc2,
	*6796aacdd2,
	*a994657415,
	*5e559fc21f_MAX,
};

// Enum TslGame.EStrictSelectObserveTarget
enum class EStrictSelectObserveTarget : uint8 {
	None,
	Arena,
	Player,
	EStrictSelectObserveTarget_MAX,
};

// Enum TslGame.EFutsalSoundType
enum class EFutsalSoundType : uint8 {
	Goal,
	Start,
	Finish,
	EFutsalSoundType_MAX,
};

// Enum TslGame.EHASSurvivorItemLevel
enum class EHASSurvivorItemLevel : uint8 {
	None,
	Lv1,
	Lv2,
	EHASSurvivorItemLevel_MAX,
};

// Enum TslGame.EHASSurvivorItemType
enum class EHASSurvivorItemType : uint8 {
	None,
	Flashbang,
	Healkit,
	Toolkit,
	SmokeBomb,
	EHASSurvivorItemType_MAX,
};

// Enum TslGame.EHASSurvivorCorruptPhase
enum class EHASSurvivorCorruptPhase : uint8 {
	None,
	PhaseOne,
	PhaseTwo,
	Corrupted,
	EHASSurvivorCorruptPhase_MAX,
};

// Enum TslGame.EHASSurvivorBreathState
enum class EHASSurvivorBreathState : uint8 {
	None,
	NormalBreath,
	FastBreath,
	Exhausted,
	EHASSurvivorBreathState_MAX,
};

// Enum TslGame.EHASSurvivorState
enum class EHASSurvivorState : uint8 {
	Normal,
	Injured,
	DBNO,
	BodyCarried,
	Captured,
	Dead,
	Escaped,
	Sacrificed,
	EndgameDead,
	EHASSurvivorState_MAX,
};

// Enum TslGame.EHASSeekerState
enum class EHASSeekerState : uint8 {
	Normal,
	Stunned,
	EHASSeekerState_MAX,
};

// Enum TslGame.EHASPlayerRole
enum class EHASPlayerRole : uint8 {
	None,
	Killer,
	Survivor,
	EHASPlayerRole_MAX,
};

// Enum TslGame.ETslParticleCullType
enum class ETslParticleCullType : uint8 {
	None,
	Distance,
	Frustum,
	LastRenderedTime,
	SameTransform,
	NearbyTransform,
	DistAndFrustumAndNear,
	All,
	ETslParticleCullType_MAX,
};

// Enum TslGame.ETslParticleGroupPriority
enum class ETslParticleGroupPriority : uint8 {
	High,
	Low,
	ETslParticleGroupPriority_MAX,
};

// Enum TslGame.ETslHASStencilColor
enum class ETslHASStencilColor : uint8 {
	None,
	SpectatedCharacter,
	SpectatedCharacterTeam,
	SpectatedCharacterEnemy,
	WithoutSpectatedCharacter,
	WithoutSpectatedTeamCharacter,
	InteractionFocusingColor,
	SandboxOutline,
	Invincible,
	ETslHASStencilColor_MAX,
};

// Enum TslGame.*caa2d0db8b
enum class *caa2d0db8b : uint8 {
	*6e76835f5d,
	*ae2a79ab10,
	*2421ead75a,
	*63f060518c,
	*5d3f416413,
	*3b0908e462,
	*ba551489df,
	*caa2d0db8b_MAX,
};

// Enum TslGame.ETslHASInteractType
enum class ETslHASInteractType : uint8 {
	BlockAllInteractive,
	InteractionObjectCanPassThrough,
	ETslHASInteractType_MAX,
};

// Enum TslGame.ETslHASFixTargetState
enum class ETslHASFixTargetState : uint8 {
	PreStart,
	Normal,
	StopFixing,
	Fixing,
	Explode,
	Broken,
	Fixed,
	ETslHASFixTargetState_MAX,
};

// Enum TslGame.EHASSoundType
enum class EHASSoundType : uint8 {
	Breath,
	BreathStop,
	FastBreath,
	FastBreathStop,
	HeartBeat,
	ReadyToFire,
	Exhausted,
	ExhaustedStop,
	Moan,
	MoanStop,
	Panic,
	CabinetPanic,
	SeekerStun,
	EHASSoundType_MAX,
};

// Enum TslGame.ETslHAS_QTEType
enum class ETslHAS_QTEType : uint8 {
	Generator,
	Wiggle,
	Prison,
	Healing,
	None,
	ETslHAS_MAX,
};

// Enum TslGame.ETslHASActiveEffet
enum class ETslHASActiveEffet : uint8 {
	GeneratorActive,
	PrisonActive,
	ExitActive,
	None,
	ETslHASActiveEffet_MAX,
};

// Enum TslGame.*941e67971d
enum class *941e67971d : uint8 {
	*25c1a67a3e,
	*411a62eb7c,
	*941e67971d_MAX,
};

// Enum TslGame.EPrivateTrainingRoomPhase
enum class EPrivateTrainingRoomPhase : uint8 {
	None,
	FinishSelect_Practice,
	StartSelect_Weapon,
	SetupStart_Practice,
	CountDownStart_Practice,
	Start_Practice,
	Cancel_Practice,
	Finish_Practice,
	Restart_Practice,
	Exit_Practice,
	EPrivateTrainingRoomPhase_MAX,
};

// Enum TslGame.EPrivateWaitingRoomPhase
enum class EPrivateWaitingRoomPhase : uint8 {
	None,
	LoadingMap,
	Ready,
	StartSelect_Practice,
	EPrivateWaitingRoomPhase_MAX,
};

// Enum TslGame.ETrainingScoreType
enum class ETrainingScoreType : uint8 {
	None,
	HeadShot,
	Kill,
	SoundCatch,
	TotalScore,
	AimAccuracy,
	ETrainingScoreType_MAX,
};

// Enum TslGame.ETrainingPracticeType
enum class ETrainingPracticeType : uint8 {
	None,
	Practice_Aim,
	Practice_Sound,
	ETrainingPracticeType_MAX,
};

// Enum TslGame.ETslTrainingTeleportType
enum class ETslTrainingTeleportType : uint8 {
	InfoThumnail,
	MapIconVolume,
	NONE,
	ETslTrainingTeleportType_MAX,
};

// Enum TslGame.EBombUIHUDTimerStatusType
enum class EBombUIHUDTimerStatusType : uint8 {
	None,
	RoundTime,
	Attack,
	Defence,
	MAX,
	EBombUIHUDTimerStatusType_MAX,
};

// Enum TslGame.EBombUIMatchResultType
enum class EBombUIMatchResultType : uint8 {
	None,
	Lose,
	Win,
	Draw,
	MAX,
	EBombUIMatchResultType_MAX,
};

// Enum TslGame.EBombUIPlayerStatusType
enum class EBombUIPlayerStatusType : uint8 {
	None,
	Alive,
	DBNO,
	Die,
	Disconnected,
	MAX,
	EBombUIPlayerStatusType_MAX,
};

// Enum TslGame.ETslPreloadPriority
enum class ETslPreloadPriority : uint8 {
	Static,
	Dynamic,
	ETslPreloadPriority_MAX,
};

// Enum TslGame.BlueChipTowerAnimState
enum class BlueChipTowerAnimState : uint8 {
	Wait,
	IsInUse,
	Success,
	BlueChipTowerAnimState_MAX,
};

// Enum TslGame.EFollowTargetType
enum class EFollowTargetType : uint8 {
	Bot,
	CurrentPlayer,
	EFollowTargetType_MAX,
};

// Enum TslGame.*f252d59620
enum class *f252d59620 : uint8 {
	*7175d5cbe8,
	*f187ccb0ab,
	*f252d59620_MAX,
};

// Enum TslGame.EHASGamePhase
enum class EHASGamePhase : uint8 {
	NotStarted,
	Started,
	GeneratorAllFixed,
	EndGame,
	MatchEnded,
	EHASGamePhase_MAX,
};

// Enum TslGame.EHASPrisonSoundType
enum class EHASPrisonSoundType : uint8 {
	Bluezone,
	BluezoneStop,
	Sink,
	EHASPrisonSoundType_MAX,
};

// Enum TslGame.ETslHASPrisonState
enum class ETslHASPrisonState : uint8 {
	PreStart,
	Normal,
	Broken,
	SurvivorHooked,
	Sacrificed,
	Reload,
	ETslHASPrisonState_MAX,
};

// Enum TslGame.*12eae276b6
enum class *12eae276b6 : uint8 {
	*ae592c0c15,
	*4a7729277a,
	*0b7fef5389,
	*71be4d4a4c,
	*2c65c06b77,
	*a109c15bb4,
	*a98961ebe2,
	*4d6b23bf8f,
	*41b1f43b9b,
	*12eae276b6_MAX,
};

// Enum TslGame.EHealthDebuffType
enum class EHealthDebuffType : uint8 {
	None,
	Bleed,
	EHealthDebuffType_MAX,
};

// Enum TslGame.EControlDebuffType
enum class EControlDebuffType : uint8 {
	None,
	Stun,
	Trap,
	Slow,
	EControlDebuffType_MAX,
};

// Enum TslGame.EBulletproofShieldDurabilityState
enum class EBulletproofShieldDurabilityState : uint8 {
	None,
	Normal,
	Damaged,
	DamagedSeverely,
	Destroyed,
	EBulletproofShieldDurabilityState_MAX,
};

// Enum TslGame.EBulletproofShieldInstallState
enum class EBulletproofShieldInstallState : uint8 {
	None,
	InstallInprogress,
	InstallComplete,
	Destroyed,
	EBulletproofShieldInstallState_MAX,
};

// Enum TslGame.*63ea63687b
enum class *63ea63687b : uint8 {
	*39776ec0b1,
	*57e13de35c,
	*e4ebd65835,
	*d3cc224948,
	*bef507be48,
	*7b8a46bf73,
	*c513c68c52,
	*8687b9e30b,
	*b85d84b8ba,
	*63ea63687b_MAX,
};

// Enum TslGame.EAITaskState
enum class EAITaskState : uint8 {
	Idle,
	Tasking,
	Done,
	InValid,
	EAITaskState_MAX,
};

// Enum TslGame.EZombieTargetingType
enum class EZombieTargetingType : uint8 {
	Passive,
	Aggressive,
	AggresiveRandom,
	EZombieTargetingType_MAX,
};

// Enum TslGame.EZombieAttackType
enum class EZombieAttackType : uint8 {
	Melee,
	Throw,
	EZombieAttackType_MAX,
};

// Enum TslGame.EDroneOperationalState
enum class EDroneOperationalState : uint8 {
	INVALID,
	ENABLED_ENUM_START,
	ENABLED,
	ENABLED_CONTROLLED,
	ENABLED_RETURNING_TO_OWNER,
	ENABLED_ENUM_END,
	DISABLED_ENUM_START,
	DISABLED,
	DISABLED_IN_WATER,
	DISABLED_DESTROYED,
	DISABLED_ENUM_END,
	COUNT,
	EDroneOperationalState_MAX,
};

// Enum TslGame.EDroneState
enum class EDroneState : uint8 {
	INVALID,
	STOWED,
	STOWING,
	PICK_UP,
	EQUIPPING,
	EQUIPPED,
	DEPLOYED,
	COUNT,
	EDroneState_MAX,
};

// Enum TslGame.*edb6076908
enum class *edb6076908 : uint8 {
	*b141dfc214,
	*476f2416e3,
	*491040541f,
	*32670dba7e,
	*edb6076908_MAX,
};

// Enum TslGame.*cdf9d3fc2d
enum class *cdf9d3fc2d : uint8 {
	*5b7f047f3c,
	*c11cf929bd,
	*d80362a69b,
	*cdf9d3fc2d_MAX,
};

// Enum TslGame.EBodyCarryState
enum class EBodyCarryState : uint8 {
	Inactive,
	Active,
	PickingUp,
	Dropping,
	EBodyCarryState_MAX,
};

// Enum TslGame.ECountInfoAnimType
enum class ECountInfoAnimType : uint8 {
	None,
	Default,
	Decreasing,
	Increasing,
	Warning,
	Emerging,
	Vanishing,
	ECountInfoAnimType_MAX,
};

// Enum TslGame.*c4b176c7c9
enum class *c4b176c7c9 : uint8 {
	*e1230da2ed,
	*e3b79e163e,
	*c4b176c7c9_MAX,
};

// Enum TslGame.ETrainingDashboardRange
enum class ETrainingDashboardRange : uint8 {
	None,
	Range10,
	Range50,
	Range100,
	ETrainingDashboardRange_MAX,
};

// Enum TslGame.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8 {
	SpawnActor,
	StopSpawnedParticles,
	HideMesh,
	HideMeshInstance,
	HideBone,
	ApplyPhysicalAnimationProfile,
	SetCollisionEnabled,
	ECustomDamageEventReactionType_MAX,
};

// Enum TslGame.*cfa246ad19
enum class *cfa246ad19 : uint8 {
	*b057412946,
	*104d668c57,
	*f02b54e228,
	*cfa246ad19_MAX,
};

// Enum TslGame.EScmCollisionGroup
enum class EScmCollisionGroup : uint8 {
	Default,
	FireField,
	ExplosiveItem,
	EScmCollisionGroup_MAX,
};

// Enum TslGame.EDamageFieldType
enum class EDamageFieldType : uint8 {
	Default,
	DirectTick,
	EDamageFieldType_MAX,
};

// Enum TslGame.EOptionTab
enum class EOptionTab : uint8 {
	Graphics,
	Audio,
	Controls,
	Gameplay,
	KeyBindings,
	EOptionTab_MAX,
};

// Enum TslGame.ETslGameOptionKeyBindingType
enum class ETslGameOptionKeyBindingType : uint8 {
	None,
	Action,
	Axis,
	ETslGameOptionKeyBindingType_MAX,
};

// Enum TslGame.ETslGameOptionSupplementaryType
enum class ETslGameOptionSupplementaryType : uint8 {
	None,
	KeyboardLayout,
	PreviewImage,
	PreviewCrosshair,
	VolumeUnitMeter,
	PreviewMaterial,
	LinkButton,
	ETslGameOptionSupplementaryType_MAX,
};

// Enum TslGame.ENaviGamepadInputType
enum class ENaviGamepadInputType : uint8 {
	DPad_Pressed,
	DPad_Released,
	Axis,
	Axis_Hold,
	ENaviGamepadInputType_MAX,
};

// Enum TslGame.EDynamicWeather
enum class EDynamicWeather : uint8 {
	NotInitialized,
	Initialized,
	BlendInStarted,
	Saturated,
	BlendOutStarted,
	BlendOutEnded,
	Finished,
	EDynamicWeather_MAX,
};

// Enum TslGame.EEffectSpreadState
enum class EEffectSpreadState : uint8 {
	ESS_InitialTrace,
	ESS_InitialProcess,
	ESS_Spreading,
	ESS_SpreadDone,
	ESS_Ending,
	ESS_MAX,
};

// Enum TslGame.*abdfb270ac
enum class *abdfb270ac : uint8 {
	*dd124cb126,
	*1fcbfd4603,
	*3842c80afe,
	*a4fb65fe44,
	*abdfb270ac_MAX,
};

// Enum TslGame.ETslFenceSelector
enum class ETslFenceSelector : uint8 {
	None,
	Use_2,
	Use_3,
	Use_4,
	Use_5,
	ETslFenceSelector_MAX,
};

// Enum TslGame.EFlowTextState
enum class EFlowTextState : uint8 {
	None,
	Wait,
	FlowLeftOut,
	FlowLeftIn,
	FlowRightOut,
	FlowRightIn,
	BlinkAnimation,
	EFlowTextState_MAX,
};

// Enum TslGame.*4ffb3bc856
enum class *4ffb3bc856 : uint8 {
	*9d63ffaa7c,
	*ba072f5e21,
	*c59a127d60,
	*b135c19091,
	*0c803b072d,
	*278bb7ecd7,
	*a8162cc892,
	*4ffb3bc856_MAX,
};

// Enum TslGame.EBBHolderSelectMethod
enum class EBBHolderSelectMethod : uint8 {
	Closest,
	Random,
	EBBHolderSelectMethod_MAX,
};

// Enum TslGame.*2c9ea0e78e
enum class *2c9ea0e78e : uint8 {
	*f91e9b29f7,
	*943455175a,
	*eedb7343a1,
	*561893262b,
	*2c9ea0e78e_MAX,
};

// Enum TslGame.ERacingBgmTheme
enum class ERacingBgmTheme : uint8 {
	Default,
	WinterRaicng,
	ERacingBgmTheme_MAX,
};

// Enum TslGame.EHungerState
enum class EHungerState : uint8 {
	Normal,
	Hunger,
	Starvation,
	Famine,
	EHungerState_MAX,
};

// Enum TslGame.EWarModeCarePackageKitType
enum class EWarModeCarePackageKitType : uint8 {
	CarepackageKit_Off,
	CarepackageKit_Basic,
	CarepackageKit_ARKit,
	CarepackageKit_SRKit,
	CarepackageKit_MAX,
};

// Enum TslGame.*988cf4cb82
enum class *988cf4cb82 : uint8 {
	*4e0e936c19,
	*56ca050946,
	*8a7fa8e836,
	*988cf4cb82_MAX,
};

// Enum TslGame.*e75b202d9c
enum class *e75b202d9c : uint8 {
	*170f38dce4,
	*f6b45a9403,
	*701e8e1a55,
	*e75b202d9c_MAX,
};

// Enum TslGame.EVoiceChatChannel
enum class EVoiceChatChannel : uint8 {
	All,
	TeamOnly,
	None,
	MAX,
	EVoiceChatChannel_MAX,
};

// Enum TslGame.EVoiceInputMode_Console
enum class EVoiceInputMode_Console : uint8 {
	OpenMic,
	Disable,
	MAX,
	EVoiceInputMode_MAX,
};

// Enum TslGame.EVoiceInputMode_PC
enum class EVoiceInputMode_PC : uint8 {
	OpenMic,
	PushToTalk,
	Toggle,
	Disable,
	MAX,
	EVoiceInputMode_MAX,
};

// Enum TslGame.ERacingGamePhase
enum class ERacingGamePhase : uint8 {
	NotStarted,
	PrepareState,
	InProgress,
	EndPhase,
	End,
	ERacingGamePhase_MAX,
};

// Enum TslGame.EGasPumpState
enum class EGasPumpState : uint8 {
	Inactive,
	StartFueling,
	StopFueling,
	StopFuelingFull,
	EGasPumpState_MAX,
};

// Enum TslGame.ETslHelperInputActionType
enum class ETslHelperInputActionType : uint8 {
	DPad,
	Shoulder,
	Face,
	Keyboard,
	ETslHelperInputActionType_MAX,
};

// Enum TslGame.*d0acc11e25
enum class *d0acc11e25 : uint8 {
	*c20796596e,
	*79a1c4f792,
	*7d0e76297f,
	*d0acc11e25_MAX,
};

// Enum TslGame.*7a9d995979
enum class *7a9d995979 : uint8 {
	*6e76835f5d,
	*2421ead75a,
	*dfcd81a98a,
	*9b239b6651,
	*92b4e0726b,
	*f100b9cf44,
	*7a9d995979_MAX,
};

// Enum TslGame.*e34786309f
enum class *e34786309f : uint8 {
	*6e76835f5d,
	*f50399c417,
	*2421ead75a,
	*3f371b4ec7,
	*e34786309f_MAX,
};

// Enum TslGame.ETrainingButtonActiveType
enum class ETrainingButtonActiveType : uint8 {
	Default,
	AimTrainingOnly,
	ETrainingButtonActiveType_MAX,
};

// Enum TslGame.EVendingMachineState
enum class EVendingMachineState : uint8 {
	ACTIVATED,
	DEACTIVATED_TEMPORARILY_BY_PICK_DELAY,
	DEACTIVATED_TEMPORARILY_BY_DAMAGE,
	DEACTIVATED_TEMPORARILY_BY_JACKPOT,
	DEACTIVATED_PERMANANTLY_BY_EXCEEDED_MAX_PICK_COUNT,
	EVendingMachineState_MAX,
};

// Enum TslGame.EOutGameMontageState
enum class EOutGameMontageState : uint8 {
	Default,
	Playing,
	Interrupted,
	Finished,
	EOutGameMontageState_MAX,
};

// Enum TslGame.EItemRequestType
enum class EItemRequestType : uint8 {
	None,
	Heal,
	Ammo,
	EItemRequestType_MAX,
};

// Enum TslGame.JukeBoxAnimState
enum class JukeBoxAnimState : uint8 {
	OPEN,
	CLOSED,
	JukeBoxAnimState_MAX,
};

// Enum TslGame.ELivingThingThreatLevel
enum class ELivingThingThreatLevel : uint8 {
	NoChanged,
	IncrementThreatLevel,
	DecrementThreatLevel,
	Calm,
	Fear,
	Panic,
	Dead,
	MAX,
	ELivingThingThreatLevel_MAX,
};

// Enum TslGame.ELivingThingCustomEvent
enum class ELivingThingCustomEvent : uint8 {
	HittedByBullet,
	HittedByExplosion,
	HittedByCar,
	HittedByCharacter,
	HittedByLivingThing,
	HittedByPhysicsBody,
	HittedByOthers,
	Custom1,
	Custom2,
	Custom3,
	Custom4,
	Custom5,
	Custom6,
	Custom7,
	Custom8,
	Custom9,
	Custom10,
	Custom11,
	Custom12,
	Custom13,
	Custom14,
	Custom15,
	Custom16,
	Custom17,
	Custom18,
	Custom19,
	Custom20,
	MAX,
	ELivingThingCustomEvent_MAX,
};

// Enum TslGame.ETLMeshSelection
enum class ETLMeshSelection : uint8 {
	Auto,
	StaticMesh,
	SkeletalMesh,
	None,
	ETLMeshSelection_MAX,
};

// Enum TslGame.ELobbyCharacterPosition
enum class ELobbyCharacterPosition : uint8 {
	Position1,
	Position2,
	Position3,
	Position4,
	ELobbyCharacterPosition_MAX,
};

// Enum TslGame.ELobbyCharacterReadyType
enum class ELobbyCharacterReadyType : uint8 {
	Ready,
	NotReady,
	ReadyToNotReady,
	NotReadyToReady,
	EmoteToReady,
	EmoteToNotReady,
	ELobbyCharacterReadyType_MAX,
};

// Enum TslGame.ETslSLBZombieSpawnType
enum class ETslSLBZombieSpawnType : uint8 {
	Instant,
	Time,
	ETslSLBZombieSpawnType_MAX,
};

// Enum TslGame.EObserverPlayerListType
enum class EObserverPlayerListType : uint8 {
	Distance,
	Kill,
	Survivor,
	Max,
	EObserverPlayerListType_MAX,
};

// Enum TslGame.ECustomDamageZoneType
enum class ECustomDamageZoneType : uint8 {
	Head,
	UpperBody,
	LowerBody,
	Arms,
	Legs,
	ECustomDamageZoneType_MAX,
};

// Enum TslGame.ECustomDamageWeaponClass
enum class ECustomDamageWeaponClass : uint8 {
	Bullet,
	Melee,
	ECustomDamageWeaponClass_MAX,
};

// Enum TslGame.EArenaStartType
enum class EArenaStartType : uint8 {
	Player,
	AircraftStart,
	AircraftEnd,
	EArenaStartType_MAX,
};

// Enum TslGame.ERacingItemIcon
enum class ERacingItemIcon : uint8 {
	Heal,
	Ammo,
	Boost,
	Gun,
	FlareAmmo,
	FlashBang,
	Granade,
	SmokeBomb,
	SpikeTrap,
	StickyBomb,
	FirstKillBombardItem,
	FirstKillBombardItem_NotActivate,
	ERacingItemIcon_MAX,
};

// Enum TslGame.ERacingGameScoreType
enum class ERacingGameScoreType : uint8 {
	CheckPoint,
	Trick,
	Kill,
	ERacingGameScoreType_MAX,
};

// Enum TslGame.ETslSLBInteractionType
enum class ETslSLBInteractionType : uint8 {
	None,
	Generator,
	Refueling,
	ClearDebuff,
	OpenLastDoor,
	MAX,
	ETslSLBInteractionType_MAX,
};

// Enum TslGame.EPGALOutput
enum class EPGALOutput : uint8 {
	Succeeded,
	Failed,
	EPGALOutput_MAX,
};

// Enum TslGame.*e3f472d76f
enum class *e3f472d76f : uint8 {
	*82c8abf5e1,
	*a9ab05c26d,
	*31cf32c101,
	*a2cf48853e,
	*49dad1dcff,
	*e3f472d76f_MAX,
};

// Enum TslGame.ESpikeDeploymentState
enum class ESpikeDeploymentState : uint8 {
	PreDeploy,
	Deploying,
	PostDeploy,
	Popped,
	Idle,
	ESpikeDeploymentState_MAX,
};

// Enum TslGame.E40mmDeployState
enum class E40mmDeployState : uint8 {
	None,
	FuseTriggered,
	DeployStarted,
	DeployFinished,
	DeployFailed,
	E40mmDeployState_MAX,
};

// Enum TslGame.*008a90bc13
enum class *008a90bc13 : uint8 {
	*d10d4d7e59,
	*e0a120170d,
	*0d2fd1ab7f,
	*008a90bc13_MAX,
};

// Enum TslGame.ETslPubgIdAssetType
enum class ETslPubgIdAssetType : uint8 {
	NONE,
	NAMEPLATE,
	EMBLEM,
	EMBLEM_ANIMATED,
	MEDAL1,
	MEDAL2,
	CLANPLATE,
	CLANPLATE_LOW_DEFINITION,
	TIER,
	ETslPubgIdAssetType_MAX,
};

// Enum TslGame.*5de6422ef1
enum class *5de6422ef1 : uint8 {
	*aa3de6f665,
	*422ed37b3e,
	*b0df0379d9,
	*5de6422ef1_MAX,
};

// Enum TslGame.ETslReferenceObjType
enum class ETslReferenceObjType : uint8 {
	GameMode,
	Character,
	Preload,
	ETslReferenceObjType_MAX,
};

// Enum TslGame.*0ef1e606e1
enum class *0ef1e606e1 : uint8 {
	*a34d0ae4de,
	*4f89aa9c51,
	*9c12ca9eec,
	*d63b170b0d,
	*085036d264,
	*0ef1e606e1_MAX,
};

// Enum TslGame.ESLBTriggerShapeType
enum class ESLBTriggerShapeType : uint8 {
	Box,
	Sphere,
	ESLBTriggerShapeType_MAX,
};

// Enum TslGame.ESandStormSoundType
enum class ESandStormSoundType : uint8 {
	None,
	StartSound,
	LoopSound,
	InSound,
	OutSound,
	ESandStormSoundType_MAX,
};

// Enum TslGame.EReplayTimelineMode
enum class EReplayTimelineMode : uint8 {
	ReplayPlay,
	ReplayEditor,
	ReplayRender,
	EReplayTimelineMode_MAX,
};

// Enum TslGame.*5d9cb0fcf7
enum class *5d9cb0fcf7 : uint8 {
	*dc7fed0b3e,
	*a1221eb41f,
	*10363a8759,
	*4020d5b33e,
	*a0b4c10f8d,
	*5d9cb0fcf7_MAX,
};

// Enum TslGame.*9addfc3028
enum class *9addfc3028 : uint8 {
	*6b50975398,
	*babcf3098a,
	*4435a26564,
	*8c86b0f5a7,
	*af3c079411,
	*72c6cd1d32,
	*af91e02389,
	*01c0ea515d,
	*5b4d9e0b92,
	*d7c004eb7a,
	*34eedcbaf8,
	*9addfc3028_MAX,
};

// Enum TslGame.ERideVehicle
enum class ERideVehicle : uint8 {
	None,
	Ride,
	Leave,
	ERideVehicle_MAX,
};

// Enum TslGame.*872d1d2e3c
enum class *872d1d2e3c : uint8 {
	*26a3fe6194,
	*a3b5d2b7de,
	*1ac979a662,
	*872d1d2e3c_MAX,
};

// Enum TslGame.*dd860635c9
enum class *dd860635c9 : uint8 {
	*073295d81d,
	*4693f0f5de,
	*7b7464af12,
	*dd860635c9_MAX,
};

// Enum TslGame.ERedeployProgressDotType
enum class ERedeployProgressDotType : uint8 {
	None,
	Pass,
	Start,
	Recruit,
	NotOpenYet,
	PlayingRedeploy,
	MAX,
	ERedeployProgressDotType_MAX,
};

// Enum TslGame.ETslTrainingDashboardRangeUIType
enum class ETslTrainingDashboardRangeUIType : uint8 {
	None,
	Range10,
	Range50,
	Range100,
	ETslTrainingDashboardRangeUIType_MAX,
};

// Enum TslGame.ETslTrainingDashboardPracticeUIType
enum class ETslTrainingDashboardPracticeUIType : uint8 {
	None,
	Practice_Aim,
	Practice_Sound,
	ETslTrainingDashboardPracticeUIType_MAX,
};

// Enum TslGame.*0c68ec7517
enum class *0c68ec7517 : uint8 {
	*082d2336e5,
	*78ca83dfde,
	*2a5df1edc3,
	*007a2eaf1c,
	*8e2aa53e6b,
	*e1dce969c9,
	*1dbad4c196,
	*0c68ec7517_MAX,
};

// Enum TslGame.*f170959b53
enum class *f170959b53 : uint8 {
	*1982af0706,
	*0bb315bc91,
	*24ee755cb5,
	*f170959b53_MAX,
};

// Enum TslGame.EMeleeThrowState
enum class EMeleeThrowState : uint8 {
	Idle,
	Prepare,
	Throw,
	EMeleeThrowState_MAX,
};

// Enum TslGame.*9419b42be7
enum class *9419b42be7 : uint8 {
	*017d74d695,
	*86f793b306,
	*81e43090fb,
	*9419b42be7_MAX,
};

// Enum TslGame.EMinimapFocus
enum class EMinimapFocus : uint8 {
	CharacterFocus,
	NextPlayzoneFocus,
	None,
	EMinimapFocus_MAX,
};

// Enum TslGame.ETslArenaLoadoutItemCategory
enum class ETslArenaLoadoutItemCategory : uint8 {
	PistolAndShotgun,
	Smg,
	Ar,
	Dmr,
	Sr,
	Equipment,
	ETslArenaLoadoutItemCategory_MAX,
};

// Enum TslGame.ETslArenaLoadoutDirections
enum class ETslArenaLoadoutDirections : uint8 {
	Up,
	Right,
	Down,
	Left,
	ETslArenaLoadoutDirections_MAX,
};

// Enum TslGame.*873c9362e5
enum class *873c9362e5 : uint8 {
	*972c65463e,
	*5b336f07bd,
	*de806fdd55,
	*f9b0498502,
	*873c9362e5_MAX,
};

// Enum TslGame.EConditionOfDeath
enum class EConditionOfDeath : uint8 {
	HeadShot,
	DBNO,
	DBNOByHeadShot,
	None,
	EConditionOfDeath_MAX,
};

// Enum TslGame.ETslTeamInfoIconState
enum class ETslTeamInfoIconState : uint8 {
	Default,
	Vehicle,
	Parachute,
	Die,
	Groggy,
	Quitter,
	AirCraft,
	ItemRequest,
	EmergencyPickup,
	BlueBallHolder,
	Redeploy,
	RedeployFighting,
	Revival,
	SpecificMode,
	ETslTeamInfoIconState_MAX,
};

// Enum TslGame.EControllerImageType
enum class EControllerImageType : uint8 {
	XboxOne,
	PS4,
	Quail,
	Quail_ThirdParty,
	None,
	EControllerImageType_MAX,
};

// Enum TslGame.EBinaryStepperType
enum class EBinaryStepperType : uint8 {
	OFF,
	ON,
	EBinaryStepperType_MAX,
};

// Enum TslGame.EKeyIconCombinationDisplayType
enum class EKeyIconCombinationDisplayType : uint8 {
	NotUsed,
	Empty,
	Plus,
	Slash,
	EKeyIconCombinationDisplayType_MAX,
};

// Enum TslGame.EGamepadKeyIconDisplayType
enum class EGamepadKeyIconDisplayType : uint8 {
	Tap,
	DoubleTap,
	ComboHold,
	TimerHoldCircle,
	TimerHoldBar,
	EGamepadKeyIconDisplayType_MAX,
};

// Enum TslGame.EDirectMessageColorType
enum class EDirectMessageColorType : uint8 {
	Alert,
	System,
	Chat,
	Clan,
	MAX,
	EDirectMessageColorType_MAX,
};

// Enum TslGame.*18dd162de2
enum class *18dd162de2 : uint8 {
	*287d76f50c,
	*056c8e24e3,
	*c03441b99b,
	*65ac627ac5,
	*18dd162de2_MAX,
};

// Enum TslGame.*e4161d4242
enum class *e4161d4242 : uint8 {
	*c4a34d9b0a,
	*28973b0fed,
	*0cbd05bdd8,
	*e4161d4242_MAX,
};

// Enum TslGame.EEmotePlayViewType
enum class EEmotePlayViewType : uint8 {
	Disable,
	TeamMate_Enable,
	Interaction_Enable,
	EEmotePlayViewType_MAX,
};

// Enum TslGame.*66fc567e90
enum class *66fc567e90 : uint8 {
	*696558800f,
	*4573e87815,
	*4c850a6cb3,
	*0cbd05bdd8,
	*66fc567e90_MAX,
};

// Enum TslGame.EBluezoneState
enum class EBluezoneState : uint8 {
	Wait,
	Release,
	NoRestrict,
	EBluezoneState_MAX,
};

// Enum TslGame.EStatInfoType
enum class EStatInfoType : uint8 {
	Kill,
	Damage,
	Assist,
	EStatInfoType_MAX,
};

// Enum TslGame.EDisplayPlayerInfoType
enum class EDisplayPlayerInfoType : uint8 {
	PlayerList,
	EngagedEnemies,
	NearbyPlayers,
	OtherEngagements,
	ObserverTeamInfoList,
	EDisplayPlayerInfoType_MAX,
};

// Enum TslGame.MatchResultTypeEnum
enum class MatchResultTypeEnum : uint8 {
	INVALID,
	DEFAULT,
	OBSERVER,
	ZOMBIE,
	LEAGUE,
	TYPE_NUM,
	MatchResultTypeEnum_MAX,
};

// Enum TslGame.EMarkStates
enum class EMarkStates : uint8 {
	Normal,
	Groggy,
	Dead,
	Vehicle,
	Parachute,
	Quitter,
	Aircraft,
	ItemRequest,
	EmergencyPickup,
	EMarkStates_MAX,
};

// Enum TslGame.ETeenageInfoType
enum class ETeenageInfoType : uint8 {
	Normal,
	Season,
	ETeenageInfoType_MAX,
};

// Enum TslGame.EGuideKeyType
enum class EGuideKeyType : uint8 {
	PickUp,
	Drop,
	QuickPickUp,
	QuickDrop,
	QuickPack,
	Equip,
	Unequip,
	Swap,
	Detach,
	Unpack,
	Use,
	SwitchSlot,
	Confirm,
	Cancel,
	Apply,
	Purchase,
	DetachAll,
	UnpackAll,
	PickUpAmount,
	DropAmount,
	SwapWeapon,
	DropWeapon,
	QuickEquip,
	QuickEquip_NoHold,
	MoveToTrunk,
	DropFromTrunk,
	VicinityToTrunk,
	WeaponToTrunk,
	Pack,
	Pack_NoHold,
	None,
	EGuideKeyType_MAX,
};

// Enum TslGame.EBlueBlockerStateUIType
enum class EBlueBlockerStateUIType : uint8 {
	None,
	Active,
	Deactive,
	Hide,
	EBlueBlockerStateUIType_MAX,
};

// ScriptStruct TslGame.*5f2a4acf67
// Size: 0x40 (Inherited: 0x00)
struct F*5f2a4acf67 {
	enum class EWeaponAttachmentSlotID AttachmentSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AttachmentTag; // 0x08(0x08)
	struct UStaticMesh* AttachmentMeshAsset; // 0x10(0x20)
	struct FName AttachmentMeshName; // 0x30(0x08)
	struct UClass* AttachmentTemplate; // 0x38(0x08)
};

// ScriptStruct TslGame.DeathMessage
// Size: 0x108 (Inherited: 0x00)
struct FDeathMessage {
	struct FText KillerName; // 0x00(0x18)
	struct FText VictimName; // 0x18(0x18)
	struct FText KillerUniqueId; // 0x30(0x18)
	struct FUniqueNetIdRepl GroggyCauserUniqueId; // 0x48(0x18)
	struct FText VictimUniqueId; // 0x60(0x18)
	char bKillerIsOwner : 1; // 0x78(0x01)
	char bVictimIsOwner : 1; // 0x78(0x01)
	char bVictimIsPillar : 1; // 0x78(0x01)
	char bVictimIsMonster : 1; // 0x78(0x01)
	char pad_78_4 : 4; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 KillerTeamNum; // 0x7c(0x04)
	int32 VictimTeamNum; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct UTslDamageType* DamageType; // 0x88(0x08)
	struct FText InsertMessage; // 0x90(0x18)
	enum class EDamageReason DamageReason; // 0xa8(0x01)
	bool bGroggy; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	int32 AlivePlayerNum; // 0xac(0x04)
	int32 AliveTeamNum; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FText DamageCauserName; // 0xb8(0x18)
	int32 DamageCauserLevel; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UTexture* DamageCauserIcon; // 0xd8(0x08)
	float DamageCauserIconRatio; // 0xe0(0x04)
	bool bIsKillerExist; // 0xe4(0x01)
	bool bIsStealKilled; // 0xe5(0x01)
	bool bIsObserver; // 0xe6(0x01)
	bool bIsObserverAndKillerIsSpectated; // 0xe7(0x01)
	bool bIsObserverAndVictimIsSpectated; // 0xe8(0x01)
	bool bIsMidGameBanMessage; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	float DistanceFromKillerToVictim; // 0xec(0x04)
	enum class EOutGamePlatformProvider KillerPlatform; // 0xf0(0x01)
	enum class EOutGamePlatformProvider VictimPlatform; // 0xf1(0x01)
	char pad_F2[0x16]; // 0xf2(0x16)
};

// ScriptStruct TslGame.*4ae432cb8e
// Size: 0x18 (Inherited: 0x00)
struct F*4ae432cb8e {
	struct F*5e23fc320a *7361a01dd9; // 0x00(0x08)
	struct F*5e23fc320a WeaponPackage; // 0x08(0x08)
	struct F*5e23fc320a HealingPackage; // 0x10(0x08)
};

// ScriptStruct TslGame.*5e23fc320a
// Size: 0x08 (Inherited: 0x00)
struct F*5e23fc320a {
	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *e1bf8095ec; // 0x04(0x04)
};

// ScriptStruct TslGame.*ad225cd187
// Size: 0x10 (Inherited: 0x00)
struct F*ad225cd187 {
	bool Show; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D MarkerPosition; // 0x04(0x08)
	enum class EMarkerType MarkerType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*adc8b70632
// Size: 0x20 (Inherited: 0x10)
struct F*adc8b70632 : F*f54d27b55a {
	struct FVector SpawnPosition; // 0x10(0x0c)
	float *1f791771bd; // 0x1c(0x04)
};

// ScriptStruct TslGame.*f54d27b55a
// Size: 0x10 (Inherited: 0x00)
struct F*f54d27b55a {
	enum class EPlatoonSupportRequestEventType EventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *79bacb6740; // 0x04(0x04)
	bool *b7b2c87ad7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StartTime; // 0x0c(0x04)
};

// ScriptStruct TslGame.*9b9ccc5519
// Size: 0x24 (Inherited: 0x10)
struct F*9b9ccc5519 : F*f54d27b55a {
	enum class EPlatoonCarePackageType CarePackageType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *727626d7fd; // 0x14(0x04)
	struct FVector *c47dd826b6; // 0x18(0x0c)
};

// ScriptStruct TslGame.*2bc8abf160
// Size: 0x58 (Inherited: 0x00)
struct F*2bc8abf160 {
	float *c55c12cb53; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* *f23bfe8a1c; // 0x08(0x08)
	struct ATslPlayerState* *8b96d79e0f; // 0x10(0x08)
	struct FVector_NetQuantize *c5fae6626d; // 0x18(0x0c)
	struct FVector_NetQuantize *a910196918; // 0x24(0x0c)
	struct FName BoneName; // 0x30(0x08)
	float *d4703b8a54; // 0x38(0x04)
	bool *17badf2c8a; // 0x3c(0x01)
	bool *c1263db16a; // 0x3d(0x01)
	char *046c2eaa88 : 1; // 0x3e(0x01)
	char *50a4d699df : 1; // 0x3e(0x01)
	char *35a41644ef : 1; // 0x3e(0x01)
	char pad_3E_3 : 5; // 0x3e(0x01)
	bool *29526e02a9; // 0x3f(0x01)
	struct FName *a61c615344; // 0x40(0x08)
	struct FVector AttackerLocation; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*12f55e173e
// Size: 0x30 (Inherited: 0x00)
struct F*12f55e173e {
	struct FString PartyId; // 0x00(0x10)
	bool IsPartyLeader; // 0x10(0x01)
	enum class ERequestPartyState PartyState; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32 *4d21036631; // 0x14(0x04)
	bool *bf4c77d895; // 0x18(0x01)
	char pad_19[0x17]; // 0x19(0x17)
};

// ScriptStruct TslGame.*a48499ea81
// Size: 0x20 (Inherited: 0x00)
struct F*a48499ea81 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* TargetActor; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*4f71fcfb58
// Size: 0x20 (Inherited: 0x00)
struct F*4f71fcfb58 {
	int32 *c8dfb0e7fb; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText *a0ed28d062; // 0x08(0x18)
};

// ScriptStruct TslGame.*9f7db6ca61
// Size: 0x28 (Inherited: 0x00)
struct F*9f7db6ca61 {
	int32 *2447c35116; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslCharacter* Rider; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct TslGame.*f24e323a9e
// Size: 0x10 (Inherited: 0x00)
struct F*f24e323a9e {
	float *2e5ed5c35d; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
};

// ScriptStruct TslGame.*12b601d39a
// Size: 0x10 (Inherited: 0x00)
struct F*12b601d39a {
	struct FVector2D *35bcdc11be; // 0x00(0x08)
	struct FVector2D *f6cb334ef9; // 0x08(0x08)
};

// ScriptStruct TslGame.*a1ab208fc4
// Size: 0x38 (Inherited: 0x00)
struct F*a1ab208fc4 {
	float DemoTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Weather; // 0x08(0x10)
	enum class ETslOvercastAction Action; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float InitElapsedTime; // 0x1c(0x04)
	float SaturateTime; // 0x20(0x04)
	float BlendInTime; // 0x24(0x04)
	float BlendOutTime; // 0x28(0x04)
	float TimeMultiplier; // 0x2c(0x04)
	float ThunderAngle; // 0x30(0x04)
	float ThunderDistance; // 0x34(0x04)
};

// ScriptStruct TslGame.*1103e86975
// Size: 0x98 (Inherited: 0x00)
struct F*1103e86975 {
	bool bIsCustomGame; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MapName; // 0x08(0x10)
	struct FString ModeName; // 0x18(0x10)
	struct FString MatchId; // 0x28(0x10)
	int32 TeamCount; // 0x38(0x04)
	int32 MinPlayerCount; // 0x3c(0x04)
	int32 MaxPlayerCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TMap<struct FString, struct FString> StringParameter; // 0x48(0x50)
};

// ScriptStruct TslGame.*8736dbfc20
// Size: 0x10 (Inherited: 0x00)
struct F*8736dbfc20 {
	float DemoTime; // 0x00(0x04)
	float FogFallOff; // 0x04(0x04)
	float FogStartDistance; // 0x08(0x04)
	float FogDensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.TslPlayerStateSummary
// Size: 0x40 (Inherited: 0x00)
struct FTslPlayerStateSummary {
	struct FString UniqueId; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	int32 TeamNumber; // 0x20(0x04)
	int32 Ranking; // 0x24(0x04)
	int32 HeadShots; // 0x28(0x04)
	int32 NumKills; // 0x2c(0x04)
	float TotalGivenDamages; // 0x30(0x04)
	float LongestDistanceKill; // 0x34(0x04)
	float TotalMovedDistanceMeter; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGame.TslReplaySummary
// Size: 0x90 (Inherited: 0x00)
struct FTslReplaySummary {
	struct FString MatchId; // 0x00(0x10)
	bool bIsServerRecording; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString RecordUserId; // 0x18(0x10)
	struct FString RecordAccountId; // 0x28(0x10)
	struct FString RecordUserNickName; // 0x38(0x10)
	struct FString MapName; // 0x48(0x10)
	struct FString WeatherName; // 0x58(0x10)
	struct FString RegionName; // 0x68(0x10)
	int32 NumPlayers; // 0x78(0x04)
	int32 NumTeams; // 0x7c(0x04)
	struct TArray<struct FTslPlayerStateSummary> PlayerStateSummaries; // 0x80(0x10)
};

// ScriptStruct TslGame.*ebd18e3fe8
// Size: 0xe0 (Inherited: 0x00)
struct F*ebd18e3fe8 {
	int32 DataSetNumber; // 0x00(0x04)
	int32 TimeMS; // 0x04(0x04)
	bool IsSkip; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Type; // 0x10(0x10)
	float FOV; // 0x20(0x04)
	float PositionX; // 0x24(0x04)
	float PositionY; // 0x28(0x04)
	float PositionZ; // 0x2c(0x04)
	float RotationX; // 0x30(0x04)
	float RotationY; // 0x34(0x04)
	float RotationZ; // 0x38(0x04)
	float Angle; // 0x3c(0x04)
	struct FString Target; // 0x40(0x10)
	struct FString InterpolationType; // 0x50(0x10)
	struct FString CameraDirection; // 0x60(0x10)
	struct FString ReplaySpeed; // 0x70(0x10)
	bool IsAutoExposureEnable; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString DofMethod; // 0x88(0x10)
	float DofFocalRegion; // 0x98(0x04)
	bool IsDofAutoFocus; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float DofFocalDistance; // 0xa0(0x04)
	float DofNearTransitionRegion; // 0xa4(0x04)
	float DofFarTransitionRegion; // 0xa8(0x04)
	float DofBokehScale; // 0xac(0x04)
	float DofBokehMaxSize; // 0xb0(0x04)
	float DofGaussianNearBlurSize; // 0xb4(0x04)
	float DofGaussianFarBlurSize; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString ColorGradingLUT; // 0xc0(0x10)
	float ColorGradingLUTIntensity; // 0xd0(0x04)
	float BloomIntensity; // 0xd4(0x04)
	float VignetteIntensity; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct TslGame.*bf1227c132
// Size: 0x50 (Inherited: 0x00)
struct F*bf1227c132 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.TslOutGameLog
// Size: 0x20 (Inherited: 0x00)
struct FTslOutGameLog {
	struct FString Type; // 0x00(0x10)
	struct FString Log; // 0x10(0x10)
};

// ScriptStruct TslGame.*b22003f3e0
// Size: 0x10 (Inherited: 0x00)
struct F*b22003f3e0 {
	struct UExponentialHeightFogComponent* *95138e4092; // 0x00(0x08)
	bool *3d9ef0fd72; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*b6149201ec
// Size: 0x20 (Inherited: 0x00)
struct F*b6149201ec {
	enum class EQualityType QualityType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DisplayQualityLevelName; // 0x08(0x18)
};

// ScriptStruct TslGame.TslMissionInLobby
// Size: 0x88 (Inherited: 0x00)
struct FTslMissionInLobby {
	struct FString MissionId; // 0x00(0x10)
	bool bAchieved; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Description; // 0x18(0x10)
	int32 Priority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString Type; // 0x30(0x10)
	bool bLocked; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float ProgressRatio; // 0x44(0x04)
	struct FString ProgressText; // 0x48(0x10)
	struct FString MissionIconName; // 0x58(0x10)
	int32 InitialProgress; // 0x68(0x04)
	int32 CurrentProgress; // 0x6c(0x04)
	int32 MaximumProgress; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FName> TargetGameModeList; // 0x78(0x10)
};

// ScriptStruct TslGame.PointInfo
// Size: 0x08 (Inherited: 0x00)
struct FPointInfo {
	int32 *cc7f0b8159; // 0x00(0x04)
	int32 *8f5bbd7a6a; // 0x04(0x04)
};

// ScriptStruct TslGame.TeamInfo
// Size: 0x50 (Inherited: 0x00)
struct FTeamInfo {
	struct FString TeamName; // 0x00(0x10)
	struct FString *a20f72d2fc; // 0x10(0x10)
	struct UTexture2D* TeamIcon; // 0x20(0x08)
	struct FLinearColor TeamColor; // 0x28(0x10)
	struct FLinearColor *893c851205; // 0x38(0x10)
	struct UTexture2D* TeamMember; // 0x48(0x08)
};

// ScriptStruct TslGame.ReplayItem
// Size: 0x100 (Inherited: 0x00)
struct FReplayItem {
	struct FString FriendlyName; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	bool bIsLive; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FDateTime Date; // 0x28(0x08)
	int32 SizeInBytes; // 0x30(0x04)
	int32 LengthInMS; // 0x34(0x04)
	int32 NumViewers; // 0x38(0x04)
	bool bIncomplete; // 0x3c(0x01)
	bool bIsVersionCompatible; // 0x3d(0x01)
	bool bIsCorrupted; // 0x3e(0x01)
	bool bIsServerRecording; // 0x3f(0x01)
	bool bShouldKeep; // 0x40(0x01)
	bool bArchived; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FString GameVersion; // 0x48(0x10)
	int32 MK3DReplayVersion; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Mode; // 0x60(0x10)
	struct FString RecordUserId; // 0x70(0x10)
	struct FString RecordUserNickName; // 0x80(0x10)
	struct FString MapName; // 0x90(0x10)
	bool bAllDeadOrWin; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 ArchiveSizeInBytes; // 0xa4(0x04)
	bool bIsClip; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32 ClipTime; // 0xac(0x04)
	int32 ClipStartTime; // 0xb0(0x04)
	int32 ClipEndTime; // 0xb4(0x04)
	struct FString ClipTargetUserId; // 0xb8(0x10)
	struct FString ClipTargetUserNickName; // 0xc8(0x10)
	struct FString ReportToken; // 0xd8(0x10)
	struct FString RecordAccountId; // 0xe8(0x10)
	bool bHaveCameraEvent; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// ScriptStruct TslGame.*e41543b881
// Size: 0xb8 (Inherited: 0x00)
struct F*e41543b881 {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString KillerName; // 0x38(0x10)
	struct FString KillerNetId; // 0x48(0x10)
	struct FString VictimName; // 0x58(0x10)
	struct FString VictimNetId; // 0x68(0x10)
	struct FString DamageCauseClassName; // 0x78(0x10)
	int32 DamageTypeCategory; // 0x88(0x04)
	int32 DamageReason; // 0x8c(0x04)
	bool bGroggy; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString KillerPlayerId; // 0x98(0x10)
	struct FString VictimPlayerId; // 0xa8(0x10)
};

// ScriptStruct TslGame.*3e7ea6e653
// Size: 0x138 (Inherited: 0x00)
struct F*3e7ea6e653 {
	float LastUpdateTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString KillerUniqueId; // 0x08(0x10)
	struct FString KillerName; // 0x18(0x10)
	struct FString KillerPlayerId; // 0x28(0x10)
	struct FString VictimUniqueId; // 0x38(0x10)
	struct FString VictimName; // 0x48(0x10)
	struct FString VictimPlayerId; // 0x58(0x10)
	char pad_68[0xd0]; // 0x68(0xd0)
};

// ScriptStruct TslGame.*55164c1e1d
// Size: 0x58 (Inherited: 0x00)
struct F*55164c1e1d {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString RecordTargetName; // 0x38(0x10)
	struct FString RecordTargetNetId; // 0x48(0x10)
};

// ScriptStruct TslGame.*f16e2659eb
// Size: 0x68 (Inherited: 0x00)
struct F*f16e2659eb {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString EtceteraEventCode; // 0x38(0x10)
	struct FString TargetNetId; // 0x48(0x10)
	struct FString TargetName; // 0x58(0x10)
};

// ScriptStruct TslGame.*690e4e04e4
// Size: 0xb8 (Inherited: 0x00)
struct F*690e4e04e4 {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString InstigatorName; // 0x38(0x10)
	struct FString InstigatorNetId; // 0x48(0x10)
	struct FString VictimName; // 0x58(0x10)
	struct FString VictimNetId; // 0x68(0x10)
	struct FString DamageCauseClassName; // 0x78(0x10)
	int32 DamageTypeCategory; // 0x88(0x04)
	int32 DamageReason; // 0x8c(0x04)
	bool bGroggy; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString InstigatorPlayerId; // 0x98(0x10)
	struct FString VictimPlayerId; // 0xa8(0x10)
};

// ScriptStruct TslGame.*7d7454d0b1
// Size: 0x18 (Inherited: 0x00)
struct F*7d7454d0b1 {
	int32 *27adf40b84; // 0x00(0x04)
	int32 *d82c3c8a3c; // 0x04(0x04)
	struct TArray<struct F*927539a7ae> *dd3bed0418; // 0x08(0x10)
};

// ScriptStruct TslGame.*927539a7ae
// Size: 0x18 (Inherited: 0x00)
struct F*927539a7ae {
	struct TArray<struct F*f3ac3fdb3c> *4c15c8ae6f; // 0x00(0x10)
	bool bIsLastStage; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *f2862c9388; // 0x14(0x04)
};

// ScriptStruct TslGame.*f3ac3fdb3c
// Size: 0x60 (Inherited: 0x00)
struct F*f3ac3fdb3c {
	struct TArray<struct F*efa1194c58> *9388ea8252; // 0x00(0x10)
	struct TArray<int32> *d3ee96f650; // 0x10(0x10)
	int32 *abd96ae1b9; // 0x20(0x04)
	int32 *041622af76; // 0x24(0x04)
	enum class EArenaState *f3ac3fdb3c; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *9e61831727; // 0x2c(0x04)
	float *14dbd1031d; // 0x30(0x04)
	float *6bb451f2df; // 0x34(0x04)
	float *8056498ac2; // 0x38(0x04)
	int32 *735029dc87; // 0x3c(0x04)
	float *761b417b2f; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Name; // 0x48(0x10)
	int32 *47b967452b; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*efa1194c58
// Size: 0x14 (Inherited: 0x00)
struct F*efa1194c58 {
	int32 TeamId; // 0x00(0x04)
	int32 Score; // 0x04(0x04)
	int32 *8dc6739aa5; // 0x08(0x04)
	float *7a5c5534aa; // 0x0c(0x04)
	bool *0ef9e76b30; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*047e471dbd
// Size: 0x10 (Inherited: 0x00)
struct F*047e471dbd {
	struct TArray<struct F*d9ce401090> DynamicTeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*d9ce401090
// Size: 0x28 (Inherited: 0x00)
struct F*d9ce401090 {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	struct TArray<bool> RoundHistory; // 0x08(0x10)
	struct TArray<struct F*1f7e59b01a> DynamicPlayersInfo; // 0x18(0x10)
};

// ScriptStruct TslGame.*1f7e59b01a
// Size: 0x14 (Inherited: 0x00)
struct F*1f7e59b01a {
	int32 Kills; // 0x00(0x04)
	int32 Deaths; // 0x04(0x04)
	int32 DamageDealt; // 0x08(0x04)
	int32 money; // 0x0c(0x04)
	int32 MemberIndex; // 0x10(0x04)
};

// ScriptStruct TslGame.*2ef80828fc
// Size: 0x08 (Inherited: 0x00)
struct F*2ef80828fc {
	int32 GoalScore; // 0x00(0x04)
	bool bIsTeamElimination; // 0x04(0x01)
	bool bUseWarRoyaleBluezone; // 0x05(0x01)
	bool bUsingTeamXRay; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct TslGame.*ca25363ecf
// Size: 0x50 (Inherited: 0x00)
struct F*ca25363ecf {
	float TimeLimitSeconds; // 0x00(0x04)
	float LastRespawnTimeSeconds; // 0x04(0x04)
	struct TArray<int32> TeamIds; // 0x08(0x10)
	struct TArray<int32> TeamIndices; // 0x18(0x10)
	struct TArray<struct FString> TeamLeaderNames; // 0x28(0x10)
	struct TArray<struct FString> TeamLeaderClanNames; // 0x38(0x10)
	int32 TeamCount; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*76a7200ac1
// Size: 0x30 (Inherited: 0x00)
struct F*76a7200ac1 {
	float TrainingScore; // 0x00(0x04)
	float TrainingPlayTime; // 0x04(0x04)
	bool TrainingStartCountDown; // 0x08(0x01)
	bool HeadShotCount; // 0x09(0x01)
	bool KillCount; // 0x0a(0x01)
	bool AimAccuracy; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString WeaponName; // 0x10(0x10)
	float *36debdbb36; // 0x20(0x04)
	bool *e77ab0547b; // 0x24(0x01)
	bool *7e5133a1fb; // 0x25(0x01)
	bool *38ae073233; // 0x26(0x01)
	bool *6e34709ac9; // 0x27(0x01)
	bool *1c5051d17a; // 0x28(0x01)
	bool *6a6656b70c; // 0x29(0x01)
	bool *d615479f5a; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.TslReportUserInfo
// Size: 0x70 (Inherited: 0x00)
struct FTslReportUserInfo {
	struct FString PlayerName; // 0x00(0x10)
	struct FString ClanId; // 0x10(0x10)
	struct FString ClanTag; // 0x20(0x10)
	int32 ClanLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString StreamerFakeName; // 0x38(0x10)
	struct FString NetId; // 0x48(0x10)
	struct FString AccountId; // 0x58(0x10)
	int32 TeamId; // 0x68(0x04)
	enum class ESubjectToReport SubjectToReport; // 0x6c(0x01)
	enum class EOutGamePlatformProvider PlayerPlatform; // 0x6d(0x01)
	enum class ETslAIPlayerType AIType; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// ScriptStruct TslGame.TslInputKey
// Size: 0x20 (Inherited: 0x00)
struct FTslInputKey {
	struct FKey Key; // 0x00(0x18)
	char bShift : 1; // 0x18(0x01)
	char bCtrl : 1; // 0x18(0x01)
	char bAlt : 1; // 0x18(0x01)
	char pad_18_3 : 5; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*df332186d2
// Size: 0x08 (Inherited: 0x00)
struct F*df332186d2 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
};

// ScriptStruct TslGame.*ed3419bf49
// Size: 0x18 (Inherited: 0x00)
struct F*ed3419bf49 {
	struct ATslCharacter* *02ba72abda; // 0x00(0x08)
	float *6f39e14420; // 0x08(0x04)
	float *591b101e0a; // 0x0c(0x04)
	float *a32f9e6654; // 0x10(0x04)
	bool bIsGroggy; // 0x14(0x01)
	bool *2d1d10babc; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*7e7e97b5c1
// Size: 0x20 (Inherited: 0x00)
struct F*7e7e97b5c1 {
	struct FText *9315327d9f; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*2c3de5c408
// Size: 0x50 (Inherited: 0x00)
struct F*2c3de5c408 {
	struct TMap<enum class EFiremode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGame.*26bc02150b
// Size: 0x50 (Inherited: 0x00)
struct F*26bc02150b {
	struct TMap<enum class ETraumaBagHealMode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGame.*4f2a86e400
// Size: 0x18 (Inherited: 0x00)
struct F*4f2a86e400 {
	struct FName ItemID; // 0x00(0x08)
	int32 *9775ae7e4f; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct U*84a85f0ae3* *cac23466d2; // 0x10(0x08)
};

// ScriptStruct TslGame.*d18c0833ab
// Size: 0x50 (Inherited: 0x00)
struct F*d18c0833ab {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*de373e9aba
// Size: 0x10 (Inherited: 0x00)
struct F*de373e9aba {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*44b330afde
// Size: 0x18 (Inherited: 0x00)
struct F*44b330afde {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct U*d528f2c6cf*> Cache; // 0x08(0x10)
};

// ScriptStruct TslGame.*b54b11c920
// Size: 0x18 (Inherited: 0x00)
struct F*b54b11c920 {
	enum class ECastableItemType *466d4d9ab0; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName ItemID; // 0x08(0x08)
	struct UTexture2D* *c390f0189b; // 0x10(0x08)
};

// ScriptStruct TslGame.*2bee84db49
// Size: 0x10 (Inherited: 0x00)
struct F*2bee84db49 {
	struct TArray<struct F*d0568404a4> *909672fc53; // 0x00(0x10)
};

// ScriptStruct TslGame.*d0568404a4
// Size: 0x20 (Inherited: 0x00)
struct F*d0568404a4 {
	struct FName ActionName; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGame.*9333421ac1
// Size: 0x38 (Inherited: 0x00)
struct F*9333421ac1 {
	enum class ESystemMessageType MessageType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Duration; // 0x04(0x04)
	float *e008e01e6b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Message; // 0x10(0x18)
	int32 *88eb1b7175; // 0x28(0x04)
	int32 *bc492662e4; // 0x2c(0x04)
	bool *b5ea26f68d; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*2edf616f74
// Size: 0x38 (Inherited: 0x08)
struct F*2edf616f74 : FTableRowBase {
	struct FText Message; // 0x08(0x18)
	enum class ETslNotificationMessageColorType *0ca85b6174; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UTexture2D* *2768f1e6de; // 0x28(0x08)
	enum class ETslNotificationMessageAnimationType *f71edb1445; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*8d6d797852
// Size: 0x08 (Inherited: 0x00)
struct F*8d6d797852 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*ed2aaf203a
// Size: 0x08 (Inherited: 0x00)
struct F*ed2aaf203a {
	float Score; // 0x00(0x04)
	int32 *cbbe4496ad; // 0x04(0x04)
};

// ScriptStruct TslGame.*32d748f2bd
// Size: 0x08 (Inherited: 0x00)
struct F*32d748f2bd {
	int32 TeamNum; // 0x00(0x04)
	int32 TeamRanking; // 0x04(0x04)
};

// ScriptStruct TslGame.*06ae18bb44
// Size: 0x28 (Inherited: 0x00)
struct F*06ae18bb44 {
	struct FVector *d42dcf9a5d; // 0x00(0x0c)
	float *d15661b9ea; // 0x0c(0x04)
	float *1296aa7894; // 0x10(0x04)
	struct FVector *fe40c3e568; // 0x14(0x0c)
	float *a3c567c574; // 0x20(0x04)
	float *15f1620484; // 0x24(0x04)
};

// ScriptStruct TslGame.*fe626a3bcc
// Size: 0x48 (Inherited: 0x00)
struct F*fe626a3bcc {
	struct UClass* Widget; // 0x00(0x20)
	struct UTexture2D* Texture; // 0x20(0x20)
	struct FVector2D Size; // 0x40(0x08)
};

// ScriptStruct TslGame.*65c31adf7d
// Size: 0x10 (Inherited: 0x00)
struct F*65c31adf7d {
	struct TArray<struct UUserWidget*> Widgets; // 0x00(0x10)
};

// ScriptStruct TslGame.*8aa2a61bd0
// Size: 0x60 (Inherited: 0x00)
struct F*8aa2a61bd0 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*e00483e6d6
// Size: 0x60 (Inherited: 0x00)
struct F*e00483e6d6 {
	struct UTexture2D* IconBackground; // 0x00(0x20)
	struct UTexture2D* MemberIndexBackground; // 0x20(0x20)
	struct UTexture2D* FullWidgetBackground; // 0x40(0x20)
};

// ScriptStruct TslGame.PlayerInfo
// Size: 0x50 (Inherited: 0x00)
struct FPlayerInfo {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*65017b093c
// Size: 0x10 (Inherited: 0x00)
struct F*65017b093c {
	struct UTexture2D* Left; // 0x00(0x08)
	struct UTexture2D* Right; // 0x08(0x08)
};

// ScriptStruct TslGame.*bd73580d0b
// Size: 0x10 (Inherited: 0x00)
struct F*bd73580d0b {
	struct TArray<struct U*10099c704f*> Items; // 0x00(0x10)
};

// ScriptStruct TslGame.*f20ed664e0
// Size: 0x14 (Inherited: 0x00)
struct F*f20ed664e0 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*d5f0c085dd
// Size: 0x10 (Inherited: 0x00)
struct F*d5f0c085dd {
	struct TArray<struct ATslAIWaypointSegment*> *72c10bc4d6; // 0x00(0x10)
};

// ScriptStruct TslGame.*5737274745
// Size: 0xa0 (Inherited: 0x00)
struct F*5737274745 {
	struct TMap<struct F*3a4fc3c196, bool> *e35aa69471; // 0x00(0x50)
	struct TMap<struct F*3a4fc3c196, struct F*9413f02812> *84b8515766; // 0x50(0x50)
};

// ScriptStruct TslGame.*3a4fc3c196
// Size: 0x10 (Inherited: 0x00)
struct F*3a4fc3c196 {
	struct ATslAIWaypointSegment* path; // 0x00(0x08)
	float InputKey; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*9413f02812
// Size: 0x08 (Inherited: 0x00)
struct F*9413f02812 {
	float *8b2b3eee9b; // 0x00(0x04)
	float *f47266cf8e; // 0x04(0x04)
};

// ScriptStruct TslGame.*67df3e6efa
// Size: 0x48 (Inherited: 0x00)
struct F*67df3e6efa {
	int32 SpawnCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName VehicleTag; // 0x08(0x08)
	struct FName SpawnTag; // 0x10(0x08)
	bool *ac71c902b5; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector SpawnLocation; // 0x1c(0x0c)
	struct FRotator *c9bf8272bb; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct F*19e3498e5d *23d02448f0; // 0x38(0x10)
};

// ScriptStruct TslGame.*19e3498e5d
// Size: 0x10 (Inherited: 0x00)
struct F*19e3498e5d {
	struct ATslAIWaypointSegment* *ef181d98b2; // 0x00(0x08)
	float *451de35fc9; // 0x08(0x04)
	bool *a3e9e5fd2d; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*bbdacef020
// Size: 0x28 (Inherited: 0x00)
struct F*bbdacef020 {
	struct APawn* *bd98770c8e; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
	struct UBlackboardData* BlackboardData; // 0x10(0x08)
	struct F*19e3498e5d *23d02448f0; // 0x18(0x10)
};

// ScriptStruct TslGame.VehicleSpawn
// Size: 0xc0 (Inherited: 0x08)
struct FVehicleSpawn : FTableRowBase {
	struct FGuid ID; // 0x08(0x10)
	enum class ESpawnType SpawnType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FName VehicleTag; // 0x20(0x08)
	struct UClass* VehicleClass; // 0x28(0x20)
	struct UBehaviorTree* BehaviorTreeAsset; // 0x48(0x20)
	struct UBlackboardData* BlackboardDataAsset; // 0x68(0x20)
	float InitialSpawnDelay; // 0x88(0x04)
	float SubsequentSpawnDelay; // 0x8c(0x04)
	int32 MaxTriggers; // 0x90(0x04)
	bool MinToSpawn; // 0x94(0x01)
	bool MaxToSpawn; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	struct F*2b36dc4c2b SpawnFilter; // 0x98(0x28)
};

// ScriptStruct TslGame.*2b36dc4c2b
// Size: 0x28 (Inherited: 0x00)
struct F*2b36dc4c2b {
	bool bLimitSpawnPoints; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> ValidSpawnPoints; // 0x08(0x10)
	struct TArray<struct FName> InvalidSpawnPoints; // 0x18(0x10)
};

// ScriptStruct TslGame.*f51314da5a
// Size: 0x20 (Inherited: 0x00)
struct F*f51314da5a {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*69ddfbccda
// Size: 0x60 (Inherited: 0x00)
struct F*69ddfbccda {
	struct FGuid ID; // 0x00(0x10)
	struct FString *694a774ef8; // 0x10(0x10)
	struct UClass* VehicleClass; // 0x20(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x28(0x08)
	struct UBlackboardData* BlackboardData; // 0x30(0x08)
	struct F*2b36dc4c2b SpawnSettings; // 0x38(0x28)
};

// ScriptStruct TslGame.*c161809596
// Size: 0x40 (Inherited: 0x00)
struct F*c161809596 {
	float *8ddb56b817; // 0x00(0x04)
	float *53afbadd1e; // 0x04(0x04)
	float *e35a8a6242; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float *d8e4bbe504; // 0x10(0x04)
	float *a5cf76ceec; // 0x14(0x04)
	struct FName *04dfe4e2df; // 0x18(0x08)
	struct FVector *575753c9f5; // 0x20(0x0c)
	struct FVector *ebd74d5a2a; // 0x2c(0x0c)
	struct UClass* *f23bfe8a1c; // 0x38(0x08)
};

// ScriptStruct TslGame.*4c7d32fd0d
// Size: 0x30 (Inherited: 0x00)
struct F*4c7d32fd0d {
	struct F*b3ca2eb017 *95cdd05ad9; // 0x00(0x18)
	struct F*b3ca2eb017 *cb23c0d3c4; // 0x18(0x18)
};

// ScriptStruct TslGame.*b3ca2eb017
// Size: 0x18 (Inherited: 0x00)
struct F*b3ca2eb017 {
	float *86d1b3113b; // 0x00(0x04)
	float *5e6aea0f35; // 0x04(0x04)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*f203135574
// Size: 0x18 (Inherited: 0x00)
struct F*f203135574 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*bd13d4062a
// Size: 0x58 (Inherited: 0x00)
struct F*bd13d4062a {
	enum class EVehiclePartType *11ce994c43; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<int32, struct UMaterialInterface*> *5bad64c664; // 0x08(0x50)
};

// ScriptStruct TslGame.*7c1653f90b
// Size: 0x98 (Inherited: 0x00)
struct F*7c1653f90b {
	bool *90964b44b6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *fd728bf585; // 0x04(0x04)
	struct FName *7d4ddc63b0; // 0x08(0x08)
	struct FVector2D *9be5203234; // 0x10(0x08)
	struct FVector2D *3e0502340c; // 0x18(0x08)
	struct FVector *36fffc5c22; // 0x20(0x0c)
	struct FVector2D *c9740604a6; // 0x2c(0x08)
	struct FVector2D *20b08966a7; // 0x34(0x08)
	float *5f8dc14e2e; // 0x3c(0x04)
	float *a9651d6763; // 0x40(0x04)
	float *4c30b906e0; // 0x44(0x04)
	struct FVector *7bbec081b9; // 0x48(0x0c)
	struct FVector *c805630568; // 0x54(0x0c)
	struct FVector2D *34c23f4edb; // 0x60(0x08)
	float *f305a0da9c; // 0x68(0x04)
	bool *3ec553f143; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float *6464924c2d; // 0x70(0x04)
	bool *186a57fb15; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector2D *82a21a555c; // 0x78(0x08)
	struct U*226eb62c2c* *5955bd0aa9; // 0x80(0x08)
	bool *ba29c72e1e; // 0x88(0x01)
	char pad_89[0xf]; // 0x89(0x0f)
};

// ScriptStruct TslGame.*caf7fe5826
// Size: 0x68 (Inherited: 0x00)
struct F*caf7fe5826 {
	struct FName *8544f8eb37; // 0x00(0x08)
	float *b26e73e532; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName *ce6882612d; // 0x10(0x08)
	float *1a8d0fa0dd; // 0x18(0x04)
	float *3d06ea16d3; // 0x1c(0x04)
	struct UCurveFloat* CurveEngineOn; // 0x20(0x08)
	struct UCurveFloat* CurveEngineOff; // 0x28(0x08)
	float EngineSwitchMaxTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName HeadLightIntensityParamName; // 0x38(0x08)
	float HeadLightIntensity_Mat; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FName TailLightIntensityParamName; // 0x48(0x08)
	float TailLightIntensity_Mat; // 0x50(0x04)
	bool bTickIndicatorSpeedText; // 0x54(0x01)
	bool bTickIndicatorGearText; // 0x55(0x01)
	bool bTickIndicatorHealth; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FName TextRenderIntensityParameterName; // 0x58(0x08)
	struct FName HealthStateParameterName; // 0x60(0x08)
};

// ScriptStruct TslGame.*ed34cebb44
// Size: 0x130 (Inherited: 0x00)
struct F*ed34cebb44 {
	bool *f8a7cc87dd; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *09bc1391cd; // 0x04(0x04)
	float *70e26779f5; // 0x08(0x04)
	float *46858b2999; // 0x0c(0x04)
	float *04f62dca57; // 0x10(0x04)
	struct FFloatRange *75790b9622; // 0x14(0x10)
	float *d8939878a7; // 0x24(0x04)
	float *1bd922b1e1; // 0x28(0x04)
	float *d5402383ea; // 0x2c(0x04)
	float *2b451e99a1; // 0x30(0x04)
	int32 *c0d92dc6cf; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct TMap<enum class EPhysicalSurface, struct F*edfd17b241> *2f700ceec2; // 0x40(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*edfd17b241> *0f4594443d; // 0x90(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*88a612a0cc> *8b9a9bf60b; // 0xe0(0x50)
};

// ScriptStruct TslGame.*88a612a0cc
// Size: 0x28 (Inherited: 0x00)
struct F*88a612a0cc {
	char pad_0[0x18]; // 0x00(0x18)
	struct UAkComponent* *899b6ab549; // 0x18(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x20(0x08)
};

// ScriptStruct TslGame.*edfd17b241
// Size: 0x10 (Inherited: 0x00)
struct F*edfd17b241 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*d26781d533
// Size: 0x28 (Inherited: 0x00)
struct F*d26781d533 {
	char pad_0[0x18]; // 0x00(0x18)
	struct USceneComponent* *02788983e3; // 0x18(0x08)
	struct USceneComponent* *be2c4c8459; // 0x20(0x08)
};

// ScriptStruct TslGame.*2548f355d6
// Size: 0x28 (Inherited: 0x00)
struct F*2548f355d6 {
	int32 *25dd18cb38; // 0x00(0x04)
	float *d9d33f091c; // 0x04(0x04)
	float *8115cbe10d; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *3d532886ce; // 0x10(0x08)
	struct UCurveFloat* *5694b9f862; // 0x18(0x08)
	struct UClass* *f23bfe8a1c; // 0x20(0x08)
};

// ScriptStruct TslGame.*ec8e22c2a9
// Size: 0x10 (Inherited: 0x00)
struct F*ec8e22c2a9 {
	struct FName *f9817b0373; // 0x00(0x08)
	struct FName *fd7d4ea8bb; // 0x08(0x08)
};

// ScriptStruct TslGame.*26fbe3855e
// Size: 0x70 (Inherited: 0x00)
struct F*26fbe3855e {
	struct FTransform PlantingTransform; // 0x00(0x30)
	struct FTransform EffectTransform; // 0x30(0x30)
	struct FLinearColor EffectColor; // 0x60(0x10)
};

// ScriptStruct TslGame.TslWeaponDisplayDataRow
// Size: 0x10 (Inherited: 0x08)
struct FTslWeaponDisplayDataRow : FTableRowBase {
	float DefaultScale; // 0x08(0x04)
	float ZoomScale; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1c6f2fa2ab
// Size: 0x20 (Inherited: 0x00)
struct F*1c6f2fa2ab {
	struct FString ItemID; // 0x00(0x10)
	struct FString SkinId; // 0x10(0x10)
};

// ScriptStruct TslGame.*24df8ee7bb
// Size: 0x30 (Inherited: 0x00)
struct F*24df8ee7bb {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*cc3a03e87e LocalWeatherSetting; // 0x08(0x28)
};

// ScriptStruct TslGame.*cc3a03e87e
// Size: 0x28 (Inherited: 0x00)
struct F*cc3a03e87e {
	float FogDensity; // 0x00(0x04)
	struct FLinearColor FogColor; // 0x04(0x10)
	float FogStartDistance; // 0x14(0x04)
	float VolFogExtinctionScale; // 0x18(0x04)
	float WeatherParticleSpawnScale; // 0x1c(0x04)
	char bUseWetEffectWithSpawnScale : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float SoundScale; // 0x24(0x04)
};

// ScriptStruct TslGame.*4ae4809a18
// Size: 0x10 (Inherited: 0x00)
struct F*4ae4809a18 {
	float DirectionalLightIntensity; // 0x00(0x04)
	float DirectionalLightTemperature; // 0x04(0x04)
	float DirectionalLightVolumetricScattering; // 0x08(0x04)
	float SkyLightIntensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*93c43ffb12
// Size: 0x68 (Inherited: 0x00)
struct F*93c43ffb12 {
	struct FString WeatherName; // 0x00(0x10)
	struct ATslDynamicWeather* DynamicWeather; // 0x10(0x08)
	float Weight; // 0x18(0x04)
	float DirectionalLightIntensity; // 0x1c(0x04)
	float DirectionalLightTemperature; // 0x20(0x04)
	float DirectionalLightVolumetricScattering; // 0x24(0x04)
	float SkyLightIntensity; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UTextureCube* SkyLightCubemap; // 0x30(0x08)
	float SkyLightCubemapAngle; // 0x38(0x04)
	float SkyLightCubemapResolution; // 0x3c(0x04)
	char bUseBlendSkyBox : 1; // 0x40(0x01)
	char bRefreshLightSetting : 1; // 0x40(0x01)
	char bOverrideDurationTime : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float OverrideDurationTimeMin; // 0x44(0x04)
	float OverrideDurationTimeMax; // 0x48(0x04)
	char bUseDistanceDepthBlur : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float DepthBlurIntensity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UCurveFloat* DepthBlurCurveAsset; // 0x58(0x08)
	char bClearFootprints : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.*7873d585b7
// Size: 0x1c (Inherited: 0x00)
struct F*7873d585b7 {
	bool *347c814389; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *dc97520232; // 0x04(0x04)
	float *2f4276a50a; // 0x08(0x04)
	float *5681fa28a0; // 0x0c(0x04)
	float *05da93a23f; // 0x10(0x04)
	float *da2960c97c; // 0x14(0x04)
	bool *0d6b518c1a; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct TslGame.*11e2f3bd7b
// Size: 0x30 (Inherited: 0x00)
struct F*11e2f3bd7b {
	struct UAkAudioEvent* *919b248ad2; // 0x00(0x08)
	struct UAkAudioEvent* *627faa1164; // 0x08(0x08)
	float *3251bf3218; // 0x10(0x04)
	float *97371ef122; // 0x14(0x04)
	struct FString *21b338c7b8; // 0x18(0x10)
	float *dcae61dec0; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*021255a0fc
// Size: 0x30 (Inherited: 0x00)
struct F*021255a0fc {
	float *4b788dd144; // 0x00(0x04)
	struct FVector2D *6275f8dc48; // 0x04(0x08)
	struct FVector2D *529db2ccee; // 0x0c(0x08)
	float *081759173f; // 0x14(0x04)
	float *dedceb9bd7; // 0x18(0x04)
	float *7fca5de4e6; // 0x1c(0x04)
	struct FVector2D *6a1b864ffb; // 0x20(0x08)
	struct FVector2D *5bf91d51fe; // 0x28(0x08)
};

// ScriptStruct TslGame.*f0f00e05c7
// Size: 0x10 (Inherited: 0x00)
struct F*f0f00e05c7 {
	bool *380d66ba2d; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct TslGame.*96e52da178
// Size: 0x58 (Inherited: 0x00)
struct F*96e52da178 {
	float *878d350cff; // 0x00(0x04)
	float *46e6d4b2df; // 0x04(0x04)
	struct FVector2D *c5a5b748e5; // 0x08(0x08)
	struct FVector2D *b9a9a13fcf; // 0x10(0x08)
	struct FVector2D *3211c7ecc3; // 0x18(0x08)
	struct FVector2D *a20b96e0ff; // 0x20(0x08)
	struct FVector2D *300885b34f; // 0x28(0x08)
	struct FVector2D *62c9b95375; // 0x30(0x08)
	struct FVector2D *08b379f1b8; // 0x38(0x08)
	float *bb845813dd; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UAnimMontage* *5b80653703; // 0x48(0x08)
	float *4935a2d0f4; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*31ae37af6e
// Size: 0x14 (Inherited: 0x00)
struct F*31ae37af6e {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*094b253087
// Size: 0x40 (Inherited: 0x00)
struct F*094b253087 {
	float *d3af652b5d; // 0x00(0x04)
	float *ce9404e6c4; // 0x04(0x04)
	float *31d6846705; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *4b9b78b510; // 0x10(0x08)
	float *de5256e0c3; // 0x18(0x04)
	float *cdf267c0bd; // 0x1c(0x04)
	float *b304828d28; // 0x20(0x04)
	float *f47516cfb0; // 0x24(0x04)
	struct FVector2D *ebef2152b5; // 0x28(0x08)
	struct FVector2D *ab5d0873ef; // 0x30(0x08)
	float *8e6dcc9855; // 0x38(0x04)
	float *c14c81af06; // 0x3c(0x04)
};

// ScriptStruct TslGame.*42f508378f
// Size: 0x14 (Inherited: 0x14)
struct F*42f508378f : F*d0fda4b5b6 {
};

// ScriptStruct TslGame.*d0fda4b5b6
// Size: 0x14 (Inherited: 0x00)
struct F*d0fda4b5b6 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*59f93cc7d9
// Size: 0x14 (Inherited: 0x14)
struct F*59f93cc7d9 : F*d0fda4b5b6 {
};

// ScriptStruct TslGame.*c5f693461c
// Size: 0x1c (Inherited: 0x14)
struct F*c5f693461c : F*d0fda4b5b6 {
	char pad_14[0x8]; // 0x14(0x08)
};

// ScriptStruct TslGame.*066ab9085f
// Size: 0x10 (Inherited: 0x00)
struct F*066ab9085f {
	struct UAnimSequence* TransitionSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*d1560293a7
// Size: 0x30 (Inherited: 0x00)
struct F*d1560293a7 {
	struct USkeletalMesh* *0168052800; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *29f5a4d1d5; // 0x20(0x10)
};

// ScriptStruct TslGame.*8fc4ae6ea5
// Size: 0x18 (Inherited: 0x00)
struct F*8fc4ae6ea5 {
	struct USkeletalMesh* *e32c1d4761; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *fd88f37089; // 0x08(0x10)
};

// ScriptStruct TslGame.*1b583cae79
// Size: 0x38 (Inherited: 0x00)
struct F*1b583cae79 {
	struct TArray<struct F*b222c70dcd> StartParticleList; // 0x00(0x10)
	struct TArray<struct F*b222c70dcd> FinishParticleList; // 0x10(0x10)
	struct F*d1f8d18748 OverrideMaterial; // 0x20(0x18)
};

// ScriptStruct TslGame.*d1f8d18748
// Size: 0x18 (Inherited: 0x00)
struct F*d1f8d18748 {
	enum class *ebe673c122 SkinApplicationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*3fcbffb0f2> SkinMaterials; // 0x08(0x10)
};

// ScriptStruct TslGame.*3fcbffb0f2
// Size: 0x30 (Inherited: 0x00)
struct F*3fcbffb0f2 {
	struct FName MaterialSlotName; // 0x00(0x08)
	int32 MaterialSlotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInstance* MaterialInstance; // 0x10(0x20)
};

// ScriptStruct TslGame.*b222c70dcd
// Size: 0x20 (Inherited: 0x00)
struct F*b222c70dcd {
	struct TArray<struct FName> AttachSocketCandidates; // 0x00(0x10)
	struct FStringClassReference ParticleClass; // 0x10(0x10)
};

// ScriptStruct TslGame.*95404deeb7
// Size: 0x18 (Inherited: 0x08)
struct F*95404deeb7 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*6fd5c5f728
// Size: 0x50 (Inherited: 0x00)
struct F*6fd5c5f728 {
	struct TMap<enum class EPhysicalSurface, float> *2ce2eaa7d1; // 0x00(0x50)
};

// ScriptStruct TslGame.*1c406892c5
// Size: 0x08 (Inherited: 0x00)
struct F*1c406892c5 {
	float *4fcf243c76; // 0x00(0x04)
	float *d24be023d9; // 0x04(0x04)
};

// ScriptStruct TslGame.*6ebab05e02
// Size: 0x28 (Inherited: 0x00)
struct F*6ebab05e02 {
	bool AtlasIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UClass*> WheelTypes; // 0x08(0x10)
	struct TArray<struct UClass*> ExemptedWheelTypes; // 0x18(0x10)
};

// ScriptStruct TslGame.*64b8596e55
// Size: 0x60 (Inherited: 0x00)
struct F*64b8596e55 {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct UAkAudioEvent* *3a10e0be7a; // 0x40(0x08)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x48(0x08)
	float *7c222a7a0b; // 0x50(0x04)
	enum class *f1e85ae637 IndoorOutdoorMask; // 0x54(0x01)
	char LightingChannel1 : 1; // 0x55(0x01)
	char pad_55_1 : 7; // 0x55(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FName CollisionProfileName; // 0x58(0x08)
};

// ScriptStruct TslGame.*988298836b
// Size: 0x48 (Inherited: 0x08)
struct F*988298836b : FTableRowBase {
	struct UTexture* Icon; // 0x08(0x20)
	struct F*2ebc54c01b AbilityAttribute; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName AbilityID; // 0x38(0x08)
	struct UClass* AbilityClass; // 0x40(0x08)
};

// ScriptStruct TslGame.*2ebc54c01b
// Size: 0x0c (Inherited: 0x00)
struct F*2ebc54c01b {
	float Distance; // 0x00(0x04)
	float Angle; // 0x04(0x04)
	char UsingDir : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	bool bStopMove; // 0x09(0x01)
	bool bTrace; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct TslGame.AnimNode_LocomotionBSPlayer
// Size: 0x140 (Inherited: 0x58)
struct FAnimNode_LocomotionBSPlayer : FAnimNode_AssetPlayerBase {
	float NodeSpeed; // 0x58(0x04)
	float Dir; // 0x5c(0x04)
	enum class EAnimStance AnimStance; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct U*abedad4c9f* AnimDB; // 0x68(0x08)
	bool bIsSprinting; // 0x70(0x01)
	bool bIsRelaxed; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float PlayRate; // 0x74(0x04)
	bool bLoop; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float StartPosition; // 0x7c(0x04)
	struct UBlendSpaceBase* BlendSpace; // 0x80(0x08)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FBlendFilter BlendFilter; // 0x90(0x90)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x120(0x10)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0x130(0x08)
	float Speed; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct TslGame.TslAnimNode_AimOffsets
// Size: 0xb0 (Inherited: 0x58)
struct FTslAnimNode_AimOffsets : FAnimNode_AssetPlayerBase {
	struct U*4ea5d6c53e* AnimDBMap; // 0x58(0x08)
	struct U*4ea5d6c53e* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslAimOffsetsNodeBlendSpaceData> BlendSpacesData; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	float X; // 0x90(0x04)
	float Y; // 0x94(0x04)
	float NormalizedTime; // 0x98(0x04)
	char pad_9C[0x8]; // 0x9c(0x08)
	enum class EAnimStance Stance; // 0xa4(0x01)
	bool bRelaxed; // 0xa5(0x01)
	enum class EWeaponClass WeaponClass; // 0xa6(0x01)
	enum class EAnimWeaponSpecificClass AnimWeaponSpecificClass; // 0xa7(0x01)
	enum class EAlphaBlendOption BlendType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct TslGame.TslAimOffsetsNodeBlendSpaceData
// Size: 0xc8 (Inherited: 0x00)
struct FTslAimOffsetsNodeBlendSpaceData {
	struct UBlendSpace* BlendSpace; // 0x00(0x08)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x08(0x10)
	char pad_18[0xb0]; // 0x18(0xb0)
};

// ScriptStruct TslGame.TslAnimNode_BlendPerBoneBase
// Size: 0x128 (Inherited: 0x30)
struct FTslAnimNode_BlendPerBoneBase : FAnimNode_Base {
	char pad_30[0x4]; // 0x30(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x34(0x01)
	bool bAlphaBoolEnabled; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Alpha; // 0x38(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x48(0x50)
	struct FName AlphaCurveName; // 0x98(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xa0(0x30)
	int32 LODThreshold; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<float> PerBoneBlendWeights; // 0xd8(0x10)
	struct FGuid SkeletonGuid; // 0xe8(0x10)
	struct FGuid VirtualBoneGuid; // 0xf8(0x10)
	char pad_108[0x20]; // 0x108(0x20)
};

// ScriptStruct TslGame.BlendBoneSettings
// Size: 0x20 (Inherited: 0x00)
struct FBlendBoneSettings {
	struct FBoneReference Bone; // 0x00(0x18)
	float Weight; // 0x18(0x04)
	bool bPropagateToChildren; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.TslAnimNode_ApplyAdditivePerBone
// Size: 0x168 (Inherited: 0x158)
struct FTslAnimNode_ApplyAdditivePerBone : FTslAnimNode_ApplyAdditivePerBoneBase {
	struct TArray<struct FBlendBoneSettings> OverrideBones; // 0x158(0x10)
};

// ScriptStruct TslGame.TslAnimNode_ApplyAdditivePerBoneBase
// Size: 0x158 (Inherited: 0x128)
struct FTslAnimNode_ApplyAdditivePerBoneBase : FTslAnimNode_BlendPerBoneBase {
	struct FPoseLink Base; // 0x128(0x18)
	struct FPoseLink Additive; // 0x140(0x18)
};

// ScriptStruct TslGame.TslAnimNode_ApplyAdditiveExcludeBones
// Size: 0x168 (Inherited: 0x158)
struct FTslAnimNode_ApplyAdditiveExcludeBones : FTslAnimNode_ApplyAdditivePerBoneBase {
	struct TArray<struct FExcludeBoneSettings> ExcludeBones; // 0x158(0x10)
};

// ScriptStruct TslGame.ExcludeBoneSettings
// Size: 0x20 (Inherited: 0x00)
struct FExcludeBoneSettings {
	struct FBoneReference Bone; // 0x00(0x18)
	bool bPropagateToChildren; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.TslAnimNode_BlendListBlendSpace
// Size: 0xb8 (Inherited: 0x58)
struct FTslAnimNode_BlendListBlendSpace : FAnimNode_AssetPlayerBase {
	float X; // 0x58(0x04)
	float Y; // 0x5c(0x04)
	struct UCurveFloat* CustomBlendCurve; // 0x60(0x08)
	struct UBlendSpace* LastActiveBlendSpace; // 0x68(0x08)
	struct TArray<struct UBlendSpace*> BlendSpace; // 0x70(0x10)
	struct TArray<float> BlendTime; // 0x80(0x10)
	struct TArray<struct FTslBlendSpaceBlendData> BlendSpaceData; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)
	float PlayRate; // 0xb0(0x04)
	bool bLoop; // 0xb4(0x01)
	enum class EAlphaBlendOption BlendType; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
};

// ScriptStruct TslGame.TslBlendSpaceBlendData
// Size: 0xd0 (Inherited: 0x00)
struct FTslBlendSpaceBlendData {
	struct UBlendSpace* BlendSpace; // 0x00(0x08)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x08(0x10)
	char pad_18[0xb8]; // 0x18(0xb8)
};

// ScriptStruct TslGame.TslAnimNode_BlendListBlendSpaceByEnum
// Size: 0xd0 (Inherited: 0xb8)
struct FTslAnimNode_BlendListBlendSpaceByEnum : FTslAnimNode_BlendListBlendSpace {
	struct TArray<bool> EnumToPoseIndex; // 0xb8(0x10)
	char pad_C8[0x5]; // 0xc8(0x05)
	bool ActiveEnumValue; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
};

// ScriptStruct TslGame.TslAnimNode_BlendEvaluatorBlendSpaceByEnum
// Size: 0xd8 (Inherited: 0xd0)
struct FTslAnimNode_BlendEvaluatorBlendSpaceByEnum : FTslAnimNode_BlendListBlendSpaceByEnum {
	float NormalizedTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct TslGame.TslAnimNode_BlendListRandom
// Size: 0x120 (Inherited: 0xc8)
struct FTslAnimNode_BlendListRandom : FAnimNode_BlendListBase {
	int32 ActiveChildIndex; // 0xc8(0x04)
	enum class ERandomType RandomType; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct TArray<struct FBlendPosePlayInfo> PlayChances; // 0xd0(0x10)
	struct TArray<int32> PlayList; // 0xe0(0x10)
	int32 LoopingCounter; // 0xf0(0x04)
	float RandomPlayTime; // 0xf4(0x04)
	float RandomAccumlateTime; // 0xf8(0x04)
	struct FRandomStream RandomStream; // 0xfc(0x08)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<float> NormalizedPlayChances; // 0x108(0x10)
	float LastChildAssetTime; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct TslGame.BlendPosePlayInfo
// Size: 0x24 (Inherited: 0x00)
struct FBlendPosePlayInfo {
	float PlayChance; // 0x00(0x04)
	struct FInt32Range LoopingCounter; // 0x04(0x10)
	struct FFloatRange RandomPlayTime; // 0x14(0x10)
};

// ScriptStruct TslGame.TslAnimNode_BlendPerBone
// Size: 0x188 (Inherited: 0x128)
struct FTslAnimNode_BlendPerBone : FTslAnimNode_BlendPerBoneBase {
	struct TArray<struct FBlendBoneSettings> OverrideBones; // 0x128(0x10)
	struct FPoseLink BasePose; // 0x138(0x18)
	struct FPoseLink BlendPose; // 0x150(0x18)
	struct FBoneReference BlendBone; // 0x168(0x18)
	bool bMeshSpaceRotationBlend; // 0x180(0x01)
	bool bKeepBlendBonePosition; // 0x181(0x01)
	enum class *25bebd741c CurveBlendOption; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
};

// ScriptStruct TslGame.TslAnimNode_BlendSequencesByBool
// Size: 0xb0 (Inherited: 0x58)
struct FTslAnimNode_BlendSequencesByBool : FAnimNode_AssetPlayerBase {
	bool ActiveValue; // 0x58(0x01)
	enum class EAlphaBlendOption BlendType; // 0x59(0x01)
	bool bLooping; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	enum class EBlendSequenceByBoolStartType StartType; // 0x5c(0x04)
	struct TArray<struct FTslBlendSequencesByBoolAnimationData> SequencesData; // 0x60(0x10)
	struct UAnimSequence* TrueSequence; // 0x70(0x08)
	struct UAnimSequence* FalseSequence; // 0x78(0x08)
	struct UAnimSequence* LastActiveSequence; // 0x80(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)
	float TrueBlendTime; // 0xa0(0x04)
	float FalseBlendTime; // 0xa4(0x04)
	float TruePlayRate; // 0xa8(0x04)
	float FalsePlayRate; // 0xac(0x04)
};

// ScriptStruct TslGame.TslBlendSequencesByBoolAnimationData
// Size: 0x30 (Inherited: 0x00)
struct FTslBlendSequencesByBoolAnimationData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct TslGame.TslAnimNode_BonesLookAtEachOther
// Size: 0x118 (Inherited: 0xf8)
struct FTslAnimNode_BonesLookAtEachOther : FAnimNode_SkeletalControlBase {
	struct TArray<struct FTslBonesLookAtEachOtherSettings> Bones; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)
};

// ScriptStruct TslGame.TslBonesLookAtEachOtherSettings
// Size: 0x58 (Inherited: 0x00)
struct FTslBonesLookAtEachOtherSettings {
	struct FBoneReference Bone1; // 0x00(0x18)
	struct FBoneReference Bone2; // 0x18(0x18)
	struct FAxis LookAt_Axis; // 0x30(0x10)
	struct FAxis LookUp_Axis; // 0x40(0x10)
	bool bUseLookUpAxis; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.TslAnimNode_BranchByBool
// Size: 0x68 (Inherited: 0x30)
struct FTslAnimNode_BranchByBool : FAnimNode_Base {
	bool ActiveValue; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FPoseLink TruePose; // 0x38(0x18)
	struct FPoseLink FalsePose; // 0x50(0x18)
};

// ScriptStruct TslGame.TslAnimNode_CCDIK
// Size: 0x1c0 (Inherited: 0xf8)
struct FTslAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct FVector EffectorLocation; // 0xf8(0x0c)
	enum class *4c02c9923e EffectorLocationSpace; // 0x104(0x01)
	char pad_105[0xb]; // 0x105(0x0b)
	struct FBoneSocketTarget EffectorTarget; // 0x110(0x60)
	struct FBoneReference TipBone; // 0x170(0x18)
	struct FBoneReference RootBone; // 0x188(0x18)
	float Precision; // 0x1a0(0x04)
	int32 MaxIterations; // 0x1a4(0x04)
	bool bStartFromTail; // 0x1a8(0x01)
	bool bEnableRotationLimit; // 0x1a9(0x01)
	char pad_1AA[0x6]; // 0x1aa(0x06)
	struct TArray<struct FCCDIKJointSettings> RotationLimitPerJoints; // 0x1b0(0x10)
};

// ScriptStruct TslGame.CCDIKJointSettings
// Size: 0x1c (Inherited: 0x00)
struct FCCDIKJointSettings {
	float MaxConeAngle; // 0x00(0x04)
	float MaxAngleX; // 0x04(0x04)
	float MinAngleX; // 0x08(0x04)
	float MaxAngleY; // 0x0c(0x04)
	float MinAngleY; // 0x10(0x04)
	float MaxAngleZ; // 0x14(0x04)
	float MinAngleZ; // 0x18(0x04)
};

// ScriptStruct TslGame.TslAnimNode_CopyBones
// Size: 0x118 (Inherited: 0xf8)
struct FTslAnimNode_CopyBones : FAnimNode_SkeletalControlBase {
	struct TArray<struct FTslCopyBoneSettings> Bones; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)
};

// ScriptStruct TslGame.TslCopyBoneSettings
// Size: 0x38 (Inherited: 0x00)
struct FTslCopyBoneSettings {
	struct FBoneReference SourceBone; // 0x00(0x18)
	struct FBoneReference TargetBone; // 0x18(0x18)
	bool bCopyTranslation; // 0x30(0x01)
	bool bCopyRotation; // 0x31(0x01)
	bool bCopyScale; // 0x32(0x01)
	enum class *4c02c9923e ControlSpace; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.TslAnimNode_CustomAnimSequence
// Size: 0x90 (Inherited: 0x70)
struct FTslAnimNode_CustomAnimSequence : FAnimNode_SequencePlayer {
	struct U*3064612971* AnimDataAsset; // 0x70(0x08)
	struct FName AnimName; // 0x78(0x08)
	struct FName AltAnimName; // 0x80(0x08)
	int32 AnimationIndex; // 0x88(0x04)
	enum class ECustomAnimDataType CustomAnimDataType; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// ScriptStruct TslGame.TslAnimNode_FabrikElbow
// Size: 0x1b0 (Inherited: 0xf8)
struct FTslAnimNode_FabrikElbow : FAnimNode_SkeletalControlBase {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform EffectorTransform; // 0x100(0x30)
	enum class *4c02c9923e EffectorTransformSpace; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FBoneReference EffectorTransformBone; // 0x138(0x18)
	enum class *7be84fcd7b EffectorRotationSource; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FBoneReference TipBone; // 0x158(0x18)
	struct FBoneReference RootBone; // 0x170(0x18)
	struct FBoneReference ElbowBone; // 0x188(0x18)
	float ElbowInterpCoef; // 0x1a0(0x04)
	float Precision; // 0x1a4(0x04)
	int32 MaxIterations; // 0x1a8(0x04)
	bool bEnableDebugDraw; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
};

// ScriptStruct TslGame.TslAnimNode_Falling
// Size: 0xa0 (Inherited: 0x58)
struct FTslAnimNode_Falling : FAnimNode_AssetPlayerBase {
	struct U*4ea5d6c53e* AnimDBMap; // 0x58(0x08)
	struct U*4ea5d6c53e* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslFallingNodeAnimationData> BlendSpacesData; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	float X; // 0x90(0x04)
	float BlendTime; // 0x94(0x04)
	char pad_98[0x4]; // 0x98(0x04)
	enum class EWeaponClass WeaponClass; // 0x9c(0x01)
	enum class EAlphaBlendOption BlendType; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
};

// ScriptStruct TslGame.TslFallingNodeAnimationData
// Size: 0xd0 (Inherited: 0x00)
struct FTslFallingNodeAnimationData {
	struct UBlendSpace1D* BlendSpace; // 0x00(0x08)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x08(0x10)
	char pad_18[0xb8]; // 0x18(0xb8)
};

// ScriptStruct TslGame.TslAnimNode_Healing
// Size: 0x80 (Inherited: 0x30)
struct FTslAnimNode_Healing : FAnimNode_Base {
	struct U*4ea5d6c53e* AnimDBMap; // 0x30(0x08)
	struct U*4ea5d6c53e* PrevAnimDBMap; // 0x38(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x40(0x08)
	struct TArray<struct FTslHealingSequenceData> SequencesData; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)
	float PlayRate; // 0x70(0x04)
	float BlendTime; // 0x74(0x04)
	enum class EAlphaBlendOption BlendType; // 0x78(0x01)
	enum class ECastAnim CurrentItem; // 0x79(0x01)
	bool IsParentControl; // 0x7a(0x01)
	enum class EAnimStance Stance; // 0x7b(0x01)
	bool IsFPP; // 0x7c(0x01)
	bool Looping; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// ScriptStruct TslGame.TslHealingSequenceData
// Size: 0x28 (Inherited: 0x00)
struct FTslHealingSequenceData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct TslGame.TslAnimNode_Idles
// Size: 0xa8 (Inherited: 0x58)
struct FTslAnimNode_Idles : FAnimNode_AssetPlayerBase {
	struct U*4ea5d6c53e* AnimDBMap; // 0x58(0x08)
	struct U*4ea5d6c53e* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslIdlesNodeAnimationData> SequencesData; // 0x70(0x10)
	char pad_80[0x18]; // 0x80(0x18)
	float PlayRate; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	enum class EAnimStance Stance; // 0xa0(0x01)
	enum class EWeaponClass WeaponClass; // 0xa1(0x01)
	bool Relaxed; // 0xa2(0x01)
	enum class EAlphaBlendOption BlendType; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.TslIdlesNodeAnimationData
// Size: 0x38 (Inherited: 0x00)
struct FTslIdlesNodeAnimationData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct TslGame.TslAnimNode_JumpStart
// Size: 0xb8 (Inherited: 0x58)
struct FTslAnimNode_JumpStart : FAnimNode_AssetPlayerBase {
	struct U*4ea5d6c53e* AnimDBMap; // 0x58(0x08)
	struct U*4ea5d6c53e* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslJumpStartNodeAnimationData> SequencesData; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	struct FVector Velocity; // 0x90(0x0c)
	float Yaw; // 0x9c(0x04)
	float JumpHeight; // 0xa0(0x04)
	float BlendTime; // 0xa4(0x04)
	float BackwardAngleThreshold; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	enum class EWeaponClass WeaponClass; // 0xb0(0x01)
	bool bRelaxed; // 0xb1(0x01)
	bool bIsLocalPlayer; // 0xb2(0x01)
	enum class EAlphaBlendOption BlendType; // 0xb3(0x01)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.TslJumpStartNodeAnimationData
// Size: 0x40 (Inherited: 0x00)
struct FTslJumpStartNodeAnimationData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct TslGame.TslAnimNode_LobbyAnimSequence
// Size: 0x100 (Inherited: 0x70)
struct FTslAnimNode_LobbyAnimSequence : FAnimNode_SequencePlayer {
	struct FLobbyCharacterAnimationDataRow CurrentAnimData; // 0x70(0x80)
	struct UAnimSequenceBase* LobbySequence; // 0xf0(0x08)
	int32 LobbyCharacterPosition; // 0xf8(0x04)
	enum class ELobbyCharacterReadyType ReadyType; // 0xfc(0x01)
	enum class EWeaponClass LastLobbyAnimationClass; // 0xfd(0x01)
	bool bPlayingDefaultAnim; // 0xfe(0x01)
	bool bPlayNextAnim; // 0xff(0x01)
};

// ScriptStruct TslGame.LobbyCharacterAnimationDataRow
// Size: 0x80 (Inherited: 0x08)
struct FLobbyCharacterAnimationDataRow : FTableRowBase {
	enum class ELobbyCharacterPosition Poisition; // 0x08(0x01)
	enum class ELobbyCharacterReadyType State; // 0x09(0x01)
	bool bDefaultAnimation; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float CycleTimes; // 0x0c(0x04)
	struct UAnimSequenceBase* UnArmed; // 0x10(0x08)
	struct UAnimSequenceBase* Pistol; // 0x18(0x08)
	struct UAnimSequenceBase* SMG; // 0x20(0x08)
	struct UAnimSequenceBase* Rifle; // 0x28(0x08)
	struct UAnimSequenceBase* Carbine; // 0x30(0x08)
	struct UAnimSequenceBase* Shotgun; // 0x38(0x08)
	struct UAnimSequenceBase* Sniper; // 0x40(0x08)
	struct UAnimSequenceBase* DMR; // 0x48(0x08)
	struct UAnimSequenceBase* LMG; // 0x50(0x08)
	struct UAnimSequenceBase* Melee; // 0x58(0x08)
	struct UAnimSequenceBase* Throwable; // 0x60(0x08)
	struct UAnimSequenceBase* Shield; // 0x68(0x08)
	struct UAnimSequenceBase* crossbow; // 0x70(0x08)
	struct UAnimSequenceBase* Launcher; // 0x78(0x08)
};

// ScriptStruct TslGame.TslAnimNode_PlayIdleSequence
// Size: 0xd0 (Inherited: 0x58)
struct FTslAnimNode_PlayIdleSequence : FAnimNode_AssetPlayerBase {
	struct U*daa1e59061* ParentInstance; // 0x58(0x08)
	struct U*abedad4c9f* AnimDB; // 0x60(0x08)
	float BlendTime; // 0x68(0x04)
	float PlayRate; // 0x6c(0x04)
	float IdleTriggerTimeMin; // 0x70(0x04)
	float IdleTriggerTimeVariation; // 0x74(0x04)
	bool bIsFPP; // 0x78(0x01)
	bool bIsCold; // 0x79(0x01)
	enum class EAnimStance Stance; // 0x7a(0x01)
	char pad_7B[0x5]; // 0x7b(0x05)
	struct FSequenceData ActiveSequence; // 0x80(0x10)
	struct FSequenceData PreviousSequence; // 0x90(0x10)
	char pad_A0[0x30]; // 0xa0(0x30)
};

// ScriptStruct TslGame.SequenceData
// Size: 0x10 (Inherited: 0x00)
struct FSequenceData {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float AccumulatedTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.TslAnimNode_RotateBones
// Size: 0xd0 (Inherited: 0x30)
struct FTslAnimNode_RotateBones : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct TArray<struct FName> Bone; // 0x48(0x10)
	struct TArray<enum class ERotateBoneSpace> Space; // 0x58(0x10)
	struct TArray<enum class EAxis> Axis; // 0x68(0x10)
	struct TArray<float> Angle; // 0x78(0x10)
	struct TArray<struct FRotator> Rotator; // 0x88(0x10)
	struct TArray<float> Alpha; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)
	enum class ERotateBoneInputType InputType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct TslGame.TslAnimNode_RotateRootBone
// Size: 0x68 (Inherited: 0x30)
struct FTslAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
	float Yaw; // 0x58(0x04)
	float Pitch; // 0x5c(0x04)
	bool bKeepChildTransforms; // 0x60(0x01)
	bool bInvert; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct TslGame.TslAnimNode_SequenceEvaluatorWithBlending
// Size: 0xa0 (Inherited: 0x58)
struct FTslAnimNode_SequenceEvaluatorWithBlending : FAnimNode_AssetPlayerBase {
	struct UAnimSequence* Sequence; // 0x58(0x08)
	struct UAnimSequence* PrevSequence; // 0x60(0x08)
	struct TArray<struct FTslSequenceBlending> SequencesData; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	float ExplicitTime; // 0x88(0x04)
	float BlendTime; // 0x8c(0x04)
	enum class EAlphaBlendOption BlendType; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UCurveFloat* CustomBlendCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.TslSequenceBlending
// Size: 0x30 (Inherited: 0x00)
struct FTslSequenceBlending {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct TslGame.TslAnimNode_Slot
// Size: 0x78 (Inherited: 0x70)
struct FTslAnimNode_Slot : FAnimNode_Slot {
	float Alpha; // 0x70(0x04)
	enum class ECustomAnimSlotType SlotType; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct TslGame.TslAnimNode_SlotByEnum
// Size: 0x1a8 (Inherited: 0x30)
struct FTslAnimNode_SlotByEnum : FAnimNode_Base {
	struct FPoseLink Source; // 0x30(0x18)
	bool ActiveEnumValue; // 0x48(0x01)
	enum class EAlphaBlendOption BlendType; // 0x49(0x01)
	char pad_4A[0x26]; // 0x4a(0x26)
	struct TArray<struct FName> Slot; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	struct TArray<float> BlendTime; // 0x90(0x10)
	struct TArray<int32> EnumToSlotIndex; // 0xa0(0x10)
	struct UCurveFloat* CustomBlendCurve; // 0xb0(0x08)
	char pad_B8[0x4]; // 0xb8(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0xbc(0x01)
	bool bAlphaBoolEnabled; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	float Alpha; // 0xc0(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0xd0(0x50)
	struct FName AlphaCurveName; // 0x120(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x128(0x30)
	char pad_158[0x50]; // 0x158(0x50)
};

// ScriptStruct TslGame.TslAnimNode_SlotByWeapon
// Size: 0x118 (Inherited: 0x70)
struct FTslAnimNode_SlotByWeapon : FAnimNode_Slot {
	float Alpha; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TMap<enum class EAnimWeaponType, struct FName> SlotNames; // 0x78(0x50)
	enum class EAnimWeaponType InWeapon; // 0xc8(0x01)
	char pad_C9[0x4f]; // 0xc9(0x4f)
};

// ScriptStruct TslGame.*2ef56e4d9d
// Size: 0x18 (Inherited: 0x08)
struct F*2ef56e4d9d : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	struct UClass* *1a9c31d4c1; // 0x10(0x08)
};

// ScriptStruct TslGame.*cd3fe03e99
// Size: 0x18 (Inherited: 0x08)
struct F*cd3fe03e99 : FTableRowBase {
	struct TArray<struct FName> ItemIDs; // 0x08(0x10)
};

// ScriptStruct TslGame.*d441a4acc2
// Size: 0x28 (Inherited: 0x08)
struct F*d441a4acc2 : FTableRowBase {
	enum class ECoinTakeType CoinTakeType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 BannedRoundAttributes; // 0x0c(0x04)
	int32 TakeValue; // 0x10(0x04)
	bool bOverwrite; // 0x14(0x01)
	bool bUseCustomOverride; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct F*d3cbeb8b20> CustomOverrideValues; // 0x18(0x10)
};

// ScriptStruct TslGame.*d3cbeb8b20
// Size: 0x08 (Inherited: 0x00)
struct F*d3cbeb8b20 {
	int32 OverrideIndex; // 0x00(0x04)
	int32 OverrideValue; // 0x04(0x04)
};

// ScriptStruct TslGame.*9dd07f9bf1
// Size: 0x50 (Inherited: 0x08)
struct F*9dd07f9bf1 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	bool bEssential; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 CarryLimit; // 0x14(0x04)
	enum class EBombItemCategory Category; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 SortID; // 0x1c(0x04)
	bool Purchasable; // 0x20(0x01)
	bool bGiveItemAfterRestart; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32 Price; // 0x24(0x04)
	struct TArray<struct FName> WeaponAttachments; // 0x28(0x10)
	struct F*4194fd53ba WeaponAmmoData; // 0x38(0x10)
	enum class EBombScopeInfo ScopeInfo; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.*4194fd53ba
// Size: 0x10 (Inherited: 0x10)
struct F*4194fd53ba : F*e05f0f67b1 {
};

// ScriptStruct TslGame.*e05f0f67b1
// Size: 0x10 (Inherited: 0x00)
struct F*e05f0f67b1 {
	struct FName ItemID; // 0x00(0x08)
	int32 Stack; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*8824e76803
// Size: 0x20 (Inherited: 0x10)
struct F*8824e76803 : F*e05f0f67b1 {
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*a3377cd7c7
// Size: 0x520 (Inherited: 0x520)
struct F*a3377cd7c7 : F*29144ded29 {
};

// ScriptStruct TslGame.*3503d8b3cd
// Size: 0x178 (Inherited: 0x08)
struct F*3503d8b3cd : FTableRowBase {
	enum class *afb83b47e5 CharacterInteractType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxInteractableDistance; // 0x0c(0x04)
	struct FText InteractionVerb; // 0x10(0x18)
	struct FText InteractiveObjectName; // 0x28(0x18)
	bool bUseTraceCheck; // 0x40(0x01)
	bool bTraceComplexForInteraction; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct F*90e797cdc2 CastConfig; // 0x48(0x130)
};

// ScriptStruct TslGame.*90e797cdc2
// Size: 0x130 (Inherited: 0x00)
struct F*90e797cdc2 {
	struct FText CastName; // 0x00(0x18)
	float CastTime; // 0x18(0x04)
	enum class ECastPriority CastPriority; // 0x1c(0x01)
	enum class ECastLevel CastLevel; // 0x1d(0x01)
	bool bIgnoreCastDistanceLimitation; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float CastMaxDistance; // 0x20(0x04)
	float CastMaxDistanceMultiplierOnServer; // 0x24(0x04)
	float CasterAndCastObjectMaxDistance; // 0x28(0x04)
	float CasterAndCastObjectMaxDistanceMultiplierOnServer; // 0x2c(0x04)
	bool bCanCastInsideMovingVehicle; // 0x30(0x01)
	bool bKeepCastWhenVehicleHandling; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float MaxLinAcceleration; // 0x34(0x04)
	float CastMaxSpeed; // 0x38(0x04)
	float CastWalkSpeedModifier; // 0x3c(0x04)
	bool bNeedUnarm; // 0x40(0x01)
	bool bRecastsOnFinish; // 0x41(0x01)
	bool bLimitViewRotation; // 0x42(0x01)
	bool bForceStance; // 0x43(0x01)
	bool bSkipRestoreCharacterStance; // 0x44(0x01)
	bool bLockRotation; // 0x45(0x01)
	bool bCanCancelCasting; // 0x46(0x01)
	bool bCheckCastableConditionInProgress; // 0x47(0x01)
	bool bCancleWhenSprint; // 0x48(0x01)
	enum class ECastAnim CastAnim; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float CastBlendingTime; // 0x4c(0x04)
	float CancelBlockDuration; // 0x50(0x04)
	float CastAnimPlayRate; // 0x54(0x04)
	bool IsPermanentCasting; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct F*ea600104f9 CustomCastAnim; // 0x60(0xc0)
	enum class EStanceMode Stance; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FName *11f61bab54; // 0x128(0x08)
};

// ScriptStruct TslGame.*ea600104f9
// Size: 0xc0 (Inherited: 0x00)
struct F*ea600104f9 {
	struct F*aaeb13b180 StartAnim; // 0x00(0x40)
	struct F*aaeb13b180 LoopAnim; // 0x40(0x40)
	struct F*aaeb13b180 EndAnim; // 0x80(0x40)
};

// ScriptStruct TslGame.*aaeb13b180
// Size: 0x40 (Inherited: 0x00)
struct F*aaeb13b180 {
	struct F*90ec9cbf1c AnimSequence; // 0x00(0x10)
	struct F*90ec9cbf1c AnimSequenceFPP; // 0x10(0x10)
	struct F*90ec9cbf1c AnimSequenceProne; // 0x20(0x10)
	struct F*90ec9cbf1c AnimSequenceProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*90ec9cbf1c
// Size: 0x10 (Inherited: 0x00)
struct F*90ec9cbf1c {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*565b9aa246
// Size: 0x480 (Inherited: 0x00)
struct F*565b9aa246 {
	struct F*d74c5d6e2d *d74c5d6e2d; // 0x00(0x290)
	struct F*2da22a520d *2da22a520d; // 0x290(0x1b0)
	struct F*6f1051854e *6f1051854e; // 0x440(0x38)
	char pad_478[0x8]; // 0x478(0x08)
};

// ScriptStruct TslGame.*6f1051854e
// Size: 0x38 (Inherited: 0x08)
struct F*6f1051854e : F*1c16ebccc7 {
	int32 *0b9bc74763; // 0x08(0x04)
	int32 *3e8221e735; // 0x0c(0x04)
	float Timestamp; // 0x10(0x04)
	struct FVector *e753914852; // 0x14(0x0c)
	int64 *1b22c279d4; // 0x20(0x08)
	struct FString TextMarker; // 0x28(0x10)
};

// ScriptStruct TslGame.*1c16ebccc7
// Size: 0x08 (Inherited: 0x00)
struct F*1c16ebccc7 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*2da22a520d
// Size: 0x1b0 (Inherited: 0x08)
struct F*2da22a520d : F*1c16ebccc7 {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*5a8371a5a3 *55d5072060; // 0x10(0xa0)
	struct F*5a8371a5a3 *a1ded433ce; // 0xb0(0xa0)
	struct FString *15c45668dc; // 0x150(0x10)
	struct FString *76558b56cc; // 0x160(0x10)
	struct FString *7a462ce760; // 0x170(0x10)
	struct FString *84ac0305db; // 0x180(0x10)
	char pad_190[0x20]; // 0x190(0x20)
};

// ScriptStruct TslGame.*5a8371a5a3
// Size: 0xa0 (Inherited: 0x00)
struct F*5a8371a5a3 {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Average; // 0x08(0x04)
	char pad_C[0x94]; // 0x0c(0x94)
};

// ScriptStruct TslGame.*d74c5d6e2d
// Size: 0x290 (Inherited: 0x08)
struct F*d74c5d6e2d : F*1c16ebccc7 {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*5a8371a5a3 Frame; // 0x10(0xa0)
	struct F*5a8371a5a3 *b27e6d92d7; // 0xb0(0xa0)
	struct F*5a8371a5a3 *c76c2847d0; // 0x150(0xa0)
	struct F*5a8371a5a3 *c5455af685; // 0x1f0(0xa0)
};

// ScriptStruct TslGame.*5e1f60ced4
// Size: 0x40 (Inherited: 0x00)
struct F*5e1f60ced4 {
	struct FString DeviceName; // 0x00(0x10)
	struct FString ClientVersion; // 0x10(0x10)
	struct FString MapName; // 0x20(0x10)
	struct FString ModeName; // 0x30(0x10)
};

// ScriptStruct TslGame.*554c8845fa
// Size: 0x28 (Inherited: 0x08)
struct F*554c8845fa : FTableRowBase {
	float phase; // 0x08(0x04)
	float killer_x; // 0x0c(0x04)
	float killer_y; // 0x10(0x04)
	float killer_z; // 0x14(0x04)
	float victim_x; // 0x18(0x04)
	float victim_y; // 0x1c(0x04)
	float victim_z; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.HemostasisTableRow
// Size: 0x18 (Inherited: 0x08)
struct FHemostasisTableRow : FTableRowBase {
	int32 Stack; // 0x08(0x04)
	bool bCanHemostasis; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float HemostasisPercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*572cf8abd7
// Size: 0x3c8 (Inherited: 0x3b8)
struct F*572cf8abd7 : FItemTableRowCastable {
	struct TArray<struct F*4308a4a8c6> SupplyItems; // 0x3b8(0x10)
};

// ScriptStruct TslGame.ItemTableRowCastable
// Size: 0x3b8 (Inherited: 0x268)
struct FItemTableRowCastable : F*eee16334b9 {
	bool *f5f87f67c9; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct F*90e797cdc2 *90e797cdc2; // 0x270(0x130)
	enum class ECastableItemType *35796908f0; // 0x3a0(0x01)
	bool *b0745b5983; // 0x3a1(0x01)
	char pad_3A2[0x6]; // 0x3a2(0x06)
	struct TArray<struct UClass*> *097b84925d; // 0x3a8(0x10)
};

// ScriptStruct TslGame.*eee16334b9
// Size: 0x268 (Inherited: 0x08)
struct F*eee16334b9 : FTableRowBase {
	char bStackable : 1; // 0x08(0x01)
	char bUsable : 1; // 0x08(0x01)
	char bIsConsumable : 1; // 0x08(0x01)
	char bSetStackMaterialParameter : 1; // 0x08(0x01)
	char bDisableSpawnInGame : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 StackCount; // 0x0c(0x04)
	int32 DefaultStackCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText ItemName; // 0x18(0x18)
	struct FText ItemCategory; // 0x30(0x18)
	struct FText ItemDetailedName; // 0x48(0x18)
	struct FText ItemDescription; // 0x60(0x18)
	float ItemMaxInteractableDistance; // 0x78(0x04)
	int32 StackCountMax; // 0x7c(0x04)
	float SpacePerItem; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct UStaticMesh* DroppedMesh; // 0x88(0x20)
	float DroppedMeshScale; // 0xa8(0x04)
	bool bDropAsProjectile; // 0xac(0x01)
	bool bThermalScopeInteractive; // 0xad(0x01)
	enum class EThermalItemType ThermalItemType; // 0xae(0x01)
	char pad_AF[0x1]; // 0xaf(0x01)
	struct U*76d2ef26df* ProjectileConfig; // 0xb0(0x20)
	struct UTexture* Icon; // 0xd0(0x20)
	struct UTexture* ToolTipIcon; // 0xf0(0x20)
	float IconSizeRatio; // 0x110(0x04)
	float ToolTipIconSizeRatio; // 0x114(0x04)
	struct UAkAudioEvent* DropSoundAk; // 0x118(0x20)
	struct FName DropAnimation; // 0x138(0x08)
	struct UAkAudioEvent* PickUpSoundAk; // 0x140(0x20)
	enum class EPickupAnimType PickUpAnimationOverride; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UAkAudioEvent* InventoryPutSoundAk; // 0x168(0x20)
	int32 SortPriority; // 0x188(0x04)
	enum class EItemCategory Category; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct FName SubCategory; // 0x190(0x08)
	bool bIsToy; // 0x198(0x01)
	bool bNeedToCheckPopup; // 0x199(0x01)
	bool bIsLobbyItem; // 0x19a(0x01)
	char pad_19B[0x1]; // 0x19b(0x01)
	int32 LobbyItemID; // 0x19c(0x04)
	struct F*ad68a30df7 LobbyItemDesc; // 0x1a0(0x60)
	bool bIsLobbyWeapon; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	int32 LobbyWeaponID; // 0x204(0x04)
	struct UClass* LobbyWeaponInstance; // 0x208(0x20)
	bool *8bc728e4c8; // 0x228(0x01)
	bool *ff7b93e220; // 0x229(0x01)
	bool *fc7f28203f; // 0x22a(0x01)
	char pad_22B[0x5]; // 0x22b(0x05)
	struct FString Note; // 0x230(0x10)
	int32 AIFullValue; // 0x240(0x04)
	int32 ItemSubType; // 0x244(0x04)
	struct FName ItemID; // 0x248(0x08)
	struct UClass* ItemClass; // 0x250(0x08)
	struct UClass* *536517c11e; // 0x258(0x08)
	struct U*af7a15c57f* *1f34b2682f; // 0x260(0x08)
};

// ScriptStruct TslGame.*ad68a30df7
// Size: 0x60 (Inherited: 0x00)
struct F*ad68a30df7 {
	char *467c4320cb : 1; // 0x00(0x01)
	char bPointSellable : 1; // 0x00(0x01)
	char *27d748b5f4 : 1; // 0x00(0x01)
	char bPointRefundable : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *ff7fe1d4e8; // 0x08(0x10)
	enum class ELobbyItemTier Tier; // 0x18(0x01)
	enum class ELobbyItemCategory Category; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FText Description; // 0x20(0x18)
	bool *825f86d24d; // 0x38(0x01)
	bool *25e9f2a160; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<enum class ELobbyItemPlatform> Platforms; // 0x40(0x10)
	float *25efecb90f; // 0x50(0x04)
	enum class ELobbyItemPointSellingType *9e33732630; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *72ead98635; // 0x58(0x04)
	int32 *5c2a8ba201; // 0x5c(0x04)
};

// ScriptStruct TslGame.*4308a4a8c6
// Size: 0x10 (Inherited: 0x00)
struct F*4308a4a8c6 {
	struct FName SupplyItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*cb5b5655b8
// Size: 0x280 (Inherited: 0x268)
struct F*cb5b5655b8 : F*eee16334b9 {
	enum class ECustomPartType CustomPart; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<struct FName> PartTags; // 0x270(0x10)
};

// ScriptStruct TslGame.*cb47a8faff
// Size: 0x280 (Inherited: 0x280)
struct F*cb47a8faff : F*644a0b9307 {
};

// ScriptStruct TslGame.*644a0b9307
// Size: 0x280 (Inherited: 0x268)
struct F*644a0b9307 : F*eee16334b9 {
	bool bAutoAction; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct F*e2478af550 SkinParam; // 0x270(0x10)
};

// ScriptStruct TslGame.*e2478af550
// Size: 0x10 (Inherited: 0x00)
struct F*e2478af550 {
	enum class ESkinCategory SkinCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName SkinName; // 0x08(0x08)
};

// ScriptStruct TslGame.ItemTableRowVehiclePart
// Size: 0x310 (Inherited: 0x280)
struct FItemTableRowVehiclePart : F*cb5b5655b8 {
	enum class EVehiclePartType VehiclePart; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct UMaterialInterface*> Materials; // 0x288(0x10)
	struct TMap<int32, struct UMaterialInterface*> OverrideDestroyedMaterial; // 0x298(0x50)
	struct USkeletalMesh* SkeletalMesh; // 0x2e8(0x20)
	int32 WheelSize; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
};

// ScriptStruct TslGame.*584c65cc94
// Size: 0x38 (Inherited: 0x00)
struct F*584c65cc94 {
	float *3a466695b4; // 0x00(0x04)
	float *e83d7c984b; // 0x04(0x04)
	int32 *6be2fa0baa; // 0x08(0x04)
	float *fb5d874678; // 0x0c(0x04)
	float *cfa77ea208; // 0x10(0x04)
	float *6a81deda37; // 0x14(0x04)
	int32 *d2b56a7ae7; // 0x18(0x04)
	float *13fca35e28; // 0x1c(0x04)
	struct TArray<struct F*754e52de24> *c2518acfb7; // 0x20(0x10)
	bool *3fce594eff; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *1b4fea72d0; // 0x34(0x04)
};

// ScriptStruct TslGame.*754e52de24
// Size: 0x30 (Inherited: 0x00)
struct F*754e52de24 {
	struct FString MapName; // 0x00(0x10)
	struct FString LocationName; // 0x10(0x10)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*d04bd35f86
// Size: 0x10 (Inherited: 0x00)
struct F*d04bd35f86 {
	uint32 *591e70dcab; // 0x00(0x04)
	float *fb5d874678; // 0x04(0x04)
	float *8299ef9bc2; // 0x08(0x04)
	bool *6b40ec1332; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*33c94acb29
// Size: 0x08 (Inherited: 0x00)
struct F*33c94acb29 {
	float *3a466695b4; // 0x00(0x04)
	float *6ccac66f2f; // 0x04(0x04)
};

// ScriptStruct TslGame.*6a60ecf9a4
// Size: 0x38 (Inherited: 0x00)
struct F*6a60ecf9a4 {
	float *3a466695b4; // 0x00(0x04)
	float *e83d7c984b; // 0x04(0x04)
	int32 *6be2fa0baa; // 0x08(0x04)
	float *fb5d874678; // 0x0c(0x04)
	float *cfa77ea208; // 0x10(0x04)
	float *6a81deda37; // 0x14(0x04)
	int32 *d2b56a7ae7; // 0x18(0x04)
	float *13fca35e28; // 0x1c(0x04)
	struct TArray<struct F*25c148b31f> *c2518acfb7; // 0x20(0x10)
	bool *3fce594eff; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *1b4fea72d0; // 0x34(0x04)
};

// ScriptStruct TslGame.*25c148b31f
// Size: 0x30 (Inherited: 0x00)
struct F*25c148b31f {
	struct FString MapName; // 0x00(0x10)
	struct FString LocationName; // 0x10(0x10)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*ba4df866b0
// Size: 0x18 (Inherited: 0x08)
struct F*ba4df866b0 : FTableRowBase {
	struct UStaticMesh* OldMesh; // 0x08(0x08)
	struct UStaticMesh* NewMesh; // 0x10(0x08)
};

// ScriptStruct TslGame.*52f8790078
// Size: 0x10 (Inherited: 0x08)
struct F*52f8790078 : FTableRowBase {
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct TslGame.*fe2998b827
// Size: 0x30 (Inherited: 0x08)
struct F*fe2998b827 : FTableRowBase {
	enum class *40da61f0d8 DetailMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct UStaticMesh*> MeshesToOverride; // 0x10(0x10)
	struct TArray<struct UMaterialInterface*> DecalMaterialsToOverride; // 0x20(0x10)
};

// ScriptStruct TslGame.*fd3d8732c9
// Size: 0x10 (Inherited: 0x08)
struct F*fd3d8732c9 : FTableRowBase {
	struct UClass* BPClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*470d020567
// Size: 0x70 (Inherited: 0x08)
struct F*470d020567 : FTableRowBase {
	struct FStringAssetReference *5d0cd86413; // 0x08(0x10)
	struct FStringAssetReference *58c49859df; // 0x18(0x10)
	struct FStringAssetReference *8ec1e281b1; // 0x28(0x10)
	struct FStringAssetReference *54ff8d1c90; // 0x38(0x10)
	struct FStringAssetReference *8d064922d9; // 0x48(0x10)
	struct FStringAssetReference *63a51d7060; // 0x58(0x10)
	float Ratio; // 0x68(0x04)
	bool *c38c7b1a9a; // 0x6c(0x01)
	bool *554d88c259; // 0x6d(0x01)
	bool *ee9af0a788; // 0x6e(0x01)
	bool *d24c0c4c27; // 0x6f(0x01)
};

// ScriptStruct TslGame.*af59171f35
// Size: 0x18 (Inherited: 0x08)
struct F*af59171f35 : FTableRowBase {
	struct FVector BeachPointLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*de52e29671
// Size: 0x18 (Inherited: 0x08)
struct F*de52e29671 : FTableRowBase {
	int32 LocationX; // 0x08(0x04)
	int32 LocationY; // 0x0c(0x04)
	int32 LocationZ; // 0x10(0x04)
	int32 SafeScore; // 0x14(0x04)
};

// ScriptStruct TslGame.*e3d3eaec18
// Size: 0x60 (Inherited: 0x08)
struct F*e3d3eaec18 : FTableRowBase {
	float NormalArea; // 0x08(0x04)
	char pad_C[0x54]; // 0x0c(0x54)
};

// ScriptStruct TslGame.*24b693b668
// Size: 0xc8 (Inherited: 0x60)
struct F*24b693b668 : F*e3d3eaec18 {
	float Farm; // 0x60(0x04)
	float FerryPier; // 0x64(0x04)
	float Gatka; // 0x68(0x04)
	float Georgopol; // 0x6c(0x04)
	float Hospital; // 0x70(0x04)
	float Kameshki; // 0x74(0x04)
	float Lipovka; // 0x78(0x04)
	float Mansion; // 0x7c(0x04)
	float Mylta; // 0x80(0x04)
	float MyltaPower; // 0x84(0x04)
	float Novorepnoye; // 0x88(0x04)
	float Pochinki; // 0x8c(0x04)
	float Primorsk; // 0x90(0x04)
	float Prison; // 0x94(0x04)
	float Quarry; // 0x98(0x04)
	float Rozhok; // 0x9c(0x04)
	float Ruins; // 0xa0(0x04)
	float School; // 0xa4(0x04)
	float Severny; // 0xa8(0x04)
	float Shelter; // 0xac(0x04)
	float ShootingRange; // 0xb0(0x04)
	float SosnovkaMilitaryBase; // 0xb4(0x04)
	float Stalber; // 0xb8(0x04)
	float YasnayaPolyana; // 0xbc(0x04)
	float Zharki; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.*adac0c81f4
// Size: 0x70 (Inherited: 0x60)
struct F*adac0c81f4 : F*e3d3eaec18 {
	float Level_A; // 0x60(0x04)
	float Level_B; // 0x64(0x04)
	float Level_C; // 0x68(0x04)
	float Level_D; // 0x6c(0x04)
};

// ScriptStruct TslGame.*9f9406b355
// Size: 0xd8 (Inherited: 0x60)
struct F*9f9406b355 : F*e3d3eaec18 {
	float Alcantara; // 0x60(0x04)
	float CampoMilitar; // 0x64(0x04)
	float Chumacera; // 0x68(0x04)
	float Craterfields; // 0x6c(0x04)
	float CruzdelValle; // 0x70(0x04)
	float ElAzahar; // 0x74(0x04)
	float ElPozo; // 0x78(0x04)
	float Graveyard; // 0x7c(0x04)
	float HeciendadelPatron; // 0x80(0x04)
	float Junkyard; // 0x84(0x04)
	float LaBendita; // 0x88(0x04)
	float LaCobreria; // 0x8c(0x04)
	float Ladrillera; // 0x90(0x04)
	float Lmpala; // 0x94(0x04)
	float LosHigos; // 0x98(0x04)
	float LosLeones; // 0x9c(0x04)
	float MinasdelSur; // 0xa0(0x04)
	float MinasGenerales; // 0xa4(0x04)
	float MonteNuevo; // 0xa8(0x04)
	float Pecado; // 0xac(0x04)
	float Powergrid; // 0xb0(0x04)
	float Prison; // 0xb4(0x04)
	float PuertoParaiso; // 0xb8(0x04)
	float Ruins; // 0xbc(0x04)
	float SanMartin; // 0xc0(0x04)
	float TierraBronca; // 0xc4(0x04)
	float TorreAhumada; // 0xc8(0x04)
	float TrailerPark; // 0xcc(0x04)
	float ValledelMar; // 0xd0(0x04)
	float WaterTreatment; // 0xd4(0x04)
};

// ScriptStruct TslGame.*06c7a6f988
// Size: 0xa0 (Inherited: 0x60)
struct F*06c7a6f988 : F*e3d3eaec18 {
	float castle; // 0x60(0x04)
	float CoalMine; // 0x64(0x04)
	float Cosmodrome; // 0x68(0x04)
	float DekaMesto; // 0x6c(0x04)
	float Dinoland; // 0x70(0x04)
	float Kranik; // 0x74(0x04)
	float Laveni; // 0x78(0x04)
	float Laznova; // 0x7c(0x04)
	float LumberYard; // 0x80(0x04)
	float Naros; // 0x84(0x04)
	float Observatory; // 0x88(0x04)
	float Pavilka; // 0x8c(0x04)
	float TrainStation; // 0x90(0x04)
	float Trika; // 0x94(0x04)
	float Villa; // 0x98(0x04)
	float Winery; // 0x9c(0x04)
};

// ScriptStruct TslGame.*a133ac8bb4
// Size: 0x78 (Inherited: 0x60)
struct F*a133ac8bb4 : F*e3d3eaec18 {
	float CoalYards; // 0x60(0x04)
	float Docks; // 0x64(0x04)
	float IndustrialPark; // 0x68(0x04)
	float RailYard; // 0x6c(0x04)
	float Steelmill; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*b9d3b86a76
// Size: 0xb0 (Inherited: 0x60)
struct F*b9d3b86a76 : F*e3d3eaec18 {
	float Arena; // 0x60(0x04)
	float Assembly; // 0x64(0x04)
	float Cabana_Town; // 0x68(0x04)
	float Coastal_Towns; // 0x6c(0x04)
	float Concert; // 0x70(0x04)
	float Dam_Town; // 0x74(0x04)
	float downtown; // 0x78(0x04)
	float Fulfillment_Center; // 0x7c(0x04)
	float Hill_Town; // 0x80(0x04)
	float Hydroelectric_Dam; // 0x84(0x04)
	float Little_City; // 0x88(0x04)
	float Lodge; // 0x8c(0x04)
	float Simple_Town; // 0x90(0x04)
	float Solar_Town; // 0x94(0x04)
	float Storage_Town; // 0x98(0x04)
	float Sunken_Town; // 0x9c(0x04)
	float swamp; // 0xa0(0x04)
	float Swamp_Town; // 0xa4(0x04)
	float Trailer_Town; // 0xa8(0x04)
	float Wind_Farms; // 0xac(0x04)
};

// ScriptStruct TslGame.*27fb15e012
// Size: 0xb0 (Inherited: 0x60)
struct F*27fb15e012 : F*e3d3eaec18 {
	float AirField; // 0x60(0x04)
	float BanTai; // 0x64(0x04)
	float Bootcamp; // 0x68(0x04)
	float CampAlpha; // 0x6c(0x04)
	float CampBravo; // 0x70(0x04)
	float CampCharlie; // 0x74(0x04)
	float Cave; // 0x78(0x04)
	float Getaway; // 0x7c(0x04)
	float Hatinh; // 0x80(0x04)
	float Kampong; // 0x84(0x04)
	float Khao; // 0x88(0x04)
	float Lawaki; // 0x8c(0x04)
	float NaKham; // 0x90(0x04)
	float Painan; // 0x94(0x04)
	float ParadiseResort; // 0x98(0x04)
	float Quarry; // 0x9c(0x04)
	float Ruins; // 0xa0(0x04)
	float Sahmee; // 0xa4(0x04)
	float Tambang; // 0xa8(0x04)
	float Tatmok; // 0xac(0x04)
};

// ScriptStruct TslGame.*2b2075e3e0
// Size: 0x78 (Inherited: 0x60)
struct F*2b2075e3e0 : F*e3d3eaec18 {
	float AlHabar; // 0x60(0x04)
	float AlHayik; // 0x64(0x04)
	float Bahrsahir; // 0x68(0x04)
	float Bashara; // 0x6c(0x04)
	float Hadiqanemo; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*c1d4f2e2e0
// Size: 0xa8 (Inherited: 0x60)
struct F*c1d4f2e2e0 : F*e3d3eaec18 {
	float airport; // 0x60(0x04)
	float ArmyBase; // 0x64(0x04)
	float Buksansa; // 0x68(0x04)
	float FishingCamp; // 0x6c(0x04)
	float Godok; // 0x70(0x04)
	float Haemoosa; // 0x74(0x04)
	float Hapo; // 0x78(0x04)
	float Hosan; // 0x7c(0x04)
	float HosanPrison; // 0x80(0x04)
	float Kangneung; // 0x84(0x04)
	float Ohyang; // 0x88(0x04)
	float Palace; // 0x8c(0x04)
	float School; // 0x90(0x04)
	float ShipYard; // 0x94(0x04)
	float Songam; // 0x98(0x04)
	float Studio; // 0x9c(0x04)
	float Terminal; // 0xa0(0x04)
	float Wolsong; // 0xa4(0x04)
};

// ScriptStruct TslGame.*fcc20f3db3
// Size: 0x20 (Inherited: 0x08)
struct F*fcc20f3db3 : FTableRowBase {
	struct FText *cf7f58a1e1; // 0x08(0x18)
};

// ScriptStruct TslGame.*94be468464
// Size: 0x30 (Inherited: 0x00)
struct F*94be468464 {
	bool bUseMateriaSlotIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32> MaterialSlotIndex; // 0x08(0x10)
	bool bUseMaterialSlotName; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> MaterialSlotName; // 0x20(0x10)
};

// ScriptStruct TslGame.*43c17757ce
// Size: 0x48 (Inherited: 0x00)
struct F*43c17757ce {
	struct F*3f053b24f8 *3f053b24f8; // 0x00(0x40)
	struct UImage* *9811139e17; // 0x40(0x08)
};

// ScriptStruct TslGame.*3f053b24f8
// Size: 0x40 (Inherited: 0x00)
struct F*3f053b24f8 {
	struct FGuid IconGUID; // 0x00(0x10)
	struct FVector WorldLocation; // 0x10(0x0c)
	struct FRotator WorldRotation; // 0x1c(0x0c)
	enum class EAuxilaryIconType IconType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FLinearColor IconColor; // 0x2c(0x10)
	bool bIsVisible; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGame.*04982ef2bb
// Size: 0x60 (Inherited: 0x00)
struct F*04982ef2bb {
	struct FString *0383d268ce; // 0x00(0x10)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct TslGame.*2bf8f73c59
// Size: 0x20 (Inherited: 0x00)
struct F*2bf8f73c59 {
	struct FString *e20105168b; // 0x00(0x10)
	struct FString *504952b5f1; // 0x10(0x10)
};

// ScriptStruct TslGame.*86b3a82c8f
// Size: 0x28 (Inherited: 0x08)
struct F*86b3a82c8f : FTableRowBase {
	enum class EAuxilaryIconType IconType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* IconTexture; // 0x10(0x08)
	struct UCurveFloat* IconRatioCurve; // 0x18(0x08)
	float MinimapIconRatio; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*1cddde8d3b
// Size: 0x28 (Inherited: 0x00)
struct F*1cddde8d3b {
	float *5b7856298c; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *f703b8633e; // 0x08(0x08)
	bool bShowTrunkMesh; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct F*586bc5d76b> *b72a0053ff; // 0x18(0x10)
};

// ScriptStruct TslGame.*586bc5d76b
// Size: 0x28 (Inherited: 0x00)
struct F*586bc5d76b {
	struct UStaticMesh* TrunkMesh; // 0x00(0x20)
	float MinCapacityPercent; // 0x20(0x04)
	float MaxCapacityPercent; // 0x24(0x04)
};

// ScriptStruct TslGame.*3a12cd300e
// Size: 0x30 (Inherited: 0x00)
struct F*3a12cd300e {
	struct F*1d4a6818de Stand; // 0x00(0x10)
	struct F*1d4a6818de Crouch; // 0x10(0x10)
	struct F*1d4a6818de Prone; // 0x20(0x10)
};

// ScriptStruct TslGame.*1d4a6818de
// Size: 0x10 (Inherited: 0x00)
struct F*1d4a6818de {
	float *53a4222ba0; // 0x00(0x04)
	float *33e632ef1e; // 0x04(0x04)
	float *abf1073bc4; // 0x08(0x04)
	float *ae76f7fcba; // 0x0c(0x04)
};

// ScriptStruct TslGame.*44dcadb9b7
// Size: 0x0c (Inherited: 0x00)
struct F*44dcadb9b7 {
	struct FVector Acceleration; // 0x00(0x0c)
};

// ScriptStruct TslGame.*9f5cfa5d67
// Size: 0x20 (Inherited: 0x00)
struct F*9f5cfa5d67 {
	struct UBlendSpace1D* BlendSpaceFPP; // 0x00(0x08)
	struct UBlendSpace1D* BlendSpaceTPP; // 0x08(0x08)
	struct FInputBlendPose BlendSettings; // 0x10(0x10)
};

// ScriptStruct TslGame.*13bbace17a
// Size: 0x10 (Inherited: 0x00)
struct F*13bbace17a {
	struct TArray<struct F*65a756e5c3> IdleAnimations; // 0x00(0x10)
};

// ScriptStruct TslGame.*65a756e5c3
// Size: 0x20 (Inherited: 0x00)
struct F*65a756e5c3 {
	struct UAnimSequence* AnimAsset; // 0x00(0x08)
	struct FInt32Range LoopingCounter; // 0x08(0x10)
	float ChanceToPlay; // 0x18(0x04)
	float BlendTime; // 0x1c(0x04)
};

// ScriptStruct TslGame.*0273bd0eae
// Size: 0x10 (Inherited: 0x00)
struct F*0273bd0eae {
	struct FName Name; // 0x00(0x08)
	bool bIsAxis; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scale; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f1572a8200
// Size: 0x10 (Inherited: 0x00)
struct F*f1572a8200 {
	struct FName Name; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*db468a7f17
// Size: 0x10 (Inherited: 0x00)
struct F*db468a7f17 {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Health; // 0x04(0x04)
	int32 Count; // 0x08(0x04)
	bool bUseRandomizedWeaponKits; // 0x0c(0x01)
	bool bUseUniqueWeaponKits; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*bee4cc6749
// Size: 0x10 (Inherited: 0x00)
struct F*bee4cc6749 {
	struct FName *f934cc21bd; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*48ada72602
// Size: 0x20 (Inherited: 0x00)
struct F*48ada72602 {
	enum class EAutoSpectatePriority *0d93824f0b; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 TeamId; // 0x04(0x04)
	struct FString *805f515875; // 0x08(0x10)
	float *5edb492125; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*2fa2a8adbc
// Size: 0x50 (Inherited: 0x00)
struct F*2fa2a8adbc {
	enum class EObserverHudAnimType AnimType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 EliminatorTeamNum; // 0x04(0x04)
	int32 EliminatedTeamNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString KillingSpreePlayerName; // 0x10(0x10)
	struct FString KillingSpreeClanName; // 0x20(0x10)
	struct FString KillingSpreeTeamName; // 0x30(0x10)
	int32 KillingSpreeTeamNum; // 0x40(0x04)
	int32 KillingSpreeKillCount; // 0x44(0x04)
	enum class EOutGamePlatformProvider KillingSpreePlayerPlatform; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.*145269dcdd
// Size: 0x18 (Inherited: 0x00)
struct F*145269dcdd {
	struct FString UniqueId; // 0x00(0x10)
	bool *bd8f690d33; // 0x10(0x01)
	bool *7b3b5446d4; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.CommunicateTargetInfo
// Size: 0x30 (Inherited: 0x00)
struct FCommunicateTargetInfo {
	struct FString UniqueId; // 0x00(0x10)
	struct FString Nickname; // 0x10(0x10)
	enum class EOutGamePlatformProvider PlatformData; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FCommunicationPrivilege CommunicationPrivileges; // 0x24(0x08)
	bool bMyFollower; // 0x2c(0x01)
	bool bIAmFollowing; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct TslGame.CommunicationPrivilege
// Size: 0x08 (Inherited: 0x00)
struct FCommunicationPrivilege {
	int32 CommunicationPrivilege_Multiplay; // 0x00(0x04)
	int32 CommunicationPrivilege_CrossPlay; // 0x04(0x04)
};

// ScriptStruct TslGame.*51ac2126ef
// Size: 0x20 (Inherited: 0x00)
struct F*51ac2126ef {
	struct FString Key; // 0x00(0x10)
	struct TArray<struct F*8b995b3fca> Logs; // 0x10(0x10)
};

// ScriptStruct TslGame.*8b995b3fca
// Size: 0x20 (Inherited: 0x00)
struct F*8b995b3fca {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.BodyTypeDef
// Size: 0x08 (Inherited: 0x00)
struct FBodyTypeDef {
	int32 *51cb423240; // 0x00(0x04)
	int32 *c3ed69c0f6; // 0x04(0x04)
};

// ScriptStruct TslGame.*1c1d75f657
// Size: 0x98 (Inherited: 0x00)
struct F*1c1d75f657 {
	struct FString PlayerName; // 0x00(0x10)
	uint32 *9c52223615; // 0x10(0x04)
	int32 TeamId; // 0x14(0x04)
	bool *d32a003eab; // 0x18(0x01)
	bool Gender; // 0x19(0x01)
	bool *d76745ef66; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct TArray<int32> *84972f9bad; // 0x20(0x10)
	struct TArray<int32> *c851f1e380; // 0x30(0x10)
	struct TArray<int32> *2aa431bf7c; // 0x40(0x10)
	struct FString Emotes; // 0x50(0x10)
	struct FName *cf858b2989; // 0x60(0x08)
	struct FName *49d56b823d; // 0x68(0x08)
	float *0d2144d0cd; // 0x70(0x04)
	float *6ee59b4909; // 0x74(0x04)
	float *52a7cb994b; // 0x78(0x04)
	float *607b107017; // 0x7c(0x04)
	bool *e378366667; // 0x80(0x01)
	bool *684fcc58f1; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FString *5aa2985649; // 0x88(0x10)
};

// ScriptStruct TslGame.*5d29bb47cd
// Size: 0x10 (Inherited: 0x00)
struct F*5d29bb47cd {
	struct FVector Location; // 0x00(0x0c)
	bool *3b33a81f55; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*58967fb14a
// Size: 0x10 (Inherited: 0x00)
struct F*58967fb14a {
	enum class EMatchStartType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* Class; // 0x08(0x08)
};

// ScriptStruct TslGame.*54c5e763a0
// Size: 0x08 (Inherited: 0x00)
struct F*54c5e763a0 {
	float *30b365560c; // 0x00(0x04)
	float *da5aeb266b; // 0x04(0x04)
};

// ScriptStruct TslGame.*4c0596fe87
// Size: 0x24 (Inherited: 0x00)
struct F*4c0596fe87 {
	enum class EInventoryRadioMessageType *d5953f4c8c; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *8e549d748b; // 0x04(0x04)
	int32 *1fcbfd4603; // 0x08(0x04)
	bool *846b74eaa3; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32 *175afe232e; // 0x10(0x04)
	int32 *bd97575fec; // 0x14(0x04)
	struct FVector_NetQuantize *ad23da627a; // 0x18(0x0c)
};

// ScriptStruct TslGame.*440a6f6735
// Size: 0x30 (Inherited: 0x00)
struct F*440a6f6735 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *2313f978bd; // 0x08(0x10)
	struct TArray<struct FText> *4aba7257b1; // 0x18(0x10)
	int32 *2cea562664; // 0x28(0x04)
	enum class ERadioMessageHighlightType *ea46456f94; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct TslGame.*4339c9d7ee
// Size: 0x38 (Inherited: 0x28)
struct F*4339c9d7ee : F*7bd22f385a {
	struct TArray<struct FName> SkinnableTagList; // 0x28(0x10)
};

// ScriptStruct TslGame.*7bd22f385a
// Size: 0x28 (Inherited: 0x00)
struct F*7bd22f385a {
	struct FText ItemName; // 0x00(0x18)
	struct FString BlueprintId; // 0x18(0x10)
};

// ScriptStruct TslGame.*d40bfd9eb4
// Size: 0x38 (Inherited: 0x28)
struct F*d40bfd9eb4 : F*7bd22f385a {
	enum class EWeaponClass WeaponClassEnum; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName SkinTag; // 0x30(0x08)
};

// ScriptStruct TslGame.*b14bd35857
// Size: 0x10 (Inherited: 0x00)
struct F*b14bd35857 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.RankingInfo
// Size: 0x18 (Inherited: 0x00)
struct FRankingInfo {
	int32 TeamId; // 0x00(0x04)
	int32 *cbbe4496ad; // 0x04(0x04)
	int32 *0e19695995; // 0x08(0x04)
	int32 Score; // 0x0c(0x04)
	int32 Order; // 0x10(0x04)
	bool *3c8290ec43; // 0x14(0x01)
	bool *a7a833ac93; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*6fe09374d0
// Size: 0x08 (Inherited: 0x00)
struct F*6fe09374d0 {
	struct FName ItemID; // 0x00(0x08)
};

// ScriptStruct TslGame.*9147081c37
// Size: 0x10 (Inherited: 0x00)
struct F*9147081c37 {
	struct FStringClassReference ObjectClass; // 0x00(0x10)
};

// ScriptStruct TslGame.*89ea3617cc
// Size: 0x10 (Inherited: 0x00)
struct F*89ea3617cc {
	struct UTexture* Texture; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*d4d6d5b337
// Size: 0x30 (Inherited: 0x00)
struct F*d4d6d5b337 {
	struct FKey Key; // 0x00(0x18)
	struct UTexture* KeyIcon; // 0x18(0x08)
	struct UTexture* KeyIcon_PS; // 0x20(0x08)
	float IconRatio; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*5773b04061
// Size: 0x08 (Inherited: 0x00)
struct F*5773b04061 {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
};

// ScriptStruct TslGame.*a112463383
// Size: 0x20 (Inherited: 0x00)
struct F*a112463383 {
	struct FString ActorName; // 0x00(0x10)
	struct FVector *a408745fb6; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*b2238adb88
// Size: 0x20 (Inherited: 0x00)
struct F*b2238adb88 {
	struct FString MapName; // 0x00(0x10)
	struct TArray<struct FSavedObPos> SavedObPos; // 0x10(0x10)
};

// ScriptStruct TslGame.SavedObPos
// Size: 0x18 (Inherited: 0x00)
struct FSavedObPos {
	struct FVector Loc; // 0x00(0x0c)
	struct FRotator Rot; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*ef0c22f0da
// Size: 0x58 (Inherited: 0x00)
struct F*ef0c22f0da {
	struct TArray<enum class EGameModeType> GameModeTypeList; // 0x00(0x10)
	struct FString WidgetName; // 0x10(0x10)
	bool bRemoveWidget; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct F*290199d127 NewWidgetConfig; // 0x28(0x30)
};

// ScriptStruct TslGame.*290199d127
// Size: 0x30 (Inherited: 0x00)
struct F*290199d127 {
	struct FStringAssetReference WidgetClassReference; // 0x00(0x10)
	bool bDefaultShow; // 0x10(0x01)
	bool bUseMouse; // 0x11(0x01)
	bool bCloseByEscape; // 0x12(0x01)
	bool bRemovedByHiding; // 0x13(0x01)
	int32 ZOrder; // 0x14(0x04)
	bool bUsePcOnly; // 0x18(0x01)
	bool bUseConsoleOnly; // 0x19(0x01)
	bool bCharacterHudUi; // 0x1a(0x01)
	bool bSpectatorHudUi; // 0x1b(0x01)
	bool bObserverHudUi; // 0x1c(0x01)
	bool bReplayHudUi; // 0x1d(0x01)
	bool bLeagueReplayHudUi; // 0x1e(0x01)
	enum class ETslWidgetCreationMethod WidgetCreationMethod; // 0x1f(0x01)
	struct TArray<struct FString> HideWidgetList; // 0x20(0x10)
};

// ScriptStruct TslGame.*a1561f004d
// Size: 0x20 (Inherited: 0x00)
struct F*a1561f004d {
	struct FString WidgetName; // 0x00(0x10)
	struct TArray<struct F*7dfaa9aae9> AlternativeWidgets; // 0x10(0x10)
};

// ScriptStruct TslGame.*7dfaa9aae9
// Size: 0x30 (Inherited: 0x00)
struct F*7dfaa9aae9 {
	struct FName GameModeAlias; // 0x00(0x08)
	struct FStringAssetReference Reference; // 0x08(0x10)
	struct TArray<struct FString> HideWidgetList; // 0x18(0x10)
	int32 ZOrderOverride; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*33345791b8
// Size: 0x40 (Inherited: 0x00)
struct F*33345791b8 {
	struct FString WidgetName; // 0x00(0x10)
	struct F*290199d127 WidgetConfig; // 0x10(0x30)
};

// ScriptStruct TslGame.*769d8f477f
// Size: 0x18 (Inherited: 0x00)
struct F*769d8f477f {
	struct FString *27f1a1ad88; // 0x00(0x10)
	int32 *5e4df06e35; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.TslUserProfile
// Size: 0x18 (Inherited: 0x00)
struct FTslUserProfile {
	struct FString PlayerNetId; // 0x00(0x10)
	float TotalPlayTime_Sec; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*b06f270220
// Size: 0x0c (Inherited: 0x00)
struct F*b06f270220 {
	char pad_0[0x8]; // 0x00(0x08)
	int32 Counter; // 0x08(0x04)
};

// ScriptStruct TslGame.*6c6591959a
// Size: 0x08 (Inherited: 0x00)
struct F*6c6591959a {
	enum class EWeatherChange newWeather; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.ChineseLicensingDefaultCustomizeData
// Size: 0x18 (Inherited: 0x00)
struct FChineseLicensingDefaultCustomizeData {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FName EquipableItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*5b77532293
// Size: 0x14 (Inherited: 0x00)
struct F*5b77532293 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 AircraftCount; // 0x04(0x04)
	float AircraftCooldown; // 0x08(0x04)
	int32 InvalidBeforePhase; // 0x0c(0x04)
	int32 InvalidAfterPhase; // 0x10(0x04)
};

// ScriptStruct TslGame.*a9fc98a744
// Size: 0x24 (Inherited: 0x00)
struct F*a9fc98a744 {
	int32 BlueZonePhase; // 0x00(0x04)
	float StartDelay; // 0x04(0x04)
	float WarningDuration; // 0x08(0x04)
	float ReleaseDuration; // 0x0c(0x04)
	float BlueZoneDamagePerSecond; // 0x10(0x04)
	float RadiusRate; // 0x14(0x04)
	float SpreadRatio; // 0x18(0x04)
	float LandRatio; // 0x1c(0x04)
	int32 CircleAlgorithm; // 0x20(0x04)
};

// ScriptStruct TslGame.*9632ca367e
// Size: 0x40 (Inherited: 0x00)
struct F*9632ca367e {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PlayerNearBuildingMaxDamage; // 0x04(0x04)
	float PlayerNearBuildingMaxDistance; // 0x08(0x04)
	float StrikeInnerRadius; // 0x0c(0x04)
	float StrikeMidRadius; // 0x10(0x04)
	float StrikeOuterRadius; // 0x14(0x04)
	float StartDelay; // 0x18(0x04)
	float StandbyDelay; // 0x1c(0x04)
	float RequestedStandbyDelay; // 0x20(0x04)
	float BombingDelay; // 0x24(0x04)
	int32 MaxMidCount; // 0x28(0x04)
	int32 MaxFarCount; // 0x2c(0x04)
	int32 MinimumBuildingsToDestroy; // 0x30(0x04)
	struct FVector2D BombingInterval; // 0x34(0x08)
	bool bUseBlackZoneCurves; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGame.*87191fef66
// Size: 0x1c (Inherited: 0x00)
struct F*87191fef66 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MultiplierRedZoneExplosionDensity; // 0x04(0x04)
	float MultiplierRedZoneStartTime; // 0x08(0x04)
	float MultiplierRedZoneEndTime; // 0x0c(0x04)
	float MultiplierRedZoneExplosionDelay; // 0x10(0x04)
	float MultiplierRedZoneDuration; // 0x14(0x04)
	float MultiplierRedZoneArea; // 0x18(0x04)
};

// ScriptStruct TslGame.MatchLog
// Size: 0x60 (Inherited: 0x00)
struct FMatchLog {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*f48087c0ae
// Size: 0x08 (Inherited: 0x00)
struct F*f48087c0ae {
	float *e1b8a377cf; // 0x00(0x04)
	float *fed59cb44d; // 0x04(0x04)
};

// ScriptStruct TslGame.*11f48a0f99
// Size: 0x10 (Inherited: 0x00)
struct F*11f48a0f99 {
	float *e1b8a377cf; // 0x00(0x04)
	float *fed59cb44d; // 0x04(0x04)
	float *6bf865ae86; // 0x08(0x04)
	float *e372677027; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7f04408362
// Size: 0x18 (Inherited: 0x00)
struct F*7f04408362 {
	float *133f57b14b; // 0x00(0x04)
	float *d5a54f296a; // 0x04(0x04)
	float *85bea70777; // 0x08(0x04)
	float *36c0b9e4ac; // 0x0c(0x04)
	float *6bf865ae86; // 0x10(0x04)
	float *089abad134; // 0x14(0x04)
};

// ScriptStruct TslGame.*74e93816fd
// Size: 0x14 (Inherited: 0x00)
struct F*74e93816fd {
	bool *94e6714ab2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *99e9bcc5f9; // 0x04(0x04)
	float *ccdd1ef28d; // 0x08(0x04)
	float *57a83f28a5; // 0x0c(0x04)
	float *ce21a37634; // 0x10(0x04)
};

// ScriptStruct TslGame.*a805e914d5
// Size: 0x0c (Inherited: 0x00)
struct F*a805e914d5 {
	float *f916f36b14; // 0x00(0x04)
	float BpBoost; // 0x04(0x04)
	float *80404d61d6; // 0x08(0x04)
};

// ScriptStruct TslGame.*4ffa7cc4bf
// Size: 0x10 (Inherited: 0x00)
struct F*4ffa7cc4bf {
	float SurvivalTimeStart; // 0x00(0x04)
	float TeamSpectatingTimeStart; // 0x04(0x04)
	float SurvivalTimeAccumulated; // 0x08(0x04)
	float TeamSpectatingTimeAccumulated; // 0x0c(0x04)
};

// ScriptStruct TslGame.TslLobbyCustomizingData
// Size: 0x58 (Inherited: 0x00)
struct FTslLobbyCustomizingData {
	enum class ELobbyCustomizingSlotType LobbyCustomizingSlotType; // 0x00(0x01)
	bool SlotIndex; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FTslLobbyItemViewData LobbyItemViewData; // 0x08(0x50)
};

// ScriptStruct TslGame.TslLobbyItemViewData
// Size: 0x50 (Inherited: 0x00)
struct FTslLobbyItemViewData {
	struct FString TargetItemId; // 0x00(0x10)
	struct FString SkinItemId; // 0x10(0x10)
	struct TArray<struct FString> PartIds; // 0x20(0x10)
	struct FString SequenceTag; // 0x30(0x10)
	float InitialScale; // 0x40(0x04)
	float ZoomMultiplier; // 0x44(0x04)
	float ViewModeScaleMin; // 0x48(0x04)
	float ViewModeScaleMax; // 0x4c(0x04)
};

// ScriptStruct TslGame.TslLobbyCharacterCreateType
// Size: 0x50 (Inherited: 0x00)
struct FTslLobbyCharacterCreateType {
	uint32 SlotIndex; // 0x00(0x04)
	bool IsGenderMale; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString NetId; // 0x08(0x10)
	struct FString Nickname; // 0x18(0x10)
	struct FString ClanTag; // 0x28(0x10)
	struct FString ClanplateId; // 0x38(0x10)
	enum class EOutGamePlatformProvider PlatformProvider; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.TslLobbyEmotePlaySetData
// Size: 0x38 (Inherited: 0x00)
struct FTslLobbyEmotePlaySetData {
	struct FName EmoteName; // 0x00(0x08)
	struct FName SectionName; // 0x08(0x08)
	struct FString PlayType; // 0x10(0x10)
	struct FString EmoteLeaderNetId; // 0x20(0x10)
	bool bIsEmoteFollower; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*08180f54e1
// Size: 0x58 (Inherited: 0x08)
struct F*08180f54e1 : FTableRowBase {
	struct TMap<struct FName, struct F*40bbd1898c> TargetStateData; // 0x08(0x50)
};

// ScriptStruct TslGame.*40bbd1898c
// Size: 0x20 (Inherited: 0x00)
struct F*40bbd1898c {
	struct UAnimationAsset* StateAnimation; // 0x00(0x20)
};

// ScriptStruct TslGame.*b4767c0ff6
// Size: 0xa8 (Inherited: 0x00)
struct F*b4767c0ff6 {
	enum class ETslOutGameCloudRequestType *590ff4f6c3; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *5e46a1bc28; // 0x08(0x18)
	float *5e3473d0e8; // 0x20(0x04)
	float *6c64a0fb93; // 0x24(0x04)
	struct FText *c162b9a5f4; // 0x28(0x18)
	struct FText *e4ef67d428; // 0x40(0x18)
	struct TMap<enum class ETslOutGameCloudRequestErrorType, struct FText> *6762a70bbb; // 0x58(0x50)
};

// ScriptStruct TslGame.*e19a130d46
// Size: 0x10 (Inherited: 0x00)
struct F*e19a130d46 {
	struct FName *d175fe2194; // 0x00(0x08)
	bool bEnable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*e1836cc2bf
// Size: 0x20 (Inherited: 0x00)
struct F*e1836cc2bf {
	struct FString AccountId; // 0x00(0x10)
	struct FString LoadingState; // 0x10(0x10)
};

// ScriptStruct TslGame.*d5fe4bb536
// Size: 0x18 (Inherited: 0x00)
struct F*d5fe4bb536 {
	struct FString AccountId; // 0x00(0x10)
	float *de1772b4a3; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.TslReportedInfo
// Size: 0x108 (Inherited: 0x00)
struct FTslReportedInfo {
	struct FString MatchId; // 0x00(0x10)
	struct FTslReportUserInfo UserInfo; // 0x10(0x70)
	struct FTslReporterInfo ReporterInfo; // 0x80(0x48)
	struct FString Cause; // 0xc8(0x10)
	struct TArray<struct FString> DetailCauseList; // 0xd8(0x10)
	struct FString ReportedSessionType; // 0xe8(0x10)
	float MatchElapsedTimeSec; // 0xf8(0x04)
	bool bIsKilledByReportedUser; // 0xfc(0x01)
	bool bIsDBNOedByReportedUser; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	float DamagedAmountByReportedUser; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.TslReporterInfo
// Size: 0x48 (Inherited: 0x00)
struct FTslReporterInfo {
	struct FString AccountId; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	int32 TeamId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ClanId; // 0x28(0x10)
	struct FString ClanTag; // 0x38(0x10)
};

// ScriptStruct TslGame.*d642b59180
// Size: 0x50 (Inherited: 0x00)
struct F*d642b59180 {
	struct FString PlayerName; // 0x00(0x10)
	struct FString FullPlayerName; // 0x10(0x10)
	struct FString ClanName; // 0x20(0x10)
	int32 NumKills; // 0x30(0x04)
	int32 NumAssists; // 0x34(0x04)
	int32 Ranking; // 0x38(0x04)
	int32 TeamId; // 0x3c(0x04)
	int32 NumStartTeamMember; // 0x40(0x04)
	float DamageDealtOnEnemy; // 0x44(0x04)
	bool bIsZombie; // 0x48(0x01)
	enum class EOutGamePlatformProvider PlayerPlatform; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.*d7d88d0f34
// Size: 0x18 (Inherited: 0x00)
struct F*d7d88d0f34 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*a21d8551f6
// Size: 0x20 (Inherited: 0x00)
struct F*a21d8551f6 {
	enum class EReportDetailCauseType ReportDetailCauseType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGame.*ee8d455cd5
// Size: 0x10 (Inherited: 0x00)
struct F*ee8d455cd5 {
	int32 PlayerCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslPlayerStart* PlayerStart; // 0x08(0x08)
};

// ScriptStruct TslGame.*9ddb47d48f
// Size: 0x0c (Inherited: 0x00)
struct F*9ddb47d48f {
	int32 TeamId; // 0x00(0x04)
	int32 SquadIndex; // 0x04(0x04)
	int32 *e1fe54ff27; // 0x08(0x04)
};

// ScriptStruct TslGame.*26bd3d8cb9
// Size: 0x30 (Inherited: 0x00)
struct F*26bd3d8cb9 {
	struct ATslPlayerState* Commander; // 0x00(0x08)
	struct F*ad225cd187 *ad225cd187; // 0x08(0x10)
	struct ATslPlatoonFireSupportController* *3d9179781c; // 0x18(0x08)
	struct U*f16f41a842* *f8039ba9cb; // 0x20(0x08)
	struct U*f16f41a842* *a14e70c264; // 0x28(0x08)
};

// ScriptStruct TslGame.*330a9ede17
// Size: 0x18 (Inherited: 0x00)
struct F*330a9ede17 {
	int32 TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATeam*> Members; // 0x08(0x10)
};

// ScriptStruct TslGame.*699dc04a5b
// Size: 0x18 (Inherited: 0x00)
struct F*699dc04a5b {
	struct AActor* SpottedActor; // 0x00(0x08)
	float SpottedStartTime; // 0x08(0x04)
	float SpottedEndTime; // 0x0c(0x04)
	bool SpottedDuringThisCycle; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*65f3696e1b
// Size: 0x14 (Inherited: 0x00)
struct F*65f3696e1b {
	bool *feca501812; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *fcdae2f2e9; // 0x04(0x0c)
	bool *e72bea105d; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.WorldMarker
// Size: 0x68 (Inherited: 0x00)
struct FWorldMarker {
	bool Show; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize100 MarkerPosition; // 0x04(0x0c)
	struct FVector_NetQuantize100 MarkerOffset; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* TrackedActor; // 0x20(0x08)
	enum class EMarkerType MarkerType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MarkerCreationTime; // 0x2c(0x04)
	float MarkerLifetime; // 0x30(0x04)
	struct FGuid MarkerID; // 0x34(0x10)
	struct FLinearColor MarkerColor; // 0x44(0x10)
	bool bUseSquadColor; // 0x54(0x01)
	bool bIsPassiveMarker; // 0x55(0x01)
	int8 *42bbc64952; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct TArray<int8> *226ce078d0; // 0x58(0x10)
};

// ScriptStruct TslGame.*968e5d5b17
// Size: 0x20 (Inherited: 0x00)
struct F*968e5d5b17 {
	struct AActor* SpottedActor; // 0x00(0x08)
	float SpottingTime; // 0x08(0x04)
	struct FGuid MarkerID; // 0x0c(0x10)
	int8 *42bbc64952; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*a299381029
// Size: 0x08 (Inherited: 0x00)
struct F*a299381029 {
	float Z; // 0x00(0x04)
	enum class ENearClippingLevel Level; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*3c48c0d9c6
// Size: 0x08 (Inherited: 0x00)
struct F*3c48c0d9c6 {
	enum class ENearClippingLevel Level; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct TslGame.LevelLoadingBoostParameters
// Size: 0x10 (Inherited: 0x00)
struct FLevelLoadingBoostParameters {
	float AsyncLoadingTimeLimit; // 0x00(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x04(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x08(0x04)
	int32 LevelStreamingComponentsRegistrationGranularity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*be80d72f85
// Size: 0x0c (Inherited: 0x00)
struct F*be80d72f85 {
	bool bRandomSpawn; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RandomSpawnRadius; // 0x04(0x04)
	float *50ccab64f3; // 0x08(0x04)
};

// ScriptStruct TslGame.*d40e1ee965
// Size: 0x10 (Inherited: 0x00)
struct F*d40e1ee965 {
	int32 *0e6dd34f49; // 0x00(0x04)
	int32 *62c65a2f2b; // 0x04(0x04)
	struct ADroppedItem* *2b634e88f6; // 0x08(0x08)
};

// ScriptStruct TslGame.*720eb4d247
// Size: 0x10 (Inherited: 0x00)
struct F*720eb4d247 {
	struct FName *2e73011f72; // 0x00(0x08)
	int32 *46be55c5c1; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*3cbd353435
// Size: 0x10 (Inherited: 0x00)
struct F*3cbd353435 {
	enum class EConstraintSlotType ConstraintSlotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*fa3080db19 EquipPosition; // 0x04(0x08)
	enum class EEquipableItemSoundType OverrideSoundType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*fa3080db19
// Size: 0x08 (Inherited: 0x00)
struct F*fa3080db19 {
	enum class EEquipSlotID SlotID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Index; // 0x04(0x04)
};

// ScriptStruct TslGame.*5bd7eb8b19
// Size: 0x48 (Inherited: 0x00)
struct F*5bd7eb8b19 {
	struct FRotator *80ba3b91ea; // 0x00(0x0c)
	struct FVector Location; // 0x0c(0x0c)
	struct FVector Direction; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct U*76d2ef26df* ThrowableConfig; // 0x28(0x08)
	int32 *947e9c0b9c; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct ATslCharacter* *cdb74f6dc7; // 0x38(0x08)
	struct UPrimitiveComponent* *d17b8928d9; // 0x40(0x08)
};

// ScriptStruct TslGame.*799e0696d3
// Size: 0x190 (Inherited: 0x00)
struct F*799e0696d3 {
	struct TMap<struct UClass*, struct F*457adccb5c> SlotOffset_Primary_PerWeapon; // 0x00(0x50)
	struct TMap<struct UClass*, struct F*457adccb5c> SlotOffset_Secondary_PerWeapon; // 0x50(0x50)
	struct TMap<struct UClass*, struct F*457adccb5c> SlotOffset_SideArm_PerWeapon; // 0xa0(0x50)
	struct TMap<struct UClass*, struct F*457adccb5c> SlotOffset_Melee_PerWeapon; // 0xf0(0x50)
	struct TMap<struct UClass*, struct F*457adccb5c> SlotOffset_Thrown_PerWeapon; // 0x140(0x50)
};

// ScriptStruct TslGame.*457adccb5c
// Size: 0x18 (Inherited: 0x00)
struct F*457adccb5c {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*ca1fad9579
// Size: 0x78 (Inherited: 0x00)
struct F*ca1fad9579 {
	struct FVector SlotOffset_Primary_Location; // 0x00(0x0c)
	struct FVector SlotOffset_Secondary_Location; // 0x0c(0x0c)
	struct FVector SlotOffset_SideArm_Location; // 0x18(0x0c)
	struct FVector SlotOffset_Melee_Location; // 0x24(0x0c)
	struct FVector SlotOffset_Thrown_Location; // 0x30(0x0c)
	struct FRotator SlotOffset_Primary_Rotation; // 0x3c(0x0c)
	struct FRotator SlotOffset_Secondary_Rotation; // 0x48(0x0c)
	struct FRotator SlotOffset_SideArm_Rotation; // 0x54(0x0c)
	struct FRotator SlotOffset_Melee_Rotation; // 0x60(0x0c)
	struct FRotator SlotOffset_Thrown_Rotation; // 0x6c(0x0c)
};

// ScriptStruct TslGame.*3f28b1cc0f
// Size: 0x08 (Inherited: 0x08)
struct F*3f28b1cc0f : FTableRowBase {
};

// ScriptStruct TslGame.*125ad54661
// Size: 0xd8 (Inherited: 0x00)
struct F*125ad54661 {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CastAnimPlayRate; // 0x04(0x04)
	struct F*ea600104f9 CustomCastAnim; // 0x08(0xc0)
	float CustomCastTimeRemaining; // 0xc8(0x04)
	bool IsPermanentCasting; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float CastBlendingTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct TslGame.*9328db8dea
// Size: 0xb8 (Inherited: 0xb0)
struct F*9328db8dea : F*dfd238f456 {
	bool *23dafa55f0; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct TslGame.*b102709db9
// Size: 0x08 (Inherited: 0x00)
struct F*b102709db9 {
	float *678aae16d2; // 0x00(0x04)
	enum class EDamageVictimActorType *84ffb2c2a8; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*83021f2c21
// Size: 0x140 (Inherited: 0x00)
struct F*83021f2c21 {
	struct UClass* Explosion; // 0x00(0x08)
	float DamagedPercentMax; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* Damaged; // 0x10(0x08)
	struct UClass* Destroyed; // 0x18(0x08)
	struct UAkAudioEvent* EngineSound; // 0x20(0x08)
	struct UAkAudioEvent* EngineSound_Remote; // 0x28(0x08)
	struct UAkAudioEvent* EngineSound_Stop; // 0x30(0x08)
	struct UAkAudioEvent* DelayedExplosion; // 0x38(0x08)
	struct UClass* Muffler; // 0x40(0x08)
	struct UClass* Muffler2; // 0x48(0x08)
	struct UClass* Muffler3; // 0x50(0x08)
	struct UClass* Muffler4; // 0x58(0x08)
	struct UClass* Boost; // 0x60(0x08)
	struct UClass* Boost2; // 0x68(0x08)
	struct UClass* Boost3; // 0x70(0x08)
	struct UClass* Boost4; // 0x78(0x08)
	struct UClass* FrontTrail; // 0x80(0x08)
	struct UClass* RearTrail; // 0x88(0x08)
	struct UClass* Thruster; // 0x90(0x08)
	struct UClass* Thruster2; // 0x98(0x08)
	struct UClass* FrontFoamLeft; // 0xa0(0x08)
	struct UClass* FrontFoamRight; // 0xa8(0x08)
	struct UClass* SpashEffectOverride; // 0xb0(0x08)
	struct UStaticMesh* Rotor; // 0xb8(0x08)
	struct UStaticMesh* RotorDamaged; // 0xc0(0x08)
	struct UClass* ExhaustPopEffect; // 0xc8(0x08)
	struct FFloatRange ImpactNormalForceRange; // 0xd0(0x10)
	struct UClass* ImpactDefault; // 0xe0(0x08)
	int32 MaxImpactCount; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TMap<enum class EPhysicalSurface, struct UClass*> ImpactEffectMap; // 0xf0(0x50)
};

// ScriptStruct TslGame.*2e8bbe7789
// Size: 0x10 (Inherited: 0x00)
struct F*2e8bbe7789 {
	struct UAkAudioEvent* *8a154aa1ff; // 0x00(0x08)
	struct UAkAudioEvent* *d0d54e921c; // 0x08(0x08)
};

// ScriptStruct TslGame.*67fce95b16
// Size: 0x10 (Inherited: 0x08)
struct F*67fce95b16 : FTableRowBase {
	struct FName *2e73011f72; // 0x08(0x08)
};

// ScriptStruct TslGame.*d21249a8c5
// Size: 0x70 (Inherited: 0x00)
struct F*d21249a8c5 {
	struct ATslPlayerState* *d44ca7d636; // 0x00(0x08)
	struct UClass* *631db4da0e; // 0x08(0x08)
	struct F*dad71c8c98 *dad71c8c98; // 0x10(0x20)
	struct FDateTime *5b32e8c47e; // 0x30(0x08)
	enum class EDamageReason *f743161860; // 0x38(0x01)
	enum class EDamageTypeCategory *3cdf7e5eca; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FName *965bf86607; // 0x40(0x08)
	struct TArray<struct FString> *8da9ba04a6; // 0x48(0x10)
	float Distance; // 0x58(0x04)
	bool *1171a8a3c6; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct ATslPlayerState*> *60ec5aaebf; // 0x60(0x10)
};

// ScriptStruct TslGame.*dad71c8c98
// Size: 0x20 (Inherited: 0x00)
struct F*dad71c8c98 {
	struct FName *2e73011f72; // 0x00(0x08)
	struct F*e2478af550 SkinParam; // 0x08(0x10)
	int32 *46be55c5c1; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*5eb36389e7
// Size: 0x120 (Inherited: 0xf8)
struct F*5eb36389e7 : F*f550436cdf {
	struct FStringClassReference ReplaceVehicle; // 0xf8(0x10)
	enum class EVehicleSkinCategory VehicleSkinCategory; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct F*a9d69e1f89> DefaultPartSkinList; // 0x110(0x10)
};

// ScriptStruct TslGame.*f550436cdf
// Size: 0xf8 (Inherited: 0x08)
struct F*f550436cdf : FTableRowBase {
	struct TMap<struct FName, struct F*bba3f67595> SkinnedMeshSet; // 0x08(0x50)
	struct TMap<struct FName, struct F*d1f8d18748> SkinnedMaterialSet; // 0x58(0x50)
	struct TArray<struct FName> SkinnableTagList; // 0xa8(0x10)
	struct FRotator DefaultViewModeRotation; // 0xb8(0x0c)
	struct FRotator PivotModifierRotation; // 0xc4(0x0c)
	struct FVector PCViewModeLocation; // 0xd0(0x0c)
	struct FVector ConsoleViewModeLocation; // 0xdc(0x0c)
	struct FVector RecommendArrowOffset; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.*bba3f67595
// Size: 0x28 (Inherited: 0x00)
struct F*bba3f67595 {
	enum class ESkinMeshType MeshType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* MeshAsset; // 0x08(0x20)
};

// ScriptStruct TslGame.*a9d69e1f89
// Size: 0x10 (Inherited: 0x00)
struct F*a9d69e1f89 {
	enum class EVehiclePartType *cf98085aa3; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *76f3db08e4; // 0x08(0x08)
};

// ScriptStruct TslGame.*c18eab18dd
// Size: 0x178 (Inherited: 0x178)
struct F*c18eab18dd : F*9e5d9652c2 {
};

// ScriptStruct TslGame.*9e5d9652c2
// Size: 0x178 (Inherited: 0xf8)
struct F*9e5d9652c2 : F*f550436cdf {
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0xf8(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x128(0x30)
	struct F*42c0484a8b CustomizableObjectSkin; // 0x158(0x20)
};

// ScriptStruct TslGame.*46fa642119
// Size: 0x178 (Inherited: 0x178)
struct F*46fa642119 : F*9e5d9652c2 {
};

// ScriptStruct TslGame.*1ae51cc792
// Size: 0x178 (Inherited: 0x178)
struct F*1ae51cc792 : F*9e5d9652c2 {
};

// ScriptStruct TslGame.*582e4e73fe
// Size: 0x178 (Inherited: 0x178)
struct F*582e4e73fe : F*9e5d9652c2 {
};

// ScriptStruct TslGame.*18dcaba45a
// Size: 0x170 (Inherited: 0x170)
struct F*18dcaba45a : F*48d2260db5 {
};

// ScriptStruct TslGame.*48d2260db5
// Size: 0x170 (Inherited: 0xf8)
struct F*48d2260db5 : F*f550436cdf {
	char bStatTrak : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FStringAssetReference StatTrakActorClass; // 0x100(0x10)
	struct UAnimMontage* *f0b648ed2d; // 0x110(0x08)
	struct FName *a1eae64103; // 0x118(0x08)
	struct TMap<struct FName, struct FLinearColor> SkinnedColorSet; // 0x120(0x50)
};

// ScriptStruct TslGame.*78d7ab359a
// Size: 0x148 (Inherited: 0x08)
struct F*78d7ab359a : FTableRowBase {
	struct UTexture2D* *ff72077f6e; // 0x08(0x20)
	struct UTexture2D* *b2e07b7df0; // 0x28(0x20)
	struct UTexture2D* *0973b058a2; // 0x48(0x20)
	struct UTexture2D* *ac28e89cc0; // 0x68(0x20)
	struct FName *d54d1785da; // 0x88(0x08)
	struct FSlateColor *6c09333421; // 0x90(0x28)
	struct FSlateColor *19a4c93a76; // 0xb8(0x28)
	struct UMaterial* *f2eb956873; // 0xe0(0x20)
	struct UTexture2D* *99c9359e67; // 0x100(0x20)
	struct UTexture2D* *45655bf1f9; // 0x120(0x20)
	int32 *996daf7580; // 0x140(0x04)
	int32 *590332cda9; // 0x144(0x04)
};

// ScriptStruct TslGame.*2756a7353c
// Size: 0x170 (Inherited: 0x170)
struct F*2756a7353c : F*48d2260db5 {
};

// ScriptStruct TslGame.*baff61a875
// Size: 0x08 (Inherited: 0x00)
struct F*baff61a875 {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
};

// ScriptStruct TslGame.*88dd8a2d11
// Size: 0x10 (Inherited: 0x00)
struct F*88dd8a2d11 {
	struct FName TargetName; // 0x00(0x08)
	struct UMeshComponent* TargetMesh; // 0x08(0x08)
};

// ScriptStruct TslGame.WuLogPlayerCureDebuff
// Size: 0x190 (Inherited: 0x60)
struct FWuLogPlayerCureDebuff : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogCharacter TargetCharacter; // 0xf0(0x90)
	struct FString DebuffName; // 0x180(0x10)
};

// ScriptStruct TslGame.WuLogCharacter
// Size: 0x90 (Inherited: 0x00)
struct FWuLogCharacter {
	struct FString Name; // 0x00(0x10)
	struct FString NetId; // 0x10(0x10)
	int32 TeamId; // 0x20(0x04)
	float Health; // 0x24(0x04)
	struct FVector Location; // 0x28(0x0c)
	int32 Ranking; // 0x34(0x04)
	int32 IndividualRanking; // 0x38(0x04)
	int32 Platform; // 0x3c(0x04)
	struct FString AccountId; // 0x40(0x10)
	bool IsInBlueZone; // 0x50(0x01)
	bool IsInRedZone; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FString> Zone; // 0x58(0x10)
	struct FString MovementBase; // 0x68(0x10)
	bool IsAI; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString ParticipatedState; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogPlayerHungryStage
// Size: 0x108 (Inherited: 0x60)
struct FWuLogPlayerHungryStage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 PreviousStage; // 0xf0(0x04)
	int32 CurrentStage; // 0xf4(0x04)
	struct FString DebuffName; // 0xf8(0x10)
};

// ScriptStruct TslGame.WuLogSLBItemTransmit
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSLBItemTransmit : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FWuLogItem> TransmitedItem; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogItem
// Size: 0x50 (Inherited: 0x00)
struct FWuLogItem {
	struct FString ItemID; // 0x00(0x10)
	int32 StackCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Category; // 0x18(0x10)
	struct FString SubCategory; // 0x28(0x10)
	struct TArray<struct FString> AttachedItems; // 0x38(0x10)
	bool HasRandomAttachments; // 0x48(0x01)
	bool IsUnique; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.WuLogSLBItemReward
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSLBItemReward : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FWuLogItem> Item; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogSLBClearResult
// Size: 0x90 (Inherited: 0x60)
struct FWuLogSLBClearResult : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 Stage; // 0x70(0x04)
	bool Clear; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FString Reason; // 0x78(0x10)
	int32 PlayTime; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.WuLogSLBStartStage
// Size: 0x68 (Inherited: 0x60)
struct FWuLogSLBStartStage : FLogBase {
	int32 Stage; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.WuLogAliveCharacterNum
// Size: 0x90 (Inherited: 0x60)
struct FWuLogAliveCharacterNum : FLogBase {
	int32 AliveAINum; // 0x60(0x04)
	int32 AliveAITeamNum; // 0x64(0x04)
	int32 AlivePlayerNum; // 0x68(0x04)
	int32 AlivePlayerTeamNum; // 0x6c(0x04)
	struct TArray<struct FString> VictimCharacterAccountId; // 0x70(0x10)
	struct TArray<struct FString> ReviveOrRespawnCharacterAccountId; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogBombPlayerDefuse
// Size: 0x108 (Inherited: 0x60)
struct FWuLogBombPlayerDefuse : FLogBase {
	struct FWuLogBombMissionInfo Info; // 0x60(0xa8)
};

// ScriptStruct TslGame.WuLogBombMissionInfo
// Size: 0xa8 (Inherited: 0x00)
struct FWuLogBombMissionInfo {
	struct FWuLogCharacter Character; // 0x00(0x90)
	struct FString Action; // 0x90(0x10)
	int32 CurrentRound; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerPlant
// Size: 0x108 (Inherited: 0x60)
struct FWuLogBombPlayerPlant : FLogBase {
	struct FWuLogBombMissionInfo Info; // 0x60(0xa8)
};

// ScriptStruct TslGame.WuLogBombMoneyDonation
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogBombMoneyDonation : FLogBase {
	struct FWuLogBombPlayerCoinInfo Giver; // 0x60(0x28)
	struct FWuLogBombPlayerCoinInfo Taker; // 0x88(0x28)
	int32 Amount; // 0xb0(0x04)
	int32 CurrentRound; // 0xb4(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerCoinInfo
// Size: 0x28 (Inherited: 0x00)
struct FWuLogBombPlayerCoinInfo {
	struct FString CharacterName; // 0x00(0x10)
	struct FString AccountId; // 0x10(0x10)
	int32 PresentCurrency; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogBombItemBuy
// Size: 0x150 (Inherited: 0x60)
struct FWuLogBombItemBuy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 PresentCurrency; // 0xf0(0x04)
	int32 Cost; // 0xf4(0x04)
	int32 CurrentRound; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FWuLogItem Item; // 0x100(0x50)
};

// ScriptStruct TslGame.WuLogBombMatchResult
// Size: 0x98 (Inherited: 0x60)
struct FWuLogBombMatchResult : FLogBase {
	struct FWuLogBombMatchResultTeamInfo VictoryTeam; // 0x60(0x14)
	struct FWuLogBombMatchResultTeamInfo DefeatTeam; // 0x74(0x14)
	struct FString FinishCause; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogBombMatchResultTeamInfo
// Size: 0x14 (Inherited: 0x00)
struct FWuLogBombMatchResultTeamInfo {
	int32 TeamId; // 0x00(0x04)
	int32 TotalKills; // 0x04(0x04)
	int32 TotalAssists; // 0x08(0x04)
	int32 TotalPlantCount; // 0x0c(0x04)
	int32 TotalDefuseCount; // 0x10(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerIncome
// Size: 0x110 (Inherited: 0x60)
struct FWuLogBombPlayerIncome : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 Amount; // 0xf0(0x04)
	int32 CurrentRound; // 0xf4(0x04)
	struct FWuBombRoundSummary RoundSummary; // 0xf8(0x14)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuBombRoundSummary
// Size: 0x14 (Inherited: 0x00)
struct FWuBombRoundSummary {
	int32 KillCount; // 0x00(0x04)
	int32 AssistCount; // 0x04(0x04)
	bool PlantOrDefuse; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 DefeatStreak; // 0x0c(0x04)
	bool DeciveRound; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.WuLogBombRoundFinished
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogBombRoundFinished : FLogBase {
	struct FWuLogBombRoundFinishTeamInfo VictoryTeam; // 0x60(0x20)
	struct FWuLogBombRoundFinishTeamInfo DefeatTeam; // 0x80(0x20)
	struct FString FinishCause; // 0xa0(0x10)
	int32 CurrentRound; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.WuLogBombRoundFinishTeamInfo
// Size: 0x20 (Inherited: 0x00)
struct FWuLogBombRoundFinishTeamInfo {
	int32 TeamId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TeamType; // 0x08(0x10)
	int32 AlivePlayerCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuLogTireReplaced
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogTireReplaced : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle ParentVehicle; // 0xf0(0x58)
	struct FWuLogItem Item; // 0x148(0x50)
	float Durability; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// ScriptStruct TslGame.WuLogVehicle
// Size: 0x58 (Inherited: 0x00)
struct FWuLogVehicle {
	struct FString VehicleType; // 0x00(0x10)
	struct FString SpawnId; // 0x10(0x10)
	struct FString VehicleId; // 0x20(0x10)
	int32 VehicleUniqueId; // 0x30(0x04)
	int32 SeatIndex; // 0x34(0x04)
	float HealthPercent; // 0x38(0x04)
	float FeulPercent; // 0x3c(0x04)
	float RotationPitch; // 0x40(0x04)
	float AltitudeAbs; // 0x44(0x04)
	float AltitudeRel; // 0x48(0x04)
	float Velocity; // 0x4c(0x04)
	bool IsWheelsInAir; // 0x50(0x01)
	bool IsInWaterVolume; // 0x51(0x01)
	bool IsEngineOn; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// ScriptStruct TslGame.WuLogTirePulledOut
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogTirePulledOut : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle ParentVehicle; // 0xf0(0x58)
	struct FWuLogItem Item; // 0x148(0x50)
	float Durability; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// ScriptStruct TslGame.WuLogSoftRoleRepairkitUse
// Size: 0x288 (Inherited: 0x60)
struct FWuLogSoftRoleRepairkitUse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	struct FWuLogItem RepairedItem; // 0x140(0x50)
	struct FWuLogVehicle RepairedVehicle; // 0x190(0x58)
	struct FWuLogCharacter TargetCharacter; // 0x1e8(0x90)
	float PreviousRepairedStatus; // 0x278(0x04)
	float RepairedStatus; // 0x27c(0x04)
	int32 Remainedcount; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
};

// ScriptStruct TslGame.WuLogRevivalAircraft
// Size: 0x78 (Inherited: 0x60)
struct FWuLogRevivalAircraft : FLogBase {
	int32 phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FString> ReviveAccounts; // 0x68(0x10)
};

// ScriptStruct TslGame.WuLogSuccessRegisterBluechip
// Size: 0x90 (Inherited: 0x60)
struct FWuLogSuccessRegisterBluechip : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString RegisteredByAccountId; // 0x70(0x10)
	struct FString RegisteringMethod; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogTryRegisterBluechip
// Size: 0x90 (Inherited: 0x60)
struct FWuLogTryRegisterBluechip : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString RegisteredByAccountId; // 0x70(0x10)
	struct FString RegisteringMethod; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogBluechipLooted
// Size: 0x80 (Inherited: 0x60)
struct FWuLogBluechipLooted : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString LootingUserAccountId; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogBluechipRemove
// Size: 0x70 (Inherited: 0x60)
struct FWuLogBluechipRemove : FLogBase {
	struct FString AccountId; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogBluechipCreate
// Size: 0x78 (Inherited: 0x60)
struct FWuLogBluechipCreate : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 phase; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRejectReconnect
// Size: 0x70 (Inherited: 0x60)
struct FWuLogPlayerRejectReconnect : FLogBase {
	struct FString AccountId; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogPlayerDisconnected
// Size: 0x128 (Inherited: 0x60)
struct FWuLogPlayerDisconnected : FLogBase {
	struct FWuGameResultPerPlayer GameResult; // 0x60(0xb0)
	struct FString Reason; // 0x110(0x10)
	bool IsRewardConfirmed; // 0x120(0x01)
	bool IsPenaltyWaived; // 0x121(0x01)
	bool ExitToDesktop; // 0x122(0x01)
	bool WasKicked; // 0x123(0x01)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct TslGame.WuGameResultPerPlayer
// Size: 0xb0 (Inherited: 0x00)
struct FWuGameResultPerPlayer {
	struct FString PlayerNetId; // 0x00(0x10)
	int32 Rank; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString GameResult; // 0x18(0x10)
	int32 TeamId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FWuGameResultStatsPerPlayer Stats; // 0x30(0x68)
	bool IsBpGrinder; // 0x98(0x01)
	bool IsXpGrinder; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString AccountId; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuGameResultStatsPerPlayer
// Size: 0x68 (Inherited: 0x00)
struct FWuGameResultStatsPerPlayer {
	int32 KillCount; // 0x00(0x04)
	float Score; // 0x04(0x04)
	float Xp; // 0x08(0x04)
	float DistanceOnFoot; // 0x0c(0x04)
	float DistanceOnSwim; // 0x10(0x04)
	float DistanceOnVehicle; // 0x14(0x04)
	float DistanceOnParachute; // 0x18(0x04)
	float DistanceOnFreefall; // 0x1c(0x04)
	struct FWuLogPlayTimeRecord PlayTime; // 0x20(0x08)
	struct FWuBpRewardDetail BpRewardDetail; // 0x28(0x18)
	struct FWuArcadeRewardDetail ArcadeRewardDetail; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FWuStatTrakData> StatTrakDataPairs; // 0x48(0x10)
	struct TArray<struct FWuStatTrakData> HeadshotStatTrakDataPairs; // 0x58(0x10)
};

// ScriptStruct TslGame.WuStatTrakData
// Size: 0x18 (Inherited: 0x00)
struct FWuStatTrakData {
	struct FString GameItemId; // 0x00(0x10)
	int32 Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuArcadeRewardDetail
// Size: 0x04 (Inherited: 0x00)
struct FWuArcadeRewardDetail {
	int32 ByPlayTime; // 0x00(0x04)
};

// ScriptStruct TslGame.WuBpRewardDetail
// Size: 0x18 (Inherited: 0x00)
struct FWuBpRewardDetail {
	float ByPlayTime; // 0x00(0x04)
	float ByRanking; // 0x04(0x04)
	float ByKills; // 0x08(0x04)
	float ByDamageDealt; // 0x0c(0x04)
	float BoostAmount; // 0x10(0x04)
	float ByModeScore; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogPlayTimeRecord
// Size: 0x08 (Inherited: 0x00)
struct FWuLogPlayTimeRecord {
	int32 SurvivalTime; // 0x00(0x04)
	int32 TeamSpectatingTime; // 0x04(0x04)
};

// ScriptStruct TslGame.WuLogPlayerDisconnectedByQuit
// Size: 0x118 (Inherited: 0x60)
struct FWuLogPlayerDisconnectedByQuit : FLogBase {
	struct FWuGameResultPerPlayer GameResult; // 0x60(0xb0)
	bool IsPenaltyWaived; // 0x110(0x01)
	bool ExitToDesktop; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct TslGame.WuLogPlayerDisconnectedByTimeout
// Size: 0x118 (Inherited: 0x60)
struct FWuLogPlayerDisconnectedByTimeout : FLogBase {
	struct FWuGameResultPerPlayer GameResult; // 0x60(0xb0)
	bool IsPenaltyWaived; // 0x110(0x01)
	bool ExitToDesktop; // 0x111(0x01)
	bool WasKicked; // 0x112(0x01)
	char pad_113[0x5]; // 0x113(0x05)
};

// ScriptStruct TslGame.WuLogPlayerConnected
// Size: 0x88 (Inherited: 0x60)
struct FWuLogPlayerConnected : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	bool IsReconnect; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString Reason; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogCrowbarInteraction
// Size: 0x100 (Inherited: 0x60)
struct FWuLogCrowbarInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString TargetName; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogUsePresetSlotIngame
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogUsePresetSlotIngame : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 SlotIndex; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLog1vs1ArenaMatching
// Size: 0xd8 (Inherited: 0x60)
struct FWuLog1vs1ArenaMatching : FLogBase {
	struct FString SearchStartTime; // 0x60(0x10)
	struct FWuLog1vs1ArenaTimeRecord MatchingTimeRecord; // 0x70(0x20)
	struct TArray<struct FString> SavedItems; // 0x90(0x10)
	struct TArray<int32> Results; // 0xa0(0x10)
	int32 RoundCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString AccountId; // 0xb8(0x10)
	struct FString NetId; // 0xc8(0x10)
};

// ScriptStruct TslGame.WuLog1vs1ArenaTimeRecord
// Size: 0x20 (Inherited: 0x00)
struct FWuLog1vs1ArenaTimeRecord {
	struct FString StartTime; // 0x00(0x10)
	struct FString EndTime; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLog1vs1ArenaMatchingSearch
// Size: 0xa0 (Inherited: 0x60)
struct FWuLog1vs1ArenaMatchingSearch : FLogBase {
	struct FWuLog1vs1ArenaTimeRecord TimeRecord; // 0x60(0x20)
	struct FString AccountId; // 0x80(0x10)
	struct FString NetId; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLog1vs1ArenaOberserver
// Size: 0x90 (Inherited: 0x60)
struct FWuLog1vs1ArenaOberserver : FLogBase {
	struct TArray<struct FWuLog1vs1ArenaTimeRecord> TimeRecords; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
	struct FString NetId; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogMinimapTeleport
// Size: 0x80 (Inherited: 0x60)
struct FWuLogMinimapTeleport : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct TArray<struct FWuLogMinimapTeleportData> TeleportDatas; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogMinimapTeleportData
// Size: 0x18 (Inherited: 0x00)
struct FWuLogMinimapTeleportData {
	int32 TeleportType; // 0x00(0x04)
	int32 PracticeType; // 0x04(0x04)
	struct FString DestinationActorName; // 0x08(0x10)
};

// ScriptStruct TslGame.WuLogAbilitySummer
// Size: 0x100 (Inherited: 0x60)
struct FWuLogAbilitySummer : FLogBase {
	struct FWuLogCharacter Owner; // 0x60(0x90)
	struct TArray<struct FWuLogAbilityData> AbilityDataArr; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogAbilityData
// Size: 0x20 (Inherited: 0x00)
struct FWuLogAbilityData {
	struct FString AbilityID; // 0x00(0x10)
	int32 TotalActivate; // 0x10(0x04)
	int32 TotalSuccess; // 0x14(0x04)
	int32 TotalCancel; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuLogAbilityActivate
// Size: 0x120 (Inherited: 0x60)
struct FWuLogAbilityActivate : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Owner; // 0x68(0x90)
	struct FWuLogAbility Ability; // 0xf8(0x20)
	int32 Index; // 0x118(0x04)
	bool IsSuccess; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
};

// ScriptStruct TslGame.WuLogAbility
// Size: 0x20 (Inherited: 0x00)
struct FWuLogAbility {
	struct FString AbilityID; // 0x00(0x10)
	struct TArray<struct FString> Attributes; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromChickenBox
// Size: 0x148 (Inherited: 0x60)
struct FWuLogItemPickupFromChickenBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	int32 ChickenBoxId; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// ScriptStruct TslGame.WuLogZDF2StageData
// Size: 0x98 (Inherited: 0x60)
struct FWuLogZDF2StageData : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString Timestamp; // 0x70(0x10)
	int32 StageNumber; // 0x80(0x04)
	bool IsCraftingTime; // 0x84(0x01)
	bool IsStart; // 0x85(0x01)
	bool IsLastStage; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
	struct TArray<struct FWuLogZDF2PlayerData> PlayersData; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogZDF2PlayerData
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogZDF2PlayerData : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 HoldingCoinNum; // 0xf0(0x04)
	int32 EarnedCoinNum; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogRacingModeCoursePlayData
// Size: 0x98 (Inherited: 0x60)
struct FWuLogRacingModeCoursePlayData : FLogBase {
	int32 CourseNum; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString AccountId; // 0x68(0x10)
	int32 FinalRanking; // 0x78(0x04)
	int32 DeathCount; // 0x7c(0x04)
	int32 KillCount; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FWuLogRacingModeCheckPointPlayData> CheckPoinPlayDatas; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogRacingModeCheckPointPlayData
// Size: 0x80 (Inherited: 0x60)
struct FWuLogRacingModeCheckPointPlayData : FLogBase {
	int32 PassedCheckPointNum; // 0x60(0x04)
	float CheckPointPassedTime; // 0x64(0x04)
	int32 IndividualRanking; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString Passed_Vehicle; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogSandboxItemUsageCount
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSandboxItemUsageCount : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FWuLogSandboxItemDataUsage> ItemsPerCategory; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogSandboxItemDataUsage
// Size: 0x20 (Inherited: 0x00)
struct FWuLogSandboxItemDataUsage {
	struct FString ItemCategory; // 0x00(0x10)
	struct TArray<struct FWuStringIntPair> Items; // 0x10(0x10)
};

// ScriptStruct TslGame.WuStringIntPair
// Size: 0x18 (Inherited: 0x00)
struct FWuStringIntPair {
	struct FString First; // 0x00(0x10)
	int32 second; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogRadioMessage
// Size: 0x100 (Inherited: 0x60)
struct FWuLogRadioMessage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString MessageCategory; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogAtoZTutorialAllMissionClear
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogAtoZTutorialAllMissionClear : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogItemTypeOverrideZone
// Size: 0x78 (Inherited: 0x60)
struct FWuLogItemTypeOverrideZone : FLogBase {
	int32 ItemTypeOverrideZone; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FWuLogItemTypeOverrideZoneData> ItemTypeOverrideZoneDatas; // 0x68(0x10)
};

// ScriptStruct TslGame.WuLogItemTypeOverrideZoneData
// Size: 0x80 (Inherited: 0x60)
struct FWuLogItemTypeOverrideZoneData : FLogBase {
	struct FString OverrideType; // 0x60(0x10)
	struct FVector ItemTypeOverrideZonePosition; // 0x70(0x0c)
	float ItemTypeOverrideZoneRadius; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRedeploy
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogPlayerRedeploy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 phase; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRedeployBRStart
// Size: 0x78 (Inherited: 0x60)
struct FWuLogPlayerRedeployBRStart : FLogBase {
	struct TArray<struct FWuLogCharacter> Characters; // 0x60(0x10)
	int32 phase; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogUsedBlueBlockerAndReturnedToSafeZone
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogUsedBlueBlockerAndReturnedToSafeZone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 NumTimesUsedBlueBlockerAndReturnedToSafeZone; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogBlueBlockerAbsorbBlueZoneDamage
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogBlueBlockerAbsorbBlueZoneDamage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	float DamageAbsorbed; // 0xf0(0x04)
	int32 NumTimesBlueZoneAbsorbed; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogVoiceChatUseage
// Size: 0x90 (Inherited: 0x60)
struct FWuLogVoiceChatUseage : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct TArray<struct FWuStringFloatPair> Option; // 0x70(0x10)
	float PushTime; // 0x80(0x04)
	float TimeSpent; // 0x84(0x04)
	int32 PlatformProvider; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.WuStringFloatPair
// Size: 0x18 (Inherited: 0x00)
struct FWuStringFloatPair {
	struct FString First; // 0x00(0x10)
	float second; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuEventDamage
// Size: 0x68 (Inherited: 0x10)
struct FWuEventDamage : FGameEventBase {
	bool IsDetailStatus; // 0x10(0x01)
	bool IsVictimMe; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float Damage; // 0x14(0x04)
	struct FString DamageTypeCategory; // 0x18(0x10)
	struct FString AttackerName; // 0x28(0x10)
	struct FVector AttackerLocation; // 0x38(0x0c)
	int32 AttackerTeamId; // 0x44(0x04)
	struct FString VictimName; // 0x48(0x10)
	struct FVector VictimLocation; // 0x58(0x0c)
	int32 VictimTeamId; // 0x64(0x04)
};

// ScriptStruct TslGame.WuEventKill
// Size: 0x88 (Inherited: 0x10)
struct FWuEventKill : FGameEventBase {
	bool IsDetailStatus; // 0x10(0x01)
	bool IsKillerMe; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString KillerName; // 0x18(0x10)
	struct FVector KillerLocation; // 0x28(0x0c)
	int32 KillerTeamId; // 0x34(0x04)
	bool IsVictimMe; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString VictimName; // 0x40(0x10)
	struct FVector VictimLocation; // 0x50(0x0c)
	int32 VictimTeamId; // 0x5c(0x04)
	struct FString DamageCauser; // 0x60(0x10)
	struct FString DamageReason; // 0x70(0x10)
	bool IsGroggy; // 0x80(0x01)
	bool IsStealKilled; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// ScriptStruct TslGame.WuEventMatchResult
// Size: 0x38 (Inherited: 0x10)
struct FWuEventMatchResult : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
	int32 StartPlayerCount; // 0x20(0x04)
	int32 StartTeamCount; // 0x24(0x04)
	struct TArray<struct FWuEventDataTeamResult> Teams; // 0x28(0x10)
};

// ScriptStruct TslGame.WuEventDataTeamResult
// Size: 0x18 (Inherited: 0x00)
struct FWuEventDataTeamResult {
	int32 TeamId; // 0x00(0x04)
	int32 Ranking; // 0x04(0x04)
	struct TArray<struct FWuEventDataPlayerResult> Members; // 0x08(0x10)
};

// ScriptStruct TslGame.WuEventDataPlayerResult
// Size: 0x18 (Inherited: 0x00)
struct FWuEventDataPlayerResult {
	struct FString PlayerName; // 0x00(0x10)
	int32 KillCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuEventPlayerMatchResult
// Size: 0x48 (Inherited: 0x10)
struct FWuEventPlayerMatchResult : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
	int32 StartPlayerCount; // 0x20(0x04)
	int32 StartTeamCount; // 0x24(0x04)
	struct FString PlayerName; // 0x28(0x10)
	int32 Ranking; // 0x38(0x04)
	int32 KillCount; // 0x3c(0x04)
	int32 HeadShotCount; // 0x40(0x04)
	float GivenDamages; // 0x44(0x04)
};

// ScriptStruct TslGame.WuEventMatchStatus
// Size: 0xc8 (Inherited: 0x10)
struct FWuEventMatchStatus : FGameEventBase {
	bool IsDetailStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString MatchId; // 0x18(0x10)
	struct FString TeamMode; // 0x28(0x10)
	struct FString CameraMode; // 0x38(0x10)
	struct FString MatchState; // 0x48(0x10)
	int32 ElapsedTime; // 0x58(0x04)
	int32 BlueZonePhase; // 0x5c(0x04)
	bool IsBlueZoneMoving; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float BluezoneRadius; // 0x64(0x04)
	struct FVector BlueZoneLocation; // 0x68(0x0c)
	float WhiteZoneRadius; // 0x74(0x04)
	struct FVector WhiteZoneLocation; // 0x78(0x0c)
	float RedZoneRadius; // 0x84(0x04)
	struct FVector RedZoneLocation; // 0x88(0x0c)
	float BlackZoneRadius; // 0x94(0x04)
	struct FVector BlackZoneLocation; // 0x98(0x0c)
	int32 StartPlayerCount; // 0xa4(0x04)
	int32 AlivePlayerCount; // 0xa8(0x04)
	int32 StartTeamCount; // 0xac(0x04)
	int32 AliveTeamCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FWuEventDataPlayerInfo> PlayerInfos; // 0xb8(0x10)
};

// ScriptStruct TslGame.WuEventDataPlayerInfo
// Size: 0x50 (Inherited: 0x00)
struct FWuEventDataPlayerInfo {
	struct FString PlayerName; // 0x00(0x10)
	int32 TeamId; // 0x10(0x04)
	struct FVector Location; // 0x14(0x0c)
	float Health; // 0x20(0x04)
	float BoostGauge; // 0x24(0x04)
	struct FString State; // 0x28(0x10)
	struct FString ArmedWeapon; // 0x38(0x10)
	int32 ArmedAmmoCount; // 0x48(0x04)
	int32 InventoryAmmoCount; // 0x4c(0x04)
};

// ScriptStruct TslGame.WuEventPlayerStatus
// Size: 0xa0 (Inherited: 0x10)
struct FWuEventPlayerStatus : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
	struct FString MyPlayerName; // 0x20(0x10)
	bool IsSpetating; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector SpectatingCameraLocation; // 0x34(0x0c)
	struct FWuEventDataPlayerInfo CurrentPlayerInfo; // 0x40(0x50)
	struct TArray<struct FWuEventDataPlayerInfo> TeamMatesInfo; // 0x90(0x10)
};

// ScriptStruct TslGame.WuEventMatchLeave
// Size: 0x20 (Inherited: 0x10)
struct FWuEventMatchLeave : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
};

// ScriptStruct TslGame.WuEventMatchJoin
// Size: 0x48 (Inherited: 0x10)
struct FWuEventMatchJoin : FGameEventBase {
	struct FString MatchId; // 0x10(0x10)
	struct FString TeamMode; // 0x20(0x10)
	struct FString CameraMode; // 0x30(0x10)
	bool IsDetailObserver; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct TslGame.WuLogUseBrokenElectronics
// Size: 0x100 (Inherited: 0x60)
struct FWuLogUseBrokenElectronics : FLogBase {
	struct FString ElectronicsType; // 0x60(0x10)
	struct FWuLogCharacter Character; // 0x70(0x90)
};

// ScriptStruct TslGame.WuLogSpecialZoneSpawn
// Size: 0x80 (Inherited: 0x60)
struct FWuLogSpecialZoneSpawn : FLogBase {
	struct FString ZoneType; // 0x60(0x10)
	struct FVector SpawnedPosition; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogIndoorRangeScore
// Size: 0x90 (Inherited: 0x60)
struct FWuLogIndoorRangeScore : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString NetId; // 0x70(0x10)
	struct TArray<struct FWuIntIntPair> Score; // 0x80(0x10)
};

// ScriptStruct TslGame.WuIntIntPair
// Size: 0x08 (Inherited: 0x00)
struct FWuIntIntPair {
	int32 First; // 0x00(0x04)
	int32 second; // 0x04(0x04)
};

// ScriptStruct TslGame.WuLogChangeTargetDistance
// Size: 0x88 (Inherited: 0x60)
struct FWuLogChangeTargetDistance : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString NetId; // 0x70(0x10)
	int32 Distance; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.WuLogEnterIndoorRange
// Size: 0x88 (Inherited: 0x60)
struct FWuLogEnterIndoorRange : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString NetId; // 0x70(0x10)
	bool bIsExit; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct TslGame.WuLogSpray
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSpray : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString SprayName; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogHelmetHide
// Size: 0x68 (Inherited: 0x60)
struct FWuLogHelmetHide : FLogBase {
	bool IsHat; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.WuLogLobbyMusic
// Size: 0x70 (Inherited: 0x60)
struct FWuLogLobbyMusic : FLogBase {
	struct FString MusicEventName; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogArenaRoundEnd
// Size: 0x88 (Inherited: 0x60)
struct FWuLogArenaRoundEnd : FLogBase {
	int32 Round; // 0x60(0x04)
	bool IsLastRound; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FWuLogArenaEndData> Arenas; // 0x68(0x10)
	struct TArray<struct FWuLogTeamInfoData> Teams; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogTeamInfoData
// Size: 0x30 (Inherited: 0x00)
struct FWuLogTeamInfoData {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	int32 TotalKills; // 0x08(0x04)
	int32 TotalMoney; // 0x0c(0x04)
	struct FString KeyPlayer; // 0x10(0x10)
	struct TArray<struct FWuLogCharacterWeapons> Characters; // 0x20(0x10)
};

// ScriptStruct TslGame.WuLogCharacterWeapons
// Size: 0xc8 (Inherited: 0x00)
struct FWuLogCharacterWeapons {
	struct FWuLogCharacter Character; // 0x00(0x90)
	struct FString PrimaryWeaponFirst; // 0x90(0x10)
	struct FString PrimaryWeaponSecond; // 0xa0(0x10)
	struct FString SecondaryWeapon; // 0xb0(0x10)
	int32 SpawnKitIndex; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogArenaEndData
// Size: 0x08 (Inherited: 0x00)
struct FWuLogArenaEndData {
	int32 ArenaID; // 0x00(0x04)
	int32 WinnerTeamId; // 0x04(0x04)
};

// ScriptStruct TslGame.WuLogArenaRoundStart
// Size: 0x78 (Inherited: 0x60)
struct FWuLogArenaRoundStart : FLogBase {
	int32 Round; // 0x60(0x04)
	bool IsLastRound; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FWuLogArenaStartData> Arenas; // 0x68(0x10)
};

// ScriptStruct TslGame.WuLogArenaStartData
// Size: 0x18 (Inherited: 0x00)
struct FWuLogArenaStartData {
	int32 ArenaID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWuLogTeamInfoData> Teams; // 0x08(0x10)
};

// ScriptStruct TslGame.WuLogArenaLoadoutBuy
// Size: 0x98 (Inherited: 0x60)
struct FWuLogArenaLoadoutBuy : FLogBase {
	struct FString PlayerName; // 0x60(0x10)
	int32 Sum; // 0x70(0x04)
	int32 ItemsNum; // 0x74(0x04)
	struct FString ItemID; // 0x78(0x10)
	struct FString ReplacedItemId; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogArenaCurrencyChange
// Size: 0x88 (Inherited: 0x60)
struct FWuLogArenaCurrencyChange : FLogBase {
	struct FString PlayerName; // 0x60(0x10)
	int32 CurrencyDif; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString Source; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogArenaScreenOpen
// Size: 0x80 (Inherited: 0x60)
struct FWuLogArenaScreenOpen : FLogBase {
	struct FString PlayerName; // 0x60(0x10)
	struct FString ScreenName; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogArenaGameStatePeriodic
// Size: 0xe8 (Inherited: 0x60)
struct FWuLogArenaGameStatePeriodic : FLogBase {
	struct FWuLogArenaGameState ArenaGameState; // 0x60(0x88)
};

// ScriptStruct TslGame.WuLogArenaGameState
// Size: 0x88 (Inherited: 0x60)
struct FWuLogArenaGameState : FLogBase {
	int32 ElapsedTime; // 0x60(0x04)
	int32 NumAliveTeams; // 0x64(0x04)
	int32 NumJoinPlayers; // 0x68(0x04)
	int32 NumStartPlayers; // 0x6c(0x04)
	int32 NumAlivePlayers; // 0x70(0x04)
	int32 Round; // 0x74(0x04)
	struct TArray<struct FWuLogArena> Arenas; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogArena
// Size: 0x24 (Inherited: 0x00)
struct FWuLogArena {
	struct FVector SafetyZonePosition; // 0x00(0x0c)
	float SafetyZoneRadius; // 0x0c(0x04)
	struct FVector PoisonGasWarningPosition; // 0x10(0x0c)
	float PoisonGasWarningRadius; // 0x1c(0x04)
	int32 ArenaID; // 0x20(0x04)
};

// ScriptStruct TslGame.WuLogInPacketStat
// Size: 0xa8 (Inherited: 0x60)
struct FWuLogInPacketStat : FLogBase {
	struct FString LeagueType; // 0x60(0x10)
	struct FString ModeName; // 0x70(0x10)
	struct FString Name; // 0x80(0x10)
	struct FString AccountId; // 0x90(0x10)
	float ElapsedTimeSec; // 0xa0(0x04)
	int32 NumOutOfOrder; // 0xa4(0x04)
};

// ScriptStruct TslGame.WuLogOutPacketLoss
// Size: 0xd0 (Inherited: 0x60)
struct FWuLogOutPacketLoss : FLogBase {
	struct FString LeagueType; // 0x60(0x10)
	struct FString ModeName; // 0x70(0x10)
	struct FString Name; // 0x80(0x10)
	struct FString AccountId; // 0x90(0x10)
	float ElapsedTimeSec; // 0xa0(0x04)
	int32 NumOutBunch; // 0xa4(0x04)
	int32 NumOutPacket; // 0xa8(0x04)
	int32 NumOutPacketNaked; // 0xac(0x04)
	struct TArray<struct FWuLostPacketData> NakedPacketDataList; // 0xb0(0x10)
	struct TArray<struct FWuLostBunchData> NakedBunchDataList; // 0xc0(0x10)
};

// ScriptStruct TslGame.WuLostBunchData
// Size: 0x18 (Inherited: 0x00)
struct FWuLostBunchData {
	int32 NumSent; // 0x00(0x04)
	int32 NumLoss; // 0x04(0x04)
	struct FString Content; // 0x08(0x10)
};

// ScriptStruct TslGame.WuLostPacketData
// Size: 0x0c (Inherited: 0x00)
struct FWuLostPacketData {
	int32 NumLoss; // 0x00(0x04)
	int32 SizeBitsPlain; // 0x04(0x04)
	int32 SizeBitsEncryped; // 0x08(0x04)
};

// ScriptStruct TslGame.WuLogParachuteFollowReleaseByHoldKey
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogParachuteFollowReleaseByHoldKey : FLogBase {
	struct FWuLogCharacter UserInfo; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogParachuteFollow
// Size: 0x118 (Inherited: 0x60)
struct FWuLogParachuteFollow : FLogBase {
	struct FWuLogCharacter UserInfo; // 0x60(0x90)
	bool IsFollower; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32 FollowerNum; // 0xf4(0x04)
	struct FString TargetName; // 0xf8(0x10)
	struct FString ModeName; // 0x108(0x10)
};

// ScriptStruct TslGame.WuLogPlayerMovementBaseChanged
// Size: 0x118 (Inherited: 0x60)
struct FWuLogPlayerMovementBaseChanged : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString NewMovementBase; // 0xf0(0x10)
	struct FString OldMovementBase; // 0x100(0x10)
	float MovedDistance; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct TslGame.WuLogPlayerScore
// Size: 0x138 (Inherited: 0x60)
struct FWuLogPlayerScore : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 KillScore; // 0xf0(0x04)
	int32 KillCount; // 0xf4(0x04)
	int32 DeathScore; // 0xf8(0x04)
	int32 DeathCount; // 0xfc(0x04)
	int32 AssistScore; // 0x100(0x04)
	int32 AssistCount; // 0x104(0x04)
	int32 ChainKillScore; // 0x108(0x04)
	int32 ChainKillCount; // 0x10c(0x04)
	int32 WinRoundScore; // 0x110(0x04)
	int32 WinRoundCount; // 0x114(0x04)
	int32 DefeatRoundScore; // 0x118(0x04)
	int32 DefeatRoundCount; // 0x11c(0x04)
	int32 WinMatchScore; // 0x120(0x04)
	int32 WinMatchCount; // 0x124(0x04)
	int32 DefeatMatchScore; // 0x128(0x04)
	int32 DefeatMatchCount; // 0x12c(0x04)
	int32 TotalScore; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct TslGame.WuDevLog
// Size: 0x80 (Inherited: 0x60)
struct FWuDevLog : FLogBase {
	struct FString DevLogKey; // 0x60(0x10)
	struct TArray<struct FWuDevLogElement> DevLogs; // 0x70(0x10)
};

// ScriptStruct TslGame.WuDevLogElement
// Size: 0x20 (Inherited: 0x00)
struct FWuDevLogElement {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLogPlayerHealed
// Size: 0x1a8 (Inherited: 0x60)
struct FWuLogPlayerHealed : FLogBase {
	struct FWuLogCharacter Healer; // 0x60(0x90)
	struct FWuLogCharacter Target; // 0xf0(0x90)
	int32 HealId; // 0x180(0x04)
	float Healamount; // 0x184(0x04)
	struct FString HealCauserName; // 0x188(0x10)
	struct FString HealTypeCategory; // 0x198(0x10)
};

// ScriptStruct TslGame.WuLogPlayerBuffed
// Size: 0x1a8 (Inherited: 0x60)
struct FWuLogPlayerBuffed : FLogBase {
	struct FWuLogCharacter Buffer; // 0x60(0x90)
	struct FWuLogCharacter Target; // 0xf0(0x90)
	int32 BuffId; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FString BuffCauserName; // 0x188(0x10)
	struct FString BuffType; // 0x198(0x10)
};

// ScriptStruct TslGame.WuLogItemSkillSpawn
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemSkillSpawn : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogCraftResult
// Size: 0x178 (Inherited: 0x60)
struct FWuLogCraftResult : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	bool SUCCESS; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FString FailedReason; // 0xf8(0x10)
	struct FString CraftItem; // 0x108(0x10)
	struct FWuLogItem ItemResult; // 0x118(0x50)
	struct TArray<struct FWuLogItem> Materials; // 0x168(0x10)
};

// ScriptStruct TslGame.WuLogConnectionTimeOutError
// Size: 0xa0 (Inherited: 0x60)
struct FWuLogConnectionTimeOutError : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	float DriverTime; // 0x70(0x04)
	float Threshold; // 0x74(0x04)
	struct FString RemoteAddress; // 0x78(0x10)
	bool IsServer; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString UniqueId; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogServerInfo
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogServerInfo : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString InstanceId; // 0x70(0x10)
	struct FString PublicIp; // 0x80(0x10)
	struct FString InstanceType; // 0x90(0x10)
	struct FString GameServerVersion; // 0xa0(0x10)
	struct FString Weather; // 0xb0(0x10)
	struct FString MapName; // 0xc0(0x10)
	struct FString StartTimeStamp; // 0xd0(0x10)
	struct FString EndTimeStamp; // 0xe0(0x10)
};

// ScriptStruct TslGame.WuLogPing
// Size: 0xc8 (Inherited: 0x60)
struct FWuLogPing : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	struct FString ModeName; // 0x80(0x10)
	float MissRate; // 0x90(0x04)
	float ReliableDelay; // 0x94(0x04)
	float UnreliableDelay; // 0x98(0x04)
	float ReliableDelayRange; // 0x9c(0x04)
	float UnreliableDelayRange; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString Nickname; // 0xa8(0x10)
	struct FString AccountId; // 0xb8(0x10)
};

// ScriptStruct TslGame.WuLogNickname
// Size: 0xb0 (Inherited: 0x60)
struct FWuLogNickname : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString PlayerNetId; // 0x70(0x10)
	struct FString Nickname; // 0x80(0x10)
	struct FString Ip; // 0x90(0x10)
	struct FString ClientVersion; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuLogLocationCorrection
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogLocationCorrection : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
	struct FString PlayerName; // 0x80(0x10)
	float LocDiff; // 0x90(0x04)
	float AllowedDiff; // 0x94(0x04)
	struct FVector Velocity; // 0x98(0x0c)
	float Speed; // 0xa4(0x04)
	struct FString MovementMode; // 0xa8(0x10)
	struct FString CustomMovementMode; // 0xb8(0x10)
	struct FString ClientMovementMode; // 0xc8(0x10)
	struct FString ClientCustomMovementMode; // 0xd8(0x10)
	float Ping; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct TslGame.WuLogFps
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogFps : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	struct FString ModeName; // 0x80(0x10)
	int32 ServerFps; // 0x90(0x04)
	int32 AlivePlayers; // 0x94(0x04)
	int32 JoinPlayers; // 0x98(0x04)
	float Duration; // 0x9c(0x04)
	float AvgInBytesPerSecond; // 0xa0(0x04)
	float AvgOutBytesPerSecond; // 0xa4(0x04)
	int32 MaxInBytesPerSecond; // 0xa8(0x04)
	int32 MaxOutBytesPerSecond; // 0xac(0x04)
	float UsedVirtualMemoryMiB; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.WuLogVehicleInteraction
// Size: 0x168 (Inherited: 0x60)
struct FWuLogVehicleInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	struct FString EventType; // 0x148(0x10)
	struct TArray<struct FWuStringIntPair> EventInfo; // 0x158(0x10)
};

// ScriptStruct TslGame.WuLogObjectInteraction
// Size: 0x120 (Inherited: 0x60)
struct FWuLogObjectInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString ObjectType; // 0xf0(0x10)
	struct FString ObjectTypeStatus; // 0x100(0x10)
	struct TArray<struct FWuStringIntPair> ObjectTypeAdditionalInfo; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogFlaregunCalled
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogFlaregunCalled : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	bool IsInWhiteZone; // 0xf0(0x01)
	bool IsCalledSuccessfully; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
};

// ScriptStruct TslGame.WuLogPlayerDeath
// Size: 0x110 (Inherited: 0x60)
struct FWuLogPlayerDeath : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FString> Weapons; // 0xf0(0x10)
	struct TArray<struct FString> Equips; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogXboxUnautorizedDevice
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogXboxUnautorizedDevice : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	int32 KillCount; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogNetDriverError
// Size: 0x70 (Inherited: 0x60)
struct FWuLogNetDriverError : FLogBase {
	struct TArray<struct FWuDdosInfo> Infos; // 0x60(0x10)
};

// ScriptStruct TslGame.WuDdosInfo
// Size: 0x28 (Inherited: 0x00)
struct FWuDdosInfo {
	struct FString ErrorType; // 0x00(0x10)
	struct FString Ip; // 0x10(0x10)
	int32 Port; // 0x20(0x04)
	int32 Count; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogMissionListOpen
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogMissionListOpen : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogWeaponFireCount
// Size: 0x108 (Inherited: 0x60)
struct FWuLogWeaponFireCount : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString WeaponId; // 0xf0(0x10)
	int32 FireCount; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogRedZoneEnded
// Size: 0x70 (Inherited: 0x60)
struct FWuLogRedZoneEnded : FLogBase {
	struct TArray<struct FWuLogCharacter> Drivers; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogParachuteLanding
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogParachuteLanding : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	float Distance; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogObjectDestroy
// Size: 0x110 (Inherited: 0x60)
struct FWuLogObjectDestroy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString ObjectType; // 0xf0(0x10)
	struct FVector ObjectLocation; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuLogEmote
// Size: 0x120 (Inherited: 0x60)
struct FWuLogEmote : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString EmoteName; // 0xf0(0x10)
	struct FString EmoteType; // 0x100(0x10)
	struct TArray<struct FWuStringStringPair> AdditionalParameters; // 0x110(0x10)
};

// ScriptStruct TslGame.WuStringStringPair
// Size: 0x20 (Inherited: 0x00)
struct FWuStringStringPair {
	struct FString First; // 0x00(0x10)
	struct FString second; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLogVaultStart
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogVaultStart : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	bool IsLedgeGrab; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct TslGame.WuLogSkinUpdate
// Size: 0x170 (Inherited: 0x60)
struct FWuLogSkinUpdate : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	struct FString SkinName; // 0x140(0x10)
	struct FString SkinCategory; // 0x150(0x10)
	struct TArray<struct FWuLogItem> PartItems; // 0x160(0x10)
};

// ScriptStruct TslGame.WuLogMovementSpam
// Size: 0x98 (Inherited: 0x60)
struct FWuLogMovementSpam : FLogBase {
	struct FString AttackerId; // 0x60(0x10)
	struct FString VictimId; // 0x70(0x10)
	int32 AttackerLeftLeans; // 0x80(0x04)
	int32 AttackerRightLeans; // 0x84(0x04)
	int32 AttackerCrouches; // 0x88(0x04)
	int32 VictimLeftLeans; // 0x8c(0x04)
	int32 VictimRightLeans; // 0x90(0x04)
	int32 VictimCrouches; // 0x94(0x04)
};

// ScriptStruct TslGame.WuLogStatAccuracy
// Size: 0x78 (Inherited: 0x60)
struct FWuLogStatAccuracy : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 NumShots; // 0x70(0x04)
	int32 NumHits; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogLoadingFinished
// Size: 0x178 (Inherited: 0x60)
struct FWuLogLoadingFinished : FLogBase {
	struct FString DeviceName; // 0x60(0x10)
	struct FString Timestamp; // 0x70(0x10)
	struct FString MatchId; // 0x80(0x10)
	struct FString ServerName; // 0x90(0x10)
	struct FString ModeName; // 0xa0(0x10)
	struct FString Date; // 0xb0(0x10)
	struct FString State; // 0xc0(0x10)
	int32 LoadingTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FWuLogCharacter Character; // 0xd8(0x90)
	struct FString ActualHardwareName; // 0x168(0x10)
};

// ScriptStruct TslGame.WuLogFreeMemory
// Size: 0xb0 (Inherited: 0x60)
struct FWuLogFreeMemory : FLogBase {
	struct FString DeviceName; // 0x60(0x10)
	struct FString PlayerNetId; // 0x70(0x10)
	struct FString AccountId; // 0x80(0x10)
	struct TArray<struct FWuMemoryStat> MemoryStats; // 0x90(0x10)
	struct FString ActualHardwareName; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuMemoryStat
// Size: 0x18 (Inherited: 0x00)
struct FWuMemoryStat {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogMatchSetting
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogMatchSetting : FLogBase {
	bool IsCustomGame; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString MapName; // 0x68(0x10)
	struct FString ModeName; // 0x78(0x10)
	struct FString MatchId; // 0x88(0x10)
	int32 TeamCount; // 0x98(0x04)
	int32 MinPlayerCount; // 0x9c(0x04)
	int32 MaxPlayerCount; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FWuStringStringPair> MatchSettings; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogBulletShotDistance
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogBulletShotDistance : FLogBase {
	struct FVector VictimLocation; // 0x60(0x0c)
	struct FVector HitLocation; // 0x6c(0x0c)
	float Distance; // 0x78(0x04)
	bool IsVictimInVehicle; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float VictimSpeed; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FString VictimStanceMode; // 0x88(0x10)
	struct FString VictimMovementMode; // 0x98(0x10)
	struct FString AttackerAccountId; // 0xa8(0x10)
	float AttackerPing; // 0xb8(0x04)
	float AttackerRDelay; // 0xbc(0x04)
	float AttackerUDelay; // 0xc0(0x04)
	float AttackerUMissPercent; // 0xc4(0x04)
	struct FString VictimAccountId; // 0xc8(0x10)
	float VictimPing; // 0xd8(0x04)
	float VictimRDelay; // 0xdc(0x04)
	float VictimUDelay; // 0xe0(0x04)
	float VictimUMissPercent; // 0xe4(0x04)
	int32 AttackId; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct TslGame.WuLogSteamNoNetworkConnection
// Size: 0x88 (Inherited: 0x60)
struct FWuLogSteamNoNetworkConnection : FLogBase {
	int32 DisconnectionCountPerGame; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString SteamKickReason; // 0x68(0x10)
	struct FString AccountId; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogBodyPenetrationDamageInfo
// Size: 0x110 (Inherited: 0x60)
struct FWuLogBodyPenetrationDamageInfo : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	float DamageDiff; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString DamageZone; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogCheat
// Size: 0x138 (Inherited: 0x60)
struct FWuLogCheat : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString CheatType; // 0xf0(0x10)
	struct FString Description; // 0x100(0x10)
	float ParamFloat1; // 0x110(0x04)
	float ParamFloat2; // 0x114(0x04)
	struct FString ParamString1; // 0x118(0x10)
	struct FString ParamString2; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogSwimEnd
// Size: 0xf8 (Inherited: 0x60)
struct FWuLogSwimEnd : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	float SwimDistance; // 0xf0(0x04)
	float MaxSwimDepthOfWater; // 0xf4(0x04)
};

// ScriptStruct TslGame.WuLogSwimStart
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogSwimStart : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogWheelDestroy
// Size: 0x178 (Inherited: 0x60)
struct FWuLogWheelDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogVehicle Vehicle; // 0xf8(0x58)
	int32 WheelIndex; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString DamageTypeCategory; // 0x158(0x10)
	struct FString DamageCauserName; // 0x168(0x10)
};

// ScriptStruct TslGame.WuLogVehicleDestroy
// Size: 0x178 (Inherited: 0x60)
struct FWuLogVehicleDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogVehicle Vehicle; // 0xf8(0x58)
	struct FString DamageTypeCategory; // 0x150(0x10)
	struct FString DamageCauserName; // 0x160(0x10)
	float Distance; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
};

// ScriptStruct TslGame.WuLogVehicleDamage
// Size: 0x178 (Inherited: 0x60)
struct FWuLogVehicleDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogVehicle Vehicle; // 0xf8(0x58)
	struct FString DamageTypeCategory; // 0x150(0x10)
	struct FString DamageCauserName; // 0x160(0x10)
	float Damage; // 0x170(0x04)
	float Distance; // 0x174(0x04)
};

// ScriptStruct TslGame.WuLogVehicleLeave
// Size: 0x168 (Inherited: 0x60)
struct FWuLogVehicleLeave : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	float RideDistance; // 0x148(0x04)
	int32 SeatIndex; // 0x14c(0x04)
	float MaxSpeed; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<struct FWuLogCharacter> FellowPassengers; // 0x158(0x10)
};

// ScriptStruct TslGame.WuLogVehicleRide
// Size: 0x160 (Inherited: 0x60)
struct FWuLogVehicleRide : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	int32 SeatIndex; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct FWuLogCharacter> FellowPassengers; // 0x150(0x10)
};

// ScriptStruct TslGame.WuLogVehicleSpawn
// Size: 0x80 (Inherited: 0x60)
struct FWuLogVehicleSpawn : FLogBase {
	struct FString VehicleId; // 0x60(0x10)
	struct FVector Location; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogVehicleAISpawn
// Size: 0xc8 (Inherited: 0x60)
struct FWuLogVehicleAISpawn : FLogBase {
	struct FString SpawnId; // 0x60(0x10)
	struct FWuLogVehicle Vehicle; // 0x70(0x58)
};

// ScriptStruct TslGame.WuLogUseRevivalTransmitter
// Size: 0x88 (Inherited: 0x60)
struct FWuLogUseRevivalTransmitter : FLogBase {
	int32 phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString AccountId; // 0x68(0x10)
	struct FVector UsingPosition; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.WuLogUseRevivalTower
// Size: 0x80 (Inherited: 0x60)
struct FWuLogUseRevivalTower : FLogBase {
	int32 phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString AccountId; // 0x68(0x10)
	bool bIsSuccess; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct TslGame.WuLogRevivalTowerSpawn
// Size: 0x70 (Inherited: 0x60)
struct FWuLogRevivalTowerSpawn : FLogBase {
	struct FVector SpawnedPosition; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct TslGame.WuLogCarePackageLand
// Size: 0x90 (Inherited: 0x60)
struct FWuLogCarePackageLand : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x30)
};

// ScriptStruct TslGame.WuLogItemPackage
// Size: 0x30 (Inherited: 0x00)
struct FWuLogItemPackage {
	struct FString ItemPackageId; // 0x00(0x10)
	struct FVector Location; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FWuLogItem> Items; // 0x20(0x10)
};

// ScriptStruct TslGame.WuLogCarePackageSpawn
// Size: 0x90 (Inherited: 0x60)
struct FWuLogCarePackageSpawn : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x30)
};

// ScriptStruct TslGame.WuLogLootTruckPackageSpawn
// Size: 0x178 (Inherited: 0x60)
struct FWuLogLootTruckPackageSpawn : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x30)
	struct FWuLogCharacter Character; // 0x90(0x90)
	struct FWuLogVehicle Vehicle; // 0x120(0x58)
};

// ScriptStruct TslGame.WuLogLanguage
// Size: 0x110 (Inherited: 0x60)
struct FWuLogLanguage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString WindowsLanguage; // 0xf0(0x10)
	struct FString GameLanguage; // 0x100(0x10)
};

// ScriptStruct TslGame.WuSystemInfo
// Size: 0x240 (Inherited: 0x60)
struct FWuSystemInfo : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString OsLanguage; // 0xf0(0x10)
	struct FString GameLanguage; // 0x100(0x10)
	struct FString OsVersion; // 0x110(0x10)
	struct FString CpuName; // 0x120(0x10)
	struct FString GpuName; // 0x130(0x10)
	int32 RamInGB; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString BaseBoardSerial; // 0x148(0x10)
	struct TArray<struct FString> MemorySerials; // 0x158(0x10)
	int32 ArpIpCount; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FString OsUserAccount; // 0x170(0x10)
	struct TArray<struct FString> DiskModelNames; // 0x180(0x10)
	struct TArray<struct FString> DiskSerials; // 0x190(0x10)
	struct TArray<struct FString> MonitorModelNames; // 0x1a0(0x10)
	struct TArray<struct FString> MonitorSerials; // 0x1b0(0x10)
	struct TArray<struct FString> MemoryModelNames; // 0x1c0(0x10)
	struct FString BaseBoardModelName; // 0x1d0(0x10)
	struct TArray<struct FString> GatewayMacAddress; // 0x1e0(0x10)
	struct FWuGraphicSettings GraphicSettings; // 0x1f0(0x40)
	struct FString CpuClock; // 0x230(0x10)
};

// ScriptStruct TslGame.WuGraphicSettings
// Size: 0x40 (Inherited: 0x00)
struct FWuGraphicSettings {
	int32 ResolutionWidth; // 0x00(0x04)
	int32 ResolutionHeight; // 0x04(0x04)
	bool VSync; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 DisplayMode; // 0x0c(0x04)
	int32 FOV; // 0x10(0x04)
	int32 ScreenScale; // 0x14(0x04)
	int32 AntiAliasing; // 0x18(0x04)
	int32 PostProcessing; // 0x1c(0x04)
	int32 Shadows; // 0x20(0x04)
	int32 Textures; // 0x24(0x04)
	int32 Effects; // 0x28(0x04)
	int32 Foliage; // 0x2c(0x04)
	int32 ViewDistance; // 0x30(0x04)
	bool MotionBlur; // 0x34(0x01)
	bool MinimapDynamicZoom; // 0x35(0x01)
	bool FreelockInterpolation; // 0x36(0x01)
	bool Replay; // 0x37(0x01)
	bool DeathCam; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 GraphicsAPI; // 0x3c(0x04)
};

// ScriptStruct TslGame.WuLogHeal
// Size: 0x148 (Inherited: 0x60)
struct FWuLogHeal : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	float Healamount; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// ScriptStruct TslGame.WuLogEmPickupLiftOff
// Size: 0x110 (Inherited: 0x60)
struct FWuLogEmPickupLiftOff : FLogBase {
	struct FWuLogCharacter Instigator; // 0x60(0x90)
	struct TArray<struct FWuLogCharacter> Riders; // 0xf0(0x10)
	int32 VehicleUniqueId; // 0x100(0x04)
	int32 BlueZonePhase; // 0x104(0x04)
	float DistanceToBluezone; // 0x108(0x04)
	float DistanceToSafezone; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuLogItemThrow
// Size: 0x1d8 (Inherited: 0x60)
struct FWuLogItemThrow : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogCharacter Target; // 0xf0(0x90)
	struct FWuLogItem Item; // 0x180(0x50)
	float Distance; // 0x1d0(0x04)
	bool IsSuccess; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
};

// ScriptStruct TslGame.WuLogItemUse
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemUse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogItemDetach
// Size: 0x190 (Inherited: 0x60)
struct FWuLogItemDetach : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem ParentItem; // 0xf0(0x50)
	struct FWuLogItem ChildItem; // 0x140(0x50)
};

// ScriptStruct TslGame.WuLogItemAttachedAll
// Size: 0x190 (Inherited: 0x60)
struct FWuLogItemAttachedAll : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem ParentItem; // 0xf0(0x50)
	struct FWuLogItem ChildItem; // 0x140(0x50)
};

// ScriptStruct TslGame.WuLogItemAttach
// Size: 0x190 (Inherited: 0x60)
struct FWuLogItemAttach : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem ParentItem; // 0xf0(0x50)
	struct FWuLogItem ChildItem; // 0x140(0x50)
};

// ScriptStruct TslGame.WuLogItemUnequip
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemUnequip : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogItemEquip
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemEquip : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogItemDrop
// Size: 0x148 (Inherited: 0x60)
struct FWuLogItemDrop : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	bool IsDropVolatility; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// ScriptStruct TslGame.WuLogItemPickupFromCustomPackage
// Size: 0x160 (Inherited: 0x60)
struct FWuLogItemPickupFromCustomPackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	struct FString SourceUniqueId; // 0x140(0x10)
	struct FString CustomPackageUniqueId; // 0x150(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromVehicleTrunk
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogItemPickupFromVehicleTrunk : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	struct FWuLogItem Item; // 0x148(0x50)
	float BeforeTrunkCapacity; // 0x198(0x04)
	float CurrentTrunkCapacity; // 0x19c(0x04)
};

// ScriptStruct TslGame.WuLogItemPutToVehicleTrunk
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogItemPutToVehicleTrunk : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	struct FWuLogItem Item; // 0x148(0x50)
	float BeforeTrunkCapacity; // 0x198(0x04)
	float CurrentTrunkCapacity; // 0x19c(0x04)
};

// ScriptStruct TslGame.WuLogItemPickupFromRandomBox
// Size: 0x150 (Inherited: 0x60)
struct FWuLogItemPickupFromRandomBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Weapon; // 0xf0(0x50)
	struct FString RandomBoxName; // 0x140(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromLootBox
// Size: 0x158 (Inherited: 0x60)
struct FWuLogItemPickupFromLootBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	int32 OwnerTeamId; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString CreatorAccountId; // 0x148(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromItemPackage
// Size: 0x150 (Inherited: 0x60)
struct FWuLogItemPickupFromItemPackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	struct FString PackageName; // 0x140(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromCarepackage
// Size: 0x158 (Inherited: 0x60)
struct FWuLogItemPickupFromCarepackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
	int32 CarePackageUniqueId; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString CarePackageName; // 0x148(0x10)
};

// ScriptStruct TslGame.WuLogItemPickup
// Size: 0x140 (Inherited: 0x60)
struct FWuLogItemPickup : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem Item; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogItemSpawn
// Size: 0x78 (Inherited: 0x60)
struct FWuLogItemSpawn : FLogBase {
	struct FString ItemID; // 0x60(0x10)
	int32 SpawnCount; // 0x70(0x04)
	int32 StackCount; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogMatchLastDefeat
// Size: 0xc8 (Inherited: 0x60)
struct FWuLogMatchLastDefeat : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString DamageTypeCategory; // 0x70(0x10)
	struct FString VictimAccountId; // 0x80(0x10)
	struct FString DamageCauserName; // 0x90(0x10)
	struct FVector AttackerLocation; // 0xa0(0x0c)
	struct FVector VictimLocation; // 0xac(0x0c)
	bool IsFatal; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 DBNOId; // 0xbc(0x04)
	int32 VictimTeamId; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogMatchFirstDefeat
// Size: 0xc8 (Inherited: 0x60)
struct FWuLogMatchFirstDefeat : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString DamageTypeCategory; // 0x70(0x10)
	struct FString VictimAccountId; // 0x80(0x10)
	struct FString DamageCauserName; // 0x90(0x10)
	struct FVector AttackerLocation; // 0xa0(0x0c)
	struct FVector VictimLocation; // 0xac(0x0c)
	bool IsFatal; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 DBNOId; // 0xbc(0x04)
	int32 VictimTeamId; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogExterminatedFromOutgame
// Size: 0x80 (Inherited: 0x60)
struct FWuLogExterminatedFromOutgame : FLogBase {
	struct TArray<struct FString> TeamAccounts; // 0x60(0x10)
	struct TArray<struct FString> KillerTeamAccounts; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogPlayerMatchFinished
// Size: 0x1c0 (Inherited: 0x60)
struct FWuLogPlayerMatchFinished : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuGameResultPerPlayer GameResult; // 0xf0(0xb0)
	struct FWuPlayerWeaponStats WeaponStats; // 0x1a0(0x20)
};

// ScriptStruct TslGame.WuPlayerWeaponStats
// Size: 0x20 (Inherited: 0x00)
struct FWuPlayerWeaponStats {
	struct FString AccountId; // 0x00(0x10)
	struct TArray<struct FWuWeaponStatsRecord> Stats; // 0x10(0x10)
};

// ScriptStruct TslGame.WuWeaponStatsRecord
// Size: 0x38 (Inherited: 0x00)
struct FWuWeaponStatsRecord {
	struct FString Weapon; // 0x00(0x10)
	int32 Damage; // 0x10(0x04)
	int32 DBNODamage; // 0x14(0x04)
	int32 Shots; // 0x18(0x04)
	int32 Hits; // 0x1c(0x04)
	int32 DBNOHits; // 0x20(0x04)
	int32 HoldingTime; // 0x24(0x04)
	struct TArray<struct FWuWeaponHitDetails> HitDetails; // 0x28(0x10)
};

// ScriptStruct TslGame.WuWeaponHitDetails
// Size: 0x28 (Inherited: 0x00)
struct FWuWeaponHitDetails {
	struct FString BodyPart; // 0x00(0x10)
	int32 Kills; // 0x10(0x04)
	int32 DBNOs; // 0x14(0x04)
	int32 Hits; // 0x18(0x04)
	int32 DBNOHits; // 0x1c(0x04)
	int32 Damage; // 0x20(0x04)
	int32 DBNODamage; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogPlayerKillV2
// Size: 0x490 (Inherited: 0x60)
struct FWuLogPlayerKillV2 : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 DBNOId; // 0x64(0x04)
	struct FWuGameResultPerPlayer VictimGameResult; // 0x68(0xb0)
	struct FWuLogCharacter Victim; // 0x118(0x90)
	struct FString VictimWeapon; // 0x1a8(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x1b8(0x10)
	struct FWuLogCharacter DBNOMaker; // 0x1c8(0x90)
	struct FWuLogKillDamageInfo DBNODamageInfo; // 0x258(0x48)
	struct FWuLogCharacter Finisher; // 0x2a0(0x90)
	struct FWuLogKillDamageInfo FinishDamageInfo; // 0x330(0x48)
	struct FWuLogCharacter Killer; // 0x378(0x90)
	struct FWuLogKillDamageInfo KillerDamageInfo; // 0x408(0x48)
	struct TArray<struct FString> Assists_AccountId; // 0x450(0x10)
	struct TArray<struct FString> TeamKillers_AccountId; // 0x460(0x10)
	bool IsSuicide; // 0x470(0x01)
	bool IsKillSteal; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct TArray<struct FString> ReloadedWeaponsOfKiller; // 0x478(0x10)
	bool IsVictimIsBlind; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	int32 AmmoInClipOfKiller; // 0x48c(0x04)
};

// ScriptStruct TslGame.WuLogKillDamageInfo
// Size: 0x48 (Inherited: 0x00)
struct FWuLogKillDamageInfo {
	struct FString DamageReason; // 0x00(0x10)
	struct FString DamageTypeCategory; // 0x10(0x10)
	struct FString DamageCauserName; // 0x20(0x10)
	struct TArray<struct FString> AdditionalInfo; // 0x30(0x10)
	float Distance; // 0x40(0x04)
	bool IsThroughPenetrableWall; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct TslGame.WuLogPlayerKill
// Size: 0x340 (Inherited: 0x60)
struct FWuLogPlayerKill : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Killer; // 0x68(0x90)
	struct FWuLogCharacter Victim; // 0xf8(0x90)
	struct FWuLogCharacter Assistant; // 0x188(0x90)
	int32 DBNOId; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct FString DamageReason; // 0x220(0x10)
	struct FString DamageTypeCategory; // 0x230(0x10)
	struct FString DamageCauserName; // 0x240(0x10)
	struct TArray<struct FString> DamageCauserAdditionalInfo; // 0x250(0x10)
	struct FString VictimWeapon; // 0x260(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x270(0x10)
	float Distance; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FWuGameResultPerPlayer VictimGameResult; // 0x288(0xb0)
	bool IsThroughPenetrableWall; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
};

// ScriptStruct TslGame.WuLogPlayerRevive
// Size: 0x188 (Inherited: 0x60)
struct FWuLogPlayerRevive : FLogBase {
	struct FWuLogCharacter Reviver; // 0x60(0x90)
	struct FWuLogCharacter Victim; // 0xf0(0x90)
	int32 DBNOId; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct TslGame.WuLogArmorDestroy
// Size: 0x210 (Inherited: 0x60)
struct FWuLogArmorDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogCharacter Victim; // 0xf8(0x90)
	struct FString DamageTypeCategory; // 0x188(0x10)
	struct FString DamageReason; // 0x198(0x10)
	struct FString DamageCauserName; // 0x1a8(0x10)
	struct FWuLogItem Item; // 0x1b8(0x50)
	float Distance; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerMakeGroggy
// Size: 0x1f8 (Inherited: 0x60)
struct FWuLogPlayerMakeGroggy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogCharacter Victim; // 0xf8(0x90)
	struct FString DamageReason; // 0x188(0x10)
	struct FString DamageTypeCategory; // 0x198(0x10)
	struct FString DamageCauserName; // 0x1a8(0x10)
	struct TArray<struct FString> DamageCauserAdditionalInfo; // 0x1b8(0x10)
	struct FString VictimWeapon; // 0x1c8(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x1d8(0x10)
	float Distance; // 0x1e8(0x04)
	bool IsAttackerInVehicle; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	int32 DBNOId; // 0x1f0(0x04)
	bool IsThroughPenetrableWall; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
};

// ScriptStruct TslGame.WuLogPlayerTakeDamage
// Size: 0x1c8 (Inherited: 0x60)
struct FWuLogPlayerTakeDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FWuLogCharacter Victim; // 0xf8(0x90)
	struct FString DamageTypeCategory; // 0x188(0x10)
	struct FString DamageReason; // 0x198(0x10)
	float Damage; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FString DamageCauserName; // 0x1b0(0x10)
	bool IsThroughPenetrableWall; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
};

// ScriptStruct TslGame.WuLogPlayerUseFlareGun
// Size: 0x158 (Inherited: 0x60)
struct FWuLogPlayerUseFlareGun : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FString AttackType; // 0xf8(0x10)
	struct FWuLogItem Weapon; // 0x108(0x50)
};

// ScriptStruct TslGame.WuLogPlayerDestroyBreachableWall
// Size: 0x140 (Inherited: 0x60)
struct FWuLogPlayerDestroyBreachableWall : FLogBase {
	struct FWuLogCharacter Attacker; // 0x60(0x90)
	struct FWuLogItem Weapon; // 0xf0(0x50)
};

// ScriptStruct TslGame.WuLogPlayerDestroyProp
// Size: 0x110 (Inherited: 0x60)
struct FWuLogPlayerDestroyProp : FLogBase {
	struct FWuLogCharacter Attacker; // 0x60(0x90)
	struct FString ObjectType; // 0xf0(0x10)
	struct FVector ObjectLocation; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuLogBlackZoneEnded
// Size: 0x70 (Inherited: 0x60)
struct FWuLogBlackZoneEnded : FLogBase {
	struct TArray<struct FWuLogCharacter> Survivors; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogPlayerSummonBlackZone
// Size: 0xf0 (Inherited: 0x60)
struct FWuLogPlayerSummonBlackZone : FLogBase {
	struct FWuLogCharacter Player; // 0x60(0x90)
};

// ScriptStruct TslGame.WuLogPlayerUseProjDecoy
// Size: 0x100 (Inherited: 0x60)
struct FWuLogPlayerUseProjDecoy : FLogBase {
	struct FWuLogCharacter DecoyInstigator; // 0x60(0x90)
	struct FVector Location; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct TslGame.WuLogPlayerUseWeapDecoy
// Size: 0x100 (Inherited: 0x60)
struct FWuLogPlayerUseWeapDecoy : FLogBase {
	struct FWuLogCharacter DecoyInstigator; // 0x60(0x90)
	struct FVector Location; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct TslGame.WuLogPlayerUseThrowable
// Size: 0x158 (Inherited: 0x60)
struct FWuLogPlayerUseThrowable : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FString AttackType; // 0xf8(0x10)
	struct FWuLogItem Weapon; // 0x108(0x50)
};

// ScriptStruct TslGame.WuLogPlayerAttack
// Size: 0x1b0 (Inherited: 0x60)
struct FWuLogPlayerAttack : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0x90)
	struct FString AttackType; // 0xf8(0x10)
	struct FWuLogItem Weapon; // 0x108(0x50)
	struct FWuLogVehicle Vehicle; // 0x158(0x58)
};

// ScriptStruct TslGame.WuLogClientHitch
// Size: 0x140 (Inherited: 0x60)
struct FWuLogClientHitch : FLogBase {
	struct FString GameModeType; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	float ElapsedTime; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FWuLogCharacter CharacterLog; // 0x88(0x90)
	struct FVector CharacterVelocity; // 0x118(0x0c)
	bool IsInAircraft; // 0x124(0x01)
	bool IsFallingWithParachute; // 0x125(0x01)
	bool IsParachuting; // 0x126(0x01)
	bool IsInCar; // 0x127(0x01)
	struct FString RecentShownWidget; // 0x128(0x10)
	int32 AvailableCpuPhysicalMemory; // 0x138(0x04)
	int32 AvailableCpuVirtualMemory; // 0x13c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerPosition
// Size: 0x170 (Inherited: 0x60)
struct FWuLogPlayerPosition : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogVehicle Vehicle; // 0xf0(0x58)
	float ElapsedTime; // 0x148(0x04)
	int32 NumAlivePlayers; // 0x14c(0x04)
	float ClientFPS; // 0x150(0x04)
	int32 Under10FPS; // 0x154(0x04)
	int32 Under20FPS; // 0x158(0x04)
	int32 Under30FPS; // 0x15c(0x04)
	int32 Under60FPS; // 0x160(0x04)
	int32 MinFPS; // 0x164(0x04)
	int32 MaxFPS; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerKicked
// Size: 0x100 (Inherited: 0x60)
struct FWuLogPlayerKicked : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString Reason; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogPlayerLogout
// Size: 0x80 (Inherited: 0x60)
struct FWuLogPlayerLogout : FLogBase {
	struct FString NetId; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogPlayerLogin
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogPlayerLogin : FLogBase {
	struct FString NetId; // 0x60(0x10)
	bool Result; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString ErrorMessage; // 0x78(0x10)
	struct FString AccountId; // 0x88(0x10)
	struct FString Ip; // 0x98(0x10)
	struct FString ClientVersion; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogPlayerCreate
// Size: 0x100 (Inherited: 0x60)
struct FWuLogPlayerCreate : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct TArray<struct FString> Equips; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogServerFpsWatchDog
// Size: 0x188 (Inherited: 0x60)
struct FWuLogServerFpsWatchDog : FLogBase {
	struct FString ProfileType; // 0x60(0x10)
	struct FString MatchId; // 0x70(0x10)
	struct FString MapName; // 0x80(0x10)
	struct FString LeagueType; // 0x90(0x10)
	struct FString ModeName; // 0xa0(0x10)
	struct FString CpuName; // 0xb0(0x10)
	int32 RamInGB; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString InfraCode; // 0xc8(0x10)
	int32 FrameCount; // 0xd8(0x04)
	int32 SessionElapsedTime; // 0xdc(0x04)
	float MillisecondsPerCycle; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FWuLogServerFps GameThreadStats; // 0xe8(0xa0)
};

// ScriptStruct TslGame.WuLogServerFps
// Size: 0xa0 (Inherited: 0x00)
struct FWuLogServerFps {
	int64 FrameTime; // 0x00(0x08)
	int64 GameEngineTick; // 0x08(0x08)
	int64 WorldTickTime; // 0x10(0x08)
	int64 TickTime; // 0x18(0x08)
	int64 TG_PrePhysics; // 0x20(0x08)
	int64 TG_EndPhysics; // 0x28(0x08)
	int64 TG_StartPhysics; // 0x30(0x08)
	int64 TG_DuringPhysics; // 0x38(0x08)
	int64 TG_PostPhysics; // 0x40(0x08)
	int64 TG_PostUpdateWork; // 0x48(0x08)
	int64 TG_LastDemotable; // 0x50(0x08)
	int64 NetBroadcastTickTime; // 0x58(0x08)
	int64 NetConnectionTick; // 0x60(0x08)
	int64 NetUpdateUnmappedObjectsTime; // 0x68(0x08)
	int64 QueueTicks; // 0x70(0x08)
	int64 UpdateCameraTime; // 0x78(0x08)
	int64 NetWorldTickTime; // 0x80(0x08)
	int64 GTTickableTime; // 0x88(0x08)
	int64 TickAsyncLoadingGT; // 0x90(0x08)
	int64 DeferredTickTime; // 0x98(0x08)
};

// ScriptStruct TslGame.WuLogServerStat
// Size: 0x90 (Inherited: 0x60)
struct FWuLogServerStat : FLogBase {
	int32 ElapsedTime; // 0x60(0x04)
	int32 NumAliveTeams; // 0x64(0x04)
	int32 NumJoinPlayers; // 0x68(0x04)
	int32 NumStartPlayers; // 0x6c(0x04)
	int32 NumAlivePlayers; // 0x70(0x04)
	float PingMin; // 0x74(0x04)
	float PingMax; // 0x78(0x04)
	float PingAvg; // 0x7c(0x04)
	float FrameRateMin; // 0x80(0x04)
	float FrameRateMax; // 0x84(0x04)
	float FrameRateAvg; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.WuLogGameStatePeriodic
// Size: 0xc0 (Inherited: 0x60)
struct FWuLogGameStatePeriodic : FLogBase {
	struct FWuLogGameState GameState; // 0x60(0x60)
};

// ScriptStruct TslGame.WuLogGameState
// Size: 0x60 (Inherited: 0x00)
struct FWuLogGameState {
	int32 ElapsedTime; // 0x00(0x04)
	int32 NumStartTeams; // 0x04(0x04)
	int32 NumAliveTeams; // 0x08(0x04)
	int32 NumParticipatedTeams; // 0x0c(0x04)
	int32 NumJoinPlayers; // 0x10(0x04)
	int32 NumStartPlayers; // 0x14(0x04)
	int32 NumAlivePlayers; // 0x18(0x04)
	int32 NumParticipatedPlayers; // 0x1c(0x04)
	struct FVector SafetyZonePosition; // 0x20(0x0c)
	float SafetyZoneRadius; // 0x2c(0x04)
	struct FVector PoisonGasWarningPosition; // 0x30(0x0c)
	float PoisonGasWarningRadius; // 0x3c(0x04)
	struct FVector RedZonePosition; // 0x40(0x0c)
	float RedZoneRadius; // 0x4c(0x04)
	struct FVector BlackZonePosition; // 0x50(0x0c)
	float BlackZoneRadius; // 0x5c(0x04)
};

// ScriptStruct TslGame.WuLogMatchRating
// Size: 0x70 (Inherited: 0x60)
struct FWuLogMatchRating : FLogBase {
	struct TArray<struct FWuLogPlayerRating> PlayerRatings; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogPlayerRating
// Size: 0x18 (Inherited: 0x00)
struct FWuLogPlayerRating {
	struct FString AccountId; // 0x00(0x10)
	int32 Rating; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogWeaponAccuracyStats
// Size: 0x70 (Inherited: 0x60)
struct FWuLogWeaponAccuracyStats : FLogBase {
	struct TArray<struct FWuPlayerWeaponStats> Players; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogWeaponChange
// Size: 0x90 (Inherited: 0x60)
struct FWuLogWeaponChange : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString WeaponInHand; // 0x70(0x10)
	struct FString WeaponHolstered; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogMatchEnd
// Size: 0xb0 (Inherited: 0x60)
struct FWuLogMatchEnd : FLogBase {
	struct TArray<struct FWuLogCharacterWeapons> Characters; // 0x60(0x10)
	struct TArray<struct FWuLogRewardDetail> RewardDetail; // 0x70(0x10)
	struct FWuGameFinishedResult GameResultOnFinished; // 0x80(0x10)
	struct TArray<struct FWuWaypointStat> WaypointStats; // 0x90(0x10)
	struct TArray<struct FWuPlayerWeaponStats> AllWeaponStats; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuWaypointStat
// Size: 0x18 (Inherited: 0x00)
struct FWuWaypointStat {
	struct FString UserName; // 0x00(0x10)
	int32 WaypointUsedCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuGameFinishedResult
// Size: 0x10 (Inherited: 0x00)
struct FWuGameFinishedResult {
	struct TArray<struct FWuGameResultPerPlayer> Results; // 0x00(0x10)
};

// ScriptStruct TslGame.WuLogRewardDetail
// Size: 0x38 (Inherited: 0x00)
struct FWuLogRewardDetail {
	struct FString AccountId; // 0x00(0x10)
	struct FWuLogPlayTimeRecord PlayTimeRecord; // 0x10(0x08)
	struct FWuLogBpReward BpReward; // 0x18(0x1c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.WuLogBpReward
// Size: 0x1c (Inherited: 0x00)
struct FWuLogBpReward {
	int32 PlayTime; // 0x00(0x04)
	int32 Ranking; // 0x04(0x04)
	int32 Kill; // 0x08(0x04)
	int32 Damage; // 0x0c(0x04)
	int32 Boosting; // 0x10(0x04)
	int32 RawTotal; // 0x14(0x04)
	int32 BoostedTotal; // 0x18(0x04)
};

// ScriptStruct TslGame.WuLogMatchStart
// Size: 0xb8 (Inherited: 0x60)
struct FWuLogMatchStart : FLogBase {
	struct FString MapName; // 0x60(0x10)
	struct FString WeatherId; // 0x70(0x10)
	struct TArray<struct FWuLogCharacterWeapons> Characters; // 0x80(0x10)
	struct FString CameraViewBehaviour; // 0x90(0x10)
	int32 TeamSize; // 0xa0(0x04)
	bool IsCustomGame; // 0xa4(0x01)
	bool IsEventMode; // 0xa5(0x01)
	bool IsAIMode; // 0xa6(0x01)
	char pad_A7[0x1]; // 0xa7(0x01)
	struct FString BlueZoneCustomOptions; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogGasPumpValue
// Size: 0x108 (Inherited: 0x60)
struct FWuLogGasPumpValue : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString Action; // 0xf0(0x10)
	float Value; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogGasPump
// Size: 0x100 (Inherited: 0x60)
struct FWuLogGasPump : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString Action; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleBlueChipDetector
// Size: 0x108 (Inherited: 0x60)
struct FWuLogSoftroleBlueChipDetector : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString Action; // 0xf0(0x10)
	float ScanningDistance; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeEnd
// Size: 0x110 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeEnd : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString PrimaryWeaponFirst; // 0xf0(0x10)
	struct FString PrimaryWeaponSecond; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeBegin
// Size: 0x110 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeBegin : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString PrimaryWeaponFirst; // 0xf0(0x10)
	struct FString PrimaryWeaponSecond; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeMarkDrone
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeMarkDrone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FVector Location; // 0xf0(0x0c)
	float Distance; // 0xfc(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeMark
// Size: 0x188 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeMark : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogCharacter MarkedCharacter; // 0xf0(0x90)
	float Distance; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleTraumaBag
// Size: 0x1d0 (Inherited: 0x60)
struct FWuLogSoftroleTraumaBag : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogCharacter Target; // 0xf0(0x90)
	struct FWuLogItem HealingItem; // 0x180(0x50)
};

// ScriptStruct TslGame.WuLogSoftroleDrone
// Size: 0x158 (Inherited: 0x60)
struct FWuLogSoftroleDrone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FWuLogItem InventoryItem; // 0xf0(0x50)
	struct FString Action; // 0x140(0x10)
	float FlyingElapsedTime; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
};

// ScriptStruct TslGame.WuLogCharacterCarry
// Size: 0x100 (Inherited: 0x60)
struct FWuLogCharacterCarry : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0x90)
	struct FString CarryState; // 0xf0(0x10)
};

// ScriptStruct TslGame.WuLogMatchDefinition
// Size: 0x120 (Inherited: 0x60)
struct FWuLogMatchDefinition : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString ModeId; // 0x70(0x10)
	struct FString SubmodeId; // 0x80(0x10)
	struct FString PingQuality; // 0x90(0x10)
	struct FString SeasonState; // 0xa0(0x10)
	struct TArray<struct FWuLogCharacterRating> Ratings; // 0xb0(0x10)
	struct FString DivisionId; // 0xc0(0x10)
	struct FString InstanceId; // 0xd0(0x10)
	struct FString PublicId; // 0xe0(0x10)
	struct FString InstanceType; // 0xf0(0x10)
	struct FString GameServerVersion; // 0x100(0x10)
	struct FString OsPlatform; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogCharacterRating
// Size: 0x30 (Inherited: 0x00)
struct FWuLogCharacterRating {
	struct FString AccountId; // 0x00(0x10)
	struct FString NetId; // 0x10(0x10)
	int32 MMR; // 0x20(0x04)
	int32 RankPoint; // 0x24(0x04)
	int32 Ping; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.WuLogPhaseChange
// Size: 0x78 (Inherited: 0x60)
struct FWuLogPhaseChange : FLogBase {
	int32 phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FString> PlayersInWhiteCircle; // 0x68(0x10)
};

// ScriptStruct TslGame.WuExitToLobbyData
// Size: 0x18 (Inherited: 0x00)
struct FWuExitToLobbyData {
	struct FString AccountId; // 0x00(0x10)
	bool FromDeathCam; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.WuPlayDataResult
// Size: 0x38 (Inherited: 0x00)
struct FWuPlayDataResult {
	struct FString AccountId; // 0x00(0x10)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString ResultDescription; // 0x18(0x10)
	struct FString PlayData; // 0x28(0x10)
};

// ScriptStruct TslGame.WuChatRestrictStatus
// Size: 0x18 (Inherited: 0x00)
struct FWuChatRestrictStatus {
	bool IsBlocked; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Reason; // 0x04(0x04)
	struct FString UntilTimeStamp; // 0x08(0x10)
};

// ScriptStruct TslGame.WuDirectMessage
// Size: 0x108 (Inherited: 0x00)
struct FWuDirectMessage {
	int32 Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Message; // 0x08(0x10)
	struct FString LobbyStringKey; // 0x18(0x10)
	struct FWuDirectMessageParameter LobbyMessageParameter; // 0x28(0x10)
	struct FString IngameStringKey; // 0x38(0x10)
	struct TArray<struct FString> IngameMessageParameters; // 0x48(0x10)
	struct FString FromAccountId; // 0x58(0x10)
	struct FString FromNickname; // 0x68(0x10)
	struct FString FromPlatform; // 0x78(0x10)
	struct FString FromClanId; // 0x88(0x10)
	struct FString FromClanTag; // 0x98(0x10)
	int32 FromClanLevel; // 0xa8(0x04)
	bool FromOfflineOrStreamerMode; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FString ToAccountId; // 0xb0(0x10)
	struct FString ToNickname; // 0xc0(0x10)
	struct FString ToPlatform; // 0xd0(0x10)
	struct FString ToClanId; // 0xe0(0x10)
	struct FString ToClanTag; // 0xf0(0x10)
	int32 ToClanLevel; // 0x100(0x04)
	int32 ToComplimentType; // 0x104(0x04)
};

// ScriptStruct TslGame.WuDirectMessageParameter
// Size: 0x10 (Inherited: 0x00)
struct FWuDirectMessageParameter {
	struct TArray<struct FWuNicknamePlatformData> MatchWinUsers; // 0x00(0x10)
};

// ScriptStruct TslGame.WuNicknamePlatformData
// Size: 0x20 (Inherited: 0x00)
struct FWuNicknamePlatformData {
	struct FString Nickname; // 0x00(0x10)
	struct FString Platform; // 0x10(0x10)
};

// ScriptStruct TslGame.WuMissionProgressUpdateData
// Size: 0x10 (Inherited: 0x00)
struct FWuMissionProgressUpdateData {
	struct TArray<struct FWuStringIntPair> Updates; // 0x00(0x10)
};

// ScriptStruct TslGame.WuPrepareUsersResult
// Size: 0x10 (Inherited: 0x00)
struct FWuPrepareUsersResult {
	struct TArray<struct FString> AccountIds; // 0x00(0x10)
};

// ScriptStruct TslGame.WuGameStartInfo
// Size: 0x10 (Inherited: 0x00)
struct FWuGameStartInfo {
	struct TArray<struct FWuGameStartInfoPerPlayer> Players; // 0x00(0x10)
};

// ScriptStruct TslGame.WuGameStartInfoPerPlayer
// Size: 0x20 (Inherited: 0x00)
struct FWuGameStartInfoPerPlayer {
	struct FString PlayerNetId; // 0x00(0x10)
	struct FString AccountId; // 0x10(0x10)
};

// ScriptStruct TslGame.WuGameInitializedResult
// Size: 0x08 (Inherited: 0x00)
struct FWuGameInitializedResult {
	bool IsSuccess; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Port; // 0x04(0x04)
};

// ScriptStruct TslGame.WuGameStartRequest
// Size: 0x10 (Inherited: 0x00)
struct FWuGameStartRequest {
	struct TArray<struct FWuStringStringPair> StringParameters; // 0x00(0x10)
};

// ScriptStruct TslGame.WuGameOverrideParameterRequest
// Size: 0x20 (Inherited: 0x00)
struct FWuGameOverrideParameterRequest {
	struct FString MatchId; // 0x00(0x10)
	struct TArray<struct FWuStringStringPair> StringParameters; // 0x10(0x10)
};

// ScriptStruct TslGame.WuGameInitializeRequest
// Size: 0x58 (Inherited: 0x00)
struct FWuGameInitializeRequest {
	bool IsCustomGame; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MapName; // 0x08(0x10)
	struct FString MatchId; // 0x18(0x10)
	struct FString ModeName; // 0x28(0x10)
	int32 TeamCount; // 0x38(0x04)
	int32 MinPlayerCount; // 0x3c(0x04)
	int32 MaxPlayerCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FWuStringStringPair> StringParameters; // 0x48(0x10)
};

// ScriptStruct TslGame.WuUserAuthInfo
// Size: 0x248 (Inherited: 0x00)
struct FWuUserAuthInfo {
	struct FString PlayerNetId; // 0x00(0x10)
	int32 TeamId; // 0x10(0x04)
	int32 TeamMemberIndex; // 0x14(0x04)
	int32 SquadIndex; // 0x18(0x04)
	struct FWuMatchRating Rating; // 0x1c(0x08)
	bool IsZombie; // 0x24(0x01)
	bool IsMaster; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct FWuCharacterInfo CharacterInfo; // 0x28(0x130)
	int32 Platform; // 0x158(0x04)
	bool IsStreamerModeOn; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct FString PartnerLevel; // 0x160(0x10)
	int32 ObserverAuthorityType; // 0x170(0x04)
	bool BattlEyeDisabled; // 0x174(0x01)
	bool AceAntibotDisabled; // 0x175(0x01)
	bool IsSuspect; // 0x176(0x01)
	bool DisallowVoiceChat; // 0x177(0x01)
	bool IsBypassAnticheat; // 0x178(0x01)
	bool IsAvatarBanned; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	int32 AcVerificationScore; // 0x17c(0x04)
	struct FString AccountId; // 0x180(0x10)
	int32 v1; // 0x190(0x04)
	int32 v2; // 0x194(0x04)
	int32 V3; // 0x198(0x04)
	int32 V4; // 0x19c(0x04)
	struct FWuUdpEncryptionKey UdpEncryptionKey; // 0x1a0(0x30)
	struct TArray<struct FWuStringStringPair> CustomParameters; // 0x1d0(0x10)
	float BpBoost; // 0x1e0(0x04)
	float XpBoost; // 0x1e4(0x04)
	float CurrentDailyXp; // 0x1e8(0x04)
	bool IsMaxLevel; // 0x1ec(0x01)
	bool IsPCCafeUser; // 0x1ed(0x01)
	char pad_1EE[0x2]; // 0x1ee(0x02)
	struct TArray<struct FWuStringIntPair> StatTrakDataPairs; // 0x1f0(0x10)
	struct TArray<struct FWuStringIntPair> HeadshotStatTrakDataPairs; // 0x200(0x10)
	struct FWuLobbyPartyInfo LobbyPartyInfo; // 0x210(0x28)
	struct TArray<struct FString> TdmSpawnKitIds; // 0x238(0x10)
};

// ScriptStruct TslGame.WuLobbyPartyInfo
// Size: 0x28 (Inherited: 0x00)
struct FWuLobbyPartyInfo {
	struct FString PartyId; // 0x00(0x10)
	struct FString PartyLeaderId; // 0x10(0x10)
	int32 PartySize; // 0x20(0x04)
	bool AllowAnyMember; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGame.WuUdpEncryptionKey
// Size: 0x30 (Inherited: 0x00)
struct FWuUdpEncryptionKey {
	struct FString Key; // 0x00(0x10)
	struct FString ServerIV; // 0x10(0x10)
	struct FString ClientIV; // 0x20(0x10)
};

// ScriptStruct TslGame.WuCharacterInfo
// Size: 0x130 (Inherited: 0x00)
struct FWuCharacterInfo {
	struct FString Nickname; // 0x00(0x10)
	bool Gender; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FWuCharacterCustomizationOptions CustomizationOptions; // 0x18(0x60)
	struct FWuCharacterWeaponMasteryInfo WeaponMasteryInfo; // 0x78(0x10)
	struct FWuCharacterClanInfo ClanInfo; // 0x88(0x38)
	struct FWuPubgIdData PubgIdData; // 0xc0(0x58)
	struct TArray<struct FWuCustomizationPresetInfo> CustomizationPresetInfos; // 0x118(0x10)
	int32 PresetIndex; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct TslGame.WuCustomizationPresetInfo
// Size: 0x18 (Inherited: 0x00)
struct FWuCustomizationPresetInfo {
	struct TArray<struct FString> ItemIDs; // 0x00(0x10)
	bool IsUnlocked; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.WuPubgIdData
// Size: 0x58 (Inherited: 0x00)
struct FWuPubgIdData {
	int32 SurvivalTier; // 0x00(0x04)
	int32 SurvivalLevel; // 0x04(0x04)
	struct FString NameplateId; // 0x08(0x10)
	struct FString EmblemId; // 0x18(0x10)
	struct FString MedalOne; // 0x28(0x10)
	struct FString MedalTwo; // 0x38(0x10)
	struct FString ClanplateId; // 0x48(0x10)
};

// ScriptStruct TslGame.WuCharacterClanInfo
// Size: 0x38 (Inherited: 0x00)
struct FWuCharacterClanInfo {
	struct FString ClanId; // 0x00(0x10)
	struct FString ClanName; // 0x10(0x10)
	struct FString ClanTag; // 0x20(0x10)
	int32 ClanLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.WuCharacterWeaponMasteryInfo
// Size: 0x10 (Inherited: 0x00)
struct FWuCharacterWeaponMasteryInfo {
	struct TArray<struct FWuStringIntPair> WeaponMasteryTiers; // 0x00(0x10)
};

// ScriptStruct TslGame.WuCharacterCustomizationOptions
// Size: 0x60 (Inherited: 0x00)
struct FWuCharacterCustomizationOptions {
	struct TArray<struct FWuStringBoolPair> BoolOptions; // 0x00(0x10)
	struct TArray<struct FWuStringFloatPair> FloatOptions; // 0x10(0x10)
	struct TArray<struct FWuStringStringPair> StringOptions; // 0x20(0x10)
	struct TArray<struct FString> ItemIDs; // 0x30(0x10)
	struct FString ActionSlots; // 0x40(0x10)
	struct TArray<struct FString> IngameEquipableItemIds; // 0x50(0x10)
};

// ScriptStruct TslGame.WuStringBoolPair
// Size: 0x18 (Inherited: 0x00)
struct FWuStringBoolPair {
	struct FString First; // 0x00(0x10)
	bool second; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.WuMatchRating
// Size: 0x08 (Inherited: 0x00)
struct FWuMatchRating {
	int32 RankPoint; // 0x00(0x04)
	int32 MMR; // 0x04(0x04)
};

// ScriptStruct TslGame.WuTeamInfo
// Size: 0x38 (Inherited: 0x00)
struct FWuTeamInfo {
	int32 TeamId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> AccountIds; // 0x08(0x10)
	struct TArray<int32> TeamMemberIndices; // 0x18(0x10)
	struct TArray<int32> SquadIndices; // 0x28(0x10)
};

// ScriptStruct TslGame.WuPubgIdClanplateData
// Size: 0x70 (Inherited: 0x00)
struct FWuPubgIdClanplateData {
	struct FString ID; // 0x00(0x10)
	struct FString TopColor; // 0x10(0x10)
	struct FString BottomColor; // 0x20(0x10)
	struct FString IngameImagePath; // 0x30(0x10)
	struct FString IngameImagePathLD; // 0x40(0x10)
	struct FString OutgameImagePath; // 0x50(0x10)
	struct FString OutgameImagePathLD; // 0x60(0x10)
};

// ScriptStruct TslGame.WuPubgIdMedalData
// Size: 0x60 (Inherited: 0x00)
struct FWuPubgIdMedalData {
	struct FString ID; // 0x00(0x10)
	struct FString IngameImagePath; // 0x10(0x10)
	struct FString OutgameImagePathFHD; // 0x20(0x10)
	struct FString OutgameImagePathFHDLarge; // 0x30(0x10)
	struct FString OutgameImagePathUHD; // 0x40(0x10)
	struct FString OutgameImagePathUHDLarge; // 0x50(0x10)
};

// ScriptStruct TslGame.WuPubgIdNameplateData
// Size: 0x80 (Inherited: 0x00)
struct FWuPubgIdNameplateData {
	struct FString ID; // 0x00(0x10)
	bool IsAnim; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float AnimLengthSec; // 0x14(0x04)
	int32 AnimFrameCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString IngameImagePath; // 0x20(0x10)
	struct FString OutgameImagePath; // 0x30(0x10)
	struct FString IngameAnimPathPC; // 0x40(0x10)
	struct FString IngameAnimPathConsole; // 0x50(0x10)
	struct FString IngameAnimPathStadia; // 0x60(0x10)
	struct FString OutgameAnimPath; // 0x70(0x10)
};

// ScriptStruct TslGame.WuPubgIdEmblemData
// Size: 0x78 (Inherited: 0x00)
struct FWuPubgIdEmblemData {
	struct FString ID; // 0x00(0x10)
	bool IsAnim; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float AnimLengthSec; // 0x14(0x04)
	int32 AnimFrameCountX; // 0x18(0x04)
	int32 AnimFrameCountY; // 0x1c(0x04)
	struct FString IngameImagePath; // 0x20(0x10)
	struct FString OutgameImagePath; // 0x30(0x10)
	struct FString OutgameImagePathFHD; // 0x40(0x10)
	struct FString IngameAnimPath; // 0x50(0x10)
	struct FString OutgameAnimPath; // 0x60(0x10)
	float IntervalLengthSec; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuUnrealPlayerCard
// Size: 0x1d8 (Inherited: 0x00)
struct FWuUnrealPlayerCard {
	int32 CurrentLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString PrimaryBackgroundColor; // 0x08(0x10)
	struct FString BackgroundId; // 0x18(0x10)
	struct FString EmblemId; // 0x28(0x10)
	struct FString BannerId; // 0x38(0x10)
	int32 OriginType; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString NetId; // 0x50(0x10)
	struct FWuUnrealPlayerCardStat Slot1; // 0x60(0x70)
	struct FWuUnrealPlayerCardStat Slot2; // 0xd0(0x70)
	struct FWuUnrealPlayerCardStat Slot3; // 0x140(0x70)
	struct FWuUnrealPlayerCardRankPointData RankPoint; // 0x1b0(0x28)
};

// ScriptStruct TslGame.WuUnrealPlayerCardRankPointData
// Size: 0x28 (Inherited: 0x00)
struct FWuUnrealPlayerCardRankPointData {
	int32 RankPoints; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Tier; // 0x08(0x10)
	struct FString SubTier; // 0x18(0x10)
};

// ScriptStruct TslGame.WuUnrealPlayerCardStat
// Size: 0x70 (Inherited: 0x00)
struct FWuUnrealPlayerCardStat {
	struct FString IconId; // 0x00(0x10)
	struct FString Title; // 0x10(0x10)
	struct FString TitleArg; // 0x20(0x10)
	struct FString Subtitle; // 0x30(0x10)
	struct FString SubtitleArg; // 0x40(0x10)
	struct FString Value; // 0x50(0x10)
	struct FString ValueArg; // 0x60(0x10)
};

// ScriptStruct TslGame.WuCustomizableObjectIdPair
// Size: 0x20 (Inherited: 0x00)
struct FWuCustomizableObjectIdPair {
	struct FString CustomizableObjectKey; // 0x00(0x10)
	struct FString CustomizableObjectValue; // 0x10(0x10)
};

// ScriptStruct TslGame.*1e9893a307
// Size: 0x78 (Inherited: 0x00)
struct F*1e9893a307 {
	struct TArray<struct FString> *79a8269951; // 0x00(0x10)
	struct TArray<struct FString> *0defe5a0a0; // 0x10(0x10)
	struct TArray<struct FString> *93897a6a96; // 0x20(0x10)
	struct TArray<bool> *0b1f4f5f79; // 0x30(0x10)
	struct TArray<struct FString> *b3ef40ce28; // 0x40(0x10)
	struct TArray<float> *23a7382522; // 0x50(0x10)
	struct TArray<struct FString> *d70e4c64be; // 0x60(0x10)
	bool *b86009e633; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGame.*73fc89cd07
// Size: 0x10 (Inherited: 0x00)
struct F*73fc89cd07 {
	struct UClass* *e1e535b575; // 0x00(0x08)
	float *feb4438d88; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1ea7f7fe0f
// Size: 0x410 (Inherited: 0x268)
struct F*1ea7f7fe0f : F*eee16334b9 {
	enum class EEquipSlotID EquipSlotID; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float SpaceExtension; // 0x26c(0x04)
	float DamageReductionRate; // 0x270(0x04)
	float DurabilityMax; // 0x274(0x04)
	bool DestroyByDurability; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float Durability; // 0x27c(0x04)
	enum class *8e9d560617 DurabilityConsumeType; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float DamageTransferRate; // 0x284(0x04)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0x288(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x2b8(0x30)
	struct F*42c0484a8b CustomizableObjectOriginalSkin; // 0x2e8(0x20)
	struct UAkAudioEvent* EquipedSoundAk; // 0x308(0x20)
	struct UAkAudioEvent* BlueBlockerEnterBlueZoneSoundAk; // 0x328(0x20)
	struct UAkAudioEvent* BlueBlockerExitBlueZoneSoundAk; // 0x348(0x20)
	struct UAkAudioEvent* BlueBlockerLowHealthSoundAk; // 0x368(0x20)
	struct UAkAudioEvent* BlueBlockerNoHealthSoundAk; // 0x388(0x20)
	float BlueBlockerLowHealthThreshold; // 0x3a8(0x04)
	enum class EEquipableItemSoundGroup SoundGroup; // 0x3ac(0x01)
	enum class EEquipableItemSoundType SoundType; // 0x3ad(0x01)
	bool bCanZombieEquip; // 0x3ae(0x01)
	enum class *b3d7c18e06 SlotOffsetType; // 0x3af(0x01)
	struct FName SkinTag; // 0x3b0(0x08)
	bool bDisableEquipmentSkinning; // 0x3b8(0x01)
	bool bDisableSkinMessages; // 0x3b9(0x01)
	bool bDisableMasteryMessages; // 0x3ba(0x01)
	enum class EEquipableItemLevelType EquipableItemLevelType; // 0x3bb(0x01)
	bool bIsUnequipable; // 0x3bc(0x01)
	enum class ESpecialEquipmentType SpecialEquipmentType; // 0x3bd(0x01)
	char pad_3BE[0x2]; // 0x3be(0x02)
	struct UTexture* HudDisplayEquipIcon; // 0x3c0(0x20)
	struct TArray<struct F*3cbd353435> ConstraintSlotConfigs; // 0x3e0(0x10)
	struct TArray<struct F*73fc89cd07> *defaf3cf22; // 0x3f0(0x10)
	struct FName EquipmentOverridableFilter; // 0x400(0x08)
	bool bIsHoody; // 0x408(0x01)
	bool bIsGhillieSuit; // 0x409(0x01)
	bool bIsTacticalGear; // 0x40a(0x01)
	char pad_40B[0x5]; // 0x40b(0x05)
};

// ScriptStruct TslGame.*d8a4ab212b
// Size: 0x08 (Inherited: 0x00)
struct F*d8a4ab212b {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*31a07f02d6
// Size: 0xd0 (Inherited: 0x00)
struct F*31a07f02d6 {
	struct FInt32Range RowRange; // 0x00(0x10)
	struct FFloatRange CapsuleRelativeRange; // 0x10(0x10)
	struct FFloatRange SpeedRange; // 0x20(0x10)
	struct FFloatRange ZSpeedRange; // 0x30(0x10)
	struct FInt32Range LedgeRange; // 0x40(0x10)
	struct FInt32Range FreeSpaceRange; // 0x50(0x10)
	enum class *78d3f3d355 IsVault; // 0x60(0x01)
	enum class *78d3f3d355 IsClimb; // 0x61(0x01)
	enum class *78d3f3d355 IsLedgeGrab; // 0x62(0x01)
	enum class *78d3f3d355 IsSlide; // 0x63(0x01)
	enum class *78d3f3d355 IsNarrow; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct F*f8f798e4f5 ExecConfig; // 0x68(0x68)
};

// ScriptStruct TslGame.*f8f798e4f5
// Size: 0x68 (Inherited: 0x00)
struct F*f8f798e4f5 {
	float ExecutionDistance; // 0x00(0x04)
	float AnticipationDistance; // 0x04(0x04)
	struct FVector2D AnticipationMapIn; // 0x08(0x08)
	struct FVector2D AnticipationMapOut; // 0x10(0x08)
	float MinExecutionDOT; // 0x18(0x04)
	bool bUseAnimStartForDistance; // 0x1c(0x01)
	bool bUse3DDistance; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FFloatRange ExecutionZRange; // 0x20(0x10)
	bool bUseAnticipationAnim; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAnimSequenceBase* AnticipationAnim; // 0x38(0x08)
	struct UCurveFloat* AnticipationAnimCurve; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
};

// ScriptStruct TslGame.*f84dad556d
// Size: 0x68 (Inherited: 0x00)
struct F*f84dad556d {
	struct FVector V_Start; // 0x00(0x0c)
	struct FVector V_Apex; // 0x0c(0x0c)
	struct FVector V_ApexAdditive; // 0x18(0x0c)
	struct FVector V_End; // 0x24(0x0c)
	enum class EVaultAnimType InVaultType; // 0x30(0x01)
	bool bEndToFall; // 0x31(0x01)
	bool bForceCrouch; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float Direction; // 0x34(0x04)
	float PlayerSpeed; // 0x38(0x04)
	float DistanceFromObject; // 0x3c(0x04)
	float AdditiveEndZOffset; // 0x40(0x04)
	struct UPrimitiveComponent* BaseComp; // 0x44(0x08)
	struct FVector BaseWorldLoc; // 0x4c(0x0c)
	struct FRotator BaseWorldDir; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.*a323d6c7da
// Size: 0x44 (Inherited: 0x00)
struct F*a323d6c7da {
	char pad_0[0x44]; // 0x00(0x44)
};

// ScriptStruct TslGame.*9da9003e50
// Size: 0x18 (Inherited: 0x00)
struct F*9da9003e50 {
	int64 *eea3eb261c; // 0x00(0x08)
	float *35a40f6f6a; // 0x08(0x04)
	float *818019a859; // 0x0c(0x04)
	enum class EAnimStance *2058f4b03b; // 0x10(0x01)
	bool *7161ca5395; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*95a91ed7f6
// Size: 0x38 (Inherited: 0x00)
struct F*95a91ed7f6 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*e05cf4ac88
// Size: 0x10 (Inherited: 0x00)
struct F*e05cf4ac88 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.StringArray
// Size: 0x10 (Inherited: 0x00)
struct FStringArray {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*5c44e64c25
// Size: 0x90 (Inherited: 0x38)
struct F*5c44e64c25 : F*5a8c59eeb3 {
	struct UAkComponent* *049dbbaadc; // 0x38(0x08)
	struct TArray<struct F*a28e2c116d> *6c177d8e52; // 0x40(0x10)
	struct TArray<struct F*70aa38fce0> AnimNotifyList; // 0x50(0x10)
	struct TArray<struct F*70aa38fce0> *10a1bb569a; // 0x60(0x10)
	char pad_70[0x20]; // 0x70(0x20)
};

// ScriptStruct TslGame.*5a8c59eeb3
// Size: 0x38 (Inherited: 0x00)
struct F*5a8c59eeb3 {
	struct ATslCharacter* Character; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct TslGame.*70aa38fce0
// Size: 0x30 (Inherited: 0x00)
struct F*70aa38fce0 {
	struct UAnimSequenceBase* *2338cd789e; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct TslGame.*a28e2c116d
// Size: 0x40 (Inherited: 0x00)
struct F*a28e2c116d {
	struct ATslWeapon* Weapon; // 0x00(0x08)
	struct UClass* *6e2795bba1; // 0x08(0x08)
	struct UAkComponent* AkComponent; // 0x10(0x08)
	char pad_18[0x28]; // 0x18(0x28)
};

// ScriptStruct TslGame.*1b94163716
// Size: 0x50 (Inherited: 0x38)
struct F*1b94163716 : F*5a8c59eeb3 {
	struct ATslWeapon* *a6986d3873; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct TslGame.*cb03773a8f
// Size: 0x2c (Inherited: 0x00)
struct F*cb03773a8f {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*87cb6ef28f
// Size: 0x10 (Inherited: 0x00)
struct F*87cb6ef28f {
	struct TArray<bool> Data; // 0x00(0x10)
};

// ScriptStruct TslGame.*60649cb19b
// Size: 0x30 (Inherited: 0x00)
struct F*60649cb19b {
	float *2439e63187; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector2D> *e28131f04e; // 0x08(0x10)
	float *702d061370; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FVector2D> *f7d21392fc; // 0x20(0x10)
};

// ScriptStruct TslGame.*0ad16fb8c0
// Size: 0x10 (Inherited: 0x00)
struct F*0ad16fb8c0 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*ea66152ead
// Size: 0x308 (Inherited: 0x00)
struct F*ea66152ead {
	char pad_0[0x308]; // 0x00(0x308)
};

// ScriptStruct TslGame.*3169a95f0a
// Size: 0x18 (Inherited: 0x00)
struct F*3169a95f0a {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*06f146a114
// Size: 0x28 (Inherited: 0x00)
struct F*06f146a114 {
	struct TArray<struct F*7b5daf82eb> *bedd1b6f43; // 0x00(0x10)
	struct TArray<uint16> *999de29e5f; // 0x10(0x10)
	float *ab2b7cd8c5; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*7b5daf82eb
// Size: 0x06 (Inherited: 0x00)
struct F*7b5daf82eb {
	int16 *7de22f54df; // 0x00(0x02)
	int16 *c5a9898eea; // 0x02(0x02)
	uint16 *e3e1589eac; // 0x04(0x02)
};

// ScriptStruct TslGame.*3500f38a3d
// Size: 0x10 (Inherited: 0x00)
struct F*3500f38a3d {
	struct UObject* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*5e0318cf44
// Size: 0x7b0 (Inherited: 0x00)
struct F*5e0318cf44 {
	char pad_0[0x7b0]; // 0x00(0x7b0)
};

// ScriptStruct TslGame.*dfdd1db540
// Size: 0x770 (Inherited: 0x00)
struct F*dfdd1db540 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FVector Apex; // 0x18(0x0c)
	struct FVector ApexAdditive; // 0x24(0x0c)
	float Direction; // 0x30(0x04)
	float PlayerSpeed2D; // 0x34(0x04)
	float DistanceFromObject; // 0x38(0x04)
	float AdditiveEndZOffset; // 0x3c(0x04)
	enum class EVaultAnimType VaultType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 MoveIndex; // 0x44(0x04)
	char bIsPassed : 1; // 0x48(0x01)
	char bIsClimbing : 1; // 0x48(0x01)
	char bIsEndToFall : 1; // 0x48(0x01)
	char bForceCrouch : 1; // 0x48(0x01)
	char pad_48_4 : 4; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct F*f8f798e4f5 ExecConfig; // 0x50(0x68)
	struct F*58d2b31816 HitData; // 0xb8(0x6b8)
};

// ScriptStruct TslGame.*58d2b31816
// Size: 0x6b8 (Inherited: 0x00)
struct F*58d2b31816 {
	char pad_0[0x6b8]; // 0x00(0x6b8)
};

// ScriptStruct TslGame.*6533ff5bd5
// Size: 0x68 (Inherited: 0x00)
struct F*6533ff5bd5 {
	struct FVector ImpactLocation; // 0x00(0x0c)
	struct FVector CapsulePredictedLocation; // 0x0c(0x0c)
	struct FVector CapsuleImpactLocation; // 0x18(0x0c)
	struct FVector Normal2D; // 0x24(0x0c)
	struct FVector DirectionVector; // 0x30(0x0c)
	float JumpDistance; // 0x3c(0x04)
	char bIsForceVault : 1; // 0x40(0x01)
	char bIsBlockVault : 1; // 0x40(0x01)
	char bIsBlockClimb : 1; // 0x40(0x01)
	char bIsLedgeGrab : 1; // 0x40(0x01)
	char pad_40_4 : 4; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 FirstRow; // 0x44(0x04)
	struct FVector ImpactVelocity; // 0x48(0x0c)
	int32 RowOffset; // 0x54(0x04)
	float NormalSampleDotThreshold; // 0x58(0x04)
	struct FVector CharacterVelocity; // 0x5c(0x0c)
};

// ScriptStruct TslGame.*70abb273c3
// Size: 0x48 (Inherited: 0x00)
struct F*70abb273c3 {
	uint16 *dab74d1016; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Position; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	struct F*0be99f7704 InputData; // 0x28(0x20)
};

// ScriptStruct TslGame.*0be99f7704
// Size: 0x20 (Inherited: 0x00)
struct F*0be99f7704 {
	float *58c9ac6a83; // 0x00(0x04)
	float *f1019ac06e; // 0x04(0x04)
	float *80a51a5c91; // 0x08(0x04)
	float *0d72ed4761; // 0x0c(0x04)
	bool *ea8895dea3; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *5e9314d37d; // 0x14(0x04)
	float *23cd097e83; // 0x18(0x04)
	float *996f443a0e; // 0x1c(0x04)
};

// ScriptStruct TslGame.*533a19527e
// Size: 0x28 (Inherited: 0x00)
struct F*533a19527e {
	float *20f81ac947; // 0x00(0x04)
	float *dc3d39ac11; // 0x04(0x04)
	float *daaf0f064b; // 0x08(0x04)
	struct FVector2D *07e834bfcd; // 0x0c(0x08)
	struct FVector2D *7a346db85f; // 0x14(0x08)
	float *6a717f5da2; // 0x1c(0x04)
	float *adb9e6b83c; // 0x20(0x04)
	float *d1304ec906; // 0x24(0x04)
};

// ScriptStruct TslGame.*15aaf19650
// Size: 0x24 (Inherited: 0x00)
struct F*15aaf19650 {
	struct FVector LocalOffset; // 0x00(0x0c)
	float *7defe1314e; // 0x0c(0x04)
	struct F*3499f0f1c0 *e069e77683; // 0x10(0x14)
};

// ScriptStruct TslGame.*3499f0f1c0
// Size: 0x14 (Inherited: 0x00)
struct F*3499f0f1c0 {
	bool *b3f14d16c2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct FVector Extent; // 0x08(0x0c)
};

// ScriptStruct TslGame.*1569e68b86
// Size: 0x80 (Inherited: 0x00)
struct F*1569e68b86 {
	float *f14baa58fc; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* *27ffa0b98c; // 0x08(0x08)
	struct UAkAudioEvent* *88db88ca89; // 0x10(0x08)
	struct UAkAudioEvent* *b826b14217; // 0x18(0x08)
	struct UAkAudioEvent* *00c32b8e97; // 0x20(0x08)
	struct FName *f38b86a81b; // 0x28(0x08)
	struct FName *ecafb9ca0e; // 0x30(0x08)
	struct FName *7d69255e19; // 0x38(0x08)
	struct FName *32f795be11; // 0x40(0x08)
	struct FName *a873dd479c; // 0x48(0x08)
	struct FName *685bad1524; // 0x50(0x08)
	struct FName *6690b7c1b4; // 0x58(0x08)
	float *26b3af84ef; // 0x60(0x04)
	float *2c78146704; // 0x64(0x04)
	float *b759c29bf6; // 0x68(0x04)
	float *4ce7b6e9ea; // 0x6c(0x04)
	float *401bce1cc4; // 0x70(0x04)
	float *34954bb6d1; // 0x74(0x04)
	float *8d9b709c6a; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*7c89a67f0d
// Size: 0x48 (Inherited: 0x00)
struct F*7c89a67f0d {
	bool *ccf0f70611; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D *ff4fae2f16; // 0x04(0x08)
	struct FVector2D *01bd2905a2; // 0x0c(0x08)
	struct FVector2D *271e824c72; // 0x14(0x08)
	struct FVector2D *5c487456f8; // 0x1c(0x08)
	struct FVector2D *4628ee5c5a; // 0x24(0x08)
	struct FVector2D *f2012c803c; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UClass* *f23bfe8a1c; // 0x38(0x08)
	float *889ffd8cba; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*815e364cf8
// Size: 0x18 (Inherited: 0x00)
struct F*815e364cf8 {
	struct TArray<struct F*8bc24e08bc> *789e47e64f; // 0x00(0x10)
	struct UAnimMontage* *bc75c1200b; // 0x10(0x08)
};

// ScriptStruct TslGame.*8bc24e08bc
// Size: 0x30 (Inherited: 0x00)
struct F*8bc24e08bc {
	enum class *5f9f5f045f *ebdd96a843; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *26b258b959; // 0x04(0x04)
	struct UAnimMontage* *cd91b927a0; // 0x08(0x08)
	struct UAnimMontage* *2b91be92db; // 0x10(0x08)
	bool *6ae8027617; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *bb746497c6; // 0x1c(0x04)
	struct UAnimMontage* *a69944bf4c; // 0x20(0x08)
	struct FName *1a59d31c40; // 0x28(0x08)
};

// ScriptStruct TslGame.*c3a6eee6dc
// Size: 0x50 (Inherited: 0x00)
struct F*c3a6eee6dc {
	float *af7e293457; // 0x00(0x04)
	float *94b1632210; // 0x04(0x04)
	float *83e5c54f3c; // 0x08(0x04)
	bool *d8d948e8ea; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *b8f9520a83; // 0x10(0x04)
	bool *c205dc99b6; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *9caa831a90; // 0x18(0x04)
	struct FVector *44037d4ac3; // 0x1c(0x0c)
	float *91ff25ac5b; // 0x28(0x04)
	float *165a17e956; // 0x2c(0x04)
	float *096825fb00; // 0x30(0x04)
	bool *818e2b2744; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector *3ed36f4b7c; // 0x38(0x0c)
	bool *72df68d9c4; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *6d5c3c2b62; // 0x48(0x04)
	float *b50e139c1d; // 0x4c(0x04)
};

// ScriptStruct TslGame.*22acf46548
// Size: 0x58 (Inherited: 0x00)
struct F*22acf46548 {
	struct UParticleSystem* *8e7d9bb3bf; // 0x00(0x08)
	struct UParticleSystem* *945220bb67; // 0x08(0x08)
	struct FVector2D *4a4f8ac777; // 0x10(0x08)
	struct FVector2D *a2f0751996; // 0x18(0x08)
	struct FVector2D *47292404de; // 0x20(0x08)
	struct FVector2D *c3a57916f7; // 0x28(0x08)
	struct FVector2D *6e1619b317; // 0x30(0x08)
	struct FVector2D *6b415c3bc0; // 0x38(0x08)
	struct UClass* *6912bbf96e; // 0x40(0x08)
	struct UClass* *a362b1ce03; // 0x48(0x08)
	struct U*226eb62c2c* *74009f024a; // 0x50(0x08)
};

// ScriptStruct TslGame.ParachuteDeploySettings
// Size: 0x14 (Inherited: 0x00)
struct FParachuteDeploySettings {
	bool bUseAutoDeploy; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AutoDeployAltitude; // 0x04(0x04)
	bool bUseAbsoluteAutoDeployAltitude; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StartDeployAltitude; // 0x0c(0x04)
	float *765deb31f2; // 0x10(0x04)
};

// ScriptStruct TslGame.*6a40615cd6
// Size: 0xc0 (Inherited: 0x00)
struct F*6a40615cd6 {
	float *e065f3c398; // 0x00(0x04)
	struct FVector *1aa12ee5f0; // 0x04(0x0c)
	float *fbed2a650b; // 0x10(0x04)
	float *2045758c79; // 0x14(0x04)
	float *bfd7ac6446; // 0x18(0x04)
	float *c1b6e57da5; // 0x1c(0x04)
	float *29cc016198; // 0x20(0x04)
	float *24cd0779a7; // 0x24(0x04)
	float *8e9b7635c3; // 0x28(0x04)
	float *15f9c9dff9; // 0x2c(0x04)
	float *408fcd6eb4; // 0x30(0x04)
	float *1a6c9356bc; // 0x34(0x04)
	struct FVector CapsuleOffset; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct USkeletalMesh* ParachuteSK; // 0x48(0x08)
	struct UClass* *e78d8e83bb; // 0x50(0x08)
	struct FRotator *5b42adcae4; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UPhysicsAsset* *218f55f320; // 0x68(0x08)
	struct TMap<enum class ESkydiveState, struct F*07cee94d5b> *f24427d99d; // 0x70(0x50)
};

// ScriptStruct TslGame.*07cee94d5b
// Size: 0x10 (Inherited: 0x00)
struct F*07cee94d5b {
	float *2f7b29a7c9; // 0x00(0x04)
	enum class *602ce54d82 *46f1ebfa3b; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float *2581799962; // 0x08(0x04)
	bool *e5964064da; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*03c3488cbf
// Size: 0x7c (Inherited: 0x00)
struct F*03c3488cbf {
	float *579f33a4e9; // 0x00(0x04)
	float *d637aaf4cf; // 0x04(0x04)
	float *2dc024a078; // 0x08(0x04)
	float *f85b130fec; // 0x0c(0x04)
	float *2dc00b14f2; // 0x10(0x04)
	float *c3cafb3b2c; // 0x14(0x04)
	float *4b3d57f2b1; // 0x18(0x04)
	float *fbfee9b8a3; // 0x1c(0x04)
	float *837e2e4ffe; // 0x20(0x04)
	float *2bbfdbb4d6; // 0x24(0x04)
	float *0aa563553c; // 0x28(0x04)
	float *4306f483a5; // 0x2c(0x04)
	struct FVector2D *b9cc3f4358; // 0x30(0x08)
	struct FVector2D *d0093f65b5; // 0x38(0x08)
	float *d7a5f7be6a; // 0x40(0x04)
	float *009b3056ed; // 0x44(0x04)
	float *bd8e07d29f; // 0x48(0x04)
	float *718d094036; // 0x4c(0x04)
	float *236832f968; // 0x50(0x04)
	float *d2833b72b9; // 0x54(0x04)
	float *db72320b0c; // 0x58(0x04)
	float *3fd72e7402; // 0x5c(0x04)
	float *fe1f55b87d; // 0x60(0x04)
	float *5082cc9c78; // 0x64(0x04)
	float *98c0c763d0; // 0x68(0x04)
	struct FVector2D *d0ea6f2be0; // 0x6c(0x08)
	struct FVector2D *72ea86c96b; // 0x74(0x08)
};

// ScriptStruct TslGame.*17cc762556
// Size: 0x30 (Inherited: 0x00)
struct F*17cc762556 {
	float *68eef04470; // 0x00(0x04)
	float *13449e1511; // 0x04(0x04)
	float *3b26d7d63e; // 0x08(0x04)
	float *100e414a31; // 0x0c(0x04)
	float *20d784d0d1; // 0x10(0x04)
	float *b3b91020c3; // 0x14(0x04)
	float *f1a391f996; // 0x18(0x04)
	float *4b652bfb1f; // 0x1c(0x04)
	float *885f42b36d; // 0x20(0x04)
	float *12080c590e; // 0x24(0x04)
	float *a56f5af9a8; // 0x28(0x04)
	float *3969fb1eea; // 0x2c(0x04)
};

// ScriptStruct TslGame.*e3348b0e71
// Size: 0x28 (Inherited: 0x00)
struct F*e3348b0e71 {
	float *92f018f7da; // 0x00(0x04)
	float *4ad253a717; // 0x04(0x04)
	float *8ba46581bc; // 0x08(0x04)
	float *2a5a5e0ee3; // 0x0c(0x04)
	float *e3b7383b06; // 0x10(0x04)
	bool *9106f9ae3d; // 0x14(0x01)
	bool *2e635e944c; // 0x15(0x01)
	bool *4e71f9ad88; // 0x16(0x01)
	bool *50a96a3a46; // 0x17(0x01)
	float *9f8448653a; // 0x18(0x04)
	float *3c66e571f6; // 0x1c(0x04)
	float *de54b5eaf4; // 0x20(0x04)
	float *f941cf51d4; // 0x24(0x04)
};

// ScriptStruct TslGame.*b95fa433b8
// Size: 0x20 (Inherited: 0x00)
struct F*b95fa433b8 {
	float *d2121eee69; // 0x00(0x04)
	struct FVector2D *a8ffcc41be; // 0x04(0x08)
	struct FVector2D *7181d32e46; // 0x0c(0x08)
	float *7ce1efc274; // 0x14(0x04)
	struct FVector2D *af1283f570; // 0x18(0x08)
};

// ScriptStruct TslGame.*d48da3879b
// Size: 0x14 (Inherited: 0x00)
struct F*d48da3879b {
	float DragScale; // 0x00(0x04)
	float *75178a3acf; // 0x04(0x04)
	float *0e09045efe; // 0x08(0x04)
	float *bc6001b88d; // 0x0c(0x04)
	float *648962dcd6; // 0x10(0x04)
};

// ScriptStruct TslGame.*08fbadeb58
// Size: 0x18 (Inherited: 0x00)
struct F*08fbadeb58 {
	float *ff65ee20b0; // 0x00(0x04)
	float *fe635ceed6; // 0x04(0x04)
	float *10d58649fb; // 0x08(0x04)
	bool *f434f103a2; // 0x0c(0x01)
	bool *a7277005c8; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float *83c7efeb1a; // 0x10(0x04)
	float *c70f7ef432; // 0x14(0x04)
};

// ScriptStruct TslGame.FreefallVelocitySettings
// Size: 0x0c (Inherited: 0x00)
struct FFreefallVelocitySettings {
	float SpeedMin; // 0x00(0x04)
	float *7eb8f8e335; // 0x04(0x04)
	float *95d55bb642; // 0x08(0x04)
};

// ScriptStruct TslGame.*f0f5a12b64
// Size: 0x30 (Inherited: 0x00)
struct F*f0f5a12b64 {
	struct FVector2D *4e611a6504; // 0x00(0x08)
	struct FVector2D *e1a36397b4; // 0x08(0x08)
	struct FVector2D *08ae175df0; // 0x10(0x08)
	float *6882276a48; // 0x18(0x04)
	struct FVector2D *8af49868b7; // 0x1c(0x08)
	struct FVector2D *db1011cabe; // 0x24(0x08)
	float *ccc9ad351a; // 0x2c(0x04)
};

// ScriptStruct TslGame.*bd248a1d4f
// Size: 0x78 (Inherited: 0x00)
struct F*bd248a1d4f {
	bool *ab5af59bdf; // 0x00(0x01)
	bool *d07efcd16b; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<int32, int32> *382cef96cd; // 0x08(0x50)
	int32 *68dfe9b3a0; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<float> *f943c54863; // 0x60(0x10)
	int32 *659d399255; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*6afa842332
// Size: 0x20 (Inherited: 0x00)
struct F*6afa842332 {
	char bIsArmed : 1; // 0x00(0x01)
	char bIsGun : 1; // 0x00(0x01)
	char bIsHipped : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class EWeaponClass WeaponClass; // 0x04(0x01)
	enum class EWeaponClass LobbyAnimationClass; // 0x05(0x01)
	enum class EThrownWeaponType ThrownWeaponClass; // 0x06(0x01)
	enum class EAnimWeaponType AnimWeaponType; // 0x07(0x01)
	struct UBlendSpace1D* GripBlendspace; // 0x08(0x08)
	struct UBlendSpaceBase* LHGripBlendspace; // 0x10(0x08)
	int32 GripTypeIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.AnimMontageData
// Size: 0x10 (Inherited: 0x00)
struct FAnimMontageData {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*232718bec4
// Size: 0x20 (Inherited: 0x00)
struct F*232718bec4 {
	struct TArray<struct UItem*> *8304eae63a; // 0x00(0x10)
	struct TArray<struct F*ab0a078a6b> *eb0dec9288; // 0x10(0x10)
};

// ScriptStruct TslGame.*ab0a078a6b
// Size: 0x10 (Inherited: 0x00)
struct F*ab0a078a6b {
	char pad_0[0x8]; // 0x00(0x08)
	struct UEquipableItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*bc8a0662ab
// Size: 0x10 (Inherited: 0x00)
struct F*bc8a0662ab {
	float *5151c1bac6; // 0x00(0x04)
	float *efbe600366; // 0x04(0x04)
	int32 *931fc7217b; // 0x08(0x04)
	int32 MaxCount; // 0x0c(0x04)
};

// ScriptStruct TslGame.*26b559f5a2
// Size: 0x3c (Inherited: 0x00)
struct F*26b559f5a2 {
	float *4cf8b84930; // 0x00(0x04)
	float *f5933b55e8; // 0x04(0x04)
	float *34b87aff56; // 0x08(0x04)
	float *6c0c14bfde; // 0x0c(0x04)
	float *3a1dd5d990; // 0x10(0x04)
	float *4e409b42df; // 0x14(0x04)
	float *ca6390e921; // 0x18(0x04)
	struct F*e56bced3a2 *dc7fb3578f; // 0x1c(0x1c)
	float *afde936264; // 0x38(0x04)
};

// ScriptStruct TslGame.*e56bced3a2
// Size: 0x1c (Inherited: 0x00)
struct F*e56bced3a2 {
	struct FVector *9ca5371426; // 0x00(0x0c)
	float *0b82c76c21; // 0x0c(0x04)
	float *9349f37912; // 0x10(0x04)
	float *730f6facbc; // 0x14(0x04)
	float *af477ea804; // 0x18(0x04)
};

// ScriptStruct TslGame.*637c506447
// Size: 0x18 (Inherited: 0x00)
struct F*637c506447 {
	struct TArray<struct ATslRedeployRespawnPoint*> *be62490a83; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*27ed2ed999
// Size: 0x08 (Inherited: 0x00)
struct F*27ed2ed999 {
	struct ATslPlayerState* *d68bb27f79; // 0x00(0x08)
};

// ScriptStruct TslGame.*840a5b1b4c
// Size: 0x20 (Inherited: 0x00)
struct F*840a5b1b4c {
	struct TArray<struct ACaptureAreaActor*> *193cc0672f; // 0x00(0x10)
	struct TArray<float> *ba26a2cf67; // 0x10(0x10)
};

// ScriptStruct TslGame.*87bd415a2f
// Size: 0x68 (Inherited: 0x00)
struct F*87bd415a2f {
	struct F*290199d127 Config; // 0x00(0x30)
	struct UClass* WidgetClass; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct UUserWidget* Widget; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
};

// ScriptStruct TslGame.*afdebf2e56
// Size: 0x38 (Inherited: 0x00)
struct F*afdebf2e56 {
	int32 CellSize; // 0x00(0x04)
	int32 *76b1b30181; // 0x04(0x04)
	int32 *5721afbc14; // 0x08(0x04)
	int32 *4286379462; // 0x0c(0x04)
	int32 *947fa1aca5; // 0x10(0x04)
	int32 *9adca7ecca; // 0x14(0x04)
	float *8928fe0f9f; // 0x18(0x04)
	int32 *a6c9c9ad7b; // 0x1c(0x04)
	float *b5bdb4d473; // 0x20(0x04)
	float *eebc05b053; // 0x24(0x04)
	float *27dbb1cf93; // 0x28(0x04)
	float *ad4c105c5a; // 0x2c(0x04)
	float *1911c3c95d; // 0x30(0x04)
	float *679fd57652; // 0x34(0x04)
};

// ScriptStruct TslGame.*b8060e4b45
// Size: 0x24 (Inherited: 0x00)
struct F*b8060e4b45 {
	float Stand[0x03]; // 0x00(0x0c)
	float Crouch[0x03]; // 0x0c(0x0c)
	float Prone[0x03]; // 0x18(0x0c)
};

// ScriptStruct TslGame.*47bfeec939
// Size: 0x98 (Inherited: 0x00)
struct F*47bfeec939 {
	struct FString MapName; // 0x00(0x10)
	struct F*33c3f5fbc8 *434dab0419; // 0x10(0x88)
};

// ScriptStruct TslGame.*33c3f5fbc8
// Size: 0x88 (Inherited: 0x00)
struct F*33c3f5fbc8 {
	struct UClass* AIControllerClass; // 0x00(0x20)
	struct UClass* *fcfde7bd5b; // 0x20(0x20)
	struct U*6eae006b16* *7c3b26b9a2; // 0x40(0x08)
	struct UClass* *2dcd4e1d2d; // 0x48(0x20)
	struct UDataTable* CharacterCostumeSetDataTable; // 0x68(0x20)
};

// ScriptStruct TslGame.*4fed23d522
// Size: 0x34 (Inherited: 0x00)
struct F*4fed23d522 {
	struct FVector AirplaneStartLoc; // 0x00(0x0c)
	struct FVector AirplaneStopLoc; // 0x0c(0x0c)
	struct FVector AirplaneCanJumpLoc; // 0x18(0x0c)
	struct FVector AirplaneForceJumpLoc; // 0x24(0x0c)
	float PlaneSpeed; // 0x30(0x04)
};

// ScriptStruct TslGame.*ffd6ff5de4
// Size: 0x10 (Inherited: 0x00)
struct F*ffd6ff5de4 {
	struct FName Tag; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*f5b7ab65cb
// Size: 0x18 (Inherited: 0x00)
struct F*f5b7ab65cb {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*ffd6ff5de4> DataList; // 0x08(0x10)
};

// ScriptStruct TslGame.*5b16b9317b
// Size: 0x20 (Inherited: 0x00)
struct F*5b16b9317b {
	struct FName *56709ca8b5; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	int32 *c78601d565; // 0x14(0x04)
	int32 *b4800eaa3c; // 0x18(0x04)
	int32 *b16a5bb8ea; // 0x1c(0x04)
};

// ScriptStruct TslGame.AkVariant
// Size: 0x0c (Inherited: 0x00)
struct FAkVariant {
	float *012e6079af; // 0x00(0x04)
	float *f946abdb21; // 0x04(0x04)
	bool *dda974bbe6; // 0x08(0x01)
	bool *32978b3338; // 0x09(0x01)
	bool *63a14b11f3; // 0x0a(0x01)
	bool *e9d9adcce4; // 0x0b(0x01)
};

// ScriptStruct TslGame.*c5f7bfb2be
// Size: 0x18 (Inherited: 0x00)
struct F*c5f7bfb2be {
	struct FString EventName; // 0x00(0x10)
	struct UAkAudioEvent* AkAudioEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*fd1c03fd58
// Size: 0xa0 (Inherited: 0x98)
struct F*fd1c03fd58 : F*fa4a8c1495 {
	struct UBlendSpace* BlendSpaceStop; // 0x98(0x08)
};

// ScriptStruct TslGame.*fa4a8c1495
// Size: 0x98 (Inherited: 0x00)
struct F*fa4a8c1495 {
	struct UAnimSequence* BasePose; // 0x00(0x08)
	struct F*13bbace17a IdleAnimations; // 0x08(0x10)
	struct UBlendSpace* BlendSpaceAimOffset; // 0x18(0x08)
	struct F*7fcb805cdc TurningInPlace; // 0x20(0x20)
	struct UBlendSpace* BlendSpaceLocomotion; // 0x40(0x08)
	struct UBlendSpace* BlendSpaceStart; // 0x48(0x08)
	struct F*c58dd80cb3 AnimSpeed_Walk; // 0x50(0x20)
	struct F*c58dd80cb3 AnimSpeed_Run; // 0x70(0x20)
	float AnimSpeed_Sprint; // 0x90(0x04)
	float AimOffsetBlendTime; // 0x94(0x04)
};

// ScriptStruct TslGame.*c58dd80cb3
// Size: 0x20 (Inherited: 0x00)
struct F*c58dd80cb3 {
	float F; // 0x00(0x04)
	float L; // 0x04(0x04)
	float R; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float FL; // 0x10(0x04)
	float FR; // 0x14(0x04)
	float BL; // 0x18(0x04)
	float BR; // 0x1c(0x04)
};

// ScriptStruct TslGame.*7fcb805cdc
// Size: 0x20 (Inherited: 0x00)
struct F*7fcb805cdc {
	struct UAnimSequence* Left90; // 0x00(0x08)
	struct UAnimSequence* Left180; // 0x08(0x08)
	struct UAnimSequence* Right90; // 0x10(0x08)
	struct UAnimSequence* Right180; // 0x18(0x08)
};

// ScriptStruct TslGame.*af1cd24bfa
// Size: 0xa8 (Inherited: 0x98)
struct F*af1cd24bfa : F*fa4a8c1495 {
	struct UBlendSpace* BlendSpaceStopLeft; // 0x98(0x08)
	struct UBlendSpace* BlendSpaceStopRight; // 0xa0(0x08)
};

// ScriptStruct TslGame.*cafd75bd7a
// Size: 0xf0 (Inherited: 0x98)
struct F*cafd75bd7a : F*fa4a8c1495 {
	struct UAnimSequence* JumpStartForward; // 0x98(0x08)
	struct UAnimSequence* JumpStartBackward; // 0xa0(0x08)
	struct UAnimSequence* JumpStartStationary; // 0xa8(0x08)
	struct UAnimSequence* JumpStartLocalForward; // 0xb0(0x08)
	struct UAnimSequence* JumpStartLocalBackward; // 0xb8(0x08)
	struct UAnimSequence* JumpStartLocalStationary; // 0xc0(0x08)
	struct UBlendSpace* BlendSpaceStopLeft; // 0xc8(0x08)
	struct UBlendSpace* BlendSpaceStopRight; // 0xd0(0x08)
	struct UBlendSpace* BlendSpacePivotLeft; // 0xd8(0x08)
	struct UBlendSpace* BlendSpacePivotRight; // 0xe0(0x08)
	struct UBlendSpace* BlendSpaceFastTurnPivot; // 0xe8(0x08)
};

// ScriptStruct TslGame.AnimInfo
// Size: 0xb8 (Inherited: 0x00)
struct FAnimInfo {
	struct UAnimSequence* IdleBasePose; // 0x00(0x08)
	struct UAnimSequence* IdleBasePoseFPP; // 0x08(0x08)
	struct F*13bbace17a IdleAnimations; // 0x10(0x10)
	struct F*13bbace17a IdleAnimationsCold; // 0x20(0x10)
	struct F*7fcb805cdc TurningInPlace; // 0x30(0x20)
	struct UBlendSpace* LocomotionBlendspace; // 0x50(0x08)
	struct UBlendSpace* LocomotionBlendspaceFPP; // 0x58(0x08)
	struct UBlendSpace* LocomotionStartBlendspace; // 0x60(0x08)
	struct UBlendSpace* LocomotionStopBlendspace; // 0x68(0x08)
	struct F*c58dd80cb3 AnimSpeed_Walk; // 0x70(0x20)
	struct F*c58dd80cb3 AnimSpeed_Run; // 0x90(0x20)
	float AnimSpeed_Sprint; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.*a69cf4cad0
// Size: 0x40 (Inherited: 0x00)
struct F*a69cf4cad0 {
	struct F*013b66b80a StandTPP; // 0x00(0x10)
	struct F*013b66b80a StandFPP; // 0x10(0x10)
	struct F*013b66b80a ProneTPP; // 0x20(0x10)
	struct F*013b66b80a ProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*013b66b80a
// Size: 0x10 (Inherited: 0x00)
struct F*013b66b80a {
	struct UAnimSequence* Default; // 0x00(0x08)
	struct UAnimSequence* ParentControl; // 0x08(0x08)
};

// ScriptStruct TslGame.*08371ae717
// Size: 0x0c (Inherited: 0x00)
struct F*08371ae717 {
	float Walk; // 0x00(0x04)
	float Run; // 0x04(0x04)
	float Sprint; // 0x08(0x04)
};

// ScriptStruct TslGame.*17ff20f832
// Size: 0x38 (Inherited: 0x00)
struct F*17ff20f832 {
	enum class ERaycastDirection Direction; // 0x00(0x01)
	bool bUseCustomDirection; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector *6859abdc87; // 0x04(0x0c)
	struct FName *8c9b1b5b84; // 0x10(0x08)
	float *824bf3c45a; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct U*5f85a72869* *96073865ea; // 0x20(0x08)
	struct F*07c00f73c7 *cebde2649b; // 0x28(0x10)
};

// ScriptStruct TslGame.*07c00f73c7
// Size: 0x10 (Inherited: 0x00)
struct F*07c00f73c7 {
	struct FVector Offset; // 0x00(0x0c)
	bool *96fe8e1e2f; // 0x0c(0x01)
	bool *be7b46afed; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*36398a1de4
// Size: 0x1c (Inherited: 0x00)
struct F*36398a1de4 {
	struct FVector InitialActorOffset; // 0x00(0x0c)
	struct FVector TraceVector; // 0x0c(0x0c)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct TslGame.*182c756607
// Size: 0xb0 (Inherited: 0x08)
struct F*182c756607 : FTableRowBase {
	int32 EmoteID; // 0x08(0x04)
	enum class EEmotePlayType PlayType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText EmoteLocalizedName; // 0x10(0x18)
	struct UTexture2D* UITexture; // 0x28(0x08)
	struct UMaterialInterface* UIMaterial; // 0x30(0x08)
	struct UAnimMontage* AnimMogtage_SoftRef; // 0x38(0x20)
	enum class *f061715223 AnimType; // 0x58(0x01)
	bool bIsBGM_Sound; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32 EmoteIDforOtherTeammate; // 0x5c(0x04)
	struct F*8110f13657 EmoteIDsForTeammate; // 0x60(0x10)
	bool bRandomTeammateID; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32 TeammateAllowedNumber; // 0x74(0x04)
	struct FName StartInteractSectionName; // 0x78(0x08)
	bool bRandomPlayInteractScetion; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float FollowRestricDistance; // 0x84(0x04)
	struct U*d1298b004a* TraceDataRef; // 0x88(0x08)
	float FPPEmoteViewPitchMin; // 0x90(0x04)
	float FPPEmoteViewPitchMax; // 0x94(0x04)
	float FPPEmoteViewYawMin; // 0x98(0x04)
	float FPPEmoteViewYawMax; // 0x9c(0x04)
	enum class EEmoteMoveType MoveType; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float MaxMoveSpeed; // 0xa4(0x04)
	float MoveCapsuleRadius; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct TslGame.*8110f13657
// Size: 0x10 (Inherited: 0x00)
struct F*8110f13657 {
	struct TArray<int32> EmoteIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*3028a49079
// Size: 0x28 (Inherited: 0x00)
struct F*3028a49079 {
	struct UAnimMontage* *ac87147d39; // 0x00(0x20)
	struct UAnimMontage* AnimMontage; // 0x20(0x08)
};

// ScriptStruct TslGame.*d45fda5a42
// Size: 0x10 (Inherited: 0x00)
struct F*d45fda5a42 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*b0edfc5d75
// Size: 0x10 (Inherited: 0x00)
struct F*b0edfc5d75 {
	struct FVector2D *1ccdc40286; // 0x00(0x08)
	struct ATslSpecialZoneActor* *5f93986f66; // 0x08(0x08)
};

// ScriptStruct TslGame.*7e42d5bda9
// Size: 0x14 (Inherited: 0x00)
struct F*7e42d5bda9 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x13]; // 0x01(0x13)
};

// ScriptStruct TslGame.*281bc81703
// Size: 0x0c (Inherited: 0x00)
struct F*281bc81703 {
	int32 *d151a2435e; // 0x00(0x04)
	int32 *6349e7a2da; // 0x04(0x04)
	int32 *7b81fa69fc; // 0x08(0x04)
};

// ScriptStruct TslGame.*ca2ae9f43a
// Size: 0x10 (Inherited: 0x00)
struct F*ca2ae9f43a {
	float *c657cfdea0; // 0x00(0x04)
	float *0dad2903a3; // 0x04(0x04)
	float *ee8976c7f6; // 0x08(0x04)
	int32 *7d738ddba5; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6f428d7bd5
// Size: 0x160 (Inherited: 0x00)
struct F*6f428d7bd5 {
	float *858f973151; // 0x00(0x04)
	float *7825a81b47; // 0x04(0x04)
	float *058bb2b7bc; // 0x08(0x04)
	float *c7a32dda83; // 0x0c(0x04)
	float *8e3c6835fa; // 0x10(0x04)
	int32 *68ab70b96b; // 0x14(0x04)
	int32 *d37db01767; // 0x18(0x04)
	int32 *ed1cc460c2; // 0x1c(0x04)
	struct TMap<struct FString, struct F*18ae7cc84b> *5cd6c8cd01; // 0x20(0x50)
	struct TMap<struct FString, struct F*18ae7cc84b> *c630258941; // 0x70(0x50)
	struct TMap<struct FString, int32> *424510cff0; // 0xc0(0x50)
	struct TMap<enum class EMovementBaseType, float> *b30fc93759; // 0x110(0x50)
};

// ScriptStruct TslGame.*18ae7cc84b
// Size: 0x58 (Inherited: 0x00)
struct F*18ae7cc84b {
	int32 Shots; // 0x00(0x04)
	float *ad6f66c6c5; // 0x04(0x04)
	struct TMap<enum class EDamageReason, struct F*f74984e2b8> *7cf553c8e6; // 0x08(0x50)
};

// ScriptStruct TslGame.*f74984e2b8
// Size: 0x18 (Inherited: 0x00)
struct F*f74984e2b8 {
	int32 Hits; // 0x00(0x04)
	int32 *9261a8a7f6; // 0x04(0x04)
	float *b07ca8f2e3; // 0x08(0x04)
	float *57a2605ec6; // 0x0c(0x04)
	int32 Kills; // 0x10(0x04)
	int32 *ce7664900c; // 0x14(0x04)
};

// ScriptStruct TslGame.*efdfb03378
// Size: 0x18 (Inherited: 0x00)
struct F*efdfb03378 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*670cb095b9
// Size: 0x08 (Inherited: 0x00)
struct F*670cb095b9 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*49b307d577
// Size: 0x0c (Inherited: 0x00)
struct F*49b307d577 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*15473acc74
// Size: 0x10 (Inherited: 0x00)
struct F*15473acc74 {
	struct UClass* *7eb4f2f190; // 0x00(0x08)
	float *3a8620bc1a; // 0x08(0x04)
	bool *24c894eaed; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*878abf273a
// Size: 0xd0 (Inherited: 0x00)
struct F*878abf273a {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* *a8cafe2ad3; // 0x10(0x08)
	struct UClass* *e0c72cc7fa; // 0x18(0x08)
	struct UClass* *630d448fc1; // 0x20(0x08)
	struct UClass* *187f23d433; // 0x28(0x08)
	struct UClass* *611f2ffc2e; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct F*e4e20503ae *caf76f39c3; // 0x48(0x08)
	struct FVector *2c3372adaf; // 0x50(0x0c)
	struct FVector *3c239fbf6f; // 0x5c(0x0c)
	struct FVector *da54350e43; // 0x68(0x0c)
	struct FVector *93ff1a00f4; // 0x74(0x0c)
	struct FVector *22b5ccb730; // 0x80(0x0c)
	struct FVector *2c4faa930f; // 0x8c(0x0c)
	struct F*e4e20503ae *d72538a5b9; // 0x98(0x08)
	float *c197da344c; // 0xa0(0x04)
	char pad_A4[0x2c]; // 0xa4(0x2c)
};

// ScriptStruct TslGame.*e4e20503ae
// Size: 0x08 (Inherited: 0x00)
struct F*e4e20503ae {
	float *d305d81580; // 0x00(0x04)
	float *2fe55e000a; // 0x04(0x04)
};

// ScriptStruct TslGame.*9a3ecbb9f1
// Size: 0x78 (Inherited: 0x00)
struct F*9a3ecbb9f1 {
	struct FString ServerURL; // 0x00(0x10)
	struct FString Domain; // 0x10(0x10)
	struct FString Issuer; // 0x20(0x10)
	bool *beac2ee5d2; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString GVoiceServerUrl; // 0x38(0x10)
	struct FString GVoiceAppKey; // 0x48(0x10)
	struct FString GVoiceAppId; // 0x58(0x10)
	int32 GVoiceProximalMaxRange; // 0x68(0x04)
	int32 GVoiceDistNear; // 0x6c(0x04)
	int32 GVoiceDistFar; // 0x70(0x04)
	float GVoiceVolPercentage; // 0x74(0x04)
};

// ScriptStruct TslGame.*48577663d4
// Size: 0xa8 (Inherited: 0x00)
struct F*48577663d4 {
	float BlurLevel; // 0x00(0x04)
	float ScopeRadiusNear; // 0x04(0x04)
	float ScopeRadiusFar; // 0x08(0x04)
	struct FVector2D ReticleRect; // 0x0c(0x08)
	float ReticleAngularSize; // 0x14(0x04)
	struct FLinearColor ReticleTint; // 0x18(0x10)
	float ReticleGamma; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UTexture* ReticleTexture; // 0x30(0x08)
	bool bReticleExtendTextureBorder; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct U*f8ed8c5116* ReticleSettings; // 0x40(0x08)
	float ScopeLensDistortion; // 0x48(0x04)
	float ScopeLensCA; // 0x4c(0x04)
	struct FLinearColor ScopeLensTint; // 0x50(0x10)
	float ScopeOuterBrightness; // 0x60(0x04)
	float DepthBlurPower; // 0x64(0x04)
	float DepthBlurWhitePoint; // 0x68(0x04)
	float DepthBlurBlackPoint; // 0x6c(0x04)
	struct FVector2D RelativeOffsetMap; // 0x70(0x08)
	float ParallaxMovementScale; // 0x78(0x04)
	float ParallaxRadiusScale; // 0x7c(0x04)
	float BloomIntensity; // 0x80(0x04)
	float NearClipStaticOffset; // 0x84(0x04)
	float NearClipMinClamp; // 0x88(0x04)
	struct FVector WeaponCycleCameraOffset; // 0x8c(0x0c)
	struct FReticleBrightSceneVisibility BrightSceneVisibility; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.ReticleBrightSceneVisibility
// Size: 0x0c (Inherited: 0x00)
struct FReticleBrightSceneVisibility {
	float LuminanceMultiplier; // 0x00(0x04)
	float OpacityMultiplier; // 0x04(0x04)
	float OpacityMultiplierLowResolution; // 0x08(0x04)
};

// ScriptStruct TslGame.*cd4106f23d
// Size: 0x280 (Inherited: 0x00)
struct F*cd4106f23d {
	struct FName WeaponTag; // 0x00(0x08)
	struct UStaticMesh* AttachmentMeshAsset; // 0x08(0x20)
	struct FWeaponAttachmentData AttachmentData; // 0x28(0x250)
	struct UClass* AttachmentTemplate; // 0x278(0x08)
};

// ScriptStruct TslGame.WeaponAttachmentData
// Size: 0x250 (Inherited: 0x00)
struct FWeaponAttachmentData {
	enum class EWeaponAttachmentSlotID AttachmentSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AttachmentTag; // 0x08(0x08)
	struct FName Name; // 0x10(0x08)
	struct FName MouseSensitiveName; // 0x18(0x08)
	float MagnificationFOVMaxIncrement; // 0x20(0x04)
	int32 MagnificationFOVSteps; // 0x24(0x04)
	float MagnificationFOV; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct F*88219ba181 ReticleBrightnessConfig; // 0x30(0x20)
	struct TArray<float> *a12b48971c; // 0x50(0x10)
	struct TMap<struct FName, struct UMaterialInstance*> *76751e9804; // 0x60(0x50)
	struct TMap<struct FName, struct U*f8ed8c5116*> *7861f9ea68; // 0xb0(0x50)
	struct U*eacccdb9b5* *593c98a496; // 0x100(0x08)
	int32 AmmoPerClip; // 0x108(0x04)
	float ReloadAnimationPlayRate; // 0x10c(0x04)
	float MultipleFiringBulletsSpread; // 0x110(0x04)
	float RecoilMultiplierHorizontal; // 0x114(0x04)
	float RecoilMultiplierVertical; // 0x118(0x04)
	float RecoilRecoveryMultiplier; // 0x11c(0x04)
	float SwayMultiplier; // 0x120(0x04)
	float AnimationKickMultiplier; // 0x124(0x04)
	float DeviationMultiplier; // 0x128(0x04)
	float ADSSpeedMultiplier; // 0x12c(0x04)
	struct FVector FPPSocketOffset; // 0x130(0x0c)
	int32 GripType_MN; // 0x13c(0x04)
	float BarrelLengthAdditive; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct UParticleSystem* MuzzleFx; // 0x148(0x08)
	struct FName MuzzleAttachPoint; // 0x150(0x08)
	enum class *4fba765f9a WeaponGripLeft; // 0x158(0x01)
	bool bIsSuppressor; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct FStringAssetReference MuzzleSound; // 0x160(0x10)
	struct UAnimMontage* CharacterReloadTactical; // 0x170(0x08)
	struct UAnimMontage* WeaponReloadTactical; // 0x178(0x08)
	struct UAnimMontage* CharacterReloadCharge; // 0x180(0x08)
	struct UAnimMontage* WeaponReloadCharge; // 0x188(0x08)
	bool bUsePelletGridOverride; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TMap<int32, struct FVector2D> *9418f9c357; // 0x198(0x50)
	float StabilitySpeedScalar; // 0x1e8(0x04)
	float StabilityMinForceAdditive; // 0x1ec(0x04)
	float RecoilEarlyExitScale; // 0x1f0(0x04)
	float CantedWeaponRotation; // 0x1f4(0x04)
	bool bUseReticleTypeOverride; // 0x1f8(0x01)
	bool bUseDefaultReticleCaching; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)
	struct TArray<struct F*edc888d471> ReticleTextureDataArray; // 0x200(0x10)
	struct F*89fd3b7d33 ScopeGlintConfig; // 0x210(0x3c)
	bool bThermalTemperatureInteractive; // 0x24c(0x01)
	bool bBlocksGameplayTracers; // 0x24d(0x01)
	char pad_24E[0x2]; // 0x24e(0x02)
};

// ScriptStruct TslGame.*89fd3b7d33
// Size: 0x3c (Inherited: 0x00)
struct F*89fd3b7d33 {
	bool GlintEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D GlintStartFade; // 0x04(0x08)
	struct FVector ScopeEndPositionLS; // 0x0c(0x0c)
	float ScopeRadiusLS; // 0x18(0x04)
	float GlintRadiusScreen; // 0x1c(0x04)
	float ScopeRadiusScreen; // 0x20(0x04)
	struct FLinearColor GlintColor; // 0x24(0x10)
	struct FVector2D GlintVisibilityArcLength; // 0x34(0x08)
};

// ScriptStruct TslGame.*edc888d471
// Size: 0x40 (Inherited: 0x00)
struct F*edc888d471 {
	float ReticleAngularSize; // 0x00(0x04)
	struct FVector2D ReticleCenter; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture2D* ReticleTexture; // 0x10(0x08)
	bool bUseHaloTexture; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float HaloTextureScale; // 0x1c(0x04)
	struct FVector ReticleColor; // 0x20(0x0c)
	float ReticleScale; // 0x2c(0x04)
	float BrightSceneLuminanceMultiplier; // 0x30(0x04)
	float BrightSceneOpacityMultiplier; // 0x34(0x04)
	float BrightSceneOpacityMultiplierLowResolution; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGame.*88219ba181
// Size: 0x20 (Inherited: 0x00)
struct F*88219ba181 {
	struct U*226eb62c2c* ReticleBrightnessSettingsCurve; // 0x00(0x08)
	struct FName ReticleBrightnessParamX; // 0x08(0x08)
	struct FName ReticleBrightnessParamY; // 0x10(0x08)
	struct FName ReticleBrightnessParamZ; // 0x18(0x08)
};

// ScriptStruct TslGame.*e7a62cd871
// Size: 0x28 (Inherited: 0x00)
struct F*e7a62cd871 {
	enum class EWeaponAttachmentSlotID Slot; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *c3613badaa; // 0x08(0x10)
	struct TArray<struct FName> *4db2bf5ec9; // 0x18(0x10)
};

// ScriptStruct TslGame.*864e650453
// Size: 0x20 (Inherited: 0x00)
struct F*864e650453 {
	enum class EWeaponAttachmentSlotID *40ad4ac699; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *2d2c445c80; // 0x08(0x08)
	struct TArray<struct F*f7422a9a60> *a4564a0085; // 0x10(0x10)
};

// ScriptStruct TslGame.*f7422a9a60
// Size: 0x10 (Inherited: 0x00)
struct F*f7422a9a60 {
	struct FName *103bcb72bf; // 0x00(0x08)
	struct FName *2d2c445c80; // 0x08(0x08)
};

// ScriptStruct TslGame.*18f98e494a
// Size: 0x18 (Inherited: 0x00)
struct F*18f98e494a {
	enum class EWeaponAttachmentSlotID *40ad4ac699; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *35193bb2f1; // 0x08(0x10)
};

// ScriptStruct TslGame.*b050c2aeb4
// Size: 0x18 (Inherited: 0x00)
struct F*b050c2aeb4 {
	struct UAnimMontage* *2fbfcccff0; // 0x00(0x08)
	struct UAnimMontage* *d285625ede; // 0x08(0x08)
	struct UAnimMontage* Pickup; // 0x10(0x08)
};

// ScriptStruct TslGame.*c95f961a31
// Size: 0x10 (Inherited: 0x00)
struct F*c95f961a31 {
	struct UAnimMontage* RollLeft; // 0x00(0x08)
	struct UAnimMontage* RollRight; // 0x08(0x08)
};

// ScriptStruct TslGame.*d1f33c670f
// Size: 0x10 (Inherited: 0x00)
struct F*d1f33c670f {
	struct UAnimMontage* *8cf810833a; // 0x00(0x08)
	struct UAnimMontage* *f61d5bbe98; // 0x08(0x08)
};

// ScriptStruct TslGame.*aa6eed4343
// Size: 0x2b0 (Inherited: 0x00)
struct F*aa6eed4343 {
	float TargetingFOV; // 0x00(0x04)
	float *0015d83aab; // 0x04(0x04)
	struct TMap<enum class EScopeType, struct FVector2D> *f3c41522a3; // 0x08(0x50)
	struct FName *3a619c65ba; // 0x58(0x08)
	struct FVector *3cc1b5e6fc; // 0x60(0x0c)
	struct FRotator *a1d41319fc; // 0x6c(0x0c)
	struct FVector *9a15ab66cb; // 0x78(0x0c)
	struct FRotator *b2009fca4c; // 0x84(0x0c)
	bool *62675d600e; // 0x90(0x01)
	bool *f6ee8480b8; // 0x91(0x01)
	bool *dce28abfa2; // 0x92(0x01)
	enum class *4fba765f9a *36781740a2; // 0x93(0x01)
	enum class EWeaponClass *6e2795bba1; // 0x94(0x01)
	enum class EAnimWeaponSpecificClass *07f96535d5; // 0x95(0x01)
	enum class EWeaponClass *a653579b16; // 0x96(0x01)
	bool *176f077988; // 0x97(0x01)
	bool *e872ca8fbd; // 0x98(0x01)
	bool *5927f76d32; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float *d343cf3edc; // 0x9c(0x04)
	float *fae6dfa6b8; // 0xa0(0x04)
	float *d46ddc1e5a; // 0xa4(0x04)
	float *4f05f1f5fa; // 0xa8(0x04)
	float *c104bea853; // 0xac(0x04)
	float *6f752ef3e7; // 0xb0(0x04)
	float *528e409a73; // 0xb4(0x04)
	float *f4aece2965; // 0xb8(0x04)
	bool *a3b0abcbb1; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct TArray<float> *33466479a8; // 0xc0(0x10)
	float *cd56b3e311; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UAnimMontage* *9a66941588; // 0xd8(0x08)
	bool DestructibleDoor; // 0xe0(0x01)
	enum class EThrownWeaponType *8b21295621; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct TMap<enum class ECustomGripBlendSpaceType, struct F*9f5cfa5d67> *da8dd9b2da; // 0xe8(0x50)
	float *bb185c1c12; // 0x138(0x04)
	float *728acf7efc; // 0x13c(0x04)
	float *5f6927990a; // 0x140(0x04)
	float *104bbfef1c; // 0x144(0x04)
	float *ebcfc408d4; // 0x148(0x04)
	bool *c83933c09e; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	float *3d7acc0f17; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FName *bed69a2570; // 0x158(0x08)
	SetProperty *c35d46e036; // 0x160(0x50)
	float *7fa713bc38; // 0x1b0(0x04)
	float *2f79db36e2; // 0x1b4(0x04)
	float *2008a9155d; // 0x1b8(0x04)
	bool *1253c40afa; // 0x1bc(0x01)
	bool *637b972245; // 0x1bd(0x01)
	bool *aa1a447a61; // 0x1be(0x01)
	bool *7cff59a412; // 0x1bf(0x01)
	bool *478d436aed; // 0x1c0(0x01)
	bool *71a894a547; // 0x1c1(0x01)
	bool *d09dfec37b; // 0x1c2(0x01)
	bool *56717e128d; // 0x1c3(0x01)
	float *7199a5af3a; // 0x1c4(0x04)
	struct UStaticMesh* *d6ce6d2a3e; // 0x1c8(0x08)
	struct UAkAudioEvent* *b9f1ce8dbf; // 0x1d0(0x08)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FTransform *720865b1cf; // 0x1e0(0x30)
	struct FTransform *242de9bb1f; // 0x210(0x30)
	struct FTransform *f605d839a2; // 0x240(0x30)
	struct FTransform *a9d3d78c01; // 0x270(0x30)
	bool *e01dced9b1; // 0x2a0(0x01)
	char pad_2A1[0xf]; // 0x2a1(0x0f)
};

// ScriptStruct TslGame.*477032193b
// Size: 0xc0 (Inherited: 0x28)
struct F*477032193b : F*24aacbda15 {
	struct UObject* CharmAsset; // 0x28(0x20)
	struct UStaticMesh* CharmAssetStatic; // 0x48(0x20)
	struct UClass* CharmAnimBlueprint; // 0x68(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> MaterialOverrides; // 0x70(0x50)
};

// ScriptStruct TslGame.*24aacbda15
// Size: 0x28 (Inherited: 0x08)
struct F*24aacbda15 : FTableRowBase {
	struct FText MasteryItemName; // 0x08(0x18)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*58be30f0f2
// Size: 0x04 (Inherited: 0x00)
struct F*58be30f0f2 {
	uint16 *184b225a2d; // 0x00(0x02)
	uint16 *303e5cfccc; // 0x02(0x02)
};

// ScriptStruct TslGame.*c000a7d9af
// Size: 0xa0 (Inherited: 0x00)
struct F*c000a7d9af {
	struct TMap<struct FName, struct UItem*> *832222de8b; // 0x00(0x50)
	struct TMap<int32, struct UItem*> *ff27d6cb41; // 0x50(0x50)
};

// ScriptStruct TslGame.*0f619a5a70
// Size: 0x180 (Inherited: 0x00)
struct F*0f619a5a70 {
	struct FStringAssetReference *d8d51050be; // 0x00(0x10)
	struct FStringAssetReference *acdfedb686; // 0x10(0x10)
	struct FStringAssetReference *d68ecdcb77; // 0x20(0x10)
	struct FStringAssetReference *553c0a1187; // 0x30(0x10)
	struct FStringAssetReference *f25fd3ffaa; // 0x40(0x10)
	struct FStringAssetReference *bf8bc71e78; // 0x50(0x10)
	struct FStringAssetReference *0014a05447; // 0x60(0x10)
	struct FStringAssetReference *51c97277e0; // 0x70(0x10)
	struct FStringAssetReference *1bf67ccc37; // 0x80(0x10)
	struct FStringAssetReference *06d0aa335c; // 0x90(0x10)
	struct FStringAssetReference *8525898aca; // 0xa0(0x10)
	struct FStringAssetReference *540031e3da; // 0xb0(0x10)
	struct FStringAssetReference *8ee4f8aa28; // 0xc0(0x10)
	struct FStringAssetReference *26ca3138d0; // 0xd0(0x10)
	struct FStringAssetReference *289d8c5453; // 0xe0(0x10)
	struct FStringAssetReference *54d667612e; // 0xf0(0x10)
	struct FStringAssetReference *c185a28379; // 0x100(0x10)
	struct UDataTable* *2c3f3eb090; // 0x110(0x20)
	struct FStringAssetReference *d5a183c89c; // 0x130(0x10)
	struct FStringAssetReference *8fce45bf0f; // 0x140(0x10)
	struct FStringAssetReference *38f2a60dbf; // 0x150(0x10)
	struct FStringAssetReference *bf2dbaba72; // 0x160(0x10)
	struct FStringAssetReference *3d9d87be4b; // 0x170(0x10)
};

// ScriptStruct TslGame.WeaponSoundConfig
// Size: 0xb0 (Inherited: 0x00)
struct FWeaponSoundConfig {
	struct UAkAudioEvent* *68f7aee11c; // 0x00(0x08)
	struct UAkAudioEvent* *e098d9a40b; // 0x08(0x08)
	struct FVector2D *433b72afc8; // 0x10(0x08)
	struct UAkAudioEvent* *8692f19c81; // 0x18(0x08)
	struct UAkAudioEvent* *91189457e0; // 0x20(0x08)
	struct UAkAudioEvent* *593f99f6db; // 0x28(0x08)
	struct UAkAudioEvent* *2110b21d9c; // 0x30(0x08)
	struct UAkAudioEvent* *3d98760c90; // 0x38(0x08)
	struct UAkAudioEvent* *ab67fa9205; // 0x40(0x08)
	struct UAkAudioEvent* *be37356ca1; // 0x48(0x08)
	struct UAkAudioEvent* *eea698dd21; // 0x50(0x08)
	struct UAkAudioEvent* EquipSoundAk_Primary; // 0x58(0x08)
	struct UAkAudioEvent* *eb849aaa8b; // 0x60(0x08)
	struct UAkAudioEvent* *6424fbb43d; // 0x68(0x08)
	struct UAkAudioEvent* *1e32f2402c; // 0x70(0x08)
	struct UAkAudioEvent* *2162222250; // 0x78(0x08)
	struct UAkAudioEvent* *4bc4b8cbfc; // 0x80(0x08)
	struct UAkAudioEvent* *444ab2e183; // 0x88(0x08)
	char *3128ca54fb : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UAkAudioEvent* DropAllAttachmentsSoundAk; // 0x98(0x08)
	struct UAkAudioEvent* InventoryPutAllAttachmentsSoundAk; // 0xa0(0x08)
	struct UAkAudioEvent* DropAndInventoryPutAttachmentsSoundAk; // 0xa8(0x08)
};

// ScriptStruct TslGame.*c94bb031ad
// Size: 0x18 (Inherited: 0x00)
struct F*c94bb031ad {
	struct FName WeaponMasteryCharmSocket; // 0x00(0x08)
	struct FName WeaponMasteryCharmAttachSocket; // 0x08(0x08)
	int32 CharmWeaponLODVisibility; // 0x10(0x04)
	int32 VariantWeaponLODVisibility; // 0x14(0x04)
};

// ScriptStruct TslGame.*eb7a70543f
// Size: 0x10 (Inherited: 0x00)
struct F*eb7a70543f {
	enum class EWeaponAttachmentSlotID *52b758d050; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*055eed621c
// Size: 0x08 (Inherited: 0x00)
struct F*055eed621c {
	struct UAnimMontage* *abbd51a057; // 0x00(0x08)
};

// ScriptStruct TslGame.*b085b6bd84
// Size: 0x20 (Inherited: 0x00)
struct F*b085b6bd84 {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName *1ba7be6ef4; // 0x10(0x08)
	bool *a685975c52; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*bae9cf052b
// Size: 0x18 (Inherited: 0x00)
struct F*bae9cf052b {
	struct FName ActionName; // 0x00(0x08)
	struct FName *1ba7be6ef4; // 0x08(0x08)
	bool *a685975c52; // 0x10(0x01)
	enum class *1148c7239b *163dc5d8c3; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*6351b5e701
// Size: 0x20 (Inherited: 0x18)
struct F*6351b5e701 : F*9607a87278 {
	struct UWidget* *f66ca4cb34; // 0x18(0x08)
};

// ScriptStruct TslGame.*9607a87278
// Size: 0x18 (Inherited: 0x00)
struct F*9607a87278 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct UUserWidget* Parent; // 0x10(0x08)
};

// ScriptStruct TslGame.*45f2389d70
// Size: 0xa0 (Inherited: 0x98)
struct F*45f2389d70 : F*bf6f7c5e91 {
	struct U*226eb62c2c* VectorCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.*bf6f7c5e91
// Size: 0x98 (Inherited: 0x00)
struct F*bf6f7c5e91 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UUserWidget* Widget; // 0x18(0x08)
	char pad_20[0x78]; // 0x20(0x78)
};

// ScriptStruct TslGame.*9c13ba876f
// Size: 0xa0 (Inherited: 0x98)
struct F*9c13ba876f : F*bf6f7c5e91 {
	struct UCurveFloat* FloatCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.*6b2efd9d5e
// Size: 0x20 (Inherited: 0x18)
struct F*6b2efd9d5e : F*9607a87278 {
	struct USpacer* *3e02931ee3; // 0x18(0x08)
};

// ScriptStruct TslGame.*03af4cd0fb
// Size: 0x20 (Inherited: 0x18)
struct F*03af4cd0fb : F*9607a87278 {
	struct U*3335e92189* *dff75f523b; // 0x18(0x08)
};

// ScriptStruct TslGame.*9c1bf33950
// Size: 0x18 (Inherited: 0x00)
struct F*9c1bf33950 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*eaf798361e
// Size: 0x20 (Inherited: 0x18)
struct F*eaf798361e : F*9607a87278 {
	struct UWebBrowser* *78691408b1; // 0x18(0x08)
};

// ScriptStruct TslGame.*0f89a77c6d
// Size: 0x20 (Inherited: 0x18)
struct F*0f89a77c6d : F*9607a87278 {
	struct UUserWidget* *f66ca4cb34; // 0x18(0x08)
};

// ScriptStruct TslGame.*8071e70734
// Size: 0x28 (Inherited: 0x20)
struct F*8071e70734 : F*0c169a22f8 {
	struct UScrollBox* *38d439b9d1; // 0x20(0x08)
};

// ScriptStruct TslGame.*0c169a22f8
// Size: 0x20 (Inherited: 0x18)
struct F*0c169a22f8 : F*9607a87278 {
	struct U*d76301fdac* *957cb57e7b; // 0x18(0x08)
};

// ScriptStruct TslGame.*1929405f35
// Size: 0x28 (Inherited: 0x20)
struct F*1929405f35 : F*0c169a22f8 {
	struct UScaleBox* *354353d957; // 0x20(0x08)
};

// ScriptStruct TslGame.*7eab766f7b
// Size: 0x28 (Inherited: 0x20)
struct F*7eab766f7b : F*0c169a22f8 {
	struct UInvalidationBox* *96a64461ee; // 0x20(0x08)
};

// ScriptStruct TslGame.*85d6733a69
// Size: 0x28 (Inherited: 0x20)
struct F*85d6733a69 : F*0c169a22f8 {
	struct URetainerBox* *f6d10780b4; // 0x20(0x08)
};

// ScriptStruct TslGame.*c204d7664a
// Size: 0x28 (Inherited: 0x20)
struct F*c204d7664a : F*0c169a22f8 {
	struct UWrapBox* *b26d5d012b; // 0x20(0x08)
};

// ScriptStruct TslGame.*92d5c0f2ef
// Size: 0x28 (Inherited: 0x20)
struct F*92d5c0f2ef : F*0c169a22f8 {
	struct USizeBox* *1cc3053b7f; // 0x20(0x08)
};

// ScriptStruct TslGame.*07222da915
// Size: 0x30 (Inherited: 0x20)
struct F*07222da915 : F*0c169a22f8 {
	struct UBorder* *7999e8f255; // 0x20(0x08)
	struct UMaterialInstanceDynamic* *1586dddf32; // 0x28(0x08)
};

// ScriptStruct TslGame.*ca2a13fb88
// Size: 0x20 (Inherited: 0x18)
struct F*ca2a13fb88 : F*9607a87278 {
	struct UEditableText* *7654c21836; // 0x18(0x08)
};

// ScriptStruct TslGame.*471718b397
// Size: 0x20 (Inherited: 0x18)
struct F*471718b397 : F*9607a87278 {
	struct UTextBlock* *0d15745377; // 0x18(0x08)
};

// ScriptStruct TslGame.*89ccd1e174
// Size: 0x28 (Inherited: 0x20)
struct F*89ccd1e174 : F*0c169a22f8 {
	struct UWidgetSwitcher* *fff607e446; // 0x20(0x08)
};

// ScriptStruct TslGame.*093563bf09
// Size: 0x28 (Inherited: 0x20)
struct F*093563bf09 : F*0c169a22f8 {
	struct UHorizontalBox* *7e5697d7a5; // 0x20(0x08)
};

// ScriptStruct TslGame.*cd4c9d7cc4
// Size: 0x28 (Inherited: 0x20)
struct F*cd4c9d7cc4 : F*0c169a22f8 {
	struct UVerticalBox* *f6184f769d; // 0x20(0x08)
};

// ScriptStruct TslGame.*334c0e7a9a
// Size: 0x28 (Inherited: 0x20)
struct F*334c0e7a9a : F*0c169a22f8 {
	struct UOverlay* *27e3b61848; // 0x20(0x08)
};

// ScriptStruct TslGame.*8e4dc0564e
// Size: 0x28 (Inherited: 0x20)
struct F*8e4dc0564e : F*0c169a22f8 {
	struct UCanvasPanel* *f60c4b4ff3; // 0x20(0x08)
};

// ScriptStruct TslGame.*7935e10e39
// Size: 0x28 (Inherited: 0x18)
struct F*7935e10e39 : F*9607a87278 {
	struct UImage* *3a1c1eb46a; // 0x18(0x08)
	struct UMaterialInstanceDynamic* *1586dddf32; // 0x20(0x08)
};

// ScriptStruct TslGame.*ec8159ad0f
// Size: 0x60 (Inherited: 0x00)
struct F*ec8159ad0f {
	struct F*471718b397 *25c80eca22; // 0x00(0x20)
	struct F*471718b397 *52cbeab7c8; // 0x20(0x20)
	char pad_40[0x20]; // 0x40(0x20)
};

// ScriptStruct TslGame.*c87eec7df6
// Size: 0x40 (Inherited: 0x00)
struct F*c87eec7df6 {
	struct F*471718b397 *25c80eca22; // 0x00(0x20)
	enum class *312d2d60bc *852c6df071; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *74dc394fd3; // 0x24(0x04)
	bool *e410e5b823; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString *a1fdb953d4; // 0x30(0x10)
};

// ScriptStruct TslGame.*2c3e1f15a9
// Size: 0x30 (Inherited: 0x00)
struct F*2c3e1f15a9 {
	struct FText *bd5e991ba4; // 0x00(0x18)
	struct FText *0cc95c4cc0; // 0x18(0x18)
};

// ScriptStruct TslGame.*cc1e2ac26f
// Size: 0x18 (Inherited: 0x00)
struct F*cc1e2ac26f {
	enum class ESandboxGroypType *391af44d86; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*bcaa3d331f> Categories; // 0x08(0x10)
};

// ScriptStruct TslGame.*bcaa3d331f
// Size: 0x18 (Inherited: 0x00)
struct F*bcaa3d331f {
	int32 *d39a68820b; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*e0e5982eed> Items; // 0x08(0x10)
};

// ScriptStruct TslGame.*e0e5982eed
// Size: 0x08 (Inherited: 0x00)
struct F*e0e5982eed {
	int32 *8e549d748b; // 0x00(0x04)
	int32 *57b7ba8ef8; // 0x04(0x04)
};

// ScriptStruct TslGame.*97c231df0a
// Size: 0x10 (Inherited: 0x00)
struct F*97c231df0a {
	enum class ESandboxPowerType Type; // 0x00(0x04)
	bool *4f912b1cba; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UParticleSystemComponent* *968357fd63; // 0x08(0x08)
};

// ScriptStruct TslGame.SandboxItemDataTable
// Size: 0x68 (Inherited: 0x10)
struct FSandboxItemDataTable : FBaseSandboxItemDataTable {
	struct FName CategoryName; // 0x10(0x08)
	struct FStringClassReference *aa83d1a421; // 0x18(0x10)
	struct FName ItemID; // 0x28(0x08)
	struct FString *de5df891fc; // 0x30(0x10)
	struct FString *09a3ceabbc; // 0x40(0x10)
	struct FString *a6e04c8157; // 0x50(0x10)
	int32 Index; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.BaseSandboxItemDataTable
// Size: 0x10 (Inherited: 0x08)
struct FBaseSandboxItemDataTable : FTableRowBase {
	struct FName *6f97d7a26f; // 0x08(0x08)
};

// ScriptStruct TslGame.SandboxL10NDataTable
// Size: 0x48 (Inherited: 0x10)
struct FSandboxL10NDataTable : FBaseSandboxItemDataTable {
	struct FString NameSpace; // 0x10(0x10)
	struct FString Key; // 0x20(0x10)
	struct FString MsgId; // 0x30(0x10)
	int32 Index; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*c7e7fb11a9
// Size: 0x78 (Inherited: 0x10)
struct F*c7e7fb11a9 : FBaseSandboxItemDataTable {
	struct FName ItemName; // 0x10(0x08)
	struct FText *5e46a1bc28; // 0x18(0x18)
	struct FText DescriptionText; // 0x30(0x18)
	bool *4c781def58; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D SliderRange; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*2c3e1f15a9> *566c199562; // 0x58(0x10)
	struct UClass* ItemWidgetClass; // 0x68(0x08)
	struct UClass* *18e6290273; // 0x70(0x08)
};

// ScriptStruct TslGame.*99b91380ee
// Size: 0x38 (Inherited: 0x00)
struct F*99b91380ee {
	char pad_0[0x20]; // 0x00(0x20)
	enum class EStanceMode *9c226c351f; // 0x20(0x01)
	char pad_21[0x17]; // 0x21(0x17)
};

// ScriptStruct TslGame.*d587ad1b1b
// Size: 0x18 (Inherited: 0x00)
struct F*d587ad1b1b {
	struct UCurveFloat* *1102258923; // 0x00(0x08)
	float *c92fa3bb1f; // 0x08(0x04)
	float MaxSpeed; // 0x0c(0x04)
	float *f1ae9b8fe2; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*40d5fe5d9e
// Size: 0x18 (Inherited: 0x00)
struct F*40d5fe5d9e {
	bool *9d29e74ea3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *800cc5a68c; // 0x04(0x04)
	bool *b11acaa98b; // 0x08(0x01)
	bool bUseAbsoluteAutoDeployAltitude; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float AutoDeployAltitude; // 0x0c(0x04)
	float StartDeployAltitude; // 0x10(0x04)
	float *fa2015cf65; // 0x14(0x04)
};

// ScriptStruct TslGame.*19ad8bc214
// Size: 0x10 (Inherited: 0x00)
struct F*19ad8bc214 {
	float *a6984950ae; // 0x00(0x04)
	float *fe3aa9e6da; // 0x04(0x04)
	float *c84424b1cb; // 0x08(0x04)
	float *802ef5acef; // 0x0c(0x04)
};

// ScriptStruct TslGame.AscenderMovementSettings
// Size: 0x20 (Inherited: 0x00)
struct FAscenderMovementSettings {
	float UpwardAcceleration; // 0x00(0x04)
	float DownwardAcceleration; // 0x04(0x04)
	float DownwardAccelerationSprinting; // 0x08(0x04)
	float Friction; // 0x0c(0x04)
	float BrakingFriction; // 0x10(0x04)
	float MaxVelocityUp; // 0x14(0x04)
	float MaxVelocityDown; // 0x18(0x04)
	float MaxVelocityDownSprint; // 0x1c(0x04)
};

// ScriptStruct TslGame.*c62dfae6f9
// Size: 0x2c (Inherited: 0x00)
struct F*c62dfae6f9 {
	float Height; // 0x00(0x04)
	float *a6984950ae; // 0x04(0x04)
	float *fe3aa9e6da; // 0x08(0x04)
	float *c84424b1cb; // 0x0c(0x04)
	float *802ef5acef; // 0x10(0x04)
	bool *9d29e74ea3; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *800cc5a68c; // 0x18(0x04)
	bool *b11acaa98b; // 0x1c(0x01)
	bool bUseAbsoluteAutoDeployAltitude; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float AutoDeployAltitude; // 0x20(0x04)
	float StartDeployAltitude; // 0x24(0x04)
	float *fa2015cf65; // 0x28(0x04)
};

// ScriptStruct TslGame.*8d8a9f9e92
// Size: 0x10 (Inherited: 0x00)
struct F*8d8a9f9e92 {
	struct FName *c6dc021346; // 0x00(0x08)
	enum class EEmotePlayType *32dfb6978c; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *b7b22598d1; // 0x0c(0x04)
};

// ScriptStruct TslGame.*bb27f20e41
// Size: 0x28 (Inherited: 0x00)
struct F*bb27f20e41 {
	struct FString StringOptionKey; // 0x00(0x10)
	enum class EGender Gender; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> ZombieOptionValues; // 0x18(0x10)
};

// ScriptStruct TslGame.*639b3560cb
// Size: 0x18 (Inherited: 0x00)
struct F*639b3560cb {
	float BoostGauge; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* Buff; // 0x08(0x08)
	struct FName OverlapId; // 0x10(0x08)
};

// ScriptStruct TslGame.*efa06733d0
// Size: 0x10 (Inherited: 0x00)
struct F*efa06733d0 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*ea3d47dbd4
// Size: 0x10 (Inherited: 0x00)
struct F*ea3d47dbd4 {
	struct UAnimMontage* *de17ef6391; // 0x00(0x08)
	struct UAnimMontage* *079790bf18; // 0x08(0x08)
};

// ScriptStruct TslGame.*c770439981
// Size: 0x20 (Inherited: 0x00)
struct F*c770439981 {
	struct FString RecordTargetNetId; // 0x00(0x10)
	struct FString RecordTargetName; // 0x10(0x10)
};

// ScriptStruct TslGame.*a00c3bcf0c
// Size: 0x30 (Inherited: 0x00)
struct F*a00c3bcf0c {
	struct FString EtceteraEventCode; // 0x00(0x10)
	struct FString TargetNetId; // 0x10(0x10)
	struct FString TargetName; // 0x20(0x10)
};

// ScriptStruct TslGame.*1a5e0ab8dd
// Size: 0xa0 (Inherited: 0x00)
struct F*1a5e0ab8dd {
	struct FString *4ebe696b50; // 0x00(0x10)
	struct FString *4869a2943d; // 0x10(0x10)
	struct FString VictimNetId; // 0x20(0x10)
	struct FString VictimName; // 0x30(0x10)
	struct FString *116a09ecb6; // 0x40(0x10)
	struct FString *3cdf7e5eca; // 0x50(0x10)
	struct FString *f743161860; // 0x60(0x10)
	bool *7bb11323da; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString *b3fd567cb7; // 0x78(0x10)
	struct FString *2ad1c956ff; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct TslGame.*5250ad6415
// Size: 0x38 (Inherited: 0x00)
struct F*5250ad6415 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*91734f71d5
// Size: 0x18 (Inherited: 0x00)
struct F*91734f71d5 {
	struct FName EmoteName; // 0x00(0x08)
	struct FName SectionName; // 0x08(0x08)
	int32 *22b8469e4a; // 0x10(0x04)
	enum class EEmotePlayType *6555aed6dd; // 0x14(0x01)
	bool *c48675b26c; // 0x15(0x01)
	bool *57c0d19e1c; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
};

// ScriptStruct TslGame.*e42f0a6f49
// Size: 0xf0 (Inherited: 0x00)
struct F*e42f0a6f49 {
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *943cfed758; // 0x00(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *826763d316; // 0x50(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *b77802218e; // 0xa0(0x50)
};

// ScriptStruct TslGame.*ad2fde5590
// Size: 0x50 (Inherited: 0x00)
struct F*ad2fde5590 {
	struct TMap<enum class EThrowableState, struct FStringArray> *611f923d18; // 0x00(0x50)
};

// ScriptStruct TslGame.*21ba1f50d5
// Size: 0x50 (Inherited: 0x00)
struct F*21ba1f50d5 {
	struct TMap<struct FName, struct FString> *b97c06edf9; // 0x00(0x50)
};

// ScriptStruct TslGame.*3a851dd06a
// Size: 0x01 (Inherited: 0x00)
struct F*3a851dd06a {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*ffc7c18d9a
// Size: 0x01 (Inherited: 0x00)
struct F*ffc7c18d9a {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*500bde19e1
// Size: 0x01 (Inherited: 0x00)
struct F*500bde19e1 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*04d5b4ac18
// Size: 0x10 (Inherited: 0x00)
struct F*04d5b4ac18 {
	struct TArray<enum class *c06d22dacc> *0b8cb8730b; // 0x00(0x10)
};

// ScriptStruct TslGame.*a98491da9e
// Size: 0x02 (Inherited: 0x00)
struct F*a98491da9e {
	enum class *c06d22dacc *bcaff7a83d; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGame.AttackMode
// Size: 0x20 (Inherited: 0x00)
struct FAttackMode {
	float *1f9b99ceba; // 0x00(0x04)
	int32 AttackId; // 0x04(0x04)
	float *993c2958fb; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<enum class EWeaponClass> *47ed1456cb; // 0x10(0x10)
};

// ScriptStruct TslGame.*45ba592b00
// Size: 0x10 (Inherited: 0x00)
struct F*45ba592b00 {
	int32 *7dab340d4b; // 0x00(0x04)
	float *c26b0acc42; // 0x04(0x04)
	int32 *b8ec9e83bc; // 0x08(0x04)
	int32 *ee47960e56; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f48935a67d
// Size: 0x14 (Inherited: 0x00)
struct F*f48935a67d {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct TslGame.*e6b5409cd2
// Size: 0x18 (Inherited: 0x00)
struct F*e6b5409cd2 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *f491845348; // 0x08(0x10)
};

// ScriptStruct TslGame.*33529119a5
// Size: 0x18 (Inherited: 0x00)
struct F*33529119a5 {
	struct FName *f934cc21bd; // 0x00(0x08)
	int32 *a075522780; // 0x08(0x04)
	int32 *2575dbb23a; // 0x0c(0x04)
	int32 *6bb9a54d1e; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*b0a73de5cf
// Size: 0x08 (Inherited: 0x00)
struct F*b0a73de5cf {
	float Distance; // 0x00(0x04)
	enum class ETargetingType TargetingMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*fc6ceb32a9
// Size: 0x18 (Inherited: 0x00)
struct F*fc6ceb32a9 {
	int32 *b9728624e2; // 0x00(0x04)
	float *15f0b2debf; // 0x04(0x04)
	struct TArray<struct F*eb91e21c29> *4619f8c5d9; // 0x08(0x10)
};

// ScriptStruct TslGame.*eb91e21c29
// Size: 0x18 (Inherited: 0x00)
struct F*eb91e21c29 {
	int32 *c217eb0825; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*04c5027056> Item; // 0x08(0x10)
};

// ScriptStruct TslGame.*04c5027056
// Size: 0x18 (Inherited: 0x00)
struct F*04c5027056 {
	enum class EAIEquipSpawnItemType *466d4d9ab0; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Item; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*81064449fc
// Size: 0x08 (Inherited: 0x00)
struct F*81064449fc {
	enum class EAITriggerAttrType *b696fdae67; // 0x00(0x01)
	enum class EAIAttrCompareType CompareType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 *9b0a0767b7; // 0x04(0x04)
};

// ScriptStruct TslGame.*46651a7d1e
// Size: 0x08 (Inherited: 0x00)
struct F*46651a7d1e {
	int32 Probability; // 0x00(0x04)
	int32 *017a95df09; // 0x04(0x04)
};

// ScriptStruct TslGame.*981c273a87
// Size: 0x02 (Inherited: 0x00)
struct F*981c273a87 {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	enum class ECollisionResponse Response; // 0x01(0x01)
};

// ScriptStruct TslGame.*8f7bf8875c
// Size: 0x28 (Inherited: 0x08)
struct F*8f7bf8875c : FTableRowBase {
	bool bUseCharacterHitFeedback; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor PartsColor; // 0x0c(0x10)
	float DamageReduceMultiplier; // 0x1c(0x04)
	enum class EDamageZoneType PartsDamageZoneType; // 0x20(0x01)
	enum class EDamageReason PartsDamageReason; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*6b055202f6
// Size: 0x18 (Inherited: 0x00)
struct F*6b055202f6 {
	struct FLinearColor *3ca79a12c2; // 0x00(0x10)
	enum class EDamageReason *f743161860; // 0x10(0x01)
	enum class EDamageZoneType *5c6a3f2b2e; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float *1ca73e6a43; // 0x14(0x04)
};

// ScriptStruct TslGame.*64ee3861bd
// Size: 0x20 (Inherited: 0x00)
struct F*64ee3861bd {
	struct UTexture2D* PartsTargetImage; // 0x00(0x08)
	struct FString *4f8901d9ba; // 0x08(0x10)
	bool bUsingCharacterHitFeedback; // 0x18(0x01)
	bool bUsingDamageIndicator; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*02fbd1b746
// Size: 0x200 (Inherited: 0x08)
struct F*02fbd1b746 : FTableRowBase {
	struct F*d3970bb231 *db79310ab6; // 0x08(0x88)
	struct F*d3970bb231 *3b1e4ecd67; // 0x90(0x88)
	struct TArray<struct FText> *5fa55fb411; // 0x118(0x10)
	struct TArray<struct FText> *019bbf6d4c; // 0x128(0x10)
	struct TArray<struct FText> *eabeada057; // 0x138(0x10)
	struct TArray<struct FText> *5a808d73c5; // 0x148(0x10)
	struct TArray<struct F*208c66b300> *9fcd988d9b; // 0x158(0x10)
	struct TArray<struct F*208c66b300> *c3c05b2f33; // 0x168(0x10)
	struct F*208c66b300 *96c91a5f77; // 0x178(0x38)
	struct F*208c66b300 *78643ee21f; // 0x1b0(0x38)
	struct TArray<struct F*1291374e8a> *dce5ef0356; // 0x1e8(0x10)
	struct FName *2f52561ab3; // 0x1f8(0x08)
};

// ScriptStruct TslGame.*1291374e8a
// Size: 0x48 (Inherited: 0x00)
struct F*1291374e8a {
	struct F*1314e0976a *4335966a0a; // 0x00(0x20)
	struct F*1314e0976a *471ca5de55; // 0x20(0x20)
	float *175d384d61; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*1314e0976a
// Size: 0x20 (Inherited: 0x00)
struct F*1314e0976a {
	struct FString *da02438c47; // 0x00(0x10)
	struct FString *e21278c702; // 0x10(0x10)
};

// ScriptStruct TslGame.*208c66b300
// Size: 0x38 (Inherited: 0x00)
struct F*208c66b300 {
	struct FText *31c9ab1816; // 0x00(0x18)
	struct FText *4825d93e80; // 0x18(0x18)
	bool *9b7e73c080; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*d3970bb231
// Size: 0x88 (Inherited: 0x00)
struct F*d3970bb231 {
	struct FText *fc5f4c16ab; // 0x00(0x18)
	struct UPlatformMediaSource* *ff47d0e8f4; // 0x18(0x08)
	struct UAkAudioEvent* *031360cb2c; // 0x20(0x08)
	struct FText *702460274a; // 0x28(0x18)
	struct FText *c94447e16d; // 0x40(0x18)
	struct FText *eb2d58d789; // 0x58(0x18)
	struct FText *0173772830; // 0x70(0x18)
};

// ScriptStruct TslGame.*47471b647b
// Size: 0xa8 (Inherited: 0x00)
struct F*47471b647b {
	bool bUseBurstRecoilMap; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D BurstRecoilInMap; // 0x04(0x08)
	struct FVector2D BurstRecoilOutMap; // 0x0c(0x08)
	float RecoilKickADS; // 0x14(0x04)
	float RecoilKick_MovementSpeedMax; // 0x18(0x04)
	float RecoilKick_MovementMaxMultiplier; // 0x1c(0x04)
	struct FVector RecoilADSSocketOffsetScale; // 0x20(0x0c)
	float DeviationRecoilGain; // 0x2c(0x04)
	float DeviationRecoilGainAim; // 0x30(0x04)
	float DeviationRecoilGainADS; // 0x34(0x04)
	float VerticalRecoilMin; // 0x38(0x04)
	float VerticalRecoilMax; // 0x3c(0x04)
	float VerticalRecoilRecoveryMin; // 0x40(0x04)
	float VerticalRecoilVariation; // 0x44(0x04)
	float VerticalRecoveryModifier; // 0x48(0x04)
	float VerticalRecoveryClamp; // 0x4c(0x04)
	float VerticalRecoveryMax; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct U*226eb62c2c* RecoilCurve; // 0x58(0x08)
	float RecoilSpeed_Vertical; // 0x60(0x04)
	float RecoilSpeed_Horizontal; // 0x64(0x04)
	float RecoverySpeed_Vertical; // 0x68(0x04)
	float RecoilValue_Climb; // 0x6c(0x04)
	float RecoilValue_Fall; // 0x70(0x04)
	float RecoilModifier_Stand; // 0x74(0x04)
	float RecoilModifier_Crouch; // 0x78(0x04)
	float RecoilModifier_Prone; // 0x7c(0x04)
	float RecoilHorizontalMinScalar; // 0x80(0x04)
	struct FVector2D RecoilStartTimeInMap; // 0x84(0x08)
	struct FVector2D RecoilStartTimeOutMap; // 0x8c(0x08)
	struct FVector2D RecoilBlendInInMap; // 0x94(0x08)
	struct FVector2D RecoilBlendInOutMap; // 0x9c(0x08)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.WeaponAnimConfig
// Size: 0x1c0 (Inherited: 0x00)
struct FWeaponAnimConfig {
	char *c0b95d57bc : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UBlendSpace1D* *191cb5bc4d; // 0x08(0x08)
	struct UBlendSpaceBase* *58be04e79c; // 0x10(0x08)
	struct UAnimMontage* *d5bb96708e; // 0x18(0x08)
	struct UAnimMontage* *6136cdd90d; // 0x20(0x08)
	struct UAnimMontage* *e3b39b2592; // 0x28(0x08)
	struct UAnimMontage* *4242ef9996; // 0x30(0x08)
	struct UAnimMontage* *74388df9e5; // 0x38(0x08)
	struct UAnimMontage* *9ffad271f2; // 0x40(0x08)
	struct UAnimMontage* *8412a3fc85; // 0x48(0x08)
	struct UAnimMontage* *aa5fdef2fa; // 0x50(0x08)
	struct UAnimMontage* *9fd97589c2; // 0x58(0x08)
	struct UAnimMontage* *2bfd27868c; // 0x60(0x08)
	struct UAnimMontage* *abbd51a057; // 0x68(0x08)
	enum class EWeaponClass *26e7860753; // 0x70(0x01)
	bool *774eaf0dd9; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float *e1f57f6af5; // 0x74(0x04)
	float *1f9a33d8c9; // 0x78(0x04)
	float *d547ce8e98; // 0x7c(0x04)
	float *989b0129a2; // 0x80(0x04)
	float *9ab269153e; // 0x84(0x04)
	bool *68cd3fb393; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *99ec3b53d4; // 0x8c(0x04)
	float *f6ac2149c2; // 0x90(0x04)
	float *7b704a73c8; // 0x94(0x04)
	bool *1500f9c702; // 0x98(0x01)
	bool *b9b4607bba; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32 *4c771c3561; // 0x9c(0x04)
	struct UClass* *85fb3b3a67; // 0xa0(0x08)
	struct UClass* *98d896222c; // 0xa8(0x08)
	struct UClass* *c9cfcbd386; // 0xb0(0x08)
	struct UClass* *4e3fd569da; // 0xb8(0x08)
	struct UCameraAnim* *4b3720470b; // 0xc0(0x08)
	float RecoilKickADS; // 0xc8(0x04)
	float RecoilKick_MovementSpeedMax; // 0xcc(0x04)
	float RecoilKick_MovementMaxMultiplier; // 0xd0(0x04)
	struct FVector RecoilADSSocketOffsetScale; // 0xd4(0x0c)
	struct FVector *5cff1920ea; // 0xe0(0x0c)
	struct FVector *e744533898; // 0xec(0x0c)
	float *607f6cb43b; // 0xf8(0x04)
	float *1bafe72986; // 0xfc(0x04)
	bool bUseBurstRecoilMap; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FVector2D BurstRecoilInMap; // 0x104(0x08)
	struct FVector2D BurstRecoilOutMap; // 0x10c(0x08)
	float *84f8010dae; // 0x114(0x04)
	struct TMap<enum class EAnimStance, float> *5f7ba5d254; // 0x118(0x50)
	struct TMap<enum class EAnimStance, float> *70799a8fe5; // 0x168(0x50)
	float *9890c4f469; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// ScriptStruct TslGame.WeaponDeviationConfig
// Size: 0x6c (Inherited: 0x00)
struct FWeaponDeviationConfig {
	float *5a992d01a2; // 0x00(0x04)
	float *10c7124fe3; // 0x04(0x04)
	float MOA; // 0x08(0x04)
	float DeviationRecoilGain; // 0x0c(0x04)
	float DeviationRecoilGainAim; // 0x10(0x04)
	float DeviationRecoilGainADS; // 0x14(0x04)
	float *0d66b04983; // 0x18(0x04)
	float *108ba862f3; // 0x1c(0x04)
	float *1c4b66ea62; // 0x20(0x04)
	float *e48b110144; // 0x24(0x04)
	float *6209095b99; // 0x28(0x04)
	float *e23634248f; // 0x2c(0x04)
	float *e678cd81d2; // 0x30(0x04)
	float *c37f3130c9; // 0x34(0x04)
	float *8d6cbe0317; // 0x38(0x04)
	float *28a6d78c03; // 0x3c(0x04)
	float *fd8acdb2a3; // 0x40(0x04)
	float *35c3f198d9; // 0x44(0x04)
	float *4c82fa68f3; // 0x48(0x04)
	float *2d24983c82; // 0x4c(0x04)
	float *421b34b9b6; // 0x50(0x04)
	float *2b4364ab63; // 0x54(0x04)
	float *b303baf6c5; // 0x58(0x04)
	float *5aff76f2fc; // 0x5c(0x04)
	float *cbfbd2b0a7; // 0x60(0x04)
	float *89e3a0991f; // 0x64(0x04)
	float *6a533506a3; // 0x68(0x04)
};

// ScriptStruct TslGame.*b492452b00
// Size: 0x2c0 (Inherited: 0x00)
struct F*b492452b00 {
	struct FName *f934cc21bd; // 0x00(0x08)
	struct UParticleSystem* *c66a618b1f; // 0x08(0x08)
	int32 *3db4290e71; // 0x10(0x04)
	int32 *b7feea67ec; // 0x14(0x04)
	bool bUseGameplayTracers; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UClass* GameplayTracerClassOverride; // 0x20(0x08)
	int32 GameplayTracerAmmoModOverride; // 0x28(0x04)
	int32 GameplayTracerAmmoMinOverride; // 0x2c(0x04)
	int32 *59a2e39591; // 0x30(0x04)
	float TimeBetweenShots; // 0x34(0x04)
	struct TArray<struct F*18f98e494a> AttachmentTagData; // 0x38(0x10)
	int32 RPM; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TMap<enum class EFiringMode, float> TimeBetweenShotsOverride; // 0x50(0x50)
	bool bUseTimeBetweenBursts; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float TimeBetweenBursts; // 0xa4(0x04)
	float NoAnimReloadDuration; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<enum class EFiringMode> *e8d3640e94; // 0xb0(0x10)
	int32 *313d4b1800; // 0xc0(0x04)
	float *4279641f55; // 0xc4(0x04)
	int32 BulletPerFiring; // 0xc8(0x04)
	float *6a63089e70; // 0xcc(0x04)
	bool *40e41adbf8; // 0xd0(0x01)
	bool *b4bfde99bb; // 0xd1(0x01)
	enum class EWeaponReloadMethod *d0b7d53442; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float *484cc821f0; // 0xd4(0x04)
	float *6a590923db; // 0xd8(0x04)
	float *9c7ca47753; // 0xdc(0x04)
	float *8526852e9f; // 0xe0(0x04)
	float *99dd2bd70c; // 0xe4(0x04)
	float *cdc62ae881; // 0xe8(0x04)
	float *4d72311ed4; // 0xec(0x04)
	bool *ab5f0f22db; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector *0cdb4d71f4; // 0xf4(0x0c)
	struct FVector *a401c42fab; // 0x100(0x0c)
	bool *91d721452f; // 0x10c(0x01)
	bool *5b57ebc94c; // 0x10d(0x01)
	bool *972c17e245; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	float *2b77194787; // 0x110(0x04)
	bool *d07a9e474c; // 0x114(0x01)
	bool *5f8822e5f1; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
	struct TMap<int32, struct FVector2D> *fcf16fdd05; // 0x118(0x50)
	float *20e7d5c997; // 0x168(0x04)
	float *10bdace967; // 0x16c(0x04)
	bool *07c0529794; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float *64b805124b; // 0x174(0x04)
	float *f92a0cbf8b; // 0x178(0x04)
	float *2e3b5f48aa; // 0x17c(0x04)
	float *2dfe18313d; // 0x180(0x04)
	float *7913ced21d; // 0x184(0x04)
	float *b4d8cfaf10; // 0x188(0x04)
	float *abf916e4f1; // 0x18c(0x04)
	float *4fa40643e5; // 0x190(0x04)
	bool *6804dde443; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float *35bb8076ce; // 0x198(0x04)
	bool *1cf676f3f8; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	int32 *d2b1a08c48; // 0x1a0(0x04)
	float *4c161b2bf1; // 0x1a4(0x04)
	struct UCurveFloat* *3d532886ce; // 0x1a8(0x08)
	struct UClass* *f23bfe8a1c; // 0x1b0(0x08)
	bool *4b5ba72252; // 0x1b8(0x01)
	bool *4b9a91d427; // 0x1b9(0x01)
	bool *93c87e8ec4; // 0x1ba(0x01)
	char pad_1BB[0x1]; // 0x1bb(0x01)
	int32 *af71917b2f; // 0x1bc(0x04)
	bool *c106fe3406; // 0x1c0(0x01)
	bool *ee50b5fea3; // 0x1c1(0x01)
	char pad_1C2[0x6]; // 0x1c2(0x06)
	struct TMap<int32, float> *d5d656f0ec; // 0x1c8(0x50)
	struct UClass* *4988c6c4ca; // 0x218(0x08)
	struct TMap<enum class EFiringMode, struct UAkAudioEvent*> *2fb5ba6b58; // 0x220(0x50)
	struct TMap<enum class EScopeType, float> *911ac94422; // 0x270(0x50)
};

// ScriptStruct TslGame.*91019b1685
// Size: 0x1c (Inherited: 0x00)
struct F*91019b1685 {
	float *483b322b9c; // 0x00(0x04)
	float *160585ef2d; // 0x04(0x04)
	float *755e50a729; // 0x08(0x04)
	float *27fbfab7c4; // 0x0c(0x04)
	int32 *f3230ae2a2; // 0x10(0x04)
	int32 *2a0962908a; // 0x14(0x04)
	int32 *becc13d67f; // 0x18(0x04)
};

// ScriptStruct TslGame.*76f2a168f8
// Size: 0x20 (Inherited: 0x00)
struct F*76f2a168f8 {
	struct TArray<struct F*a803057a50> *d6e17c7a80; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*a803057a50
// Size: 0x10 (Inherited: 0x00)
struct F*a803057a50 {
	struct FName SkinId; // 0x00(0x08)
	int32 *20aee49d2b; // 0x08(0x04)
	int32 *aeb6e7e3c6; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f3db015888
// Size: 0x60 (Inherited: 0x08)
struct F*f3db015888 : FTableRowBase {
	float *07c775dabf; // 0x08(0x04)
	float *6d743ed295; // 0x0c(0x04)
	float *b68902b0d6; // 0x10(0x04)
	float *da16af115c; // 0x14(0x04)
	float *223241bdee; // 0x18(0x04)
	int32 *8d5c3bb819; // 0x1c(0x04)
	float *c00c035346; // 0x20(0x04)
	float *23a907b20a; // 0x24(0x04)
	float *663aec5bdf; // 0x28(0x04)
	float *81a969f996; // 0x2c(0x04)
	float *3c33950e9c; // 0x30(0x04)
	float *03cf424387; // 0x34(0x04)
	float *a4e747f265; // 0x38(0x04)
	float *158b0920f1; // 0x3c(0x04)
	float *2b5d513bfe; // 0x40(0x04)
	float *baf6bb36d9; // 0x44(0x04)
	float *bb01ed93d8; // 0x48(0x04)
	float *bc577364d8; // 0x4c(0x04)
	float *3478dad683; // 0x50(0x04)
	float *9ac1c493b5; // 0x54(0x04)
	float *f398887d01; // 0x58(0x04)
	float *9737c9eb7f; // 0x5c(0x04)
};

// ScriptStruct TslGame.*7a8a9e959f
// Size: 0x1c (Inherited: 0x00)
struct F*7a8a9e959f {
	float *07c775dabf; // 0x00(0x04)
	float *56658dd3f3; // 0x04(0x04)
	float *40a2ad6ce2; // 0x08(0x04)
	float *da84e61194; // 0x0c(0x04)
	float *26cad1d5fe; // 0x10(0x04)
	float *ccdd1ef28d; // 0x14(0x04)
	float *7b54a19e55; // 0x18(0x04)
};

// ScriptStruct TslGame.*371363b216
// Size: 0x70 (Inherited: 0x00)
struct F*371363b216 {
	struct TArray<struct FName> Bodies; // 0x00(0x10)
	struct TArray<struct FName> Legs; // 0x10(0x10)
	struct TArray<struct FName> *357072cd3e; // 0x20(0x10)
	struct TArray<struct FName> *51aad3230b; // 0x30(0x10)
	struct TArray<struct FName> Hands; // 0x40(0x10)
	struct TArray<struct FName> *44adfe4d34; // 0x50(0x10)
	struct TArray<struct FName> *ac08412de0; // 0x60(0x10)
};

// ScriptStruct TslGame.*ee65d3d4d5
// Size: 0x60 (Inherited: 0x00)
struct F*ee65d3d4d5 {
	char pad_0[0x30]; // 0x00(0x30)
	struct F*317c432586 *7791b4aaf3; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct TslGame.*317c432586
// Size: 0x18 (Inherited: 0x00)
struct F*317c432586 {
	int32 PresetIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *4959169f18; // 0x08(0x10)
};

// ScriptStruct TslGame.*678b3100f1
// Size: 0x10 (Inherited: 0x00)
struct F*678b3100f1 {
	struct TArray<int32> *b9ae349561; // 0x00(0x10)
};

// ScriptStruct TslGame.*6c9a881d08
// Size: 0x10 (Inherited: 0x00)
struct F*6c9a881d08 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*f98a7ec0d1
// Size: 0x18 (Inherited: 0x00)
struct F*f98a7ec0d1 {
	struct ATslPlayerState* *fb3c8f56ef; // 0x00(0x08)
	bool bEnabled; // 0x08(0x01)
	bool *cfd942605c; // 0x09(0x01)
	enum class ETslRedeployPlayerState State; // 0x0a(0x01)
	int8 *c8fee2fcf4; // 0x0b(0x01)
	bool *0c4b0b7144; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *0701524fab; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*ba06f87587
// Size: 0x24 (Inherited: 0x00)
struct F*ba06f87587 {
	bool bEnabled; // 0x00(0x01)
	bool *cfd942605c; // 0x01(0x01)
	bool *7f9c0521da; // 0x02(0x01)
	bool *93f8fc38d8; // 0x03(0x01)
	bool *55f865ee78; // 0x04(0x01)
	bool *1864713507; // 0x05(0x01)
	bool *97856b69a5; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float *0825389018; // 0x08(0x04)
	float *f39b084b3b; // 0x0c(0x04)
	float *8c6da1599a; // 0x10(0x04)
	float *a965169083; // 0x14(0x04)
	float *5148603402; // 0x18(0x04)
	float RedeploySec; // 0x1c(0x04)
	float *b547a727e4; // 0x20(0x04)
};

// ScriptStruct TslGame.BaseUserPlayData
// Size: 0x08 (Inherited: 0x00)
struct FBaseUserPlayData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*8b0c49ca12
// Size: 0x06 (Inherited: 0x00)
struct F*8b0c49ca12 {
	bool *c787d72f1a; // 0x00(0x01)
	bool *ff5d674760; // 0x01(0x01)
	enum class EAutoEquipAttachmentForScopeMode *f26be83f8f; // 0x02(0x01)
	bool *c74ba70ad6; // 0x03(0x01)
	bool *3bdafc09bc; // 0x04(0x01)
	bool *b1d90f93a7; // 0x05(0x01)
};

// ScriptStruct TslGame.*c0a4851f36
// Size: 0x20 (Inherited: 0x00)
struct F*c0a4851f36 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*f5d4101abe
// Size: 0x20 (Inherited: 0x00)
struct F*f5d4101abe {
	bool *2bbc70d68e; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime *196118d529; // 0x08(0x08)
	struct FString *19ed52e755; // 0x10(0x10)
};

// ScriptStruct TslGame.*b6b0acbeb2
// Size: 0x20 (Inherited: 0x00)
struct F*b6b0acbeb2 {
	bool bSpawnWayPoint; // 0x00(0x01)
	bool bShowWayPoint_PS; // 0x01(0x01)
	bool bCancelWayPoint; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32 MaxWayPointNum_PS; // 0x04(0x04)
	struct TArray<struct FVector2D> WayPointPosArr_PS; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*f1cc04bb6e
// Size: 0x10 (Inherited: 0x00)
struct F*f1cc04bb6e {
	struct UClass* *4d1b03f79d; // 0x00(0x08)
	int32 *1fcbfd4603; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*a95363a848
// Size: 0x10 (Inherited: 0x00)
struct F*a95363a848 {
	struct FName ItemID; // 0x00(0x08)
	enum class ECastableItemType *466d4d9ab0; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 *1fcbfd4603; // 0x0c(0x04)
};

// ScriptStruct TslGame.*2de02a740e
// Size: 0xc40 (Inherited: 0x00)
struct F*2de02a740e {
	struct F*72cef541e3 *15f6ffe4a0; // 0x00(0x78)
	struct F*72cef541e3 *71c840c672; // 0x78(0x78)
	struct F*72cef541e3 *2e6a9675c9; // 0xf0(0x78)
	struct F*72cef541e3 *38e2528c1e; // 0x168(0x78)
	struct F*72cef541e3 *024377161e; // 0x1e0(0x78)
	struct F*72cef541e3 *e46f538d3c; // 0x258(0x78)
	struct F*72cef541e3 *c8cf3f5dcd; // 0x2d0(0x78)
	struct F*72cef541e3 *c6ecaa8ecd; // 0x348(0x78)
	struct F*72cef541e3 *bc614c9ff0; // 0x3c0(0x78)
	struct F*72cef541e3 *d343b19871; // 0x438(0x78)
	struct F*72cef541e3 FleshDecal; // 0x4b0(0x78)
	struct F*72cef541e3 *895360ffb6; // 0x528(0x78)
	struct F*72cef541e3 *9aec9a9e6c; // 0x5a0(0x78)
	struct F*72cef541e3 *da35d86140; // 0x618(0x78)
	struct F*72cef541e3 *340823396c; // 0x690(0x78)
	struct F*72cef541e3 *61ba5bdecd; // 0x708(0x78)
	struct F*72cef541e3 *1ca11766c2; // 0x780(0x78)
	struct F*72cef541e3 *8d00c83a64; // 0x7f8(0x78)
	struct F*72cef541e3 *e18385b015; // 0x870(0x78)
	struct F*72cef541e3 *1bfe50f474; // 0x8e8(0x78)
	struct F*72cef541e3 *e676170fb4; // 0x960(0x78)
	struct F*72cef541e3 *2c90bcd3ee; // 0x9d8(0x78)
	bool *6c268c10ce; // 0xa50(0x01)
	char pad_A51[0x7]; // 0xa51(0x07)
	struct F*72cef541e3 SprayDecal; // 0xa58(0x78)
	struct F*72cef541e3 *ff4d57e998; // 0xad0(0x78)
	struct F*72cef541e3 *6f7b61b0bb; // 0xb48(0x78)
	struct F*72cef541e3 *25ca2c00ae; // 0xbc0(0x78)
	bool *510bee5fe6; // 0xc38(0x01)
	char pad_C39[0x7]; // 0xc39(0x07)
};

// ScriptStruct TslGame.*72cef541e3
// Size: 0x78 (Inherited: 0x00)
struct F*72cef541e3 {
	struct UMaterial* Material; // 0x00(0x08)
	struct UMaterial* RicochetMaterial; // 0x08(0x08)
	struct FFloatRange Size; // 0x10(0x10)
	struct FFloatRange NormalFadeAngle; // 0x20(0x10)
	float FadeScreenSize; // 0x30(0x04)
	float FadeStartDelay; // 0x34(0x04)
	float FadeDuration; // 0x38(0x04)
	char bUseRandomInput : 1; // 0x3c(0x01)
	char bUseRandomRoll : 1; // 0x3c(0x01)
	char bReversal : 1; // 0x3c(0x01)
	char bUseRicochet : 1; // 0x3c(0x01)
	char pad_3C_4 : 4; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct F*23e36f4259 DecalChannels; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector2D DotProductLongScaleMapIn; // 0x44(0x08)
	struct FVector2D DotProductLongScaleMapOut; // 0x4c(0x08)
	struct FVector2D DotProductLatScaleMapIn; // 0x54(0x08)
	struct FVector2D DotProductLatScaleMapOut; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture* *47fff8c133; // 0x68(0x08)
	int32 *b955aabdfa; // 0x70(0x04)
	float *0acbb551d8; // 0x74(0x04)
};

// ScriptStruct TslGame.*d735ad295a
// Size: 0x30 (Inherited: 0x00)
struct F*d735ad295a {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*242a3d819a
// Size: 0x18 (Inherited: 0x00)
struct F*242a3d819a {
	float MaxDot; // 0x00(0x04)
	struct FFloatRange RicochetChance; // 0x04(0x10)
	bool bAlwaysScaleDecal; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*90c7967d19
// Size: 0x110 (Inherited: 0x00)
struct F*90c7967d19 {
	struct UStaticMesh* *ed63af440c; // 0x00(0x08)
	struct TArray<struct UMaterialInstance*> *678742a1b7; // 0x08(0x10)
	struct UStaticMesh* *63b73078dd; // 0x18(0x08)
	struct TArray<struct UMaterialInstance*> *6bcd4c7a3e; // 0x20(0x10)
	struct UStaticMesh* *c2ef8815ea; // 0x30(0x08)
	struct TArray<struct UMaterialInstance*> *02dbfa3b90; // 0x38(0x10)
	struct UClass* *e494739b22; // 0x48(0x08)
	struct UClass* *7a56c68b8e; // 0x50(0x08)
	bool *ead356018e; // 0x58(0x01)
	bool *43dd822a67; // 0x59(0x01)
	bool *1ae5169373; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct UPhysicalMaterial* PhysMaterial; // 0x60(0x08)
	struct UTexture2D* *d5ca0358fe; // 0x68(0x08)
	struct U*9416350bc6* *b09e13851c; // 0x70(0x08)
	struct UTexture2D* *c9500b788e; // 0x78(0x08)
	struct TArray<struct U*c1e316f151*> *5b972ebeee; // 0x80(0x10)
	bool *98fec4f2be; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UMaterialInstance*> *ed13c2c1fc; // 0x98(0x10)
	struct UStaticMesh* *27f98250ca; // 0xa8(0x08)
	struct TArray<struct UMaterialInstance*> *f60883eafc; // 0xb0(0x10)
	int32 *823d91c4b6; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UClass* *35e4ac7f88; // 0xc8(0x08)
	struct TArray<enum class EDestrucibleSurfaceSourceType> *fdbbb05605; // 0xd0(0x10)
	bool *750d29665a; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32 *85e76294db; // 0xe4(0x04)
	float *e2c2326780; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UClass* *5cf1193877; // 0xf0(0x08)
	float *e22f42943d; // 0xf8(0x04)
	float BulletEntranceRadiusSize; // 0xfc(0x04)
	float BulletExitRadiusSize; // 0x100(0x04)
	bool HitsOnlyAffectFacingSurface; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UStaticMesh* FrameComplexCollisionMesh; // 0x108(0x08)
};

// ScriptStruct TslGame.*1c6eae20e7
// Size: 0x08 (Inherited: 0x00)
struct F*1c6eae20e7 {
	uint16 *3cce66656c; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32 InstanceIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*78800a047a
// Size: 0x34 (Inherited: 0x00)
struct F*78800a047a {
	uint16 *3cce66656c; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct F*6209bee31b Hit; // 0x04(0x30)
};

// ScriptStruct TslGame.*6209bee31b
// Size: 0x30 (Inherited: 0x00)
struct F*6209bee31b {
	struct FVector_NetQuantize HitLocation; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal *48b69cfae0; // 0x0c(0x0c)
	int32 InstanceIndex; // 0x18(0x04)
	enum class EDestrucibleSurfaceSourceType *f23bfe8a1c; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Radius; // 0x20(0x04)
	struct FVector_NetQuantize *b3aa7d6ce2; // 0x24(0x0c)
};

// ScriptStruct TslGame.ParticleParameter
// Size: 0x18 (Inherited: 0x00)
struct FParticleParameter {
	struct FName Name; // 0x00(0x08)
	struct FVector Value; // 0x08(0x0c)
	bool bEnableRTPC; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*7a16275323
// Size: 0x60 (Inherited: 0x00)
struct F*7a16275323 {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UClass* ParticleEnvironment; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct TslGame.*23ebcdd912
// Size: 0x60 (Inherited: 0x00)
struct F*23ebcdd912 {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UParticleSystem* ParticleSystem; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	bool UseWorldTransform; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)
};

// ScriptStruct TslGame.*b4510ecb38
// Size: 0xe0 (Inherited: 0x00)
struct F*b4510ecb38 {
	struct FGuid ID; // 0x00(0x10)
	struct TArray<struct UActorComponent*> StaticComponents; // 0x10(0x10)
	struct TMap<struct UStaticMeshComponent*, struct F*1d0fa5832f> InstancedComponents; // 0x20(0x50)
	struct TArray<struct UDoorInteractionComponent*> DoorComponents; // 0x70(0x10)
	struct TArray<struct APostProcessVolume*> PostProcessVolumes; // 0x80(0x10)
	struct TMap<struct UAkSoundVolumesContainerComponent*, struct F*800ddb34fd> LinkedSoundVolumesMap; // 0x90(0x50)
};

// ScriptStruct TslGame.*800ddb34fd
// Size: 0x10 (Inherited: 0x00)
struct F*800ddb34fd {
	struct TArray<int32> *12395713b6; // 0x00(0x10)
};

// ScriptStruct TslGame.*1d0fa5832f
// Size: 0x10 (Inherited: 0x00)
struct F*1d0fa5832f {
	struct TArray<int32> Indices; // 0x00(0x10)
};

// ScriptStruct TslGame.*10d92a2859
// Size: 0x10 (Inherited: 0x00)
struct F*10d92a2859 {
	struct TArray<struct F*35d556c46d> Beacons; // 0x00(0x10)
};

// ScriptStruct TslGame.*35d556c46d
// Size: 0xd0 (Inherited: 0x00)
struct F*35d556c46d {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FTransform BeaconTransform; // 0x10(0x30)
	struct FVector BuildingLocalOriginOffset; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct F*23ebcdd912> ParticleEffects; // 0x50(0x10)
	struct TArray<struct F*7a16275323> ParticleEnvironments; // 0x60(0x10)
	float NearbyHitParticleDistance; // 0x70(0x04)
	float DamageRadius; // 0x74(0x04)
	struct FVector VolumetricScale; // 0x78(0x0c)
	struct FGuid DestructibleId; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
	struct USkeletalMesh* DestructionMesh; // 0x98(0x08)
	struct UAnimationAsset* DestructionAnimation; // 0xa0(0x08)
	float DestroyAnimationDelayTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*23d51668a8> BeaconKillBoxes; // 0xb0(0x10)
	bool WasHit; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// ScriptStruct TslGame.*23d51668a8
// Size: 0x50 (Inherited: 0x00)
struct F*23d51668a8 {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct FTransform KillZoneTransfrom; // 0x10(0x30)
	struct FVector KillZoneExtent; // 0x40(0x0c)
	bool KillPlayers; // 0x4c(0x01)
	bool DeleteItems; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct TslGame.*28be292fbf
// Size: 0x24 (Inherited: 0x00)
struct F*28be292fbf {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FVector BlackZoneOrigin; // 0x10(0x0c)
	float BlackZoneRadius; // 0x1c(0x04)
	bool BeaconsPresent; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*92c7ca7d87
// Size: 0x18 (Inherited: 0x00)
struct F*92c7ca7d87 {
	bool *0816dc22a5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid ID; // 0x04(0x10)
	float *172678d643; // 0x14(0x04)
};

// ScriptStruct TslGame.*438c56851e
// Size: 0x08 (Inherited: 0x00)
struct F*438c56851e {
	int32 Mode; // 0x00(0x04)
	int32 Type; // 0x04(0x04)
};

// ScriptStruct TslGame.*957b5b9610
// Size: 0x88 (Inherited: 0x00)
struct F*957b5b9610 {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct TslGame.*875cfbfbe5
// Size: 0x38 (Inherited: 0x30)
struct F*875cfbfbe5 : F*cbf894bb90 {
	float *660c619f29; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*cbf894bb90
// Size: 0x30 (Inherited: 0x00)
struct F*cbf894bb90 {
	struct FVector *48baf63528; // 0x00(0x0c)
	struct FVector Dir; // 0x0c(0x0c)
	struct FAttackId AttackId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UClass* *6e2795bba1; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct TslGame.*f5b4e18795
// Size: 0x08 (Inherited: 0x00)
struct F*f5b4e18795 {
	float *15e94e254e; // 0x00(0x04)
	uint16 *c7d394fc5c; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGame.*3131f954c6
// Size: 0x30 (Inherited: 0x00)
struct F*3131f954c6 {
	float *15e94e254e; // 0x00(0x04)
	uint16 *450ac6e7bd; // 0x04(0x02)
	uint16 *5929446fef; // 0x06(0x02)
	uint16 *ea9776b109; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct F*69409e2f85> *c3c142073c; // 0x10(0x10)
	struct TArray<struct F*8ecfc69914> *449afd3429; // 0x20(0x10)
};

// ScriptStruct TslGame.*8ecfc69914
// Size: 0x10 (Inherited: 0x00)
struct F*8ecfc69914 {
	uint16 *b8766845c6; // 0x00(0x02)
	uint16 *ef871f156d; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Content; // 0x08(0x08)
};

// ScriptStruct TslGame.*69409e2f85
// Size: 0x06 (Inherited: 0x00)
struct F*69409e2f85 {
	uint16 *ef871f156d; // 0x00(0x02)
	uint16 *0aed81e185; // 0x02(0x02)
	uint16 *aea9918d7c; // 0x04(0x02)
};

// ScriptStruct TslGame.*853e26b00f
// Size: 0x30 (Inherited: 0x00)
struct F*853e26b00f {
	struct ATslCharacter* *cdb74f6dc7; // 0x00(0x08)
	struct FVector *85ea09ba79; // 0x08(0x0c)
	struct FVector *bb518573b6; // 0x14(0x0c)
	float *0425fa541e; // 0x20(0x04)
	float *818019a859; // 0x24(0x04)
	float *36d460fe03; // 0x28(0x04)
	float *2a66327330; // 0x2c(0x04)
};

// ScriptStruct TslGame.*b5c43aa890
// Size: 0x20 (Inherited: 0x08)
struct F*b5c43aa890 : FTableRowBase {
	struct FName SpawnKitName; // 0x08(0x08)
	struct TArray<struct F*eefad94ddc> SpawnKitInfos; // 0x10(0x10)
};

// ScriptStruct TslGame.*eefad94ddc
// Size: 0x100 (Inherited: 0x08)
struct F*eefad94ddc : FTableRowBase {
	enum class EWeaponClass WeaponCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString SpawnKitId; // 0x10(0x10)
	struct FText InfoName; // 0x20(0x18)
	struct TArray<struct F*68390b0b00> ItemInfos; // 0x38(0x10)
	struct F*ae636dfef7 VehicleInfo; // 0x48(0xb8)
};

// ScriptStruct TslGame.*ae636dfef7
// Size: 0xb8 (Inherited: 0x00)
struct F*ae636dfef7 {
	struct FStringAssetReference SpawnVehicleName; // 0x00(0x10)
	bool bUseOverrideData; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MaxEventBoostGauge; // 0x14(0x04)
	float StartEventBoostGauge; // 0x18(0x04)
	float MaxHealthOverride; // 0x1c(0x04)
	float DefaultDragCoefficient; // 0x20(0x04)
	float EventBoostDragCoefficient; // 0x24(0x04)
	float DefaultMaxRPM; // 0x28(0x04)
	float EventBoostMaxRPM; // 0x2c(0x04)
	float DefaultGearSwitchTime; // 0x30(0x04)
	float EventBoostGearSwitchTime; // 0x34(0x04)
	bool bOverrideTorqueCurve; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FRuntimeFloatCurve TorqueCurve; // 0x40(0x78)
};

// ScriptStruct TslGame.*68390b0b00
// Size: 0x28 (Inherited: 0x00)
struct F*68390b0b00 {
	int32 ItemCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	struct TArray<struct FName> AttachmentIDs; // 0x10(0x10)
	struct FName SkinItemId; // 0x20(0x08)
};

// ScriptStruct TslGame.*4db9b7c633
// Size: 0x20 (Inherited: 0x00)
struct F*4db9b7c633 {
	struct FString *2455c7a060; // 0x00(0x10)
	struct TArray<struct F*93e2b0c0d4> *432c297522; // 0x10(0x10)
};

// ScriptStruct TslGame.*93e2b0c0d4
// Size: 0x18 (Inherited: 0x00)
struct F*93e2b0c0d4 {
	struct FName *bff97ceb82; // 0x00(0x08)
	struct TArray<struct FName> *ed574ed072; // 0x08(0x10)
};

// ScriptStruct TslGame.*e6d45e4778
// Size: 0x50 (Inherited: 0x00)
struct F*e6d45e4778 {
	struct TMap<struct FString, struct F*d6d1d4a0fe> *23b35ddeba; // 0x00(0x50)
};

// ScriptStruct TslGame.*d6d1d4a0fe
// Size: 0x180 (Inherited: 0xc8)
struct F*d6d1d4a0fe : F*971f7222f0 {
	struct FString *2455c7a060; // 0xc8(0x10)
	float *3ee6d5994f; // 0xd8(0x04)
	float *7505c7bded; // 0xdc(0x04)
	struct TMap<enum class EEquipSlotID, int32> *74bfa55675; // 0xe0(0x50)
	struct TMap<enum class EEquipSlotID, int32> *4b470e6639; // 0x130(0x50)
};

// ScriptStruct TslGame.*971f7222f0
// Size: 0xc8 (Inherited: 0x00)
struct F*971f7222f0 {
	struct TArray<struct UItem*> Items; // 0x00(0x10)
	struct F*ae636dfef7 VehicleInfo; // 0x10(0xb8)
};

// ScriptStruct TslGame.*9eaa3109ee
// Size: 0x290 (Inherited: 0x268)
struct F*9eaa3109ee : F*eee16334b9 {
	struct UTexture* AmmoIcon; // 0x268(0x20)
	float AmmoIconRatio; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
};

// ScriptStruct TslGame.*d297bbc2d5
// Size: 0x20 (Inherited: 0x00)
struct F*d297bbc2d5 {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	bool *97d6065101; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *7bef69b54c; // 0x10(0x08)
	struct FName *c8e0821223; // 0x18(0x08)
};

// ScriptStruct TslGame.*cb2f29910e
// Size: 0x05 (Inherited: 0x00)
struct F*cb2f29910e {
	bool *e2f0b889cb; // 0x00(0x01)
	int8 *1a86462020; // 0x01(0x01)
	int8 *694976c75b; // 0x02(0x01)
	enum class EWeaponTransitionState State; // 0x03(0x01)
	enum class EWeaponTransitionState *bb70b6dfbe; // 0x04(0x01)
};

// ScriptStruct TslGame.*9cf081899d
// Size: 0x70 (Inherited: 0x60)
struct F*9cf081899d : F*2cdf36ff50 {
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct TslGame.*2cdf36ff50
// Size: 0x60 (Inherited: 0x00)
struct F*2cdf36ff50 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*5ae6b8cc0c
// Size: 0x40 (Inherited: 0x00)
struct F*5ae6b8cc0c {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*222869880b
// Size: 0x08 (Inherited: 0x00)
struct F*222869880b {
	int32 *710f88d7a8; // 0x00(0x04)
	enum class ECoinTakeType *73d85731cd; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*583bb83cae
// Size: 0x20 (Inherited: 0x00)
struct F*583bb83cae {
	enum class EBombGameAreaType *eb1a735d05; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *ee3b64050b; // 0x08(0x18)
};

// ScriptStruct TslGame.*4662db89d0
// Size: 0x08 (Inherited: 0x00)
struct F*4662db89d0 {
	enum class ECoinTakeType *73d85731cd; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 OverrideIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*02b1a46e84
// Size: 0x10 (Inherited: 0x00)
struct F*02b1a46e84 {
	bool *8505bf6cf5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
};

// ScriptStruct TslGame.*1698387072
// Size: 0x18 (Inherited: 0x00)
struct F*1698387072 {
	int32 TeamId; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	int32 *e57603eb6c; // 0x08(0x04)
	int32 *4447d6297c; // 0x0c(0x04)
	int32 *7cca859660; // 0x10(0x04)
	int32 *fe02550cfa; // 0x14(0x04)
};

// ScriptStruct TslGame.*17d1315786
// Size: 0x14 (Inherited: 0x00)
struct F*17d1315786 {
	int32 *abd96ae1b9; // 0x00(0x04)
	enum class ETslBombTeamRole *b167392a80; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct F*a2f742a633 *865d6ce89b; // 0x08(0x08)
	bool *98818070a9; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*a2f742a633
// Size: 0x08 (Inherited: 0x00)
struct F*a2f742a633 {
	enum class ETslBombRoundResultHistoryType *8e6f926494; // 0x00(0x01)
	enum class EBombRoundResultConditionType *1c1b6f5572; // 0x01(0x01)
	enum class EBombUITeamStatusType *f30c0c0e68; // 0x02(0x01)
	bool *6f0879e86a; // 0x03(0x01)
	int32 *3df6c78001; // 0x04(0x04)
};

// ScriptStruct TslGame.*fccb689539
// Size: 0x18 (Inherited: 0x00)
struct F*fccb689539 {
	struct FString BattleAreaType; // 0x00(0x10)
	enum class ETslBombTeamRole TeamRole; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 TeamMemberIndex; // 0x14(0x04)
};

// ScriptStruct TslGame.*b6aae20671
// Size: 0x18 (Inherited: 0x00)
struct F*b6aae20671 {
	int32 *c0a3697505; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATslPlayerState*> *81faf0edab; // 0x08(0x10)
};

// ScriptStruct TslGame.TslAnimNode_MirrorAnimation
// Size: 0xa8 (Inherited: 0x30)
struct FTslAnimNode_MirrorAnimation : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct U*143664517b* BoneMirrorSettings; // 0x48(0x08)
	struct U*143664517b* PrevBoneMirrorSettings; // 0x50(0x08)
	struct FBoneReference ItemBone; // 0x58(0x18)
	struct FBoneReference ItemBoneNewParent; // 0x70(0x18)
	char pad_88[0x20]; // 0x88(0x20)
};

// ScriptStruct TslGame.*d64a33e0a7
// Size: 0x20 (Inherited: 0x00)
struct F*d64a33e0a7 {
	struct FName BoneName; // 0x00(0x08)
	struct FName *20c3ad780e; // 0x08(0x08)
	struct FRotator *b1eb6e4327; // 0x10(0x0c)
	enum class EAxis *8d935b7b91; // 0x1c(0x01)
	enum class EAxis *ba246022d2; // 0x1d(0x01)
	bool *00efd8d162; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct TslGame.*e125058446
// Size: 0x10 (Inherited: 0x00)
struct F*e125058446 {
	struct TArray<struct F*6f9300e634> Ranges; // 0x00(0x10)
};

// ScriptStruct TslGame.*6f9300e634
// Size: 0x08 (Inherited: 0x00)
struct F*6f9300e634 {
	enum class EWeaponClass WeaponType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Range; // 0x04(0x04)
};

// ScriptStruct TslGame.*3acf386bb1
// Size: 0x0c (Inherited: 0x00)
struct F*3acf386bb1 {
	enum class EWeaponClass WeaponType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Range; // 0x04(0x04)
	float *c7143838e4; // 0x08(0x04)
};

// ScriptStruct TslGame.*213d97919b
// Size: 0x10 (Inherited: 0x00)
struct F*213d97919b {
	int32 Rating; // 0x00(0x04)
	float *3d716a6f73; // 0x04(0x04)
	float *beb88a4ed9; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1e273349ce
// Size: 0x30 (Inherited: 0x00)
struct F*1e273349ce {
	float *3f9d84c3d3; // 0x00(0x04)
	int32 *053325e138; // 0x04(0x04)
	struct FBlackboardKeySelector *cef60dae5e; // 0x08(0x28)
};

// ScriptStruct TslGame.*93dcddb451
// Size: 0x68 (Inherited: 0x00)
struct F*93dcddb451 {
	int32 *5b1e5b06b7; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct UClass*, int32> *2b50f62358; // 0x08(0x50)
	struct TArray<struct UClass*> *e048c4e956; // 0x58(0x10)
};

// ScriptStruct TslGame.*2282f9e04d
// Size: 0x28 (Inherited: 0x00)
struct F*2282f9e04d {
	float *a9f7e0dfb0; // 0x00(0x04)
	float *73a62e47d7; // 0x04(0x04)
	struct FVector *e49d63fcbc; // 0x08(0x0c)
	struct FRotator *ff62ca04ab; // 0x14(0x0c)
	float *400821fc19; // 0x20(0x04)
	float *d993eb8650; // 0x24(0x04)
};

// ScriptStruct TslGame.*3471edcb29
// Size: 0x10 (Inherited: 0x00)
struct F*3471edcb29 {
	float *a05db6c454; // 0x00(0x04)
	float *9d9ec86314; // 0x04(0x04)
	float *487f5cee10; // 0x08(0x04)
	float *1e19e4c2a6; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ee12fb5fcf
// Size: 0x10 (Inherited: 0x00)
struct F*ee12fb5fcf {
	struct TArray<struct F*19e3498e5d> Connections; // 0x00(0x10)
};

// ScriptStruct TslGame.*c548f4e457
// Size: 0x50 (Inherited: 0x00)
struct F*c548f4e457 {
	struct TMap<struct F*3a4fc3c196, struct F*9413f02812> *b6b069f145; // 0x00(0x50)
};

// ScriptStruct TslGame.*d04f5825b5
// Size: 0x20 (Inherited: 0x00)
struct F*d04f5825b5 {
	struct U*21ca2ea6f5* *a090f85283; // 0x00(0x08)
	struct ATslAIWaypointSegment* path; // 0x08(0x08)
	int32 *cc4194e0b2; // 0x10(0x04)
	bool *464b8d6249; // 0x14(0x01)
	bool *db37050301; // 0x15(0x01)
	bool *eb0ee4f780; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float *eaf36eab8b; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*ae906a7af7
// Size: 0x08 (Inherited: 0x00)
struct F*ae906a7af7 {
	int32 Rating; // 0x00(0x04)
	float SearchRadius; // 0x04(0x04)
};

// ScriptStruct TslGame.*c528267699
// Size: 0x10 (Inherited: 0x00)
struct F*c528267699 {
	struct UClass* TargetClass; // 0x00(0x08)
	float Multiplier; // 0x08(0x04)
	float *c55c12cb53; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ecae329edd
// Size: 0x18 (Inherited: 0x00)
struct F*ecae329edd {
	enum class *a5c8520112 Action; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *46bdc0bbd4; // 0x08(0x08)
	float *9ad8684f3a; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*47a5c08799
// Size: 0x14 (Inherited: 0x00)
struct F*47a5c08799 {
	char pad_0[0x8]; // 0x00(0x08)
	float HappenTime; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float TotalDamage; // 0x10(0x04)
};

// ScriptStruct TslGame.*d94290b67f
// Size: 0x38 (Inherited: 0x00)
struct F*d94290b67f {
	struct FBox Box; // 0x00(0x1c)
	float *de083af3f1; // 0x1c(0x04)
	float *fc0c3774e3; // 0x20(0x04)
	float *d81c26cff9; // 0x24(0x04)
	float *92f05535b5; // 0x28(0x04)
	float *ca764e1380; // 0x2c(0x04)
	float *e9f38a5923; // 0x30(0x04)
	float *124e45b6dd; // 0x34(0x04)
};

// ScriptStruct TslGame.*5085807328
// Size: 0x18 (Inherited: 0x00)
struct F*5085807328 {
	bool bActive; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* *e21af0d578; // 0x08(0x08)
	float *b2cacb43c2; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*4fe28de883
// Size: 0x20 (Inherited: 0x00)
struct F*4fe28de883 {
	enum class *fffe402d5e *6d8973cf89; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *1f376842dd; // 0x04(0x04)
	float *5901494028; // 0x08(0x04)
	float *568ee9c5a6; // 0x0c(0x04)
	struct TArray<struct F*cf51a51e28> *cf51a51e28; // 0x10(0x10)
};

// ScriptStruct TslGame.*cf51a51e28
// Size: 0x0c (Inherited: 0x00)
struct F*cf51a51e28 {
	enum class EDamageTypeCategory *f23bfe8a1c; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *2fbcafafe7; // 0x04(0x04)
	float *568ee9c5a6; // 0x08(0x04)
};

// ScriptStruct TslGame.*11b76121a7
// Size: 0x0c (Inherited: 0x00)
struct F*11b76121a7 {
	enum class *fffe402d5e *6d8973cf89; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *1f376842dd; // 0x04(0x04)
	float *5901494028; // 0x08(0x04)
};

// ScriptStruct TslGame.*9dff6d7fb4
// Size: 0x0c (Inherited: 0x00)
struct F*9dff6d7fb4 {
	enum class *fffe402d5e *6d8973cf89; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *1f376842dd; // 0x04(0x04)
	float *6dae10cb61; // 0x08(0x04)
};

// ScriptStruct TslGame.*fc86aca43c
// Size: 0x50 (Inherited: 0x00)
struct F*fc86aca43c {
	struct FVector LocationOffset; // 0x00(0x0c)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	float TraceOriginUpOffset; // 0x18(0x04)
	float TraceForwardLength; // 0x1c(0x04)
	float TraceDownLength; // 0x20(0x04)
	float MaxFloorDiff; // 0x24(0x04)
	float MaxRotationDegree; // 0x28(0x04)
	float OverlapBoxDistanceOffset; // 0x2c(0x04)
	struct FVector OverlapBoxHalfExtent; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> DisablePhysMtrlNames; // 0x40(0x10)
};

// ScriptStruct TslGame.*b587aaf568
// Size: 0x3c (Inherited: 0x00)
struct F*b587aaf568 {
	struct FVector LocationOffset; // 0x00(0x0c)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	float TraceOriginUpOffset; // 0x18(0x04)
	float TraceForwardLength; // 0x1c(0x04)
	float TraceUpLength; // 0x20(0x04)
	float TraceDownLength; // 0x24(0x04)
	bool bOrientToFloor; // 0x28(0x01)
	bool bCheckOverlaps; // 0x29(0x01)
	bool bSphereSweep; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float CapsuleRadius; // 0x2c(0x04)
	float CapsuleHalfHeight; // 0x30(0x04)
	float BalloonRadius; // 0x34(0x04)
	float SweepUpDistance; // 0x38(0x04)
};

// ScriptStruct TslGame.*7eab21346f
// Size: 0x38 (Inherited: 0x00)
struct F*7eab21346f {
	struct FVector LocationOffset; // 0x00(0x0c)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	struct TArray<enum class ECollisionChannel> ResponseBlockChannels; // 0x18(0x10)
	float TraceOriginUpOffset; // 0x28(0x04)
	float TraceForwardLength; // 0x2c(0x04)
	float TraceDownLength; // 0x30(0x04)
	bool bOrientToFloor; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct TslGame.TslCinematicLightParams
// Size: 0x34 (Inherited: 0x00)
struct FTslCinematicLightParams {
	bool bCastShadows; // 0x00(0x01)
	bool bUseTemperature; // 0x01(0x01)
	bool bUseInverseSquaredFalloff; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Temperature; // 0x04(0x04)
	float SourceRadius; // 0x08(0x04)
	float SourceLength; // 0x0c(0x04)
	float InnerConeAngle; // 0x10(0x04)
	float OuterConeAngle; // 0x14(0x04)
	float Intensity; // 0x18(0x04)
	float AttenuationRadius; // 0x1c(0x04)
	float LightFalloffExponent; // 0x20(0x04)
	struct FLinearColor Color; // 0x24(0x10)
};

// ScriptStruct TslGame.Offer
// Size: 0xc8 (Inherited: 0x00)
struct FOffer {
	struct FString OfferId; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText LongDescription; // 0x40(0x18)
	struct FText RegularPriceText; // 0x58(0x18)
	int32 RegularPrice; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FText PriceText; // 0x78(0x18)
	int32 NumericPrice; // 0x90(0x04)
	uint32 PurchasedCount; // 0x94(0x04)
	int32 PurchaseLimit; // 0x98(0x04)
	uint32 DecimalPoint; // 0x9c(0x04)
	struct FString CurrencyCode; // 0xa0(0x10)
	struct FDateTime ReleaseDate; // 0xb0(0x08)
	struct FDateTime ExpirationDate; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct TslGame.Receipt
// Size: 0x38 (Inherited: 0x00)
struct FReceipt {
	struct FString TransactionId; // 0x00(0x10)
	struct FString OfferId; // 0x10(0x10)
	int32 Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString EntitlementId; // 0x28(0x10)
};

// ScriptStruct TslGame.TslUserGameOptionLogData
// Size: 0x20 (Inherited: 0x00)
struct FTslUserGameOptionLogData {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.TslFriend
// Size: 0x38 (Inherited: 0x00)
struct FTslFriend {
	struct FString UserSerial; // 0x00(0x10)
	struct FString UserRealName; // 0x10(0x10)
	struct FString UserDisplayName; // 0x20(0x10)
	struct FTslFriendPresence Presence; // 0x30(0x05)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct TslGame.TslFriendPresence
// Size: 0x05 (Inherited: 0x00)
struct FTslFriendPresence {
	bool IsOnline; // 0x00(0x01)
	bool IsPlaying; // 0x01(0x01)
	bool IsPlayingThisGame; // 0x02(0x01)
	bool IsJoinable; // 0x03(0x01)
	bool Status; // 0x04(0x01)
};

// ScriptStruct TslGame.TslClientAuthData
// Size: 0x70 (Inherited: 0x00)
struct FTslClientAuthData {
	struct FString PlatformType; // 0x00(0x10)
	struct FString AppID; // 0x10(0x10)
	struct FString FullGameVersion; // 0x20(0x10)
	struct FString UserSerial; // 0x30(0x10)
	struct FString AccessToken; // 0x40(0x10)
	struct FString UserDisplayName; // 0x50(0x10)
	struct FString PlayerNetId; // 0x60(0x10)
};

// ScriptStruct TslGame.*301565fca1
// Size: 0x20 (Inherited: 0x00)
struct F*301565fca1 {
	struct FLinearColor RankColor; // 0x00(0x10)
	struct FStringAssetReference RankTexture; // 0x10(0x10)
};

// ScriptStruct TslGame.*613f504ebe
// Size: 0x60 (Inherited: 0x00)
struct F*613f504ebe {
	struct TArray<struct FVector> *86817cd4a3; // 0x00(0x10)
	struct FBox *c5d2cdc61c; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Transform; // 0x30(0x30)
};

// ScriptStruct TslGame.*f61d20fd3c
// Size: 0x18 (Inherited: 0x00)
struct F*f61d20fd3c {
	struct FName ItemID; // 0x00(0x08)
	int32 ItemStackCount; // 0x08(0x04)
	int32 Count; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*995c9e63cd
// Size: 0x80 (Inherited: 0x08)
struct F*995c9e63cd : FTableRowBase {
	int32 CraftID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName AllowFilter; // 0x10(0x08)
	struct FName CraftItemID; // 0x18(0x08)
	float CraftTime; // 0x20(0x04)
	int32 CraftItemStackCount; // 0x24(0x04)
	struct TArray<struct F*9f0cbf5ba3> MaterialItems; // 0x28(0x10)
	bool bShouldTransferAmmoInClip; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString SlotTag; // 0x40(0x10)
	struct TArray<struct FName> AdditionalCraftItemIDs; // 0x50(0x10)
	struct TArray<struct FName> AdditionalRemoveItemIDs; // 0x60(0x10)
	int32 RestrictedStance; // 0x70(0x04)
	bool bAutoReload; // 0x74(0x01)
	bool bShouldTransferAttachments; // 0x75(0x01)
	char pad_76[0xa]; // 0x76(0x0a)
};

// ScriptStruct TslGame.*9f0cbf5ba3
// Size: 0x10 (Inherited: 0x00)
struct F*9f0cbf5ba3 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*9e3bfe6381
// Size: 0x18 (Inherited: 0x00)
struct F*9e3bfe6381 {
	int32 *47236fdebb; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *8b9913ea62; // 0x08(0x08)
	int32 *d573f762b3; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*3eaae834c4
// Size: 0x20 (Inherited: 0x00)
struct F*3eaae834c4 {
	struct FString *9532d5ca37; // 0x00(0x10)
	struct FVector2D *c47dd826b6; // 0x10(0x08)
	bool *d9c5c41eaf; // 0x18(0x01)
	enum class ECustomCarepackageState *fdd7f0f372; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32 *694cec0dce; // 0x1c(0x04)
};

// ScriptStruct TslGame.*3bff2107cd
// Size: 0x08 (Inherited: 0x00)
struct F*3bff2107cd {
	int32 AddWhiteZoneCarepackages; // 0x00(0x04)
	int32 AddOutsideZoneCarepackages; // 0x04(0x04)
};

// ScriptStruct TslGame.*f8ab6f8a6d
// Size: 0x98 (Inherited: 0x08)
struct F*f8ab6f8a6d : FTableRowBase {
	struct FText WeaponTag; // 0x08(0x18)
	struct FText SimpleWeaponName; // 0x20(0x18)
	struct U*327a00d97e* WeaponGunData; // 0x38(0x08)
	struct F*c7be4c9e35 WeaponFX; // 0x40(0x20)
	enum class EFiringMode FiringMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float MinClipFractionPerSequence; // 0x64(0x04)
	float MaxClipFractionPerSequence; // 0x68(0x04)
	float FiringCooldownMin; // 0x6c(0x04)
	float FiringCooldownMax; // 0x70(0x04)
	float MinTimeBetweenShots; // 0x74(0x04)
	float MaxTimeBetweenShots; // 0x78(0x04)
	int32 ClipSize; // 0x7c(0x04)
	int32 BurstSize; // 0x80(0x04)
	float ReloadTime; // 0x84(0x04)
	float DecoyDelay; // 0x88(0x04)
	float CookDelay; // 0x8c(0x04)
	float DecoyLifetime; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct TslGame.*c7be4c9e35
// Size: 0x20 (Inherited: 0x00)
struct F*c7be4c9e35 {
	struct UAkAudioEvent* FireSoundAk; // 0x00(0x08)
	struct UAkAudioEvent* FireLoopSoundAk; // 0x08(0x08)
	struct UAkAudioEvent* FireFinishSoundAk; // 0x10(0x08)
	struct UParticleSystem* MuzzleFx; // 0x18(0x08)
};

// ScriptStruct TslGame.*6796710fe9
// Size: 0x18 (Inherited: 0x00)
struct F*6796710fe9 {
	struct UClass* *466d4d9ab0; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*d48a347aa7
// Size: 0x18 (Inherited: 0x00)
struct F*d48a347aa7 {
	bool bInitialized; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> Disabled; // 0x08(0x10)
};

// ScriptStruct TslGame.*dc7fb3578f
// Size: 0x44 (Inherited: 0x00)
struct F*dc7fb3578f {
	struct FVector *9ca5371426; // 0x00(0x0c)
	float *0b82c76c21; // 0x0c(0x04)
	float *9349f37912; // 0x10(0x04)
	float *730f6facbc; // 0x14(0x04)
	float *af477ea804; // 0x18(0x04)
	enum class EWhiteZoneShape *6d334f41ed; // 0x1c(0x01)
	bool *8804e0f3e1; // 0x1d(0x01)
	bool *6d9ceab19f; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct FVector *d4f0284756; // 0x20(0x0c)
	char pad_2C[0x18]; // 0x2c(0x18)
};

// ScriptStruct TslGame.*0d92db42e0
// Size: 0x10 (Inherited: 0x00)
struct F*0d92db42e0 {
	struct FVector *9a1d2bcf08; // 0x00(0x0c)
	float *3e91a6fc4e; // 0x0c(0x04)
};

// ScriptStruct TslGame.ItemTypeReplaceRow
// Size: 0x20 (Inherited: 0x08)
struct FItemTypeReplaceRow : FTableRowBase {
	enum class EItemOverrideType *0efd4d2793; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*7877849dec> *d97fa42b9f; // 0x10(0x10)
};

// ScriptStruct TslGame.*7877849dec
// Size: 0x18 (Inherited: 0x00)
struct F*7877849dec {
	enum class EItemSpotGroupType *f42eb33c3f; // 0x00(0x01)
	enum class EItemSpotGroupType *c4e6fb5101; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct F*a16ec5124f> *6afa958e5d; // 0x08(0x10)
};

// ScriptStruct TslGame.*a16ec5124f
// Size: 0x02 (Inherited: 0x00)
struct F*a16ec5124f {
	enum class EItemSpotType *ae8311a518; // 0x00(0x01)
	enum class EItemSpotType *bc14aa85a5; // 0x01(0x01)
};

// ScriptStruct TslGame.*27710038ec
// Size: 0x70 (Inherited: 0x08)
struct F*27710038ec : FTableRowBase {
	float StartDelay; // 0x08(0x04)
	float WarningDuration; // 0x0c(0x04)
	float ReleaseDuration; // 0x10(0x04)
	float RadiusRate; // 0x14(0x04)
	float RandomRadiusRate; // 0x18(0x04)
	float BlueZoneDPS; // 0x1c(0x04)
	float SpreadRatio; // 0x20(0x04)
	float DamageMagnifierForDistance; // 0x24(0x04)
	float DamageMagnifier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UCurveFloat* DamageMagnifierCurve; // 0x30(0x20)
	enum class EBluezoneType BluezoneType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 CircleAlgorithm; // 0x54(0x04)
	float LandRatio; // 0x58(0x04)
	int32 FastPlayerCount; // 0x5c(0x04)
	float FastReleaseDuration; // 0x60(0x04)
	float FastWarningDuration; // 0x64(0x04)
	bool bIgnoreSafetyZone; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct TslGame.*ac8d5a7a2e
// Size: 0x14 (Inherited: 0x00)
struct F*ac8d5a7a2e {
	float Damage; // 0x00(0x04)
	float DamagingStartTime; // 0x04(0x04)
	float TickCount; // 0x08(0x04)
	struct FColor FenceColor; // 0x0c(0x04)
	bool bUsePlayerFence; // 0x10(0x01)
	bool bUseOutsideDamage; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct TslGame.*dfa171b2a8
// Size: 0x60 (Inherited: 0x00)
struct F*dfa171b2a8 {
	float StartDelay; // 0x00(0x04)
	float WarningDuration; // 0x04(0x04)
	float ReleaseDuration; // 0x08(0x04)
	float WarningRadius; // 0x0c(0x04)
	struct FVector WarningPosition; // 0x10(0x0c)
	float RadiusRate; // 0x1c(0x04)
	float RandomRadiusRate; // 0x20(0x04)
	float BlueZoneDamagePerSecond; // 0x24(0x04)
	float SpreadRatio; // 0x28(0x04)
	float DamageMagnifierForDistance; // 0x2c(0x04)
	float DamageMagnifier; // 0x30(0x04)
	float LandRatio; // 0x34(0x04)
	int32 CircleAlgorithm; // 0x38(0x04)
	bool bIsFastBluezone; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32 FastPlayerCount; // 0x40(0x04)
	float FastWarningDuration; // 0x44(0x04)
	float FastReleaseDuration; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UCurveFloat* DamageMagnifierCurve; // 0x50(0x08)
	bool bIgnoreSafetyZone; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct TslGame.*85933c7522
// Size: 0x10 (Inherited: 0x08)
struct F*85933c7522 : FTableRowBase {
	bool bAirplaneUseable; // 0x08(0x01)
	bool bTowerUseable; // 0x09(0x01)
	bool bItemUseable; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct TslGame.*02601741c9
// Size: 0x03 (Inherited: 0x00)
struct F*02601741c9 {
	bool bAirplaneUseable; // 0x00(0x01)
	bool bTowerUseable; // 0x01(0x01)
	bool bItemUseable; // 0x02(0x01)
};

// ScriptStruct TslGame.*6f01cb92a0
// Size: 0x18 (Inherited: 0x00)
struct F*6f01cb92a0 {
	struct FName ItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*2468db1251
// Size: 0xb8 (Inherited: 0x00)
struct F*2468db1251 {
	struct TMap<struct FName, struct F*bbbd88e03f> *82cfaa5e55; // 0x00(0x50)
	struct F*0f275c9d42 *6ff7aab3b3; // 0x50(0x50)
	struct TArray<struct FName> *3134325485; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct TslGame.*0f275c9d42
// Size: 0x50 (Inherited: 0x00)
struct F*0f275c9d42 {
	struct TMap<struct FString, struct F*f7046f871a> Table; // 0x00(0x50)
};

// ScriptStruct TslGame.*f7046f871a
// Size: 0x10 (Inherited: 0x00)
struct F*f7046f871a {
	struct TArray<struct F*343888ae60> Values; // 0x00(0x10)
};

// ScriptStruct TslGame.*343888ae60
// Size: 0x18 (Inherited: 0x00)
struct F*343888ae60 {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*bbbd88e03f
// Size: 0x50 (Inherited: 0x00)
struct F*bbbd88e03f {
	struct TMap<struct FName, struct F*2f242c81c7> Values; // 0x00(0x50)
};

// ScriptStruct TslGame.*2f242c81c7
// Size: 0x18 (Inherited: 0x00)
struct F*2f242c81c7 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct F*fb893a9976> Elements; // 0x08(0x10)
};

// ScriptStruct TslGame.*fb893a9976
// Size: 0x18 (Inherited: 0x00)
struct F*fb893a9976 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*94e83124dc
// Size: 0x50 (Inherited: 0x00)
struct F*94e83124dc {
	struct TMap<struct FName, int32> *fa17975e77; // 0x00(0x50)
};

// ScriptStruct TslGame.*bfda2b4f52
// Size: 0x18 (Inherited: 0x08)
struct F*bfda2b4f52 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 SpawnLimit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*403d76def4
// Size: 0x38 (Inherited: 0x08)
struct F*403d76def4 : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	int32 StackCount; // 0x18(0x04)
	int32 CountMin; // 0x1c(0x04)
	int32 CountMax; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName SpawnedItemID; // 0x28(0x08)
	struct FName TogetherItemID; // 0x30(0x08)
};

// ScriptStruct TslGame.*d0071d920c
// Size: 0x38 (Inherited: 0x08)
struct F*d0071d920c : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	struct FName SubCategoryFilter; // 0x18(0x08)
	int32 StackCount; // 0x20(0x04)
	int32 Weight; // 0x24(0x04)
	struct FName ItemID; // 0x28(0x08)
	struct FName SkinId; // 0x30(0x08)
};

// ScriptStruct TslGame.*b4c8f08b3f
// Size: 0x18 (Inherited: 0x00)
struct F*b4c8f08b3f {
	float ProbabilityPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
};

// ScriptStruct TslGame.*666a67141d
// Size: 0x08 (Inherited: 0x00)
struct F*666a67141d {
	int32 TeamPlayers; // 0x00(0x04)
	int32 SpawnCount; // 0x04(0x04)
};

// ScriptStruct TslGame.*8aa2701249
// Size: 0x20 (Inherited: 0x08)
struct F*8aa2701249 : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	float LottoProb; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName LottoBoxTag; // 0x18(0x08)
};

// ScriptStruct TslGame.*a6bc1f436e
// Size: 0x28 (Inherited: 0x08)
struct F*a6bc1f436e : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	struct FName ValueFilter; // 0x10(0x08)
	struct FName CategoryFilter; // 0x18(0x08)
	bool ItemAmount; // 0x20(0x01)
	bool bUnique; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*375b361d90
// Size: 0x40 (Inherited: 0x08)
struct F*375b361d90 : FTableRowBase {
	struct FName PackageName; // 0x08(0x08)
	struct FName EventName; // 0x10(0x08)
	struct TArray<struct F*ad88b68b8f> *ad88b68b8f; // 0x18(0x10)
	struct TArray<struct F*ad88b68b8f> *f46bbc6670; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*ad88b68b8f
// Size: 0x18 (Inherited: 0x00)
struct F*ad88b68b8f {
	struct FName ItemID; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	int32 *0ac8a3d0aa; // 0x0c(0x04)
	int32 *e405ddc03e; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*d4e6d377e6
// Size: 0x30 (Inherited: 0x00)
struct F*d4e6d377e6 {
	struct FName EventName; // 0x00(0x08)
	enum class EItemSpotGroupType *da1d3240f9; // 0x08(0x01)
	enum class EItemSpotType *49cdf52ec3; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 Count; // 0x0c(0x04)
	int32 *4c8e2d3ab8; // 0x10(0x04)
	bool *8b0d7e052d; // 0x14(0x01)
	bool *7a18be906f; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32 *cad16a96ae; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct F*5a4d054193> *e7b0968679; // 0x20(0x10)
};

// ScriptStruct TslGame.*5a4d054193
// Size: 0x30 (Inherited: 0x00)
struct F*5a4d054193 {
	struct FName PackageName; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *d7ed2f581d; // 0x10(0x20)
};

// ScriptStruct TslGame.*760b2f6def
// Size: 0x30 (Inherited: 0x08)
struct F*760b2f6def : FTableRowBase {
	enum class EVendingMachineType VendingMachineType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UClass* VendingMachineActorClass; // 0x10(0x20)
};

// ScriptStruct TslGame.*cd0ff6b16c
// Size: 0x40 (Inherited: 0x08)
struct F*cd0ff6b16c : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	enum class EVendingMachineType Category; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*b14bd35857> ItemsToDrop; // 0x20(0x10)
	float Weight; // 0x30(0x04)
	bool bJackpot; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UAkAudioEvent* AkAudioEvent; // 0x38(0x08)
};

// ScriptStruct TslGame.*bbd5fbf7cd
// Size: 0x20 (Inherited: 0x08)
struct F*bbd5fbf7cd : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	enum class EVendingMachineType Category; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 SpawnCount; // 0x1c(0x04)
};

// ScriptStruct TslGame.*5003fd2bfe
// Size: 0x20 (Inherited: 0x08)
struct F*5003fd2bfe : FTableRowBase {
	struct FVector Transition; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct TslGame.*5750545883
// Size: 0x68 (Inherited: 0x08)
struct F*5750545883 : FTableRowBase {
	struct FName *908e6171f6; // 0x08(0x08)
	struct FName ItemID; // 0x10(0x08)
	struct TArray<int32> StackCount; // 0x18(0x10)
	uint32 Weight; // 0x28(0x04)
	bool *8d70d7cfd9; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *4c8e2d3ab8; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FName> Attachments; // 0x38(0x10)
	struct F*ade0eec1c2 *8c866063a7; // 0x48(0x20)
};

// ScriptStruct TslGame.*ade0eec1c2
// Size: 0x20 (Inherited: 0x00)
struct F*ade0eec1c2 {
	struct FName ItemID; // 0x00(0x08)
	struct TArray<int32> StackCount; // 0x08(0x10)
	bool *8d70d7cfd9; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *4c8e2d3ab8; // 0x1c(0x04)
};

// ScriptStruct TslGame.*3ca480f9b8
// Size: 0x10 (Inherited: 0x00)
struct F*3ca480f9b8 {
	struct FVector2D StartPosition; // 0x00(0x08)
	struct FVector2D EndPosition; // 0x08(0x08)
};

// ScriptStruct TslGame.*2f22745d38
// Size: 0x420 (Inherited: 0x00)
struct F*2f22745d38 {
	struct FString MapName; // 0x00(0x10)
	struct FModePresetData DefaultPresetData; // 0x10(0x400)
	struct TArray<struct FModePresetData> PresetDataList; // 0x410(0x10)
};

// ScriptStruct TslGame.ModePresetData
// Size: 0x400 (Inherited: 0x00)
struct FModePresetData {
	struct FName PresetName; // 0x00(0x08)
	bool *3074feb6a5; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UClass* ModeControllerClass; // 0x10(0x20)
	struct TArray<struct UClass*> AdditionalModeControllerClasses; // 0x30(0x10)
	struct UClass* InitialItemDonatorClass; // 0x40(0x20)
	struct UClass* ItemSpawnProcessorClass; // 0x60(0x20)
	struct UClass* EventItemSpawnProcessorClass; // 0x80(0x20)
	struct UClass* ThingSpawnProcessorClass; // 0xa0(0x20)
	struct UClass* TslSupplyBoxSpawnProcessorClass; // 0xc0(0x20)
	struct UClass* JukeBoxSpawnProcessorClass; // 0xe0(0x20)
	struct UClass* BlueChipTowerSpawnProcessorClass; // 0x100(0x20)
	struct UClass* CabinetSpawnProcessorClass; // 0x120(0x20)
	struct UClass* InteractionSupplySpawnProcessorClass; // 0x140(0x20)
	struct UClass* GroupDeployedItemSpawnProcessorClass; // 0x160(0x20)
	float AircraftTotalFlyingTime; // 0x180(0x04)
	bool bOverrideAircraftTotalFlyingTime; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	float AllowRangeByBlueZone; // 0x188(0x04)
	bool bOverrideAllowRangeByBlueZone; // 0x18c(0x01)
	bool *6365ecc51b; // 0x18d(0x01)
	bool *8f3c4b65bf; // 0x18e(0x01)
	char pad_18F[0x1]; // 0x18f(0x01)
	struct FString EssentialSpawnKitName; // 0x190(0x10)
	bool *1a6a14bbce; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FString *a7402ff2ba; // 0x1a8(0x10)
	bool *3f80e15ea0; // 0x1b8(0x01)
	bool *afdb3bca92; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
	struct TArray<struct FText> *e257cdcd49; // 0x1c0(0x10)
	float *247b910121; // 0x1d0(0x04)
	float *b5d1367823; // 0x1d4(0x04)
	bool *8d13daf84e; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct UDataTable* DropSpotGroupDataTable; // 0x1e0(0x20)
	struct UDataTable* DropItemFilterDataTable; // 0x200(0x20)
	struct UDataTable* DropItemSpawnDataTable; // 0x220(0x20)
	struct UDataTable* DropItemSpawnTogetherDataTable; // 0x240(0x20)
	struct UDataTable* DropItemTypeOverrideDataTable; // 0x260(0x20)
	int32 ActiveItemTypeOverrideAreaCount; // 0x280(0x04)
	float ActiveItemTypeOverrideAreaPercent; // 0x284(0x04)
	struct TMap<struct FString, struct F*11c07b214c> ItemSpawnDataTables; // 0x288(0x50)
	struct UDataTable* CraftItemDataTable; // 0x2d8(0x20)
	struct UDataTable* VehicleSpotGroupDataTable; // 0x2f8(0x20)
	struct UDataTable* VehicleSpawnDataTable; // 0x318(0x20)
	struct UDataTable* EventItemPackageSpawnDataTable; // 0x338(0x20)
	struct UDataTable* BluezoneDataTable; // 0x358(0x20)
	bool *8d22351119; // 0x378(0x01)
	bool *65337b6819; // 0x379(0x01)
	bool *4eef1669a5; // 0x37a(0x01)
	char pad_37B[0x5]; // 0x37b(0x05)
	struct UDataTable* RevivalPhaseDataTable; // 0x380(0x20)
	int32 *9efe322dba; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct TArray<struct F*58967fb14a> MatchPreparerClasses; // 0x3a8(0x10)
	struct TArray<struct UWorld*> *2651f747e7; // 0x3b8(0x10)
	struct AAbstractRespawnProcessor* *0817a0ef98; // 0x3c8(0x08)
	struct UClass* RespawnProcessorClass; // 0x3d0(0x08)
	struct UClass* WhiteZoneControllerClass; // 0x3d8(0x20)
	bool bEnableMonsterSystem; // 0x3f8(0x01)
	bool *5a2be1ee48; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
};

// ScriptStruct TslGame.*11c07b214c
// Size: 0x40 (Inherited: 0x00)
struct F*11c07b214c {
	struct UDataTable* ItemSpawnDataTable; // 0x00(0x20)
	struct UDataTable* ItemSpawnTogetherDataTable; // 0x20(0x20)
};

// ScriptStruct TslGame.*386fb27455
// Size: 0x20 (Inherited: 0x00)
struct F*386fb27455 {
	struct ATslPatrolPath* *c332f04497; // 0x00(0x08)
	struct TArray<struct F*b98efa61e8> *31c1735ade; // 0x08(0x10)
	enum class *5f87d2f77d *ab354a1a30; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*b98efa61e8
// Size: 0x40 (Inherited: 0x00)
struct F*b98efa61e8 {
	struct FTransform Transform; // 0x00(0x30)
	bool *292f5dda06; // 0x30(0x01)
	bool *775fabfdec; // 0x31(0x01)
	enum class EStanceMode *7d3df121a2; // 0x32(0x01)
	enum class EStanceMode *9abb4b4486; // 0x33(0x01)
	enum class EPatrolSpeed *ba5df2711f; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float *8a1c6f6426; // 0x38(0x04)
	bool *1ad75f8052; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGame.*191cab287e
// Size: 0x60 (Inherited: 0x00)
struct F*191cab287e {
	float InitialSpeed; // 0x00(0x04)
	float *1ca73e6a43; // 0x04(0x04)
	float *e11af624d9; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*7e7ddf6b2f> *6336262f96; // 0x10(0x10)
	float *86dbe8da77; // 0x20(0x04)
	float *10ad7bfe5a; // 0x24(0x04)
	struct U*226eb62c2c* *4136376f2f; // 0x28(0x08)
	float RangeModifier; // 0x30(0x04)
	float ReferenceDistance; // 0x34(0x04)
	float TravelDistanceMax; // 0x38(0x04)
	bool bUseMaxDamageDistance; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float SimulationSubstepTime; // 0x40(0x04)
	float VDragCoefficient; // 0x44(0x04)
	float BDS; // 0x48(0x04)
	bool bUseAdvancedBallistics; // 0x4c(0x01)
	bool bCanProduceCrackSound; // 0x4d(0x01)
	bool *3f0e065b9d; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct UClass* *f23bfe8a1c; // 0x50(0x08)
	char *53a5c7c5ab : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float WeaponSpread; // 0x5c(0x04)
};

// ScriptStruct TslGame.*7e7ddf6b2f
// Size: 0x08 (Inherited: 0x00)
struct F*7e7ddf6b2f {
	float Damage; // 0x00(0x04)
	float Probability; // 0x04(0x04)
};

// ScriptStruct TslGame.*136083772d
// Size: 0xd0 (Inherited: 0x00)
struct F*136083772d {
	float VerticalRecoilMin; // 0x00(0x04)
	float VerticalRecoilMax; // 0x04(0x04)
	float VerticalRecoilRecoveryMin; // 0x08(0x04)
	float VerticalRecoilVariation; // 0x0c(0x04)
	float VerticalRecoveryModifier; // 0x10(0x04)
	float VerticalRecoveryClamp; // 0x14(0x04)
	float VerticalRecoveryMax; // 0x18(0x04)
	float LeftMax; // 0x1c(0x04)
	float RightMax; // 0x20(0x04)
	float HorizontalTendency; // 0x24(0x04)
	struct U*226eb62c2c* RecoilCurve; // 0x28(0x08)
	int32 BulletsPerSwitch; // 0x30(0x04)
	float RecoilSpeed_Vertical; // 0x34(0x04)
	float RecoilSpeed_Horizontal; // 0x38(0x04)
	float RecoverySpeed_Vertical; // 0x3c(0x04)
	float RecoilValue_Climb; // 0x40(0x04)
	float RecoilValue_Fall; // 0x44(0x04)
	float RecoilModifier_Stand; // 0x48(0x04)
	float RecoilModifier_Crouch; // 0x4c(0x04)
	float RecoilModifier_Prone; // 0x50(0x04)
	float RecoilModifier_Vehicle; // 0x54(0x04)
	float RecoilHorizontalMinScalar; // 0x58(0x04)
	struct FVector2D RecoilStartTimeInMap; // 0x5c(0x08)
	struct FVector2D RecoilStartTimeOutMap; // 0x64(0x08)
	struct FVector2D RecoilBlendInInMap; // 0x6c(0x08)
	struct FVector2D RecoilBlendInOutMap; // 0x74(0x08)
	float VehicleRecoilScalar; // 0x7c(0x04)
	struct TMap<enum class EFiringMode, struct F*348140e477> ROFRecoilMap; // 0x80(0x50)
};

// ScriptStruct TslGame.*348140e477
// Size: 0x50 (Inherited: 0x00)
struct F*348140e477 {
	struct TMap<enum class EAnimStance, float> StanceMap; // 0x00(0x50)
};

// ScriptStruct TslGame.*1f20fb333b
// Size: 0x28 (Inherited: 0x00)
struct F*1f20fb333b {
	float RecoilValue; // 0x00(0x04)
	float RecoilVertical; // 0x04(0x04)
	float RecoilHorizontal; // 0x08(0x04)
	float RecoilTargetPitch; // 0x0c(0x04)
	float RecoilTargetYaw; // 0x10(0x04)
	float RecoilRecoveryTarget; // 0x14(0x04)
	float RecoilVerticalDelta; // 0x18(0x04)
	float RecoilHorizontalDelta; // 0x1c(0x04)
	float RecoilCharacterPitch; // 0x20(0x04)
	float RecoilWeaponPitch; // 0x24(0x04)
};

// ScriptStruct TslGame.*58c2c2e93d
// Size: 0x78 (Inherited: 0x00)
struct F*58c2c2e93d {
	struct ATslWeapon_Trajectory* Weapon; // 0x00(0x08)
	struct U*226eb62c2c* *4136376f2f; // 0x08(0x08)
	struct ATslParticle* Particle; // 0x10(0x08)
	char pad_18[0x60]; // 0x18(0x60)
};

// ScriptStruct TslGame.*e62ad024b2
// Size: 0x30 (Inherited: 0x08)
struct F*e62ad024b2 : FTableRowBase {
	struct UTexture2D* BackgroundImage; // 0x08(0x20)
	float ApperanceModifier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*b2222a61d9
// Size: 0xd8 (Inherited: 0xa0)
struct F*b2222a61d9 : F*46faab5b50 {
	bool bIsImageOnlyLoadingScreen; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FText Title; // 0xa8(0x18)
	struct FText Description; // 0xc0(0x18)
};

// ScriptStruct TslGame.*46faab5b50
// Size: 0xa0 (Inherited: 0x08)
struct F*46faab5b50 : FTableRowBase {
	enum class ELoadingScreenType LoadingScreenType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName GameModeAlias; // 0x10(0x08)
	enum class *8bd9ed520b RankGuideType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UTexture2D* BackgroundImage; // 0x20(0x20)
	struct TMap<enum class ETslMapName, struct F*6e96431733> OverrideByMap; // 0x40(0x50)
	bool bIsKeyGuide; // 0x90(0x01)
	bool bExposedOnPCAndKeyboard; // 0x91(0x01)
	bool bExposedOnPCAndGamepad; // 0x92(0x01)
	bool bExposedOnXboxOne; // 0x93(0x01)
	bool bExposedOnPS4; // 0x94(0x01)
	bool bExposedOnQuail; // 0x95(0x01)
	bool bExposedOnQuailThirdParty; // 0x96(0x01)
	char pad_97[0x1]; // 0x97(0x01)
	float ApperanceModifier; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct TslGame.*6e96431733
// Size: 0x50 (Inherited: 0x00)
struct F*6e96431733 {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* BackgroundImage; // 0x30(0x20)
};

// ScriptStruct TslGame.*6fea39db40
// Size: 0xa8 (Inherited: 0xa0)
struct F*6fea39db40 : F*46faab5b50 {
	struct UClass* TipWidget; // 0xa0(0x08)
};

// ScriptStruct TslGame.*2075a6cf21
// Size: 0x40 (Inherited: 0x00)
struct F*2075a6cf21 {
	struct TArray<struct F*5c3862ad8f> LoadingScreenTypePercentForElementaryRank; // 0x00(0x10)
	struct TArray<struct F*5c3862ad8f> LoadingScreenTypePercentForIntermediateRank; // 0x10(0x10)
	struct TArray<struct F*5c3862ad8f> LoadingScreenTypePercentForHighRank; // 0x20(0x10)
	struct TArray<struct F*5c3862ad8f> LoadingScreenTypePercentForExpertRank; // 0x30(0x10)
};

// ScriptStruct TslGame.*5c3862ad8f
// Size: 0x08 (Inherited: 0x00)
struct F*5c3862ad8f {
	enum class ELoadingScreenType LoadingScreenType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Percent; // 0x04(0x04)
};

// ScriptStruct TslGame.*5507bf7a01
// Size: 0x18 (Inherited: 0x08)
struct F*5507bf7a01 : FTableRowBase {
	float ShowElementaryRankPercentForElementaryRank; // 0x08(0x04)
	float ShowElementaryRankPercentForIntermediateRank; // 0x0c(0x04)
	float ShowElementaryRankPercentForHighRank; // 0x10(0x04)
	float ShowElementaryRankPercentForExpertRank; // 0x14(0x04)
};

// ScriptStruct TslGame.*945a05eb65
// Size: 0x28 (Inherited: 0x00)
struct F*945a05eb65 {
	struct FText ColorNameText; // 0x00(0x18)
	struct FLinearColor Color; // 0x18(0x10)
};

// ScriptStruct TslGame.NamedFovRecord
// Size: 0x10 (Inherited: 0x00)
struct FNamedFovRecord {
	struct FName SensitiveName; // 0x00(0x08)
	float FOV; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*96b79830b6
// Size: 0x20 (Inherited: 0x08)
struct F*96b79830b6 : FTableRowBase {
	struct FName *66fedbc0c9; // 0x08(0x08)
	struct TArray<struct F*0273bd0eae> *7cbdafd931; // 0x10(0x10)
};

// ScriptStruct TslGame.*60ab5108c4
// Size: 0x38 (Inherited: 0x00)
struct F*60ab5108c4 {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
};

// ScriptStruct TslGame.*63d7690138
// Size: 0x68 (Inherited: 0x00)
struct F*63d7690138 {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
	bool bIsStepper; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FText> *a010676d16; // 0x40(0x10)
	int32 *e05a76647e; // 0x50(0x04)
	bool bIsSlider; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float SliderMin; // 0x58(0x04)
	float SliderMax; // 0x5c(0x04)
	float *5826944a5c; // 0x60(0x04)
	bool *c66ec0c768; // 0x64(0x01)
	bool *07d871259d; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct TslGame.*8ef43aacf1
// Size: 0x20 (Inherited: 0x00)
struct F*8ef43aacf1 {
	struct TArray<struct FTslGamepadActionKeyData> ActionKeyDatas; // 0x00(0x10)
	struct TArray<struct FTslGamepadAxisKeyData> AxisKeyDatas; // 0x10(0x10)
};

// ScriptStruct TslGame.TslGamepadAxisKeyData
// Size: 0x28 (Inherited: 0x00)
struct FTslGamepadAxisKeyData {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FKey GamepadAxisKey; // 0x10(0x18)
};

// ScriptStruct TslGame.TslGamepadActionKeyData
// Size: 0x48 (Inherited: 0x00)
struct FTslGamepadActionKeyData {
	struct FName ActionName; // 0x00(0x08)
	struct FTslGamepadInputKey GamepadActionKey; // 0x08(0x40)
};

// ScriptStruct TslGame.TslGamepadInputKey
// Size: 0x40 (Inherited: 0x00)
struct FTslGamepadInputKey {
	struct FKey Key; // 0x00(0x18)
	enum class EGamepadInputResponseTypes ResponseType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ResponseTime; // 0x1c(0x04)
	bool bBlockDuplicatedKeyAction; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FKey CombinationKey; // 0x28(0x18)
};

// ScriptStruct TslGame.*862e76e1d6
// Size: 0x10 (Inherited: 0x00)
struct F*862e76e1d6 {
	struct TArray<struct FTslGamepadInputKey> *736ac5b089; // 0x00(0x10)
};

// ScriptStruct TslGame.*a87b847ec5
// Size: 0xc0 (Inherited: 0x08)
struct F*a87b847ec5 : FTableRowBase {
	enum class EGamepadPresets GamepadPreset; // 0x08(0x01)
	enum class EActionType ActionType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName ActionName; // 0x10(0x08)
	struct FKey Key; // 0x18(0x18)
	bool bIsConfirmOrCancel; // 0x30(0x01)
	enum class EGamepadInputResponseTypes ResponseType; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float ResponseTime; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	bool bBlockDuplicatedKeyAction; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString GuideTabCategory; // 0x40(0x10)
	struct FText GuideText; // 0x50(0x18)
	struct FKey CombinationKey; // 0x68(0x18)
	struct FString FakeResponseTypeForGuide; // 0x80(0x10)
	struct FString BindingTabName; // 0x90(0x10)
	int32 BindingGroupNumber; // 0xa0(0x04)
	int32 FunctionalGroupNumber; // 0xa4(0x04)
	struct FKey RelatedAxisKey; // 0xa8(0x18)
};

// ScriptStruct TslGame.*71aec524cb
// Size: 0x30 (Inherited: 0x00)
struct F*71aec524cb {
	float MinDistance; // 0x00(0x04)
	float MaxDistance; // 0x04(0x04)
	float TrackingModifier; // 0x08(0x04)
	float AdhesionSpeed; // 0x0c(0x04)
	float DeadZoneValue; // 0x10(0x04)
	bool bUseTrackingModifierCurve; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct UCurveFloat* TrackingModifierCurve; // 0x18(0x08)
	bool bUseAdhesionSpeedCurve; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* AdhesionSpeedCurve; // 0x28(0x08)
};

// ScriptStruct TslGame.*a318df3033
// Size: 0x38 (Inherited: 0x00)
struct F*a318df3033 {
	struct FLinearColor Color; // 0x00(0x10)
	struct FText DisplayName; // 0x10(0x18)
	struct FString ColorString; // 0x28(0x10)
};

// ScriptStruct TslGame.*b03b74b201
// Size: 0x18 (Inherited: 0x00)
struct F*b03b74b201 {
	enum class EAnimatableCustomizableTypes MutableType; // 0x00(0x01)
	enum class ETargetAnimDynamicsType TargetAnimDynamicType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FName> MutableNames; // 0x08(0x10)
};

// ScriptStruct TslGame.ColorBlindType
// Size: 0x20 (Inherited: 0x00)
struct FColorBlindType {
	enum class EColorBlindType Key; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct TslGame.PlatoonCommanderColorAndIcon
// Size: 0x50 (Inherited: 0x40)
struct FPlatoonCommanderColorAndIcon : FTeamColorAndIcon {
	struct F*6a15aeee08 AlternativeColor; // 0x40(0x10)
};

// ScriptStruct TslGame.TeamColorAndIcon
// Size: 0x40 (Inherited: 0x00)
struct FTeamColorAndIcon {
	struct F*6a15aeee08 TeamMemberColor; // 0x00(0x10)
	struct UTexture* MarkerColorTextIcon; // 0x10(0x08)
	struct UTexture* MarkerIcon; // 0x18(0x08)
	struct UTexture* PlayerIcon; // 0x20(0x08)
	struct UTexture* CompassIcon; // 0x28(0x08)
	struct UTexture* IndicatorIcon; // 0x30(0x08)
	struct UTexture* MapDeathIcon; // 0x38(0x08)
};

// ScriptStruct TslGame.*6a15aeee08
// Size: 0x10 (Inherited: 0x00)
struct F*6a15aeee08 {
	struct TArray<struct F*553c55a392> ColorSet; // 0x00(0x10)
};

// ScriptStruct TslGame.*553c55a392
// Size: 0x14 (Inherited: 0x00)
struct F*553c55a392 {
	enum class EColorBlindType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
};

// ScriptStruct TslGame.*237e05f8ce
// Size: 0x18 (Inherited: 0x00)
struct F*237e05f8ce {
	enum class ESeatState SeatState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*6a15aeee08 ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.ReticleColors
// Size: 0x18 (Inherited: 0x00)
struct FReticleColors {
	enum class EReticleType ReticleType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*6a15aeee08 ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.*4483e359ae
// Size: 0x30 (Inherited: 0x08)
struct F*4483e359ae : FTableRowBase {
	struct F*6a15aeee08 BlindColorSet; // 0x08(0x10)
	struct FLinearColor ShadowColor; // 0x18(0x10)
	struct FVector2D ShadowOffset; // 0x28(0x08)
};

// ScriptStruct TslGame.*94c7601351
// Size: 0x28 (Inherited: 0x00)
struct F*94c7601351 {
	struct FText DisplayUiName; // 0x00(0x18)
	struct FString UiKey; // 0x18(0x10)
};

// ScriptStruct TslGame.*2885b32bec
// Size: 0x18 (Inherited: 0x00)
struct F*2885b32bec {
	enum class EQualityType QualityType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*8c3e84f86f> OverrideScalabilityValues; // 0x08(0x10)
};

// ScriptStruct TslGame.*8c3e84f86f
// Size: 0x28 (Inherited: 0x00)
struct F*8c3e84f86f {
	struct FString ConsoleName; // 0x00(0x10)
	enum class EValueType ValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> Values; // 0x18(0x10)
};

// ScriptStruct TslGame.*495dbe4a8a
// Size: 0x20 (Inherited: 0x00)
struct F*495dbe4a8a {
	struct FName ModeName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct TslGame.*f3e0875297
// Size: 0x20 (Inherited: 0x00)
struct F*f3e0875297 {
	int32 QualityLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText DisplayQualityLevelName; // 0x08(0x18)
};

// ScriptStruct TslGame.*6a48f6117c
// Size: 0x30 (Inherited: 0x00)
struct F*6a48f6117c {
	struct FText DisplayName; // 0x00(0x18)
	struct FName GamePadSensitiveName; // 0x18(0x08)
	float GamePadSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* GamePadCurve; // 0x28(0x08)
};

// ScriptStruct TslGame.*4c83ffadfe
// Size: 0x28 (Inherited: 0x00)
struct F*4c83ffadfe {
	struct FText DisplayName; // 0x00(0x18)
	struct FName MouseSensitiveName; // 0x18(0x08)
	float MouseSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*a11852e74f
// Size: 0x30 (Inherited: 0x00)
struct F*a11852e74f {
	struct FName Category; // 0x00(0x08)
	struct FName AxisName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	float Scale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*8f403c599f
// Size: 0x28 (Inherited: 0x00)
struct F*8f403c599f {
	struct FName Category; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct TslGame.*fc8c81e622
// Size: 0x30 (Inherited: 0x00)
struct F*fc8c81e622 {
	struct FText DisplayName; // 0x00(0x18)
	enum class EReportCause ReportCauseType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<enum class EReportDetailCauseType> DetailCauseTypeList; // 0x20(0x10)
};

// ScriptStruct TslGame.AimAcceleration
// Size: 0x08 (Inherited: 0x00)
struct FAimAcceleration {
	struct UCurveFloat* RampUpTimeForTargetingCurve; // 0x00(0x08)
};

// ScriptStruct TslGame.SubjectToReport
// Size: 0x20 (Inherited: 0x00)
struct FSubjectToReport {
	struct FText DisplayName; // 0x00(0x18)
	enum class ESubjectToReport SubjectToReportType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.CustomizableCategoryData
// Size: 0x30 (Inherited: 0x00)
struct FCustomizableCategoryData {
	struct FText DisplayName; // 0x00(0x18)
	struct FName Category; // 0x18(0x08)
	struct TArray<struct FName> NotDuplicateCategoryNames; // 0x20(0x10)
};

// ScriptStruct TslGame.*d702962c2d
// Size: 0x10 (Inherited: 0x00)
struct F*d702962c2d {
	struct FName *19e85f00f4; // 0x00(0x08)
	struct FName *7c19fc0274; // 0x08(0x08)
};

// ScriptStruct TslGame.*e939e8876f
// Size: 0x14 (Inherited: 0x00)
struct F*e939e8876f {
	float CapsuleHalfHeight; // 0x00(0x04)
	float CapsuleRadius; // 0x04(0x04)
	struct FVector CapsuleOffset; // 0x08(0x0c)
};

// ScriptStruct TslGame.*fec8bfaa1c
// Size: 0x10 (Inherited: 0x00)
struct F*fec8bfaa1c {
	struct TArray<struct FString> Values; // 0x00(0x10)
};

// ScriptStruct TslGame.*4617ea313d
// Size: 0x20 (Inherited: 0x00)
struct F*4617ea313d {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*f93f23aa96
// Size: 0x18 (Inherited: 0x00)
struct F*f93f23aa96 {
	struct FString CustomStringParameter; // 0x00(0x10)
	float MinLimit; // 0x10(0x04)
	float MaxLimit; // 0x14(0x04)
};

// ScriptStruct TslGame.*e39df6e790
// Size: 0x0c (Inherited: 0x00)
struct F*e39df6e790 {
	float ReviveCastingTime; // 0x00(0x04)
	float MultiplierGroggyDamagePerSecond; // 0x04(0x04)
	float MultiplierPunchDamage; // 0x08(0x04)
};

// ScriptStruct TslGame.*2185473d07
// Size: 0x10 (Inherited: 0x00)
struct F*2185473d07 {
	struct TArray<struct FStringAssetReference> References; // 0x00(0x10)
};

// ScriptStruct TslGame.*b40cd7320b
// Size: 0x14 (Inherited: 0x00)
struct F*b40cd7320b {
	int32 Index; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	enum class EBlueChipTowerState *c5d324932f; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*555278f261
// Size: 0x10 (Inherited: 0x00)
struct F*555278f261 {
	struct TArray<struct ATeam*> *330a9ede17; // 0x00(0x10)
};

// ScriptStruct TslGame.*517c354742
// Size: 0x05 (Inherited: 0x00)
struct F*517c354742 {
	struct F*477200f8e9 Round; // 0x00(0x02)
	struct F*477200f8e9 *f0e45677b1; // 0x02(0x02)
	bool *f0948186ff; // 0x04(0x01)
};

// ScriptStruct TslGame.*477200f8e9
// Size: 0x02 (Inherited: 0x00)
struct F*477200f8e9 {
	int8 *776d604c11; // 0x00(0x01)
	int8 *7b755f22ce; // 0x01(0x01)
};

// ScriptStruct TslGame.*b0379cded7
// Size: 0x10 (Inherited: 0x00)
struct F*b0379cded7 {
	struct FName Name; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b456e4161a
// Size: 0x38 (Inherited: 0x00)
struct F*b456e4161a {
	enum class ESpecialZoneType *4560b5c0de; // 0x00(0x01)
	enum class ESpecialZoneState *4b00ee52ce; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *e9307ac65c; // 0x04(0x04)
	struct FVector2D *1d50551991; // 0x08(0x08)
	struct TArray<struct FVector2D> *a28a54b2ba; // 0x10(0x10)
	struct TArray<struct FRotator> *bd19bfffc1; // 0x20(0x10)
	float *73c6a99bfe; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*198f48ee33
// Size: 0x0c (Inherited: 0x00)
struct F*198f48ee33 {
	bool bEnabled; // 0x00(0x01)
	bool *91558c57b8; // 0x01(0x01)
	bool *bdb000d38f; // 0x02(0x01)
	bool *88857d3fd8; // 0x03(0x01)
	float AircraftCooldown; // 0x04(0x04)
	float *3e52eb8419; // 0x08(0x04)
};

// ScriptStruct TslGame.*3cc489f061
// Size: 0x10 (Inherited: 0x00)
struct F*3cc489f061 {
	struct FName ItemID; // 0x00(0x08)
	int32 Limits; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*617dc560c8
// Size: 0x18 (Inherited: 0x00)
struct F*617dc560c8 {
	struct FVector HitLocation; // 0x00(0x0c)
	struct FVector AttackerLocation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*30cbbec97c
// Size: 0x48 (Inherited: 0x08)
struct F*30cbbec97c : FTableRowBase {
	enum class EFExplosivePropDataType *085abd7124; // 0x08(0x01)
	bool *97b6f89553; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *f0bc81eb83; // 0x0c(0x04)
	float *f5bebf4964; // 0x10(0x04)
	float *c3553743c9; // 0x14(0x04)
	float *74a92dfb55; // 0x18(0x04)
	float *c7c38bba10; // 0x1c(0x04)
	float *ca40ccbe76; // 0x20(0x04)
	float *df0ea50526; // 0x24(0x04)
	struct UCurveFloat* *3d532886ce; // 0x28(0x08)
	struct UClass* *ae3937fa3a; // 0x30(0x08)
	struct FVector *54289befe7; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*9193ad0b85
// Size: 0x18 (Inherited: 0x08)
struct F*9193ad0b85 : FTableRowBase {
	struct FString *9ab53ffdf5; // 0x08(0x10)
};

// ScriptStruct TslGame.*1169c57562
// Size: 0x68 (Inherited: 0x00)
struct F*1169c57562 {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct U*76f0f228a4* *76f0f228a4; // 0x40(0x08)
	struct U*70230c5041* ReactionDoorData; // 0x48(0x08)
	struct FVector *9a5254a9b8; // 0x50(0x0c)
	float BoundsScale; // 0x5c(0x04)
	char LightingChannel0 : 1; // 0x60(0x01)
	char LightingChannel1 : 1; // 0x60(0x01)
	char *7f0377061d : 1; // 0x60(0x01)
	char pad_60_3 : 5; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.*414c014974
// Size: 0x28 (Inherited: 0x00)
struct F*414c014974 {
	struct UPrimitiveComponent* *d17b8928d9; // 0x00(0x08)
	struct FVector_NetQuantize Location; // 0x08(0x0c)
	struct FVector_NetQuantize Velocity; // 0x14(0x0c)
	bool *4e23718b99; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*9ab3b006db
// Size: 0x30 (Inherited: 0x00)
struct F*9ab3b006db {
	struct UPrimitiveComponent* *d17b8928d9; // 0x00(0x08)
	struct UPrimitiveComponent* *98cb86c674; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	uint16 *dab74d1016; // 0x28(0x02)
	bool *c2d5b8273d; // 0x2a(0x01)
	bool *96f21dc650; // 0x2b(0x01)
	bool *4e23718b99; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct TslGame.*acc1594726
// Size: 0x48 (Inherited: 0x00)
struct F*acc1594726 {
	struct FRotator *80ba3b91ea; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct USceneComponent* *5f8c1a5417; // 0x28(0x08)
	struct U*76d2ef26df* ThrowableConfig; // 0x30(0x08)
	bool *60e83cdb73; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName MeshSocket; // 0x40(0x08)
};

// ScriptStruct TslGame.*c863104312
// Size: 0x58 (Inherited: 0x50)
struct F*c863104312 : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*6af0619217
// Size: 0x28 (Inherited: 0x00)
struct F*6af0619217 {
	struct UItem* Item; // 0x00(0x08)
	struct F*be80d72f85 *b951f4b7a9; // 0x08(0x0c)
	char pad_14[0x14]; // 0x14(0x14)
};

// ScriptStruct TslGame.*e078c71e82
// Size: 0x30 (Inherited: 0x00)
struct F*e078c71e82 {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*03b4112cb5 RegionalSetting; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*03b4112cb5
// Size: 0x24 (Inherited: 0x00)
struct F*03b4112cb5 {
	float FogDensity; // 0x00(0x04)
	struct FLinearColor FogColor; // 0x04(0x10)
	float FogStartDistance; // 0x14(0x04)
	float VolFogExtinctionScale; // 0x18(0x04)
	float WeatherParticleSpawnScale; // 0x1c(0x04)
	float WindScale; // 0x20(0x04)
};

// ScriptStruct TslGame.*86894bb6ac
// Size: 0x28 (Inherited: 0x00)
struct F*86894bb6ac {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *f7d9fcd2bf; // 0x08(0x10)
	struct TArray<struct F*ea966a55cb> *c1e93cd869; // 0x18(0x10)
};

// ScriptStruct TslGame.*ea966a55cb
// Size: 0x28 (Inherited: 0x00)
struct F*ea966a55cb {
	int32 ColorIndex; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *63213b682b; // 0x08(0x20)
};

// ScriptStruct TslGame.*56beafd99e
// Size: 0x28 (Inherited: 0x00)
struct F*56beafd99e {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *4987bd8e35; // 0x08(0x10)
	struct TArray<struct F*512d2e3172> *c1e93cd869; // 0x18(0x10)
};

// ScriptStruct TslGame.*512d2e3172
// Size: 0x48 (Inherited: 0x00)
struct F*512d2e3172 {
	int32 ColorIndex; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *b01aa6874d; // 0x08(0x20)
	struct UCustomizableObject* *f3205ebc9b; // 0x28(0x20)
};

// ScriptStruct TslGame.*2d03edb605
// Size: 0x10 (Inherited: 0x00)
struct F*2d03edb605 {
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*4e13a455fe
// Size: 0x18 (Inherited: 0x00)
struct F*4e13a455fe {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.PostProcessMaterial
// Size: 0x10 (Inherited: 0x00)
struct FPostProcessMaterial {
	struct UMaterialInterface* EffectMaterial; // 0x00(0x08)
	float BlendWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b5067f91a9
// Size: 0x40 (Inherited: 0x00)
struct F*b5067f91a9 {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> StandingTraceTargets; // 0x08(0x10)
	struct TArray<struct FVector2D> CrouchTraceTargets; // 0x18(0x10)
	struct TArray<struct FVector> ProneTraceTargets; // 0x28(0x10)
	float ProxyTraceMaxLenght; // 0x38(0x04)
	float ProxyTraceMinLenght; // 0x3c(0x04)
};

// ScriptStruct TslGame.SpecialDecal
// Size: 0x20 (Inherited: 0x00)
struct FSpecialDecal {
	struct FString DecalName; // 0x00(0x10)
	struct FVector2D DecalSize; // 0x10(0x08)
	struct UMaterialInterface* DecalMaterial; // 0x18(0x08)
};

// ScriptStruct TslGame.CustomInputSettings
// Size: 0xd8 (Inherited: 0x00)
struct FCustomInputSettings {
	struct TArray<struct FCustomActionKeyData> ActionKeyList; // 0x00(0x10)
	struct TArray<struct FCustomAxisKeyData> AxisKeyList; // 0x10(0x10)
	bool bIsUsingPerScopeMouseSensitivity; // 0x20(0x01)
	bool bIsUsingPerScopeGamepadSensitivity; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<struct FCustomMouseSensitiveData> MouseSensitiveList; // 0x28(0x10)
	struct TArray<struct FCustomGamePadSensitiveData> GamePadSensitiveList; // 0x38(0x10)
	struct TMap<enum class ETslControllerType, struct FCustomSensitiveDataArray> SensitiveMap; // 0x48(0x50)
	float MouseVerticalSensitivityMultiplierAdjusted; // 0x98(0x04)
	bool bInvertMouse; // 0x9c(0x01)
	bool bInvertGamePadY; // 0x9d(0x01)
	bool bInvertGamePadX; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
	float GamePadDeadZone; // 0xa0(0x04)
	float GamepadVerticalSensitivityMultiplier; // 0xa4(0x04)
	float StartRunningSensitivity; // 0xa8(0x04)
	float GamePadDeadZone_Left; // 0xac(0x04)
	bool bEnableAimAccPad; // 0xb0(0x01)
	char pad_B1[0x27]; // 0xb1(0x27)
};

// ScriptStruct TslGame.CustomSensitiveDataArray
// Size: 0x10 (Inherited: 0x00)
struct FCustomSensitiveDataArray {
	struct TArray<struct FCustomSensitiveData> Array; // 0x00(0x10)
};

// ScriptStruct TslGame.CustomSensitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomSensitiveData {
	struct FName SensitiveName; // 0x00(0x08)
	float Sensitivity; // 0x08(0x04)
	float LastConvertedSensitivity; // 0x0c(0x04)
};

// ScriptStruct TslGame.CustomGamePadSensitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomGamePadSensitiveData {
	struct FName GamePadSensitiveName; // 0x00(0x08)
	float GamePadSensitivity; // 0x08(0x04)
	float LastConvertedGamePadSensitivity; // 0x0c(0x04)
};

// ScriptStruct TslGame.CustomMouseSensitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomMouseSensitiveData {
	struct FName MouseSensitiveName; // 0x00(0x08)
	float MouseSensitivity; // 0x08(0x04)
	float LastConvertedMouseSensitivity; // 0x0c(0x04)
};

// ScriptStruct TslGame.CustomAxisKeyData
// Size: 0x20 (Inherited: 0x00)
struct FCustomAxisKeyData {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTslInputKey> Keys; // 0x10(0x10)
};

// ScriptStruct TslGame.CustomActionKeyData
// Size: 0x18 (Inherited: 0x00)
struct FCustomActionKeyData {
	struct FName ActionName; // 0x00(0x08)
	struct TArray<struct FTslInputKey> Keys; // 0x08(0x10)
};

// ScriptStruct TslGame.TslOutGameCloudOptionData
// Size: 0x168 (Inherited: 0x00)
struct FTslOutGameCloudOptionData {
	bool bIsDirty; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString CultureName; // 0x08(0x10)
	bool bMuteMaster; // 0x18(0x01)
	bool bMuteEffect; // 0x19(0x01)
	bool bMuteUI; // 0x1a(0x01)
	bool bMuteBGM; // 0x1b(0x01)
	bool bHRTF; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MasterVolume; // 0x20(0x04)
	float EffectVolume; // 0x24(0x04)
	float EmoteVolume; // 0x28(0x04)
	float UIVolume; // 0x2c(0x04)
	float BGMVolume; // 0x30(0x04)
	bool bVoiceInputMute; // 0x34(0x01)
	bool bVoiceOutputMute; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	int32 VoiceInputVolume; // 0x38(0x04)
	int32 VoiceOutputVolume; // 0x3c(0x04)
	bool bPushToTalk; // 0x40(0x01)
	bool bToggleVoiceChat; // 0x41(0x01)
	bool bGlobalVoice; // 0x42(0x01)
	bool bTeamVoice; // 0x43(0x01)
	bool bInvMouse; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float VertMult; // 0x48(0x04)
	bool bScopeUniv; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TMap<struct FName, float> Sensitivities; // 0x50(0x50)
	struct TMap<enum class EInputModeSettingActions, enum class ETslInputModes> InputModes; // 0xa0(0x50)
	struct TArray<struct FCustomActionKeyData> ActionKeys; // 0xf0(0x10)
	struct TArray<struct FCustomAxisKeyData> AxisKeys; // 0x100(0x10)
	enum class EColorBlindType ColorBlindType; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FString CrosshairColorStr; // 0x118(0x10)
	struct FColor CustomCrosshairColor; // 0x128(0x04)
	enum class EUiShowType FppWeaponIconShowType; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	int32 WorldMapZoomLv; // 0x130(0x04)
	enum class EMinimapColorType MinimapColorType; // 0x134(0x01)
	bool bMinimapDynZoom; // 0x135(0x01)
	bool bIconKillfeed; // 0x136(0x01)
	char pad_137[0x1]; // 0x137(0x01)
	int32 KillfeedListSize; // 0x138(0x04)
	bool bHideKillfeedName; // 0x13c(0x01)
	bool bDisplayClanMessage; // 0x13d(0x01)
	bool bHighlightInteraction; // 0x13e(0x01)
	bool bShowCompassShade; // 0x13f(0x01)
	bool bNetStat; // 0x140(0x01)
	bool bOnScrKeyGuide; // 0x141(0x01)
	bool bShowHead; // 0x142(0x01)
	bool bShowTorsoArmor; // 0x143(0x01)
	bool bShowBelt; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	int32 InstantVolumeReducerIntensity; // 0x148(0x04)
	bool bFreeLookInterp; // 0x14c(0x01)
	enum class ETppAimCameraPosition TppAimCam; // 0x14d(0x01)
	bool bAutoReload; // 0x14e(0x01)
	enum class EFiringMode HGsMode; // 0x14f(0x01)
	enum class EFiringMode SMGsMode; // 0x150(0x01)
	enum class EFiringMode ARsMode; // 0x151(0x01)
	enum class EFiringMode DMRsMode; // 0x152(0x01)
	enum class EFiringMode ShotgunsMode; // 0x153(0x01)
	enum class EFiringMode SecondarySMGsMode; // 0x154(0x01)
	enum class EFiringMode SecondaryARsMode; // 0x155(0x01)
	bool bAutoEquipAttachByInteract; // 0x156(0x01)
	bool bAutoReplaceAttachment; // 0x157(0x01)
	bool bAutoEquipAttachFromInv; // 0x158(0x01)
	bool bReplay; // 0x159(0x01)
	bool bKillCam; // 0x15a(0x01)
	bool bRecommendBullet; // 0x15b(0x01)
	bool bRecommendEquipment; // 0x15c(0x01)
	bool bRecommendAttachment; // 0x15d(0x01)
	bool bPreventVehicleFall; // 0x15e(0x01)
	bool ShowFlightTrail; // 0x15f(0x01)
	bool bVehicleSkinAutoApply; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
};

// ScriptStruct TslGame.*a198969ad9
// Size: 0x528 (Inherited: 0x268)
struct F*a198969ad9 : F*eee16334b9 {
	struct U*5c560bba40* WeaponAttachmentData; // 0x268(0x08)
	struct FWeaponAttachmentData AttachmentData; // 0x270(0x250)
	struct UStaticMesh* AttachmentMeshAsset; // 0x4c0(0x20)
	struct FName AttachmentMeshName; // 0x4e0(0x08)
	struct TArray<struct F*cd4106f23d> AttachmentWeaponTagData; // 0x4e8(0x10)
	struct UClass* AttachmentTemplate; // 0x4f8(0x08)
	bool EquipOnPickUp; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct UAkAudioEvent* *35938c9f98; // 0x508(0x20)
};

// ScriptStruct TslGame.*8b8b538cc8
// Size: 0x60 (Inherited: 0x08)
struct F*8b8b538cc8 : FTableRowBase {
	int32 Priority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UClass*> Conditions; // 0x10(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x20(0x10)
	struct TArray<struct F*60de548009> *344ced0dc7; // 0x30(0x10)
	struct TArray<struct FName> KeyHintInfoRowNames; // 0x40(0x10)
	struct TArray<struct F*f503912892> *b1eb998ddf; // 0x50(0x10)
};

// ScriptStruct TslGame.*f503912892
// Size: 0xb0 (Inherited: 0x08)
struct F*f503912892 : FTableRowBase {
	bool ShowWhenUnassigned; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*0273bd0eae> ActionsAndAxes; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	struct FText InputModeText; // 0x38(0x18)
	struct FSlateColor DisplayNameColor; // 0x50(0x28)
	bool *88f8eb8d46; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct UClass*> AdditionalConditions; // 0x80(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x90(0x10)
	struct TArray<struct F*60de548009> *344ced0dc7; // 0xa0(0x10)
};

// ScriptStruct TslGame.*60de548009
// Size: 0x58 (Inherited: 0x08)
struct F*60de548009 : FTableRowBase {
	enum class ETableCheckerHideOption *04762aff48; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *ae356d2e7f; // 0x10(0x08)
	struct TArray<struct FString> *a453dc79b4; // 0x18(0x10)
	struct TArray<struct FString> *24d5f11fa0; // 0x28(0x10)
	struct TArray<struct FString> *42ec0cb8e2; // 0x38(0x10)
	struct TArray<struct FString> *6dcdab5f7b; // 0x48(0x10)
};

// ScriptStruct TslGame.TslPersistantData
// Size: 0x300 (Inherited: 0x00)
struct FTslPersistantData {
	struct FCustomInputSettings CustomInputSettings; // 0x00(0xd8)
	bool bUseForceFeedback; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float ForceFeedbackMultiplier; // 0xdc(0x04)
	float FpsCameraFov; // 0xe0(0x04)
	float Gamma; // 0xe4(0x04)
	bool bIsMasterSoundMute; // 0xe8(0x01)
	bool bIsEffectSoundMute; // 0xe9(0x01)
	bool bIsUISoundMute; // 0xea(0x01)
	bool bIsRenewalWeaponSoundEnabled; // 0xeb(0x01)
	bool bIsBGMSoundMute; // 0xec(0x01)
	bool bIsEnabledHrtfRemoteWeaponSound; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
	struct FString CultureName; // 0xf0(0x10)
	bool bIconKillfeedEnabled; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32 ColorBlindType; // 0x104(0x04)
	struct FString CrosshairColorString; // 0x108(0x10)
	struct FColor CustomCrosshairColor; // 0x118(0x04)
	bool bUseKeyHint; // 0x11c(0x01)
	enum class EKeyHintGradeSettingValue EKeyhintGrade; // 0x11d(0x01)
	bool bShowNetworkInfo; // 0x11e(0x01)
	enum class ETppAimCameraPosition TppAimCamPosRecoveryType; // 0x11f(0x01)
	float ForwardRunningSensitivity; // 0x120(0x04)
	float MasterSoundVolume; // 0x124(0x04)
	float EffectSoundVolume; // 0x128(0x04)
	float EmoteSoundVolume; // 0x12c(0x04)
	float UISoundVolume; // 0x130(0x04)
	float BGMSoundVolume; // 0x134(0x04)
	float PlaygroundBGMSoundVolume; // 0x138(0x04)
	float PlaygroundWebSoundVolume; // 0x13c(0x04)
	struct FString MusicTitle; // 0x140(0x10)
	struct FString MusicTitleKeyOfLasPlayedSeason; // 0x150(0x10)
	bool bUseCustomReticleType; // 0x160(0x01)
	enum class EFiringMode HGsFiringMode; // 0x161(0x01)
	enum class EFiringMode SMGsFiringMode; // 0x162(0x01)
	enum class EFiringMode ARsFiringMode; // 0x163(0x01)
	enum class EFiringMode DMRsFiringMode; // 0x164(0x01)
	enum class EFiringMode ShotgunsFiringMode; // 0x165(0x01)
	enum class EFiringMode SecondarySMGsFiringMode; // 0x166(0x01)
	enum class EFiringMode SecondaryARsFiringMode; // 0x167(0x01)
	bool bUseRes4K; // 0x168(0x01)
	bool bUseTAA; // 0x169(0x01)
	bool bAutoReloadOnOutOfAmmoFire; // 0x16a(0x01)
	bool bShowCompassShade; // 0x16b(0x01)
	int32 GamepadPresets; // 0x16c(0x04)
	bool AutoEquipAttachment; // 0x170(0x01)
	enum class EAutoEquipAttachmentForScopeMode AutoEquipAttachmentForScope; // 0x171(0x01)
	bool AutoReplaceAttachment; // 0x172(0x01)
	bool bEnableUniversalGamma; // 0x173(0x01)
	char pad_174[0x4]; // 0x174(0x04)
	struct TMap<struct FString, float> GammasForMap; // 0x178(0x50)
	bool bAutoWeaponSkinReplacement; // 0x1c8(0x01)
	bool bAutoVehicleSkinReplacement; // 0x1c9(0x01)
	bool bHideNicknameOnKillfeed; // 0x1ca(0x01)
	bool bDisplayClanMessage; // 0x1cb(0x01)
	bool bEnableRadioMessage; // 0x1cc(0x01)
	bool bEnableCrossNetworkPlay; // 0x1cd(0x01)
	enum class EContinuousHealItem ContinuousType; // 0x1ce(0x01)
	enum class ERadioMessagePresets RadioMessagePreset; // 0x1cf(0x01)
	bool bEnableRadioMessageQuickPing; // 0x1d0(0x01)
	bool bUseKillCam; // 0x1d1(0x01)
	bool bUseActionQueuing; // 0x1d2(0x01)
	char pad_1D3[0x1]; // 0x1d3(0x01)
	int32 InstantVolumeReducerIntensity; // 0x1d4(0x04)
	float HDRGamma; // 0x1d8(0x04)
	enum class EUiShowType FppWeaponIconShowType; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	int32 WorldMapZoomSpeedLevel; // 0x1e0(0x04)
	enum class EUiShowType TpsWeaponIconShowType; // 0x1e4(0x01)
	bool InputDeviceType; // 0x1e5(0x01)
	enum class ETslInputModes InputModeCrouch; // 0x1e6(0x01)
	enum class ETslInputModes InputModeProne; // 0x1e7(0x01)
	enum class ETslInputModes InputModeWalk; // 0x1e8(0x01)
	enum class ETslInputModes bToggleSprint; // 0x1e9(0x01)
	enum class ETslInputModes InputModeHoldRotation; // 0x1ea(0x01)
	enum class ETslInputModes InputModeHoldBreath; // 0x1eb(0x01)
	enum class ETslInputModes InputModeHoldAngled; // 0x1ec(0x01)
	enum class ETslInputModes InputModePeek; // 0x1ed(0x01)
	enum class ETslInputModes InputModeMap; // 0x1ee(0x01)
	enum class ETslInputModes InputModeADS; // 0x1ef(0x01)
	enum class ETslInputModes InputModeAim; // 0x1f0(0x01)
	bool bUseNewDropItemEffects; // 0x1f1(0x01)
	bool bShowTracerDisplay; // 0x1f2(0x01)
	bool bUseTracerTeamColor; // 0x1f3(0x01)
	bool bShowHead; // 0x1f4(0x01)
	bool bShowTorsoArmor; // 0x1f5(0x01)
	bool bShowBelt; // 0x1f6(0x01)
	bool bEnablePadInventoryTooltip; // 0x1f7(0x01)
	float ObserverMovingSpeed; // 0x1f8(0x04)
	bool ObserverHeaderGunUseage; // 0x1fc(0x01)
	bool ObserverTagUseage; // 0x1fd(0x01)
	bool ObserverXRayUseage; // 0x1fe(0x01)
	bool ObserverDamageIndicatorUsage; // 0x1ff(0x01)
	bool ObserverSmokeTimerUsage; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct TMap<struct FName, int32> DefaultReticleMap; // 0x208(0x50)
	struct TArray<struct FTslGamepadActionKeyData> GamepadCustomActionKeys; // 0x258(0x10)
	struct TArray<struct FTslGamepadAxisKeyData> GamepadCustomAxisKeys; // 0x268(0x10)
	enum class EGamepadPresets BasePresetForCustomKeyBinding; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct TMap<struct FName, float> DefaultReticleBrightnessMap; // 0x280(0x50)
	struct FString BuildVersion; // 0x2d0(0x10)
	float GamepadInventoryNavigationSensitivity; // 0x2e0(0x04)
	float SafeZonePercentage; // 0x2e4(0x04)
	bool bUseBulletRecommandOption; // 0x2e8(0x01)
	bool bUseEquipmentRecommandOption; // 0x2e9(0x01)
	bool bUseAttachmentRecommendOption; // 0x2ea(0x01)
	bool bIsVoiceInputMute; // 0x2eb(0x01)
	bool bEnableVehicleFallPrevention; // 0x2ec(0x01)
	bool bEnableVehicleSkinAutoApply; // 0x2ed(0x01)
	bool bIsVoiceOutputMute; // 0x2ee(0x01)
	char pad_2EF[0x1]; // 0x2ef(0x01)
	int32 VoiceInputVolume; // 0x2f0(0x04)
	int32 VoiceOutputVolume; // 0x2f4(0x04)
	bool ShowFlightTrail; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
};

// ScriptStruct TslGame.*201317a168
// Size: 0x10 (Inherited: 0x00)
struct F*201317a168 {
	struct TArray<struct FOutgameUserData> OutGameUserDateSet; // 0x00(0x10)
};

// ScriptStruct TslGame.OutgameUserData
// Size: 0x20 (Inherited: 0x00)
struct FOutgameUserData {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*7f8df09bd4
// Size: 0x20 (Inherited: 0x00)
struct F*7f8df09bd4 {
	float ReplayEventTime; // 0x00(0x04)
	enum class ETslWeatherAction Action; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 WeatherIndex; // 0x08(0x04)
	int32 OldWeatherIndex; // 0x0c(0x04)
	float InitElapsedTime; // 0x10(0x04)
	float SaturateTime; // 0x14(0x04)
	float BlendInTime; // 0x18(0x04)
	float BlendOutTime; // 0x1c(0x04)
};

// ScriptStruct TslGame.*c984dd798b
// Size: 0x88 (Inherited: 0x00)
struct F*c984dd798b {
	struct FString MatchingState; // 0x00(0x10)
	int32 MatchingElasedSeconds; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Address; // 0x18(0x10)
	struct FWuUdpEncryptionKey Key; // 0x28(0x30)
	struct FString InSessionId; // 0x58(0x10)
	struct FString InSessionZkToken; // 0x68(0x10)
	struct FString InModeName; // 0x78(0x10)
};

// ScriptStruct TslGame.*cf369b2d1b
// Size: 0x20 (Inherited: 0x00)
struct F*cf369b2d1b {
	struct FString URL; // 0x00(0x10)
	struct FString Packet; // 0x10(0x10)
};

// ScriptStruct TslGame.*34005da876
// Size: 0x38 (Inherited: 0x00)
struct F*34005da876 {
	struct FString FunctionName; // 0x00(0x10)
	bool isSuccessful; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString failResult; // 0x18(0x10)
	struct FString additionalData; // 0x28(0x10)
};

// ScriptStruct TslGame.ReplayPlayData
// Size: 0x38 (Inherited: 0x00)
struct FReplayPlayData {
	struct FString MatchId; // 0x00(0x10)
	struct FString AccountId; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	float PlayTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.ItemTableRowCastableSelectBox
// Size: 0x3d8 (Inherited: 0x3b8)
struct FItemTableRowCastableSelectBox : FItemTableRowCastable {
	struct TArray<struct FName> SelectableItems; // 0x3b8(0x10)
	int32 SelectCount; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UClass* *cba1079e64; // 0x3d0(0x08)
};

// ScriptStruct TslGame.*1a1dbf149d
// Size: 0x0c (Inherited: 0x00)
struct F*1a1dbf149d {
	float BeforeDurationSec; // 0x00(0x04)
	float AfterDurationSec; // 0x04(0x04)
	float LinkWaitDurationSec; // 0x08(0x04)
};

// ScriptStruct TslGame.*803d1273a2
// Size: 0x138 (Inherited: 0x00)
struct F*803d1273a2 {
	enum class ECharacterInteractBehaviorType CharacterInteractBehaviorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxInteractableDistance; // 0x04(0x04)
	struct F*90e797cdc2 AdditionalCastConfig; // 0x08(0x130)
};

// ScriptStruct TslGame.ItemTableRowCraft
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowCraft : F*eee16334b9 {
};

// ScriptStruct TslGame.ItemTableRowBluechip
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowBluechip : F*eee16334b9 {
};

// ScriptStruct TslGame.ItemTableRowCastableEquipmentRepairKit
// Size: 0x3c0 (Inherited: 0x3b8)
struct FItemTableRowCastableEquipmentRepairKit : FItemTableRowCastable {
	enum class EEquipSlotID EquipSlot; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	float RepairAmount; // 0x3bc(0x04)
};

// ScriptStruct TslGame.ItemTableRowCastableHealOverTime
// Size: 0x3d8 (Inherited: 0x3b8)
struct FItemTableRowCastableHealOverTime : FItemTableRowCastable {
	struct UClass* *e3af7e6bc9; // 0x3b8(0x20)
};

// ScriptStruct TslGame.ItemTableRowCastableHealInstant
// Size: 0x3c0 (Inherited: 0x3b8)
struct FItemTableRowCastableHealInstant : FItemTableRowCastable {
	float *7d1211222a; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
};

// ScriptStruct TslGame.ItemTableRowCastableRandomBox
// Size: 0x3c8 (Inherited: 0x3b8)
struct FItemTableRowCastableRandomBox : FItemTableRowCastable {
	struct TArray<struct F*7d41f998b1> RandomBoxDatas; // 0x3b8(0x10)
};

// ScriptStruct TslGame.*7d41f998b1
// Size: 0x108 (Inherited: 0x00)
struct F*7d41f998b1 {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*eefad94ddc SpawnKitInfo; // 0x08(0x100)
};

// ScriptStruct TslGame.ItemTableRowCastableVehicleRepairKit
// Size: 0x3c0 (Inherited: 0x3b8)
struct FItemTableRowCastableVehicleRepairKit : FItemTableRowCastable {
	float RepairAmount; // 0x3b8(0x04)
	float VehicleSpeedThreshold; // 0x3bc(0x04)
};

// ScriptStruct TslGame.*060064b6e4
// Size: 0x440 (Inherited: 0x410)
struct F*060064b6e4 : F*1ea7f7fe0f {
	struct UClass* WeaponType; // 0x410(0x20)
	struct FName WeaponTag; // 0x430(0x08)
	enum class EWeaponDisplayTypes WeaponDisplayType; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
};

// ScriptStruct TslGame.*c54ef6dbfd
// Size: 0x450 (Inherited: 0x440)
struct F*c54ef6dbfd : F*060064b6e4 {
	int32 AmmoCount; // 0x440(0x04)
	int32 ForcedPrimarySlotIndex; // 0x444(0x04)
	bool bDisablePrimaryWeaponSwap; // 0x448(0x01)
	bool bDisableDropAndDetachAttachments; // 0x449(0x01)
	bool bHasNumberOfUses; // 0x44a(0x01)
	char pad_44B[0x1]; // 0x44b(0x01)
	int32 NumberOfUses; // 0x44c(0x04)
};

// ScriptStruct TslGame.*69a6b66dc4
// Size: 0x458 (Inherited: 0x450)
struct F*69a6b66dc4 : F*c54ef6dbfd {
	int32 DebuffChargesCount; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
};

// ScriptStruct TslGame.*2496e4e5c2
// Size: 0x510 (Inherited: 0x410)
struct F*2496e4e5c2 : F*1ea7f7fe0f {
	int32 ItemLevel; // 0x410(0x04)
	char pad_414[0xc]; // 0x414(0x0c)
	struct FTransform SlotOffset_Primary; // 0x420(0x30)
	struct FTransform SlotOffset_Secondary; // 0x450(0x30)
	struct FTransform SlotOffset_SideArm; // 0x480(0x30)
	struct FTransform SlotOffset_Melee; // 0x4b0(0x30)
	struct FTransform SlotOffset_Thrown; // 0x4e0(0x30)
};

// ScriptStruct TslGame.*03a7ac9692
// Size: 0x20 (Inherited: 0x00)
struct F*03a7ac9692 {
	bool *9af9e5ff17; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *197035db6e; // 0x08(0x08)
	bool *bbd9c2b1e6; // 0x10(0x01)
	bool bOverrideOverlapSolveMethod; // 0x11(0x01)
	enum class EBuffOverlapSolveMethod *c485eabde2; // 0x12(0x01)
	bool bOverrideBuffDuration; // 0x13(0x01)
	float *bd1007407f; // 0x14(0x04)
	bool bOverrideInfinite; // 0x18(0x01)
	bool *039e946e33; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.ItemTableRowEvent
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowEvent : F*eee16334b9 {
};

// ScriptStruct TslGame.*58105f8d4c
// Size: 0x30 (Inherited: 0x00)
struct F*58105f8d4c {
	int32 BundleId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString BundleName; // 0x08(0x10)
	enum class ELobbyItemBundleType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*cc6b4606c5> *419e783ff0; // 0x20(0x10)
};

// ScriptStruct TslGame.*cc6b4606c5
// Size: 0x28 (Inherited: 0x00)
struct F*cc6b4606c5 {
	struct UClass* *6318c06bca; // 0x00(0x20)
	int32 BundleId; // 0x20(0x04)
	int32 Quantity; // 0x24(0x04)
};

// ScriptStruct TslGame.ItemTableRowUsedByAction
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowUsedByAction : F*eee16334b9 {
};

// ScriptStruct TslGame.*eda28d0a24
// Size: 0x10 (Inherited: 0x00)
struct F*eda28d0a24 {
	struct TArray<struct UItemSpotComponent*> *bf2584e8fd; // 0x00(0x10)
};

// ScriptStruct TslGame.*71bf3f1ece
// Size: 0x50 (Inherited: 0x00)
struct F*71bf3f1ece {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*5738a6521b
// Size: 0x20 (Inherited: 0x08)
struct F*5738a6521b : FTableRowBase {
	struct FName OriginItemID; // 0x08(0x08)
	struct FName SwitchItemID; // 0x10(0x08)
	int32 SwitchItemCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*84c571e048
// Size: 0x10 (Inherited: 0x00)
struct F*84c571e048 {
	struct FName Name; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b8dd00342b
// Size: 0x08 (Inherited: 0x00)
struct F*b8dd00342b {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*b0c4adf72e
// Size: 0x20 (Inherited: 0x08)
struct F*b0c4adf72e : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	float CategoryFilterWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*ece89bcab5
// Size: 0x38 (Inherited: 0x08)
struct F*ece89bcab5 : FTableRowBase {
	enum class EItemSpotGroupType SpotGroupType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SpotGroupPercent; // 0x0c(0x04)
	enum class EItemSpotType SpotType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float SpotPercentMin; // 0x14(0x04)
	float SpotPercentMax; // 0x18(0x04)
	int32 ItemsPerSpotMin; // 0x1c(0x04)
	int32 ItemsPerSpotMax; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName ValueFilter; // 0x28(0x08)
	float ValueFilterWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*115d56cd1a
// Size: 0x5c8 (Inherited: 0x00)
struct F*115d56cd1a {
	enum class EItemSpotGroupType SpotGroupType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotGroupPercent; // 0x04(0x04)
	struct TArray<struct F*98ad8667e7> SpotTypeProperties; // 0x08(0x10)
	char pad_18[0x5b0]; // 0x18(0x5b0)
};

// ScriptStruct TslGame.*98ad8667e7
// Size: 0x38 (Inherited: 0x00)
struct F*98ad8667e7 {
	enum class EItemSpotType SpotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotPercentMin; // 0x04(0x04)
	float SpotPercentMax; // 0x08(0x04)
	int32 ItemsPerSpotMin; // 0x0c(0x04)
	int32 ItemsPerSpotMax; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*84c571e048> WeightsPerValue; // 0x18(0x10)
	struct TArray<struct F*84c571e048> WeightsPerCategory; // 0x28(0x10)
};

// ScriptStruct TslGame.*c89a67e3c6
// Size: 0xc0 (Inherited: 0x08)
struct F*c89a67e3c6 : FTableRowBase {
	struct FString ItemSpawnSubtitleKey; // 0x08(0x10)
	struct UDataTable* SpotGroupDataTable; // 0x18(0x20)
	struct UDataTable* ItemFilterDataTable; // 0x38(0x20)
	struct UDataTable* ItemSpawnDataTable; // 0x58(0x20)
	struct UDataTable* ItemSpawnTogetherDataTable; // 0x78(0x20)
	struct UDataTable* ItemTypeOverrideDataTable; // 0x98(0x20)
	enum class EItemSpawnType ItemSpawnType; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float ItemSpawnRate; // 0xbc(0x04)
};

// ScriptStruct TslGame.*9d09d88494
// Size: 0x10 (Inherited: 0x00)
struct F*9d09d88494 {
	struct TArray<struct F*115d56cd1a> RawSpotGroupProperties; // 0x00(0x10)
};

// ScriptStruct TslGame.*6a5ed85d86
// Size: 0x18 (Inherited: 0x00)
struct F*6a5ed85d86 {
	struct FName *56709ca8b5; // 0x00(0x08)
	int32 FirstChildIndex; // 0x08(0x04)
	int32 *ae6bf09d02; // 0x0c(0x04)
	enum class EItemSpotGroupType *da1d3240f9; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*bcef9a9e0b
// Size: 0x10 (Inherited: 0x00)
struct F*bcef9a9e0b {
	struct FVector Location; // 0x00(0x0c)
	int32 *c78601d565; // 0x0c(0x04)
};

// ScriptStruct TslGame.*14d24cb310
// Size: 0x20 (Inherited: 0x00)
struct F*14d24cb310 {
	struct FVector *c1a4a78fc6; // 0x00(0x0c)
	struct F*be80d72f85 *b951f4b7a9; // 0x0c(0x0c)
	uint32 HouseID; // 0x18(0x04)
	enum class EItemSpotType *78e12609f1; // 0x1c(0x01)
	bool *9ce43a00d9; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct TslGame.*89cacb61e5
// Size: 0x20 (Inherited: 0x00)
struct F*89cacb61e5 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FName *56709ca8b5; // 0x18(0x08)
};

// ScriptStruct TslGame.*26295857b0
// Size: 0x28 (Inherited: 0x00)
struct F*26295857b0 {
	struct AActor* *4f25c9cca0; // 0x00(0x08)
	float *a96f367d3a; // 0x08(0x04)
	float *894a8c9774; // 0x0c(0x04)
	float *dd6691b65e; // 0x10(0x04)
	float *e0f879da45; // 0x14(0x04)
	struct FVector *16b57f45ec; // 0x18(0x0c)
	float *cec04df428; // 0x24(0x04)
};

// ScriptStruct TslGame.*f8c5d524ad
// Size: 0x18 (Inherited: 0x00)
struct F*f8c5d524ad {
	float *ef36ae6614; // 0x00(0x04)
	float *b364653e18; // 0x04(0x04)
	float *9abc02427c; // 0x08(0x04)
	float *22c9cf221a; // 0x0c(0x04)
	float *5482d103ec; // 0x10(0x04)
	float *97ae29bd8e; // 0x14(0x04)
};

// ScriptStruct TslGame.*c943186fea
// Size: 0xe8 (Inherited: 0x00)
struct F*c943186fea {
	bool bIgnoreBots; // 0x00(0x01)
	bool bIgnorePillar; // 0x01(0x01)
	bool bIgnoreDBNO; // 0x02(0x01)
	bool bArmed; // 0x03(0x01)
	bool PatrolSafeZoneEdgePhase; // 0x04(0x01)
	bool bIgnorePriorityTargetsAfterPatrolSafeZoneEdgePhase; // 0x05(0x01)
	enum class ECollisionChannel TruckLineOfSightTraceChannel; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float TruckSightRadius; // 0x08(0x04)
	float TruckFieldOfViewHalfAngle; // 0x0c(0x04)
	float TruckHearingRadius; // 0x10(0x04)
	float TruckHearingLosRadius; // 0x14(0x04)
	float TruckSensingInterval; // 0x18(0x04)
	float TruckStopNearTargetMinDistance; // 0x1c(0x04)
	float TruckStopNearTargetMaxDistance; // 0x20(0x04)
	enum class ECollisionChannel *1b1f9c1c0a; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float MainTurretBlindRadius; // 0x28(0x04)
	float MainTurretSightRadius; // 0x2c(0x04)
	float MainTurretFieldOfView; // 0x30(0x04)
	float MainTurretFiringRange; // 0x34(0x04)
	float MainTurretFiringAngle; // 0x38(0x04)
	float MainTurretSightCheckInterval; // 0x3c(0x04)
	float MainTurretMaxWeaponSpread; // 0x40(0x04)
	float MainTurretMinWeaponSpread; // 0x44(0x04)
	float IncendiaryTriggerRadius; // 0x48(0x04)
	float IncendiaryTargetsCheckInterval; // 0x4c(0x04)
	bool bIncendiariesGenerateSightThreat; // 0x50(0x01)
	bool bIncendiaryPriortityTargetOnlyFireIfInCover; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float IncendiaryPriortityTargetInCoverDelay; // 0x54(0x04)
	float IncendiaryPriorityTargetRange; // 0x58(0x04)
	float IncendiaryPriorityTargetRearCollisionCheckDistance; // 0x5c(0x04)
	float IncendiaryTurretsFiringRange; // 0x60(0x04)
	float IncendiaryTurretsHorizontalFiringAngle; // 0x64(0x04)
	float IncendiaryTurretsVerticalFiringAngle; // 0x68(0x04)
	struct F*f8c5d524ad DamageThreatConfig; // 0x6c(0x18)
	struct F*f8c5d524ad SightThreatConfig; // 0x84(0x18)
	struct F*f8c5d524ad NoiseThreatConfig; // 0x9c(0x18)
	float TimeToKill; // 0xb4(0x04)
	float TimeToKillMinimumTargetDistance; // 0xb8(0x04)
	float TimeToKillMaximumTargetDistance; // 0xbc(0x04)
	float MinimumTargetDistanceTimeToKillGainMultiplier; // 0xc0(0x04)
	float MaximumTargetDistanceTimeToGainKillMultiplier; // 0xc4(0x04)
	float DistanceTimeToKillMultiplierWeight; // 0xc8(0x04)
	float PotentialTargetTimeToKillGainMultiplier; // 0xcc(0x04)
	float PotentialTargetTimeToKillMultiplierWeight; // 0xd0(0x04)
	float ActiveTargetTimeToKillGainMultiplier; // 0xd4(0x04)
	float ActiveTargetTimeToKillMultiplierWeight; // 0xd8(0x04)
	float TimeToKillUpdateInterval; // 0xdc(0x04)
	float TurretCollisionCheckInterval; // 0xe0(0x04)
	float TurretCollisionDisabledSpeed; // 0xe4(0x04)
};

// ScriptStruct TslGame.*50cde103cb
// Size: 0x28 (Inherited: 0x08)
struct F*50cde103cb : FTableRowBase {
	enum class ELocationType LocationType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<bool> VisibilityByZoom; // 0x10(0x10)
	float DesiredAlpha; // 0x20(0x04)
	int32 DesiredFontSize; // 0x24(0x04)
};

// ScriptStruct TslGame.*58cb863fb0
// Size: 0x0c (Inherited: 0x00)
struct F*58cb863fb0 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*19838dd2d8
// Size: 0x28 (Inherited: 0x00)
struct F*19838dd2d8 {
	enum class ELocationType LocationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText LocationName; // 0x08(0x18)
	struct FVector2D Position_MC; // 0x20(0x08)
};

// ScriptStruct TslGame.*ddbe54984a
// Size: 0x18 (Inherited: 0x00)
struct F*ddbe54984a {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*d2aacae7a4
// Size: 0x10 (Inherited: 0x08)
struct F*d2aacae7a4 : FTableRowBase {
	struct UClass* LobbySceneTravelClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*4f29bd801c
// Size: 0x180 (Inherited: 0xe0)
struct F*4f29bd801c : F*d68ba09f7e {
	struct TMap<enum class ELobbyCustomizingSlotType, struct F*5a28a8a50b> CustomizeLobbyModeScenePivots; // 0xe0(0x50)
	struct TMap<struct FString, struct FVector> AdditionalItemLocationOffset; // 0x130(0x50)
};

// ScriptStruct TslGame.*d68ba09f7e
// Size: 0xe0 (Inherited: 0xa0)
struct F*d68ba09f7e : F*ff3cd89ea6 {
	struct TArray<struct FName> LobbyCharacterPivotTags; // 0xa0(0x10)
	struct TArray<struct F*2d647b32e0> LobbyEquipWeaponDatas; // 0xb0(0x10)
	char pad_C0[0x20]; // 0xc0(0x20)
};

// ScriptStruct TslGame.*ff3cd89ea6
// Size: 0xa0 (Inherited: 0x08)
struct F*ff3cd89ea6 : FTableRowBase {
	struct FName SceneCameraTag; // 0x08(0x08)
	struct FName SceneLevelName; // 0x10(0x08)
	enum class ELobbyCharacterAnimationType LobbyCharacterAnimationType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TMap<enum class ELobbyCharacterCameraType, struct FName> LobbyCharacterCameras; // 0x20(0x50)
	bool bHideMainLobbyCharacter; // 0x70(0x01)
	bool bHideOtherLobbyCharacter; // 0x71(0x01)
	bool bHideWeaponMasteryObjects; // 0x72(0x01)
	bool bHideSurvivalMasteryObjects; // 0x73(0x01)
	bool bUsingProfileCharacter; // 0x74(0x01)
	enum class *13431f925c LobbyBlurChangingStates; // 0x75(0x01)
	bool bHideDefaultParticle; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
	struct TArray<struct FName> ShowParticleTags; // 0x78(0x10)
	bool bCachePreviousSceneName; // 0x88(0x01)
	bool bUseOutgameVisibilityValue; // 0x89(0x01)
	bool bCanTargetObjectRotation; // 0x8a(0x01)
	bool bNeedToSpawnOnGround; // 0x8b(0x01)
	bool bShouldSuppressNametag; // 0x8c(0x01)
	bool bApplyPivotRotation; // 0x8d(0x01)
	bool bAsyncLoadingSceneLevel; // 0x8e(0x01)
	bool bAllowToggleZoomCamera; // 0x8f(0x01)
	struct FName ToggleZoomInCameraTag; // 0x90(0x08)
	struct FName ToggleZoomOutCameraTag; // 0x98(0x08)
};

// ScriptStruct TslGame.*2d647b32e0
// Size: 0x18 (Inherited: 0x00)
struct F*2d647b32e0 {
	struct FName WeaponId; // 0x00(0x08)
	struct TArray<struct FName> WeaponAttachmentIDList; // 0x08(0x10)
};

// ScriptStruct TslGame.*5a28a8a50b
// Size: 0x10 (Inherited: 0x00)
struct F*5a28a8a50b {
	struct TArray<struct F*fe307d9697> CusLobbyScenePivotsDesc; // 0x00(0x10)
};

// ScriptStruct TslGame.*fe307d9697
// Size: 0x10 (Inherited: 0x00)
struct F*fe307d9697 {
	struct FName CustomizeObjectPivotTag; // 0x00(0x08)
	struct AActor* *5d2622c4a9; // 0x08(0x08)
};

// ScriptStruct TslGame.*486fff1fd8
// Size: 0x190 (Inherited: 0xa0)
struct F*486fff1fd8 : F*ff3cd89ea6 {
	struct TMap<enum class EViewModeCategory, struct FName> ViewModePivots; // 0xa0(0x50)
	struct TArray<enum class EViewModeCategory> DisableScaleList; // 0xf0(0x10)
	struct TArray<enum class EViewModeCategory> DisableYAxisList; // 0x100(0x10)
	struct TArray<enum class EViewModeCategory> DisableRotationRollbackList; // 0x110(0x10)
	struct TArray<enum class EViewModeCategory> DisableZoomList; // 0x120(0x10)
	struct TMap<enum class EViewModeCategory, struct F*be2bd877e6> TargetObjectRatationRanges; // 0x130(0x50)
	struct FVector2D LoadingSpinnerOffset; // 0x180(0x08)
	bool bAllowZoom; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
};

// ScriptStruct TslGame.*be2bd877e6
// Size: 0x10 (Inherited: 0x00)
struct F*be2bd877e6 {
	struct FFloatInterval PitchRange; // 0x00(0x08)
	struct FFloatInterval RollRange; // 0x08(0x08)
};

// ScriptStruct TslGame.*23aa61695c
// Size: 0x60 (Inherited: 0x08)
struct F*23aa61695c : FTableRowBase {
	struct UAnimSequence* PlayerPose; // 0x08(0x08)
	struct FTransform SurvivalPageTransform; // 0x10(0x30)
	struct FString SurvivalPageScene; // 0x40(0x10)
	struct UClass* PoseAsset; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct TslGame.*73f4f8040c
// Size: 0x20 (Inherited: 0x00)
struct F*73f4f8040c {
	struct TArray<struct ATslArenaPlayerStart*> PlayerStart; // 0x00(0x10)
	struct ATslArenaPlayerStart* *1e25aa54d7; // 0x10(0x08)
	struct ATslArenaPlayerStart* *2e5d8aba20; // 0x18(0x08)
};

// ScriptStruct TslGame.*17ba9ac0ca
// Size: 0x20 (Inherited: 0x00)
struct F*17ba9ac0ca {
	struct TArray<struct FLinearColor> Vectors; // 0x00(0x10)
	struct TArray<struct UTexture*> Textures; // 0x10(0x10)
};

// ScriptStruct TslGame.*17ee0edabc
// Size: 0x18 (Inherited: 0x00)
struct F*17ee0edabc {
	struct FName Name; // 0x00(0x08)
	enum class EMaterialParameterType Type; // 0x08(0x01)
	bool *a1bd16f774; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 *16a3b0e286; // 0x0c(0x04)
	enum class EParameterLUTChannel *d6376a170f; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*c78c727a38
// Size: 0x70 (Inherited: 0x08)
struct F*c78c727a38 : FTableRowBase {
	int32 SeqID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString BlueZoneSubtitleKey; // 0x10(0x10)
	struct FString BlueZoneDescription; // 0x20(0x10)
	int32 PhaseNumber; // 0x30(0x04)
	int32 StartDelay; // 0x34(0x04)
	int32 WarningDuration; // 0x38(0x04)
	int32 ReleaseDuration; // 0x3c(0x04)
	float RadiusRate; // 0x40(0x04)
	float RandomRadiusRate; // 0x44(0x04)
	float BlueZoneDPS; // 0x48(0x04)
	float SpreadRatio; // 0x4c(0x04)
	float DamageMagnifierForDistance; // 0x50(0x04)
	float DamageMagnifier; // 0x54(0x04)
	int32 CircleAlgorithm; // 0x58(0x04)
	float LandRatio; // 0x5c(0x04)
	int32 FastPlayerCount; // 0x60(0x04)
	float FastReleaseDuration; // 0x64(0x04)
	float FastWarningDuration; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct TslGame.*1b7be8a249
// Size: 0x14 (Inherited: 0x00)
struct F*1b7be8a249 {
	bool *0816dc22a5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct UPrimitiveComponent* *7cf31d3153; // 0x04(0x08)
	uint16 *3cce66656c; // 0x0c(0x02)
	uint16 InstanceIndex; // 0x0e(0x02)
	bool *2391009621; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*a90c1d5352
// Size: 0x18 (Inherited: 0x00)
struct F*a90c1d5352 {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ATslCharacter* Instigator; // 0x10(0x08)
};

// ScriptStruct TslGame.*4c68a9e2f2
// Size: 0x10 (Inherited: 0x00)
struct F*4c68a9e2f2 {
	struct TArray<struct F*c18894ff40> TeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*c18894ff40
// Size: 0x38 (Inherited: 0x00)
struct F*c18894ff40 {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	struct FString TeamName; // 0x08(0x10)
	struct TArray<struct F*9d4705e66b> PlayersInfo; // 0x18(0x10)
	struct TArray<bool> RoundHistory; // 0x28(0x10)
};

// ScriptStruct TslGame.*9d4705e66b
// Size: 0x30 (Inherited: 0x14)
struct F*9d4705e66b : F*1f7e59b01a {
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
	enum class EOutGamePlatformProvider PlatformProvider; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*068a6f246f
// Size: 0x10 (Inherited: 0x00)
struct F*068a6f246f {
	struct TArray<struct F*7256ac1fd5> StaticTeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*7256ac1fd5
// Size: 0x28 (Inherited: 0x00)
struct F*7256ac1fd5 {
	int32 TeamId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TeamName; // 0x08(0x10)
	struct TArray<struct F*75177cde1a> StaticPlayersInfo; // 0x18(0x10)
};

// ScriptStruct TslGame.*75177cde1a
// Size: 0x18 (Inherited: 0x00)
struct F*75177cde1a {
	struct FString Name; // 0x00(0x10)
	int32 MemberIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*cdbe425df9
// Size: 0x3c (Inherited: 0x00)
struct F*cdbe425df9 {
	struct FVector LerpSafetyZonePosition; // 0x00(0x0c)
	float LerpSafetyZoneRadius; // 0x0c(0x04)
	struct FVector LerpBlueZonePosition; // 0x10(0x0c)
	float LerpBlueZoneRadius; // 0x1c(0x04)
	float *1cfbb3f657; // 0x20(0x04)
	float BlueZoneBeginRadius; // 0x24(0x04)
	struct FVector BlueZoneBeginPosition; // 0x28(0x0c)
	float ElapsedBlueZoneReleaseDuration; // 0x34(0x04)
	float ElapsedWarningDurationForClient; // 0x38(0x04)
};

// ScriptStruct TslGame.*4ea7377635
// Size: 0x18 (Inherited: 0x00)
struct F*4ea7377635 {
	int32 CurrentStage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*625bfb23fc> BlueZoneStatusDataArray; // 0x08(0x10)
};

// ScriptStruct TslGame.*625bfb23fc
// Size: 0x68 (Inherited: 0x00)
struct F*625bfb23fc {
	struct FVector SafetyZonePosition; // 0x00(0x0c)
	float SafetyZoneRadius; // 0x0c(0x04)
	struct FVector BlueZonePosition; // 0x10(0x0c)
	float BluezoneRadius; // 0x1c(0x04)
	struct FVector SafetyZoneBeginPosition; // 0x20(0x0c)
	float SafetyZoneBeginRadius; // 0x2c(0x04)
	struct FVector2D LastCirclePosition; // 0x30(0x08)
	bool bIsShrinking; // 0x38(0x01)
	bool bHasBlueZone; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32 *041622af76; // 0x3c(0x04)
	struct FVector SafetyZoneInitialPosition; // 0x40(0x0c)
	float SafetyZoneInitialRadius; // 0x4c(0x04)
	int32 *5153350bfa; // 0x50(0x04)
	float *233716def9; // 0x54(0x04)
	float *f6ec63d84e; // 0x58(0x04)
	float *94758d6a36; // 0x5c(0x04)
	float *4f7dc937dc; // 0x60(0x04)
	bool bIsBlueZoneRelease; // 0x64(0x01)
	bool bIsInBattle; // 0x65(0x01)
	bool bIsWorkingBlueZone; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
};

// ScriptStruct TslGame.*76152b4a90
// Size: 0x48 (Inherited: 0x00)
struct F*76152b4a90 {
	int32 *725dca4fe1; // 0x00(0x04)
	int32 *797afd3ded; // 0x04(0x04)
	struct TArray<int32> *d05cb3edce; // 0x08(0x10)
	int32 *7aec9a0604; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32> *c8a0cfa90b; // 0x20(0x10)
	int32 *67c1153ded; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<int32> *8ae81c98ad; // 0x38(0x10)
};

// ScriptStruct TslGame.*d671c9135c
// Size: 0x08 (Inherited: 0x00)
struct F*d671c9135c {
	float *6d70307dd1; // 0x00(0x04)
	bool *a271231819; // 0x04(0x01)
	bool *e8962566c1; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGame.*2baa2bb899
// Size: 0x10 (Inherited: 0x00)
struct F*2baa2bb899 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*493f4a22e8
// Size: 0x10 (Inherited: 0x00)
struct F*493f4a22e8 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*4ab47d903b
// Size: 0x10 (Inherited: 0x00)
struct F*4ab47d903b {
	struct TArray<struct F*16e4a2d8b2> *74834e45a8; // 0x00(0x10)
};

// ScriptStruct TslGame.*16e4a2d8b2
// Size: 0x1c (Inherited: 0x00)
struct F*16e4a2d8b2 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*a2d56368b5
// Size: 0x18 (Inherited: 0x08)
struct F*a2d56368b5 : FTableRowBase {
	struct TArray<struct F*19a2931a5e> Items; // 0x08(0x10)
};

// ScriptStruct TslGame.*19a2931a5e
// Size: 0x10 (Inherited: 0x00)
struct F*19a2931a5e {
	struct F*6fe09374d0 ItemClass; // 0x00(0x08)
	int32 Quantity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b2480105d9
// Size: 0x1c (Inherited: 0x00)
struct F*b2480105d9 {
	struct FVector *a408745fb6; // 0x00(0x0c)
	struct FVector *8ca987713a; // 0x0c(0x0c)
	float Speed; // 0x18(0x04)
};

// ScriptStruct TslGame.*fec3ca1a64
// Size: 0x10 (Inherited: 0x00)
struct F*fec3ca1a64 {
	struct FName *471e40f694; // 0x00(0x08)
	float *955f0ddfa4; // 0x08(0x04)
	bool *db2df3e466; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*04cc16a2cc
// Size: 0x90 (Inherited: 0x00)
struct F*04cc16a2cc {
	struct F*960d496e91 *960d496e91; // 0x00(0x88)
	float *1718bb4d20; // 0x88(0x04)
	int32 *11eb2f97ba; // 0x8c(0x04)
};

// ScriptStruct TslGame.*960d496e91
// Size: 0x88 (Inherited: 0x00)
struct F*960d496e91 {
	struct TArray<struct UAnimSequenceBase*> *14d678bce9; // 0x00(0x10)
	struct FAlphaBlend *37506de2a6; // 0x10(0x38)
	struct FAlphaBlend *8465486351; // 0x48(0x38)
	float PlayRate; // 0x80(0x04)
	enum class ECustomAnimSlotType *7c5896698f; // 0x84(0x01)
	bool *49ad0d7d4b; // 0x85(0x01)
	bool *ea2808d5a4; // 0x86(0x01)
	bool bLooping; // 0x87(0x01)
};

// ScriptStruct TslGame.*ff85cd0c56
// Size: 0x20 (Inherited: 0x00)
struct F*ff85cd0c56 {
	float *b7c2a4a75b; // 0x00(0x04)
	int32 *a5f74194e5; // 0x04(0x04)
	int32 *5bb4e6d8f9; // 0x08(0x04)
	int32 *ad1fd6760f; // 0x0c(0x04)
	int32 *165eef5421; // 0x10(0x04)
	int32 *1233b8a3ba; // 0x14(0x04)
	int32 *ce2797bb68; // 0x18(0x04)
	float *6e8726d307; // 0x1c(0x04)
};

// ScriptStruct TslGame.*b2903c7729
// Size: 0x18 (Inherited: 0x00)
struct F*b2903c7729 {
	int32 Score; // 0x00(0x04)
	bool bIsVisible; // 0x04(0x01)
	bool *502533c7d7; // 0x05(0x01)
	bool *f5c3bb8538; // 0x06(0x01)
	bool *569ed10892; // 0x07(0x01)
	float *440c8c4506; // 0x08(0x04)
	float *be3003718a; // 0x0c(0x04)
	struct AActor* Target; // 0x10(0x08)
};

// ScriptStruct TslGame.*9447b19e67
// Size: 0x40 (Inherited: 0x00)
struct F*9447b19e67 {
	struct FVector RelativeLocation; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct UClass* *ae3937fa3a; // 0x10(0x08)
	float *9d1b517ed6; // 0x18(0x04)
	float *de1772b4a3; // 0x1c(0x04)
	float *3a2d09128d; // 0x20(0x04)
	float *91d57d5407; // 0x24(0x04)
	float *0187fddeac; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UCurveFloat* *a256775044; // 0x30(0x08)
	enum class ENpcWalkingSpeedType *6f301e4a78; // 0x38(0x01)
	bool *8425b6e731; // 0x39(0x01)
	bool *9235411e6f; // 0x3a(0x01)
	bool *b5058a3b2e; // 0x3b(0x01)
	float *d07f7c6e6f; // 0x3c(0x04)
};

// ScriptStruct TslGame.*573aa45bc7
// Size: 0x18 (Inherited: 0x00)
struct F*573aa45bc7 {
	float *ae9309c3cb; // 0x00(0x04)
	int32 *97bd51aab2; // 0x04(0x04)
	struct TArray<struct F*c0a3fa7d69> *33273c9983; // 0x08(0x10)
};

// ScriptStruct TslGame.*c0a3fa7d69
// Size: 0x1c (Inherited: 0x00)
struct F*c0a3fa7d69 {
	int32 *c9759a1a83; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
};

// ScriptStruct TslGame.*89368a25a1
// Size: 0x2c (Inherited: 0x00)
struct F*89368a25a1 {
	int32 *c9759a1a83; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	int32 Count; // 0x1c(0x04)
	struct UObject* Instigator; // 0x20(0x08)
	bool *4c4c5184c3; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct TslGame.*5b8f1691c0
// Size: 0x30 (Inherited: 0x00)
struct F*5b8f1691c0 {
	struct UClass* Pawn; // 0x00(0x08)
	struct UClass* Controller; // 0x08(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x10(0x08)
	struct TArray<struct F*478d1dd5a9> *6d768e2f69; // 0x18(0x10)
	bool *6f8c847098; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*478d1dd5a9
// Size: 0x20 (Inherited: 0x00)
struct F*478d1dd5a9 {
	struct TArray<struct UClass*> *357da60527; // 0x00(0x10)
	struct TArray<struct FName> *d70e4c64be; // 0x10(0x10)
};

// ScriptStruct TslGame.*d5c20c69da
// Size: 0x40 (Inherited: 0x00)
struct F*d5c20c69da {
	struct TArray<enum class EOneOnOneResultType> Scores; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	enum class EOutGamePlatformProvider TargetPlatform; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 TeamId; // 0x24(0x04)
	int32 *0e59c4c6c8; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString AccountId; // 0x30(0x10)
};

// ScriptStruct TslGame.*b74c46c473
// Size: 0x170 (Inherited: 0x00)
struct F*b74c46c473 {
	float *9b58f8b06d; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<enum class EOneOnOneRoomState, int32> *e79cd5ab3a; // 0x08(0x50)
	bool *3340d786fc; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 *a56c942227; // 0x5c(0x04)
	int32 *4b9128ea9d; // 0x60(0x04)
	float *f0bc81eb83; // 0x64(0x04)
	enum class EOneOnOneInvenRecoverType *aea284951a; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FName> *710a958adb; // 0x70(0x10)
	struct TArray<struct FName> *0b3c107c35; // 0x80(0x10)
	struct TMap<enum class EAccessorySlot, struct FName> *092a475093; // 0x90(0x50)
	struct TArray<struct FName> *81a9fc4cf2; // 0xe0(0x10)
	struct TArray<struct FName> *9edb985424; // 0xf0(0x10)
	struct TArray<struct FName> *4b44798747; // 0x100(0x10)
	struct TArray<struct FName> *a067c09d46; // 0x110(0x10)
	struct TMap<struct FName, int32> *7ed7c46982; // 0x120(0x50)
};

// ScriptStruct TslGame.*e586c579e6
// Size: 0x03 (Inherited: 0x00)
struct F*e586c579e6 {
	enum class EOneOnOneTicketState *fdf168a227; // 0x00(0x01)
	enum class EOneOnOneStageType *84d8583f4a; // 0x01(0x01)
	enum class EOneOnOneSideType *cb308a21eb; // 0x02(0x01)
};

// ScriptStruct TslGame.*6b93c356b7
// Size: 0x70 (Inherited: 0x08)
struct F*6b93c356b7 : FTableRowBase {
	struct FText *c09137e681; // 0x08(0x18)
	struct TMap<enum class EOneOnOneMessageType, struct FText> *8cb95c65d5; // 0x20(0x50)
};

// ScriptStruct TslGame.*10348b4216
// Size: 0x30 (Inherited: 0x00)
struct F*10348b4216 {
	struct FName *56709ca8b5; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	int32 *c78601d565; // 0x20(0x04)
	int32 *7b149ccfab; // 0x24(0x04)
	int32 *c1a797160e; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*83d7b0820b
// Size: 0x10 (Inherited: 0x00)
struct F*83d7b0820b {
	struct UParticleSystem* Template; // 0x00(0x08)
	float *f946abdb21; // 0x08(0x04)
	float *72cfab13ec; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7d93be5dee
// Size: 0x14 (Inherited: 0x00)
struct F*7d93be5dee {
	float PillarGruntStartHealth; // 0x00(0x04)
	float PillarBossStartHealth; // 0x04(0x04)
	float PatrolAlarmDuration; // 0x08(0x04)
	float *e376e17e58; // 0x0c(0x04)
	float *2b76b071a5; // 0x10(0x04)
};

// ScriptStruct TslGame.*976555e78d
// Size: 0x03 (Inherited: 0x00)
struct F*976555e78d {
	enum class *b144f4465f X; // 0x00(0x01)
	enum class *b144f4465f Y; // 0x01(0x01)
	enum class *b144f4465f Z; // 0x02(0x01)
};

// ScriptStruct TslGame.*3f440e0df9
// Size: 0x40 (Inherited: 0x00)
struct F*3f440e0df9 {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	enum class *525f57f793 ForwardAxis; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector LocalOffset; // 0x1c(0x0c)
	float Length; // 0x28(0x04)
	struct FVector2D RotationRange; // 0x2c(0x08)
	float Scale; // 0x34(0x04)
	bool bScaleXYZ; // 0x38(0x01)
	bool bFlip; // 0x39(0x01)
	bool bOffsetShiftWithScale; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct TslGame.*a8184b1517
// Size: 0x08 (Inherited: 0x00)
struct F*a8184b1517 {
	struct UClass* *5943541895; // 0x00(0x08)
};

// ScriptStruct TslGame.*0555b6292e
// Size: 0xb0 (Inherited: 0x00)
struct F*0555b6292e {
	struct UClass* *5943541895; // 0x00(0x08)
	bool *8c93c2fb13; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *37a67b3842; // 0x10(0x08)
	struct UClass* *24afa0d440; // 0x18(0x08)
	struct UClass* Ring; // 0x20(0x08)
	struct FName *7908b2fe8a; // 0x28(0x08)
	enum class EProjectileExplosionStartType *3f7b5f96cb; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ExplosionDelay; // 0x34(0x04)
	bool *5fbb7dc508; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *614e5a53c7; // 0x3c(0x04)
	float FireDelay; // 0x40(0x04)
	float *3c1b9f7fc4; // 0x44(0x04)
	struct F*09470a7d56 *826763d316; // 0x48(0x18)
	struct F*09470a7d56 *943cfed758; // 0x60(0x18)
	struct F*09470a7d56 *b77802218e; // 0x78(0x18)
	struct UCurveFloat* *1102258923; // 0x90(0x08)
	struct UCurveFloat* *62460a3ee4; // 0x98(0x08)
	float *399e5a7976; // 0xa0(0x04)
	float *444a97349a; // 0xa4(0x04)
	bool *b9ec27e45e; // 0xa8(0x01)
	bool *d29f70a131; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
};

// ScriptStruct TslGame.*09470a7d56
// Size: 0x18 (Inherited: 0x00)
struct F*09470a7d56 {
	struct UAnimMontage* PinOff; // 0x00(0x08)
	struct UAnimMontage* Cooking; // 0x08(0x08)
	struct UAnimMontage* Release; // 0x10(0x08)
};

// ScriptStruct TslGame.*2e49188d15
// Size: 0xe8 (Inherited: 0x00)
struct F*2e49188d15 {
	float *4afcd3b80f; // 0x00(0x04)
	float *e1e5cce8d6; // 0x04(0x04)
	int32 *d2b1a08c48; // 0x08(0x04)
	float *4c161b2bf1; // 0x0c(0x04)
	float *8c843c6d2d; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* *3d532886ce; // 0x18(0x08)
	struct UCurveFloat* *43d6eeab35; // 0x20(0x08)
	float *dc4e51debf; // 0x28(0x04)
	float *89be5a617b; // 0x2c(0x04)
	struct UClass* *f23bfe8a1c; // 0x30(0x08)
	int32 *6efed15575; // 0x38(0x04)
	float *e9cb67194c; // 0x3c(0x04)
	float *1cd0462f07; // 0x40(0x04)
	float *a7be1d0d4c; // 0x44(0x04)
	char *16078458f4 : 1; // 0x48(0x01)
	char *7e542ac29f : 1; // 0x48(0x01)
	char *bd64bd9092 : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<enum class EDamageTypeCategory> *34fd984282; // 0x50(0x10)
	struct TArray<enum class EDamageTypeCategory> *0fdaed0421; // 0x60(0x10)
	bool *68cde857d2; // 0x70(0x01)
	bool *2fbc64e393; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct TArray<enum class EPhysicalSurface> *ae6db8d57f; // 0x78(0x10)
	struct TArray<struct UClass*> *8abe8b5b19; // 0x88(0x10)
	bool *dce474759b; // 0x98(0x01)
	bool *e7fdae1412; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float *21274d6b19; // 0x9c(0x04)
	float *0c79f8d75c; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UTexture* DamageCauserIcon; // 0xa8(0x08)
	float DamageIconRatio; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FText DamageCauserItemName; // 0xb8(0x18)
	enum class EWeaponClass DamageCauserClass; // 0xd0(0x01)
	bool *6adde4d548; // 0xd1(0x01)
	bool *f02e1d8439; // 0xd2(0x01)
	bool *9fb2681b7c; // 0xd3(0x01)
	float *cdd714181d; // 0xd4(0x04)
	struct UCurveFloat* *097d50ef0e; // 0xd8(0x08)
	struct UClass* *1146a3acfa; // 0xe0(0x08)
};

// ScriptStruct TslGame.*63d18d6cf7
// Size: 0x08 (Inherited: 0x00)
struct F*63d18d6cf7 {
	float *f8050fe2a7; // 0x00(0x04)
	float *b1ca0b0627; // 0x04(0x04)
};

// ScriptStruct TslGame.*2c682962fa
// Size: 0x18 (Inherited: 0x00)
struct F*2c682962fa {
	struct FVector2D *5df4d6867e; // 0x00(0x08)
	float *d2de7d1d7a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *2d22e43afd; // 0x10(0x08)
};

// ScriptStruct TslGame.*1111b219db
// Size: 0xa8 (Inherited: 0x00)
struct F*1111b219db {
	struct TMap<enum class EWeaponClass, struct FVector2D> *cd08944679; // 0x00(0x50)
	bool *2854c40bd4; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<int32, struct FVector2D> *91338414d5; // 0x58(0x50)
};

// ScriptStruct TslGame.*5067a98730
// Size: 0xf0 (Inherited: 0x00)
struct F*5067a98730 {
	struct FText *029d8becd8; // 0x00(0x18)
	struct FText *743f59eb23; // 0x18(0x18)
	struct FText *94a9e45507; // 0x30(0x18)
	struct FText *2959782c9e; // 0x48(0x18)
	struct FText *e81c3fd9bc; // 0x60(0x18)
	struct FText *dc4889c66d; // 0x78(0x18)
	struct FText *7ca032225a; // 0x90(0x18)
	struct FText *d836fef24e; // 0xa8(0x18)
	struct FText *3f86a16514; // 0xc0(0x18)
	struct FText *783a2baeea; // 0xd8(0x18)
};

// ScriptStruct TslGame.*e1c44510b0
// Size: 0x10 (Inherited: 0x00)
struct F*e1c44510b0 {
	bool bUseConstReduction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *b4d8d53c0e; // 0x04(0x04)
	bool bUseScalarReduction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *df285e677e; // 0x0c(0x04)
};

// ScriptStruct TslGame.*0cbf2af692
// Size: 0x18 (Inherited: 0x00)
struct F*0cbf2af692 {
	struct UAnimMontage* *c39a3c1264; // 0x00(0x08)
	struct UAnimMontage* *e479f10ad8; // 0x08(0x08)
	float *91684e9c53; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*49c6fb35be
// Size: 0x28 (Inherited: 0x00)
struct F*49c6fb35be {
	char pad_0[0x1]; // 0x00(0x01)
	enum class EVehicleEngineState ServerState; // 0x01(0x01)
	char pad_2[0xa]; // 0x02(0x0a)
	bool *aa0f3440f7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *8ccb3f0cca; // 0x10(0x04)
	float *0ed9c2cd8b; // 0x14(0x04)
	float *73615d7558; // 0x18(0x04)
	float StartTime; // 0x1c(0x04)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*15823a48fb
// Size: 0x18 (Inherited: 0x00)
struct F*15823a48fb {
	float *b1170fc63f; // 0x00(0x04)
	float *a5af402d79; // 0x04(0x04)
	struct UCurveFloat* *210472de66; // 0x08(0x08)
	bool *38a4685871; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*b2d87d3931
// Size: 0x10 (Inherited: 0x00)
struct F*b2d87d3931 {
	float *e5dbfdab2a; // 0x00(0x04)
	float *517fa9f64b; // 0x04(0x04)
	float *36ae4ffdab; // 0x08(0x04)
	float *f408a72985; // 0x0c(0x04)
};

// ScriptStruct TslGame.*abdabd8c0a
// Size: 0x50 (Inherited: 0x00)
struct F*abdabd8c0a {
	struct TMap<struct UClass*, struct F*751a38fe50> *95141354e0; // 0x00(0x50)
};

// ScriptStruct TslGame.*751a38fe50
// Size: 0x10 (Inherited: 0x00)
struct F*751a38fe50 {
	struct TArray<struct ATslParticle*> *3b1ed0b9d2; // 0x00(0x10)
};

// ScriptStruct TslGame.*a1af8d9089
// Size: 0x18 (Inherited: 0x00)
struct F*a1af8d9089 {
	int32 *3fb68bdd1b; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*7cc0cfa72d> *fe8b709711; // 0x08(0x10)
};

// ScriptStruct TslGame.*a25f7c3aca
// Size: 0x80 (Inherited: 0x00)
struct F*a25f7c3aca {
	bool *be51db81c4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InWaterAlpha; // 0x04(0x04)
	float PropulsionAlpha; // 0x08(0x04)
	float *a319fbb69e; // 0x0c(0x04)
	struct FVector *82c79aae56; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FName *d22196d14b; // 0x20(0x08)
	float *08b5aa94a1; // 0x28(0x04)
	struct FVector *b6e713faf4; // 0x2c(0x0c)
	float PropulsionForceScale; // 0x38(0x04)
	float *779855dce3; // 0x3c(0x04)
	struct FVector *b97b17a060; // 0x40(0x0c)
	float *f59b4c480b; // 0x4c(0x04)
	float *4552c5819e; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
	struct FVector4 *f65bbe2b06; // 0x60(0x10)
	bool *386673a8ad; // 0x70(0x01)
	bool IsInWaterGearLock; // 0x71(0x01)
	bool *abb2e51cb2; // 0x72(0x01)
	char pad_73[0xd]; // 0x73(0x0d)
};

// ScriptStruct TslGame.*ddab9d4252
// Size: 0x40 (Inherited: 0x00)
struct F*ddab9d4252 {
	bool *f5df2db4f6; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FVector4 *abe4ec114f; // 0x10(0x10)
	struct FVector2D *d50fe6bc5b; // 0x20(0x08)
	struct FVector2D *f5a4b6ec32; // 0x28(0x08)
	struct FVector2D *52b41716ab; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*a3d2bb7efb
// Size: 0x28 (Inherited: 0x00)
struct F*a3d2bb7efb {
	bool bUseVelocityTransmission; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *d66838a5f7; // 0x04(0x04)
	bool *dfd5c60a20; // 0x08(0x01)
	bool *7518327f01; // 0x09(0x01)
	bool *362e50561d; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float *4ece668fd4; // 0x0c(0x04)
	struct TArray<struct F*9cc2ced535> *253b00949f; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*9cc2ced535
// Size: 0x08 (Inherited: 0x00)
struct F*9cc2ced535 {
	float *df5e952fed; // 0x00(0x04)
	float *f4afb1918f; // 0x04(0x04)
};

// ScriptStruct TslGame.*4d88f14e86
// Size: 0x06 (Inherited: 0x00)
struct F*4d88f14e86 {
	char pad_0[0x6]; // 0x00(0x06)
};

// ScriptStruct TslGame.*a86d4dc15c
// Size: 0x58 (Inherited: 0x00)
struct F*a86d4dc15c {
	struct UPrimitiveComponent* *5f8c1a5417; // 0x00(0x08)
	bool *2dc5e8acad; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector *6ab5d9cf1c; // 0x0c(0x0c)
	struct FRotator *39baae2c1c; // 0x18(0x0c)
	struct FRepMovement RepMovement; // 0x24(0x34)
};

// ScriptStruct TslGame.*b3327664bd
// Size: 0x40 (Inherited: 0x00)
struct F*b3327664bd {
	struct FVector2D *6396a57a4b; // 0x00(0x08)
	struct FVector2D *d0df12e26e; // 0x08(0x08)
	struct FVector2D *11c0ec69e4; // 0x10(0x08)
	struct FVector2D *aefe3485da; // 0x18(0x08)
	struct FVector2D *63fd71cc67; // 0x20(0x08)
	struct FVector2D *72df2c9a9b; // 0x28(0x08)
	struct FVector *3fa6db1b68; // 0x30(0x0c)
	float *f65265c017; // 0x3c(0x04)
};

// ScriptStruct TslGame.*15e69f1db9
// Size: 0x94 (Inherited: 0x00)
struct F*15e69f1db9 {
	float *727df3acd9; // 0x00(0x04)
	float *90b8ffbb3d; // 0x04(0x04)
	float *8b2f0fee80; // 0x08(0x04)
	float *8add2f1287; // 0x0c(0x04)
	struct FVector2D *85277dc74b; // 0x10(0x08)
	struct FVector2D *9208748cc2; // 0x18(0x08)
	struct FVector2D *ffdbc6acef; // 0x20(0x08)
	struct FVector2D *7729f7c995; // 0x28(0x08)
	struct FVector2D *2c0c9926a5; // 0x30(0x08)
	struct FVector2D *984e9d6930; // 0x38(0x08)
	struct FVector2D *73c238a7e2; // 0x40(0x08)
	struct FVector2D *94e5d40146; // 0x48(0x08)
	struct FVector2D *425b914f55; // 0x50(0x08)
	struct FVector2D *58bf1d9dc8; // 0x58(0x08)
	struct FVector2D *fb81a15374; // 0x60(0x08)
	struct FVector2D *9ac0f13a6f; // 0x68(0x08)
	struct FVector2D *b406c02fc9; // 0x70(0x08)
	struct FVector2D *9eb19bda90; // 0x78(0x08)
	float *1152cf9e8f; // 0x80(0x04)
	float *e393db7d7b; // 0x84(0x04)
	float *628cda70e7; // 0x88(0x04)
	float *a80a733a3e; // 0x8c(0x04)
	float *08c55aa686; // 0x90(0x04)
};

// ScriptStruct TslGame.*590d2f46e9
// Size: 0x0c (Inherited: 0x00)
struct F*590d2f46e9 {
	float Timeout; // 0x00(0x04)
	float Chance; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct TslGame.*0aa8a2d485
// Size: 0x10 (Inherited: 0x00)
struct F*0aa8a2d485 {
	float *3574acfbd5; // 0x00(0x04)
	float *e015e5c876; // 0x04(0x04)
	float *501b1f5329; // 0x08(0x04)
	float *0f9c30e3d2; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b0a3b29a8a
// Size: 0x60 (Inherited: 0x00)
struct F*b0a3b29a8a {
	struct UAkAudioEvent* *8d45f9f5e1; // 0x00(0x08)
	struct UAkAudioEvent* *89d9326fd2; // 0x08(0x08)
	struct UAkAudioEvent* *8b502b4b41; // 0x10(0x08)
	struct UAkAudioEvent* *22f2ed840a; // 0x18(0x08)
	struct UAkAudioEvent* *f5f6a04092; // 0x20(0x08)
	struct UAkAudioEvent* *bc7b982367; // 0x28(0x08)
	struct UAkAudioEvent* *2d0fd63d4f; // 0x30(0x08)
	struct UAkAudioEvent* *80a0eabe22; // 0x38(0x08)
	struct UAkAudioEvent* *36bdd8753d; // 0x40(0x08)
	struct UAkAudioEvent* *5f433a916d; // 0x48(0x08)
	struct UAkAudioEvent* *21d06f657e; // 0x50(0x08)
	struct UAkAudioEvent* *f8abde44ca; // 0x58(0x08)
};

// ScriptStruct TslGame.*9c91eecc8c
// Size: 0x44 (Inherited: 0x00)
struct F*9c91eecc8c {
	float SpotlightTargetLostInterval; // 0x00(0x04)
	float SpotlightTargetBroadcastDelay; // 0x04(0x04)
	struct FRotator SpotlightNeutralRotation; // 0x08(0x0c)
	float PatrolCooldown; // 0x14(0x04)
	float AlarmCooldown; // 0x18(0x04)
	int32 PatrolSafeZoneEdgePhase; // 0x1c(0x04)
	int32 IgnoreAlarmPhase; // 0x20(0x04)
	float MinBZPatrolRadiusScale; // 0x24(0x04)
	float MaxBZPatrolRadiusScale; // 0x28(0x04)
	bool bIgnoreBots; // 0x2c(0x01)
	bool bIgnorePillar; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float *b17d3e59ec; // 0x30(0x04)
	float *66cc968fb0; // 0x34(0x04)
	float *122ccdee8b; // 0x38(0x04)
	float *67245b114f; // 0x3c(0x04)
	float *b75817ebd4; // 0x40(0x04)
};

// ScriptStruct TslGame.*8a6e34704a
// Size: 0x18 (Inherited: 0x00)
struct F*8a6e34704a {
	int32 MaterialIndex; // 0x00(0x04)
	float delayTime; // 0x04(0x04)
	float *74ad161b04; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*4f3e8f3370
// Size: 0x10 (Inherited: 0x00)
struct F*4f3e8f3370 {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*18e705bec8
// Size: 0x70 (Inherited: 0x60)
struct F*18e705bec8 : F*bdea5bd95a {
	struct TArray<struct UObject*> *7c612f0db5; // 0x60(0x10)
};

// ScriptStruct TslGame.*bdea5bd95a
// Size: 0x60 (Inherited: 0x00)
struct F*bdea5bd95a {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*b1fd3e3af6
// Size: 0x80 (Inherited: 0x60)
struct F*b1fd3e3af6 : F*bdea5bd95a {
	struct UObject* *4a3091b0b0; // 0x60(0x20)
};

// ScriptStruct TslGame.*6bc5065cc7
// Size: 0x10 (Inherited: 0x00)
struct F*6bc5065cc7 {
	struct UClass* *6c68114daf; // 0x00(0x08)
	bool *3ebfa11f1a; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*7733919b7e
// Size: 0x18 (Inherited: 0x00)
struct F*7733919b7e {
	bool bLoadableEquipSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*0ec1aba19a> LoadableEquipSlotInfos; // 0x08(0x10)
};

// ScriptStruct TslGame.*0ec1aba19a
// Size: 0x08 (Inherited: 0x00)
struct F*0ec1aba19a {
	float ApplySpaceRate; // 0x00(0x04)
	enum class EEquipSlotID LoadableEquipSlotID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*924594446b
// Size: 0x30 (Inherited: 0x00)
struct F*924594446b {
	enum class EThingSpotGroupType GroupType; // 0x00(0x01)
	bool bActiveByStartVolume; // 0x01(0x01)
	enum class EThingGroupSpawnType SpawnType; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FName TargetSpotTag; // 0x08(0x08)
	struct FFloatRange TotalCountRange; // 0x10(0x10)
	float TotalCountMultiplierWithPlayerCount; // 0x20(0x04)
	float ProbabilityPercent; // 0x24(0x04)
	float ProbabilityPercentMultiplierWithPlayerCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*042742f928
// Size: 0x48 (Inherited: 0x30)
struct F*042742f928 : F*924594446b {
	struct UClass* ItemPackageClass; // 0x30(0x08)
	struct TArray<struct F*122c96c916> PackageSpawnProbArray; // 0x38(0x10)
};

// ScriptStruct TslGame.*122c96c916
// Size: 0x18 (Inherited: 0x00)
struct F*122c96c916 {
	float ProbabilityPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
};

// ScriptStruct TslGame.*ba06f95f1f
// Size: 0x38 (Inherited: 0x08)
struct F*ba06f95f1f : FTableRowBase {
	struct FName SubCategoryFilter; // 0x08(0x08)
	struct UClass* Vehicle; // 0x10(0x20)
	float SubCategoryFilterWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*9f9cc41039
// Size: 0x20 (Inherited: 0x08)
struct F*9f9cc41039 : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	struct FName SubCategoryFilter; // 0x10(0x08)
	float CategoryFilterWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*d7f8ba512a
// Size: 0x28 (Inherited: 0x08)
struct F*d7f8ba512a : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	float CategoryFilterWeight; // 0x10(0x04)
	int32 MinTotalCountRange; // 0x14(0x04)
	int32 MaxTotalCountRange; // 0x18(0x04)
	float MinFuelPercentRange; // 0x1c(0x04)
	float MaxFuelPercentRange; // 0x20(0x04)
	enum class EThingSpotGroupType GroupType; // 0x24(0x01)
	bool bSnapToFloor; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct TslGame.*c632c3ebe2
// Size: 0x28 (Inherited: 0x08)
struct F*c632c3ebe2 : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	struct FName SubCategoryFilter; // 0x10(0x08)
	struct UClass* Vehicle; // 0x18(0x08)
	int32 Weight; // 0x20(0x04)
	bool bSnapToFloor; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGame.*7af2a1b793
// Size: 0x58 (Inherited: 0x30)
struct F*7af2a1b793 : F*924594446b {
	struct TArray<struct F*84c571e048> WeightsPerCategory; // 0x30(0x10)
	struct FFloatRange FuelPercentRange; // 0x40(0x10)
	bool bSnapToFloor; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.*f0ecb98b9b
// Size: 0x88 (Inherited: 0x08)
struct F*f0ecb98b9b : FTableRowBase {
	struct FString Description; // 0x08(0x10)
	struct FString VehicleSpawnSubtitleKey; // 0x18(0x10)
	struct UDataTable* VehicleSpotGroupDataTable; // 0x28(0x20)
	struct UDataTable* VehicleSpawnDataTable; // 0x48(0x20)
	struct UDataTable* VehicleVariationDataTable; // 0x68(0x20)
};

// ScriptStruct TslGame.*702b28e8a3
// Size: 0x10 (Inherited: 0x08)
struct F*702b28e8a3 : FTableRowBase {
	int32 Level; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.TestLog
// Size: 0xa0 (Inherited: 0x60)
struct FTestLog : FLogBase {
	uint32 UInt32Max; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	uint64 UInt64Max; // 0x68(0x08)
	uint32 UInt32Min; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	uint64 UInt64Min; // 0x78(0x08)
	int32 Int32Max; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	int64 Int64Max; // 0x88(0x08)
	int32 Int32Min; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	int64 Int64Min; // 0x98(0x08)
};

// ScriptStruct TslGame.*23206ea063
// Size: 0x48 (Inherited: 0x00)
struct F*23206ea063 {
	struct FString MapName; // 0x00(0x10)
	struct FString BenchmarkPath; // 0x10(0x10)
	struct FString LevelSequenceName; // 0x20(0x10)
	struct FString CameraName; // 0x30(0x10)
	float PlayRate; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*313a666146
// Size: 0x20 (Inherited: 0x00)
struct F*313a666146 {
	struct FName FunctionName; // 0x00(0x08)
	struct FString CommandName; // 0x08(0x10)
	float delayTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*ebc8106459
// Size: 0x38 (Inherited: 0x00)
struct F*ebc8106459 {
	struct FName *56709ca8b5; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector2D *8d7551159d; // 0x20(0x08)
	struct FName *a3c74dc382; // 0x28(0x08)
	enum class EThingSpotGroupType *da1d3240f9; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*e0ab578132
// Size: 0x30 (Inherited: 0x00)
struct F*e0ab578132 {
	struct FStringAssetReference *285b6ea0d9; // 0x00(0x10)
	struct FStringAssetReference *67cd2dd0d9; // 0x10(0x10)
	struct FStringAssetReference *733306137c; // 0x20(0x10)
};

// ScriptStruct TslGame.*c9989b65fc
// Size: 0x38 (Inherited: 0x00)
struct F*c9989b65fc {
	struct F*4d4358ec07 TargetData; // 0x00(0x28)
	struct TArray<struct F*16a3c4107c> TargetGameplayEffectSpecs; // 0x28(0x10)
};

// ScriptStruct TslGame.*15767ce957
// Size: 0x18 (Inherited: 0x00)
struct F*15767ce957 {
	struct UClass* TargetType; // 0x00(0x08)
	struct TArray<struct UClass*> TargetGameplayEffectClasses; // 0x08(0x10)
};

// ScriptStruct TslGame.*b775049b81
// Size: 0x18 (Inherited: 0x00)
struct F*b775049b81 {
	struct FName *e55e8334c5; // 0x00(0x08)
	int32 *081082e2c1; // 0x08(0x04)
	int32 *779b2bca6e; // 0x0c(0x04)
	int32 *e2a5768287; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*675133399a
// Size: 0x18 (Inherited: 0x00)
struct F*675133399a {
	struct TArray<struct F*9db30ddc14> *9db30ddc14; // 0x00(0x10)
	float *2501170919; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*9db30ddc14
// Size: 0x08 (Inherited: 0x00)
struct F*9db30ddc14 {
	int32 Percent; // 0x00(0x04)
	int32 *752333af64; // 0x04(0x04)
};

// ScriptStruct TslGame.*b0ad28b3c8
// Size: 0x08 (Inherited: 0x00)
struct F*b0ad28b3c8 {
	float *16c35fa688; // 0x00(0x04)
	float *2501170919; // 0x04(0x04)
};

// ScriptStruct TslGame.*1d841bd779
// Size: 0x08 (Inherited: 0x00)
struct F*1d841bd779 {
	float *fd5cb23dfb; // 0x00(0x04)
	float *2501170919; // 0x04(0x04)
};

// ScriptStruct TslGame.*12ad8d182b
// Size: 0x18 (Inherited: 0x00)
struct F*12ad8d182b {
	struct FVector *ec0385c8dc; // 0x00(0x0c)
	struct FVector *213be643dd; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*d7c104e750
// Size: 0x0c (Inherited: 0x00)
struct F*d7c104e750 {
	float *55aa44e313; // 0x00(0x04)
	float *3b4525121b; // 0x04(0x04)
	float *82d829f859; // 0x08(0x04)
};

// ScriptStruct TslGame.*c2c6e84d2c
// Size: 0x10 (Inherited: 0x00)
struct F*c2c6e84d2c {
	float *55aa44e313; // 0x00(0x04)
	float *3b4525121b; // 0x04(0x04)
	int32 *4e3dfcfb05; // 0x08(0x04)
	float *82d829f859; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7d1575775e
// Size: 0x14 (Inherited: 0x00)
struct F*7d1575775e {
	float *846bf577b1; // 0x00(0x04)
	float *7cb30d4fa4; // 0x04(0x04)
	float *f90b45ddeb; // 0x08(0x04)
	int32 *3e6d400403; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct TslGame.*9495069f30
// Size: 0x38 (Inherited: 0x00)
struct F*9495069f30 {
	char pad_0[0x30]; // 0x00(0x30)
	struct ATslNewBotAIController* *c6bfdb8c90; // 0x30(0x08)
};

// ScriptStruct TslGame.*63868c18a8
// Size: 0x20 (Inherited: 0x08)
struct F*63868c18a8 : FTableRowBase {
	int32 Weight; // 0x08(0x04)
	enum class EGender *8fe2f0d2e3; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct F*ed0d349a55> *c3f56692c4; // 0x10(0x10)
};

// ScriptStruct TslGame.*ed0d349a55
// Size: 0x10 (Inherited: 0x00)
struct F*ed0d349a55 {
	enum class EEquipSlotID SlotName; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AvatarItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*3843dcf2f5
// Size: 0xa0 (Inherited: 0x00)
struct F*3843dcf2f5 {
	struct ATslNewBotCharacter* *9322115c9e; // 0x00(0x08)
	struct ATslNpcCharacter* *41785bf6da; // 0x08(0x08)
	char pad_10[0x90]; // 0x10(0x90)
};

// ScriptStruct TslGame.*cbe2eb3726
// Size: 0x10 (Inherited: 0x00)
struct F*cbe2eb3726 {
	float ProbabilityFirstHit; // 0x00(0x04)
	float DurationTime; // 0x04(0x04)
	float DurationDamageMax; // 0x08(0x04)
	float DurationEmptyShot; // 0x0c(0x04)
};

// ScriptStruct TslGame.*141cf55172
// Size: 0x28 (Inherited: 0x00)
struct F*141cf55172 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UCurveFloat* *1868e2bf88; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct TslGame.*f11dc619bf
// Size: 0x1c (Inherited: 0x00)
struct F*f11dc619bf {
	enum class EAIMapName MapName; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Center; // 0x04(0x0c)
	struct FVector *047cf98587; // 0x10(0x0c)
};

// ScriptStruct TslGame.*c65d9195cc
// Size: 0x48 (Inherited: 0x00)
struct F*c65d9195cc {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct TslGame.HouseGroup
// Size: 0x48 (Inherited: 0x00)
struct FHouseGroup {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct TslGame.*4089e18724
// Size: 0x70 (Inherited: 0x00)
struct F*4089e18724 {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct TslGame.*e36bc5a4cb
// Size: 0x0c (Inherited: 0x00)
struct F*e36bc5a4cb {
	char pad_0[0x8]; // 0x00(0x08)
	float *440071d46b; // 0x08(0x04)
};

// ScriptStruct TslGame.*3edd7ec7de
// Size: 0x60 (Inherited: 0x00)
struct F*3edd7ec7de {
	struct UDataTable* *3f8205fb5e; // 0x00(0x20)
	struct UDataTable* *38bb4f1ca7; // 0x20(0x20)
	float *96a3d424fe; // 0x40(0x04)
	float *50043398ee; // 0x44(0x04)
	float *1c9e48e3b2; // 0x48(0x04)
	float *ad5da17161; // 0x4c(0x04)
	int32 *3fd91deb1e; // 0x50(0x04)
	int32 *4de24b63d2; // 0x54(0x04)
	int32 *ffb643eec3; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*a0f4b68799
// Size: 0x10 (Inherited: 0x00)
struct F*a0f4b68799 {
	float *57b1f879d1; // 0x00(0x04)
	float *c389725b2d; // 0x04(0x04)
	int32 *62d9eab7c9; // 0x08(0x04)
	float *67c385ab1e; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f3034d9bc5
// Size: 0x20 (Inherited: 0x08)
struct F*f3034d9bc5 : FTableRowBase {
	int32 PhaseIndex; // 0x08(0x04)
	int32 Ratio; // 0x0c(0x04)
	struct TArray<struct F*085b533544> Items; // 0x10(0x10)
};

// ScriptStruct TslGame.*085b533544
// Size: 0x18 (Inherited: 0x00)
struct F*085b533544 {
	enum class EUltAutoEquipItemType *466d4d9ab0; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Item; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*c1ca5b417a
// Size: 0x08 (Inherited: 0x00)
struct F*c1ca5b417a {
	struct U*746b15c175* Origin; // 0x00(0x08)
};

// ScriptStruct TslGame.*79a6ec6b45
// Size: 0x10 (Inherited: 0x00)
struct F*79a6ec6b45 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*9d18ea5c04
// Size: 0xc0 (Inherited: 0x00)
struct F*9d18ea5c04 {
	struct AUltAIController* AIController; // 0x00(0x08)
	char pad_8[0xb8]; // 0x08(0xb8)
};

// ScriptStruct TslGame.*21b94442a6
// Size: 0x18 (Inherited: 0x00)
struct F*21b94442a6 {
	struct ATslPillarCharacter* *fa28d81a5a; // 0x00(0x08)
	struct FGuid *31a44caf4a; // 0x08(0x10)
};

// ScriptStruct TslGame.*074cdbbdf3
// Size: 0x10 (Inherited: 0x00)
struct F*074cdbbdf3 {
	struct TArray<struct F*721926fe08> *823c2044cd; // 0x00(0x10)
};

// ScriptStruct TslGame.*721926fe08
// Size: 0xb0 (Inherited: 0x00)
struct F*721926fe08 {
	bool *fcdc23b0c4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* *0d068beb02; // 0x08(0x08)
	struct FTransform *7602440dde; // 0x10(0x30)
	struct TArray<struct ATslStaticContainer*> *d16c6a89f9; // 0x40(0x10)
	struct TArray<struct AActor*> *e8a12a9061; // 0x50(0x10)
	struct TArray<struct ATslPatrolPath*> Paths; // 0x60(0x10)
	struct TArray<struct ATslPillarCharacter*> *c9ab25e0ec; // 0x70(0x10)
	struct TArray<struct ATslParticleEnvironment*> *0509c07ca6; // 0x80(0x10)
	struct TArray<struct F*b52ec430a6> *3f067a7f5f; // 0x90(0x10)
	struct FGuid *31a44caf4a; // 0xa0(0x10)
};

// ScriptStruct TslGame.*b52ec430a6
// Size: 0x50 (Inherited: 0x00)
struct F*b52ec430a6 {
	struct UClass* ParticleEnvironment; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform ParticleTransform; // 0x10(0x30)
	float ActivateDistances; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct TslGame.*747d9bad98
// Size: 0x20 (Inherited: 0x00)
struct F*747d9bad98 {
	struct FStringAssetReference *7766c7aea3; // 0x00(0x10)
	struct TArray<struct F*c261e58236> *fd54cce15c; // 0x10(0x10)
};

// ScriptStruct TslGame.*c261e58236
// Size: 0x40 (Inherited: 0x00)
struct F*c261e58236 {
	struct UPrefabAsset* PrefabAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform PrefabTransform; // 0x10(0x30)
};

// ScriptStruct TslGame.*9aaa4d5210
// Size: 0x18 (Inherited: 0x08)
struct F*9aaa4d5210 : FTableRowBase {
	struct UPrefabAsset* ArtPrefabAsset; // 0x08(0x08)
	struct UPrefabAsset* AiPrefabAsset; // 0x10(0x08)
};

// ScriptStruct TslGame.*00e4b52e75
// Size: 0x10 (Inherited: 0x00)
struct F*00e4b52e75 {
	struct TArray<struct ATslPatrolPoint*> *31c1735ade; // 0x00(0x10)
};

// ScriptStruct TslGame.*817ca72e9c
// Size: 0x10 (Inherited: 0x00)
struct F*817ca72e9c {
	struct UClass* *60149a08ef; // 0x00(0x08)
	struct FName *371e8d050e; // 0x08(0x08)
};

// ScriptStruct TslGame.*b9bb885ca4
// Size: 0x1c (Inherited: 0x00)
struct F*b9bb885ca4 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*bbd5f92d62
// Size: 0x10 (Inherited: 0x00)
struct F*bbd5f92d62 {
	int32 DropCount; // 0x00(0x04)
	float DropPercent; // 0x04(0x04)
	struct UClass* OverrideCarePackageItemSpawnerClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*278d1f7e9d
// Size: 0x18 (Inherited: 0x00)
struct F*278d1f7e9d {
	struct UClass* *92f222bec7; // 0x00(0x08)
	struct UClass* *c4d45c80ba; // 0x08(0x08)
	float *8211e23183; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*1390331480
// Size: 0x28 (Inherited: 0x00)
struct F*1390331480 {
	struct FName *6044df3689; // 0x00(0x08)
	struct UAkAudioEvent* *10bacb3a15; // 0x08(0x08)
	struct UAkAudioEvent* *f3a6fcd4ae; // 0x10(0x08)
	bool *3c287c2c35; // 0x18(0x01)
	bool *fb0d8610c2; // 0x19(0x01)
	bool *cf79b13397; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float *53de06cf39; // 0x1c(0x04)
	float *c8ebb974b9; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*f63435d4a3
// Size: 0x10 (Inherited: 0x00)
struct F*f63435d4a3 {
	struct TArray<struct F*adca7d139f> *5f9f9768ee; // 0x00(0x10)
};

// ScriptStruct TslGame.*adca7d139f
// Size: 0x18 (Inherited: 0x00)
struct F*adca7d139f {
	struct UClass* *0eda648d75; // 0x00(0x08)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float Falloff; // 0x10(0x04)
	bool *2cfc435e40; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*fce009a121
// Size: 0x20 (Inherited: 0x00)
struct F*fce009a121 {
	struct UBlendSpaceBase* CurrentLocomotionBlendspace; // 0x00(0x08)
	struct UBlendSpaceBase* LocomotionFirst; // 0x08(0x08)
	struct UBlendSpaceBase* LocomotionSecond; // 0x10(0x08)
	float LocomotionAlpha; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*19e78c83c9
// Size: 0x58 (Inherited: 0x00)
struct F*19e78c83c9 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, struct AActor*> *515c921b64; // 0x08(0x50)
};

// ScriptStruct TslGame.*e53516b8c3
// Size: 0x20 (Inherited: 0x08)
struct F*e53516b8c3 : FTableRowBase {
	float *3c33950e9c; // 0x08(0x04)
	float *e74b310ded; // 0x0c(0x04)
	float *03cf424387; // 0x10(0x04)
	float *7d4b1853f0; // 0x14(0x04)
	float *5312d82cbd; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*86e59d588d
// Size: 0x18 (Inherited: 0x00)
struct F*86e59d588d {
	enum class EAntiCheatKickType KickType; // 0x00(0x01)
	enum class EKickProcess KickProcess; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString KeyString; // 0x08(0x10)
};

// ScriptStruct TslGame.*889014f122
// Size: 0x18 (Inherited: 0x00)
struct F*889014f122 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTexture2D* IconTexture; // 0x08(0x08)
	float MaxTime; // 0x10(0x04)
	float FinishTime; // 0x14(0x04)
};

// ScriptStruct TslGame.*a1b60647be
// Size: 0x10 (Inherited: 0x00)
struct F*a1b60647be {
	struct UTexture2D* IdleTexture; // 0x00(0x08)
	struct UTexture2D* DamageTexture; // 0x08(0x08)
};

// ScriptStruct TslGame.*77c017c966
// Size: 0x20 (Inherited: 0x00)
struct F*77c017c966 {
	struct FString *9225e0c3fa; // 0x00(0x10)
	struct FString *650a440da6; // 0x10(0x10)
};

// ScriptStruct TslGame.*78e14445e1
// Size: 0xb8 (Inherited: 0x00)
struct F*78e14445e1 {
	struct FTslLobbyCustomizingData *bd376fb74c; // 0x00(0x58)
	struct UObject* *032cdb5039; // 0x58(0x08)
	struct UClass* *c1db797c51; // 0x60(0x20)
	struct TArray<struct UClass*> *08b66410c8; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	struct AActor* *fa2f34693a; // 0xa0(0x08)
	struct FString *561920de5e; // 0xa8(0x10)
};

// ScriptStruct TslGame.*10c666a319
// Size: 0x70 (Inherited: 0x00)
struct F*10c666a319 {
	struct UClass* *6f7806dda4; // 0x00(0x20)
	struct FName *2e73011f72; // 0x20(0x08)
	struct TArray<struct FString> *ab1921cd22; // 0x28(0x10)
	struct TArray<struct UClass*> *8472274b96; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EViewModeCategory *164f71f783; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString *f7ae698ecb; // 0x60(0x10)
};

// ScriptStruct TslGame.*2e579c3bad
// Size: 0x20 (Inherited: 0x00)
struct F*2e579c3bad {
	struct FString WidgetName; // 0x00(0x10)
	struct FMulticastDelegate *dc6bdecbc3; // 0x10(0x10)
};

// ScriptStruct TslGame.*aaba7a281e
// Size: 0x08 (Inherited: 0x00)
struct F*aaba7a281e {
	int32 TeamId; // 0x00(0x04)
	int32 MemberIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*7e5dd84338
// Size: 0x18 (Inherited: 0x00)
struct F*7e5dd84338 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*7f22a26401
// Size: 0x18 (Inherited: 0x00)
struct F*7f22a26401 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*fe364cb73c
// Size: 0x10 (Inherited: 0x00)
struct F*fe364cb73c {
	struct TArray<struct AActor*> *d73e8a8050; // 0x00(0x10)
};

// ScriptStruct TslGame.*e53078d58e
// Size: 0x90 (Inherited: 0x00)
struct F*e53078d58e {
	struct FName GroupName; // 0x00(0x08)
	enum class ETslParticleGroupPriority GroupPriority; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 MaxObjectCount; // 0x0c(0x04)
	enum class ETslParticleCullType CullType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MaxDistance; // 0x14(0x04)
	float MaxRenderDuration; // 0x18(0x04)
	int32 MaxSameTransformCount; // 0x1c(0x04)
	int32 MaxNearbyTransformCount; // 0x20(0x04)
	char pad_24[0x6c]; // 0x24(0x6c)
};

// ScriptStruct TslGame.*0166c74a68
// Size: 0x40 (Inherited: 0x08)
struct F*0166c74a68 : FTableRowBase {
	int32 UID; // 0x08(0x04)
	struct FTslSLBStageID StageID; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FName ItemID; // 0x10(0x08)
	struct FName SkinItemId; // 0x18(0x08)
	struct TArray<struct FName> Attachments; // 0x20(0x10)
	int32 StackCount; // 0x30(0x04)
	int32 Weight; // 0x34(0x04)
	bool bShowItem; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct TslGame.TslSLBStageID
// Size: 0x02 (Inherited: 0x00)
struct FTslSLBStageID {
	enum class ETslSLBStage Stage; // 0x00(0x01)
	enum class ETslSLBStageDifficulty Difficulty; // 0x01(0x01)
};

// ScriptStruct TslGame.*878a02c22e
// Size: 0x88 (Inherited: 0x08)
struct F*878a02c22e : FTableRowBase {
	struct FTslSLBStageID StageID; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct F*a4299bebb8 ItemSpawnData; // 0x10(0x38)
	struct UClass* StageControllerAsset; // 0x48(0x20)
	struct F*d05e3f36a3 MissionData; // 0x68(0x18)
	int32 RespawnCount; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.*d05e3f36a3
// Size: 0x18 (Inherited: 0x00)
struct F*d05e3f36a3 {
	struct FName MissionItemID; // 0x00(0x08)
	int32 MissionItemSpawnCount; // 0x08(0x04)
	enum class EItemSpotGroupType MissionItemSpotGroupType; // 0x0c(0x01)
	enum class EItemSpotType MissionItemSpotType; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	int32 MissionInteractionObjectCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*a4299bebb8
// Size: 0x38 (Inherited: 0x00)
struct F*a4299bebb8 {
	struct TArray<struct F*115d56cd1a> RawSpotGroupProperties; // 0x00(0x10)
	struct FStringAssetReference RawItemSpawnDataTable; // 0x10(0x10)
	struct FStringAssetReference RawItemSpawnTogetherDataTable; // 0x20(0x10)
	enum class EItemSpawnType ItemSpawnType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*741d02bf50
// Size: 0x10 (Inherited: 0x00)
struct F*741d02bf50 {
	struct F*bb38d220ec *bace2831b3; // 0x00(0x03)
	char pad_3[0x5]; // 0x03(0x05)
	struct ATslTrainingPlayerState* *b039e7b5ee; // 0x08(0x08)
};

// ScriptStruct TslGame.*bb38d220ec
// Size: 0x03 (Inherited: 0x00)
struct F*bb38d220ec {
	enum class EPrivateWaitingRoomPhase *96eed3ec9c; // 0x00(0x01)
	enum class EPrivateTrainingRoomPhase *6ad1a68691; // 0x01(0x01)
	enum class ETrainingPracticeType PracticeType; // 0x02(0x01)
};

// ScriptStruct TslGame.*c0682979ab
// Size: 0x08 (Inherited: 0x00)
struct F*c0682979ab {
	float *685f909065; // 0x00(0x04)
	float *3450ab3b98; // 0x04(0x04)
};

// ScriptStruct TslGame.*3abbbd62c9
// Size: 0x10 (Inherited: 0x00)
struct F*3abbbd62c9 {
	int32 *e8c66436e8; // 0x00(0x04)
	int32 *377ed92210; // 0x04(0x04)
	int32 *30c95562ea; // 0x08(0x04)
	int32 *c102b2ec56; // 0x0c(0x04)
};

// ScriptStruct TslGame.*23a231062a
// Size: 0x60 (Inherited: 0x00)
struct F*23a231062a {
	struct TMap<int32, int32> *9326d24e05; // 0x00(0x50)
	struct TArray<int32> *534020a922; // 0x50(0x10)
};

// ScriptStruct TslGame.*22643644f8
// Size: 0x78 (Inherited: 0x00)
struct F*22643644f8 {
	struct FName ItemID; // 0x00(0x08)
	struct F*fa3080db19 EquipPosition; // 0x08(0x08)
	int32 Index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct TArray<struct FStringAssetReference> AttachIcons; // 0x30(0x10)
	bool bNeedAmmoInfo; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 AmmoNumLoaded; // 0x44(0x04)
	int32 AmmoNumUnloaded; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FStringAssetReference AmmoIcon; // 0x50(0x10)
	struct FText AmmoName; // 0x60(0x18)
};

// ScriptStruct TslGame.*0189376e47
// Size: 0x30 (Inherited: 0x00)
struct F*0189376e47 {
	struct FName ID; // 0x00(0x08)
	struct UTexture* Icon; // 0x08(0x20)
	int32 ItemNum; // 0x28(0x04)
	int32 DefensivePower; // 0x2c(0x04)
};

// ScriptStruct TslGame.*412151e013
// Size: 0x38 (Inherited: 0x00)
struct F*412151e013 {
	struct FName ID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FStringAssetReference Icon; // 0x20(0x10)
	bool bOwned; // 0x30(0x01)
	bool bFull; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 Price; // 0x34(0x04)
};

// ScriptStruct TslGame.*c019e40101
// Size: 0x50 (Inherited: 0x00)
struct F*c019e40101 {
	struct FLinearColor Normal; // 0x00(0x10)
	struct FLinearColor Hover; // 0x10(0x10)
	struct FLinearColor Disabled; // 0x20(0x10)
	struct FLinearColor Selected; // 0x30(0x10)
	struct FLinearColor LackCoin; // 0x40(0x10)
};

// ScriptStruct TslGame.*57fee191f9
// Size: 0x50 (Inherited: 0x00)
struct F*57fee191f9 {
	struct FName ID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FStringAssetReference Icon; // 0x20(0x10)
	struct FStringAssetReference AmmoIcon; // 0x30(0x10)
	bool bOwned; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 Price; // 0x44(0x04)
	int32 AmmoNum; // 0x48(0x04)
	enum class EBombScopeInfo Scope; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct TslGame.*097c381c3b
// Size: 0x50 (Inherited: 0x00)
struct F*097c381c3b {
	int32 SquadMemberIndex; // 0x00(0x04)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText PlayerName; // 0x18(0x18)
	struct TArray<struct UTexture2D*> Equips; // 0x30(0x10)
	int32 Coin; // 0x40(0x04)
	int32 DonationUnit; // 0x44(0x04)
	bool IsOwn; // 0x48(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.*d36f967a95
// Size: 0x38 (Inherited: 0x00)
struct F*d36f967a95 {
	int32 *e1fe54ff27; // 0x00(0x04)
	enum class EBombUIPlayerStatusType *31a97d7273; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FText PlayerName; // 0x08(0x18)
	int32 Kill; // 0x20(0x04)
	int32 *e1230da2ed; // 0x24(0x04)
	int32 Death; // 0x28(0x04)
	int32 *710f88d7a8; // 0x2c(0x04)
	bool *00246f98a7; // 0x30(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct TslGame.*32d09e6db9
// Size: 0x60 (Inherited: 0x00)
struct F*32d09e6db9 {
	bool *ab76ab5e42; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*fbb31b0fcc Condition; // 0x08(0x20)
	bool *7ba32516a1; // 0x28(0x01)
	bool *185df7e177; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32 *c9987330d4; // 0x2c(0x04)
	struct F*1706a6cb36 Result; // 0x30(0x30)
};

// ScriptStruct TslGame.*1706a6cb36
// Size: 0x30 (Inherited: 0x00)
struct F*1706a6cb36 {
	int32 *370d439a35; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Message; // 0x08(0x18)
	enum class EBombUITeamStatusType *ee31255f73; // 0x20(0x01)
	bool *ae0710deda; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32 *b4f3298a24; // 0x24(0x04)
	int32 *f569516ae4; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*fbb31b0fcc
// Size: 0x20 (Inherited: 0x00)
struct F*fbb31b0fcc {
	enum class EBombRoundResultConditionType Type; // 0x00(0x01)
	enum class EBombUITeamStatusType *4429108edf; // 0x01(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FText Message; // 0x08(0x18)
};

// ScriptStruct TslGame.*9fc44dc677
// Size: 0x10 (Inherited: 0x00)
struct F*9fc44dc677 {
	struct TArray<enum class EBombUIPlayerStatusType> *bebf15739f; // 0x00(0x10)
};

// ScriptStruct TslGame.*58685cb502
// Size: 0x30 (Inherited: 0x00)
struct F*58685cb502 {
	struct UTexture2D* *2768f1e6de; // 0x00(0x08)
	struct FLinearColor *c0c443d2ca; // 0x08(0x10)
	struct UTexture2D* *37976ab461; // 0x18(0x08)
	struct FLinearColor *6f909329d7; // 0x20(0x10)
};

// ScriptStruct TslGame.*1cc5f9e39e
// Size: 0x10 (Inherited: 0x00)
struct F*1cc5f9e39e {
	struct TArray<struct UObject*> Objects; // 0x00(0x10)
};

// ScriptStruct TslGame.*e064b1b3b8
// Size: 0x20 (Inherited: 0x00)
struct F*e064b1b3b8 {
	int32 CircleNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *8c52458928; // 0x08(0x08)
	struct FName *7fbe9ba948; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*fc88a73405
// Size: 0x10 (Inherited: 0x00)
struct F*fc88a73405 {
	struct FStringAssetReference DataTable; // 0x00(0x10)
};

// ScriptStruct TslGame.*a1817cc07d
// Size: 0x40 (Inherited: 0x00)
struct F*a1817cc07d {
	struct TArray<struct F*aaf8ff5545> Bots; // 0x00(0x10)
	struct FVector StartLocation; // 0x10(0x0c)
	struct FRotator *da38a9a2dc; // 0x1c(0x0c)
	struct FRotator *6829221941; // 0x28(0x0c)
	int32 *bbca9b0217; // 0x34(0x04)
	bool *36cb8b3696; // 0x38(0x01)
	bool *bc9a8c160a; // 0x39(0x01)
	bool *67936cd824; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float Timeout; // 0x3c(0x04)
};

// ScriptStruct TslGame.*aaf8ff5545
// Size: 0x30 (Inherited: 0x00)
struct F*aaf8ff5545 {
	struct FVector SpawnLocation; // 0x00(0x0c)
	struct FRotator *c9bf8272bb; // 0x0c(0x0c)
	uint32 ID; // 0x18(0x04)
	uint32 VehicleId; // 0x1c(0x04)
	struct TArray<struct U*2edd745c43*> Actions; // 0x20(0x10)
};

// ScriptStruct TslGame.*cbfa3de1c7
// Size: 0x08 (Inherited: 0x00)
struct F*cbfa3de1c7 {
	uint32 *d068c8298a; // 0x00(0x04)
	enum class EFollowTargetType TargetType; // 0x04(0x04)
};

// ScriptStruct TslGame.*5956e77277
// Size: 0x18 (Inherited: 0x08)
struct F*5956e77277 : FTableRowBase {
	float *d31cfde1a2; // 0x08(0x04)
	float *87d1300333; // 0x0c(0x04)
	float *0194950fed; // 0x10(0x04)
	float *61527a350f; // 0x14(0x04)
};

// ScriptStruct TslGame.*ec550b1420
// Size: 0x18 (Inherited: 0x00)
struct F*ec550b1420 {
	struct TArray<struct F*41b65235c6> *360ca69650; // 0x00(0x10)
	int8 *652db8e1e0; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*41b65235c6
// Size: 0x18 (Inherited: 0x00)
struct F*41b65235c6 {
	struct TArray<struct FVector> *6a6b53ba4c; // 0x00(0x10)
	int32 *08498a25ab; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*a9a42b0e41
// Size: 0x08 (Inherited: 0x00)
struct F*a9a42b0e41 {
	float Gauge; // 0x00(0x04)
	float *de64bf9fcb; // 0x04(0x04)
};

// ScriptStruct TslGame.*cc794c8ee3
// Size: 0x18 (Inherited: 0x00)
struct F*cc794c8ee3 {
	struct FString *1e012d1585; // 0x00(0x10)
	float *c6f2f879c5; // 0x10(0x04)
	float *85e1289be9; // 0x14(0x04)
};

// ScriptStruct TslGame.*71070281b4
// Size: 0x18 (Inherited: 0x00)
struct F*71070281b4 {
	struct TArray<int32> *a1badc43c1; // 0x00(0x10)
	struct UMaterialInstance* Material; // 0x10(0x08)
};

// ScriptStruct TslGame.*e6cab26f71
// Size: 0x88 (Inherited: 0x00)
struct F*e6cab26f71 {
	enum class *f252d59620 *acadd1048d; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *c7dc10df3e; // 0x08(0x10)
	struct FString *be3e8037f0; // 0x18(0x10)
	struct FString *139df47f3a; // 0x28(0x10)
	struct FString *fcdef8d6a3; // 0x38(0x10)
	struct FString *243bcc1947; // 0x48(0x10)
	struct FString *880e3eaeba; // 0x58(0x10)
	struct FName *6f3f127dd7; // 0x68(0x08)
	struct FName *dca84258e6; // 0x70(0x08)
	struct FName *88856d991a; // 0x78(0x08)
	struct FName *eedaa953c2; // 0x80(0x08)
};

// ScriptStruct TslGame.*3d877804af
// Size: 0x38 (Inherited: 0x08)
struct F*3d877804af : FTableRowBase {
	float EndGameTime; // 0x08(0x04)
	float GeneratorProgressGoal; // 0x0c(0x04)
	struct TArray<float> Survivor_GeneratorProgressInteractionRate; // 0x10(0x10)
	float EscapeProgressGoal; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct F*31b2d85c24> SurvivorStartingItemArray; // 0x28(0x10)
};

// ScriptStruct TslGame.*31b2d85c24
// Size: 0x10 (Inherited: 0x00)
struct F*31b2d85c24 {
	struct FName ItemName; // 0x00(0x08)
	int32 ItemNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*3a7eca4fd3
// Size: 0x20 (Inherited: 0x08)
struct F*3a7eca4fd3 : FTableRowBase {
	int32 *ffb1a656bf; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName ItemName; // 0x10(0x08)
	int32 *1fcbfd4603; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*3526a4125d
// Size: 0x30 (Inherited: 0x00)
struct F*3526a4125d {
	struct TArray<struct UClass*> *58a0fe8388; // 0x00(0x10)
	struct TArray<struct F*a5bcc49d2e> *229e25cfb7; // 0x10(0x10)
	struct UClass* *f23bfe8a1c; // 0x20(0x08)
	bool *264c9162e4; // 0x28(0x01)
	bool *9b40c48e75; // 0x29(0x01)
	bool *d38fee896e; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.*a5bcc49d2e
// Size: 0x28 (Inherited: 0x00)
struct F*a5bcc49d2e {
	struct UClass* *02461d745e; // 0x00(0x08)
	bool *0c0d4773c8; // 0x08(0x01)
	bool *469f729586; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *0170628476; // 0x0c(0x04)
	float *b74ceac8e4; // 0x10(0x04)
	float *3fc7c2c738; // 0x14(0x04)
	float *bc55728735; // 0x18(0x04)
	float *1f8a353d02; // 0x1c(0x04)
	enum class *92e9a571fb *6c4dbaa0cc; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*31c57deab2
// Size: 0x28 (Inherited: 0x00)
struct F*31c57deab2 {
	struct FVector *e51880e4d7; // 0x00(0x0c)
	struct FVector *4e082ab2bf; // 0x0c(0x0c)
	struct FVector *9cdbc0bd1b; // 0x18(0x0c)
	struct FColor Color; // 0x24(0x04)
};

// ScriptStruct TslGame.*dfa7ce22e2
// Size: 0x02 (Inherited: 0x00)
struct F*dfa7ce22e2 {
	enum class EAITaskState *701bdde476; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGame.*479e49238d
// Size: 0x20 (Inherited: 0x08)
struct F*479e49238d : FTableRowBase {
	int32 StatudID; // 0x08(0x04)
	float ZombieATK; // 0x0c(0x04)
	float ZombieHP; // 0x10(0x04)
	float ZombieSPD; // 0x14(0x04)
	float ZombieJumpHeight; // 0x18(0x04)
	int32 OfferedCoinNum; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e2571566b2
// Size: 0x48 (Inherited: 0x08)
struct F*e2571566b2 : FTableRowBase {
	int32 *cb4d1831f3; // 0x08(0x04)
	bool *8ebbbfbda3; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *cdb0c08fa2; // 0x10(0x04)
	float *80e339925b; // 0x14(0x04)
	bool *c4ae11f59e; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 *15834340c3; // 0x1c(0x04)
	bool *1a427b75f5; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *71ec53a38a; // 0x24(0x04)
	float *ae0a862db8; // 0x28(0x04)
	bool *4fe49816d7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *f8d6b8aa41; // 0x30(0x04)
	float *82856217c9; // 0x34(0x04)
	float *dae0638807; // 0x38(0x04)
	float *9151445860; // 0x3c(0x04)
	float *1ec7e1d14e; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*f723ec7609
// Size: 0x48 (Inherited: 0x08)
struct F*f723ec7609 : FTableRowBase {
	int32 StatusID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* Pawn; // 0x10(0x08)
	float ATKMultiplier; // 0x18(0x04)
	float HP; // 0x1c(0x04)
	float SPDMultiplier; // 0x20(0x04)
	float JumpHeightMultiplier; // 0x24(0x04)
	struct TArray<struct F*2f0f5cab46> ExclusiveDropItems; // 0x28(0x10)
	enum class EZombieAttackType AttackType; // 0x38(0x01)
	enum class EZombieTargetingType TargetingType; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float AggressiveDistance; // 0x3c(0x04)
	float SearchRadius; // 0x40(0x04)
	enum class EOPUIMonsterType MonsterType; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct TslGame.*2f0f5cab46
// Size: 0x18 (Inherited: 0x00)
struct F*2f0f5cab46 {
	struct FName DropItemID; // 0x00(0x08)
	int32 DropItemCount; // 0x08(0x04)
	int32 DropItemRate; // 0x0c(0x04)
	float DropProbability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*ea6cccf90d
// Size: 0x58 (Inherited: 0x08)
struct F*ea6cccf90d : FTableRowBase {
	int32 ZDBalanceID; // 0x08(0x04)
	int32 StageNum; // 0x0c(0x04)
	float StageLimitTime; // 0x10(0x04)
	float StageCraftTime; // 0x14(0x04)
	struct TArray<struct F*eb9a8bdf10> WaveList; // 0x18(0x10)
	float ZombieATK; // 0x28(0x04)
	float ZombieHP; // 0x2c(0x04)
	float ZombieSPD; // 0x30(0x04)
	float ZombieJumpHeight; // 0x34(0x04)
	struct TArray<struct F*2f0f5cab46> DropItems; // 0x38(0x10)
	int32 OfferedCoinNum; // 0x48(0x04)
	int32 HeadShotKillReward; // 0x4c(0x04)
	int32 MeleeKillReward; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*eb9a8bdf10
// Size: 0x20 (Inherited: 0x00)
struct F*eb9a8bdf10 {
	int32 WavePerLimitCount; // 0x00(0x04)
	int32 WavePerMaxCount; // 0x04(0x04)
	float WaveInterval; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*71e5fb12ec> ZombieList; // 0x10(0x10)
};

// ScriptStruct TslGame.*71e5fb12ec
// Size: 0x08 (Inherited: 0x00)
struct F*71e5fb12ec {
	int32 ZombieStatusID; // 0x00(0x04)
	int32 Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*642835850c
// Size: 0x08 (Inherited: 0x00)
struct F*642835850c {
	float *d90436f620; // 0x00(0x04)
	enum class EZombieTargetingType TargetingType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*5f8623108b
// Size: 0x18 (Inherited: 0x00)
struct F*5f8623108b {
	int32 *fff90fd540; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*1c43135211> *493934dc58; // 0x08(0x10)
};

// ScriptStruct TslGame.*1c43135211
// Size: 0x28 (Inherited: 0x20)
struct F*1c43135211 : F*73fcef695f {
	struct ATslLobbyWeapon* TslWeapon; // 0x20(0x08)
};

// ScriptStruct TslGame.*73fcef695f
// Size: 0x20 (Inherited: 0x00)
struct F*73fcef695f {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString ItemID; // 0x08(0x10)
	struct UItem* Item; // 0x18(0x08)
};

// ScriptStruct TslGame.*4c2ae93846
// Size: 0x10 (Inherited: 0x00)
struct F*4c2ae93846 {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *c7bf4f1fac; // 0x04(0x04)
	struct UClass* *e3af7e6bc9; // 0x08(0x08)
};

// ScriptStruct TslGame.*35c022984f
// Size: 0x08 (Inherited: 0x00)
struct F*35c022984f {
	bool AttackMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *db014f77e5; // 0x04(0x04)
};

// ScriptStruct TslGame.*2a1676a796
// Size: 0x14 (Inherited: 0x00)
struct F*2a1676a796 {
	struct AActor* Target; // 0x00(0x08)
	float *fb5d874678; // 0x08(0x04)
	bool *d6ed5f4276; // 0x0c(0x01)
	char pad_D[0x7]; // 0x0d(0x07)
};

// ScriptStruct TslGame.*8b28c97f0a
// Size: 0x14 (Inherited: 0x00)
struct F*8b28c97f0a {
	struct FVector Pos; // 0x00(0x0c)
	int32 Reuslt; // 0x0c(0x04)
	float *117114ae1e; // 0x10(0x04)
};

// ScriptStruct TslGame.*46a7d76f4d
// Size: 0x18 (Inherited: 0x00)
struct F*46a7d76f4d {
	float Radius; // 0x00(0x04)
	float Angle; // 0x04(0x04)
	struct FVector Offset; // 0x08(0x0c)
	bool Random; // 0x14(0x01)
	bool IsCheckHeadshot; // 0x15(0x01)
	bool IsShowDebugFan; // 0x16(0x01)
	enum class *c399367f8b PickerTargetType; // 0x17(0x01)
};

// ScriptStruct TslGame.*0b408024f7
// Size: 0x28 (Inherited: 0x00)
struct F*0b408024f7 {
	int32 *a4359eb488; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName AttackId; // 0x08(0x08)
	float *2a696bc7d8; // 0x10(0x04)
	float delayTime; // 0x14(0x04)
	int32 Trigger; // 0x18(0x04)
	char pad_1C[0xc]; // 0x1c(0x0c)
};

// ScriptStruct TslGame.*fd0a6c952f
// Size: 0x18 (Inherited: 0x00)
struct F*fd0a6c952f {
	float Speed; // 0x00(0x04)
	int32 *a4359eb488; // 0x04(0x04)
	float *b968c3cb7f; // 0x08(0x04)
	struct FVector2D *d20dc7a9ae; // 0x0c(0x08)
	char *748d1a3509 : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*849c1f9098
// Size: 0x20 (Inherited: 0x00)
struct F*849c1f9098 {
	float *5ab163c5b0; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*b40fe6e8b8> *1771706f8e; // 0x08(0x10)
	float *ba5df2711f; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*b40fe6e8b8
// Size: 0x10 (Inherited: 0x00)
struct F*b40fe6e8b8 {
	struct FName *b34813f3dc; // 0x00(0x08)
	float *1c09f1d92b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*91af1d6ff8
// Size: 0x988 (Inherited: 0x08)
struct F*91af1d6ff8 : FSlateWidgetStyle {
	struct F*fcc5c4062b *a98eacb272; // 0x08(0x870)
	struct FSlateBrush *be642b5523; // 0x878(0x90)
	struct FSlateColor *d5cb84d773; // 0x908(0x28)
	struct FSlateColor TextColor; // 0x930(0x28)
	struct FSlateSound *ab25f715f9; // 0x958(0x18)
	struct FSlateSound *644fd28684; // 0x970(0x18)
};

// ScriptStruct TslGame.ChromaEventDamage
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventDamage : FChromaEvent {
	enum class EDamageTypeCategory DamageType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DamageValue; // 0x2c(0x04)
};

// ScriptStruct TslGame.ChromaEvent
// Size: 0x28 (Inherited: 0x10)
struct FChromaEvent : FGameEventBase {
	struct FName CategoryName; // 0x10(0x08)
	struct FName AnimationName; // 0x18(0x08)
	bool ShouldPlay; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.ChromaEventBluezone
// Size: 0x28 (Inherited: 0x28)
struct FChromaEventBluezone : FChromaEvent {
};

// ScriptStruct TslGame.ChromaEventGroggy
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventGroggy : FChromaEvent {
	bool VictimIsMe; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.ChromaEventKill
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventKill : FChromaEvent {
	bool VictimIsMe; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.ChromaEventItemPickup
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventItemPickup : FChromaEvent {
	enum class EItemCategory ItemCategory; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.ChromaEventCast
// Size: 0x30 (Inherited: 0x28)
struct FChromaEventCast : FChromaEvent {
	enum class ECastAnim AnimType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.ChromaEventWheel
// Size: 0x28 (Inherited: 0x28)
struct FChromaEventWheel : FChromaEvent {
};

// ScriptStruct TslGame.*307f3f57f5
// Size: 0x1c (Inherited: 0x00)
struct F*307f3f57f5 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.AutoCompleteVehiclePaths
// Size: 0x20 (Inherited: 0x00)
struct FAutoCompleteVehiclePaths {
	struct FString Kind; // 0x00(0x10)
	struct FString path; // 0x10(0x10)
};

// ScriptStruct TslGame.*668d06bbd2
// Size: 0x18 (Inherited: 0x00)
struct F*668d06bbd2 {
	enum class EBodyCarryState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ATslCharacterBase* Target; // 0x08(0x08)
	struct ATslCharacterBase* Parent; // 0x10(0x08)
};

// ScriptStruct TslGame.TrainingUserPlayData
// Size: 0x2c0 (Inherited: 0x08)
struct FTrainingUserPlayData : FBaseUserPlayData {
	struct FString PreviousSessionItemsJsonString; // 0x08(0x10)
	int32 ArenaWinningStreak; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FTrainingData AimTrainingData; // 0x20(0x150)
	struct FTrainingData SoundTrainingData; // 0x170(0x150)
};

// ScriptStruct TslGame.TrainingData
// Size: 0x150 (Inherited: 0x00)
struct FTrainingData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FRangedTrainingData Ranged10TrainingData; // 0x08(0x68)
	struct FRangedTrainingData Ranged50TrainingData; // 0x70(0x68)
	struct FRangedTrainingData Ranged100TrainingData; // 0xd8(0x68)
	struct TArray<struct FSingleTrainingData> TrainingDataList; // 0x140(0x10)
};

// ScriptStruct TslGame.SingleTrainingData
// Size: 0x38 (Inherited: 0x00)
struct FSingleTrainingData {
	int32 TrainingScore; // 0x00(0x04)
	float AimAccuracy; // 0x04(0x04)
	int32 HeadShot; // 0x08(0x04)
	int32 KillCount; // 0x0c(0x04)
	float SoundReactionRate; // 0x10(0x04)
	int32 HeadHitCount; // 0x14(0x04)
	int32 ArmHitCount; // 0x18(0x04)
	int32 TorsoHitCount; // 0x1c(0x04)
	int32 PelvisHitCount; // 0x20(0x04)
	int32 LegHitCount; // 0x24(0x04)
	struct FString WeaponName; // 0x28(0x10)
};

// ScriptStruct TslGame.RangedTrainingData
// Size: 0x68 (Inherited: 0x00)
struct FRangedTrainingData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FSingleTrainingData> RangedTrainingDataList; // 0x08(0x10)
	int32 BestDataRange; // 0x18(0x04)
	float MedianScore; // 0x1c(0x04)
	float AverageScore; // 0x20(0x04)
	int32 MaxScore; // 0x24(0x04)
	int32 MinScore; // 0x28(0x04)
	int32 MaximumDeviation; // 0x2c(0x04)
	struct FSingleTrainingData BestTrainingData; // 0x30(0x38)
};

// ScriptStruct TslGame.*f04484330c
// Size: 0x18 (Inherited: 0x00)
struct F*f04484330c {
	int32 TeleportType; // 0x00(0x04)
	int32 PracticeType; // 0x04(0x04)
	struct FString *f1728520c9; // 0x08(0x10)
};

// ScriptStruct TslGame.*fe6357be91
// Size: 0xe0 (Inherited: 0x00)
struct F*fe6357be91 {
	struct FCustomDamageEvent Event; // 0x00(0xd8)
	float *5e1d5970bb; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct TslGame.CustomDamageEvent
// Size: 0xd8 (Inherited: 0x08)
struct FCustomDamageEvent : FTableRowBase {
	bool *fcdc23b0c4; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FGuid EventID; // 0x0c(0x10)
	bool bEnabled; // 0x1c(0x01)
	bool *f588f0c9ab; // 0x1d(0x01)
	bool *138794a910; // 0x1e(0x01)
	bool *8b31e61a1c; // 0x1f(0x01)
	enum class *cfa246ad19 *31c181007f; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *c416756b17; // 0x24(0x04)
	float *5df6258477; // 0x28(0x04)
	bool *207b34551d; // 0x2c(0x01)
	enum class ECustomDamageEventReactionType *27047b8cd2; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct UClass* *8a036443be; // 0x30(0x20)
	bool *bb0d094ba0; // 0x50(0x01)
	bool *42ce2ac5f2; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct UClass* *6b05515b72; // 0x58(0x20)
	bool *47cfb2e485; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FName *275d56ce68; // 0x80(0x08)
	struct FName *3002775a2a; // 0x88(0x08)
	struct FName *c3bb99f968; // 0x90(0x08)
	bool *9c16bdceb1; // 0x98(0x01)
	bool *e7729b85d0; // 0x99(0x01)
	bool *ef80c768d7; // 0x9a(0x01)
	bool *9e000a95ad; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FName *ddafcd5bb0; // 0xa0(0x08)
	struct FName *22f875a26e; // 0xa8(0x08)
	int32 *2511a8ad23; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FName BoneName; // 0xb8(0x08)
	struct FName *42e833b466; // 0xc0(0x08)
	struct FName *7401b57c11; // 0xc8(0x08)
	enum class ECollisionEnabled *5ebf93b417; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct TslGame.*fabde0891e
// Size: 0x50 (Inherited: 0x00)
struct F*fabde0891e {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*c70b42063e
// Size: 0x04 (Inherited: 0x00)
struct F*c70b42063e {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct TslGame.*40bfdd2d9f
// Size: 0x10 (Inherited: 0x00)
struct F*40bfdd2d9f {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*9704b89566
// Size: 0x5b0 (Inherited: 0x00)
struct F*9704b89566 {
	char pad_0[0x5b0]; // 0x00(0x5b0)
};

// ScriptStruct TslGame.*015925791a
// Size: 0x20 (Inherited: 0x00)
struct F*015925791a {
	struct UPrimitiveComponent* *b27010c55e; // 0x00(0x08)
	struct F*eb9e1759c1 Sphere; // 0x08(0x10)
	float *3185dcb731; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*eb9e1759c1
// Size: 0x10 (Inherited: 0x00)
struct F*eb9e1759c1 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*1a560c68c5
// Size: 0x2c (Inherited: 0x00)
struct F*1a560c68c5 {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*7a3ededc39
// Size: 0x28 (Inherited: 0x00)
struct F*7a3ededc39 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*898ede3d43
// Size: 0x3c (Inherited: 0x00)
struct F*898ede3d43 {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct TslGame.*4e18b1206d
// Size: 0x1c (Inherited: 0x00)
struct F*4e18b1206d {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*4a69aec3e5
// Size: 0x18 (Inherited: 0x00)
struct F*4a69aec3e5 {
	float *61c72a453b; // 0x00(0x04)
	struct FVector2D *0c7ddffc16; // 0x04(0x08)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*553c2a24f6
// Size: 0x28 (Inherited: 0x08)
struct F*553c2a24f6 : FTableRowBase {
	struct FString Category; // 0x08(0x10)
	struct TArray<struct FString> *80d7d88eee; // 0x18(0x10)
};

// ScriptStruct TslGame.*47f59c9fe6
// Size: 0x28 (Inherited: 0x08)
struct F*47f59c9fe6 : FTableRowBase {
	struct FString *390c100f30; // 0x08(0x10)
	struct FString *0245cdcfc1; // 0x18(0x10)
};

// ScriptStruct TslGame.*4c45dafbd7
// Size: 0x50 (Inherited: 0x30)
struct F*4c45dafbd7 : F*abf4abffd6 {
	struct FName TabName; // 0x30(0x08)
	struct FName *9ecdda453d; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct F*25ff28062d TargetHud; // 0x48(0x02)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.*abf4abffd6
// Size: 0x30 (Inherited: 0x08)
struct F*abf4abffd6 : FTableRowBase {
	int32 *8e549d748b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayNameText; // 0x10(0x18)
	struct F*affd6034d2 *6e8b2fceaa; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct TslGame.*affd6034d2
// Size: 0x02 (Inherited: 0x00)
struct F*affd6034d2 {
	bool bKeyboardMouse; // 0x00(0x01)
	bool bGamepad; // 0x01(0x01)
};

// ScriptStruct TslGame.*25ff28062d
// Size: 0x02 (Inherited: 0x00)
struct F*25ff28062d {
	bool bVisibleInLobby; // 0x00(0x01)
	bool bVisibleInGame; // 0x01(0x01)
};

// ScriptStruct TslGame.*408920bbe0
// Size: 0x40 (Inherited: 0x30)
struct F*408920bbe0 : F*abf4abffd6 {
	struct FName TabName; // 0x30(0x08)
	struct FName *9ecdda453d; // 0x38(0x08)
};

// ScriptStruct TslGame.*0a6517b17b
// Size: 0x38 (Inherited: 0x30)
struct F*0a6517b17b : F*abf4abffd6 {
	struct FName TabName; // 0x30(0x08)
};

// ScriptStruct TslGame.*d049aa2886
// Size: 0x1b0 (Inherited: 0x30)
struct F*d049aa2886 : F*abf4abffd6 {
	enum class EOptionTab TabName; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName *9ecdda453d; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct FName ItemName; // 0x48(0x08)
	struct FText DescriptionText; // 0x50(0x18)
	struct UClass* ItemWidgetClass; // 0x68(0x08)
	struct F*0ea5cd51ef *44ef1f2257; // 0x70(0xd0)
	struct UClass* *5f28fdd9d8; // 0x140(0x08)
	bool *25afd4d55e; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TArray<struct F*b59010788e> *566c199562; // 0x150(0x10)
	struct F*e3a136173f KeyBindingDesc; // 0x160(0x38)
	struct FString AdditionalInitParameter; // 0x198(0x10)
	struct F*25ff28062d TargetHud; // 0x1a8(0x02)
	bool bUseIndentation; // 0x1aa(0x01)
	char pad_1AB[0x5]; // 0x1ab(0x05)
};

// ScriptStruct TslGame.*e3a136173f
// Size: 0x38 (Inherited: 0x00)
struct F*e3a136173f {
	enum class ETslGameOptionKeyBindingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName InputName; // 0x08(0x08)
	float InputAxisScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FKey> ForbiddenKeys; // 0x18(0x10)
	struct TArray<struct F*0a606b3e68> DuplicateProhibitionData; // 0x28(0x10)
};

// ScriptStruct TslGame.*0a606b3e68
// Size: 0x18 (Inherited: 0x00)
struct F*0a606b3e68 {
	struct FName DuplicateProhibitedTabName; // 0x00(0x08)
	struct FName DuplicateProhibitedCategoryName; // 0x08(0x08)
	struct FName DuplicateProhibitedItemName; // 0x10(0x08)
};

// ScriptStruct TslGame.*b59010788e
// Size: 0x100 (Inherited: 0x00)
struct F*b59010788e {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
	struct F*0ea5cd51ef *9bbfe58608; // 0x30(0xd0)
};

// ScriptStruct TslGame.*0ea5cd51ef
// Size: 0xd0 (Inherited: 0x00)
struct F*0ea5cd51ef {
	enum class ETslGameOptionSupplementaryType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTexture2D* TextureData; // 0x18(0x20)
	struct UMaterialInterface* *13cc77256b; // 0x38(0x20)
	struct TMap<struct FName, float> *a01c518c52; // 0x58(0x50)
	struct FText *e4b9fc9eb4; // 0xa8(0x18)
	struct FString ExternalLink; // 0xc0(0x10)
};

// ScriptStruct TslGame.*d62b28a672
// Size: 0x30 (Inherited: 0x00)
struct F*d62b28a672 {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
};

// ScriptStruct TslGame.*192d15bd13
// Size: 0x14 (Inherited: 0x00)
struct F*192d15bd13 {
	float Timestamp; // 0x00(0x04)
	float *d15933d7a5; // 0x04(0x04)
	float *29fe318edb; // 0x08(0x04)
	float *7ef957ebab; // 0x0c(0x04)
	float *34a83f84b6; // 0x10(0x04)
};

// ScriptStruct TslGame.*6e0874aeff
// Size: 0x78 (Inherited: 0x00)
struct F*6e0874aeff {
	struct FName root; // 0x00(0x08)
	struct FName Strap; // 0x08(0x08)
	struct FName BackpackRing; // 0x10(0x08)
	struct FVector DefaultStrapLocation; // 0x18(0x0c)
	struct FRotator DefaultStrapRotation; // 0x24(0x0c)
	struct FVector DefaultSeatLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FAlphaBlend Blend; // 0x40(0x38)
};

// ScriptStruct TslGame.*66a4bdc3fc
// Size: 0x68 (Inherited: 0x00)
struct F*66a4bdc3fc {
	enum class EFBRClass ClassType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *ae5e3c66c5; // 0x04(0x04)
	struct F*0724899bd1 *366a7d9b2c; // 0x08(0x30)
	struct TArray<struct F*0724899bd1> *9e6cf7fd54; // 0x38(0x10)
	struct TArray<struct F*d004c81d53> *29d505fc4d; // 0x48(0x10)
	struct TArray<struct F*61100ef4de> *4b90f0c397; // 0x58(0x10)
};

// ScriptStruct TslGame.*61100ef4de
// Size: 0x40 (Inherited: 0x00)
struct F*61100ef4de {
	struct FName WeaponTag; // 0x00(0x08)
	struct F*a477d9422f Anchor; // 0x08(0x28)
	bool bShowToSpectator; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UClass* WidgetClass; // 0x38(0x08)
};

// ScriptStruct TslGame.*d004c81d53
// Size: 0x28 (Inherited: 0x00)
struct F*d004c81d53 {
	struct UClass* IconWidgetClass; // 0x00(0x08)
	enum class EEquipSlotID *477653c13d; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 *63b5c982ac; // 0x0c(0x04)
	struct FName ItemID; // 0x10(0x08)
	int32 *5e1f8832fc; // 0x18(0x04)
	enum class *abdfb270ac *9c44b3ba31; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName *f1ce81b134; // 0x20(0x08)
};

// ScriptStruct TslGame.*0724899bd1
// Size: 0x30 (Inherited: 0x00)
struct F*0724899bd1 {
	struct FName *c5a1d5561f; // 0x00(0x08)
	struct F*d004c81d53 IconSetting; // 0x08(0x28)
};

// ScriptStruct TslGame.*91f667323f
// Size: 0x10 (Inherited: 0x00)
struct F*91f667323f {
	struct FName SocketName; // 0x00(0x08)
	int32 *99d18d8064; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*280f36e846
// Size: 0x0c (Inherited: 0x00)
struct F*280f36e846 {
	float *02ed5a6b71; // 0x00(0x04)
	float *41c75c69db; // 0x04(0x04)
	float *15124ba8dc; // 0x08(0x04)
};

// ScriptStruct TslGame.*7bc9c63170
// Size: 0x2c (Inherited: 0x00)
struct F*7bc9c63170 {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*469847ca2a
// Size: 0x38 (Inherited: 0x00)
struct F*469847ca2a {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*800079f664
// Size: 0x50 (Inherited: 0x00)
struct F*800079f664 {
	struct F*54c5e763a0 *e8842e0af7; // 0x00(0x08)
	struct F*54c5e763a0 *d5c8b8ae96; // 0x08(0x08)
	struct F*12b601d39a *3da1f7f130; // 0x10(0x10)
	struct F*12b601d39a *fe6bb877ee; // 0x20(0x10)
	struct UCurveFloat* *c1a708c2c0; // 0x30(0x08)
	float *64de5f4c96; // 0x38(0x04)
	float *cf6398d07c; // 0x3c(0x04)
	float *bcab00e59a; // 0x40(0x04)
	float *678c09249c; // 0x44(0x04)
	float *9ec6369e1d; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*8b37f65554
// Size: 0x2c (Inherited: 0x00)
struct F*8b37f65554 {
	struct FVector *518cf6e06c; // 0x00(0x0c)
	float GravityScale; // 0x0c(0x04)
	bool *10f737dc70; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *fd9e641f57; // 0x14(0x04)
	float *73c9e7a292; // 0x18(0x04)
	struct F*12b601d39a *49a8cbd27d; // 0x1c(0x10)
};

// ScriptStruct TslGame.*0484a0c0d0
// Size: 0xb0 (Inherited: 0x00)
struct F*0484a0c0d0 {
	float *37e5c6d581; // 0x00(0x04)
	struct F*12b601d39a *0138fd4f5b; // 0x04(0x10)
	struct FVector *b6346e7dd9; // 0x14(0x0c)
	struct F*12b601d39a *59a599344c; // 0x20(0x10)
	struct FVector *65f6dbb298; // 0x30(0x0c)
	struct F*12b601d39a *5d9bf7cf80; // 0x3c(0x10)
	struct FVector *9d62594e01; // 0x4c(0x0c)
	float *ad8a77cb6f; // 0x58(0x04)
	float *5660f7e083; // 0x5c(0x04)
	struct FVector *b8e4ceef08; // 0x60(0x0c)
	struct F*12b601d39a *aaa20fbd1f; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UCurveFloat* *04be2eff24; // 0x80(0x08)
	struct UCurveFloat* *d3049b75fe; // 0x88(0x08)
	struct FVector *9ba65a5199; // 0x90(0x0c)
	struct F*12b601d39a *75d5aaa3b8; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct TslGame.*d9fdb5c7ec
// Size: 0x38 (Inherited: 0x00)
struct F*d9fdb5c7ec {
	float *e123fb2ad0; // 0x00(0x04)
	float *a0849aff46; // 0x04(0x04)
	float *335661d523; // 0x08(0x04)
	struct FVector *c8d7738ef1; // 0x0c(0x0c)
	struct F*12b601d39a *b362a2e174; // 0x18(0x10)
	struct U*226eb62c2c* *570a332dec; // 0x28(0x08)
	struct U*226eb62c2c* *377d4c52d6; // 0x30(0x08)
};

// ScriptStruct TslGame.*7930c333c8
// Size: 0x90 (Inherited: 0x00)
struct F*7930c333c8 {
	float *37c84ac787; // 0x00(0x04)
	float *509e13d7d8; // 0x04(0x04)
	float *e123fb2ad0; // 0x08(0x04)
	float *a0849aff46; // 0x0c(0x04)
	struct F*12b601d39a *ce6a855887; // 0x10(0x10)
	struct F*12b601d39a *81b77ed314; // 0x20(0x10)
	struct F*12b601d39a *b141d75aa0; // 0x30(0x10)
	struct F*12b601d39a *cb5187cec9; // 0x40(0x10)
	struct F*12b601d39a *56262140f6; // 0x50(0x10)
	struct F*12b601d39a *e2edc7c41c; // 0x60(0x10)
	struct F*12b601d39a *e99db962df; // 0x70(0x10)
	struct F*12b601d39a *ae84b5e17b; // 0x80(0x10)
};

// ScriptStruct TslGame.*0064d71ded
// Size: 0x0c (Inherited: 0x00)
struct F*0064d71ded {
	float *9c18880981; // 0x00(0x04)
	float *378d503f7b; // 0x04(0x04)
	float *8092553c05; // 0x08(0x04)
};

// ScriptStruct TslGame.*8b289044bf
// Size: 0x38 (Inherited: 0x00)
struct F*8b289044bf {
	struct F*12b601d39a *e155523d4f; // 0x00(0x10)
	struct F*12b601d39a *c655308ba4; // 0x10(0x10)
	struct UCurveFloat* *fae8a770cd; // 0x20(0x08)
	struct U*226eb62c2c* *863b0be409; // 0x28(0x08)
	float *0d72e21642; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*9965836ba5
// Size: 0xb0 (Inherited: 0x00)
struct F*9965836ba5 {
	float *335661d523; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct U*226eb62c2c* *a320ed741c; // 0x08(0x08)
	struct F*12b601d39a *09b310b69d; // 0x10(0x10)
	struct FVector *c8d7738ef1; // 0x20(0x0c)
	struct FVector *f2f9638e2e; // 0x2c(0x0c)
	struct F*12b601d39a *356c4eea81; // 0x38(0x10)
	struct FVector *155b3ecdf8; // 0x48(0x0c)
	struct F*12b601d39a *e2fd9c5cc3; // 0x54(0x10)
	struct F*12b601d39a *f8e8e82727; // 0x64(0x10)
	struct F*12b601d39a *0899760c38; // 0x74(0x10)
	struct F*12b601d39a *1580f57e7a; // 0x84(0x10)
	float *a7e1195f1d; // 0x94(0x04)
	float *206ccbb475; // 0x98(0x04)
	float *d76423867e; // 0x9c(0x04)
	struct F*54c5e763a0 *eaf1859556; // 0xa0(0x08)
	struct F*54c5e763a0 *5ffa5b7c94; // 0xa8(0x08)
};

// ScriptStruct TslGame.*3123968522
// Size: 0x24 (Inherited: 0x00)
struct F*3123968522 {
	struct F*54c5e763a0 *d8043caf8d; // 0x00(0x08)
	struct F*54c5e763a0 *10bc21c297; // 0x08(0x08)
	struct F*54c5e763a0 *fda307c44c; // 0x10(0x08)
	struct F*54c5e763a0 *78962640ad; // 0x18(0x08)
	bool *cb05e41521; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*93926b1063
// Size: 0x10 (Inherited: 0x00)
struct F*93926b1063 {
	float Throttle; // 0x00(0x04)
	struct FVector *5bb9e9e575; // 0x04(0x0c)
};

// ScriptStruct TslGame.*fc01bef036
// Size: 0x14 (Inherited: 0x00)
struct F*fc01bef036 {
	float *d85dd6fe3d; // 0x00(0x04)
	float *cd9fe6c904; // 0x04(0x04)
	struct FVector *c3f6db80a5; // 0x08(0x0c)
};

// ScriptStruct TslGame.*8fe2ca9e7e
// Size: 0x20 (Inherited: 0x00)
struct F*8fe2ca9e7e {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UParticleSystem* ParticleSystem_Console; // 0x08(0x08)
	struct UParticleSystem* ParticleSystem_KoreanAndChinese; // 0x10(0x08)
	float MinRadius; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*fccfdb5241
// Size: 0x30 (Inherited: 0x00)
struct F*fccfdb5241 {
	struct UDecalComponent* *5060a20c03; // 0x00(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x08(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct TslGame.*17f6e32919
// Size: 0xc8 (Inherited: 0xb0)
struct F*17f6e32919 : F*6c20ef31e6 {
	struct TArray<struct F*d6f402fe19> Array; // 0xb0(0x10)
	struct ATslFuelPuddleContainer* Owner; // 0xc0(0x08)
};

// ScriptStruct TslGame.*d6f402fe19
// Size: 0x48 (Inherited: 0x0c)
struct F*d6f402fe19 : F*fb4b8581ea {
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float *4058c59226; // 0x1c(0x04)
	float *c2f1717a65; // 0x20(0x04)
	bool *5136c53d29; // 0x24(0x01)
	bool *9b03a87116; // 0x25(0x01)
	bool *8a9a233bb8; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	int32 *0cb390b815; // 0x28(0x04)
	float *0eed5abaa3; // 0x2c(0x04)
	struct FVector *a81b594442; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct U*aebeb71e5b* *8e6f76ecb7; // 0x40(0x08)
};

// ScriptStruct TslGame.*310b8ca368
// Size: 0x18 (Inherited: 0x00)
struct F*310b8ca368 {
	struct FString MapName; // 0x00(0x10)
	struct UClass* RestrictedAreasActorClass; // 0x10(0x08)
};

// ScriptStruct TslGame.*8fc76d6cf1
// Size: 0x28 (Inherited: 0x08)
struct F*8fc76d6cf1 : FTableRowBase {
	struct FString MasterItemID; // 0x08(0x10)
	struct TArray<struct F*e92a1e5cb3> AttachDroppedItems; // 0x18(0x10)
};

// ScriptStruct TslGame.*e92a1e5cb3
// Size: 0x10 (Inherited: 0x00)
struct F*e92a1e5cb3 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1ed3ade2de
// Size: 0x20 (Inherited: 0x08)
struct F*1ed3ade2de : FTableRowBase {
	int32 RandNumber; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*e92a1e5cb3> DroppedItems; // 0x10(0x10)
};

// ScriptStruct TslGame.*562ad9566d
// Size: 0x14 (Inherited: 0x00)
struct F*562ad9566d {
	int32 *808df62b5a; // 0x00(0x04)
	int32 *118b5a8436; // 0x04(0x04)
	enum class EOutGamePlatformProvider Platform; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct ATslRacingPlayerState* PlayerState; // 0x0c(0x08)
};

// ScriptStruct TslGame.*85fac4cf87
// Size: 0x08 (Inherited: 0x00)
struct F*85fac4cf87 {
	float GaugeDecreaseAmount; // 0x00(0x04)
	float GaugeDecreaseInterval; // 0x04(0x04)
};

// ScriptStruct TslGame.*57e8425b65
// Size: 0x10 (Inherited: 0x00)
struct F*57e8425b65 {
	struct TArray<struct FSLBVaultItem> Vault; // 0x00(0x10)
};

// ScriptStruct TslGame.SLBVaultItem
// Size: 0x28 (Inherited: 0x00)
struct FSLBVaultItem {
	struct FName ItemID; // 0x00(0x08)
	struct FName SkinItemId; // 0x08(0x08)
	struct TArray<struct FName> Attachments; // 0x10(0x10)
	int32 StackCount; // 0x20(0x04)
	bool bLastEquipped; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGame.*d85e0b7012
// Size: 0x10 (Inherited: 0x00)
struct F*d85e0b7012 {
	struct FName ItemID; // 0x00(0x08)
	bool *d57ee211fa; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*3feaa87bc9
// Size: 0x10 (Inherited: 0x00)
struct F*3feaa87bc9 {
	enum class ERespawnType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* Class; // 0x08(0x08)
};

// ScriptStruct TslGame.*b609eb09df
// Size: 0x10 (Inherited: 0x00)
struct F*b609eb09df {
	struct ATslZombieDefensePlayerController* Killer; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*45005045aa
// Size: 0x10 (Inherited: 0x00)
struct F*45005045aa {
	struct UClass* Controller; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
};

// ScriptStruct TslGame.*6eee730df9
// Size: 0x08 (Inherited: 0x00)
struct F*6eee730df9 {
	enum class *e75b202d9c Rule; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*9085ebd815
// Size: 0x10 (Inherited: 0x00)
struct F*9085ebd815 {
	struct TArray<struct UItem*> *52116843f5; // 0x00(0x10)
};

// ScriptStruct TslGame.*eeb3e433f9
// Size: 0x10 (Inherited: 0x00)
struct F*eeb3e433f9 {
	int32 *9cfe482607; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslZombiePlayerStartAndRespawn* *2b5b266f6b; // 0x08(0x08)
};

// ScriptStruct TslGame.*cf60266d32
// Size: 0x18 (Inherited: 0x00)
struct F*cf60266d32 {
	enum class EAutoRecoveryType AutoType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *b349610849; // 0x04(0x04)
	float *d8acf38dc7; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *6ea5d1733c; // 0x10(0x08)
};

// ScriptStruct TslGame.*9e0be7d5dd
// Size: 0x20 (Inherited: 0x08)
struct F*9e0be7d5dd : FTableRowBase {
	int32 *b9728624e2; // 0x08(0x04)
	float *15f0b2debf; // 0x0c(0x04)
	struct TArray<struct F*eb91e21c29> *4619f8c5d9; // 0x10(0x10)
};

// ScriptStruct TslGame.*deaa698225
// Size: 0x40 (Inherited: 0x00)
struct F*deaa698225 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*dc189647f5
// Size: 0x10 (Inherited: 0x00)
struct F*dc189647f5 {
	struct FName SocketName; // 0x00(0x08)
	struct FName *3e39145d2e; // 0x08(0x08)
};

// ScriptStruct TslGame.*89f713f8e0
// Size: 0x14 (Inherited: 0x00)
struct F*89f713f8e0 {
	struct FVector2D StartPoint; // 0x00(0x08)
	struct FVector2D EndPoint; // 0x08(0x08)
	float Angle; // 0x10(0x04)
};

// ScriptStruct TslGame.*d5564db880
// Size: 0x10 (Inherited: 0x00)
struct F*d5564db880 {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	bool *bd2364574e; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*520dd0ba53
// Size: 0x10 (Inherited: 0x08)
struct F*520dd0ba53 : FTableRowBase {
	int32 RemainHelathPercent; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1ef1668999
// Size: 0x10 (Inherited: 0x00)
struct F*1ef1668999 {
	struct TArray<struct ATslRacingCheckPoint*> CheckPoints; // 0x00(0x10)
};

// ScriptStruct TslGame.*470735ea93
// Size: 0x18 (Inherited: 0x00)
struct F*470735ea93 {
	struct FName *7374cf5819; // 0x00(0x08)
	struct TArray<struct UTexture2D*> *6a63316f03; // 0x08(0x10)
};

// ScriptStruct TslGame.*28a5e57b8b
// Size: 0x10 (Inherited: 0x00)
struct F*28a5e57b8b {
	struct FName ActionName; // 0x00(0x08)
	enum class *1148c7239b KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*c840f96b20
// Size: 0x38 (Inherited: 0x00)
struct F*c840f96b20 {
	struct TArray<int32> Kills; // 0x00(0x10)
	int32 Death; // 0x10(0x04)
	int32 *e1230da2ed; // 0x14(0x04)
	int32 *7fc60bfdd8; // 0x18(0x04)
	int32 *53bf9d9be0; // 0x1c(0x04)
	int32 *62e3257a23; // 0x20(0x04)
	int32 *b9ef9df2d7; // 0x24(0x04)
	float *71e36dc2a0; // 0x28(0x04)
	char pad_2C[0xc]; // 0x2c(0x0c)
};

// ScriptStruct TslGame.*51e1e128f7
// Size: 0x08 (Inherited: 0x00)
struct F*51e1e128f7 {
	int32 *abd96ae1b9; // 0x00(0x04)
	enum class ETslBombMatchWinType *30a32825d6; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*8cc52c3391
// Size: 0x20 (Inherited: 0x00)
struct F*8cc52c3391 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*d832209f02
// Size: 0x10 (Inherited: 0x00)
struct F*d832209f02 {
	struct FName *a9548e3534; // 0x00(0x08)
	struct FName *63f26043a9; // 0x08(0x08)
};

// ScriptStruct TslGame.*fc898475a0
// Size: 0x48 (Inherited: 0x00)
struct F*fc898475a0 {
	struct FString Category; // 0x00(0x10)
	struct FString Command; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FLinearColor Color; // 0x30(0x10)
	enum class *d0acc11e25 Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 DefaultParameter; // 0x44(0x04)
};

// ScriptStruct TslGame.*f4f588f745
// Size: 0x90 (Inherited: 0x00)
struct F*f4f588f745 {
	struct UParticleSystem* *7135601710; // 0x00(0x08)
	struct FName *7333a24aad; // 0x08(0x08)
	struct FName *fae311f4b0; // 0x10(0x08)
	struct FName *bbf669fd86; // 0x18(0x08)
	struct TMap<int32, struct FVector> *0664d25d74; // 0x20(0x50)
	float *0f34ffc6ed; // 0x70(0x04)
	float *d04244e81c; // 0x74(0x04)
	float *48bd7113ea; // 0x78(0x04)
	float *1c64b1f050; // 0x7c(0x04)
	float *8be5c09995; // 0x80(0x04)
	float *768b42f114; // 0x84(0x04)
	float *d58704df6d; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.*ebb70276ff
// Size: 0x18 (Inherited: 0x00)
struct F*ebb70276ff {
	struct FFloatInterval HealthPercentRange; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct TslGame.*5a279fe222
// Size: 0x14 (Inherited: 0x00)
struct F*5a279fe222 {
	float *35724e5376; // 0x00(0x04)
	float *46c5f5bb9c; // 0x04(0x04)
	float *d93ef95cb7; // 0x08(0x04)
	char pad_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct TslGame.*dc94d4cd22
// Size: 0x08 (Inherited: 0x00)
struct F*dc94d4cd22 {
	float DragCoefficient; // 0x00(0x04)
	float SectionArea; // 0x04(0x04)
};

// ScriptStruct TslGame.*ec5f43c9ba
// Size: 0x08 (Inherited: 0x00)
struct F*ec5f43c9ba {
	bool *56ec257105; // 0x00(0x01)
	enum class *f3561aaaf5 *de791aff19; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *c7e272d20c; // 0x04(0x04)
};

// ScriptStruct TslGame.*212b455c3e
// Size: 0x18 (Inherited: 0x00)
struct F*212b455c3e {
	struct UChildActorComponent* ChildActorComponent; // 0x00(0x08)
	struct FVector *d4fe150bc3; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*6a92a659d0
// Size: 0xb8 (Inherited: 0x00)
struct F*6a92a659d0 {
	char pad_0[0xa0]; // 0x00(0xa0)
	struct AController* *68ca7b3270; // 0xa0(0x08)
	struct AActor* *965bf86607; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct TslGame.*bcb9b7db94
// Size: 0x28 (Inherited: 0x00)
struct F*bcb9b7db94 {
	struct FName *c5a1d5561f; // 0x00(0x08)
	struct TArray<struct F*18f98e494a> *5914f4ce2a; // 0x08(0x10)
	struct TArray<enum class EWeaponAttachmentSlotID> *df2f835653; // 0x18(0x10)
};

// ScriptStruct TslGame.*fe5ef30f63
// Size: 0x20 (Inherited: 0x00)
struct F*fe5ef30f63 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*e3502493e2
// Size: 0x18 (Inherited: 0x00)
struct F*e3502493e2 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*690d66fe0f
// Size: 0x03 (Inherited: 0x00)
struct F*690d66fe0f {
	bool *bd15847438; // 0x00(0x01)
	bool *ae8f0071e2; // 0x01(0x01)
	bool *76e784f754; // 0x02(0x01)
};

// ScriptStruct TslGame.*fbb1bafe19
// Size: 0x20 (Inherited: 0x00)
struct F*fbb1bafe19 {
	struct FString WeatherId; // 0x00(0x10)
	int32 Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName WeatherLevel; // 0x18(0x08)
};

// ScriptStruct TslGame.*291d6b0c3e
// Size: 0x50 (Inherited: 0x00)
struct F*291d6b0c3e {
	int32 *3ef09d35f0; // 0x00(0x04)
	float *9a509089f2; // 0x04(0x04)
	struct TArray<struct FVector> *24829fbcdc; // 0x08(0x10)
	int32 *c16c35bfde; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> *f184cf50da; // 0x20(0x10)
	struct TArray<bool> *45ae6308f0; // 0x30(0x10)
	struct TArray<struct UClass*> *e7395e7153; // 0x40(0x10)
};

// ScriptStruct TslGame.*17e9683c50
// Size: 0x30 (Inherited: 0x00)
struct F*17e9683c50 {
	struct ATslLivingThingVolume* *afc26d3170; // 0x00(0x08)
	int32 *3ef09d35f0; // 0x08(0x04)
	float *9a509089f2; // 0x0c(0x04)
	int32 *53457f50d9; // 0x10(0x04)
	float SpawnRate; // 0x14(0x04)
	int32 RandomSeed; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct F*c1c9626a0a> *4e7bd9f54b; // 0x20(0x10)
};

// ScriptStruct TslGame.*c1c9626a0a
// Size: 0x18 (Inherited: 0x00)
struct F*c1c9626a0a {
	int32 *5fa7c2b12e; // 0x00(0x04)
	float *1e5baf55fd; // 0x04(0x04)
	struct TArray<struct F*2a584d33fc> *e40247479b; // 0x08(0x10)
};

// ScriptStruct TslGame.*2a584d33fc
// Size: 0x18 (Inherited: 0x00)
struct F*2a584d33fc {
	float ServerTimeSeconds; // 0x00(0x04)
	bool EventID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<bool> Params; // 0x08(0x10)
};

// ScriptStruct TslGame.*4c42059f36
// Size: 0x08 (Inherited: 0x00)
struct F*4c42059f36 {
	enum class ELivingThingThreatLevel ThreatLevel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LastServerTimeSeconds; // 0x04(0x04)
};

// ScriptStruct TslGame.*6960d70015
// Size: 0x40 (Inherited: 0x00)
struct F*6960d70015 {
	int32 NetGUID; // 0x00(0x04)
	float SpawnTimeSeconds; // 0x04(0x04)
	float DestroyTimeSeconds; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator SpawnRotation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UClass* ActorClass; // 0x28(0x08)
	struct TArray<struct F*2a584d33fc> EventArray; // 0x30(0x10)
};

// ScriptStruct TslGame.*5f6eded50e
// Size: 0x30 (Inherited: 0x00)
struct F*5f6eded50e {
	struct TArray<struct F*ee7d4a030b> TextureParams; // 0x00(0x10)
	struct TArray<struct F*1dff8d8ad2> ScalarParams; // 0x10(0x10)
	struct TArray<struct F*e2d6953fc4> VectorParams; // 0x20(0x10)
};

// ScriptStruct TslGame.*e2d6953fc4
// Size: 0x18 (Inherited: 0x00)
struct F*e2d6953fc4 {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct TslGame.*1dff8d8ad2
// Size: 0x10 (Inherited: 0x00)
struct F*1dff8d8ad2 {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ee7d4a030b
// Size: 0x10 (Inherited: 0x00)
struct F*ee7d4a030b {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Value; // 0x08(0x08)
};

// ScriptStruct TslGame.*55769eb1bc
// Size: 0x10 (Inherited: 0x00)
struct F*55769eb1bc {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
};

// ScriptStruct TslGame.*65a6fc3bf3
// Size: 0x18 (Inherited: 0x00)
struct F*65a6fc3bf3 {
	struct FName AnimName; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	float ServerTimeSeconds; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*e633f064bd
// Size: 0x0c (Inherited: 0x00)
struct F*e633f064bd {
	float *2865448657; // 0x00(0x04)
	int32 *5fa7c2b12e; // 0x04(0x04)
	float *7daea27194; // 0x08(0x04)
};

// ScriptStruct TslGame.*b3010676d5
// Size: 0x38 (Inherited: 0x00)
struct F*b3010676d5 {
	float *2865448657; // 0x00(0x04)
	int32 *5fa7c2b12e; // 0x04(0x04)
	float *9a509089f2; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator *c9bf8272bb; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FStringAssetReference ActorClass; // 0x28(0x10)
};

// ScriptStruct TslGame.*98850f31b4
// Size: 0x30 (Inherited: 0x00)
struct F*98850f31b4 {
	float *2865448657; // 0x00(0x04)
	float *5441deb6c0; // 0x04(0x04)
	int32 EventID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<bool> *b9f0d6fb5f; // 0x10(0x10)
	struct TArray<int32> NetGUIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*c4f215b719
// Size: 0x38 (Inherited: 0x08)
struct F*c4f215b719 : FTableRowBase {
	float CellSize; // 0x08(0x04)
	struct FBoxSphereBounds VolumeBounds; // 0x0c(0x1c)
	struct TArray<struct F*c03c4c4b6e> Scanlines; // 0x28(0x10)
};

// ScriptStruct TslGame.*c03c4c4b6e
// Size: 0x30 (Inherited: 0x00)
struct F*c03c4c4b6e {
	int32 *9944526ad3; // 0x00(0x04)
	int32 *e61922d463; // 0x04(0x04)
	int32 *b0a230914b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int16> *74a1b56c32; // 0x10(0x10)
	struct TArray<float> LocationZ; // 0x20(0x10)
};

// ScriptStruct TslGame.*b23842eaca
// Size: 0x10 (Inherited: 0x00)
struct F*b23842eaca {
	struct UClass* Class; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	bool *594bff717e; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*dc896cb909
// Size: 0x18 (Inherited: 0x08)
struct F*dc896cb909 : FTableRowBase {
	struct UAnimMontage* ReadyPose; // 0x08(0x08)
	struct UAnimMontage* NotReadyPose; // 0x10(0x08)
};

// ScriptStruct TslGame.WebPopupParam
// Size: 0x38 (Inherited: 0x00)
struct FWebPopupParam {
	struct FString PopupId; // 0x00(0x10)
	struct FString Uri; // 0x10(0x10)
	float X; // 0x20(0x04)
	float Y; // 0x24(0x04)
	float Width; // 0x28(0x04)
	float Height; // 0x2c(0x04)
	struct FColor BackgroundColor; // 0x30(0x04)
	bool UseBackgroundColor; // 0x34(0x01)
	bool ShowButtonGroup; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct TslGame.*7311df176f
// Size: 0x10 (Inherited: 0x00)
struct F*7311df176f {
	struct TArray<struct U*ff47d0e8f4*> LODs; // 0x00(0x10)
};

// ScriptStruct TslGame.*8bf1e89ae0
// Size: 0x1b8 (Inherited: 0x08)
struct F*8bf1e89ae0 : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush *4cced02b0a; // 0x98(0x90)
	struct FSlateBrush *62e7902daf; // 0x128(0x90)
};

// ScriptStruct TslGame.*48aaeb5806
// Size: 0x38 (Inherited: 0x08)
struct F*48aaeb5806 : FSlateWidgetStyle {
	struct FSlateSound *fd5b134e9d; // 0x08(0x18)
	struct FSlateSound *8480f0bbec; // 0x20(0x18)
};

// ScriptStruct TslGame.*43cb8a81c6
// Size: 0x218 (Inherited: 0x08)
struct F*43cb8a81c6 : FSlateWidgetStyle {
	struct FSlateBrush *a3561501e5; // 0x08(0x90)
	struct FSlateBrush *ee5f532b7b; // 0x98(0x90)
	struct FSlateBrush *490f5bf789; // 0x128(0x90)
	struct FSlateSound *61bc126f93; // 0x1b8(0x18)
	struct FSlateSound *3a5f2ef029; // 0x1d0(0x18)
	struct FSlateSound *9b0a99792c; // 0x1e8(0x18)
	struct FSlateSound *2d9a42c8ef; // 0x200(0x18)
};

// ScriptStruct TslGame.*1dc6b6469c
// Size: 0x50 (Inherited: 0x00)
struct F*1dc6b6469c {
	struct FName MonsterName; // 0x00(0x08)
	struct FString NormalKill; // 0x08(0x10)
	struct FString DBNOKill; // 0x18(0x10)
	struct FString MonsterL10Name; // 0x28(0x10)
	struct UClass* DamageType; // 0x38(0x08)
	struct UTexture* DamageCauserIcon; // 0x40(0x08)
	float IconRatio; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*55887a3e04
// Size: 0x30 (Inherited: 0x20)
struct F*55887a3e04 : F*0270e984ce {
	struct FVector *be7dabfff7; // 0x20(0x0c)
	float Scale; // 0x2c(0x04)
};

// ScriptStruct TslGame.*0270e984ce
// Size: 0x20 (Inherited: 0x00)
struct F*0270e984ce {
	struct FString String; // 0x00(0x10)
	float Duration; // 0x10(0x04)
	struct FColor Color; // 0x14(0x04)
	int32 *cb67164e89; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*5950081b0f
// Size: 0x28 (Inherited: 0x00)
struct F*5950081b0f {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *a36facb75d; // 0x1c(0x04)
	float Width; // 0x20(0x04)
	int32 *cb67164e89; // 0x24(0x04)
};

// ScriptStruct TslGame.*4a218eb373
// Size: 0x24 (Inherited: 0x00)
struct F*4a218eb373 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector2D Size; // 0x0c(0x08)
	struct FColor Color; // 0x14(0x04)
	float *a36facb75d; // 0x18(0x04)
	float Width; // 0x1c(0x04)
	int32 *cb67164e89; // 0x20(0x04)
};

// ScriptStruct TslGame.*d1e6985269
// Size: 0x30 (Inherited: 0x00)
struct F*d1e6985269 {
	struct FVector Origin; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float HalfHeight; // 0x1c(0x04)
	struct FColor Color; // 0x20(0x04)
	float *a36facb75d; // 0x24(0x04)
	float Width; // 0x28(0x04)
	int32 *cb67164e89; // 0x2c(0x04)
};

// ScriptStruct TslGame.*e7cd8704c3
// Size: 0x20 (Inherited: 0x00)
struct F*e7cd8704c3 {
	struct FVector Origin; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
	float *a36facb75d; // 0x14(0x04)
	float Width; // 0x18(0x04)
	int32 *cb67164e89; // 0x1c(0x04)
};

// ScriptStruct TslGame.*fbb41e7ed9
// Size: 0x2c (Inherited: 0x28)
struct F*fbb41e7ed9 : F*46996d52c0 {
	float ArrowSize; // 0x28(0x04)
};

// ScriptStruct TslGame.*46996d52c0
// Size: 0x28 (Inherited: 0x00)
struct F*46996d52c0 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *a36facb75d; // 0x1c(0x04)
	float Width; // 0x20(0x04)
	int32 *cb67164e89; // 0x24(0x04)
};

// ScriptStruct TslGame.*288d9bfa8d
// Size: 0x78 (Inherited: 0x08)
struct F*288d9bfa8d : FTableRowBase {
	struct FName SpawnEventName; // 0x08(0x08)
	enum class ETslSLBZombieSpawnType SpawnType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TMap<struct FName, struct F*d30498e29c> ZombieSpawnerSpawnDataMap; // 0x18(0x50)
	bool bPlayBGM; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float SpawnTime; // 0x6c(0x04)
	bool bDisablePatrol; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGame.*d30498e29c
// Size: 0x28 (Inherited: 0x00)
struct F*d30498e29c {
	struct TArray<struct F*16517c4077> ZombieSpawnDatas; // 0x00(0x10)
	struct F*59b190b401 ZombieOverrideData; // 0x10(0x10)
	int32 GroupID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*59b190b401
// Size: 0x10 (Inherited: 0x00)
struct F*59b190b401 {
	float *284ed79547; // 0x00(0x04)
	float *983d52124b; // 0x04(0x04)
	float *3d65028d04; // 0x08(0x04)
	int32 *9725ceb08f; // 0x0c(0x04)
};

// ScriptStruct TslGame.*16517c4077
// Size: 0x50 (Inherited: 0x00)
struct F*16517c4077 {
	struct FName SLBZombieStatusName; // 0x00(0x08)
	struct FName SLBOverrideZombieMovementName; // 0x08(0x08)
	struct UBehaviorTree* OverrideBehaviorTree; // 0x10(0x08)
	int32 SpawnCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> BuffTargetSpawnerNameOverride; // 0x20(0x10)
	struct TArray<struct F*6b7e4dd77e> RunnerSummonDatas; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct TslGame.*6b7e4dd77e
// Size: 0x18 (Inherited: 0x00)
struct F*6b7e4dd77e {
	struct FName *1d403e98dc; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
	int32 SpawnCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*831424f17f
// Size: 0x58 (Inherited: 0x48)
struct F*831424f17f : F*e2571566b2 {
	struct FName *4edd5b3122; // 0x48(0x08)
	enum class ETslSLBStage Stage; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.*669a5de12e
// Size: 0x78 (Inherited: 0x48)
struct F*669a5de12e : F*f723ec7609 {
	struct FName StatusName; // 0x48(0x08)
	enum class ETslSLBStage Stage; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float ThrowDistance; // 0x54(0x04)
	int32 EnableRoamingDoorOpen; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UBehaviorTree* RootBehaviorTree; // 0x60(0x08)
	struct TArray<struct UClass*> ImmunBuffList; // 0x68(0x10)
};

// ScriptStruct TslGame.*f7c158b531
// Size: 0x168 (Inherited: 0x00)
struct F*f7c158b531 {
	float *90b9cecdfb; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *c2c8305b99; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, struct F*36fc90c7fe> *e5a2023baf; // 0x58(0x50)
	struct TMap<struct FName, struct F*36fc90c7fe> *6ca08ebd50; // 0xa8(0x50)
	struct TMap<enum class EWeaponClass, struct F*1cbfce5e47> *01e12b1294; // 0xf8(0x50)
	float *202d9a4892; // 0x148(0x04)
	float *2cfb0bb41b; // 0x14c(0x04)
	float *c166f62763; // 0x150(0x04)
	float *0cf50c03ae; // 0x154(0x04)
	float *6147be22ac; // 0x158(0x04)
	float *840c440d00; // 0x15c(0x04)
	float *13f0078b25; // 0x160(0x04)
	enum class EDamageReason *f743161860; // 0x164(0x01)
	bool *2c611a4f91; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
};

// ScriptStruct TslGame.*1cbfce5e47
// Size: 0x10 (Inherited: 0x00)
struct F*1cbfce5e47 {
	float *9f86e8f24e; // 0x00(0x04)
	float *66924500ac; // 0x04(0x04)
	float *af0a2079e6; // 0x08(0x04)
	bool *7c0dec09dd; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*36fc90c7fe
// Size: 0x20 (Inherited: 0x00)
struct F*36fc90c7fe {
	float *af0a2079e6; // 0x00(0x04)
	float *823063c087; // 0x04(0x04)
	float *679c550731; // 0x08(0x04)
	float *93d323ae2b; // 0x0c(0x04)
	float *20a7e8f779; // 0x10(0x04)
	float *fc2b366f54; // 0x14(0x04)
	float *90438f845a; // 0x18(0x04)
	float *4d62f392e5; // 0x1c(0x04)
};

// ScriptStruct TslGame.*b123e633f2
// Size: 0x20 (Inherited: 0x00)
struct F*b123e633f2 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct TslGame.*0e043f759f
// Size: 0x50 (Inherited: 0x00)
struct F*0e043f759f {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*9cb7c95d02
// Size: 0x10 (Inherited: 0x00)
struct F*9cb7c95d02 {
	struct UClass* *f5c6ccf1ad; // 0x00(0x08)
	int32 Number; // 0x08(0x04)
	int32 *ffb1a656bf; // 0x0c(0x04)
};

// ScriptStruct TslGame.*297618c7dc
// Size: 0x10 (Inherited: 0x00)
struct F*297618c7dc {
	struct UClass* *f5c6ccf1ad; // 0x00(0x08)
	int32 Number; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7d95093df1
// Size: 0x10 (Inherited: 0x00)
struct F*7d95093df1 {
	struct UClass* *f5c6ccf1ad; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*00d27ed350
// Size: 0x20 (Inherited: 0x08)
struct F*00d27ed350 : FTableRowBase {
	enum class EPhysicalSurface *e819fb45da; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*fca20c9cb5 *ec99d0e14d; // 0x10(0x10)
};

// ScriptStruct TslGame.*fca20c9cb5
// Size: 0x10 (Inherited: 0x00)
struct F*fca20c9cb5 {
	float Damage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* *f23bfe8a1c; // 0x08(0x08)
};

// ScriptStruct TslGame.*658fd2413c
// Size: 0x20 (Inherited: 0x00)
struct F*658fd2413c {
	enum class *0833c21d41 Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FStringClassReference *18f6ad438b; // 0x08(0x10)
	bool *a55393cf42; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*58a1de0ab2
// Size: 0x28 (Inherited: 0x08)
struct F*58a1de0ab2 : FTableRowBase {
	enum class *0833c21d41 Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FStringClassReference *18f6ad438b; // 0x10(0x10)
	float *e1bf8095ec; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*7e9fd99bd7
// Size: 0x08 (Inherited: 0x00)
struct F*7e9fd99bd7 {
	float *85a591aafb; // 0x00(0x04)
	float *7c27940511; // 0x04(0x04)
};

// ScriptStruct TslGame.*31de10a86b
// Size: 0xb0 (Inherited: 0x00)
struct F*31de10a86b {
	float *90b9cecdfb; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *c2c8305b99; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, float> *ef927206a6; // 0x58(0x50)
	float *20fc07761c; // 0xa8(0x04)
	enum class EEquipSlotID *cc9b2134ac; // 0xac(0x01)
	enum class EDamageReason *f743161860; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
};

// ScriptStruct TslGame.*89da517eb4
// Size: 0x38 (Inherited: 0x00)
struct F*89da517eb4 {
	struct ATslCharacter* *a555972435; // 0x00(0x08)
	struct ATslCharacter* *e291ab6963; // 0x08(0x08)
	struct ATslPostProcessEffect* Effect; // 0x10(0x08)
	struct ATslPlayerController* PlayerController; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct TslGame.*acae0ccdf7
// Size: 0x20 (Inherited: 0x00)
struct F*acae0ccdf7 {
	struct UClass* MonsterTemplate; // 0x00(0x08)
	int32 SpawnMaxCount; // 0x08(0x04)
	int32 CurTotalSpawnCount; // 0x0c(0x04)
	int32 CurSameSpawnCount; // 0x10(0x04)
	int32 *06d1ec093a; // 0x14(0x04)
	int32 *ffb1a656bf; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.OverPowerUserPlayData
// Size: 0x10 (Inherited: 0x08)
struct FOverPowerUserPlayData : FBaseUserPlayData {
	int32 OpCoins; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*51b4bad9ea
// Size: 0x10 (Inherited: 0x00)
struct F*51b4bad9ea {
	struct UClass* *7eb4f2f190; // 0x00(0x08)
	float *7b79cfe77a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.LogRacingModeCheckPointPlayData
// Size: 0x20 (Inherited: 0x00)
struct FLogRacingModeCheckPointPlayData {
	int32 *451338f185; // 0x00(0x04)
	float *0293718685; // 0x04(0x04)
	int32 *cdefe9750d; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString *a8c064c9ce; // 0x10(0x10)
};

// ScriptStruct TslGame.*ad6f44b63b
// Size: 0x0c (Inherited: 0x00)
struct F*ad6f44b63b {
	int32 *8af9303a98; // 0x00(0x04)
	int32 Labs; // 0x04(0x04)
	float *28f8b387a8; // 0x08(0x04)
};

// ScriptStruct TslGame.*a7779b559c
// Size: 0x50 (Inherited: 0x00)
struct F*a7779b559c {
	char pad_0[0x8]; // 0x00(0x08)
	struct UTexture2D* RewardImage; // 0x08(0x08)
	struct FText RewardName; // 0x10(0x18)
	struct FText RewardDescription; // 0x28(0x18)
	struct TArray<struct F*bb7df45d7e> TeamHistory; // 0x40(0x10)
};

// ScriptStruct TslGame.*bb7df45d7e
// Size: 0x18 (Inherited: 0x00)
struct F*bb7df45d7e {
	int32 SquadMemberIndex; // 0x00(0x04)
	struct FLinearColor Color; // 0x04(0x10)
	enum class ETslSLBStageDifficulty History; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*c73c9bccc4
// Size: 0x20 (Inherited: 0x00)
struct F*c73c9bccc4 {
	enum class ETslSLBStage ID; // 0x00(0x01)
	bool bIsSelected; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 VotedNum; // 0x04(0x04)
	enum class ETslSLBStageDifficulty MyHistory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*bb7df45d7e> TeamHistory; // 0x10(0x10)
};

// ScriptStruct TslGame.*8b399bf5ee
// Size: 0x08 (Inherited: 0x00)
struct F*8b399bf5ee {
	enum class ETslSLBStageDifficulty ID; // 0x00(0x01)
	bool bIsSelected; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 VotedNum; // 0x04(0x04)
};

// ScriptStruct TslGame.*cbef585207
// Size: 0x30 (Inherited: 0x00)
struct F*cbef585207 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
	int32 *e1fe54ff27; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PlayerName; // 0x10(0x10)
	int32 Kill; // 0x20(0x04)
	int32 *64667c09cc; // 0x24(0x04)
	bool *00246f98a7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*6188ac5523
// Size: 0x10 (Inherited: 0x00)
struct F*6188ac5523 {
	struct FName *7374cf5819; // 0x00(0x08)
	int32 *cee9645cc3; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.SLBUserPlayData
// Size: 0x28 (Inherited: 0x08)
struct FSLBUserPlayData : FBaseUserPlayData {
	struct TArray<struct FSLBVaultItem> Vault; // 0x08(0x10)
	struct TArray<struct FTslSLBStageID> BestClearStageDifficulty; // 0x18(0x10)
};

// ScriptStruct TslGame.*9d3fc8db08
// Size: 0x08 (Inherited: 0x00)
struct F*9d3fc8db08 {
	int32 Kill; // 0x00(0x04)
	int32 *64667c09cc; // 0x04(0x04)
};

// ScriptStruct TslGame.*c8c4503b02
// Size: 0x20 (Inherited: 0x00)
struct F*c8c4503b02 {
	enum class ETslSLBInteractionType *c170a78411; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *45ac24f5ce; // 0x04(0x04)
	float *2f032ac8a6; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ATslSLBMissionGeneratorActor* *4daa1cf82a; // 0x10(0x08)
	struct ATslSLBExitActor* *22ae02b99b; // 0x18(0x08)
};

// ScriptStruct TslGame.BombUserPlayData
// Size: 0x58 (Inherited: 0x08)
struct FBombUserPlayData : FBaseUserPlayData {
	struct TMap<struct FName, struct FWeaponAttachmentIds> WeaponAttachmentsMap; // 0x08(0x50)
};

// ScriptStruct TslGame.WeaponAttachmentIds
// Size: 0x10 (Inherited: 0x00)
struct FWeaponAttachmentIds {
	struct TArray<struct FName> AttachmentIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*6c82306a0a
// Size: 0xb0 (Inherited: 0x00)
struct F*6c82306a0a {
	struct TArray<struct F*ce9080cce5> ESportsTeamInfos; // 0x00(0x10)
	char pad_10[0xa0]; // 0x10(0xa0)
};

// ScriptStruct TslGame.*ce9080cce5
// Size: 0x40 (Inherited: 0x00)
struct F*ce9080cce5 {
	struct FString TeamName; // 0x00(0x10)
	struct FString TeamFullName; // 0x10(0x10)
	struct FString TeamLogoUrl; // 0x20(0x10)
	struct TArray<struct F*836d787852> Rosters; // 0x30(0x10)
};

// ScriptStruct TslGame.*836d787852
// Size: 0x40 (Inherited: 0x00)
struct F*836d787852 {
	struct FString Name; // 0x00(0x10)
	struct FString FullName; // 0x10(0x10)
	struct FString Nickname; // 0x20(0x10)
	struct FString PhotoUrl; // 0x30(0x10)
};

// ScriptStruct TslGame.*8a6d5624d9
// Size: 0x50 (Inherited: 0x00)
struct F*8a6d5624d9 {
	struct TMap<struct FName, struct F*dbfae0ff97> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*dbfae0ff97
// Size: 0x50 (Inherited: 0x00)
struct F*dbfae0ff97 {
	struct TMap<struct FName, struct FString> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*b79cc1f0cf
// Size: 0x10 (Inherited: 0x00)
struct F*b79cc1f0cf {
	struct TArray<struct F*d03d765675> Hierarchy; // 0x00(0x10)
};

// ScriptStruct TslGame.*d03d765675
// Size: 0x48 (Inherited: 0x00)
struct F*d03d765675 {
	struct F*0a6517b17b TabDesc_DataTableRow; // 0x00(0x38)
	struct TArray<struct F*c8cc07a2d8> SubTabs; // 0x38(0x10)
};

// ScriptStruct TslGame.*c8cc07a2d8
// Size: 0x50 (Inherited: 0x00)
struct F*c8cc07a2d8 {
	struct F*408920bbe0 SubTabDesc_DataTableRow; // 0x00(0x40)
	struct TArray<struct F*c865bdf51a> Categories; // 0x40(0x10)
};

// ScriptStruct TslGame.*c865bdf51a
// Size: 0x60 (Inherited: 0x00)
struct F*c865bdf51a {
	struct F*4c45dafbd7 CategoryDesc_DataTableRow; // 0x00(0x50)
	struct TArray<struct F*d049aa2886> Items_DataTable; // 0x50(0x10)
};

// ScriptStruct TslGame.*007d83fdbd
// Size: 0x18 (Inherited: 0x00)
struct F*007d83fdbd {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*a3443de5a1
// Size: 0x24 (Inherited: 0x00)
struct F*a3443de5a1 {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct TslGame.*a0c1e97908
// Size: 0x68 (Inherited: 0x00)
struct F*a0c1e97908 {
	float *12bee1a204; // 0x00(0x04)
	float *e849752489; // 0x04(0x04)
	float *15a804bd63; // 0x08(0x04)
	float *23fa6553e3; // 0x0c(0x04)
	float *bc0cafafab; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UParticleSystem* *789b836777; // 0x18(0x08)
	struct UClass* *7a60ae554d; // 0x20(0x08)
	struct UClass* *5ee83546e4; // 0x28(0x08)
	struct UAkAudioEvent* *898c9bbd87; // 0x30(0x08)
	struct UAkAudioEvent* *bfb4a77192; // 0x38(0x08)
	struct UAkAudioEvent* *3051f195ac; // 0x40(0x08)
	struct UAkAudioEvent* *6ec1be64d2; // 0x48(0x08)
	struct UAkAudioEvent* *c2167d637c; // 0x50(0x08)
	float *2c74a4ddac; // 0x58(0x04)
	float *c5f7cf1c01; // 0x5c(0x04)
	float *8bf8186012; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.*37a563b875
// Size: 0xe8 (Inherited: 0x00)
struct F*37a563b875 {
	bool *1cf676f3f8; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *d2b1a08c48; // 0x04(0x04)
	float *4c161b2bf1; // 0x08(0x04)
	float *8c843c6d2d; // 0x0c(0x04)
	struct UCurveFloat* *3d532886ce; // 0x10(0x08)
	struct UClass* *f23bfe8a1c; // 0x18(0x08)
	struct UClass* *4988c6c4ca; // 0x20(0x08)
	struct UClass* *feb702cb6c; // 0x28(0x08)
	struct UClass* *f7141bbc05; // 0x30(0x08)
	struct UClass* *0aa81f7f12; // 0x38(0x08)
	int32 *71a630ed38; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UClass* *16f616c8a8; // 0x48(0x08)
	float *3416728485; // 0x50(0x04)
	float *9683e7c870; // 0x54(0x04)
	struct UTexture* DamageCauserIcon; // 0x58(0x08)
	float DamageIconRatio; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText DamageCauserItemName; // 0x68(0x18)
	enum class EWeaponClass DamageCauserClass; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *ef8198fe52; // 0x84(0x04)
	char *bd64bd9092 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float RotationSpeed; // 0x8c(0x04)
	struct F*b5067f91a9 *b5067f91a9; // 0x90(0x40)
	bool *492cdd8d7f; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float PenetrationDepth; // 0xd4(0x04)
	float *04c8e1d45f; // 0xd8(0x04)
	float *9c54775898; // 0xdc(0x04)
	bool *f02e1d8439; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// ScriptStruct TslGame.PubgIdTierData
// Size: 0x20 (Inherited: 0x00)
struct FPubgIdTierData {
	struct FString ID; // 0x00(0x10)
	struct FString ImagePath; // 0x10(0x10)
};

// ScriptStruct TslGame.*74d69daec7
// Size: 0x30 (Inherited: 0x00)
struct F*74d69daec7 {
	enum class ETslPubgIdAssetType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
	struct F*b2f5f3e08e TimerHandle; // 0x20(0x08)
	int32 RefCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*68b51f35ca
// Size: 0x10 (Inherited: 0x00)
struct F*68b51f35ca {
	struct UAkAudioEvent* *d221293105; // 0x00(0x08)
	float *ca75f58dac; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b55d3fc650
// Size: 0x18 (Inherited: 0x08)
struct F*b55d3fc650 : FTableRowBase {
	enum class ERadioMessageAlarmSoundCategory *edf6fa550a; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* *40b20346f9; // 0x10(0x08)
};

// ScriptStruct TslGame.*36487ebbf2
// Size: 0x28 (Inherited: 0x08)
struct F*36487ebbf2 : FTableRowBase {
	enum class ERadioMessageCategory Category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString StringKey; // 0x10(0x10)
	enum class ERadioMessageAlarmSoundCategory *edf6fa550a; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*b34317698d
// Size: 0x18 (Inherited: 0x00)
struct F*b34317698d {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString StringKey; // 0x08(0x10)
};

// ScriptStruct TslGame.*3e149a397f
// Size: 0x30 (Inherited: 0x00)
struct F*3e149a397f {
	struct FName *cb8937e328; // 0x00(0x08)
	struct UCurveFloat* *322e37e79b; // 0x08(0x08)
	bool *f28f68b7c9; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float StartTime; // 0x14(0x04)
	float *187a25d5b5; // 0x18(0x04)
	char pad_1C[0x8]; // 0x1c(0x08)
	float *f938eb7e9d; // 0x24(0x04)
	float *8badb12897; // 0x28(0x04)
	float *5a24560de3; // 0x2c(0x04)
};

// ScriptStruct TslGame.DoorBreakingState
// Size: 0x01 (Inherited: 0x00)
struct FDoorBreakingState {
	char *d5d9f7b3b6 : 1; // 0x00(0x01)
	char *e4529b60dc : 1; // 0x00(0x01)
	char *2eebebee80 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct TslGame.*ab6a3ed75a
// Size: 0x20 (Inherited: 0x00)
struct F*ab6a3ed75a {
	struct FString ModeName; // 0x00(0x10)
	struct FString *6d896ca861; // 0x10(0x10)
};

// ScriptStruct TslGame.*fc8eff740c
// Size: 0x18 (Inherited: 0x00)
struct F*fc8eff740c {
	struct FStringClassReference *732b6ba48b; // 0x00(0x10)
	struct UClass* ItemClass; // 0x10(0x08)
};

// ScriptStruct TslGame.*36d51660c1
// Size: 0x18 (Inherited: 0x00)
struct F*36d51660c1 {
	enum class ESandboxPowerType *2a25fa0bee; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*c7ea13c9ea> *12070eb499; // 0x08(0x10)
};

// ScriptStruct TslGame.*c7ea13c9ea
// Size: 0x20 (Inherited: 0x00)
struct F*c7ea13c9ea {
	struct UParticleSystem* PS; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FRotator RelativeRotation; // 0x10(0x0c)
	bool *4f912b1cba; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*cd36e6dbae
// Size: 0x10 (Inherited: 0x00)
struct F*cd36e6dbae {
	struct USceneComponent* *daae498c81; // 0x00(0x08)
	struct AActor* ChildActor; // 0x08(0x08)
};

// ScriptStruct TslGame.*d83547fccd
// Size: 0xa0 (Inherited: 0x00)
struct F*d83547fccd {
	struct FName Name; // 0x00(0x08)
	float *1523b7d538; // 0x08(0x04)
	float *ed17cb5257; // 0x0c(0x04)
	struct FVector *e2b42e7d86; // 0x10(0x0c)
	struct FRotator *dbd04d0f3a; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *3db158d1cc; // 0x30(0x30)
	struct FTransform *87142958f6; // 0x60(0x30)
	float *e600dd9b9c; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct TslGame.*3520536a35
// Size: 0x1c (Inherited: 0x00)
struct F*3520536a35 {
	struct FVector2D RealTime; // 0x00(0x08)
	struct FVector2D TimeDilation; // 0x08(0x08)
	struct FVector2D Area; // 0x10(0x08)
	float *99e205f7d3; // 0x18(0x04)
};

// ScriptStruct TslGame.*03f19868ab
// Size: 0x0c (Inherited: 0x00)
struct F*03f19868ab {
	struct FVector2D RealTime; // 0x00(0x08)
	float TimeDilation; // 0x08(0x04)
};

// ScriptStruct TslGame.*a2a8bea197
// Size: 0x58 (Inherited: 0x50)
struct F*a2a8bea197 : F*945c915f06 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*ba693c39a8
// Size: 0x18 (Inherited: 0x00)
struct F*ba693c39a8 {
	struct TArray<struct FName> *fbb4828e89; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*296d80612e
// Size: 0x340 (Inherited: 0x00)
struct F*296d80612e {
	struct F*90e797cdc2 *0a2d325439; // 0x00(0x130)
	struct F*90e797cdc2 *a955f18c22; // 0x130(0x130)
	struct FName *2e8580ec36; // 0x260(0x08)
	struct FName *8f8a1f5931; // 0x268(0x08)
	float *b665edca1d; // 0x270(0x04)
	float *b78af1f6a6; // 0x274(0x04)
	float *c077cc7bf3; // 0x278(0x04)
	bool *8f5dfa2e6b; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UClass* *6a1a152527; // 0x280(0x20)
	struct UClass* *5f4c973daa; // 0x2a0(0x20)
	struct UClass* *a5ccabe5a1; // 0x2c0(0x20)
	struct UClass* *fc96e5c906; // 0x2e0(0x20)
	struct UClass* *ce8df7e007; // 0x300(0x20)
	struct UClass* *65b92441e0; // 0x320(0x20)
};

// ScriptStruct TslGame.*c5dd8d288c
// Size: 0x28 (Inherited: 0x00)
struct F*c5dd8d288c {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*0981df3afb
// Size: 0x80 (Inherited: 0x08)
struct F*0981df3afb : FTableRowBase {
	int32 SprayDecalID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SprayDecalLocalizedName; // 0x10(0x18)
	struct UTexture2D* IconTexture; // 0x28(0x20)
	struct UTexture2D* SprayDecalTexture; // 0x48(0x20)
	int32 SpraySize; // 0x68(0x04)
	struct FLinearColor SprayColor; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*ca977bb263
// Size: 0x08 (Inherited: 0x00)
struct F*ca977bb263 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*c859ee3e05
// Size: 0x10 (Inherited: 0x00)
struct F*c859ee3e05 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*38fea50667
// Size: 0x10 (Inherited: 0x00)
struct F*38fea50667 {
	struct TArray<int32> *bef7329ba6; // 0x00(0x10)
};

// ScriptStruct TslGame.*39a40a5d7d
// Size: 0x20 (Inherited: 0x00)
struct F*39a40a5d7d {
	struct TArray<struct F*d67162f681> *8a7693e08b; // 0x00(0x10)
	struct FString *1b261fc32d; // 0x10(0x10)
};

// ScriptStruct TslGame.*d67162f681
// Size: 0x70 (Inherited: 0x00)
struct F*d67162f681 {
	struct FString *1b261fc32d; // 0x00(0x10)
	struct FName *76d8fec8dd; // 0x10(0x08)
	int32 *899302fc81; // 0x18(0x04)
	struct FVector_NetQuantize ImpactPoint; // 0x1c(0x0c)
	struct FVector_NetQuantize Location; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0x0c)
	struct UPrimitiveComponent* Component; // 0x40(0x08)
	struct AActor* Actor; // 0x48(0x08)
	float *0acbb551d8; // 0x50(0x04)
	char pad_54[0x1c]; // 0x54(0x1c)
};

// ScriptStruct TslGame.*966e6f05f7
// Size: 0x10 (Inherited: 0x00)
struct F*966e6f05f7 {
	enum class EDamageZoneType DamageZoneType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct TslGame.*6b8e7096f8
// Size: 0x18 (Inherited: 0x00)
struct F*6b8e7096f8 {
	struct TArray<struct FColor> *b8a6c40710; // 0x00(0x10)
	struct FVector2D TextureSize; // 0x10(0x08)
};

// ScriptStruct TslGame.*3fbfe43ba0
// Size: 0x10 (Inherited: 0x00)
struct F*3fbfe43ba0 {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FVector2D Size; // 0x08(0x08)
};

// ScriptStruct TslGame.*2eb521db7d
// Size: 0x58 (Inherited: 0x08)
struct F*2eb521db7d : FTableRowBase {
	int32 TrainingSoundID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SoundOwnerWeaponName; // 0x10(0x18)
	int32 MinAudibleRangeMeter; // 0x28(0x04)
	int32 MaxAudibleRangeMeter; // 0x2c(0x04)
	float MinSoundPlayDelay; // 0x30(0x04)
	float MaxSoundPlayDelay; // 0x34(0x04)
	float MinSoundPlayContinuousPeriod; // 0x38(0x04)
	float MaxSoundPlayContinuousPeriod; // 0x3c(0x04)
	float TimeBetweenShots; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UTexture* WeaponIcon; // 0x48(0x08)
	struct UAkAudioEvent* TrainingSound_Fire_LongTail; // 0x50(0x08)
};

// ScriptStruct TslGame.*2fd89e6f47
// Size: 0x270 (Inherited: 0x00)
struct F*2fd89e6f47 {
	bool bUseSelfCasting; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*90e797cdc2 SelfWithCastConfig; // 0x08(0x130)
	bool bUseTeammateCasting; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct F*90e797cdc2 TeammateWithCastConfig; // 0x140(0x130)
};

// ScriptStruct TslGame.*5c17d37b12
// Size: 0x98 (Inherited: 0x08)
struct F*5c17d37b12 : FTableRowBase {
	struct FName ActionID; // 0x08(0x08)
	bool bDefaultData; // 0x10(0x01)
	bool bImportantMessage; // 0x11(0x01)
	bool bShowWarningImg; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct UClass* TriggerObj; // 0x18(0x20)
	float DelayTriggerTime; // 0x38(0x04)
	bool bInitTriggerCheck; // 0x3c(0x01)
	bool bOnceTrigger; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float TriggerCoolTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct F*e1a673b5c5 GuideMessageData; // 0x48(0x50)
};

// ScriptStruct TslGame.*e1a673b5c5
// Size: 0x50 (Inherited: 0x00)
struct F*e1a673b5c5 {
	struct FText Title; // 0x00(0x18)
	struct FText PCDescription; // 0x18(0x18)
	struct FText ConsoleDescription; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct TslGame.*dc5acddb0f
// Size: 0x01 (Inherited: 0x00)
struct F*dc5acddb0f {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*29fe4f0000
// Size: 0x80 (Inherited: 0x00)
struct F*29fe4f0000 {
	struct FText *117f69bc2c; // 0x00(0x18)
	struct FText *3a5f79a69e; // 0x18(0x18)
	struct FSlateColor *ff08e048b3; // 0x30(0x28)
	struct FSlateColor *89f5147ea9; // 0x58(0x28)
};

// ScriptStruct TslGame.*98938f1e8e
// Size: 0x50 (Inherited: 0x00)
struct F*98938f1e8e {
	struct FText *117f69bc2c; // 0x00(0x18)
	struct FText *3a5f79a69e; // 0x18(0x18)
	struct FLinearColor *ec25de7e6b; // 0x30(0x10)
	struct FLinearColor *5ad8833822; // 0x40(0x10)
};

// ScriptStruct TslGame.*ae4f6a365a
// Size: 0x01 (Inherited: 0x00)
struct F*ae4f6a365a {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*e12594ef6f
// Size: 0x168 (Inherited: 0x00)
struct F*e12594ef6f {
	bool *02453cefbe; // 0x00(0x01)
	enum class ETslTrainingDashboardPracticeUIType PracticeType; // 0x01(0x01)
	enum class ETslTrainingDashboardRangeUIType *95dfb5293f; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct F*ea4d48eb8c *37d09dc047; // 0x08(0x50)
	struct F*ea4d48eb8c *54fe2a8212; // 0x58(0x50)
	struct F*ea4d48eb8c *b27df14035; // 0xa8(0x50)
	struct F*ea4d48eb8c *dc3b8a63bf; // 0xf8(0x50)
	struct F*351b165ea0 *f6e0415e67; // 0x148(0x20)
};

// ScriptStruct TslGame.*351b165ea0
// Size: 0x20 (Inherited: 0x00)
struct F*351b165ea0 {
	int32 *ffa5d3d9b4; // 0x00(0x04)
	int32 *e74a033bf4; // 0x04(0x04)
	float *a48c4ae6d0; // 0x08(0x04)
	int32 *e1ce399b4b; // 0x0c(0x04)
	struct TArray<int32> *e72fd375ad; // 0x10(0x10)
};

// ScriptStruct TslGame.*ea4d48eb8c
// Size: 0x50 (Inherited: 0x00)
struct F*ea4d48eb8c {
	int32 Score; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	struct F*da3bbbf5bb *ceb2f0c6e2; // 0x08(0x38)
	struct F*5530c9ebf5 *df73081f8c; // 0x40(0x10)
};

// ScriptStruct TslGame.*5530c9ebf5
// Size: 0x10 (Inherited: 0x00)
struct F*5530c9ebf5 {
	struct FString *90648773fb; // 0x00(0x10)
};

// ScriptStruct TslGame.*da3bbbf5bb
// Size: 0x38 (Inherited: 0x00)
struct F*da3bbbf5bb {
	float Accuracy; // 0x00(0x04)
	int32 HeadShot; // 0x04(0x04)
	struct FText WeaponName; // 0x08(0x18)
	float *428e21c2bd; // 0x20(0x04)
	float *5a0b58a881; // 0x24(0x04)
	float *fd8d3122fa; // 0x28(0x04)
	float *c69ec6134a; // 0x2c(0x04)
	float *6d09805953; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*3b3df469be
// Size: 0x28 (Inherited: 0x00)
struct F*3b3df469be {
	struct FLinearColor *b6ce5260a5; // 0x00(0x10)
	enum class ETslTrainingDashboardRangeUIType *95dfb5293f; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<int32> Scores; // 0x18(0x10)
};

// ScriptStruct TslGame.*7a54e01dc8
// Size: 0x24 (Inherited: 0x00)
struct F*7a54e01dc8 {
	struct FLinearColor *489f00de89; // 0x00(0x10)
	float *3b9ec45f9f; // 0x10(0x04)
	float *65635b9e23; // 0x14(0x04)
	float *082f4963e1; // 0x18(0x04)
	float *689ac60653; // 0x1c(0x04)
	float *a571500fc9; // 0x20(0x04)
};

// ScriptStruct TslGame.*67df182830
// Size: 0x70 (Inherited: 0x00)
struct F*67df182830 {
	struct FSlateColor *10c621555b; // 0x00(0x28)
	struct FSlateColor *aee160fe90; // 0x28(0x28)
	struct FLinearColor *465cb04235; // 0x50(0x10)
	struct FLinearColor *1a5d3bba39; // 0x60(0x10)
};

// ScriptStruct TslGame.*9d70e20c97
// Size: 0xc48 (Inherited: 0x00)
struct F*9d70e20c97 {
	struct UAnimMontage* *b8d4cd3def; // 0x00(0x08)
	struct F*2de02a740e *695cc6a18d; // 0x08(0xc40)
};

// ScriptStruct TslGame.*d55c28551e
// Size: 0x68 (Inherited: 0x08)
struct F*d55c28551e : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	enum class ETslArenaLoadoutItemCategory Category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 Count; // 0x14(0x04)
	int32 Price; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FName AmmoItemID; // 0x20(0x08)
	int32 AmmoCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ScopeID; // 0x30(0x08)
	bool LoadoutAvailable; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 ShowRound; // 0x3c(0x04)
	int32 HideRound; // 0x40(0x04)
	bool AllWinBonus; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FName Attachment_Magazine; // 0x48(0x08)
	struct FName Attachment_Muzzle; // 0x50(0x08)
	struct FName Attachment_Foregrip; // 0x58(0x08)
	struct FName Attachment_Stock; // 0x60(0x08)
};

// ScriptStruct TslGame.*7116fcf991
// Size: 0x10 (Inherited: 0x00)
struct F*7116fcf991 {
	bool *cefadaeb64; // 0x00(0x01)
	bool *5d279997fd; // 0x01(0x01)
	bool *ad70daab20; // 0x02(0x01)
	bool *61b7eecf52; // 0x03(0x01)
	bool *57552ff9ea; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 *73586fa58b; // 0x08(0x04)
	int32 *d3e561efed; // 0x0c(0x04)
};

// ScriptStruct TslGame.*eb0e0ce724
// Size: 0x24 (Inherited: 0x00)
struct F*eb0e0ce724 {
	struct FLinearColor BrushColor; // 0x00(0x10)
	struct FMargin Padding; // 0x10(0x10)
	float *87423f7909; // 0x20(0x04)
};

// ScriptStruct TslGame.*d4def1081e
// Size: 0x20 (Inherited: 0x00)
struct F*d4def1081e {
	float StartRange; // 0x00(0x04)
	float EndRange; // 0x04(0x04)
	struct FText ResultText; // 0x08(0x18)
};

// ScriptStruct TslGame.*46866f9d35
// Size: 0x20 (Inherited: 0x08)
struct F*46866f9d35 : FTableRowBase {
	enum class EConditionOfDeath ConditionOfDeathCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* ConditionOfDeathIcon; // 0x10(0x08)
	float IconRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e75674a2ea
// Size: 0x20 (Inherited: 0x08)
struct F*e75674a2ea : FTableRowBase {
	enum class EDamageTypeCategory DamageTypeCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* CauseOfDeathIcon; // 0x10(0x08)
	float IconRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*d3a6a126cd
// Size: 0x18 (Inherited: 0x08)
struct F*d3a6a126cd : FTableRowBase {
	enum class EUIAkEvent *0fc8c655a1; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* AkEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*99c4a9a61c
// Size: 0x70 (Inherited: 0x08)
struct F*99c4a9a61c : FTableRowBase {
	int32 *fcdde9a20f; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> *785bb82dc8; // 0x10(0x10)
	struct TMap<struct FString, struct F*9793e8627c> *99c4a9a61c; // 0x20(0x50)
};

// ScriptStruct TslGame.*9793e8627c
// Size: 0x10 (Inherited: 0x00)
struct F*9793e8627c {
	struct TArray<struct FName> *9793e8627c; // 0x00(0x10)
};

// ScriptStruct TslGame.*c3df85cae2
// Size: 0x58 (Inherited: 0x08)
struct F*c3df85cae2 : FTableRowBase {
	struct TArray<struct FName> *ff73e29079; // 0x08(0x10)
	struct FText PopupText; // 0x18(0x18)
	struct FString *35e39f22db; // 0x30(0x10)
	bool *7d5c7192e1; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<enum class EGamepadPresets> *ba4f3520b4; // 0x48(0x10)
};

// ScriptStruct TslGame.*7156c8b59c
// Size: 0x20 (Inherited: 0x00)
struct F*7156c8b59c {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*5ad930d18d
// Size: 0x10 (Inherited: 0x00)
struct F*5ad930d18d {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*b2d7c9188f
// Size: 0x30 (Inherited: 0x00)
struct F*b2d7c9188f {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*c9ffc605e9
// Size: 0x20 (Inherited: 0x08)
struct F*c9ffc605e9 : FTableRowBase {
	struct FName ActionName; // 0x08(0x08)
	struct TArray<struct FKey> *a767c5c31d; // 0x10(0x10)
};

// ScriptStruct TslGame.*1d7b799d0a
// Size: 0x10 (Inherited: 0x00)
struct F*1d7b799d0a {
	float *b02f4ca71e; // 0x00(0x04)
	float *74a9eb983d; // 0x04(0x04)
	float *2b3ff18960; // 0x08(0x04)
	float *6cf2e68c9d; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ae357736b4
// Size: 0x18 (Inherited: 0x00)
struct F*ae357736b4 {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*9600f52900> *b95e355dc8; // 0x08(0x10)
};

// ScriptStruct TslGame.*9600f52900
// Size: 0x30 (Inherited: 0x00)
struct F*9600f52900 {
	struct TArray<struct F*95000c726f> *18a147c5e9; // 0x00(0x10)
	struct FText DescriptionText; // 0x10(0x18)
	bool *13054ad772; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*95000c726f
// Size: 0x40 (Inherited: 0x00)
struct F*95000c726f {
	bool *babacf2d87; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FKey Key; // 0x08(0x18)
	bool *d8f5e03ec3; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FName ActionName; // 0x28(0x08)
	enum class EGamepadKeyIconDisplayType *855da8df9d; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float HoldDuration; // 0x34(0x04)
	bool *8cd98857d8; // 0x38(0x01)
	enum class EKeyIconCombinationDisplayType *30cf5b4836; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct TslGame.*6d6cfd0081
// Size: 0x30 (Inherited: 0x00)
struct F*6d6cfd0081 {
	enum class ETslTrainingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *71ea562840; // 0x08(0x18)
	struct UTexture2D* *47e1c6d67f; // 0x20(0x08)
	struct UTexture2D* BackGroundTexture; // 0x28(0x08)
};

// ScriptStruct TslGame.*f88180afb0
// Size: 0x70 (Inherited: 0x08)
struct F*f88180afb0 : FTableRowBase {
	struct FString CategoryId; // 0x08(0x10)
	int32 ColumnNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText ActionDesc; // 0x20(0x18)
	struct TArray<struct FName> MappedActions; // 0x38(0x10)
	struct TArray<struct F*f1572a8200> MappedAxies; // 0x48(0x10)
	bool bDummy; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FTslInputKey> DummyInputKeys; // 0x60(0x10)
};

// ScriptStruct TslGame.*bedd344f67
// Size: 0x40 (Inherited: 0x00)
struct F*bedd344f67 {
	struct UTexture2D* *601d01bf7b; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct TArray<struct F*3920268665> *617b9ebcd5; // 0x20(0x10)
	struct TArray<struct FText> *ddc70ac8df; // 0x30(0x10)
};

// ScriptStruct TslGame.*3920268665
// Size: 0x38 (Inherited: 0x00)
struct F*3920268665 {
	int32 Number; // 0x00(0x04)
	struct FLinearColor *1127537dac; // 0x04(0x10)
	bool bEnabled; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FText *191a8b7c21; // 0x18(0x18)
	struct ATslPlayerState* PlayerState; // 0x30(0x08)
};

// ScriptStruct TslGame.*0f7b6bf4db
// Size: 0x60 (Inherited: 0x00)
struct F*0f7b6bf4db {
	struct FText VehicleName; // 0x00(0x18)
	struct FText *1c5e7cb6cb; // 0x18(0x18)
	struct UTexture2D* *4b05b8543d; // 0x30(0x08)
	struct UTexture2D* *3bfb48f8a1; // 0x38(0x08)
	struct UTexture2D* *3a5475f976; // 0x40(0x08)
	float Speed; // 0x48(0x04)
	float *7dbf4cbbe7; // 0x4c(0x04)
	int32 *5167649ab4; // 0x50(0x04)
	int32 *4e9b1a776b; // 0x54(0x04)
	int32 *ba3fddfd04; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*d37fdaab8c
// Size: 0x28 (Inherited: 0x00)
struct F*d37fdaab8c {
	enum class ERadioMessagePresets preset; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*28a5e57b8b> *8fef24e5b1; // 0x08(0x10)
	struct TArray<struct FName> *27efed02a8; // 0x18(0x10)
};

// ScriptStruct TslGame.*5d232b5a37
// Size: 0x18 (Inherited: 0x00)
struct F*5d232b5a37 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x08(0x08)
	struct U*3335e92189* *3335e92189; // 0x10(0x08)
};

// ScriptStruct TslGame.*2762eb591c
// Size: 0x18 (Inherited: 0x00)
struct F*2762eb591c {
	struct FName ItemID; // 0x00(0x08)
	struct FLinearColor OverrideColor; // 0x08(0x10)
};

// ScriptStruct TslGame.*79391efebf
// Size: 0x68 (Inherited: 0x00)
struct F*79391efebf {
	struct FText Title; // 0x00(0x18)
	struct FText Subtitle; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TArray<bool> Stats; // 0x48(0x10)
	struct FStringAssetReference Image; // 0x58(0x10)
};

// ScriptStruct TslGame.*1dc0a3691e
// Size: 0x10 (Inherited: 0x00)
struct F*1dc0a3691e {
	struct TArray<struct FName> ItemIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*1e8198b99f
// Size: 0x30 (Inherited: 0x00)
struct F*1e8198b99f {
	struct TArray<struct FName> WeaponItemIDs; // 0x00(0x10)
	struct TArray<struct FName> SkillItemIDs; // 0x10(0x10)
	struct TArray<struct FName> ArmorItemIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*4d9559f7b2
// Size: 0x30 (Inherited: 0x00)
struct F*4d9559f7b2 {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
	struct FLinearColor *d9ecae85f9; // 0x20(0x10)
};

// ScriptStruct TslGame.*235f8e5c93
// Size: 0x168 (Inherited: 0x00)
struct F*235f8e5c93 {
	struct F*e12594ef6f *42083f0913; // 0x00(0x168)
};

// ScriptStruct TslGame.*918f308d94
// Size: 0x38 (Inherited: 0x00)
struct F*918f308d94 {
	struct FText *d791cb0f4a; // 0x00(0x18)
	struct FText *99cb5b98f8; // 0x18(0x18)
	float *749ebc706e; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*384f575f8a
// Size: 0x10 (Inherited: 0x00)
struct F*384f575f8a {
	struct TArray<struct F*c738dab691> TrainingResults; // 0x00(0x10)
};

// ScriptStruct TslGame.*c738dab691
// Size: 0x28 (Inherited: 0x00)
struct F*c738dab691 {
	enum class ETrainingScoreType TrainingScoreType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ScoreTitleText; // 0x08(0x18)
	struct UTexture2D* ScoreImageTexture; // 0x20(0x08)
};

// ScriptStruct TslGame.*4cfbb03922
// Size: 0x10 (Inherited: 0x00)
struct F*4cfbb03922 {
	int32 SubWidgetCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* SubWidgetClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*ca8409c13e
// Size: 0x18 (Inherited: 0x00)
struct F*ca8409c13e {
	int32 ItemSlotID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> ItemIDs; // 0x08(0x10)
};

// ScriptStruct TslGame.*850f6938af
// Size: 0x28 (Inherited: 0x00)
struct F*850f6938af {
	struct UTexture2D* MapMarkerTexture; // 0x00(0x08)
	enum class EMarkerType MarkerIndex; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText MarkerName; // 0x10(0x18)
};

// ScriptStruct TslGame.*6a9b45fe0c
// Size: 0x28 (Inherited: 0x00)
struct F*6a9b45fe0c {
	int32 *82959277f6; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	bool *472ead8757; // 0x10(0x01)
	bool *3eef3feb98; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<int32> *b7784d8e63; // 0x18(0x10)
};

// ScriptStruct TslGame.*d3ad469265
// Size: 0x108 (Inherited: 0x00)
struct F*d3ad469265 {
	struct F*07222da915 OutsideBorder_Binder; // 0x00(0x30)
	struct F*7935e10e39 CircleImage_Binder; // 0x30(0x28)
	struct F*471718b397 DistanceTextBlock_Binder; // 0x58(0x20)
	struct F*471718b397 CaptureObjectNameTextBlock_Binder; // 0x78(0x20)
	bool bShowDistance; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct F*50bc55a3c7 NeutralColorSet; // 0x9c(0x30)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct F*50bc55a3c7> TeamColorSets; // 0xd0(0x10)
	struct FLinearColor CenterColorWhenNotCaptured; // 0xe0(0x10)
	struct ATslGameState* TslGameState; // 0xf0(0x08)
	struct ATslPlayerController* TslPlayerController; // 0xf8(0x08)
	struct ACaptureAreaActor* *a9ca09aa7b; // 0x100(0x08)
};

// ScriptStruct TslGame.*50bc55a3c7
// Size: 0x30 (Inherited: 0x00)
struct F*50bc55a3c7 {
	struct FLinearColor GaugeColor; // 0x00(0x10)
	struct FLinearColor TrackColor; // 0x10(0x10)
	struct FLinearColor CenterColorWhenCaptured; // 0x20(0x10)
};

// ScriptStruct TslGame.*0e80573dbf
// Size: 0x60 (Inherited: 0x00)
struct F*0e80573dbf {
	struct TArray<struct FString> *c47b91800f; // 0x00(0x10)
	struct TMap<struct FString, struct UWidget*> *9d72f47c0b; // 0x10(0x50)
};

// ScriptStruct TslGame.*ec99d0e14d
// Size: 0x90 (Inherited: 0x00)
struct F*ec99d0e14d {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct TslGame.*6ce0792d86
// Size: 0xb0 (Inherited: 0x00)
struct F*6ce0792d86 {
	struct F*45f2389d70 VectorCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*73e3c05dfe
// Size: 0xb0 (Inherited: 0x00)
struct F*73e3c05dfe {
	struct F*9c13ba876f FloatCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*b38eece41e
// Size: 0x10 (Inherited: 0x00)
struct F*b38eece41e {
	struct FFloatInterval DamageRange; // 0x00(0x08)
	struct U*226eb62c2c* ColorCurve; // 0x08(0x08)
};

// ScriptStruct TslGame.*5a6d35d5ba
// Size: 0x20 (Inherited: 0x00)
struct F*5a6d35d5ba {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*355ac1b4e4
// Size: 0x10 (Inherited: 0x00)
struct F*355ac1b4e4 {
	struct FVector2D *f39838a57c; // 0x00(0x08)
	struct FVector2D *fdae2b70d0; // 0x08(0x08)
};

// ScriptStruct TslGame.*91b184704f
// Size: 0x10 (Inherited: 0x00)
struct F*91b184704f {
	struct TArray<struct U*897701e20b*> *4a182302c6; // 0x00(0x10)
};

// ScriptStruct TslGame.*a8b2a7d7fa
// Size: 0x20 (Inherited: 0x00)
struct F*a8b2a7d7fa {
	struct UTslPlatoonCarePackageDropIndicatorWidget* *a245c53e27; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
	int32 *79bacb6740; // 0x0c(0x04)
	struct FVector *c47dd826b6; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a51702da04
// Size: 0x20 (Inherited: 0x00)
struct F*a51702da04 {
	struct UWidget* *a245c53e27; // 0x00(0x08)
	bool *bd2364574e; // 0x08(0x01)
	bool *42c3d66903; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FVector SpawnPosition; // 0x0c(0x0c)
	float *1f791771bd; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*88d961eda6
// Size: 0x18 (Inherited: 0x00)
struct F*88d961eda6 {
	struct U*dfd741323b* *696f746406; // 0x00(0x08)
	struct F*ad225cd187 *ad225cd187; // 0x08(0x10)
};

// ScriptStruct TslGame.*4da08ac6b4
// Size: 0x08 (Inherited: 0x00)
struct F*4da08ac6b4 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*781cb066f1
// Size: 0x20 (Inherited: 0x00)
struct F*781cb066f1 {
	struct UMaterialInterface* ZoneMaterial; // 0x00(0x08)
	int32 ZoneMaxImageNum; // 0x08(0x04)
	struct FVector2D ZoneBorderThickness; // 0x0c(0x08)
	struct FVector2D ZonePositionOffset; // 0x14(0x08)
	float ZoneImageWarningAlpha; // 0x1c(0x04)
};

// ScriptStruct TslGame.*9925e67ced
// Size: 0x20 (Inherited: 0x00)
struct F*9925e67ced {
	struct FVector2D *275c8b6ea4; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct UMaterialInstanceDynamic* *413bbd93fe; // 0x18(0x08)
};

// ScriptStruct TslGame.*50167b805f
// Size: 0x20 (Inherited: 0x00)
struct F*50167b805f {
	char pad_0[0x10]; // 0x00(0x10)
	struct UImage* *3f8ba63c3c; // 0x10(0x08)
	float *cffe4769b2; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*eefb80a553
// Size: 0x20 (Inherited: 0x00)
struct F*eefb80a553 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*979bcc966b* *c3e65fe1b5; // 0x18(0x08)
};

// ScriptStruct TslGame.*b037340fef
// Size: 0x18 (Inherited: 0x00)
struct F*b037340fef {
	char pad_0[0x8]; // 0x00(0x08)
	struct UImage* VehicleIcon; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*c586deb54c
// Size: 0x10 (Inherited: 0x00)
struct F*c586deb54c {
	struct ATslHelicopterPawn* Helicopter; // 0x00(0x08)
	struct UImage* *ae9a5f3250; // 0x08(0x08)
};

// ScriptStruct TslGame.*a39d930e01
// Size: 0x10 (Inherited: 0x00)
struct F*a39d930e01 {
	struct AGuardedLootPackage* LootCache; // 0x00(0x08)
	struct UImage* *23dbf1bcaf; // 0x08(0x08)
};

// ScriptStruct TslGame.*5cc5a686b1
// Size: 0x10 (Inherited: 0x00)
struct F*5cc5a686b1 {
	struct ATslWheeledVehicle* KillTruck; // 0x00(0x08)
	struct UImage* *22c6d8d972; // 0x08(0x08)
};

// ScriptStruct TslGame.*dadc6a8f6d
// Size: 0x10 (Inherited: 0x00)
struct F*dadc6a8f6d {
	struct ATslWheeledVehicle* LootTruck; // 0x00(0x08)
	struct UImage* *4e467b80b4; // 0x08(0x08)
};

// ScriptStruct TslGame.*194523d153
// Size: 0x30 (Inherited: 0x00)
struct F*194523d153 {
	struct UImage* *38ab181e0f; // 0x00(0x08)
	struct UImage* *e2105e6052; // 0x08(0x08)
	struct UImage* *b7600e2094; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct TslGame.*a0527bd98a
// Size: 0x30 (Inherited: 0x00)
struct F*a0527bd98a {
	struct AActor* *7bb683759a; // 0x00(0x08)
	struct UImage* *b75769e6ef; // 0x08(0x08)
	struct UImage* *38ab181e0f; // 0x10(0x08)
	struct UImage* *e2105e6052; // 0x18(0x08)
	struct UImage* *b7600e2094; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct TslGame.*0513a81e2a
// Size: 0xa0 (Inherited: 0x00)
struct F*0513a81e2a {
	struct U*03487128b9* Icon; // 0x00(0x08)
	struct U*2c50e99bcf* *3e502a6f16; // 0x08(0x08)
	struct FLinearColor *c0c443d2ca; // 0x10(0x10)
	bool bShowMemberNumber; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 MemberNumber; // 0x24(0x04)
	enum class ECharacterIconType *91e36a1223; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Rotation; // 0x2c(0x04)
	int32 *7a55ae25f0; // 0x30(0x04)
	bool *78bd4f527f; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FText PlayerName; // 0x38(0x18)
	struct FLinearColor *3876391b8e; // 0x50(0x10)
	bool *d63c075389; // 0x60(0x01)
	bool *626bf5a878; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32 *7810fc555e; // 0x64(0x04)
	struct FVector2D Position; // 0x68(0x08)
	bool *8a572f66a2; // 0x70(0x01)
	bool bHasTeamMember; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct TArray<struct F*5a6d35d5ba> *96c33f3c68; // 0x78(0x10)
	bool *25f631550e; // 0x88(0x01)
	bool bShowDirection; // 0x89(0x01)
	bool bShowStatus; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	float *8592bc45be; // 0x8c(0x04)
	bool *ec40ca311e; // 0x90(0x01)
	bool *9a7f46aa0e; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float *58c7ff1f54; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct TslGame.*f1d362ce7f
// Size: 0x18 (Inherited: 0x00)
struct F*f1d362ce7f {
	enum class ETslTrainingType *7b39eea7cb; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *2b42e511fd; // 0x08(0x08)
	struct FVector2D Size; // 0x10(0x08)
};

// ScriptStruct TslGame.*508d823c5e
// Size: 0x28 (Inherited: 0x00)
struct F*508d823c5e {
	float MinimapSize; // 0x00(0x04)
	enum class EMinimapFocus MinimapFocus; // 0x04(0x01)
	bool bIsBluezoneInfoIntoMap; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float ViewScale1D; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* ViewScale_AccelerationCurve; // 0x10(0x08)
	struct UCurveFloat* ViewScale_DecelerationCurve; // 0x18(0x08)
	bool bIsExtendedSize; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*718fd2adfd
// Size: 0x70 (Inherited: 0x00)
struct F*718fd2adfd {
	struct F*093563bf09 HorizontalBox; // 0x00(0x28)
	struct F*92d5c0f2ef *6c8d2d85b6; // 0x28(0x28)
	struct F*471718b397 *ba4cba66e5; // 0x50(0x20)
};

// ScriptStruct TslGame.*869cc00af7
// Size: 0x20 (Inherited: 0x00)
struct F*869cc00af7 {
	struct FString *805f515875; // 0x00(0x10)
	int32 Kill; // 0x10(0x04)
	int32 *e1230da2ed; // 0x14(0x04)
	float Damage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*c762b6950a
// Size: 0x48 (Inherited: 0x08)
struct F*c762b6950a : FTableRowBase {
	struct FString SubtitleKey; // 0x08(0x10)
	struct FString BlueZoneSubtitleKey; // 0x18(0x10)
	struct FString ItemSpawnSubtitleKey; // 0x28(0x10)
	struct FString VehicleSpawnSubtitleKey; // 0x38(0x10)
};

// ScriptStruct TslGame.*57cfce4af8
// Size: 0x10 (Inherited: 0x00)
struct F*57cfce4af8 {
	struct TArray<struct F*746d9dc291> OverrideTeamMarkAlphaForModeArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*746d9dc291
// Size: 0x08 (Inherited: 0x00)
struct F*746d9dc291 {
	enum class EMarkStates MarkStates; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Alpha; // 0x04(0x04)
};

// ScriptStruct TslGame.*f720cb3212
// Size: 0xb0 (Inherited: 0x00)
struct F*f720cb3212 {
	struct F*45f2389d70 VectorCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*3041cca9d0
// Size: 0xb0 (Inherited: 0x00)
struct F*3041cca9d0 {
	struct F*9c13ba876f FloatCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*e9791d074e
// Size: 0xa0 (Inherited: 0x00)
struct F*e9791d074e {
	struct FSlateBrush Background; // 0x00(0x90)
	struct FLinearColor BrushColor; // 0x90(0x10)
};

// ScriptStruct TslGame.TestSpot
// Size: 0x0c (Inherited: 0x00)
struct FTestSpot {
	struct FVector2D Location; // 0x00(0x08)
	bool Disabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.*3080f97f9c
// Size: 0x10 (Inherited: 0x00)
struct F*3080f97f9c {
	struct TArray<struct F*b1353e2f91> *591b64ccf4; // 0x00(0x10)
};

// ScriptStruct TslGame.*b1353e2f91
// Size: 0x0c (Inherited: 0x00)
struct F*b1353e2f91 {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	bool Disabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.*9cf5d32873
// Size: 0x10 (Inherited: 0x00)
struct F*9cf5d32873 {
	struct U*b4f4b0267b* Widget; // 0x00(0x08)
	struct FVector2D LastPosition; // 0x08(0x08)
};

// ScriptStruct TslGame.*d755a02bb5
// Size: 0x28 (Inherited: 0x00)
struct F*d755a02bb5 {
	struct FText DirectionText; // 0x00(0x18)
	struct FLinearColor TextColor; // 0x18(0x10)
};

// ScriptStruct TslGame.*2971940f26
// Size: 0x40 (Inherited: 0x08)
struct F*2971940f26 : FTableRowBase {
	enum class EGuideKeyType KeyType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*9600f52900 Info; // 0x10(0x30)
};

