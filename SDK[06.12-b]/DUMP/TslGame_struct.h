// Enum TslGame.*62cdf2ca7f
enum class *62cdf2ca7f : uint8 {
	*48e9e75737,
	*1a093e0af2,
	*bf86687773,
	*62cdf2ca7f_MAX,
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

// Enum TslGame.EBlueBlockerState
enum class EBlueBlockerState : uint8 {
	Show,
	Looping,
	Hide,
	Hidden,
	EBlueBlockerState_MAX,
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
	Damage_DropStructHit,
	Damage_Poision,
	Damage_ZombieDash,
	Damage_StunGun,
	Damage_MAX,
};

// Enum TslGame.*a1bff1b8c2
enum class *a1bff1b8c2 : uint8 {
	*c4805ca8e9,
	*86d1d5b68f,
	*e4f09f7049,
	*a1bff1b8c2_MAX,
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
	Thrown_StructFlare,
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

// Enum TslGame.*f4cb42df42
enum class *f4cb42df42 : uint8 {
	*102053f9b1,
	*8b620c5b74,
	*d02b472e0f,
	*ffc66898ec,
	*bb53090617,
	*f74f33facf,
	*6fcefc476a,
	*c421fa1db2,
	*019c688976,
	*f4cb42df42_MAX,
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
	BattleReadyKit,
	OpenStrongBox,
	ECastAnim_MAX,
};

// Enum TslGame.ECharacterNegativeEffects
enum class ECharacterNegativeEffects : uint8 {
	Blind,
	Burning,
	Stun,
	Taser,
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

// Enum TslGame.*8c3ab28891
enum class *8c3ab28891 : uint8 {
	*381b358e0b,
	*0b04383114,
	*6a0673cc77,
	*ab653bd4aa,
	*8cc3ff9021,
	*3b58ba623d,
	*5abf9d151b,
	*34f21c306d,
	*8c3ab28891_MAX,
};

// Enum TslGame.EServerStatType
enum class EServerStatType : uint8 {
	UE,
	NET,
	FRAMEPRO,
	EServerStatType_MAX,
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

// Enum TslGame.ETslOvercastAction
enum class ETslOvercastAction : uint8 {
	Initialized,
	Prolonged,
	CreateThunder,
	ETslOvercastAction_MAX,
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

// Enum TslGame.EAIStateType
enum class EAIStateType : uint8 {
	AI_None,
	AI_Idle,
	AI_Patrol,
	AI_Alert,
	AI_Fight,
	AI_Death,
	AI_MAX,
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
	ScriptBotAI,
	MarketAI,
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

// Enum TslGame.EMarketCategoryType
enum class EMarketCategoryType : uint8 {
	None,
	Store,
	Tuning,
	RandomItem,
	Weapon,
	GarageOpen,
	WhiteZoneRecon,
	Selling,
	EMarketCategoryType_MAX,
};

// Enum TslGame.EMarketUIEquipCategory
enum class EMarketUIEquipCategory : uint8 {
	None,
	Helmet,
	Vest,
	Backpack,
	MAX,
	EMarketUIEquipCategory_MAX,
};

// Enum TslGame.*374b5aa406
enum class *374b5aa406 : uint8 {
	*a02d5a4d19,
	*a030d0b6e9,
	*fca34bc5fb,
	*b96a86efa2,
	*374b5aa406_MAX,
};

// Enum TslGame.ETslCharacterType
enum class ETslCharacterType : uint8 {
	none,
	user,
	user_ai,
	npc_pillar,
	npc_guard,
	monster_bear,
	monster_chicken,
	zombie_user,
	zombie_ai,
	npc_killtruck,
	ETslCharacterType_MAX,
};

// Enum TslGame.EAliveNumChangeType
enum class EAliveNumChangeType : uint8 {
	None,
	Die,
	ReviveOrRespawn,
	EAliveNumChangeType_MAX,
};

// Enum TslGame.ESetHealthReason
enum class ESetHealthReason : uint8 {
	Undefined,
	ByPlayerHeal,
	ByPlayerDamage,
	ByPassiveRecovery,
	ByReviveOrDeploy,
	BySystem,
	ESetHealthReason_MAX,
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
	Neon,
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

// Enum TslGame.*1f3e245098
enum class *1f3e245098 : uint8 {
	*641ac20701,
	*ec5510a9ea,
	*e1f8013b5e,
	*aae045f9e1,
	*1f3e245098_MAX,
};

// Enum TslGame.*9ffa63a5b3
enum class *9ffa63a5b3 : uint8 {
	*a89d09e712,
	*f3af5c5241,
	*b749b00188,
	*1b81d0fbfe,
	*0b1779a968,
	*e9bc2646aa,
	*815800d87c,
	*349f12d841,
	*e228e7089e,
	*951f4bb790,
	*d816c6c0af,
	*00c910b2aa,
	*9ffa63a5b3_MAX,
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

// Enum TslGame.*ae2c15694e
enum class *ae2c15694e : uint8 {
	*187d898ff7,
	*b3e6feb7fa,
	*524f55ba4c,
	*aac9a8df74,
	*bfd5bc5237,
	*ae2c15694e_MAX,
};

// Enum TslGame.EInteractableActorType
enum class EInteractableActorType : uint8 {
	None,
	BlueChipTower,
	GasPump,
	JukeBox,
	PlantedBomb,
	Vehicle_Seat,
	Vehicle_Wheel,
	Door,
	DroppedItem,
	Ascender,
	Zipline,
	VendingMachine,
	Firework,
	StrongBox,
	EInteractableActorType_MAX,
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
	Escalator,
	COUNT,
	EMovementBaseType_MAX,
};

// Enum TslGame.*dd1265e535
enum class *dd1265e535 : uint8 {
	*d17cc2af24,
	*d766457587,
	*7f17588228,
	*dd1265e535_MAX,
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
	RewardProvided,
	Max,
	Invalid,
	ERadioMessageCategory_MAX,
};

// Enum TslGame.ERadioMessageDecorateType
enum class ERadioMessageDecorateType : uint8 {
	None,
	EnemySpotted,
	WorldMapPing,
	RewardProvided,
	ERadioMessageDecorateType_MAX,
};

// Enum TslGame.*5e8ae09c18
enum class *5e8ae09c18 : uint8 {
	*3b2e1a6b27,
	*dd4140e72e,
	*f9a814142e,
	*107bdd5935,
	*5e8ae09c18_MAX,
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

// Enum TslGame.*3867654c2b
enum class *3867654c2b : uint8 {
	*5641cb3f6f,
	*6a335a05b5,
	*348ae72795,
	*3867654c2b_MAX,
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

// Enum TslGame.*2cd739555d
enum class *2cd739555d : uint8 {
	*11796ec38a,
	*3f6591b0a5,
	*ecf0ba2828,
	*2cd739555d_MAX,
};

// Enum TslGame.*840c6c5c30
enum class *840c6c5c30 : uint8 {
	*d861b93f77,
	*a05780afff,
	*8fc76a490b,
	*ddef2b9620,
	*f203bf45d4,
	*840c6c5c30_MAX,
};

// Enum TslGame.*10a5c7c537
enum class *10a5c7c537 : uint8 {
	*b039359763,
	*50bc1470cf,
	*9012a9e361,
	*d1c7fd587e,
	*b5021844b9,
	*8e78b2fda7,
	*3c6ff619a6,
	*10a5c7c537_MAX,
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

// Enum TslGame.*6a409c3376
enum class *6a409c3376 : uint8 {
	*772b3cd758,
	*c0a85bf402,
	*09ab2131e9,
	*f51ff378a1,
	*748da87583,
	*54ea6b8f73,
	*95fecf977e,
	*6a1376b313,
	*ec8652ebe0,
	*6a409c3376_MAX,
};

// Enum TslGame.EWeatherChange
enum class EWeatherChange : uint8 {
	NoChange,
	Rainy,
	Foggy,
	EWeatherChange_MAX,
};

// Enum TslGame.*73209877e3
enum class *73209877e3 : uint8 {
	*96971315b9,
	*e3ad8376fe,
	*e051ea6ab9,
	*d42c4de8fd,
	*fd1284e917,
	*a89130a728,
	*73209877e3_MAX,
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

// Enum TslGame.*0ba1379a07
enum class *0ba1379a07 : uint8 {
	*910062ee54,
	*b22ab5a0d6,
	*55e8d60b11,
	*0ba1379a07_MAX,
};

// Enum TslGame.EWeaponStoreItemGroup
enum class EWeaponStoreItemGroup : uint8 {
	None,
	WeaponGroupA,
	WeaponGroupB,
	WeaponGroupC,
	EWeaponStoreItemGroup_MAX,
};

// Enum TslGame.EStoreItemGroup
enum class EStoreItemGroup : uint8 {
	None,
	ItemGroupA,
	ItemGroupB,
	ItemGroupC,
	EStoreItemGroup_MAX,
};

// Enum TslGame.EStoreCategory
enum class EStoreCategory : uint8 {
	None,
	Equipment,
	Attachment,
	ETC,
	Intermediate,
	HighLevel,
	AR,
	DMR,
	SR,
	SG,
	SMG,
	CarePackage,
	CarePackage2,
	EStoreCategory_MAX,
};

// Enum TslGame.EMarketLevel
enum class EMarketLevel : uint8 {
	None,
	GroupA,
	GroupB,
	GroupC,
	GroupD,
	EMarketLevel_MAX,
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

// Enum TslGame.*0662b54277
enum class *0662b54277 : uint8 {
	*bbf509c521,
	*e03cea5721,
	*4efddf2989,
	*0662b54277_MAX,
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

// Enum TslGame.*7804c8a6e1
enum class *7804c8a6e1 : uint8 {
	*5f187418cb,
	*276035b966,
	*08a5e1e4ab,
	*98c4b588be,
	*d092e1008f,
	*7804c8a6e1_MAX,
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

// Enum TslGame.*2f2d63c206
enum class *2f2d63c206 : uint8 {
	*cd1350da7b,
	*fb4059d0af,
	*2f2d63c206_MAX,
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

// Enum TslGame.*62fed5afeb
enum class *62fed5afeb : uint8 {
	*20a9a6f95e,
	*3d289a77bd,
	*d03c4187d4,
	*62fed5afeb_MAX,
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
	BattleReadyKit,
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

// Enum TslGame.*d012928124
enum class *d012928124 : uint8 {
	*47dc0d27ad,
	*4fc6f98475,
	*bb6b935fb6,
	*967136737c,
	*d012928124_MAX,
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

// Enum TslGame.*9c75caf959
enum class *9c75caf959 : uint8 {
	*61131e1d26,
	*8a28dfa617,
	*0d0333a6ca,
	*146b2faec1,
	*d856429ba6,
	*2cd381d273,
	*224cd7c953,
	*df859ceaee,
	*70a6e622ac,
	*c1f49b1929,
	*9c75caf959_MAX,
};

// Enum TslGame.*c35075e4ad
enum class *c35075e4ad : uint8 {
	*c9a707dc21,
	*2b14e63099,
	*b1e6eace61,
	*8f50b07b4c,
	*c35075e4ad_MAX,
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

// Enum TslGame.EWeaponAbilityType
enum class EWeaponAbilityType : uint8 {
	None,
	Digging,
	EWeaponAbilityType_MAX,
};

// Enum TslGame.*1c0db263c1
enum class *1c0db263c1 : uint8 {
	*0eaf973075,
	*ef2d50f889,
	*f4a8f394e5,
	*1c0db263c1_MAX,
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

// Enum TslGame.*d6d56f23e0
enum class *d6d56f23e0 : uint8 {
	*e532b80334,
	*b021e7572a,
	*de1bb40210,
	*5889d250a5,
	*d6d56f23e0_MAX,
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
	None,
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

// Enum TslGame.ETeamChangeZombieMode
enum class ETeamChangeZombieMode : uint8 {
	None,
	LeaveTeam,
	JoinTeam,
	ETeamChangeZombieMode_MAX,
};

// Enum TslGame.*4cbc855d82
enum class *4cbc855d82 : uint8 {
	*6ef6facdd4,
	*a6cdba168a,
	*aec1321f33,
	*1de6341e10,
	*6e4b4b07ff,
	*0887b77b15,
	*4cbc855d82_MAX,
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

// Enum TslGame.*3dd8d57092
enum class *3dd8d57092 : uint8 {
	*e354d95074,
	*1ed6505c0c,
	*1636acd66f,
	*3dd8d57092_MAX,
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

// Enum TslGame.*8efa41bcb0
enum class *8efa41bcb0 : uint8 {
	*5142778fa1,
	*67f9da9666,
	*a30a8bf325,
	*a0d73748d4,
	*fe921ed0df,
	*8efa41bcb0_MAX,
};

// Enum TslGame.*db660ae7a4
enum class *db660ae7a4 : uint8 {
	*cfb8a91c56,
	*a6f1d83ebb,
	*03b731c4c5,
	*db660ae7a4_MAX,
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
	UnlockableItemPackage,
	Max,
	EInventoryListPackageType_MAX,
};

// Enum TslGame.EInventorySlotType
enum class EInventorySlotType : uint8 {
	Vicinity,
	Inventory,
	Crafting,
	Shop,
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

// Enum TslGame.*207b4837ad
enum class *207b4837ad : uint8 {
	*9625a6a8d6,
	*9b8109adc7,
	*27c39f7da3,
	*207b4837ad_MAX,
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

// Enum TslGame.*fa8d79ba4a
enum class *fa8d79ba4a : uint8 {
	*03436cd557,
	*eb5bf88e98,
	*ca9af4cd4e,
	*fa8d79ba4a_MAX,
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

// Enum TslGame.*accf4f7b0b
enum class *accf4f7b0b : uint8 {
	*f0de7751cc,
	*2c123944ad,
	*f0b76c5e23,
	*8eea95f548,
	*158218b3ac,
	*efdcd8ec0c,
	*dc2f9ed840,
	*4a903e7fda,
	*5ad3471036,
	*accf4f7b0b_MAX,
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

// Enum TslGame.*fa2ebbe8e1
enum class *fa2ebbe8e1 : uint8 {
	*b76bcf07a8,
	*1b495ac6cf,
	*c7ba55708d,
	*fa2ebbe8e1_MAX,
};

// Enum TslGame.EBlueZoneInductorState
enum class EBlueZoneInductorState : uint8 {
	None,
	Banned_SafeZoneRecon_ByModeSetting,
	Banned_SafeZoneFlare_ByModeSetting,
	BannedBy_ModeSetting,
	Banned_SafeZoneRecon_ByOtherInductor,
	Banned_SafeZoneRecon,
	Banned_SafeZoneFlare_ByOtherInductor,
	Banned_SafeZoneFlare,
	BannedBy_OtherInductor,
	Banned_AnyType,
	ActiveBy_SafeZoneRecon,
	ActiveBy_SafeZoneFlare,
	ActiveBy_MagneticInductor,
	ActiveBy_AnyReason,
	EBlueZoneInductorState_MAX,
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

// Enum TslGame.ETslDestructibleObjectType
enum class ETslDestructibleObjectType : uint8 {
	None,
	JerryCan,
	BulletproofShield,
	Window,
	Door,
	Fence,
	Hay,
	Camera,
	Bamboo,
	Helmet,
	Vehicle,
	Wheel,
	Land,
	BirdCage,
	JukeBox,
	ETslDestructibleObjectType_MAX,
};

// Enum TslGame.*7db39c4871
enum class *7db39c4871 : uint8 {
	*e980382770,
	*9f5a25fb3c,
	*7b9b642108,
	*52c401a14a,
	*e359d456b3,
	*7db39c4871_MAX,
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

// Enum TslGame.*ae19195785
enum class *ae19195785 : uint8 {
	*3337bc06c2,
	*25d032b587,
	*6f647489c4,
	*ae19195785_MAX,
};

// Enum TslGame.*7ce5595ebb
enum class *7ce5595ebb : uint8 {
	*fae0c07e24,
	*edac7c9095,
	*c5881ffce6,
	*ded02e8c41,
	*4c41d9076f,
	*7ce5595ebb_MAX,
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
	BattleReadyKit,
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
	Bicycle,
	SkinVehicle,
	Buff,
	Bluechip,
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

// Enum TslGame.*a39982f5b1
enum class *a39982f5b1 : uint8 {
	*40365d816b,
	*9bdfa0b366,
	*0891ab780d,
	*c5e0c86f44,
	*a39982f5b1_MAX,
};

// Enum TslGame.*34a832a87c
enum class *34a832a87c : uint8 {
	*16a46e8df3,
	*4e4c89c27c,
	*e13d7e68f2,
	*d844357a40,
	*9aa5d8424f,
	*c2a3a53f7a,
	*4cfb97f747,
	*f27a786c97,
	*91f9f5bf9d,
	*6c4e491f59,
	*d593eae799,
	*6f81545ea5,
	*a65487fcb8,
	*32ea63ce77,
	*839cca249f,
	*6f0b1467b0,
	*be919f57b2,
	*666c520506,
	*5fe829642d,
	*ee0a70f1bf,
	*50ea1a5e14,
	*436f00826a,
	*817287d8e5,
	*f6b35b3531,
	*c379e6d9c8,
	*5ae6cd0576,
	*d538581776,
	*f5ade1f37f,
	*8cd136bf13,
	*8bb27d23ef,
	*8dd010fe29,
	*c64772f602,
	*a36a93da43,
	*91fc62c7dc,
	*60b963d318,
	*96c34739f8,
	*363e2958b6,
	*24a6205407,
	*6e9843e588,
	*21f835cbc3,
	*8009a3d21a,
	*5a709dd921,
	*497fb143ca,
	*1a69cbf605,
	*2c0d2554b6,
	*e9a0781634,
	*8fb6eebbea,
	*2073fe2797,
	*2f502f2b65,
	*5f7c76c636,
	*3e29319900,
	*5889a3b780,
	*55c9ab8e24,
	*6478272fcb,
	*9e69a31b43,
	*34a832a87c_MAX,
};

// Enum TslGame.*d3b91baf28
enum class *d3b91baf28 : uint8 {
	*229757a144,
	*eadbfa72fc,
	*0c5d3f19eb,
	*d874e64f9e,
	*d3b91baf28_MAX,
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

// Enum TslGame.*3d2bec6659
enum class *3d2bec6659 : uint8 {
	*0937aca5e0,
	*253b6a6b7d,
	*daaca6906e,
	*4ee9c52e41,
	*046e1d45e4,
	*3d2bec6659_MAX,
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

// Enum TslGame.*908bd88e5f
enum class *908bd88e5f : uint8 {
	*6a045bc44c,
	*82940e9252,
	*d5d3bf07ff,
	*f3968fd22f,
	*908bd88e5f_MAX,
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
	InvalidOrigin_Melee,
	InvalidOrigin_Throwable,
	InvalidOrigin_MeleeThrow,
	InvalidSimStep_MeleeThrow,
	InvalidRange,
	InvalidRange2,
	InvalidRange_MeleeThrow,
	InvalidImpact_Adjusted,
	InvalidImpactZ_Adjusted,
	InvalidImpact_Gun_C_Adjusted,
	InvalidOrigin_Melee_Adjusted,
	InvalidOrigin_MeleeThrow_Adjusted,
	InvalidOrigin_Gun_C_Adjusted,
	InvalidRange2_Adjusted,
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

// Enum TslGame.*3324f7f181
enum class *3324f7f181 : uint8 {
	*2af8e7ef4f,
	*bb740071fb,
	*50f2be22eb,
	*90a1b78bbb,
	*3324f7f181_MAX,
};

// Enum TslGame.EPreoccupiedTeamType
enum class EPreoccupiedTeamType : uint8 {
	NEUTRAL,
	RED,
	BLUE,
	EPreoccupiedTeamType_MAX,
};

// Enum TslGame.*f380492015
enum class *f380492015 : uint8 {
	*a6bebb207f,
	*cc9446f658,
	*4f48d76f0e,
	*a83b50f738,
	*f380492015_MAX,
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

// Enum TslGame.*7e3c44e045
enum class *7e3c44e045 : uint8 {
	*ebf89684b1,
	*c482be3f9a,
	*b8f6356af0,
	*e20405aa4a,
	*7e3c44e045_MAX,
};

// Enum TslGame.ESpecialZoneAdditionalEffect
enum class ESpecialZoneAdditionalEffect : uint8 {
	RemoveFireAndSmoke,
	DestructDrone,
	DeactivateBluezoneBlocker,
	DeactivateSpotterScope,
	DeactivateBlueChipDetector,
	DeactivateBlueChipRevival,
	DeactivateReticle,
	DeactivateVehicle,
	DeactivateMarket,
	DeactivateEscalator,
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
	EMP,
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
	Market,
	TableType_MAX,
};

// Enum TslGame.ESoftRoleState
enum class ESoftRoleState : uint8 {
	Open,
	Closed,
	Inspect,
	ESoftRoleState_MAX,
};

// Enum TslGame.*11756e38de
enum class *11756e38de : uint8 {
	*7a31d6b7c3,
	*b86d059d17,
	*b06e6eca08,
	*26fd921940,
	*11756e38de_MAX,
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

// Enum TslGame.*073db8da69
enum class *073db8da69 : uint8 {
	*c26be65375,
	*da1b9a37dd,
	*843057d535,
	*19a8ed613a,
	*4ae6f77cb1,
	*f31a9a182c,
	*35123f7569,
	*073db8da69_MAX,
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

// Enum TslGame.*6a15d095b5
enum class *6a15d095b5 : uint8 {
	*05860a85b8,
	*da47d710f6,
	*b0b444fc67,
	*6a15d095b5_MAX,
};

// Enum TslGame.*8b4d6e2791
enum class *8b4d6e2791 : uint8 {
	*731e14f9b3,
	*ab50f210bb,
	*ca4dc8efb8,
	*f050e2288c,
	*8b4d6e2791_MAX,
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

// Enum TslGame.*cbd0fbd7f9
enum class *cbd0fbd7f9 : uint8 {
	*f08d55cc3c,
	*eaa64cb217,
	*68096f8fd0,
	*cbd0fbd7f9_MAX,
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

// Enum TslGame.*1852d2b7c5
enum class *1852d2b7c5 : uint8 {
	*6de48e86c8,
	*bc99fdd057,
	*948b113377,
	*dfb41b7787,
	*c6f3ab7966,
	*faedeb998f,
	*76702017c8,
	*1852d2b7c5_MAX,
};

// Enum TslGame.*ae7c5d2cb1
enum class *ae7c5d2cb1 : uint8 {
	*4b5604fa9c,
	*8251db5bb3,
	*95d89cbb1e,
	*3140ef4518,
	*14ea250980,
	*ae7c5d2cb1_MAX,
};

// Enum TslGame.*acbee09004
enum class *acbee09004 : uint8 {
	*a8cffd74b6,
	*5209f464ee,
	*e5daa9d1f7,
	*88a5933779,
	*acbee09004_MAX,
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

// Enum TslGame.*996f6b1c2e
enum class *996f6b1c2e : uint8 {
	*67fe575a63,
	*a3b2ef5358,
	*713e4d9ecf,
	*059377cb6e,
	*e185a9ecfa,
	*996f6b1c2e_MAX,
};

// Enum TslGame.*0e762ae104
enum class *0e762ae104 : uint8 {
	*81f569c6d2,
	*6654768f0c,
	*1708fb78fc,
	*0e762ae104_MAX,
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

// Enum TslGame.*bb21983e8b
enum class *bb21983e8b : uint8 {
	*29487c291c,
	*df3c44122c,
	*99489c8820,
	*e10d3bbf3a,
	*3e0fb33600,
	*9f7efb8de4,
	*b69ca05e78,
	*6f19651d96,
	*bb21983e8b_MAX,
};

// Enum TslGame.*d8031bdfcd
enum class *d8031bdfcd : uint8 {
	*5c9b1ba4a1,
	*1f64cc3747,
	*7f46ef80a1,
	*aac0603e8f,
	*0e9a32aa35,
	*d8031bdfcd_MAX,
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

// Enum TslGame.*940f2ac99d
enum class *940f2ac99d : uint8 {
	*7f1e9e232b,
	*7d6b988ce6,
	*705cdfa586,
	*940f2ac99d_MAX,
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

// Enum TslGame.EItemRequestType
enum class EItemRequestType : uint8 {
	None,
	Heal,
	Ammo,
	EItemRequestType_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_InteractionType
enum class ETslIngameMission_ConditionData_InteractionType : uint8 {
	None,
	VehicleRadio,
	BodyCarry,
	InteractableActor,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_Condition_PlaceType
enum class ETslIngameMission_Condition_PlaceType : uint8 {
	None,
	SecretRoom,
	Market,
	ETslIngameMission_Condition_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_VisitType
enum class ETslIngameMission_ConditionData_VisitType : uint8 {
	None,
	Region,
	Place,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_ReviveType
enum class ETslIngameMission_ConditionData_ReviveType : uint8 {
	None,
	SelfDBNO,
	TeamDBNO,
	Redeploy,
	Bluechip,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_Condition_ParkourType
enum class ETslIngameMission_Condition_ParkourType : uint8 {
	None,
	Vaulting,
	Cooperative,
	ETslIngameMission_Condition_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_KillType
enum class ETslIngameMission_ConditionData_KillType : uint8 {
	None,
	Vehicle,
	RidingShot,
	HeadShot,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_KillAssistType
enum class ETslIngameMission_ConditionData_KillAssistType : uint8 {
	Kill,
	Assist,
	KillOrAssist,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_Condition_ComparisonType
enum class ETslIngameMission_Condition_ComparisonType : uint8 {
	Less,
	Greater,
	ETslIngameMission_Condition_MAX,
};

// Enum TslGame.ETslIngameMission_CoditionData_VehicleType
enum class ETslIngameMission_CoditionData_VehicleType : uint8 {
	None,
	Floating,
	Wheeled,
	MotorBike,
	Flying,
	All,
	ETslIngameMission_CoditionData_MAX,
};

// Enum TslGame.ETslIngameMission_CoditionData_MoveType
enum class ETslIngameMission_CoditionData_MoveType : uint8 {
	None,
	Walk,
	Drive,
	Parachute,
	Swim,
	SafeZone,
	ETslIngameMission_CoditionData_MAX,
};

// Enum TslGame.ETslIngameMissionCondition_FlareGunUsage
enum class ETslIngameMissionCondition_FlareGunUsage : uint8 {
	None,
	BRDM,
	CarePackage,
	SafeZone,
	ETslIngameMissionCondition_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_ItemType
enum class ETslIngameMission_ConditionData_ItemType : uint8 {
	Any,
	Equipable,
	Weapon,
	Castable,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_ItemUseType
enum class ETslIngameMission_ConditionData_ItemUseType : uint8 {
	None,
	ItemConsume,
	Flaregun,
	ItemThrow,
	FireWeapon,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_ItemMissionType
enum class ETslIngameMission_ConditionData_ItemMissionType : uint8 {
	None,
	PickUp,
	Use,
	Request,
	Give,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMissionRewardType
enum class ETslIngameMissionRewardType : uint8 {
	Normal,
	Jackpot,
	ETslIngameMissionRewardType_MAX,
};

// Enum TslGame.ETslIngameMissionType
enum class ETslIngameMissionType : uint8 {
	Easy,
	Normal,
	Hard,
	Event,
	Newbie,
	None,
	ETslIngameMissionType_MAX,
};

// Enum TslGame.*8499417bc3
enum class *8499417bc3 : uint8 {
	*b83718b25a,
	*0f51f7bfba,
	*b06198104c,
	*8499417bc3_MAX,
};

// Enum TslGame.ETslIngameMissionFailReason
enum class ETslIngameMissionFailReason : uint8 {
	Success,
	Invalid_IngameMissionManagerClass,
	Invalid_IngameMissionManagerObject,
	Invalid_IngameMissionDataTables,
	Invalid_IngameMissionCondition,
	Fail_EnableIngameMission,
	Fail_CheckMissionActivation_MissionDataNull,
	Fail_CheckMissionActivation_Inactive,
	Fail_CheckMissionActivation_InvalidMap,
	Fail_CheckMissionActivation_InvalidMode,
	Fail_CheckMissionActivation_LackTeammates,
	Fail_CheckMissionActivation_GameStateNull,
	Fail_CheckMissionActivation_ReachSurvivalLvLimit,
	Fail_CheckMissionActivation_UsedMission,
	Fail_CheckRewardActivation_MissionDataNull,
	Fail_CheckRewardActivation_InvalidMap,
	Fail_ReplaceMission_InvalidMissionId,
	Fail_ReplaceMission_NoDataLeft,
	Fail_ReplaceMission_ReachReplacementLimit,
	Fail_ProcessNewMission_TooFewMissions,
	Fail_ProcessNewMission_InvalidIndex,
	ETslIngameMissionFailReason_MAX,
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

// Enum TslGame.*3644527f08
enum class *3644527f08 : uint8 {
	*d5ffa49995,
	*f44b51506b,
	*f46eb8d1e1,
	*59e9b6f4f9,
	*fe47238a33,
	*3644527f08_MAX,
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

// Enum TslGame.*16e5731d2c
enum class *16e5731d2c : uint8 {
	*4a1c44b663,
	*7e984db04c,
	*439dd11022,
	*967916ddac,
	*d84700dd9e,
	*16e5731d2c_MAX,
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

// Enum TslGame.*6d4cfb0321
enum class *6d4cfb0321 : uint8 {
	*c1009459fd,
	*aa94d14fb1,
	*b8a37a8993,
	*93338ec608,
	*61147c9ed9,
	*9edd4f48fb,
	*6d4cfb0321_MAX,
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

// Enum TslGame.EPatrolSpeed
enum class EPatrolSpeed : uint8 {
	Walk,
	Run,
	Sprint,
	EPatrolSpeed_MAX,
};

// Enum TslGame.*ff593eda08
enum class *ff593eda08 : uint8 {
	*61e0f49599,
	*e2d18f7576,
	*1ce64d62c2,
	*30988da725,
	*ff593eda08_MAX,
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

// Enum TslGame.*aea429c698
enum class *aea429c698 : uint8 {
	*15cb4256ae,
	*3679cb978b,
	*5949510587,
	*ab7f041fac,
	*739fe15796,
	*aea429c698_MAX,
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

// Enum TslGame.*c75eb07276
enum class *c75eb07276 : uint8 {
	*e508e6f1ce,
	*a48598134c,
	*28732e21b9,
	*0e2be2cef8,
	*a23aee2b88,
	*c75eb07276_MAX,
};

// Enum TslGame.*586d5a41d2
enum class *586d5a41d2 : uint8 {
	*5d14f85c1a,
	*30610158b0,
	*713b403087,
	*fed69c8c5d,
	*cdcf73e715,
	*586d5a41d2_MAX,
};

// Enum TslGame.*d98cef593f
enum class *d98cef593f : uint8 {
	*9de4e39b5c,
	*b8845fd8e3,
	*f57456d94c,
	*6e632bfa27,
	*d98cef593f_MAX,
};

// Enum TslGame.EReactionObjectType
enum class EReactionObjectType : uint8 {
	Fence,
	Hay,
	Camera,
	Bamboo,
	BirdCage,
	LandscapeReacting,
	EReactionObjectType_MAX,
};

// Enum TslGame.*da40bf1eb5
enum class *da40bf1eb5 : uint8 {
	*d39b15657d,
	*516f859f10,
	*6529b5bea3,
	*ff222ebfd6,
	*da40bf1eb5_MAX,
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

// Enum TslGame.*06c3bc7c57
enum class *06c3bc7c57 : uint8 {
	*9e00131992,
	*393b2381d1,
	*1cc5e0b72d,
	*60a72a9102,
	*b571b658f3,
	*2837ed42c9,
	*3606a9b6df,
	*06c3bc7c57_MAX,
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

// Enum TslGame.EMarketShopUINotifyType
enum class EMarketShopUINotifyType : uint8 {
	None,
	InsufficientSpace,
	Sold,
	Obtained,
	MAX,
	EMarketShopUINotifyType_MAX,
};

// Enum TslGame.EMarketUITuningPhase
enum class EMarketUITuningPhase : uint8 {
	None,
	init,
	PlayingAnim,
	Done,
	Empty,
	NotEnoughCoin,
	MAX,
	EMarketUITuningPhase_MAX,
};

// Enum TslGame.EMarketUIRandomPhase
enum class EMarketUIRandomPhase : uint8 {
	None,
	Reset,
	PlayingAnim,
	Result,
	MAX,
	EMarketUIRandomPhase_MAX,
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

// Enum TslGame.*d0429aaf4c
enum class *d0429aaf4c : uint8 {
	*be927dc73f,
	*ef4e756dc5,
	*d584a7100d,
	*1828ba462e,
	*d0429aaf4c_MAX,
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

// Enum TslGame.*0d1fe0558a
enum class *0d1fe0558a : uint8 {
	*1d6e2a04ee,
	*5967ec2fd1,
	*9fe8830485,
	*665787d8dc,
	*1645a2c641,
	*6caee492f2,
	*3ac21088cd,
	*c4e29ab813,
	*e86313f000,
	*b10721fe5e,
	*d5308467b9,
	*57218bc70f,
	*a662cf14b7,
	*0d1fe0558a_MAX,
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

// Enum TslGame.*80c8fd85ea
enum class *80c8fd85ea : uint8 {
	*8fb720a6ff,
	*41ee549e79,
	*e10bcefa4c,
	*d4874166ba,
	*9252574bec,
	*80c8fd85ea_MAX,
};

// Enum TslGame.*27bd1c025d
enum class *27bd1c025d : uint8 {
	*93a31f31c7,
	*e4565429f8,
	*73cf5aa893,
	*34bdd06d35,
	*27bd1c025d_MAX,
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

// Enum TslGame.*0e8f71de4a
enum class *0e8f71de4a : uint8 {
	*d6ad368e6f,
	*4b690f0ff9,
	*436d17db8e,
	*a70222b0f2,
	*76c4c42892,
	*0e8f71de4a_MAX,
};

// Enum TslGame.*77f15b8f03
enum class *77f15b8f03 : uint8 {
	*4f3e19659f,
	*97b9d489ae,
	*4986f73a6d,
	*f1b807f42a,
	*77f15b8f03_MAX,
};

// Enum TslGame.*efcb09404e
enum class *efcb09404e : uint8 {
	*14f6d801e3,
	*955d55b298,
	*f5d06db23d,
	*e2a2b65ab4,
	*efcb09404e_MAX,
};

// Enum TslGame.*0623824d04
enum class *0623824d04 : uint8 {
	*45a9de9525,
	*381865cc28,
	*5a30f3f514,
	*3551f654d4,
	*6d9acc026b,
	*0623824d04_MAX,
};

// Enum TslGame.*ab3a38f38c
enum class *ab3a38f38c : uint8 {
	*9db6f9ad5d,
	*60ce0e4d91,
	*749c82e0eb,
	*ab3a38f38c_MAX,
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

// Enum TslGame.*ef6c83101e
enum class *ef6c83101e : uint8 {
	*550cbf927f,
	*b2824a9553,
	*05377caab4,
	*d1d907f16f,
	*ef6c83101e_MAX,
};

// Enum TslGame.*fde18555bc
enum class *fde18555bc : uint8 {
	*2d9fddbc13,
	*85f9bcbc58,
	*020db4e9c8,
	*22cc8a0583,
	*fde18555bc_MAX,
};

// Enum TslGame.*1801a5a1d8
enum class *1801a5a1d8 : uint8 {
	*2b101c22ae,
	*c77e558fc2,
	*cf72ee7430,
	*91700fdf0f,
	*1801a5a1d8_MAX,
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

// Enum TslGame.*ee237c3a51
enum class *ee237c3a51 : uint8 {
	*c1d8690da6,
	*3d5df9662e,
	*49a4fc0f41,
	*654de9db2c,
	*459f050ac5,
	*ee237c3a51_MAX,
};

// Enum TslGame.EPackageState
enum class EPackageState : uint8 {
	Normal,
	Broken,
	Empty,
	EPackageState_MAX,
};

// Enum TslGame.EPackageDoorState
enum class EPackageDoorState : uint8 {
	CLOSED,
	OPENING,
	OPENED,
	EPackageDoorState_MAX,
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

// Enum TslGame.*3dd61137cb
enum class *3dd61137cb : uint8 {
	*cefdadb26f,
	*0ba1ad2cca,
	*d711f50767,
	*30c5ffc2c6,
	*3dd61137cb_MAX,
};

// Enum TslGame.*cb4b49374c
enum class *cb4b49374c : uint8 {
	*823b9f38c3,
	*4d211f1449,
	*97ef10ce89,
	*64e1f1811f,
	*cb4b49374c_MAX,
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

// Enum TslGame.*fba1fa3383
enum class *fba1fa3383 : uint8 {
	*de6ec3bde7,
	*fe6fee7d2e,
	*6916510eaf,
	*fba1fa3383_MAX,
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

// Enum TslGame.EAirDropType
enum class EAirDropType : uint8 {
	NormalCarePackage,
	CustomAirDrop,
	Market,
	EAirDropType_MAX,
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

// Enum TslGame.*675d0ae66b
enum class *675d0ae66b : uint8 {
	*bfd3c11acd,
	*7b11f1fe8c,
	*675d0ae66b_MAX,
};

// Enum TslGame.*a918f31350
enum class *a918f31350 : uint8 {
	*bb323191d1,
	*a307e307c5,
	*86940c8f2c,
	*d4f3b0e025,
	*7070cf4784,
	*dbfcad796d,
	*ea9b03a786,
	*fbaba8f75c,
	*7c22c0cca6,
	*6368414a4a,
	*2aa2515bda,
	*1975d6cabe,
	*21a7907f86,
	*a918f31350_MAX,
};

// Enum TslGame.*46466626aa
enum class *46466626aa : uint8 {
	*e64c0f2c38,
	*53271209ab,
	*2d4aea50e5,
	*ba986c38af,
	*46466626aa_MAX,
};

// Enum TslGame.*93611b8209
enum class *93611b8209 : uint8 {
	*66ff9947df,
	*4857019c99,
	*b35bd9afcf,
	*94abfb96c2,
	*58e7c401fb,
	*b4bc3ce2c7,
	*93611b8209_MAX,
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

// Enum TslGame.*627dcd4840
enum class *627dcd4840 : uint8 {
	*e38378ca8f,
	*6e41a65838,
	*33f083ac51,
	*1b0cde6644,
	*f950819cc7,
	*ad2b1b3249,
	*d67792a147,
	*aed538e811,
	*cc1ced58ab,
	*627dcd4840_MAX,
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

// Enum TslGame.*062039cd9d
enum class *062039cd9d : uint8 {
	*86cf7f40af,
	*236785aa19,
	*66d921bace,
	*e12d1a7b5c,
	*ed7bdceb97,
	*39d50e2af2,
	*b1dfe238be,
	*062039cd9d_MAX,
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

// Enum TslGame.*3a367d8624
enum class *3a367d8624 : uint8 {
	*b6cc2f0b7e,
	*568facfe9a,
	*3a367d8624_MAX,
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

// Enum TslGame.*2c2a3af4b6
enum class *2c2a3af4b6 : uint8 {
	*fec50c6b19,
	*0dc67d24a1,
	*2c2a3af4b6_MAX,
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

// Enum TslGame.*c7fd0975aa
enum class *c7fd0975aa : uint8 {
	*a0b11b0904,
	*6241d030cb,
	*afcb762542,
	*e9bb9f6731,
	*91963bded7,
	*a1365cc453,
	*6bb159a229,
	*063fd33631,
	*82c76b2480,
	*c7fd0975aa_MAX,
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

// Enum TslGame.*c9c6d899fc
enum class *c9c6d899fc : uint8 {
	*93006d7ead,
	*5a7c53033d,
	*8a59d9b1a0,
	*3c792d6656,
	*58b45677dd,
	*c410ff8d8a,
	*b0cf91e28d,
	*c1a77f5e32,
	*0e2abbe131,
	*c9c6d899fc_MAX,
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

// Enum TslGame.*184bce6b16
enum class *184bce6b16 : uint8 {
	*876f1281cf,
	*829da85c99,
	*1e872f679c,
	*bf4d9de848,
	*184bce6b16_MAX,
};

// Enum TslGame.ELivingThingState
enum class ELivingThingState : uint8 {
	Idle,
	Alert,
	Dead,
	Max,
	ELivingThingState_MAX,
};

// Enum TslGame.*ab0aa9cfdb
enum class *ab0aa9cfdb : uint8 {
	*381865cc28,
	*477f19e726,
	*51f0f81ce3,
	*ab0aa9cfdb_MAX,
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

// Enum TslGame.*d465c1792c
enum class *d465c1792c : uint8 {
	*06a1315951,
	*978e88192d,
	*d465c1792c_MAX,
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

// Enum TslGame.*3301e7cc6f
enum class *3301e7cc6f : uint8 {
	*ff7cf7d188,
	*ac52f628fb,
	*262256293e,
	*3301e7cc6f_MAX,
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

// Enum TslGame.*ed55acacb6
enum class *ed55acacb6 : uint8 {
	*e6c7296991,
	*4d3980e4cd,
	*a9d4c501d9,
	*8f22fad3c3,
	*ed55acacb6_MAX,
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

// Enum TslGame.*32a75670a9
enum class *32a75670a9 : uint8 {
	*c6762fbe9e,
	*a8a64acc57,
	*78b211d3da,
	*9ff448f5f9,
	*ebe9940846,
	*cddc10c9b9,
	*310754b5c6,
	*32a75670a9_MAX,
};

// Enum TslGame.EBBHolderSelectMethod
enum class EBBHolderSelectMethod : uint8 {
	Closest,
	Random,
	EBBHolderSelectMethod_MAX,
};

// Enum TslGame.*db49647d70
enum class *db49647d70 : uint8 {
	*b6f46adcab,
	*1dd1205295,
	*3112ea310a,
	*b84a8871b3,
	*db49647d70_MAX,
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

// Enum TslGame.*2c9fffa468
enum class *2c9fffa468 : uint8 {
	*02b48a485b,
	*1e9ed81052,
	*7b3b9af60c,
	*2c9fffa468_MAX,
};

// Enum TslGame.*3e8211350e
enum class *3e8211350e : uint8 {
	*ec1c79f7ac,
	*82d1020624,
	*8478209286,
	*3e8211350e_MAX,
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

// Enum TslGame.EGarageState
enum class EGarageState : uint8 {
	None,
	DoorClosed,
	DoorOpening,
	DoorOpenedWithSiren,
	DoorOpenedWithFlashing,
	FinalState,
	EGarageState_MAX,
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

// Enum TslGame.*2a3cb1f5b1
enum class *2a3cb1f5b1 : uint8 {
	*42dac3d825,
	*55611f9796,
	*6821c6e660,
	*2a3cb1f5b1_MAX,
};

// Enum TslGame.*82468da5cd
enum class *82468da5cd : uint8 {
	*86cf7f40af,
	*66d921bace,
	*39a7d3a3a7,
	*7e344fbc89,
	*195feff8f4,
	*7dd8dd6485,
	*82468da5cd_MAX,
};

// Enum TslGame.*0411e8014d
enum class *0411e8014d : uint8 {
	*86cf7f40af,
	*807eb42869,
	*66d921bace,
	*7b7a5267b4,
	*0411e8014d_MAX,
};

// Enum TslGame.ETrainingButtonActiveType
enum class ETrainingButtonActiveType : uint8 {
	Default,
	AimTrainingOnly,
	ETrainingButtonActiveType_MAX,
};

// Enum TslGame.EFireworkLauncherState
enum class EFireworkLauncherState : uint8 {
	ACTIVATED,
	DEACTIVATED_TEMPORARILY_BY_FIRE_DELAY,
	DEACTIVATED_PERMENANTLY_BY_OUT_OF_STOCK,
	EFireworkLauncherState_MAX,
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

// Enum TslGame.ETurnTableAnimState
enum class ETurnTableAnimState : uint8 {
	PLAYING,
	STOPPED,
	ETurnTableAnimState_MAX,
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

// Enum TslGame.*68550269ed
enum class *68550269ed : uint8 {
	*c7db89eb5a,
	*6e8a464524,
	*2d6cdebc58,
	*38852513a6,
	*16d8dde108,
	*68550269ed_MAX,
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

// Enum TslGame.*eaea621dd7
enum class *eaea621dd7 : uint8 {
	*0325928260,
	*e5a54eda6f,
	*b2f69c2981,
	*eaea621dd7_MAX,
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

// Enum TslGame.*5dc8cee212
enum class *5dc8cee212 : uint8 {
	*960880b704,
	*3b85c7d435,
	*38d7d11c15,
	*5dc8cee212_MAX,
};

// Enum TslGame.ETslReferenceObjType
enum class ETslReferenceObjType : uint8 {
	GameMode,
	Character,
	Preload,
	ETslReferenceObjType_MAX,
};

// Enum TslGame.*cfbd317cc7
enum class *cfbd317cc7 : uint8 {
	*14d5648d39,
	*345b6380d7,
	*f27d5a913d,
	*e11fce922d,
	*b217c0fbb1,
	*cfbd317cc7_MAX,
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

// Enum TslGame.*35f1ff6b3a
enum class *35f1ff6b3a : uint8 {
	*cdbe1b2bd6,
	*57d295e454,
	*966fddf52f,
	*0c0f4354dd,
	*6cf594ec90,
	*35f1ff6b3a_MAX,
};

// Enum TslGame.*22c5a10a84
enum class *22c5a10a84 : uint8 {
	*08aba00506,
	*1b63afdcd5,
	*0e37739e1d,
	*01c590084e,
	*973827da9a,
	*085b14adc7,
	*193c71cc80,
	*a9e3f9998c,
	*35ca991a39,
	*b73c18538c,
	*8f66675070,
	*22c5a10a84_MAX,
};

// Enum TslGame.ERideVehicle
enum class ERideVehicle : uint8 {
	None,
	Ride,
	Leave,
	ERideVehicle_MAX,
};

// Enum TslGame.*9634cfbd4d
enum class *9634cfbd4d : uint8 {
	*025b501ceb,
	*9a8d987ffa,
	*b09bf38de3,
	*9634cfbd4d_MAX,
};

// Enum TslGame.*c7acf2eeee
enum class *c7acf2eeee : uint8 {
	*b0d4e65466,
	*4d8c2cff10,
	*496453848f,
	*c7acf2eeee_MAX,
};

// Enum TslGame.ETslFlareGunWidgetDisplayType
enum class ETslFlareGunWidgetDisplayType : uint8 {
	Worldmap,
	Hud,
	ETslFlareGunWidgetDisplayType_MAX,
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

// Enum TslGame.*beded2285b
enum class *beded2285b : uint8 {
	*72be1268b7,
	*7e678e8cd5,
	*fba0da61a9,
	*93d23a0f1b,
	*67c9d5c914,
	*6007370a93,
	*ca44f7509c,
	*beded2285b_MAX,
};

// Enum TslGame.*5be6ab4f38
enum class *5be6ab4f38 : uint8 {
	*e96e9633e8,
	*9a8e242139,
	*7677a59893,
	*5be6ab4f38_MAX,
};

// Enum TslGame.EMeleeThrowState
enum class EMeleeThrowState : uint8 {
	Idle,
	Prepare,
	Throw,
	EMeleeThrowState_MAX,
};

// Enum TslGame.*601b770921
enum class *601b770921 : uint8 {
	*45ddd031ee,
	*3b5bbcd093,
	*c3f67dfbcf,
	*601b770921_MAX,
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

// Enum TslGame.*fffa2fe3ae
enum class *fffa2fe3ae : uint8 {
	*8f1370cf9c,
	*fb0ce92891,
	*0c852eb1e4,
	*82f8640d38,
	*fffa2fe3ae_MAX,
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
	Tasered,
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

// Enum TslGame.*3447aa27f8
enum class *3447aa27f8 : uint8 {
	*bc8fdcadd2,
	*bfff5752f6,
	*c2ab162989,
	*fa1c226f84,
	*3447aa27f8_MAX,
};

// Enum TslGame.*c6484a48d8
enum class *c6484a48d8 : uint8 {
	*2a37b7973a,
	*3fd30387e4,
	*e39c0373ae,
	*c6484a48d8_MAX,
};

// Enum TslGame.EEmotePlayViewType
enum class EEmotePlayViewType : uint8 {
	Disable,
	TeamMate_Enable,
	Interaction_Enable,
	EEmotePlayViewType_MAX,
};

// Enum TslGame.*570ce0e479
enum class *570ce0e479 : uint8 {
	*0091bb8c68,
	*1df914e2d2,
	*a6b7572995,
	*e39c0373ae,
	*570ce0e479_MAX,
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

// ScriptStruct TslGame.*c9db24d090
// Size: 0x30 (Inherited: 0x00)
struct F*c9db24d090 {
	struct FString PartyId; // 0x00(0x10)
	bool IsPartyLeader; // 0x10(0x01)
	enum class ERequestPartyState PartyState; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32 *009f371409; // 0x14(0x04)
	bool *f0523a2398; // 0x18(0x01)
	char pad_19[0x17]; // 0x19(0x17)
};

// ScriptStruct TslGame.*fa099ca0b4
// Size: 0x60 (Inherited: 0x00)
struct F*fa099ca0b4 {
	float *f9732ea868; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct U*f1c3ddafe1* *4f87548b38; // 0x08(0x08)
	struct UClass* *0ad023d030; // 0x10(0x08)
	struct ATslPlayerState* *ebb2344eed; // 0x18(0x08)
	struct FVector_NetQuantize *ca49446e09; // 0x20(0x0c)
	struct FVector_NetQuantize *abd9e87a6a; // 0x2c(0x0c)
	struct FName BoneName; // 0x38(0x08)
	float *d33a176815; // 0x40(0x04)
	bool *ee42d82e73; // 0x44(0x01)
	bool *bbdcf168bd; // 0x45(0x01)
	char *3b4a22e970 : 1; // 0x46(0x01)
	char *b1b5b38fa5 : 1; // 0x46(0x01)
	char *fc1bf92eb1 : 1; // 0x46(0x01)
	char pad_46_3 : 5; // 0x46(0x01)
	bool *a9a25e1e05; // 0x47(0x01)
	struct FName *c0bc9dec4b; // 0x48(0x08)
	struct FVector AttackerLocation; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*ffb09d99ff
// Size: 0x40 (Inherited: 0x00)
struct F*ffb09d99ff {
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

// ScriptStruct TslGame.*4cf7537d4a
// Size: 0x18 (Inherited: 0x00)
struct F*4cf7537d4a {
	struct F*b1ff9d361b *5dc8bd98a3; // 0x00(0x08)
	struct F*b1ff9d361b WeaponPackage; // 0x08(0x08)
	struct F*b1ff9d361b HealingPackage; // 0x10(0x08)
};

// ScriptStruct TslGame.*b1ff9d361b
// Size: 0x08 (Inherited: 0x00)
struct F*b1ff9d361b {
	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *9efd00caa3; // 0x04(0x04)
};

// ScriptStruct TslGame.MapMarker
// Size: 0x10 (Inherited: 0x00)
struct FMapMarker {
	bool Show; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D MarkerPosition; // 0x04(0x08)
	enum class EMarkerType MarkerType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*98fbf2194a
// Size: 0x20 (Inherited: 0x10)
struct F*98fbf2194a : F*f76dda2bad {
	struct FVector SpawnPosition; // 0x10(0x0c)
	float *5576533b56; // 0x1c(0x04)
};

// ScriptStruct TslGame.*f76dda2bad
// Size: 0x10 (Inherited: 0x00)
struct F*f76dda2bad {
	enum class EPlatoonSupportRequestEventType EventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *89cdd10526; // 0x04(0x04)
	bool *752c9b68e9; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StartTime; // 0x0c(0x04)
};

// ScriptStruct TslGame.*a7198b60ca
// Size: 0x24 (Inherited: 0x10)
struct F*a7198b60ca : F*f76dda2bad {
	enum class EPlatoonCarePackageType CarePackageType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *a027bb1cd6; // 0x14(0x04)
	struct FVector *bc70f81ca8; // 0x18(0x0c)
};

// ScriptStruct TslGame.*d8845fdbea
// Size: 0x20 (Inherited: 0x00)
struct F*d8845fdbea {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* TargetActor; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*ff80ea7857
// Size: 0x20 (Inherited: 0x00)
struct F*ff80ea7857 {
	int32 *fdbecca384; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText *15fb949bac; // 0x08(0x18)
};

// ScriptStruct TslGame.*b2163fc7c4
// Size: 0x28 (Inherited: 0x00)
struct F*b2163fc7c4 {
	int32 *3344b9d70b; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslCharacter* Rider; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct TslGame.*84f81f38b4
// Size: 0x10 (Inherited: 0x00)
struct F*84f81f38b4 {
	float *fcfa6c34a2; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
};

// ScriptStruct TslGame.*a67c32bc95
// Size: 0x10 (Inherited: 0x00)
struct F*a67c32bc95 {
	struct FVector2D *695452dabd; // 0x00(0x08)
	struct FVector2D *5718ee2974; // 0x08(0x08)
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

// ScriptStruct TslGame.*d426284fec
// Size: 0x10 (Inherited: 0x00)
struct F*d426284fec {
	float DemoTime; // 0x00(0x04)
	float FogFallOff; // 0x04(0x04)
	float FogStartDistance; // 0x08(0x04)
	float FogDensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*767e40cc49
// Size: 0x98 (Inherited: 0x00)
struct F*767e40cc49 {
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

// ScriptStruct TslGame.*6db9e357c2
// Size: 0x38 (Inherited: 0x00)
struct F*6db9e357c2 {
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

// ScriptStruct TslGame.*01a9c8eb33
// Size: 0xe0 (Inherited: 0x00)
struct F*01a9c8eb33 {
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

// ScriptStruct TslGame.*c60f0b3cc6
// Size: 0x50 (Inherited: 0x00)
struct F*c60f0b3cc6 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.TslOutGameLog
// Size: 0x20 (Inherited: 0x00)
struct FTslOutGameLog {
	struct FString Type; // 0x00(0x10)
	struct FString Log; // 0x10(0x10)
};

// ScriptStruct TslGame.*cea799111c
// Size: 0x10 (Inherited: 0x00)
struct F*cea799111c {
	struct UExponentialHeightFogComponent* *c59ce74cab; // 0x00(0x08)
	bool *520bd36450; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*3b7fa34312
// Size: 0x20 (Inherited: 0x00)
struct F*3b7fa34312 {
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
	int32 *d3c32d4fa1; // 0x00(0x04)
	int32 *14974ea3ee; // 0x04(0x04)
};

// ScriptStruct TslGame.TeamInfo
// Size: 0x50 (Inherited: 0x00)
struct FTeamInfo {
	struct FString TeamName; // 0x00(0x10)
	struct FString *ef17a00b89; // 0x10(0x10)
	struct UTexture2D* TeamIcon; // 0x20(0x08)
	struct FLinearColor TeamColor; // 0x28(0x10)
	struct FLinearColor *ce5bbf4b12; // 0x38(0x10)
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

// ScriptStruct TslGame.*febe2d9de9
// Size: 0xb8 (Inherited: 0x00)
struct F*febe2d9de9 {
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

// ScriptStruct TslGame.*68854952aa
// Size: 0x110 (Inherited: 0x00)
struct F*68854952aa {
	float LastUpdateTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString KillerUniqueId; // 0x08(0x10)
	struct FString KillerName; // 0x18(0x10)
	struct FString KillerPlayerId; // 0x28(0x10)
	struct FString VictimUniqueId; // 0x38(0x10)
	struct FString VictimName; // 0x48(0x10)
	struct FString VictimPlayerId; // 0x58(0x10)
	char pad_68[0xa8]; // 0x68(0xa8)
};

// ScriptStruct TslGame.*98a6b99ffe
// Size: 0x58 (Inherited: 0x00)
struct F*98a6b99ffe {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString RecordTargetName; // 0x38(0x10)
	struct FString RecordTargetNetId; // 0x48(0x10)
};

// ScriptStruct TslGame.*3b6355f693
// Size: 0x68 (Inherited: 0x00)
struct F*3b6355f693 {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString EtceteraEventCode; // 0x38(0x10)
	struct FString TargetNetId; // 0x48(0x10)
	struct FString TargetName; // 0x58(0x10)
};

// ScriptStruct TslGame.*483e1fa8af
// Size: 0xb8 (Inherited: 0x00)
struct F*483e1fa8af {
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

// ScriptStruct TslGame.*9ef789e479
// Size: 0x18 (Inherited: 0x00)
struct F*9ef789e479 {
	int32 *55cc07cfde; // 0x00(0x04)
	int32 *07e8fe2596; // 0x04(0x04)
	struct TArray<struct F*11a971a205> *6f6c6a141e; // 0x08(0x10)
};

// ScriptStruct TslGame.*11a971a205
// Size: 0x18 (Inherited: 0x00)
struct F*11a971a205 {
	struct TArray<struct F*69533f7d79> *34e9bef84b; // 0x00(0x10)
	bool bIsLastStage; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *cd736047b7; // 0x14(0x04)
};

// ScriptStruct TslGame.*69533f7d79
// Size: 0x60 (Inherited: 0x00)
struct F*69533f7d79 {
	struct TArray<struct F*67441706fa> *e4c44bd057; // 0x00(0x10)
	struct TArray<int32> *167b269b54; // 0x10(0x10)
	int32 *f7e22b016d; // 0x20(0x04)
	int32 *d93468be5f; // 0x24(0x04)
	enum class EArenaState *69533f7d79; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *0fb86256f4; // 0x2c(0x04)
	float *a4c9793993; // 0x30(0x04)
	float *ef929f64d2; // 0x34(0x04)
	float *a4313a1ef6; // 0x38(0x04)
	int32 *32f14d1504; // 0x3c(0x04)
	float *b6b9efe04b; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Name; // 0x48(0x10)
	int32 *d042fc5734; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*67441706fa
// Size: 0x14 (Inherited: 0x00)
struct F*67441706fa {
	int32 TeamId; // 0x00(0x04)
	int32 Score; // 0x04(0x04)
	int32 *68e57b52d9; // 0x08(0x04)
	float *c309f4fe43; // 0x0c(0x04)
	bool *1157160472; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*3585ae81e7
// Size: 0x10 (Inherited: 0x00)
struct F*3585ae81e7 {
	struct TArray<struct F*6252fec45d> DynamicTeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*6252fec45d
// Size: 0x28 (Inherited: 0x00)
struct F*6252fec45d {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	struct TArray<bool> RoundHistory; // 0x08(0x10)
	struct TArray<struct F*7fe32abc47> DynamicPlayersInfo; // 0x18(0x10)
};

// ScriptStruct TslGame.*7fe32abc47
// Size: 0x14 (Inherited: 0x00)
struct F*7fe32abc47 {
	int32 Kills; // 0x00(0x04)
	int32 Deaths; // 0x04(0x04)
	int32 DamageDealt; // 0x08(0x04)
	int32 money; // 0x0c(0x04)
	int32 MemberIndex; // 0x10(0x04)
};

// ScriptStruct TslGame.*1ea1e9db1e
// Size: 0x08 (Inherited: 0x00)
struct F*1ea1e9db1e {
	int32 GoalScore; // 0x00(0x04)
	bool bIsTeamElimination; // 0x04(0x01)
	bool bUseWarRoyaleBluezone; // 0x05(0x01)
	bool bUsingTeamXRay; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct TslGame.*1710975c6d
// Size: 0x50 (Inherited: 0x00)
struct F*1710975c6d {
	float TimeLimitSeconds; // 0x00(0x04)
	float LastRespawnTimeSeconds; // 0x04(0x04)
	struct TArray<int32> TeamIds; // 0x08(0x10)
	struct TArray<int32> TeamIndices; // 0x18(0x10)
	struct TArray<struct FString> TeamLeaderNames; // 0x28(0x10)
	struct TArray<struct FString> TeamLeaderClanNames; // 0x38(0x10)
	int32 TeamCount; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*09fa194686
// Size: 0x30 (Inherited: 0x00)
struct F*09fa194686 {
	float TrainingScore; // 0x00(0x04)
	float TrainingPlayTime; // 0x04(0x04)
	bool TrainingStartCountDown; // 0x08(0x01)
	bool HeadShotCount; // 0x09(0x01)
	bool KillCount; // 0x0a(0x01)
	bool AimAccuracy; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString WeaponName; // 0x10(0x10)
	float *ebec15cd31; // 0x20(0x04)
	bool *41029593f2; // 0x24(0x01)
	bool *c8dfce7fb6; // 0x25(0x01)
	bool *b92039e6a1; // 0x26(0x01)
	bool *166b6ae96f; // 0x27(0x01)
	bool *2a9c068da6; // 0x28(0x01)
	bool *d34d420009; // 0x29(0x01)
	bool *107e4ff0b0; // 0x2a(0x01)
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

// ScriptStruct TslGame.*c8ebdf3f58
// Size: 0x48 (Inherited: 0x00)
struct F*c8ebdf3f58 {
	enum class EMarketUIEquipCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName ID; // 0x08(0x08)
	bool Reinforced; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText ItemName; // 0x18(0x18)
	int32 Level; // 0x30(0x04)
	int32 Durability; // 0x34(0x04)
	int32 MaxDurability; // 0x38(0x04)
	int32 Cost; // 0x3c(0x04)
	struct UTexture2D* Icon; // 0x40(0x08)
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

// ScriptStruct TslGame.*77e367dd3f
// Size: 0x08 (Inherited: 0x00)
struct F*77e367dd3f {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
};

// ScriptStruct TslGame.*b532828ae1
// Size: 0x48 (Inherited: 0x08)
struct F*b532828ae1 : FTableRowBase {
	struct FString SubtitleKey; // 0x08(0x10)
	struct FString BlueZoneSubtitleKey; // 0x18(0x10)
	struct FString ItemSpawnSubtitleKey; // 0x28(0x10)
	struct FString VehicleSpawnSubtitleKey; // 0x38(0x10)
};

// ScriptStruct TslGame.*db31a9dd2f
// Size: 0x10 (Inherited: 0x00)
struct F*db31a9dd2f {
	struct TArray<struct F*0fdcb53c6c> OverrideTeamMarkAlphaForModeArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*0fdcb53c6c
// Size: 0x08 (Inherited: 0x00)
struct F*0fdcb53c6c {
	enum class EMarkStates MarkStates; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Alpha; // 0x04(0x04)
};

// ScriptStruct TslGame.*36aa7d38cb
// Size: 0xb0 (Inherited: 0x00)
struct F*36aa7d38cb {
	struct F*418235c678 VectorCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*418235c678
// Size: 0xa0 (Inherited: 0x98)
struct F*418235c678 : F*8a839061f6 {
	struct U*e6746d9844* VectorCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.*8a839061f6
// Size: 0x98 (Inherited: 0x00)
struct F*8a839061f6 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UUserWidget* Widget; // 0x18(0x08)
	char pad_20[0x78]; // 0x20(0x78)
};

// ScriptStruct TslGame.*5acf3b5ce3
// Size: 0xb0 (Inherited: 0x00)
struct F*5acf3b5ce3 {
	struct F*290fb51b30 FloatCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*290fb51b30
// Size: 0xa0 (Inherited: 0x98)
struct F*290fb51b30 : F*8a839061f6 {
	struct UCurveFloat* FloatCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.*5dab5acde7
// Size: 0xa0 (Inherited: 0x00)
struct F*5dab5acde7 {
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

// ScriptStruct TslGame.*201e292fcc
// Size: 0x10 (Inherited: 0x00)
struct F*201e292fcc {
	struct TArray<struct F*cdfe802bcd> *e273c8aec4; // 0x00(0x10)
};

// ScriptStruct TslGame.*cdfe802bcd
// Size: 0x0c (Inherited: 0x00)
struct F*cdfe802bcd {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	bool Disabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.*9eeafa1e6a
// Size: 0x10 (Inherited: 0x00)
struct F*9eeafa1e6a {
	struct U*b7029b276d* Widget; // 0x00(0x08)
	struct FVector2D LastPosition; // 0x08(0x08)
};

// ScriptStruct TslGame.*10859ab837
// Size: 0x28 (Inherited: 0x00)
struct F*10859ab837 {
	struct FText DirectionText; // 0x00(0x18)
	struct FLinearColor TextColor; // 0x18(0x10)
};

// ScriptStruct TslGame.*9d02742782
// Size: 0x40 (Inherited: 0x08)
struct F*9d02742782 : FTableRowBase {
	enum class EGuideKeyType KeyType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*13de65a409 Info; // 0x10(0x30)
};

// ScriptStruct TslGame.*13de65a409
// Size: 0x30 (Inherited: 0x00)
struct F*13de65a409 {
	struct TArray<struct F*3f61a59fe9> *f672c0d9f4; // 0x00(0x10)
	struct FText DescriptionText; // 0x10(0x18)
	bool *187f3445c2; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*3f61a59fe9
// Size: 0x40 (Inherited: 0x00)
struct F*3f61a59fe9 {
	bool *3056639d9b; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FKey Key; // 0x08(0x18)
	bool *5ea4a31cea; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FName ActionName; // 0x28(0x08)
	enum class EGamepadKeyIconDisplayType DisplayType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float HoldDuration; // 0x34(0x04)
	bool *d678735f4f; // 0x38(0x01)
	enum class EKeyIconCombinationDisplayType *cd6cd0dce1; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct TslGame.*54f580ef4d
// Size: 0x18 (Inherited: 0x00)
struct F*54f580ef4d {
	struct ATslCharacter* *420bd39286; // 0x00(0x08)
	float *5ac5c23d66; // 0x08(0x04)
	float *7f37d87b71; // 0x0c(0x04)
	float *52a4ff9e2a; // 0x10(0x04)
	bool bIsGroggy; // 0x14(0x01)
	bool *c1cf21fe53; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*ba667e36c6
// Size: 0x20 (Inherited: 0x00)
struct F*ba667e36c6 {
	struct FText *21152a7a19; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*8de05442ca
// Size: 0x50 (Inherited: 0x00)
struct F*8de05442ca {
	struct TMap<enum class EFiremode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGame.*0ef180dfbe
// Size: 0x50 (Inherited: 0x00)
struct F*0ef180dfbe {
	struct TMap<enum class ETraumaBagHealMode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGame.*8104398e70
// Size: 0x18 (Inherited: 0x00)
struct F*8104398e70 {
	struct FName ItemID; // 0x00(0x08)
	int32 *769984cd6f; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct U*78fa8706b8* *19a67ecc58; // 0x10(0x08)
};

// ScriptStruct TslGame.*5d0a168ca1
// Size: 0x50 (Inherited: 0x00)
struct F*5d0a168ca1 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*6bbbcece6a
// Size: 0x10 (Inherited: 0x00)
struct F*6bbbcece6a {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*83629ae584
// Size: 0x18 (Inherited: 0x00)
struct F*83629ae584 {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct U*f6a731ef02*> Cache; // 0x08(0x10)
};

// ScriptStruct TslGame.*7bc9699131
// Size: 0x18 (Inherited: 0x00)
struct F*7bc9699131 {
	enum class ECastableItemType *8e7577bcec; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName ItemID; // 0x08(0x08)
	struct UTexture2D* *962be9e042; // 0x10(0x08)
};

// ScriptStruct TslGame.*eaa1013eb6
// Size: 0x10 (Inherited: 0x00)
struct F*eaa1013eb6 {
	struct TArray<struct F*2f2de3d0b0> *f0ccdd0fcb; // 0x00(0x10)
};

// ScriptStruct TslGame.*2f2de3d0b0
// Size: 0x20 (Inherited: 0x00)
struct F*2f2de3d0b0 {
	struct FName ActionName; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGame.*1419545823
// Size: 0x38 (Inherited: 0x00)
struct F*1419545823 {
	enum class ESystemMessageType MessageType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Duration; // 0x04(0x04)
	float *a4596396b5; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Message; // 0x10(0x18)
	int32 *4651faa631; // 0x28(0x04)
	int32 *92070cc260; // 0x2c(0x04)
	bool *2614c0f5d3; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*a7b2a4017a
// Size: 0x38 (Inherited: 0x08)
struct F*a7b2a4017a : FTableRowBase {
	struct FText Message; // 0x08(0x18)
	enum class ETslNotificationMessageColorType *9e16528261; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UTexture2D* *10e10935c7; // 0x28(0x08)
	enum class ETslNotificationMessageAnimationType *91962bcdb4; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*63c820eab7
// Size: 0x08 (Inherited: 0x00)
struct F*63c820eab7 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*4930bc9acc
// Size: 0x08 (Inherited: 0x00)
struct F*4930bc9acc {
	float Score; // 0x00(0x04)
	int32 *becd625c42; // 0x04(0x04)
};

// ScriptStruct TslGame.*d7a7408015
// Size: 0x08 (Inherited: 0x00)
struct F*d7a7408015 {
	int32 TeamNum; // 0x00(0x04)
	int32 TeamRanking; // 0x04(0x04)
};

// ScriptStruct TslGame.*402b1e2917
// Size: 0x28 (Inherited: 0x00)
struct F*402b1e2917 {
	struct FVector *a41d2d4af2; // 0x00(0x0c)
	float *007682a9fd; // 0x0c(0x04)
	float *6fa6e5a0bb; // 0x10(0x04)
	struct FVector *e4e6942404; // 0x14(0x0c)
	float *0b5394b308; // 0x20(0x04)
	float *632dd9bbb7; // 0x24(0x04)
};

// ScriptStruct TslGame.*feed846651
// Size: 0x48 (Inherited: 0x00)
struct F*feed846651 {
	struct UClass* Widget; // 0x00(0x20)
	struct UTexture2D* Texture; // 0x20(0x20)
	struct FVector2D Size; // 0x40(0x08)
};

// ScriptStruct TslGame.*0e386b8768
// Size: 0x10 (Inherited: 0x00)
struct F*0e386b8768 {
	struct TArray<struct UUserWidget*> Widgets; // 0x00(0x10)
};

// ScriptStruct TslGame.*b4c6814791
// Size: 0x60 (Inherited: 0x00)
struct F*b4c6814791 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*7381c62ff7
// Size: 0x60 (Inherited: 0x00)
struct F*7381c62ff7 {
	struct UTexture2D* IconBackground; // 0x00(0x20)
	struct UTexture2D* MemberIndexBackground; // 0x20(0x20)
	struct UTexture2D* FullWidgetBackground; // 0x40(0x20)
};

// ScriptStruct TslGame.PlayerInfo
// Size: 0x50 (Inherited: 0x00)
struct FPlayerInfo {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*fdd340ce43
// Size: 0x10 (Inherited: 0x00)
struct F*fdd340ce43 {
	struct UTexture2D* Left; // 0x00(0x08)
	struct UTexture2D* Right; // 0x08(0x08)
};

// ScriptStruct TslGame.*ae14f315de
// Size: 0x10 (Inherited: 0x00)
struct F*ae14f315de {
	struct TArray<struct U*ce4f43dc1d*> Items; // 0x00(0x10)
};

// ScriptStruct TslGame.*899896f0a1
// Size: 0x14 (Inherited: 0x00)
struct F*899896f0a1 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*6a00410af5
// Size: 0x10 (Inherited: 0x00)
struct F*6a00410af5 {
	struct TArray<struct ATslAIWaypointSegment*> *e57c3702bc; // 0x00(0x10)
};

// ScriptStruct TslGame.*1adc9333ba
// Size: 0xa0 (Inherited: 0x00)
struct F*1adc9333ba {
	struct TMap<struct F*ea82ab0195, bool> *90465ec5e9; // 0x00(0x50)
	struct TMap<struct F*ea82ab0195, struct F*89cf6a297f> *a46308be23; // 0x50(0x50)
};

// ScriptStruct TslGame.*ea82ab0195
// Size: 0x10 (Inherited: 0x00)
struct F*ea82ab0195 {
	struct ATslAIWaypointSegment* path; // 0x00(0x08)
	float InputKey; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*89cf6a297f
// Size: 0x08 (Inherited: 0x00)
struct F*89cf6a297f {
	float *93ed05fd27; // 0x00(0x04)
	float *d03d98daf7; // 0x04(0x04)
};

// ScriptStruct TslGame.*3c1a3a3089
// Size: 0x48 (Inherited: 0x00)
struct F*3c1a3a3089 {
	int32 SpawnCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName VehicleTag; // 0x08(0x08)
	struct FName SpawnTag; // 0x10(0x08)
	bool *89f4e39b97; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector SpawnLocation; // 0x1c(0x0c)
	struct FRotator *d2d944d7be; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct F*4d9a79d928 *82e253c76c; // 0x38(0x10)
};

// ScriptStruct TslGame.*4d9a79d928
// Size: 0x10 (Inherited: 0x00)
struct F*4d9a79d928 {
	struct ATslAIWaypointSegment* *0372e1451d; // 0x00(0x08)
	float *633104f6df; // 0x08(0x04)
	bool *b100850235; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*ab908f90bb
// Size: 0x28 (Inherited: 0x00)
struct F*ab908f90bb {
	struct APawn* *7dd2e01891; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
	struct UBlackboardData* BlackboardData; // 0x10(0x08)
	struct F*4d9a79d928 *82e253c76c; // 0x18(0x10)
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
	struct F*dab970dff7 SpawnFilter; // 0x98(0x28)
};

// ScriptStruct TslGame.*dab970dff7
// Size: 0x28 (Inherited: 0x00)
struct F*dab970dff7 {
	bool bLimitSpawnPoints; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> ValidSpawnPoints; // 0x08(0x10)
	struct TArray<struct FName> InvalidSpawnPoints; // 0x18(0x10)
};

// ScriptStruct TslGame.*d729a30c8d
// Size: 0x20 (Inherited: 0x00)
struct F*d729a30c8d {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*3008e0359a
// Size: 0x60 (Inherited: 0x00)
struct F*3008e0359a {
	struct FGuid ID; // 0x00(0x10)
	struct FString *9721e76cdd; // 0x10(0x10)
	struct UClass* VehicleClass; // 0x20(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x28(0x08)
	struct UBlackboardData* BlackboardData; // 0x30(0x08)
	struct F*dab970dff7 SpawnSettings; // 0x38(0x28)
};

// ScriptStruct TslGame.*ddf62e5dcf
// Size: 0x40 (Inherited: 0x00)
struct F*ddf62e5dcf {
	float *acdb34b035; // 0x00(0x04)
	float *ba9cc222e2; // 0x04(0x04)
	float *abb07f1d36; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float *4f9aab8675; // 0x10(0x04)
	float *e2bf6db8ce; // 0x14(0x04)
	struct FName *cf3784a459; // 0x18(0x08)
	struct FVector *3e654f4252; // 0x20(0x0c)
	struct FVector *ad30d515f8; // 0x2c(0x0c)
	struct UClass* *0ad023d030; // 0x38(0x08)
};

// ScriptStruct TslGame.*9e06703c42
// Size: 0x30 (Inherited: 0x00)
struct F*9e06703c42 {
	struct F*10a1a5ced2 *6b273aa372; // 0x00(0x18)
	struct F*10a1a5ced2 *08ec35cc09; // 0x18(0x18)
};

// ScriptStruct TslGame.*10a1a5ced2
// Size: 0x18 (Inherited: 0x00)
struct F*10a1a5ced2 {
	float *965fa84f4a; // 0x00(0x04)
	float *5733129f36; // 0x04(0x04)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*85327c4b91
// Size: 0x18 (Inherited: 0x00)
struct F*85327c4b91 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*ef73657da1
// Size: 0x58 (Inherited: 0x00)
struct F*ef73657da1 {
	enum class EVehiclePartType *c00acb4221; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<int32, struct UMaterialInterface*> *c23e329faa; // 0x08(0x50)
};

// ScriptStruct TslGame.*01dfe8dfa0
// Size: 0x98 (Inherited: 0x00)
struct F*01dfe8dfa0 {
	bool *b5fff620af; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *9108647be0; // 0x04(0x04)
	struct FName *19ff759f91; // 0x08(0x08)
	struct FVector2D *e9221d79ea; // 0x10(0x08)
	struct FVector2D *614e6c91bb; // 0x18(0x08)
	struct FVector *e34b01e391; // 0x20(0x0c)
	struct FVector2D *3d134fae4e; // 0x2c(0x08)
	struct FVector2D *27174fe3a0; // 0x34(0x08)
	float *e4b1acf7cd; // 0x3c(0x04)
	float *e5ad477fb3; // 0x40(0x04)
	float *d6d0b5ffd6; // 0x44(0x04)
	struct FVector *89dfd1d8c6; // 0x48(0x0c)
	struct FVector *11d19c41db; // 0x54(0x0c)
	struct FVector2D *cb9ddfbd4a; // 0x60(0x08)
	float *61d438214e; // 0x68(0x04)
	bool *dee1630714; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float *94d27b6e08; // 0x70(0x04)
	bool *b17af18b6c; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector2D *204d8f9423; // 0x78(0x08)
	struct U*e6746d9844* *cee9304069; // 0x80(0x08)
	bool *9b22b31f4e; // 0x88(0x01)
	char pad_89[0xf]; // 0x89(0x0f)
};

// ScriptStruct TslGame.*c9cab0cb72
// Size: 0x68 (Inherited: 0x00)
struct F*c9cab0cb72 {
	struct FName *bbdce3656a; // 0x00(0x08)
	float *978b0dc00b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName *257d148c5b; // 0x10(0x08)
	float *fc23d3d98e; // 0x18(0x04)
	float *a19cf4a9dd; // 0x1c(0x04)
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

// ScriptStruct TslGame.*446f0f9601
// Size: 0x130 (Inherited: 0x00)
struct F*446f0f9601 {
	bool *10ee726be7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *f18e8b2ae6; // 0x04(0x04)
	float *2e18697ca5; // 0x08(0x04)
	float *656eafbdc4; // 0x0c(0x04)
	float *cb625397d6; // 0x10(0x04)
	struct FFloatRange *20b5a4127c; // 0x14(0x10)
	float *93f1108201; // 0x24(0x04)
	float *907807306c; // 0x28(0x04)
	float *74c53a0a85; // 0x2c(0x04)
	float *f3bf599b7d; // 0x30(0x04)
	int32 *e7fd6b5a43; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct TMap<enum class EPhysicalSurface, struct F*5191c5df70> *75abf2d0a9; // 0x40(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*5191c5df70> *c230a842c6; // 0x90(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*2a7f3d122d> *b2a6e16724; // 0xe0(0x50)
};

// ScriptStruct TslGame.*2a7f3d122d
// Size: 0x28 (Inherited: 0x00)
struct F*2a7f3d122d {
	char pad_0[0x18]; // 0x00(0x18)
	struct UAkComponent* *bda342114e; // 0x18(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x20(0x08)
};

// ScriptStruct TslGame.*5191c5df70
// Size: 0x10 (Inherited: 0x00)
struct F*5191c5df70 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*c5da03c633
// Size: 0x28 (Inherited: 0x00)
struct F*c5da03c633 {
	char pad_0[0x18]; // 0x00(0x18)
	struct USceneComponent* *18ff5b3923; // 0x18(0x08)
	struct USceneComponent* *a9c8f6b42b; // 0x20(0x08)
};

// ScriptStruct TslGame.*f8252c622a
// Size: 0x28 (Inherited: 0x00)
struct F*f8252c622a {
	int32 *d43adff64c; // 0x00(0x04)
	float *287158f7b9; // 0x04(0x04)
	float *10aeeadde5; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *ca81a542cc; // 0x10(0x08)
	struct UCurveFloat* *897d94b7ee; // 0x18(0x08)
	struct UClass* *0ad023d030; // 0x20(0x08)
};

// ScriptStruct TslGame.*e7a209cfb0
// Size: 0x10 (Inherited: 0x00)
struct F*e7a209cfb0 {
	struct FName *b1461d3316; // 0x00(0x08)
	struct FName *600d1a2c84; // 0x08(0x08)
};

// ScriptStruct TslGame.*2c070072fd
// Size: 0x70 (Inherited: 0x00)
struct F*2c070072fd {
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

// ScriptStruct TslGame.*6c68ccaa2b
// Size: 0x20 (Inherited: 0x00)
struct F*6c68ccaa2b {
	struct FString ItemID; // 0x00(0x10)
	struct FString SkinId; // 0x10(0x10)
};

// ScriptStruct TslGame.*9eff2cb8a3
// Size: 0x30 (Inherited: 0x00)
struct F*9eff2cb8a3 {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*91f1bcf293 LocalWeatherSetting; // 0x08(0x28)
};

// ScriptStruct TslGame.*91f1bcf293
// Size: 0x28 (Inherited: 0x00)
struct F*91f1bcf293 {
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

// ScriptStruct TslGame.*82a366d2c4
// Size: 0x10 (Inherited: 0x00)
struct F*82a366d2c4 {
	float DirectionalLightIntensity; // 0x00(0x04)
	float DirectionalLightTemperature; // 0x04(0x04)
	float DirectionalLightVolumetricScattering; // 0x08(0x04)
	float SkyLightIntensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*71436ff8b4
// Size: 0x68 (Inherited: 0x00)
struct F*71436ff8b4 {
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

// ScriptStruct TslGame.*8faafc38eb
// Size: 0x1c (Inherited: 0x00)
struct F*8faafc38eb {
	bool *f314017032; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *00f923d69d; // 0x04(0x04)
	float *dadba9e48d; // 0x08(0x04)
	float *c9541a8871; // 0x0c(0x04)
	float *6e192530a0; // 0x10(0x04)
	float *5f8581915b; // 0x14(0x04)
	bool *36eec45871; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct TslGame.*f2c5383189
// Size: 0x30 (Inherited: 0x00)
struct F*f2c5383189 {
	struct UAkAudioEvent* *a5bf4eb821; // 0x00(0x08)
	struct UAkAudioEvent* *7e2ad1d5cd; // 0x08(0x08)
	float *859fe51425; // 0x10(0x04)
	float *d13c0a4ba1; // 0x14(0x04)
	struct FString *1c1a8b3141; // 0x18(0x10)
	float *5bb5732de8; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*b3478b6705
// Size: 0x30 (Inherited: 0x00)
struct F*b3478b6705 {
	float *0f8eaf8349; // 0x00(0x04)
	struct FVector2D *28b0fe6800; // 0x04(0x08)
	struct FVector2D *0145701407; // 0x0c(0x08)
	float *392e8e26f3; // 0x14(0x04)
	float *ad0df88b00; // 0x18(0x04)
	float *9c42de90af; // 0x1c(0x04)
	struct FVector2D *822c444e05; // 0x20(0x08)
	struct FVector2D *adee2f35d7; // 0x28(0x08)
};

// ScriptStruct TslGame.*c3ebfde829
// Size: 0x10 (Inherited: 0x00)
struct F*c3ebfde829 {
	bool *78ff4bb578; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct TslGame.*9ee5d89f6e
// Size: 0x58 (Inherited: 0x00)
struct F*9ee5d89f6e {
	float *5f79c5bbb8; // 0x00(0x04)
	float *0e71e2a657; // 0x04(0x04)
	struct FVector2D *3675828677; // 0x08(0x08)
	struct FVector2D *6245a68cc8; // 0x10(0x08)
	struct FVector2D *9076b6363f; // 0x18(0x08)
	struct FVector2D *34d1b03cee; // 0x20(0x08)
	struct FVector2D *5c38ce22cd; // 0x28(0x08)
	struct FVector2D *c434e1fb11; // 0x30(0x08)
	struct FVector2D *53cdf0e5a6; // 0x38(0x08)
	float *1b2920018d; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UAnimMontage* *233b88fbe0; // 0x48(0x08)
	float *752c0be28b; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*6b51fca5c9
// Size: 0x14 (Inherited: 0x00)
struct F*6b51fca5c9 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*7a6f31e1ba
// Size: 0x40 (Inherited: 0x00)
struct F*7a6f31e1ba {
	float *a574c18486; // 0x00(0x04)
	float *c15c251c2a; // 0x04(0x04)
	float *421f7fca8e; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *ae9ec0eb8e; // 0x10(0x08)
	float *6ee6f85289; // 0x18(0x04)
	float *3d67894475; // 0x1c(0x04)
	float *3db7fe7e8b; // 0x20(0x04)
	float *e3d176ec09; // 0x24(0x04)
	struct FVector2D *9e49a13fee; // 0x28(0x08)
	struct FVector2D *8c51f8ef56; // 0x30(0x08)
	float *4b879c760a; // 0x38(0x04)
	float *e769f12bca; // 0x3c(0x04)
};

// ScriptStruct TslGame.*be632f01d6
// Size: 0x14 (Inherited: 0x14)
struct F*be632f01d6 : F*54e42bf866 {
};

// ScriptStruct TslGame.*54e42bf866
// Size: 0x14 (Inherited: 0x00)
struct F*54e42bf866 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*ac7edd4ef3
// Size: 0x14 (Inherited: 0x14)
struct F*ac7edd4ef3 : F*54e42bf866 {
};

// ScriptStruct TslGame.*747a5ab8d5
// Size: 0x1c (Inherited: 0x14)
struct F*747a5ab8d5 : F*54e42bf866 {
	char pad_14[0x8]; // 0x14(0x08)
};

// ScriptStruct TslGame.*c9904f8c88
// Size: 0x10 (Inherited: 0x00)
struct F*c9904f8c88 {
	struct UAnimSequence* TransitionSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e19df97443
// Size: 0x30 (Inherited: 0x00)
struct F*e19df97443 {
	struct USkeletalMesh* *e0959dd09d; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *7656fad8ad; // 0x20(0x10)
};

// ScriptStruct TslGame.*bd7057f7ac
// Size: 0x18 (Inherited: 0x00)
struct F*bd7057f7ac {
	struct USkeletalMesh* *4bf4edf88f; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *8c30864a2d; // 0x08(0x10)
};

// ScriptStruct TslGame.*b7411ed099
// Size: 0x38 (Inherited: 0x00)
struct F*b7411ed099 {
	struct TArray<struct F*1d83a45c1f> StartParticleList; // 0x00(0x10)
	struct TArray<struct F*1d83a45c1f> FinishParticleList; // 0x10(0x10)
	struct F*47c95874b8 OverrideMaterial; // 0x20(0x18)
};

// ScriptStruct TslGame.*47c95874b8
// Size: 0x18 (Inherited: 0x00)
struct F*47c95874b8 {
	enum class *3d2bec6659 SkinApplicationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*57c2b7a8c9> SkinMaterials; // 0x08(0x10)
};

// ScriptStruct TslGame.*57c2b7a8c9
// Size: 0x30 (Inherited: 0x00)
struct F*57c2b7a8c9 {
	struct FName MaterialSlotName; // 0x00(0x08)
	int32 MaterialSlotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInstance* MaterialInstance; // 0x10(0x20)
};

// ScriptStruct TslGame.*1d83a45c1f
// Size: 0x20 (Inherited: 0x00)
struct F*1d83a45c1f {
	struct TArray<struct FName> AttachSocketCandidates; // 0x00(0x10)
	struct FStringClassReference ParticleClass; // 0x10(0x10)
};

// ScriptStruct TslGame.*fa5b8b51ee
// Size: 0x18 (Inherited: 0x08)
struct F*fa5b8b51ee : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*3def71a7fa
// Size: 0x50 (Inherited: 0x00)
struct F*3def71a7fa {
	struct TMap<enum class EPhysicalSurface, float> *14b359c5bf; // 0x00(0x50)
};

// ScriptStruct TslGame.*b957acc115
// Size: 0x08 (Inherited: 0x00)
struct F*b957acc115 {
	float *55244a6535; // 0x00(0x04)
	float *8755477e27; // 0x04(0x04)
};

// ScriptStruct TslGame.*8bd9b05bd5
// Size: 0x28 (Inherited: 0x00)
struct F*8bd9b05bd5 {
	bool AtlasIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UClass*> WheelTypes; // 0x08(0x10)
	struct TArray<struct UClass*> ExemptedWheelTypes; // 0x18(0x10)
};

// ScriptStruct TslGame.*b3ad944fcd
// Size: 0x60 (Inherited: 0x00)
struct F*b3ad944fcd {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct UAkAudioEvent* *e541c5ef4e; // 0x40(0x08)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x48(0x08)
	float *7cc7405a66; // 0x50(0x04)
	enum class *c276e29a27 IndoorOutdoorMask; // 0x54(0x01)
	char LightingChannel1 : 1; // 0x55(0x01)
	char pad_55_1 : 7; // 0x55(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FName CollisionProfileName; // 0x58(0x08)
};

// ScriptStruct TslGame.*da5417547d
// Size: 0x48 (Inherited: 0x08)
struct F*da5417547d : FTableRowBase {
	struct UTexture* Icon; // 0x08(0x20)
	struct F*4d9124ce0b AbilityAttribute; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName AbilityID; // 0x38(0x08)
	struct UClass* AbilityClass; // 0x40(0x08)
};

// ScriptStruct TslGame.*4d9124ce0b
// Size: 0x0c (Inherited: 0x00)
struct F*4d9124ce0b {
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
	struct U*24c6652716* AnimDB; // 0x68(0x08)
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
	struct U*f7e8bdf881* AnimDBMap; // 0x58(0x08)
	struct U*f7e8bdf881* PrevAnimDBMap; // 0x60(0x08)
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
	enum class *e010c2fbb2 CurveBlendOption; // 0x182(0x01)
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
	enum class *627034402d EffectorLocationSpace; // 0x104(0x01)
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
	enum class *627034402d ControlSpace; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.TslAnimNode_CustomAnimSequence
// Size: 0x90 (Inherited: 0x70)
struct FTslAnimNode_CustomAnimSequence : FAnimNode_SequencePlayer {
	struct U*dc521904bf* AnimDataAsset; // 0x70(0x08)
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
	enum class *627034402d EffectorTransformSpace; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FBoneReference EffectorTransformBone; // 0x138(0x18)
	enum class *b396554497 EffectorRotationSource; // 0x150(0x01)
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
	struct U*f7e8bdf881* AnimDBMap; // 0x58(0x08)
	struct U*f7e8bdf881* PrevAnimDBMap; // 0x60(0x08)
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
	struct U*f7e8bdf881* AnimDBMap; // 0x30(0x08)
	struct U*f7e8bdf881* PrevAnimDBMap; // 0x38(0x08)
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
	struct U*f7e8bdf881* AnimDBMap; // 0x58(0x08)
	struct U*f7e8bdf881* PrevAnimDBMap; // 0x60(0x08)
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
	struct U*f7e8bdf881* AnimDBMap; // 0x58(0x08)
	struct U*f7e8bdf881* PrevAnimDBMap; // 0x60(0x08)
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
	struct U*d99201c4c8* ParentInstance; // 0x58(0x08)
	struct U*24c6652716* AnimDB; // 0x60(0x08)
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

// ScriptStruct TslGame.*24dbed25c1
// Size: 0x18 (Inherited: 0x08)
struct F*24dbed25c1 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	struct UClass* *74fc4ca00e; // 0x10(0x08)
};

// ScriptStruct TslGame.*4833380d34
// Size: 0x18 (Inherited: 0x08)
struct F*4833380d34 : FTableRowBase {
	struct TArray<struct FName> ItemIDs; // 0x08(0x10)
};

// ScriptStruct TslGame.*9dd5c76e4f
// Size: 0x28 (Inherited: 0x08)
struct F*9dd5c76e4f : FTableRowBase {
	enum class ECoinTakeType CoinTakeType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 BannedRoundAttributes; // 0x0c(0x04)
	int32 TakeValue; // 0x10(0x04)
	bool bOverwrite; // 0x14(0x01)
	bool bUseCustomOverride; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct F*b6a1c72588> CustomOverrideValues; // 0x18(0x10)
};

// ScriptStruct TslGame.*b6a1c72588
// Size: 0x08 (Inherited: 0x00)
struct F*b6a1c72588 {
	int32 OverrideIndex; // 0x00(0x04)
	int32 OverrideValue; // 0x04(0x04)
};

// ScriptStruct TslGame.*a40ccc8ee1
// Size: 0x50 (Inherited: 0x08)
struct F*a40ccc8ee1 : FTableRowBase {
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
	struct F*ce3da9a385 WeaponAmmoData; // 0x38(0x10)
	enum class EBombScopeInfo ScopeInfo; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.*ce3da9a385
// Size: 0x10 (Inherited: 0x10)
struct F*ce3da9a385 : F*c79bcba3b9 {
};

// ScriptStruct TslGame.*c79bcba3b9
// Size: 0x10 (Inherited: 0x00)
struct F*c79bcba3b9 {
	struct FName ItemID; // 0x00(0x08)
	int32 Stack; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*8f37ce409a
// Size: 0x20 (Inherited: 0x10)
struct F*8f37ce409a : F*c79bcba3b9 {
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*0e857deea0
// Size: 0x520 (Inherited: 0x520)
struct F*0e857deea0 : F*c3868df940 {
};

// ScriptStruct TslGame.*0929a5bc86
// Size: 0x178 (Inherited: 0x08)
struct F*0929a5bc86 : FTableRowBase {
	enum class *d6d56f23e0 CharacterInteractType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxInteractableDistance; // 0x0c(0x04)
	struct FText InteractionVerb; // 0x10(0x18)
	struct FText InteractiveObjectName; // 0x28(0x18)
	bool bUseTraceCheck; // 0x40(0x01)
	bool bTraceComplexForInteraction; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct F*59709b63e2 CastConfig; // 0x48(0x130)
};

// ScriptStruct TslGame.*59709b63e2
// Size: 0x130 (Inherited: 0x00)
struct F*59709b63e2 {
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
	struct F*4c56244188 CustomCastAnim; // 0x60(0xc0)
	enum class EStanceMode Stance; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FName *5f440d9924; // 0x128(0x08)
};

// ScriptStruct TslGame.*4c56244188
// Size: 0xc0 (Inherited: 0x00)
struct F*4c56244188 {
	struct F*3f9e14a8e8 StartAnim; // 0x00(0x40)
	struct F*3f9e14a8e8 LoopAnim; // 0x40(0x40)
	struct F*3f9e14a8e8 EndAnim; // 0x80(0x40)
};

// ScriptStruct TslGame.*3f9e14a8e8
// Size: 0x40 (Inherited: 0x00)
struct F*3f9e14a8e8 {
	struct F*1690d0bb94 AnimSequence; // 0x00(0x10)
	struct F*1690d0bb94 AnimSequenceFPP; // 0x10(0x10)
	struct F*1690d0bb94 AnimSequenceProne; // 0x20(0x10)
	struct F*1690d0bb94 AnimSequenceProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*1690d0bb94
// Size: 0x10 (Inherited: 0x00)
struct F*1690d0bb94 {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ed7baf47dc
// Size: 0x480 (Inherited: 0x00)
struct F*ed7baf47dc {
	struct F*53d3bbec8c *53d3bbec8c; // 0x00(0x290)
	struct F*5eaebcfee5 *5eaebcfee5; // 0x290(0x1b0)
	struct F*6fd6c49a75 *6fd6c49a75; // 0x440(0x38)
	char pad_478[0x8]; // 0x478(0x08)
};

// ScriptStruct TslGame.*6fd6c49a75
// Size: 0x38 (Inherited: 0x08)
struct F*6fd6c49a75 : F*559f875cfc {
	int32 *aa9f917a85; // 0x08(0x04)
	int32 *44e64255c7; // 0x0c(0x04)
	float Timestamp; // 0x10(0x04)
	struct FVector *9f2aefad8c; // 0x14(0x0c)
	int64 *7d35903961; // 0x20(0x08)
	struct FString TextMarker; // 0x28(0x10)
};

// ScriptStruct TslGame.*559f875cfc
// Size: 0x08 (Inherited: 0x00)
struct F*559f875cfc {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*5eaebcfee5
// Size: 0x1b0 (Inherited: 0x08)
struct F*5eaebcfee5 : F*559f875cfc {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*ddde035f4c *2ded3069a3; // 0x10(0xa0)
	struct F*ddde035f4c *29bc549376; // 0xb0(0xa0)
	struct FString *0c12a5a866; // 0x150(0x10)
	struct FString *3eaee5b390; // 0x160(0x10)
	struct FString *e629bc7688; // 0x170(0x10)
	struct FString *579cc09146; // 0x180(0x10)
	char pad_190[0x20]; // 0x190(0x20)
};

// ScriptStruct TslGame.*ddde035f4c
// Size: 0xa0 (Inherited: 0x00)
struct F*ddde035f4c {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Average; // 0x08(0x04)
	char pad_C[0x94]; // 0x0c(0x94)
};

// ScriptStruct TslGame.*53d3bbec8c
// Size: 0x290 (Inherited: 0x08)
struct F*53d3bbec8c : F*559f875cfc {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*ddde035f4c Frame; // 0x10(0xa0)
	struct F*ddde035f4c *1aeacedb17; // 0xb0(0xa0)
	struct F*ddde035f4c *02f02bd6f5; // 0x150(0xa0)
	struct F*ddde035f4c *3fab8deaaa; // 0x1f0(0xa0)
};

// ScriptStruct TslGame.*29c4f0013a
// Size: 0x40 (Inherited: 0x00)
struct F*29c4f0013a {
	struct FString DeviceName; // 0x00(0x10)
	struct FString ClientVersion; // 0x10(0x10)
	struct FString MapName; // 0x20(0x10)
	struct FString ModeName; // 0x30(0x10)
};

// ScriptStruct TslGame.*8f433af44b
// Size: 0x28 (Inherited: 0x08)
struct F*8f433af44b : FTableRowBase {
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

// ScriptStruct TslGame.*06651205d8
// Size: 0x3e8 (Inherited: 0x3d8)
struct F*06651205d8 : FItemTableRowCastable {
	struct TArray<struct F*5a6ba1ab1e> SupplyItems; // 0x3d8(0x10)
};

// ScriptStruct TslGame.ItemTableRowCastable
// Size: 0x3d8 (Inherited: 0x288)
struct FItemTableRowCastable : F*7c826e43af {
	bool *55aff841d1; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct F*59709b63e2 *59709b63e2; // 0x290(0x130)
	enum class ECastableItemType *dfd8aa801b; // 0x3c0(0x01)
	bool *7493beb86f; // 0x3c1(0x01)
	char pad_3C2[0x6]; // 0x3c2(0x06)
	struct TArray<struct UClass*> *41907fc331; // 0x3c8(0x10)
};

// ScriptStruct TslGame.*7c826e43af
// Size: 0x288 (Inherited: 0x08)
struct F*7c826e43af : FTableRowBase {
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
	bool bChangeableDroppedMeshByStackCount; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct TArray<struct F*cf7aaf6771> DroppedItemMeshData; // 0xb0(0x10)
	bool bDropAsProjectile; // 0xc0(0x01)
	bool bThermalScopeInteractive; // 0xc1(0x01)
	enum class EThermalItemType ThermalItemType; // 0xc2(0x01)
	char pad_C3[0x5]; // 0xc3(0x05)
	struct U*af5a42646d* ProjectileConfig; // 0xc8(0x20)
	struct UTexture* Icon; // 0xe8(0x20)
	struct UTexture* ToolTipIcon; // 0x108(0x20)
	float IconSizeRatio; // 0x128(0x04)
	float ToolTipIconSizeRatio; // 0x12c(0x04)
	struct UAkAudioEvent* DropSoundAk; // 0x130(0x20)
	struct FName DropAnimation; // 0x150(0x08)
	struct UAkAudioEvent* PickUpSoundAk; // 0x158(0x20)
	enum class EPickupAnimType PickUpAnimationOverride; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UAkAudioEvent* InventoryPutSoundAk; // 0x180(0x20)
	int32 SortPriority; // 0x1a0(0x04)
	enum class EItemCategory Category; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct FName SubCategory; // 0x1a8(0x08)
	bool bIsToy; // 0x1b0(0x01)
	bool bNeedToCheckPopup; // 0x1b1(0x01)
	bool bCanSell; // 0x1b2(0x01)
	char pad_1B3[0x1]; // 0x1b3(0x01)
	int32 Price; // 0x1b4(0x04)
	bool bIsLobbyItem; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	int32 LobbyItemID; // 0x1bc(0x04)
	struct F*3fda32cbb1 LobbyItemDesc; // 0x1c0(0x60)
	bool bIsLobbyWeapon; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	int32 LobbyWeaponID; // 0x224(0x04)
	struct UClass* LobbyWeaponInstance; // 0x228(0x20)
	bool *83e66454d5; // 0x248(0x01)
	bool *272709832b; // 0x249(0x01)
	bool *c4b4b358d3; // 0x24a(0x01)
	char pad_24B[0x5]; // 0x24b(0x05)
	struct FString Note; // 0x250(0x10)
	int32 AIFullValue; // 0x260(0x04)
	int32 ItemSubType; // 0x264(0x04)
	struct FName ItemID; // 0x268(0x08)
	struct UClass* ItemClass; // 0x270(0x08)
	struct UClass* *43171c08df; // 0x278(0x08)
	struct U*118b1a2e1e* *781d6151c7; // 0x280(0x08)
};

// ScriptStruct TslGame.*3fda32cbb1
// Size: 0x60 (Inherited: 0x00)
struct F*3fda32cbb1 {
	char *2919b6ddf8 : 1; // 0x00(0x01)
	char bPointSellable : 1; // 0x00(0x01)
	char *d1c3da71dc : 1; // 0x00(0x01)
	char bPointRefundable : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *8ede8310e8; // 0x08(0x10)
	enum class ELobbyItemTier Tier; // 0x18(0x01)
	enum class ELobbyItemCategory Category; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FText Description; // 0x20(0x18)
	bool *4e8fb84291; // 0x38(0x01)
	bool *ecab3d78c8; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<enum class ELobbyItemPlatform> Platforms; // 0x40(0x10)
	float *8db52a6872; // 0x50(0x04)
	enum class ELobbyItemPointSellingType *0ede5cfee8; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *e2f166ded0; // 0x58(0x04)
	int32 *5577fb39d4; // 0x5c(0x04)
};

// ScriptStruct TslGame.*cf7aaf6771
// Size: 0x28 (Inherited: 0x00)
struct F*cf7aaf6771 {
	struct UStaticMesh* DroppedItemMesh; // 0x00(0x20)
	int32 MinStackCount; // 0x20(0x04)
	int32 MaxStackCount; // 0x24(0x04)
};

// ScriptStruct TslGame.*5a6ba1ab1e
// Size: 0x10 (Inherited: 0x00)
struct F*5a6ba1ab1e {
	struct FName SupplyItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*5d690c0392
// Size: 0x2a0 (Inherited: 0x288)
struct F*5d690c0392 : F*7c826e43af {
	enum class ECustomPartType CustomPart; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct TArray<struct FName> PartTags; // 0x290(0x10)
};

// ScriptStruct TslGame.*f7de330351
// Size: 0x2a0 (Inherited: 0x2a0)
struct F*f7de330351 : F*20e56c02b5 {
};

// ScriptStruct TslGame.*20e56c02b5
// Size: 0x2a0 (Inherited: 0x288)
struct F*20e56c02b5 : F*7c826e43af {
	bool bAutoAction; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct F*b4789e7d53 SkinParam; // 0x290(0x10)
};

// ScriptStruct TslGame.*b4789e7d53
// Size: 0x10 (Inherited: 0x00)
struct F*b4789e7d53 {
	enum class ESkinCategory SkinCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName SkinName; // 0x08(0x08)
};

// ScriptStruct TslGame.ItemTableRowVehiclePart
// Size: 0x330 (Inherited: 0x2a0)
struct FItemTableRowVehiclePart : F*5d690c0392 {
	enum class EVehiclePartType VehiclePart; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<struct UMaterialInterface*> Materials; // 0x2a8(0x10)
	struct TMap<int32, struct UMaterialInterface*> OverrideDestroyedMaterial; // 0x2b8(0x50)
	struct USkeletalMesh* SkeletalMesh; // 0x308(0x20)
	int32 WheelSize; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
};

// ScriptStruct TslGame.*d1d6f26aa6
// Size: 0x38 (Inherited: 0x00)
struct F*d1d6f26aa6 {
	float *89e7166bf8; // 0x00(0x04)
	float *183898dba2; // 0x04(0x04)
	int32 *2d1eefe9a3; // 0x08(0x04)
	float *5620338366; // 0x0c(0x04)
	float *95d086ab09; // 0x10(0x04)
	float *524a4488f1; // 0x14(0x04)
	int32 *4d9dbe70bf; // 0x18(0x04)
	float *0df108d2f9; // 0x1c(0x04)
	struct TArray<struct F*dd816bfb3f> *e2037b90e6; // 0x20(0x10)
	bool *1a9c20c1f7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *dd810490dd; // 0x34(0x04)
};

// ScriptStruct TslGame.*dd816bfb3f
// Size: 0x30 (Inherited: 0x00)
struct F*dd816bfb3f {
	struct FString MapName; // 0x00(0x10)
	struct FString LocationName; // 0x10(0x10)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*1a874fb0ba
// Size: 0x10 (Inherited: 0x00)
struct F*1a874fb0ba {
	uint32 *905bcf2449; // 0x00(0x04)
	float *5620338366; // 0x04(0x04)
	float *7a529adc1d; // 0x08(0x04)
	bool *e6e468540e; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*f8d71d2104
// Size: 0x08 (Inherited: 0x00)
struct F*f8d71d2104 {
	float *89e7166bf8; // 0x00(0x04)
	float *bb0950731c; // 0x04(0x04)
};

// ScriptStruct TslGame.*5f93fc3e4e
// Size: 0x38 (Inherited: 0x00)
struct F*5f93fc3e4e {
	float *89e7166bf8; // 0x00(0x04)
	float *183898dba2; // 0x04(0x04)
	int32 *2d1eefe9a3; // 0x08(0x04)
	float *5620338366; // 0x0c(0x04)
	float *95d086ab09; // 0x10(0x04)
	float *524a4488f1; // 0x14(0x04)
	int32 *4d9dbe70bf; // 0x18(0x04)
	float *0df108d2f9; // 0x1c(0x04)
	struct TArray<struct F*341fbd2454> *e2037b90e6; // 0x20(0x10)
	bool *1a9c20c1f7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *dd810490dd; // 0x34(0x04)
};

// ScriptStruct TslGame.*341fbd2454
// Size: 0x30 (Inherited: 0x00)
struct F*341fbd2454 {
	struct FString MapName; // 0x00(0x10)
	struct FString LocationName; // 0x10(0x10)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*c4568779b5
// Size: 0x18 (Inherited: 0x08)
struct F*c4568779b5 : FTableRowBase {
	struct UStaticMesh* OldMesh; // 0x08(0x08)
	struct UStaticMesh* NewMesh; // 0x10(0x08)
};

// ScriptStruct TslGame.*4bed4bffab
// Size: 0x10 (Inherited: 0x08)
struct F*4bed4bffab : FTableRowBase {
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct TslGame.*15d44afea1
// Size: 0x30 (Inherited: 0x08)
struct F*15d44afea1 : FTableRowBase {
	enum class *92a8d5bca4 DetailMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct UStaticMesh*> MeshesToOverride; // 0x10(0x10)
	struct TArray<struct UMaterialInterface*> DecalMaterialsToOverride; // 0x20(0x10)
};

// ScriptStruct TslGame.*435c423b0f
// Size: 0x10 (Inherited: 0x08)
struct F*435c423b0f : FTableRowBase {
	struct UClass* BPClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*1768c34f00
// Size: 0x70 (Inherited: 0x08)
struct F*1768c34f00 : FTableRowBase {
	struct FStringAssetReference *008f9d9575; // 0x08(0x10)
	struct FStringAssetReference *d6cb2c9bea; // 0x18(0x10)
	struct FStringAssetReference *a0eb211857; // 0x28(0x10)
	struct FStringAssetReference *1e5c332be5; // 0x38(0x10)
	struct FStringAssetReference *3fdbf1cecd; // 0x48(0x10)
	struct FStringAssetReference *df74cd9a8e; // 0x58(0x10)
	float Ratio; // 0x68(0x04)
	bool *64b9cdac81; // 0x6c(0x01)
	bool *2fba7bae16; // 0x6d(0x01)
	bool *6c889527df; // 0x6e(0x01)
	bool *d6e3201447; // 0x6f(0x01)
};

// ScriptStruct TslGame.*f910a4947d
// Size: 0x18 (Inherited: 0x08)
struct F*f910a4947d : FTableRowBase {
	struct FVector BeachPointLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*4cf15b8d87
// Size: 0x18 (Inherited: 0x08)
struct F*4cf15b8d87 : FTableRowBase {
	int32 LocationX; // 0x08(0x04)
	int32 LocationY; // 0x0c(0x04)
	int32 LocationZ; // 0x10(0x04)
	int32 SafeScore; // 0x14(0x04)
};

// ScriptStruct TslGame.*c9a266d962
// Size: 0x60 (Inherited: 0x08)
struct F*c9a266d962 : FTableRowBase {
	float NormalArea; // 0x08(0x04)
	char pad_C[0x54]; // 0x0c(0x54)
};

// ScriptStruct TslGame.*522c76fd0c
// Size: 0xc8 (Inherited: 0x60)
struct F*522c76fd0c : F*c9a266d962 {
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

// ScriptStruct TslGame.*84d72ff3bb
// Size: 0x70 (Inherited: 0x60)
struct F*84d72ff3bb : F*c9a266d962 {
	float Level_A; // 0x60(0x04)
	float Level_B; // 0x64(0x04)
	float Level_C; // 0x68(0x04)
	float Level_D; // 0x6c(0x04)
};

// ScriptStruct TslGame.*53c1dc1876
// Size: 0xd8 (Inherited: 0x60)
struct F*53c1dc1876 : F*c9a266d962 {
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

// ScriptStruct TslGame.*ccd3013f31
// Size: 0xa0 (Inherited: 0x60)
struct F*ccd3013f31 : F*c9a266d962 {
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

// ScriptStruct TslGame.*1ec3c0d199
// Size: 0x78 (Inherited: 0x60)
struct F*1ec3c0d199 : F*c9a266d962 {
	float CoalYards; // 0x60(0x04)
	float Docks; // 0x64(0x04)
	float IndustrialPark; // 0x68(0x04)
	float RailYard; // 0x6c(0x04)
	float Steelmill; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*06e046ce5c
// Size: 0xb0 (Inherited: 0x60)
struct F*06e046ce5c : F*c9a266d962 {
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

// ScriptStruct TslGame.*0ccaf00f7e
// Size: 0xb0 (Inherited: 0x60)
struct F*0ccaf00f7e : F*c9a266d962 {
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

// ScriptStruct TslGame.*f8b9e75327
// Size: 0x78 (Inherited: 0x60)
struct F*f8b9e75327 : F*c9a266d962 {
	float AlHabar; // 0x60(0x04)
	float AlHayik; // 0x64(0x04)
	float Bahrsahir; // 0x68(0x04)
	float Bashara; // 0x6c(0x04)
	float Hadiqanemo; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*51a49e905f
// Size: 0xa8 (Inherited: 0x60)
struct F*51a49e905f : F*c9a266d962 {
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

// ScriptStruct TslGame.*5561e37bc7
// Size: 0x18 (Inherited: 0x00)
struct F*5561e37bc7 {
	enum class *0ba1379a07 *9817f06681; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EGameModeType> *16680f18f2; // 0x08(0x10)
};

// ScriptStruct TslGame.*6c97232de9
// Size: 0x18 (Inherited: 0x00)
struct F*6c97232de9 {
	enum class *0ba1379a07 *9817f06681; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class ETslMapName> *16680f18f2; // 0x08(0x10)
};

// ScriptStruct TslGame.*d3cd2a9f99
// Size: 0x20 (Inherited: 0x08)
struct F*d3cd2a9f99 : FTableRowBase {
	struct FText *8101c306c1; // 0x08(0x18)
};

// ScriptStruct TslGame.*03568aadc9
// Size: 0x30 (Inherited: 0x00)
struct F*03568aadc9 {
	bool bUseMateriaSlotIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32> MaterialSlotIndex; // 0x08(0x10)
	bool bUseMaterialSlotName; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> MaterialSlotName; // 0x20(0x10)
};

// ScriptStruct TslGame.*41e5328d7e
// Size: 0x48 (Inherited: 0x00)
struct F*41e5328d7e {
	struct F*287e9e80c5 *287e9e80c5; // 0x00(0x40)
	struct UImage* *26104e742d; // 0x40(0x08)
};

// ScriptStruct TslGame.*287e9e80c5
// Size: 0x40 (Inherited: 0x00)
struct F*287e9e80c5 {
	struct FGuid IconGUID; // 0x00(0x10)
	struct FVector WorldLocation; // 0x10(0x0c)
	struct FRotator WorldRotation; // 0x1c(0x0c)
	enum class EAuxilaryIconType IconType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FLinearColor IconColor; // 0x2c(0x10)
	bool bIsVisible; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGame.*e138804829
// Size: 0x60 (Inherited: 0x00)
struct F*e138804829 {
	struct FString *df70b5fc55; // 0x00(0x10)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct TslGame.*7f4f3c1b84
// Size: 0x20 (Inherited: 0x00)
struct F*7f4f3c1b84 {
	struct FString *a52e81a2ae; // 0x00(0x10)
	struct FString *f85ebb5f19; // 0x10(0x10)
};

// ScriptStruct TslGame.*ae691961f5
// Size: 0x28 (Inherited: 0x08)
struct F*ae691961f5 : FTableRowBase {
	enum class EAuxilaryIconType IconType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* IconTexture; // 0x10(0x08)
	struct UCurveFloat* IconRatioCurve; // 0x18(0x08)
	float MinimapIconRatio; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*3a97ab595e
// Size: 0x28 (Inherited: 0x00)
struct F*3a97ab595e {
	float *5c5018d588; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *74add92bf5; // 0x08(0x08)
	bool bShowTrunkMesh; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct F*459008a02d> *dc9a113e86; // 0x18(0x10)
};

// ScriptStruct TslGame.*459008a02d
// Size: 0x28 (Inherited: 0x00)
struct F*459008a02d {
	struct UStaticMesh* TrunkMesh; // 0x00(0x20)
	float MinCapacityPercent; // 0x20(0x04)
	float MaxCapacityPercent; // 0x24(0x04)
};

// ScriptStruct TslGame.*dfc11fda10
// Size: 0x30 (Inherited: 0x00)
struct F*dfc11fda10 {
	struct F*de80d41fc7 Stand; // 0x00(0x10)
	struct F*de80d41fc7 Crouch; // 0x10(0x10)
	struct F*de80d41fc7 Prone; // 0x20(0x10)
};

// ScriptStruct TslGame.*de80d41fc7
// Size: 0x10 (Inherited: 0x00)
struct F*de80d41fc7 {
	float *a359f9c016; // 0x00(0x04)
	float *a7c947be63; // 0x04(0x04)
	float *3099fa8de8; // 0x08(0x04)
	float *f11825912d; // 0x0c(0x04)
};

// ScriptStruct TslGame.*efe293a553
// Size: 0x0c (Inherited: 0x00)
struct F*efe293a553 {
	struct FVector Acceleration; // 0x00(0x0c)
};

// ScriptStruct TslGame.*a23d8b2880
// Size: 0x20 (Inherited: 0x00)
struct F*a23d8b2880 {
	struct UBlendSpace1D* BlendSpaceFPP; // 0x00(0x08)
	struct UBlendSpace1D* BlendSpaceTPP; // 0x08(0x08)
	struct FInputBlendPose BlendSettings; // 0x10(0x10)
};

// ScriptStruct TslGame.*95c902bd31
// Size: 0x10 (Inherited: 0x00)
struct F*95c902bd31 {
	struct TArray<struct F*60fcea4427> IdleAnimations; // 0x00(0x10)
};

// ScriptStruct TslGame.*60fcea4427
// Size: 0x20 (Inherited: 0x00)
struct F*60fcea4427 {
	struct UAnimSequence* AnimAsset; // 0x00(0x08)
	struct FInt32Range LoopingCounter; // 0x08(0x10)
	float ChanceToPlay; // 0x18(0x04)
	float BlendTime; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e699a1f799
// Size: 0x10 (Inherited: 0x00)
struct F*e699a1f799 {
	struct FName Name; // 0x00(0x08)
	bool bIsAxis; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scale; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ffdf6ba277
// Size: 0x10 (Inherited: 0x00)
struct F*ffdf6ba277 {
	struct FName Name; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*96d1bd944b
// Size: 0x10 (Inherited: 0x00)
struct F*96d1bd944b {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Health; // 0x04(0x04)
	int32 Count; // 0x08(0x04)
	bool bUseRandomizedWeaponKits; // 0x0c(0x01)
	bool bUseUniqueWeaponKits; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*fad260182f
// Size: 0x10 (Inherited: 0x00)
struct F*fad260182f {
	struct FName *8b1cb0eec8; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*936e33f99d
// Size: 0x20 (Inherited: 0x00)
struct F*936e33f99d {
	enum class EAutoSpectatePriority *fd93c5b3d6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 TeamId; // 0x04(0x04)
	struct FString *8b0ba80f82; // 0x08(0x10)
	float *48be589c28; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*fa68a9816b
// Size: 0x50 (Inherited: 0x00)
struct F*fa68a9816b {
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

// ScriptStruct TslGame.*d7b5c1a08d
// Size: 0x18 (Inherited: 0x00)
struct F*d7b5c1a08d {
	struct FString UniqueId; // 0x00(0x10)
	bool *aaa01a7aa8; // 0x10(0x01)
	bool *f541fadab4; // 0x11(0x01)
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

// ScriptStruct TslGame.*253125876b
// Size: 0x20 (Inherited: 0x00)
struct F*253125876b {
	struct FString Key; // 0x00(0x10)
	struct TArray<struct F*2ed6be00e5> Logs; // 0x10(0x10)
};

// ScriptStruct TslGame.*2ed6be00e5
// Size: 0x20 (Inherited: 0x00)
struct F*2ed6be00e5 {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.BodyTypeDef
// Size: 0x08 (Inherited: 0x00)
struct FBodyTypeDef {
	int32 *cf64ac5bf9; // 0x00(0x04)
	int32 *57ef3529c4; // 0x04(0x04)
};

// ScriptStruct TslGame.*6c277117e7
// Size: 0x98 (Inherited: 0x00)
struct F*6c277117e7 {
	struct FString PlayerName; // 0x00(0x10)
	uint32 *c256626027; // 0x10(0x04)
	int32 TeamId; // 0x14(0x04)
	bool *dbf4362644; // 0x18(0x01)
	bool Gender; // 0x19(0x01)
	bool *9041cc4a7e; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct TArray<int32> *3374be467a; // 0x20(0x10)
	struct TArray<int32> *e13ef45a5d; // 0x30(0x10)
	struct TArray<int32> *8d805fa25c; // 0x40(0x10)
	struct FString Emotes; // 0x50(0x10)
	struct FName *dffdc17db4; // 0x60(0x08)
	struct FName *eca5d808d1; // 0x68(0x08)
	float *f2deef4238; // 0x70(0x04)
	float *571d911630; // 0x74(0x04)
	float *86b6d3eedc; // 0x78(0x04)
	float *5f7b37fc1f; // 0x7c(0x04)
	bool *edca7ead11; // 0x80(0x01)
	bool *06282eed69; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FString *0c2460b991; // 0x88(0x10)
};

// ScriptStruct TslGame.*64bd5b8e3c
// Size: 0x10 (Inherited: 0x00)
struct F*64bd5b8e3c {
	struct FVector Location; // 0x00(0x0c)
	bool *2e65f3e4c7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*be38327e5a
// Size: 0x10 (Inherited: 0x00)
struct F*be38327e5a {
	enum class EMatchStartType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* Class; // 0x08(0x08)
};

// ScriptStruct TslGame.*99af37cfd2
// Size: 0x08 (Inherited: 0x00)
struct F*99af37cfd2 {
	float *5e6f1d855d; // 0x00(0x04)
	float *7d414ffb3a; // 0x04(0x04)
};

// ScriptStruct TslGame.*39bc41466b
// Size: 0x24 (Inherited: 0x00)
struct F*39bc41466b {
	enum class EInventoryRadioMessageType *3b3a200ca2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *f2b252fb59; // 0x04(0x04)
	int32 *4d3980e4cd; // 0x08(0x04)
	bool *5ab98e8e1d; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32 *d1253d96b5; // 0x10(0x04)
	int32 *dfaaa56af1; // 0x14(0x04)
	struct FVector_NetQuantize *f03e2af66e; // 0x18(0x0c)
};

// ScriptStruct TslGame.*a435428157
// Size: 0x30 (Inherited: 0x00)
struct F*a435428157 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *9f0e4475c2; // 0x08(0x10)
	struct TArray<struct FText> *73be5e5b28; // 0x18(0x10)
	int32 *894f9d8abd; // 0x28(0x04)
	enum class ERadioMessageDecorateType *d7805e7d45; // 0x2c(0x01)
	enum class *5e8ae09c18 *f5ae3ab00e; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct TslGame.*10dd376bf4
// Size: 0x38 (Inherited: 0x28)
struct F*10dd376bf4 : F*cea97541c6 {
	struct TArray<struct FName> SkinnableTagList; // 0x28(0x10)
};

// ScriptStruct TslGame.*cea97541c6
// Size: 0x28 (Inherited: 0x00)
struct F*cea97541c6 {
	struct FText ItemName; // 0x00(0x18)
	struct FString BlueprintId; // 0x18(0x10)
};

// ScriptStruct TslGame.*026a2f00be
// Size: 0x38 (Inherited: 0x28)
struct F*026a2f00be : F*cea97541c6 {
	enum class EWeaponClass WeaponClassEnum; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName SkinTag; // 0x30(0x08)
};

// ScriptStruct TslGame.*dcf7a4b6c5
// Size: 0x10 (Inherited: 0x00)
struct F*dcf7a4b6c5 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.RankingInfo
// Size: 0x18 (Inherited: 0x00)
struct FRankingInfo {
	int32 TeamId; // 0x00(0x04)
	int32 *becd625c42; // 0x04(0x04)
	int32 *77aac6f8bc; // 0x08(0x04)
	int32 Score; // 0x0c(0x04)
	int32 Order; // 0x10(0x04)
	bool *86374961ef; // 0x14(0x01)
	bool *a56180b372; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*ab0db8ae6e
// Size: 0x08 (Inherited: 0x00)
struct F*ab0db8ae6e {
	struct FName ItemID; // 0x00(0x08)
};

// ScriptStruct TslGame.*618af039d3
// Size: 0x10 (Inherited: 0x00)
struct F*618af039d3 {
	struct FStringClassReference ObjectClass; // 0x00(0x10)
};

// ScriptStruct TslGame.*4d71bf335c
// Size: 0x10 (Inherited: 0x00)
struct F*4d71bf335c {
	struct UTexture* Texture; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e1670ec576
// Size: 0x30 (Inherited: 0x00)
struct F*e1670ec576 {
	struct FKey Key; // 0x00(0x18)
	struct UTexture* KeyIcon; // 0x18(0x08)
	struct UTexture* KeyIcon_PS; // 0x20(0x08)
	float IconRatio; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*deb104646e
// Size: 0x08 (Inherited: 0x00)
struct F*deb104646e {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
};

// ScriptStruct TslGame.*590643ec7b
// Size: 0x20 (Inherited: 0x00)
struct F*590643ec7b {
	struct FString ActorName; // 0x00(0x10)
	struct FVector *ad7c7b0865; // 0x10(0x0c)
	bool *de976ad248; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*1e7ccdbfad
// Size: 0x20 (Inherited: 0x00)
struct F*1e7ccdbfad {
	struct FString MapName; // 0x00(0x10)
	struct TArray<struct FSavedObPos> SavedObPos; // 0x10(0x10)
};

// ScriptStruct TslGame.SavedObPos
// Size: 0x18 (Inherited: 0x00)
struct FSavedObPos {
	struct FVector Loc; // 0x00(0x0c)
	struct FRotator Rot; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*59ab729907
// Size: 0x58 (Inherited: 0x00)
struct F*59ab729907 {
	struct TArray<enum class EGameModeType> GameModeTypeList; // 0x00(0x10)
	struct FString WidgetName; // 0x10(0x10)
	bool bRemoveWidget; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct F*82ee1dd20b NewWidgetConfig; // 0x28(0x30)
};

// ScriptStruct TslGame.*82ee1dd20b
// Size: 0x30 (Inherited: 0x00)
struct F*82ee1dd20b {
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

// ScriptStruct TslGame.*178620b8f7
// Size: 0x20 (Inherited: 0x00)
struct F*178620b8f7 {
	struct FString WidgetName; // 0x00(0x10)
	struct TArray<struct F*b9cb30ddf7> AlternativeWidgets; // 0x10(0x10)
};

// ScriptStruct TslGame.*b9cb30ddf7
// Size: 0x30 (Inherited: 0x00)
struct F*b9cb30ddf7 {
	struct FName GameModeAlias; // 0x00(0x08)
	struct FStringAssetReference Reference; // 0x08(0x10)
	struct TArray<struct FString> HideWidgetList; // 0x18(0x10)
	int32 ZOrderOverride; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*bd9a0fa6db
// Size: 0x40 (Inherited: 0x00)
struct F*bd9a0fa6db {
	struct FString WidgetName; // 0x00(0x10)
	struct F*82ee1dd20b WidgetConfig; // 0x10(0x30)
};

// ScriptStruct TslGame.*8d49267a6c
// Size: 0x18 (Inherited: 0x00)
struct F*8d49267a6c {
	struct FString *3f3e09a301; // 0x00(0x10)
	int32 *67d0e8d2f0; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.TslUserProfile
// Size: 0x18 (Inherited: 0x00)
struct FTslUserProfile {
	struct FString PlayerNetId; // 0x00(0x10)
	float TotalPlayTime_Sec; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*aa67277a54
// Size: 0x0c (Inherited: 0x00)
struct F*aa67277a54 {
	char pad_0[0x8]; // 0x00(0x08)
	int32 Counter; // 0x08(0x04)
};

// ScriptStruct TslGame.*d18bc34a13
// Size: 0x08 (Inherited: 0x00)
struct F*d18bc34a13 {
	enum class EWeatherChange newWeather; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*3edd039128
// Size: 0x20 (Inherited: 0x00)
struct F*3edd039128 {
	enum class EMarketCategoryType *ea33bc6d80; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName ItemID; // 0x08(0x08)
	int32 *4d3980e4cd; // 0x10(0x04)
	int32 *fcb5ae03fb; // 0x14(0x04)
	int32 *cb74f90e8a; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.ChineseLicensingDefaultCustomizeData
// Size: 0x18 (Inherited: 0x00)
struct FChineseLicensingDefaultCustomizeData {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FName EquipableItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*3bfdd5777e
// Size: 0x14 (Inherited: 0x00)
struct F*3bfdd5777e {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 AircraftCount; // 0x04(0x04)
	float AircraftCooldown; // 0x08(0x04)
	int32 InvalidBeforePhase; // 0x0c(0x04)
	int32 InvalidAfterPhase; // 0x10(0x04)
};

// ScriptStruct TslGame.*8802a94b19
// Size: 0x24 (Inherited: 0x00)
struct F*8802a94b19 {
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

// ScriptStruct TslGame.*2dfc075850
// Size: 0x40 (Inherited: 0x00)
struct F*2dfc075850 {
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

// ScriptStruct TslGame.*727f5bf857
// Size: 0x1c (Inherited: 0x00)
struct F*727f5bf857 {
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

// ScriptStruct TslGame.*0bbc073461
// Size: 0x08 (Inherited: 0x00)
struct F*0bbc073461 {
	float *ba371edebf; // 0x00(0x04)
	float *fae58e17e6; // 0x04(0x04)
};

// ScriptStruct TslGame.*929c092d3c
// Size: 0x18 (Inherited: 0x00)
struct F*929c092d3c {
	float *79d963c9bd; // 0x00(0x04)
	float *680b093f1c; // 0x04(0x04)
	float *f78191ab0e; // 0x08(0x04)
	float *c41a96c91c; // 0x0c(0x04)
	float *1b4e295784; // 0x10(0x04)
	float *c0fa7d1c7f; // 0x14(0x04)
};

// ScriptStruct TslGame.*3b6d81ed12
// Size: 0x0c (Inherited: 0x00)
struct F*3b6d81ed12 {
	float *b5fc628d79; // 0x00(0x04)
	float BpBoost; // 0x04(0x04)
	float *327e8114ce; // 0x08(0x04)
};

// ScriptStruct TslGame.*262771960f
// Size: 0x10 (Inherited: 0x00)
struct F*262771960f {
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

// ScriptStruct TslGame.*82f1eb6e01
// Size: 0x58 (Inherited: 0x08)
struct F*82f1eb6e01 : FTableRowBase {
	struct TMap<struct FName, struct F*d251301b03> TargetStateData; // 0x08(0x50)
};

// ScriptStruct TslGame.*d251301b03
// Size: 0x20 (Inherited: 0x00)
struct F*d251301b03 {
	struct UAnimationAsset* StateAnimation; // 0x00(0x20)
};

// ScriptStruct TslGame.*c34bdb3f66
// Size: 0xa8 (Inherited: 0x00)
struct F*c34bdb3f66 {
	enum class ETslOutGameCloudRequestType *ca2e4557bc; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *a22d303c6b; // 0x08(0x18)
	float *4ef1d3e807; // 0x20(0x04)
	float *e5a31d9b4d; // 0x24(0x04)
	struct FText *05fb36f243; // 0x28(0x18)
	struct FText *17dea2c423; // 0x40(0x18)
	struct TMap<enum class ETslOutGameCloudRequestErrorType, struct FText> *c2bbffee8e; // 0x58(0x50)
};

// ScriptStruct TslGame.*bb88c135c9
// Size: 0x10 (Inherited: 0x00)
struct F*bb88c135c9 {
	struct FName *a52ca85b02; // 0x00(0x08)
	bool bEnable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*5c2f96c82d
// Size: 0x20 (Inherited: 0x00)
struct F*5c2f96c82d {
	struct FString AccountId; // 0x00(0x10)
	struct FString LoadingState; // 0x10(0x10)
};

// ScriptStruct TslGame.*a3af215e60
// Size: 0x18 (Inherited: 0x00)
struct F*a3af215e60 {
	struct FString AccountId; // 0x00(0x10)
	float *f53c56ad68; // 0x10(0x04)
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

// ScriptStruct TslGame.*d29c86dd1e
// Size: 0x50 (Inherited: 0x00)
struct F*d29c86dd1e {
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

// ScriptStruct TslGame.*9860a0bfa9
// Size: 0x18 (Inherited: 0x00)
struct F*9860a0bfa9 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*f6dbd938d9
// Size: 0x20 (Inherited: 0x00)
struct F*f6dbd938d9 {
	enum class EReportDetailCauseType ReportDetailCauseType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGame.*a5f5a2f967
// Size: 0x10 (Inherited: 0x00)
struct F*a5f5a2f967 {
	int32 PlayerCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslPlayerStart* PlayerStart; // 0x08(0x08)
};

// ScriptStruct TslGame.*09cc48dbc9
// Size: 0x0c (Inherited: 0x00)
struct F*09cc48dbc9 {
	int32 TeamId; // 0x00(0x04)
	int32 SquadIndex; // 0x04(0x04)
	int32 *1fb1ac278d; // 0x08(0x04)
};

// ScriptStruct TslGame.*3a97823070
// Size: 0x30 (Inherited: 0x00)
struct F*3a97823070 {
	struct ATslPlayerState* Commander; // 0x00(0x08)
	struct FMapMarker MapMarker; // 0x08(0x10)
	struct ATslPlatoonFireSupportController* *40056f9291; // 0x18(0x08)
	struct U*57f6883b89* *fbdc84a0f4; // 0x20(0x08)
	struct U*57f6883b89* *296d2c379f; // 0x28(0x08)
};

// ScriptStruct TslGame.*daedfb5a9f
// Size: 0x18 (Inherited: 0x00)
struct F*daedfb5a9f {
	int32 TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATeam*> Members; // 0x08(0x10)
};

// ScriptStruct TslGame.*2f9a2ea036
// Size: 0x18 (Inherited: 0x00)
struct F*2f9a2ea036 {
	struct AActor* SpottedActor; // 0x00(0x08)
	float SpottedStartTime; // 0x08(0x04)
	float SpottedEndTime; // 0x0c(0x04)
	bool SpottedDuringThisCycle; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*29a6f55a4a
// Size: 0x14 (Inherited: 0x00)
struct F*29a6f55a4a {
	bool *1522c6fd41; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *fc72485ffd; // 0x04(0x0c)
	bool *5efc445bf9; // 0x10(0x01)
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
	int8 *f4d8a13009; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct TArray<int8> *ad18af7c2c; // 0x58(0x10)
};

// ScriptStruct TslGame.*3becc4ec9b
// Size: 0x20 (Inherited: 0x00)
struct F*3becc4ec9b {
	struct AActor* SpottedActor; // 0x00(0x08)
	float SpottingTime; // 0x08(0x04)
	struct FGuid MarkerID; // 0x0c(0x10)
	int8 *f4d8a13009; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*439094fc13
// Size: 0x08 (Inherited: 0x00)
struct F*439094fc13 {
	float Z; // 0x00(0x04)
	enum class ENearClippingLevel Level; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*6ebb74f736
// Size: 0x08 (Inherited: 0x00)
struct F*6ebb74f736 {
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

// ScriptStruct TslGame.*7a1322e5ac
// Size: 0xa8 (Inherited: 0x00)
struct F*7a1322e5ac {
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
	struct U*a49e4e15f4* ReticleSettings; // 0x40(0x08)
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

// ScriptStruct TslGame.*0b626baaa9
// Size: 0x280 (Inherited: 0x00)
struct F*0b626baaa9 {
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
	struct F*c6ee9e4aff ReticleBrightnessConfig; // 0x30(0x20)
	struct TArray<float> *fd25717a01; // 0x50(0x10)
	struct TMap<struct FName, struct UMaterialInstance*> *e93e294255; // 0x60(0x50)
	struct TMap<struct FName, struct U*a49e4e15f4*> *28b4e8634d; // 0xb0(0x50)
	struct U*7a7b9ffde9* *8f75106b1b; // 0x100(0x08)
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
	enum class *7db39c4871 WeaponGripLeft; // 0x158(0x01)
	bool bIsSuppressor; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct FStringAssetReference MuzzleSound; // 0x160(0x10)
	struct UAnimMontage* CharacterReloadTactical; // 0x170(0x08)
	struct UAnimMontage* WeaponReloadTactical; // 0x178(0x08)
	struct UAnimMontage* CharacterReloadCharge; // 0x180(0x08)
	struct UAnimMontage* WeaponReloadCharge; // 0x188(0x08)
	bool bUsePelletGridOverride; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TMap<int32, struct FVector2D> *63c3a5c7ab; // 0x198(0x50)
	float StabilitySpeedScalar; // 0x1e8(0x04)
	float StabilityMinForceAdditive; // 0x1ec(0x04)
	float RecoilEarlyExitScale; // 0x1f0(0x04)
	float CantedWeaponRotation; // 0x1f4(0x04)
	bool bUseReticleTypeOverride; // 0x1f8(0x01)
	bool bUseDefaultReticleCaching; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)
	struct TArray<struct F*4f3805c4e2> ReticleTextureDataArray; // 0x200(0x10)
	struct F*bf58d15687 ScopeGlintConfig; // 0x210(0x3c)
	bool bThermalTemperatureInteractive; // 0x24c(0x01)
	bool bBlocksGameplayTracers; // 0x24d(0x01)
	char pad_24E[0x2]; // 0x24e(0x02)
};

// ScriptStruct TslGame.*bf58d15687
// Size: 0x3c (Inherited: 0x00)
struct F*bf58d15687 {
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

// ScriptStruct TslGame.*4f3805c4e2
// Size: 0x48 (Inherited: 0x00)
struct F*4f3805c4e2 {
	float ReticleAngularSize; // 0x00(0x04)
	struct FVector2D ReticleCenter; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture2D* ReticleTexture; // 0x10(0x08)
	struct UTexture2D* ReticleDeactivatedTexture; // 0x18(0x08)
	bool bUseHaloTexture; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float HaloTextureScale; // 0x24(0x04)
	struct FVector ReticleColor; // 0x28(0x0c)
	float ReticleScale; // 0x34(0x04)
	float BrightSceneLuminanceMultiplier; // 0x38(0x04)
	float BrightSceneOpacityMultiplier; // 0x3c(0x04)
	float BrightSceneOpacityMultiplierLowResolution; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*c6ee9e4aff
// Size: 0x20 (Inherited: 0x00)
struct F*c6ee9e4aff {
	struct U*e6746d9844* ReticleBrightnessSettingsCurve; // 0x00(0x08)
	struct FName ReticleBrightnessParamX; // 0x08(0x08)
	struct FName ReticleBrightnessParamY; // 0x10(0x08)
	struct FName ReticleBrightnessParamZ; // 0x18(0x08)
};

// ScriptStruct TslGame.*3626b7c685
// Size: 0x28 (Inherited: 0x00)
struct F*3626b7c685 {
	enum class EWeaponAttachmentSlotID Slot; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *29dbb48b7d; // 0x08(0x10)
	struct TArray<struct FName> *0b54a601d5; // 0x18(0x10)
};

// ScriptStruct TslGame.*d161af1057
// Size: 0x20 (Inherited: 0x00)
struct F*d161af1057 {
	enum class EWeaponAttachmentSlotID *bc7294b32c; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *836e77781a; // 0x08(0x08)
	struct TArray<struct F*04e7f404a0> *7661024acf; // 0x10(0x10)
};

// ScriptStruct TslGame.*04e7f404a0
// Size: 0x10 (Inherited: 0x00)
struct F*04e7f404a0 {
	struct FName *38bfab5fce; // 0x00(0x08)
	struct FName *836e77781a; // 0x08(0x08)
};

// ScriptStruct TslGame.*59be4d852f
// Size: 0x18 (Inherited: 0x00)
struct F*59be4d852f {
	enum class EWeaponAttachmentSlotID *bc7294b32c; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *12171502ae; // 0x08(0x10)
};

// ScriptStruct TslGame.*d7adaba609
// Size: 0x03 (Inherited: 0x00)
struct F*d7adaba609 {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct TslGame.*40ead7aa89
// Size: 0x0c (Inherited: 0x00)
struct F*40ead7aa89 {
	bool bRandomSpawn; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RandomSpawnRadius; // 0x04(0x04)
	float *60b0fea150; // 0x08(0x04)
};

// ScriptStruct TslGame.*60e463d75c
// Size: 0x18 (Inherited: 0x00)
struct F*60e463d75c {
	int32 *19bd6d0ffb; // 0x00(0x04)
	int32 *6fe7752542; // 0x04(0x04)
	struct ADroppedItem* *5a78818b4b; // 0x08(0x08)
	enum class EEquipSlotID *e06c1a9445; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*3ddaf8ca9d
// Size: 0x10 (Inherited: 0x00)
struct F*3ddaf8ca9d {
	struct FName *9ae2be76d9; // 0x00(0x08)
	int32 *0a9d62a165; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7267be4da7
// Size: 0x10 (Inherited: 0x00)
struct F*7267be4da7 {
	enum class EConstraintSlotType ConstraintSlotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*24bac48d17 EquipPosition; // 0x04(0x08)
	enum class EEquipableItemSoundType OverrideSoundType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*24bac48d17
// Size: 0x08 (Inherited: 0x00)
struct F*24bac48d17 {
	enum class EEquipSlotID SlotID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Index; // 0x04(0x04)
};

// ScriptStruct TslGame.*820862ae7b
// Size: 0x48 (Inherited: 0x00)
struct F*820862ae7b {
	struct FRotator *ca286a93c3; // 0x00(0x0c)
	struct FVector Location; // 0x0c(0x0c)
	struct FVector Direction; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct U*af5a42646d* ThrowableConfig; // 0x28(0x08)
	int32 *775b07bc03; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct ATslCharacter* *8adb367d60; // 0x38(0x08)
	struct UPrimitiveComponent* *6fe1f23690; // 0x40(0x08)
};

// ScriptStruct TslGame.*6dd1517f1e
// Size: 0x190 (Inherited: 0x00)
struct F*6dd1517f1e {
	struct TMap<struct UClass*, struct F*77717018cc> SlotOffset_Primary_PerWeapon; // 0x00(0x50)
	struct TMap<struct UClass*, struct F*77717018cc> SlotOffset_Secondary_PerWeapon; // 0x50(0x50)
	struct TMap<struct UClass*, struct F*77717018cc> SlotOffset_SideArm_PerWeapon; // 0xa0(0x50)
	struct TMap<struct UClass*, struct F*77717018cc> SlotOffset_Melee_PerWeapon; // 0xf0(0x50)
	struct TMap<struct UClass*, struct F*77717018cc> SlotOffset_Thrown_PerWeapon; // 0x140(0x50)
};

// ScriptStruct TslGame.*77717018cc
// Size: 0x18 (Inherited: 0x00)
struct F*77717018cc {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*89db77e830
// Size: 0x78 (Inherited: 0x00)
struct F*89db77e830 {
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

// ScriptStruct TslGame.*2fcd9646f5
// Size: 0x08 (Inherited: 0x08)
struct F*2fcd9646f5 : FTableRowBase {
};

// ScriptStruct TslGame.*a0fce5c1ed
// Size: 0xd8 (Inherited: 0x00)
struct F*a0fce5c1ed {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CastAnimPlayRate; // 0x04(0x04)
	struct F*4c56244188 CustomCastAnim; // 0x08(0xc0)
	float CustomCastTimeRemaining; // 0xc8(0x04)
	bool IsPermanentCasting; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float CastBlendingTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct TslGame.*4ff04ed0c9
// Size: 0xb8 (Inherited: 0xb0)
struct F*4ff04ed0c9 : F*4d95d8c4cd {
	bool *ffc6ef9760; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct TslGame.*4ea696bc3f
// Size: 0x08 (Inherited: 0x00)
struct F*4ea696bc3f {
	float *b0263c125e; // 0x00(0x04)
	enum class EDamageVictimActorType *decdf3dbed; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*59c601d8c3
// Size: 0x140 (Inherited: 0x00)
struct F*59c601d8c3 {
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

// ScriptStruct TslGame.*3bf522d80d
// Size: 0x10 (Inherited: 0x00)
struct F*3bf522d80d {
	struct UAkAudioEvent* *8c521074ff; // 0x00(0x08)
	struct UAkAudioEvent* *bcadfdeed4; // 0x08(0x08)
};

// ScriptStruct TslGame.*4b9f5f68c7
// Size: 0x10 (Inherited: 0x08)
struct F*4b9f5f68c7 : FTableRowBase {
	struct FName *9ae2be76d9; // 0x08(0x08)
};

// ScriptStruct TslGame.*80dbc56bd3
// Size: 0x70 (Inherited: 0x00)
struct F*80dbc56bd3 {
	struct ATslPlayerState* *876e70f1b9; // 0x00(0x08)
	struct UClass* *3c8f29dc55; // 0x08(0x08)
	struct F*5df1f08743 *5df1f08743; // 0x10(0x20)
	struct FDateTime *c99b79808a; // 0x30(0x08)
	enum class EDamageReason *82e8a1cde7; // 0x38(0x01)
	enum class EDamageTypeCategory *584bfa83db; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FName *f8a79d16d1; // 0x40(0x08)
	struct TArray<struct FString> *0e43faf481; // 0x48(0x10)
	float Distance; // 0x58(0x04)
	bool *2fbe1be488; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct ATslPlayerState*> *9befb95a24; // 0x60(0x10)
};

// ScriptStruct TslGame.*5df1f08743
// Size: 0x20 (Inherited: 0x00)
struct F*5df1f08743 {
	struct FName *9ae2be76d9; // 0x00(0x08)
	struct F*b4789e7d53 SkinParam; // 0x08(0x10)
	int32 *0a9d62a165; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a5618266bf
// Size: 0x120 (Inherited: 0xf8)
struct F*a5618266bf : F*f3d100eb4d {
	struct FStringClassReference ReplaceVehicle; // 0xf8(0x10)
	enum class EVehicleSkinCategory VehicleSkinCategory; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct F*2f2ff84eaf> DefaultPartSkinList; // 0x110(0x10)
};

// ScriptStruct TslGame.*f3d100eb4d
// Size: 0xf8 (Inherited: 0x08)
struct F*f3d100eb4d : FTableRowBase {
	struct TMap<struct FName, struct F*1db19e2d61> SkinnedMeshSet; // 0x08(0x50)
	struct TMap<struct FName, struct F*47c95874b8> SkinnedMaterialSet; // 0x58(0x50)
	struct TArray<struct FName> SkinnableTagList; // 0xa8(0x10)
	struct FRotator DefaultViewModeRotation; // 0xb8(0x0c)
	struct FRotator PivotModifierRotation; // 0xc4(0x0c)
	struct FVector PCViewModeLocation; // 0xd0(0x0c)
	struct FVector ConsoleViewModeLocation; // 0xdc(0x0c)
	struct FVector RecommendArrowOffset; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.*1db19e2d61
// Size: 0x28 (Inherited: 0x00)
struct F*1db19e2d61 {
	enum class ESkinMeshType MeshType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* MeshAsset; // 0x08(0x20)
};

// ScriptStruct TslGame.*2f2ff84eaf
// Size: 0x10 (Inherited: 0x00)
struct F*2f2ff84eaf {
	enum class EVehiclePartType *61f213e32c; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *ee9615257c; // 0x08(0x08)
};

// ScriptStruct TslGame.*3e192d2a32
// Size: 0x178 (Inherited: 0x178)
struct F*3e192d2a32 : F*18a9a230b1 {
};

// ScriptStruct TslGame.*18a9a230b1
// Size: 0x178 (Inherited: 0xf8)
struct F*18a9a230b1 : F*f3d100eb4d {
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0xf8(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x128(0x30)
	struct F*b808435aa2 CustomizableObjectSkin; // 0x158(0x20)
};

// ScriptStruct TslGame.*338f096123
// Size: 0x178 (Inherited: 0x178)
struct F*338f096123 : F*18a9a230b1 {
};

// ScriptStruct TslGame.*0dd1dadafe
// Size: 0x178 (Inherited: 0x178)
struct F*0dd1dadafe : F*18a9a230b1 {
};

// ScriptStruct TslGame.*8830ec5d91
// Size: 0x178 (Inherited: 0x178)
struct F*8830ec5d91 : F*18a9a230b1 {
};

// ScriptStruct TslGame.*54d0a4b187
// Size: 0x170 (Inherited: 0x170)
struct F*54d0a4b187 : F*502151249e {
};

// ScriptStruct TslGame.*502151249e
// Size: 0x170 (Inherited: 0xf8)
struct F*502151249e : F*f3d100eb4d {
	char bStatTrak : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FStringAssetReference StatTrakActorClass; // 0x100(0x10)
	struct UAnimMontage* *e3fecd90fc; // 0x110(0x08)
	struct FName *18a5195fa1; // 0x118(0x08)
	struct TMap<struct FName, struct FLinearColor> SkinnedColorSet; // 0x120(0x50)
};

// ScriptStruct TslGame.*10f674495a
// Size: 0x148 (Inherited: 0x08)
struct F*10f674495a : FTableRowBase {
	struct UTexture2D* *5f416ae87e; // 0x08(0x20)
	struct UTexture2D* *7f6fb2acef; // 0x28(0x20)
	struct UTexture2D* *7a8af35217; // 0x48(0x20)
	struct UTexture2D* *2524281117; // 0x68(0x20)
	struct FName *3b1d5e14db; // 0x88(0x08)
	struct FSlateColor *d5b3e888c4; // 0x90(0x28)
	struct FSlateColor *477a60c760; // 0xb8(0x28)
	struct UMaterial* *1a2e08ed6a; // 0xe0(0x20)
	struct UTexture2D* *5f8518f21e; // 0x100(0x20)
	struct UTexture2D* *b9007bd91b; // 0x120(0x20)
	int32 *15c2cc4342; // 0x140(0x04)
	int32 *c160025bf5; // 0x144(0x04)
};

// ScriptStruct TslGame.*4bf2d1acef
// Size: 0x170 (Inherited: 0x170)
struct F*4bf2d1acef : F*502151249e {
};

// ScriptStruct TslGame.*07b65d379d
// Size: 0x08 (Inherited: 0x00)
struct F*07b65d379d {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
};

// ScriptStruct TslGame.*18ba838f8a
// Size: 0x10 (Inherited: 0x00)
struct F*18ba838f8a {
	struct FName TargetName; // 0x00(0x08)
	struct UMeshComponent* TargetMesh; // 0x08(0x08)
};

// ScriptStruct TslGame.WuLogDestructLandscape
// Size: 0x128 (Inherited: 0x60)
struct FWuLogDestructLandscape : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString CauserName; // 0x100(0x10)
	struct FVector Location; // 0x110(0x0c)
	float Radius; // 0x11c(0x04)
	float Depth; // 0x120(0x04)
	float Damage; // 0x124(0x04)
};

// ScriptStruct TslGame.WuLogCharacter
// Size: 0xa0 (Inherited: 0x00)
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
	struct FString Type; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogUseMarketCategory
// Size: 0x138 (Inherited: 0x60)
struct FWuLogUseMarketCategory : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString MarketLevel; // 0x100(0x10)
	struct FString MarketCategory; // 0x110(0x10)
	struct FString ItemID; // 0x120(0x10)
	int32 ItemCount; // 0x130(0x04)
	int32 BRCoinCount; // 0x134(0x04)
};

// ScriptStruct TslGame.WuLogUseMarket
// Size: 0x110 (Inherited: 0x60)
struct FWuLogUseMarket : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString MarketLevel; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogSubAircraftAppearance
// Size: 0x68 (Inherited: 0x60)
struct FWuLogSubAircraftAppearance : FLogBase {
	bool SubAircraftCreated; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float SubAircraftProbability; // 0x64(0x04)
};

// ScriptStruct TslGame.WuLogDropStructPositions
// Size: 0x90 (Inherited: 0x60)
struct FWuLogDropStructPositions : FLogBase {
	struct TArray<struct FString> DropStructNames; // 0x60(0x10)
	struct TArray<float> DropStructCreationTime; // 0x70(0x10)
	struct TArray<struct FVector> DropStructPositions; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogStructFlarePos
// Size: 0x80 (Inherited: 0x60)
struct FWuLogStructFlarePos : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FVector Location; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogIngameMissionReplacementInfo
// Size: 0x120 (Inherited: 0x60)
struct FWuLogIngameMissionReplacementInfo : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString PreviousMissionId; // 0x100(0x10)
	struct FString ReplacedMissionId; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogIngameMissionStatistic
// Size: 0xa0 (Inherited: 0x60)
struct FWuLogIngameMissionStatistic : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString MapName; // 0x70(0x10)
	struct FString ModeName; // 0x80(0x10)
	struct TArray<struct FWuLogIngameMissionProgress> MissionStatistics; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogIngameMissionProgress
// Size: 0xb0 (Inherited: 0x00)
struct FWuLogIngameMissionProgress {
	struct FWuLogCharacter Character; // 0x00(0xa0)
	struct TArray<struct FWuLogIngameMissionInfo> Missions; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuLogIngameMissionInfo
// Size: 0x30 (Inherited: 0x00)
struct FWuLogIngameMissionInfo {
	struct FString MissionId; // 0x00(0x10)
	struct FString RewardId; // 0x10(0x10)
	int32 Progress; // 0x20(0x04)
	int32 Goal; // 0x24(0x04)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
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

// ScriptStruct TslGame.WuLogPlayerCureDebuff
// Size: 0x1b0 (Inherited: 0x60)
struct FWuLogPlayerCureDebuff : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogCharacter TargetCharacter; // 0x100(0xa0)
	struct FString DebuffName; // 0x1a0(0x10)
};

// ScriptStruct TslGame.WuLogPlayerHungryStage
// Size: 0x118 (Inherited: 0x60)
struct FWuLogPlayerHungryStage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	int32 PreviousStage; // 0x100(0x04)
	int32 CurrentStage; // 0x104(0x04)
	struct FString DebuffName; // 0x108(0x10)
};

// ScriptStruct TslGame.WuLogSLBItemTransmit
// Size: 0x110 (Inherited: 0x60)
struct FWuLogSLBItemTransmit : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct TArray<struct FWuLogItem> TransmitedItem; // 0x100(0x10)
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
// Size: 0x110 (Inherited: 0x60)
struct FWuLogSLBItemReward : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct TArray<struct FWuLogItem> Item; // 0x100(0x10)
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

// ScriptStruct TslGame.WuLogBombPlayerDefuse
// Size: 0x118 (Inherited: 0x60)
struct FWuLogBombPlayerDefuse : FLogBase {
	struct FWuLogBombMissionInfo Info; // 0x60(0xb8)
};

// ScriptStruct TslGame.WuLogBombMissionInfo
// Size: 0xb8 (Inherited: 0x00)
struct FWuLogBombMissionInfo {
	struct FWuLogCharacter Character; // 0x00(0xa0)
	struct FString Action; // 0xa0(0x10)
	int32 CurrentRound; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerPlant
// Size: 0x118 (Inherited: 0x60)
struct FWuLogBombPlayerPlant : FLogBase {
	struct FWuLogBombMissionInfo Info; // 0x60(0xb8)
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
// Size: 0x160 (Inherited: 0x60)
struct FWuLogBombItemBuy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	int32 PresentCurrency; // 0x100(0x04)
	int32 Cost; // 0x104(0x04)
	int32 CurrentRound; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FWuLogItem Item; // 0x110(0x50)
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
// Size: 0x120 (Inherited: 0x60)
struct FWuLogBombPlayerIncome : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	int32 Amount; // 0x100(0x04)
	int32 CurrentRound; // 0x104(0x04)
	struct FWuBombRoundSummary RoundSummary; // 0x108(0x14)
	char pad_11C[0x4]; // 0x11c(0x04)
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
// Size: 0x1b0 (Inherited: 0x60)
struct FWuLogTireReplaced : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogVehicle ParentVehicle; // 0x100(0x58)
	struct FWuLogItem Item; // 0x158(0x50)
	float Durability; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
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
// Size: 0x1b0 (Inherited: 0x60)
struct FWuLogTirePulledOut : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogVehicle ParentVehicle; // 0x100(0x58)
	struct FWuLogItem Item; // 0x158(0x50)
	float Durability; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
};

// ScriptStruct TslGame.WuLogSoftRoleRepairkitUse
// Size: 0x2a8 (Inherited: 0x60)
struct FWuLogSoftRoleRepairkitUse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
	struct FWuLogItem RepairedItem; // 0x150(0x50)
	struct FWuLogVehicle RepairedVehicle; // 0x1a0(0x58)
	struct FWuLogCharacter TargetCharacter; // 0x1f8(0xa0)
	float PreviousRepairedStatus; // 0x298(0x04)
	float RepairedStatus; // 0x29c(0x04)
	int32 Remainedcount; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
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
// Size: 0x110 (Inherited: 0x60)
struct FWuLogCrowbarInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString TargetName; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogUsePresetSlotIngame
// Size: 0x108 (Inherited: 0x60)
struct FWuLogUsePresetSlotIngame : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	int32 SlotIndex; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
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
// Size: 0x110 (Inherited: 0x60)
struct FWuLogAbilitySummer : FLogBase {
	struct FWuLogCharacter Owner; // 0x60(0xa0)
	struct TArray<struct FWuLogAbilityData> AbilityDataArr; // 0x100(0x10)
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
// Size: 0x130 (Inherited: 0x60)
struct FWuLogAbilityActivate : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Owner; // 0x68(0xa0)
	struct FWuLogAbility Ability; // 0x108(0x20)
	int32 Index; // 0x128(0x04)
	bool IsSuccess; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
};

// ScriptStruct TslGame.WuLogAbility
// Size: 0x20 (Inherited: 0x00)
struct FWuLogAbility {
	struct FString AbilityID; // 0x00(0x10)
	struct TArray<struct FString> Attributes; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLogLivingthingAlertTime
// Size: 0x78 (Inherited: 0x60)
struct FWuLogLivingthingAlertTime : FLogBase {
	struct FString LivingthingName; // 0x60(0x10)
	int32 TotalAlertTime; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogItemPickupFromChickenBox
// Size: 0x158 (Inherited: 0x60)
struct FWuLogItemPickupFromChickenBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
	int32 ChickenBoxId; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
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
// Size: 0x108 (Inherited: 0x60)
struct FWuLogZDF2PlayerData : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	int32 HoldingCoinNum; // 0x100(0x04)
	int32 EarnedCoinNum; // 0x104(0x04)
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
// Size: 0x110 (Inherited: 0x60)
struct FWuLogSandboxItemUsageCount : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct TArray<struct FWuLogSandboxItemDataUsage> ItemsPerCategory; // 0x100(0x10)
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
// Size: 0x110 (Inherited: 0x60)
struct FWuLogRadioMessage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString MessageCategory; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogAtoZTutorialAllMissionClear
// Size: 0x100 (Inherited: 0x60)
struct FWuLogAtoZTutorialAllMissionClear : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
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
// Size: 0x108 (Inherited: 0x60)
struct FWuLogPlayerRedeploy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	int32 phase; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRedeployBRStart
// Size: 0x78 (Inherited: 0x60)
struct FWuLogPlayerRedeployBRStart : FLogBase {
	struct TArray<struct FWuLogCharacter> Characters; // 0x60(0x10)
	int32 phase; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogUsedBlueBlockerAndReturnedToSafeZone
// Size: 0x108 (Inherited: 0x60)
struct FWuLogUsedBlueBlockerAndReturnedToSafeZone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	int32 NumTimesUsedBlueBlockerAndReturnedToSafeZone; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogBlueBlockerAbsorbBlueZoneDamage
// Size: 0x108 (Inherited: 0x60)
struct FWuLogBlueBlockerAbsorbBlueZoneDamage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	float DamageAbsorbed; // 0x100(0x04)
	int32 NumTimesBlueZoneAbsorbed; // 0x104(0x04)
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
// Size: 0x110 (Inherited: 0x60)
struct FWuLogUseBrokenElectronics : FLogBase {
	struct FString ElectronicsType; // 0x60(0x10)
	struct FWuLogCharacter Character; // 0x70(0xa0)
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
// Size: 0x110 (Inherited: 0x60)
struct FWuLogSpray : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString SprayName; // 0x100(0x10)
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
// Size: 0xd8 (Inherited: 0x00)
struct FWuLogCharacterWeapons {
	struct FWuLogCharacter Character; // 0x00(0xa0)
	struct FString PrimaryWeaponFirst; // 0xa0(0x10)
	struct FString PrimaryWeaponSecond; // 0xb0(0x10)
	struct FString SecondaryWeapon; // 0xc0(0x10)
	int32 SpawnKitIndex; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
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
// Size: 0x100 (Inherited: 0x60)
struct FWuLogParachuteFollowReleaseByHoldKey : FLogBase {
	struct FWuLogCharacter UserInfo; // 0x60(0xa0)
};

// ScriptStruct TslGame.WuLogParachuteFollow
// Size: 0x128 (Inherited: 0x60)
struct FWuLogParachuteFollow : FLogBase {
	struct FWuLogCharacter UserInfo; // 0x60(0xa0)
	bool IsFollower; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32 FollowerNum; // 0x104(0x04)
	struct FString TargetName; // 0x108(0x10)
	struct FString ModeName; // 0x118(0x10)
};

// ScriptStruct TslGame.WuLogPlayerMovementBaseChanged
// Size: 0x128 (Inherited: 0x60)
struct FWuLogPlayerMovementBaseChanged : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString NewMovementBase; // 0x100(0x10)
	struct FString OldMovementBase; // 0x110(0x10)
	float MovedDistance; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct TslGame.WuLogPlayerScore
// Size: 0x148 (Inherited: 0x60)
struct FWuLogPlayerScore : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	int32 KillScore; // 0x100(0x04)
	int32 KillCount; // 0x104(0x04)
	int32 DeathScore; // 0x108(0x04)
	int32 DeathCount; // 0x10c(0x04)
	int32 AssistScore; // 0x110(0x04)
	int32 AssistCount; // 0x114(0x04)
	int32 ChainKillScore; // 0x118(0x04)
	int32 ChainKillCount; // 0x11c(0x04)
	int32 WinRoundScore; // 0x120(0x04)
	int32 WinRoundCount; // 0x124(0x04)
	int32 DefeatRoundScore; // 0x128(0x04)
	int32 DefeatRoundCount; // 0x12c(0x04)
	int32 WinMatchScore; // 0x130(0x04)
	int32 WinMatchCount; // 0x134(0x04)
	int32 DefeatMatchScore; // 0x138(0x04)
	int32 DefeatMatchCount; // 0x13c(0x04)
	int32 TotalScore; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
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
// Size: 0x1c8 (Inherited: 0x60)
struct FWuLogPlayerHealed : FLogBase {
	struct FWuLogCharacter Healer; // 0x60(0xa0)
	struct FWuLogCharacter Target; // 0x100(0xa0)
	int32 HealId; // 0x1a0(0x04)
	float Healamount; // 0x1a4(0x04)
	struct FString HealCauserName; // 0x1a8(0x10)
	struct FString HealTypeCategory; // 0x1b8(0x10)
};

// ScriptStruct TslGame.WuLogPlayerBuffed
// Size: 0x1c8 (Inherited: 0x60)
struct FWuLogPlayerBuffed : FLogBase {
	struct FWuLogCharacter Buffer; // 0x60(0xa0)
	struct FWuLogCharacter Target; // 0x100(0xa0)
	int32 BuffId; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FString BuffCauserName; // 0x1a8(0x10)
	struct FString BuffType; // 0x1b8(0x10)
};

// ScriptStruct TslGame.WuLogItemSkillSpawn
// Size: 0x150 (Inherited: 0x60)
struct FWuLogItemSkillSpawn : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
};

// ScriptStruct TslGame.WuLogCraftResult
// Size: 0x188 (Inherited: 0x60)
struct FWuLogCraftResult : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	bool SUCCESS; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FString FailedReason; // 0x108(0x10)
	struct FString CraftItem; // 0x118(0x10)
	struct FWuLogItem ItemResult; // 0x128(0x50)
	struct TArray<struct FWuLogItem> Materials; // 0x178(0x10)
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
// Size: 0x178 (Inherited: 0x60)
struct FWuLogVehicleInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogVehicle Vehicle; // 0x100(0x58)
	struct FString EventType; // 0x158(0x10)
	struct TArray<struct FWuStringIntPair> EventInfo; // 0x168(0x10)
};

// ScriptStruct TslGame.WuLogObjectInteraction
// Size: 0x130 (Inherited: 0x60)
struct FWuLogObjectInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString ObjectType; // 0x100(0x10)
	struct FString ObjectTypeStatus; // 0x110(0x10)
	struct TArray<struct FWuStringIntPair> ObjectTypeAdditionalInfo; // 0x120(0x10)
};

// ScriptStruct TslGame.WuLogSafeZoneFlaregunCalled
// Size: 0x128 (Inherited: 0x60)
struct FWuLogSafeZoneFlaregunCalled : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	bool IsCalledSuccessfully; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32 FiredPhase; // 0x104(0x04)
	struct FVector FlareFiredPhaseSafeZonePosition; // 0x108(0x0c)
	float FlareFiredPhaseSafeZoneRadius; // 0x114(0x04)
	struct FVector NewSafeZonePosition; // 0x118(0x0c)
	float NewSafeZoneRadius; // 0x124(0x04)
};

// ScriptStruct TslGame.WuLogFlaregunCalled
// Size: 0x108 (Inherited: 0x60)
struct FWuLogFlaregunCalled : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	bool IsInWhiteZone; // 0x100(0x01)
	bool IsCalledSuccessfully; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
};

// ScriptStruct TslGame.WuLogPlayerDeath
// Size: 0x120 (Inherited: 0x60)
struct FWuLogPlayerDeath : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct TArray<struct FString> Weapons; // 0x100(0x10)
	struct TArray<struct FString> Equips; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogXboxUnautorizedDevice
// Size: 0x108 (Inherited: 0x60)
struct FWuLogXboxUnautorizedDevice : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	int32 KillCount; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
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
// Size: 0x100 (Inherited: 0x60)
struct FWuLogMissionListOpen : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
};

// ScriptStruct TslGame.WuLogWeaponFireCount
// Size: 0x118 (Inherited: 0x60)
struct FWuLogWeaponFireCount : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString WeaponId; // 0x100(0x10)
	int32 FireCount; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct TslGame.WuLogRedZoneEnded
// Size: 0x70 (Inherited: 0x60)
struct FWuLogRedZoneEnded : FLogBase {
	struct TArray<struct FWuLogCharacter> Drivers; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogParachuteLanding
// Size: 0x108 (Inherited: 0x60)
struct FWuLogParachuteLanding : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	float Distance; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogObjectDestroy
// Size: 0x130 (Inherited: 0x60)
struct FWuLogObjectDestroy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString ObjectType; // 0x100(0x10)
	struct FVector ObjectLocation; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FString DamageCauserName; // 0x120(0x10)
};

// ScriptStruct TslGame.WuLogEmote
// Size: 0x130 (Inherited: 0x60)
struct FWuLogEmote : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString EmoteName; // 0x100(0x10)
	struct FString EmoteType; // 0x110(0x10)
	struct TArray<struct FWuStringStringPair> AdditionalParameters; // 0x120(0x10)
};

// ScriptStruct TslGame.WuStringStringPair
// Size: 0x20 (Inherited: 0x00)
struct FWuStringStringPair {
	struct FString First; // 0x00(0x10)
	struct FString second; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLogVaultStart
// Size: 0x108 (Inherited: 0x60)
struct FWuLogVaultStart : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	bool IsLedgeGrab; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct TslGame.WuLogSkinUpdate
// Size: 0x180 (Inherited: 0x60)
struct FWuLogSkinUpdate : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
	struct FString SkinName; // 0x150(0x10)
	struct FString SkinCategory; // 0x160(0x10)
	struct TArray<struct FWuLogItem> PartItems; // 0x170(0x10)
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
// Size: 0x188 (Inherited: 0x60)
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
	struct FWuLogCharacter Character; // 0xd8(0xa0)
	struct FString ActualHardwareName; // 0x178(0x10)
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
// Size: 0x120 (Inherited: 0x60)
struct FWuLogBodyPenetrationDamageInfo : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	float DamageDiff; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FString DamageZone; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogCheat
// Size: 0x148 (Inherited: 0x60)
struct FWuLogCheat : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString CheatType; // 0x100(0x10)
	struct FString Description; // 0x110(0x10)
	float ParamFloat1; // 0x120(0x04)
	float ParamFloat2; // 0x124(0x04)
	struct FString ParamString1; // 0x128(0x10)
	struct FString ParamString2; // 0x138(0x10)
};

// ScriptStruct TslGame.WuLogSwimEnd
// Size: 0x108 (Inherited: 0x60)
struct FWuLogSwimEnd : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	float SwimDistance; // 0x100(0x04)
	float MaxSwimDepthOfWater; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogSwimStart
// Size: 0x100 (Inherited: 0x60)
struct FWuLogSwimStart : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
};

// ScriptStruct TslGame.WuLogWheelDestroy
// Size: 0x188 (Inherited: 0x60)
struct FWuLogWheelDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	struct FWuLogVehicle Vehicle; // 0x108(0x58)
	int32 WheelIndex; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FString DamageTypeCategory; // 0x168(0x10)
	struct FString DamageCauserName; // 0x178(0x10)
};

// ScriptStruct TslGame.WuLogVehicleDestroy
// Size: 0x188 (Inherited: 0x60)
struct FWuLogVehicleDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	struct FWuLogVehicle Vehicle; // 0x108(0x58)
	struct FString DamageTypeCategory; // 0x160(0x10)
	struct FString DamageCauserName; // 0x170(0x10)
	float Distance; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct TslGame.WuLogVehicleDamage
// Size: 0x188 (Inherited: 0x60)
struct FWuLogVehicleDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	struct FWuLogVehicle Vehicle; // 0x108(0x58)
	struct FString DamageTypeCategory; // 0x160(0x10)
	struct FString DamageCauserName; // 0x170(0x10)
	float Damage; // 0x180(0x04)
	float Distance; // 0x184(0x04)
};

// ScriptStruct TslGame.WuLogVehicleLeave
// Size: 0x178 (Inherited: 0x60)
struct FWuLogVehicleLeave : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogVehicle Vehicle; // 0x100(0x58)
	float RideDistance; // 0x158(0x04)
	int32 SeatIndex; // 0x15c(0x04)
	float MaxSpeed; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct TArray<struct FWuLogCharacter> FellowPassengers; // 0x168(0x10)
};

// ScriptStruct TslGame.WuLogVehicleRide
// Size: 0x170 (Inherited: 0x60)
struct FWuLogVehicleRide : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogVehicle Vehicle; // 0x100(0x58)
	int32 SeatIndex; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TArray<struct FWuLogCharacter> FellowPassengers; // 0x160(0x10)
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
// Size: 0x188 (Inherited: 0x60)
struct FWuLogLootTruckPackageSpawn : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x30)
	struct FWuLogCharacter Character; // 0x90(0xa0)
	struct FWuLogVehicle Vehicle; // 0x130(0x58)
};

// ScriptStruct TslGame.WuLogLanguage
// Size: 0x120 (Inherited: 0x60)
struct FWuLogLanguage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString WindowsLanguage; // 0x100(0x10)
	struct FString GameLanguage; // 0x110(0x10)
};

// ScriptStruct TslGame.WuSystemInfo
// Size: 0x250 (Inherited: 0x60)
struct FWuSystemInfo : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString OsLanguage; // 0x100(0x10)
	struct FString GameLanguage; // 0x110(0x10)
	struct FString OsVersion; // 0x120(0x10)
	struct FString CpuName; // 0x130(0x10)
	struct FString GpuName; // 0x140(0x10)
	int32 RamInGB; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString BaseBoardSerial; // 0x158(0x10)
	struct TArray<struct FString> MemorySerials; // 0x168(0x10)
	int32 ArpIpCount; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FString OsUserAccount; // 0x180(0x10)
	struct TArray<struct FString> DiskModelNames; // 0x190(0x10)
	struct TArray<struct FString> DiskSerials; // 0x1a0(0x10)
	struct TArray<struct FString> MonitorModelNames; // 0x1b0(0x10)
	struct TArray<struct FString> MonitorSerials; // 0x1c0(0x10)
	struct TArray<struct FString> MemoryModelNames; // 0x1d0(0x10)
	struct FString BaseBoardModelName; // 0x1e0(0x10)
	struct TArray<struct FString> GatewayMacAddress; // 0x1f0(0x10)
	struct FWuGraphicSettings GraphicSettings; // 0x200(0x40)
	struct FString CpuClock; // 0x240(0x10)
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
// Size: 0x158 (Inherited: 0x60)
struct FWuLogHeal : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
	float Healamount; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
};

// ScriptStruct TslGame.WuLogEmPickupLiftOff
// Size: 0x120 (Inherited: 0x60)
struct FWuLogEmPickupLiftOff : FLogBase {
	struct FWuLogCharacter Instigator; // 0x60(0xa0)
	struct TArray<struct FWuLogCharacter> Riders; // 0x100(0x10)
	int32 VehicleUniqueId; // 0x110(0x04)
	int32 BlueZonePhase; // 0x114(0x04)
	float DistanceToBluezone; // 0x118(0x04)
	float DistanceToSafezone; // 0x11c(0x04)
};

// ScriptStruct TslGame.WuLogItemThrow
// Size: 0x1f8 (Inherited: 0x60)
struct FWuLogItemThrow : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogCharacter Target; // 0x100(0xa0)
	struct FWuLogItem Item; // 0x1a0(0x50)
	float Distance; // 0x1f0(0x04)
	bool IsSuccess; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
};

// ScriptStruct TslGame.WuLogItemUse
// Size: 0x150 (Inherited: 0x60)
struct FWuLogItemUse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
};

// ScriptStruct TslGame.WuLogItemDetach
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogItemDetach : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem ParentItem; // 0x100(0x50)
	struct FWuLogItem ChildItem; // 0x150(0x50)
};

// ScriptStruct TslGame.WuLogItemAttachedAll
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogItemAttachedAll : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem ParentItem; // 0x100(0x50)
	struct FWuLogItem ChildItem; // 0x150(0x50)
};

// ScriptStruct TslGame.WuLogItemAttach
// Size: 0x1a0 (Inherited: 0x60)
struct FWuLogItemAttach : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem ParentItem; // 0x100(0x50)
	struct FWuLogItem ChildItem; // 0x150(0x50)
};

// ScriptStruct TslGame.WuLogItemUnequip
// Size: 0x150 (Inherited: 0x60)
struct FWuLogItemUnequip : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
};

// ScriptStruct TslGame.WuLogItemEquip
// Size: 0x150 (Inherited: 0x60)
struct FWuLogItemEquip : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
};

// ScriptStruct TslGame.WuLogItemDrop
// Size: 0x158 (Inherited: 0x60)
struct FWuLogItemDrop : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
	bool IsDropVolatility; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// ScriptStruct TslGame.WuLogItemPickupFromCustomPackage
// Size: 0x170 (Inherited: 0x60)
struct FWuLogItemPickupFromCustomPackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
	struct FString SourceUniqueId; // 0x150(0x10)
	struct FString CustomPackageUniqueId; // 0x160(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromVehicleTrunk
// Size: 0x1b0 (Inherited: 0x60)
struct FWuLogItemPickupFromVehicleTrunk : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogVehicle Vehicle; // 0x100(0x58)
	struct FWuLogItem Item; // 0x158(0x50)
	float BeforeTrunkCapacity; // 0x1a8(0x04)
	float CurrentTrunkCapacity; // 0x1ac(0x04)
};

// ScriptStruct TslGame.WuLogItemPutToVehicleTrunk
// Size: 0x1b0 (Inherited: 0x60)
struct FWuLogItemPutToVehicleTrunk : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogVehicle Vehicle; // 0x100(0x58)
	struct FWuLogItem Item; // 0x158(0x50)
	float BeforeTrunkCapacity; // 0x1a8(0x04)
	float CurrentTrunkCapacity; // 0x1ac(0x04)
};

// ScriptStruct TslGame.WuLogItemPickupFromRandomBox
// Size: 0x160 (Inherited: 0x60)
struct FWuLogItemPickupFromRandomBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Weapon; // 0x100(0x50)
	struct FString RandomBoxName; // 0x150(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromLootBox
// Size: 0x168 (Inherited: 0x60)
struct FWuLogItemPickupFromLootBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
	int32 OwnerTeamId; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString CreatorAccountId; // 0x158(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromItemPackage
// Size: 0x160 (Inherited: 0x60)
struct FWuLogItemPickupFromItemPackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
	struct FString PackageName; // 0x150(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromCarepackage
// Size: 0x168 (Inherited: 0x60)
struct FWuLogItemPickupFromCarepackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
	int32 CarePackageUniqueId; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString CarePackageName; // 0x158(0x10)
};

// ScriptStruct TslGame.WuLogItemPickup
// Size: 0x150 (Inherited: 0x60)
struct FWuLogItemPickup : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem Item; // 0x100(0x50)
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
// Size: 0x1d0 (Inherited: 0x60)
struct FWuLogPlayerMatchFinished : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuGameResultPerPlayer GameResult; // 0x100(0xb0)
	struct FWuPlayerWeaponStats WeaponStats; // 0x1b0(0x20)
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
// Size: 0x4d0 (Inherited: 0x60)
struct FWuLogPlayerKillV2 : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 DBNOId; // 0x64(0x04)
	struct FWuGameResultPerPlayer VictimGameResult; // 0x68(0xb0)
	struct FWuLogCharacter Victim; // 0x118(0xa0)
	struct FString VictimWeapon; // 0x1b8(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x1c8(0x10)
	struct FWuLogCharacter DBNOMaker; // 0x1d8(0xa0)
	struct FWuLogKillDamageInfo DBNODamageInfo; // 0x278(0x48)
	struct FWuLogCharacter Finisher; // 0x2c0(0xa0)
	struct FWuLogKillDamageInfo FinishDamageInfo; // 0x360(0x48)
	struct FWuLogCharacter Killer; // 0x3a8(0xa0)
	struct FWuLogKillDamageInfo KillerDamageInfo; // 0x448(0x48)
	struct TArray<struct FString> Assists_AccountId; // 0x490(0x10)
	struct TArray<struct FString> TeamKillers_AccountId; // 0x4a0(0x10)
	bool IsSuicide; // 0x4b0(0x01)
	bool IsKillSteal; // 0x4b1(0x01)
	char pad_4B2[0x6]; // 0x4b2(0x06)
	struct TArray<struct FString> ReloadedWeaponsOfKiller; // 0x4b8(0x10)
	bool IsVictimIsBlind; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	int32 AmmoInClipOfKiller; // 0x4cc(0x04)
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
// Size: 0x370 (Inherited: 0x60)
struct FWuLogPlayerKill : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Killer; // 0x68(0xa0)
	struct FWuLogCharacter Victim; // 0x108(0xa0)
	struct FWuLogCharacter Assistant; // 0x1a8(0xa0)
	int32 DBNOId; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct FString DamageReason; // 0x250(0x10)
	struct FString DamageTypeCategory; // 0x260(0x10)
	struct FString DamageCauserName; // 0x270(0x10)
	struct TArray<struct FString> DamageCauserAdditionalInfo; // 0x280(0x10)
	struct FString VictimWeapon; // 0x290(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x2a0(0x10)
	float Distance; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FWuGameResultPerPlayer VictimGameResult; // 0x2b8(0xb0)
	bool IsThroughPenetrableWall; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
};

// ScriptStruct TslGame.WuLogPlayerRevive
// Size: 0x1a8 (Inherited: 0x60)
struct FWuLogPlayerRevive : FLogBase {
	struct FWuLogCharacter Reviver; // 0x60(0xa0)
	struct FWuLogCharacter Victim; // 0x100(0xa0)
	int32 DBNOId; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
};

// ScriptStruct TslGame.WuLogArmorDestroy
// Size: 0x230 (Inherited: 0x60)
struct FWuLogArmorDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	struct FWuLogCharacter Victim; // 0x108(0xa0)
	struct FString DamageTypeCategory; // 0x1a8(0x10)
	struct FString DamageReason; // 0x1b8(0x10)
	struct FString DamageCauserName; // 0x1c8(0x10)
	struct FWuLogItem Item; // 0x1d8(0x50)
	float Distance; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerMakeGroggy
// Size: 0x218 (Inherited: 0x60)
struct FWuLogPlayerMakeGroggy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	struct FWuLogCharacter Victim; // 0x108(0xa0)
	struct FString DamageReason; // 0x1a8(0x10)
	struct FString DamageTypeCategory; // 0x1b8(0x10)
	struct FString DamageCauserName; // 0x1c8(0x10)
	struct TArray<struct FString> DamageCauserAdditionalInfo; // 0x1d8(0x10)
	struct FString VictimWeapon; // 0x1e8(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x1f8(0x10)
	float Distance; // 0x208(0x04)
	bool IsAttackerInVehicle; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
	int32 DBNOId; // 0x210(0x04)
	bool IsThroughPenetrableWall; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
};

// ScriptStruct TslGame.WuLogPlayerTakeDamage
// Size: 0x1e8 (Inherited: 0x60)
struct FWuLogPlayerTakeDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	struct FWuLogCharacter Victim; // 0x108(0xa0)
	struct FString DamageTypeCategory; // 0x1a8(0x10)
	struct FString DamageReason; // 0x1b8(0x10)
	float Damage; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FString DamageCauserName; // 0x1d0(0x10)
	bool IsThroughPenetrableWall; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
};

// ScriptStruct TslGame.WuLogPlayerUseFlareGun
// Size: 0x168 (Inherited: 0x60)
struct FWuLogPlayerUseFlareGun : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	struct FString AttackType; // 0x108(0x10)
	struct FWuLogItem Weapon; // 0x118(0x50)
};

// ScriptStruct TslGame.WuLogPlayerDestroyBreachableWall
// Size: 0x150 (Inherited: 0x60)
struct FWuLogPlayerDestroyBreachableWall : FLogBase {
	struct FWuLogCharacter Attacker; // 0x60(0xa0)
	struct FWuLogItem Weapon; // 0x100(0x50)
};

// ScriptStruct TslGame.WuLogPlayerDestroyProp
// Size: 0x120 (Inherited: 0x60)
struct FWuLogPlayerDestroyProp : FLogBase {
	struct FWuLogCharacter Attacker; // 0x60(0xa0)
	struct FString ObjectType; // 0x100(0x10)
	struct FVector ObjectLocation; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct TslGame.WuLogBlackZoneEnded
// Size: 0x70 (Inherited: 0x60)
struct FWuLogBlackZoneEnded : FLogBase {
	struct TArray<struct FWuLogCharacter> Survivors; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogPlayerSummonBlackZone
// Size: 0x100 (Inherited: 0x60)
struct FWuLogPlayerSummonBlackZone : FLogBase {
	struct FWuLogCharacter Player; // 0x60(0xa0)
};

// ScriptStruct TslGame.WuLogPlayerUseProjDecoy
// Size: 0x110 (Inherited: 0x60)
struct FWuLogPlayerUseProjDecoy : FLogBase {
	struct FWuLogCharacter DecoyInstigator; // 0x60(0xa0)
	struct FVector Location; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerUseWeapDecoy
// Size: 0x110 (Inherited: 0x60)
struct FWuLogPlayerUseWeapDecoy : FLogBase {
	struct FWuLogCharacter DecoyInstigator; // 0x60(0xa0)
	struct FVector Location; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerUseThrowable
// Size: 0x168 (Inherited: 0x60)
struct FWuLogPlayerUseThrowable : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	struct FString AttackType; // 0x108(0x10)
	struct FWuLogItem Weapon; // 0x118(0x50)
};

// ScriptStruct TslGame.WuLogPlayerAttack
// Size: 0x1c0 (Inherited: 0x60)
struct FWuLogPlayerAttack : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xa0)
	struct FString AttackType; // 0x108(0x10)
	struct FWuLogItem Weapon; // 0x118(0x50)
	struct FWuLogVehicle Vehicle; // 0x168(0x58)
};

// ScriptStruct TslGame.WuLogClientHitch
// Size: 0x150 (Inherited: 0x60)
struct FWuLogClientHitch : FLogBase {
	struct FString GameModeType; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	float ElapsedTime; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FWuLogCharacter CharacterLog; // 0x88(0xa0)
	struct FVector CharacterVelocity; // 0x128(0x0c)
	bool IsInAircraft; // 0x134(0x01)
	bool IsFallingWithParachute; // 0x135(0x01)
	bool IsParachuting; // 0x136(0x01)
	bool IsInCar; // 0x137(0x01)
	struct FString RecentShownWidget; // 0x138(0x10)
	int32 AvailableCpuPhysicalMemory; // 0x148(0x04)
	int32 AvailableCpuVirtualMemory; // 0x14c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerPosition
// Size: 0x180 (Inherited: 0x60)
struct FWuLogPlayerPosition : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogVehicle Vehicle; // 0x100(0x58)
	float ElapsedTime; // 0x158(0x04)
	int32 NumAlivePlayers; // 0x15c(0x04)
	float ClientFPS; // 0x160(0x04)
	int32 Under10FPS; // 0x164(0x04)
	int32 Under20FPS; // 0x168(0x04)
	int32 Under30FPS; // 0x16c(0x04)
	int32 Under60FPS; // 0x170(0x04)
	int32 MinFPS; // 0x174(0x04)
	int32 MaxFPS; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerKicked
// Size: 0x110 (Inherited: 0x60)
struct FWuLogPlayerKicked : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString Reason; // 0x100(0x10)
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
// Size: 0x110 (Inherited: 0x60)
struct FWuLogPlayerCreate : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct TArray<struct FString> Equips; // 0x100(0x10)
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
// Size: 0x118 (Inherited: 0x60)
struct FWuLogGasPumpValue : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString Action; // 0x100(0x10)
	float Value; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct TslGame.WuLogGasPump
// Size: 0x110 (Inherited: 0x60)
struct FWuLogGasPump : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString Action; // 0x100(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleBlueChipDetector
// Size: 0x118 (Inherited: 0x60)
struct FWuLogSoftroleBlueChipDetector : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString Action; // 0x100(0x10)
	float ScanningDistance; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeEnd
// Size: 0x120 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeEnd : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString PrimaryWeaponFirst; // 0x100(0x10)
	struct FString PrimaryWeaponSecond; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeBegin
// Size: 0x120 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeBegin : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString PrimaryWeaponFirst; // 0x100(0x10)
	struct FString PrimaryWeaponSecond; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeMarkDrone
// Size: 0x110 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeMarkDrone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FVector Location; // 0x100(0x0c)
	float Distance; // 0x10c(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeMark
// Size: 0x1a8 (Inherited: 0x60)
struct FWuLogSoftroleSpotterScopeMark : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogCharacter MarkedCharacter; // 0x100(0xa0)
	float Distance; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleTraumaBag
// Size: 0x1f0 (Inherited: 0x60)
struct FWuLogSoftroleTraumaBag : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogCharacter Target; // 0x100(0xa0)
	struct FWuLogItem HealingItem; // 0x1a0(0x50)
};

// ScriptStruct TslGame.WuLogSoftroleDrone
// Size: 0x168 (Inherited: 0x60)
struct FWuLogSoftroleDrone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FWuLogItem InventoryItem; // 0x100(0x50)
	struct FString Action; // 0x150(0x10)
	float FlyingElapsedTime; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
};

// ScriptStruct TslGame.WuLogCharacterCarry
// Size: 0x110 (Inherited: 0x60)
struct FWuLogCharacterCarry : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xa0)
	struct FString CarryState; // 0x100(0x10)
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
// Size: 0x240 (Inherited: 0x00)
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
	bool IsPCCafeUser; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	struct TArray<struct FWuStringIntPair> StatTrakDataPairs; // 0x1e8(0x10)
	struct TArray<struct FWuStringIntPair> HeadshotStatTrakDataPairs; // 0x1f8(0x10)
	struct FWuLobbyPartyInfo LobbyPartyInfo; // 0x208(0x28)
	struct TArray<struct FString> TdmSpawnKitIds; // 0x230(0x10)
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

// ScriptStruct TslGame.*900d67bd10
// Size: 0x78 (Inherited: 0x00)
struct F*900d67bd10 {
	struct TArray<struct FString> *e8b5dc84ab; // 0x00(0x10)
	struct TArray<struct FString> *ba8307d5d3; // 0x10(0x10)
	struct TArray<struct FString> *0ebc3edc60; // 0x20(0x10)
	struct TArray<bool> *ef905e5f6d; // 0x30(0x10)
	struct TArray<struct FString> *8190c5b2cb; // 0x40(0x10)
	struct TArray<float> *8b47a9b75a; // 0x50(0x10)
	struct TArray<struct FString> *7d29c17cc7; // 0x60(0x10)
	bool *68b51483ed; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGame.*9726969c72
// Size: 0x10 (Inherited: 0x00)
struct F*9726969c72 {
	struct UClass* *3833cc18ad; // 0x00(0x08)
	float *908555cd74; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e85a5541ce
// Size: 0x430 (Inherited: 0x288)
struct F*e85a5541ce : F*7c826e43af {
	enum class EEquipSlotID EquipSlotID; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float SpaceExtension; // 0x28c(0x04)
	float DamageReductionRate; // 0x290(0x04)
	float DurabilityMax; // 0x294(0x04)
	bool DestroyByDurability; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float Durability; // 0x29c(0x04)
	enum class *ae19195785 DurabilityConsumeType; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float DamageTransferRate; // 0x2a4(0x04)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0x2a8(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x2d8(0x30)
	struct F*b808435aa2 CustomizableObjectOriginalSkin; // 0x308(0x20)
	struct UAkAudioEvent* EquipedSoundAk; // 0x328(0x20)
	struct UAkAudioEvent* BlueBlockerEnterBlueZoneSoundAk; // 0x348(0x20)
	struct UAkAudioEvent* BlueBlockerExitBlueZoneSoundAk; // 0x368(0x20)
	struct UAkAudioEvent* BlueBlockerLowHealthSoundAk; // 0x388(0x20)
	struct UAkAudioEvent* BlueBlockerNoHealthSoundAk; // 0x3a8(0x20)
	float BlueBlockerLowHealthThreshold; // 0x3c8(0x04)
	enum class EEquipableItemSoundGroup SoundGroup; // 0x3cc(0x01)
	enum class EEquipableItemSoundType SoundType; // 0x3cd(0x01)
	bool bCanZombieEquip; // 0x3ce(0x01)
	enum class *7ce5595ebb SlotOffsetType; // 0x3cf(0x01)
	struct FName SkinTag; // 0x3d0(0x08)
	bool bDisableEquipmentSkinning; // 0x3d8(0x01)
	bool bDisableSkinMessages; // 0x3d9(0x01)
	bool bDisableMasteryMessages; // 0x3da(0x01)
	enum class EEquipableItemLevelType EquipableItemLevelType; // 0x3db(0x01)
	bool bIsUnequipable; // 0x3dc(0x01)
	enum class ESpecialEquipmentType SpecialEquipmentType; // 0x3dd(0x01)
	char pad_3DE[0x2]; // 0x3de(0x02)
	struct UTexture* HudDisplayEquipIcon; // 0x3e0(0x20)
	struct TArray<struct F*7267be4da7> ConstraintSlotConfigs; // 0x400(0x10)
	struct TArray<struct F*9726969c72> *86abe7bce7; // 0x410(0x10)
	struct FName EquipmentOverridableFilter; // 0x420(0x08)
	bool bIsHoody; // 0x428(0x01)
	bool bIsGhillieSuit; // 0x429(0x01)
	bool bIsTacticalGear; // 0x42a(0x01)
	char pad_42B[0x5]; // 0x42b(0x05)
};

// ScriptStruct TslGame.*674dc75cdb
// Size: 0x08 (Inherited: 0x00)
struct F*674dc75cdb {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*479205346e
// Size: 0xd0 (Inherited: 0x00)
struct F*479205346e {
	struct FInt32Range RowRange; // 0x00(0x10)
	struct FFloatRange CapsuleRelativeRange; // 0x10(0x10)
	struct FFloatRange SpeedRange; // 0x20(0x10)
	struct FFloatRange ZSpeedRange; // 0x30(0x10)
	struct FInt32Range LedgeRange; // 0x40(0x10)
	struct FInt32Range FreeSpaceRange; // 0x50(0x10)
	enum class *908bd88e5f IsVault; // 0x60(0x01)
	enum class *908bd88e5f IsClimb; // 0x61(0x01)
	enum class *908bd88e5f IsLedgeGrab; // 0x62(0x01)
	enum class *908bd88e5f IsSlide; // 0x63(0x01)
	enum class *908bd88e5f IsNarrow; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct F*d8e2ea5f75 ExecConfig; // 0x68(0x68)
};

// ScriptStruct TslGame.*d8e2ea5f75
// Size: 0x68 (Inherited: 0x00)
struct F*d8e2ea5f75 {
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

// ScriptStruct TslGame.*39620a66b5
// Size: 0x68 (Inherited: 0x00)
struct F*39620a66b5 {
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

// ScriptStruct TslGame.*484b7808ff
// Size: 0x18 (Inherited: 0x00)
struct F*484b7808ff {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*78d67a7f48
// Size: 0x44 (Inherited: 0x00)
struct F*78d67a7f48 {
	char pad_0[0x44]; // 0x00(0x44)
};

// ScriptStruct TslGame.*cb294e2167
// Size: 0x18 (Inherited: 0x00)
struct F*cb294e2167 {
	int64 *53d0f4e93f; // 0x00(0x08)
	float *10b99d6d7a; // 0x08(0x04)
	float *d89f7a927d; // 0x0c(0x04)
	enum class EAnimStance *b0a73664d8; // 0x10(0x01)
	bool *c1c61a48d3; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*5ff717b9da
// Size: 0x38 (Inherited: 0x00)
struct F*5ff717b9da {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*b97a15ef30
// Size: 0x10 (Inherited: 0x00)
struct F*b97a15ef30 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.StringArray
// Size: 0x10 (Inherited: 0x00)
struct FStringArray {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*a9fee9a530
// Size: 0x10 (Inherited: 0x00)
struct F*a9fee9a530 {
	struct TArray<bool> Data; // 0x00(0x10)
};

// ScriptStruct TslGame.*06383e4db9
// Size: 0x30 (Inherited: 0x00)
struct F*06383e4db9 {
	float *f05f7f8789; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector2D> *79d196ad17; // 0x08(0x10)
	float *d910890d86; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FVector2D> *21d2250c98; // 0x20(0x10)
};

// ScriptStruct TslGame.*e96edab285
// Size: 0x10 (Inherited: 0x00)
struct F*e96edab285 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*a9c8b5d666
// Size: 0x308 (Inherited: 0x00)
struct F*a9c8b5d666 {
	char pad_0[0x308]; // 0x00(0x308)
};

// ScriptStruct TslGame.*ac88811cc8
// Size: 0x18 (Inherited: 0x00)
struct F*ac88811cc8 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*0ee7c27bae
// Size: 0x28 (Inherited: 0x00)
struct F*0ee7c27bae {
	struct TArray<struct F*0fee5465d7> *7caf0a10b8; // 0x00(0x10)
	struct TArray<uint16> *f6b6f367a5; // 0x10(0x10)
	float *2e46d75eec; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*0fee5465d7
// Size: 0x06 (Inherited: 0x00)
struct F*0fee5465d7 {
	int16 *5c71ed9124; // 0x00(0x02)
	int16 *414885ffde; // 0x02(0x02)
	uint16 *f6c7e04e7e; // 0x04(0x02)
};

// ScriptStruct TslGame.*fed5ff6732
// Size: 0x10 (Inherited: 0x00)
struct F*fed5ff6732 {
	struct UObject* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*7affdd2c46
// Size: 0x7b0 (Inherited: 0x00)
struct F*7affdd2c46 {
	char pad_0[0x7b0]; // 0x00(0x7b0)
};

// ScriptStruct TslGame.*66049dccc6
// Size: 0x770 (Inherited: 0x00)
struct F*66049dccc6 {
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
	struct F*d8e2ea5f75 ExecConfig; // 0x50(0x68)
	struct F*e64f60d081 HitData; // 0xb8(0x6b8)
};

// ScriptStruct TslGame.*e64f60d081
// Size: 0x6b8 (Inherited: 0x00)
struct F*e64f60d081 {
	char pad_0[0x6b8]; // 0x00(0x6b8)
};

// ScriptStruct TslGame.*c0de68504d
// Size: 0x68 (Inherited: 0x00)
struct F*c0de68504d {
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

// ScriptStruct TslGame.*9b0c2f4380
// Size: 0x48 (Inherited: 0x00)
struct F*9b0c2f4380 {
	uint16 *039db82076; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Position; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	struct F*04ee9cc600 InputData; // 0x28(0x20)
};

// ScriptStruct TslGame.*04ee9cc600
// Size: 0x20 (Inherited: 0x00)
struct F*04ee9cc600 {
	float *e0f84f90b7; // 0x00(0x04)
	float *3981489d87; // 0x04(0x04)
	float *23aa8be2cc; // 0x08(0x04)
	float *f19f8f422f; // 0x0c(0x04)
	bool *975c03a56d; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *141df20539; // 0x14(0x04)
	float *e47a374f58; // 0x18(0x04)
	float *96d0c4bbcf; // 0x1c(0x04)
};

// ScriptStruct TslGame.*6f57ffc1e1
// Size: 0x28 (Inherited: 0x00)
struct F*6f57ffc1e1 {
	float *559abed564; // 0x00(0x04)
	float *b058a1c59c; // 0x04(0x04)
	float *5d52614aed; // 0x08(0x04)
	struct FVector2D *32607a4f9c; // 0x0c(0x08)
	struct FVector2D *b3b6581ea1; // 0x14(0x08)
	float *fdff984b89; // 0x1c(0x04)
	float *9bc3a8d11b; // 0x20(0x04)
	float *e223be2413; // 0x24(0x04)
};

// ScriptStruct TslGame.*d7f6b6ec07
// Size: 0x24 (Inherited: 0x00)
struct F*d7f6b6ec07 {
	struct FVector LocalOffset; // 0x00(0x0c)
	float *f3004f653a; // 0x0c(0x04)
	struct F*33f0b1d56e *88640221c6; // 0x10(0x14)
};

// ScriptStruct TslGame.*33f0b1d56e
// Size: 0x14 (Inherited: 0x00)
struct F*33f0b1d56e {
	bool *8d3f01bd1d; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct FVector Extent; // 0x08(0x0c)
};

// ScriptStruct TslGame.*23e348ea6b
// Size: 0x80 (Inherited: 0x00)
struct F*23e348ea6b {
	float *48c2de44c6; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* *ad779ad8c3; // 0x08(0x08)
	struct UAkAudioEvent* *da73fff74e; // 0x10(0x08)
	struct UAkAudioEvent* *b09d8f2306; // 0x18(0x08)
	struct UAkAudioEvent* *c87278edd7; // 0x20(0x08)
	struct FName *57fa25807f; // 0x28(0x08)
	struct FName *abf9b03f09; // 0x30(0x08)
	struct FName *d6c756aa25; // 0x38(0x08)
	struct FName *96bd0213c5; // 0x40(0x08)
	struct FName *b456634608; // 0x48(0x08)
	struct FName *cbad749d09; // 0x50(0x08)
	struct FName *01306fda35; // 0x58(0x08)
	float *125082c02d; // 0x60(0x04)
	float *7637312eab; // 0x64(0x04)
	float *01ff91f0aa; // 0x68(0x04)
	float *8fcdfb190a; // 0x6c(0x04)
	float *0adb6614b1; // 0x70(0x04)
	float *d68135e646; // 0x74(0x04)
	float *a387700f25; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*e76b6ab1b2
// Size: 0x48 (Inherited: 0x00)
struct F*e76b6ab1b2 {
	bool *620a210c8f; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D *ffeff7f048; // 0x04(0x08)
	struct FVector2D *b46f82e47c; // 0x0c(0x08)
	struct FVector2D *6103962ccf; // 0x14(0x08)
	struct FVector2D *e207e00408; // 0x1c(0x08)
	struct FVector2D *ee5f4848f8; // 0x24(0x08)
	struct FVector2D *752703c1cd; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UClass* *0ad023d030; // 0x38(0x08)
	float *db2ec51b5d; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*8465449936
// Size: 0x18 (Inherited: 0x00)
struct F*8465449936 {
	struct TArray<struct F*7d9c4a45ef> *e534107d1c; // 0x00(0x10)
	struct UAnimMontage* *f7f0b940af; // 0x10(0x08)
};

// ScriptStruct TslGame.*7d9c4a45ef
// Size: 0x30 (Inherited: 0x00)
struct F*7d9c4a45ef {
	enum class *3324f7f181 *fecebff06e; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *ee1bfe85dd; // 0x04(0x04)
	struct UAnimMontage* *7c01e0e890; // 0x08(0x08)
	struct UAnimMontage* *5659398c48; // 0x10(0x08)
	bool *e3b1d795f9; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *2c14932de3; // 0x1c(0x04)
	struct UAnimMontage* *849138932f; // 0x20(0x08)
	struct FName *f1bbbeae9e; // 0x28(0x08)
};

// ScriptStruct TslGame.*c260d6f0db
// Size: 0x50 (Inherited: 0x00)
struct F*c260d6f0db {
	float *e04f035c51; // 0x00(0x04)
	float *76763ffa3b; // 0x04(0x04)
	float *e728fc3249; // 0x08(0x04)
	bool *2cd6f0307f; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *ce8e85077b; // 0x10(0x04)
	bool *98e9f88079; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *ef89737130; // 0x18(0x04)
	struct FVector *fb1f6734a5; // 0x1c(0x0c)
	float *eb7c9c8058; // 0x28(0x04)
	float *597fcfaf34; // 0x2c(0x04)
	float *5027e6df79; // 0x30(0x04)
	bool *ba98980570; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector *cd69c16f7b; // 0x38(0x0c)
	bool *e759e653ab; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *3cfc99ce82; // 0x48(0x04)
	float *adf844b57e; // 0x4c(0x04)
};

// ScriptStruct TslGame.*f757880982
// Size: 0x58 (Inherited: 0x00)
struct F*f757880982 {
	struct UParticleSystem* *b20b76939d; // 0x00(0x08)
	struct UParticleSystem* *419fd01b21; // 0x08(0x08)
	struct FVector2D *750bfc11b5; // 0x10(0x08)
	struct FVector2D *352d577a34; // 0x18(0x08)
	struct FVector2D *44964cafef; // 0x20(0x08)
	struct FVector2D *51217260b8; // 0x28(0x08)
	struct FVector2D *f4c4aafbd1; // 0x30(0x08)
	struct FVector2D *e94eed625d; // 0x38(0x08)
	struct UClass* *e8e4d8e397; // 0x40(0x08)
	struct UClass* *0fea32d78a; // 0x48(0x08)
	struct U*e6746d9844* *33bae162cb; // 0x50(0x08)
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
	float *1db82eeba9; // 0x10(0x04)
};

// ScriptStruct TslGame.*ffcc9456f1
// Size: 0xc0 (Inherited: 0x00)
struct F*ffcc9456f1 {
	float *95c8c7f1b6; // 0x00(0x04)
	struct FVector *9dd6062c68; // 0x04(0x0c)
	float *ecca0176c0; // 0x10(0x04)
	float *a65798224e; // 0x14(0x04)
	float *58c815760d; // 0x18(0x04)
	float *07e1f113ed; // 0x1c(0x04)
	float *860c8aea3f; // 0x20(0x04)
	float *fcc1a4fa3f; // 0x24(0x04)
	float *fff83bb6a7; // 0x28(0x04)
	float *ae0b885a5c; // 0x2c(0x04)
	float *73fbca63cd; // 0x30(0x04)
	float *97139c0472; // 0x34(0x04)
	struct FVector CapsuleOffset; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct USkeletalMesh* ParachuteSK; // 0x48(0x08)
	struct UClass* *11620c3d6c; // 0x50(0x08)
	struct FRotator *3b957c7e1f; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UPhysicsAsset* *7b1757e838; // 0x68(0x08)
	struct TMap<enum class ESkydiveState, struct F*5eef6bb582> *6b1ece012d; // 0x70(0x50)
};

// ScriptStruct TslGame.*5eef6bb582
// Size: 0x10 (Inherited: 0x00)
struct F*5eef6bb582 {
	float *6aee803143; // 0x00(0x04)
	enum class *1789b5db7d *27f3bdeaa8; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float *b3b5ecba4f; // 0x08(0x04)
	bool *09b765d889; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*71729583fa
// Size: 0x7c (Inherited: 0x00)
struct F*71729583fa {
	float *f0287ac005; // 0x00(0x04)
	float *c2c9c8e7cc; // 0x04(0x04)
	float *44c39742e0; // 0x08(0x04)
	float *0d2b5725b4; // 0x0c(0x04)
	float *b696710ba5; // 0x10(0x04)
	float *62ff25da09; // 0x14(0x04)
	float *6c6b412bd5; // 0x18(0x04)
	float *8820ff28ed; // 0x1c(0x04)
	float *0abc5ed971; // 0x20(0x04)
	float *f30ae739ba; // 0x24(0x04)
	float *46441c9d25; // 0x28(0x04)
	float *5e2689259d; // 0x2c(0x04)
	struct FVector2D *a6b93c43ff; // 0x30(0x08)
	struct FVector2D *43edc9c1ca; // 0x38(0x08)
	float *2098d74924; // 0x40(0x04)
	float *51aac3bdd9; // 0x44(0x04)
	float *7825406c48; // 0x48(0x04)
	float *8811aa2213; // 0x4c(0x04)
	float *4ac6f5e243; // 0x50(0x04)
	float *8fc403c1f4; // 0x54(0x04)
	float *09fb3a87cf; // 0x58(0x04)
	float *b1422c2b1d; // 0x5c(0x04)
	float *c4862192ac; // 0x60(0x04)
	float *9d850546ed; // 0x64(0x04)
	float *4fd9803765; // 0x68(0x04)
	struct FVector2D *4f6eb12eb7; // 0x6c(0x08)
	struct FVector2D *8bc321097a; // 0x74(0x08)
};

// ScriptStruct TslGame.*d7d9f3b101
// Size: 0x30 (Inherited: 0x00)
struct F*d7d9f3b101 {
	float *749f967c5f; // 0x00(0x04)
	float *e7beee0545; // 0x04(0x04)
	float *1f68993f14; // 0x08(0x04)
	float *83eccdc139; // 0x0c(0x04)
	float *471529bc29; // 0x10(0x04)
	float *b0e3913030; // 0x14(0x04)
	float *dc3dfcb039; // 0x18(0x04)
	float *d184cdf6c7; // 0x1c(0x04)
	float *605020bbd3; // 0x20(0x04)
	float *46804913ec; // 0x24(0x04)
	float *1042b98a16; // 0x28(0x04)
	float *965210798d; // 0x2c(0x04)
};

// ScriptStruct TslGame.*897e9d92ef
// Size: 0x28 (Inherited: 0x00)
struct F*897e9d92ef {
	float *c47fb4002d; // 0x00(0x04)
	float *2b37acc88f; // 0x04(0x04)
	float *053fcbbcd0; // 0x08(0x04)
	float *3bb05fbf9c; // 0x0c(0x04)
	float *97664202ad; // 0x10(0x04)
	bool *023428bc86; // 0x14(0x01)
	bool *bce1bc4f00; // 0x15(0x01)
	bool *746b6b78be; // 0x16(0x01)
	bool *5f606ae55d; // 0x17(0x01)
	float *a9a130bdb2; // 0x18(0x04)
	float *4e412246f0; // 0x1c(0x04)
	float *5e314bc6d8; // 0x20(0x04)
	float *933b2bb150; // 0x24(0x04)
};

// ScriptStruct TslGame.*b727894173
// Size: 0x20 (Inherited: 0x00)
struct F*b727894173 {
	float *b04c673f5a; // 0x00(0x04)
	struct FVector2D *146b56d4ca; // 0x04(0x08)
	struct FVector2D *d2daba81c7; // 0x0c(0x08)
	float *3006d3bc51; // 0x14(0x04)
	struct FVector2D *3277e41108; // 0x18(0x08)
};

// ScriptStruct TslGame.*839b63bf1b
// Size: 0x14 (Inherited: 0x00)
struct F*839b63bf1b {
	float DragScale; // 0x00(0x04)
	float *965474b430; // 0x04(0x04)
	float *758e8ce29b; // 0x08(0x04)
	float *2c924dec0f; // 0x0c(0x04)
	float *75d9eb9d9c; // 0x10(0x04)
};

// ScriptStruct TslGame.*76ce73e878
// Size: 0x18 (Inherited: 0x00)
struct F*76ce73e878 {
	float *a1d51ec26e; // 0x00(0x04)
	float *d455260636; // 0x04(0x04)
	float *f826dcfa7a; // 0x08(0x04)
	bool *ac7a7f48d2; // 0x0c(0x01)
	bool *fc0dd5dc8b; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float *d99acae72b; // 0x10(0x04)
	float *4e3b9cf96f; // 0x14(0x04)
};

// ScriptStruct TslGame.FreefallVelocitySettings
// Size: 0x0c (Inherited: 0x00)
struct FFreefallVelocitySettings {
	float SpeedMin; // 0x00(0x04)
	float *ed8292734a; // 0x04(0x04)
	float *832c7ebbec; // 0x08(0x04)
};

// ScriptStruct TslGame.*2bcb0672a0
// Size: 0x30 (Inherited: 0x00)
struct F*2bcb0672a0 {
	struct FVector2D *68ca4b6eda; // 0x00(0x08)
	struct FVector2D *285d08c474; // 0x08(0x08)
	struct FVector2D *763a162adc; // 0x10(0x08)
	float *c2e8375a5b; // 0x18(0x04)
	struct FVector2D *411acd244d; // 0x1c(0x08)
	struct FVector2D *d087b5980e; // 0x24(0x08)
	float *aa34652b37; // 0x2c(0x04)
};

// ScriptStruct TslGame.*7b3cfcb9c9
// Size: 0x78 (Inherited: 0x00)
struct F*7b3cfcb9c9 {
	bool *7ec58fd6ed; // 0x00(0x01)
	bool *f7233c67ee; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<int32, int32> *4b13551423; // 0x08(0x50)
	int32 *fce82db0cd; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<float> *e55425c162; // 0x60(0x10)
	int32 *391ed1ef70; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*230d0ab9ce
// Size: 0x20 (Inherited: 0x00)
struct F*230d0ab9ce {
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

// ScriptStruct TslGame.*5e4d6ed348
// Size: 0x20 (Inherited: 0x00)
struct F*5e4d6ed348 {
	struct TArray<struct UItem*> *9fac33095a; // 0x00(0x10)
	struct TArray<struct F*dd9a85ca78> *49ecfbb7e7; // 0x10(0x10)
};

// ScriptStruct TslGame.*dd9a85ca78
// Size: 0x10 (Inherited: 0x00)
struct F*dd9a85ca78 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UEquipableItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*d4985c4f16
// Size: 0x14 (Inherited: 0x00)
struct F*d4985c4f16 {
	bool *c278c0e607; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *1304e0539f; // 0x04(0x04)
	float *fe54b5f055; // 0x08(0x04)
	int32 *b35ddb39ff; // 0x0c(0x04)
	int32 MaxCount; // 0x10(0x04)
};

// ScriptStruct TslGame.*01abbb2c54
// Size: 0x3c (Inherited: 0x00)
struct F*01abbb2c54 {
	float *fd958dd233; // 0x00(0x04)
	float *776100f06f; // 0x04(0x04)
	float *c76717da0e; // 0x08(0x04)
	float *86ec702889; // 0x0c(0x04)
	float *098f1a0c20; // 0x10(0x04)
	float *e9aeec478a; // 0x14(0x04)
	float *1cadf9b571; // 0x18(0x04)
	struct F*f4f6005d82 *d9fb1285d5; // 0x1c(0x1c)
	float *11048d90d2; // 0x38(0x04)
};

// ScriptStruct TslGame.*f4f6005d82
// Size: 0x1c (Inherited: 0x00)
struct F*f4f6005d82 {
	struct FVector *28fcaf01b6; // 0x00(0x0c)
	float *3299e44957; // 0x0c(0x04)
	float *e31a2819fa; // 0x10(0x04)
	float *2ffb44520f; // 0x14(0x04)
	float *03ebe20ca5; // 0x18(0x04)
};

// ScriptStruct TslGame.*1140e3c531
// Size: 0x18 (Inherited: 0x00)
struct F*1140e3c531 {
	struct TArray<struct ATslRedeployRespawnPoint*> *d51641383e; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*02838b41da
// Size: 0x08 (Inherited: 0x00)
struct F*02838b41da {
	struct ATslPlayerState* *fea85644ce; // 0x00(0x08)
};

// ScriptStruct TslGame.*7ab4a1d759
// Size: 0x20 (Inherited: 0x00)
struct F*7ab4a1d759 {
	struct TArray<struct ACaptureAreaActor*> *ab3d413852; // 0x00(0x10)
	struct TArray<float> *7b7017734b; // 0x10(0x10)
};

// ScriptStruct TslGame.*2517deb8d5
// Size: 0x68 (Inherited: 0x00)
struct F*2517deb8d5 {
	struct F*82ee1dd20b Config; // 0x00(0x30)
	struct UClass* WidgetClass; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct UUserWidget* Widget; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
};

// ScriptStruct TslGame.*7b4fa2b5c3
// Size: 0x38 (Inherited: 0x00)
struct F*7b4fa2b5c3 {
	int32 CellSize; // 0x00(0x04)
	int32 *f0d294b63b; // 0x04(0x04)
	int32 *0c609d1121; // 0x08(0x04)
	int32 *e2ae28a8c8; // 0x0c(0x04)
	int32 *af8e339bd4; // 0x10(0x04)
	int32 *dfbe297f3a; // 0x14(0x04)
	float *609a37207c; // 0x18(0x04)
	int32 *87d0c9629a; // 0x1c(0x04)
	float *b0b2c9a10b; // 0x20(0x04)
	float *2f8b8cc72a; // 0x24(0x04)
	float *690904910e; // 0x28(0x04)
	float *bb833d3469; // 0x2c(0x04)
	float *57bbafbb7a; // 0x30(0x04)
	float *3d9cb8d5b0; // 0x34(0x04)
};

// ScriptStruct TslGame.*424a843547
// Size: 0x24 (Inherited: 0x00)
struct F*424a843547 {
	float Stand[0x03]; // 0x00(0x0c)
	float Crouch[0x03]; // 0x0c(0x0c)
	float Prone[0x03]; // 0x18(0x0c)
};

// ScriptStruct TslGame.*48dce72a32
// Size: 0x34 (Inherited: 0x00)
struct F*48dce72a32 {
	struct FVector AirplaneStartLoc; // 0x00(0x0c)
	struct FVector AirplaneStopLoc; // 0x0c(0x0c)
	struct FVector AirplaneCanJumpLoc; // 0x18(0x0c)
	struct FVector AirplaneForceJumpLoc; // 0x24(0x0c)
	float PlaneSpeed; // 0x30(0x04)
};

// ScriptStruct TslGame.*3a008434e0
// Size: 0x10 (Inherited: 0x00)
struct F*3a008434e0 {
	struct FName Tag; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*981756ad07
// Size: 0x18 (Inherited: 0x00)
struct F*981756ad07 {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*3a008434e0> DataList; // 0x08(0x10)
};

// ScriptStruct TslGame.*2965a6c628
// Size: 0x20 (Inherited: 0x00)
struct F*2965a6c628 {
	struct FName *37ddc581e7; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	int32 *a91929da08; // 0x14(0x04)
	int32 *bbc5d49f26; // 0x18(0x04)
	int32 *c1f93cdfb5; // 0x1c(0x04)
};

// ScriptStruct TslGame.AkVariant
// Size: 0x0c (Inherited: 0x00)
struct FAkVariant {
	float *da874634ed; // 0x00(0x04)
	float *188f64db79; // 0x04(0x04)
	bool *eb080f17b9; // 0x08(0x01)
	bool *48841d427a; // 0x09(0x01)
	bool *b589da66c8; // 0x0a(0x01)
	bool *075f0912f7; // 0x0b(0x01)
};

// ScriptStruct TslGame.*25990f0dfd
// Size: 0x18 (Inherited: 0x00)
struct F*25990f0dfd {
	struct FString EventName; // 0x00(0x10)
	struct UAkAudioEvent* AkAudioEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*b37252f55c
// Size: 0xa0 (Inherited: 0x98)
struct F*b37252f55c : F*63b5569083 {
	struct UBlendSpace* BlendSpaceStop; // 0x98(0x08)
};

// ScriptStruct TslGame.*63b5569083
// Size: 0x98 (Inherited: 0x00)
struct F*63b5569083 {
	struct UAnimSequence* BasePose; // 0x00(0x08)
	struct F*95c902bd31 IdleAnimations; // 0x08(0x10)
	struct UBlendSpace* BlendSpaceAimOffset; // 0x18(0x08)
	struct F*f9c12fcedb TurningInPlace; // 0x20(0x20)
	struct UBlendSpace* BlendSpaceLocomotion; // 0x40(0x08)
	struct UBlendSpace* BlendSpaceStart; // 0x48(0x08)
	struct F*6db06e92bf AnimSpeed_Walk; // 0x50(0x20)
	struct F*6db06e92bf AnimSpeed_Run; // 0x70(0x20)
	float AnimSpeed_Sprint; // 0x90(0x04)
	float AimOffsetBlendTime; // 0x94(0x04)
};

// ScriptStruct TslGame.*6db06e92bf
// Size: 0x20 (Inherited: 0x00)
struct F*6db06e92bf {
	float F; // 0x00(0x04)
	float L; // 0x04(0x04)
	float R; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float FL; // 0x10(0x04)
	float FR; // 0x14(0x04)
	float BL; // 0x18(0x04)
	float BR; // 0x1c(0x04)
};

// ScriptStruct TslGame.*f9c12fcedb
// Size: 0x20 (Inherited: 0x00)
struct F*f9c12fcedb {
	struct UAnimSequence* Left90; // 0x00(0x08)
	struct UAnimSequence* Left180; // 0x08(0x08)
	struct UAnimSequence* Right90; // 0x10(0x08)
	struct UAnimSequence* Right180; // 0x18(0x08)
};

// ScriptStruct TslGame.*cfbb9476ec
// Size: 0xa8 (Inherited: 0x98)
struct F*cfbb9476ec : F*63b5569083 {
	struct UBlendSpace* BlendSpaceStopLeft; // 0x98(0x08)
	struct UBlendSpace* BlendSpaceStopRight; // 0xa0(0x08)
};

// ScriptStruct TslGame.*3eb5c83574
// Size: 0xf0 (Inherited: 0x98)
struct F*3eb5c83574 : F*63b5569083 {
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
	struct F*95c902bd31 IdleAnimations; // 0x10(0x10)
	struct F*95c902bd31 IdleAnimationsCold; // 0x20(0x10)
	struct F*f9c12fcedb TurningInPlace; // 0x30(0x20)
	struct UBlendSpace* LocomotionBlendspace; // 0x50(0x08)
	struct UBlendSpace* LocomotionBlendspaceFPP; // 0x58(0x08)
	struct UBlendSpace* LocomotionStartBlendspace; // 0x60(0x08)
	struct UBlendSpace* LocomotionStopBlendspace; // 0x68(0x08)
	struct F*6db06e92bf AnimSpeed_Walk; // 0x70(0x20)
	struct F*6db06e92bf AnimSpeed_Run; // 0x90(0x20)
	float AnimSpeed_Sprint; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.*932690f21c
// Size: 0x40 (Inherited: 0x00)
struct F*932690f21c {
	struct F*895ee77437 StandTPP; // 0x00(0x10)
	struct F*895ee77437 StandFPP; // 0x10(0x10)
	struct F*895ee77437 ProneTPP; // 0x20(0x10)
	struct F*895ee77437 ProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*895ee77437
// Size: 0x10 (Inherited: 0x00)
struct F*895ee77437 {
	struct UAnimSequence* Default; // 0x00(0x08)
	struct UAnimSequence* ParentControl; // 0x08(0x08)
};

// ScriptStruct TslGame.*6f602a0311
// Size: 0x0c (Inherited: 0x00)
struct F*6f602a0311 {
	float Walk; // 0x00(0x04)
	float Run; // 0x04(0x04)
	float Sprint; // 0x08(0x04)
};

// ScriptStruct TslGame.*53b9d4e016
// Size: 0x38 (Inherited: 0x00)
struct F*53b9d4e016 {
	enum class ERaycastDirection Direction; // 0x00(0x01)
	bool bUseCustomDirection; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector *55ed467e5b; // 0x04(0x0c)
	struct FName *d5bf2aedb0; // 0x10(0x08)
	float *8d6e5f6f82; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct U*acccf5c11c* *d4656e3f40; // 0x20(0x08)
	struct F*883f0595dc *4d2beeba90; // 0x28(0x10)
};

// ScriptStruct TslGame.*883f0595dc
// Size: 0x10 (Inherited: 0x00)
struct F*883f0595dc {
	struct FVector Offset; // 0x00(0x0c)
	bool *11cf1c69b6; // 0x0c(0x01)
	bool *767b657202; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*ccb35eb707
// Size: 0x1c (Inherited: 0x00)
struct F*ccb35eb707 {
	struct FVector InitialActorOffset; // 0x00(0x0c)
	struct FVector TraceVector; // 0x0c(0x0c)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct TslGame.*bf281eccdb
// Size: 0xb0 (Inherited: 0x08)
struct F*bf281eccdb : FTableRowBase {
	int32 EmoteID; // 0x08(0x04)
	enum class EEmotePlayType PlayType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText EmoteLocalizedName; // 0x10(0x18)
	struct UTexture2D* UITexture; // 0x28(0x08)
	struct UMaterialInterface* UIMaterial; // 0x30(0x08)
	struct UAnimMontage* AnimMogtage_SoftRef; // 0x38(0x20)
	enum class *7e3c44e045 AnimType; // 0x58(0x01)
	bool bIsBGM_Sound; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32 EmoteIDforOtherTeammate; // 0x5c(0x04)
	struct F*a6c39bf8d3 EmoteIDsForTeammate; // 0x60(0x10)
	bool bRandomTeammateID; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32 TeammateAllowedNumber; // 0x74(0x04)
	struct FName StartInteractSectionName; // 0x78(0x08)
	bool bRandomPlayInteractScetion; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float FollowRestricDistance; // 0x84(0x04)
	struct U*057da63efc* TraceDataRef; // 0x88(0x08)
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

// ScriptStruct TslGame.*a6c39bf8d3
// Size: 0x10 (Inherited: 0x00)
struct F*a6c39bf8d3 {
	struct TArray<int32> EmoteIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*7894219696
// Size: 0x28 (Inherited: 0x00)
struct F*7894219696 {
	struct UAnimMontage* *2d618d4d14; // 0x00(0x20)
	struct UAnimMontage* AnimMontage; // 0x20(0x08)
};

// ScriptStruct TslGame.*88f4d3c4a1
// Size: 0x10 (Inherited: 0x00)
struct F*88f4d3c4a1 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*586a6f725e
// Size: 0x10 (Inherited: 0x00)
struct F*586a6f725e {
	struct FVector2D *bf2fae391b; // 0x00(0x08)
	struct ATslSpecialZoneActor* *b1b6c2f353; // 0x08(0x08)
};

// ScriptStruct TslGame.*5fd598d789
// Size: 0x14 (Inherited: 0x00)
struct F*5fd598d789 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x13]; // 0x01(0x13)
};

// ScriptStruct TslGame.*39ef92fc63
// Size: 0x0c (Inherited: 0x00)
struct F*39ef92fc63 {
	int32 *9a711d019f; // 0x00(0x04)
	int32 *cbdb4e1ce4; // 0x04(0x04)
	int32 *c5a3e1b984; // 0x08(0x04)
};

// ScriptStruct TslGame.*6a2fd117db
// Size: 0x10 (Inherited: 0x00)
struct F*6a2fd117db {
	float *c8ffe83c67; // 0x00(0x04)
	float *46d8f4c9c9; // 0x04(0x04)
	float *ec06a35040; // 0x08(0x04)
	int32 *7b95799de3; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b6a1652290
// Size: 0x160 (Inherited: 0x00)
struct F*b6a1652290 {
	float *ac86f86e14; // 0x00(0x04)
	float *97e5059f9d; // 0x04(0x04)
	float *11022d9eb2; // 0x08(0x04)
	float *7bf617f835; // 0x0c(0x04)
	float *9491f77d20; // 0x10(0x04)
	int32 *d1e7b46e7f; // 0x14(0x04)
	int32 *e3a91469ec; // 0x18(0x04)
	int32 *f8cb731eec; // 0x1c(0x04)
	struct TMap<struct FString, struct F*8f4b67a257> *87ab4b6bb1; // 0x20(0x50)
	struct TMap<struct FString, struct F*8f4b67a257> *88d7f47b30; // 0x70(0x50)
	struct TMap<struct FString, int32> *1b949def38; // 0xc0(0x50)
	struct TMap<enum class EMovementBaseType, float> *f11d4f026c; // 0x110(0x50)
};

// ScriptStruct TslGame.*8f4b67a257
// Size: 0x58 (Inherited: 0x00)
struct F*8f4b67a257 {
	int32 Shots; // 0x00(0x04)
	float *46a770044a; // 0x04(0x04)
	struct TMap<enum class EDamageReason, struct F*01323a8651> *05fa052894; // 0x08(0x50)
};

// ScriptStruct TslGame.*01323a8651
// Size: 0x18 (Inherited: 0x00)
struct F*01323a8651 {
	int32 Hits; // 0x00(0x04)
	int32 *c94f239d20; // 0x04(0x04)
	float *e97c8de707; // 0x08(0x04)
	float *b085ab02ba; // 0x0c(0x04)
	int32 Kills; // 0x10(0x04)
	int32 *2eac2cdc4c; // 0x14(0x04)
};

// ScriptStruct TslGame.*e78ad8c75d
// Size: 0x18 (Inherited: 0x00)
struct F*e78ad8c75d {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*ec85d2d510
// Size: 0x08 (Inherited: 0x00)
struct F*ec85d2d510 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*c8778f0837
// Size: 0x0c (Inherited: 0x00)
struct F*c8778f0837 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*e8303e7c4a
// Size: 0x10 (Inherited: 0x00)
struct F*e8303e7c4a {
	struct UClass* *6bf6c722af; // 0x00(0x08)
	float *d812ec7a42; // 0x08(0x04)
	bool *e326e5788f; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*1840dfc962
// Size: 0xd0 (Inherited: 0x00)
struct F*1840dfc962 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* *6ad61b7b36; // 0x10(0x08)
	struct UClass* *6db420d2aa; // 0x18(0x08)
	struct UClass* *49ea03b165; // 0x20(0x08)
	struct UClass* *f436d9fc36; // 0x28(0x08)
	struct UClass* *ec716d8210; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct F*8a0118a2c1 *d732ba2d86; // 0x48(0x08)
	struct FVector *1e6d7a8875; // 0x50(0x0c)
	struct FVector *673562a0b1; // 0x5c(0x0c)
	struct FVector *dc72aad5e3; // 0x68(0x0c)
	struct FVector *18d2a38ee9; // 0x74(0x0c)
	struct FVector *c3f9b1a963; // 0x80(0x0c)
	struct FVector *a602b4da8a; // 0x8c(0x0c)
	struct F*8a0118a2c1 *c588bd6859; // 0x98(0x08)
	float *47a433ba0c; // 0xa0(0x04)
	char pad_A4[0x2c]; // 0xa4(0x2c)
};

// ScriptStruct TslGame.*8a0118a2c1
// Size: 0x08 (Inherited: 0x00)
struct F*8a0118a2c1 {
	float *d334b27ca2; // 0x00(0x04)
	float *c21c01c8dd; // 0x04(0x04)
};

// ScriptStruct TslGame.*571c557b57
// Size: 0x78 (Inherited: 0x00)
struct F*571c557b57 {
	struct FString ServerURL; // 0x00(0x10)
	struct FString Domain; // 0x10(0x10)
	struct FString Issuer; // 0x20(0x10)
	bool *642c837bb6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString GVoiceServerUrl; // 0x38(0x10)
	struct FString GVoiceAppKey; // 0x48(0x10)
	struct FString GVoiceAppId; // 0x58(0x10)
	int32 GVoiceProximalMaxRange; // 0x68(0x04)
	int32 GVoiceDistNear; // 0x6c(0x04)
	int32 GVoiceDistFar; // 0x70(0x04)
	float GVoiceVolPercentage; // 0x74(0x04)
};

// ScriptStruct TslGame.*3f997e2928
// Size: 0x18 (Inherited: 0x00)
struct F*3f997e2928 {
	struct UAnimMontage* *967df854b9; // 0x00(0x08)
	struct UAnimMontage* *7aad283aa3; // 0x08(0x08)
	struct UAnimMontage* Pickup; // 0x10(0x08)
};

// ScriptStruct TslGame.*824f8a65a1
// Size: 0x10 (Inherited: 0x00)
struct F*824f8a65a1 {
	struct UAnimMontage* RollLeft; // 0x00(0x08)
	struct UAnimMontage* RollRight; // 0x08(0x08)
};

// ScriptStruct TslGame.*bf37a5acec
// Size: 0x10 (Inherited: 0x00)
struct F*bf37a5acec {
	struct UAnimMontage* *446001c100; // 0x00(0x08)
	struct UAnimMontage* *67537d3583; // 0x08(0x08)
};

// ScriptStruct TslGame.*a4d1f576dd
// Size: 0x2b0 (Inherited: 0x00)
struct F*a4d1f576dd {
	float TargetingFOV; // 0x00(0x04)
	float *1f45ca973a; // 0x04(0x04)
	struct TMap<enum class EScopeType, struct FVector2D> *5dccacc770; // 0x08(0x50)
	struct FName *1a3525005b; // 0x58(0x08)
	struct FVector *1eba164df7; // 0x60(0x0c)
	struct FRotator *59873a11ed; // 0x6c(0x0c)
	struct FVector *38dae712e7; // 0x78(0x0c)
	struct FRotator *e4e555e070; // 0x84(0x0c)
	bool *3afa70ebf1; // 0x90(0x01)
	bool *8771d0008f; // 0x91(0x01)
	bool *316647a490; // 0x92(0x01)
	enum class *7db39c4871 *131edffec6; // 0x93(0x01)
	enum class EWeaponClass *fa592782bc; // 0x94(0x01)
	enum class EAnimWeaponSpecificClass *414b84c811; // 0x95(0x01)
	enum class EWeaponClass *3cbb87e586; // 0x96(0x01)
	bool *a1ff3c2fd9; // 0x97(0x01)
	bool *b3cd2554ce; // 0x98(0x01)
	bool *b155907419; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float *4e1b9a393d; // 0x9c(0x04)
	float *a47d03c647; // 0xa0(0x04)
	float *98ffbb95f7; // 0xa4(0x04)
	float *618fc26622; // 0xa8(0x04)
	float *7bf434693c; // 0xac(0x04)
	float *885fa54a0f; // 0xb0(0x04)
	float *966814ef09; // 0xb4(0x04)
	float *f844382796; // 0xb8(0x04)
	bool *524c6a9bb8; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct TArray<float> *29a240b046; // 0xc0(0x10)
	float *1466d827d2; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UAnimMontage* *c8323e1866; // 0xd8(0x08)
	bool DestructibleDoor; // 0xe0(0x01)
	enum class EThrownWeaponType *fde8aee943; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct TMap<enum class ECustomGripBlendSpaceType, struct F*a23d8b2880> *7c75170453; // 0xe8(0x50)
	float *c3d28a74e0; // 0x138(0x04)
	float *fcec8efb8a; // 0x13c(0x04)
	float *041f9873c8; // 0x140(0x04)
	float *74c1983779; // 0x144(0x04)
	float *9537565180; // 0x148(0x04)
	bool *cee5ef9440; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	float *e102d8b3ca; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FName *2ac803d826; // 0x158(0x08)
	SetProperty *4c101e0196; // 0x160(0x50)
	float *6fe9e65321; // 0x1b0(0x04)
	float *e5fafc1d4a; // 0x1b4(0x04)
	float *b61873528e; // 0x1b8(0x04)
	bool *ebd8a4f100; // 0x1bc(0x01)
	bool *67d627b7d0; // 0x1bd(0x01)
	bool *1034a897ee; // 0x1be(0x01)
	bool *bee5e29c41; // 0x1bf(0x01)
	bool *70af08b9bd; // 0x1c0(0x01)
	bool *991adcb73e; // 0x1c1(0x01)
	bool *9bd7691bc6; // 0x1c2(0x01)
	bool *466e889ce9; // 0x1c3(0x01)
	float *6887411d4e; // 0x1c4(0x04)
	struct UStaticMesh* *658a0c0ac4; // 0x1c8(0x08)
	struct UAkAudioEvent* *513004b5ca; // 0x1d0(0x08)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FTransform *ef974755a7; // 0x1e0(0x30)
	struct FTransform *becad96ccf; // 0x210(0x30)
	struct FTransform *65d16c2667; // 0x240(0x30)
	struct FTransform *cec848b0eb; // 0x270(0x30)
	bool *5ae8a95beb; // 0x2a0(0x01)
	char pad_2A1[0xf]; // 0x2a1(0x0f)
};

// ScriptStruct TslGame.*a5bca0f030
// Size: 0xc0 (Inherited: 0x28)
struct F*a5bca0f030 : F*fd2708e897 {
	struct UObject* CharmAsset; // 0x28(0x20)
	struct UStaticMesh* CharmAssetStatic; // 0x48(0x20)
	struct UClass* CharmAnimBlueprint; // 0x68(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> MaterialOverrides; // 0x70(0x50)
};

// ScriptStruct TslGame.*fd2708e897
// Size: 0x28 (Inherited: 0x08)
struct F*fd2708e897 : FTableRowBase {
	struct FText MasteryItemName; // 0x08(0x18)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*b63a766ace
// Size: 0x04 (Inherited: 0x00)
struct F*b63a766ace {
	uint16 *6c438a4ae1; // 0x00(0x02)
	uint16 *f64740571e; // 0x02(0x02)
};

// ScriptStruct TslGame.*cc544727c4
// Size: 0xa0 (Inherited: 0x00)
struct F*cc544727c4 {
	struct TMap<struct FName, struct UItem*> *49467224cf; // 0x00(0x50)
	struct TMap<int32, struct UItem*> *14656371d7; // 0x50(0x50)
};

// ScriptStruct TslGame.*2b618139e4
// Size: 0x190 (Inherited: 0x00)
struct F*2b618139e4 {
	struct FStringAssetReference *82d2ddbc13; // 0x00(0x10)
	struct FStringAssetReference *6b3caac714; // 0x10(0x10)
	struct FStringAssetReference *c24d7650c1; // 0x20(0x10)
	struct FStringAssetReference *709a854347; // 0x30(0x10)
	struct FStringAssetReference *87579e1c79; // 0x40(0x10)
	struct FStringAssetReference *163584c6eb; // 0x50(0x10)
	struct FStringAssetReference *499fc362a5; // 0x60(0x10)
	struct FStringAssetReference *f774dddf47; // 0x70(0x10)
	struct FStringAssetReference *b145d782bf; // 0x80(0x10)
	struct FStringAssetReference *b9c34ffef5; // 0x90(0x10)
	struct FStringAssetReference *60ace6e748; // 0xa0(0x10)
	struct FStringAssetReference *2f972a58e2; // 0xb0(0x10)
	struct FStringAssetReference *96928c29f4; // 0xc0(0x10)
	struct FStringAssetReference *f6e5cd2d26; // 0xd0(0x10)
	struct FStringAssetReference *1448b63daf; // 0xe0(0x10)
	struct FStringAssetReference *6bd84bdbd0; // 0xf0(0x10)
	struct FStringAssetReference *8fbbdc26a8; // 0x100(0x10)
	struct UDataTable* *b7dd9b475a; // 0x110(0x20)
	struct FStringAssetReference *1630e24fe5; // 0x130(0x10)
	struct FStringAssetReference *1306478c53; // 0x140(0x10)
	struct FStringAssetReference *c93288a30f; // 0x150(0x10)
	struct FStringAssetReference *a907e068df; // 0x160(0x10)
	struct FStringAssetReference *388f0dbb3b; // 0x170(0x10)
	struct FStringAssetReference MarketSalesItemTable; // 0x180(0x10)
};

// ScriptStruct TslGame.WeaponSoundConfig
// Size: 0xb0 (Inherited: 0x00)
struct FWeaponSoundConfig {
	struct UAkAudioEvent* *4c5f10a8e7; // 0x00(0x08)
	struct UAkAudioEvent* *ba19e52aa8; // 0x08(0x08)
	struct FVector2D *caa84dae46; // 0x10(0x08)
	struct UAkAudioEvent* *9d8c9bdc43; // 0x18(0x08)
	struct UAkAudioEvent* *cae64bb74c; // 0x20(0x08)
	struct UAkAudioEvent* *5f23cf0a9d; // 0x28(0x08)
	struct UAkAudioEvent* *fa4b33992c; // 0x30(0x08)
	struct UAkAudioEvent* *e0b48bde27; // 0x38(0x08)
	struct UAkAudioEvent* *e96eccb19d; // 0x40(0x08)
	struct UAkAudioEvent* *7993cc2878; // 0x48(0x08)
	struct UAkAudioEvent* *17cc515d84; // 0x50(0x08)
	struct UAkAudioEvent* EquipSoundAk_Primary; // 0x58(0x08)
	struct UAkAudioEvent* *4d9658da56; // 0x60(0x08)
	struct UAkAudioEvent* *c29353cef9; // 0x68(0x08)
	struct UAkAudioEvent* *77b108edfd; // 0x70(0x08)
	struct UAkAudioEvent* *79d454a027; // 0x78(0x08)
	struct UAkAudioEvent* *88673ae1c3; // 0x80(0x08)
	struct UAkAudioEvent* *15fa9e6f13; // 0x88(0x08)
	char *e5075cdab4 : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UAkAudioEvent* DropAllAttachmentsSoundAk; // 0x98(0x08)
	struct UAkAudioEvent* InventoryPutAllAttachmentsSoundAk; // 0xa0(0x08)
	struct UAkAudioEvent* DropAndInventoryPutAttachmentsSoundAk; // 0xa8(0x08)
};

// ScriptStruct TslGame.*62ab33a699
// Size: 0x18 (Inherited: 0x00)
struct F*62ab33a699 {
	struct FName WeaponMasteryCharmSocket; // 0x00(0x08)
	struct FName WeaponMasteryCharmAttachSocket; // 0x08(0x08)
	int32 CharmWeaponLODVisibility; // 0x10(0x04)
	int32 VariantWeaponLODVisibility; // 0x14(0x04)
};

// ScriptStruct TslGame.*d1a720c960
// Size: 0x10 (Inherited: 0x00)
struct F*d1a720c960 {
	enum class EWeaponAttachmentSlotID *302d2955be; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*a85cf8af25
// Size: 0x08 (Inherited: 0x00)
struct F*a85cf8af25 {
	struct UAnimMontage* *ee823cd100; // 0x00(0x08)
};

// ScriptStruct TslGame.*76770e8ff8
// Size: 0x20 (Inherited: 0x00)
struct F*76770e8ff8 {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName *9213765764; // 0x10(0x08)
	bool *136e8326cd; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*f741935488
// Size: 0x18 (Inherited: 0x00)
struct F*f741935488 {
	struct FName ActionName; // 0x00(0x08)
	struct FName *9213765764; // 0x08(0x08)
	bool *136e8326cd; // 0x10(0x01)
	enum class *b1be654dc6 *0c877d93bf; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*54c30817ee
// Size: 0x20 (Inherited: 0x18)
struct F*54c30817ee : F*8dd867e326 {
	struct UWidget* *4f6aab7d55; // 0x18(0x08)
};

// ScriptStruct TslGame.*8dd867e326
// Size: 0x18 (Inherited: 0x00)
struct F*8dd867e326 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct UUserWidget* Parent; // 0x10(0x08)
};

// ScriptStruct TslGame.*3090220c3c
// Size: 0x20 (Inherited: 0x18)
struct F*3090220c3c : F*8dd867e326 {
	struct USpacer* *4b31c1f13d; // 0x18(0x08)
};

// ScriptStruct TslGame.*a2a8693a5f
// Size: 0x20 (Inherited: 0x18)
struct F*a2a8693a5f : F*8dd867e326 {
	struct U*9c8bfa0aee* *1cac1d852b; // 0x18(0x08)
};

// ScriptStruct TslGame.*5bb462ebf5
// Size: 0x18 (Inherited: 0x00)
struct F*5bb462ebf5 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*0f9034f27a
// Size: 0x20 (Inherited: 0x18)
struct F*0f9034f27a : F*8dd867e326 {
	struct UWebBrowser* *5dc731a421; // 0x18(0x08)
};

// ScriptStruct TslGame.*45518ccbeb
// Size: 0x20 (Inherited: 0x18)
struct F*45518ccbeb : F*8dd867e326 {
	struct UUserWidget* *4f6aab7d55; // 0x18(0x08)
};

// ScriptStruct TslGame.*32077c819e
// Size: 0x28 (Inherited: 0x20)
struct F*32077c819e : F*13fd1d29ec {
	struct UScrollBox* *8cfed3b9b2; // 0x20(0x08)
};

// ScriptStruct TslGame.*13fd1d29ec
// Size: 0x20 (Inherited: 0x18)
struct F*13fd1d29ec : F*8dd867e326 {
	struct U*d519ef66f2* *f2091254fc; // 0x18(0x08)
};

// ScriptStruct TslGame.*7691cca8dc
// Size: 0x28 (Inherited: 0x20)
struct F*7691cca8dc : F*13fd1d29ec {
	struct UScaleBox* *bfd867500d; // 0x20(0x08)
};

// ScriptStruct TslGame.*0d9cd423a7
// Size: 0x28 (Inherited: 0x20)
struct F*0d9cd423a7 : F*13fd1d29ec {
	struct UInvalidationBox* *f789081e93; // 0x20(0x08)
};

// ScriptStruct TslGame.*0c7fbadc86
// Size: 0x28 (Inherited: 0x20)
struct F*0c7fbadc86 : F*13fd1d29ec {
	struct URetainerBox* *1439a2cdd9; // 0x20(0x08)
};

// ScriptStruct TslGame.*78acf214e2
// Size: 0x28 (Inherited: 0x20)
struct F*78acf214e2 : F*13fd1d29ec {
	struct UWrapBox* *d22febfabf; // 0x20(0x08)
};

// ScriptStruct TslGame.*3cdda95245
// Size: 0x28 (Inherited: 0x20)
struct F*3cdda95245 : F*13fd1d29ec {
	struct USizeBox* *10493b6371; // 0x20(0x08)
};

// ScriptStruct TslGame.*a8249d5e73
// Size: 0x30 (Inherited: 0x20)
struct F*a8249d5e73 : F*13fd1d29ec {
	struct UBorder* *6b166a5fb7; // 0x20(0x08)
	struct UMaterialInstanceDynamic* *ee47930b8d; // 0x28(0x08)
};

// ScriptStruct TslGame.*0d9fc1994c
// Size: 0x20 (Inherited: 0x18)
struct F*0d9fc1994c : F*8dd867e326 {
	struct UEditableText* *2ecf259e72; // 0x18(0x08)
};

// ScriptStruct TslGame.*62d95f3263
// Size: 0x20 (Inherited: 0x18)
struct F*62d95f3263 : F*8dd867e326 {
	struct UTextBlock* *9b0b3919e3; // 0x18(0x08)
};

// ScriptStruct TslGame.*7b33ced057
// Size: 0x28 (Inherited: 0x20)
struct F*7b33ced057 : F*13fd1d29ec {
	struct UWidgetSwitcher* *b5397c4a5f; // 0x20(0x08)
};

// ScriptStruct TslGame.*0c033c3537
// Size: 0x28 (Inherited: 0x20)
struct F*0c033c3537 : F*13fd1d29ec {
	struct UHorizontalBox* *1ee75cec32; // 0x20(0x08)
};

// ScriptStruct TslGame.*c0b2c1bc8a
// Size: 0x28 (Inherited: 0x20)
struct F*c0b2c1bc8a : F*13fd1d29ec {
	struct UVerticalBox* *e5a5e07433; // 0x20(0x08)
};

// ScriptStruct TslGame.*cfff343e46
// Size: 0x28 (Inherited: 0x20)
struct F*cfff343e46 : F*13fd1d29ec {
	struct UOverlay* *694b3da6f7; // 0x20(0x08)
};

// ScriptStruct TslGame.*a159aaccd9
// Size: 0x28 (Inherited: 0x20)
struct F*a159aaccd9 : F*13fd1d29ec {
	struct UCanvasPanel* *53e1a4b17f; // 0x20(0x08)
};

// ScriptStruct TslGame.*aecf96cb1e
// Size: 0x28 (Inherited: 0x18)
struct F*aecf96cb1e : F*8dd867e326 {
	struct UImage* *44a8f5c2e6; // 0x18(0x08)
	struct UMaterialInstanceDynamic* *ee47930b8d; // 0x20(0x08)
};

// ScriptStruct TslGame.*cdd389d19f
// Size: 0x60 (Inherited: 0x00)
struct F*cdd389d19f {
	struct F*62d95f3263 *25eda07b23; // 0x00(0x20)
	struct F*62d95f3263 *ddc8521e5d; // 0x20(0x20)
	char pad_40[0x20]; // 0x40(0x20)
};

// ScriptStruct TslGame.*7ad1a7f11f
// Size: 0x40 (Inherited: 0x00)
struct F*7ad1a7f11f {
	struct F*62d95f3263 *25eda07b23; // 0x00(0x20)
	enum class *11756e38de *cf4648c05f; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *2eee790d98; // 0x24(0x04)
	bool *fdcca84634; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString *40354e8299; // 0x30(0x10)
};

// ScriptStruct TslGame.*b72ae2f713
// Size: 0x30 (Inherited: 0x00)
struct F*b72ae2f713 {
	struct FText *db823c1647; // 0x00(0x18)
	struct FText *ede948edb1; // 0x18(0x18)
};

// ScriptStruct TslGame.*b3634e4f75
// Size: 0x18 (Inherited: 0x00)
struct F*b3634e4f75 {
	enum class ESandboxGroypType *3a8a381cf2; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*c68dd1b258> Categories; // 0x08(0x10)
};

// ScriptStruct TslGame.*c68dd1b258
// Size: 0x18 (Inherited: 0x00)
struct F*c68dd1b258 {
	int32 *b861301c8f; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*ba817dde2c> Items; // 0x08(0x10)
};

// ScriptStruct TslGame.*ba817dde2c
// Size: 0x08 (Inherited: 0x00)
struct F*ba817dde2c {
	int32 *f2b252fb59; // 0x00(0x04)
	int32 *5707259786; // 0x04(0x04)
};

// ScriptStruct TslGame.*f7f3871fd5
// Size: 0x10 (Inherited: 0x00)
struct F*f7f3871fd5 {
	enum class ESandboxPowerType Type; // 0x00(0x04)
	bool *9351ce6637; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UParticleSystemComponent* *533c4b6078; // 0x08(0x08)
};

// ScriptStruct TslGame.SandboxItemDataTable
// Size: 0x68 (Inherited: 0x10)
struct FSandboxItemDataTable : FBaseSandboxItemDataTable {
	struct FName CategoryName; // 0x10(0x08)
	struct FStringClassReference *e363ea849b; // 0x18(0x10)
	struct FName ItemID; // 0x28(0x08)
	struct FString *5dc0f391ff; // 0x30(0x10)
	struct FString *75942270b3; // 0x40(0x10)
	struct FString *0f79a38664; // 0x50(0x10)
	int32 Index; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.BaseSandboxItemDataTable
// Size: 0x10 (Inherited: 0x08)
struct FBaseSandboxItemDataTable : FTableRowBase {
	struct FName *259f98cb5c; // 0x08(0x08)
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

// ScriptStruct TslGame.*cd42a5e9b3
// Size: 0x78 (Inherited: 0x10)
struct F*cd42a5e9b3 : FBaseSandboxItemDataTable {
	struct FName ItemName; // 0x10(0x08)
	struct FText *a22d303c6b; // 0x18(0x18)
	struct FText DescriptionText; // 0x30(0x18)
	bool *f259ff17d2; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D SliderRange; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*b72ae2f713> *15bf9e2838; // 0x58(0x10)
	struct UClass* ItemWidgetClass; // 0x68(0x08)
	struct UClass* *0957045003; // 0x70(0x08)
};

// ScriptStruct TslGame.*b50eae5cf1
// Size: 0x38 (Inherited: 0x00)
struct F*b50eae5cf1 {
	char pad_0[0x20]; // 0x00(0x20)
	enum class EStanceMode *d1d9248b61; // 0x20(0x01)
	char pad_21[0x17]; // 0x21(0x17)
};

// ScriptStruct TslGame.*6b279dc598
// Size: 0x18 (Inherited: 0x00)
struct F*6b279dc598 {
	struct UCurveFloat* *e6b0400e10; // 0x00(0x08)
	float *e24ba43deb; // 0x08(0x04)
	float MaxSpeed; // 0x0c(0x04)
	float *3b677c6fd9; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*2e825b38de
// Size: 0x18 (Inherited: 0x00)
struct F*2e825b38de {
	bool *cf98e8a644; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *c32b31e26a; // 0x04(0x04)
	bool *6a09ac9e10; // 0x08(0x01)
	bool bUseAbsoluteAutoDeployAltitude; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float AutoDeployAltitude; // 0x0c(0x04)
	float StartDeployAltitude; // 0x10(0x04)
	float *7150955d0c; // 0x14(0x04)
};

// ScriptStruct TslGame.*ffedccfa6e
// Size: 0x10 (Inherited: 0x00)
struct F*ffedccfa6e {
	float *d358bbebf4; // 0x00(0x04)
	float *887c87a6fa; // 0x04(0x04)
	float *509def3854; // 0x08(0x04)
	float *a099e0a3e2; // 0x0c(0x04)
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

// ScriptStruct TslGame.*19fae7bfef
// Size: 0x2c (Inherited: 0x00)
struct F*19fae7bfef {
	float Height; // 0x00(0x04)
	float *d358bbebf4; // 0x04(0x04)
	float *887c87a6fa; // 0x08(0x04)
	float *509def3854; // 0x0c(0x04)
	float *a099e0a3e2; // 0x10(0x04)
	bool *cf98e8a644; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *c32b31e26a; // 0x18(0x04)
	bool *6a09ac9e10; // 0x1c(0x01)
	bool bUseAbsoluteAutoDeployAltitude; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float AutoDeployAltitude; // 0x20(0x04)
	float StartDeployAltitude; // 0x24(0x04)
	float *7150955d0c; // 0x28(0x04)
};

// ScriptStruct TslGame.*926e974b29
// Size: 0x10 (Inherited: 0x00)
struct F*926e974b29 {
	struct FName *270372384c; // 0x00(0x08)
	enum class EEmotePlayType *590285b05e; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *a64d7260ce; // 0x0c(0x04)
};

// ScriptStruct TslGame.*03d6f57f89
// Size: 0x28 (Inherited: 0x00)
struct F*03d6f57f89 {
	struct FString StringOptionKey; // 0x00(0x10)
	enum class EGender Gender; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> ZombieOptionValues; // 0x18(0x10)
};

// ScriptStruct TslGame.*41d555e783
// Size: 0x18 (Inherited: 0x00)
struct F*41d555e783 {
	float BoostGauge; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* Buff; // 0x08(0x08)
	struct FName OverlapId; // 0x10(0x08)
};

// ScriptStruct TslGame.*85e9179c02
// Size: 0x10 (Inherited: 0x00)
struct F*85e9179c02 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*e3388c6032
// Size: 0x10 (Inherited: 0x00)
struct F*e3388c6032 {
	struct UAnimMontage* *2be921df85; // 0x00(0x08)
	struct UAnimMontage* *1e720664c4; // 0x08(0x08)
};

// ScriptStruct TslGame.*8ec02eee36
// Size: 0x20 (Inherited: 0x00)
struct F*8ec02eee36 {
	struct FString RecordTargetNetId; // 0x00(0x10)
	struct FString RecordTargetName; // 0x10(0x10)
};

// ScriptStruct TslGame.*82e3fbc03a
// Size: 0x30 (Inherited: 0x00)
struct F*82e3fbc03a {
	struct FString EtceteraEventCode; // 0x00(0x10)
	struct FString TargetNetId; // 0x10(0x10)
	struct FString TargetName; // 0x20(0x10)
};

// ScriptStruct TslGame.*81962d33e5
// Size: 0xa0 (Inherited: 0x00)
struct F*81962d33e5 {
	struct FString *72de37465c; // 0x00(0x10)
	struct FString *308c0ea649; // 0x10(0x10)
	struct FString VictimNetId; // 0x20(0x10)
	struct FString VictimName; // 0x30(0x10)
	struct FString *d8f9a896ab; // 0x40(0x10)
	struct FString *584bfa83db; // 0x50(0x10)
	struct FString *82e8a1cde7; // 0x60(0x10)
	bool *6a934d67fb; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString *3bae3ff698; // 0x78(0x10)
	struct FString *9a3d2bbf3e; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct TslGame.*63c9bc36b6
// Size: 0x38 (Inherited: 0x00)
struct F*63c9bc36b6 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*2687a2fa7c
// Size: 0x18 (Inherited: 0x00)
struct F*2687a2fa7c {
	struct FName EmoteName; // 0x00(0x08)
	struct FName SectionName; // 0x08(0x08)
	int32 *752c2b8834; // 0x10(0x04)
	enum class EEmotePlayType *5178dbc0be; // 0x14(0x01)
	bool *88706c0d46; // 0x15(0x01)
	bool *2e05ecf274; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
};

// ScriptStruct TslGame.*9394744391
// Size: 0x10 (Inherited: 0x00)
struct F*9394744391 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*0391ec24d4
// Size: 0x08 (Inherited: 0x00)
struct F*0391ec24d4 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*eb1209f1e9
// Size: 0x10 (Inherited: 0x00)
struct F*eb1209f1e9 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*137d5ab768
// Size: 0xf0 (Inherited: 0x00)
struct F*137d5ab768 {
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *bc1cb20531; // 0x00(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *838cb9b1d2; // 0x50(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *7b84c79fa6; // 0xa0(0x50)
};

// ScriptStruct TslGame.*2dcea6e349
// Size: 0x50 (Inherited: 0x00)
struct F*2dcea6e349 {
	struct TMap<enum class EThrowableState, struct FStringArray> *4cd6b0a58e; // 0x00(0x50)
};

// ScriptStruct TslGame.*518f88429c
// Size: 0x50 (Inherited: 0x00)
struct F*518f88429c {
	struct TMap<struct FName, struct FString> *bda6bc5bcf; // 0x00(0x50)
};

// ScriptStruct TslGame.*ad90cb21fe
// Size: 0x08 (Inherited: 0x00)
struct F*ad90cb21fe {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*2b0c28870d
// Size: 0x08 (Inherited: 0x08)
struct F*2b0c28870d : F*ad90cb21fe {
};

// ScriptStruct TslGame.*8079a37fd7
// Size: 0x08 (Inherited: 0x08)
struct F*8079a37fd7 : F*ad90cb21fe {
};

// ScriptStruct TslGame.*bf259acd1b
// Size: 0x08 (Inherited: 0x08)
struct F*bf259acd1b : F*ad90cb21fe {
};

// ScriptStruct TslGame.*a5b1dc4e22
// Size: 0x08 (Inherited: 0x08)
struct F*a5b1dc4e22 : F*ad90cb21fe {
};

// ScriptStruct TslGame.*8f1f411564
// Size: 0x10 (Inherited: 0x00)
struct F*8f1f411564 {
	struct TArray<enum class *996f6b1c2e> *cb26de0377; // 0x00(0x10)
};

// ScriptStruct TslGame.*2c43c67901
// Size: 0x02 (Inherited: 0x00)
struct F*2c43c67901 {
	enum class *996f6b1c2e *dc43297d34; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGame.AttackMode
// Size: 0x20 (Inherited: 0x00)
struct FAttackMode {
	float *bb6df831a9; // 0x00(0x04)
	int32 AttackId; // 0x04(0x04)
	float *6a1d986124; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<enum class EWeaponClass> *fad6d9da6a; // 0x10(0x10)
};

// ScriptStruct TslGame.*87587f1eaa
// Size: 0x10 (Inherited: 0x00)
struct F*87587f1eaa {
	int32 *a1ddc31e2a; // 0x00(0x04)
	float *fae7343191; // 0x04(0x04)
	int32 *a3386bbc88; // 0x08(0x04)
	int32 *6880d4f99b; // 0x0c(0x04)
};

// ScriptStruct TslGame.*22d5671de5
// Size: 0x14 (Inherited: 0x00)
struct F*22d5671de5 {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct TslGame.*22d85662fd
// Size: 0x18 (Inherited: 0x00)
struct F*22d85662fd {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *931e866b39; // 0x08(0x10)
};

// ScriptStruct TslGame.*97f8da6f22
// Size: 0x18 (Inherited: 0x00)
struct F*97f8da6f22 {
	struct FName *8b1cb0eec8; // 0x00(0x08)
	int32 *46fb80ce04; // 0x08(0x04)
	int32 *368f93c9b1; // 0x0c(0x04)
	int32 *50acff7f22; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*1edf684e3a
// Size: 0x08 (Inherited: 0x00)
struct F*1edf684e3a {
	float Distance; // 0x00(0x04)
	enum class ETargetingType TargetingMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*78080abb65
// Size: 0x18 (Inherited: 0x00)
struct F*78080abb65 {
	int32 *5ae9852fc9; // 0x00(0x04)
	float *799a69d51a; // 0x04(0x04)
	struct TArray<struct F*8b6fabbb7a> *77b31c7f77; // 0x08(0x10)
};

// ScriptStruct TslGame.*8b6fabbb7a
// Size: 0x18 (Inherited: 0x00)
struct F*8b6fabbb7a {
	int32 *dcf51693cf; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*bd2b928cb4> Item; // 0x08(0x10)
};

// ScriptStruct TslGame.*bd2b928cb4
// Size: 0x18 (Inherited: 0x00)
struct F*bd2b928cb4 {
	enum class EAIEquipSpawnItemType *8e7577bcec; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Item; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*9e5ebfb971
// Size: 0x08 (Inherited: 0x00)
struct F*9e5ebfb971 {
	enum class EAITriggerAttrType *2e8581271b; // 0x00(0x01)
	enum class EAIAttrCompareType CompareType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 *979f51e2a7; // 0x04(0x04)
};

// ScriptStruct TslGame.*acadbf1961
// Size: 0x08 (Inherited: 0x00)
struct F*acadbf1961 {
	int32 Probability; // 0x00(0x04)
	int32 *a0e739a90d; // 0x04(0x04)
};

// ScriptStruct TslGame.*51a1239f8a
// Size: 0x02 (Inherited: 0x00)
struct F*51a1239f8a {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	enum class ECollisionResponse Response; // 0x01(0x01)
};

// ScriptStruct TslGame.*e686cf1500
// Size: 0x28 (Inherited: 0x08)
struct F*e686cf1500 : FTableRowBase {
	bool bUseCharacterHitFeedback; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor PartsColor; // 0x0c(0x10)
	float DamageReduceMultiplier; // 0x1c(0x04)
	enum class EDamageZoneType PartsDamageZoneType; // 0x20(0x01)
	enum class EDamageReason PartsDamageReason; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*78a50b9ae4
// Size: 0x18 (Inherited: 0x00)
struct F*78a50b9ae4 {
	struct FLinearColor *0cded0adfb; // 0x00(0x10)
	enum class EDamageReason *82e8a1cde7; // 0x10(0x01)
	enum class EDamageZoneType *9d61efcf7b; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float *214a8ed238; // 0x14(0x04)
};

// ScriptStruct TslGame.*ef5d0d6c52
// Size: 0x20 (Inherited: 0x00)
struct F*ef5d0d6c52 {
	struct UTexture2D* PartsTargetImage; // 0x00(0x08)
	struct FString *402a4ed6f8; // 0x08(0x10)
	bool bUsingCharacterHitFeedback; // 0x18(0x01)
	bool bUsingDamageIndicator; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*a93f38d48a
// Size: 0x200 (Inherited: 0x08)
struct F*a93f38d48a : FTableRowBase {
	struct F*1892d047b5 *aa05a867f5; // 0x08(0x88)
	struct F*1892d047b5 *24d8d7be7b; // 0x90(0x88)
	struct TArray<struct FText> *ec779b0a7d; // 0x118(0x10)
	struct TArray<struct FText> *469f1f7f61; // 0x128(0x10)
	struct TArray<struct FText> *c0d0de02bf; // 0x138(0x10)
	struct TArray<struct FText> *9ad4d73247; // 0x148(0x10)
	struct TArray<struct F*b3d71c7716> *f0591e10e2; // 0x158(0x10)
	struct TArray<struct F*b3d71c7716> *940e235ee6; // 0x168(0x10)
	struct F*b3d71c7716 *caceea8c95; // 0x178(0x38)
	struct F*b3d71c7716 *db409c86f0; // 0x1b0(0x38)
	struct TArray<struct F*994759ebb4> *33224f7088; // 0x1e8(0x10)
	struct FName *ea75d0ec17; // 0x1f8(0x08)
};

// ScriptStruct TslGame.*994759ebb4
// Size: 0x48 (Inherited: 0x00)
struct F*994759ebb4 {
	struct F*9014c39367 *11458b1a4a; // 0x00(0x20)
	struct F*9014c39367 *02bdeaaa7a; // 0x20(0x20)
	float *02205153b5; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*9014c39367
// Size: 0x20 (Inherited: 0x00)
struct F*9014c39367 {
	struct FString *8da0ab058d; // 0x00(0x10)
	struct FString *d55fb705f4; // 0x10(0x10)
};

// ScriptStruct TslGame.*b3d71c7716
// Size: 0x38 (Inherited: 0x00)
struct F*b3d71c7716 {
	struct FText *737c56a287; // 0x00(0x18)
	struct FText *d831c61a2b; // 0x18(0x18)
	bool *745aaf68e5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*1892d047b5
// Size: 0x88 (Inherited: 0x00)
struct F*1892d047b5 {
	struct FText *3364af8b59; // 0x00(0x18)
	struct UPlatformMediaSource* *4ac95d13e1; // 0x18(0x08)
	struct UAkAudioEvent* *3bcd48a772; // 0x20(0x08)
	struct FText *a9e8a1dba1; // 0x28(0x18)
	struct FText *db6946799b; // 0x40(0x18)
	struct FText *ac975a08e0; // 0x58(0x18)
	struct FText *6096de4498; // 0x70(0x18)
};

// ScriptStruct TslGame.*97862a3a85
// Size: 0xa8 (Inherited: 0x00)
struct F*97862a3a85 {
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
	struct U*e6746d9844* RecoilCurve; // 0x58(0x08)
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
	char *6d7cc671aa : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UBlendSpace1D* *f32bcd888c; // 0x08(0x08)
	struct UBlendSpaceBase* *3b19f61846; // 0x10(0x08)
	struct UAnimMontage* *840fbeb125; // 0x18(0x08)
	struct UAnimMontage* *cd442a8a93; // 0x20(0x08)
	struct UAnimMontage* *564c400c34; // 0x28(0x08)
	struct UAnimMontage* *0864208963; // 0x30(0x08)
	struct UAnimMontage* *ef574dd55d; // 0x38(0x08)
	struct UAnimMontage* *5b11c742d8; // 0x40(0x08)
	struct UAnimMontage* *5f9fb55dd6; // 0x48(0x08)
	struct UAnimMontage* *65fa4a9be3; // 0x50(0x08)
	struct UAnimMontage* *a0d3070089; // 0x58(0x08)
	struct UAnimMontage* *6677e03da2; // 0x60(0x08)
	struct UAnimMontage* *ee823cd100; // 0x68(0x08)
	enum class EWeaponClass *a3ff2c1f1f; // 0x70(0x01)
	bool *5bd5c310d2; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float *f784334486; // 0x74(0x04)
	float *8dc14b877f; // 0x78(0x04)
	float *a1625b0ae8; // 0x7c(0x04)
	float *efc7a21593; // 0x80(0x04)
	float *bd810f63bf; // 0x84(0x04)
	bool *2c47d18f7d; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *89d5a64d19; // 0x8c(0x04)
	float *5d57fab7ba; // 0x90(0x04)
	float *787a7bc254; // 0x94(0x04)
	bool *dee6c179aa; // 0x98(0x01)
	bool *1fd8a1fc4b; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32 *062582baee; // 0x9c(0x04)
	struct UClass* *ad6fe3ae02; // 0xa0(0x08)
	struct UClass* *d6f558373f; // 0xa8(0x08)
	struct UClass* *6bd4349b0a; // 0xb0(0x08)
	struct UClass* *baa7d888ed; // 0xb8(0x08)
	struct UCameraAnim* *fb77e201ab; // 0xc0(0x08)
	float RecoilKickADS; // 0xc8(0x04)
	float RecoilKick_MovementSpeedMax; // 0xcc(0x04)
	float RecoilKick_MovementMaxMultiplier; // 0xd0(0x04)
	struct FVector RecoilADSSocketOffsetScale; // 0xd4(0x0c)
	struct FVector *e06da59cea; // 0xe0(0x0c)
	struct FVector *33f83b31e1; // 0xec(0x0c)
	float *ded4468ba0; // 0xf8(0x04)
	float *59032f2d50; // 0xfc(0x04)
	bool bUseBurstRecoilMap; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FVector2D BurstRecoilInMap; // 0x104(0x08)
	struct FVector2D BurstRecoilOutMap; // 0x10c(0x08)
	float *d386b423d1; // 0x114(0x04)
	struct TMap<enum class EAnimStance, float> *80a5526d34; // 0x118(0x50)
	struct TMap<enum class EAnimStance, float> *a16b776a9b; // 0x168(0x50)
	float *b85fbf70ea; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// ScriptStruct TslGame.WeaponDeviationConfig
// Size: 0x6c (Inherited: 0x00)
struct FWeaponDeviationConfig {
	float *8016d684dd; // 0x00(0x04)
	float *0890e9ecb8; // 0x04(0x04)
	float MOA; // 0x08(0x04)
	float DeviationRecoilGain; // 0x0c(0x04)
	float DeviationRecoilGainAim; // 0x10(0x04)
	float DeviationRecoilGainADS; // 0x14(0x04)
	float *f3975aa0bb; // 0x18(0x04)
	float *83b6ce350d; // 0x1c(0x04)
	float *92f110cbf6; // 0x20(0x04)
	float *743b5b2559; // 0x24(0x04)
	float *8f1f0a839b; // 0x28(0x04)
	float *82a945208e; // 0x2c(0x04)
	float *4efd8dee8f; // 0x30(0x04)
	float *af67ba9050; // 0x34(0x04)
	float *3809c65016; // 0x38(0x04)
	float *17ffa54a0c; // 0x3c(0x04)
	float *aeb91d16fa; // 0x40(0x04)
	float *d1154ad89f; // 0x44(0x04)
	float *d22d10b66f; // 0x48(0x04)
	float *64399bedaa; // 0x4c(0x04)
	float *c21f17ba21; // 0x50(0x04)
	float *951b21b539; // 0x54(0x04)
	float *1c347ff1de; // 0x58(0x04)
	float *27d4e1f513; // 0x5c(0x04)
	float *81de298395; // 0x60(0x04)
	float *c86f455635; // 0x64(0x04)
	float *72e9d6bd33; // 0x68(0x04)
};

// ScriptStruct TslGame.*2cc20f68a7
// Size: 0x2c0 (Inherited: 0x00)
struct F*2cc20f68a7 {
	struct FName *8b1cb0eec8; // 0x00(0x08)
	struct UParticleSystem* *f32ab2f727; // 0x08(0x08)
	int32 *1375bafae6; // 0x10(0x04)
	int32 *3cfce985ee; // 0x14(0x04)
	bool bUseGameplayTracers; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UClass* GameplayTracerClassOverride; // 0x20(0x08)
	int32 GameplayTracerAmmoModOverride; // 0x28(0x04)
	int32 GameplayTracerAmmoMinOverride; // 0x2c(0x04)
	int32 *644f3c2a7c; // 0x30(0x04)
	float TimeBetweenShots; // 0x34(0x04)
	struct TArray<struct F*59be4d852f> AttachmentTagData; // 0x38(0x10)
	int32 RPM; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TMap<enum class EFiringMode, float> TimeBetweenShotsOverride; // 0x50(0x50)
	bool bUseTimeBetweenBursts; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float TimeBetweenBursts; // 0xa4(0x04)
	float NoAnimReloadDuration; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<enum class EFiringMode> *5dcf81f73d; // 0xb0(0x10)
	int32 *0f2392022e; // 0xc0(0x04)
	float *85cc979587; // 0xc4(0x04)
	int32 BulletPerFiring; // 0xc8(0x04)
	float *2d8318d200; // 0xcc(0x04)
	bool *7ab9272676; // 0xd0(0x01)
	bool *b5bb8dbd4c; // 0xd1(0x01)
	enum class EWeaponReloadMethod *49c5264398; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float *1fe5fb348f; // 0xd4(0x04)
	float *882e8cbd4f; // 0xd8(0x04)
	float *f9eae7f711; // 0xdc(0x04)
	float *92632a3fae; // 0xe0(0x04)
	float *4657d80237; // 0xe4(0x04)
	float *5766238a61; // 0xe8(0x04)
	float *9d0c16bf38; // 0xec(0x04)
	bool *8235c84033; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector *1017ae1de5; // 0xf4(0x0c)
	struct FVector *2bb8ce467b; // 0x100(0x0c)
	bool *62981ea007; // 0x10c(0x01)
	bool *719785be43; // 0x10d(0x01)
	bool *b9bbb1d6fd; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	float *820c47692d; // 0x110(0x04)
	bool *f04e5e9c8a; // 0x114(0x01)
	bool *0335a3e83b; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
	struct TMap<int32, struct FVector2D> *beaaf59ded; // 0x118(0x50)
	float *cc129d7ea2; // 0x168(0x04)
	float *698c983167; // 0x16c(0x04)
	bool *7193cce0e7; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float *d213d7503c; // 0x174(0x04)
	float *e0f6ae18e5; // 0x178(0x04)
	float *2e99929bb9; // 0x17c(0x04)
	float *d98f9de76c; // 0x180(0x04)
	float *5179b4c583; // 0x184(0x04)
	float *3ba2422e87; // 0x188(0x04)
	float *118a15230c; // 0x18c(0x04)
	float *0ff596f647; // 0x190(0x04)
	bool *0a8a900c9c; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float *bb4a856c17; // 0x198(0x04)
	bool *ea1a8d37d6; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	int32 *c1fd13c941; // 0x1a0(0x04)
	float *c6e97b0d6c; // 0x1a4(0x04)
	struct UCurveFloat* *ca81a542cc; // 0x1a8(0x08)
	struct UClass* *0ad023d030; // 0x1b0(0x08)
	bool *519baaa15b; // 0x1b8(0x01)
	bool *5ba2739795; // 0x1b9(0x01)
	bool *f57db755b8; // 0x1ba(0x01)
	char pad_1BB[0x1]; // 0x1bb(0x01)
	int32 *31f2100a16; // 0x1bc(0x04)
	bool *ea0bd129ab; // 0x1c0(0x01)
	bool *b65b72393d; // 0x1c1(0x01)
	char pad_1C2[0x6]; // 0x1c2(0x06)
	struct TMap<int32, float> *64c1cf4c30; // 0x1c8(0x50)
	struct UClass* *521fcd9654; // 0x218(0x08)
	struct TMap<enum class EFiringMode, struct UAkAudioEvent*> *f25add4c70; // 0x220(0x50)
	struct TMap<enum class EScopeType, float> *497c055323; // 0x270(0x50)
};

// ScriptStruct TslGame.*dd11eb04fd
// Size: 0x1c (Inherited: 0x00)
struct F*dd11eb04fd {
	float *f72152684f; // 0x00(0x04)
	float *ed2a19c03f; // 0x04(0x04)
	float *400fbea686; // 0x08(0x04)
	float *0121bff339; // 0x0c(0x04)
	int32 *5a0207032f; // 0x10(0x04)
	int32 *8699b202bd; // 0x14(0x04)
	int32 *9b38bb2f77; // 0x18(0x04)
};

// ScriptStruct TslGame.*6565d25ddc
// Size: 0x20 (Inherited: 0x00)
struct F*6565d25ddc {
	struct TArray<struct F*59855239ce> *0e2ba2fd21; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*59855239ce
// Size: 0x10 (Inherited: 0x00)
struct F*59855239ce {
	struct FName SkinId; // 0x00(0x08)
	int32 *2bb3ef3432; // 0x08(0x04)
	int32 *5ef5c601d8; // 0x0c(0x04)
};

// ScriptStruct TslGame.*8a5b8cbb01
// Size: 0x60 (Inherited: 0x08)
struct F*8a5b8cbb01 : FTableRowBase {
	float *67c280f785; // 0x08(0x04)
	float *b07b9b06cc; // 0x0c(0x04)
	float *ba6aa4235d; // 0x10(0x04)
	float *0ca066bd2f; // 0x14(0x04)
	float *5f108f3627; // 0x18(0x04)
	int32 *45a2c2886d; // 0x1c(0x04)
	float *cdc16d868a; // 0x20(0x04)
	float *9aa6e82bdd; // 0x24(0x04)
	float *b5d2822418; // 0x28(0x04)
	float *76bbe20cc2; // 0x2c(0x04)
	float *0bcbee5aaf; // 0x30(0x04)
	float *2e4575c2a9; // 0x34(0x04)
	float *5faf6d844e; // 0x38(0x04)
	float *5c67ce9f99; // 0x3c(0x04)
	float *f84f7df1d6; // 0x40(0x04)
	float *e6a95dbe61; // 0x44(0x04)
	float *ca569bc3d0; // 0x48(0x04)
	float *50814d905f; // 0x4c(0x04)
	float *bc878e15ed; // 0x50(0x04)
	float *b0641efbd0; // 0x54(0x04)
	float *556feb6a6d; // 0x58(0x04)
	float *3a91b90049; // 0x5c(0x04)
};

// ScriptStruct TslGame.*4bc5921e0e
// Size: 0x70 (Inherited: 0x00)
struct F*4bc5921e0e {
	struct TArray<struct FName> Bodies; // 0x00(0x10)
	struct TArray<struct FName> Legs; // 0x10(0x10)
	struct TArray<struct FName> *e60040437c; // 0x20(0x10)
	struct TArray<struct FName> *a976dc31c7; // 0x30(0x10)
	struct TArray<struct FName> Hands; // 0x40(0x10)
	struct TArray<struct FName> *626ef6ae0a; // 0x50(0x10)
	struct TArray<struct FName> *d4384534c9; // 0x60(0x10)
};

// ScriptStruct TslGame.*19245dfc59
// Size: 0x60 (Inherited: 0x00)
struct F*19245dfc59 {
	char pad_0[0x30]; // 0x00(0x30)
	struct F*7ac1af333b *32ec3ddb72; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct TslGame.*7ac1af333b
// Size: 0x18 (Inherited: 0x00)
struct F*7ac1af333b {
	int32 PresetIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *b8fde3c972; // 0x08(0x10)
};

// ScriptStruct TslGame.*569654ac61
// Size: 0x10 (Inherited: 0x00)
struct F*569654ac61 {
	struct TArray<int32> *c98b501a51; // 0x00(0x10)
};

// ScriptStruct TslGame.*82ca0d738e
// Size: 0x10 (Inherited: 0x00)
struct F*82ca0d738e {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*d996f62511
// Size: 0x18 (Inherited: 0x00)
struct F*d996f62511 {
	struct ATslPlayerState* *9f8f0dfeec; // 0x00(0x08)
	bool bEnabled; // 0x08(0x01)
	bool *2db421bdce; // 0x09(0x01)
	enum class ETslRedeployPlayerState State; // 0x0a(0x01)
	int8 *2c98440eab; // 0x0b(0x01)
	bool *f9c0774e4b; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *9f630cea0d; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*b0a1569f63
// Size: 0x24 (Inherited: 0x00)
struct F*b0a1569f63 {
	bool bEnabled; // 0x00(0x01)
	bool *2db421bdce; // 0x01(0x01)
	bool *1d4cd08e7d; // 0x02(0x01)
	bool *f288c4f225; // 0x03(0x01)
	bool *3935f3e4dd; // 0x04(0x01)
	bool *58f05d8ade; // 0x05(0x01)
	bool *0aefe5dba7; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float *90fcc30a27; // 0x08(0x04)
	float *c5f9062a6b; // 0x0c(0x04)
	float *5a4118026d; // 0x10(0x04)
	float *aad362acea; // 0x14(0x04)
	float *d5b66c7e62; // 0x18(0x04)
	float RedeploySec; // 0x1c(0x04)
	float *046b277684; // 0x20(0x04)
};

// ScriptStruct TslGame.*3f4bff17e2
// Size: 0x20 (Inherited: 0x00)
struct F*3f4bff17e2 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*9e0a558583
// Size: 0x100 (Inherited: 0x00)
struct F*9e0a558583 {
	struct F*6c97232de9 *4e7e189eb7; // 0x00(0x18)
	struct F*5561e37bc7 *afd44e14d3; // 0x18(0x18)
	struct TArray<struct FString> *dc5f018b1a; // 0x30(0x10)
	struct F*4265fd0fb5 *9b5ae75f64; // 0x40(0x68)
	struct F*f0a006ed14 *f484ac2c1e; // 0xa8(0x58)
};

// ScriptStruct TslGame.*f0a006ed14
// Size: 0x58 (Inherited: 0x00)
struct F*f0a006ed14 {
	struct TMap<enum class ETslIngameMissionType, struct F*813309ed7c> *9e32e2ab11; // 0x00(0x50)
	struct FName *27f63b984d; // 0x50(0x08)
};

// ScriptStruct TslGame.*813309ed7c
// Size: 0x08 (Inherited: 0x00)
struct F*813309ed7c {
	float *14720643cd; // 0x00(0x04)
	float *593eee9410; // 0x04(0x04)
};

// ScriptStruct TslGame.*4265fd0fb5
// Size: 0x68 (Inherited: 0x00)
struct F*4265fd0fb5 {
	int32 *597dc0b8f5; // 0x00(0x04)
	int32 MissionReplacementCount; // 0x04(0x04)
	int32 *6dd42f4c64; // 0x08(0x04)
	int32 *6762775504; // 0x0c(0x04)
	float *74468736ee; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<enum class ETslIngameMissionType, int32> *ac0028b04f; // 0x18(0x50)
};

// ScriptStruct TslGame.*f2397911b8
// Size: 0x60 (Inherited: 0x08)
struct F*f2397911b8 : FTableRowBase {
	struct FName *c5ec33b9af; // 0x08(0x08)
	enum class ETslIngameMissionType *03021798fe; // 0x10(0x01)
	enum class ETslIngameMissionRewardType *daaba53bd5; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct F*f465f3fe34> *5e1ef37dea; // 0x18(0x10)
	struct FStringAssetReference Icon; // 0x28(0x10)
	int32 Weight; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct F*6c97232de9 *4eee816c58; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct TslGame.*f465f3fe34
// Size: 0x10 (Inherited: 0x00)
struct F*f465f3fe34 {
	struct FName *d737fe3568; // 0x00(0x08)
	int32 *fa1e90d5fe; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b8b070668d
// Size: 0x88 (Inherited: 0x08)
struct F*b8b070668d : FTableRowBase {
	bool *33b9df7f28; // 0x08(0x01)
	bool *27b9864941; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName ID; // 0x10(0x08)
	enum class ETslIngameMissionType *03021798fe; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FText Description; // 0x20(0x18)
	enum class ETslIngameMissionType *daaba53bd5; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 Weight; // 0x3c(0x04)
	struct F*6c97232de9 *4eee816c58; // 0x40(0x18)
	struct F*5561e37bc7 ModeSelector; // 0x58(0x18)
	struct TArray<struct F*88d78c9be1> Conditions; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)
};

// ScriptStruct TslGame.*88d78c9be1
// Size: 0xe0 (Inherited: 0x00)
struct F*88d78c9be1 {
	struct TArray<struct F*4403e82593> Item; // 0x00(0x10)
	struct TArray<struct F*27a721cdae> Heal; // 0x10(0x10)
	struct TArray<struct F*1eb1816cb4> KillAssist; // 0x20(0x10)
	struct TArray<struct F*8eaf250fdf> DealDamage; // 0x30(0x10)
	struct TArray<struct F*7dc6e77cea> TakeDamage; // 0x40(0x10)
	struct TArray<struct F*60ec4170a5> Revive; // 0x50(0x10)
	struct TArray<struct F*9aca12f3f4> Move; // 0x60(0x10)
	struct TArray<struct F*630f53fe79> Destroy; // 0x70(0x10)
	struct TArray<struct F*5f1d827625> Interact; // 0x80(0x10)
	struct TArray<struct F*b872749adb> Emote; // 0x90(0x10)
	struct TArray<struct F*15f9405c16> Visit; // 0xa0(0x10)
	struct TArray<struct F*6013b4c8f1> Parkour; // 0xb0(0x10)
	struct TArray<struct F*6125e31c35> Market; // 0xc0(0x10)
	struct TArray<struct F*f34263629d> Transportation; // 0xd0(0x10)
};

// ScriptStruct TslGame.*f34263629d
// Size: 0x20 (Inherited: 0x18)
struct F*f34263629d : F*a2af782624 {
	enum class EMovementBaseType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*a2af782624
// Size: 0x18 (Inherited: 0x00)
struct F*a2af782624 {
	char pad_0[0x8]; // 0x00(0x08)
	struct F*66a67f354f Goal; // 0x08(0x08)
	struct F*d84f5b163f Timer; // 0x10(0x08)
};

// ScriptStruct TslGame.*d84f5b163f
// Size: 0x08 (Inherited: 0x00)
struct F*d84f5b163f {
	int32 *8fa3114a1d; // 0x00(0x04)
	enum class ETslIngameMission_Condition_ComparisonType *fde0e848ef; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*66a67f354f
// Size: 0x08 (Inherited: 0x00)
struct F*66a67f354f {
	int32 *3fb44438e3; // 0x00(0x04)
	enum class ETslIngameMission_Condition_ComparisonType *fde0e848ef; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*6125e31c35
// Size: 0x48 (Inherited: 0x18)
struct F*6125e31c35 : F*a2af782624 {
	enum class EMarketCategoryType Usage; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct F*853cbcadec Settings; // 0x20(0x28)
};

// ScriptStruct TslGame.*853cbcadec
// Size: 0x28 (Inherited: 0x00)
struct F*853cbcadec {
	enum class EMarketLevel *39a9194a1b; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*e476e78108 *fb1afce584; // 0x08(0x10)
	struct F*121558c1f7 *d18a79c46b; // 0x18(0x10)
};

// ScriptStruct TslGame.*121558c1f7
// Size: 0x10 (Inherited: 0x00)
struct F*121558c1f7 {
	struct TArray<enum class EEquipSlotID> *7fa729b547; // 0x00(0x10)
};

// ScriptStruct TslGame.*e476e78108
// Size: 0x10 (Inherited: 0x00)
struct F*e476e78108 {
	struct TArray<struct FName> *7d29c17cc7; // 0x00(0x10)
};

// ScriptStruct TslGame.*6013b4c8f1
// Size: 0x20 (Inherited: 0x18)
struct F*6013b4c8f1 : F*a2af782624 {
	enum class ETslIngameMission_Condition_ParkourType Type; // 0x18(0x01)
	struct F*75901d5e98 Settings; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*75901d5e98
// Size: 0x01 (Inherited: 0x00)
struct F*75901d5e98 {
	struct F*a3b9a56a3a Vaulting; // 0x00(0x01)
};

// ScriptStruct TslGame.*a3b9a56a3a
// Size: 0x01 (Inherited: 0x00)
struct F*a3b9a56a3a {
	bool *e608349a0e; // 0x00(0x01)
};

// ScriptStruct TslGame.*15f9405c16
// Size: 0x38 (Inherited: 0x18)
struct F*15f9405c16 : F*a2af782624 {
	enum class ETslIngameMission_ConditionData_VisitType *8cca42b43c; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct F*f3c3f80367 Settings; // 0x20(0x18)
};

// ScriptStruct TslGame.*f3c3f80367
// Size: 0x18 (Inherited: 0x00)
struct F*f3c3f80367 {
	struct F*42e5ab2098 Region; // 0x00(0x10)
	struct F*d34492f692 Place; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*d34492f692
// Size: 0x02 (Inherited: 0x00)
struct F*d34492f692 {
	enum class ETslIngameMission_Condition_PlaceType Type; // 0x00(0x01)
	enum class EMarketLevel *39a9194a1b; // 0x01(0x01)
};

// ScriptStruct TslGame.*42e5ab2098
// Size: 0x10 (Inherited: 0x00)
struct F*42e5ab2098 {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct TslGame.*b872749adb
// Size: 0x18 (Inherited: 0x18)
struct F*b872749adb : F*a2af782624 {
};

// ScriptStruct TslGame.*5f1d827625
// Size: 0x20 (Inherited: 0x18)
struct F*5f1d827625 : F*a2af782624 {
	enum class ETslIngameMission_ConditionData_InteractionType Type; // 0x18(0x01)
	struct F*0cdd81bf04 Settings; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*0cdd81bf04
// Size: 0x01 (Inherited: 0x00)
struct F*0cdd81bf04 {
	struct F*c948d55360 *1298ef8890; // 0x00(0x01)
};

// ScriptStruct TslGame.*c948d55360
// Size: 0x01 (Inherited: 0x00)
struct F*c948d55360 {
	enum class EInteractableActorType Type; // 0x00(0x01)
};

// ScriptStruct TslGame.*630f53fe79
// Size: 0x20 (Inherited: 0x18)
struct F*630f53fe79 : F*a2af782624 {
	enum class ETslDestructibleObjectType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*9aca12f3f4
// Size: 0x38 (Inherited: 0x18)
struct F*9aca12f3f4 : F*a2af782624 {
	enum class ETslIngameMission_CoditionData_MoveType *3a461dba02; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct F*b1b8be7090 Settings; // 0x20(0x18)
};

// ScriptStruct TslGame.*b1b8be7090
// Size: 0x18 (Inherited: 0x00)
struct F*b1b8be7090 {
	struct F*d801f447f1 Drive; // 0x00(0x18)
};

// ScriptStruct TslGame.*d801f447f1
// Size: 0x18 (Inherited: 0x00)
struct F*d801f447f1 {
	enum class ETslIngameMission_CoditionData_VehicleType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct TslGame.*60ec4170a5
// Size: 0x30 (Inherited: 0x18)
struct F*60ec4170a5 : F*a2af782624 {
	struct TArray<enum class ETslIngameMission_ConditionData_ReviveType> *b709ec2770; // 0x18(0x10)
	enum class ERevivalMethod *97a6ec6394; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*7dc6e77cea
// Size: 0x20 (Inherited: 0x18)
struct F*7dc6e77cea : F*a2af782624 {
	int32 BlueZonePhase; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*8eaf250fdf
// Size: 0x48 (Inherited: 0x18)
struct F*8eaf250fdf : F*a2af782624 {
	struct TArray<enum class EWeaponClass> *9b68e2820e; // 0x18(0x10)
	struct TArray<struct FName> *5233d4fc3b; // 0x28(0x10)
	struct TArray<struct FName> *92b0850503; // 0x38(0x10)
};

// ScriptStruct TslGame.*1eb1816cb4
// Size: 0x60 (Inherited: 0x18)
struct F*1eb1816cb4 : F*a2af782624 {
	enum class ETslIngameMission_ConditionData_KillAssistType *d2a92d4b71; // 0x18(0x01)
	enum class ETslIngameMission_ConditionData_KillType *c633f7f183; // 0x19(0x01)
	bool *1ae49b9fef; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct F*66a67f354f *5497d68f65; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<enum class EWeaponClass> *9b68e2820e; // 0x28(0x10)
	struct TArray<struct FName> *5233d4fc3b; // 0x38(0x10)
	struct TArray<struct FName> *92b0850503; // 0x48(0x10)
	enum class ETslAIPlayerType TargetType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct TslGame.*27a721cdae
// Size: 0x18 (Inherited: 0x18)
struct F*27a721cdae : F*a2af782624 {
};

// ScriptStruct TslGame.*4403e82593
// Size: 0x78 (Inherited: 0x18)
struct F*4403e82593 : F*a2af782624 {
	enum class ETslIngameMission_ConditionData_ItemMissionType *d7253ad971; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct F*bdfbc96c73 Settings; // 0x20(0x58)
};

// ScriptStruct TslGame.*bdfbc96c73
// Size: 0x58 (Inherited: 0x00)
struct F*bdfbc96c73 {
	bool *20710e629f; // 0x00(0x01)
	enum class ItemPackageType *4315390238; // 0x01(0x01)
	enum class ETslIngameMission_ConditionData_ItemUseType *b5f24ec994; // 0x02(0x01)
	enum class EItemRequestType *d73b7768cd; // 0x03(0x01)
	enum class ETslIngameMission_ConditionData_ItemType *8e7577bcec; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct F*7e92c87bf7 *5538bd1066; // 0x08(0x50)
};

// ScriptStruct TslGame.*7e92c87bf7
// Size: 0x50 (Inherited: 0x00)
struct F*7e92c87bf7 {
	struct F*b6a0dbb645 Any; // 0x00(0x08)
	struct F*08f5e14f3d *70acb020da; // 0x08(0x18)
	struct F*302223db54 Weapon; // 0x20(0x20)
	struct F*0a07aee504 *f22e354fa0; // 0x40(0x10)
};

// ScriptStruct TslGame.*0a07aee504
// Size: 0x10 (Inherited: 0x00)
struct F*0a07aee504 {
	struct TArray<enum class ECastableItemType> *39d30faa56; // 0x00(0x10)
};

// ScriptStruct TslGame.*302223db54
// Size: 0x20 (Inherited: 0x00)
struct F*302223db54 {
	bool *2f9e3e9857; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EWeaponClass> *73d95b7310; // 0x08(0x10)
	enum class ETslIngameMissionCondition_FlareGunUsage *ac36d82ee9; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*08f5e14f3d
// Size: 0x18 (Inherited: 0x00)
struct F*08f5e14f3d {
	struct TArray<enum class EEquipableItemLevelType> *1b169627f6; // 0x00(0x10)
	enum class EEquipSlotID *0666777da2; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*b6a0dbb645
// Size: 0x08 (Inherited: 0x00)
struct F*b6a0dbb645 {
	struct FName ItemID; // 0x00(0x08)
};

// ScriptStruct TslGame.*5359cc17df
// Size: 0x18 (Inherited: 0x00)
struct F*5359cc17df {
	int32 *af341a4f31; // 0x00(0x04)
	int32 *20975c9b6f; // 0x04(0x04)
	struct TArray<struct F*07a80ff2ca> *13fe24e87d; // 0x08(0x10)
};

// ScriptStruct TslGame.*07a80ff2ca
// Size: 0x0c (Inherited: 0x00)
struct F*07a80ff2ca {
	int32 Progress; // 0x00(0x04)
	int32 Goal; // 0x04(0x04)
	bool *b38c846d91; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.BaseUserPlayData
// Size: 0x08 (Inherited: 0x00)
struct FBaseUserPlayData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*abb718598b
// Size: 0x06 (Inherited: 0x00)
struct F*abb718598b {
	bool *0ea0c372e2; // 0x00(0x01)
	bool *0a4c7be009; // 0x01(0x01)
	enum class EAutoEquipAttachmentForScopeMode *73c2e57f0f; // 0x02(0x01)
	bool *b5bfc8b324; // 0x03(0x01)
	bool *8e2d858b0d; // 0x04(0x01)
	bool *cbc4f769d6; // 0x05(0x01)
};

// ScriptStruct TslGame.*c49ce8c203
// Size: 0x20 (Inherited: 0x00)
struct F*c49ce8c203 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*2b8d7a7472
// Size: 0x20 (Inherited: 0x00)
struct F*2b8d7a7472 {
	bool *180c89bca9; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime *ecc6170ac2; // 0x08(0x08)
	struct FString *22ad4275ca; // 0x10(0x10)
};

// ScriptStruct TslGame.*2eca2f96a4
// Size: 0x20 (Inherited: 0x00)
struct F*2eca2f96a4 {
	bool bSpawnWayPoint; // 0x00(0x01)
	bool bShowWayPoint_PS; // 0x01(0x01)
	bool bCancelWayPoint; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32 MaxWayPointNum_PS; // 0x04(0x04)
	struct TArray<struct FVector2D> WayPointPosArr_PS; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*791b0c9431
// Size: 0x10 (Inherited: 0x00)
struct F*791b0c9431 {
	struct UClass* *ba6ac34269; // 0x00(0x08)
	int32 *4d3980e4cd; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*49b6002eda
// Size: 0x10 (Inherited: 0x00)
struct F*49b6002eda {
	struct FName ItemID; // 0x00(0x08)
	enum class ECastableItemType *8e7577bcec; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 *4d3980e4cd; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ff6ea3da5e
// Size: 0xc40 (Inherited: 0x00)
struct F*ff6ea3da5e {
	struct F*024179dbe5 *1eee4925ec; // 0x00(0x78)
	struct F*024179dbe5 *85ce5999c2; // 0x78(0x78)
	struct F*024179dbe5 *feb4cd9c01; // 0xf0(0x78)
	struct F*024179dbe5 *840364a2ff; // 0x168(0x78)
	struct F*024179dbe5 *a5a63e64de; // 0x1e0(0x78)
	struct F*024179dbe5 *39d0705b17; // 0x258(0x78)
	struct F*024179dbe5 *8404d10388; // 0x2d0(0x78)
	struct F*024179dbe5 *4d001e0c4a; // 0x348(0x78)
	struct F*024179dbe5 *4ac3eae20b; // 0x3c0(0x78)
	struct F*024179dbe5 *4bbd40c6c8; // 0x438(0x78)
	struct F*024179dbe5 FleshDecal; // 0x4b0(0x78)
	struct F*024179dbe5 *fe3b086578; // 0x528(0x78)
	struct F*024179dbe5 *6a10111906; // 0x5a0(0x78)
	struct F*024179dbe5 *ec36bb45eb; // 0x618(0x78)
	struct F*024179dbe5 *222a2f69d9; // 0x690(0x78)
	struct F*024179dbe5 *6c2b05b250; // 0x708(0x78)
	struct F*024179dbe5 *81c540f758; // 0x780(0x78)
	struct F*024179dbe5 *af011b3b2a; // 0x7f8(0x78)
	struct F*024179dbe5 *0627ae543d; // 0x870(0x78)
	struct F*024179dbe5 *196e619be8; // 0x8e8(0x78)
	struct F*024179dbe5 *69cd8b92c9; // 0x960(0x78)
	struct F*024179dbe5 *d7fff2a225; // 0x9d8(0x78)
	bool *214fb03f8d; // 0xa50(0x01)
	char pad_A51[0x7]; // 0xa51(0x07)
	struct F*024179dbe5 SprayDecal; // 0xa58(0x78)
	struct F*024179dbe5 *98e93b75b3; // 0xad0(0x78)
	struct F*024179dbe5 *eb31d61be4; // 0xb48(0x78)
	struct F*024179dbe5 *6bfbe8cb8d; // 0xbc0(0x78)
	bool *6f5abad120; // 0xc38(0x01)
	char pad_C39[0x7]; // 0xc39(0x07)
};

// ScriptStruct TslGame.*024179dbe5
// Size: 0x78 (Inherited: 0x00)
struct F*024179dbe5 {
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
	struct F*87cf230eda DecalChannels; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector2D DotProductLongScaleMapIn; // 0x44(0x08)
	struct FVector2D DotProductLongScaleMapOut; // 0x4c(0x08)
	struct FVector2D DotProductLatScaleMapIn; // 0x54(0x08)
	struct FVector2D DotProductLatScaleMapOut; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture* *a8ff8207c8; // 0x68(0x08)
	int32 *ff46721dd2; // 0x70(0x04)
	float *8e22a0bf04; // 0x74(0x04)
};

// ScriptStruct TslGame.*ad47d89d34
// Size: 0x30 (Inherited: 0x00)
struct F*ad47d89d34 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*d08c1f0055
// Size: 0x18 (Inherited: 0x00)
struct F*d08c1f0055 {
	float MaxDot; // 0x00(0x04)
	struct FFloatRange RicochetChance; // 0x04(0x10)
	bool bAlwaysScaleDecal; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*301a3f7cb3
// Size: 0x110 (Inherited: 0x00)
struct F*301a3f7cb3 {
	struct UStaticMesh* *7b0f5ebbc6; // 0x00(0x08)
	struct TArray<struct UMaterialInstance*> *ac871db7ed; // 0x08(0x10)
	struct UStaticMesh* *c57fa578e8; // 0x18(0x08)
	struct TArray<struct UMaterialInstance*> *581ffceb15; // 0x20(0x10)
	struct UStaticMesh* *d7ecfbe35f; // 0x30(0x08)
	struct TArray<struct UMaterialInstance*> *33e48dfcfd; // 0x38(0x10)
	struct UClass* *cc96483626; // 0x48(0x08)
	struct UClass* *92889c9c29; // 0x50(0x08)
	bool *465c18addb; // 0x58(0x01)
	bool *139c6e0106; // 0x59(0x01)
	bool *15807f413b; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct UPhysicalMaterial* PhysMaterial; // 0x60(0x08)
	struct UTexture2D* *9ef4bdc635; // 0x68(0x08)
	struct U*3806f3202a* *ea9765f90f; // 0x70(0x08)
	struct UTexture2D* *244ff78dba; // 0x78(0x08)
	struct TArray<struct U*2b8b402ec9*> *1ab2751e85; // 0x80(0x10)
	bool *278e66b69c; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UMaterialInstance*> *a0086e918d; // 0x98(0x10)
	struct UStaticMesh* *58cf9ac789; // 0xa8(0x08)
	struct TArray<struct UMaterialInstance*> *61933e8c0e; // 0xb0(0x10)
	int32 *3145365559; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UClass* *74ce7b6bce; // 0xc8(0x08)
	struct TArray<enum class EDestrucibleSurfaceSourceType> *623da5f472; // 0xd0(0x10)
	bool *d1bb8357d8; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32 *e64aae2a98; // 0xe4(0x04)
	float *420091eaf3; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UClass* *47d10cfb20; // 0xf0(0x08)
	float *84857b8f5d; // 0xf8(0x04)
	float BulletEntranceRadiusSize; // 0xfc(0x04)
	float BulletExitRadiusSize; // 0x100(0x04)
	bool HitsOnlyAffectFacingSurface; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UStaticMesh* FrameComplexCollisionMesh; // 0x108(0x08)
};

// ScriptStruct TslGame.*7f6e304ace
// Size: 0x08 (Inherited: 0x00)
struct F*7f6e304ace {
	uint16 *ad95ae8ee2; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32 InstanceIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*5300a490b8
// Size: 0x34 (Inherited: 0x00)
struct F*5300a490b8 {
	uint16 *ad95ae8ee2; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct F*368916ab1b Hit; // 0x04(0x30)
};

// ScriptStruct TslGame.*368916ab1b
// Size: 0x30 (Inherited: 0x00)
struct F*368916ab1b {
	struct FVector_NetQuantize HitLocation; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal *3600f360b9; // 0x0c(0x0c)
	int32 InstanceIndex; // 0x18(0x04)
	enum class EDestrucibleSurfaceSourceType *0ad023d030; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Radius; // 0x20(0x04)
	struct FVector_NetQuantize *badb912886; // 0x24(0x0c)
};

// ScriptStruct TslGame.ParticleParameter
// Size: 0x18 (Inherited: 0x00)
struct FParticleParameter {
	struct FName Name; // 0x00(0x08)
	struct FVector Value; // 0x08(0x0c)
	bool bEnableRTPC; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*d801f903ab
// Size: 0x60 (Inherited: 0x00)
struct F*d801f903ab {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UClass* ParticleEnvironment; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct TslGame.*a2cc52b531
// Size: 0x60 (Inherited: 0x00)
struct F*a2cc52b531 {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UParticleSystem* ParticleSystem; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	bool UseWorldTransform; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)
};

// ScriptStruct TslGame.*9495b17050
// Size: 0xe0 (Inherited: 0x00)
struct F*9495b17050 {
	struct FGuid ID; // 0x00(0x10)
	struct TArray<struct UActorComponent*> StaticComponents; // 0x10(0x10)
	struct TMap<struct UStaticMeshComponent*, struct F*a01c31137d> InstancedComponents; // 0x20(0x50)
	struct TArray<struct UDoorInteractionComponent*> DoorComponents; // 0x70(0x10)
	struct TArray<struct APostProcessVolume*> PostProcessVolumes; // 0x80(0x10)
	struct TMap<struct UAkSoundVolumesContainerComponent*, struct F*bec6dd55f6> LinkedSoundVolumesMap; // 0x90(0x50)
};

// ScriptStruct TslGame.*bec6dd55f6
// Size: 0x10 (Inherited: 0x00)
struct F*bec6dd55f6 {
	struct TArray<int32> *7bda840519; // 0x00(0x10)
};

// ScriptStruct TslGame.*a01c31137d
// Size: 0x10 (Inherited: 0x00)
struct F*a01c31137d {
	struct TArray<int32> Indices; // 0x00(0x10)
};

// ScriptStruct TslGame.*4f9d975648
// Size: 0x10 (Inherited: 0x00)
struct F*4f9d975648 {
	struct TArray<struct F*693a1b364d> Beacons; // 0x00(0x10)
};

// ScriptStruct TslGame.*693a1b364d
// Size: 0xd0 (Inherited: 0x00)
struct F*693a1b364d {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FTransform BeaconTransform; // 0x10(0x30)
	struct FVector BuildingLocalOriginOffset; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct F*a2cc52b531> ParticleEffects; // 0x50(0x10)
	struct TArray<struct F*d801f903ab> ParticleEnvironments; // 0x60(0x10)
	float NearbyHitParticleDistance; // 0x70(0x04)
	float DamageRadius; // 0x74(0x04)
	struct FVector VolumetricScale; // 0x78(0x0c)
	struct FGuid DestructibleId; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
	struct USkeletalMesh* DestructionMesh; // 0x98(0x08)
	struct UAnimationAsset* DestructionAnimation; // 0xa0(0x08)
	float DestroyAnimationDelayTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*e5c8fd3acd> BeaconKillBoxes; // 0xb0(0x10)
	bool WasHit; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// ScriptStruct TslGame.*e5c8fd3acd
// Size: 0x50 (Inherited: 0x00)
struct F*e5c8fd3acd {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct FTransform KillZoneTransfrom; // 0x10(0x30)
	struct FVector KillZoneExtent; // 0x40(0x0c)
	bool KillPlayers; // 0x4c(0x01)
	bool DeleteItems; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct TslGame.*c53e34dc31
// Size: 0x24 (Inherited: 0x00)
struct F*c53e34dc31 {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FVector BlackZoneOrigin; // 0x10(0x0c)
	float BlackZoneRadius; // 0x1c(0x04)
	bool BeaconsPresent; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*f0e2b998bc
// Size: 0x18 (Inherited: 0x00)
struct F*f0e2b998bc {
	bool *22ec18291d; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid ID; // 0x04(0x10)
	float *e1b357ee77; // 0x14(0x04)
};

// ScriptStruct TslGame.*8c7b8743fa
// Size: 0x08 (Inherited: 0x00)
struct F*8c7b8743fa {
	int32 Mode; // 0x00(0x04)
	int32 Type; // 0x04(0x04)
};

// ScriptStruct TslGame.*44fe70002e
// Size: 0x88 (Inherited: 0x00)
struct F*44fe70002e {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct TslGame.*68d41c63b8
// Size: 0x38 (Inherited: 0x30)
struct F*68d41c63b8 : F*1cda8de3aa {
	float *229a1519f7; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*1cda8de3aa
// Size: 0x30 (Inherited: 0x00)
struct F*1cda8de3aa {
	struct FVector *70fbede77c; // 0x00(0x0c)
	struct FVector Dir; // 0x0c(0x0c)
	struct FAttackId AttackId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UClass* *fa592782bc; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct TslGame.*c4c4a16c70
// Size: 0x08 (Inherited: 0x00)
struct F*c4c4a16c70 {
	float *b37339785d; // 0x00(0x04)
	uint16 *a1404fd568; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGame.*af190b35f1
// Size: 0x30 (Inherited: 0x00)
struct F*af190b35f1 {
	float *b37339785d; // 0x00(0x04)
	uint16 *64c7553979; // 0x04(0x02)
	uint16 *18bce46584; // 0x06(0x02)
	uint16 *fda94e70e8; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct F*b8492375fa> *df9b0ab817; // 0x10(0x10)
	struct TArray<struct F*b09246dff5> *d301a8936d; // 0x20(0x10)
};

// ScriptStruct TslGame.*b09246dff5
// Size: 0x10 (Inherited: 0x00)
struct F*b09246dff5 {
	uint16 *3c4c3d33ef; // 0x00(0x02)
	uint16 *00f68d87c4; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Content; // 0x08(0x08)
};

// ScriptStruct TslGame.*b8492375fa
// Size: 0x06 (Inherited: 0x00)
struct F*b8492375fa {
	uint16 *00f68d87c4; // 0x00(0x02)
	uint16 *1de1eb56e9; // 0x02(0x02)
	uint16 *de4276b184; // 0x04(0x02)
};

// ScriptStruct TslGame.*45d24b6b7a
// Size: 0x30 (Inherited: 0x00)
struct F*45d24b6b7a {
	struct ATslCharacter* *8adb367d60; // 0x00(0x08)
	struct FVector *2df87cdae2; // 0x08(0x0c)
	struct FVector *032b83c8f4; // 0x14(0x0c)
	float *df4d2bd190; // 0x20(0x04)
	float *d89f7a927d; // 0x24(0x04)
	float *e3a72ef32e; // 0x28(0x04)
	float *6d6694b658; // 0x2c(0x04)
};

// ScriptStruct TslGame.*f6ddd92caa
// Size: 0x20 (Inherited: 0x08)
struct F*f6ddd92caa : FTableRowBase {
	struct FName SpawnKitName; // 0x08(0x08)
	struct TArray<struct F*162df8b717> SpawnKitInfos; // 0x10(0x10)
};

// ScriptStruct TslGame.*162df8b717
// Size: 0x100 (Inherited: 0x08)
struct F*162df8b717 : FTableRowBase {
	enum class EWeaponClass WeaponCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString SpawnKitId; // 0x10(0x10)
	struct FText InfoName; // 0x20(0x18)
	struct TArray<struct F*aeb596eaac> ItemInfos; // 0x38(0x10)
	struct F*05d7281e2f VehicleInfo; // 0x48(0xb8)
};

// ScriptStruct TslGame.*05d7281e2f
// Size: 0xb8 (Inherited: 0x00)
struct F*05d7281e2f {
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

// ScriptStruct TslGame.*aeb596eaac
// Size: 0x28 (Inherited: 0x00)
struct F*aeb596eaac {
	int32 ItemCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	struct TArray<struct FName> AttachmentIDs; // 0x10(0x10)
	struct FName SkinItemId; // 0x20(0x08)
};

// ScriptStruct TslGame.*ed7a0ffaad
// Size: 0x20 (Inherited: 0x00)
struct F*ed7a0ffaad {
	struct FString *d0babe0ff9; // 0x00(0x10)
	struct TArray<struct F*1083a54f6c> *7f24f2d677; // 0x10(0x10)
};

// ScriptStruct TslGame.*1083a54f6c
// Size: 0x18 (Inherited: 0x00)
struct F*1083a54f6c {
	struct FName *50424ea365; // 0x00(0x08)
	struct TArray<struct FName> *94a2858007; // 0x08(0x10)
};

// ScriptStruct TslGame.*2b12c0ef1a
// Size: 0x50 (Inherited: 0x00)
struct F*2b12c0ef1a {
	struct TMap<struct FString, struct F*0b6be3e14e> *4c82887736; // 0x00(0x50)
};

// ScriptStruct TslGame.*0b6be3e14e
// Size: 0x180 (Inherited: 0xc8)
struct F*0b6be3e14e : F*a514910062 {
	struct FString *d0babe0ff9; // 0xc8(0x10)
	float *80d2d16f28; // 0xd8(0x04)
	float *697dc77ef6; // 0xdc(0x04)
	struct TMap<enum class EEquipSlotID, int32> *52bab60abb; // 0xe0(0x50)
	struct TMap<enum class EEquipSlotID, int32> *64d67e7c47; // 0x130(0x50)
};

// ScriptStruct TslGame.*a514910062
// Size: 0xc8 (Inherited: 0x00)
struct F*a514910062 {
	struct TArray<struct UItem*> Items; // 0x00(0x10)
	struct F*05d7281e2f VehicleInfo; // 0x10(0xb8)
};

// ScriptStruct TslGame.*3b7c1e41ef
// Size: 0x2b0 (Inherited: 0x288)
struct F*3b7c1e41ef : F*7c826e43af {
	struct UTexture* AmmoIcon; // 0x288(0x20)
	float AmmoIconRatio; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
};

// ScriptStruct TslGame.*15e0dc8019
// Size: 0x28 (Inherited: 0x00)
struct F*15e0dc8019 {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	bool *22ae76fb22; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *a0ca688230; // 0x10(0x08)
	struct FName *58dbb42800; // 0x18(0x08)
	struct FName SocketName; // 0x20(0x08)
};

// ScriptStruct TslGame.*e9c236114a
// Size: 0x05 (Inherited: 0x00)
struct F*e9c236114a {
	bool *5067b4572f; // 0x00(0x01)
	int8 *443b486d8f; // 0x01(0x01)
	int8 *25e5f09de4; // 0x02(0x01)
	enum class EWeaponTransitionState State; // 0x03(0x01)
	enum class EWeaponTransitionState *5c33e816a7; // 0x04(0x01)
};

// ScriptStruct TslGame.*41b2814936
// Size: 0x70 (Inherited: 0x60)
struct F*41b2814936 : F*e8481430b1 {
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct TslGame.*e8481430b1
// Size: 0x60 (Inherited: 0x00)
struct F*e8481430b1 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*c987a29937
// Size: 0x40 (Inherited: 0x00)
struct F*c987a29937 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*953bffc24c
// Size: 0x08 (Inherited: 0x00)
struct F*953bffc24c {
	int32 *cb39cda7b8; // 0x00(0x04)
	enum class ECoinTakeType *672d0f87a9; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*3cfe8d51cb
// Size: 0x20 (Inherited: 0x00)
struct F*3cfe8d51cb {
	enum class EBombGameAreaType *b9c9e09f28; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *a0213e0ea7; // 0x08(0x18)
};

// ScriptStruct TslGame.*3918cffac3
// Size: 0x08 (Inherited: 0x00)
struct F*3918cffac3 {
	enum class ECoinTakeType *672d0f87a9; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 OverrideIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*9d37d8436c
// Size: 0x10 (Inherited: 0x00)
struct F*9d37d8436c {
	bool *2f6766ff71; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
};

// ScriptStruct TslGame.*b6c7ec8c98
// Size: 0x18 (Inherited: 0x00)
struct F*b6c7ec8c98 {
	int32 TeamId; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	int32 *fe23688a86; // 0x08(0x04)
	int32 *7d5f20b148; // 0x0c(0x04)
	int32 *562c1bc4cd; // 0x10(0x04)
	int32 *9ec77b27a3; // 0x14(0x04)
};

// ScriptStruct TslGame.*505f87fafd
// Size: 0x14 (Inherited: 0x00)
struct F*505f87fafd {
	int32 *f7e22b016d; // 0x00(0x04)
	enum class ETslBombTeamRole *4372c96b18; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct F*fef19c628e *71d1ac742a; // 0x08(0x08)
	bool *ae14f587b9; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*fef19c628e
// Size: 0x08 (Inherited: 0x00)
struct F*fef19c628e {
	enum class ETslBombRoundResultHistoryType *8fe8bcf35a; // 0x00(0x01)
	enum class EBombRoundResultConditionType *2ee0e2ef2a; // 0x01(0x01)
	enum class EBombUITeamStatusType *bb5ab7f13b; // 0x02(0x01)
	bool *d75d40913f; // 0x03(0x01)
	int32 *7bd23e7c83; // 0x04(0x04)
};

// ScriptStruct TslGame.*b7273eed0a
// Size: 0x18 (Inherited: 0x00)
struct F*b7273eed0a {
	struct FString BattleAreaType; // 0x00(0x10)
	enum class ETslBombTeamRole TeamRole; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 TeamMemberIndex; // 0x14(0x04)
};

// ScriptStruct TslGame.*e78311ab30
// Size: 0x18 (Inherited: 0x00)
struct F*e78311ab30 {
	int32 *e807e8c982; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATslPlayerState*> *476caf2e52; // 0x08(0x10)
};

// ScriptStruct TslGame.TslAnimNode_MirrorAnimation
// Size: 0xa8 (Inherited: 0x30)
struct FTslAnimNode_MirrorAnimation : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct U*8f6937916c* BoneMirrorSettings; // 0x48(0x08)
	struct U*8f6937916c* PrevBoneMirrorSettings; // 0x50(0x08)
	struct FBoneReference ItemBone; // 0x58(0x18)
	struct FBoneReference ItemBoneNewParent; // 0x70(0x18)
	char pad_88[0x20]; // 0x88(0x20)
};

// ScriptStruct TslGame.*6515d70cdc
// Size: 0x20 (Inherited: 0x00)
struct F*6515d70cdc {
	struct FName BoneName; // 0x00(0x08)
	struct FName *57ff2ac597; // 0x08(0x08)
	struct FRotator *3bbfa7433f; // 0x10(0x0c)
	enum class EAxis *aa065a7465; // 0x1c(0x01)
	enum class EAxis *482fe8da65; // 0x1d(0x01)
	bool *3d2d7e32d2; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct TslGame.*8291919851
// Size: 0x68 (Inherited: 0x00)
struct F*8291919851 {
	int32 *6363a3b2f4; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct UClass*, int32> *d8573afab7; // 0x08(0x50)
	struct TArray<struct UClass*> *9311062cef; // 0x58(0x10)
};

// ScriptStruct TslGame.*5e3a18038e
// Size: 0x28 (Inherited: 0x00)
struct F*5e3a18038e {
	float *125c520088; // 0x00(0x04)
	float *3d5808f1b0; // 0x04(0x04)
	struct FVector *47b77d9923; // 0x08(0x0c)
	struct FRotator *7730c4d21c; // 0x14(0x0c)
	float *06e8aa925d; // 0x20(0x04)
	float *1c2da0def1; // 0x24(0x04)
};

// ScriptStruct TslGame.*957b644f26
// Size: 0x20 (Inherited: 0x00)
struct F*957b644f26 {
	struct ATslPatrolPath* *65b8fd3036; // 0x00(0x08)
	struct TArray<struct F*1451cbbce7> *e95df4dd4d; // 0x08(0x10)
	enum class *dd1265e535 *6a88316359; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*1451cbbce7
// Size: 0x70 (Inherited: 0x00)
struct F*1451cbbce7 {
	struct FTransform Transform; // 0x00(0x30)
	bool *cc59a098b7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Radius; // 0x34(0x04)
	char pad_38[0x10]; // 0x38(0x10)
	bool *d912163192; // 0x48(0x01)
	enum class EStanceMode *ffe5d7a76b; // 0x49(0x01)
	enum class EStanceMode *22289bb0d9; // 0x4a(0x01)
	enum class EPatrolSpeed *f131deb1d0; // 0x4b(0x01)
	float *78a15ea52f; // 0x4c(0x04)
	bool *a406a07146; // 0x50(0x01)
	enum class *acbee09004 AIPeek; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct AActor*> *74fc472cf3; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct TslGame.*60699ab634
// Size: 0x10 (Inherited: 0x00)
struct F*60699ab634 {
	float *8251794ba2; // 0x00(0x04)
	float *4ca25dafc7; // 0x04(0x04)
	float *9f99f9eefd; // 0x08(0x04)
	float *de3dbe3394; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e144d69281
// Size: 0x10 (Inherited: 0x00)
struct F*e144d69281 {
	struct TArray<struct F*4d9a79d928> Connections; // 0x00(0x10)
};

// ScriptStruct TslGame.*7047f9f540
// Size: 0x50 (Inherited: 0x00)
struct F*7047f9f540 {
	struct TMap<struct F*ea82ab0195, struct F*89cf6a297f> *2452d2ea5e; // 0x00(0x50)
};

// ScriptStruct TslGame.*7b00f28f77
// Size: 0x20 (Inherited: 0x00)
struct F*7b00f28f77 {
	struct U*32dd3f96e9* *91b0608890; // 0x00(0x08)
	struct ATslAIWaypointSegment* path; // 0x08(0x08)
	int32 *5da133f612; // 0x10(0x04)
	bool *f6a7f554f9; // 0x14(0x01)
	bool *df4692bc4f; // 0x15(0x01)
	bool *c5116c1051; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float *37fa1cfe55; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e48e609cee
// Size: 0x10 (Inherited: 0x00)
struct F*e48e609cee {
	struct UClass* TargetClass; // 0x00(0x08)
	float Multiplier; // 0x08(0x04)
	float *f9732ea868; // 0x0c(0x04)
};

// ScriptStruct TslGame.*4b3a5c35be
// Size: 0x18 (Inherited: 0x00)
struct F*4b3a5c35be {
	enum class *aea429c698 Action; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *ed2a21fc40; // 0x08(0x08)
	float *8a8319b490; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*b22289319d
// Size: 0x14 (Inherited: 0x00)
struct F*b22289319d {
	char pad_0[0x8]; // 0x00(0x08)
	float HappenTime; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float TotalDamage; // 0x10(0x04)
};

// ScriptStruct TslGame.*c861bbc02e
// Size: 0x38 (Inherited: 0x00)
struct F*c861bbc02e {
	struct FBox Box; // 0x00(0x1c)
	float *46990d70cc; // 0x1c(0x04)
	float *608645fc40; // 0x20(0x04)
	float *06bc4684ca; // 0x24(0x04)
	float *2dae21bafb; // 0x28(0x04)
	float *a055bdd9ac; // 0x2c(0x04)
	float *e06fb1275f; // 0x30(0x04)
	float *cd1161a416; // 0x34(0x04)
};

// ScriptStruct TslGame.*ab47159a2e
// Size: 0x18 (Inherited: 0x00)
struct F*ab47159a2e {
	bool bActive; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* *40bc3cad24; // 0x08(0x08)
	float *cb4f254bf5; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*997eb0f4ce
// Size: 0x30 (Inherited: 0x00)
struct F*997eb0f4ce {
	enum class *da40bf1eb5 *e63cf6a275; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *e8dff5d734; // 0x04(0x04)
	float *f58cacc2fc; // 0x08(0x04)
	float *618f3a22bf; // 0x0c(0x04)
	struct TArray<struct F*1dd4961203> *1dd4961203; // 0x10(0x10)
	struct TArray<struct F*6e374fa780> *55d30a651e; // 0x20(0x10)
};

// ScriptStruct TslGame.*6e374fa780
// Size: 0x18 (Inherited: 0x00)
struct F*6e374fa780 {
	struct TArray<struct UClass*> *42bab541de; // 0x00(0x10)
	float *1c1aaf0153; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*1dd4961203
// Size: 0x0c (Inherited: 0x00)
struct F*1dd4961203 {
	enum class EDamageTypeCategory *0ad023d030; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *1c1aaf0153; // 0x04(0x04)
	float *618f3a22bf; // 0x08(0x04)
};

// ScriptStruct TslGame.*16ac5ec6be
// Size: 0x0c (Inherited: 0x00)
struct F*16ac5ec6be {
	enum class *da40bf1eb5 *e63cf6a275; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *e8dff5d734; // 0x04(0x04)
	float *f58cacc2fc; // 0x08(0x04)
};

// ScriptStruct TslGame.*8b6627c9a8
// Size: 0x0c (Inherited: 0x00)
struct F*8b6627c9a8 {
	enum class *da40bf1eb5 *e63cf6a275; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *e8dff5d734; // 0x04(0x04)
	float *66a53b7ab2; // 0x08(0x04)
};

// ScriptStruct TslGame.*6647ce00b3
// Size: 0x50 (Inherited: 0x00)
struct F*6647ce00b3 {
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

// ScriptStruct TslGame.*7876e18fb7
// Size: 0x3c (Inherited: 0x00)
struct F*7876e18fb7 {
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

// ScriptStruct TslGame.*06970dc1e3
// Size: 0x38 (Inherited: 0x00)
struct F*06970dc1e3 {
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

// ScriptStruct TslGame.*e3ac10d11d
// Size: 0x20 (Inherited: 0x00)
struct F*e3ac10d11d {
	struct FLinearColor RankColor; // 0x00(0x10)
	struct FStringAssetReference RankTexture; // 0x10(0x10)
};

// ScriptStruct TslGame.*be92e6ffbc
// Size: 0x60 (Inherited: 0x00)
struct F*be92e6ffbc {
	struct TArray<struct FVector> *cd4e49cc9b; // 0x00(0x10)
	struct FBox *140e83972a; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Transform; // 0x30(0x30)
};

// ScriptStruct TslGame.*241e7d8b5a
// Size: 0x18 (Inherited: 0x00)
struct F*241e7d8b5a {
	struct FName ItemID; // 0x00(0x08)
	int32 ItemStackCount; // 0x08(0x04)
	int32 Count; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*438111bb49
// Size: 0x80 (Inherited: 0x08)
struct F*438111bb49 : FTableRowBase {
	int32 CraftID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName AllowFilter; // 0x10(0x08)
	struct FName CraftItemID; // 0x18(0x08)
	float CraftTime; // 0x20(0x04)
	int32 CraftItemStackCount; // 0x24(0x04)
	struct TArray<struct F*8f7f1c6fc2> MaterialItems; // 0x28(0x10)
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

// ScriptStruct TslGame.*8f7f1c6fc2
// Size: 0x10 (Inherited: 0x00)
struct F*8f7f1c6fc2 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*49d2dfe499
// Size: 0x18 (Inherited: 0x00)
struct F*49d2dfe499 {
	int32 *e46179130a; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *91c3b04b23; // 0x08(0x08)
	int32 *2e63fd5c41; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*4421a3e820
// Size: 0x20 (Inherited: 0x00)
struct F*4421a3e820 {
	struct FString *ab8bef4970; // 0x00(0x10)
	struct FVector2D *bc70f81ca8; // 0x10(0x08)
	bool *24f3fb073b; // 0x18(0x01)
	enum class ECustomCarepackageState *82cb75ef52; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32 *5eb7f0a883; // 0x1c(0x04)
};

// ScriptStruct TslGame.*f9859ee016
// Size: 0x08 (Inherited: 0x00)
struct F*f9859ee016 {
	int32 AddWhiteZoneCarepackages; // 0x00(0x04)
	int32 AddOutsideZoneCarepackages; // 0x04(0x04)
};

// ScriptStruct TslGame.*c7a469cb3e
// Size: 0x98 (Inherited: 0x08)
struct F*c7a469cb3e : FTableRowBase {
	struct FText WeaponTag; // 0x08(0x18)
	struct FText SimpleWeaponName; // 0x20(0x18)
	struct U*388bbf1f6b* WeaponGunData; // 0x38(0x08)
	struct F*2ce7020160 WeaponFX; // 0x40(0x20)
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

// ScriptStruct TslGame.*2ce7020160
// Size: 0x20 (Inherited: 0x00)
struct F*2ce7020160 {
	struct UAkAudioEvent* FireSoundAk; // 0x00(0x08)
	struct UAkAudioEvent* FireLoopSoundAk; // 0x08(0x08)
	struct UAkAudioEvent* FireFinishSoundAk; // 0x10(0x08)
	struct UParticleSystem* MuzzleFx; // 0x18(0x08)
};

// ScriptStruct TslGame.*4e298484f4
// Size: 0x18 (Inherited: 0x00)
struct F*4e298484f4 {
	struct UClass* *8e7577bcec; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*0e47108e76
// Size: 0x18 (Inherited: 0x00)
struct F*0e47108e76 {
	bool bInitialized; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> Disabled; // 0x08(0x10)
};

// ScriptStruct TslGame.*d9fb1285d5
// Size: 0x44 (Inherited: 0x00)
struct F*d9fb1285d5 {
	struct FVector *28fcaf01b6; // 0x00(0x0c)
	float *3299e44957; // 0x0c(0x04)
	float *e31a2819fa; // 0x10(0x04)
	float *2ffb44520f; // 0x14(0x04)
	float *03ebe20ca5; // 0x18(0x04)
	enum class EWhiteZoneShape *94fd99b6a5; // 0x1c(0x01)
	bool *626707f1e5; // 0x1d(0x01)
	bool *a084ef499a; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct FVector *11f084a0b3; // 0x20(0x0c)
	char pad_2C[0x18]; // 0x2c(0x18)
};

// ScriptStruct TslGame.*13b436e4bd
// Size: 0x10 (Inherited: 0x00)
struct F*13b436e4bd {
	struct FVector *19de6f9075; // 0x00(0x0c)
	float *d180c142c5; // 0x0c(0x04)
};

// ScriptStruct TslGame.ItemTypeReplaceRow
// Size: 0x20 (Inherited: 0x08)
struct FItemTypeReplaceRow : FTableRowBase {
	enum class EItemOverrideType *cfa558c18b; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*da88fec9a1> *c8a284b3dc; // 0x10(0x10)
};

// ScriptStruct TslGame.*da88fec9a1
// Size: 0x18 (Inherited: 0x00)
struct F*da88fec9a1 {
	enum class EItemSpotGroupType *a9724abb6d; // 0x00(0x01)
	enum class EItemSpotGroupType *a303f31a6f; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct F*381ba13426> *00bae91729; // 0x08(0x10)
};

// ScriptStruct TslGame.*381ba13426
// Size: 0x02 (Inherited: 0x00)
struct F*381ba13426 {
	enum class EItemSpotType *66699820ad; // 0x00(0x01)
	enum class EItemSpotType *f2ac32fd2b; // 0x01(0x01)
};

// ScriptStruct TslGame.*32857ee627
// Size: 0x70 (Inherited: 0x08)
struct F*32857ee627 : FTableRowBase {
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

// ScriptStruct TslGame.*791cc6d74c
// Size: 0x14 (Inherited: 0x00)
struct F*791cc6d74c {
	float Damage; // 0x00(0x04)
	float DamagingStartTime; // 0x04(0x04)
	float TickCount; // 0x08(0x04)
	struct FColor FenceColor; // 0x0c(0x04)
	bool bUsePlayerFence; // 0x10(0x01)
	bool bUseOutsideDamage; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct TslGame.*0028b4ef1f
// Size: 0x60 (Inherited: 0x00)
struct F*0028b4ef1f {
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

// ScriptStruct TslGame.*829fa202fd
// Size: 0x10 (Inherited: 0x08)
struct F*829fa202fd : FTableRowBase {
	bool bAirplaneUseable; // 0x08(0x01)
	bool bTowerUseable; // 0x09(0x01)
	bool bItemUseable; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct TslGame.*e6da67af7f
// Size: 0x03 (Inherited: 0x00)
struct F*e6da67af7f {
	bool bAirplaneUseable; // 0x00(0x01)
	bool bTowerUseable; // 0x01(0x01)
	bool bItemUseable; // 0x02(0x01)
};

// ScriptStruct TslGame.*16d56e5e73
// Size: 0x18 (Inherited: 0x00)
struct F*16d56e5e73 {
	struct FName ItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*ea42b7c6fe
// Size: 0xb8 (Inherited: 0x00)
struct F*ea42b7c6fe {
	struct TMap<struct FName, struct F*2e62549546> *3046fbdd59; // 0x00(0x50)
	struct F*7e331ca72b *93e43b2cd0; // 0x50(0x50)
	struct TArray<struct FName> *5be299a14c; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct TslGame.*7e331ca72b
// Size: 0x50 (Inherited: 0x00)
struct F*7e331ca72b {
	struct TMap<struct FString, struct F*d5d59e6975> Table; // 0x00(0x50)
};

// ScriptStruct TslGame.*d5d59e6975
// Size: 0x10 (Inherited: 0x00)
struct F*d5d59e6975 {
	struct TArray<struct F*da60a6d1ed> Values; // 0x00(0x10)
};

// ScriptStruct TslGame.*da60a6d1ed
// Size: 0x18 (Inherited: 0x00)
struct F*da60a6d1ed {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*2e62549546
// Size: 0x50 (Inherited: 0x00)
struct F*2e62549546 {
	struct TMap<struct FName, struct F*3697b16723> Values; // 0x00(0x50)
};

// ScriptStruct TslGame.*3697b16723
// Size: 0x18 (Inherited: 0x00)
struct F*3697b16723 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct F*c97678990a> Elements; // 0x08(0x10)
};

// ScriptStruct TslGame.*c97678990a
// Size: 0x18 (Inherited: 0x00)
struct F*c97678990a {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*73de824137
// Size: 0x50 (Inherited: 0x00)
struct F*73de824137 {
	struct TMap<struct FName, int32> *f6b157e156; // 0x00(0x50)
};

// ScriptStruct TslGame.*2051a1edb8
// Size: 0x18 (Inherited: 0x08)
struct F*2051a1edb8 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 SpawnLimit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*925be188e3
// Size: 0x38 (Inherited: 0x08)
struct F*925be188e3 : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	int32 StackCount; // 0x18(0x04)
	int32 CountMin; // 0x1c(0x04)
	int32 CountMax; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName SpawnedItemID; // 0x28(0x08)
	struct FName TogetherItemID; // 0x30(0x08)
};

// ScriptStruct TslGame.*21df93095a
// Size: 0x38 (Inherited: 0x08)
struct F*21df93095a : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	struct FName SubCategoryFilter; // 0x18(0x08)
	int32 StackCount; // 0x20(0x04)
	int32 Weight; // 0x24(0x04)
	struct FName ItemID; // 0x28(0x08)
	struct FName SkinId; // 0x30(0x08)
};

// ScriptStruct TslGame.*c5617b0569
// Size: 0x18 (Inherited: 0x00)
struct F*c5617b0569 {
	float ProbabilityPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
};

// ScriptStruct TslGame.*e3bc007090
// Size: 0x08 (Inherited: 0x00)
struct F*e3bc007090 {
	int32 TeamPlayers; // 0x00(0x04)
	int32 SpawnCount; // 0x04(0x04)
};

// ScriptStruct TslGame.*9c3430dfdb
// Size: 0x20 (Inherited: 0x08)
struct F*9c3430dfdb : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	float LottoProb; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName LottoBoxTag; // 0x18(0x08)
};

// ScriptStruct TslGame.*870db5fc0b
// Size: 0x28 (Inherited: 0x08)
struct F*870db5fc0b : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	struct FName ValueFilter; // 0x10(0x08)
	struct FName CategoryFilter; // 0x18(0x08)
	bool ItemAmount; // 0x20(0x01)
	bool bUnique; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*6cc054b6ce
// Size: 0x40 (Inherited: 0x08)
struct F*6cc054b6ce : FTableRowBase {
	struct FName PackageName; // 0x08(0x08)
	struct FName EventName; // 0x10(0x08)
	struct TArray<struct F*ae62a094cd> *ae62a094cd; // 0x18(0x10)
	struct TArray<struct F*ae62a094cd> *4a7235a2ae; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*ae62a094cd
// Size: 0x18 (Inherited: 0x00)
struct F*ae62a094cd {
	struct FName ItemID; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	int32 *4d309e8244; // 0x0c(0x04)
	int32 *cafb0257a7; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*96c757c189
// Size: 0x30 (Inherited: 0x00)
struct F*96c757c189 {
	struct FName EventName; // 0x00(0x08)
	enum class EItemSpotGroupType *41b85a3623; // 0x08(0x01)
	enum class EItemSpotType *6887b84aa2; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 Count; // 0x0c(0x04)
	int32 *33dfe3439a; // 0x10(0x04)
	bool *2c7ffc4096; // 0x14(0x01)
	bool *f346f7effa; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32 *7cd3820dec; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct F*851df20231> *fb65059024; // 0x20(0x10)
};

// ScriptStruct TslGame.*851df20231
// Size: 0x30 (Inherited: 0x00)
struct F*851df20231 {
	struct FName PackageName; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *7819a4e32f; // 0x10(0x20)
};

// ScriptStruct TslGame.*2b81072f8a
// Size: 0x30 (Inherited: 0x08)
struct F*2b81072f8a : FTableRowBase {
	enum class EVendingMachineType VendingMachineType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UClass* VendingMachineActorClass; // 0x10(0x20)
};

// ScriptStruct TslGame.*282e2c732c
// Size: 0x40 (Inherited: 0x08)
struct F*282e2c732c : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	enum class EVendingMachineType Category; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*dcf7a4b6c5> ItemsToDrop; // 0x20(0x10)
	float Weight; // 0x30(0x04)
	bool bJackpot; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UAkAudioEvent* AkAudioEvent; // 0x38(0x08)
};

// ScriptStruct TslGame.*134e162f89
// Size: 0x20 (Inherited: 0x08)
struct F*134e162f89 : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	enum class EVendingMachineType Category; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 SpawnCount; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a4ddf92840
// Size: 0x20 (Inherited: 0x08)
struct F*a4ddf92840 : FTableRowBase {
	struct FVector Transition; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct TslGame.*e2bd7ec9b7
// Size: 0x68 (Inherited: 0x08)
struct F*e2bd7ec9b7 : FTableRowBase {
	struct FName *d3cdee113c; // 0x08(0x08)
	struct FName ItemID; // 0x10(0x08)
	struct TArray<int32> StackCount; // 0x18(0x10)
	uint32 Weight; // 0x28(0x04)
	bool *349389bb77; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *33dfe3439a; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FName> Attachments; // 0x38(0x10)
	struct F*ddb6716341 *c6c395fc9f; // 0x48(0x20)
};

// ScriptStruct TslGame.*ddb6716341
// Size: 0x20 (Inherited: 0x00)
struct F*ddb6716341 {
	struct FName ItemID; // 0x00(0x08)
	struct TArray<int32> StackCount; // 0x08(0x10)
	bool *349389bb77; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *33dfe3439a; // 0x1c(0x04)
};

// ScriptStruct TslGame.*159357e311
// Size: 0x10 (Inherited: 0x00)
struct F*159357e311 {
	struct FVector2D StartPosition; // 0x00(0x08)
	struct FVector2D EndPosition; // 0x08(0x08)
};

// ScriptStruct TslGame.*99d68d5505
// Size: 0x58 (Inherited: 0x00)
struct F*99d68d5505 {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct TslGame.*d1910e35b0
// Size: 0x30 (Inherited: 0x00)
struct F*d1910e35b0 {
	struct FText Name; // 0x00(0x18)
	enum class EStoreCategory *98fab47679; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*33a87e406b> *a90b689cbb; // 0x20(0x10)
};

// ScriptStruct TslGame.*33a87e406b
// Size: 0x40 (Inherited: 0x00)
struct F*33a87e406b {
	struct FName ID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FStringAssetReference Icon; // 0x20(0x10)
	int32 Price; // 0x30(0x04)
	int32 Count; // 0x34(0x04)
	int32 *2c861b881f; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGame.*846e312e8c
// Size: 0x10 (Inherited: 0x00)
struct F*846e312e8c {
	enum class EMarketCategoryType CategoryId; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Stock; // 0x04(0x04)
	int32 Cost; // 0x08(0x04)
	bool EssentialCategory; // 0x0c(0x01)
	bool *e0b0da1ca9; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*20e7c22338
// Size: 0xb0 (Inherited: 0x00)
struct F*20e7c22338 {
	enum class EMarketCategoryType *db361eeafc; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*fb3a83619b *a14ec24fd6; // 0x08(0x58)
	struct TMap<enum class EMarketLevel, struct F*fb3a83619b> *04f4d8bc50; // 0x60(0x50)
};

// ScriptStruct TslGame.*fb3a83619b
// Size: 0x58 (Inherited: 0x00)
struct F*fb3a83619b {
	struct UTexture2D* *91a34c2362; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FText *e9d48f0574; // 0x38(0x18)
	struct UTexture2D* *7799a874b4; // 0x50(0x08)
};

// ScriptStruct TslGame.*5470b0eb55
// Size: 0x20 (Inherited: 0x00)
struct F*5470b0eb55 {
	enum class EMarketLevel *39a9194a1b; // 0x00(0x01)
	bool *d5d01d08c5; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 *996fe3cc16; // 0x04(0x04)
	int32 *3e334afc8f; // 0x08(0x04)
	int32 *0bec3dfa36; // 0x0c(0x04)
	struct TArray<struct F*846e312e8c> *59ecfd1792; // 0x10(0x10)
};

// ScriptStruct TslGame.*eca3553b9d
// Size: 0x480 (Inherited: 0x00)
struct F*eca3553b9d {
	struct FString MapName; // 0x00(0x10)
	struct FModePresetData DefaultPresetData; // 0x10(0x460)
	struct TArray<struct FModePresetData> PresetDataList; // 0x470(0x10)
};

// ScriptStruct TslGame.ModePresetData
// Size: 0x460 (Inherited: 0x00)
struct FModePresetData {
	struct FName PresetName; // 0x00(0x08)
	bool *b59922e273; // 0x08(0x01)
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
	struct UClass* UnlockableItemPackageSpawnProcessorClass; // 0x140(0x20)
	struct UClass* InteractionSupplySpawnProcessorClass; // 0x160(0x20)
	struct UClass* GroupDeployedItemSpawnProcessorClass; // 0x180(0x20)
	struct UClass* MonsterSpawnInLevelProcessorClass; // 0x1a0(0x20)
	float AircraftTotalFlyingTime; // 0x1c0(0x04)
	bool bOverrideAircraftTotalFlyingTime; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
	float AllowRangeByBlueZone; // 0x1c8(0x04)
	bool bOverrideAllowRangeByBlueZone; // 0x1cc(0x01)
	bool *9d9e4a4c60; // 0x1cd(0x01)
	bool *334045b0fc; // 0x1ce(0x01)
	char pad_1CF[0x1]; // 0x1cf(0x01)
	struct FString EssentialSpawnKitName; // 0x1d0(0x10)
	bool *373c47174a; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct FString *e6d0aec053; // 0x1e8(0x10)
	bool *cffd6749ff; // 0x1f8(0x01)
	bool *3ae33faa30; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)
	struct TArray<struct FText> *b29c225924; // 0x200(0x10)
	float *766bd0cb86; // 0x210(0x04)
	float *bfea9ab737; // 0x214(0x04)
	bool *f0241fd356; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UDataTable* DropSpotGroupDataTable; // 0x220(0x20)
	struct UDataTable* DropItemFilterDataTable; // 0x240(0x20)
	struct UDataTable* DropItemSpawnDataTable; // 0x260(0x20)
	struct UDataTable* DropItemSpawnTogetherDataTable; // 0x280(0x20)
	struct UDataTable* DropItemTypeOverrideDataTable; // 0x2a0(0x20)
	int32 ActiveItemTypeOverrideAreaCount; // 0x2c0(0x04)
	float ActiveItemTypeOverrideAreaPercent; // 0x2c4(0x04)
	struct TMap<struct FString, struct F*8754f62c9c> ItemSpawnDataTables; // 0x2c8(0x50)
	struct UDataTable* CraftItemDataTable; // 0x318(0x20)
	struct UDataTable* VehicleSpotGroupDataTable; // 0x338(0x20)
	struct UDataTable* VehicleSpawnDataTable; // 0x358(0x20)
	struct UDataTable* EventItemPackageSpawnDataTable; // 0x378(0x20)
	struct UDataTable* BluezoneDataTable; // 0x398(0x20)
	bool *2b1f1fcbc2; // 0x3b8(0x01)
	bool *48ce59da9d; // 0x3b9(0x01)
	bool *f3f5141457; // 0x3ba(0x01)
	char pad_3BB[0x5]; // 0x3bb(0x05)
	struct UDataTable* RevivalPhaseDataTable; // 0x3c0(0x20)
	int32 *3a337d2e92; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct F*be38327e5a> MatchPreparerClasses; // 0x3e8(0x10)
	struct TArray<struct UWorld*> *7632c13e7a; // 0x3f8(0x10)
	struct TArray<struct UWorld*> *d5f468ef12; // 0x408(0x10)
	struct AAbstractRespawnProcessor* *6594f36a47; // 0x418(0x08)
	struct UClass* RespawnProcessorClass; // 0x420(0x08)
	struct UClass* WhiteZoneControllerClass; // 0x428(0x20)
	bool bEnableMonsterSystem; // 0x448(0x01)
	bool *eeb312ca55; // 0x449(0x01)
	char pad_44A[0x6]; // 0x44a(0x06)
	struct ATslMarketManager* *8c170ebccc; // 0x450(0x08)
	struct UClass* *bc82c24b8f; // 0x458(0x08)
};

// ScriptStruct TslGame.*8754f62c9c
// Size: 0x40 (Inherited: 0x00)
struct F*8754f62c9c {
	struct UDataTable* ItemSpawnDataTable; // 0x00(0x20)
	struct UDataTable* ItemSpawnTogetherDataTable; // 0x20(0x20)
};

// ScriptStruct TslGame.*121e3dc9ab
// Size: 0x68 (Inherited: 0x00)
struct F*121e3dc9ab {
	float InitialSpeed; // 0x00(0x04)
	float *214a8ed238; // 0x04(0x04)
	float *5c7fb75a9e; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*c7601f88e9> *df3b45391b; // 0x10(0x10)
	float *e19ccdf5d0; // 0x20(0x04)
	float *4d048cb359; // 0x24(0x04)
	struct U*e6746d9844* *8490a87ade; // 0x28(0x08)
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
	bool *7653dc2ae6; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct UClass* *0ad023d030; // 0x50(0x08)
	char *e4893513d0 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float WeaponSpread; // 0x5c(0x04)
	struct U*f1c3ddafe1* *2c879807ac; // 0x60(0x08)
};

// ScriptStruct TslGame.*c7601f88e9
// Size: 0x08 (Inherited: 0x00)
struct F*c7601f88e9 {
	float Damage; // 0x00(0x04)
	float Probability; // 0x04(0x04)
};

// ScriptStruct TslGame.*92441717b3
// Size: 0xd0 (Inherited: 0x00)
struct F*92441717b3 {
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
	struct U*e6746d9844* RecoilCurve; // 0x28(0x08)
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
	struct TMap<enum class EFiringMode, struct F*64359325a2> ROFRecoilMap; // 0x80(0x50)
};

// ScriptStruct TslGame.*64359325a2
// Size: 0x50 (Inherited: 0x00)
struct F*64359325a2 {
	struct TMap<enum class EAnimStance, float> StanceMap; // 0x00(0x50)
};

// ScriptStruct TslGame.*83215e03d0
// Size: 0x28 (Inherited: 0x00)
struct F*83215e03d0 {
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

// ScriptStruct TslGame.*7d5233da79
// Size: 0x78 (Inherited: 0x00)
struct F*7d5233da79 {
	struct ATslWeapon_Trajectory* Weapon; // 0x00(0x08)
	struct U*e6746d9844* *8490a87ade; // 0x08(0x08)
	struct ATslParticle* Particle; // 0x10(0x08)
	char pad_18[0x60]; // 0x18(0x60)
};

// ScriptStruct TslGame.*672bd8b247
// Size: 0x30 (Inherited: 0x08)
struct F*672bd8b247 : FTableRowBase {
	struct UTexture2D* BackgroundImage; // 0x08(0x20)
	float ApperanceModifier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*62cc1e9699
// Size: 0xd8 (Inherited: 0xa0)
struct F*62cc1e9699 : F*d3bb3ae5a4 {
	bool bIsImageOnlyLoadingScreen; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FText Title; // 0xa8(0x18)
	struct FText Description; // 0xc0(0x18)
};

// ScriptStruct TslGame.*d3bb3ae5a4
// Size: 0xa0 (Inherited: 0x08)
struct F*d3bb3ae5a4 : FTableRowBase {
	enum class ELoadingScreenType LoadingScreenType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName GameModeAlias; // 0x10(0x08)
	enum class *2cd739555d RankGuideType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UTexture2D* BackgroundImage; // 0x20(0x20)
	struct TMap<enum class ETslMapName, struct F*6b2f9c5f64> OverrideByMap; // 0x40(0x50)
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

// ScriptStruct TslGame.*6b2f9c5f64
// Size: 0x50 (Inherited: 0x00)
struct F*6b2f9c5f64 {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* BackgroundImage; // 0x30(0x20)
};

// ScriptStruct TslGame.*981e613758
// Size: 0xa8 (Inherited: 0xa0)
struct F*981e613758 : F*d3bb3ae5a4 {
	struct UClass* TipWidget; // 0xa0(0x08)
};

// ScriptStruct TslGame.*a60df04cae
// Size: 0x40 (Inherited: 0x00)
struct F*a60df04cae {
	struct TArray<struct F*6cfdd65b92> LoadingScreenTypePercentForElementaryRank; // 0x00(0x10)
	struct TArray<struct F*6cfdd65b92> LoadingScreenTypePercentForIntermediateRank; // 0x10(0x10)
	struct TArray<struct F*6cfdd65b92> LoadingScreenTypePercentForHighRank; // 0x20(0x10)
	struct TArray<struct F*6cfdd65b92> LoadingScreenTypePercentForExpertRank; // 0x30(0x10)
};

// ScriptStruct TslGame.*6cfdd65b92
// Size: 0x08 (Inherited: 0x00)
struct F*6cfdd65b92 {
	enum class ELoadingScreenType LoadingScreenType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Percent; // 0x04(0x04)
};

// ScriptStruct TslGame.*35c432afa3
// Size: 0x18 (Inherited: 0x08)
struct F*35c432afa3 : FTableRowBase {
	float ShowElementaryRankPercentForElementaryRank; // 0x08(0x04)
	float ShowElementaryRankPercentForIntermediateRank; // 0x0c(0x04)
	float ShowElementaryRankPercentForHighRank; // 0x10(0x04)
	float ShowElementaryRankPercentForExpertRank; // 0x14(0x04)
};

// ScriptStruct TslGame.*0aaadfc977
// Size: 0x28 (Inherited: 0x00)
struct F*0aaadfc977 {
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

// ScriptStruct TslGame.*cd79f44c3e
// Size: 0x20 (Inherited: 0x08)
struct F*cd79f44c3e : FTableRowBase {
	struct FName *a835478d19; // 0x08(0x08)
	struct TArray<struct F*e699a1f799> *fda83adc66; // 0x10(0x10)
};

// ScriptStruct TslGame.*294e861002
// Size: 0x38 (Inherited: 0x00)
struct F*294e861002 {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
};

// ScriptStruct TslGame.*490e6cd7e7
// Size: 0x68 (Inherited: 0x00)
struct F*490e6cd7e7 {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
	bool bIsStepper; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FText> *0e052eaaa2; // 0x40(0x10)
	int32 *0753263b9a; // 0x50(0x04)
	bool bIsSlider; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float SliderMin; // 0x58(0x04)
	float SliderMax; // 0x5c(0x04)
	float *08befd38a8; // 0x60(0x04)
	bool *73526f3299; // 0x64(0x01)
	bool *64adf01a1f; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct TslGame.*cf36bd8bd1
// Size: 0x20 (Inherited: 0x00)
struct F*cf36bd8bd1 {
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

// ScriptStruct TslGame.*d781aee95e
// Size: 0x10 (Inherited: 0x00)
struct F*d781aee95e {
	struct TArray<struct FTslGamepadInputKey> *f4f2040d63; // 0x00(0x10)
};

// ScriptStruct TslGame.*1eff9b8c89
// Size: 0xc0 (Inherited: 0x08)
struct F*1eff9b8c89 : FTableRowBase {
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

// ScriptStruct TslGame.*861aad01df
// Size: 0x30 (Inherited: 0x00)
struct F*861aad01df {
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

// ScriptStruct TslGame.*948e3cb4d3
// Size: 0x38 (Inherited: 0x00)
struct F*948e3cb4d3 {
	struct FLinearColor Color; // 0x00(0x10)
	struct FText DisplayName; // 0x10(0x18)
	struct FString ColorString; // 0x28(0x10)
};

// ScriptStruct TslGame.*e4e526733b
// Size: 0x18 (Inherited: 0x00)
struct F*e4e526733b {
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
	struct F*9f07f2774c AlternativeColor; // 0x40(0x10)
};

// ScriptStruct TslGame.TeamColorAndIcon
// Size: 0x40 (Inherited: 0x00)
struct FTeamColorAndIcon {
	struct F*9f07f2774c TeamMemberColor; // 0x00(0x10)
	struct UTexture* MarkerColorTextIcon; // 0x10(0x08)
	struct UTexture* MarkerIcon; // 0x18(0x08)
	struct UTexture* PlayerIcon; // 0x20(0x08)
	struct UTexture* CompassIcon; // 0x28(0x08)
	struct UTexture* IndicatorIcon; // 0x30(0x08)
	struct UTexture* MapDeathIcon; // 0x38(0x08)
};

// ScriptStruct TslGame.*9f07f2774c
// Size: 0x10 (Inherited: 0x00)
struct F*9f07f2774c {
	struct TArray<struct F*0c96aa5b6d> ColorSet; // 0x00(0x10)
};

// ScriptStruct TslGame.*0c96aa5b6d
// Size: 0x14 (Inherited: 0x00)
struct F*0c96aa5b6d {
	enum class EColorBlindType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
};

// ScriptStruct TslGame.*3876ce059f
// Size: 0x18 (Inherited: 0x00)
struct F*3876ce059f {
	enum class ESeatState SeatState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*9f07f2774c ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.ReticleColors
// Size: 0x18 (Inherited: 0x00)
struct FReticleColors {
	enum class EReticleType ReticleType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*9f07f2774c ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.*a3b110fca6
// Size: 0x30 (Inherited: 0x08)
struct F*a3b110fca6 : FTableRowBase {
	struct F*9f07f2774c BlindColorSet; // 0x08(0x10)
	struct FLinearColor ShadowColor; // 0x18(0x10)
	struct FVector2D ShadowOffset; // 0x28(0x08)
};

// ScriptStruct TslGame.*88fd29da36
// Size: 0x28 (Inherited: 0x00)
struct F*88fd29da36 {
	struct FText DisplayUiName; // 0x00(0x18)
	struct FString UiKey; // 0x18(0x10)
};

// ScriptStruct TslGame.*6f8d41be1c
// Size: 0x18 (Inherited: 0x00)
struct F*6f8d41be1c {
	enum class EQualityType QualityType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*83858ea748> OverrideScalabilityValues; // 0x08(0x10)
};

// ScriptStruct TslGame.*83858ea748
// Size: 0x28 (Inherited: 0x00)
struct F*83858ea748 {
	struct FString ConsoleName; // 0x00(0x10)
	enum class EValueType ValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> Values; // 0x18(0x10)
};

// ScriptStruct TslGame.*cda67ac6b9
// Size: 0x20 (Inherited: 0x00)
struct F*cda67ac6b9 {
	struct FName ModeName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct TslGame.*258b355740
// Size: 0x20 (Inherited: 0x00)
struct F*258b355740 {
	int32 QualityLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText DisplayQualityLevelName; // 0x08(0x18)
};

// ScriptStruct TslGame.*d019104415
// Size: 0x30 (Inherited: 0x00)
struct F*d019104415 {
	struct FText DisplayName; // 0x00(0x18)
	struct FName GamePadSensitiveName; // 0x18(0x08)
	float GamePadSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* GamePadCurve; // 0x28(0x08)
};

// ScriptStruct TslGame.*3cd5cb7903
// Size: 0x28 (Inherited: 0x00)
struct F*3cd5cb7903 {
	struct FText DisplayName; // 0x00(0x18)
	struct FName MouseSensitiveName; // 0x18(0x08)
	float MouseSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*4839c00bae
// Size: 0x30 (Inherited: 0x00)
struct F*4839c00bae {
	struct FName Category; // 0x00(0x08)
	struct FName AxisName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	float Scale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*99b40dd6af
// Size: 0x28 (Inherited: 0x00)
struct F*99b40dd6af {
	struct FName Category; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct TslGame.*2262b0e4bc
// Size: 0x30 (Inherited: 0x00)
struct F*2262b0e4bc {
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

// ScriptStruct TslGame.*185c3cd6eb
// Size: 0x10 (Inherited: 0x00)
struct F*185c3cd6eb {
	struct FName *cd16d67016; // 0x00(0x08)
	struct FName *48b1c63397; // 0x08(0x08)
};

// ScriptStruct TslGame.*5bc52cd829
// Size: 0x14 (Inherited: 0x00)
struct F*5bc52cd829 {
	float CapsuleHalfHeight; // 0x00(0x04)
	float CapsuleRadius; // 0x04(0x04)
	struct FVector CapsuleOffset; // 0x08(0x0c)
};

// ScriptStruct TslGame.*8f0bd40e4a
// Size: 0x10 (Inherited: 0x00)
struct F*8f0bd40e4a {
	struct TArray<struct FString> Values; // 0x00(0x10)
};

// ScriptStruct TslGame.*d6d8714f0c
// Size: 0x20 (Inherited: 0x00)
struct F*d6d8714f0c {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*e7875a988b
// Size: 0x18 (Inherited: 0x00)
struct F*e7875a988b {
	struct FString CustomStringParameter; // 0x00(0x10)
	float MinLimit; // 0x10(0x04)
	float MaxLimit; // 0x14(0x04)
};

// ScriptStruct TslGame.*edbf446369
// Size: 0x0c (Inherited: 0x00)
struct F*edbf446369 {
	float ReviveCastingTime; // 0x00(0x04)
	float MultiplierGroggyDamagePerSecond; // 0x04(0x04)
	float MultiplierPunchDamage; // 0x08(0x04)
};

// ScriptStruct TslGame.*3ea4ce5f34
// Size: 0x10 (Inherited: 0x00)
struct F*3ea4ce5f34 {
	struct TArray<struct FStringAssetReference> References; // 0x00(0x10)
};

// ScriptStruct TslGame.*db5f491e56
// Size: 0x14 (Inherited: 0x00)
struct F*db5f491e56 {
	int32 Index; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	enum class EMarketLevel *39a9194a1b; // 0x10(0x01)
	bool *3d11cc535c; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct TslGame.*298ad9fd8b
// Size: 0x14 (Inherited: 0x00)
struct F*298ad9fd8b {
	int32 Index; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	enum class EBlueChipTowerState *65f014da26; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*61f012737a
// Size: 0x10 (Inherited: 0x00)
struct F*61f012737a {
	struct TArray<struct ATeam*> *daedfb5a9f; // 0x00(0x10)
};

// ScriptStruct TslGame.*8eaecee991
// Size: 0x05 (Inherited: 0x00)
struct F*8eaecee991 {
	struct F*30d793b45d Round; // 0x00(0x02)
	struct F*30d793b45d *e4372a19d0; // 0x02(0x02)
	bool *f444e23a4c; // 0x04(0x01)
};

// ScriptStruct TslGame.*30d793b45d
// Size: 0x02 (Inherited: 0x00)
struct F*30d793b45d {
	int8 *d2c2d28a12; // 0x00(0x01)
	int8 *c0773c8021; // 0x01(0x01)
};

// ScriptStruct TslGame.*6d774d3780
// Size: 0x10 (Inherited: 0x00)
struct F*6d774d3780 {
	struct FName Name; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*97a6d33863
// Size: 0x38 (Inherited: 0x00)
struct F*97a6d33863 {
	enum class ESpecialZoneType *4900723c14; // 0x00(0x01)
	enum class ESpecialZoneState *22a41127e6; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *9000221b6a; // 0x04(0x04)
	struct FVector2D *04b5b97b3e; // 0x08(0x08)
	struct TArray<struct FVector2D> *2ba590c898; // 0x10(0x10)
	struct TArray<struct FRotator> *2fe9b09a77; // 0x20(0x10)
	float *b172ae78ef; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*4d74815ca8
// Size: 0x0c (Inherited: 0x00)
struct F*4d74815ca8 {
	bool bEnabled; // 0x00(0x01)
	bool *1f616dcb4e; // 0x01(0x01)
	bool *782716119a; // 0x02(0x01)
	bool *ce77823535; // 0x03(0x01)
	float AircraftCooldown; // 0x04(0x04)
	float *930b9bc018; // 0x08(0x04)
};

// ScriptStruct TslGame.*a061519861
// Size: 0x10 (Inherited: 0x00)
struct F*a061519861 {
	struct FName ItemID; // 0x00(0x08)
	int32 Limits; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*c8cb94db1c
// Size: 0x18 (Inherited: 0x00)
struct F*c8cb94db1c {
	struct FVector HitLocation; // 0x00(0x0c)
	struct FVector AttackerLocation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*06a1449bc8
// Size: 0x48 (Inherited: 0x08)
struct F*06a1449bc8 : FTableRowBase {
	enum class EFExplosivePropDataType *0431d38853; // 0x08(0x01)
	bool *22025741e1; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *d3a7dcdbff; // 0x0c(0x04)
	float *1756183b41; // 0x10(0x04)
	float *7151386f6e; // 0x14(0x04)
	float *3f3958f55b; // 0x18(0x04)
	float *7a45b5b8dd; // 0x1c(0x04)
	float *6111c1db5e; // 0x20(0x04)
	float *25892ca5f2; // 0x24(0x04)
	struct UCurveFloat* *ca81a542cc; // 0x28(0x08)
	struct UClass* *8a1dd6595f; // 0x30(0x08)
	struct FVector *62fd9b4f41; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*f3fae91a50
// Size: 0x18 (Inherited: 0x08)
struct F*f3fae91a50 : FTableRowBase {
	struct FString *304143fb2e; // 0x08(0x10)
};

// ScriptStruct TslGame.*87059369ca
// Size: 0x68 (Inherited: 0x00)
struct F*87059369ca {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct U*0123b311c3* *0123b311c3; // 0x40(0x08)
	struct U*2cf408cbfb* ReactionDoorData; // 0x48(0x08)
	struct FVector *c180426bff; // 0x50(0x0c)
	float BoundsScale; // 0x5c(0x04)
	char LightingChannel0 : 1; // 0x60(0x01)
	char LightingChannel1 : 1; // 0x60(0x01)
	char *24be6c06ae : 1; // 0x60(0x01)
	char pad_60_3 : 5; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.*aca2d950e3
// Size: 0x28 (Inherited: 0x00)
struct F*aca2d950e3 {
	struct UPrimitiveComponent* *6fe1f23690; // 0x00(0x08)
	struct FVector_NetQuantize Location; // 0x08(0x0c)
	struct FVector_NetQuantize Velocity; // 0x14(0x0c)
	bool *0b83815b24; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*276af797ce
// Size: 0x30 (Inherited: 0x00)
struct F*276af797ce {
	struct UPrimitiveComponent* *6fe1f23690; // 0x00(0x08)
	struct UPrimitiveComponent* *7d6f7c81cf; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	uint16 *039db82076; // 0x28(0x02)
	bool *fbbef2fce7; // 0x2a(0x01)
	bool *5a295e5eae; // 0x2b(0x01)
	bool *0b83815b24; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct TslGame.*2918229534
// Size: 0x48 (Inherited: 0x00)
struct F*2918229534 {
	struct FRotator *ca286a93c3; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct USceneComponent* *6387cd5748; // 0x28(0x08)
	struct U*af5a42646d* ThrowableConfig; // 0x30(0x08)
	bool *1e70e89979; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName MeshSocket; // 0x40(0x08)
};

// ScriptStruct TslGame.*7b76a12886
// Size: 0x58 (Inherited: 0x50)
struct F*7b76a12886 : F*327e2c5151 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*9cbd82b3e9
// Size: 0x28 (Inherited: 0x00)
struct F*9cbd82b3e9 {
	struct UItem* Item; // 0x00(0x08)
	struct F*40ead7aa89 *d40ae4b267; // 0x08(0x0c)
	char pad_14[0x14]; // 0x14(0x14)
};

// ScriptStruct TslGame.*7176ffb827
// Size: 0x30 (Inherited: 0x00)
struct F*7176ffb827 {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*9f335e542d RegionalSetting; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*9f335e542d
// Size: 0x24 (Inherited: 0x00)
struct F*9f335e542d {
	float FogDensity; // 0x00(0x04)
	struct FLinearColor FogColor; // 0x04(0x10)
	float FogStartDistance; // 0x14(0x04)
	float VolFogExtinctionScale; // 0x18(0x04)
	float WeatherParticleSpawnScale; // 0x1c(0x04)
	float WindScale; // 0x20(0x04)
};

// ScriptStruct TslGame.*bc3746a61e
// Size: 0x28 (Inherited: 0x00)
struct F*bc3746a61e {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *4638489964; // 0x08(0x10)
	struct TArray<struct F*d3b25cc21e> *584ffff253; // 0x18(0x10)
};

// ScriptStruct TslGame.*d3b25cc21e
// Size: 0x28 (Inherited: 0x00)
struct F*d3b25cc21e {
	int32 ColorIndex; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *24a2c62c8d; // 0x08(0x20)
};

// ScriptStruct TslGame.*c4edf71823
// Size: 0x28 (Inherited: 0x00)
struct F*c4edf71823 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *7c5b168a9c; // 0x08(0x10)
	struct TArray<struct F*4d3d4bd3e6> *584ffff253; // 0x18(0x10)
};

// ScriptStruct TslGame.*4d3d4bd3e6
// Size: 0x48 (Inherited: 0x00)
struct F*4d3d4bd3e6 {
	int32 ColorIndex; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *afbafe114b; // 0x08(0x20)
	struct UCustomizableObject* *ac89242fa9; // 0x28(0x20)
};

// ScriptStruct TslGame.*48d8b68617
// Size: 0x10 (Inherited: 0x00)
struct F*48d8b68617 {
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*b6f659eb1b
// Size: 0x18 (Inherited: 0x00)
struct F*b6f659eb1b {
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

// ScriptStruct TslGame.*e7af6a5eac
// Size: 0x40 (Inherited: 0x00)
struct F*e7af6a5eac {
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

// ScriptStruct TslGame.*f62e5afa1f
// Size: 0x548 (Inherited: 0x288)
struct F*f62e5afa1f : F*7c826e43af {
	struct U*d3160f9859* WeaponAttachmentData; // 0x288(0x08)
	struct FWeaponAttachmentData AttachmentData; // 0x290(0x250)
	struct UStaticMesh* AttachmentMeshAsset; // 0x4e0(0x20)
	struct FName AttachmentMeshName; // 0x500(0x08)
	struct TArray<struct F*0b626baaa9> AttachmentWeaponTagData; // 0x508(0x10)
	struct UClass* AttachmentTemplate; // 0x518(0x08)
	bool EquipOnPickUp; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct UAkAudioEvent* *632b7247e3; // 0x528(0x20)
};

// ScriptStruct TslGame.*4b37494377
// Size: 0x60 (Inherited: 0x08)
struct F*4b37494377 : FTableRowBase {
	int32 Priority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UClass*> Conditions; // 0x10(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x20(0x10)
	struct TArray<struct F*f4e60a92fb> *6e64b3cdc7; // 0x30(0x10)
	struct TArray<struct FName> KeyHintInfoRowNames; // 0x40(0x10)
	struct TArray<struct F*1ef0b369f2> *285bd5cc41; // 0x50(0x10)
};

// ScriptStruct TslGame.*1ef0b369f2
// Size: 0xb0 (Inherited: 0x08)
struct F*1ef0b369f2 : FTableRowBase {
	bool ShowWhenUnassigned; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*e699a1f799> ActionsAndAxes; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	struct FText InputModeText; // 0x38(0x18)
	struct FSlateColor DisplayNameColor; // 0x50(0x28)
	bool *0142d6ce18; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct UClass*> AdditionalConditions; // 0x80(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x90(0x10)
	struct TArray<struct F*f4e60a92fb> *6e64b3cdc7; // 0xa0(0x10)
};

// ScriptStruct TslGame.*f4e60a92fb
// Size: 0x58 (Inherited: 0x08)
struct F*f4e60a92fb : FTableRowBase {
	enum class ETableCheckerHideOption *8b69c670f7; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *89628161a7; // 0x10(0x08)
	struct TArray<struct FString> *05e561f989; // 0x18(0x10)
	struct TArray<struct FString> *b8b34421ad; // 0x28(0x10)
	struct TArray<struct FString> *79d2ee9eb8; // 0x38(0x10)
	struct TArray<struct FString> *f6873a04f6; // 0x48(0x10)
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

// ScriptStruct TslGame.*f1458f08c8
// Size: 0x10 (Inherited: 0x00)
struct F*f1458f08c8 {
	struct TArray<struct FOutgameUserData> OutGameUserDateSet; // 0x00(0x10)
};

// ScriptStruct TslGame.OutgameUserData
// Size: 0x20 (Inherited: 0x00)
struct FOutgameUserData {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*57eb541457
// Size: 0x20 (Inherited: 0x00)
struct F*57eb541457 {
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

// ScriptStruct TslGame.*b2dbcf6559
// Size: 0x88 (Inherited: 0x00)
struct F*b2dbcf6559 {
	struct FString MatchingState; // 0x00(0x10)
	int32 MatchingElasedSeconds; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Address; // 0x18(0x10)
	struct FWuUdpEncryptionKey Key; // 0x28(0x30)
	struct FString InSessionId; // 0x58(0x10)
	struct FString InSessionZkToken; // 0x68(0x10)
	struct FString InModeName; // 0x78(0x10)
};

// ScriptStruct TslGame.*7496257447
// Size: 0x20 (Inherited: 0x00)
struct F*7496257447 {
	struct FString URL; // 0x00(0x10)
	struct FString Packet; // 0x10(0x10)
};

// ScriptStruct TslGame.*91d1e1748e
// Size: 0x38 (Inherited: 0x00)
struct F*91d1e1748e {
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
// Size: 0x3f8 (Inherited: 0x3d8)
struct FItemTableRowCastableSelectBox : FItemTableRowCastable {
	struct TArray<struct FName> SelectableItems; // 0x3d8(0x10)
	int32 SelectCount; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UClass* *781055037e; // 0x3f0(0x08)
};

// ScriptStruct TslGame.*2709050f0a
// Size: 0x0c (Inherited: 0x00)
struct F*2709050f0a {
	float BeforeDurationSec; // 0x00(0x04)
	float AfterDurationSec; // 0x04(0x04)
	float LinkWaitDurationSec; // 0x08(0x04)
};

// ScriptStruct TslGame.*3d7ca3179e
// Size: 0x138 (Inherited: 0x00)
struct F*3d7ca3179e {
	enum class ECharacterInteractBehaviorType CharacterInteractBehaviorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxInteractableDistance; // 0x04(0x04)
	struct F*59709b63e2 AdditionalCastConfig; // 0x08(0x130)
};

// ScriptStruct TslGame.ItemTableRowCraft
// Size: 0x288 (Inherited: 0x288)
struct FItemTableRowCraft : F*7c826e43af {
};

// ScriptStruct TslGame.ItemTableRowBluechip
// Size: 0x3b8 (Inherited: 0x288)
struct FItemTableRowBluechip : F*7c826e43af {
	struct F*59709b63e2 *59709b63e2; // 0x288(0x130)
};

// ScriptStruct TslGame.ItemTableRowCastableEquipmentRepairKit
// Size: 0x3e0 (Inherited: 0x3d8)
struct FItemTableRowCastableEquipmentRepairKit : FItemTableRowCastable {
	enum class EEquipSlotID EquipSlot; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float RepairAmount; // 0x3dc(0x04)
};

// ScriptStruct TslGame.ItemTableRowCastableHealOverTime
// Size: 0x3f8 (Inherited: 0x3d8)
struct FItemTableRowCastableHealOverTime : FItemTableRowCastable {
	struct UClass* *392309d69c; // 0x3d8(0x20)
};

// ScriptStruct TslGame.ItemTableRowCastableHealInstant
// Size: 0x3e0 (Inherited: 0x3d8)
struct FItemTableRowCastableHealInstant : FItemTableRowCastable {
	float *231acf3590; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
};

// ScriptStruct TslGame.ItemTableRowCastableRandomBox
// Size: 0x3e8 (Inherited: 0x3d8)
struct FItemTableRowCastableRandomBox : FItemTableRowCastable {
	struct TArray<struct F*c62c0dcb56> RandomBoxDatas; // 0x3d8(0x10)
};

// ScriptStruct TslGame.*c62c0dcb56
// Size: 0x108 (Inherited: 0x00)
struct F*c62c0dcb56 {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*162df8b717 SpawnKitInfo; // 0x08(0x100)
};

// ScriptStruct TslGame.ItemTableRowCastableVehicleRepairKit
// Size: 0x3e0 (Inherited: 0x3d8)
struct FItemTableRowCastableVehicleRepairKit : FItemTableRowCastable {
	float RepairAmount; // 0x3d8(0x04)
	float VehicleSpeedThreshold; // 0x3dc(0x04)
};

// ScriptStruct TslGame.*09f361d0a3
// Size: 0x460 (Inherited: 0x430)
struct F*09f361d0a3 : F*e85a5541ce {
	struct UClass* WeaponType; // 0x430(0x20)
	struct FName WeaponTag; // 0x450(0x08)
	enum class EWeaponDisplayTypes WeaponDisplayType; // 0x458(0x01)
	bool bShowAmmoInfoOnWidget; // 0x459(0x01)
	char pad_45A[0x6]; // 0x45a(0x06)
};

// ScriptStruct TslGame.*29ca340c0f
// Size: 0x470 (Inherited: 0x460)
struct F*29ca340c0f : F*09f361d0a3 {
	int32 AmmoCount; // 0x460(0x04)
	int32 ForcedPrimarySlotIndex; // 0x464(0x04)
	bool bDisablePrimaryWeaponSwap; // 0x468(0x01)
	bool bDisableDropAndDetachAttachments; // 0x469(0x01)
	bool bHasNumberOfUses; // 0x46a(0x01)
	char pad_46B[0x1]; // 0x46b(0x01)
	int32 NumberOfUses; // 0x46c(0x04)
};

// ScriptStruct TslGame.*ee8b7264d1
// Size: 0x478 (Inherited: 0x470)
struct F*ee8b7264d1 : F*29ca340c0f {
	int32 DebuffChargesCount; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
};

// ScriptStruct TslGame.*e6c15e702f
// Size: 0x530 (Inherited: 0x430)
struct F*e6c15e702f : F*e85a5541ce {
	int32 ItemLevel; // 0x430(0x04)
	char pad_434[0xc]; // 0x434(0x0c)
	struct FTransform SlotOffset_Primary; // 0x440(0x30)
	struct FTransform SlotOffset_Secondary; // 0x470(0x30)
	struct FTransform SlotOffset_SideArm; // 0x4a0(0x30)
	struct FTransform SlotOffset_Melee; // 0x4d0(0x30)
	struct FTransform SlotOffset_Thrown; // 0x500(0x30)
};

// ScriptStruct TslGame.*9e64f20b7a
// Size: 0x20 (Inherited: 0x00)
struct F*9e64f20b7a {
	bool *302b9d20cd; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *9ce6e3ba62; // 0x08(0x08)
	bool *7cbca82f08; // 0x10(0x01)
	bool bOverrideOverlapSolveMethod; // 0x11(0x01)
	enum class EBuffOverlapSolveMethod *285209c485; // 0x12(0x01)
	bool bOverrideBuffDuration; // 0x13(0x01)
	float *7710540b83; // 0x14(0x04)
	bool bOverrideInfinite; // 0x18(0x01)
	bool *b0fd7714a6; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.ItemTableRowEvent
// Size: 0x288 (Inherited: 0x288)
struct FItemTableRowEvent : F*7c826e43af {
};

// ScriptStruct TslGame.*f2685501ea
// Size: 0x30 (Inherited: 0x00)
struct F*f2685501ea {
	int32 BundleId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString BundleName; // 0x08(0x10)
	enum class ELobbyItemBundleType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*6deac14ab6> *dead927ae2; // 0x20(0x10)
};

// ScriptStruct TslGame.*6deac14ab6
// Size: 0x28 (Inherited: 0x00)
struct F*6deac14ab6 {
	struct UClass* *b61365623b; // 0x00(0x20)
	int32 BundleId; // 0x20(0x04)
	int32 Quantity; // 0x24(0x04)
};

// ScriptStruct TslGame.ItemTableRowUsedByAction
// Size: 0x288 (Inherited: 0x288)
struct FItemTableRowUsedByAction : F*7c826e43af {
};

// ScriptStruct TslGame.*ae7cb4e85e
// Size: 0x10 (Inherited: 0x00)
struct F*ae7cb4e85e {
	struct TArray<struct UItemSpotComponent*> *bbcaa67c48; // 0x00(0x10)
};

// ScriptStruct TslGame.*c32c014c85
// Size: 0x50 (Inherited: 0x00)
struct F*c32c014c85 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*1db16a7321
// Size: 0x20 (Inherited: 0x08)
struct F*1db16a7321 : FTableRowBase {
	struct FName OriginItemID; // 0x08(0x08)
	struct FName SwitchItemID; // 0x10(0x08)
	int32 SwitchItemCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*cf0a1841c8
// Size: 0x10 (Inherited: 0x00)
struct F*cf0a1841c8 {
	struct FName Name; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*33dd0cee7e
// Size: 0x08 (Inherited: 0x00)
struct F*33dd0cee7e {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*a3b48fbdb0
// Size: 0x20 (Inherited: 0x08)
struct F*a3b48fbdb0 : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	float CategoryFilterWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*b44c3cb823
// Size: 0x38 (Inherited: 0x08)
struct F*b44c3cb823 : FTableRowBase {
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

// ScriptStruct TslGame.*b6fe6ca493
// Size: 0x5c8 (Inherited: 0x00)
struct F*b6fe6ca493 {
	enum class EItemSpotGroupType SpotGroupType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotGroupPercent; // 0x04(0x04)
	struct TArray<struct F*2bb0da7ba4> SpotTypeProperties; // 0x08(0x10)
	char pad_18[0x5b0]; // 0x18(0x5b0)
};

// ScriptStruct TslGame.*2bb0da7ba4
// Size: 0x38 (Inherited: 0x00)
struct F*2bb0da7ba4 {
	enum class EItemSpotType SpotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotPercentMin; // 0x04(0x04)
	float SpotPercentMax; // 0x08(0x04)
	int32 ItemsPerSpotMin; // 0x0c(0x04)
	int32 ItemsPerSpotMax; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*cf0a1841c8> WeightsPerValue; // 0x18(0x10)
	struct TArray<struct F*cf0a1841c8> WeightsPerCategory; // 0x28(0x10)
};

// ScriptStruct TslGame.*e304ba73fe
// Size: 0xc0 (Inherited: 0x08)
struct F*e304ba73fe : FTableRowBase {
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

// ScriptStruct TslGame.*1803ad680a
// Size: 0x10 (Inherited: 0x00)
struct F*1803ad680a {
	struct TArray<struct F*b6fe6ca493> RawSpotGroupProperties; // 0x00(0x10)
};

// ScriptStruct TslGame.*af6b2029cf
// Size: 0x18 (Inherited: 0x00)
struct F*af6b2029cf {
	struct FName *37ddc581e7; // 0x00(0x08)
	int32 FirstChildIndex; // 0x08(0x04)
	int32 *145af59e96; // 0x0c(0x04)
	enum class EItemSpotGroupType *41b85a3623; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*3ceaf727b3
// Size: 0x10 (Inherited: 0x00)
struct F*3ceaf727b3 {
	struct FVector Location; // 0x00(0x0c)
	int32 *a91929da08; // 0x0c(0x04)
};

// ScriptStruct TslGame.*4ac79c171e
// Size: 0x20 (Inherited: 0x00)
struct F*4ac79c171e {
	struct FVector *464c9f6920; // 0x00(0x0c)
	struct F*40ead7aa89 *d40ae4b267; // 0x0c(0x0c)
	uint32 HouseID; // 0x18(0x04)
	enum class EItemSpotType *95d0fdb9b0; // 0x1c(0x01)
	bool *de546d32ca; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct TslGame.*a32cc15256
// Size: 0x20 (Inherited: 0x00)
struct F*a32cc15256 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FName *37ddc581e7; // 0x18(0x08)
};

// ScriptStruct TslGame.*9e0d5aae3b
// Size: 0x28 (Inherited: 0x00)
struct F*9e0d5aae3b {
	struct AActor* *9cb6d385bb; // 0x00(0x08)
	float *e05e4dd023; // 0x08(0x04)
	float *f0199ba6da; // 0x0c(0x04)
	float *86ecf4006f; // 0x10(0x04)
	float *e2167106d8; // 0x14(0x04)
	struct FVector *af823cd1b8; // 0x18(0x0c)
	float *4663f593be; // 0x24(0x04)
};

// ScriptStruct TslGame.*346e0bbdde
// Size: 0x18 (Inherited: 0x00)
struct F*346e0bbdde {
	float *cd2e562cf6; // 0x00(0x04)
	float *c2574d5ae1; // 0x04(0x04)
	float *a192906868; // 0x08(0x04)
	float *7ff24b7f0f; // 0x0c(0x04)
	float *134d996ae6; // 0x10(0x04)
	float *35af33bd29; // 0x14(0x04)
};

// ScriptStruct TslGame.*3a82328015
// Size: 0xe8 (Inherited: 0x00)
struct F*3a82328015 {
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
	enum class ECollisionChannel *6d27ad4641; // 0x24(0x01)
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
	struct F*346e0bbdde DamageThreatConfig; // 0x6c(0x18)
	struct F*346e0bbdde SightThreatConfig; // 0x84(0x18)
	struct F*346e0bbdde NoiseThreatConfig; // 0x9c(0x18)
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

// ScriptStruct TslGame.*beaac82990
// Size: 0x28 (Inherited: 0x08)
struct F*beaac82990 : FTableRowBase {
	enum class ELocationType LocationType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<bool> VisibilityByZoom; // 0x10(0x10)
	float DesiredAlpha; // 0x20(0x04)
	int32 DesiredFontSize; // 0x24(0x04)
};

// ScriptStruct TslGame.*406acecf4a
// Size: 0x0c (Inherited: 0x00)
struct F*406acecf4a {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*41dc5179a5
// Size: 0x28 (Inherited: 0x00)
struct F*41dc5179a5 {
	enum class ELocationType LocationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText LocationName; // 0x08(0x18)
	struct FVector2D Position_MC; // 0x20(0x08)
};

// ScriptStruct TslGame.*c0938421e0
// Size: 0x18 (Inherited: 0x00)
struct F*c0938421e0 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*b4081e6ef3
// Size: 0x10 (Inherited: 0x08)
struct F*b4081e6ef3 : FTableRowBase {
	struct UClass* LobbySceneTravelClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*dff9637396
// Size: 0x180 (Inherited: 0xe0)
struct F*dff9637396 : F*89483cd256 {
	struct TMap<enum class ELobbyCustomizingSlotType, struct F*8b69477467> CustomizeLobbyModeScenePivots; // 0xe0(0x50)
	struct TMap<struct FString, struct FVector> AdditionalItemLocationOffset; // 0x130(0x50)
};

// ScriptStruct TslGame.*89483cd256
// Size: 0xe0 (Inherited: 0xa0)
struct F*89483cd256 : F*ce3daa108e {
	struct TArray<struct FName> LobbyCharacterPivotTags; // 0xa0(0x10)
	struct TArray<struct F*e136b65d68> LobbyEquipWeaponDatas; // 0xb0(0x10)
	char pad_C0[0x20]; // 0xc0(0x20)
};

// ScriptStruct TslGame.*ce3daa108e
// Size: 0xa0 (Inherited: 0x08)
struct F*ce3daa108e : FTableRowBase {
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
	enum class *0662b54277 LobbyBlurChangingStates; // 0x75(0x01)
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

// ScriptStruct TslGame.*e136b65d68
// Size: 0x18 (Inherited: 0x00)
struct F*e136b65d68 {
	struct FName WeaponId; // 0x00(0x08)
	struct TArray<struct FName> WeaponAttachmentIDList; // 0x08(0x10)
};

// ScriptStruct TslGame.*8b69477467
// Size: 0x10 (Inherited: 0x00)
struct F*8b69477467 {
	struct TArray<struct F*056ede6349> CusLobbyScenePivotsDesc; // 0x00(0x10)
};

// ScriptStruct TslGame.*056ede6349
// Size: 0x10 (Inherited: 0x00)
struct F*056ede6349 {
	struct FName CustomizeObjectPivotTag; // 0x00(0x08)
	struct AActor* *493884704b; // 0x08(0x08)
};

// ScriptStruct TslGame.*2933f0c813
// Size: 0x190 (Inherited: 0xa0)
struct F*2933f0c813 : F*ce3daa108e {
	struct TMap<enum class EViewModeCategory, struct FName> ViewModePivots; // 0xa0(0x50)
	struct TArray<enum class EViewModeCategory> DisableScaleList; // 0xf0(0x10)
	struct TArray<enum class EViewModeCategory> DisableYAxisList; // 0x100(0x10)
	struct TArray<enum class EViewModeCategory> DisableRotationRollbackList; // 0x110(0x10)
	struct TArray<enum class EViewModeCategory> DisableZoomList; // 0x120(0x10)
	struct TMap<enum class EViewModeCategory, struct F*0d14ecd6da> TargetObjectRatationRanges; // 0x130(0x50)
	struct FVector2D LoadingSpinnerOffset; // 0x180(0x08)
	bool bAllowZoom; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
};

// ScriptStruct TslGame.*0d14ecd6da
// Size: 0x10 (Inherited: 0x00)
struct F*0d14ecd6da {
	struct FFloatInterval PitchRange; // 0x00(0x08)
	struct FFloatInterval RollRange; // 0x08(0x08)
};

// ScriptStruct TslGame.*2ef62a7fe4
// Size: 0x60 (Inherited: 0x08)
struct F*2ef62a7fe4 : FTableRowBase {
	struct UAnimSequence* PlayerPose; // 0x08(0x08)
	struct FTransform SurvivalPageTransform; // 0x10(0x30)
	struct FString SurvivalPageScene; // 0x40(0x10)
	struct UClass* PoseAsset; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct TslGame.*5a3c0fb20f
// Size: 0x20 (Inherited: 0x00)
struct F*5a3c0fb20f {
	struct TArray<struct ATslArenaPlayerStart*> PlayerStart; // 0x00(0x10)
	struct ATslArenaPlayerStart* *f02919a6ab; // 0x10(0x08)
	struct ATslArenaPlayerStart* *54e2552cd5; // 0x18(0x08)
};

// ScriptStruct TslGame.*8aae456083
// Size: 0x20 (Inherited: 0x00)
struct F*8aae456083 {
	struct TArray<struct FLinearColor> Vectors; // 0x00(0x10)
	struct TArray<struct UTexture*> Textures; // 0x10(0x10)
};

// ScriptStruct TslGame.*71819be89e
// Size: 0x18 (Inherited: 0x00)
struct F*71819be89e {
	struct FName Name; // 0x00(0x08)
	enum class EMaterialParameterType Type; // 0x08(0x01)
	bool *c07afc407d; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 *0d3239c6e1; // 0x0c(0x04)
	enum class EParameterLUTChannel *993291e4e4; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*4b87dd4124
// Size: 0x70 (Inherited: 0x08)
struct F*4b87dd4124 : FTableRowBase {
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

// ScriptStruct TslGame.*f51761a1b1
// Size: 0x14 (Inherited: 0x00)
struct F*f51761a1b1 {
	bool *22ec18291d; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct UPrimitiveComponent* *638f223a82; // 0x04(0x08)
	uint16 *ad95ae8ee2; // 0x0c(0x02)
	uint16 InstanceIndex; // 0x0e(0x02)
	bool *654b23e69f; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*b66d43f668
// Size: 0x18 (Inherited: 0x00)
struct F*b66d43f668 {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ATslCharacter* Instigator; // 0x10(0x08)
};

// ScriptStruct TslGame.*6b6567e05e
// Size: 0x10 (Inherited: 0x00)
struct F*6b6567e05e {
	struct TArray<struct F*0da743f22f> TeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*0da743f22f
// Size: 0x38 (Inherited: 0x00)
struct F*0da743f22f {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	struct FString TeamName; // 0x08(0x10)
	struct TArray<struct F*018c17f6ed> PlayersInfo; // 0x18(0x10)
	struct TArray<bool> RoundHistory; // 0x28(0x10)
};

// ScriptStruct TslGame.*018c17f6ed
// Size: 0x30 (Inherited: 0x14)
struct F*018c17f6ed : F*7fe32abc47 {
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
	enum class EOutGamePlatformProvider PlatformProvider; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*91a10d11f5
// Size: 0x10 (Inherited: 0x00)
struct F*91a10d11f5 {
	struct TArray<struct F*c64f847983> StaticTeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*c64f847983
// Size: 0x28 (Inherited: 0x00)
struct F*c64f847983 {
	int32 TeamId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TeamName; // 0x08(0x10)
	struct TArray<struct F*565c412cb4> StaticPlayersInfo; // 0x18(0x10)
};

// ScriptStruct TslGame.*565c412cb4
// Size: 0x18 (Inherited: 0x00)
struct F*565c412cb4 {
	struct FString Name; // 0x00(0x10)
	int32 MemberIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*108270860b
// Size: 0x3c (Inherited: 0x00)
struct F*108270860b {
	struct FVector LerpSafetyZonePosition; // 0x00(0x0c)
	float LerpSafetyZoneRadius; // 0x0c(0x04)
	struct FVector LerpBlueZonePosition; // 0x10(0x0c)
	float LerpBlueZoneRadius; // 0x1c(0x04)
	float *1c475badeb; // 0x20(0x04)
	float BlueZoneBeginRadius; // 0x24(0x04)
	struct FVector BlueZoneBeginPosition; // 0x28(0x0c)
	float ElapsedBlueZoneReleaseDuration; // 0x34(0x04)
	float ElapsedWarningDurationForClient; // 0x38(0x04)
};

// ScriptStruct TslGame.*a43874dd70
// Size: 0x18 (Inherited: 0x00)
struct F*a43874dd70 {
	int32 CurrentStage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*af4c2af262> BlueZoneStatusDataArray; // 0x08(0x10)
};

// ScriptStruct TslGame.*af4c2af262
// Size: 0x68 (Inherited: 0x00)
struct F*af4c2af262 {
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
	int32 *d93468be5f; // 0x3c(0x04)
	struct FVector SafetyZoneInitialPosition; // 0x40(0x0c)
	float SafetyZoneInitialRadius; // 0x4c(0x04)
	int32 *144b6781e3; // 0x50(0x04)
	float *5d5b4c636e; // 0x54(0x04)
	float *71b0336f09; // 0x58(0x04)
	float *bdf26e07be; // 0x5c(0x04)
	float *c92c591da3; // 0x60(0x04)
	bool bIsBlueZoneRelease; // 0x64(0x01)
	bool bIsInBattle; // 0x65(0x01)
	bool bIsWorkingBlueZone; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
};

// ScriptStruct TslGame.*90f4cf2324
// Size: 0x48 (Inherited: 0x00)
struct F*90f4cf2324 {
	int32 *c74420f94a; // 0x00(0x04)
	int32 *e90de5ce19; // 0x04(0x04)
	struct TArray<int32> *eae94b79fa; // 0x08(0x10)
	int32 *cb97af5004; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32> *f53cdd2909; // 0x20(0x10)
	int32 *0905326dcb; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<int32> *c4732835c0; // 0x38(0x10)
};

// ScriptStruct TslGame.*ab5035c700
// Size: 0x08 (Inherited: 0x00)
struct F*ab5035c700 {
	float *7237c26f43; // 0x00(0x04)
	bool *d9fbfac7ac; // 0x04(0x01)
	bool *463116f1bd; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGame.*6759cb1b79
// Size: 0x10 (Inherited: 0x00)
struct F*6759cb1b79 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*6b4331b249
// Size: 0x10 (Inherited: 0x00)
struct F*6b4331b249 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*a14bc1700f
// Size: 0x10 (Inherited: 0x00)
struct F*a14bc1700f {
	struct TArray<struct F*4f565bfe84> *152d22e3a3; // 0x00(0x10)
};

// ScriptStruct TslGame.*4f565bfe84
// Size: 0x1c (Inherited: 0x00)
struct F*4f565bfe84 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*c9bac40621
// Size: 0x18 (Inherited: 0x08)
struct F*c9bac40621 : FTableRowBase {
	struct TArray<struct F*7c26164885> Items; // 0x08(0x10)
};

// ScriptStruct TslGame.*7c26164885
// Size: 0x10 (Inherited: 0x00)
struct F*7c26164885 {
	struct F*ab0db8ae6e ItemClass; // 0x00(0x08)
	int32 Quantity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*49eb7ebaed
// Size: 0x1c (Inherited: 0x00)
struct F*49eb7ebaed {
	struct FVector *ad7c7b0865; // 0x00(0x0c)
	struct FVector *aa52a2671a; // 0x0c(0x0c)
	float Speed; // 0x18(0x04)
};

// ScriptStruct TslGame.*565eb3da1d
// Size: 0x10 (Inherited: 0x00)
struct F*565eb3da1d {
	struct FName *f44917f6c0; // 0x00(0x08)
	float *dc193f8f8d; // 0x08(0x04)
	bool *a69e410101; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*4da0813cc3
// Size: 0x90 (Inherited: 0x00)
struct F*4da0813cc3 {
	struct F*19654606d6 *19654606d6; // 0x00(0x88)
	float *e0a6e83d31; // 0x88(0x04)
	int32 *e3d920cf3d; // 0x8c(0x04)
};

// ScriptStruct TslGame.*19654606d6
// Size: 0x88 (Inherited: 0x00)
struct F*19654606d6 {
	struct TArray<struct UAnimSequenceBase*> *aeeda9f85c; // 0x00(0x10)
	struct FAlphaBlend *420157e503; // 0x10(0x38)
	struct FAlphaBlend *676d7920d0; // 0x48(0x38)
	float PlayRate; // 0x80(0x04)
	enum class ECustomAnimSlotType *4caa45081e; // 0x84(0x01)
	bool *2ccb96e215; // 0x85(0x01)
	bool *5372e0d631; // 0x86(0x01)
	bool bLooping; // 0x87(0x01)
};

// ScriptStruct TslGame.*03e4434bc0
// Size: 0x20 (Inherited: 0x00)
struct F*03e4434bc0 {
	float *9cc03ba30c; // 0x00(0x04)
	int32 *7f10ef9dda; // 0x04(0x04)
	int32 *cfdfdd39e8; // 0x08(0x04)
	int32 *b0b7dd31b2; // 0x0c(0x04)
	int32 *caad9203b5; // 0x10(0x04)
	int32 *83294aaa17; // 0x14(0x04)
	int32 *17edfb563a; // 0x18(0x04)
	float *1a2776fa7c; // 0x1c(0x04)
};

// ScriptStruct TslGame.*fbc685093f
// Size: 0x18 (Inherited: 0x00)
struct F*fbc685093f {
	int32 Score; // 0x00(0x04)
	bool bIsVisible; // 0x04(0x01)
	bool *c8580dc6fa; // 0x05(0x01)
	bool *118b48c244; // 0x06(0x01)
	bool *65bc252063; // 0x07(0x01)
	float *d3cd52ba82; // 0x08(0x04)
	float *d9c3cd456f; // 0x0c(0x04)
	struct AActor* Target; // 0x10(0x08)
};

// ScriptStruct TslGame.*606afd75af
// Size: 0x40 (Inherited: 0x00)
struct F*606afd75af {
	struct FVector RelativeLocation; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct UClass* *8a1dd6595f; // 0x10(0x08)
	float *610aef95f8; // 0x18(0x04)
	float *f53c56ad68; // 0x1c(0x04)
	float *01b62a976b; // 0x20(0x04)
	float *dbaf6ee438; // 0x24(0x04)
	float *15812f9145; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UCurveFloat* *699b5cce87; // 0x30(0x08)
	enum class ENpcWalkingSpeedType *bd4a1e0cc8; // 0x38(0x01)
	bool *fd4f8bc85e; // 0x39(0x01)
	bool *6f2d710dc9; // 0x3a(0x01)
	bool *a642bff11c; // 0x3b(0x01)
	float *69afd32149; // 0x3c(0x04)
};

// ScriptStruct TslGame.*f1206e9cb8
// Size: 0x18 (Inherited: 0x00)
struct F*f1206e9cb8 {
	float *9bf31f296a; // 0x00(0x04)
	int32 *210378cecf; // 0x04(0x04)
	struct TArray<struct F*9a047949ef> *94a1acbebf; // 0x08(0x10)
};

// ScriptStruct TslGame.*9a047949ef
// Size: 0x1c (Inherited: 0x00)
struct F*9a047949ef {
	int32 *bdf2789981; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
};

// ScriptStruct TslGame.*714593404b
// Size: 0x2c (Inherited: 0x00)
struct F*714593404b {
	int32 *bdf2789981; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	int32 Count; // 0x1c(0x04)
	struct UObject* Instigator; // 0x20(0x08)
	bool *092c39b467; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct TslGame.*0a785fa5d6
// Size: 0x30 (Inherited: 0x00)
struct F*0a785fa5d6 {
	struct UClass* Pawn; // 0x00(0x08)
	struct UClass* Controller; // 0x08(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x10(0x08)
	struct TArray<struct F*0b9eb6041a> *2ac8ff8de1; // 0x18(0x10)
	bool *fd3ef260a6; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*0b9eb6041a
// Size: 0x20 (Inherited: 0x00)
struct F*0b9eb6041a {
	struct TArray<struct UClass*> *3293a35303; // 0x00(0x10)
	struct TArray<struct FName> *7d29c17cc7; // 0x10(0x10)
};

// ScriptStruct TslGame.*96d6428597
// Size: 0x40 (Inherited: 0x00)
struct F*96d6428597 {
	struct TArray<enum class EOneOnOneResultType> Scores; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	enum class EOutGamePlatformProvider TargetPlatform; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 TeamId; // 0x24(0x04)
	int32 *be6c48b364; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString AccountId; // 0x30(0x10)
};

// ScriptStruct TslGame.*519577cd02
// Size: 0x170 (Inherited: 0x00)
struct F*519577cd02 {
	float *c6d4319f6b; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<enum class EOneOnOneRoomState, int32> *998a778117; // 0x08(0x50)
	bool *968ebcd224; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 *fbaa5cd4ea; // 0x5c(0x04)
	int32 *bb5682ac8d; // 0x60(0x04)
	float *d3a7dcdbff; // 0x64(0x04)
	enum class EOneOnOneInvenRecoverType *dabf77863e; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FName> *1d3ec09dfc; // 0x70(0x10)
	struct TArray<struct FName> *271819a7a3; // 0x80(0x10)
	struct TMap<enum class EAccessorySlot, struct FName> *223661ae75; // 0x90(0x50)
	struct TArray<struct FName> *3fe57aeda3; // 0xe0(0x10)
	struct TArray<struct FName> *00ddce900e; // 0xf0(0x10)
	struct TArray<struct FName> *3bf8f306ee; // 0x100(0x10)
	struct TArray<struct FName> *d3c609b540; // 0x110(0x10)
	struct TMap<struct FName, int32> *bba8e80395; // 0x120(0x50)
};

// ScriptStruct TslGame.*9e6753c909
// Size: 0x03 (Inherited: 0x00)
struct F*9e6753c909 {
	enum class EOneOnOneTicketState *bb64d0d946; // 0x00(0x01)
	enum class EOneOnOneStageType *073da05761; // 0x01(0x01)
	enum class EOneOnOneSideType *8c1d9f99a4; // 0x02(0x01)
};

// ScriptStruct TslGame.*a2646a77bb
// Size: 0x70 (Inherited: 0x08)
struct F*a2646a77bb : FTableRowBase {
	struct FText *34dbb60dcd; // 0x08(0x18)
	struct TMap<enum class EOneOnOneMessageType, struct FText> *11ed4bf49e; // 0x20(0x50)
};

// ScriptStruct TslGame.*38555dd22b
// Size: 0x30 (Inherited: 0x00)
struct F*38555dd22b {
	struct FName *37ddc581e7; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	int32 *a91929da08; // 0x20(0x04)
	int32 *fd45ccd400; // 0x24(0x04)
	int32 *0d5ffe10ed; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*bf4ab7f49d
// Size: 0x10 (Inherited: 0x00)
struct F*bf4ab7f49d {
	struct UParticleSystem* Template; // 0x00(0x08)
	float *188f64db79; // 0x08(0x04)
	float *ebcb904dde; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f78b957b69
// Size: 0x14 (Inherited: 0x00)
struct F*f78b957b69 {
	float PillarGruntStartHealth; // 0x00(0x04)
	float PillarBossStartHealth; // 0x04(0x04)
	float PatrolAlarmDuration; // 0x08(0x04)
	float *8c0f6b5bd9; // 0x0c(0x04)
	float *4e2add9fa2; // 0x10(0x04)
};

// ScriptStruct TslGame.*f1c1fff8b5
// Size: 0x03 (Inherited: 0x00)
struct F*f1c1fff8b5 {
	enum class *0e8f71de4a X; // 0x00(0x01)
	enum class *0e8f71de4a Y; // 0x01(0x01)
	enum class *0e8f71de4a Z; // 0x02(0x01)
};

// ScriptStruct TslGame.*e974cecb7e
// Size: 0x40 (Inherited: 0x00)
struct F*e974cecb7e {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	enum class *efcb09404e ForwardAxis; // 0x18(0x01)
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

// ScriptStruct TslGame.*c28518386a
// Size: 0x08 (Inherited: 0x00)
struct F*c28518386a {
	struct UClass* *d4a8e98fc2; // 0x00(0x08)
};

// ScriptStruct TslGame.*2e94b82a2f
// Size: 0xb0 (Inherited: 0x00)
struct F*2e94b82a2f {
	struct UClass* *d4a8e98fc2; // 0x00(0x08)
	bool *be220f2c02; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *efec176a84; // 0x10(0x08)
	struct UClass* *0791ac825f; // 0x18(0x08)
	struct UClass* Ring; // 0x20(0x08)
	struct FName *8f0d87a023; // 0x28(0x08)
	enum class EProjectileExplosionStartType *3128b57354; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ExplosionDelay; // 0x34(0x04)
	bool *32b46ae871; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *cfb5b35feb; // 0x3c(0x04)
	float FireDelay; // 0x40(0x04)
	float *2d9693ec0d; // 0x44(0x04)
	struct F*9b7ae2bf07 *838cb9b1d2; // 0x48(0x18)
	struct F*9b7ae2bf07 *bc1cb20531; // 0x60(0x18)
	struct F*9b7ae2bf07 *7b84c79fa6; // 0x78(0x18)
	struct UCurveFloat* *e6b0400e10; // 0x90(0x08)
	struct UCurveFloat* *de77f89d48; // 0x98(0x08)
	float *6f1fc03534; // 0xa0(0x04)
	float *f0e4b39fb5; // 0xa4(0x04)
	bool *6a6b15f044; // 0xa8(0x01)
	bool *47ca4e0497; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
};

// ScriptStruct TslGame.*9b7ae2bf07
// Size: 0x18 (Inherited: 0x00)
struct F*9b7ae2bf07 {
	struct UAnimMontage* PinOff; // 0x00(0x08)
	struct UAnimMontage* Cooking; // 0x08(0x08)
	struct UAnimMontage* Release; // 0x10(0x08)
};

// ScriptStruct TslGame.*8a18a88c45
// Size: 0xf8 (Inherited: 0x00)
struct F*8a18a88c45 {
	float *019c673d6f; // 0x00(0x04)
	float *5eab9265f8; // 0x04(0x04)
	int32 *c1fd13c941; // 0x08(0x04)
	float *c6e97b0d6c; // 0x0c(0x04)
	float *102409486f; // 0x10(0x04)
	float *400303adad; // 0x14(0x04)
	struct UCurveFloat* *6e7718db9f; // 0x18(0x08)
	float *83d9a34e7b; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* *ca81a542cc; // 0x28(0x08)
	struct UCurveFloat* *3588bd76e1; // 0x30(0x08)
	float *57f298ac54; // 0x38(0x04)
	float *67c644e28e; // 0x3c(0x04)
	struct UClass* *0ad023d030; // 0x40(0x08)
	int32 *338e254b3e; // 0x48(0x04)
	float *8a8c4f7c21; // 0x4c(0x04)
	float *a08774c692; // 0x50(0x04)
	float *ba34e57b7d; // 0x54(0x04)
	char *900b571fc9 : 1; // 0x58(0x01)
	char *2e920982ac : 1; // 0x58(0x01)
	char *5ed81f993d : 1; // 0x58(0x01)
	char pad_58_3 : 5; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<enum class EDamageTypeCategory> *ae0466b834; // 0x60(0x10)
	struct TArray<enum class EDamageTypeCategory> *81cf033db2; // 0x70(0x10)
	bool *0970a9df3d; // 0x80(0x01)
	bool *34af6d6382; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct TArray<enum class EPhysicalSurface> *65e4ec5045; // 0x88(0x10)
	struct TArray<struct UClass*> *b48f8b6bda; // 0x98(0x10)
	bool *e791c31ed5; // 0xa8(0x01)
	bool *a1d2740fb3; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	float *ef33bdfc9d; // 0xac(0x04)
	float *1cd3b92222; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UTexture* DamageCauserIcon; // 0xb8(0x08)
	float DamageIconRatio; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FText DamageCauserItemName; // 0xc8(0x18)
	enum class EWeaponClass DamageCauserClass; // 0xe0(0x01)
	bool *bf15391096; // 0xe1(0x01)
	bool *d61cbc9673; // 0xe2(0x01)
	bool *d08a88052e; // 0xe3(0x01)
	float *7281338881; // 0xe4(0x04)
	struct UCurveFloat* *0d1610ab98; // 0xe8(0x08)
	struct UClass* *41479e348e; // 0xf0(0x08)
};

// ScriptStruct TslGame.*4ab3563804
// Size: 0x08 (Inherited: 0x00)
struct F*4ab3563804 {
	float *0f4bd1b96d; // 0x00(0x04)
	float *2a8025f508; // 0x04(0x04)
};

// ScriptStruct TslGame.*ec32806777
// Size: 0x18 (Inherited: 0x00)
struct F*ec32806777 {
	struct FVector2D *12b6267a85; // 0x00(0x08)
	float *3f0c3601fd; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *b2c484307e; // 0x10(0x08)
};

// ScriptStruct TslGame.*b6b0f34ed1
// Size: 0xa8 (Inherited: 0x00)
struct F*b6b0f34ed1 {
	struct TMap<enum class EWeaponClass, struct FVector2D> *82073a68af; // 0x00(0x50)
	bool *67e7c05551; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<int32, struct FVector2D> *a8e392feec; // 0x58(0x50)
};

// ScriptStruct TslGame.*1749069cda
// Size: 0xf0 (Inherited: 0x00)
struct F*1749069cda {
	struct FText *bd27fb4b48; // 0x00(0x18)
	struct FText *1dc7232187; // 0x18(0x18)
	struct FText *4abbe1bff4; // 0x30(0x18)
	struct FText *a58d9f9bd9; // 0x48(0x18)
	struct FText *f74a3369d4; // 0x60(0x18)
	struct FText *d591de464a; // 0x78(0x18)
	struct FText *6fa0f1e133; // 0x90(0x18)
	struct FText *ce0a7b26c7; // 0xa8(0x18)
	struct FText *401fa65b78; // 0xc0(0x18)
	struct FText *03baf672c7; // 0xd8(0x18)
};

// ScriptStruct TslGame.*4c17ff59ee
// Size: 0x10 (Inherited: 0x00)
struct F*4c17ff59ee {
	bool bUseConstReduction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *2bcef49be8; // 0x04(0x04)
	bool bUseScalarReduction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *10f41b68b6; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e37abcc864
// Size: 0x18 (Inherited: 0x00)
struct F*e37abcc864 {
	struct UAnimMontage* *0d7f67941a; // 0x00(0x08)
	struct UAnimMontage* *fd53979e4a; // 0x08(0x08)
	float *3fb386f967; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*5908a9810a
// Size: 0x28 (Inherited: 0x00)
struct F*5908a9810a {
	char pad_0[0x1]; // 0x00(0x01)
	enum class EVehicleEngineState ServerState; // 0x01(0x01)
	char pad_2[0xa]; // 0x02(0x0a)
	bool *f299f58d73; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *86d52a0d55; // 0x10(0x04)
	float *6bd44e00a6; // 0x14(0x04)
	float *062530cb94; // 0x18(0x04)
	float StartTime; // 0x1c(0x04)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*aca9ae620c
// Size: 0x18 (Inherited: 0x00)
struct F*aca9ae620c {
	float *f3b1e7e864; // 0x00(0x04)
	float *69c06a3106; // 0x04(0x04)
	struct UCurveFloat* *71a598f084; // 0x08(0x08)
	bool *6406bdae38; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*d91b34201d
// Size: 0x10 (Inherited: 0x00)
struct F*d91b34201d {
	float *cdf711a5f0; // 0x00(0x04)
	float *621499aeb2; // 0x04(0x04)
	float *97e2a3c0db; // 0x08(0x04)
	float *d2a6109c0d; // 0x0c(0x04)
};

// ScriptStruct TslGame.*cb5ca756db
// Size: 0x50 (Inherited: 0x00)
struct F*cb5ca756db {
	struct TMap<struct UClass*, struct F*d6ea9fac18> *43c7006836; // 0x00(0x50)
};

// ScriptStruct TslGame.*d6ea9fac18
// Size: 0x10 (Inherited: 0x00)
struct F*d6ea9fac18 {
	struct TArray<struct ATslParticle*> *cfacd7d15b; // 0x00(0x10)
};

// ScriptStruct TslGame.*a43513ab77
// Size: 0x18 (Inherited: 0x00)
struct F*a43513ab77 {
	int32 *a074c767a3; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*3c0021b181> *648be1d669; // 0x08(0x10)
};

// ScriptStruct TslGame.*14786c60f1
// Size: 0x80 (Inherited: 0x00)
struct F*14786c60f1 {
	bool *818cb6f138; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InWaterAlpha; // 0x04(0x04)
	float PropulsionAlpha; // 0x08(0x04)
	float *ee81f41708; // 0x0c(0x04)
	struct FVector *501515fff4; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FName *001c8431c4; // 0x20(0x08)
	float *c7ab9f7a5e; // 0x28(0x04)
	struct FVector *18bb3a8d6d; // 0x2c(0x0c)
	float PropulsionForceScale; // 0x38(0x04)
	float *b875a515b6; // 0x3c(0x04)
	struct FVector *da06c5cd16; // 0x40(0x0c)
	float *a1f9707f8a; // 0x4c(0x04)
	float *e8a164220f; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
	struct FVector4 *a7b7af505a; // 0x60(0x10)
	bool *0fb7cab6f6; // 0x70(0x01)
	bool IsInWaterGearLock; // 0x71(0x01)
	bool *715b7a5ff3; // 0x72(0x01)
	char pad_73[0xd]; // 0x73(0x0d)
};

// ScriptStruct TslGame.*7760df6780
// Size: 0x40 (Inherited: 0x00)
struct F*7760df6780 {
	bool *67120bb3ec; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FVector4 *5c17168c33; // 0x10(0x10)
	struct FVector2D *bf1af0417e; // 0x20(0x08)
	struct FVector2D *29f56c5707; // 0x28(0x08)
	struct FVector2D *c83637d8fb; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*744cb1dfd5
// Size: 0x28 (Inherited: 0x00)
struct F*744cb1dfd5 {
	bool bUseVelocityTransmission; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *b76dcfbec1; // 0x04(0x04)
	bool *e36e5b9fdd; // 0x08(0x01)
	bool *10ef8acbe9; // 0x09(0x01)
	bool *bd9b5cf2b6; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float *5b6d0c199b; // 0x0c(0x04)
	struct TArray<struct F*d9108ac603> *1d69568e03; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*d9108ac603
// Size: 0x08 (Inherited: 0x00)
struct F*d9108ac603 {
	float *0a70c4e5d1; // 0x00(0x04)
	float *a0d3bd379d; // 0x04(0x04)
};

// ScriptStruct TslGame.*b59855966c
// Size: 0x06 (Inherited: 0x00)
struct F*b59855966c {
	char pad_0[0x6]; // 0x00(0x06)
};

// ScriptStruct TslGame.*6691796d3f
// Size: 0x58 (Inherited: 0x00)
struct F*6691796d3f {
	struct UPrimitiveComponent* *6387cd5748; // 0x00(0x08)
	bool *e3519c2f25; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector *bc91b591f4; // 0x0c(0x0c)
	struct FRotator *bac74be962; // 0x18(0x0c)
	struct FRepMovement RepMovement; // 0x24(0x34)
};

// ScriptStruct TslGame.*bbb53606e2
// Size: 0x40 (Inherited: 0x00)
struct F*bbb53606e2 {
	struct FVector2D *a85eaae591; // 0x00(0x08)
	struct FVector2D *647c691860; // 0x08(0x08)
	struct FVector2D *70031afa0d; // 0x10(0x08)
	struct FVector2D *62ddfa35c2; // 0x18(0x08)
	struct FVector2D *8557aebb56; // 0x20(0x08)
	struct FVector2D *4c95c0c24d; // 0x28(0x08)
	struct FVector *d238326208; // 0x30(0x0c)
	float *c239f0b8a6; // 0x3c(0x04)
};

// ScriptStruct TslGame.*24d0fc5fde
// Size: 0x94 (Inherited: 0x00)
struct F*24d0fc5fde {
	float *17d2ae92b6; // 0x00(0x04)
	float *a45ae959e3; // 0x04(0x04)
	float *926b905859; // 0x08(0x04)
	float *eb84337a38; // 0x0c(0x04)
	struct FVector2D *5635173c0f; // 0x10(0x08)
	struct FVector2D *e61d0c1667; // 0x18(0x08)
	struct FVector2D *97f07cbd38; // 0x20(0x08)
	struct FVector2D *bf7c04d1b9; // 0x28(0x08)
	struct FVector2D *e3b92dc51f; // 0x30(0x08)
	struct FVector2D *caaaed03fb; // 0x38(0x08)
	struct FVector2D *d334e96f7c; // 0x40(0x08)
	struct FVector2D *6826c62a14; // 0x48(0x08)
	struct FVector2D *22a97d0237; // 0x50(0x08)
	struct FVector2D *74e287ac1d; // 0x58(0x08)
	struct FVector2D *1ed9806a51; // 0x60(0x08)
	struct FVector2D *36ae70d294; // 0x68(0x08)
	struct FVector2D *d32c566b57; // 0x70(0x08)
	struct FVector2D *9a3915032f; // 0x78(0x08)
	float *6813fb0663; // 0x80(0x04)
	float *4d1ce90542; // 0x84(0x04)
	float *7698e8f03b; // 0x88(0x04)
	float *4182412be1; // 0x8c(0x04)
	float *ae2c3f687a; // 0x90(0x04)
};

// ScriptStruct TslGame.*0b01d6cad3
// Size: 0x0c (Inherited: 0x00)
struct F*0b01d6cad3 {
	float Timeout; // 0x00(0x04)
	float Chance; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct TslGame.*3ca7d13577
// Size: 0x10 (Inherited: 0x00)
struct F*3ca7d13577 {
	float *15575dda88; // 0x00(0x04)
	float *1fcc0ca2cc; // 0x04(0x04)
	float *d8b3573cdd; // 0x08(0x04)
	float *6ce0928e9a; // 0x0c(0x04)
};

// ScriptStruct TslGame.*0e2f6a2424
// Size: 0x60 (Inherited: 0x00)
struct F*0e2f6a2424 {
	struct UAkAudioEvent* *1c22f87b79; // 0x00(0x08)
	struct UAkAudioEvent* *fbaa9708ff; // 0x08(0x08)
	struct UAkAudioEvent* *6939f067a4; // 0x10(0x08)
	struct UAkAudioEvent* *43da7ccb70; // 0x18(0x08)
	struct UAkAudioEvent* *7bbe86d9c7; // 0x20(0x08)
	struct UAkAudioEvent* *0e6c6dff8e; // 0x28(0x08)
	struct UAkAudioEvent* *fa792e27f2; // 0x30(0x08)
	struct UAkAudioEvent* *0aa2729af9; // 0x38(0x08)
	struct UAkAudioEvent* *8ca64c87da; // 0x40(0x08)
	struct UAkAudioEvent* *6bed560b84; // 0x48(0x08)
	struct UAkAudioEvent* *267abdfe62; // 0x50(0x08)
	struct UAkAudioEvent* *2a4a7cc181; // 0x58(0x08)
};

// ScriptStruct TslGame.*bd9ad1fb99
// Size: 0x44 (Inherited: 0x00)
struct F*bd9ad1fb99 {
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
	float *771259d674; // 0x30(0x04)
	float *6deb8da88b; // 0x34(0x04)
	float *5230b0b091; // 0x38(0x04)
	float *0e1c2d6354; // 0x3c(0x04)
	float *e40aadaa77; // 0x40(0x04)
};

// ScriptStruct TslGame.*51ae6b249e
// Size: 0x18 (Inherited: 0x00)
struct F*51ae6b249e {
	int32 MaterialIndex; // 0x00(0x04)
	float delayTime; // 0x04(0x04)
	float *863d5c92c9; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*8aa1739637
// Size: 0x10 (Inherited: 0x00)
struct F*8aa1739637 {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*53c9a978ce
// Size: 0x70 (Inherited: 0x60)
struct F*53c9a978ce : F*5ad7d8fa4f {
	struct TArray<struct UObject*> *99dffd94cd; // 0x60(0x10)
};

// ScriptStruct TslGame.*5ad7d8fa4f
// Size: 0x60 (Inherited: 0x00)
struct F*5ad7d8fa4f {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*7d19aa3720
// Size: 0x80 (Inherited: 0x60)
struct F*7d19aa3720 : F*5ad7d8fa4f {
	struct UObject* *80a2cbbb22; // 0x60(0x20)
};

// ScriptStruct TslGame.*a6d25f5bf8
// Size: 0x10 (Inherited: 0x00)
struct F*a6d25f5bf8 {
	struct UClass* *def40dd215; // 0x00(0x08)
	bool *52dc7af944; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*3b30a7a52f
// Size: 0x18 (Inherited: 0x00)
struct F*3b30a7a52f {
	bool bLoadableEquipSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*e0795fe1b8> LoadableEquipSlotInfos; // 0x08(0x10)
};

// ScriptStruct TslGame.*e0795fe1b8
// Size: 0x08 (Inherited: 0x00)
struct F*e0795fe1b8 {
	float ApplySpaceRate; // 0x00(0x04)
	enum class EEquipSlotID LoadableEquipSlotID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*fa768bbe22
// Size: 0x30 (Inherited: 0x00)
struct F*fa768bbe22 {
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

// ScriptStruct TslGame.*a691c0c05a
// Size: 0x48 (Inherited: 0x30)
struct F*a691c0c05a : F*fa768bbe22 {
	struct UClass* ItemPackageClass; // 0x30(0x08)
	struct TArray<struct F*3b402dd470> PackageSpawnProbArray; // 0x38(0x10)
};

// ScriptStruct TslGame.*3b402dd470
// Size: 0x18 (Inherited: 0x00)
struct F*3b402dd470 {
	float ProbabilityPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
};

// ScriptStruct TslGame.*3d93ad70d3
// Size: 0x38 (Inherited: 0x08)
struct F*3d93ad70d3 : FTableRowBase {
	struct FName SubCategoryFilter; // 0x08(0x08)
	struct UClass* Vehicle; // 0x10(0x20)
	float SubCategoryFilterWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*ea2f771fce
// Size: 0x20 (Inherited: 0x08)
struct F*ea2f771fce : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	struct FName SubCategoryFilter; // 0x10(0x08)
	float CategoryFilterWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*46af37e605
// Size: 0x28 (Inherited: 0x08)
struct F*46af37e605 : FTableRowBase {
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

// ScriptStruct TslGame.*15737174be
// Size: 0x28 (Inherited: 0x08)
struct F*15737174be : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	struct FName SubCategoryFilter; // 0x10(0x08)
	struct UClass* Vehicle; // 0x18(0x08)
	int32 Weight; // 0x20(0x04)
	bool bSnapToFloor; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGame.*8c412c5a98
// Size: 0x58 (Inherited: 0x30)
struct F*8c412c5a98 : F*fa768bbe22 {
	struct TArray<struct F*cf0a1841c8> WeightsPerCategory; // 0x30(0x10)
	struct FFloatRange FuelPercentRange; // 0x40(0x10)
	bool bSnapToFloor; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.*d457a3c95f
// Size: 0x88 (Inherited: 0x08)
struct F*d457a3c95f : FTableRowBase {
	struct FString Description; // 0x08(0x10)
	struct FString VehicleSpawnSubtitleKey; // 0x18(0x10)
	struct UDataTable* VehicleSpotGroupDataTable; // 0x28(0x20)
	struct UDataTable* VehicleSpawnDataTable; // 0x48(0x20)
	struct UDataTable* VehicleVariationDataTable; // 0x68(0x20)
};

// ScriptStruct TslGame.*e4be715f20
// Size: 0x10 (Inherited: 0x08)
struct F*e4be715f20 : FTableRowBase {
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

// ScriptStruct TslGame.*0c37e0e396
// Size: 0x48 (Inherited: 0x00)
struct F*0c37e0e396 {
	struct FString MapName; // 0x00(0x10)
	struct FString BenchmarkPath; // 0x10(0x10)
	struct FString LevelSequenceName; // 0x20(0x10)
	struct FString CameraName; // 0x30(0x10)
	float PlayRate; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*06b3e4ea97
// Size: 0x20 (Inherited: 0x00)
struct F*06b3e4ea97 {
	struct FName FunctionName; // 0x00(0x08)
	struct FString CommandName; // 0x08(0x10)
	float delayTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*392366011e
// Size: 0x38 (Inherited: 0x00)
struct F*392366011e {
	struct FName *37ddc581e7; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector2D *aaa6be5106; // 0x20(0x08)
	struct FName *00c3d7fce9; // 0x28(0x08)
	enum class EThingSpotGroupType *41b85a3623; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*f773d6b23c
// Size: 0x30 (Inherited: 0x00)
struct F*f773d6b23c {
	struct FStringAssetReference *3e200d2460; // 0x00(0x10)
	struct FStringAssetReference *b624193f84; // 0x10(0x10)
	struct FStringAssetReference *9e63e80947; // 0x20(0x10)
};

// ScriptStruct TslGame.*feff43f8f8
// Size: 0x38 (Inherited: 0x00)
struct F*feff43f8f8 {
	struct F*473cd9e976 TargetData; // 0x00(0x28)
	struct TArray<struct F*5cf9f8565c> TargetGameplayEffectSpecs; // 0x28(0x10)
};

// ScriptStruct TslGame.*e0f65d11ce
// Size: 0x18 (Inherited: 0x00)
struct F*e0f65d11ce {
	struct UClass* TargetType; // 0x00(0x08)
	struct TArray<struct UClass*> TargetGameplayEffectClasses; // 0x08(0x10)
};

// ScriptStruct TslGame.*42f658ec87
// Size: 0x18 (Inherited: 0x00)
struct F*42f658ec87 {
	struct FName *4a41db1151; // 0x00(0x08)
	int32 *bd9dac56b3; // 0x08(0x04)
	int32 *936f3e084a; // 0x0c(0x04)
	int32 *d9ef067b63; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*9f7e0f6f44
// Size: 0x20 (Inherited: 0x08)
struct F*9f7e0f6f44 : FTableRowBase {
	int32 Weight; // 0x08(0x04)
	enum class EGender *91580e186d; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct F*104ec2a881> *b8b1cb738d; // 0x10(0x10)
};

// ScriptStruct TslGame.*104ec2a881
// Size: 0x10 (Inherited: 0x00)
struct F*104ec2a881 {
	enum class EEquipSlotID SlotName; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AvatarItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*c3c5c6ec93
// Size: 0x60 (Inherited: 0x00)
struct F*c3c5c6ec93 {
	struct ATslSpawnScriptBotBox* Box; // 0x00(0x08)
	struct UClass* *896f5df80e; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	enum class *dd1265e535 *aac91ec536; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct ATslPatrolPath* *9b7eeec3b3; // 0x48(0x08)
	struct ATslPatrolPath* *24da7b3a20; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct TslGame.*20d683ac97
// Size: 0x18 (Inherited: 0x00)
struct F*20d683ac97 {
	struct ATslScriptBotCharacter* *5564d3ab9b; // 0x00(0x08)
	struct FGuid *93bd527f1d; // 0x08(0x10)
};

// ScriptStruct TslGame.*0495363748
// Size: 0x10 (Inherited: 0x00)
struct F*0495363748 {
	struct TArray<struct F*5b2835748b> *96e536ca3f; // 0x00(0x10)
};

// ScriptStruct TslGame.*5b2835748b
// Size: 0xb0 (Inherited: 0x00)
struct F*5b2835748b {
	bool *4bd60c6b33; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* *3d01906b18; // 0x08(0x08)
	struct FTransform *a510c153fb; // 0x10(0x30)
	struct TArray<struct ATslStaticContainer*> *5d994f1cfa; // 0x40(0x10)
	struct TArray<struct AActor*> *ec9d6497d4; // 0x50(0x10)
	struct TArray<struct ATslPatrolPath*> Paths; // 0x60(0x10)
	struct TArray<struct ATslScriptBotCharacter*> *60f78cc795; // 0x70(0x10)
	struct TArray<struct ATslParticleEnvironment*> *cb32852c11; // 0x80(0x10)
	struct TArray<struct F*bfc0f3215d> *26bea868a5; // 0x90(0x10)
	struct FGuid *93bd527f1d; // 0xa0(0x10)
};

// ScriptStruct TslGame.*bfc0f3215d
// Size: 0x50 (Inherited: 0x00)
struct F*bfc0f3215d {
	struct UClass* ParticleEnvironment; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform ParticleTransform; // 0x10(0x30)
	float ActivateDistances; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct TslGame.*fe9823b6c1
// Size: 0x20 (Inherited: 0x00)
struct F*fe9823b6c1 {
	struct FStringAssetReference *99ccaa03b3; // 0x00(0x10)
	struct TArray<struct F*a84124075f> *6343943187; // 0x10(0x10)
};

// ScriptStruct TslGame.*a84124075f
// Size: 0x40 (Inherited: 0x00)
struct F*a84124075f {
	struct UPrefabAsset* PrefabAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform PrefabTransform; // 0x10(0x30)
};

// ScriptStruct TslGame.*1f49775980
// Size: 0x18 (Inherited: 0x08)
struct F*1f49775980 : FTableRowBase {
	struct UPrefabAsset* ArtPrefabAsset; // 0x08(0x08)
	struct UPrefabAsset* AiPrefabAsset; // 0x10(0x08)
};

// ScriptStruct TslGame.*936a9f8cfe
// Size: 0x10 (Inherited: 0x00)
struct F*936a9f8cfe {
	struct TArray<struct ATslPatrolPoint*> *e95df4dd4d; // 0x00(0x10)
};

// ScriptStruct TslGame.*46c99eed07
// Size: 0x08 (Inherited: 0x00)
struct F*46c99eed07 {
	enum class *1852d2b7c5 Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Dist; // 0x04(0x04)
};

// ScriptStruct TslGame.*1b1718ffc0
// Size: 0x10 (Inherited: 0x00)
struct F*1b1718ffc0 {
	float ProbabilityFirstHit; // 0x00(0x04)
	float DurationTime; // 0x04(0x04)
	float DurationDamageMax; // 0x08(0x04)
	float DurationEmptyShot; // 0x0c(0x04)
};

// ScriptStruct TslGame.*233f4c226c
// Size: 0x20 (Inherited: 0x00)
struct F*233f4c226c {
	struct ATslScriptBotCharacter* *1700c3d86e; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct TslGame.*b2a5d584f6
// Size: 0x28 (Inherited: 0x00)
struct F*b2a5d584f6 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UCurveFloat* *f4e4188c39; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct TslGame.*646d52d848
// Size: 0x1c (Inherited: 0x00)
struct F*646d52d848 {
	enum class EAIMapName MapName; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Center; // 0x04(0x0c)
	struct FVector *be12ed2ca2; // 0x10(0x0c)
};

// ScriptStruct TslGame.*3f1c77a9f7
// Size: 0x48 (Inherited: 0x00)
struct F*3f1c77a9f7 {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct TslGame.HouseGroup
// Size: 0x48 (Inherited: 0x00)
struct FHouseGroup {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct TslGame.*a0723e784c
// Size: 0x70 (Inherited: 0x00)
struct F*a0723e784c {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct TslGame.*177c9e91cd
// Size: 0x0c (Inherited: 0x00)
struct F*177c9e91cd {
	char pad_0[0x8]; // 0x00(0x08)
	float *ed3746ddd7; // 0x08(0x04)
};

// ScriptStruct TslGame.*60e2590102
// Size: 0x60 (Inherited: 0x00)
struct F*60e2590102 {
	struct UDataTable* *c951aefdc4; // 0x00(0x20)
	struct UDataTable* *9149e800c6; // 0x20(0x20)
	float *659859b3d5; // 0x40(0x04)
	float *ffa327d2ba; // 0x44(0x04)
	float *4688923c45; // 0x48(0x04)
	float *24ae32ca7a; // 0x4c(0x04)
	int32 *22adc47eaa; // 0x50(0x04)
	int32 *d4a7b02a9a; // 0x54(0x04)
	int32 *d4ef9cb83e; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*6e13da7880
// Size: 0x10 (Inherited: 0x00)
struct F*6e13da7880 {
	float *cd797ab50d; // 0x00(0x04)
	float *786af5fd69; // 0x04(0x04)
	int32 *3e61068fd0; // 0x08(0x04)
	float *9cace30f91; // 0x0c(0x04)
};

// ScriptStruct TslGame.*a64f64c19d
// Size: 0x20 (Inherited: 0x08)
struct F*a64f64c19d : FTableRowBase {
	int32 PhaseIndex; // 0x08(0x04)
	int32 Ratio; // 0x0c(0x04)
	struct TArray<struct F*c442581c82> Items; // 0x10(0x10)
};

// ScriptStruct TslGame.*c442581c82
// Size: 0x18 (Inherited: 0x00)
struct F*c442581c82 {
	enum class EUltAutoEquipItemType *8e7577bcec; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Item; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*400b1f2e29
// Size: 0x08 (Inherited: 0x00)
struct F*400b1f2e29 {
	struct U*3fb312ee98* Origin; // 0x00(0x08)
};

// ScriptStruct TslGame.*7f8c8119d4
// Size: 0x10 (Inherited: 0x00)
struct F*7f8c8119d4 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*c51bd9820b
// Size: 0xc0 (Inherited: 0x00)
struct F*c51bd9820b {
	struct AUltAIController* AIController; // 0x00(0x08)
	char pad_8[0xb8]; // 0x08(0xb8)
};

// ScriptStruct TslGame.*b19e54ac30
// Size: 0x10 (Inherited: 0x00)
struct F*b19e54ac30 {
	struct UClass* *68d48e53a0; // 0x00(0x08)
	struct FName *c87545151c; // 0x08(0x08)
};

// ScriptStruct TslGame.*ee6538f2e5
// Size: 0x1c (Inherited: 0x00)
struct F*ee6538f2e5 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*b610b4eb78
// Size: 0x10 (Inherited: 0x00)
struct F*b610b4eb78 {
	int32 DropCount; // 0x00(0x04)
	float DropPercent; // 0x04(0x04)
	struct UClass* OverrideCarePackageItemSpawnerClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*1bbc0383b4
// Size: 0x30 (Inherited: 0x00)
struct F*1bbc0383b4 {
	struct UClass* *afb7ae66a4; // 0x00(0x08)
	struct UClass* *c9bc1b6c81; // 0x08(0x08)
	enum class EAirDropType *4b584fcd0b; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UClass* *50dea91838; // 0x18(0x08)
	struct UClass* *9e88a2809e; // 0x20(0x08)
	float *65b728f388; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*852899bfbd
// Size: 0x28 (Inherited: 0x00)
struct F*852899bfbd {
	struct FName *e9d221444f; // 0x00(0x08)
	struct UAkAudioEvent* *c74ce3d79f; // 0x08(0x08)
	struct UAkAudioEvent* *80a62eb571; // 0x10(0x08)
	bool *aad0ec41ea; // 0x18(0x01)
	bool *6bd9a57b37; // 0x19(0x01)
	bool *d765c2d89a; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float *63c15f3768; // 0x1c(0x04)
	float *4ec3633f8e; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*e1634e48db
// Size: 0x10 (Inherited: 0x00)
struct F*e1634e48db {
	struct TArray<struct F*972a651a7b> *cd161f26dd; // 0x00(0x10)
};

// ScriptStruct TslGame.*972a651a7b
// Size: 0x18 (Inherited: 0x00)
struct F*972a651a7b {
	struct UClass* *d373d4cbe2; // 0x00(0x08)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float Falloff; // 0x10(0x04)
	bool *6815bfc1df; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*edcfb6c0cf
// Size: 0x20 (Inherited: 0x00)
struct F*edcfb6c0cf {
	struct UBlendSpaceBase* CurrentLocomotionBlendspace; // 0x00(0x08)
	struct UBlendSpaceBase* LocomotionFirst; // 0x08(0x08)
	struct UBlendSpaceBase* LocomotionSecond; // 0x10(0x08)
	float LocomotionAlpha; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a7e52632fd
// Size: 0x58 (Inherited: 0x00)
struct F*a7e52632fd {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, struct AActor*> *03692444bd; // 0x08(0x50)
};

// ScriptStruct TslGame.*55ee51da49
// Size: 0x20 (Inherited: 0x08)
struct F*55ee51da49 : FTableRowBase {
	float *0bcbee5aaf; // 0x08(0x04)
	float *f746f26aa2; // 0x0c(0x04)
	float *2e4575c2a9; // 0x10(0x04)
	float *9ef041b912; // 0x14(0x04)
	float *b8c28adb94; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*94b03e0cef
// Size: 0x18 (Inherited: 0x00)
struct F*94b03e0cef {
	enum class EAntiCheatKickType KickType; // 0x00(0x01)
	enum class EKickProcess KickProcess; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString KeyString; // 0x08(0x10)
};

// ScriptStruct TslGame.*08378a46f1
// Size: 0x18 (Inherited: 0x00)
struct F*08378a46f1 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTexture2D* IconTexture; // 0x08(0x08)
	float MaxTime; // 0x10(0x04)
	float FinishTime; // 0x14(0x04)
};

// ScriptStruct TslGame.*9910212f09
// Size: 0x10 (Inherited: 0x00)
struct F*9910212f09 {
	struct UTexture2D* IdleTexture; // 0x00(0x08)
	struct UTexture2D* DamageTexture; // 0x08(0x08)
};

// ScriptStruct TslGame.*aa497cfaaa
// Size: 0x20 (Inherited: 0x00)
struct F*aa497cfaaa {
	struct FString *1a40d5d11b; // 0x00(0x10)
	struct FString *bf064b5b1c; // 0x10(0x10)
};

// ScriptStruct TslGame.*428301c256
// Size: 0xb8 (Inherited: 0x00)
struct F*428301c256 {
	struct FTslLobbyCustomizingData *df7a525706; // 0x00(0x58)
	struct UObject* *158efd7767; // 0x58(0x08)
	struct UClass* *e88a6d890b; // 0x60(0x20)
	struct TArray<struct UClass*> *5facf1b6d4; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	struct AActor* *d2375d1081; // 0xa0(0x08)
	struct FString *6cd3045b2e; // 0xa8(0x10)
};

// ScriptStruct TslGame.*a6581a8c30
// Size: 0x70 (Inherited: 0x00)
struct F*a6581a8c30 {
	struct UClass* *364f791ab3; // 0x00(0x20)
	struct FName *9ae2be76d9; // 0x20(0x08)
	struct TArray<struct FString> *b8ff0f9a6e; // 0x28(0x10)
	struct TArray<struct UClass*> *513309a051; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EViewModeCategory *884fc73c7d; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString *f540411365; // 0x60(0x10)
};

// ScriptStruct TslGame.*fcddb8956a
// Size: 0x20 (Inherited: 0x00)
struct F*fcddb8956a {
	struct FString WidgetName; // 0x00(0x10)
	struct FMulticastDelegate *3c2d2a0753; // 0x10(0x10)
};

// ScriptStruct TslGame.*a880103e14
// Size: 0x08 (Inherited: 0x00)
struct F*a880103e14 {
	int32 TeamId; // 0x00(0x04)
	int32 MemberIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*e29696b1d9
// Size: 0x18 (Inherited: 0x00)
struct F*e29696b1d9 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*181aa120f9
// Size: 0x18 (Inherited: 0x00)
struct F*181aa120f9 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*ee3fcf6f5c
// Size: 0x10 (Inherited: 0x00)
struct F*ee3fcf6f5c {
	struct TArray<struct AActor*> *b9db6d2f1c; // 0x00(0x10)
};

// ScriptStruct TslGame.*5b5ded329d
// Size: 0x90 (Inherited: 0x00)
struct F*5b5ded329d {
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

// ScriptStruct TslGame.*4a063be1e5
// Size: 0x40 (Inherited: 0x08)
struct F*4a063be1e5 : FTableRowBase {
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

// ScriptStruct TslGame.*9b5cd69ea4
// Size: 0x88 (Inherited: 0x08)
struct F*9b5cd69ea4 : FTableRowBase {
	struct FTslSLBStageID StageID; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct F*f5a52ada9b ItemSpawnData; // 0x10(0x38)
	struct UClass* StageControllerAsset; // 0x48(0x20)
	struct F*b929152d41 MissionData; // 0x68(0x18)
	int32 RespawnCount; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.*b929152d41
// Size: 0x18 (Inherited: 0x00)
struct F*b929152d41 {
	struct FName MissionItemID; // 0x00(0x08)
	int32 MissionItemSpawnCount; // 0x08(0x04)
	enum class EItemSpotGroupType MissionItemSpotGroupType; // 0x0c(0x01)
	enum class EItemSpotType MissionItemSpotType; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	int32 MissionInteractionObjectCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*f5a52ada9b
// Size: 0x38 (Inherited: 0x00)
struct F*f5a52ada9b {
	struct TArray<struct F*b6fe6ca493> RawSpotGroupProperties; // 0x00(0x10)
	struct FStringAssetReference RawItemSpawnDataTable; // 0x10(0x10)
	struct FStringAssetReference RawItemSpawnTogetherDataTable; // 0x20(0x10)
	enum class EItemSpawnType ItemSpawnType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*fda83af46f
// Size: 0x10 (Inherited: 0x00)
struct F*fda83af46f {
	struct F*eb6db53563 *4d33273192; // 0x00(0x03)
	char pad_3[0x5]; // 0x03(0x05)
	struct ATslTrainingPlayerState* *32ccb3ce07; // 0x08(0x08)
};

// ScriptStruct TslGame.*eb6db53563
// Size: 0x03 (Inherited: 0x00)
struct F*eb6db53563 {
	enum class EPrivateWaitingRoomPhase *09d1ce5329; // 0x00(0x01)
	enum class EPrivateTrainingRoomPhase *43d1ae00f2; // 0x01(0x01)
	enum class ETrainingPracticeType PracticeType; // 0x02(0x01)
};

// ScriptStruct TslGame.*f47d2f5a7e
// Size: 0x08 (Inherited: 0x00)
struct F*f47d2f5a7e {
	float *7796daec43; // 0x00(0x04)
	float *06b052eebc; // 0x04(0x04)
};

// ScriptStruct TslGame.*dfceecc8f4
// Size: 0x10 (Inherited: 0x00)
struct F*dfceecc8f4 {
	int32 *782bac3f4c; // 0x00(0x04)
	int32 *ac7d12e924; // 0x04(0x04)
	int32 *3c5fefe077; // 0x08(0x04)
	int32 *2a8a106e17; // 0x0c(0x04)
};

// ScriptStruct TslGame.*8c99dca963
// Size: 0x60 (Inherited: 0x00)
struct F*8c99dca963 {
	struct TMap<int32, int32> *31b38de9aa; // 0x00(0x50)
	struct TArray<int32> *55ce52e337; // 0x50(0x10)
};

// ScriptStruct TslGame.*9fd2cb290b
// Size: 0x78 (Inherited: 0x00)
struct F*9fd2cb290b {
	struct FName ItemID; // 0x00(0x08)
	struct F*24bac48d17 EquipPosition; // 0x08(0x08)
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

// ScriptStruct TslGame.*4ef481e22d
// Size: 0x30 (Inherited: 0x00)
struct F*4ef481e22d {
	struct FName ID; // 0x00(0x08)
	struct UTexture* Icon; // 0x08(0x20)
	int32 ItemNum; // 0x28(0x04)
	int32 DefensivePower; // 0x2c(0x04)
};

// ScriptStruct TslGame.*f258230f8c
// Size: 0x38 (Inherited: 0x00)
struct F*f258230f8c {
	struct FName ID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FStringAssetReference Icon; // 0x20(0x10)
	bool bOwned; // 0x30(0x01)
	bool bFull; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 Price; // 0x34(0x04)
};

// ScriptStruct TslGame.*0ce6591b40
// Size: 0x50 (Inherited: 0x00)
struct F*0ce6591b40 {
	struct FLinearColor Normal; // 0x00(0x10)
	struct FLinearColor Hover; // 0x10(0x10)
	struct FLinearColor Disabled; // 0x20(0x10)
	struct FLinearColor Selected; // 0x30(0x10)
	struct FLinearColor LackCoin; // 0x40(0x10)
};

// ScriptStruct TslGame.*e5b260da73
// Size: 0x50 (Inherited: 0x00)
struct F*e5b260da73 {
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

// ScriptStruct TslGame.*9d0c6cb98f
// Size: 0x50 (Inherited: 0x00)
struct F*9d0c6cb98f {
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

// ScriptStruct TslGame.*3aad5ac8fd
// Size: 0x38 (Inherited: 0x00)
struct F*3aad5ac8fd {
	int32 *1fb1ac278d; // 0x00(0x04)
	enum class EBombUIPlayerStatusType *007d272e4e; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FText PlayerName; // 0x08(0x18)
	int32 Kill; // 0x20(0x04)
	int32 *06a1315951; // 0x24(0x04)
	int32 Death; // 0x28(0x04)
	int32 *cb39cda7b8; // 0x2c(0x04)
	bool *8209993e0a; // 0x30(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct TslGame.*06dce9db8f
// Size: 0x60 (Inherited: 0x00)
struct F*06dce9db8f {
	bool *f6e0ec54aa; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*7b3894eaa7 Condition; // 0x08(0x20)
	bool *07574f4dfb; // 0x28(0x01)
	bool *7065138037; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32 *86f0ba28d2; // 0x2c(0x04)
	struct F*7aae621d49 Result; // 0x30(0x30)
};

// ScriptStruct TslGame.*7aae621d49
// Size: 0x30 (Inherited: 0x00)
struct F*7aae621d49 {
	int32 *86511773bd; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Message; // 0x08(0x18)
	enum class EBombUITeamStatusType *c2108ae3ef; // 0x20(0x01)
	bool *5c195abbfe; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32 *46ef753e36; // 0x24(0x04)
	int32 *38053ec025; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*7b3894eaa7
// Size: 0x20 (Inherited: 0x00)
struct F*7b3894eaa7 {
	enum class EBombRoundResultConditionType Type; // 0x00(0x01)
	enum class EBombUITeamStatusType *2a16d6aae7; // 0x01(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FText Message; // 0x08(0x18)
};

// ScriptStruct TslGame.*96e8120683
// Size: 0x10 (Inherited: 0x00)
struct F*96e8120683 {
	struct TArray<enum class EBombUIPlayerStatusType> *073c4d53f4; // 0x00(0x10)
};

// ScriptStruct TslGame.*2d2f4cbb72
// Size: 0x30 (Inherited: 0x00)
struct F*2d2f4cbb72 {
	struct UTexture2D* *10e10935c7; // 0x00(0x08)
	struct FLinearColor *56e3ca80b5; // 0x08(0x10)
	struct UTexture2D* *d9e8c14709; // 0x18(0x08)
	struct FLinearColor *1e08e7c7bc; // 0x20(0x10)
};

// ScriptStruct TslGame.*fc87cf0f97
// Size: 0x10 (Inherited: 0x00)
struct F*fc87cf0f97 {
	struct TArray<struct UObject*> Objects; // 0x00(0x10)
};

// ScriptStruct TslGame.*5f3238ca9b
// Size: 0x20 (Inherited: 0x00)
struct F*5f3238ca9b {
	int32 CircleNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *aadf4475df; // 0x08(0x08)
	struct FName *2edc15b16e; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*f511228435
// Size: 0x10 (Inherited: 0x00)
struct F*f511228435 {
	struct FStringAssetReference DataTable; // 0x00(0x10)
};

// ScriptStruct TslGame.*b2790b3b02
// Size: 0x40 (Inherited: 0x00)
struct F*b2790b3b02 {
	struct TArray<struct F*40de407230> Bots; // 0x00(0x10)
	struct FVector StartLocation; // 0x10(0x0c)
	struct FRotator *2a7b0737ae; // 0x1c(0x0c)
	struct FRotator *4f3e36d52f; // 0x28(0x0c)
	int32 *f0bba26311; // 0x34(0x04)
	bool *eab668698b; // 0x38(0x01)
	bool *65c30bb26e; // 0x39(0x01)
	bool *0a5fd9a821; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float Timeout; // 0x3c(0x04)
};

// ScriptStruct TslGame.*40de407230
// Size: 0x30 (Inherited: 0x00)
struct F*40de407230 {
	struct FVector SpawnLocation; // 0x00(0x0c)
	struct FRotator *d2d944d7be; // 0x0c(0x0c)
	uint32 ID; // 0x18(0x04)
	uint32 VehicleId; // 0x1c(0x04)
	struct TArray<struct U*97fe12536f*> Actions; // 0x20(0x10)
};

// ScriptStruct TslGame.*d8985818b0
// Size: 0x08 (Inherited: 0x00)
struct F*d8985818b0 {
	uint32 *babb1b451d; // 0x00(0x04)
	enum class EFollowTargetType TargetType; // 0x04(0x04)
};

// ScriptStruct TslGame.*c8d8e4f3c7
// Size: 0x18 (Inherited: 0x08)
struct F*c8d8e4f3c7 : FTableRowBase {
	float *99ff66ed78; // 0x08(0x04)
	float *4ce2167489; // 0x0c(0x04)
	float *b686f48450; // 0x10(0x04)
	float *755f0d9087; // 0x14(0x04)
};

// ScriptStruct TslGame.*269456fcae
// Size: 0x18 (Inherited: 0x00)
struct F*269456fcae {
	struct TArray<struct F*e65c409111> *55017e27b0; // 0x00(0x10)
	int8 *3257b4dbe7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*e65c409111
// Size: 0x18 (Inherited: 0x00)
struct F*e65c409111 {
	struct TArray<struct FVector> *7b7f593809; // 0x00(0x10)
	int32 *81160693c0; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*3ddb7eb7fb
// Size: 0x08 (Inherited: 0x00)
struct F*3ddb7eb7fb {
	float Gauge; // 0x00(0x04)
	float *09f0e55b36; // 0x04(0x04)
};

// ScriptStruct TslGame.*88a83da96f
// Size: 0x18 (Inherited: 0x00)
struct F*88a83da96f {
	struct FString *41eaf7746e; // 0x00(0x10)
	float *68a3ab129e; // 0x10(0x04)
	float *55a5ebd874; // 0x14(0x04)
};

// ScriptStruct TslGame.*c4b88b61bc
// Size: 0x18 (Inherited: 0x00)
struct F*c4b88b61bc {
	struct TArray<int32> *4d93cf24f6; // 0x00(0x10)
	struct UMaterialInstance* Material; // 0x10(0x08)
};

// ScriptStruct TslGame.*1162a58666
// Size: 0x88 (Inherited: 0x00)
struct F*1162a58666 {
	enum class *2c2a3af4b6 *663c14beec; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *c649a892d6; // 0x08(0x10)
	struct FString *3b593fb247; // 0x18(0x10)
	struct FString *d69e694d5b; // 0x28(0x10)
	struct FString *f8afbc649c; // 0x38(0x10)
	struct FString *f14a986e53; // 0x48(0x10)
	struct FString *51dedb1d9c; // 0x58(0x10)
	struct FName *a35af442a0; // 0x68(0x08)
	struct FName *7968912a86; // 0x70(0x08)
	struct FName *9eeb704229; // 0x78(0x08)
	struct FName *7fb28a0b5b; // 0x80(0x08)
};

// ScriptStruct TslGame.*f3db4fc30a
// Size: 0x38 (Inherited: 0x08)
struct F*f3db4fc30a : FTableRowBase {
	float EndGameTime; // 0x08(0x04)
	float GeneratorProgressGoal; // 0x0c(0x04)
	struct TArray<float> Survivor_GeneratorProgressInteractionRate; // 0x10(0x10)
	float EscapeProgressGoal; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct F*6a84539286> SurvivorStartingItemArray; // 0x28(0x10)
};

// ScriptStruct TslGame.*6a84539286
// Size: 0x10 (Inherited: 0x00)
struct F*6a84539286 {
	struct FName ItemName; // 0x00(0x08)
	int32 ItemNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*04bb6d60eb
// Size: 0x20 (Inherited: 0x08)
struct F*04bb6d60eb : FTableRowBase {
	int32 *d768c017e6; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName ItemName; // 0x10(0x08)
	int32 *4d3980e4cd; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*4e57f7f8df
// Size: 0x30 (Inherited: 0x00)
struct F*4e57f7f8df {
	struct TArray<struct UClass*> *4adb4a3a25; // 0x00(0x10)
	struct TArray<struct F*e0b8f91555> *f295eadc93; // 0x10(0x10)
	struct UClass* *0ad023d030; // 0x20(0x08)
	bool *6dd598230e; // 0x28(0x01)
	bool *aace8cd71c; // 0x29(0x01)
	bool *d37354aa00; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.*e0b8f91555
// Size: 0x28 (Inherited: 0x00)
struct F*e0b8f91555 {
	struct UClass* *30597c07f5; // 0x00(0x08)
	bool *2b9105f0ba; // 0x08(0x01)
	bool *89c3efa1e2; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *535acd3b71; // 0x0c(0x04)
	float *cdcea4f7f5; // 0x10(0x04)
	float *11c16b2c15; // 0x14(0x04)
	float *19872939ef; // 0x18(0x04)
	float *23a9155fb4; // 0x1c(0x04)
	enum class *cb41f937c0 *6b9fcbe7bf; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*433ba15965
// Size: 0x28 (Inherited: 0x00)
struct F*433ba15965 {
	struct FVector *5e201e9019; // 0x00(0x0c)
	struct FVector *078d7db34c; // 0x0c(0x0c)
	struct FVector *a038b87f16; // 0x18(0x0c)
	struct FColor Color; // 0x24(0x04)
};

// ScriptStruct TslGame.*1d823d8b07
// Size: 0x02 (Inherited: 0x00)
struct F*1d823d8b07 {
	enum class EAITaskState *3657288ddd; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGame.*de071e0b0c
// Size: 0x20 (Inherited: 0x08)
struct F*de071e0b0c : FTableRowBase {
	int32 StatudID; // 0x08(0x04)
	float ZombieATK; // 0x0c(0x04)
	float ZombieHP; // 0x10(0x04)
	float ZombieSPD; // 0x14(0x04)
	float ZombieJumpHeight; // 0x18(0x04)
	int32 OfferedCoinNum; // 0x1c(0x04)
};

// ScriptStruct TslGame.*74d91a5598
// Size: 0x48 (Inherited: 0x08)
struct F*74d91a5598 : FTableRowBase {
	int32 *5358a90008; // 0x08(0x04)
	bool *3a442fcadd; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *6663eae64a; // 0x10(0x04)
	float *00b1aaca33; // 0x14(0x04)
	bool *5e838f5dcf; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 *43e19cd95c; // 0x1c(0x04)
	bool *12783058d5; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *215e3283f9; // 0x24(0x04)
	float *0052e32575; // 0x28(0x04)
	bool *c0e915cb36; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *505dda99ac; // 0x30(0x04)
	float *fe706f850c; // 0x34(0x04)
	float *be9f0c2b11; // 0x38(0x04)
	float *5a0e29a974; // 0x3c(0x04)
	float *7372155576; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*e05a276d1f
// Size: 0x48 (Inherited: 0x08)
struct F*e05a276d1f : FTableRowBase {
	int32 StatusID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* Pawn; // 0x10(0x08)
	float ATKMultiplier; // 0x18(0x04)
	float HP; // 0x1c(0x04)
	float SPDMultiplier; // 0x20(0x04)
	float JumpHeightMultiplier; // 0x24(0x04)
	struct TArray<struct F*4c8925fed1> ExclusiveDropItems; // 0x28(0x10)
	enum class EZombieAttackType AttackType; // 0x38(0x01)
	enum class EZombieTargetingType TargetingType; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float AggressiveDistance; // 0x3c(0x04)
	float SearchRadius; // 0x40(0x04)
	enum class EOPUIMonsterType MonsterType; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct TslGame.*4c8925fed1
// Size: 0x18 (Inherited: 0x00)
struct F*4c8925fed1 {
	struct FName DropItemID; // 0x00(0x08)
	int32 DropItemCount; // 0x08(0x04)
	int32 DropItemRate; // 0x0c(0x04)
	float DropProbability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*4fdb663d0d
// Size: 0x58 (Inherited: 0x08)
struct F*4fdb663d0d : FTableRowBase {
	int32 ZDBalanceID; // 0x08(0x04)
	int32 StageNum; // 0x0c(0x04)
	float StageLimitTime; // 0x10(0x04)
	float StageCraftTime; // 0x14(0x04)
	struct TArray<struct F*1099b69bc3> WaveList; // 0x18(0x10)
	float ZombieATK; // 0x28(0x04)
	float ZombieHP; // 0x2c(0x04)
	float ZombieSPD; // 0x30(0x04)
	float ZombieJumpHeight; // 0x34(0x04)
	struct TArray<struct F*4c8925fed1> DropItems; // 0x38(0x10)
	int32 OfferedCoinNum; // 0x48(0x04)
	int32 HeadShotKillReward; // 0x4c(0x04)
	int32 MeleeKillReward; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*1099b69bc3
// Size: 0x20 (Inherited: 0x00)
struct F*1099b69bc3 {
	int32 WavePerLimitCount; // 0x00(0x04)
	int32 WavePerMaxCount; // 0x04(0x04)
	float WaveInterval; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*8aaa99faf9> ZombieList; // 0x10(0x10)
};

// ScriptStruct TslGame.*8aaa99faf9
// Size: 0x08 (Inherited: 0x00)
struct F*8aaa99faf9 {
	int32 ZombieStatusID; // 0x00(0x04)
	int32 Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*1281d4275b
// Size: 0x08 (Inherited: 0x00)
struct F*1281d4275b {
	float *b82337e50a; // 0x00(0x04)
	enum class EZombieTargetingType TargetingType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*31b2976c2b
// Size: 0x18 (Inherited: 0x00)
struct F*31b2976c2b {
	int32 *8b8a78f9fb; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*329cc4c228> *83cc797f3c; // 0x08(0x10)
};

// ScriptStruct TslGame.*329cc4c228
// Size: 0x28 (Inherited: 0x20)
struct F*329cc4c228 : F*8a52a3e731 {
	struct ATslLobbyWeapon* TslWeapon; // 0x20(0x08)
};

// ScriptStruct TslGame.*8a52a3e731
// Size: 0x20 (Inherited: 0x00)
struct F*8a52a3e731 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString ItemID; // 0x08(0x10)
	struct UItem* Item; // 0x18(0x08)
};

// ScriptStruct TslGame.*05aa884ce1
// Size: 0x10 (Inherited: 0x00)
struct F*05aa884ce1 {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *4ab25cc9b8; // 0x04(0x04)
	struct UClass* *392309d69c; // 0x08(0x08)
};

// ScriptStruct TslGame.*a561b59b53
// Size: 0x08 (Inherited: 0x00)
struct F*a561b59b53 {
	bool AttackMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *bee8834202; // 0x04(0x04)
};

// ScriptStruct TslGame.*104d0774f7
// Size: 0x10 (Inherited: 0x00)
struct F*104d0774f7 {
	struct TArray<struct UMaterialInterface*> *3ed4698198; // 0x00(0x10)
};

// ScriptStruct TslGame.*1f0c051806
// Size: 0x0c (Inherited: 0x00)
struct F*1f0c051806 {
	float SightRange; // 0x00(0x04)
	float HearRange; // 0x04(0x04)
	float MaintainSec; // 0x08(0x04)
};

// ScriptStruct TslGame.*5ab56bed69
// Size: 0x28 (Inherited: 0x00)
struct F*5ab56bed69 {
	int32 *27eae5b695; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName AttackId; // 0x08(0x08)
	float *0609c7fb9c; // 0x10(0x04)
	float delayTime; // 0x14(0x04)
	int32 Trigger; // 0x18(0x04)
	char pad_1C[0xc]; // 0x1c(0x0c)
};

// ScriptStruct TslGame.*055ed8842a
// Size: 0x18 (Inherited: 0x00)
struct F*055ed8842a {
	float Speed; // 0x00(0x04)
	int32 *27eae5b695; // 0x04(0x04)
	float *cbf0b10ed5; // 0x08(0x04)
	struct FVector2D *6a05632d3d; // 0x0c(0x08)
	char *ed1f9eaf33 : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*158a86f1c4
// Size: 0x20 (Inherited: 0x00)
struct F*158a86f1c4 {
	float *a8e13bc974; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*5650f557c5> *31ce4bdbde; // 0x08(0x10)
	float *f131deb1d0; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*5650f557c5
// Size: 0x10 (Inherited: 0x00)
struct F*5650f557c5 {
	struct FName *fddc03a1ea; // 0x00(0x08)
	float *172a837932; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*98e48661a8
// Size: 0x988 (Inherited: 0x08)
struct F*98e48661a8 : FSlateWidgetStyle {
	struct F*0704742c93 *7b4199e73d; // 0x08(0x870)
	struct FSlateBrush *6fa8630e93; // 0x878(0x90)
	struct FSlateColor *fc8053d0b2; // 0x908(0x28)
	struct FSlateColor TextColor; // 0x930(0x28)
	struct FSlateSound *5443ba61c9; // 0x958(0x18)
	struct FSlateSound *a3a62d62a5; // 0x970(0x18)
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

// ScriptStruct TslGame.*baa98c45e8
// Size: 0x1c (Inherited: 0x00)
struct F*baa98c45e8 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.AutoCompleteVehiclePaths
// Size: 0x20 (Inherited: 0x00)
struct FAutoCompleteVehiclePaths {
	struct FString Kind; // 0x00(0x10)
	struct FString path; // 0x10(0x10)
};

// ScriptStruct TslGame.*da17a9d4ed
// Size: 0x18 (Inherited: 0x00)
struct F*da17a9d4ed {
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

// ScriptStruct TslGame.*7f4a205a09
// Size: 0x18 (Inherited: 0x00)
struct F*7f4a205a09 {
	int32 TeleportType; // 0x00(0x04)
	int32 PracticeType; // 0x04(0x04)
	struct FString *a30c372968; // 0x08(0x10)
};

// ScriptStruct TslGame.*433c9b8555
// Size: 0xe0 (Inherited: 0x00)
struct F*433c9b8555 {
	struct FCustomDamageEvent Event; // 0x00(0xd8)
	float *6576c546d9; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct TslGame.CustomDamageEvent
// Size: 0xd8 (Inherited: 0x08)
struct FCustomDamageEvent : FTableRowBase {
	bool *4bd60c6b33; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FGuid EventID; // 0x0c(0x10)
	bool bEnabled; // 0x1c(0x01)
	bool *996117db25; // 0x1d(0x01)
	bool *a58b4a3190; // 0x1e(0x01)
	bool *961cca3853; // 0x1f(0x01)
	enum class *3301e7cc6f *2c79fada05; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *e213fe8a0d; // 0x24(0x04)
	float *38867a0aba; // 0x28(0x04)
	bool *cf7ae4ff81; // 0x2c(0x01)
	enum class ECustomDamageEventReactionType *2f4f981c24; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct UClass* *161fa8202a; // 0x30(0x20)
	bool *3572457205; // 0x50(0x01)
	bool *4326286adf; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct UClass* *4feaede0f1; // 0x58(0x20)
	bool *11f03a33da; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FName *70f715df9c; // 0x80(0x08)
	struct FName *6c136d8e04; // 0x88(0x08)
	struct FName *f5e5ef3d92; // 0x90(0x08)
	bool *afb92847e3; // 0x98(0x01)
	bool *eb8348c070; // 0x99(0x01)
	bool *7ea17d5755; // 0x9a(0x01)
	bool *92bf31ba63; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FName *4668cbf865; // 0xa0(0x08)
	struct FName *819028b68a; // 0xa8(0x08)
	int32 *af0244b9e5; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FName BoneName; // 0xb8(0x08)
	struct FName *bcc153a27f; // 0xc0(0x08)
	struct FName *eeb9f06751; // 0xc8(0x08)
	enum class ECollisionEnabled *f6140f686a; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct TslGame.*cb80029be7
// Size: 0x50 (Inherited: 0x00)
struct F*cb80029be7 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*8bcfaa2ba6
// Size: 0x04 (Inherited: 0x00)
struct F*8bcfaa2ba6 {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct TslGame.*fd1260cb6d
// Size: 0x10 (Inherited: 0x00)
struct F*fd1260cb6d {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*21e9b367c2
// Size: 0x5b0 (Inherited: 0x00)
struct F*21e9b367c2 {
	char pad_0[0x5b0]; // 0x00(0x5b0)
};

// ScriptStruct TslGame.*59bb1dd80d
// Size: 0x20 (Inherited: 0x00)
struct F*59bb1dd80d {
	struct UPrimitiveComponent* *a3e754ada2; // 0x00(0x08)
	struct F*7040f5ede9 Sphere; // 0x08(0x10)
	float *94459de3dd; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*7040f5ede9
// Size: 0x10 (Inherited: 0x00)
struct F*7040f5ede9 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*837a49be55
// Size: 0x2c (Inherited: 0x00)
struct F*837a49be55 {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*b87ebc6717
// Size: 0x28 (Inherited: 0x00)
struct F*b87ebc6717 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*9c154cd925
// Size: 0x3c (Inherited: 0x00)
struct F*9c154cd925 {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct TslGame.*049ea14827
// Size: 0x1c (Inherited: 0x00)
struct F*049ea14827 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*2cef811289
// Size: 0x18 (Inherited: 0x00)
struct F*2cef811289 {
	float *fd55de6f85; // 0x00(0x04)
	struct FVector2D *5d15b09bdc; // 0x04(0x08)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*db241297c2
// Size: 0x58 (Inherited: 0x00)
struct F*db241297c2 {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct TslGame.*4a34d0a393
// Size: 0x0c (Inherited: 0x00)
struct F*4a34d0a393 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*81b498eece
// Size: 0x28 (Inherited: 0x08)
struct F*81b498eece : FTableRowBase {
	struct FString Category; // 0x08(0x10)
	struct TArray<struct FString> *0a2a67a1b2; // 0x18(0x10)
};

// ScriptStruct TslGame.*fcf4252c21
// Size: 0x28 (Inherited: 0x08)
struct F*fcf4252c21 : FTableRowBase {
	struct FString *8d40fd857a; // 0x08(0x10)
	struct FString *361fb335d6; // 0x18(0x10)
};

// ScriptStruct TslGame.*9733fdfa53
// Size: 0x50 (Inherited: 0x30)
struct F*9733fdfa53 : F*32e88a2433 {
	struct FName TabName; // 0x30(0x08)
	struct FName *41a06798ad; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct F*c4e1982ad1 TargetHud; // 0x48(0x02)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.*32e88a2433
// Size: 0x30 (Inherited: 0x08)
struct F*32e88a2433 : FTableRowBase {
	int32 *f2b252fb59; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayNameText; // 0x10(0x18)
	struct F*cf72992ae3 *425ff1856d; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct TslGame.*cf72992ae3
// Size: 0x02 (Inherited: 0x00)
struct F*cf72992ae3 {
	bool bKeyboardMouse; // 0x00(0x01)
	bool bGamepad; // 0x01(0x01)
};

// ScriptStruct TslGame.*c4e1982ad1
// Size: 0x02 (Inherited: 0x00)
struct F*c4e1982ad1 {
	bool bVisibleInLobby; // 0x00(0x01)
	bool bVisibleInGame; // 0x01(0x01)
};

// ScriptStruct TslGame.*df319ebb9c
// Size: 0x40 (Inherited: 0x30)
struct F*df319ebb9c : F*32e88a2433 {
	struct FName TabName; // 0x30(0x08)
	struct FName *41a06798ad; // 0x38(0x08)
};

// ScriptStruct TslGame.*d31549d70e
// Size: 0x38 (Inherited: 0x30)
struct F*d31549d70e : F*32e88a2433 {
	struct FName TabName; // 0x30(0x08)
};

// ScriptStruct TslGame.*41830300bb
// Size: 0x1b0 (Inherited: 0x30)
struct F*41830300bb : F*32e88a2433 {
	enum class EOptionTab TabName; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName *41a06798ad; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct FName ItemName; // 0x48(0x08)
	struct FText DescriptionText; // 0x50(0x18)
	struct UClass* ItemWidgetClass; // 0x68(0x08)
	struct F*f583840709 *dfc20204f2; // 0x70(0xd0)
	struct UClass* *c2c16ec40f; // 0x140(0x08)
	bool *d35247796a; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TArray<struct F*b133ec61f5> *15bf9e2838; // 0x150(0x10)
	struct F*5068377016 KeyBindingDesc; // 0x160(0x38)
	struct FString AdditionalInitParameter; // 0x198(0x10)
	struct F*c4e1982ad1 TargetHud; // 0x1a8(0x02)
	bool bUseIndentation; // 0x1aa(0x01)
	char pad_1AB[0x5]; // 0x1ab(0x05)
};

// ScriptStruct TslGame.*5068377016
// Size: 0x38 (Inherited: 0x00)
struct F*5068377016 {
	enum class ETslGameOptionKeyBindingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName InputName; // 0x08(0x08)
	float InputAxisScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FKey> ForbiddenKeys; // 0x18(0x10)
	struct TArray<struct F*352067f7be> DuplicateProhibitionData; // 0x28(0x10)
};

// ScriptStruct TslGame.*352067f7be
// Size: 0x18 (Inherited: 0x00)
struct F*352067f7be {
	struct FName DuplicateProhibitedTabName; // 0x00(0x08)
	struct FName DuplicateProhibitedCategoryName; // 0x08(0x08)
	struct FName DuplicateProhibitedItemName; // 0x10(0x08)
};

// ScriptStruct TslGame.*b133ec61f5
// Size: 0x100 (Inherited: 0x00)
struct F*b133ec61f5 {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
	struct F*f583840709 *4976144a50; // 0x30(0xd0)
};

// ScriptStruct TslGame.*f583840709
// Size: 0xd0 (Inherited: 0x00)
struct F*f583840709 {
	enum class ETslGameOptionSupplementaryType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTexture2D* TextureData; // 0x18(0x20)
	struct UMaterialInterface* *dee7c93a6b; // 0x38(0x20)
	struct TMap<struct FName, float> *3dfb0a9d82; // 0x58(0x50)
	struct FText *30f22fb139; // 0xa8(0x18)
	struct FString ExternalLink; // 0xc0(0x10)
};

// ScriptStruct TslGame.*41b3939942
// Size: 0x30 (Inherited: 0x00)
struct F*41b3939942 {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
};

// ScriptStruct TslGame.*91b0fceaa0
// Size: 0x14 (Inherited: 0x00)
struct F*91b0fceaa0 {
	float Timestamp; // 0x00(0x04)
	float *b309f3747c; // 0x04(0x04)
	float *b273914474; // 0x08(0x04)
	float *4a62a572db; // 0x0c(0x04)
	float *c031bf3944; // 0x10(0x04)
};

// ScriptStruct TslGame.*3dfa552d04
// Size: 0x10 (Inherited: 0x00)
struct F*3dfa552d04 {
	struct TArray<struct U*37683ebb97*> *d16e53175c; // 0x00(0x10)
};

// ScriptStruct TslGame.*f155c7321b
// Size: 0x28 (Inherited: 0x00)
struct F*f155c7321b {
	struct FName ParamName; // 0x00(0x08)
	float TargetTime; // 0x08(0x04)
	struct FLinearColor VectorValue; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct U*e6746d9844* VectorCurve; // 0x20(0x08)
};

// ScriptStruct TslGame.*dc87b2ce18
// Size: 0x18 (Inherited: 0x00)
struct F*dc87b2ce18 {
	struct FName ParamName; // 0x00(0x08)
	float TargetTime; // 0x08(0x04)
	float ScalarValue; // 0x0c(0x04)
	struct UCurveFloat* FloatCurve; // 0x10(0x08)
};

// ScriptStruct TslGame.*94bbf8d007
// Size: 0x78 (Inherited: 0x00)
struct F*94bbf8d007 {
	struct FName root; // 0x00(0x08)
	struct FName Strap; // 0x08(0x08)
	struct FName BackpackRing; // 0x10(0x08)
	struct FVector DefaultStrapLocation; // 0x18(0x0c)
	struct FRotator DefaultStrapRotation; // 0x24(0x0c)
	struct FVector DefaultSeatLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FAlphaBlend Blend; // 0x40(0x38)
};

// ScriptStruct TslGame.*e37e61a2e2
// Size: 0x10 (Inherited: 0x00)
struct F*e37e61a2e2 {
	struct USceneComponent* *a22705ad34; // 0x00(0x08)
	struct AActor* ChildActor; // 0x08(0x08)
};

// ScriptStruct TslGame.*60994f9745
// Size: 0x20 (Inherited: 0x00)
struct F*60994f9745 {
	struct UStaticMesh* EscalatorMesh; // 0x00(0x08)
	bool *6cf0a724eb; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *9928bf4c26; // 0x10(0x08)
	int32 *429a2d3fbd; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*ae6c025ba5
// Size: 0x10 (Inherited: 0x00)
struct F*ae6c025ba5 {
	struct TArray<struct U*e5461cb6ad*> *d9f0c60404; // 0x00(0x10)
};

// ScriptStruct TslGame.*7f9f9a678b
// Size: 0x68 (Inherited: 0x00)
struct F*7f9f9a678b {
	enum class EFBRClass ClassType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *f04598ece0; // 0x04(0x04)
	struct F*2e5d749a6d *ef2892ecc3; // 0x08(0x30)
	struct TArray<struct F*2e5d749a6d> *7b48efe253; // 0x38(0x10)
	struct TArray<struct F*208d40309d> *170d4133df; // 0x48(0x10)
	struct TArray<struct F*a4347f1999> *c4e90243de; // 0x58(0x10)
};

// ScriptStruct TslGame.*a4347f1999
// Size: 0x40 (Inherited: 0x00)
struct F*a4347f1999 {
	struct FName WeaponTag; // 0x00(0x08)
	struct F*c32d8c9495 Anchor; // 0x08(0x28)
	bool bShowToSpectator; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UClass* WidgetClass; // 0x38(0x08)
};

// ScriptStruct TslGame.*208d40309d
// Size: 0x28 (Inherited: 0x00)
struct F*208d40309d {
	struct UClass* IconWidgetClass; // 0x00(0x08)
	enum class EEquipSlotID *e06c1a9445; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 *6a1c43b742; // 0x0c(0x04)
	struct FName ItemID; // 0x10(0x08)
	int32 *17581b2a19; // 0x18(0x04)
	enum class *ed55acacb6 *d496c2259f; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName *89d46650c8; // 0x20(0x08)
};

// ScriptStruct TslGame.*2e5d749a6d
// Size: 0x30 (Inherited: 0x00)
struct F*2e5d749a6d {
	struct FName *46b0d686e3; // 0x00(0x08)
	struct F*208d40309d IconSetting; // 0x08(0x28)
};

// ScriptStruct TslGame.*2233b89078
// Size: 0x10 (Inherited: 0x00)
struct F*2233b89078 {
	struct FName SocketName; // 0x00(0x08)
	int32 *fc5202197c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*4bcbf3acb2
// Size: 0x0c (Inherited: 0x00)
struct F*4bcbf3acb2 {
	float *dc700ed456; // 0x00(0x04)
	float *22847a2d4d; // 0x04(0x04)
	float *39681a2a5e; // 0x08(0x04)
};

// ScriptStruct TslGame.*f89e460507
// Size: 0x2c (Inherited: 0x00)
struct F*f89e460507 {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*1533c17459
// Size: 0x38 (Inherited: 0x00)
struct F*1533c17459 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*0ed4509a1a
// Size: 0x50 (Inherited: 0x00)
struct F*0ed4509a1a {
	struct F*99af37cfd2 *6add171bbc; // 0x00(0x08)
	struct F*99af37cfd2 *8f4fe05344; // 0x08(0x08)
	struct F*a67c32bc95 *3ca823bc94; // 0x10(0x10)
	struct F*a67c32bc95 *ba5232d10a; // 0x20(0x10)
	struct UCurveFloat* *9cdd921fa7; // 0x30(0x08)
	float *f18f4af2c1; // 0x38(0x04)
	float *22b6761ba5; // 0x3c(0x04)
	float *69fd119f9d; // 0x40(0x04)
	float *b24daa2ca4; // 0x44(0x04)
	float *793a24b28b; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*ba66de12f9
// Size: 0x2c (Inherited: 0x00)
struct F*ba66de12f9 {
	struct FVector *80f4f09c15; // 0x00(0x0c)
	float GravityScale; // 0x0c(0x04)
	bool *472206dae0; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *0684d7cc2e; // 0x14(0x04)
	float *86486b9d84; // 0x18(0x04)
	struct F*a67c32bc95 *93243b147d; // 0x1c(0x10)
};

// ScriptStruct TslGame.*b8aebbde94
// Size: 0xb0 (Inherited: 0x00)
struct F*b8aebbde94 {
	float *69f537fb23; // 0x00(0x04)
	struct F*a67c32bc95 *af35844fc2; // 0x04(0x10)
	struct FVector *d913407028; // 0x14(0x0c)
	struct F*a67c32bc95 *caca6fb24c; // 0x20(0x10)
	struct FVector *07bfb9ac63; // 0x30(0x0c)
	struct F*a67c32bc95 *06b481a209; // 0x3c(0x10)
	struct FVector *0b545e7c4b; // 0x4c(0x0c)
	float *a0a878d233; // 0x58(0x04)
	float *2c144d9743; // 0x5c(0x04)
	struct FVector *f527a6298d; // 0x60(0x0c)
	struct F*a67c32bc95 *3983809881; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UCurveFloat* *ea5292e25c; // 0x80(0x08)
	struct UCurveFloat* *3a8d3aca70; // 0x88(0x08)
	struct FVector *370602cc66; // 0x90(0x0c)
	struct F*a67c32bc95 *c7653651f1; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct TslGame.*77cfae19f1
// Size: 0x38 (Inherited: 0x00)
struct F*77cfae19f1 {
	float *be32a94274; // 0x00(0x04)
	float *3ede5e437f; // 0x04(0x04)
	float *6a746af18a; // 0x08(0x04)
	struct FVector *6753f484b3; // 0x0c(0x0c)
	struct F*a67c32bc95 *88d2b4af83; // 0x18(0x10)
	struct U*e6746d9844* *6ebdeb9525; // 0x28(0x08)
	struct U*e6746d9844* *b2dcab6863; // 0x30(0x08)
};

// ScriptStruct TslGame.*777ed8ecea
// Size: 0x90 (Inherited: 0x00)
struct F*777ed8ecea {
	float *a6d43b00a7; // 0x00(0x04)
	float *370ac8e965; // 0x04(0x04)
	float *be32a94274; // 0x08(0x04)
	float *3ede5e437f; // 0x0c(0x04)
	struct F*a67c32bc95 *1a638c6407; // 0x10(0x10)
	struct F*a67c32bc95 *b4c890aa72; // 0x20(0x10)
	struct F*a67c32bc95 *500fe1ebe5; // 0x30(0x10)
	struct F*a67c32bc95 *c1512e0386; // 0x40(0x10)
	struct F*a67c32bc95 *917028f1e4; // 0x50(0x10)
	struct F*a67c32bc95 *2fceb6250e; // 0x60(0x10)
	struct F*a67c32bc95 *4e9ff8da22; // 0x70(0x10)
	struct F*a67c32bc95 *a43b7a13e6; // 0x80(0x10)
};

// ScriptStruct TslGame.*a4582d4f07
// Size: 0x0c (Inherited: 0x00)
struct F*a4582d4f07 {
	float *efb59290bb; // 0x00(0x04)
	float *3ceef0c923; // 0x04(0x04)
	float *c9bde696f4; // 0x08(0x04)
};

// ScriptStruct TslGame.*e68e59046b
// Size: 0x38 (Inherited: 0x00)
struct F*e68e59046b {
	struct F*a67c32bc95 *27ab4576f1; // 0x00(0x10)
	struct F*a67c32bc95 *d7272e8d06; // 0x10(0x10)
	struct UCurveFloat* *de486782d6; // 0x20(0x08)
	struct U*e6746d9844* *e8217ba4fd; // 0x28(0x08)
	float *71465ce97b; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*79631b1949
// Size: 0xb0 (Inherited: 0x00)
struct F*79631b1949 {
	float *6a746af18a; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct U*e6746d9844* *406646fbff; // 0x08(0x08)
	struct F*a67c32bc95 *7b1b89ba69; // 0x10(0x10)
	struct FVector *6753f484b3; // 0x20(0x0c)
	struct FVector *38a4a96544; // 0x2c(0x0c)
	struct F*a67c32bc95 *8ba2f2d894; // 0x38(0x10)
	struct FVector *23c1644a62; // 0x48(0x0c)
	struct F*a67c32bc95 *31d8ddcc3b; // 0x54(0x10)
	struct F*a67c32bc95 *a5441fb238; // 0x64(0x10)
	struct F*a67c32bc95 *8991bc1455; // 0x74(0x10)
	struct F*a67c32bc95 *1d73bf84c1; // 0x84(0x10)
	float *4b14b1688c; // 0x94(0x04)
	float *6eab45a2e1; // 0x98(0x04)
	float *8998e182b3; // 0x9c(0x04)
	struct F*99af37cfd2 *8059171ed5; // 0xa0(0x08)
	struct F*99af37cfd2 *d150eea054; // 0xa8(0x08)
};

// ScriptStruct TslGame.*c3f05c9b5e
// Size: 0x24 (Inherited: 0x00)
struct F*c3f05c9b5e {
	struct F*99af37cfd2 *b016e836a0; // 0x00(0x08)
	struct F*99af37cfd2 *fd12033f29; // 0x08(0x08)
	struct F*99af37cfd2 *f5f82dac0f; // 0x10(0x08)
	struct F*99af37cfd2 *91bb8447b2; // 0x18(0x08)
	bool *bdf94aacf1; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*1ea88cb102
// Size: 0x10 (Inherited: 0x00)
struct F*1ea88cb102 {
	float Throttle; // 0x00(0x04)
	struct FVector *15bddd4aae; // 0x04(0x0c)
};

// ScriptStruct TslGame.*c7fcecd6d7
// Size: 0x14 (Inherited: 0x00)
struct F*c7fcecd6d7 {
	float *8e4a3b1f8d; // 0x00(0x04)
	float *936e3663ee; // 0x04(0x04)
	struct FVector *760f79a71e; // 0x08(0x0c)
};

// ScriptStruct TslGame.*9bdbea4314
// Size: 0x20 (Inherited: 0x00)
struct F*9bdbea4314 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UParticleSystem* ParticleSystem_Console; // 0x08(0x08)
	struct UParticleSystem* ParticleSystem_KoreanAndChinese; // 0x10(0x08)
	float MinRadius; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*96a3ca5af7
// Size: 0x30 (Inherited: 0x00)
struct F*96a3ca5af7 {
	struct UDecalComponent* *0f0ede0914; // 0x00(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x08(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct TslGame.*e9ff872fa4
// Size: 0xc8 (Inherited: 0xb0)
struct F*e9ff872fa4 : F*6408361421 {
	struct TArray<struct F*13275e6bdf> Array; // 0xb0(0x10)
	struct ATslFuelPuddleContainer* Owner; // 0xc0(0x08)
};

// ScriptStruct TslGame.*13275e6bdf
// Size: 0x48 (Inherited: 0x0c)
struct F*13275e6bdf : F*1eecbbbccc {
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float *460cce7c46; // 0x1c(0x04)
	float *b16fb9be79; // 0x20(0x04)
	bool *4b4647c234; // 0x24(0x01)
	bool *de8af9010f; // 0x25(0x01)
	bool *34b6d80078; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	int32 *4264e0f3c1; // 0x28(0x04)
	float *b49c7a8b1e; // 0x2c(0x04)
	struct FVector *7dd1c1c503; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct U*5ba17ce34b* *fe6ff516da; // 0x40(0x08)
};

// ScriptStruct TslGame.*085d2db64f
// Size: 0x18 (Inherited: 0x00)
struct F*085d2db64f {
	struct FString MapName; // 0x00(0x10)
	struct UClass* RestrictedAreasActorClass; // 0x10(0x08)
};

// ScriptStruct TslGame.*4154bf1a95
// Size: 0x28 (Inherited: 0x08)
struct F*4154bf1a95 : FTableRowBase {
	struct FString MasterItemID; // 0x08(0x10)
	struct TArray<struct F*e4fc6edc48> AttachDroppedItems; // 0x18(0x10)
};

// ScriptStruct TslGame.*e4fc6edc48
// Size: 0x10 (Inherited: 0x00)
struct F*e4fc6edc48 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*84cbed9341
// Size: 0x20 (Inherited: 0x08)
struct F*84cbed9341 : FTableRowBase {
	int32 RandNumber; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*e4fc6edc48> DroppedItems; // 0x10(0x10)
};

// ScriptStruct TslGame.*444bb56175
// Size: 0x14 (Inherited: 0x00)
struct F*444bb56175 {
	int32 *4134270e7d; // 0x00(0x04)
	int32 *71cb34239c; // 0x04(0x04)
	enum class EOutGamePlatformProvider Platform; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct ATslRacingPlayerState* PlayerState; // 0x0c(0x08)
};

// ScriptStruct TslGame.*0ba9e7b88a
// Size: 0x08 (Inherited: 0x00)
struct F*0ba9e7b88a {
	float GaugeDecreaseAmount; // 0x00(0x04)
	float GaugeDecreaseInterval; // 0x04(0x04)
};

// ScriptStruct TslGame.*d903d2f1d6
// Size: 0x10 (Inherited: 0x00)
struct F*d903d2f1d6 {
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

// ScriptStruct TslGame.*aadb36d914
// Size: 0x10 (Inherited: 0x00)
struct F*aadb36d914 {
	struct FName ItemID; // 0x00(0x08)
	bool *f6093e117b; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*682bc42f8e
// Size: 0x10 (Inherited: 0x00)
struct F*682bc42f8e {
	enum class ERespawnType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* Class; // 0x08(0x08)
};

// ScriptStruct TslGame.*ae78fd0384
// Size: 0x10 (Inherited: 0x00)
struct F*ae78fd0384 {
	struct ATslZombieDefensePlayerController* Killer; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*19544bfa9d
// Size: 0x10 (Inherited: 0x00)
struct F*19544bfa9d {
	struct UClass* Controller; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
};

// ScriptStruct TslGame.*445fa9b22d
// Size: 0x08 (Inherited: 0x00)
struct F*445fa9b22d {
	enum class *3e8211350e Rule; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*6c708b887c
// Size: 0x10 (Inherited: 0x00)
struct F*6c708b887c {
	struct TArray<struct UItem*> *c522fd0ecd; // 0x00(0x10)
};

// ScriptStruct TslGame.*16d30cf24e
// Size: 0x10 (Inherited: 0x00)
struct F*16d30cf24e {
	int32 *23aded9f42; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslZombiePlayerStartAndRespawn* *e2bcfe01f0; // 0x08(0x08)
};

// ScriptStruct TslGame.*c3d2847053
// Size: 0x18 (Inherited: 0x00)
struct F*c3d2847053 {
	enum class EAutoRecoveryType AutoType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *9f04b39aaa; // 0x04(0x04)
	float *049d608677; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *26a733aba7; // 0x10(0x08)
};

// ScriptStruct TslGame.*5522018e05
// Size: 0x20 (Inherited: 0x08)
struct F*5522018e05 : FTableRowBase {
	int32 *5ae9852fc9; // 0x08(0x04)
	float *799a69d51a; // 0x0c(0x04)
	struct TArray<struct F*8b6fabbb7a> *77b31c7f77; // 0x10(0x10)
};

// ScriptStruct TslGame.*7bbd12404f
// Size: 0x40 (Inherited: 0x00)
struct F*7bbd12404f {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*1b751e203e
// Size: 0x10 (Inherited: 0x00)
struct F*1b751e203e {
	struct FName SocketName; // 0x00(0x08)
	struct FName *a3c7ec6dcd; // 0x08(0x08)
};

// ScriptStruct TslGame.*104becccf3
// Size: 0x14 (Inherited: 0x00)
struct F*104becccf3 {
	struct FVector2D StartPoint; // 0x00(0x08)
	struct FVector2D EndPoint; // 0x08(0x08)
	float Angle; // 0x10(0x04)
};

// ScriptStruct TslGame.*87d453f38c
// Size: 0x10 (Inherited: 0x00)
struct F*87d453f38c {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	bool *b0d8597b73; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*0afb3a9842
// Size: 0x10 (Inherited: 0x08)
struct F*0afb3a9842 : FTableRowBase {
	int32 RemainHelathPercent; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f35f17d70b
// Size: 0x10 (Inherited: 0x00)
struct F*f35f17d70b {
	struct TArray<struct ATslRacingCheckPoint*> CheckPoints; // 0x00(0x10)
};

// ScriptStruct TslGame.*705f5de965
// Size: 0x18 (Inherited: 0x00)
struct F*705f5de965 {
	struct FName *c61e9806cb; // 0x00(0x08)
	struct TArray<struct UTexture2D*> *9f472ca4ce; // 0x08(0x10)
};

// ScriptStruct TslGame.*546a0e6f72
// Size: 0x10 (Inherited: 0x00)
struct F*546a0e6f72 {
	struct FName ActionName; // 0x00(0x08)
	enum class *b1be654dc6 KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*72ffa6680b
// Size: 0x38 (Inherited: 0x00)
struct F*72ffa6680b {
	struct TArray<int32> Kills; // 0x00(0x10)
	int32 Death; // 0x10(0x04)
	int32 *06a1315951; // 0x14(0x04)
	int32 *1e80296526; // 0x18(0x04)
	int32 *d84d0e5609; // 0x1c(0x04)
	int32 *6fd3befc9b; // 0x20(0x04)
	int32 *7045dd30ef; // 0x24(0x04)
	float *b85751e9f5; // 0x28(0x04)
	char pad_2C[0xc]; // 0x2c(0x0c)
};

// ScriptStruct TslGame.*f66ba77e81
// Size: 0x08 (Inherited: 0x00)
struct F*f66ba77e81 {
	int32 *f7e22b016d; // 0x00(0x04)
	enum class ETslBombMatchWinType *5cb90f1ce8; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*ea5f3ada7d
// Size: 0x20 (Inherited: 0x00)
struct F*ea5f3ada7d {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*28bb64a85c
// Size: 0x10 (Inherited: 0x00)
struct F*28bb64a85c {
	struct FName *7e48c53e98; // 0x00(0x08)
	struct FName *73011cbe79; // 0x08(0x08)
};

// ScriptStruct TslGame.*fe0eb2bad9
// Size: 0x48 (Inherited: 0x00)
struct F*fe0eb2bad9 {
	struct FString Category; // 0x00(0x10)
	struct FString Command; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FLinearColor Color; // 0x30(0x10)
	enum class *2a3cb1f5b1 Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 DefaultParameter; // 0x44(0x04)
};

// ScriptStruct TslGame.*f27ec3de46
// Size: 0x40 (Inherited: 0x00)
struct F*f27ec3de46 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*b62fd6b8c1
// Size: 0x90 (Inherited: 0x00)
struct F*b62fd6b8c1 {
	struct UParticleSystem* *ce84977c6c; // 0x00(0x08)
	struct FName *90bb6d6d2b; // 0x08(0x08)
	struct FName *f9c453501e; // 0x10(0x08)
	struct FName *4d1832eabd; // 0x18(0x08)
	struct TMap<int32, struct FVector> *32e3e8c0e0; // 0x20(0x50)
	float *eb4f75a7a8; // 0x70(0x04)
	float *316d6063e2; // 0x74(0x04)
	float *d8ad1f43db; // 0x78(0x04)
	float *f323263abb; // 0x7c(0x04)
	float *b8cbd13f9d; // 0x80(0x04)
	float *777d024002; // 0x84(0x04)
	float *efcf14b41c; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.*2b9dcba2db
// Size: 0x18 (Inherited: 0x00)
struct F*2b9dcba2db {
	struct FFloatInterval HealthPercentRange; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct TslGame.*862834250c
// Size: 0x14 (Inherited: 0x00)
struct F*862834250c {
	float *86bc729ef4; // 0x00(0x04)
	float *5a29abcfd3; // 0x04(0x04)
	float *1185f2eefc; // 0x08(0x04)
	char pad_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct TslGame.*334aafd77c
// Size: 0x08 (Inherited: 0x00)
struct F*334aafd77c {
	float DragCoefficient; // 0x00(0x04)
	float SectionArea; // 0x04(0x04)
};

// ScriptStruct TslGame.*80a4d6887c
// Size: 0x08 (Inherited: 0x00)
struct F*80a4d6887c {
	bool *72e261e3f0; // 0x00(0x01)
	enum class *a39982f5b1 *fbf0232944; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *7953e046be; // 0x04(0x04)
};

// ScriptStruct TslGame.*e62190201d
// Size: 0x18 (Inherited: 0x00)
struct F*e62190201d {
	struct UChildActorComponent* ChildActorComponent; // 0x00(0x08)
	struct FVector *61c687126a; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*6c3ee62522
// Size: 0xb8 (Inherited: 0x00)
struct F*6c3ee62522 {
	char pad_0[0xa0]; // 0x00(0xa0)
	struct AController* *2ae45837e9; // 0xa0(0x08)
	struct AActor* *f8a79d16d1; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct TslGame.*b226df5283
// Size: 0x28 (Inherited: 0x00)
struct F*b226df5283 {
	struct UParticleSystem* Particle; // 0x00(0x20)
	struct UAkAudioEvent* *c580f9e3ba; // 0x20(0x08)
};

// ScriptStruct TslGame.*04f5998f7e
// Size: 0x18 (Inherited: 0x00)
struct F*04f5998f7e {
	struct FName ItemID; // 0x00(0x08)
	enum class EEquipSlotID *e06c1a9445; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *9680969f37; // 0x0c(0x04)
	int32 Price; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*3f282941bd
// Size: 0x20 (Inherited: 0x08)
struct F*3f282941bd : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	enum class EEquipSlotID EquipSlotID; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float DeltaValue; // 0x14(0x04)
	int32 Price; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*589696227b
// Size: 0x28 (Inherited: 0x00)
struct F*589696227b {
	enum class EMarketLevel MarketLevel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName StoreItemID; // 0x08(0x08)
	enum class EStoreCategory StoreCategory; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float StoreItemPrice; // 0x14(0x04)
	int32 SortingPriority; // 0x18(0x04)
	int32 MaxQuantity; // 0x1c(0x04)
	int32 WeaponAmmo; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*e74bfcb053
// Size: 0x30 (Inherited: 0x08)
struct F*e74bfcb053 : FTableRowBase {
	enum class EMarketLevel MarketLevel; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName StoreItemID; // 0x10(0x08)
	enum class EStoreCategory StoreCategory; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float StoreItemPrice; // 0x1c(0x04)
	int32 SortingPriority; // 0x20(0x04)
	int32 MaxQuantity; // 0x24(0x04)
	int32 WeaponAmmo; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*55692ac766
// Size: 0x28 (Inherited: 0x00)
struct F*55692ac766 {
	enum class EMarketLevel MarketLevel; // 0x00(0x01)
	enum class EStoreCategory StoreCategory; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText GroupName; // 0x08(0x18)
	enum class EMarketCategoryType MarketCategoryType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*549f96b7ee
// Size: 0x30 (Inherited: 0x08)
struct F*549f96b7ee : FTableRowBase {
	enum class EMarketLevel MarketLevel; // 0x08(0x01)
	enum class EStoreCategory StoreCategory; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText GroupName; // 0x10(0x18)
	enum class EMarketCategoryType MarketCategoryType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*66b34b6dbc
// Size: 0x18 (Inherited: 0x08)
struct F*66b34b6dbc : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 Weight; // 0x10(0x04)
	int32 AdditionalAmmoCount; // 0x14(0x04)
};

// ScriptStruct TslGame.*411114c886
// Size: 0x28 (Inherited: 0x00)
struct F*411114c886 {
	struct FName *46b0d686e3; // 0x00(0x08)
	struct TArray<struct F*59be4d852f> *34aaa0726a; // 0x08(0x10)
	struct TArray<enum class EWeaponAttachmentSlotID> *7afddfbaba; // 0x18(0x10)
};

// ScriptStruct TslGame.*8213319902
// Size: 0x18 (Inherited: 0x00)
struct F*8213319902 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*0a950d8fcd
// Size: 0x03 (Inherited: 0x00)
struct F*0a950d8fcd {
	bool *279c86f05a; // 0x00(0x01)
	bool *46add7445a; // 0x01(0x01)
	bool *1e294c50b4; // 0x02(0x01)
};

// ScriptStruct TslGame.*7d8e2899e0
// Size: 0x20 (Inherited: 0x00)
struct F*7d8e2899e0 {
	struct FString WeatherId; // 0x00(0x10)
	int32 Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName WeatherLevel; // 0x18(0x08)
};

// ScriptStruct TslGame.*964b57626a
// Size: 0x50 (Inherited: 0x00)
struct F*964b57626a {
	int32 *b55aba405f; // 0x00(0x04)
	float *51c0f7f8af; // 0x04(0x04)
	struct TArray<struct FVector> *71abfe9b7f; // 0x08(0x10)
	int32 *5f06495ab5; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> *c274c8145e; // 0x20(0x10)
	struct TArray<bool> *4cc7dcd45c; // 0x30(0x10)
	struct TArray<struct UClass*> *4f6aecf1a2; // 0x40(0x10)
};

// ScriptStruct TslGame.*27f5dd0573
// Size: 0x30 (Inherited: 0x00)
struct F*27f5dd0573 {
	struct ATslLivingThingVolume* *72bf094e21; // 0x00(0x08)
	int32 *b55aba405f; // 0x08(0x04)
	float *51c0f7f8af; // 0x0c(0x04)
	int32 *03d53d0f62; // 0x10(0x04)
	float SpawnRate; // 0x14(0x04)
	int32 RandomSeed; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct F*17d71d92fc> *74882316cc; // 0x20(0x10)
};

// ScriptStruct TslGame.*17d71d92fc
// Size: 0x18 (Inherited: 0x00)
struct F*17d71d92fc {
	int32 *d7037376b0; // 0x00(0x04)
	float *1c196c1bda; // 0x04(0x04)
	struct TArray<struct F*fead81ca2f> *63a18d6629; // 0x08(0x10)
};

// ScriptStruct TslGame.*fead81ca2f
// Size: 0x18 (Inherited: 0x00)
struct F*fead81ca2f {
	float ServerTimeSeconds; // 0x00(0x04)
	bool EventID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<bool> Params; // 0x08(0x10)
};

// ScriptStruct TslGame.*5aa045ef63
// Size: 0x08 (Inherited: 0x00)
struct F*5aa045ef63 {
	enum class ELivingThingThreatLevel ThreatLevel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LastServerTimeSeconds; // 0x04(0x04)
};

// ScriptStruct TslGame.*5ab425c2b4
// Size: 0x40 (Inherited: 0x00)
struct F*5ab425c2b4 {
	int32 NetGUID; // 0x00(0x04)
	float SpawnTimeSeconds; // 0x04(0x04)
	float DestroyTimeSeconds; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator SpawnRotation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UClass* ActorClass; // 0x28(0x08)
	struct TArray<struct F*fead81ca2f> EventArray; // 0x30(0x10)
};

// ScriptStruct TslGame.*23a67aaedc
// Size: 0x30 (Inherited: 0x00)
struct F*23a67aaedc {
	struct TArray<struct F*6df18292bf> TextureParams; // 0x00(0x10)
	struct TArray<struct F*ef71e8b97c> ScalarParams; // 0x10(0x10)
	struct TArray<struct F*f3186afdcc> VectorParams; // 0x20(0x10)
};

// ScriptStruct TslGame.*f3186afdcc
// Size: 0x18 (Inherited: 0x00)
struct F*f3186afdcc {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct TslGame.*ef71e8b97c
// Size: 0x10 (Inherited: 0x00)
struct F*ef71e8b97c {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6df18292bf
// Size: 0x10 (Inherited: 0x00)
struct F*6df18292bf {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Value; // 0x08(0x08)
};

// ScriptStruct TslGame.*0521126be6
// Size: 0x10 (Inherited: 0x00)
struct F*0521126be6 {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
};

// ScriptStruct TslGame.*a0f2982288
// Size: 0x18 (Inherited: 0x00)
struct F*a0f2982288 {
	struct FName AnimName; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	float ServerTimeSeconds; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*c86f591157
// Size: 0x0c (Inherited: 0x00)
struct F*c86f591157 {
	float *73c7b19924; // 0x00(0x04)
	int32 *d7037376b0; // 0x04(0x04)
	float *53d5d25ebd; // 0x08(0x04)
};

// ScriptStruct TslGame.*c4990ef53e
// Size: 0x38 (Inherited: 0x00)
struct F*c4990ef53e {
	float *73c7b19924; // 0x00(0x04)
	int32 *d7037376b0; // 0x04(0x04)
	float *51c0f7f8af; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator *d2d944d7be; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FStringAssetReference ActorClass; // 0x28(0x10)
};

// ScriptStruct TslGame.*961c529e7d
// Size: 0x30 (Inherited: 0x00)
struct F*961c529e7d {
	float *73c7b19924; // 0x00(0x04)
	float *09b89be0bd; // 0x04(0x04)
	int32 EventID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<bool> *13e393b263; // 0x10(0x10)
	struct TArray<int32> NetGUIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*8242af8ecf
// Size: 0x38 (Inherited: 0x08)
struct F*8242af8ecf : FTableRowBase {
	float CellSize; // 0x08(0x04)
	struct FBoxSphereBounds VolumeBounds; // 0x0c(0x1c)
	struct TArray<struct F*93707b2219> Scanlines; // 0x28(0x10)
};

// ScriptStruct TslGame.*93707b2219
// Size: 0x30 (Inherited: 0x00)
struct F*93707b2219 {
	int32 *c289acf373; // 0x00(0x04)
	int32 *bff6869c99; // 0x04(0x04)
	int32 *f88eb65e10; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int16> *4749234482; // 0x10(0x10)
	struct TArray<float> LocationZ; // 0x20(0x10)
};

// ScriptStruct TslGame.*0b7d0d8ade
// Size: 0x10 (Inherited: 0x00)
struct F*0b7d0d8ade {
	struct UClass* Class; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	bool *4c862616a4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*a015573fac
// Size: 0x18 (Inherited: 0x08)
struct F*a015573fac : FTableRowBase {
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

// ScriptStruct TslGame.*3e1f42322f
// Size: 0x10 (Inherited: 0x00)
struct F*3e1f42322f {
	struct TArray<struct U*4ac95d13e1*> LODs; // 0x00(0x10)
};

// ScriptStruct TslGame.*48fd0adb7e
// Size: 0x1b8 (Inherited: 0x08)
struct F*48fd0adb7e : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush *fc046a96d0; // 0x98(0x90)
	struct FSlateBrush *01cc08eb41; // 0x128(0x90)
};

// ScriptStruct TslGame.*4ee0319836
// Size: 0x38 (Inherited: 0x08)
struct F*4ee0319836 : FSlateWidgetStyle {
	struct FSlateSound *14434e9659; // 0x08(0x18)
	struct FSlateSound *348c9570aa; // 0x20(0x18)
};

// ScriptStruct TslGame.*027dc81ba8
// Size: 0x218 (Inherited: 0x08)
struct F*027dc81ba8 : FSlateWidgetStyle {
	struct FSlateBrush *8c1815d1aa; // 0x08(0x90)
	struct FSlateBrush *562b6a73bb; // 0x98(0x90)
	struct FSlateBrush *526efcd651; // 0x128(0x90)
	struct FSlateSound *ff1599e11d; // 0x1b8(0x18)
	struct FSlateSound *3ee0d12f1d; // 0x1d0(0x18)
	struct FSlateSound *a22e1d03a7; // 0x1e8(0x18)
	struct FSlateSound *d33d7b7fa9; // 0x200(0x18)
};

// ScriptStruct TslGame.*c1cc415a0b
// Size: 0x50 (Inherited: 0x00)
struct F*c1cc415a0b {
	struct FName MonsterName; // 0x00(0x08)
	struct FString NormalKill; // 0x08(0x10)
	struct FString DBNOKill; // 0x18(0x10)
	struct FString MonsterL10Name; // 0x28(0x10)
	struct UClass* DamageType; // 0x38(0x08)
	struct UTexture* DamageCauserIcon; // 0x40(0x08)
	float IconRatio; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*5045a1a698
// Size: 0x30 (Inherited: 0x20)
struct F*5045a1a698 : F*0c62236203 {
	struct FVector *cf76fe0fa2; // 0x20(0x0c)
	float Scale; // 0x2c(0x04)
};

// ScriptStruct TslGame.*0c62236203
// Size: 0x20 (Inherited: 0x00)
struct F*0c62236203 {
	struct FString String; // 0x00(0x10)
	float Duration; // 0x10(0x04)
	struct FColor Color; // 0x14(0x04)
	int32 *0d2039cb44; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*5a6308a143
// Size: 0x28 (Inherited: 0x00)
struct F*5a6308a143 {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *ac90de0881; // 0x1c(0x04)
	float Width; // 0x20(0x04)
	int32 *0d2039cb44; // 0x24(0x04)
};

// ScriptStruct TslGame.*6a4ce97b22
// Size: 0x24 (Inherited: 0x00)
struct F*6a4ce97b22 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector2D Size; // 0x0c(0x08)
	struct FColor Color; // 0x14(0x04)
	float *ac90de0881; // 0x18(0x04)
	float Width; // 0x1c(0x04)
	int32 *0d2039cb44; // 0x20(0x04)
};

// ScriptStruct TslGame.*e0fd660724
// Size: 0x30 (Inherited: 0x00)
struct F*e0fd660724 {
	struct FVector Origin; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float HalfHeight; // 0x1c(0x04)
	struct FColor Color; // 0x20(0x04)
	float *ac90de0881; // 0x24(0x04)
	float Width; // 0x28(0x04)
	int32 *0d2039cb44; // 0x2c(0x04)
};

// ScriptStruct TslGame.*919e9a3d32
// Size: 0x20 (Inherited: 0x00)
struct F*919e9a3d32 {
	struct FVector Origin; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
	float *ac90de0881; // 0x14(0x04)
	float Width; // 0x18(0x04)
	int32 *0d2039cb44; // 0x1c(0x04)
};

// ScriptStruct TslGame.*227f1cd4fe
// Size: 0x2c (Inherited: 0x28)
struct F*227f1cd4fe : F*7c01556a88 {
	float ArrowSize; // 0x28(0x04)
};

// ScriptStruct TslGame.*7c01556a88
// Size: 0x28 (Inherited: 0x00)
struct F*7c01556a88 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *ac90de0881; // 0x1c(0x04)
	float Width; // 0x20(0x04)
	int32 *0d2039cb44; // 0x24(0x04)
};

// ScriptStruct TslGame.*486a9d3b45
// Size: 0x78 (Inherited: 0x08)
struct F*486a9d3b45 : FTableRowBase {
	struct FName SpawnEventName; // 0x08(0x08)
	enum class ETslSLBZombieSpawnType SpawnType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TMap<struct FName, struct F*f7830386c5> ZombieSpawnerSpawnDataMap; // 0x18(0x50)
	bool bPlayBGM; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float SpawnTime; // 0x6c(0x04)
	bool bDisablePatrol; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGame.*f7830386c5
// Size: 0x28 (Inherited: 0x00)
struct F*f7830386c5 {
	struct TArray<struct F*6ba47df8dd> ZombieSpawnDatas; // 0x00(0x10)
	struct F*a5259f47a8 ZombieOverrideData; // 0x10(0x10)
	int32 GroupID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*a5259f47a8
// Size: 0x10 (Inherited: 0x00)
struct F*a5259f47a8 {
	float *cf924a5ddb; // 0x00(0x04)
	float *0c8ded121d; // 0x04(0x04)
	float *d2bec9d52a; // 0x08(0x04)
	int32 *f20d8e9622; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6ba47df8dd
// Size: 0x50 (Inherited: 0x00)
struct F*6ba47df8dd {
	struct FName SLBZombieStatusName; // 0x00(0x08)
	struct FName SLBOverrideZombieMovementName; // 0x08(0x08)
	struct UBehaviorTree* OverrideBehaviorTree; // 0x10(0x08)
	int32 SpawnCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> BuffTargetSpawnerNameOverride; // 0x20(0x10)
	struct TArray<struct F*fe8e5e4afb> RunnerSummonDatas; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct TslGame.*fe8e5e4afb
// Size: 0x18 (Inherited: 0x00)
struct F*fe8e5e4afb {
	struct FName *c8e17d51fd; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
	int32 SpawnCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*cbfea172ad
// Size: 0x58 (Inherited: 0x48)
struct F*cbfea172ad : F*74d91a5598 {
	struct FName *5803b4c829; // 0x48(0x08)
	enum class ETslSLBStage Stage; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.*990a3a1837
// Size: 0x78 (Inherited: 0x48)
struct F*990a3a1837 : F*e05a276d1f {
	struct FName StatusName; // 0x48(0x08)
	enum class ETslSLBStage Stage; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float ThrowDistance; // 0x54(0x04)
	int32 EnableRoamingDoorOpen; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UBehaviorTree* RootBehaviorTree; // 0x60(0x08)
	struct TArray<struct UClass*> ImmunBuffList; // 0x68(0x10)
};

// ScriptStruct TslGame.*c3baa5047f
// Size: 0x168 (Inherited: 0x00)
struct F*c3baa5047f {
	float *178409c780; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *fbe93eef5a; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, struct F*df3bfc6771> *607de64620; // 0x58(0x50)
	struct TMap<struct FName, struct F*df3bfc6771> *94c9ef423c; // 0xa8(0x50)
	struct TMap<enum class EWeaponClass, struct F*b35cac31c1> *93d17b7c82; // 0xf8(0x50)
	float *0724783604; // 0x148(0x04)
	float *862dadfc62; // 0x14c(0x04)
	float *9c60682451; // 0x150(0x04)
	float *095e295b5e; // 0x154(0x04)
	float *7662119861; // 0x158(0x04)
	float *f70f6b1fb2; // 0x15c(0x04)
	float *7d5a6dc8a4; // 0x160(0x04)
	enum class EDamageReason *82e8a1cde7; // 0x164(0x01)
	bool *087af20846; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
};

// ScriptStruct TslGame.*b35cac31c1
// Size: 0x10 (Inherited: 0x00)
struct F*b35cac31c1 {
	float *191fa9ced3; // 0x00(0x04)
	float *e3929a259b; // 0x04(0x04)
	float *0fd8af3502; // 0x08(0x04)
	bool *42602dcd48; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*df3bfc6771
// Size: 0x20 (Inherited: 0x00)
struct F*df3bfc6771 {
	float *0fd8af3502; // 0x00(0x04)
	float *5668e0383e; // 0x04(0x04)
	float *95753ef841; // 0x08(0x04)
	float *27715e4215; // 0x0c(0x04)
	float *93446251a8; // 0x10(0x04)
	float *e03664de15; // 0x14(0x04)
	float *449e4cbf2e; // 0x18(0x04)
	float *09dbb0e179; // 0x1c(0x04)
};

// ScriptStruct TslGame.*4122378126
// Size: 0x20 (Inherited: 0x00)
struct F*4122378126 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct TslGame.*cb46a62c8f
// Size: 0x50 (Inherited: 0x00)
struct F*cb46a62c8f {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*8d9360ca60
// Size: 0x10 (Inherited: 0x00)
struct F*8d9360ca60 {
	struct UClass* *963326712f; // 0x00(0x08)
	int32 Number; // 0x08(0x04)
	int32 *d768c017e6; // 0x0c(0x04)
};

// ScriptStruct TslGame.*249c127f1a
// Size: 0x10 (Inherited: 0x00)
struct F*249c127f1a {
	struct UClass* *963326712f; // 0x00(0x08)
	int32 Number; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*0684d5635b
// Size: 0x10 (Inherited: 0x00)
struct F*0684d5635b {
	struct UClass* *963326712f; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*3c48712c07
// Size: 0x20 (Inherited: 0x08)
struct F*3c48712c07 : FTableRowBase {
	enum class EPhysicalSurface *0b054e7c23; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*bc6133bb42 *3c7e63f155; // 0x10(0x10)
};

// ScriptStruct TslGame.*bc6133bb42
// Size: 0x10 (Inherited: 0x00)
struct F*bc6133bb42 {
	float Damage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* *0ad023d030; // 0x08(0x08)
};

// ScriptStruct TslGame.*4d477960c6
// Size: 0x20 (Inherited: 0x00)
struct F*4d477960c6 {
	enum class *8efa41bcb0 Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FStringClassReference *8d3349a242; // 0x08(0x10)
	bool *4a60a0428d; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*887f95e76c
// Size: 0x28 (Inherited: 0x08)
struct F*887f95e76c : FTableRowBase {
	enum class *8efa41bcb0 Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FStringClassReference *8d3349a242; // 0x10(0x10)
	float *9efd00caa3; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*360efbed3a
// Size: 0x08 (Inherited: 0x00)
struct F*360efbed3a {
	float *69a976c26b; // 0x00(0x04)
	float *de21b66a7a; // 0x04(0x04)
};

// ScriptStruct TslGame.*cfffa19d13
// Size: 0xb0 (Inherited: 0x00)
struct F*cfffa19d13 {
	float *178409c780; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *fbe93eef5a; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, float> *bf312b9f74; // 0x58(0x50)
	float *d75cba0e4b; // 0xa8(0x04)
	enum class EEquipSlotID *4eff0852cb; // 0xac(0x01)
	enum class EDamageReason *82e8a1cde7; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
};

// ScriptStruct TslGame.*b31c8df5c5
// Size: 0x38 (Inherited: 0x00)
struct F*b31c8df5c5 {
	struct ATslCharacter* *deefbd004f; // 0x00(0x08)
	struct ATslCharacter* *9a462dd307; // 0x08(0x08)
	struct ATslPostProcessEffect* Effect; // 0x10(0x08)
	struct ATslPlayerController* PlayerController; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct TslGame.*52dc6129f2
// Size: 0x20 (Inherited: 0x00)
struct F*52dc6129f2 {
	struct UClass* MonsterTemplate; // 0x00(0x08)
	int32 SpawnMaxCount; // 0x08(0x04)
	int32 CurTotalSpawnCount; // 0x0c(0x04)
	int32 CurSameSpawnCount; // 0x10(0x04)
	int32 *15019b11b6; // 0x14(0x04)
	int32 *d768c017e6; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.OverPowerUserPlayData
// Size: 0x10 (Inherited: 0x08)
struct FOverPowerUserPlayData : FBaseUserPlayData {
	int32 OpCoins; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*a3b37e3c4c
// Size: 0x10 (Inherited: 0x00)
struct F*a3b37e3c4c {
	struct UClass* *6bf6c722af; // 0x00(0x08)
	float *18a6309529; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.LogRacingModeCheckPointPlayData
// Size: 0x20 (Inherited: 0x00)
struct FLogRacingModeCheckPointPlayData {
	int32 *3978833652; // 0x00(0x04)
	float *9cd7d92cb3; // 0x04(0x04)
	int32 *08abe8fa63; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString *717e88e352; // 0x10(0x10)
};

// ScriptStruct TslGame.*50d6377d12
// Size: 0x0c (Inherited: 0x00)
struct F*50d6377d12 {
	int32 *076fbdf4a0; // 0x00(0x04)
	int32 Labs; // 0x04(0x04)
	float *ab186fb32e; // 0x08(0x04)
};

// ScriptStruct TslGame.*ac46801515
// Size: 0x50 (Inherited: 0x00)
struct F*ac46801515 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UTexture2D* RewardImage; // 0x08(0x08)
	struct FText RewardName; // 0x10(0x18)
	struct FText RewardDescription; // 0x28(0x18)
	struct TArray<struct F*21d21779e8> TeamHistory; // 0x40(0x10)
};

// ScriptStruct TslGame.*21d21779e8
// Size: 0x18 (Inherited: 0x00)
struct F*21d21779e8 {
	int32 SquadMemberIndex; // 0x00(0x04)
	struct FLinearColor Color; // 0x04(0x10)
	enum class ETslSLBStageDifficulty History; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*d3f03e2d11
// Size: 0x20 (Inherited: 0x00)
struct F*d3f03e2d11 {
	enum class ETslSLBStage ID; // 0x00(0x01)
	bool bIsSelected; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 VotedNum; // 0x04(0x04)
	enum class ETslSLBStageDifficulty MyHistory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*21d21779e8> TeamHistory; // 0x10(0x10)
};

// ScriptStruct TslGame.*6f2ddaab7f
// Size: 0x08 (Inherited: 0x00)
struct F*6f2ddaab7f {
	enum class ETslSLBStageDifficulty ID; // 0x00(0x01)
	bool bIsSelected; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 VotedNum; // 0x04(0x04)
};

// ScriptStruct TslGame.*f043e79055
// Size: 0x30 (Inherited: 0x00)
struct F*f043e79055 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
	int32 *1fb1ac278d; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PlayerName; // 0x10(0x10)
	int32 Kill; // 0x20(0x04)
	int32 *0848ff89ef; // 0x24(0x04)
	bool *8209993e0a; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*f8df879a1c
// Size: 0x10 (Inherited: 0x00)
struct F*f8df879a1c {
	struct FName *c61e9806cb; // 0x00(0x08)
	int32 *73b17b2857; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.SLBUserPlayData
// Size: 0x28 (Inherited: 0x08)
struct FSLBUserPlayData : FBaseUserPlayData {
	struct TArray<struct FSLBVaultItem> Vault; // 0x08(0x10)
	struct TArray<struct FTslSLBStageID> BestClearStageDifficulty; // 0x18(0x10)
};

// ScriptStruct TslGame.*d532a1c4f2
// Size: 0x08 (Inherited: 0x00)
struct F*d532a1c4f2 {
	int32 Kill; // 0x00(0x04)
	int32 *0848ff89ef; // 0x04(0x04)
};

// ScriptStruct TslGame.*cbcdae305c
// Size: 0x20 (Inherited: 0x00)
struct F*cbcdae305c {
	enum class ETslSLBInteractionType *57887dc1de; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *9ed491684e; // 0x04(0x04)
	float *d68eddf661; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ATslSLBMissionGeneratorActor* *e4588c5153; // 0x10(0x08)
	struct ATslSLBExitActor* *7b345b555e; // 0x18(0x08)
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

// ScriptStruct TslGame.*f934cf12b5
// Size: 0xb0 (Inherited: 0x00)
struct F*f934cf12b5 {
	struct TArray<struct F*9469cf26de> ESportsTeamInfos; // 0x00(0x10)
	char pad_10[0xa0]; // 0x10(0xa0)
};

// ScriptStruct TslGame.*9469cf26de
// Size: 0x40 (Inherited: 0x00)
struct F*9469cf26de {
	struct FString TeamName; // 0x00(0x10)
	struct FString TeamFullName; // 0x10(0x10)
	struct FString TeamLogoUrl; // 0x20(0x10)
	struct TArray<struct F*9f72343b9c> Rosters; // 0x30(0x10)
};

// ScriptStruct TslGame.*9f72343b9c
// Size: 0x40 (Inherited: 0x00)
struct F*9f72343b9c {
	struct FString Name; // 0x00(0x10)
	struct FString FullName; // 0x10(0x10)
	struct FString Nickname; // 0x20(0x10)
	struct FString PhotoUrl; // 0x30(0x10)
};

// ScriptStruct TslGame.*cdb63b93c3
// Size: 0x50 (Inherited: 0x00)
struct F*cdb63b93c3 {
	struct TMap<struct FName, struct F*84b5febf37> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*84b5febf37
// Size: 0x50 (Inherited: 0x00)
struct F*84b5febf37 {
	struct TMap<struct FName, struct FString> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*291cd537f6
// Size: 0x10 (Inherited: 0x00)
struct F*291cd537f6 {
	struct TArray<struct F*cd4dca1ee3> Hierarchy; // 0x00(0x10)
};

// ScriptStruct TslGame.*cd4dca1ee3
// Size: 0x48 (Inherited: 0x00)
struct F*cd4dca1ee3 {
	struct F*d31549d70e TabDesc_DataTableRow; // 0x00(0x38)
	struct TArray<struct F*94ff8fff23> SubTabs; // 0x38(0x10)
};

// ScriptStruct TslGame.*94ff8fff23
// Size: 0x50 (Inherited: 0x00)
struct F*94ff8fff23 {
	struct F*df319ebb9c SubTabDesc_DataTableRow; // 0x00(0x40)
	struct TArray<struct F*d662561bea> Categories; // 0x40(0x10)
};

// ScriptStruct TslGame.*d662561bea
// Size: 0x60 (Inherited: 0x00)
struct F*d662561bea {
	struct F*9733fdfa53 CategoryDesc_DataTableRow; // 0x00(0x50)
	struct TArray<struct F*41830300bb> Items_DataTable; // 0x50(0x10)
};

// ScriptStruct TslGame.*0b651631f5
// Size: 0x18 (Inherited: 0x00)
struct F*0b651631f5 {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*715b097ca1
// Size: 0x24 (Inherited: 0x00)
struct F*715b097ca1 {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct TslGame.*ffc1bf2457
// Size: 0x68 (Inherited: 0x00)
struct F*ffc1bf2457 {
	float *be69149507; // 0x00(0x04)
	float *26f405d8cd; // 0x04(0x04)
	float *7159cc879c; // 0x08(0x04)
	float *dd92c7e76c; // 0x0c(0x04)
	float *f458399c14; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UParticleSystem* *4ed8ae2ba8; // 0x18(0x08)
	struct UClass* *3650212816; // 0x20(0x08)
	struct UClass* *6473e280a2; // 0x28(0x08)
	struct UAkAudioEvent* *e4ea863202; // 0x30(0x08)
	struct UAkAudioEvent* *7d493c171b; // 0x38(0x08)
	struct UAkAudioEvent* *cc1d585e3f; // 0x40(0x08)
	struct UAkAudioEvent* *26866e7b95; // 0x48(0x08)
	struct UAkAudioEvent* *705a13444a; // 0x50(0x08)
	float *63e669c3ed; // 0x58(0x04)
	float *0d59f0cf19; // 0x5c(0x04)
	float *aaa21b7151; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.*9d8e3a5cd8
// Size: 0xf8 (Inherited: 0x00)
struct F*9d8e3a5cd8 {
	bool *ea1a8d37d6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *c1fd13c941; // 0x04(0x04)
	float *c6e97b0d6c; // 0x08(0x04)
	float *83d9a34e7b; // 0x0c(0x04)
	struct UCurveFloat* *ca81a542cc; // 0x10(0x08)
	struct UClass* *0ad023d030; // 0x18(0x08)
	struct UClass* *521fcd9654; // 0x20(0x08)
	struct UClass* *961148131d; // 0x28(0x08)
	struct UClass* *3648fa0082; // 0x30(0x08)
	struct UClass* *23e406ce84; // 0x38(0x08)
	int32 *65d5af2b47; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UClass* *b2d90ab001; // 0x48(0x08)
	float *7d324c9d95; // 0x50(0x04)
	float *efcc647e34; // 0x54(0x04)
	struct UTexture* DamageCauserIcon; // 0x58(0x08)
	float DamageIconRatio; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText DamageCauserItemName; // 0x68(0x18)
	enum class EWeaponClass DamageCauserClass; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *41b5ff4433; // 0x84(0x04)
	char *5ed81f993d : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float RotationSpeed; // 0x8c(0x04)
	struct F*e7af6a5eac *e7af6a5eac; // 0x90(0x40)
	bool *e1ece4be8b; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float PenetrationDepth; // 0xd4(0x04)
	float *b5ded183a6; // 0xd8(0x04)
	float *8a9ddb9e5f; // 0xdc(0x04)
	bool *d61cbc9673; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *102409486f; // 0xe4(0x04)
	float *400303adad; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UCurveFloat* *6e7718db9f; // 0xf0(0x08)
};

// ScriptStruct TslGame.PubgIdTierData
// Size: 0x20 (Inherited: 0x00)
struct FPubgIdTierData {
	struct FString ID; // 0x00(0x10)
	struct FString ImagePath; // 0x10(0x10)
};

// ScriptStruct TslGame.*8b75b05e8a
// Size: 0x30 (Inherited: 0x00)
struct F*8b75b05e8a {
	enum class ETslPubgIdAssetType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
	struct F*2ef3a887d0 TimerHandle; // 0x20(0x08)
	int32 RefCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*5655acaabd
// Size: 0x10 (Inherited: 0x00)
struct F*5655acaabd {
	struct UAkAudioEvent* *c08a556eef; // 0x00(0x08)
	float *369c39f902; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*35549c8519
// Size: 0x18 (Inherited: 0x08)
struct F*35549c8519 : FTableRowBase {
	enum class ERadioMessageAlarmSoundCategory *b4334c7b0b; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* *88e7ce2a52; // 0x10(0x08)
};

// ScriptStruct TslGame.*c05eeba2e4
// Size: 0x28 (Inherited: 0x08)
struct F*c05eeba2e4 : FTableRowBase {
	enum class ERadioMessageCategory Category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString StringKey; // 0x10(0x10)
	enum class ERadioMessageAlarmSoundCategory *b4334c7b0b; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*33a0ad8f73
// Size: 0x18 (Inherited: 0x00)
struct F*33a0ad8f73 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString StringKey; // 0x08(0x10)
};

// ScriptStruct TslGame.*80469e0569
// Size: 0x30 (Inherited: 0x00)
struct F*80469e0569 {
	struct FName *7a4c696f4d; // 0x00(0x08)
	struct UCurveFloat* *5ff3707f11; // 0x08(0x08)
	bool *575568309c; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float StartTime; // 0x14(0x04)
	float *6c13658bde; // 0x18(0x04)
	char pad_1C[0x8]; // 0x1c(0x08)
	float *f35afb2789; // 0x24(0x04)
	float *fba971455a; // 0x28(0x04)
	float *6e1a9011ae; // 0x2c(0x04)
};

// ScriptStruct TslGame.DoorBreakingState
// Size: 0x01 (Inherited: 0x00)
struct FDoorBreakingState {
	char *8d3303b06b : 1; // 0x00(0x01)
	char *b651d4e845 : 1; // 0x00(0x01)
	char *c52a0fbd9b : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct TslGame.*d8861edf39
// Size: 0x20 (Inherited: 0x00)
struct F*d8861edf39 {
	struct FString ModeName; // 0x00(0x10)
	struct FString *2b7268a19b; // 0x10(0x10)
};

// ScriptStruct TslGame.*b2dd8c8c84
// Size: 0x18 (Inherited: 0x00)
struct F*b2dd8c8c84 {
	struct FStringClassReference *3a2151f414; // 0x00(0x10)
	struct UClass* ItemClass; // 0x10(0x08)
};

// ScriptStruct TslGame.*2b168536e4
// Size: 0x18 (Inherited: 0x00)
struct F*2b168536e4 {
	enum class ESandboxPowerType *c710d745f4; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*564a997b02> *67dfc8f66f; // 0x08(0x10)
};

// ScriptStruct TslGame.*564a997b02
// Size: 0x20 (Inherited: 0x00)
struct F*564a997b02 {
	struct UParticleSystem* PS; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FRotator RelativeRotation; // 0x10(0x0c)
	bool *9351ce6637; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*531502396e
// Size: 0x10 (Inherited: 0x00)
struct F*531502396e {
	struct USceneComponent* *a22705ad34; // 0x00(0x08)
	struct AActor* ChildActor; // 0x08(0x08)
};

// ScriptStruct TslGame.*d5350b1b32
// Size: 0xa0 (Inherited: 0x00)
struct F*d5350b1b32 {
	struct FName Name; // 0x00(0x08)
	float *4bc847b952; // 0x08(0x04)
	float *6d4fc6e7b9; // 0x0c(0x04)
	struct FVector *7d1b8ad5fe; // 0x10(0x0c)
	struct FRotator *6b763a677d; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *026ff013c6; // 0x30(0x30)
	struct FTransform *a6d95c97f4; // 0x60(0x30)
	float *4791261eff; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct TslGame.*4e998089d6
// Size: 0x1c (Inherited: 0x00)
struct F*4e998089d6 {
	struct FVector2D RealTime; // 0x00(0x08)
	struct FVector2D TimeDilation; // 0x08(0x08)
	struct FVector2D Area; // 0x10(0x08)
	float *62cb1ccaf7; // 0x18(0x04)
};

// ScriptStruct TslGame.*d1a292025b
// Size: 0x0c (Inherited: 0x00)
struct F*d1a292025b {
	struct FVector2D RealTime; // 0x00(0x08)
	float TimeDilation; // 0x08(0x04)
};

// ScriptStruct TslGame.*3e291191f5
// Size: 0x58 (Inherited: 0x50)
struct F*3e291191f5 : F*327e2c5151 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*b8e8afc3c4
// Size: 0x18 (Inherited: 0x00)
struct F*b8e8afc3c4 {
	struct TArray<struct FName> *c16387af1f; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*a23f92d3b8
// Size: 0x340 (Inherited: 0x00)
struct F*a23f92d3b8 {
	struct F*59709b63e2 *ba26b315cd; // 0x00(0x130)
	struct F*59709b63e2 *cc395e0aa3; // 0x130(0x130)
	struct FName *a96bd14812; // 0x260(0x08)
	struct FName *9d2334be4a; // 0x268(0x08)
	float *80320cc769; // 0x270(0x04)
	float *99d143f210; // 0x274(0x04)
	float *7627eb8cae; // 0x278(0x04)
	bool *bf9ae4bdbd; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UClass* *d818aca77e; // 0x280(0x20)
	struct UClass* *0d1bcaf11b; // 0x2a0(0x20)
	struct UClass* *093dfeb9c5; // 0x2c0(0x20)
	struct UClass* *c6127822e8; // 0x2e0(0x20)
	struct UClass* *fef1327dc2; // 0x300(0x20)
	struct UClass* *9da0045570; // 0x320(0x20)
};

// ScriptStruct TslGame.*92f70ecce2
// Size: 0x28 (Inherited: 0x00)
struct F*92f70ecce2 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*1779689c1b
// Size: 0x80 (Inherited: 0x08)
struct F*1779689c1b : FTableRowBase {
	int32 SprayDecalID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SprayDecalLocalizedName; // 0x10(0x18)
	struct UTexture2D* IconTexture; // 0x28(0x20)
	struct UTexture2D* SprayDecalTexture; // 0x48(0x20)
	int32 SpraySize; // 0x68(0x04)
	struct FLinearColor SprayColor; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*eef2737185
// Size: 0x08 (Inherited: 0x00)
struct F*eef2737185 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*9ea9e1768e
// Size: 0x10 (Inherited: 0x00)
struct F*9ea9e1768e {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*9ae4e0a91a
// Size: 0x10 (Inherited: 0x00)
struct F*9ae4e0a91a {
	struct TArray<int32> *3fca8fac92; // 0x00(0x10)
};

// ScriptStruct TslGame.*7808dbbc5e
// Size: 0x20 (Inherited: 0x00)
struct F*7808dbbc5e {
	struct TArray<struct F*9aa866ed0a> *95871bb132; // 0x00(0x10)
	struct FString *d98fe9fe52; // 0x10(0x10)
};

// ScriptStruct TslGame.*9aa866ed0a
// Size: 0x70 (Inherited: 0x00)
struct F*9aa866ed0a {
	struct FString *d98fe9fe52; // 0x00(0x10)
	struct FName *dd26292a0d; // 0x10(0x08)
	int32 *f4a84d0565; // 0x18(0x04)
	struct FVector_NetQuantize ImpactPoint; // 0x1c(0x0c)
	struct FVector_NetQuantize Location; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0x0c)
	struct UPrimitiveComponent* Component; // 0x40(0x08)
	struct AActor* Actor; // 0x48(0x08)
	float *8e22a0bf04; // 0x50(0x04)
	char pad_54[0x1c]; // 0x54(0x1c)
};

// ScriptStruct TslGame.*5801fed362
// Size: 0x10 (Inherited: 0x00)
struct F*5801fed362 {
	enum class EDamageZoneType DamageZoneType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct TslGame.*ac8c4c4fd8
// Size: 0x18 (Inherited: 0x00)
struct F*ac8c4c4fd8 {
	struct TArray<struct FColor> *63b1f8581e; // 0x00(0x10)
	struct FVector2D TextureSize; // 0x10(0x08)
};

// ScriptStruct TslGame.*47d811312a
// Size: 0x10 (Inherited: 0x00)
struct F*47d811312a {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FVector2D Size; // 0x08(0x08)
};

// ScriptStruct TslGame.*b672bbc01e
// Size: 0x58 (Inherited: 0x08)
struct F*b672bbc01e : FTableRowBase {
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

// ScriptStruct TslGame.*fe526f0b36
// Size: 0x270 (Inherited: 0x00)
struct F*fe526f0b36 {
	bool bUseSelfCasting; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*59709b63e2 SelfWithCastConfig; // 0x08(0x130)
	bool bUseTeammateCasting; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct F*59709b63e2 TeammateWithCastConfig; // 0x140(0x130)
};

// ScriptStruct TslGame.*ce800c6ce7
// Size: 0x98 (Inherited: 0x08)
struct F*ce800c6ce7 : FTableRowBase {
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
	struct F*0156fa3dd5 GuideMessageData; // 0x48(0x50)
};

// ScriptStruct TslGame.*0156fa3dd5
// Size: 0x50 (Inherited: 0x00)
struct F*0156fa3dd5 {
	struct FText Title; // 0x00(0x18)
	struct FText PCDescription; // 0x18(0x18)
	struct FText ConsoleDescription; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct TslGame.*ab18a927b2
// Size: 0x01 (Inherited: 0x00)
struct F*ab18a927b2 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*69533b192a
// Size: 0x80 (Inherited: 0x00)
struct F*69533b192a {
	struct FText *6362fc354b; // 0x00(0x18)
	struct FText *46c21f661d; // 0x18(0x18)
	struct FSlateColor *c0ea0ab0ed; // 0x30(0x28)
	struct FSlateColor *b4c2937aab; // 0x58(0x28)
};

// ScriptStruct TslGame.*b1f9205802
// Size: 0x50 (Inherited: 0x00)
struct F*b1f9205802 {
	struct FText *6362fc354b; // 0x00(0x18)
	struct FText *46c21f661d; // 0x18(0x18)
	struct FLinearColor *5c2296fef3; // 0x30(0x10)
	struct FLinearColor *9c32a7136d; // 0x40(0x10)
};

// ScriptStruct TslGame.*551a3a4ba6
// Size: 0x01 (Inherited: 0x00)
struct F*551a3a4ba6 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*bfd2bc348f
// Size: 0x0c (Inherited: 0x00)
struct F*bfd2bc348f {
	bool bVisible; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Number; // 0x04(0x04)
	bool bCanFire; // 0x08(0x01)
	bool *67e179ed25; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct TslGame.*f52d023738
// Size: 0x18 (Inherited: 0x00)
struct F*f52d023738 {
	struct FVector2D *aa10f87ffd; // 0x00(0x08)
	float *0a8b0c5bb9; // 0x08(0x04)
	struct FVector2D *357862e1e7; // 0x0c(0x08)
	float *63f25fcf20; // 0x14(0x04)
};

// ScriptStruct TslGame.*2432020fe6
// Size: 0x20 (Inherited: 0x00)
struct F*2432020fe6 {
	struct FLinearColor *ec7a63313b; // 0x00(0x10)
	float *0d6b5bb29c; // 0x10(0x04)
	float *e3966685dd; // 0x14(0x04)
	float *6751c3fad0; // 0x18(0x04)
	float *ac3a87ec9a; // 0x1c(0x04)
};

// ScriptStruct TslGame.*102d2e182a
// Size: 0x10 (Inherited: 0x00)
struct F*102d2e182a {
	struct TArray<struct F*a9823b1a04> *f48dfa5957; // 0x00(0x10)
};

// ScriptStruct TslGame.*a9823b1a04
// Size: 0x60 (Inherited: 0x00)
struct F*a9823b1a04 {
	int32 *3f3e09a301; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FStringAssetReference *940420a3f5; // 0x08(0x10)
	struct FName *d737fe3568; // 0x18(0x08)
	int32 *669a6c1423; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FText> *3825ffdf76; // 0x28(0x10)
	struct TArray<float> *2022137b9f; // 0x38(0x10)
	int32 *65802a5930; // 0x48(0x04)
	int32 *c78ffae70b; // 0x4c(0x04)
	int32 *ee22294e90; // 0x50(0x04)
	bool *f78308c792; // 0x54(0x01)
	bool *bdc7d3620d; // 0x55(0x01)
	bool *a8622d3a0e; // 0x56(0x01)
	char pad_57[0x9]; // 0x57(0x09)
};

// ScriptStruct TslGame.*dcbe880e74
// Size: 0x168 (Inherited: 0x00)
struct F*dcbe880e74 {
	bool *0efc0533e3; // 0x00(0x01)
	enum class ETslTrainingDashboardPracticeUIType PracticeType; // 0x01(0x01)
	enum class ETslTrainingDashboardRangeUIType *82bb019ec5; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct F*ef69b7cc59 *ceaa59a9d5; // 0x08(0x50)
	struct F*ef69b7cc59 *8714658a2d; // 0x58(0x50)
	struct F*ef69b7cc59 *a31a7920bc; // 0xa8(0x50)
	struct F*ef69b7cc59 *65380c1ad8; // 0xf8(0x50)
	struct F*ca41c1d06a *41444953a0; // 0x148(0x20)
};

// ScriptStruct TslGame.*ca41c1d06a
// Size: 0x20 (Inherited: 0x00)
struct F*ca41c1d06a {
	int32 *da58e8e321; // 0x00(0x04)
	int32 *e4ff229396; // 0x04(0x04)
	float *da14060220; // 0x08(0x04)
	int32 *e51434aaef; // 0x0c(0x04)
	struct TArray<int32> *dd2fcd5e05; // 0x10(0x10)
};

// ScriptStruct TslGame.*ef69b7cc59
// Size: 0x50 (Inherited: 0x00)
struct F*ef69b7cc59 {
	int32 Score; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	struct F*4ec606ca10 *869a267e65; // 0x08(0x38)
	struct F*66c5131c00 *ba625aadae; // 0x40(0x10)
};

// ScriptStruct TslGame.*66c5131c00
// Size: 0x10 (Inherited: 0x00)
struct F*66c5131c00 {
	struct FString *d0d38e4050; // 0x00(0x10)
};

// ScriptStruct TslGame.*4ec606ca10
// Size: 0x38 (Inherited: 0x00)
struct F*4ec606ca10 {
	float Accuracy; // 0x00(0x04)
	int32 HeadShot; // 0x04(0x04)
	struct FText WeaponName; // 0x08(0x18)
	float *8840c0f4e6; // 0x20(0x04)
	float *38c3bf33de; // 0x24(0x04)
	float *a8f7336a8e; // 0x28(0x04)
	float *46889a215f; // 0x2c(0x04)
	float *a4fb986f56; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*70f8b2987a
// Size: 0x28 (Inherited: 0x00)
struct F*70f8b2987a {
	struct FLinearColor *6b6609cb47; // 0x00(0x10)
	enum class ETslTrainingDashboardRangeUIType *82bb019ec5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<int32> Scores; // 0x18(0x10)
};

// ScriptStruct TslGame.*1fe531c799
// Size: 0x24 (Inherited: 0x00)
struct F*1fe531c799 {
	struct FLinearColor *d930ae979c; // 0x00(0x10)
	float *7ca34f72ac; // 0x10(0x04)
	float *e8c6bde42d; // 0x14(0x04)
	float *148dff4830; // 0x18(0x04)
	float *942b5285f4; // 0x1c(0x04)
	float *2f5986d3d5; // 0x20(0x04)
};

// ScriptStruct TslGame.*2079be8538
// Size: 0x70 (Inherited: 0x00)
struct F*2079be8538 {
	struct FSlateColor *6b4ffd51e2; // 0x00(0x28)
	struct FSlateColor *858c4d9a07; // 0x28(0x28)
	struct FLinearColor *2bea5f6c36; // 0x50(0x10)
	struct FLinearColor *2f1dad8a84; // 0x60(0x10)
};

// ScriptStruct TslGame.*8a9f52de6c
// Size: 0xc48 (Inherited: 0x00)
struct F*8a9f52de6c {
	struct UAnimMontage* *354290297e; // 0x00(0x08)
	struct F*ff6ea3da5e *cd984f6caa; // 0x08(0xc40)
};

// ScriptStruct TslGame.*29612e16ec
// Size: 0x28 (Inherited: 0x00)
struct F*29612e16ec {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct AActor*> *a27d3a0104; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct TslGame.*2f27ec3b12
// Size: 0x68 (Inherited: 0x08)
struct F*2f27ec3b12 : FTableRowBase {
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

// ScriptStruct TslGame.*7b1ba612d8
// Size: 0x10 (Inherited: 0x00)
struct F*7b1ba612d8 {
	bool *830b462a0c; // 0x00(0x01)
	bool *bb3cb2a1cf; // 0x01(0x01)
	bool *533542a9b7; // 0x02(0x01)
	bool *8c9ef8b18e; // 0x03(0x01)
	bool *8008ba559e; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 *aab7f6f39d; // 0x08(0x04)
	int32 *d00c24e836; // 0x0c(0x04)
};

// ScriptStruct TslGame.*937f0172e2
// Size: 0x24 (Inherited: 0x00)
struct F*937f0172e2 {
	struct FLinearColor BrushColor; // 0x00(0x10)
	struct FMargin Padding; // 0x10(0x10)
	float *bc8a8c586a; // 0x20(0x04)
};

// ScriptStruct TslGame.*aacceccde2
// Size: 0x20 (Inherited: 0x00)
struct F*aacceccde2 {
	float StartRange; // 0x00(0x04)
	float EndRange; // 0x04(0x04)
	struct FText ResultText; // 0x08(0x18)
};

// ScriptStruct TslGame.*6f26a7cb89
// Size: 0x20 (Inherited: 0x08)
struct F*6f26a7cb89 : FTableRowBase {
	enum class EConditionOfDeath ConditionOfDeathCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* ConditionOfDeathIcon; // 0x10(0x08)
	float IconRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*3ae64ecf1d
// Size: 0x20 (Inherited: 0x08)
struct F*3ae64ecf1d : FTableRowBase {
	enum class EDamageTypeCategory DamageTypeCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* CauseOfDeathIcon; // 0x10(0x08)
	float IconRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*9ba254a95f
// Size: 0x18 (Inherited: 0x08)
struct F*9ba254a95f : FTableRowBase {
	enum class EUIAkEvent *0728aae40f; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* AkEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*9faccc33f8
// Size: 0x70 (Inherited: 0x08)
struct F*9faccc33f8 : FTableRowBase {
	int32 *49501f747a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> *73b88d9338; // 0x10(0x10)
	struct TMap<struct FString, struct F*1ce78e8677> *9faccc33f8; // 0x20(0x50)
};

// ScriptStruct TslGame.*1ce78e8677
// Size: 0x10 (Inherited: 0x00)
struct F*1ce78e8677 {
	struct TArray<struct FName> *1ce78e8677; // 0x00(0x10)
};

// ScriptStruct TslGame.*24325bc3e5
// Size: 0x58 (Inherited: 0x08)
struct F*24325bc3e5 : FTableRowBase {
	struct TArray<struct FName> *c0e8eb059f; // 0x08(0x10)
	struct FText PopupText; // 0x18(0x18)
	struct FString *5d65b43832; // 0x30(0x10)
	bool *0cefdad3c4; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<enum class EGamepadPresets> *eaaf2aeee6; // 0x48(0x10)
};

// ScriptStruct TslGame.*84c64b181a
// Size: 0x20 (Inherited: 0x00)
struct F*84c64b181a {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*3bc89720f4
// Size: 0x10 (Inherited: 0x00)
struct F*3bc89720f4 {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*fde44cacfe
// Size: 0x30 (Inherited: 0x00)
struct F*fde44cacfe {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*0c0647737d
// Size: 0x20 (Inherited: 0x08)
struct F*0c0647737d : FTableRowBase {
	struct FName ActionName; // 0x08(0x08)
	struct TArray<struct FKey> *b2ef2038d7; // 0x10(0x10)
};

// ScriptStruct TslGame.*e6c49750c5
// Size: 0x10 (Inherited: 0x00)
struct F*e6c49750c5 {
	float *7cf98de128; // 0x00(0x04)
	float *64d8a4d5d2; // 0x04(0x04)
	float *21d9fb2d75; // 0x08(0x04)
	float *399db92535; // 0x0c(0x04)
};

// ScriptStruct TslGame.*557970bd45
// Size: 0x18 (Inherited: 0x00)
struct F*557970bd45 {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*13de65a409> *45c13e7476; // 0x08(0x10)
};

// ScriptStruct TslGame.*4ae49533c2
// Size: 0x30 (Inherited: 0x00)
struct F*4ae49533c2 {
	enum class ETslTrainingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *4bfe2ededb; // 0x08(0x18)
	struct UTexture2D* *5c4fc6b65d; // 0x20(0x08)
	struct UTexture2D* BackGroundTexture; // 0x28(0x08)
};

// ScriptStruct TslGame.*e1dbd66a68
// Size: 0x70 (Inherited: 0x08)
struct F*e1dbd66a68 : FTableRowBase {
	struct FString CategoryId; // 0x08(0x10)
	int32 ColumnNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText ActionDesc; // 0x20(0x18)
	struct TArray<struct FName> MappedActions; // 0x38(0x10)
	struct TArray<struct F*ffdf6ba277> MappedAxies; // 0x48(0x10)
	bool bDummy; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FTslInputKey> DummyInputKeys; // 0x60(0x10)
};

// ScriptStruct TslGame.*756d0d9e3f
// Size: 0x40 (Inherited: 0x00)
struct F*756d0d9e3f {
	struct UTexture2D* *9138568980; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct TArray<struct F*31f480b7ef> *5eaa7bea9a; // 0x20(0x10)
	struct TArray<struct FText> *e9c782c904; // 0x30(0x10)
};

// ScriptStruct TslGame.*31f480b7ef
// Size: 0x38 (Inherited: 0x00)
struct F*31f480b7ef {
	int32 Number; // 0x00(0x04)
	struct FLinearColor *3a928ca145; // 0x04(0x10)
	bool bEnabled; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FText *9a4844ab71; // 0x18(0x18)
	struct ATslPlayerState* PlayerState; // 0x30(0x08)
};

// ScriptStruct TslGame.*c6410acfb2
// Size: 0x60 (Inherited: 0x00)
struct F*c6410acfb2 {
	struct FText VehicleName; // 0x00(0x18)
	struct FText *72793faf49; // 0x18(0x18)
	struct UTexture2D* *b77ae3090c; // 0x30(0x08)
	struct UTexture2D* *49b1a336f9; // 0x38(0x08)
	struct UTexture2D* *9cdff7c712; // 0x40(0x08)
	float Speed; // 0x48(0x04)
	float *d78b2ba830; // 0x4c(0x04)
	int32 *fe8f865053; // 0x50(0x04)
	int32 *d15bda1c57; // 0x54(0x04)
	int32 *efe7ce24c6; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*c2352531db
// Size: 0x30 (Inherited: 0x08)
struct F*c2352531db : FTableRowBase {
	enum class ERadioMessageDecorateType *fcdea0a94b; // 0x08(0x01)
	bool *540ef803ce; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FLinearColor HighlightColor; // 0x0c(0x10)
	bool *be03ffc15d; // 0x1c(0x01)
	bool *6903f2ff8e; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FStringAssetReference *10e10935c7; // 0x20(0x10)
};

// ScriptStruct TslGame.*417b102bf3
// Size: 0x28 (Inherited: 0x00)
struct F*417b102bf3 {
	enum class ERadioMessagePresets preset; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*546a0e6f72> *64691d3bb5; // 0x08(0x10)
	struct TArray<struct FName> *56d06d78a1; // 0x18(0x10)
};

// ScriptStruct TslGame.*78f0d76d54
// Size: 0x18 (Inherited: 0x00)
struct F*78f0d76d54 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x08(0x08)
	struct U*9c8bfa0aee* *9c8bfa0aee; // 0x10(0x08)
};

// ScriptStruct TslGame.*f54092a0a4
// Size: 0x18 (Inherited: 0x00)
struct F*f54092a0a4 {
	struct FName ItemID; // 0x00(0x08)
	struct FLinearColor OverrideColor; // 0x08(0x10)
};

// ScriptStruct TslGame.*30d7ddd67f
// Size: 0x68 (Inherited: 0x00)
struct F*30d7ddd67f {
	struct FText Title; // 0x00(0x18)
	struct FText Subtitle; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TArray<bool> Stats; // 0x48(0x10)
	struct FStringAssetReference Image; // 0x58(0x10)
};

// ScriptStruct TslGame.*5b96a1ca72
// Size: 0x10 (Inherited: 0x00)
struct F*5b96a1ca72 {
	struct TArray<struct FName> ItemIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*d5bf768744
// Size: 0x30 (Inherited: 0x00)
struct F*d5bf768744 {
	struct TArray<struct FName> WeaponItemIDs; // 0x00(0x10)
	struct TArray<struct FName> SkillItemIDs; // 0x10(0x10)
	struct TArray<struct FName> ArmorItemIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*aaa369db1d
// Size: 0x30 (Inherited: 0x00)
struct F*aaa369db1d {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
	struct FLinearColor *e353762774; // 0x20(0x10)
};

// ScriptStruct TslGame.*38c9e97284
// Size: 0x168 (Inherited: 0x00)
struct F*38c9e97284 {
	struct F*dcbe880e74 *c3ea6c2a78; // 0x00(0x168)
};

// ScriptStruct TslGame.*7c91545cf7
// Size: 0x38 (Inherited: 0x00)
struct F*7c91545cf7 {
	struct FText *67bb18ee05; // 0x00(0x18)
	struct FText *bb70a9d0ec; // 0x18(0x18)
	float *e2462fcfdc; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*9284bdcc7b
// Size: 0x10 (Inherited: 0x00)
struct F*9284bdcc7b {
	struct TArray<struct F*45de799c35> TrainingResults; // 0x00(0x10)
};

// ScriptStruct TslGame.*45de799c35
// Size: 0x28 (Inherited: 0x00)
struct F*45de799c35 {
	enum class ETrainingScoreType TrainingScoreType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ScoreTitleText; // 0x08(0x18)
	struct UTexture2D* ScoreImageTexture; // 0x20(0x08)
};

// ScriptStruct TslGame.*c29071372d
// Size: 0x10 (Inherited: 0x00)
struct F*c29071372d {
	int32 SubWidgetCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* SubWidgetClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*004af0353e
// Size: 0x18 (Inherited: 0x00)
struct F*004af0353e {
	int32 ItemSlotID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> ItemIDs; // 0x08(0x10)
};

// ScriptStruct TslGame.*bf6cae59fc
// Size: 0x28 (Inherited: 0x00)
struct F*bf6cae59fc {
	struct UTexture2D* MapMarkerTexture; // 0x00(0x08)
	enum class EMarkerType MarkerIndex; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText MarkerName; // 0x10(0x18)
};

// ScriptStruct TslGame.*4de3b4e2f8
// Size: 0x28 (Inherited: 0x00)
struct F*4de3b4e2f8 {
	int32 *8538fbae31; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	bool *0ea09d0407; // 0x10(0x01)
	bool *bbb12bd3ac; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<int32> *8de5bbd3b8; // 0x18(0x10)
};

// ScriptStruct TslGame.*4cacb53fe6
// Size: 0x108 (Inherited: 0x00)
struct F*4cacb53fe6 {
	struct F*a8249d5e73 OutsideBorder_Binder; // 0x00(0x30)
	struct F*aecf96cb1e CircleImage_Binder; // 0x30(0x28)
	struct F*62d95f3263 DistanceTextBlock_Binder; // 0x58(0x20)
	struct F*62d95f3263 CaptureObjectNameTextBlock_Binder; // 0x78(0x20)
	bool bShowDistance; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct F*614e0fad1f NeutralColorSet; // 0x9c(0x30)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct F*614e0fad1f> TeamColorSets; // 0xd0(0x10)
	struct FLinearColor CenterColorWhenNotCaptured; // 0xe0(0x10)
	struct ATslGameState* TslGameState; // 0xf0(0x08)
	struct ATslPlayerController* TslPlayerController; // 0xf8(0x08)
	struct ACaptureAreaActor* *e2a8e2269b; // 0x100(0x08)
};

// ScriptStruct TslGame.*614e0fad1f
// Size: 0x30 (Inherited: 0x00)
struct F*614e0fad1f {
	struct FLinearColor GaugeColor; // 0x00(0x10)
	struct FLinearColor TrackColor; // 0x10(0x10)
	struct FLinearColor CenterColorWhenCaptured; // 0x20(0x10)
};

// ScriptStruct TslGame.*2428f12c24
// Size: 0x60 (Inherited: 0x00)
struct F*2428f12c24 {
	struct TArray<struct FString> *699573f90b; // 0x00(0x10)
	struct TMap<struct FString, struct UWidget*> *1fdaf2ff6d; // 0x10(0x50)
};

// ScriptStruct TslGame.*3c7e63f155
// Size: 0x98 (Inherited: 0x00)
struct F*3c7e63f155 {
	char pad_0[0x98]; // 0x00(0x98)
};

// ScriptStruct TslGame.*ba3a5b559b
// Size: 0xb0 (Inherited: 0x00)
struct F*ba3a5b559b {
	struct F*418235c678 VectorCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*71c80dfce8
// Size: 0xb0 (Inherited: 0x00)
struct F*71c80dfce8 {
	struct F*290fb51b30 FloatCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*1d830f26c3
// Size: 0x10 (Inherited: 0x00)
struct F*1d830f26c3 {
	struct FFloatInterval DamageRange; // 0x00(0x08)
	struct U*e6746d9844* ColorCurve; // 0x08(0x08)
};

// ScriptStruct TslGame.*70b26c1657
// Size: 0x20 (Inherited: 0x00)
struct F*70b26c1657 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*78c8f6de30
// Size: 0x10 (Inherited: 0x00)
struct F*78c8f6de30 {
	struct FVector2D *0acf89658a; // 0x00(0x08)
	struct FVector2D *fe9cdf74a2; // 0x08(0x08)
};

// ScriptStruct TslGame.*ee7c8560b1
// Size: 0x10 (Inherited: 0x00)
struct F*ee7c8560b1 {
	struct TArray<struct U*ba8fa77f69*> *137ec8b6bf; // 0x00(0x10)
};

// ScriptStruct TslGame.*5b4170fb63
// Size: 0x20 (Inherited: 0x00)
struct F*5b4170fb63 {
	struct UTslPlatoonCarePackageDropIndicatorWidget* *7dbdcf9332; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
	int32 *89cdd10526; // 0x0c(0x04)
	struct FVector *bc70f81ca8; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*15172d73e3
// Size: 0x20 (Inherited: 0x00)
struct F*15172d73e3 {
	struct UWidget* *7dbdcf9332; // 0x00(0x08)
	bool *b0d8597b73; // 0x08(0x01)
	bool *e29be9075f; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FVector SpawnPosition; // 0x0c(0x0c)
	float *5576533b56; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*481b70f812
// Size: 0x18 (Inherited: 0x00)
struct F*481b70f812 {
	struct U*6a9b8007fd* *4cb1b61a22; // 0x00(0x08)
	struct FMapMarker MapMarker; // 0x08(0x10)
};

// ScriptStruct TslGame.*b8d14d13e9
// Size: 0x08 (Inherited: 0x00)
struct F*b8d14d13e9 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*40f47af4fd
// Size: 0x20 (Inherited: 0x00)
struct F*40f47af4fd {
	struct UMaterialInterface* ZoneMaterial; // 0x00(0x08)
	int32 ZoneMaxImageNum; // 0x08(0x04)
	struct FVector2D ZoneBorderThickness; // 0x0c(0x08)
	struct FVector2D ZonePositionOffset; // 0x14(0x08)
	float ZoneImageWarningAlpha; // 0x1c(0x04)
};

// ScriptStruct TslGame.*0ff557bc87
// Size: 0x20 (Inherited: 0x00)
struct F*0ff557bc87 {
	struct FVector2D *6d95f99786; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct UMaterialInstanceDynamic* *713f57a19e; // 0x18(0x08)
};

// ScriptStruct TslGame.*d59100b350
// Size: 0x20 (Inherited: 0x00)
struct F*d59100b350 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UImage* *8d1cf51701; // 0x10(0x08)
	float *3dce2b9a90; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*9b44e14196
// Size: 0x20 (Inherited: 0x00)
struct F*9b44e14196 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*2029fbd814* *c95f33f0c7; // 0x18(0x08)
};

// ScriptStruct TslGame.*cc6cd33d60
// Size: 0x20 (Inherited: 0x00)
struct F*cc6cd33d60 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*4e50a61662* *da2b153e7f; // 0x18(0x08)
};

// ScriptStruct TslGame.*a1c6a297f1
// Size: 0x18 (Inherited: 0x00)
struct F*a1c6a297f1 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UImage* VehicleIcon; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*e205716ad9
// Size: 0x10 (Inherited: 0x00)
struct F*e205716ad9 {
	struct ATslHelicopterPawn* Helicopter; // 0x00(0x08)
	struct UImage* *2ff7c69ee1; // 0x08(0x08)
};

// ScriptStruct TslGame.*60dfaf2ae8
// Size: 0x10 (Inherited: 0x00)
struct F*60dfaf2ae8 {
	struct AGuardedLootPackage* LootCache; // 0x00(0x08)
	struct UImage* *a1ccaec892; // 0x08(0x08)
};

// ScriptStruct TslGame.*8a2d8cbf76
// Size: 0x10 (Inherited: 0x00)
struct F*8a2d8cbf76 {
	struct ATslWheeledVehicle* KillTruck; // 0x00(0x08)
	struct UImage* *8e933200d2; // 0x08(0x08)
};

// ScriptStruct TslGame.*7bb3eccccc
// Size: 0x10 (Inherited: 0x00)
struct F*7bb3eccccc {
	struct ATslWheeledVehicle* LootTruck; // 0x00(0x08)
	struct UImage* *4d61d3b8e7; // 0x08(0x08)
};

// ScriptStruct TslGame.*f644ff00f2
// Size: 0x30 (Inherited: 0x00)
struct F*f644ff00f2 {
	struct UImage* *55851f720d; // 0x00(0x08)
	struct UImage* *8a5ff19d7b; // 0x08(0x08)
	struct UImage* *4aaccd05bd; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct TslGame.*84b3261bb2
// Size: 0x30 (Inherited: 0x00)
struct F*84b3261bb2 {
	struct AActor* *6134dc4b12; // 0x00(0x08)
	struct UImage* *63270b5aeb; // 0x08(0x08)
	struct UImage* *55851f720d; // 0x10(0x08)
	struct UImage* *8a5ff19d7b; // 0x18(0x08)
	struct UImage* *4aaccd05bd; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct TslGame.*8b3c44376e
// Size: 0xa0 (Inherited: 0x00)
struct F*8b3c44376e {
	struct U*37a6325ecf* Icon; // 0x00(0x08)
	struct U*e3ae46e939* *228d94b5c0; // 0x08(0x08)
	struct FLinearColor *56e3ca80b5; // 0x10(0x10)
	bool bShowMemberNumber; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 MemberNumber; // 0x24(0x04)
	enum class ECharacterIconType *5c8402bd90; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Rotation; // 0x2c(0x04)
	int32 *34b978699e; // 0x30(0x04)
	bool *d93a63906c; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FText PlayerName; // 0x38(0x18)
	struct FLinearColor *92179d50e7; // 0x50(0x10)
	bool *0787a374b2; // 0x60(0x01)
	bool *7f584cdf9c; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32 *6b2928cb24; // 0x64(0x04)
	struct FVector2D Position; // 0x68(0x08)
	bool *53f14724ae; // 0x70(0x01)
	bool bHasTeamMember; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct TArray<struct F*70b26c1657> *dafadcdd0c; // 0x78(0x10)
	bool *7ae5ce22bb; // 0x88(0x01)
	bool bShowDirection; // 0x89(0x01)
	bool bShowStatus; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	float *7302dcd9fb; // 0x8c(0x04)
	bool *3adb46a972; // 0x90(0x01)
	bool *7d0988290e; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float *79ca55e11b; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct TslGame.*6924db8500
// Size: 0x18 (Inherited: 0x00)
struct F*6924db8500 {
	enum class ETslTrainingType *289e468385; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *38dc0dd1e6; // 0x08(0x08)
	struct FVector2D Size; // 0x10(0x08)
};

// ScriptStruct TslGame.*604cad2387
// Size: 0x28 (Inherited: 0x00)
struct F*604cad2387 {
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

// ScriptStruct TslGame.*52c9bd1783
// Size: 0x70 (Inherited: 0x00)
struct F*52c9bd1783 {
	struct F*0c033c3537 HorizontalBox; // 0x00(0x28)
	struct F*3cdda95245 *a5fa03a894; // 0x28(0x28)
	struct F*62d95f3263 *a76a47376b; // 0x50(0x20)
};

// ScriptStruct TslGame.*b08999106e
// Size: 0x20 (Inherited: 0x00)
struct F*b08999106e {
	struct FString *8b0ba80f82; // 0x00(0x10)
	int32 Kill; // 0x10(0x04)
	int32 *06a1315951; // 0x14(0x04)
	float Damage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

