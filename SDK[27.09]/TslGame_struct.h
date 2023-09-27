// Enum TslGame.*d4829cd412
enum class *d4829cd412 : uint8 {
	*25d1f432b3,
	*38152caf05,
	*094e0dd973,
	*d4829cd412_MAX,
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
	Damage_MAX,
};

// Enum TslGame.*ab3247cde0
enum class *ab3247cde0 : uint8 {
	*ef0032f6bd,
	*461d9c5d51,
	*89eb083321,
	*ab3247cde0_MAX,
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

// Enum TslGame.*0562596331
enum class *0562596331 : uint8 {
	*47ee67a10c,
	*48952897b2,
	*8a2c0f0510,
	*407daf61ab,
	*fb68953bab,
	*9d32a30b88,
	*f671c7e006,
	*9984ad31b3,
	*0562596331_MAX,
};

// Enum TslGame.ETslOvercastAction
enum class ETslOvercastAction : uint8 {
	Initialized,
	Prolonged,
	CreateThunder,
	ETslOvercastAction_MAX,
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

// Enum TslGame.*05735718c6
enum class *05735718c6 : uint8 {
	*f9e4d92d07,
	*33d795619a,
	*ae8403cd68,
	*143054af9c,
	*33b3e70b01,
	*9f395b9887,
	*56ad8da1a2,
	*05735718c6_MAX,
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

// Enum TslGame.*0e5556438c
enum class *0e5556438c : uint8 {
	*53de55fa3c,
	*1fe18763c8,
	*910f2b032e,
	*5b2a5b5979,
	*90dd22b582,
	*ed729f78ed,
	*0a3e3acd86,
	*98b4fae3c6,
	*0e5556438c_MAX,
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

// Enum TslGame.*ed3a47b6c1
enum class *ed3a47b6c1 : uint8 {
	*3f06959499,
	*4e1ae4007d,
	*902c5abe02,
	*51e05bab43,
	*ed3a47b6c1_MAX,
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

// Enum TslGame.*6a0d384492
enum class *6a0d384492 : uint8 {
	*7854d485a3,
	*67fd0cdc5f,
	*5079e4a1aa,
	*42a2f0d5eb,
	*6a0d384492_MAX,
};

// Enum TslGame.*1919a1dfcc
enum class *1919a1dfcc : uint8 {
	*bf60143745,
	*0173667346,
	*3351e89a69,
	*916dd9b41d,
	*0cc00b7768,
	*135e42d17e,
	*59ec1a7909,
	*1a9f347e92,
	*41925499d2,
	*0abcb9c913,
	*6afe73983f,
	*9482e6d484,
	*1919a1dfcc_MAX,
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

// Enum TslGame.*73825284f6
enum class *73825284f6 : uint8 {
	*de65f650a3,
	*4625c21bf0,
	*9ed650019a,
	*bec2ca5c99,
	*8a199acc3f,
	*73825284f6_MAX,
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

// Enum TslGame.*22163844fc
enum class *22163844fc : uint8 {
	*2b8e07f28a,
	*d8c6f71b52,
	*2fc4f65af1,
	*22163844fc_MAX,
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

// Enum TslGame.*e19a62a5c7
enum class *e19a62a5c7 : uint8 {
	*fc45d66827,
	*4d810e7379,
	*56d5a9ac93,
	*e19a62a5c7_MAX,
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

// Enum TslGame.*722b6c38aa
enum class *722b6c38aa : uint8 {
	*1ac23b9f3b,
	*b4a8e12e56,
	*753a4e70cc,
	*722b6c38aa_MAX,
};

// Enum TslGame.*4174a29d2e
enum class *4174a29d2e : uint8 {
	*b5c76f95d8,
	*8dba288b4e,
	*4c6661e7cc,
	*aa2b0e963d,
	*a7500c9536,
	*4174a29d2e_MAX,
};

// Enum TslGame.*3ea1b45e04
enum class *3ea1b45e04 : uint8 {
	*2667558b6c,
	*2d7056dd0f,
	*021800c230,
	*ac3bbdd420,
	*87a982b84d,
	*cbff34c001,
	*27f1fe8733,
	*3ea1b45e04_MAX,
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

// Enum TslGame.*3c43ce5d5e
enum class *3c43ce5d5e : uint8 {
	*c7bfea2440,
	*57c59e37e0,
	*57dd35fd60,
	*c186cff6dd,
	*50e245aea0,
	*8b38164a7b,
	*737ffd195e,
	*5b376032e2,
	*cf4b03fff6,
	*3c43ce5d5e_MAX,
};

// Enum TslGame.EWeatherChange
enum class EWeatherChange : uint8 {
	NoChange,
	Rainy,
	Foggy,
	EWeatherChange_MAX,
};

// Enum TslGame.*258c7db747
enum class *258c7db747 : uint8 {
	*d3efe2b5d8,
	*8f5d7168d6,
	*20acf1be7c,
	*1bea5496ef,
	*78b0b70ca9,
	*367a8be2b7,
	*258c7db747_MAX,
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

// Enum TslGame.*f121714036
enum class *f121714036 : uint8 {
	*0d0f305a6a,
	*8f7b97eb61,
	*799dc10f6a,
	*f121714036_MAX,
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

// Enum TslGame.*5604bd977f
enum class *5604bd977f : uint8 {
	*b3d2a08357,
	*ab6f0d4e2d,
	*51a51bf659,
	*4b975e79e0,
	*83ef16d47f,
	*5604bd977f_MAX,
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

// Enum TslGame.*24dc1a1979
enum class *24dc1a1979 : uint8 {
	*cc33c11b68,
	*ac738debe6,
	*24dc1a1979_MAX,
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

// Enum TslGame.*0e8cf45415
enum class *0e8cf45415 : uint8 {
	*96b16969cf,
	*23edf35757,
	*e3f3663893,
	*0e8cf45415_MAX,
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

// Enum TslGame.ETeamChangeZombieMode
enum class ETeamChangeZombieMode : uint8 {
	None,
	LeaveTeam,
	JoinTeam,
	ETeamChangeZombieMode_MAX,
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

// Enum TslGame.*a6a176d0c8
enum class *a6a176d0c8 : uint8 {
	*82b686dd25,
	*898f6e6898,
	*148dfe1d95,
	*a2373d4683,
	*494dd382f5,
	*3e1604f513,
	*b73ae63baa,
	*9b891f0083,
	*8d62a86212,
	*1c9bbb1a7e,
	*a6a176d0c8_MAX,
};

// Enum TslGame.*e333284b36
enum class *e333284b36 : uint8 {
	*c971877eed,
	*db7ecf3062,
	*84e17c7e88,
	*661bc71d5e,
	*e333284b36_MAX,
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

// Enum TslGame.*a6645d100b
enum class *a6645d100b : uint8 {
	*1d013e07ba,
	*ac35b4270f,
	*2cd089d93b,
	*a6645d100b_MAX,
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

// Enum TslGame.*2f8835d4b3
enum class *2f8835d4b3 : uint8 {
	*83848abb7d,
	*313947948d,
	*10f54129bf,
	*b486e9a3f7,
	*2f8835d4b3_MAX,
};

// Enum TslGame.*e6536be4d1
enum class *e6536be4d1 : uint8 {
	*b638533f8f,
	*b15509a9a7,
	*6f5437325b,
	*52f1985a6e,
	*17f608285a,
	*2d280ec0ee,
	*e6536be4d1_MAX,
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

// Enum TslGame.*2e63ddf4ef
enum class *2e63ddf4ef : uint8 {
	*a414e1af18,
	*38a5f350c8,
	*1423a69353,
	*2e63ddf4ef_MAX,
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

// Enum TslGame.*43fe99eba5
enum class *43fe99eba5 : uint8 {
	*eec5fa5834,
	*3d0348ea20,
	*308296147c,
	*1119aa712a,
	*688546b5a8,
	*43fe99eba5_MAX,
};

// Enum TslGame.*591478a396
enum class *591478a396 : uint8 {
	*f93e2436e1,
	*e70bc61965,
	*e14acb79a2,
	*591478a396_MAX,
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

// Enum TslGame.*30d26d544b
enum class *30d26d544b : uint8 {
	*1677bc7fe6,
	*3e34061cc7,
	*a1a3f9d9eb,
	*30d26d544b_MAX,
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

// Enum TslGame.*ddbbcba191
enum class *ddbbcba191 : uint8 {
	*c5427e5298,
	*8dfe2c978d,
	*6e7b605288,
	*ddbbcba191_MAX,
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

// Enum TslGame.*46f054fa25
enum class *46f054fa25 : uint8 {
	*9da5e119e8,
	*08aeb9cca6,
	*5a12f165c0,
	*72964c3a46,
	*f607c4b8b1,
	*7eb05383fa,
	*9291da7f37,
	*b18f195055,
	*a67e246fd8,
	*46f054fa25_MAX,
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

// Enum TslGame.*d77db828b2
enum class *d77db828b2 : uint8 {
	*48abe816e2,
	*ef97f74425,
	*0d5301f05b,
	*d77db828b2_MAX,
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

// Enum TslGame.*bd994bd8bc
enum class *bd994bd8bc : uint8 {
	*14dbc12180,
	*15e4fc288d,
	*5fb5d8099c,
	*bd994bd8bc_MAX,
};

// Enum TslGame.*b6c490cebb
enum class *b6c490cebb : uint8 {
	*2ad589bb75,
	*bd1aeaaae5,
	*2811a2b38e,
	*2b49549448,
	*af446c8950,
	*b6c490cebb_MAX,
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

// Enum TslGame.*55f65ca13c
enum class *55f65ca13c : uint8 {
	*c5fd7de04f,
	*2b90ca5a6e,
	*bbcbd7f1dc,
	*f7ecb7c4da,
	*55f65ca13c_MAX,
};

// Enum TslGame.*10980b266f
enum class *10980b266f : uint8 {
	*364ad72052,
	*a8a6306acb,
	*f56ac45d20,
	*12e3065c4f,
	*d80703b4db,
	*acea7793f9,
	*efcb9f0eb3,
	*9c712f03fe,
	*5211ac70f8,
	*e294def6af,
	*b413decae2,
	*1225633368,
	*281a5aa951,
	*c150f7c546,
	*d2393eb1f6,
	*ea5640c064,
	*89cb7ab91e,
	*fe974a12b4,
	*6d05071fdd,
	*e072e554d4,
	*ded4d6a63e,
	*d98335aa78,
	*c28a7a0767,
	*16222a2780,
	*488eba8f8f,
	*2455195bed,
	*a4a47a2e3e,
	*04322eca75,
	*eae6ab03d2,
	*a5ed0ee5b2,
	*76f5400a0f,
	*67c53ffe46,
	*e4c2eb5fb9,
	*0be306e6b3,
	*68c73d6cfc,
	*ad247a4e5a,
	*dea6ea0692,
	*f2a3610f05,
	*dc8e0f73a2,
	*9efed7cb5e,
	*beeb5c6f52,
	*4a70c57819,
	*6eadd1b44a,
	*01931e633a,
	*6a73483c7f,
	*4d76249322,
	*ad5f913bdf,
	*bbe32342d4,
	*68cbaa6cd6,
	*9c6c611552,
	*e095391200,
	*7283756ac5,
	*0d63c9a5c4,
	*a29c2d3f79,
	*554ed699e0,
	*10980b266f_MAX,
};

// Enum TslGame.*0b738d0f0e
enum class *0b738d0f0e : uint8 {
	*e2c98a7c45,
	*6fc15c564d,
	*1ed8689ec8,
	*a0df4ad193,
	*0b738d0f0e_MAX,
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

// Enum TslGame.*36c1b81d56
enum class *36c1b81d56 : uint8 {
	*aa988bd419,
	*2e8707268b,
	*65424c1741,
	*d7da9415e4,
	*c16bd8486a,
	*36c1b81d56_MAX,
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

// Enum TslGame.*a87143a9d6
enum class *a87143a9d6 : uint8 {
	*b9971fdb53,
	*aae148e7b1,
	*981863b045,
	*6413537fe3,
	*a87143a9d6_MAX,
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

// Enum TslGame.*59474cca23
enum class *59474cca23 : uint8 {
	*42bd589cc4,
	*0000c5ee27,
	*996fdb5070,
	*97a063f18c,
	*59474cca23_MAX,
};

// Enum TslGame.EPreoccupiedTeamType
enum class EPreoccupiedTeamType : uint8 {
	NEUTRAL,
	RED,
	BLUE,
	EPreoccupiedTeamType_MAX,
};

// Enum TslGame.*26b712acbc
enum class *26b712acbc : uint8 {
	*7fc33b5853,
	*74ccbf5d70,
	*5262d87041,
	*ae270f0457,
	*26b712acbc_MAX,
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

// Enum TslGame.*ae3bdf0e32
enum class *ae3bdf0e32 : uint8 {
	*fde03cb858,
	*c25ee8be0d,
	*83e8da3edd,
	*e903dcd22c,
	*ae3bdf0e32_MAX,
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

// Enum TslGame.*28200d8ea9
enum class *28200d8ea9 : uint8 {
	*50bb325432,
	*b5be4591fd,
	*4fcdfb7adc,
	*b6f2d2dcc2,
	*ddc0447d07,
	*28200d8ea9_MAX,
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

// Enum TslGame.*d8fe971886
enum class *d8fe971886 : uint8 {
	*ee697e73af,
	*871d65c888,
	*edf98d7169,
	*02a317711e,
	*d8fe971886_MAX,
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

// Enum TslGame.*bd6febdc26
enum class *bd6febdc26 : uint8 {
	*19e50424a0,
	*1c400796d7,
	*87f379b130,
	*a0c1b600a0,
	*64200d35a4,
	*540560dd73,
	*3ed6606c9c,
	*bd6febdc26_MAX,
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

// Enum TslGame.*b7e797e167
enum class *b7e797e167 : uint8 {
	*58dd63e2c2,
	*870c81feff,
	*cc2f89c77b,
	*b7e797e167_MAX,
};

// Enum TslGame.*7df2940fe4
enum class *7df2940fe4 : uint8 {
	*3c2bcfb101,
	*e45900021f,
	*f83ff32136,
	*c2f2c93b91,
	*7df2940fe4_MAX,
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

// Enum TslGame.*c94abd4dd5
enum class *c94abd4dd5 : uint8 {
	*a0daa47b37,
	*42a68c745e,
	*d6309d6bb1,
	*c94abd4dd5_MAX,
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

// Enum TslGame.*0804e2d5cd
enum class *0804e2d5cd : uint8 {
	*6e68f4f3b0,
	*0b77d8499b,
	*21a1dd12b9,
	*c52f27bcf3,
	*7f973faa5d,
	*0804e2d5cd_MAX,
};

// Enum TslGame.*10b883ca3e
enum class *10b883ca3e : uint8 {
	*01abbb715a,
	*f98c0f7a6c,
	*8c06484575,
	*10b883ca3e_MAX,
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

// Enum TslGame.*e3a31a7edb
enum class *e3a31a7edb : uint8 {
	*bb6861233f,
	*16127332db,
	*fb84b6f201,
	*1c2d1b1737,
	*b794ece78f,
	*b086df0196,
	*29adc1fb56,
	*de44df6fe8,
	*e3a31a7edb_MAX,
};

// Enum TslGame.*98a0cc087a
enum class *98a0cc087a : uint8 {
	*66476906e8,
	*63d5c866f4,
	*ddf9ee7784,
	*74d4c1df6f,
	*007d083e6b,
	*98a0cc087a_MAX,
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

// Enum TslGame.*1aa59af033
enum class *1aa59af033 : uint8 {
	*62faa8eeb6,
	*1e52e3c3f7,
	*27047ec96c,
	*1aa59af033_MAX,
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

// Enum TslGame.*a31f18ac56
enum class *a31f18ac56 : uint8 {
	*3cf460e7fd,
	*36db7e9ecc,
	*b6ae7d923c,
	*b4e76c5626,
	*484e21c195,
	*a31f18ac56_MAX,
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

// Enum TslGame.*1f3bcb2f37
enum class *1f3bcb2f37 : uint8 {
	*115eb4af1c,
	*96eb0081a0,
	*97b94c1de9,
	*42415011d0,
	*27543d7334,
	*1f3bcb2f37_MAX,
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

// Enum TslGame.*5f5b244ea2
enum class *5f5b244ea2 : uint8 {
	*1a688faa3c,
	*7f714901a1,
	*ec25e57490,
	*3f0a07c1f5,
	*9418b38391,
	*3a743795fd,
	*5f5b244ea2_MAX,
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

// Enum TslGame.*a4450e3e61
enum class *a4450e3e61 : uint8 {
	*40f092c0a7,
	*6a458668a9,
	*1194a8b787,
	*a4450e3e61_MAX,
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

// Enum TslGame.*53b11d0f67
enum class *53b11d0f67 : uint8 {
	*c2b9cc019c,
	*3eb5609a09,
	*a15ec95e1e,
	*749d660513,
	*3e6fb1ddcd,
	*53b11d0f67_MAX,
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

// Enum TslGame.*f7605e537f
enum class *f7605e537f : uint8 {
	*32f11bf4be,
	*3bf974e3df,
	*bc7b16ccac,
	*14ecee0f1d,
	*1aac9a91ba,
	*f7605e537f_MAX,
};

// Enum TslGame.*d176065584
enum class *d176065584 : uint8 {
	*f05e6701ca,
	*ebeab8ae1f,
	*c60a64f14c,
	*7299185cc2,
	*76eeb49c3f,
	*d176065584_MAX,
};

// Enum TslGame.*252b13a571
enum class *252b13a571 : uint8 {
	*4bcc7ee882,
	*cd2f461659,
	*6d3df6422e,
	*9230605166,
	*252b13a571_MAX,
};

// Enum TslGame.EReactionObjectType
enum class EReactionObjectType : uint8 {
	Fence,
	Hay,
	Camera,
	EReactionObjectType_MAX,
};

// Enum TslGame.*5289b35bc4
enum class *5289b35bc4 : uint8 {
	*69f23f2ae9,
	*b482f86acc,
	*23d7687fe4,
	*2f88bbb3c8,
	*5289b35bc4_MAX,
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

// Enum TslGame.*30a6d31637
enum class *30a6d31637 : uint8 {
	*2f1ac7be47,
	*9723d1f9ad,
	*db2cf787ed,
	*dcecea6ef6,
	*28dd4d14ca,
	*30a6d31637_MAX,
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

// Enum TslGame.*23f19394b6
enum class *23f19394b6 : uint8 {
	*b8bd991b7f,
	*060d070f9c,
	*5f3143bdf3,
	*ea3c4bc2d0,
	*23f19394b6_MAX,
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

// Enum TslGame.*cebee04210
enum class *cebee04210 : uint8 {
	*89bfb56332,
	*2fcd0ac7e1,
	*b5dc26f015,
	*f4f68b04d9,
	*ba20c6e8e8,
	*4fc2c26ab3,
	*77e091cb50,
	*a27f53f5b2,
	*e86eda4c68,
	*1ab3757322,
	*ad5b5941ca,
	*6e0bcbce8f,
	*e6add7fd1a,
	*cebee04210_MAX,
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

// Enum TslGame.*e6918e2954
enum class *e6918e2954 : uint8 {
	*142024daf8,
	*e9c3738685,
	*02ce2e4468,
	*f9e0b0bb0e,
	*7276750e19,
	*e6918e2954_MAX,
};

// Enum TslGame.*79fe79d0ba
enum class *79fe79d0ba : uint8 {
	*575a853255,
	*081d6bf94e,
	*147154fa51,
	*d84d683877,
	*79fe79d0ba_MAX,
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

// Enum TslGame.*53b2d99d74
enum class *53b2d99d74 : uint8 {
	*9617087b3b,
	*cdc8b86cd5,
	*2b1eeaef5c,
	*9f4aed298c,
	*8427e6f899,
	*53b2d99d74_MAX,
};

// Enum TslGame.*654821803d
enum class *654821803d : uint8 {
	*346f342843,
	*f8a3244086,
	*db55704ab3,
	*362c8ffea5,
	*654821803d_MAX,
};

// Enum TslGame.*22c10d2b19
enum class *22c10d2b19 : uint8 {
	*5166f45971,
	*e84d7bce88,
	*aa94f951fb,
	*ec565c713d,
	*22c10d2b19_MAX,
};

// Enum TslGame.*3cc5e67c61
enum class *3cc5e67c61 : uint8 {
	*ebfad516d0,
	*48871250ea,
	*c9cca084e0,
	*dc1ee55e2a,
	*498b28437b,
	*3cc5e67c61_MAX,
};

// Enum TslGame.*4f55d3ecdb
enum class *4f55d3ecdb : uint8 {
	*2c734ab45a,
	*a8a2136842,
	*31f27f0009,
	*4f55d3ecdb_MAX,
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

// Enum TslGame.*0eb2640787
enum class *0eb2640787 : uint8 {
	*4ee80c1614,
	*d0f28d6ab0,
	*00ce73a168,
	*d4ad23348f,
	*0eb2640787_MAX,
};

// Enum TslGame.*61a48011c1
enum class *61a48011c1 : uint8 {
	*0c6e450080,
	*93c8a90302,
	*9cec64226e,
	*d094ab1716,
	*61a48011c1_MAX,
};

// Enum TslGame.*88f57b00c5
enum class *88f57b00c5 : uint8 {
	*db116472c6,
	*890955579c,
	*4000927ff5,
	*12d1767ce2,
	*88f57b00c5_MAX,
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

// Enum TslGame.*06545d47b7
enum class *06545d47b7 : uint8 {
	*f978fc1876,
	*764f102af5,
	*f5e5a2ca5e,
	*c2b28737cb,
	*443404f61c,
	*06545d47b7_MAX,
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

// Enum TslGame.*e0f0b527a4
enum class *e0f0b527a4 : uint8 {
	*07c09eaf01,
	*46db161ebd,
	*d1bc1e0cf8,
	*d993d0c0aa,
	*e0f0b527a4_MAX,
};

// Enum TslGame.*fc10ccd080
enum class *fc10ccd080 : uint8 {
	*87beffb54c,
	*29b59152e1,
	*f9afd5cb66,
	*aaf1de8b24,
	*fc10ccd080_MAX,
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

// Enum TslGame.*258ab2eb45
enum class *258ab2eb45 : uint8 {
	*965c256519,
	*8343032f97,
	*258ab2eb45_MAX,
};

// Enum TslGame.*47ca98f49c
enum class *47ca98f49c : uint8 {
	*bfd7c3c7e7,
	*ba62176490,
	*1dd9b8caaf,
	*34af50eecb,
	*e73506b324,
	*a8148dc74b,
	*c40464bc02,
	*6d77d75926,
	*161553c6fc,
	*fdf385c629,
	*cbae02b100,
	*3577b25e6c,
	*f1be778252,
	*47ca98f49c_MAX,
};

// Enum TslGame.*424f39e720
enum class *424f39e720 : uint8 {
	*ea6b6e6802,
	*bbb74df2d2,
	*bb5c40b9db,
	*e31e717ce3,
	*424f39e720_MAX,
};

// Enum TslGame.*0dcdd87bbd
enum class *0dcdd87bbd : uint8 {
	*68d76ce61c,
	*e9a35a5cae,
	*ee6044a1d1,
	*436aa0d387,
	*8f13096ff3,
	*bd511148e8,
	*0dcdd87bbd_MAX,
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

// Enum TslGame.*e6e8260719
enum class *e6e8260719 : uint8 {
	*ab968c08ae,
	*c61f921d9e,
	*03ef047d2b,
	*bdc8581a4a,
	*f5aa54b55c,
	*19a5315269,
	*affa2ccd7b,
	*2d8c944bb9,
	*c50628d3bc,
	*e6e8260719_MAX,
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

// Enum TslGame.*9105b098b4
enum class *9105b098b4 : uint8 {
	*3a7490214e,
	*5f6545a5d2,
	*17ad68de51,
	*126d2e379c,
	*ffbd6b7cd9,
	*f84e1bba15,
	*7f660ce1a6,
	*9105b098b4_MAX,
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

// Enum TslGame.*1275243d25
enum class *1275243d25 : uint8 {
	*38829d04fa,
	*fdde0f2d0f,
	*1275243d25_MAX,
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

// Enum TslGame.*c05c13937c
enum class *c05c13937c : uint8 {
	*6f0c9a0a25,
	*ddd1f6142e,
	*90df6f6f16,
	*f278a3530e,
	*11119bbfd9,
	*9feff5d270,
	*78beceed1f,
	*88d4eb9e4e,
	*b79269730a,
	*c05c13937c_MAX,
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

// Enum TslGame.*f6f28623b9
enum class *f6f28623b9 : uint8 {
	*205f256bc4,
	*afdf6ef183,
	*48cd1bed0a,
	*e6712b6acf,
	*9963ee1263,
	*6750c1079f,
	*f6f28623b9_MAX,
};

// Enum TslGame.EAITaskState
enum class EAITaskState : uint8 {
	Idle,
	Tasking,
	Done,
	InValid,
	EAITaskState_MAX,
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

// Enum TslGame.*bbeedda447
enum class *bbeedda447 : uint8 {
	*fcbf7e4cfe,
	*898b3a31c4,
	*e43bd2842d,
	*79b7c784b6,
	*bbeedda447_MAX,
};

// Enum TslGame.*895a721ff8
enum class *895a721ff8 : uint8 {
	*48871250ea,
	*b2eaf37065,
	*c82c4c87e6,
	*895a721ff8_MAX,
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

// Enum TslGame.*db4ba474c2
enum class *db4ba474c2 : uint8 {
	*c6a87f8e1f,
	*0a6e61c40b,
	*db4ba474c2_MAX,
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

// Enum TslGame.*e4d6cadeed
enum class *e4d6cadeed : uint8 {
	*6b7bb6b07d,
	*0e2285256d,
	*10dda2b2b6,
	*e4d6cadeed_MAX,
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

// Enum TslGame.*d9226517d5
enum class *d9226517d5 : uint8 {
	*9f71ddc1b8,
	*8cb0625e4a,
	*f7201f9804,
	*ae194949ba,
	*d9226517d5_MAX,
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

// Enum TslGame.*e35ee3dbe9
enum class *e35ee3dbe9 : uint8 {
	*4e47e8ff99,
	*46321557a2,
	*7e10141502,
	*032b012cb1,
	*d14bbb32e3,
	*384131fdd7,
	*be14420dd0,
	*e35ee3dbe9_MAX,
};

// Enum TslGame.EBBHolderSelectMethod
enum class EBBHolderSelectMethod : uint8 {
	Closest,
	Random,
	EBBHolderSelectMethod_MAX,
};

// Enum TslGame.*e3cebf2832
enum class *e3cebf2832 : uint8 {
	*8da373ca6c,
	*5b213ce58a,
	*27f919c078,
	*83e163d28b,
	*e3cebf2832_MAX,
};

// Enum TslGame.ERacingBgmTheme
enum class ERacingBgmTheme : uint8 {
	Default,
	WinterRaicng,
	ERacingBgmTheme_MAX,
};

// Enum TslGame.EWarModeCarePackageKitType
enum class EWarModeCarePackageKitType : uint8 {
	CarepackageKit_Off,
	CarepackageKit_Basic,
	CarepackageKit_ARKit,
	CarepackageKit_SRKit,
	CarepackageKit_MAX,
};

// Enum TslGame.*642bd02b1a
enum class *642bd02b1a : uint8 {
	*abca078946,
	*b1c4460e46,
	*4530817dad,
	*642bd02b1a_MAX,
};

// Enum TslGame.*6ce1c965c4
enum class *6ce1c965c4 : uint8 {
	*beb099ec67,
	*30ae2993e1,
	*907b3d3f27,
	*6ce1c965c4_MAX,
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

// Enum TslGame.*e16607b81e
enum class *e16607b81e : uint8 {
	*c568672204,
	*d54e251fa3,
	*55e711b2f5,
	*e16607b81e_MAX,
};

// Enum TslGame.*ab4d3357a7
enum class *ab4d3357a7 : uint8 {
	*3a7490214e,
	*17ad68de51,
	*030c46d896,
	*b7f1fa727d,
	*1609568053,
	*7593fe3edb,
	*ab4d3357a7_MAX,
};

// Enum TslGame.*bd98f7ef43
enum class *bd98f7ef43 : uint8 {
	*3a7490214e,
	*32f470b11a,
	*17ad68de51,
	*531e5d9c2f,
	*bd98f7ef43_MAX,
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

// Enum TslGame.EObserverPlayerListType
enum class EObserverPlayerListType : uint8 {
	Distance,
	Kill,
	Survivor,
	Max,
	EObserverPlayerListType_MAX,
};

// Enum TslGame.*ffefe2a799
enum class *ffefe2a799 : uint8 {
	*d92b08a3d0,
	*983cbb35d6,
	*07ae3cf55e,
	*ffefe2a799_MAX,
};

// Enum TslGame.EZombieAttackType
enum class EZombieAttackType : uint8 {
	Melee,
	Throw,
	EZombieAttackType_MAX,
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

// Enum TslGame.EPGALOutput
enum class EPGALOutput : uint8 {
	Succeeded,
	Failed,
	EPGALOutput_MAX,
};

// Enum TslGame.*6ecaf58093
enum class *6ecaf58093 : uint8 {
	*e53247ec68,
	*127bbdc143,
	*36def10216,
	*30fcee42e6,
	*8a0efbaba8,
	*6ecaf58093_MAX,
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

// Enum TslGame.*388aac7ebf
enum class *388aac7ebf : uint8 {
	*9556c6748f,
	*218a6d7611,
	*39ea330041,
	*388aac7ebf_MAX,
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

// Enum TslGame.*0e68d9a125
enum class *0e68d9a125 : uint8 {
	*64bdae57cb,
	*b5226a00ae,
	*ff20fe2888,
	*0e68d9a125_MAX,
};

// Enum TslGame.ETslReferenceObjType
enum class ETslReferenceObjType : uint8 {
	GameMode,
	Character,
	Preload,
	ETslReferenceObjType_MAX,
};

// Enum TslGame.*fe2d1d7291
enum class *fe2d1d7291 : uint8 {
	*3d4eec85a8,
	*fc14a96374,
	*1844c5c20f,
	*69739a0de2,
	*e8f274ff2d,
	*fe2d1d7291_MAX,
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

// Enum TslGame.*980a75751d
enum class *980a75751d : uint8 {
	*8aa0f7e5ea,
	*da96e968e2,
	*ff091c95be,
	*c2d4f6f275,
	*a4b3d2fb31,
	*980a75751d_MAX,
};

// Enum TslGame.*4583519d77
enum class *4583519d77 : uint8 {
	*eb84921774,
	*78ec66fe8a,
	*0363a60ae6,
	*890eff4cae,
	*7d6972154c,
	*48440d2ce7,
	*3a0887eef4,
	*a4378a4c65,
	*df14fb0010,
	*ea8c284da9,
	*23b99c1871,
	*4ca07ae444,
	*4583519d77_MAX,
};

// Enum TslGame.ERideVehicle
enum class ERideVehicle : uint8 {
	None,
	Ride,
	Leave,
	ERideVehicle_MAX,
};

// Enum TslGame.*5d08f175d4
enum class *5d08f175d4 : uint8 {
	*ad6f0de88b,
	*4bf7a9ef20,
	*25e48bf28d,
	*5d08f175d4_MAX,
};

// Enum TslGame.*34867c9a6e
enum class *34867c9a6e : uint8 {
	*a0040799c6,
	*d795cfda0c,
	*1702fca847,
	*34867c9a6e_MAX,
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

// Enum TslGame.*c4b43d07f4
enum class *c4b43d07f4 : uint8 {
	*3ca1905b25,
	*e441aab728,
	*0f2fa0b1b9,
	*042c53b792,
	*0304ba5d00,
	*0dd7ca9f92,
	*bff6d26f25,
	*c4b43d07f4_MAX,
};

// Enum TslGame.*c199f182d6
enum class *c199f182d6 : uint8 {
	*34211e7419,
	*e3f561c3b0,
	*22881e6ffe,
	*c199f182d6_MAX,
};

// Enum TslGame.EMeleeThrowState
enum class EMeleeThrowState : uint8 {
	Idle,
	Prepare,
	Throw,
	EMeleeThrowState_MAX,
};

// Enum TslGame.*8ace554d82
enum class *8ace554d82 : uint8 {
	*65cfb86613,
	*100dccfe21,
	*9609fa43b3,
	*8ace554d82_MAX,
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

// Enum TslGame.*e13aa7a453
enum class *e13aa7a453 : uint8 {
	*e3eda9f54e,
	*c70269a5a2,
	*052e859d08,
	*07032f2b38,
	*e13aa7a453_MAX,
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

// Enum TslGame.*f71839ec84
enum class *f71839ec84 : uint8 {
	*3acb46d893,
	*8d039ec67b,
	*0f9cec31c9,
	*5221328c3e,
	*f71839ec84_MAX,
};

// Enum TslGame.*cf04782553
enum class *cf04782553 : uint8 {
	*a1bf15f1f0,
	*bfe27bc36b,
	*c1e7e83cf9,
	*cf04782553_MAX,
};

// Enum TslGame.EEmotePlayViewType
enum class EEmotePlayViewType : uint8 {
	Disable,
	TeamMate_Enable,
	Interaction_Enable,
	EEmotePlayViewType_MAX,
};

// Enum TslGame.*1612858302
enum class *1612858302 : uint8 {
	*2a67cdff14,
	*8cc30f9880,
	*2a3ff43785,
	*c1e7e83cf9,
	*1612858302_MAX,
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

// Enum TslGame.*28db627a73
enum class *28db627a73 : uint8 {
	*63f8dffae7,
	*afa0e878be,
	*f466e902b2,
	*e1784a0b0e,
	*28db627a73_MAX,
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

// ScriptStruct TslGame.*14b35072c4
// Size: 0x40 (Inherited: 0x00)
struct F*14b35072c4 {
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

// ScriptStruct TslGame.*404b69bd7b
// Size: 0x18 (Inherited: 0x00)
struct F*404b69bd7b {
	struct F*33dfdbedc3 *b1644a0f36; // 0x00(0x08)
	struct F*33dfdbedc3 WeaponPackage; // 0x08(0x08)
	struct F*33dfdbedc3 HealingPackage; // 0x10(0x08)
};

// ScriptStruct TslGame.*33dfdbedc3
// Size: 0x08 (Inherited: 0x00)
struct F*33dfdbedc3 {
	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *675c29da44; // 0x04(0x04)
};

// ScriptStruct TslGame.*f3c2381e25
// Size: 0x10 (Inherited: 0x00)
struct F*f3c2381e25 {
	bool Show; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D MarkerPosition; // 0x04(0x08)
	enum class EMarkerType MarkerType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*d5caf841d6
// Size: 0x20 (Inherited: 0x10)
struct F*d5caf841d6 : F*e29aa574a5 {
	struct FVector SpawnPosition; // 0x10(0x0c)
	float *74a53d8f2b; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e29aa574a5
// Size: 0x10 (Inherited: 0x00)
struct F*e29aa574a5 {
	enum class EPlatoonSupportRequestEventType EventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *cbd2116114; // 0x04(0x04)
	bool *fd940578d8; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StartTime; // 0x0c(0x04)
};

// ScriptStruct TslGame.*c1b1618831
// Size: 0x24 (Inherited: 0x10)
struct F*c1b1618831 : F*e29aa574a5 {
	enum class EPlatoonCarePackageType CarePackageType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *620b65301c; // 0x14(0x04)
	struct FVector *6e395d314c; // 0x18(0x0c)
};

// ScriptStruct TslGame.*e78868d8d7
// Size: 0x58 (Inherited: 0x00)
struct F*e78868d8d7 {
	float *d04510e6a7; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* *498af98d1d; // 0x08(0x08)
	struct ATslPlayerState* *043446fc3b; // 0x10(0x08)
	struct FVector_NetQuantize *227b2f0526; // 0x18(0x0c)
	struct FVector_NetQuantize *6b88b54311; // 0x24(0x0c)
	struct FName BoneName; // 0x30(0x08)
	float *e904105e92; // 0x38(0x04)
	bool *2e7f1385fa; // 0x3c(0x01)
	bool *33f5ee83c7; // 0x3d(0x01)
	char *15174c8e03 : 1; // 0x3e(0x01)
	char *e857bbf38b : 1; // 0x3e(0x01)
	char *33c825b7af : 1; // 0x3e(0x01)
	char pad_3E_3 : 5; // 0x3e(0x01)
	bool *beb328cef8; // 0x3f(0x01)
	struct FName *0fdd5cb131; // 0x40(0x08)
	struct FVector AttackerLocation; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*02280a47dd
// Size: 0x30 (Inherited: 0x00)
struct F*02280a47dd {
	struct FString PartyId; // 0x00(0x10)
	bool IsPartyLeader; // 0x10(0x01)
	enum class ERequestPartyState PartyState; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32 *d338d1340d; // 0x14(0x04)
	bool *ba80e3c86d; // 0x18(0x01)
	char pad_19[0x17]; // 0x19(0x17)
};

// ScriptStruct TslGame.*2523c4440a
// Size: 0x20 (Inherited: 0x00)
struct F*2523c4440a {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* TargetActor; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*0fa91d47b3
// Size: 0x20 (Inherited: 0x00)
struct F*0fa91d47b3 {
	int32 *d1c13d069e; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText *7b71ff5531; // 0x08(0x18)
};

// ScriptStruct TslGame.*722dbc2b72
// Size: 0x28 (Inherited: 0x00)
struct F*722dbc2b72 {
	int32 *84409b856b; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslCharacter* Rider; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct TslGame.*ecc8b35a99
// Size: 0x10 (Inherited: 0x00)
struct F*ecc8b35a99 {
	float *e1565a0a2d; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
};

// ScriptStruct TslGame.*d8777bfcee
// Size: 0x10 (Inherited: 0x00)
struct F*d8777bfcee {
	struct FVector2D *cce047a8c6; // 0x00(0x08)
	struct FVector2D *135dad93a9; // 0x08(0x08)
};

// ScriptStruct TslGame.*8b4f55762f
// Size: 0x38 (Inherited: 0x00)
struct F*8b4f55762f {
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

// ScriptStruct TslGame.*cf6d350044
// Size: 0x10 (Inherited: 0x00)
struct F*cf6d350044 {
	float DemoTime; // 0x00(0x04)
	float FogFallOff; // 0x04(0x04)
	float FogStartDistance; // 0x08(0x04)
	float FogDensity; // 0x0c(0x04)
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

// ScriptStruct TslGame.*4f69c08be6
// Size: 0xe0 (Inherited: 0x00)
struct F*4f69c08be6 {
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

// ScriptStruct TslGame.*ec8765e858
// Size: 0x98 (Inherited: 0x00)
struct F*ec8765e858 {
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

// ScriptStruct TslGame.*7688be0c95
// Size: 0x50 (Inherited: 0x00)
struct F*7688be0c95 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.TslOutGameLog
// Size: 0x20 (Inherited: 0x00)
struct FTslOutGameLog {
	struct FString Type; // 0x00(0x10)
	struct FString Log; // 0x10(0x10)
};

// ScriptStruct TslGame.*64eff88f0e
// Size: 0x10 (Inherited: 0x00)
struct F*64eff88f0e {
	struct UExponentialHeightFogComponent* *6ea2ada8af; // 0x00(0x08)
	bool *9dc580a53d; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*fdd45587de
// Size: 0x20 (Inherited: 0x00)
struct F*fdd45587de {
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
	int32 *4f8f663c85; // 0x00(0x04)
	int32 *68dae6ba84; // 0x04(0x04)
};

// ScriptStruct TslGame.TeamInfo
// Size: 0x50 (Inherited: 0x00)
struct FTeamInfo {
	struct FString TeamName; // 0x00(0x10)
	struct FString *cc754c3b62; // 0x10(0x10)
	struct UTexture2D* TeamIcon; // 0x20(0x08)
	struct FLinearColor TeamColor; // 0x28(0x10)
	struct FLinearColor *a5784d65ae; // 0x38(0x10)
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

// ScriptStruct TslGame.*522854266b
// Size: 0xb8 (Inherited: 0x00)
struct F*522854266b {
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

// ScriptStruct TslGame.*3128cd0071
// Size: 0x138 (Inherited: 0x00)
struct F*3128cd0071 {
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

// ScriptStruct TslGame.*0a0db1cbd7
// Size: 0x58 (Inherited: 0x00)
struct F*0a0db1cbd7 {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString RecordTargetName; // 0x38(0x10)
	struct FString RecordTargetNetId; // 0x48(0x10)
};

// ScriptStruct TslGame.*0c2cfa35d8
// Size: 0x68 (Inherited: 0x00)
struct F*0c2cfa35d8 {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString EtceteraEventCode; // 0x38(0x10)
	struct FString TargetNetId; // 0x48(0x10)
	struct FString TargetName; // 0x58(0x10)
};

// ScriptStruct TslGame.*034e90e937
// Size: 0xb8 (Inherited: 0x00)
struct F*034e90e937 {
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

// ScriptStruct TslGame.*4c885f7651
// Size: 0x18 (Inherited: 0x00)
struct F*4c885f7651 {
	int32 *528351faf9; // 0x00(0x04)
	int32 *43d7120f23; // 0x04(0x04)
	struct TArray<struct F*7cca5c911d> *bd4442854e; // 0x08(0x10)
};

// ScriptStruct TslGame.*7cca5c911d
// Size: 0x18 (Inherited: 0x00)
struct F*7cca5c911d {
	struct TArray<struct F*b4b0c84e0a> *a14d2bd9a3; // 0x00(0x10)
	bool bIsLastStage; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *1662cd7e76; // 0x14(0x04)
};

// ScriptStruct TslGame.*b4b0c84e0a
// Size: 0x60 (Inherited: 0x00)
struct F*b4b0c84e0a {
	struct TArray<struct F*7463457613> *ba6b4edea8; // 0x00(0x10)
	struct TArray<int32> *36274b0170; // 0x10(0x10)
	int32 *23aaa59575; // 0x20(0x04)
	int32 *ec2aede01b; // 0x24(0x04)
	enum class EArenaState *b4b0c84e0a; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *715e3f104f; // 0x2c(0x04)
	float *3cd3c48854; // 0x30(0x04)
	float *3d31300514; // 0x34(0x04)
	float *53fe44636a; // 0x38(0x04)
	int32 *00938cfe47; // 0x3c(0x04)
	float *d89f6748d1; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Name; // 0x48(0x10)
	int32 *32dc5b46e6; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*7463457613
// Size: 0x14 (Inherited: 0x00)
struct F*7463457613 {
	int32 TeamId; // 0x00(0x04)
	int32 Score; // 0x04(0x04)
	int32 *e4de9d955a; // 0x08(0x04)
	float *12517b4799; // 0x0c(0x04)
	bool *ec06137293; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*d19c096f11
// Size: 0x10 (Inherited: 0x00)
struct F*d19c096f11 {
	struct TArray<struct F*afa3836ad8> DynamicTeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*afa3836ad8
// Size: 0x28 (Inherited: 0x00)
struct F*afa3836ad8 {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	struct TArray<bool> RoundHistory; // 0x08(0x10)
	struct TArray<struct F*440130a490> DynamicPlayersInfo; // 0x18(0x10)
};

// ScriptStruct TslGame.*440130a490
// Size: 0x14 (Inherited: 0x00)
struct F*440130a490 {
	int32 Kills; // 0x00(0x04)
	int32 Deaths; // 0x04(0x04)
	int32 DamageDealt; // 0x08(0x04)
	int32 money; // 0x0c(0x04)
	int32 MemberIndex; // 0x10(0x04)
};

// ScriptStruct TslGame.*93716b9850
// Size: 0x08 (Inherited: 0x00)
struct F*93716b9850 {
	int32 GoalScore; // 0x00(0x04)
	bool bIsTeamElimination; // 0x04(0x01)
	bool bUseWarRoyaleBluezone; // 0x05(0x01)
	bool bUsingTeamXRay; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct TslGame.*94426d5e42
// Size: 0x50 (Inherited: 0x00)
struct F*94426d5e42 {
	float TimeLimitSeconds; // 0x00(0x04)
	float LastRespawnTimeSeconds; // 0x04(0x04)
	struct TArray<int32> TeamIds; // 0x08(0x10)
	struct TArray<int32> TeamIndices; // 0x18(0x10)
	struct TArray<struct FString> TeamLeaderNames; // 0x28(0x10)
	struct TArray<struct FString> TeamLeaderClanNames; // 0x38(0x10)
	int32 TeamCount; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*81bc732cd2
// Size: 0x30 (Inherited: 0x00)
struct F*81bc732cd2 {
	float TrainingScore; // 0x00(0x04)
	float TrainingPlayTime; // 0x04(0x04)
	bool TrainingStartCountDown; // 0x08(0x01)
	bool HeadShotCount; // 0x09(0x01)
	bool KillCount; // 0x0a(0x01)
	bool AimAccuracy; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString WeaponName; // 0x10(0x10)
	float *2e1a4cae2d; // 0x20(0x04)
	bool *bfd921d743; // 0x24(0x01)
	bool *c94c3aa471; // 0x25(0x01)
	bool *52f5d10df9; // 0x26(0x01)
	bool *338c803de1; // 0x27(0x01)
	bool *9bc4238f34; // 0x28(0x01)
	bool *b3ea18bd13; // 0x29(0x01)
	bool *e1c51518e2; // 0x2a(0x01)
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

// ScriptStruct TslGame.*9f4e2ae220
// Size: 0x08 (Inherited: 0x00)
struct F*9f4e2ae220 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
};

// ScriptStruct TslGame.*a8a1f174f7
// Size: 0x10 (Inherited: 0x00)
struct F*a8a1f174f7 {
	struct TArray<struct F*1d88027f3b> *1979d0f5b3; // 0x00(0x10)
};

// ScriptStruct TslGame.*1d88027f3b
// Size: 0x20 (Inherited: 0x00)
struct F*1d88027f3b {
	struct FName ActionName; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGame.*917ae4cb1d
// Size: 0x38 (Inherited: 0x00)
struct F*917ae4cb1d {
	enum class ESystemMessageType MessageType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Duration; // 0x04(0x04)
	float *9a99e94b92; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Message; // 0x10(0x18)
	int32 *c7cb2daaaf; // 0x28(0x04)
	int32 *7e36c280fb; // 0x2c(0x04)
	bool *95dd8cf299; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*3c352e82dd
// Size: 0x38 (Inherited: 0x08)
struct F*3c352e82dd : FTableRowBase {
	struct FText Message; // 0x08(0x18)
	enum class ETslNotificationMessageColorType *03084e49b2; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UTexture2D* *cc0531ca7e; // 0x28(0x08)
	enum class ETslNotificationMessageAnimationType *41dc4c163b; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*f07a31b27f
// Size: 0x08 (Inherited: 0x00)
struct F*f07a31b27f {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*dbd85df028
// Size: 0x08 (Inherited: 0x00)
struct F*dbd85df028 {
	float Score; // 0x00(0x04)
	int32 *fc57d8e80b; // 0x04(0x04)
};

// ScriptStruct TslGame.*f001600061
// Size: 0x08 (Inherited: 0x00)
struct F*f001600061 {
	int32 TeamNum; // 0x00(0x04)
	int32 TeamRanking; // 0x04(0x04)
};

// ScriptStruct TslGame.*b57bfafecc
// Size: 0x28 (Inherited: 0x00)
struct F*b57bfafecc {
	struct FVector *332578b649; // 0x00(0x0c)
	float *028afe2fc4; // 0x0c(0x04)
	float *cf9673a8f7; // 0x10(0x04)
	struct FVector *6972fa3e8d; // 0x14(0x0c)
	float *b2955cd581; // 0x20(0x04)
	float *76b6ffd005; // 0x24(0x04)
};

// ScriptStruct TslGame.*c9e2b1ab63
// Size: 0x48 (Inherited: 0x00)
struct F*c9e2b1ab63 {
	struct UClass* Widget; // 0x00(0x20)
	struct UTexture2D* Texture; // 0x20(0x20)
	struct FVector2D Size; // 0x40(0x08)
};

// ScriptStruct TslGame.*68031af743
// Size: 0x10 (Inherited: 0x00)
struct F*68031af743 {
	struct TArray<struct UUserWidget*> Widgets; // 0x00(0x10)
};

// ScriptStruct TslGame.*549d5f74e6
// Size: 0x60 (Inherited: 0x00)
struct F*549d5f74e6 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*f883c0c9f4
// Size: 0x60 (Inherited: 0x00)
struct F*f883c0c9f4 {
	struct UTexture2D* IconBackground; // 0x00(0x20)
	struct UTexture2D* MemberIndexBackground; // 0x20(0x20)
	struct UTexture2D* FullWidgetBackground; // 0x40(0x20)
};

// ScriptStruct TslGame.PlayerInfo
// Size: 0x50 (Inherited: 0x00)
struct FPlayerInfo {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*ac7e95618e
// Size: 0x10 (Inherited: 0x00)
struct F*ac7e95618e {
	struct UTexture2D* Left; // 0x00(0x08)
	struct UTexture2D* Right; // 0x08(0x08)
};

// ScriptStruct TslGame.*dcd05136fe
// Size: 0x10 (Inherited: 0x00)
struct F*dcd05136fe {
	struct TArray<struct U*173d3bfecd*> Items; // 0x00(0x10)
};

// ScriptStruct TslGame.*f78356c20f
// Size: 0x14 (Inherited: 0x00)
struct F*f78356c20f {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*d7cf67187b
// Size: 0x10 (Inherited: 0x00)
struct F*d7cf67187b {
	struct TArray<struct ATslAIWaypointSegment*> *dfdf50bdc7; // 0x00(0x10)
};

// ScriptStruct TslGame.*5d58ecab67
// Size: 0xa0 (Inherited: 0x00)
struct F*5d58ecab67 {
	struct TMap<struct F*f84ceae64b, bool> *78924eef6c; // 0x00(0x50)
	struct TMap<struct F*f84ceae64b, struct F*de61ae727e> *4872c11fa2; // 0x50(0x50)
};

// ScriptStruct TslGame.*f84ceae64b
// Size: 0x10 (Inherited: 0x00)
struct F*f84ceae64b {
	struct ATslAIWaypointSegment* path; // 0x00(0x08)
	float InputKey; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*de61ae727e
// Size: 0x08 (Inherited: 0x00)
struct F*de61ae727e {
	float *a7f7ac8664; // 0x00(0x04)
	float *24256b7cd6; // 0x04(0x04)
};

// ScriptStruct TslGame.*8922a3e903
// Size: 0x48 (Inherited: 0x00)
struct F*8922a3e903 {
	int32 SpawnCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName VehicleTag; // 0x08(0x08)
	struct FName SpawnTag; // 0x10(0x08)
	bool *702fe259a6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector SpawnLocation; // 0x1c(0x0c)
	struct FRotator *006f8ad86b; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct F*8d353075d0 *b5d2807d07; // 0x38(0x10)
};

// ScriptStruct TslGame.*8d353075d0
// Size: 0x10 (Inherited: 0x00)
struct F*8d353075d0 {
	struct ATslAIWaypointSegment* *f05b2b522e; // 0x00(0x08)
	float *c3b06765da; // 0x08(0x04)
	bool *97857b53e0; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*817e3df3b8
// Size: 0x28 (Inherited: 0x00)
struct F*817e3df3b8 {
	struct APawn* *b473a3b832; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
	struct UBlackboardData* BlackboardData; // 0x10(0x08)
	struct F*8d353075d0 *b5d2807d07; // 0x18(0x10)
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
	struct F*797a4f5795 SpawnFilter; // 0x98(0x28)
};

// ScriptStruct TslGame.*797a4f5795
// Size: 0x28 (Inherited: 0x00)
struct F*797a4f5795 {
	bool bLimitSpawnPoints; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> ValidSpawnPoints; // 0x08(0x10)
	struct TArray<struct FName> InvalidSpawnPoints; // 0x18(0x10)
};

// ScriptStruct TslGame.*fc4fc8f72f
// Size: 0x20 (Inherited: 0x00)
struct F*fc4fc8f72f {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*07fd6b9930
// Size: 0x60 (Inherited: 0x00)
struct F*07fd6b9930 {
	struct FGuid ID; // 0x00(0x10)
	struct FString *0bd27e032c; // 0x10(0x10)
	struct UClass* VehicleClass; // 0x20(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x28(0x08)
	struct UBlackboardData* BlackboardData; // 0x30(0x08)
	struct F*797a4f5795 SpawnSettings; // 0x38(0x28)
};

// ScriptStruct TslGame.*eb5898b578
// Size: 0x40 (Inherited: 0x00)
struct F*eb5898b578 {
	float *e0eb354e13; // 0x00(0x04)
	float *51a569b5a3; // 0x04(0x04)
	float *279ae38920; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float *4a81f62460; // 0x10(0x04)
	float *44ac347246; // 0x14(0x04)
	struct FName *f1edb87132; // 0x18(0x08)
	struct FVector *da0e0f66e9; // 0x20(0x0c)
	struct FVector *42df3865a0; // 0x2c(0x0c)
	struct UClass* *498af98d1d; // 0x38(0x08)
};

// ScriptStruct TslGame.*40c4e5f28e
// Size: 0x30 (Inherited: 0x00)
struct F*40c4e5f28e {
	struct F*ef16e36beb *0c7ee6dd9a; // 0x00(0x18)
	struct F*ef16e36beb *e86d988362; // 0x18(0x18)
};

// ScriptStruct TslGame.*ef16e36beb
// Size: 0x18 (Inherited: 0x00)
struct F*ef16e36beb {
	float *43d82ee9da; // 0x00(0x04)
	float *d10c9b73b7; // 0x04(0x04)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*0b799fa230
// Size: 0x18 (Inherited: 0x00)
struct F*0b799fa230 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*5bcbe172cf
// Size: 0x58 (Inherited: 0x00)
struct F*5bcbe172cf {
	enum class EVehiclePartType *8545ef6fd7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<int32, struct UMaterialInterface*> *0ae0aecc95; // 0x08(0x50)
};

// ScriptStruct TslGame.*c5660d51d8
// Size: 0x98 (Inherited: 0x00)
struct F*c5660d51d8 {
	bool *1e2e867618; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *6b3f49ef2b; // 0x04(0x04)
	struct FName *98ca88a4bd; // 0x08(0x08)
	struct FVector2D *254515f8f7; // 0x10(0x08)
	struct FVector2D *5d2dbb4e3d; // 0x18(0x08)
	struct FVector *1132d5061f; // 0x20(0x0c)
	struct FVector2D *6fd6fd49af; // 0x2c(0x08)
	struct FVector2D *61b06adb96; // 0x34(0x08)
	float *331610df7f; // 0x3c(0x04)
	float *7ee923474f; // 0x40(0x04)
	float *c0d1980763; // 0x44(0x04)
	struct FVector *ea07821785; // 0x48(0x0c)
	struct FVector *76c349adac; // 0x54(0x0c)
	struct FVector2D *b6b2774696; // 0x60(0x08)
	float *b7ce6894ce; // 0x68(0x04)
	bool *6b8c294b9e; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float *819dd67fd5; // 0x70(0x04)
	bool *0cd1553319; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector2D *2300c9ca9b; // 0x78(0x08)
	struct U*1ba2d2b086* *4a2240ef82; // 0x80(0x08)
	bool *f8494f0631; // 0x88(0x01)
	char pad_89[0xf]; // 0x89(0x0f)
};

// ScriptStruct TslGame.*a774748af6
// Size: 0x68 (Inherited: 0x00)
struct F*a774748af6 {
	struct FName *2c880d793f; // 0x00(0x08)
	float *d0eca0a123; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName *d67e691b16; // 0x10(0x08)
	float *264b61614b; // 0x18(0x04)
	float *52fc20ebdb; // 0x1c(0x04)
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

// ScriptStruct TslGame.*c0c8686f61
// Size: 0x130 (Inherited: 0x00)
struct F*c0c8686f61 {
	bool *a2735f4cd2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *9020c46511; // 0x04(0x04)
	float *d6a2ee39dd; // 0x08(0x04)
	float *f3b0624933; // 0x0c(0x04)
	float *0cbbbfc85d; // 0x10(0x04)
	struct FFloatRange *97bc107290; // 0x14(0x10)
	float *9fc8dc46e6; // 0x24(0x04)
	float *f390295aac; // 0x28(0x04)
	float *582dec1d54; // 0x2c(0x04)
	float *771caa8d48; // 0x30(0x04)
	int32 *d1bb2e0026; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct TMap<enum class EPhysicalSurface, struct F*987fedd896> *13553136be; // 0x40(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*987fedd896> *0b6f527bef; // 0x90(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*7802f2ba25> *c028e6a698; // 0xe0(0x50)
};

// ScriptStruct TslGame.*7802f2ba25
// Size: 0x28 (Inherited: 0x00)
struct F*7802f2ba25 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UAkComponent* *cf6f62e0e0; // 0x18(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x20(0x08)
};

// ScriptStruct TslGame.*987fedd896
// Size: 0x10 (Inherited: 0x00)
struct F*987fedd896 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*a8910ecf86
// Size: 0x28 (Inherited: 0x00)
struct F*a8910ecf86 {
	char pad_0[0x18]; // 0x00(0x18)
	struct USceneComponent* *129513d23d; // 0x18(0x08)
	struct USceneComponent* *71a3f698d1; // 0x20(0x08)
};

// ScriptStruct TslGame.*4892bd8b99
// Size: 0x28 (Inherited: 0x00)
struct F*4892bd8b99 {
	int32 *d2f2dd10b0; // 0x00(0x04)
	float *fc08b349df; // 0x04(0x04)
	float *3dfffeb892; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *859e1536ed; // 0x10(0x08)
	struct UCurveFloat* *77b21ba628; // 0x18(0x08)
	struct UClass* *498af98d1d; // 0x20(0x08)
};

// ScriptStruct TslGame.*476ce5c8a1
// Size: 0x10 (Inherited: 0x00)
struct F*476ce5c8a1 {
	struct FName *ba8b4987ca; // 0x00(0x08)
	struct FName *fa6904deee; // 0x08(0x08)
};

// ScriptStruct TslGame.*4824fcc2df
// Size: 0x70 (Inherited: 0x00)
struct F*4824fcc2df {
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

// ScriptStruct TslGame.*e719523298
// Size: 0x20 (Inherited: 0x00)
struct F*e719523298 {
	struct FString ItemID; // 0x00(0x10)
	struct FString SkinId; // 0x10(0x10)
};

// ScriptStruct TslGame.*bc3f080054
// Size: 0x30 (Inherited: 0x00)
struct F*bc3f080054 {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*460886c449 LocalWeatherSetting; // 0x08(0x28)
};

// ScriptStruct TslGame.*460886c449
// Size: 0x28 (Inherited: 0x00)
struct F*460886c449 {
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

// ScriptStruct TslGame.*5c534adb3c
// Size: 0x10 (Inherited: 0x00)
struct F*5c534adb3c {
	float DirectionalLightIntensity; // 0x00(0x04)
	float DirectionalLightTemperature; // 0x04(0x04)
	float DirectionalLightVolumetricScattering; // 0x08(0x04)
	float SkyLightIntensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*403c43a5d2
// Size: 0x68 (Inherited: 0x00)
struct F*403c43a5d2 {
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

// ScriptStruct TslGame.*4e4594766b
// Size: 0x1c (Inherited: 0x00)
struct F*4e4594766b {
	bool *fe1e0d92cf; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *4eacf5a3cb; // 0x04(0x04)
	float *619ea90b2b; // 0x08(0x04)
	float *c281a9b10c; // 0x0c(0x04)
	float *17624a1672; // 0x10(0x04)
	float *9973866fd7; // 0x14(0x04)
	bool *f3b5360776; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct TslGame.*79216d58a3
// Size: 0x30 (Inherited: 0x00)
struct F*79216d58a3 {
	struct UAkAudioEvent* *34f1fe6052; // 0x00(0x08)
	struct UAkAudioEvent* *fba5a036aa; // 0x08(0x08)
	float *d753529181; // 0x10(0x04)
	float *a2e3be237f; // 0x14(0x04)
	struct FString *918f47aa9f; // 0x18(0x10)
	float *c3b8eb55a0; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*333a5e59c1
// Size: 0x30 (Inherited: 0x00)
struct F*333a5e59c1 {
	float *9543f8df19; // 0x00(0x04)
	struct FVector2D *77844e4884; // 0x04(0x08)
	struct FVector2D *a4cd12e67a; // 0x0c(0x08)
	float *e003b7efc1; // 0x14(0x04)
	float *a3a5a06f82; // 0x18(0x04)
	float *d6be6ab2ce; // 0x1c(0x04)
	struct FVector2D *2775da3e03; // 0x20(0x08)
	struct FVector2D *b54b3b72b7; // 0x28(0x08)
};

// ScriptStruct TslGame.*752c9ae1f3
// Size: 0x10 (Inherited: 0x00)
struct F*752c9ae1f3 {
	bool *be4fbfe526; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct TslGame.*fa51cda5f1
// Size: 0x58 (Inherited: 0x00)
struct F*fa51cda5f1 {
	float *8ea551f3aa; // 0x00(0x04)
	float *f8784df6bb; // 0x04(0x04)
	struct FVector2D *efee70a5a5; // 0x08(0x08)
	struct FVector2D *566d395a74; // 0x10(0x08)
	struct FVector2D *9bee8bffd8; // 0x18(0x08)
	struct FVector2D *13b2f8a4a3; // 0x20(0x08)
	struct FVector2D *da70542002; // 0x28(0x08)
	struct FVector2D *ed285f5ed3; // 0x30(0x08)
	struct FVector2D *0dc1e0509a; // 0x38(0x08)
	float *70b42f0f15; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UAnimMontage* *e58286a666; // 0x48(0x08)
	float *209f801855; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*b154de9a12
// Size: 0x14 (Inherited: 0x00)
struct F*b154de9a12 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*0ca66d83fb
// Size: 0x40 (Inherited: 0x00)
struct F*0ca66d83fb {
	float *c17b1363d0; // 0x00(0x04)
	float *5ae3d3a98e; // 0x04(0x04)
	float *6d63d50df8; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *8d14b7f34f; // 0x10(0x08)
	float *e880769590; // 0x18(0x04)
	float *191d926dea; // 0x1c(0x04)
	float *8e65c31152; // 0x20(0x04)
	float *6ff6cc9df4; // 0x24(0x04)
	struct FVector2D *b5b69e1237; // 0x28(0x08)
	struct FVector2D *3043e8238f; // 0x30(0x08)
	float *ccd3f1ebd2; // 0x38(0x04)
	float *9062106afd; // 0x3c(0x04)
};

// ScriptStruct TslGame.*5323e0f7ca
// Size: 0x14 (Inherited: 0x14)
struct F*5323e0f7ca : F*55295f15c8 {
};

// ScriptStruct TslGame.*55295f15c8
// Size: 0x14 (Inherited: 0x00)
struct F*55295f15c8 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*668a7120e2
// Size: 0x14 (Inherited: 0x14)
struct F*668a7120e2 : F*55295f15c8 {
};

// ScriptStruct TslGame.*71008fe348
// Size: 0x1c (Inherited: 0x14)
struct F*71008fe348 : F*55295f15c8 {
	char pad_14[0x8]; // 0x14(0x08)
};

// ScriptStruct TslGame.*6a66dd2688
// Size: 0x10 (Inherited: 0x00)
struct F*6a66dd2688 {
	struct UAnimSequence* TransitionSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*643507869a
// Size: 0x30 (Inherited: 0x00)
struct F*643507869a {
	struct USkeletalMesh* *b9d3255046; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *2d7dd4092d; // 0x20(0x10)
};

// ScriptStruct TslGame.*8c860e4687
// Size: 0x18 (Inherited: 0x00)
struct F*8c860e4687 {
	struct USkeletalMesh* *790bf84c5a; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *816933db59; // 0x08(0x10)
};

// ScriptStruct TslGame.*711a2e301d
// Size: 0x38 (Inherited: 0x00)
struct F*711a2e301d {
	struct TArray<struct F*4171bfe558> StartParticleList; // 0x00(0x10)
	struct TArray<struct F*4171bfe558> FinishParticleList; // 0x10(0x10)
	struct F*3949143c7a OverrideMaterial; // 0x20(0x18)
};

// ScriptStruct TslGame.*3949143c7a
// Size: 0x18 (Inherited: 0x00)
struct F*3949143c7a {
	enum class *36c1b81d56 SkinApplicationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*1f536e83d6> SkinMaterials; // 0x08(0x10)
};

// ScriptStruct TslGame.*1f536e83d6
// Size: 0x30 (Inherited: 0x00)
struct F*1f536e83d6 {
	struct FName MaterialSlotName; // 0x00(0x08)
	int32 MaterialSlotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInstance* MaterialInstance; // 0x10(0x20)
};

// ScriptStruct TslGame.*4171bfe558
// Size: 0x20 (Inherited: 0x00)
struct F*4171bfe558 {
	struct TArray<struct FName> AttachSocketCandidates; // 0x00(0x10)
	struct FStringClassReference ParticleClass; // 0x10(0x10)
};

// ScriptStruct TslGame.*6d0b7a5fe2
// Size: 0x18 (Inherited: 0x08)
struct F*6d0b7a5fe2 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*5de3db0d75
// Size: 0x50 (Inherited: 0x00)
struct F*5de3db0d75 {
	struct TMap<enum class EPhysicalSurface, float> *c814473047; // 0x00(0x50)
};

// ScriptStruct TslGame.*42237be31e
// Size: 0x08 (Inherited: 0x00)
struct F*42237be31e {
	float *fac7ed20e2; // 0x00(0x04)
	float *ae78448aaa; // 0x04(0x04)
};

// ScriptStruct TslGame.*27500bdbc1
// Size: 0x28 (Inherited: 0x00)
struct F*27500bdbc1 {
	bool AtlasIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UClass*> WheelTypes; // 0x08(0x10)
	struct TArray<struct UClass*> ExemptedWheelTypes; // 0x18(0x10)
};

// ScriptStruct TslGame.*756f1939e2
// Size: 0x60 (Inherited: 0x00)
struct F*756f1939e2 {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct UAkAudioEvent* *29265a2a3f; // 0x40(0x08)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x48(0x08)
	float *2d8eec9fd9; // 0x50(0x04)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x54(0x01)
	char LightingChannel1 : 1; // 0x55(0x01)
	char pad_55_1 : 7; // 0x55(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FName CollisionProfileName; // 0x58(0x08)
};

// ScriptStruct TslGame.*dee87d8382
// Size: 0x48 (Inherited: 0x08)
struct F*dee87d8382 : FTableRowBase {
	struct UTexture* Icon; // 0x08(0x20)
	struct F*f9bf54b6d9 AbilityAttribute; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName AbilityID; // 0x38(0x08)
	struct UClass* AbilityClass; // 0x40(0x08)
};

// ScriptStruct TslGame.*f9bf54b6d9
// Size: 0x0c (Inherited: 0x00)
struct F*f9bf54b6d9 {
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
	struct U*e24ec86c66* AnimDB; // 0x68(0x08)
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
	struct U*a4bec6be6d* AnimDBMap; // 0x58(0x08)
	struct U*a4bec6be6d* PrevAnimDBMap; // 0x60(0x08)
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
	enum class *c49d9e09fa CurveBlendOption; // 0x182(0x01)
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
	enum class *fb5f72d7eb EffectorLocationSpace; // 0x104(0x01)
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
	enum class *fb5f72d7eb ControlSpace; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.TslAnimNode_CustomAnimSequence
// Size: 0x90 (Inherited: 0x70)
struct FTslAnimNode_CustomAnimSequence : FAnimNode_SequencePlayer {
	struct U*cf5299f113* AnimDataAsset; // 0x70(0x08)
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
	enum class *fb5f72d7eb EffectorTransformSpace; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FBoneReference EffectorTransformBone; // 0x138(0x18)
	enum class *d08ba44071 EffectorRotationSource; // 0x150(0x01)
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
	struct U*a4bec6be6d* AnimDBMap; // 0x58(0x08)
	struct U*a4bec6be6d* PrevAnimDBMap; // 0x60(0x08)
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
	struct U*a4bec6be6d* AnimDBMap; // 0x30(0x08)
	struct U*a4bec6be6d* PrevAnimDBMap; // 0x38(0x08)
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
	struct U*a4bec6be6d* AnimDBMap; // 0x58(0x08)
	struct U*a4bec6be6d* PrevAnimDBMap; // 0x60(0x08)
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
	struct U*a4bec6be6d* AnimDBMap; // 0x58(0x08)
	struct U*a4bec6be6d* PrevAnimDBMap; // 0x60(0x08)
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
	struct U*81bff029c3* ParentInstance; // 0x58(0x08)
	struct U*e24ec86c66* AnimDB; // 0x60(0x08)
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

// ScriptStruct TslGame.*800f0c583d
// Size: 0x18 (Inherited: 0x08)
struct F*800f0c583d : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	struct UClass* *fc68160527; // 0x10(0x08)
};

// ScriptStruct TslGame.*0148eeb61c
// Size: 0x18 (Inherited: 0x08)
struct F*0148eeb61c : FTableRowBase {
	struct TArray<struct FName> ItemIDs; // 0x08(0x10)
};

// ScriptStruct TslGame.*1d3096eef4
// Size: 0x28 (Inherited: 0x08)
struct F*1d3096eef4 : FTableRowBase {
	enum class ECoinTakeType CoinTakeType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 BannedRoundAttributes; // 0x0c(0x04)
	int32 TakeValue; // 0x10(0x04)
	bool bOverwrite; // 0x14(0x01)
	bool bUseCustomOverride; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct F*83982e2215> CustomOverrideValues; // 0x18(0x10)
};

// ScriptStruct TslGame.*83982e2215
// Size: 0x08 (Inherited: 0x00)
struct F*83982e2215 {
	int32 OverrideIndex; // 0x00(0x04)
	int32 OverrideValue; // 0x04(0x04)
};

// ScriptStruct TslGame.*b6a5de8896
// Size: 0x50 (Inherited: 0x08)
struct F*b6a5de8896 : FTableRowBase {
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
	struct F*84a47292c5 WeaponAmmoData; // 0x38(0x10)
	enum class EBombScopeInfo ScopeInfo; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.*84a47292c5
// Size: 0x10 (Inherited: 0x10)
struct F*84a47292c5 : F*e42faa3897 {
};

// ScriptStruct TslGame.*e42faa3897
// Size: 0x10 (Inherited: 0x00)
struct F*e42faa3897 {
	struct FName ItemID; // 0x00(0x08)
	int32 Stack; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*605ab249cf
// Size: 0x20 (Inherited: 0x10)
struct F*605ab249cf : F*e42faa3897 {
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*08a2763a91
// Size: 0x520 (Inherited: 0x520)
struct F*08a2763a91 : F*434fea7363 {
};

// ScriptStruct TslGame.*d5d163a3b1
// Size: 0x178 (Inherited: 0x08)
struct F*d5d163a3b1 : FTableRowBase {
	enum class *2f8835d4b3 CharacterInteractType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxInteractableDistance; // 0x0c(0x04)
	struct FText InteractionVerb; // 0x10(0x18)
	struct FText InteractiveObjectName; // 0x28(0x18)
	bool bUseTraceCheck; // 0x40(0x01)
	bool bTraceComplexForInteraction; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct F*d632a80c24 CastConfig; // 0x48(0x130)
};

// ScriptStruct TslGame.*d632a80c24
// Size: 0x130 (Inherited: 0x00)
struct F*d632a80c24 {
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
	struct F*3306e288f6 CustomCastAnim; // 0x60(0xc0)
	enum class EStanceMode Stance; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FName *1bb52f298e; // 0x128(0x08)
};

// ScriptStruct TslGame.*3306e288f6
// Size: 0xc0 (Inherited: 0x00)
struct F*3306e288f6 {
	struct F*9f62c70030 StartAnim; // 0x00(0x40)
	struct F*9f62c70030 LoopAnim; // 0x40(0x40)
	struct F*9f62c70030 EndAnim; // 0x80(0x40)
};

// ScriptStruct TslGame.*9f62c70030
// Size: 0x40 (Inherited: 0x00)
struct F*9f62c70030 {
	struct F*f1a9ecb48a AnimSequence; // 0x00(0x10)
	struct F*f1a9ecb48a AnimSequenceFPP; // 0x10(0x10)
	struct F*f1a9ecb48a AnimSequenceProne; // 0x20(0x10)
	struct F*f1a9ecb48a AnimSequenceProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*f1a9ecb48a
// Size: 0x10 (Inherited: 0x00)
struct F*f1a9ecb48a {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f633a715e1
// Size: 0x480 (Inherited: 0x00)
struct F*f633a715e1 {
	struct F*ef28d506ed *ef28d506ed; // 0x00(0x290)
	struct F*32f832bafc *32f832bafc; // 0x290(0x1b0)
	struct F*4a9fd5c5d4 *4a9fd5c5d4; // 0x440(0x38)
	char pad_478[0x8]; // 0x478(0x08)
};

// ScriptStruct TslGame.*4a9fd5c5d4
// Size: 0x38 (Inherited: 0x08)
struct F*4a9fd5c5d4 : F*5722edfada {
	int32 *d433b3adb6; // 0x08(0x04)
	int32 *3c7b6de98c; // 0x0c(0x04)
	float Timestamp; // 0x10(0x04)
	struct FVector *c41f59d944; // 0x14(0x0c)
	int64 *367eb3d5ba; // 0x20(0x08)
	struct FString TextMarker; // 0x28(0x10)
};

// ScriptStruct TslGame.*5722edfada
// Size: 0x08 (Inherited: 0x00)
struct F*5722edfada {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*32f832bafc
// Size: 0x1b0 (Inherited: 0x08)
struct F*32f832bafc : F*5722edfada {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*6a62f87307 *1179d57b3f; // 0x10(0xa0)
	struct F*6a62f87307 *ffb8333c48; // 0xb0(0xa0)
	struct FString *d10fe43b38; // 0x150(0x10)
	struct FString *da5bc9afbc; // 0x160(0x10)
	struct FString *37e528ca8b; // 0x170(0x10)
	struct FString *bf011a953f; // 0x180(0x10)
	char pad_190[0x20]; // 0x190(0x20)
};

// ScriptStruct TslGame.*6a62f87307
// Size: 0xa0 (Inherited: 0x00)
struct F*6a62f87307 {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Average; // 0x08(0x04)
	char pad_C[0x94]; // 0x0c(0x94)
};

// ScriptStruct TslGame.*ef28d506ed
// Size: 0x290 (Inherited: 0x08)
struct F*ef28d506ed : F*5722edfada {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*6a62f87307 Frame; // 0x10(0xa0)
	struct F*6a62f87307 *c802027a2f; // 0xb0(0xa0)
	struct F*6a62f87307 *77032752ed; // 0x150(0xa0)
	struct F*6a62f87307 *5c89530f92; // 0x1f0(0xa0)
};

// ScriptStruct TslGame.*22328de8af
// Size: 0x40 (Inherited: 0x00)
struct F*22328de8af {
	struct FString DeviceName; // 0x00(0x10)
	struct FString ClientVersion; // 0x10(0x10)
	struct FString MapName; // 0x20(0x10)
	struct FString ModeName; // 0x30(0x10)
};

// ScriptStruct TslGame.*acb15babd6
// Size: 0x28 (Inherited: 0x08)
struct F*acb15babd6 : FTableRowBase {
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

// ScriptStruct TslGame.*6aaae1fa3f
// Size: 0x3c8 (Inherited: 0x3b8)
struct F*6aaae1fa3f : FItemTableRowCastable {
	struct TArray<struct F*bbb2bddee4> SupplyItems; // 0x3b8(0x10)
};

// ScriptStruct TslGame.ItemTableRowCastable
// Size: 0x3b8 (Inherited: 0x268)
struct FItemTableRowCastable : F*a1c66df06e {
	bool *cbb5131e83; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct F*d632a80c24 *d632a80c24; // 0x270(0x130)
	enum class ECastableItemType *6482583803; // 0x3a0(0x01)
	bool *b5364665dc; // 0x3a1(0x01)
	char pad_3A2[0x6]; // 0x3a2(0x06)
	struct TArray<struct UClass*> *b410d8f49f; // 0x3a8(0x10)
};

// ScriptStruct TslGame.*a1c66df06e
// Size: 0x268 (Inherited: 0x08)
struct F*a1c66df06e : FTableRowBase {
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
	struct U*5fc898fe2e* ProjectileConfig; // 0xb0(0x20)
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
	struct F*f0d57e2b68 LobbyItemDesc; // 0x1a0(0x60)
	bool bIsLobbyWeapon; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	int32 LobbyWeaponID; // 0x204(0x04)
	struct UClass* LobbyWeaponInstance; // 0x208(0x20)
	bool *68079dc98e; // 0x228(0x01)
	bool *cd44b72cd6; // 0x229(0x01)
	bool *a362cec046; // 0x22a(0x01)
	char pad_22B[0x5]; // 0x22b(0x05)
	struct FString Note; // 0x230(0x10)
	int32 AIFullValue; // 0x240(0x04)
	int32 ItemSubType; // 0x244(0x04)
	struct FName ItemID; // 0x248(0x08)
	struct UClass* ItemClass; // 0x250(0x08)
	struct UClass* *f4307740b2; // 0x258(0x08)
	struct U*72bbeaca72* *8617b006ca; // 0x260(0x08)
};

// ScriptStruct TslGame.*f0d57e2b68
// Size: 0x60 (Inherited: 0x00)
struct F*f0d57e2b68 {
	char *abd6ace604 : 1; // 0x00(0x01)
	char bPointSellable : 1; // 0x00(0x01)
	char *8c9ce91ebc : 1; // 0x00(0x01)
	char bPointRefundable : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *8436f3328d; // 0x08(0x10)
	enum class ELobbyItemTier Tier; // 0x18(0x01)
	enum class ELobbyItemCategory Category; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FText Description; // 0x20(0x18)
	bool *cebfd35bee; // 0x38(0x01)
	bool *3f179bfad9; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<enum class ELobbyItemPlatform> Platforms; // 0x40(0x10)
	float *7c0e5f855f; // 0x50(0x04)
	enum class ELobbyItemPointSellingType *2b47b29fe7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *4d64eb00e4; // 0x58(0x04)
	int32 *3308e19877; // 0x5c(0x04)
};

// ScriptStruct TslGame.*bbb2bddee4
// Size: 0x10 (Inherited: 0x00)
struct F*bbb2bddee4 {
	struct FName SupplyItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7581bdc0e3
// Size: 0x280 (Inherited: 0x268)
struct F*7581bdc0e3 : F*a1c66df06e {
	enum class ECustomPartType CustomPart; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<struct FName> PartTags; // 0x270(0x10)
};

// ScriptStruct TslGame.*6d480433d2
// Size: 0x280 (Inherited: 0x280)
struct F*6d480433d2 : F*2de131aea7 {
};

// ScriptStruct TslGame.*2de131aea7
// Size: 0x280 (Inherited: 0x268)
struct F*2de131aea7 : F*a1c66df06e {
	bool bAutoAction; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct F*d6c4a1916f SkinParam; // 0x270(0x10)
};

// ScriptStruct TslGame.*d6c4a1916f
// Size: 0x10 (Inherited: 0x00)
struct F*d6c4a1916f {
	enum class ESkinCategory SkinCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName SkinName; // 0x08(0x08)
};

// ScriptStruct TslGame.ItemTableRowVehiclePart
// Size: 0x310 (Inherited: 0x280)
struct FItemTableRowVehiclePart : F*7581bdc0e3 {
	enum class EVehiclePartType VehiclePart; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct UMaterialInterface*> Materials; // 0x288(0x10)
	struct TMap<int32, struct UMaterialInterface*> OverrideDestroyedMaterial; // 0x298(0x50)
	struct USkeletalMesh* SkeletalMesh; // 0x2e8(0x20)
	int32 WheelSize; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
};

// ScriptStruct TslGame.*365b1e1bd1
// Size: 0x38 (Inherited: 0x00)
struct F*365b1e1bd1 {
	float *5ed665b3ab; // 0x00(0x04)
	float *001eda69b4; // 0x04(0x04)
	int32 *d3e87e3649; // 0x08(0x04)
	float *dad55b424c; // 0x0c(0x04)
	float *761fdad438; // 0x10(0x04)
	float *f5e6d99a69; // 0x14(0x04)
	int32 *7d1b3e666b; // 0x18(0x04)
	float *e7ee5d2969; // 0x1c(0x04)
	struct TArray<struct F*b27d5da390> *8f9b5dfed0; // 0x20(0x10)
	bool *1011c39401; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *bb052caf60; // 0x34(0x04)
};

// ScriptStruct TslGame.*b27d5da390
// Size: 0x30 (Inherited: 0x00)
struct F*b27d5da390 {
	struct FString MapName; // 0x00(0x10)
	struct FString LocationName; // 0x10(0x10)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*e226f1874b
// Size: 0x10 (Inherited: 0x00)
struct F*e226f1874b {
	uint32 *995085df76; // 0x00(0x04)
	float *dad55b424c; // 0x04(0x04)
	float *c8062a17a6; // 0x08(0x04)
	bool *14dea6b160; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*f449e91fd9
// Size: 0x08 (Inherited: 0x00)
struct F*f449e91fd9 {
	float *5ed665b3ab; // 0x00(0x04)
	float *526ba4a1bb; // 0x04(0x04)
};

// ScriptStruct TslGame.*b0d443de22
// Size: 0x18 (Inherited: 0x08)
struct F*b0d443de22 : FTableRowBase {
	struct UStaticMesh* OldMesh; // 0x08(0x08)
	struct UStaticMesh* NewMesh; // 0x10(0x08)
};

// ScriptStruct TslGame.*fb22a719a3
// Size: 0x10 (Inherited: 0x08)
struct F*fb22a719a3 : FTableRowBase {
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct TslGame.*bb1929ad43
// Size: 0x30 (Inherited: 0x08)
struct F*bb1929ad43 : FTableRowBase {
	enum class *1d65b135dd DetailMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct UStaticMesh*> MeshesToOverride; // 0x10(0x10)
	struct TArray<struct UMaterialInterface*> DecalMaterialsToOverride; // 0x20(0x10)
};

// ScriptStruct TslGame.*f6c3ee1bfe
// Size: 0x10 (Inherited: 0x08)
struct F*f6c3ee1bfe : FTableRowBase {
	struct UClass* BPClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*234d7048ae
// Size: 0x70 (Inherited: 0x08)
struct F*234d7048ae : FTableRowBase {
	struct FStringAssetReference *f5dc1f7192; // 0x08(0x10)
	struct FStringAssetReference *b9d4f30bde; // 0x18(0x10)
	struct FStringAssetReference *0e1998d21a; // 0x28(0x10)
	struct FStringAssetReference *94f6021309; // 0x38(0x10)
	struct FStringAssetReference *396111ec6c; // 0x48(0x10)
	struct FStringAssetReference *1fd26d9d1d; // 0x58(0x10)
	float Ratio; // 0x68(0x04)
	bool *5c30f5c1b4; // 0x6c(0x01)
	bool *e72152e49f; // 0x6d(0x01)
	bool *f01f3d1e92; // 0x6e(0x01)
	bool *4b4141b8c1; // 0x6f(0x01)
};

// ScriptStruct TslGame.*e25ec3e091
// Size: 0x18 (Inherited: 0x08)
struct F*e25ec3e091 : FTableRowBase {
	struct FVector BeachPointLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*dc731762c0
// Size: 0x18 (Inherited: 0x08)
struct F*dc731762c0 : FTableRowBase {
	int32 LocationX; // 0x08(0x04)
	int32 LocationY; // 0x0c(0x04)
	int32 LocationZ; // 0x10(0x04)
	int32 SafeScore; // 0x14(0x04)
};

// ScriptStruct TslGame.*29c7b99f15
// Size: 0x60 (Inherited: 0x08)
struct F*29c7b99f15 : FTableRowBase {
	float NormalArea; // 0x08(0x04)
	char pad_C[0x54]; // 0x0c(0x54)
};

// ScriptStruct TslGame.*7b53f9508b
// Size: 0xc8 (Inherited: 0x60)
struct F*7b53f9508b : F*29c7b99f15 {
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

// ScriptStruct TslGame.*8b7e21e7c4
// Size: 0x70 (Inherited: 0x60)
struct F*8b7e21e7c4 : F*29c7b99f15 {
	float Level_A; // 0x60(0x04)
	float Level_B; // 0x64(0x04)
	float Level_C; // 0x68(0x04)
	float Level_D; // 0x6c(0x04)
};

// ScriptStruct TslGame.*8e2da13ff3
// Size: 0xd8 (Inherited: 0x60)
struct F*8e2da13ff3 : F*29c7b99f15 {
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

// ScriptStruct TslGame.*96c8151f40
// Size: 0xa0 (Inherited: 0x60)
struct F*96c8151f40 : F*29c7b99f15 {
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

// ScriptStruct TslGame.*ed9833a8bc
// Size: 0x78 (Inherited: 0x60)
struct F*ed9833a8bc : F*29c7b99f15 {
	float CoalYards; // 0x60(0x04)
	float Docks; // 0x64(0x04)
	float IndustrialPark; // 0x68(0x04)
	float RailYard; // 0x6c(0x04)
	float Steelmill; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*03df37cf76
// Size: 0xb0 (Inherited: 0x60)
struct F*03df37cf76 : F*29c7b99f15 {
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

// ScriptStruct TslGame.*4eae46b2dd
// Size: 0xb0 (Inherited: 0x60)
struct F*4eae46b2dd : F*29c7b99f15 {
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

// ScriptStruct TslGame.*b5f828f067
// Size: 0x78 (Inherited: 0x60)
struct F*b5f828f067 : F*29c7b99f15 {
	float AlHabar; // 0x60(0x04)
	float AlHayik; // 0x64(0x04)
	float Bahrsahir; // 0x68(0x04)
	float Bashara; // 0x6c(0x04)
	float Hadiqanemo; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*0aa780d955
// Size: 0xa8 (Inherited: 0x60)
struct F*0aa780d955 : F*29c7b99f15 {
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

// ScriptStruct TslGame.*e5ecf0d3f5
// Size: 0x20 (Inherited: 0x08)
struct F*e5ecf0d3f5 : FTableRowBase {
	struct FText *23ed31e727; // 0x08(0x18)
};

// ScriptStruct TslGame.*cda1b988ad
// Size: 0x30 (Inherited: 0x00)
struct F*cda1b988ad {
	bool bUseMateriaSlotIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32> MaterialSlotIndex; // 0x08(0x10)
	bool bUseMaterialSlotName; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> MaterialSlotName; // 0x20(0x10)
};

// ScriptStruct TslGame.*eac5bbf899
// Size: 0x48 (Inherited: 0x00)
struct F*eac5bbf899 {
	struct F*40776c7fc7 *40776c7fc7; // 0x00(0x40)
	struct UImage* *29d3a5a0d6; // 0x40(0x08)
};

// ScriptStruct TslGame.*40776c7fc7
// Size: 0x40 (Inherited: 0x00)
struct F*40776c7fc7 {
	struct FGuid IconGUID; // 0x00(0x10)
	struct FVector WorldLocation; // 0x10(0x0c)
	struct FRotator WorldRotation; // 0x1c(0x0c)
	enum class EAuxilaryIconType IconType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FLinearColor IconColor; // 0x2c(0x10)
	bool bIsVisible; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGame.*8708410b7d
// Size: 0x60 (Inherited: 0x00)
struct F*8708410b7d {
	struct FString *9afd9f5f18; // 0x00(0x10)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct TslGame.*b8d1a82639
// Size: 0x20 (Inherited: 0x00)
struct F*b8d1a82639 {
	struct FString *b2999207f2; // 0x00(0x10)
	struct FString *938dee0cf6; // 0x10(0x10)
};

// ScriptStruct TslGame.*cc4af03883
// Size: 0x28 (Inherited: 0x08)
struct F*cc4af03883 : FTableRowBase {
	enum class EAuxilaryIconType IconType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* IconTexture; // 0x10(0x08)
	struct UCurveFloat* IconRatioCurve; // 0x18(0x08)
	float MinimapIconRatio; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*2b02488afc
// Size: 0x28 (Inherited: 0x00)
struct F*2b02488afc {
	char pad_0[0x18]; // 0x00(0x18)
	struct UCameraShake* *bfcd97889e; // 0x18(0x08)
	struct UCameraShake* *7fce86d39b; // 0x20(0x08)
};

// ScriptStruct TslGame.*e43b2eeb30
// Size: 0x28 (Inherited: 0x00)
struct F*e43b2eeb30 {
	float *9acee7f92f; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *5fc05ac935; // 0x08(0x08)
	bool bShowTrunkMesh; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct F*5266cd2610> *78b137dfa0; // 0x18(0x10)
};

// ScriptStruct TslGame.*5266cd2610
// Size: 0x28 (Inherited: 0x00)
struct F*5266cd2610 {
	struct UStaticMesh* TrunkMesh; // 0x00(0x20)
	float MinCapacityPercent; // 0x20(0x04)
	float MaxCapacityPercent; // 0x24(0x04)
};

// ScriptStruct TslGame.*5e3a60b4b3
// Size: 0x30 (Inherited: 0x00)
struct F*5e3a60b4b3 {
	struct F*adeacc4aeb Stand; // 0x00(0x10)
	struct F*adeacc4aeb Crouch; // 0x10(0x10)
	struct F*adeacc4aeb Prone; // 0x20(0x10)
};

// ScriptStruct TslGame.*adeacc4aeb
// Size: 0x10 (Inherited: 0x00)
struct F*adeacc4aeb {
	float *7718a27d05; // 0x00(0x04)
	float *f32f47f6fa; // 0x04(0x04)
	float *16c74ccf4c; // 0x08(0x04)
	float *e6ae5d3db3; // 0x0c(0x04)
};

// ScriptStruct TslGame.*abfb9710a9
// Size: 0x0c (Inherited: 0x00)
struct F*abfb9710a9 {
	struct FVector Acceleration; // 0x00(0x0c)
};

// ScriptStruct TslGame.*ac130189e9
// Size: 0x20 (Inherited: 0x00)
struct F*ac130189e9 {
	struct UBlendSpace1D* BlendSpaceFPP; // 0x00(0x08)
	struct UBlendSpace1D* BlendSpaceTPP; // 0x08(0x08)
	struct FInputBlendPose BlendSettings; // 0x10(0x10)
};

// ScriptStruct TslGame.*1042ed0e72
// Size: 0x10 (Inherited: 0x00)
struct F*1042ed0e72 {
	struct TArray<struct F*d3b77cdb53> IdleAnimations; // 0x00(0x10)
};

// ScriptStruct TslGame.*d3b77cdb53
// Size: 0x20 (Inherited: 0x00)
struct F*d3b77cdb53 {
	struct UAnimSequence* AnimAsset; // 0x00(0x08)
	struct FInt32Range LoopingCounter; // 0x08(0x10)
	float ChanceToPlay; // 0x18(0x04)
	float BlendTime; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a0f386f9e9
// Size: 0x10 (Inherited: 0x00)
struct F*a0f386f9e9 {
	struct FName Name; // 0x00(0x08)
	bool bIsAxis; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scale; // 0x0c(0x04)
};

// ScriptStruct TslGame.*83728ea3b3
// Size: 0x10 (Inherited: 0x00)
struct F*83728ea3b3 {
	struct FName Name; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*18e5f91a4c
// Size: 0x10 (Inherited: 0x00)
struct F*18e5f91a4c {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Health; // 0x04(0x04)
	int32 Count; // 0x08(0x04)
	bool bUseRandomizedWeaponKits; // 0x0c(0x01)
	bool bUseUniqueWeaponKits; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*466c67d4af
// Size: 0x10 (Inherited: 0x00)
struct F*466c67d4af {
	struct FName *1b42b5b855; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*049cbcde24
// Size: 0x20 (Inherited: 0x00)
struct F*049cbcde24 {
	enum class EAutoSpectatePriority *8cfaba266a; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 TeamId; // 0x04(0x04)
	struct FString *ca29fb3595; // 0x08(0x10)
	float *c20fb150ea; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*53b37b2644
// Size: 0x50 (Inherited: 0x00)
struct F*53b37b2644 {
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

// ScriptStruct TslGame.*c144ac6f32
// Size: 0x18 (Inherited: 0x00)
struct F*c144ac6f32 {
	struct FString UniqueId; // 0x00(0x10)
	bool *4a027d74d5; // 0x10(0x01)
	bool *9e2865c95e; // 0x11(0x01)
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

// ScriptStruct TslGame.*ebf81122f3
// Size: 0x20 (Inherited: 0x00)
struct F*ebf81122f3 {
	struct FString Key; // 0x00(0x10)
	struct TArray<struct F*1d4622f94b> Logs; // 0x10(0x10)
};

// ScriptStruct TslGame.*1d4622f94b
// Size: 0x20 (Inherited: 0x00)
struct F*1d4622f94b {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.BodyTypeDef
// Size: 0x08 (Inherited: 0x00)
struct FBodyTypeDef {
	int32 *9d3a79babb; // 0x00(0x04)
	int32 *7cf108f4eb; // 0x04(0x04)
};

// ScriptStruct TslGame.*235e078bd7
// Size: 0x98 (Inherited: 0x00)
struct F*235e078bd7 {
	struct FString PlayerName; // 0x00(0x10)
	uint32 *5ec86ea342; // 0x10(0x04)
	int32 TeamId; // 0x14(0x04)
	bool *c349a99c80; // 0x18(0x01)
	bool Gender; // 0x19(0x01)
	bool *bf4d496606; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct TArray<int32> *a717cce3f2; // 0x20(0x10)
	struct TArray<int32> *b7f41e9ac0; // 0x30(0x10)
	struct TArray<int32> *091b1680e5; // 0x40(0x10)
	struct FString Emotes; // 0x50(0x10)
	struct FName *825dcf1887; // 0x60(0x08)
	struct FName *932157dc8a; // 0x68(0x08)
	float *0de7557b69; // 0x70(0x04)
	float *749a6c7995; // 0x74(0x04)
	float *761f119416; // 0x78(0x04)
	float *5d9a7dc3a3; // 0x7c(0x04)
	bool *dd0be51e44; // 0x80(0x01)
	bool *03009273a8; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FString *819b9aa002; // 0x88(0x10)
};

// ScriptStruct TslGame.*7969e476c5
// Size: 0x10 (Inherited: 0x00)
struct F*7969e476c5 {
	struct FVector Location; // 0x00(0x0c)
	bool *41f4e26505; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*23be8024ca
// Size: 0x10 (Inherited: 0x00)
struct F*23be8024ca {
	enum class EMatchStartType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* Class; // 0x08(0x08)
};

// ScriptStruct TslGame.*0db6f7eb46
// Size: 0x08 (Inherited: 0x00)
struct F*0db6f7eb46 {
	float *deb39b7c96; // 0x00(0x04)
	float *2671c53f4c; // 0x04(0x04)
};

// ScriptStruct TslGame.*d92b890de0
// Size: 0x24 (Inherited: 0x00)
struct F*d92b890de0 {
	enum class EInventoryRadioMessageType *4cf8499885; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *f9256717b9; // 0x04(0x04)
	int32 *8cb0625e4a; // 0x08(0x04)
	bool *b75fd4485a; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32 *f14d78097c; // 0x10(0x04)
	int32 *131a07d173; // 0x14(0x04)
	struct FVector_NetQuantize *694a654fc6; // 0x18(0x0c)
};

// ScriptStruct TslGame.*8498e173ee
// Size: 0x30 (Inherited: 0x00)
struct F*8498e173ee {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *9142193483; // 0x08(0x10)
	struct TArray<struct FText> *fb694ba47a; // 0x18(0x10)
	int32 *1afbe0a9d9; // 0x28(0x04)
	enum class ERadioMessageHighlightType *7f0ae83bc3; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct TslGame.*3af0cd98b6
// Size: 0x38 (Inherited: 0x28)
struct F*3af0cd98b6 : F*bf4807f7c0 {
	struct TArray<struct FName> SkinnableTagList; // 0x28(0x10)
};

// ScriptStruct TslGame.*bf4807f7c0
// Size: 0x28 (Inherited: 0x00)
struct F*bf4807f7c0 {
	struct FText ItemName; // 0x00(0x18)
	struct FString BlueprintId; // 0x18(0x10)
};

// ScriptStruct TslGame.*3112d14a53
// Size: 0x38 (Inherited: 0x28)
struct F*3112d14a53 : F*bf4807f7c0 {
	enum class EWeaponClass WeaponClassEnum; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName SkinTag; // 0x30(0x08)
};

// ScriptStruct TslGame.*5fe4508712
// Size: 0x10 (Inherited: 0x00)
struct F*5fe4508712 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.RankingInfo
// Size: 0x18 (Inherited: 0x00)
struct FRankingInfo {
	int32 TeamId; // 0x00(0x04)
	int32 *fc57d8e80b; // 0x04(0x04)
	int32 *3931f1ffbf; // 0x08(0x04)
	int32 Score; // 0x0c(0x04)
	int32 Order; // 0x10(0x04)
	bool *b4d9018262; // 0x14(0x01)
	bool *4fa09d3d1d; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*8203a30396
// Size: 0x08 (Inherited: 0x00)
struct F*8203a30396 {
	struct FName ItemID; // 0x00(0x08)
};

// ScriptStruct TslGame.*dae3044c79
// Size: 0x10 (Inherited: 0x00)
struct F*dae3044c79 {
	struct FStringClassReference ObjectClass; // 0x00(0x10)
};

// ScriptStruct TslGame.*0c4cc416a4
// Size: 0x10 (Inherited: 0x00)
struct F*0c4cc416a4 {
	struct UTexture* Texture; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6e2ab747c1
// Size: 0x30 (Inherited: 0x00)
struct F*6e2ab747c1 {
	struct FKey Key; // 0x00(0x18)
	struct UTexture* KeyIcon; // 0x18(0x08)
	struct UTexture* KeyIcon_PS; // 0x20(0x08)
	float IconRatio; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*40dc0bf9c2
// Size: 0x08 (Inherited: 0x00)
struct F*40dc0bf9c2 {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
};

// ScriptStruct TslGame.*1447e3cede
// Size: 0x20 (Inherited: 0x00)
struct F*1447e3cede {
	struct FString ActorName; // 0x00(0x10)
	struct FVector *9f740570ea; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e9666be81f
// Size: 0x20 (Inherited: 0x00)
struct F*e9666be81f {
	struct FString MapName; // 0x00(0x10)
	struct TArray<struct FSavedObPos> SavedObPos; // 0x10(0x10)
};

// ScriptStruct TslGame.SavedObPos
// Size: 0x18 (Inherited: 0x00)
struct FSavedObPos {
	struct FVector Loc; // 0x00(0x0c)
	struct FRotator Rot; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*8db08346aa
// Size: 0x58 (Inherited: 0x00)
struct F*8db08346aa {
	struct TArray<enum class EGameModeType> GameModeTypeList; // 0x00(0x10)
	struct FString WidgetName; // 0x10(0x10)
	bool bRemoveWidget; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct F*4d5091d52e NewWidgetConfig; // 0x28(0x30)
};

// ScriptStruct TslGame.*4d5091d52e
// Size: 0x30 (Inherited: 0x00)
struct F*4d5091d52e {
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

// ScriptStruct TslGame.*0e0f1c9b84
// Size: 0x20 (Inherited: 0x00)
struct F*0e0f1c9b84 {
	struct FString WidgetName; // 0x00(0x10)
	struct TArray<struct F*7fdcc36c56> AlternativeWidgets; // 0x10(0x10)
};

// ScriptStruct TslGame.*7fdcc36c56
// Size: 0x30 (Inherited: 0x00)
struct F*7fdcc36c56 {
	struct FName GameModeAlias; // 0x00(0x08)
	struct FStringAssetReference Reference; // 0x08(0x10)
	struct TArray<struct FString> HideWidgetList; // 0x18(0x10)
	int32 ZOrderOverride; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*f123c875f4
// Size: 0x40 (Inherited: 0x00)
struct F*f123c875f4 {
	struct FString WidgetName; // 0x00(0x10)
	struct F*4d5091d52e WidgetConfig; // 0x10(0x30)
};

// ScriptStruct TslGame.*413a4e8df5
// Size: 0x18 (Inherited: 0x00)
struct F*413a4e8df5 {
	struct FString *4b6a5f09a7; // 0x00(0x10)
	int32 *17e6d0748c; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.TslUserProfile
// Size: 0x18 (Inherited: 0x00)
struct FTslUserProfile {
	struct FString PlayerNetId; // 0x00(0x10)
	float TotalPlayTime_Sec; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*5d32b51c5f
// Size: 0x0c (Inherited: 0x00)
struct F*5d32b51c5f {
	char pad_0[0x8]; // 0x00(0x08)
	int32 Counter; // 0x08(0x04)
};

// ScriptStruct TslGame.*cc76dc0eed
// Size: 0x08 (Inherited: 0x00)
struct F*cc76dc0eed {
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

// ScriptStruct TslGame.*9758578d2c
// Size: 0x14 (Inherited: 0x00)
struct F*9758578d2c {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 AircraftCount; // 0x04(0x04)
	float AircraftCooldown; // 0x08(0x04)
	int32 InvalidBeforePhase; // 0x0c(0x04)
	int32 InvalidAfterPhase; // 0x10(0x04)
};

// ScriptStruct TslGame.*516301bedc
// Size: 0x24 (Inherited: 0x00)
struct F*516301bedc {
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

// ScriptStruct TslGame.*81055234d7
// Size: 0x40 (Inherited: 0x00)
struct F*81055234d7 {
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

// ScriptStruct TslGame.*2910b8c0b8
// Size: 0x1c (Inherited: 0x00)
struct F*2910b8c0b8 {
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

// ScriptStruct TslGame.*8e6b74aa7a
// Size: 0x08 (Inherited: 0x00)
struct F*8e6b74aa7a {
	float *3523de50b8; // 0x00(0x04)
	float *0602f1670b; // 0x04(0x04)
};

// ScriptStruct TslGame.*a55115d518
// Size: 0x10 (Inherited: 0x00)
struct F*a55115d518 {
	float *3523de50b8; // 0x00(0x04)
	float *0602f1670b; // 0x04(0x04)
	float *86d2e32043; // 0x08(0x04)
	float *e2157dcbb1; // 0x0c(0x04)
};

// ScriptStruct TslGame.*a5f5289dcf
// Size: 0x18 (Inherited: 0x00)
struct F*a5f5289dcf {
	float *5606b0f96e; // 0x00(0x04)
	float *dbfc9b5807; // 0x04(0x04)
	float *e423e2dc50; // 0x08(0x04)
	float *34ffad10ef; // 0x0c(0x04)
	float *86d2e32043; // 0x10(0x04)
	float *ff7e16e11c; // 0x14(0x04)
};

// ScriptStruct TslGame.*038dbd0d2b
// Size: 0x14 (Inherited: 0x00)
struct F*038dbd0d2b {
	bool *1e9ce7c516; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *384609cd09; // 0x04(0x04)
	float *524acf7d82; // 0x08(0x04)
	float *79d3a89c24; // 0x0c(0x04)
	float *23e513c969; // 0x10(0x04)
};

// ScriptStruct TslGame.*ef78d3ed60
// Size: 0x0c (Inherited: 0x00)
struct F*ef78d3ed60 {
	float *187f29defd; // 0x00(0x04)
	float BpBoost; // 0x04(0x04)
	float *fd54b7b0e7; // 0x08(0x04)
};

// ScriptStruct TslGame.*6aac9ca938
// Size: 0x10 (Inherited: 0x00)
struct F*6aac9ca938 {
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

// ScriptStruct TslGame.*e01c8f4b48
// Size: 0x58 (Inherited: 0x08)
struct F*e01c8f4b48 : FTableRowBase {
	struct TMap<struct FName, struct F*ad7fa3d182> TargetStateData; // 0x08(0x50)
};

// ScriptStruct TslGame.*ad7fa3d182
// Size: 0x20 (Inherited: 0x00)
struct F*ad7fa3d182 {
	struct UAnimationAsset* StateAnimation; // 0x00(0x20)
};

// ScriptStruct TslGame.*f4b2e586f2
// Size: 0xa8 (Inherited: 0x00)
struct F*f4b2e586f2 {
	enum class ETslOutGameCloudRequestType *fbf93baeb1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *608d9ac5a8; // 0x08(0x18)
	float *4712a364c2; // 0x20(0x04)
	float *de236aa8a9; // 0x24(0x04)
	struct FText *55b079ccb6; // 0x28(0x18)
	struct FText *c1542c4373; // 0x40(0x18)
	struct TMap<enum class ETslOutGameCloudRequestErrorType, struct FText> *eaf05d84be; // 0x58(0x50)
};

// ScriptStruct TslGame.*634879c493
// Size: 0x10 (Inherited: 0x00)
struct F*634879c493 {
	struct FName *625c713d1f; // 0x00(0x08)
	bool bEnable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*1160a08b98
// Size: 0x20 (Inherited: 0x00)
struct F*1160a08b98 {
	struct FString AccountId; // 0x00(0x10)
	struct FString LoadingState; // 0x10(0x10)
};

// ScriptStruct TslGame.*f0ae7594c1
// Size: 0x18 (Inherited: 0x00)
struct F*f0ae7594c1 {
	struct FString AccountId; // 0x00(0x10)
	float *2a0bbffeb1; // 0x10(0x04)
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

// ScriptStruct TslGame.*afb85e883a
// Size: 0x50 (Inherited: 0x00)
struct F*afb85e883a {
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

// ScriptStruct TslGame.*71144fac90
// Size: 0x18 (Inherited: 0x00)
struct F*71144fac90 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*620a0f79b9
// Size: 0x20 (Inherited: 0x00)
struct F*620a0f79b9 {
	enum class EReportDetailCauseType ReportDetailCauseType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGame.*5c60d5a48b
// Size: 0x10 (Inherited: 0x00)
struct F*5c60d5a48b {
	int32 PlayerCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslPlayerStart* PlayerStart; // 0x08(0x08)
};

// ScriptStruct TslGame.*1bed4b2ffe
// Size: 0x0c (Inherited: 0x00)
struct F*1bed4b2ffe {
	int32 TeamId; // 0x00(0x04)
	int32 SquadIndex; // 0x04(0x04)
	int32 *8a96d40a7f; // 0x08(0x04)
};

// ScriptStruct TslGame.*499b74efa7
// Size: 0x30 (Inherited: 0x00)
struct F*499b74efa7 {
	struct ATslPlayerState* Commander; // 0x00(0x08)
	struct F*f3c2381e25 *f3c2381e25; // 0x08(0x10)
	struct ATslPlatoonFireSupportController* *4fa298752c; // 0x18(0x08)
	struct U*2cc0fa2e76* *586ae28852; // 0x20(0x08)
	struct U*2cc0fa2e76* *6d235d4823; // 0x28(0x08)
};

// ScriptStruct TslGame.*747577732c
// Size: 0x18 (Inherited: 0x00)
struct F*747577732c {
	int32 TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATeam*> Members; // 0x08(0x10)
};

// ScriptStruct TslGame.*bf2925a782
// Size: 0x18 (Inherited: 0x00)
struct F*bf2925a782 {
	struct AActor* SpottedActor; // 0x00(0x08)
	float SpottedStartTime; // 0x08(0x04)
	float SpottedEndTime; // 0x0c(0x04)
	bool SpottedDuringThisCycle; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*13a4d65e42
// Size: 0x14 (Inherited: 0x00)
struct F*13a4d65e42 {
	bool *25acf850ff; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *4787db877e; // 0x04(0x0c)
	bool *0b6086032c; // 0x10(0x01)
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
	int8 *3c715cb8b4; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct TArray<int8> *92a0e0018a; // 0x58(0x10)
};

// ScriptStruct TslGame.*517fed17b6
// Size: 0x20 (Inherited: 0x00)
struct F*517fed17b6 {
	struct AActor* SpottedActor; // 0x00(0x08)
	float SpottingTime; // 0x08(0x04)
	struct FGuid MarkerID; // 0x0c(0x10)
	int8 *3c715cb8b4; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*b99e938ca3
// Size: 0x08 (Inherited: 0x00)
struct F*b99e938ca3 {
	float Z; // 0x00(0x04)
	enum class ENearClippingLevel Level; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*447c892cd2
// Size: 0x08 (Inherited: 0x00)
struct F*447c892cd2 {
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

// ScriptStruct TslGame.*d7759ba102
// Size: 0x0c (Inherited: 0x00)
struct F*d7759ba102 {
	bool bRandomSpawn; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RandomSpawnRadius; // 0x04(0x04)
	float *6c85ebd1d3; // 0x08(0x04)
};

// ScriptStruct TslGame.*bf1971a5a8
// Size: 0x10 (Inherited: 0x00)
struct F*bf1971a5a8 {
	int32 *4142f71c1c; // 0x00(0x04)
	int32 *2462520921; // 0x04(0x04)
	struct ADroppedItem* *9e13a6e936; // 0x08(0x08)
};

// ScriptStruct TslGame.*a2e63a8aad
// Size: 0x10 (Inherited: 0x00)
struct F*a2e63a8aad {
	struct FName *849fe355a8; // 0x00(0x08)
	int32 *8d6e22b600; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*00f5b51050
// Size: 0x10 (Inherited: 0x00)
struct F*00f5b51050 {
	enum class EConstraintSlotType ConstraintSlotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*b5f630b2a1 EquipPosition; // 0x04(0x08)
	enum class EEquipableItemSoundType OverrideSoundType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*b5f630b2a1
// Size: 0x08 (Inherited: 0x00)
struct F*b5f630b2a1 {
	enum class EEquipSlotID SlotID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Index; // 0x04(0x04)
};

// ScriptStruct TslGame.*df8e31df21
// Size: 0x48 (Inherited: 0x00)
struct F*df8e31df21 {
	struct FRotator *e51c23c590; // 0x00(0x0c)
	struct FVector Location; // 0x0c(0x0c)
	struct FVector Direction; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct U*5fc898fe2e* ThrowableConfig; // 0x28(0x08)
	int32 *8f38c00033; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct ATslCharacter* *d28fa1a0a3; // 0x38(0x08)
	struct UPrimitiveComponent* *0bbc8e06ca; // 0x40(0x08)
};

// ScriptStruct TslGame.*e97b43c03f
// Size: 0x190 (Inherited: 0x00)
struct F*e97b43c03f {
	struct TMap<struct UClass*, struct F*a62aa56606> SlotOffset_Primary_PerWeapon; // 0x00(0x50)
	struct TMap<struct UClass*, struct F*a62aa56606> SlotOffset_Secondary_PerWeapon; // 0x50(0x50)
	struct TMap<struct UClass*, struct F*a62aa56606> SlotOffset_SideArm_PerWeapon; // 0xa0(0x50)
	struct TMap<struct UClass*, struct F*a62aa56606> SlotOffset_Melee_PerWeapon; // 0xf0(0x50)
	struct TMap<struct UClass*, struct F*a62aa56606> SlotOffset_Thrown_PerWeapon; // 0x140(0x50)
};

// ScriptStruct TslGame.*a62aa56606
// Size: 0x18 (Inherited: 0x00)
struct F*a62aa56606 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*b29b685873
// Size: 0x78 (Inherited: 0x00)
struct F*b29b685873 {
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

// ScriptStruct TslGame.*bbe21cb6cf
// Size: 0x08 (Inherited: 0x08)
struct F*bbe21cb6cf : FTableRowBase {
};

// ScriptStruct TslGame.*636730a598
// Size: 0xd8 (Inherited: 0x00)
struct F*636730a598 {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CastAnimPlayRate; // 0x04(0x04)
	struct F*3306e288f6 CustomCastAnim; // 0x08(0xc0)
	float CustomCastTimeRemaining; // 0xc8(0x04)
	bool IsPermanentCasting; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float CastBlendingTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct TslGame.*d440a61170
// Size: 0xb8 (Inherited: 0xb0)
struct F*d440a61170 : F*73b9fa8895 {
	bool *fedc3d8973; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct TslGame.*fc433bc5da
// Size: 0x08 (Inherited: 0x00)
struct F*fc433bc5da {
	float *dd479dc404; // 0x00(0x04)
	enum class EDamageVictimActorType *f90d21faf2; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*b21adc33b9
// Size: 0x140 (Inherited: 0x00)
struct F*b21adc33b9 {
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

// ScriptStruct TslGame.*cabbf63eea
// Size: 0x10 (Inherited: 0x00)
struct F*cabbf63eea {
	struct UAkAudioEvent* *cad411d11f; // 0x00(0x08)
	struct UAkAudioEvent* *a89ce6ef35; // 0x08(0x08)
};

// ScriptStruct TslGame.*17c620af76
// Size: 0x10 (Inherited: 0x08)
struct F*17c620af76 : FTableRowBase {
	struct FName *849fe355a8; // 0x08(0x08)
};

// ScriptStruct TslGame.*c152b563e5
// Size: 0x70 (Inherited: 0x00)
struct F*c152b563e5 {
	struct ATslPlayerState* *22b27d3031; // 0x00(0x08)
	struct UClass* *394d1cf118; // 0x08(0x08)
	struct F*1b7d567481 *1b7d567481; // 0x10(0x20)
	struct FDateTime *ade8c2af06; // 0x30(0x08)
	enum class EDamageReason *7c177e982d; // 0x38(0x01)
	enum class EDamageTypeCategory *751bf465f7; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FName *9e15385c7d; // 0x40(0x08)
	struct TArray<struct FString> *54f0dd7179; // 0x48(0x10)
	float Distance; // 0x58(0x04)
	bool *e6613eed7a; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct ATslPlayerState*> *a37d8498a3; // 0x60(0x10)
};

// ScriptStruct TslGame.*1b7d567481
// Size: 0x20 (Inherited: 0x00)
struct F*1b7d567481 {
	struct FName *849fe355a8; // 0x00(0x08)
	struct F*d6c4a1916f SkinParam; // 0x08(0x10)
	int32 *8d6e22b600; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*19321bed3b
// Size: 0x120 (Inherited: 0xf8)
struct F*19321bed3b : F*4c407c6100 {
	struct FStringClassReference ReplaceVehicle; // 0xf8(0x10)
	enum class EVehicleSkinCategory VehicleSkinCategory; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct F*c2e5d273fd> DefaultPartSkinList; // 0x110(0x10)
};

// ScriptStruct TslGame.*4c407c6100
// Size: 0xf8 (Inherited: 0x08)
struct F*4c407c6100 : FTableRowBase {
	struct TMap<struct FName, struct F*398357c358> SkinnedMeshSet; // 0x08(0x50)
	struct TMap<struct FName, struct F*3949143c7a> SkinnedMaterialSet; // 0x58(0x50)
	struct TArray<struct FName> SkinnableTagList; // 0xa8(0x10)
	struct FRotator DefaultViewModeRotation; // 0xb8(0x0c)
	struct FRotator PivotModifierRotation; // 0xc4(0x0c)
	struct FVector PCViewModeLocation; // 0xd0(0x0c)
	struct FVector ConsoleViewModeLocation; // 0xdc(0x0c)
	struct FVector RecommendArrowOffset; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct TslGame.*398357c358
// Size: 0x28 (Inherited: 0x00)
struct F*398357c358 {
	enum class ESkinMeshType MeshType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* MeshAsset; // 0x08(0x20)
};

// ScriptStruct TslGame.*c2e5d273fd
// Size: 0x10 (Inherited: 0x00)
struct F*c2e5d273fd {
	enum class EVehiclePartType *316749e291; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *7ccc2b8c51; // 0x08(0x08)
};

// ScriptStruct TslGame.*87f7d663dc
// Size: 0x178 (Inherited: 0x178)
struct F*87f7d663dc : F*729fde5682 {
};

// ScriptStruct TslGame.*729fde5682
// Size: 0x178 (Inherited: 0xf8)
struct F*729fde5682 : F*4c407c6100 {
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0xf8(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x128(0x30)
	struct F*6ecb21ef8f CustomizableObjectSkin; // 0x158(0x20)
};

// ScriptStruct TslGame.*09ed96dd10
// Size: 0x178 (Inherited: 0x178)
struct F*09ed96dd10 : F*729fde5682 {
};

// ScriptStruct TslGame.*7c45e9e6c0
// Size: 0x178 (Inherited: 0x178)
struct F*7c45e9e6c0 : F*729fde5682 {
};

// ScriptStruct TslGame.*c8f65cb059
// Size: 0x178 (Inherited: 0x178)
struct F*c8f65cb059 : F*729fde5682 {
};

// ScriptStruct TslGame.*0b3569f5af
// Size: 0x170 (Inherited: 0x170)
struct F*0b3569f5af : F*8106bb792c {
};

// ScriptStruct TslGame.*8106bb792c
// Size: 0x170 (Inherited: 0xf8)
struct F*8106bb792c : F*4c407c6100 {
	char bStatTrak : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FStringAssetReference StatTrakActorClass; // 0x100(0x10)
	struct UAnimMontage* *8982bebbd5; // 0x110(0x08)
	struct FName *5a89fa20e1; // 0x118(0x08)
	struct TMap<struct FName, struct FLinearColor> SkinnedColorSet; // 0x120(0x50)
};

// ScriptStruct TslGame.*6b514bdd05
// Size: 0x148 (Inherited: 0x08)
struct F*6b514bdd05 : FTableRowBase {
	struct UTexture2D* *9b2d3bbf82; // 0x08(0x20)
	struct UTexture2D* *8e1a18dae7; // 0x28(0x20)
	struct UTexture2D* *9c2f482f51; // 0x48(0x20)
	struct UTexture2D* *5345b9e9e1; // 0x68(0x20)
	struct FName *b4a655139a; // 0x88(0x08)
	struct FSlateColor *3f103274d6; // 0x90(0x28)
	struct FSlateColor *9f54a148fa; // 0xb8(0x28)
	struct UMaterial* *4312c0b107; // 0xe0(0x20)
	struct UTexture2D* *31dd9cfe4e; // 0x100(0x20)
	struct UTexture2D* *bed7ca3d6f; // 0x120(0x20)
	int32 *9e9d7a2153; // 0x140(0x04)
	int32 *c01de74c38; // 0x144(0x04)
};

// ScriptStruct TslGame.*12597d9a19
// Size: 0x170 (Inherited: 0x170)
struct F*12597d9a19 : F*8106bb792c {
};

// ScriptStruct TslGame.*1d3816a175
// Size: 0x08 (Inherited: 0x00)
struct F*1d3816a175 {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
};

// ScriptStruct TslGame.*7b2de5ec98
// Size: 0x10 (Inherited: 0x00)
struct F*7b2de5ec98 {
	struct FName TargetName; // 0x00(0x08)
	struct UMeshComponent* TargetMesh; // 0x08(0x08)
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
// Size: 0x248 (Inherited: 0x60)
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
	bool UsingXenuine; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	struct FWuGraphicSettings GraphicSettings; // 0x1f4(0x40)
	char pad_234[0x4]; // 0x234(0x04)
	struct FString CpuClock; // 0x238(0x10)
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

// ScriptStruct TslGame.*5cec0538f4
// Size: 0x78 (Inherited: 0x00)
struct F*5cec0538f4 {
	struct TArray<struct FString> *5d6ed25021; // 0x00(0x10)
	struct TArray<struct FString> *d701c55e8b; // 0x10(0x10)
	struct TArray<struct FString> *90a37aa8a1; // 0x20(0x10)
	struct TArray<bool> *0913f21669; // 0x30(0x10)
	struct TArray<struct FString> *c6e0536efb; // 0x40(0x10)
	struct TArray<float> *b7c3e07365; // 0x50(0x10)
	struct TArray<struct FString> *bcc8e328c5; // 0x60(0x10)
	bool *a1b214bedb; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGame.*4ea9b37791
// Size: 0x10 (Inherited: 0x00)
struct F*4ea9b37791 {
	struct UClass* *9d9fbc196c; // 0x00(0x08)
	float *29ceeaeca3; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*85a6c064ef
// Size: 0x410 (Inherited: 0x268)
struct F*85a6c064ef : F*a1c66df06e {
	enum class EEquipSlotID EquipSlotID; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float SpaceExtension; // 0x26c(0x04)
	float DamageReductionRate; // 0x270(0x04)
	float DurabilityMax; // 0x274(0x04)
	bool DestroyByDurability; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float Durability; // 0x27c(0x04)
	enum class *bd994bd8bc DurabilityConsumeType; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float DamageTransferRate; // 0x284(0x04)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0x288(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x2b8(0x30)
	struct F*6ecb21ef8f CustomizableObjectOriginalSkin; // 0x2e8(0x20)
	struct UAkAudioEvent* EquipedSoundAk; // 0x308(0x20)
	struct UAkAudioEvent* BlueBlockerEnterBlueZoneSoundAk; // 0x328(0x20)
	struct UAkAudioEvent* BlueBlockerExitBlueZoneSoundAk; // 0x348(0x20)
	struct UAkAudioEvent* BlueBlockerLowHealthSoundAk; // 0x368(0x20)
	struct UAkAudioEvent* BlueBlockerNoHealthSoundAk; // 0x388(0x20)
	float BlueBlockerLowHealthThreshold; // 0x3a8(0x04)
	enum class EEquipableItemSoundGroup SoundGroup; // 0x3ac(0x01)
	enum class EEquipableItemSoundType SoundType; // 0x3ad(0x01)
	bool bCanZombieEquip; // 0x3ae(0x01)
	enum class *b6c490cebb SlotOffsetType; // 0x3af(0x01)
	struct FName SkinTag; // 0x3b0(0x08)
	bool bDisableEquipmentSkinning; // 0x3b8(0x01)
	bool bDisableSkinMessages; // 0x3b9(0x01)
	bool bDisableMasteryMessages; // 0x3ba(0x01)
	enum class EEquipableItemLevelType EquipableItemLevelType; // 0x3bb(0x01)
	bool bIsUnequipable; // 0x3bc(0x01)
	enum class ESpecialEquipmentType SpecialEquipmentType; // 0x3bd(0x01)
	char pad_3BE[0x2]; // 0x3be(0x02)
	struct UTexture* HudDisplayEquipIcon; // 0x3c0(0x20)
	struct TArray<struct F*00f5b51050> ConstraintSlotConfigs; // 0x3e0(0x10)
	struct TArray<struct F*4ea9b37791> *950a1a7ac6; // 0x3f0(0x10)
	struct FName EquipmentOverridableFilter; // 0x400(0x08)
	bool bIsHoody; // 0x408(0x01)
	bool bIsGhillieSuit; // 0x409(0x01)
	bool bIsTacticalGear; // 0x40a(0x01)
	char pad_40B[0x5]; // 0x40b(0x05)
};

// ScriptStruct TslGame.*bac714d082
// Size: 0x08 (Inherited: 0x00)
struct F*bac714d082 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*f23ae1503c
// Size: 0xd0 (Inherited: 0x00)
struct F*f23ae1503c {
	struct FInt32Range RowRange; // 0x00(0x10)
	struct FFloatRange CapsuleRelativeRange; // 0x10(0x10)
	struct FFloatRange SpeedRange; // 0x20(0x10)
	struct FFloatRange ZSpeedRange; // 0x30(0x10)
	struct FInt32Range LedgeRange; // 0x40(0x10)
	struct FInt32Range FreeSpaceRange; // 0x50(0x10)
	enum class *a87143a9d6 IsVault; // 0x60(0x01)
	enum class *a87143a9d6 IsClimb; // 0x61(0x01)
	enum class *a87143a9d6 IsLedgeGrab; // 0x62(0x01)
	enum class *a87143a9d6 IsSlide; // 0x63(0x01)
	enum class *a87143a9d6 IsNarrow; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct F*a51920439e ExecConfig; // 0x68(0x68)
};

// ScriptStruct TslGame.*a51920439e
// Size: 0x68 (Inherited: 0x00)
struct F*a51920439e {
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

// ScriptStruct TslGame.*6c0060927a
// Size: 0x68 (Inherited: 0x00)
struct F*6c0060927a {
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

// ScriptStruct TslGame.*b86e3150f8
// Size: 0x40 (Inherited: 0x00)
struct F*b86e3150f8 {
	char pad_0[0x28]; // 0x00(0x28)
	bool *bf328b48a2[0x14]; // 0x28(0x14)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGame.*5ff16d229c
// Size: 0x18 (Inherited: 0x00)
struct F*5ff16d229c {
	int64 *832bc28a04; // 0x00(0x08)
	float *c34fc200db; // 0x08(0x04)
	float *265b8d3804; // 0x0c(0x04)
	enum class EAnimStance *869d12002c; // 0x10(0x01)
	bool *52a89e59af; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*5fa13090ab
// Size: 0x38 (Inherited: 0x00)
struct F*5fa13090ab {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*bbc6b86b38
// Size: 0x10 (Inherited: 0x00)
struct F*bbc6b86b38 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.StringArray
// Size: 0x10 (Inherited: 0x00)
struct FStringArray {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*3d66b0359d
// Size: 0x90 (Inherited: 0x38)
struct F*3d66b0359d : F*cc0756935b {
	struct UAkComponent* *1f342f2eed; // 0x38(0x08)
	struct TArray<struct F*89aff7ba82> *721624e530; // 0x40(0x10)
	struct TArray<struct F*8ed53df786> AnimNotifyList; // 0x50(0x10)
	struct TArray<struct F*8ed53df786> *302c95e841; // 0x60(0x10)
	char pad_70[0x20]; // 0x70(0x20)
};

// ScriptStruct TslGame.*cc0756935b
// Size: 0x38 (Inherited: 0x00)
struct F*cc0756935b {
	struct ATslCharacter* Character; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct TslGame.*8ed53df786
// Size: 0x30 (Inherited: 0x00)
struct F*8ed53df786 {
	struct UAnimSequenceBase* *aa9827f1c8; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct TslGame.*89aff7ba82
// Size: 0x40 (Inherited: 0x00)
struct F*89aff7ba82 {
	struct ATslWeapon* Weapon; // 0x00(0x08)
	struct UClass* *e75687fdc3; // 0x08(0x08)
	struct UAkComponent* AkComponent; // 0x10(0x08)
	char pad_18[0x28]; // 0x18(0x28)
};

// ScriptStruct TslGame.*a0672f966c
// Size: 0x50 (Inherited: 0x38)
struct F*a0672f966c : F*cc0756935b {
	struct ATslWeapon* *1b7a5f10e1; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct TslGame.*3ded0250ec
// Size: 0x2c (Inherited: 0x00)
struct F*3ded0250ec {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*044dad79a0
// Size: 0x10 (Inherited: 0x00)
struct F*044dad79a0 {
	struct TArray<bool> Data; // 0x00(0x10)
};

// ScriptStruct TslGame.*3715961a71
// Size: 0x30 (Inherited: 0x00)
struct F*3715961a71 {
	float *ea7b2ca04d; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector2D> *1c1e1cf931; // 0x08(0x10)
	float *c59d2b15e5; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FVector2D> *0eae11344f; // 0x20(0x10)
};

// ScriptStruct TslGame.*117f450886
// Size: 0x10 (Inherited: 0x00)
struct F*117f450886 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*b066711663
// Size: 0x308 (Inherited: 0x00)
struct F*b066711663 {
	char pad_0[0x308]; // 0x00(0x308)
};

// ScriptStruct TslGame.*06a6b1e3cc
// Size: 0x18 (Inherited: 0x00)
struct F*06a6b1e3cc {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*d741a650bc
// Size: 0x28 (Inherited: 0x00)
struct F*d741a650bc {
	struct TArray<struct F*a1331f7d4f> *60396bb964; // 0x00(0x10)
	struct TArray<uint16> *0d62ab211c; // 0x10(0x10)
	float *ca55e96ef9; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*a1331f7d4f
// Size: 0x06 (Inherited: 0x00)
struct F*a1331f7d4f {
	int16 *e83aa29db8; // 0x00(0x02)
	int16 *013b5df62f; // 0x02(0x02)
	uint16 *5e7c9efcc9; // 0x04(0x02)
};

// ScriptStruct TslGame.*80d1cd9fed
// Size: 0x10 (Inherited: 0x00)
struct F*80d1cd9fed {
	struct UObject* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*e80d139f92
// Size: 0x7b0 (Inherited: 0x00)
struct F*e80d139f92 {
	char pad_0[0x7b0]; // 0x00(0x7b0)
};

// ScriptStruct TslGame.*6ab057a435
// Size: 0x770 (Inherited: 0x00)
struct F*6ab057a435 {
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
	struct F*a51920439e ExecConfig; // 0x50(0x68)
	struct F*e61eb290b5 HitData; // 0xb8(0x6b8)
};

// ScriptStruct TslGame.*e61eb290b5
// Size: 0x6b8 (Inherited: 0x00)
struct F*e61eb290b5 {
	char pad_0[0x6b8]; // 0x00(0x6b8)
};

// ScriptStruct TslGame.*cf328248b6
// Size: 0x68 (Inherited: 0x00)
struct F*cf328248b6 {
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

// ScriptStruct TslGame.*3e312a66e0
// Size: 0x48 (Inherited: 0x00)
struct F*3e312a66e0 {
	uint16 *0de33ebb73; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Position; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	struct F*12bea5ae7a InputData; // 0x28(0x20)
};

// ScriptStruct TslGame.*12bea5ae7a
// Size: 0x20 (Inherited: 0x00)
struct F*12bea5ae7a {
	float *a366664773; // 0x00(0x04)
	float *190244b256; // 0x04(0x04)
	float *5f141ee9b8; // 0x08(0x04)
	float *e6cc3117a8; // 0x0c(0x04)
	bool *a613e703ae; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *3a0891e791; // 0x14(0x04)
	float *be97a36574; // 0x18(0x04)
	float *5cadcc6f27; // 0x1c(0x04)
};

// ScriptStruct TslGame.*cf4d97895b
// Size: 0x28 (Inherited: 0x00)
struct F*cf4d97895b {
	float *55d984ff7d; // 0x00(0x04)
	float *a24992fc9e; // 0x04(0x04)
	float *fd3d67b90d; // 0x08(0x04)
	struct FVector2D *dd2c5546a2; // 0x0c(0x08)
	struct FVector2D *efc0341d7e; // 0x14(0x08)
	float *33998a98ce; // 0x1c(0x04)
	float *a288bc0aa6; // 0x20(0x04)
	float *b47751652c; // 0x24(0x04)
};

// ScriptStruct TslGame.*f40fa83649
// Size: 0x24 (Inherited: 0x00)
struct F*f40fa83649 {
	struct FVector LocalOffset; // 0x00(0x0c)
	float *f38335dfe1; // 0x0c(0x04)
	struct F*c82f3cf38b *cb51dd863c; // 0x10(0x14)
};

// ScriptStruct TslGame.*c82f3cf38b
// Size: 0x14 (Inherited: 0x00)
struct F*c82f3cf38b {
	bool *d5e5d83d84; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct FVector Extent; // 0x08(0x0c)
};

// ScriptStruct TslGame.*29dbb4ed8b
// Size: 0x80 (Inherited: 0x00)
struct F*29dbb4ed8b {
	float *d539c41523; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* *fd6734d34e; // 0x08(0x08)
	struct UAkAudioEvent* *cbf01bf245; // 0x10(0x08)
	struct UAkAudioEvent* *052a19c324; // 0x18(0x08)
	struct UAkAudioEvent* *a60f8fca99; // 0x20(0x08)
	struct FName *ac51cc99cd; // 0x28(0x08)
	struct FName *31af448b40; // 0x30(0x08)
	struct FName *e868df85ae; // 0x38(0x08)
	struct FName *48196d02fd; // 0x40(0x08)
	struct FName *e31b0ccf20; // 0x48(0x08)
	struct FName *17b48bac8a; // 0x50(0x08)
	struct FName *1125299f45; // 0x58(0x08)
	float *9a3baa0dce; // 0x60(0x04)
	float *e474bc5cb7; // 0x64(0x04)
	float *81e797f3c9; // 0x68(0x04)
	float *f69116f3ae; // 0x6c(0x04)
	float *50219ba708; // 0x70(0x04)
	float *20be265724; // 0x74(0x04)
	float *87b8ffa60a; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*9ea842ed58
// Size: 0x48 (Inherited: 0x00)
struct F*9ea842ed58 {
	bool *b2985e0ecc; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D *2f9251b97d; // 0x04(0x08)
	struct FVector2D *ef86e1289d; // 0x0c(0x08)
	struct FVector2D *5b5cb3a7df; // 0x14(0x08)
	struct FVector2D *1686ba2354; // 0x1c(0x08)
	struct FVector2D *4aae9b41d1; // 0x24(0x08)
	struct FVector2D *0b4035bf8d; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UClass* *498af98d1d; // 0x38(0x08)
	float *35536d8a82; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*d9c0c76122
// Size: 0x18 (Inherited: 0x00)
struct F*d9c0c76122 {
	struct TArray<struct F*d42062913a> *991d427551; // 0x00(0x10)
	struct UAnimMontage* *eb34fe4a21; // 0x10(0x08)
};

// ScriptStruct TslGame.*d42062913a
// Size: 0x30 (Inherited: 0x00)
struct F*d42062913a {
	enum class *59474cca23 *9989052458; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *c5e819dc3f; // 0x04(0x04)
	struct UAnimMontage* *d5b952f7c4; // 0x08(0x08)
	struct UAnimMontage* *0da41fb5f9; // 0x10(0x08)
	bool *3d3daed96d; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *98f875ce44; // 0x1c(0x04)
	struct UAnimMontage* *53c7dcd046; // 0x20(0x08)
	struct FName *e833ae9d62; // 0x28(0x08)
};

// ScriptStruct TslGame.*6aee9a34a0
// Size: 0x50 (Inherited: 0x00)
struct F*6aee9a34a0 {
	float *825f3b4073; // 0x00(0x04)
	float *c4d2d7db07; // 0x04(0x04)
	float *e30d7edd23; // 0x08(0x04)
	bool *858ec659c9; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *6a58ceb024; // 0x10(0x04)
	bool *c7d5a8ce10; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *95f26044c5; // 0x18(0x04)
	struct FVector *1defdcde0a; // 0x1c(0x0c)
	float *4f8c443ec9; // 0x28(0x04)
	float *a57b653a27; // 0x2c(0x04)
	float *4612b4c7f9; // 0x30(0x04)
	bool *a585030bc3; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector *82c62577a0; // 0x38(0x0c)
	bool *b59c11f44f; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *cd5faf8244; // 0x48(0x04)
	float *4a05d2391f; // 0x4c(0x04)
};

// ScriptStruct TslGame.*7b53e48faf
// Size: 0x58 (Inherited: 0x00)
struct F*7b53e48faf {
	struct UParticleSystem* *c709a48198; // 0x00(0x08)
	struct UParticleSystem* *1b4f7361c2; // 0x08(0x08)
	struct FVector2D *378acf8591; // 0x10(0x08)
	struct FVector2D *c167c711bd; // 0x18(0x08)
	struct FVector2D *45c805819a; // 0x20(0x08)
	struct FVector2D *ba52b4ce51; // 0x28(0x08)
	struct FVector2D *b0b13606a3; // 0x30(0x08)
	struct FVector2D *365ff0ddb2; // 0x38(0x08)
	struct UClass* *196bcca11e; // 0x40(0x08)
	struct UClass* *260653613e; // 0x48(0x08)
	struct U*1ba2d2b086* *1f47042d02; // 0x50(0x08)
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
	float *a6c53b4227; // 0x10(0x04)
};

// ScriptStruct TslGame.*e61c17986e
// Size: 0xc0 (Inherited: 0x00)
struct F*e61c17986e {
	float *a99dc6a9e1; // 0x00(0x04)
	struct FVector *1cf9ae7c64; // 0x04(0x0c)
	float *912e5e5343; // 0x10(0x04)
	float *210c95d5ab; // 0x14(0x04)
	float *febc8f9af8; // 0x18(0x04)
	float *2fd24b60a7; // 0x1c(0x04)
	float *23d86a67b5; // 0x20(0x04)
	float *fba6f1fb97; // 0x24(0x04)
	float *db1893e81b; // 0x28(0x04)
	float *d03a8c5712; // 0x2c(0x04)
	float *8c5bd57d07; // 0x30(0x04)
	float *f9b9efcfc9; // 0x34(0x04)
	struct FVector CapsuleOffset; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct USkeletalMesh* ParachuteSK; // 0x48(0x08)
	struct UClass* *5e99496983; // 0x50(0x08)
	struct FRotator *ed2513d3f2; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UPhysicsAsset* *8dc6856bec; // 0x68(0x08)
	struct TMap<enum class ESkydiveState, struct F*4dc6112145> *216142a10d; // 0x70(0x50)
};

// ScriptStruct TslGame.*4dc6112145
// Size: 0x10 (Inherited: 0x00)
struct F*4dc6112145 {
	float *f3bf5851cc; // 0x00(0x04)
	enum class *5d3636c297 *030051af48; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float *32bb26fbdf; // 0x08(0x04)
	bool *1d42cc7fa0; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*40d72d30bf
// Size: 0x7c (Inherited: 0x00)
struct F*40d72d30bf {
	float *406e19f27d; // 0x00(0x04)
	float *5dae796ea0; // 0x04(0x04)
	float *10c46d6c59; // 0x08(0x04)
	float *4407b5e684; // 0x0c(0x04)
	float *03bb5860bd; // 0x10(0x04)
	float *f728ae5ee8; // 0x14(0x04)
	float *9cfb1a88bd; // 0x18(0x04)
	float *6d5253b5e3; // 0x1c(0x04)
	float *cd7a684e07; // 0x20(0x04)
	float *c04c1a8546; // 0x24(0x04)
	float *6ff8c8d20a; // 0x28(0x04)
	float *2fc6dab924; // 0x2c(0x04)
	struct FVector2D *682a2bbe72; // 0x30(0x08)
	struct FVector2D *32146f01e2; // 0x38(0x08)
	float *743be61dc6; // 0x40(0x04)
	float *dc67de1e02; // 0x44(0x04)
	float *c25dc15095; // 0x48(0x04)
	float *d732b3ae54; // 0x4c(0x04)
	float *bac7b64891; // 0x50(0x04)
	float *da59cdbd8f; // 0x54(0x04)
	float *e6fea7818f; // 0x58(0x04)
	float *0f4e94bfa1; // 0x5c(0x04)
	float *6cd8d4ed78; // 0x60(0x04)
	float *229da9c880; // 0x64(0x04)
	float *e9d08f16cf; // 0x68(0x04)
	struct FVector2D *ecc6f40dbd; // 0x6c(0x08)
	struct FVector2D *1c176628dc; // 0x74(0x08)
};

// ScriptStruct TslGame.*90eacabd06
// Size: 0x30 (Inherited: 0x00)
struct F*90eacabd06 {
	float *ff5b21b573; // 0x00(0x04)
	float *b4e20b209f; // 0x04(0x04)
	float *6ac423337e; // 0x08(0x04)
	float *61ee9eddb0; // 0x0c(0x04)
	float *d6ef0944b5; // 0x10(0x04)
	float *04d982d444; // 0x14(0x04)
	float *35891251f4; // 0x18(0x04)
	float *79435caf2a; // 0x1c(0x04)
	float *9968e69079; // 0x20(0x04)
	float *2413e517e5; // 0x24(0x04)
	float *6ea5975162; // 0x28(0x04)
	float *7ca8c27d2d; // 0x2c(0x04)
};

// ScriptStruct TslGame.*d6880ea560
// Size: 0x28 (Inherited: 0x00)
struct F*d6880ea560 {
	float *ce54e3370e; // 0x00(0x04)
	float *6851caa296; // 0x04(0x04)
	float *24dbfa4089; // 0x08(0x04)
	float *d802b652c3; // 0x0c(0x04)
	float *244d2147dc; // 0x10(0x04)
	bool *08dbfc1a84; // 0x14(0x01)
	bool *b19beed01f; // 0x15(0x01)
	bool *2accec2080; // 0x16(0x01)
	bool *8de870250a; // 0x17(0x01)
	float *c515b995bc; // 0x18(0x04)
	float *f9b4d25a03; // 0x1c(0x04)
	float *02822c0ba0; // 0x20(0x04)
	float *42aef92587; // 0x24(0x04)
};

// ScriptStruct TslGame.*278ae9ef08
// Size: 0x20 (Inherited: 0x00)
struct F*278ae9ef08 {
	float *25958a9457; // 0x00(0x04)
	struct FVector2D *27d9bee166; // 0x04(0x08)
	struct FVector2D *ad248e10b6; // 0x0c(0x08)
	float *d21b53402b; // 0x14(0x04)
	struct FVector2D *760026fb6f; // 0x18(0x08)
};

// ScriptStruct TslGame.*4e1c4b7274
// Size: 0x14 (Inherited: 0x00)
struct F*4e1c4b7274 {
	float DragScale; // 0x00(0x04)
	float *06e54ee783; // 0x04(0x04)
	float *c2503cf441; // 0x08(0x04)
	float *dd51f3c09b; // 0x0c(0x04)
	float *1efada7429; // 0x10(0x04)
};

// ScriptStruct TslGame.*1a751f8132
// Size: 0x18 (Inherited: 0x00)
struct F*1a751f8132 {
	float *8b7b733702; // 0x00(0x04)
	float *389cdd69b9; // 0x04(0x04)
	float *ad1a969d96; // 0x08(0x04)
	bool *b56e217dca; // 0x0c(0x01)
	bool *ca44082dfd; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float *e6665c12dc; // 0x10(0x04)
	float *ddb18c9c4e; // 0x14(0x04)
};

// ScriptStruct TslGame.FreefallVelocitySettings
// Size: 0x0c (Inherited: 0x00)
struct FFreefallVelocitySettings {
	float SpeedMin; // 0x00(0x04)
	float *50686dc576; // 0x04(0x04)
	float *a5ea31fcf8; // 0x08(0x04)
};

// ScriptStruct TslGame.*1aa6f38e4f
// Size: 0x30 (Inherited: 0x00)
struct F*1aa6f38e4f {
	struct FVector2D *9aae8427d9; // 0x00(0x08)
	struct FVector2D *2c15ac06ef; // 0x08(0x08)
	struct FVector2D *b36a505d9b; // 0x10(0x08)
	float *ba8579f424; // 0x18(0x04)
	struct FVector2D *ab6c4efd98; // 0x1c(0x08)
	struct FVector2D *34bf78d860; // 0x24(0x08)
	float *78dab91a2c; // 0x2c(0x04)
};

// ScriptStruct TslGame.*124ee50766
// Size: 0x78 (Inherited: 0x00)
struct F*124ee50766 {
	bool *287a20a1d0; // 0x00(0x01)
	bool *21850dfaa3; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<int32, int32> *a433e90a27; // 0x08(0x50)
	int32 *c75a10cef7; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<float> *fe090ed172; // 0x60(0x10)
	int32 *d001e43203; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*128e0a42b1
// Size: 0x20 (Inherited: 0x00)
struct F*128e0a42b1 {
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

// ScriptStruct TslGame.*911559d23e
// Size: 0x20 (Inherited: 0x00)
struct F*911559d23e {
	struct TArray<struct UItem*> *f24ce35c72; // 0x00(0x10)
	struct TArray<struct F*639b4e8959> *21367dfa9f; // 0x10(0x10)
};

// ScriptStruct TslGame.*639b4e8959
// Size: 0x10 (Inherited: 0x00)
struct F*639b4e8959 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UEquipableItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*eb020670e9
// Size: 0x10 (Inherited: 0x00)
struct F*eb020670e9 {
	float *5c882dd17f; // 0x00(0x04)
	float *52b1dc170c; // 0x04(0x04)
	int32 *7e2267d354; // 0x08(0x04)
	int32 MaxCount; // 0x0c(0x04)
};

// ScriptStruct TslGame.*52ae6e6ce3
// Size: 0x3c (Inherited: 0x00)
struct F*52ae6e6ce3 {
	float *308511af6d; // 0x00(0x04)
	float *83f3c18042; // 0x04(0x04)
	float *f8a370921c; // 0x08(0x04)
	float *78df4a135c; // 0x0c(0x04)
	float *d81c6aa675; // 0x10(0x04)
	float *340877fa5e; // 0x14(0x04)
	float *1197579b58; // 0x18(0x04)
	struct F*242ce7f1e1 *b01e7fec60; // 0x1c(0x1c)
	float *68766346ee; // 0x38(0x04)
};

// ScriptStruct TslGame.*242ce7f1e1
// Size: 0x1c (Inherited: 0x00)
struct F*242ce7f1e1 {
	struct FVector *2a9f3d1534; // 0x00(0x0c)
	float *1847ae9272; // 0x0c(0x04)
	float *3afc95b105; // 0x10(0x04)
	float *16d98b6484; // 0x14(0x04)
	float *78c13ae51e; // 0x18(0x04)
};

// ScriptStruct TslGame.*01cbbc218a
// Size: 0x18 (Inherited: 0x00)
struct F*01cbbc218a {
	struct TArray<struct ATslRedeployRespawnPoint*> *3f02a129ef; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*2b87dd7a5a
// Size: 0x08 (Inherited: 0x00)
struct F*2b87dd7a5a {
	struct ATslPlayerState* *626fb1ba45; // 0x00(0x08)
};

// ScriptStruct TslGame.*dd86e5a470
// Size: 0x20 (Inherited: 0x00)
struct F*dd86e5a470 {
	struct TArray<struct ACaptureAreaActor*> *52f3ca213a; // 0x00(0x10)
	struct TArray<float> *1f26137e20; // 0x10(0x10)
};

// ScriptStruct TslGame.*2906eb7889
// Size: 0x60 (Inherited: 0x00)
struct F*2906eb7889 {
	struct F*4d5091d52e Config; // 0x00(0x30)
	struct UClass* WidgetClass; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct UUserWidget* Widget; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct TslGame.*df3188316e
// Size: 0x38 (Inherited: 0x00)
struct F*df3188316e {
	int32 CellSize; // 0x00(0x04)
	int32 *3074aad165; // 0x04(0x04)
	int32 *a1bf3febff; // 0x08(0x04)
	int32 *cf37950d9b; // 0x0c(0x04)
	int32 *326f61e5db; // 0x10(0x04)
	int32 *93701dc077; // 0x14(0x04)
	float *ee7677d063; // 0x18(0x04)
	int32 *9999088957; // 0x1c(0x04)
	float *c04e806f45; // 0x20(0x04)
	float *d852fce6de; // 0x24(0x04)
	float *ef1a3d09da; // 0x28(0x04)
	float *0b6487451c; // 0x2c(0x04)
	float *57949b1e03; // 0x30(0x04)
	float *c8952542df; // 0x34(0x04)
};

// ScriptStruct TslGame.*eaed245efa
// Size: 0x24 (Inherited: 0x00)
struct F*eaed245efa {
	float Stand[0x03]; // 0x00(0x0c)
	float Crouch[0x03]; // 0x0c(0x0c)
	float Prone[0x03]; // 0x18(0x0c)
};

// ScriptStruct TslGame.*aefec2af1a
// Size: 0x98 (Inherited: 0x00)
struct F*aefec2af1a {
	struct FString MapName; // 0x00(0x10)
	struct F*415ed242d7 *12efc1a54a; // 0x10(0x88)
};

// ScriptStruct TslGame.*415ed242d7
// Size: 0x88 (Inherited: 0x00)
struct F*415ed242d7 {
	struct UClass* AIControllerClass; // 0x00(0x20)
	struct UClass* *fcead8761a; // 0x20(0x20)
	struct U*a10c40ef1e* *b212f55b81; // 0x40(0x08)
	struct UClass* *9f1ed118ad; // 0x48(0x20)
	struct UDataTable* CharacterCostumeSetDataTable; // 0x68(0x20)
};

// ScriptStruct TslGame.*f09343fb89
// Size: 0x34 (Inherited: 0x00)
struct F*f09343fb89 {
	struct FVector AirplaneStartLoc; // 0x00(0x0c)
	struct FVector AirplaneStopLoc; // 0x0c(0x0c)
	struct FVector AirplaneCanJumpLoc; // 0x18(0x0c)
	struct FVector AirplaneForceJumpLoc; // 0x24(0x0c)
	float PlaneSpeed; // 0x30(0x04)
};

// ScriptStruct TslGame.*06f38b0b07
// Size: 0x10 (Inherited: 0x00)
struct F*06f38b0b07 {
	struct FName Tag; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*48ac80da9d
// Size: 0x18 (Inherited: 0x00)
struct F*48ac80da9d {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*06f38b0b07> DataList; // 0x08(0x10)
};

// ScriptStruct TslGame.*48fd528e3a
// Size: 0x20 (Inherited: 0x00)
struct F*48fd528e3a {
	struct FName *9dd87a470a; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	int32 *dff0d0d132; // 0x14(0x04)
	int32 *3d5e5ca50a; // 0x18(0x04)
	int32 *648f6c90d0; // 0x1c(0x04)
};

// ScriptStruct TslGame.AkVariant
// Size: 0x0c (Inherited: 0x00)
struct FAkVariant {
	float *5085782871; // 0x00(0x04)
	float *8efec74ff9; // 0x04(0x04)
	bool *7cb73ccb30; // 0x08(0x01)
	bool *f71753c9cc; // 0x09(0x01)
	bool *49f6f6b49e; // 0x0a(0x01)
	bool *a70f97fef7; // 0x0b(0x01)
};

// ScriptStruct TslGame.*503acb2646
// Size: 0x18 (Inherited: 0x00)
struct F*503acb2646 {
	struct FString EventName; // 0x00(0x10)
	struct UAkAudioEvent* AkAudioEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*555ad4ccaa
// Size: 0xa0 (Inherited: 0x98)
struct F*555ad4ccaa : F*590ca37af8 {
	struct UBlendSpace* BlendSpaceStop; // 0x98(0x08)
};

// ScriptStruct TslGame.*590ca37af8
// Size: 0x98 (Inherited: 0x00)
struct F*590ca37af8 {
	struct UAnimSequence* BasePose; // 0x00(0x08)
	struct F*1042ed0e72 IdleAnimations; // 0x08(0x10)
	struct UBlendSpace* BlendSpaceAimOffset; // 0x18(0x08)
	struct F*50b3c555c3 TurningInPlace; // 0x20(0x20)
	struct UBlendSpace* BlendSpaceLocomotion; // 0x40(0x08)
	struct UBlendSpace* BlendSpaceStart; // 0x48(0x08)
	struct F*1d225a2101 AnimSpeed_Walk; // 0x50(0x20)
	struct F*1d225a2101 AnimSpeed_Run; // 0x70(0x20)
	float AnimSpeed_Sprint; // 0x90(0x04)
	float AimOffsetBlendTime; // 0x94(0x04)
};

// ScriptStruct TslGame.*1d225a2101
// Size: 0x20 (Inherited: 0x00)
struct F*1d225a2101 {
	float F; // 0x00(0x04)
	float L; // 0x04(0x04)
	float R; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float FL; // 0x10(0x04)
	float FR; // 0x14(0x04)
	float BL; // 0x18(0x04)
	float BR; // 0x1c(0x04)
};

// ScriptStruct TslGame.*50b3c555c3
// Size: 0x20 (Inherited: 0x00)
struct F*50b3c555c3 {
	struct UAnimSequence* Left90; // 0x00(0x08)
	struct UAnimSequence* Left180; // 0x08(0x08)
	struct UAnimSequence* Right90; // 0x10(0x08)
	struct UAnimSequence* Right180; // 0x18(0x08)
};

// ScriptStruct TslGame.*38b7ea04a6
// Size: 0xa8 (Inherited: 0x98)
struct F*38b7ea04a6 : F*590ca37af8 {
	struct UBlendSpace* BlendSpaceStopLeft; // 0x98(0x08)
	struct UBlendSpace* BlendSpaceStopRight; // 0xa0(0x08)
};

// ScriptStruct TslGame.*caf33aeb46
// Size: 0xf0 (Inherited: 0x98)
struct F*caf33aeb46 : F*590ca37af8 {
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
	struct F*1042ed0e72 IdleAnimations; // 0x10(0x10)
	struct F*1042ed0e72 IdleAnimationsCold; // 0x20(0x10)
	struct F*50b3c555c3 TurningInPlace; // 0x30(0x20)
	struct UBlendSpace* LocomotionBlendspace; // 0x50(0x08)
	struct UBlendSpace* LocomotionBlendspaceFPP; // 0x58(0x08)
	struct UBlendSpace* LocomotionStartBlendspace; // 0x60(0x08)
	struct UBlendSpace* LocomotionStopBlendspace; // 0x68(0x08)
	struct F*1d225a2101 AnimSpeed_Walk; // 0x70(0x20)
	struct F*1d225a2101 AnimSpeed_Run; // 0x90(0x20)
	float AnimSpeed_Sprint; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.*4961bdecff
// Size: 0x40 (Inherited: 0x00)
struct F*4961bdecff {
	struct F*6a13b31f00 StandTPP; // 0x00(0x10)
	struct F*6a13b31f00 StandFPP; // 0x10(0x10)
	struct F*6a13b31f00 ProneTPP; // 0x20(0x10)
	struct F*6a13b31f00 ProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*6a13b31f00
// Size: 0x10 (Inherited: 0x00)
struct F*6a13b31f00 {
	struct UAnimSequence* Default; // 0x00(0x08)
	struct UAnimSequence* ParentControl; // 0x08(0x08)
};

// ScriptStruct TslGame.*8da5dc9ee9
// Size: 0x0c (Inherited: 0x00)
struct F*8da5dc9ee9 {
	float Walk; // 0x00(0x04)
	float Run; // 0x04(0x04)
	float Sprint; // 0x08(0x04)
};

// ScriptStruct TslGame.*ef4cd3905b
// Size: 0x38 (Inherited: 0x00)
struct F*ef4cd3905b {
	enum class ERaycastDirection Direction; // 0x00(0x01)
	bool bUseCustomDirection; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector *8117afd3df; // 0x04(0x0c)
	struct FName *9fba9987a8; // 0x10(0x08)
	float *30b0a7e16f; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct U*eb7ba04808* *8556a6564d; // 0x20(0x08)
	struct F*0331ee801b *6caa442329; // 0x28(0x10)
};

// ScriptStruct TslGame.*0331ee801b
// Size: 0x10 (Inherited: 0x00)
struct F*0331ee801b {
	struct FVector Offset; // 0x00(0x0c)
	bool *4e2d6a6a88; // 0x0c(0x01)
	bool *6c80534cdb; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*13bc78490f
// Size: 0x1c (Inherited: 0x00)
struct F*13bc78490f {
	struct FVector InitialActorOffset; // 0x00(0x0c)
	struct FVector TraceVector; // 0x0c(0x0c)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct TslGame.*3ced3cf038
// Size: 0xb0 (Inherited: 0x08)
struct F*3ced3cf038 : FTableRowBase {
	int32 EmoteID; // 0x08(0x04)
	enum class EEmotePlayType PlayType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText EmoteLocalizedName; // 0x10(0x18)
	struct UTexture2D* UITexture; // 0x28(0x08)
	struct UMaterialInterface* UIMaterial; // 0x30(0x08)
	struct UAnimMontage* AnimMogtage_SoftRef; // 0x38(0x20)
	enum class *ae3bdf0e32 AnimType; // 0x58(0x01)
	bool bIsBGM_Sound; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32 EmoteIDforOtherTeammate; // 0x5c(0x04)
	struct F*89a76c3b1e EmoteIDsForTeammate; // 0x60(0x10)
	bool bRandomTeammateID; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32 TeammateAllowedNumber; // 0x74(0x04)
	struct FName StartInteractSectionName; // 0x78(0x08)
	bool bRandomPlayInteractScetion; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float FollowRestricDistance; // 0x84(0x04)
	struct U*c4cef9275a* TraceDataRef; // 0x88(0x08)
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

// ScriptStruct TslGame.*89a76c3b1e
// Size: 0x10 (Inherited: 0x00)
struct F*89a76c3b1e {
	struct TArray<int32> EmoteIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*92674ee893
// Size: 0x28 (Inherited: 0x00)
struct F*92674ee893 {
	struct UAnimMontage* *6ff2e70bec; // 0x00(0x20)
	struct UAnimMontage* AnimMontage; // 0x20(0x08)
};

// ScriptStruct TslGame.*ef4ea9d40d
// Size: 0x10 (Inherited: 0x00)
struct F*ef4ea9d40d {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*822b2a7be8
// Size: 0x10 (Inherited: 0x00)
struct F*822b2a7be8 {
	struct FVector2D *0ebef50397; // 0x00(0x08)
	struct ATslSpecialZoneActor* *08fe482016; // 0x08(0x08)
};

// ScriptStruct TslGame.*7ded01e128
// Size: 0x14 (Inherited: 0x00)
struct F*7ded01e128 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x13]; // 0x01(0x13)
};

// ScriptStruct TslGame.*eaf1c1f62d
// Size: 0x0c (Inherited: 0x00)
struct F*eaf1c1f62d {
	int32 *c43b347f01; // 0x00(0x04)
	int32 *27e4768610; // 0x04(0x04)
	int32 *841f479217; // 0x08(0x04)
};

// ScriptStruct TslGame.*8ad3d9843b
// Size: 0x10 (Inherited: 0x00)
struct F*8ad3d9843b {
	float *2ae137cebf; // 0x00(0x04)
	float *fde9bae290; // 0x04(0x04)
	float *3cf0e8987b; // 0x08(0x04)
	int32 *30be8acb6f; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6d9952efe8
// Size: 0x160 (Inherited: 0x00)
struct F*6d9952efe8 {
	float *c035251653; // 0x00(0x04)
	float *b2018a93f2; // 0x04(0x04)
	float *8c88a959ca; // 0x08(0x04)
	float *c00a3b7f17; // 0x0c(0x04)
	float *5e106c1d0e; // 0x10(0x04)
	int32 *a5b8ec5bb8; // 0x14(0x04)
	int32 *ef5fcbfc51; // 0x18(0x04)
	int32 *bd6eee7dea; // 0x1c(0x04)
	struct TMap<struct FString, struct F*de8e49ec1d> *4a293bf994; // 0x20(0x50)
	struct TMap<struct FString, struct F*de8e49ec1d> *30efb604bf; // 0x70(0x50)
	struct TMap<struct FString, int32> *93f74e2d30; // 0xc0(0x50)
	struct TMap<enum class EMovementBaseType, float> *9b9649a1cd; // 0x110(0x50)
};

// ScriptStruct TslGame.*de8e49ec1d
// Size: 0x58 (Inherited: 0x00)
struct F*de8e49ec1d {
	int32 Shots; // 0x00(0x04)
	float *fdf9d128bf; // 0x04(0x04)
	struct TMap<enum class EDamageReason, struct F*18d36f7953> *3a5586922a; // 0x08(0x50)
};

// ScriptStruct TslGame.*18d36f7953
// Size: 0x18 (Inherited: 0x00)
struct F*18d36f7953 {
	int32 Hits; // 0x00(0x04)
	int32 *c4b0efbd02; // 0x04(0x04)
	float *b0290102c9; // 0x08(0x04)
	float *90aa0d594e; // 0x0c(0x04)
	int32 Kills; // 0x10(0x04)
	int32 *a2e2fded66; // 0x14(0x04)
};

// ScriptStruct TslGame.*3d5b006d1d
// Size: 0x18 (Inherited: 0x00)
struct F*3d5b006d1d {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*7de06f38cf
// Size: 0x08 (Inherited: 0x00)
struct F*7de06f38cf {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*a8c78283b1
// Size: 0x0c (Inherited: 0x00)
struct F*a8c78283b1 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*e83a5d2b30
// Size: 0x10 (Inherited: 0x00)
struct F*e83a5d2b30 {
	struct UClass* *9ee4a2f7eb; // 0x00(0x08)
	float *7595aee720; // 0x08(0x04)
	bool *d0fcd50b36; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*61a7fbcf33
// Size: 0xd0 (Inherited: 0x00)
struct F*61a7fbcf33 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* *5e88959698; // 0x10(0x08)
	struct UClass* *594d51a6d0; // 0x18(0x08)
	struct UClass* *ee02b7c275; // 0x20(0x08)
	struct UClass* *97095b0204; // 0x28(0x08)
	struct UClass* *6259c26e31; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct F*d55be17a08 *ae80948148; // 0x48(0x08)
	struct FVector *28fb3a2403; // 0x50(0x0c)
	struct FVector *4cb1745ef4; // 0x5c(0x0c)
	struct FVector *0a11298906; // 0x68(0x0c)
	struct FVector *8edf8c5633; // 0x74(0x0c)
	struct FVector *0fc925f133; // 0x80(0x0c)
	struct FVector *62215cec4e; // 0x8c(0x0c)
	struct F*d55be17a08 *aecc85f030; // 0x98(0x08)
	float *9960b6c2e6; // 0xa0(0x04)
	char pad_A4[0x2c]; // 0xa4(0x2c)
};

// ScriptStruct TslGame.*d55be17a08
// Size: 0x08 (Inherited: 0x00)
struct F*d55be17a08 {
	float *ab2ee45466; // 0x00(0x04)
	float *60bc40bb51; // 0x04(0x04)
};

// ScriptStruct TslGame.*ccc29f3a53
// Size: 0x78 (Inherited: 0x00)
struct F*ccc29f3a53 {
	struct FString ServerURL; // 0x00(0x10)
	struct FString Domain; // 0x10(0x10)
	struct FString Issuer; // 0x20(0x10)
	bool *414ddad654; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString GVoiceServerUrl; // 0x38(0x10)
	struct FString GVoiceAppKey; // 0x48(0x10)
	struct FString GVoiceAppId; // 0x58(0x10)
	int32 GVoiceProximalMaxRange; // 0x68(0x04)
	int32 GVoiceDistNear; // 0x6c(0x04)
	int32 GVoiceDistFar; // 0x70(0x04)
	float GVoiceVolPercentage; // 0x74(0x04)
};

// ScriptStruct TslGame.*c0c1470287
// Size: 0xa8 (Inherited: 0x00)
struct F*c0c1470287 {
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
	struct U*fd1eee3ee1* ReticleSettings; // 0x40(0x08)
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

// ScriptStruct TslGame.*70ac80549c
// Size: 0x280 (Inherited: 0x00)
struct F*70ac80549c {
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
	struct F*5d1a10b2e2 ReticleBrightnessConfig; // 0x30(0x20)
	struct TArray<float> *fd02d46df6; // 0x50(0x10)
	struct TMap<struct FName, struct UMaterialInstance*> *7299a183ad; // 0x60(0x50)
	struct TMap<struct FName, struct U*fd1eee3ee1*> *14de2e999f; // 0xb0(0x50)
	struct U*b77f654b52* *774a73d42d; // 0x100(0x08)
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
	enum class *28200d8ea9 WeaponGripLeft; // 0x158(0x01)
	bool bIsSuppressor; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct FStringAssetReference MuzzleSound; // 0x160(0x10)
	struct UAnimMontage* CharacterReloadTactical; // 0x170(0x08)
	struct UAnimMontage* WeaponReloadTactical; // 0x178(0x08)
	struct UAnimMontage* CharacterReloadCharge; // 0x180(0x08)
	struct UAnimMontage* WeaponReloadCharge; // 0x188(0x08)
	bool bUsePelletGridOverride; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct TMap<int32, struct FVector2D> *256b5dcb73; // 0x198(0x50)
	float StabilitySpeedScalar; // 0x1e8(0x04)
	float StabilityMinForceAdditive; // 0x1ec(0x04)
	float RecoilEarlyExitScale; // 0x1f0(0x04)
	float CantedWeaponRotation; // 0x1f4(0x04)
	bool bUseReticleTypeOverride; // 0x1f8(0x01)
	bool bUseDefaultReticleCaching; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)
	struct TArray<struct F*170f9b91db> ReticleTextureDataArray; // 0x200(0x10)
	struct F*2a0f565515 ScopeGlintConfig; // 0x210(0x3c)
	bool bThermalTemperatureInteractive; // 0x24c(0x01)
	bool bBlocksGameplayTracers; // 0x24d(0x01)
	char pad_24E[0x2]; // 0x24e(0x02)
};

// ScriptStruct TslGame.*2a0f565515
// Size: 0x3c (Inherited: 0x00)
struct F*2a0f565515 {
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

// ScriptStruct TslGame.*170f9b91db
// Size: 0x40 (Inherited: 0x00)
struct F*170f9b91db {
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

// ScriptStruct TslGame.*5d1a10b2e2
// Size: 0x20 (Inherited: 0x00)
struct F*5d1a10b2e2 {
	struct U*1ba2d2b086* ReticleBrightnessSettingsCurve; // 0x00(0x08)
	struct FName ReticleBrightnessParamX; // 0x08(0x08)
	struct FName ReticleBrightnessParamY; // 0x10(0x08)
	struct FName ReticleBrightnessParamZ; // 0x18(0x08)
};

// ScriptStruct TslGame.*ecb5dc86e0
// Size: 0x28 (Inherited: 0x00)
struct F*ecb5dc86e0 {
	enum class EWeaponAttachmentSlotID Slot; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *6df566c9cc; // 0x08(0x10)
	struct TArray<struct FName> *2a771a5c8a; // 0x18(0x10)
};

// ScriptStruct TslGame.*9a7d2121a8
// Size: 0x20 (Inherited: 0x00)
struct F*9a7d2121a8 {
	enum class EWeaponAttachmentSlotID *4b820f15cf; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *733135c711; // 0x08(0x08)
	struct TArray<struct F*ca9e651fe8> *54453b074d; // 0x10(0x10)
};

// ScriptStruct TslGame.*ca9e651fe8
// Size: 0x10 (Inherited: 0x00)
struct F*ca9e651fe8 {
	struct FName *3ffc156694; // 0x00(0x08)
	struct FName *733135c711; // 0x08(0x08)
};

// ScriptStruct TslGame.*b0c768ad93
// Size: 0x18 (Inherited: 0x00)
struct F*b0c768ad93 {
	enum class EWeaponAttachmentSlotID *4b820f15cf; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *4b62bcafdb; // 0x08(0x10)
};

// ScriptStruct TslGame.*fac7c5caf9
// Size: 0x18 (Inherited: 0x00)
struct F*fac7c5caf9 {
	struct UAnimMontage* *c1adfe7c73; // 0x00(0x08)
	struct UAnimMontage* *fb85637200; // 0x08(0x08)
	struct UAnimMontage* Pickup; // 0x10(0x08)
};

// ScriptStruct TslGame.*becb5c24a7
// Size: 0x10 (Inherited: 0x00)
struct F*becb5c24a7 {
	struct UAnimMontage* RollLeft; // 0x00(0x08)
	struct UAnimMontage* RollRight; // 0x08(0x08)
};

// ScriptStruct TslGame.*86a6db2ad3
// Size: 0x10 (Inherited: 0x00)
struct F*86a6db2ad3 {
	struct UAnimMontage* *9d892018d7; // 0x00(0x08)
	struct UAnimMontage* *de867b2c80; // 0x08(0x08)
};

// ScriptStruct TslGame.*5f311a1843
// Size: 0x2b0 (Inherited: 0x00)
struct F*5f311a1843 {
	float TargetingFOV; // 0x00(0x04)
	float *65da1dbee3; // 0x04(0x04)
	struct TMap<enum class EScopeType, struct FVector2D> *2882ece4a9; // 0x08(0x50)
	struct FName *a3ad620bca; // 0x58(0x08)
	struct FVector *17f14a07cc; // 0x60(0x0c)
	struct FRotator *de1f5c58b0; // 0x6c(0x0c)
	struct FVector *0e08a134e4; // 0x78(0x0c)
	struct FRotator *4fc2f26578; // 0x84(0x0c)
	bool *0f15a2e0ab; // 0x90(0x01)
	bool *94a2b1aef7; // 0x91(0x01)
	bool *85a3862829; // 0x92(0x01)
	enum class *28200d8ea9 *9d1aef6624; // 0x93(0x01)
	enum class EWeaponClass *e75687fdc3; // 0x94(0x01)
	enum class EAnimWeaponSpecificClass *6cd5e4938e; // 0x95(0x01)
	enum class EWeaponClass *a370c8c717; // 0x96(0x01)
	bool *c619907495; // 0x97(0x01)
	bool *97cc1c3e8c; // 0x98(0x01)
	bool *a53cb7277a; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float *00787e628f; // 0x9c(0x04)
	float *7e0af7c3aa; // 0xa0(0x04)
	float *390c532990; // 0xa4(0x04)
	float *05670e20cf; // 0xa8(0x04)
	float *5a245e9d37; // 0xac(0x04)
	float *864a6fcc82; // 0xb0(0x04)
	float *32366ef23a; // 0xb4(0x04)
	float *0fbd6f3b75; // 0xb8(0x04)
	bool *a411a29c75; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct TArray<float> *d07cf1d849; // 0xc0(0x10)
	float *a74c94d904; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UAnimMontage* *f1a8a1b3f8; // 0xd8(0x08)
	bool DestructibleDoor; // 0xe0(0x01)
	enum class EThrownWeaponType *027cc24f56; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct TMap<enum class ECustomGripBlendSpaceType, struct F*ac130189e9> *37c24382a1; // 0xe8(0x50)
	float *fbc97c8bd2; // 0x138(0x04)
	float *50e6eaf51f; // 0x13c(0x04)
	float *6cc327e7ca; // 0x140(0x04)
	float *e8502f93ac; // 0x144(0x04)
	float *d0ab618ce2; // 0x148(0x04)
	bool *a42e2b796e; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	float *ed85f53320; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FName *ae6c24ac1e; // 0x158(0x08)
	SetProperty *588c3fb9a7; // 0x160(0x50)
	float *0071c12fb0; // 0x1b0(0x04)
	float *3fb0794472; // 0x1b4(0x04)
	float *fdc7a48310; // 0x1b8(0x04)
	bool *5650cb7575; // 0x1bc(0x01)
	bool *93e065a05d; // 0x1bd(0x01)
	bool *4b42a6a5a8; // 0x1be(0x01)
	bool *134c0a257a; // 0x1bf(0x01)
	bool *13bf937865; // 0x1c0(0x01)
	bool *ffe0e934a4; // 0x1c1(0x01)
	bool *351fc54baa; // 0x1c2(0x01)
	bool *7b0cb7b992; // 0x1c3(0x01)
	float *6c6e5f126d; // 0x1c4(0x04)
	struct UStaticMesh* *23397bfd47; // 0x1c8(0x08)
	struct UAkAudioEvent* *a232911a82; // 0x1d0(0x08)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FTransform *16671a9824; // 0x1e0(0x30)
	struct FTransform *df764a7444; // 0x210(0x30)
	struct FTransform *9bd9a1cadf; // 0x240(0x30)
	struct FTransform *fb6a200442; // 0x270(0x30)
	bool *91efea78f0; // 0x2a0(0x01)
	char pad_2A1[0xf]; // 0x2a1(0x0f)
};

// ScriptStruct TslGame.*a58ed48e6a
// Size: 0xc0 (Inherited: 0x28)
struct F*a58ed48e6a : F*c11c62a687 {
	struct UObject* CharmAsset; // 0x28(0x20)
	struct UStaticMesh* CharmAssetStatic; // 0x48(0x20)
	struct UClass* CharmAnimBlueprint; // 0x68(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> MaterialOverrides; // 0x70(0x50)
};

// ScriptStruct TslGame.*c11c62a687
// Size: 0x28 (Inherited: 0x08)
struct F*c11c62a687 : FTableRowBase {
	struct FText MasteryItemName; // 0x08(0x18)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*e48280cd1f
// Size: 0x04 (Inherited: 0x00)
struct F*e48280cd1f {
	uint16 *fe9ffd727f; // 0x00(0x02)
	uint16 *b549368457; // 0x02(0x02)
};

// ScriptStruct TslGame.*3ede8d9757
// Size: 0xa0 (Inherited: 0x00)
struct F*3ede8d9757 {
	struct TMap<struct FName, struct UItem*> *2fd24f53b5; // 0x00(0x50)
	struct TMap<int32, struct UItem*> *031eea82a5; // 0x50(0x50)
};

// ScriptStruct TslGame.*934241cd34
// Size: 0x180 (Inherited: 0x00)
struct F*934241cd34 {
	struct FStringAssetReference *7ff0dabf17; // 0x00(0x10)
	struct FStringAssetReference *3997b5b7bb; // 0x10(0x10)
	struct FStringAssetReference *5fb90f1478; // 0x20(0x10)
	struct FStringAssetReference *12eacad942; // 0x30(0x10)
	struct FStringAssetReference *6f8b90d862; // 0x40(0x10)
	struct FStringAssetReference *47adf5df63; // 0x50(0x10)
	struct FStringAssetReference *6cb1d879e7; // 0x60(0x10)
	struct FStringAssetReference *ad7ed26235; // 0x70(0x10)
	struct FStringAssetReference *4239acaf42; // 0x80(0x10)
	struct FStringAssetReference *88d0b53c13; // 0x90(0x10)
	struct FStringAssetReference *bcf6020cfc; // 0xa0(0x10)
	struct FStringAssetReference *cce55909df; // 0xb0(0x10)
	struct FStringAssetReference *22620dc4df; // 0xc0(0x10)
	struct FStringAssetReference *01a32fb3c3; // 0xd0(0x10)
	struct FStringAssetReference *d92ad2a621; // 0xe0(0x10)
	struct FStringAssetReference *cc6f301bfb; // 0xf0(0x10)
	struct FStringAssetReference *6596d77f3e; // 0x100(0x10)
	struct UDataTable* *949b1713eb; // 0x110(0x20)
	struct FStringAssetReference *6e1e2f8d22; // 0x130(0x10)
	struct FStringAssetReference *bc2051062b; // 0x140(0x10)
	struct FStringAssetReference *6b0e925f4b; // 0x150(0x10)
	struct FStringAssetReference *c0b1133eff; // 0x160(0x10)
	struct FStringAssetReference *f07e905fa8; // 0x170(0x10)
};

// ScriptStruct TslGame.WeaponSoundConfig
// Size: 0xb0 (Inherited: 0x00)
struct FWeaponSoundConfig {
	struct UAkAudioEvent* *f65a215300; // 0x00(0x08)
	struct UAkAudioEvent* *b9af93d5ad; // 0x08(0x08)
	struct FVector2D *adc1a56ec5; // 0x10(0x08)
	struct UAkAudioEvent* *64578a1fef; // 0x18(0x08)
	struct UAkAudioEvent* *4e86350c8a; // 0x20(0x08)
	struct UAkAudioEvent* *8c628f08ec; // 0x28(0x08)
	struct UAkAudioEvent* *0674680bdb; // 0x30(0x08)
	struct UAkAudioEvent* *02e041aaa1; // 0x38(0x08)
	struct UAkAudioEvent* *f8242e39d9; // 0x40(0x08)
	struct UAkAudioEvent* *4714f5592a; // 0x48(0x08)
	struct UAkAudioEvent* *0c1485083f; // 0x50(0x08)
	struct UAkAudioEvent* EquipSoundAk_Primary; // 0x58(0x08)
	struct UAkAudioEvent* *2d56ae7d72; // 0x60(0x08)
	struct UAkAudioEvent* *f0ab7fead2; // 0x68(0x08)
	struct UAkAudioEvent* *0fee963110; // 0x70(0x08)
	struct UAkAudioEvent* *ae365fa254; // 0x78(0x08)
	struct UAkAudioEvent* *5eb80a3fd6; // 0x80(0x08)
	struct UAkAudioEvent* *301d249d4f; // 0x88(0x08)
	char *fcf3ba1ec6 : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UAkAudioEvent* DropAllAttachmentsSoundAk; // 0x98(0x08)
	struct UAkAudioEvent* InventoryPutAllAttachmentsSoundAk; // 0xa0(0x08)
	struct UAkAudioEvent* DropAndInventoryPutAttachmentsSoundAk; // 0xa8(0x08)
};

// ScriptStruct TslGame.*3ce333a6af
// Size: 0x18 (Inherited: 0x00)
struct F*3ce333a6af {
	struct FName WeaponMasteryCharmSocket; // 0x00(0x08)
	struct FName WeaponMasteryCharmAttachSocket; // 0x08(0x08)
	int32 CharmWeaponLODVisibility; // 0x10(0x04)
	int32 VariantWeaponLODVisibility; // 0x14(0x04)
};

// ScriptStruct TslGame.*2137a889c3
// Size: 0x10 (Inherited: 0x00)
struct F*2137a889c3 {
	enum class EWeaponAttachmentSlotID *11f8296fad; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*bb446bdabf
// Size: 0x08 (Inherited: 0x00)
struct F*bb446bdabf {
	struct UAnimMontage* *36c71120b5; // 0x00(0x08)
};

// ScriptStruct TslGame.*ed4ff83a65
// Size: 0x20 (Inherited: 0x00)
struct F*ed4ff83a65 {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName *65e2c0134c; // 0x10(0x08)
	bool *b596665228; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*b5b756ee54
// Size: 0x18 (Inherited: 0x00)
struct F*b5b756ee54 {
	struct FName ActionName; // 0x00(0x08)
	struct FName *65e2c0134c; // 0x08(0x08)
	bool *b596665228; // 0x10(0x01)
	enum class *8d42d05dff *4b5cc6822c; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*7f3debddd2
// Size: 0x20 (Inherited: 0x18)
struct F*7f3debddd2 : F*5577a39667 {
	struct UWidget* *def3d349cc; // 0x18(0x08)
};

// ScriptStruct TslGame.*5577a39667
// Size: 0x18 (Inherited: 0x00)
struct F*5577a39667 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct UUserWidget* Parent; // 0x10(0x08)
};

// ScriptStruct TslGame.*ea981e25a6
// Size: 0xa0 (Inherited: 0x98)
struct F*ea981e25a6 : F*861b953814 {
	struct U*1ba2d2b086* VectorCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.*861b953814
// Size: 0x98 (Inherited: 0x00)
struct F*861b953814 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UUserWidget* Widget; // 0x18(0x08)
	char pad_20[0x78]; // 0x20(0x78)
};

// ScriptStruct TslGame.*51f63f4b27
// Size: 0xa0 (Inherited: 0x98)
struct F*51f63f4b27 : F*861b953814 {
	struct UCurveFloat* FloatCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.*dea961bdde
// Size: 0x20 (Inherited: 0x18)
struct F*dea961bdde : F*5577a39667 {
	struct USpacer* *004f3fd5d4; // 0x18(0x08)
};

// ScriptStruct TslGame.*e9e2558d2e
// Size: 0x20 (Inherited: 0x18)
struct F*e9e2558d2e : F*5577a39667 {
	struct U*6b11b3bf02* *d62e17064c; // 0x18(0x08)
};

// ScriptStruct TslGame.*e149898b75
// Size: 0x18 (Inherited: 0x00)
struct F*e149898b75 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*dbaf7780f1
// Size: 0x20 (Inherited: 0x18)
struct F*dbaf7780f1 : F*5577a39667 {
	struct UWebBrowser* *6ffde4cf50; // 0x18(0x08)
};

// ScriptStruct TslGame.*c233adf9bd
// Size: 0x20 (Inherited: 0x18)
struct F*c233adf9bd : F*5577a39667 {
	struct UUserWidget* *def3d349cc; // 0x18(0x08)
};

// ScriptStruct TslGame.*6eaf72a634
// Size: 0x28 (Inherited: 0x20)
struct F*6eaf72a634 : F*eaae7901d4 {
	struct UScrollBox* *fe7f9b47c3; // 0x20(0x08)
};

// ScriptStruct TslGame.*eaae7901d4
// Size: 0x20 (Inherited: 0x18)
struct F*eaae7901d4 : F*5577a39667 {
	struct U*c1ef4cc603* *8898f4426a; // 0x18(0x08)
};

// ScriptStruct TslGame.*258d567cc4
// Size: 0x28 (Inherited: 0x20)
struct F*258d567cc4 : F*eaae7901d4 {
	struct UScaleBox* *f0f3c0d316; // 0x20(0x08)
};

// ScriptStruct TslGame.*607bfdb0fb
// Size: 0x28 (Inherited: 0x20)
struct F*607bfdb0fb : F*eaae7901d4 {
	struct UInvalidationBox* *49c11c48d1; // 0x20(0x08)
};

// ScriptStruct TslGame.*91cf62c1f2
// Size: 0x28 (Inherited: 0x20)
struct F*91cf62c1f2 : F*eaae7901d4 {
	struct URetainerBox* *2e02b3a8b4; // 0x20(0x08)
};

// ScriptStruct TslGame.*5f0ea4fd04
// Size: 0x28 (Inherited: 0x20)
struct F*5f0ea4fd04 : F*eaae7901d4 {
	struct UWrapBox* *90ce32fd2a; // 0x20(0x08)
};

// ScriptStruct TslGame.*c69f8ed24a
// Size: 0x28 (Inherited: 0x20)
struct F*c69f8ed24a : F*eaae7901d4 {
	struct USizeBox* *e37ef380a4; // 0x20(0x08)
};

// ScriptStruct TslGame.*959656208f
// Size: 0x30 (Inherited: 0x20)
struct F*959656208f : F*eaae7901d4 {
	struct UBorder* *906d7014cf; // 0x20(0x08)
	struct UMaterialInstanceDynamic* *55fca62634; // 0x28(0x08)
};

// ScriptStruct TslGame.*24ef768fdd
// Size: 0x20 (Inherited: 0x18)
struct F*24ef768fdd : F*5577a39667 {
	struct UEditableText* *ce04e6f30d; // 0x18(0x08)
};

// ScriptStruct TslGame.*f4f57b85a2
// Size: 0x20 (Inherited: 0x18)
struct F*f4f57b85a2 : F*5577a39667 {
	struct UTextBlock* *23c2ef4f96; // 0x18(0x08)
};

// ScriptStruct TslGame.*b9afef7a3a
// Size: 0x28 (Inherited: 0x20)
struct F*b9afef7a3a : F*eaae7901d4 {
	struct UWidgetSwitcher* *65c560b99d; // 0x20(0x08)
};

// ScriptStruct TslGame.*8e32972a91
// Size: 0x28 (Inherited: 0x20)
struct F*8e32972a91 : F*eaae7901d4 {
	struct UHorizontalBox* *aa15a6adc9; // 0x20(0x08)
};

// ScriptStruct TslGame.*f0cac2bec7
// Size: 0x28 (Inherited: 0x20)
struct F*f0cac2bec7 : F*eaae7901d4 {
	struct UVerticalBox* *7ac90468d9; // 0x20(0x08)
};

// ScriptStruct TslGame.*0d3e7cd17a
// Size: 0x28 (Inherited: 0x20)
struct F*0d3e7cd17a : F*eaae7901d4 {
	struct UOverlay* *6b6823a423; // 0x20(0x08)
};

// ScriptStruct TslGame.*f23e4e6c9e
// Size: 0x28 (Inherited: 0x20)
struct F*f23e4e6c9e : F*eaae7901d4 {
	struct UCanvasPanel* *88d637a2f1; // 0x20(0x08)
};

// ScriptStruct TslGame.*d3069d51ff
// Size: 0x28 (Inherited: 0x18)
struct F*d3069d51ff : F*5577a39667 {
	struct UImage* *2b1fb4fb8b; // 0x18(0x08)
	struct UMaterialInstanceDynamic* *55fca62634; // 0x20(0x08)
};

// ScriptStruct TslGame.*a73dad2fac
// Size: 0x60 (Inherited: 0x00)
struct F*a73dad2fac {
	struct F*f4f57b85a2 *97168d1b42; // 0x00(0x20)
	struct F*f4f57b85a2 *150be3d243; // 0x20(0x20)
	char pad_40[0x20]; // 0x40(0x20)
};

// ScriptStruct TslGame.*0c00c368fc
// Size: 0x40 (Inherited: 0x00)
struct F*0c00c368fc {
	struct F*f4f57b85a2 *97168d1b42; // 0x00(0x20)
	enum class *d8fe971886 *277ecf1230; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *4c918d8104; // 0x24(0x04)
	bool *159bd0c6bd; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString *864e420231; // 0x30(0x10)
};

// ScriptStruct TslGame.*a40df9a0d2
// Size: 0x30 (Inherited: 0x00)
struct F*a40df9a0d2 {
	struct FText *cf337ef403; // 0x00(0x18)
	struct FText *7231cd02d6; // 0x18(0x18)
};

// ScriptStruct TslGame.*f325e7101d
// Size: 0x18 (Inherited: 0x00)
struct F*f325e7101d {
	enum class ESandboxGroypType *81bbdcf16d; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*170a252c03> Categories; // 0x08(0x10)
};

// ScriptStruct TslGame.*170a252c03
// Size: 0x18 (Inherited: 0x00)
struct F*170a252c03 {
	int32 *8ae8000c63; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*aec2e3d297> Items; // 0x08(0x10)
};

// ScriptStruct TslGame.*aec2e3d297
// Size: 0x08 (Inherited: 0x00)
struct F*aec2e3d297 {
	int32 *f9256717b9; // 0x00(0x04)
	int32 *911f799ad1; // 0x04(0x04)
};

// ScriptStruct TslGame.*4243156c7b
// Size: 0x10 (Inherited: 0x00)
struct F*4243156c7b {
	enum class ESandboxPowerType Type; // 0x00(0x04)
	bool *1a43984fad; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UParticleSystemComponent* *82a0cef7be; // 0x08(0x08)
};

// ScriptStruct TslGame.SandboxItemDataTable
// Size: 0x68 (Inherited: 0x10)
struct FSandboxItemDataTable : FBaseSandboxItemDataTable {
	struct FName CategoryName; // 0x10(0x08)
	struct FStringClassReference *0958ea378e; // 0x18(0x10)
	struct FName ItemID; // 0x28(0x08)
	struct FString *f0cc63fab4; // 0x30(0x10)
	struct FString *db04e00cb2; // 0x40(0x10)
	struct FString *5d786a1f52; // 0x50(0x10)
	int32 Index; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.BaseSandboxItemDataTable
// Size: 0x10 (Inherited: 0x08)
struct FBaseSandboxItemDataTable : FTableRowBase {
	struct FName *1e144e4011; // 0x08(0x08)
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

// ScriptStruct TslGame.*208765f2f8
// Size: 0x78 (Inherited: 0x10)
struct F*208765f2f8 : FBaseSandboxItemDataTable {
	struct FName ItemName; // 0x10(0x08)
	struct FText *608d9ac5a8; // 0x18(0x18)
	struct FText DescriptionText; // 0x30(0x18)
	bool *15ccf1f414; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D SliderRange; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*a40df9a0d2> *3394150b29; // 0x58(0x10)
	struct UClass* ItemWidgetClass; // 0x68(0x08)
	struct UClass* *df3ad94951; // 0x70(0x08)
};

// ScriptStruct TslGame.*88b4793908
// Size: 0x38 (Inherited: 0x00)
struct F*88b4793908 {
	char pad_0[0x20]; // 0x00(0x20)
	enum class EStanceMode *63efa36c77; // 0x20(0x01)
	char pad_21[0x17]; // 0x21(0x17)
};

// ScriptStruct TslGame.*b7032d41af
// Size: 0x18 (Inherited: 0x00)
struct F*b7032d41af {
	struct UCurveFloat* *366f87b1cc; // 0x00(0x08)
	float *0163687927; // 0x08(0x04)
	float MaxSpeed; // 0x0c(0x04)
	float *d439678cdf; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*8c8005e7bc
// Size: 0x18 (Inherited: 0x00)
struct F*8c8005e7bc {
	bool *53ed1d48b7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *49f3c7f2e5; // 0x04(0x04)
	bool *73702546b6; // 0x08(0x01)
	bool bUseAbsoluteAutoDeployAltitude; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float AutoDeployAltitude; // 0x0c(0x04)
	float StartDeployAltitude; // 0x10(0x04)
	float *3df0c4976b; // 0x14(0x04)
};

// ScriptStruct TslGame.*4fb2c16311
// Size: 0x10 (Inherited: 0x00)
struct F*4fb2c16311 {
	float *b553dd3b2e; // 0x00(0x04)
	float *8c71c569f1; // 0x04(0x04)
	float *e2aa26bf9f; // 0x08(0x04)
	float *01d51ec1dc; // 0x0c(0x04)
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

// ScriptStruct TslGame.*d05bdbf7cd
// Size: 0x2c (Inherited: 0x00)
struct F*d05bdbf7cd {
	float Height; // 0x00(0x04)
	float *b553dd3b2e; // 0x04(0x04)
	float *8c71c569f1; // 0x08(0x04)
	float *e2aa26bf9f; // 0x0c(0x04)
	float *01d51ec1dc; // 0x10(0x04)
	bool *53ed1d48b7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *49f3c7f2e5; // 0x18(0x04)
	bool *73702546b6; // 0x1c(0x01)
	bool bUseAbsoluteAutoDeployAltitude; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float AutoDeployAltitude; // 0x20(0x04)
	float StartDeployAltitude; // 0x24(0x04)
	float *3df0c4976b; // 0x28(0x04)
};

// ScriptStruct TslGame.*68a7a07f0f
// Size: 0x10 (Inherited: 0x00)
struct F*68a7a07f0f {
	struct FName *a6fdf1186a; // 0x00(0x08)
	enum class EEmotePlayType *3388504b39; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *8b2b0aa568; // 0x0c(0x04)
};

// ScriptStruct TslGame.*57de0399e2
// Size: 0x28 (Inherited: 0x00)
struct F*57de0399e2 {
	struct FString StringOptionKey; // 0x00(0x10)
	enum class EGender Gender; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> ZombieOptionValues; // 0x18(0x10)
};

// ScriptStruct TslGame.*5e558e75e1
// Size: 0x18 (Inherited: 0x00)
struct F*5e558e75e1 {
	float BoostGauge; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* Buff; // 0x08(0x08)
	struct FName OverlapId; // 0x10(0x08)
};

// ScriptStruct TslGame.*e2d17f3b65
// Size: 0x10 (Inherited: 0x00)
struct F*e2d17f3b65 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*6a51cb16ec
// Size: 0x10 (Inherited: 0x00)
struct F*6a51cb16ec {
	struct UAnimMontage* *ecc063f471; // 0x00(0x08)
	struct UAnimMontage* *7a87ada1fe; // 0x08(0x08)
};

// ScriptStruct TslGame.*823064fa9e
// Size: 0x20 (Inherited: 0x00)
struct F*823064fa9e {
	struct FString RecordTargetNetId; // 0x00(0x10)
	struct FString RecordTargetName; // 0x10(0x10)
};

// ScriptStruct TslGame.*553f05c216
// Size: 0x30 (Inherited: 0x00)
struct F*553f05c216 {
	struct FString EtceteraEventCode; // 0x00(0x10)
	struct FString TargetNetId; // 0x10(0x10)
	struct FString TargetName; // 0x20(0x10)
};

// ScriptStruct TslGame.*269125e154
// Size: 0xa0 (Inherited: 0x00)
struct F*269125e154 {
	struct FString *9c8cfe984f; // 0x00(0x10)
	struct FString *369421f7d3; // 0x10(0x10)
	struct FString VictimNetId; // 0x20(0x10)
	struct FString VictimName; // 0x30(0x10)
	struct FString *beaa55b96f; // 0x40(0x10)
	struct FString *751bf465f7; // 0x50(0x10)
	struct FString *7c177e982d; // 0x60(0x10)
	bool *5985a3eb94; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString *2c63016c0b; // 0x78(0x10)
	struct FString *6ba7de6070; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct TslGame.*9a4aa604f0
// Size: 0x38 (Inherited: 0x00)
struct F*9a4aa604f0 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*3abb0d7b9c
// Size: 0x18 (Inherited: 0x00)
struct F*3abb0d7b9c {
	struct FName EmoteName; // 0x00(0x08)
	struct FName SectionName; // 0x08(0x08)
	int32 *0d0428330d; // 0x10(0x04)
	enum class EEmotePlayType *d069da4b08; // 0x14(0x01)
	bool *85e3649511; // 0x15(0x01)
	bool *a5857e8af9; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
};

// ScriptStruct TslGame.*1d052a5737
// Size: 0xf0 (Inherited: 0x00)
struct F*1d052a5737 {
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *fb7692518f; // 0x00(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *cab9ab4d34; // 0x50(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *7b6592bfb4; // 0xa0(0x50)
};

// ScriptStruct TslGame.*9aa6edbcf2
// Size: 0x50 (Inherited: 0x00)
struct F*9aa6edbcf2 {
	struct TMap<enum class EThrowableState, struct FStringArray> *ba95291072; // 0x00(0x50)
};

// ScriptStruct TslGame.*d31f05f0cb
// Size: 0x50 (Inherited: 0x00)
struct F*d31f05f0cb {
	struct TMap<struct FName, struct FString> *1a5c3b16cd; // 0x00(0x50)
};

// ScriptStruct TslGame.*f45cffea5e
// Size: 0x01 (Inherited: 0x00)
struct F*f45cffea5e {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*02538099a2
// Size: 0x01 (Inherited: 0x00)
struct F*02538099a2 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*b96dc9ff4f
// Size: 0x01 (Inherited: 0x00)
struct F*b96dc9ff4f {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*3f41516e33
// Size: 0x10 (Inherited: 0x00)
struct F*3f41516e33 {
	struct TArray<enum class *0804e2d5cd> *21b7ce6035; // 0x00(0x10)
};

// ScriptStruct TslGame.*d96d183678
// Size: 0x02 (Inherited: 0x00)
struct F*d96d183678 {
	enum class *0804e2d5cd *6f59767d56; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGame.AttackMode
// Size: 0x20 (Inherited: 0x00)
struct FAttackMode {
	float *5f999e62b8; // 0x00(0x04)
	int32 AttackId; // 0x04(0x04)
	float *94c504185c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<enum class EWeaponClass> *02eda931f7; // 0x10(0x10)
};

// ScriptStruct TslGame.*1b95d386e1
// Size: 0x10 (Inherited: 0x00)
struct F*1b95d386e1 {
	int32 *6c8bfc451f; // 0x00(0x04)
	float *a82d818f7c; // 0x04(0x04)
	int32 *6fd77afae1; // 0x08(0x04)
	int32 *50dd4a2a89; // 0x0c(0x04)
};

// ScriptStruct TslGame.*11c8f4a622
// Size: 0x14 (Inherited: 0x00)
struct F*11c8f4a622 {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct TslGame.*eda58a0a53
// Size: 0x18 (Inherited: 0x00)
struct F*eda58a0a53 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *f34757dcd4; // 0x08(0x10)
};

// ScriptStruct TslGame.*1c43a536de
// Size: 0x18 (Inherited: 0x00)
struct F*1c43a536de {
	struct FName *1b42b5b855; // 0x00(0x08)
	int32 *f3ea6a0f58; // 0x08(0x04)
	int32 *a78cc7bdc1; // 0x0c(0x04)
	int32 *12cacfc44c; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*238b8d81f9
// Size: 0x08 (Inherited: 0x00)
struct F*238b8d81f9 {
	float Distance; // 0x00(0x04)
	enum class ETargetingType TargetingMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*3742f021b6
// Size: 0x18 (Inherited: 0x00)
struct F*3742f021b6 {
	int32 *43c3e5bb27; // 0x00(0x04)
	float *fd434ce242; // 0x04(0x04)
	struct TArray<struct F*31f908f1ca> *1db1087aa2; // 0x08(0x10)
};

// ScriptStruct TslGame.*31f908f1ca
// Size: 0x18 (Inherited: 0x00)
struct F*31f908f1ca {
	int32 *4d4fa44e45; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*319b202103> Item; // 0x08(0x10)
};

// ScriptStruct TslGame.*319b202103
// Size: 0x18 (Inherited: 0x00)
struct F*319b202103 {
	enum class EAIEquipSpawnItemType *fb89bc0044; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Item; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*648728c21a
// Size: 0x08 (Inherited: 0x00)
struct F*648728c21a {
	enum class EAITriggerAttrType *5911bedbe4; // 0x00(0x01)
	enum class EAIAttrCompareType CompareType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 *868ec51fe9; // 0x04(0x04)
};

// ScriptStruct TslGame.*42bbab8f33
// Size: 0x08 (Inherited: 0x00)
struct F*42bbab8f33 {
	int32 Probability; // 0x00(0x04)
	int32 *82af751bd0; // 0x04(0x04)
};

// ScriptStruct TslGame.*8b74016420
// Size: 0x02 (Inherited: 0x00)
struct F*8b74016420 {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	enum class ECollisionResponse Response; // 0x01(0x01)
};

// ScriptStruct TslGame.*452a25ce8c
// Size: 0x28 (Inherited: 0x08)
struct F*452a25ce8c : FTableRowBase {
	bool bUseCharacterHitFeedback; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor PartsColor; // 0x0c(0x10)
	float DamageReduceMultiplier; // 0x1c(0x04)
	enum class EDamageZoneType PartsDamageZoneType; // 0x20(0x01)
	enum class EDamageReason PartsDamageReason; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*36c5bcea08
// Size: 0x18 (Inherited: 0x00)
struct F*36c5bcea08 {
	struct FLinearColor *b53f1327cd; // 0x00(0x10)
	enum class EDamageReason *7c177e982d; // 0x10(0x01)
	enum class EDamageZoneType *d10e4c4002; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float *d8bdb8ed57; // 0x14(0x04)
};

// ScriptStruct TslGame.*5abc74a578
// Size: 0x20 (Inherited: 0x00)
struct F*5abc74a578 {
	struct UTexture2D* PartsTargetImage; // 0x00(0x08)
	struct FString *772b16614e; // 0x08(0x10)
	bool bUsingCharacterHitFeedback; // 0x18(0x01)
	bool bUsingDamageIndicator; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*beef963bca
// Size: 0x200 (Inherited: 0x08)
struct F*beef963bca : FTableRowBase {
	struct F*944cd343c8 *655c22c9fc; // 0x08(0x88)
	struct F*944cd343c8 *8e1753e482; // 0x90(0x88)
	struct TArray<struct FText> *1741144af4; // 0x118(0x10)
	struct TArray<struct FText> *837bfa6820; // 0x128(0x10)
	struct TArray<struct FText> *fee91ffacb; // 0x138(0x10)
	struct TArray<struct FText> *d7f1ea9a5f; // 0x148(0x10)
	struct TArray<struct F*7b4d4cfb45> *99191d6794; // 0x158(0x10)
	struct TArray<struct F*7b4d4cfb45> *0a6a7ac7df; // 0x168(0x10)
	struct F*7b4d4cfb45 *770bf48581; // 0x178(0x38)
	struct F*7b4d4cfb45 *1983c8027d; // 0x1b0(0x38)
	struct TArray<struct F*07cb33fab5> *67a799695a; // 0x1e8(0x10)
	struct FName *7e84078511; // 0x1f8(0x08)
};

// ScriptStruct TslGame.*07cb33fab5
// Size: 0x48 (Inherited: 0x00)
struct F*07cb33fab5 {
	struct F*8efdbfb1ff *ac5b990db8; // 0x00(0x20)
	struct F*8efdbfb1ff *35687cd20a; // 0x20(0x20)
	float *ad6febd5ef; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*8efdbfb1ff
// Size: 0x20 (Inherited: 0x00)
struct F*8efdbfb1ff {
	struct FString *4ec5b6263c; // 0x00(0x10)
	struct FString *f020b2fed0; // 0x10(0x10)
};

// ScriptStruct TslGame.*7b4d4cfb45
// Size: 0x38 (Inherited: 0x00)
struct F*7b4d4cfb45 {
	struct FText *49d02e389c; // 0x00(0x18)
	struct FText *2d6a26a656; // 0x18(0x18)
	bool *b9f255872a; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*944cd343c8
// Size: 0x88 (Inherited: 0x00)
struct F*944cd343c8 {
	struct FText *461921c994; // 0x00(0x18)
	struct UPlatformMediaSource* *1b7950d6f1; // 0x18(0x08)
	struct UAkAudioEvent* *b29c99b8c4; // 0x20(0x08)
	struct FText *42ff5fbe18; // 0x28(0x18)
	struct FText *1795300112; // 0x40(0x18)
	struct FText *883442eba1; // 0x58(0x18)
	struct FText *76b9675aaf; // 0x70(0x18)
};

// ScriptStruct TslGame.*dc0f6c0ffe
// Size: 0xa8 (Inherited: 0x00)
struct F*dc0f6c0ffe {
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
	struct U*1ba2d2b086* RecoilCurve; // 0x58(0x08)
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
	char *22522aa9ea : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UBlendSpace1D* *2c37825d0e; // 0x08(0x08)
	struct UBlendSpaceBase* *d43abea984; // 0x10(0x08)
	struct UAnimMontage* *fb24426dfb; // 0x18(0x08)
	struct UAnimMontage* *915df9bbf5; // 0x20(0x08)
	struct UAnimMontage* *4dfe39299b; // 0x28(0x08)
	struct UAnimMontage* *a8346265b2; // 0x30(0x08)
	struct UAnimMontage* *34be4ce811; // 0x38(0x08)
	struct UAnimMontage* *581560dae6; // 0x40(0x08)
	struct UAnimMontage* *bdd2db9d1b; // 0x48(0x08)
	struct UAnimMontage* *95ba239194; // 0x50(0x08)
	struct UAnimMontage* *b895defaaf; // 0x58(0x08)
	struct UAnimMontage* *3c89189a50; // 0x60(0x08)
	struct UAnimMontage* *36c71120b5; // 0x68(0x08)
	enum class EWeaponClass *6f3016f58c; // 0x70(0x01)
	bool *882653201d; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float *fd18cdbb0f; // 0x74(0x04)
	float *779e69ca14; // 0x78(0x04)
	float *43ff718a25; // 0x7c(0x04)
	float *319cb0e386; // 0x80(0x04)
	float *8d16ae2a8b; // 0x84(0x04)
	bool *87f691bc6f; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *0fccab5e03; // 0x8c(0x04)
	float *e8e46bbbf4; // 0x90(0x04)
	float *6d3a559b59; // 0x94(0x04)
	bool *d233571b0e; // 0x98(0x01)
	bool *665977b117; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32 *87d57876bd; // 0x9c(0x04)
	struct UClass* *32a374a467; // 0xa0(0x08)
	struct UClass* *f969e9fc4a; // 0xa8(0x08)
	struct UClass* *b208292da0; // 0xb0(0x08)
	struct UClass* *3502bc30ee; // 0xb8(0x08)
	struct UCameraAnim* *8d3bf28fba; // 0xc0(0x08)
	float RecoilKickADS; // 0xc8(0x04)
	float RecoilKick_MovementSpeedMax; // 0xcc(0x04)
	float RecoilKick_MovementMaxMultiplier; // 0xd0(0x04)
	struct FVector RecoilADSSocketOffsetScale; // 0xd4(0x0c)
	struct FVector *233a72ab86; // 0xe0(0x0c)
	struct FVector *94f5199a95; // 0xec(0x0c)
	float *cf9c5f23e3; // 0xf8(0x04)
	float *e0d042b671; // 0xfc(0x04)
	bool bUseBurstRecoilMap; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FVector2D BurstRecoilInMap; // 0x104(0x08)
	struct FVector2D BurstRecoilOutMap; // 0x10c(0x08)
	float *d9b3f910b2; // 0x114(0x04)
	struct TMap<enum class EAnimStance, float> *371a4bfd07; // 0x118(0x50)
	struct TMap<enum class EAnimStance, float> *4bb385bf84; // 0x168(0x50)
	float *14410a997e; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// ScriptStruct TslGame.WeaponDeviationConfig
// Size: 0x6c (Inherited: 0x00)
struct FWeaponDeviationConfig {
	float *04e352ae73; // 0x00(0x04)
	float *3a3aa5bb16; // 0x04(0x04)
	float MOA; // 0x08(0x04)
	float DeviationRecoilGain; // 0x0c(0x04)
	float DeviationRecoilGainAim; // 0x10(0x04)
	float DeviationRecoilGainADS; // 0x14(0x04)
	float *222acfebc4; // 0x18(0x04)
	float *345e984fbb; // 0x1c(0x04)
	float *a04dc14dcd; // 0x20(0x04)
	float *b36793dc38; // 0x24(0x04)
	float *6f54eedd0b; // 0x28(0x04)
	float *2360d856c8; // 0x2c(0x04)
	float *c4332087f0; // 0x30(0x04)
	float *79980cd08c; // 0x34(0x04)
	float *b6081865a0; // 0x38(0x04)
	float *128e1a2732; // 0x3c(0x04)
	float *6c55ffbd4b; // 0x40(0x04)
	float *d69f964fd7; // 0x44(0x04)
	float *814a6da2de; // 0x48(0x04)
	float *cc4aad5d85; // 0x4c(0x04)
	float *f27be4a37d; // 0x50(0x04)
	float *6d1a688d30; // 0x54(0x04)
	float *6c568dcc8a; // 0x58(0x04)
	float *fbf98646b7; // 0x5c(0x04)
	float *af4bc48421; // 0x60(0x04)
	float *f8be9d6e46; // 0x64(0x04)
	float *728e18ed5b; // 0x68(0x04)
};

// ScriptStruct TslGame.*eec0f24da3
// Size: 0x2c0 (Inherited: 0x00)
struct F*eec0f24da3 {
	struct FName *1b42b5b855; // 0x00(0x08)
	struct UParticleSystem* *08dfe055f4; // 0x08(0x08)
	int32 *59b52bb465; // 0x10(0x04)
	int32 *e7e3887b5f; // 0x14(0x04)
	bool bUseGameplayTracers; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UClass* GameplayTracerClassOverride; // 0x20(0x08)
	int32 GameplayTracerAmmoModOverride; // 0x28(0x04)
	int32 GameplayTracerAmmoMinOverride; // 0x2c(0x04)
	int32 *f6c1f1f79e; // 0x30(0x04)
	float TimeBetweenShots; // 0x34(0x04)
	struct TArray<struct F*b0c768ad93> AttachmentTagData; // 0x38(0x10)
	int32 RPM; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TMap<enum class EFiringMode, float> TimeBetweenShotsOverride; // 0x50(0x50)
	bool bUseTimeBetweenBursts; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float TimeBetweenBursts; // 0xa4(0x04)
	float NoAnimReloadDuration; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<enum class EFiringMode> *71246444d2; // 0xb0(0x10)
	int32 *47dc8b036f; // 0xc0(0x04)
	float *b0d09454f2; // 0xc4(0x04)
	int32 BulletPerFiring; // 0xc8(0x04)
	float *a2f728cb2e; // 0xcc(0x04)
	bool *85b472b88a; // 0xd0(0x01)
	bool *056bfb6ab6; // 0xd1(0x01)
	enum class EWeaponReloadMethod *9fbdb0ab37; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float *52b700665f; // 0xd4(0x04)
	float *942d43dea7; // 0xd8(0x04)
	float *3ee0847ab4; // 0xdc(0x04)
	float *aaedf23f18; // 0xe0(0x04)
	float *4ef06b828c; // 0xe4(0x04)
	float *952f0f6c55; // 0xe8(0x04)
	float *b12b489e57; // 0xec(0x04)
	bool *a1bfce100e; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector *b4aa35badc; // 0xf4(0x0c)
	struct FVector *62c467e18d; // 0x100(0x0c)
	bool *435ed13b7c; // 0x10c(0x01)
	bool *779d337741; // 0x10d(0x01)
	bool *ebcbd997b1; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	float *2d6a09f785; // 0x110(0x04)
	bool *a7e8cb181a; // 0x114(0x01)
	bool *474e6e7feb; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
	struct TMap<int32, struct FVector2D> *6a693e23aa; // 0x118(0x50)
	float *184f0bbdb5; // 0x168(0x04)
	float *beb1cd0b69; // 0x16c(0x04)
	bool *d887e7c660; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float *3f728f13be; // 0x174(0x04)
	float *a6ec1a7d8e; // 0x178(0x04)
	float *dfce5dea16; // 0x17c(0x04)
	float *d4f83fb701; // 0x180(0x04)
	float *ec5ba973bc; // 0x184(0x04)
	float *35b827aefa; // 0x188(0x04)
	float *3d9d2b7e6d; // 0x18c(0x04)
	float *fa0da633a2; // 0x190(0x04)
	bool *28c8714a11; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float *7c7eb74990; // 0x198(0x04)
	bool *019340cf27; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	int32 *8028fe0026; // 0x1a0(0x04)
	float *5db5f9e27f; // 0x1a4(0x04)
	struct UCurveFloat* *859e1536ed; // 0x1a8(0x08)
	struct UClass* *498af98d1d; // 0x1b0(0x08)
	bool *53f019e846; // 0x1b8(0x01)
	bool *71a0250e35; // 0x1b9(0x01)
	bool *3077619bb0; // 0x1ba(0x01)
	char pad_1BB[0x1]; // 0x1bb(0x01)
	int32 *2a65969ba0; // 0x1bc(0x04)
	bool *77a146297c; // 0x1c0(0x01)
	bool *45501bfa51; // 0x1c1(0x01)
	char pad_1C2[0x6]; // 0x1c2(0x06)
	struct TMap<int32, float> *8ca68cae45; // 0x1c8(0x50)
	struct UClass* *8cbaaca995; // 0x218(0x08)
	struct TMap<enum class EFiringMode, struct UAkAudioEvent*> *7fd0a02e3f; // 0x220(0x50)
	struct TMap<enum class EScopeType, float> *f81466fe08; // 0x270(0x50)
};

// ScriptStruct TslGame.*84299c25d9
// Size: 0x1c (Inherited: 0x00)
struct F*84299c25d9 {
	float *0e6c58f59e; // 0x00(0x04)
	float *18bf0a4ae3; // 0x04(0x04)
	float *67dfd78554; // 0x08(0x04)
	float *ca0f81cccd; // 0x0c(0x04)
	int32 *608ddcc5bb; // 0x10(0x04)
	int32 *188a72a946; // 0x14(0x04)
	int32 *8e5f7608fd; // 0x18(0x04)
};

// ScriptStruct TslGame.*9781137ab3
// Size: 0x20 (Inherited: 0x00)
struct F*9781137ab3 {
	struct TArray<struct F*927e1b16ac> *87d0340c87; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*927e1b16ac
// Size: 0x10 (Inherited: 0x00)
struct F*927e1b16ac {
	struct FName SkinId; // 0x00(0x08)
	int32 *0cd1bf2d81; // 0x08(0x04)
	int32 *e3a8e36201; // 0x0c(0x04)
};

// ScriptStruct TslGame.*9f31abe5bd
// Size: 0x60 (Inherited: 0x08)
struct F*9f31abe5bd : FTableRowBase {
	float *550abff9c3; // 0x08(0x04)
	float *364688db89; // 0x0c(0x04)
	float *9c955ff33c; // 0x10(0x04)
	float *ce6417e764; // 0x14(0x04)
	float *5c3501a3d9; // 0x18(0x04)
	int32 *bc2c229cc8; // 0x1c(0x04)
	float *06f6758a5a; // 0x20(0x04)
	float *e1e891e783; // 0x24(0x04)
	float *50542657fc; // 0x28(0x04)
	float *48fdb82fbf; // 0x2c(0x04)
	float *aa4aaf9f19; // 0x30(0x04)
	float *3fa0cf2cb1; // 0x34(0x04)
	float *533e24c436; // 0x38(0x04)
	float *62a1c89c79; // 0x3c(0x04)
	float *0627cc946d; // 0x40(0x04)
	float *3708346fb9; // 0x44(0x04)
	float *3101fe1549; // 0x48(0x04)
	float *a1afefbfda; // 0x4c(0x04)
	float *ef238f0278; // 0x50(0x04)
	float *a2d0387c0d; // 0x54(0x04)
	float *0a24fb38e5; // 0x58(0x04)
	float *d27d9a86ec; // 0x5c(0x04)
};

// ScriptStruct TslGame.*2e8b63a583
// Size: 0x1c (Inherited: 0x00)
struct F*2e8b63a583 {
	float *550abff9c3; // 0x00(0x04)
	float *4ca6fb5634; // 0x04(0x04)
	float *f09272ba7d; // 0x08(0x04)
	float *d89c794003; // 0x0c(0x04)
	float *c1b2a833b4; // 0x10(0x04)
	float *524acf7d82; // 0x14(0x04)
	float *e9cfff21e0; // 0x18(0x04)
};

// ScriptStruct TslGame.*0785414cd0
// Size: 0x70 (Inherited: 0x00)
struct F*0785414cd0 {
	struct TArray<struct FName> Bodies; // 0x00(0x10)
	struct TArray<struct FName> Legs; // 0x10(0x10)
	struct TArray<struct FName> *a0b7f270dc; // 0x20(0x10)
	struct TArray<struct FName> *95d4a843e0; // 0x30(0x10)
	struct TArray<struct FName> Hands; // 0x40(0x10)
	struct TArray<struct FName> *007ff40e88; // 0x50(0x10)
	struct TArray<struct FName> *cc981e0681; // 0x60(0x10)
};

// ScriptStruct TslGame.*250eb4c817
// Size: 0x60 (Inherited: 0x00)
struct F*250eb4c817 {
	char pad_0[0x30]; // 0x00(0x30)
	struct F*ebc5cb02a8 *c0a230dc05; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct TslGame.*ebc5cb02a8
// Size: 0x18 (Inherited: 0x00)
struct F*ebc5cb02a8 {
	int32 PresetIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *7229a252bd; // 0x08(0x10)
};

// ScriptStruct TslGame.*92c6eb7b49
// Size: 0x10 (Inherited: 0x00)
struct F*92c6eb7b49 {
	struct TArray<int32> *5d82dfd9c2; // 0x00(0x10)
};

// ScriptStruct TslGame.*49efbf7546
// Size: 0x10 (Inherited: 0x00)
struct F*49efbf7546 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*90f28c5b8e
// Size: 0x18 (Inherited: 0x00)
struct F*90f28c5b8e {
	struct ATslPlayerState* *2b1dacfdd5; // 0x00(0x08)
	bool bEnabled; // 0x08(0x01)
	bool *016402f8e7; // 0x09(0x01)
	enum class ETslRedeployPlayerState State; // 0x0a(0x01)
	int8 *3485d5d84c; // 0x0b(0x01)
	bool *9abe55fdf6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *067ca9770d; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*5eabd1cd66
// Size: 0x24 (Inherited: 0x00)
struct F*5eabd1cd66 {
	bool bEnabled; // 0x00(0x01)
	bool *016402f8e7; // 0x01(0x01)
	bool *be2f453267; // 0x02(0x01)
	bool *6a734e0186; // 0x03(0x01)
	bool *323881f39e; // 0x04(0x01)
	bool *781b3e4359; // 0x05(0x01)
	bool *37a97638d6; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float *0b8a70b29d; // 0x08(0x04)
	float *7c80aa21b1; // 0x0c(0x04)
	float *95ac3475f3; // 0x10(0x04)
	float *3c56bc298d; // 0x14(0x04)
	float *b78040c0b5; // 0x18(0x04)
	float RedeploySec; // 0x1c(0x04)
	float *e22756304c; // 0x20(0x04)
};

// ScriptStruct TslGame.BaseUserPlayData
// Size: 0x08 (Inherited: 0x00)
struct FBaseUserPlayData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*5a687b705a
// Size: 0x06 (Inherited: 0x00)
struct F*5a687b705a {
	bool *4762a05e78; // 0x00(0x01)
	bool *57c3a2ae4f; // 0x01(0x01)
	enum class EAutoEquipAttachmentForScopeMode *0bae837218; // 0x02(0x01)
	bool *673df7e998; // 0x03(0x01)
	bool *4947750a1c; // 0x04(0x01)
	bool *5df178937b; // 0x05(0x01)
};

// ScriptStruct TslGame.*dc05075e3d
// Size: 0x20 (Inherited: 0x00)
struct F*dc05075e3d {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*35f615e99e
// Size: 0x20 (Inherited: 0x00)
struct F*35f615e99e {
	bool *a1b21c2ab0; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime *b4035d1879; // 0x08(0x08)
	struct FString *8d3dd77e8d; // 0x10(0x10)
};

// ScriptStruct TslGame.*1751eee960
// Size: 0x20 (Inherited: 0x00)
struct F*1751eee960 {
	bool bSpawnWayPoint; // 0x00(0x01)
	bool bShowWayPoint_PS; // 0x01(0x01)
	bool bCancelWayPoint; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32 MaxWayPointNum_PS; // 0x04(0x04)
	struct TArray<struct FVector2D> WayPointPosArr_PS; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*661c62aa95
// Size: 0x10 (Inherited: 0x00)
struct F*661c62aa95 {
	struct UClass* *2310b89a46; // 0x00(0x08)
	int32 *8cb0625e4a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*be450953ed
// Size: 0x10 (Inherited: 0x00)
struct F*be450953ed {
	struct FName ItemID; // 0x00(0x08)
	enum class ECastableItemType *fb89bc0044; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 *8cb0625e4a; // 0x0c(0x04)
};

// ScriptStruct TslGame.*94738f547e
// Size: 0xc40 (Inherited: 0x00)
struct F*94738f547e {
	struct F*69ab19fed4 *84d2e64f41; // 0x00(0x78)
	struct F*69ab19fed4 *3913960b0a; // 0x78(0x78)
	struct F*69ab19fed4 *b3fb79cdcf; // 0xf0(0x78)
	struct F*69ab19fed4 *d7b6a34f17; // 0x168(0x78)
	struct F*69ab19fed4 *8a6144b428; // 0x1e0(0x78)
	struct F*69ab19fed4 *87f9116ab3; // 0x258(0x78)
	struct F*69ab19fed4 *8839ee8577; // 0x2d0(0x78)
	struct F*69ab19fed4 *d0e3a0928e; // 0x348(0x78)
	struct F*69ab19fed4 *5f2c6ab286; // 0x3c0(0x78)
	struct F*69ab19fed4 *90b3f8e799; // 0x438(0x78)
	struct F*69ab19fed4 FleshDecal; // 0x4b0(0x78)
	struct F*69ab19fed4 *afbbf8d588; // 0x528(0x78)
	struct F*69ab19fed4 *48933d646a; // 0x5a0(0x78)
	struct F*69ab19fed4 *be107fb105; // 0x618(0x78)
	struct F*69ab19fed4 *b0bbae71f4; // 0x690(0x78)
	struct F*69ab19fed4 *d6725551f8; // 0x708(0x78)
	struct F*69ab19fed4 *06794e09e7; // 0x780(0x78)
	struct F*69ab19fed4 *f971220d19; // 0x7f8(0x78)
	struct F*69ab19fed4 *6b3b3658a3; // 0x870(0x78)
	struct F*69ab19fed4 *80a958dab4; // 0x8e8(0x78)
	struct F*69ab19fed4 *98ad25514b; // 0x960(0x78)
	struct F*69ab19fed4 *77ee4c6f4e; // 0x9d8(0x78)
	bool *bb042a3d0e; // 0xa50(0x01)
	char pad_A51[0x7]; // 0xa51(0x07)
	struct F*69ab19fed4 SprayDecal; // 0xa58(0x78)
	struct F*69ab19fed4 *d1287d92ba; // 0xad0(0x78)
	struct F*69ab19fed4 *3ea6f81d93; // 0xb48(0x78)
	struct F*69ab19fed4 *3f30b73dba; // 0xbc0(0x78)
	bool *d5c765c2cb; // 0xc38(0x01)
	char pad_C39[0x7]; // 0xc39(0x07)
};

// ScriptStruct TslGame.*69ab19fed4
// Size: 0x78 (Inherited: 0x00)
struct F*69ab19fed4 {
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
	struct F*09352ad00b DecalChannels; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector2D DotProductLongScaleMapIn; // 0x44(0x08)
	struct FVector2D DotProductLongScaleMapOut; // 0x4c(0x08)
	struct FVector2D DotProductLatScaleMapIn; // 0x54(0x08)
	struct FVector2D DotProductLatScaleMapOut; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture* *07f92f0293; // 0x68(0x08)
	int32 *b064721d31; // 0x70(0x04)
	float *17d3e7f122; // 0x74(0x04)
};

// ScriptStruct TslGame.*4cae650bb9
// Size: 0x30 (Inherited: 0x00)
struct F*4cae650bb9 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*34c57aa3ea
// Size: 0x18 (Inherited: 0x00)
struct F*34c57aa3ea {
	float MaxDot; // 0x00(0x04)
	struct FFloatRange RicochetChance; // 0x04(0x10)
	bool bAlwaysScaleDecal; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*cc3cd3b74d
// Size: 0x110 (Inherited: 0x00)
struct F*cc3cd3b74d {
	struct UStaticMesh* *8df9e8c193; // 0x00(0x08)
	struct TArray<struct UMaterialInstance*> *a876728d7b; // 0x08(0x10)
	struct UStaticMesh* *030e866f20; // 0x18(0x08)
	struct TArray<struct UMaterialInstance*> *bdbeb7af9d; // 0x20(0x10)
	struct UStaticMesh* *435bdb5bbb; // 0x30(0x08)
	struct TArray<struct UMaterialInstance*> *30ad1a2780; // 0x38(0x10)
	struct UClass* *c2808c045c; // 0x48(0x08)
	struct UClass* *d903b5cc46; // 0x50(0x08)
	bool *9ab12247d7; // 0x58(0x01)
	bool *05cc6590c2; // 0x59(0x01)
	bool *616ad762b5; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct UPhysicalMaterial* PhysMaterial; // 0x60(0x08)
	struct UTexture2D* *edf044e99b; // 0x68(0x08)
	struct U*523ffa5083* *0e9f32f3ef; // 0x70(0x08)
	struct UTexture2D* *7759e57732; // 0x78(0x08)
	struct TArray<struct U*4bc28c6279*> *4d8677d1ac; // 0x80(0x10)
	bool *0b17e8a68a; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UMaterialInstance*> *d023101359; // 0x98(0x10)
	struct UStaticMesh* *8548b54310; // 0xa8(0x08)
	struct TArray<struct UMaterialInstance*> *f20256ced2; // 0xb0(0x10)
	int32 *f2c2c0900d; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UClass* *d4733190e0; // 0xc8(0x08)
	struct TArray<enum class EDestrucibleSurfaceSourceType> *e82a9614cd; // 0xd0(0x10)
	bool *4d7012f4a8; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32 *9f9c2c44fb; // 0xe4(0x04)
	float *a003544151; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UClass* *101aca3f5b; // 0xf0(0x08)
	float *ca7b1e4417; // 0xf8(0x04)
	float BulletEntranceRadiusSize; // 0xfc(0x04)
	float BulletExitRadiusSize; // 0x100(0x04)
	bool HitsOnlyAffectFacingSurface; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UStaticMesh* FrameComplexCollisionMesh; // 0x108(0x08)
};

// ScriptStruct TslGame.*6b6fb7e3d4
// Size: 0x08 (Inherited: 0x00)
struct F*6b6fb7e3d4 {
	uint16 *073d876b1d; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32 InstanceIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*6de2405f16
// Size: 0x34 (Inherited: 0x00)
struct F*6de2405f16 {
	uint16 *073d876b1d; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct F*95b0963dcd Hit; // 0x04(0x30)
};

// ScriptStruct TslGame.*95b0963dcd
// Size: 0x30 (Inherited: 0x00)
struct F*95b0963dcd {
	struct FVector_NetQuantize HitLocation; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal *bdd8a6580f; // 0x0c(0x0c)
	int32 InstanceIndex; // 0x18(0x04)
	enum class EDestrucibleSurfaceSourceType *498af98d1d; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Radius; // 0x20(0x04)
	struct FVector_NetQuantize *f21129494c; // 0x24(0x0c)
};

// ScriptStruct TslGame.ParticleParameter
// Size: 0x18 (Inherited: 0x00)
struct FParticleParameter {
	struct FName Name; // 0x00(0x08)
	struct FVector Value; // 0x08(0x0c)
	bool bEnableRTPC; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*e8fbb4619f
// Size: 0x60 (Inherited: 0x00)
struct F*e8fbb4619f {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UClass* ParticleEnvironment; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct TslGame.*066f4bbc04
// Size: 0x60 (Inherited: 0x00)
struct F*066f4bbc04 {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UParticleSystem* ParticleSystem; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	bool UseWorldTransform; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)
};

// ScriptStruct TslGame.*fbffdf64b7
// Size: 0xe0 (Inherited: 0x00)
struct F*fbffdf64b7 {
	struct FGuid ID; // 0x00(0x10)
	struct TArray<struct UActorComponent*> StaticComponents; // 0x10(0x10)
	struct TMap<struct UStaticMeshComponent*, struct F*97cb0e813a> InstancedComponents; // 0x20(0x50)
	struct TArray<struct UDoorInteractionComponent*> DoorComponents; // 0x70(0x10)
	struct TArray<struct APostProcessVolume*> PostProcessVolumes; // 0x80(0x10)
	struct TMap<struct UAkSoundVolumesContainerComponent*, struct F*a711068f6d> LinkedSoundVolumesMap; // 0x90(0x50)
};

// ScriptStruct TslGame.*a711068f6d
// Size: 0x10 (Inherited: 0x00)
struct F*a711068f6d {
	struct TArray<int32> *93d6bca881; // 0x00(0x10)
};

// ScriptStruct TslGame.*97cb0e813a
// Size: 0x10 (Inherited: 0x00)
struct F*97cb0e813a {
	struct TArray<int32> Indices; // 0x00(0x10)
};

// ScriptStruct TslGame.*09c8941436
// Size: 0x10 (Inherited: 0x00)
struct F*09c8941436 {
	struct TArray<struct F*4e4adbeab9> Beacons; // 0x00(0x10)
};

// ScriptStruct TslGame.*4e4adbeab9
// Size: 0xd0 (Inherited: 0x00)
struct F*4e4adbeab9 {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FTransform BeaconTransform; // 0x10(0x30)
	struct FVector BuildingLocalOriginOffset; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct F*066f4bbc04> ParticleEffects; // 0x50(0x10)
	struct TArray<struct F*e8fbb4619f> ParticleEnvironments; // 0x60(0x10)
	float NearbyHitParticleDistance; // 0x70(0x04)
	float DamageRadius; // 0x74(0x04)
	struct FVector VolumetricScale; // 0x78(0x0c)
	struct FGuid DestructibleId; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
	struct USkeletalMesh* DestructionMesh; // 0x98(0x08)
	struct UAnimationAsset* DestructionAnimation; // 0xa0(0x08)
	float DestroyAnimationDelayTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*5aecb9498b> BeaconKillBoxes; // 0xb0(0x10)
	bool WasHit; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// ScriptStruct TslGame.*5aecb9498b
// Size: 0x50 (Inherited: 0x00)
struct F*5aecb9498b {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct FTransform KillZoneTransfrom; // 0x10(0x30)
	struct FVector KillZoneExtent; // 0x40(0x0c)
	bool KillPlayers; // 0x4c(0x01)
	bool DeleteItems; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct TslGame.*39a0365314
// Size: 0x24 (Inherited: 0x00)
struct F*39a0365314 {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FVector BlackZoneOrigin; // 0x10(0x0c)
	float BlackZoneRadius; // 0x1c(0x04)
	bool BeaconsPresent; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*3822a063a8
// Size: 0x18 (Inherited: 0x00)
struct F*3822a063a8 {
	bool *96b6240661; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid ID; // 0x04(0x10)
	float *dd3f864209; // 0x14(0x04)
};

// ScriptStruct TslGame.*9f7e91ab9e
// Size: 0x08 (Inherited: 0x00)
struct F*9f7e91ab9e {
	int32 Mode; // 0x00(0x04)
	int32 Type; // 0x04(0x04)
};

// ScriptStruct TslGame.*5e27e8d33b
// Size: 0x88 (Inherited: 0x00)
struct F*5e27e8d33b {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct TslGame.*8d95edb665
// Size: 0x38 (Inherited: 0x30)
struct F*8d95edb665 : F*06b30c70e7 {
	float *87db502472; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*06b30c70e7
// Size: 0x30 (Inherited: 0x00)
struct F*06b30c70e7 {
	struct FVector *0a03c95977; // 0x00(0x0c)
	struct FVector Dir; // 0x0c(0x0c)
	struct FAttackId AttackId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UClass* *e75687fdc3; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct TslGame.*64d90addf7
// Size: 0x08 (Inherited: 0x00)
struct F*64d90addf7 {
	float *0ad22a4796; // 0x00(0x04)
	uint16 *d05aeb858d; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGame.*6106400a99
// Size: 0x30 (Inherited: 0x00)
struct F*6106400a99 {
	float *0ad22a4796; // 0x00(0x04)
	uint16 *3bda9df4e4; // 0x04(0x02)
	uint16 *69e0a09910; // 0x06(0x02)
	uint16 *fbaca0a63d; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct F*d788ccc5b8> *702c832ca5; // 0x10(0x10)
	struct TArray<struct F*2e866de585> *2bf25a5ef8; // 0x20(0x10)
};

// ScriptStruct TslGame.*2e866de585
// Size: 0x10 (Inherited: 0x00)
struct F*2e866de585 {
	uint16 *c8146e43e0; // 0x00(0x02)
	uint16 *b0c48bff04; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Content; // 0x08(0x08)
};

// ScriptStruct TslGame.*d788ccc5b8
// Size: 0x06 (Inherited: 0x00)
struct F*d788ccc5b8 {
	uint16 *b0c48bff04; // 0x00(0x02)
	uint16 *f252edcf41; // 0x02(0x02)
	uint16 *0918589e2f; // 0x04(0x02)
};

// ScriptStruct TslGame.*a95dac60c6
// Size: 0x30 (Inherited: 0x00)
struct F*a95dac60c6 {
	struct ATslCharacter* *d28fa1a0a3; // 0x00(0x08)
	struct FVector *2a78a53ff4; // 0x08(0x0c)
	struct FVector *19bad4d34f; // 0x14(0x0c)
	float *6865182251; // 0x20(0x04)
	float *265b8d3804; // 0x24(0x04)
	float *41db3d1c2f; // 0x28(0x04)
	float *a682d16229; // 0x2c(0x04)
};

// ScriptStruct TslGame.*bc60da79b1
// Size: 0x20 (Inherited: 0x08)
struct F*bc60da79b1 : FTableRowBase {
	struct FName SpawnKitName; // 0x08(0x08)
	struct TArray<struct F*d134abf060> SpawnKitInfos; // 0x10(0x10)
};

// ScriptStruct TslGame.*d134abf060
// Size: 0x100 (Inherited: 0x08)
struct F*d134abf060 : FTableRowBase {
	enum class EWeaponClass WeaponCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString SpawnKitId; // 0x10(0x10)
	struct FText InfoName; // 0x20(0x18)
	struct TArray<struct F*24e949c1ef> ItemInfos; // 0x38(0x10)
	struct F*35ac54282c VehicleInfo; // 0x48(0xb8)
};

// ScriptStruct TslGame.*35ac54282c
// Size: 0xb8 (Inherited: 0x00)
struct F*35ac54282c {
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

// ScriptStruct TslGame.*24e949c1ef
// Size: 0x20 (Inherited: 0x00)
struct F*24e949c1ef {
	int32 ItemCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	struct TArray<struct FName> AttachmentIDs; // 0x10(0x10)
};

// ScriptStruct TslGame.*27a181af37
// Size: 0x20 (Inherited: 0x00)
struct F*27a181af37 {
	struct FString *0ee29f92a4; // 0x00(0x10)
	struct TArray<struct F*b6d7414cbf> *b7b1d0817a; // 0x10(0x10)
};

// ScriptStruct TslGame.*b6d7414cbf
// Size: 0x18 (Inherited: 0x00)
struct F*b6d7414cbf {
	struct FName *64ba3be95e; // 0x00(0x08)
	struct TArray<struct FName> *dfb31fb113; // 0x08(0x10)
};

// ScriptStruct TslGame.*d44c36dfa5
// Size: 0x50 (Inherited: 0x00)
struct F*d44c36dfa5 {
	struct TMap<struct FString, struct F*daf57ec4ab> *e5f5ceca52; // 0x00(0x50)
};

// ScriptStruct TslGame.*daf57ec4ab
// Size: 0x180 (Inherited: 0xc8)
struct F*daf57ec4ab : F*7e5faca913 {
	struct FString *0ee29f92a4; // 0xc8(0x10)
	float *d1f42a835c; // 0xd8(0x04)
	float *2f7ead96ec; // 0xdc(0x04)
	struct TMap<enum class EEquipSlotID, int32> *1f902d82e3; // 0xe0(0x50)
	struct TMap<enum class EEquipSlotID, int32> *f26563d865; // 0x130(0x50)
};

// ScriptStruct TslGame.*7e5faca913
// Size: 0xc8 (Inherited: 0x00)
struct F*7e5faca913 {
	struct TArray<struct UItem*> Items; // 0x00(0x10)
	struct F*35ac54282c VehicleInfo; // 0x10(0xb8)
};

// ScriptStruct TslGame.*c26b85ff07
// Size: 0x290 (Inherited: 0x268)
struct F*c26b85ff07 : F*a1c66df06e {
	struct UTexture* AmmoIcon; // 0x268(0x20)
	float AmmoIconRatio; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
};

// ScriptStruct TslGame.*33858a901d
// Size: 0x20 (Inherited: 0x00)
struct F*33858a901d {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	bool *31a70cd07d; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *cd42cee89d; // 0x10(0x08)
	struct FName *6292e9b00c; // 0x18(0x08)
};

// ScriptStruct TslGame.*1b4c9437a2
// Size: 0x05 (Inherited: 0x00)
struct F*1b4c9437a2 {
	bool *7b264ab882; // 0x00(0x01)
	int8 *4af00aaf0c; // 0x01(0x01)
	int8 *5164a31914; // 0x02(0x01)
	enum class EWeaponTransitionState State; // 0x03(0x01)
	enum class EWeaponTransitionState *68ef512233; // 0x04(0x01)
};

// ScriptStruct TslGame.*3003deb47f
// Size: 0x70 (Inherited: 0x60)
struct F*3003deb47f : F*00adf36ce9 {
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct TslGame.*00adf36ce9
// Size: 0x60 (Inherited: 0x00)
struct F*00adf36ce9 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*a23476f103
// Size: 0x40 (Inherited: 0x00)
struct F*a23476f103 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*d5ae614283
// Size: 0x08 (Inherited: 0x00)
struct F*d5ae614283 {
	int32 *1b5aab66ec; // 0x00(0x04)
	enum class ECoinTakeType *045456125e; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*ed3a96c7f7
// Size: 0x20 (Inherited: 0x00)
struct F*ed3a96c7f7 {
	enum class EBombGameAreaType *6a578db0fc; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *08e41facb6; // 0x08(0x18)
};

// ScriptStruct TslGame.*7554e3db0c
// Size: 0x08 (Inherited: 0x00)
struct F*7554e3db0c {
	enum class ECoinTakeType *045456125e; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 OverrideIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*cff16b0e17
// Size: 0x10 (Inherited: 0x00)
struct F*cff16b0e17 {
	bool *551301f19b; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
};

// ScriptStruct TslGame.*0dad275b91
// Size: 0x18 (Inherited: 0x00)
struct F*0dad275b91 {
	int32 TeamId; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	int32 *d5aa50c4ee; // 0x08(0x04)
	int32 *6f8c37c5ee; // 0x0c(0x04)
	int32 *e1d8b53198; // 0x10(0x04)
	int32 *c76fb056e8; // 0x14(0x04)
};

// ScriptStruct TslGame.*820a0d4429
// Size: 0x14 (Inherited: 0x00)
struct F*820a0d4429 {
	int32 *23aaa59575; // 0x00(0x04)
	enum class ETslBombTeamRole *489503c453; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct F*39cb2bb14f *79d96216f7; // 0x08(0x08)
	bool *34044e5310; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*39cb2bb14f
// Size: 0x08 (Inherited: 0x00)
struct F*39cb2bb14f {
	enum class ETslBombRoundResultHistoryType *481511cacb; // 0x00(0x01)
	enum class EBombRoundResultConditionType *7f13251668; // 0x01(0x01)
	enum class EBombUITeamStatusType *d60228ff85; // 0x02(0x01)
	bool *2386e59335; // 0x03(0x01)
	int32 *7bd44238a0; // 0x04(0x04)
};

// ScriptStruct TslGame.*ca1c29b74c
// Size: 0x18 (Inherited: 0x00)
struct F*ca1c29b74c {
	struct FString BattleAreaType; // 0x00(0x10)
	enum class ETslBombTeamRole TeamRole; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 TeamMemberIndex; // 0x14(0x04)
};

// ScriptStruct TslGame.*6a02801d4f
// Size: 0x18 (Inherited: 0x00)
struct F*6a02801d4f {
	int32 *e1d190a9d3; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATslPlayerState*> *8d9abc148d; // 0x08(0x10)
};

// ScriptStruct TslGame.TslAnimNode_MirrorAnimation
// Size: 0xa8 (Inherited: 0x30)
struct FTslAnimNode_MirrorAnimation : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct U*7eb9c72e58* BoneMirrorSettings; // 0x48(0x08)
	struct U*7eb9c72e58* PrevBoneMirrorSettings; // 0x50(0x08)
	struct FBoneReference ItemBone; // 0x58(0x18)
	struct FBoneReference ItemBoneNewParent; // 0x70(0x18)
	char pad_88[0x20]; // 0x88(0x20)
};

// ScriptStruct TslGame.*288e4ed2fa
// Size: 0x20 (Inherited: 0x00)
struct F*288e4ed2fa {
	struct FName BoneName; // 0x00(0x08)
	struct FName *fe8b979e73; // 0x08(0x08)
	struct FRotator *49f00cb00d; // 0x10(0x0c)
	enum class EAxis *d6b24f1a42; // 0x1c(0x01)
	enum class EAxis *52ab60953b; // 0x1d(0x01)
	bool *eebb1da0e5; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct TslGame.*cf863e3b5c
// Size: 0x10 (Inherited: 0x00)
struct F*cf863e3b5c {
	struct TArray<struct F*b9d7d4c083> Ranges; // 0x00(0x10)
};

// ScriptStruct TslGame.*b9d7d4c083
// Size: 0x08 (Inherited: 0x00)
struct F*b9d7d4c083 {
	enum class EWeaponClass WeaponType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Range; // 0x04(0x04)
};

// ScriptStruct TslGame.*2d529e528a
// Size: 0x0c (Inherited: 0x00)
struct F*2d529e528a {
	enum class EWeaponClass WeaponType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Range; // 0x04(0x04)
	float *636c1f41bb; // 0x08(0x04)
};

// ScriptStruct TslGame.*4a88bc8b27
// Size: 0x10 (Inherited: 0x00)
struct F*4a88bc8b27 {
	int32 Rating; // 0x00(0x04)
	float *d32f5bae49; // 0x04(0x04)
	float *31204b09b9; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f3d9ce5886
// Size: 0x30 (Inherited: 0x00)
struct F*f3d9ce5886 {
	float *55ce1642bd; // 0x00(0x04)
	int32 *d886f1968b; // 0x04(0x04)
	struct FBlackboardKeySelector *50017291e2; // 0x08(0x28)
};

// ScriptStruct TslGame.*ccf16eed70
// Size: 0x68 (Inherited: 0x00)
struct F*ccf16eed70 {
	int32 *f30c76eb6f; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct UClass*, int32> *28a788e35d; // 0x08(0x50)
	struct TArray<struct UClass*> *80bb4ac6f4; // 0x58(0x10)
};

// ScriptStruct TslGame.*e20c1be9da
// Size: 0x28 (Inherited: 0x00)
struct F*e20c1be9da {
	float *7160c9a899; // 0x00(0x04)
	float *11a53b4ed9; // 0x04(0x04)
	struct FVector *8589017dec; // 0x08(0x0c)
	struct FRotator *89faae7759; // 0x14(0x0c)
	float *8b47f3ad68; // 0x20(0x04)
	float *dfe6c17f39; // 0x24(0x04)
};

// ScriptStruct TslGame.*02f1cfd816
// Size: 0x10 (Inherited: 0x00)
struct F*02f1cfd816 {
	float *999193f3c3; // 0x00(0x04)
	float *f2e13745b0; // 0x04(0x04)
	float *a9d2d36972; // 0x08(0x04)
	float *76870c4521; // 0x0c(0x04)
};

// ScriptStruct TslGame.*604856e4ac
// Size: 0x10 (Inherited: 0x00)
struct F*604856e4ac {
	struct TArray<struct F*8d353075d0> Connections; // 0x00(0x10)
};

// ScriptStruct TslGame.*1e7dc12f94
// Size: 0x50 (Inherited: 0x00)
struct F*1e7dc12f94 {
	struct TMap<struct F*f84ceae64b, struct F*de61ae727e> *1fa5e924cc; // 0x00(0x50)
};

// ScriptStruct TslGame.*330fc651ea
// Size: 0x20 (Inherited: 0x00)
struct F*330fc651ea {
	struct U*a65bc190b5* *5bdbf50368; // 0x00(0x08)
	struct ATslAIWaypointSegment* path; // 0x08(0x08)
	int32 *f3fbe39cc4; // 0x10(0x04)
	bool *641c7bfd4f; // 0x14(0x01)
	bool *2420d9aa12; // 0x15(0x01)
	bool *f7a199aeeb; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float *3ea6c5b930; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*2907d5c0ce
// Size: 0x08 (Inherited: 0x00)
struct F*2907d5c0ce {
	int32 Rating; // 0x00(0x04)
	float SearchRadius; // 0x04(0x04)
};

// ScriptStruct TslGame.*fe7c623a1b
// Size: 0x10 (Inherited: 0x00)
struct F*fe7c623a1b {
	struct UClass* TargetClass; // 0x00(0x08)
	float Multiplier; // 0x08(0x04)
	float *d04510e6a7; // 0x0c(0x04)
};

// ScriptStruct TslGame.*38501ae3ad
// Size: 0x18 (Inherited: 0x00)
struct F*38501ae3ad {
	enum class *53b11d0f67 Action; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *22aa76aafc; // 0x08(0x08)
	float *dddf8428d5; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*8da6e99483
// Size: 0x14 (Inherited: 0x00)
struct F*8da6e99483 {
	char pad_0[0x8]; // 0x00(0x08)
	float HappenTime; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float TotalDamage; // 0x10(0x04)
};

// ScriptStruct TslGame.*47b656c0d7
// Size: 0x38 (Inherited: 0x00)
struct F*47b656c0d7 {
	struct FBox Box; // 0x00(0x1c)
	float *621091e08a; // 0x1c(0x04)
	float *52d7f210eb; // 0x20(0x04)
	float *0236fd1ba2; // 0x24(0x04)
	float *a212fbfa4a; // 0x28(0x04)
	float *28c96663a4; // 0x2c(0x04)
	float *cf3e9dbb1c; // 0x30(0x04)
	float *00e04e8805; // 0x34(0x04)
};

// ScriptStruct TslGame.*b14ab9b6d4
// Size: 0x20 (Inherited: 0x00)
struct F*b14ab9b6d4 {
	enum class *5289b35bc4 *e70b631eb2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *d3ab3495ed; // 0x04(0x04)
	float *40f09c648f; // 0x08(0x04)
	float *bb8318bc9d; // 0x0c(0x04)
	struct TArray<struct F*eb97bb948c> *eb97bb948c; // 0x10(0x10)
};

// ScriptStruct TslGame.*eb97bb948c
// Size: 0x0c (Inherited: 0x00)
struct F*eb97bb948c {
	enum class EDamageTypeCategory *498af98d1d; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *0637b51790; // 0x04(0x04)
	float *bb8318bc9d; // 0x08(0x04)
};

// ScriptStruct TslGame.*0f285636e7
// Size: 0x0c (Inherited: 0x00)
struct F*0f285636e7 {
	enum class *5289b35bc4 *e70b631eb2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *d3ab3495ed; // 0x04(0x04)
	float *40f09c648f; // 0x08(0x04)
};

// ScriptStruct TslGame.*f8f63a9691
// Size: 0x0c (Inherited: 0x00)
struct F*f8f63a9691 {
	enum class *5289b35bc4 *e70b631eb2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *d3ab3495ed; // 0x04(0x04)
	float *fd3ea9cb77; // 0x08(0x04)
};

// ScriptStruct TslGame.*c31413884b
// Size: 0x50 (Inherited: 0x00)
struct F*c31413884b {
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

// ScriptStruct TslGame.*a6cf5e6125
// Size: 0x3c (Inherited: 0x00)
struct F*a6cf5e6125 {
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

// ScriptStruct TslGame.*06b938d1ab
// Size: 0x38 (Inherited: 0x00)
struct F*06b938d1ab {
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

// ScriptStruct TslGame.*787e9b1134
// Size: 0x20 (Inherited: 0x00)
struct F*787e9b1134 {
	struct FLinearColor RankColor; // 0x00(0x10)
	struct FStringAssetReference RankTexture; // 0x10(0x10)
};

// ScriptStruct TslGame.*c4576faf2e
// Size: 0x60 (Inherited: 0x00)
struct F*c4576faf2e {
	struct TArray<struct FVector> *06302e190c; // 0x00(0x10)
	struct FBox *9363faa29d; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Transform; // 0x30(0x30)
};

// ScriptStruct TslGame.*dc7416fd19
// Size: 0x18 (Inherited: 0x00)
struct F*dc7416fd19 {
	struct FName ItemID; // 0x00(0x08)
	int32 ItemStackCount; // 0x08(0x04)
	int32 Count; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*48f4df6397
// Size: 0x80 (Inherited: 0x08)
struct F*48f4df6397 : FTableRowBase {
	int32 CraftID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName AllowFilter; // 0x10(0x08)
	struct FName CraftItemID; // 0x18(0x08)
	float CraftTime; // 0x20(0x04)
	int32 CraftItemStackCount; // 0x24(0x04)
	struct TArray<struct F*2d55a88950> MaterialItems; // 0x28(0x10)
	bool bShouldTransferAmmoInClip; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString SlotTag; // 0x40(0x10)
	struct TArray<struct FName> AdditionalCraftItemIDs; // 0x50(0x10)
	struct TArray<struct FName> AdditionalRemoveItemIDs; // 0x60(0x10)
	int32 RestrictedStance; // 0x70(0x04)
	bool bAutoReload; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
};

// ScriptStruct TslGame.*2d55a88950
// Size: 0x10 (Inherited: 0x00)
struct F*2d55a88950 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*bd6b405b4a
// Size: 0x18 (Inherited: 0x00)
struct F*bd6b405b4a {
	int32 *b70d9883fa; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *50dd2379d8; // 0x08(0x08)
	int32 *a1ae8c3d21; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*75f8706a87
// Size: 0x20 (Inherited: 0x00)
struct F*75f8706a87 {
	struct FString *fa11700581; // 0x00(0x10)
	struct FVector2D *6e395d314c; // 0x10(0x08)
	bool *f8809fb2e9; // 0x18(0x01)
	enum class ECustomCarepackageState *a31960f8d2; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32 *d1736052f3; // 0x1c(0x04)
};

// ScriptStruct TslGame.*fbd59c2f47
// Size: 0x08 (Inherited: 0x00)
struct F*fbd59c2f47 {
	int32 AddWhiteZoneCarepackages; // 0x00(0x04)
	int32 AddOutsideZoneCarepackages; // 0x04(0x04)
};

// ScriptStruct TslGame.*fa3ed2842a
// Size: 0x98 (Inherited: 0x08)
struct F*fa3ed2842a : FTableRowBase {
	struct FText WeaponTag; // 0x08(0x18)
	struct FText SimpleWeaponName; // 0x20(0x18)
	struct U*d8975ea1b4* WeaponGunData; // 0x38(0x08)
	struct F*e1c76b30ea WeaponFX; // 0x40(0x20)
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

// ScriptStruct TslGame.*e1c76b30ea
// Size: 0x20 (Inherited: 0x00)
struct F*e1c76b30ea {
	struct UAkAudioEvent* FireSoundAk; // 0x00(0x08)
	struct UAkAudioEvent* FireLoopSoundAk; // 0x08(0x08)
	struct UAkAudioEvent* FireFinishSoundAk; // 0x10(0x08)
	struct UParticleSystem* MuzzleFx; // 0x18(0x08)
};

// ScriptStruct TslGame.*de4b74efcf
// Size: 0x18 (Inherited: 0x00)
struct F*de4b74efcf {
	struct UClass* *fb89bc0044; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*9ddb2b6d86
// Size: 0x18 (Inherited: 0x00)
struct F*9ddb2b6d86 {
	bool bInitialized; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> Disabled; // 0x08(0x10)
};

// ScriptStruct TslGame.*b01e7fec60
// Size: 0x44 (Inherited: 0x00)
struct F*b01e7fec60 {
	struct FVector *2a9f3d1534; // 0x00(0x0c)
	float *1847ae9272; // 0x0c(0x04)
	float *3afc95b105; // 0x10(0x04)
	float *16d98b6484; // 0x14(0x04)
	float *78c13ae51e; // 0x18(0x04)
	enum class EWhiteZoneShape *c06310baed; // 0x1c(0x01)
	bool *687e0ef085; // 0x1d(0x01)
	bool *a2c5f9ec92; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct FVector *06235bd351; // 0x20(0x0c)
	char pad_2C[0x18]; // 0x2c(0x18)
};

// ScriptStruct TslGame.*42def792de
// Size: 0x10 (Inherited: 0x00)
struct F*42def792de {
	struct FVector *694e3a01f2; // 0x00(0x0c)
	float *af83a80c10; // 0x0c(0x04)
};

// ScriptStruct TslGame.ItemTypeReplaceRow
// Size: 0x20 (Inherited: 0x08)
struct FItemTypeReplaceRow : FTableRowBase {
	enum class EItemOverrideType *88f52d9556; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*6e0bd56d4d> *f2084a6323; // 0x10(0x10)
};

// ScriptStruct TslGame.*6e0bd56d4d
// Size: 0x18 (Inherited: 0x00)
struct F*6e0bd56d4d {
	enum class EItemSpotGroupType *ae2c3744d5; // 0x00(0x01)
	enum class EItemSpotGroupType *cc08012ecc; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct F*1d88eb5e96> *a9e7ec51e2; // 0x08(0x10)
};

// ScriptStruct TslGame.*1d88eb5e96
// Size: 0x02 (Inherited: 0x00)
struct F*1d88eb5e96 {
	enum class EItemSpotType *7df60cd7aa; // 0x00(0x01)
	enum class EItemSpotType *4b7989a685; // 0x01(0x01)
};

// ScriptStruct TslGame.*a7dc6bf93f
// Size: 0x70 (Inherited: 0x08)
struct F*a7dc6bf93f : FTableRowBase {
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

// ScriptStruct TslGame.*373ad8559c
// Size: 0x14 (Inherited: 0x00)
struct F*373ad8559c {
	float Damage; // 0x00(0x04)
	float DamagingStartTime; // 0x04(0x04)
	float TickCount; // 0x08(0x04)
	struct FColor FenceColor; // 0x0c(0x04)
	bool bUsePlayerFence; // 0x10(0x01)
	bool bUseOutsideDamage; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct TslGame.*537e5793a2
// Size: 0x60 (Inherited: 0x00)
struct F*537e5793a2 {
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

// ScriptStruct TslGame.*b05e08d5c2
// Size: 0x10 (Inherited: 0x08)
struct F*b05e08d5c2 : FTableRowBase {
	bool bAirplaneUseable; // 0x08(0x01)
	bool bTowerUseable; // 0x09(0x01)
	bool bItemUseable; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct TslGame.*48340246aa
// Size: 0x03 (Inherited: 0x00)
struct F*48340246aa {
	bool bAirplaneUseable; // 0x00(0x01)
	bool bTowerUseable; // 0x01(0x01)
	bool bItemUseable; // 0x02(0x01)
};

// ScriptStruct TslGame.*c4cc836add
// Size: 0x18 (Inherited: 0x00)
struct F*c4cc836add {
	struct FName ItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*efc4da72ce
// Size: 0xb8 (Inherited: 0x00)
struct F*efc4da72ce {
	struct TMap<struct FName, struct F*6c5e74eb18> *3239e488da; // 0x00(0x50)
	struct F*8b4e137631 *31d7f3d97a; // 0x50(0x50)
	struct TArray<struct FName> *4c863cd505; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct TslGame.*8b4e137631
// Size: 0x50 (Inherited: 0x00)
struct F*8b4e137631 {
	struct TMap<struct FString, struct F*ed22c60eb0> Table; // 0x00(0x50)
};

// ScriptStruct TslGame.*ed22c60eb0
// Size: 0x10 (Inherited: 0x00)
struct F*ed22c60eb0 {
	struct TArray<struct F*fce9e383c2> Values; // 0x00(0x10)
};

// ScriptStruct TslGame.*fce9e383c2
// Size: 0x18 (Inherited: 0x00)
struct F*fce9e383c2 {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*6c5e74eb18
// Size: 0x50 (Inherited: 0x00)
struct F*6c5e74eb18 {
	struct TMap<struct FName, struct F*4fde1daa42> Values; // 0x00(0x50)
};

// ScriptStruct TslGame.*4fde1daa42
// Size: 0x18 (Inherited: 0x00)
struct F*4fde1daa42 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct F*53e862edfa> Elements; // 0x08(0x10)
};

// ScriptStruct TslGame.*53e862edfa
// Size: 0x18 (Inherited: 0x00)
struct F*53e862edfa {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*68de744920
// Size: 0x50 (Inherited: 0x00)
struct F*68de744920 {
	struct TMap<struct FName, int32> *ac36e5daed; // 0x00(0x50)
};

// ScriptStruct TslGame.*fb291c5ae0
// Size: 0x18 (Inherited: 0x08)
struct F*fb291c5ae0 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 SpawnLimit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*505a130fe0
// Size: 0x38 (Inherited: 0x08)
struct F*505a130fe0 : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	int32 StackCount; // 0x18(0x04)
	int32 CountMin; // 0x1c(0x04)
	int32 CountMax; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName SpawnedItemID; // 0x28(0x08)
	struct FName TogetherItemID; // 0x30(0x08)
};

// ScriptStruct TslGame.*fb2532220b
// Size: 0x38 (Inherited: 0x08)
struct F*fb2532220b : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	struct FName SubCategoryFilter; // 0x18(0x08)
	int32 StackCount; // 0x20(0x04)
	int32 Weight; // 0x24(0x04)
	struct FName ItemID; // 0x28(0x08)
	struct FName SkinId; // 0x30(0x08)
};

// ScriptStruct TslGame.*0b3edff2c1
// Size: 0x18 (Inherited: 0x00)
struct F*0b3edff2c1 {
	float ProbabilityPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
};

// ScriptStruct TslGame.*572df8afa5
// Size: 0x08 (Inherited: 0x00)
struct F*572df8afa5 {
	int32 TeamPlayers; // 0x00(0x04)
	int32 SpawnCount; // 0x04(0x04)
};

// ScriptStruct TslGame.*cf64660ed0
// Size: 0x20 (Inherited: 0x08)
struct F*cf64660ed0 : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	float LottoProb; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName LottoBoxTag; // 0x18(0x08)
};

// ScriptStruct TslGame.*38639a5d06
// Size: 0x28 (Inherited: 0x08)
struct F*38639a5d06 : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	struct FName ValueFilter; // 0x10(0x08)
	struct FName CategoryFilter; // 0x18(0x08)
	bool ItemAmount; // 0x20(0x01)
	bool bUnique; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*77ffe03c2c
// Size: 0x40 (Inherited: 0x08)
struct F*77ffe03c2c : FTableRowBase {
	struct FName PackageName; // 0x08(0x08)
	struct FName EventName; // 0x10(0x08)
	struct TArray<struct F*c920a754b8> *c920a754b8; // 0x18(0x10)
	struct TArray<struct F*c920a754b8> *7aba77c61d; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*c920a754b8
// Size: 0x18 (Inherited: 0x00)
struct F*c920a754b8 {
	struct FName ItemID; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	int32 *7296b6bacd; // 0x0c(0x04)
	int32 *c276fb5a9b; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*7489fa2f63
// Size: 0x30 (Inherited: 0x00)
struct F*7489fa2f63 {
	struct FName EventName; // 0x00(0x08)
	enum class EItemSpotGroupType *6d364094d9; // 0x08(0x01)
	enum class EItemSpotType *d5dbb32810; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 Count; // 0x0c(0x04)
	int32 *e23f298e88; // 0x10(0x04)
	bool *960551fb06; // 0x14(0x01)
	bool *13e87fdb4c; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32 *0160de38b7; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct F*f8953118c9> *48ee650bcf; // 0x20(0x10)
};

// ScriptStruct TslGame.*f8953118c9
// Size: 0x30 (Inherited: 0x00)
struct F*f8953118c9 {
	struct FName PackageName; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *35a640b207; // 0x10(0x20)
};

// ScriptStruct TslGame.*da598ecc38
// Size: 0x30 (Inherited: 0x08)
struct F*da598ecc38 : FTableRowBase {
	enum class EVendingMachineType VendingMachineType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UClass* VendingMachineActorClass; // 0x10(0x20)
};

// ScriptStruct TslGame.*48f4146127
// Size: 0x40 (Inherited: 0x08)
struct F*48f4146127 : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	enum class EVendingMachineType Category; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*5fe4508712> ItemsToDrop; // 0x20(0x10)
	float Weight; // 0x30(0x04)
	bool bJackpot; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UAkAudioEvent* AkAudioEvent; // 0x38(0x08)
};

// ScriptStruct TslGame.*f55cd16157
// Size: 0x20 (Inherited: 0x08)
struct F*f55cd16157 : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	enum class EVendingMachineType Category; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 SpawnCount; // 0x1c(0x04)
};

// ScriptStruct TslGame.*eed9f87c4c
// Size: 0x20 (Inherited: 0x08)
struct F*eed9f87c4c : FTableRowBase {
	struct FVector Transition; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct TslGame.*5f55ccf2ea
// Size: 0x68 (Inherited: 0x08)
struct F*5f55ccf2ea : FTableRowBase {
	struct FName *62b24320ae; // 0x08(0x08)
	struct FName ItemID; // 0x10(0x08)
	struct TArray<int32> StackCount; // 0x18(0x10)
	uint32 Weight; // 0x28(0x04)
	bool *d1467f56dd; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *e23f298e88; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FName> Attachments; // 0x38(0x10)
	struct F*ec079b9e67 *303059bfab; // 0x48(0x20)
};

// ScriptStruct TslGame.*ec079b9e67
// Size: 0x20 (Inherited: 0x00)
struct F*ec079b9e67 {
	struct FName ItemID; // 0x00(0x08)
	struct TArray<int32> StackCount; // 0x08(0x10)
	bool *d1467f56dd; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *e23f298e88; // 0x1c(0x04)
};

// ScriptStruct TslGame.*78df68bb58
// Size: 0x10 (Inherited: 0x00)
struct F*78df68bb58 {
	struct FVector2D StartPosition; // 0x00(0x08)
	struct FVector2D EndPosition; // 0x08(0x08)
};

// ScriptStruct TslGame.*990bde5907
// Size: 0x420 (Inherited: 0x00)
struct F*990bde5907 {
	struct FString MapName; // 0x00(0x10)
	struct FModePresetData DefaultPresetData; // 0x10(0x400)
	struct TArray<struct FModePresetData> PresetDataList; // 0x410(0x10)
};

// ScriptStruct TslGame.ModePresetData
// Size: 0x400 (Inherited: 0x00)
struct FModePresetData {
	struct FName PresetName; // 0x00(0x08)
	bool *148176c041; // 0x08(0x01)
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
	bool *dd6f093dc7; // 0x18d(0x01)
	bool *e228da761b; // 0x18e(0x01)
	char pad_18F[0x1]; // 0x18f(0x01)
	struct FString EssentialSpawnKitName; // 0x190(0x10)
	bool *bc856a6525; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FString *1a646e02ce; // 0x1a8(0x10)
	bool *21db6f069c; // 0x1b8(0x01)
	bool *09b7f230dd; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
	struct TArray<struct FText> *93bfaddaac; // 0x1c0(0x10)
	float *e3216ae0f1; // 0x1d0(0x04)
	float *72525bf72d; // 0x1d4(0x04)
	bool *0503667c7a; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct UDataTable* DropSpotGroupDataTable; // 0x1e0(0x20)
	struct UDataTable* DropItemFilterDataTable; // 0x200(0x20)
	struct UDataTable* DropItemSpawnDataTable; // 0x220(0x20)
	struct UDataTable* DropItemSpawnTogetherDataTable; // 0x240(0x20)
	struct UDataTable* DropItemTypeOverrideDataTable; // 0x260(0x20)
	int32 ActiveItemTypeOverrideAreaCount; // 0x280(0x04)
	float ActiveItemTypeOverrideAreaPercent; // 0x284(0x04)
	struct TMap<struct FString, struct F*80eaf51d85> ItemSpawnDataTables; // 0x288(0x50)
	struct UDataTable* CraftItemDataTable; // 0x2d8(0x20)
	struct UDataTable* VehicleSpotGroupDataTable; // 0x2f8(0x20)
	struct UDataTable* VehicleSpawnDataTable; // 0x318(0x20)
	struct UDataTable* EventItemPackageSpawnDataTable; // 0x338(0x20)
	struct UDataTable* BluezoneDataTable; // 0x358(0x20)
	bool *b170bfe0dc; // 0x378(0x01)
	bool *424b6f0748; // 0x379(0x01)
	bool *7c219b2e1b; // 0x37a(0x01)
	char pad_37B[0x5]; // 0x37b(0x05)
	struct UDataTable* RevivalPhaseDataTable; // 0x380(0x20)
	int32 *c92503c5f3; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct TArray<struct F*23be8024ca> MatchPreparerClasses; // 0x3a8(0x10)
	struct TArray<struct UWorld*> *d47fff10bb; // 0x3b8(0x10)
	struct AAbstractRespawnProcessor* *53a6c10d6e; // 0x3c8(0x08)
	struct UClass* RespawnProcessorClass; // 0x3d0(0x08)
	struct UClass* WhiteZoneControllerClass; // 0x3d8(0x20)
	bool bEnableMonsterSystem; // 0x3f8(0x01)
	bool *851410c71c; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
};

// ScriptStruct TslGame.*80eaf51d85
// Size: 0x40 (Inherited: 0x00)
struct F*80eaf51d85 {
	struct UDataTable* ItemSpawnDataTable; // 0x00(0x20)
	struct UDataTable* ItemSpawnTogetherDataTable; // 0x20(0x20)
};

// ScriptStruct TslGame.*c7e380959b
// Size: 0x20 (Inherited: 0x00)
struct F*c7e380959b {
	struct ATslPatrolPath* *c38a104778; // 0x00(0x08)
	struct TArray<struct F*dfa4970113> *77bcd49ee9; // 0x08(0x10)
	enum class *22163844fc *3498850e5d; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*dfa4970113
// Size: 0x40 (Inherited: 0x00)
struct F*dfa4970113 {
	struct FTransform Transform; // 0x00(0x30)
	bool *84cf3dfe29; // 0x30(0x01)
	bool *00f47d0cef; // 0x31(0x01)
	enum class EStanceMode *f180e17d8b; // 0x32(0x01)
	enum class EStanceMode *488ca158f5; // 0x33(0x01)
	enum class EPatrolSpeed *75f183663e; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float *d682030df4; // 0x38(0x04)
	bool *f7d7f4ab6e; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGame.*8e8dc635ef
// Size: 0x10 (Inherited: 0x00)
struct F*8e8dc635ef {
	struct TArray<struct FString> Values; // 0x00(0x10)
};

// ScriptStruct TslGame.*ff324b46d9
// Size: 0x20 (Inherited: 0x00)
struct F*ff324b46d9 {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*ec0b51269b
// Size: 0x18 (Inherited: 0x00)
struct F*ec0b51269b {
	struct FString CustomStringParameter; // 0x00(0x10)
	float MinLimit; // 0x10(0x04)
	float MaxLimit; // 0x14(0x04)
};

// ScriptStruct TslGame.*b89eaf3c24
// Size: 0x0c (Inherited: 0x00)
struct F*b89eaf3c24 {
	float ReviveCastingTime; // 0x00(0x04)
	float MultiplierGroggyDamagePerSecond; // 0x04(0x04)
	float MultiplierPunchDamage; // 0x08(0x04)
};

// ScriptStruct TslGame.*a15af41445
// Size: 0x10 (Inherited: 0x00)
struct F*a15af41445 {
	struct TArray<struct FStringAssetReference> References; // 0x00(0x10)
};

// ScriptStruct TslGame.*2b021f1c56
// Size: 0x14 (Inherited: 0x00)
struct F*2b021f1c56 {
	int32 Index; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	enum class EBlueChipTowerState *e21e611764; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*666bdcbb15
// Size: 0x10 (Inherited: 0x00)
struct F*666bdcbb15 {
	struct TArray<struct ATeam*> *747577732c; // 0x00(0x10)
};

// ScriptStruct TslGame.*6ba9263277
// Size: 0x05 (Inherited: 0x00)
struct F*6ba9263277 {
	struct F*9bb00c3806 Round; // 0x00(0x02)
	struct F*9bb00c3806 *bf5eb865f3; // 0x02(0x02)
	bool *cf6f176fed; // 0x04(0x01)
};

// ScriptStruct TslGame.*9bb00c3806
// Size: 0x02 (Inherited: 0x00)
struct F*9bb00c3806 {
	int8 *56811418fd; // 0x00(0x01)
	int8 *a9ed37bb88; // 0x01(0x01)
};

// ScriptStruct TslGame.*c57cebb11f
// Size: 0x10 (Inherited: 0x00)
struct F*c57cebb11f {
	struct FName Name; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*81811ad5ad
// Size: 0x38 (Inherited: 0x00)
struct F*81811ad5ad {
	enum class ESpecialZoneType *c6a516b224; // 0x00(0x01)
	enum class ESpecialZoneState *85146bf2e1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *e89aa98fc8; // 0x04(0x04)
	struct FVector2D *1c38b84b79; // 0x08(0x08)
	struct TArray<struct FVector2D> *cf9e8fc878; // 0x10(0x10)
	struct TArray<struct FRotator> *f76f37a3be; // 0x20(0x10)
	float *895e8ddf5c; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*1d2d39ae7b
// Size: 0x0c (Inherited: 0x00)
struct F*1d2d39ae7b {
	bool bEnabled; // 0x00(0x01)
	bool *3f485360e2; // 0x01(0x01)
	bool *360e8e3d3a; // 0x02(0x01)
	bool *f7c0e89aed; // 0x03(0x01)
	float AircraftCooldown; // 0x04(0x04)
	float *9d3e5a5e3e; // 0x08(0x04)
};

// ScriptStruct TslGame.*de91f2b953
// Size: 0x10 (Inherited: 0x00)
struct F*de91f2b953 {
	struct FName ItemID; // 0x00(0x08)
	int32 Limits; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*a6f6ba2145
// Size: 0x18 (Inherited: 0x00)
struct F*a6f6ba2145 {
	struct FVector HitLocation; // 0x00(0x0c)
	struct FVector AttackerLocation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*e5de8be29b
// Size: 0x48 (Inherited: 0x08)
struct F*e5de8be29b : FTableRowBase {
	enum class EFExplosivePropDataType *008b2e3aaa; // 0x08(0x01)
	bool *50f1fda223; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *89dfde69e3; // 0x0c(0x04)
	float *3b6963de7e; // 0x10(0x04)
	float *929e2d2e99; // 0x14(0x04)
	float *85ac6e9083; // 0x18(0x04)
	float *659aa12d9d; // 0x1c(0x04)
	float *d279788619; // 0x20(0x04)
	float *3e52b15c35; // 0x24(0x04)
	struct UCurveFloat* *859e1536ed; // 0x28(0x08)
	struct UClass* *16f53171af; // 0x30(0x08)
	struct FVector *45e185d4c2; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*7cc38752d0
// Size: 0x18 (Inherited: 0x08)
struct F*7cc38752d0 : FTableRowBase {
	struct FString *93ef3eefa9; // 0x08(0x10)
};

// ScriptStruct TslGame.*4c6f7488c2
// Size: 0x68 (Inherited: 0x00)
struct F*4c6f7488c2 {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct U*1d56e72305* *1d56e72305; // 0x40(0x08)
	struct U*f700344055* ReactionDoorData; // 0x48(0x08)
	struct FVector *3935b817b4; // 0x50(0x0c)
	float BoundsScale; // 0x5c(0x04)
	char LightingChannel0 : 1; // 0x60(0x01)
	char LightingChannel1 : 1; // 0x60(0x01)
	char *359430f852 : 1; // 0x60(0x01)
	char pad_60_3 : 5; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.*9a40ad597f
// Size: 0x28 (Inherited: 0x00)
struct F*9a40ad597f {
	struct UPrimitiveComponent* *0bbc8e06ca; // 0x00(0x08)
	struct FVector_NetQuantize Location; // 0x08(0x0c)
	struct FVector_NetQuantize Velocity; // 0x14(0x0c)
	bool *9eaf25cdb2; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*151d928411
// Size: 0x30 (Inherited: 0x00)
struct F*151d928411 {
	struct UPrimitiveComponent* *0bbc8e06ca; // 0x00(0x08)
	struct UPrimitiveComponent* *a855ef64d4; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	uint16 *0de33ebb73; // 0x28(0x02)
	bool *31f55b023d; // 0x2a(0x01)
	bool *8a997b0f8a; // 0x2b(0x01)
	bool *9eaf25cdb2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct TslGame.*2383866e39
// Size: 0x48 (Inherited: 0x00)
struct F*2383866e39 {
	struct FRotator *e51c23c590; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct USceneComponent* *11a02b501d; // 0x28(0x08)
	struct U*5fc898fe2e* ThrowableConfig; // 0x30(0x08)
	bool *2609b55126; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName MeshSocket; // 0x40(0x08)
};

// ScriptStruct TslGame.*a1a1d48e50
// Size: 0x58 (Inherited: 0x50)
struct F*a1a1d48e50 : F*83ad5ff7d4 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*e31dadafc1
// Size: 0x28 (Inherited: 0x00)
struct F*e31dadafc1 {
	struct UItem* Item; // 0x00(0x08)
	struct F*d7759ba102 *bd3d5f8de5; // 0x08(0x0c)
	char pad_14[0x14]; // 0x14(0x14)
};

// ScriptStruct TslGame.*99a9e4830c
// Size: 0x30 (Inherited: 0x00)
struct F*99a9e4830c {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*7695ecf449 RegionalSetting; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*7695ecf449
// Size: 0x24 (Inherited: 0x00)
struct F*7695ecf449 {
	float FogDensity; // 0x00(0x04)
	struct FLinearColor FogColor; // 0x04(0x10)
	float FogStartDistance; // 0x14(0x04)
	float VolFogExtinctionScale; // 0x18(0x04)
	float WeatherParticleSpawnScale; // 0x1c(0x04)
	float WindScale; // 0x20(0x04)
};

// ScriptStruct TslGame.*aeda1b0cd9
// Size: 0x28 (Inherited: 0x00)
struct F*aeda1b0cd9 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *9a0642c50e; // 0x08(0x10)
	struct TArray<struct F*6d4398d048> *ed4fe0946a; // 0x18(0x10)
};

// ScriptStruct TslGame.*6d4398d048
// Size: 0x28 (Inherited: 0x00)
struct F*6d4398d048 {
	int32 ColorIndex; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *cec7c7616e; // 0x08(0x20)
};

// ScriptStruct TslGame.*5ed9abaa44
// Size: 0x28 (Inherited: 0x00)
struct F*5ed9abaa44 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *f562660797; // 0x08(0x10)
	struct TArray<struct F*e171f96eb9> *ed4fe0946a; // 0x18(0x10)
};

// ScriptStruct TslGame.*e171f96eb9
// Size: 0x48 (Inherited: 0x00)
struct F*e171f96eb9 {
	int32 ColorIndex; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *819dc13e01; // 0x08(0x20)
	struct UCustomizableObject* *aa75a89489; // 0x28(0x20)
};

// ScriptStruct TslGame.*66512b2de2
// Size: 0x10 (Inherited: 0x00)
struct F*66512b2de2 {
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*a2c5ef9852
// Size: 0x18 (Inherited: 0x00)
struct F*a2c5ef9852 {
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

// ScriptStruct TslGame.*53deceecda
// Size: 0x40 (Inherited: 0x00)
struct F*53deceecda {
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

// ScriptStruct TslGame.*8e4702d555
// Size: 0x60 (Inherited: 0x00)
struct F*8e4702d555 {
	float InitialSpeed; // 0x00(0x04)
	float *d8bdb8ed57; // 0x04(0x04)
	float *06019ef2c2; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*e59b98181d> *12c4417431; // 0x10(0x10)
	float *1b95176306; // 0x20(0x04)
	float *359610551e; // 0x24(0x04)
	struct U*1ba2d2b086* *1c78d106ae; // 0x28(0x08)
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
	bool *32591f639e; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct UClass* *498af98d1d; // 0x50(0x08)
	char *c2ea5e3739 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float WeaponSpread; // 0x5c(0x04)
};

// ScriptStruct TslGame.*e59b98181d
// Size: 0x08 (Inherited: 0x00)
struct F*e59b98181d {
	float Damage; // 0x00(0x04)
	float Probability; // 0x04(0x04)
};

// ScriptStruct TslGame.*23dafb53e9
// Size: 0xd0 (Inherited: 0x00)
struct F*23dafb53e9 {
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
	struct U*1ba2d2b086* RecoilCurve; // 0x28(0x08)
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
	struct TMap<enum class EFiringMode, struct F*a1c1e64873> ROFRecoilMap; // 0x80(0x50)
};

// ScriptStruct TslGame.*a1c1e64873
// Size: 0x50 (Inherited: 0x00)
struct F*a1c1e64873 {
	struct TMap<enum class EAnimStance, float> StanceMap; // 0x00(0x50)
};

// ScriptStruct TslGame.*45c5398cfd
// Size: 0x28 (Inherited: 0x00)
struct F*45c5398cfd {
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

// ScriptStruct TslGame.*6248d40340
// Size: 0x78 (Inherited: 0x00)
struct F*6248d40340 {
	struct ATslWeapon_Trajectory* Weapon; // 0x00(0x08)
	struct U*1ba2d2b086* *1c78d106ae; // 0x08(0x08)
	struct ATslParticle* Particle; // 0x10(0x08)
	char pad_18[0x60]; // 0x18(0x60)
};

// ScriptStruct TslGame.*3f92a87a96
// Size: 0x30 (Inherited: 0x08)
struct F*3f92a87a96 : FTableRowBase {
	struct UTexture2D* BackgroundImage; // 0x08(0x20)
	float ApperanceModifier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*5b670e83ba
// Size: 0xd8 (Inherited: 0xa0)
struct F*5b670e83ba : F*9945a56231 {
	bool bIsImageOnlyLoadingScreen; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FText Title; // 0xa8(0x18)
	struct FText Description; // 0xc0(0x18)
};

// ScriptStruct TslGame.*9945a56231
// Size: 0xa0 (Inherited: 0x08)
struct F*9945a56231 : FTableRowBase {
	enum class ELoadingScreenType LoadingScreenType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName GameModeAlias; // 0x10(0x08)
	enum class *722b6c38aa RankGuideType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UTexture2D* BackgroundImage; // 0x20(0x20)
	struct TMap<enum class ETslMapName, struct F*575e601c05> OverrideByMap; // 0x40(0x50)
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

// ScriptStruct TslGame.*575e601c05
// Size: 0x50 (Inherited: 0x00)
struct F*575e601c05 {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* BackgroundImage; // 0x30(0x20)
};

// ScriptStruct TslGame.*a248980fae
// Size: 0xa8 (Inherited: 0xa0)
struct F*a248980fae : F*9945a56231 {
	struct UClass* TipWidget; // 0xa0(0x08)
};

// ScriptStruct TslGame.*d1007e4bed
// Size: 0x40 (Inherited: 0x00)
struct F*d1007e4bed {
	struct TArray<struct F*cce1b0bcd4> LoadingScreenTypePercentForElementaryRank; // 0x00(0x10)
	struct TArray<struct F*cce1b0bcd4> LoadingScreenTypePercentForIntermediateRank; // 0x10(0x10)
	struct TArray<struct F*cce1b0bcd4> LoadingScreenTypePercentForHighRank; // 0x20(0x10)
	struct TArray<struct F*cce1b0bcd4> LoadingScreenTypePercentForExpertRank; // 0x30(0x10)
};

// ScriptStruct TslGame.*cce1b0bcd4
// Size: 0x08 (Inherited: 0x00)
struct F*cce1b0bcd4 {
	enum class ELoadingScreenType LoadingScreenType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Percent; // 0x04(0x04)
};

// ScriptStruct TslGame.*1bcf0ed44f
// Size: 0x18 (Inherited: 0x08)
struct F*1bcf0ed44f : FTableRowBase {
	float ShowElementaryRankPercentForElementaryRank; // 0x08(0x04)
	float ShowElementaryRankPercentForIntermediateRank; // 0x0c(0x04)
	float ShowElementaryRankPercentForHighRank; // 0x10(0x04)
	float ShowElementaryRankPercentForExpertRank; // 0x14(0x04)
};

// ScriptStruct TslGame.*2526bc8580
// Size: 0x28 (Inherited: 0x00)
struct F*2526bc8580 {
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

// ScriptStruct TslGame.*159bc39f5f
// Size: 0x20 (Inherited: 0x08)
struct F*159bc39f5f : FTableRowBase {
	struct FName *ba110cc30a; // 0x08(0x08)
	struct TArray<struct F*a0f386f9e9> *ebec8d2508; // 0x10(0x10)
};

// ScriptStruct TslGame.*74f1f44bc7
// Size: 0x38 (Inherited: 0x00)
struct F*74f1f44bc7 {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
};

// ScriptStruct TslGame.*117f49f573
// Size: 0x68 (Inherited: 0x00)
struct F*117f49f573 {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
	bool bIsStepper; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FText> *5d66675541; // 0x40(0x10)
	int32 *87b3936818; // 0x50(0x04)
	bool bIsSlider; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float SliderMin; // 0x58(0x04)
	float SliderMax; // 0x5c(0x04)
	float *7b46457acb; // 0x60(0x04)
	bool *de45f47258; // 0x64(0x01)
	bool *94ab2177b9; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct TslGame.*5fb1c5aa95
// Size: 0x20 (Inherited: 0x00)
struct F*5fb1c5aa95 {
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

// ScriptStruct TslGame.*a2e87c6b64
// Size: 0x10 (Inherited: 0x00)
struct F*a2e87c6b64 {
	struct TArray<struct FTslGamepadInputKey> *e24cb2b585; // 0x00(0x10)
};

// ScriptStruct TslGame.*2c5c5e5691
// Size: 0xc0 (Inherited: 0x08)
struct F*2c5c5e5691 : FTableRowBase {
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

// ScriptStruct TslGame.*19e1dfed3e
// Size: 0x30 (Inherited: 0x00)
struct F*19e1dfed3e {
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

// ScriptStruct TslGame.*9a014dab61
// Size: 0x38 (Inherited: 0x00)
struct F*9a014dab61 {
	struct FLinearColor Color; // 0x00(0x10)
	struct FText DisplayName; // 0x10(0x18)
	struct FString ColorString; // 0x28(0x10)
};

// ScriptStruct TslGame.*7eeacd8a74
// Size: 0x18 (Inherited: 0x00)
struct F*7eeacd8a74 {
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
	struct F*fd985b6c41 AlternativeColor; // 0x40(0x10)
};

// ScriptStruct TslGame.TeamColorAndIcon
// Size: 0x40 (Inherited: 0x00)
struct FTeamColorAndIcon {
	struct F*fd985b6c41 TeamMemberColor; // 0x00(0x10)
	struct UTexture* MarkerColorTextIcon; // 0x10(0x08)
	struct UTexture* MarkerIcon; // 0x18(0x08)
	struct UTexture* PlayerIcon; // 0x20(0x08)
	struct UTexture* CompassIcon; // 0x28(0x08)
	struct UTexture* IndicatorIcon; // 0x30(0x08)
	struct UTexture* MapDeathIcon; // 0x38(0x08)
};

// ScriptStruct TslGame.*fd985b6c41
// Size: 0x10 (Inherited: 0x00)
struct F*fd985b6c41 {
	struct TArray<struct F*64503240dc> ColorSet; // 0x00(0x10)
};

// ScriptStruct TslGame.*64503240dc
// Size: 0x14 (Inherited: 0x00)
struct F*64503240dc {
	enum class EColorBlindType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
};

// ScriptStruct TslGame.*1d0f417738
// Size: 0x18 (Inherited: 0x00)
struct F*1d0f417738 {
	enum class ESeatState SeatState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*fd985b6c41 ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.ReticleColors
// Size: 0x18 (Inherited: 0x00)
struct FReticleColors {
	enum class EReticleType ReticleType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*fd985b6c41 ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.*4a72c3da4a
// Size: 0x30 (Inherited: 0x08)
struct F*4a72c3da4a : FTableRowBase {
	struct F*fd985b6c41 BlindColorSet; // 0x08(0x10)
	struct FLinearColor ShadowColor; // 0x18(0x10)
	struct FVector2D ShadowOffset; // 0x28(0x08)
};

// ScriptStruct TslGame.*5fa9b929d9
// Size: 0x28 (Inherited: 0x00)
struct F*5fa9b929d9 {
	struct FText DisplayUiName; // 0x00(0x18)
	struct FString UiKey; // 0x18(0x10)
};

// ScriptStruct TslGame.*e853814972
// Size: 0x18 (Inherited: 0x00)
struct F*e853814972 {
	enum class EQualityType QualityType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*984225f829> OverrideScalabilityValues; // 0x08(0x10)
};

// ScriptStruct TslGame.*984225f829
// Size: 0x28 (Inherited: 0x00)
struct F*984225f829 {
	struct FString ConsoleName; // 0x00(0x10)
	enum class EValueType ValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> Values; // 0x18(0x10)
};

// ScriptStruct TslGame.*11f82ce015
// Size: 0x20 (Inherited: 0x00)
struct F*11f82ce015 {
	struct FName ModeName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct TslGame.*e1693f9d0b
// Size: 0x20 (Inherited: 0x00)
struct F*e1693f9d0b {
	int32 QualityLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText DisplayQualityLevelName; // 0x08(0x18)
};

// ScriptStruct TslGame.*5526ca6656
// Size: 0x30 (Inherited: 0x00)
struct F*5526ca6656 {
	struct FText DisplayName; // 0x00(0x18)
	struct FName GamePadSensitiveName; // 0x18(0x08)
	float GamePadSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* GamePadCurve; // 0x28(0x08)
};

// ScriptStruct TslGame.*dba2320e60
// Size: 0x28 (Inherited: 0x00)
struct F*dba2320e60 {
	struct FText DisplayName; // 0x00(0x18)
	struct FName MouseSensitiveName; // 0x18(0x08)
	float MouseSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*99ed3b8094
// Size: 0x30 (Inherited: 0x00)
struct F*99ed3b8094 {
	struct FName Category; // 0x00(0x08)
	struct FName AxisName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	float Scale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*8e6495e0ee
// Size: 0x28 (Inherited: 0x00)
struct F*8e6495e0ee {
	struct FName Category; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct TslGame.*053b615ab7
// Size: 0x30 (Inherited: 0x00)
struct F*053b615ab7 {
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

// ScriptStruct TslGame.*59c56543e9
// Size: 0x10 (Inherited: 0x00)
struct F*59c56543e9 {
	struct FName *3ec9fceb9e; // 0x00(0x08)
	struct FName *fbb728c519; // 0x08(0x08)
};

// ScriptStruct TslGame.*0ac11dd939
// Size: 0x14 (Inherited: 0x00)
struct F*0ac11dd939 {
	float CapsuleHalfHeight; // 0x00(0x04)
	float CapsuleRadius; // 0x04(0x04)
	struct FVector CapsuleOffset; // 0x08(0x0c)
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
// Size: 0x160 (Inherited: 0x00)
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
	bool bVehicleSkinAutoApply; // 0x15f(0x01)
};

// ScriptStruct TslGame.*a3502a83e2
// Size: 0x528 (Inherited: 0x268)
struct F*a3502a83e2 : F*a1c66df06e {
	struct U*1028636f43* WeaponAttachmentData; // 0x268(0x08)
	struct FWeaponAttachmentData AttachmentData; // 0x270(0x250)
	struct UStaticMesh* AttachmentMeshAsset; // 0x4c0(0x20)
	struct FName AttachmentMeshName; // 0x4e0(0x08)
	struct TArray<struct F*70ac80549c> AttachmentWeaponTagData; // 0x4e8(0x10)
	struct UClass* AttachmentTemplate; // 0x4f8(0x08)
	bool EquipOnPickUp; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct UAkAudioEvent* *c0557cb181; // 0x508(0x20)
};

// ScriptStruct TslGame.*2e5b6fb73f
// Size: 0x60 (Inherited: 0x08)
struct F*2e5b6fb73f : FTableRowBase {
	int32 Priority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UClass*> Conditions; // 0x10(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x20(0x10)
	struct TArray<struct F*09719e62b2> *2ab66610d9; // 0x30(0x10)
	struct TArray<struct FName> KeyHintInfoRowNames; // 0x40(0x10)
	struct TArray<struct F*785b71047d> *b05013160a; // 0x50(0x10)
};

// ScriptStruct TslGame.*785b71047d
// Size: 0xb0 (Inherited: 0x08)
struct F*785b71047d : FTableRowBase {
	bool ShowWhenUnassigned; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*a0f386f9e9> ActionsAndAxes; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	struct FText InputModeText; // 0x38(0x18)
	struct FSlateColor DisplayNameColor; // 0x50(0x28)
	bool *8bda90bc4b; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct UClass*> AdditionalConditions; // 0x80(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x90(0x10)
	struct TArray<struct F*09719e62b2> *2ab66610d9; // 0xa0(0x10)
};

// ScriptStruct TslGame.*09719e62b2
// Size: 0x58 (Inherited: 0x08)
struct F*09719e62b2 : FTableRowBase {
	enum class ETableCheckerHideOption *c59c67167f; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *1c0acd1073; // 0x10(0x08)
	struct TArray<struct FString> *89336c57bc; // 0x18(0x10)
	struct TArray<struct FString> *fd1ac0535c; // 0x28(0x10)
	struct TArray<struct FString> *e1f9657752; // 0x38(0x10)
	struct TArray<struct FString> *1845833aed; // 0x48(0x10)
};

// ScriptStruct TslGame.TslPersistantData
// Size: 0x2f8 (Inherited: 0x00)
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
};

// ScriptStruct TslGame.*ee927f6301
// Size: 0x10 (Inherited: 0x00)
struct F*ee927f6301 {
	struct TArray<struct FOutgameUserData> OutGameUserDateSet; // 0x00(0x10)
};

// ScriptStruct TslGame.OutgameUserData
// Size: 0x20 (Inherited: 0x00)
struct FOutgameUserData {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*5d263463f8
// Size: 0x20 (Inherited: 0x00)
struct F*5d263463f8 {
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

// ScriptStruct TslGame.*0e6b7fb120
// Size: 0x88 (Inherited: 0x00)
struct F*0e6b7fb120 {
	struct FString MatchingState; // 0x00(0x10)
	int32 MatchingElasedSeconds; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Address; // 0x18(0x10)
	struct FWuUdpEncryptionKey Key; // 0x28(0x30)
	struct FString InSessionId; // 0x58(0x10)
	struct FString InSessionZkToken; // 0x68(0x10)
	struct FString InModeName; // 0x78(0x10)
};

// ScriptStruct TslGame.*27ca29912b
// Size: 0x20 (Inherited: 0x00)
struct F*27ca29912b {
	struct FString URL; // 0x00(0x10)
	struct FString Packet; // 0x10(0x10)
};

// ScriptStruct TslGame.*abf0ca63e2
// Size: 0x38 (Inherited: 0x00)
struct F*abf0ca63e2 {
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
	struct UClass* *d3e73385da; // 0x3d0(0x08)
};

// ScriptStruct TslGame.*b2d497d5dd
// Size: 0x0c (Inherited: 0x00)
struct F*b2d497d5dd {
	float BeforeDurationSec; // 0x00(0x04)
	float AfterDurationSec; // 0x04(0x04)
	float LinkWaitDurationSec; // 0x08(0x04)
};

// ScriptStruct TslGame.*3da140b2f0
// Size: 0x138 (Inherited: 0x00)
struct F*3da140b2f0 {
	enum class ECharacterInteractBehaviorType CharacterInteractBehaviorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxInteractableDistance; // 0x04(0x04)
	struct F*d632a80c24 AdditionalCastConfig; // 0x08(0x130)
};

// ScriptStruct TslGame.ItemTableRowCraft
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowCraft : F*a1c66df06e {
};

// ScriptStruct TslGame.ItemTableRowBluechip
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowBluechip : F*a1c66df06e {
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
	struct UClass* *8aacb40079; // 0x3b8(0x20)
};

// ScriptStruct TslGame.ItemTableRowCastableHealInstant
// Size: 0x3c0 (Inherited: 0x3b8)
struct FItemTableRowCastableHealInstant : FItemTableRowCastable {
	float *a8528aa3d8; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
};

// ScriptStruct TslGame.ItemTableRowCastableRandomBox
// Size: 0x3c8 (Inherited: 0x3b8)
struct FItemTableRowCastableRandomBox : FItemTableRowCastable {
	struct TArray<struct F*54df2c665a> RandomBoxDatas; // 0x3b8(0x10)
};

// ScriptStruct TslGame.*54df2c665a
// Size: 0x108 (Inherited: 0x00)
struct F*54df2c665a {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*d134abf060 SpawnKitInfo; // 0x08(0x100)
};

// ScriptStruct TslGame.ItemTableRowCastableVehicleRepairKit
// Size: 0x3c0 (Inherited: 0x3b8)
struct FItemTableRowCastableVehicleRepairKit : FItemTableRowCastable {
	float RepairAmount; // 0x3b8(0x04)
	float VehicleSpeedThreshold; // 0x3bc(0x04)
};

// ScriptStruct TslGame.*4f361095e1
// Size: 0x440 (Inherited: 0x410)
struct F*4f361095e1 : F*85a6c064ef {
	struct UClass* WeaponType; // 0x410(0x20)
	struct FName WeaponTag; // 0x430(0x08)
	enum class EWeaponDisplayTypes WeaponDisplayType; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
};

// ScriptStruct TslGame.*a6535174e5
// Size: 0x450 (Inherited: 0x440)
struct F*a6535174e5 : F*4f361095e1 {
	int32 AmmoCount; // 0x440(0x04)
	int32 ForcedPrimarySlotIndex; // 0x444(0x04)
	bool bDisablePrimaryWeaponSwap; // 0x448(0x01)
	bool bHasNumberOfUses; // 0x449(0x01)
	char pad_44A[0x2]; // 0x44a(0x02)
	int32 NumberOfUses; // 0x44c(0x04)
};

// ScriptStruct TslGame.*d08ac2380e
// Size: 0x458 (Inherited: 0x450)
struct F*d08ac2380e : F*a6535174e5 {
	int32 DebuffChargesCount; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
};

// ScriptStruct TslGame.*c5af072e18
// Size: 0x510 (Inherited: 0x410)
struct F*c5af072e18 : F*85a6c064ef {
	int32 ItemLevel; // 0x410(0x04)
	char pad_414[0xc]; // 0x414(0x0c)
	struct FTransform SlotOffset_Primary; // 0x420(0x30)
	struct FTransform SlotOffset_Secondary; // 0x450(0x30)
	struct FTransform SlotOffset_SideArm; // 0x480(0x30)
	struct FTransform SlotOffset_Melee; // 0x4b0(0x30)
	struct FTransform SlotOffset_Thrown; // 0x4e0(0x30)
};

// ScriptStruct TslGame.*21b7b98be0
// Size: 0x20 (Inherited: 0x00)
struct F*21b7b98be0 {
	bool *a48a546312; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *455876ca3f; // 0x08(0x08)
	bool *0bc32777aa; // 0x10(0x01)
	bool bOverrideOverlapSolveMethod; // 0x11(0x01)
	enum class EBuffOverlapSolveMethod *e0e2c0d9fe; // 0x12(0x01)
	bool bOverrideBuffDuration; // 0x13(0x01)
	float *0ac124a040; // 0x14(0x04)
	bool bOverrideInfinite; // 0x18(0x01)
	bool *beba3b020d; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.ItemTableRowEvent
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowEvent : F*a1c66df06e {
};

// ScriptStruct TslGame.*df01bf91c8
// Size: 0x30 (Inherited: 0x00)
struct F*df01bf91c8 {
	int32 BundleId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString BundleName; // 0x08(0x10)
	enum class ELobbyItemBundleType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*068ce12e7b> *e47c81685d; // 0x20(0x10)
};

// ScriptStruct TslGame.*068ce12e7b
// Size: 0x28 (Inherited: 0x00)
struct F*068ce12e7b {
	struct UClass* *78711e458e; // 0x00(0x20)
	int32 BundleId; // 0x20(0x04)
	int32 Quantity; // 0x24(0x04)
};

// ScriptStruct TslGame.ItemTableRowUsedByAction
// Size: 0x268 (Inherited: 0x268)
struct FItemTableRowUsedByAction : F*a1c66df06e {
};

// ScriptStruct TslGame.*33282d863d
// Size: 0x10 (Inherited: 0x00)
struct F*33282d863d {
	struct TArray<struct UItemSpotComponent*> *84145aa0cc; // 0x00(0x10)
};

// ScriptStruct TslGame.*8859411aa2
// Size: 0x50 (Inherited: 0x00)
struct F*8859411aa2 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*6fcdc03907
// Size: 0x20 (Inherited: 0x08)
struct F*6fcdc03907 : FTableRowBase {
	struct FName OriginItemID; // 0x08(0x08)
	struct FName SwitchItemID; // 0x10(0x08)
	int32 SwitchItemCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*c82b8ff4c0
// Size: 0x10 (Inherited: 0x00)
struct F*c82b8ff4c0 {
	struct FName Name; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ebc4436e36
// Size: 0x08 (Inherited: 0x00)
struct F*ebc4436e36 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*9ede932d2f
// Size: 0x20 (Inherited: 0x08)
struct F*9ede932d2f : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	float CategoryFilterWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*153e029ff7
// Size: 0x38 (Inherited: 0x08)
struct F*153e029ff7 : FTableRowBase {
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

// ScriptStruct TslGame.*6c36332859
// Size: 0x5c8 (Inherited: 0x00)
struct F*6c36332859 {
	enum class EItemSpotGroupType SpotGroupType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotGroupPercent; // 0x04(0x04)
	struct TArray<struct F*66423b363d> SpotTypeProperties; // 0x08(0x10)
	char pad_18[0x5b0]; // 0x18(0x5b0)
};

// ScriptStruct TslGame.*66423b363d
// Size: 0x38 (Inherited: 0x00)
struct F*66423b363d {
	enum class EItemSpotType SpotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotPercentMin; // 0x04(0x04)
	float SpotPercentMax; // 0x08(0x04)
	int32 ItemsPerSpotMin; // 0x0c(0x04)
	int32 ItemsPerSpotMax; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*c82b8ff4c0> WeightsPerValue; // 0x18(0x10)
	struct TArray<struct F*c82b8ff4c0> WeightsPerCategory; // 0x28(0x10)
};

// ScriptStruct TslGame.*e52a51266e
// Size: 0xc0 (Inherited: 0x08)
struct F*e52a51266e : FTableRowBase {
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

// ScriptStruct TslGame.*8f889d7851
// Size: 0x10 (Inherited: 0x00)
struct F*8f889d7851 {
	struct TArray<struct F*6c36332859> RawSpotGroupProperties; // 0x00(0x10)
};

// ScriptStruct TslGame.*b90a2741a5
// Size: 0x18 (Inherited: 0x00)
struct F*b90a2741a5 {
	struct FName *9dd87a470a; // 0x00(0x08)
	int32 FirstChildIndex; // 0x08(0x04)
	int32 *7abcd515c2; // 0x0c(0x04)
	enum class EItemSpotGroupType *6d364094d9; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*71439fa3f2
// Size: 0x10 (Inherited: 0x00)
struct F*71439fa3f2 {
	struct FVector Location; // 0x00(0x0c)
	int32 *dff0d0d132; // 0x0c(0x04)
};

// ScriptStruct TslGame.*fb47b4eb6e
// Size: 0x20 (Inherited: 0x00)
struct F*fb47b4eb6e {
	struct FVector *03288e291f; // 0x00(0x0c)
	struct F*d7759ba102 *bd3d5f8de5; // 0x0c(0x0c)
	uint32 HouseID; // 0x18(0x04)
	enum class EItemSpotType *f337602d43; // 0x1c(0x01)
	bool *a0fe570b4e; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct TslGame.*dd69840785
// Size: 0x20 (Inherited: 0x00)
struct F*dd69840785 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FName *9dd87a470a; // 0x18(0x08)
};

// ScriptStruct TslGame.*54f5e984b3
// Size: 0x28 (Inherited: 0x00)
struct F*54f5e984b3 {
	struct AActor* *0419052022; // 0x00(0x08)
	float *a599861e88; // 0x08(0x04)
	float *5e615dddb8; // 0x0c(0x04)
	float *ff4177ea72; // 0x10(0x04)
	float *e792a09761; // 0x14(0x04)
	struct FVector *5d81cb93f6; // 0x18(0x0c)
	float *b5f671999d; // 0x24(0x04)
};

// ScriptStruct TslGame.*5fd372a5bc
// Size: 0x18 (Inherited: 0x00)
struct F*5fd372a5bc {
	float *27f20e5318; // 0x00(0x04)
	float *6d512ce5c6; // 0x04(0x04)
	float *f2fabd3169; // 0x08(0x04)
	float *69ee3a2f18; // 0x0c(0x04)
	float *3b265cecf2; // 0x10(0x04)
	float *f3fea3cdbf; // 0x14(0x04)
};

// ScriptStruct TslGame.*fd23f15a18
// Size: 0xe8 (Inherited: 0x00)
struct F*fd23f15a18 {
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
	enum class ECollisionChannel *44138eb8b4; // 0x24(0x01)
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
	struct F*5fd372a5bc DamageThreatConfig; // 0x6c(0x18)
	struct F*5fd372a5bc SightThreatConfig; // 0x84(0x18)
	struct F*5fd372a5bc NoiseThreatConfig; // 0x9c(0x18)
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

// ScriptStruct TslGame.*414b3efcb4
// Size: 0x28 (Inherited: 0x08)
struct F*414b3efcb4 : FTableRowBase {
	enum class ELocationType LocationType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<bool> VisibilityByZoom; // 0x10(0x10)
	float DesiredAlpha; // 0x20(0x04)
	int32 DesiredFontSize; // 0x24(0x04)
};

// ScriptStruct TslGame.*ec7e13e8b0
// Size: 0x0c (Inherited: 0x00)
struct F*ec7e13e8b0 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*f5be375495
// Size: 0x28 (Inherited: 0x00)
struct F*f5be375495 {
	enum class ELocationType LocationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText LocationName; // 0x08(0x18)
	struct FVector2D Position_MC; // 0x20(0x08)
};

// ScriptStruct TslGame.*18584b5ff2
// Size: 0x18 (Inherited: 0x00)
struct F*18584b5ff2 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*68e2653e02
// Size: 0x10 (Inherited: 0x08)
struct F*68e2653e02 : FTableRowBase {
	struct UClass* LobbySceneTravelClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*165549d287
// Size: 0x180 (Inherited: 0xe0)
struct F*165549d287 : F*08190a2b80 {
	struct TMap<enum class ELobbyCustomizingSlotType, struct F*6679b61e3d> CustomizeLobbyModeScenePivots; // 0xe0(0x50)
	struct TMap<struct FString, struct FVector> AdditionalItemLocationOffset; // 0x130(0x50)
};

// ScriptStruct TslGame.*08190a2b80
// Size: 0xe0 (Inherited: 0xa0)
struct F*08190a2b80 : F*5bb43cd7ec {
	struct TArray<struct FName> LobbyCharacterPivotTags; // 0xa0(0x10)
	struct TArray<struct F*94fc0b2a34> LobbyEquipWeaponDatas; // 0xb0(0x10)
	char pad_C0[0x20]; // 0xc0(0x20)
};

// ScriptStruct TslGame.*5bb43cd7ec
// Size: 0xa0 (Inherited: 0x08)
struct F*5bb43cd7ec : FTableRowBase {
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
	enum class *f121714036 LobbyBlurChangingStates; // 0x75(0x01)
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

// ScriptStruct TslGame.*94fc0b2a34
// Size: 0x18 (Inherited: 0x00)
struct F*94fc0b2a34 {
	struct FName WeaponId; // 0x00(0x08)
	struct TArray<struct FName> WeaponAttachmentIDList; // 0x08(0x10)
};

// ScriptStruct TslGame.*6679b61e3d
// Size: 0x10 (Inherited: 0x00)
struct F*6679b61e3d {
	struct TArray<struct F*d12b022986> CusLobbyScenePivotsDesc; // 0x00(0x10)
};

// ScriptStruct TslGame.*d12b022986
// Size: 0x10 (Inherited: 0x00)
struct F*d12b022986 {
	struct FName CustomizeObjectPivotTag; // 0x00(0x08)
	struct AActor* *c5104ce0cd; // 0x08(0x08)
};

// ScriptStruct TslGame.*f0b6c3ccc6
// Size: 0x190 (Inherited: 0xa0)
struct F*f0b6c3ccc6 : F*5bb43cd7ec {
	struct TMap<enum class EViewModeCategory, struct FName> ViewModePivots; // 0xa0(0x50)
	struct TArray<enum class EViewModeCategory> DisableScaleList; // 0xf0(0x10)
	struct TArray<enum class EViewModeCategory> DisableYAxisList; // 0x100(0x10)
	struct TArray<enum class EViewModeCategory> DisableRotationRollbackList; // 0x110(0x10)
	struct TArray<enum class EViewModeCategory> DisableZoomList; // 0x120(0x10)
	struct TMap<enum class EViewModeCategory, struct F*4c3d858303> TargetObjectRatationRanges; // 0x130(0x50)
	struct FVector2D LoadingSpinnerOffset; // 0x180(0x08)
	bool bAllowZoom; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
};

// ScriptStruct TslGame.*4c3d858303
// Size: 0x10 (Inherited: 0x00)
struct F*4c3d858303 {
	struct FFloatInterval PitchRange; // 0x00(0x08)
	struct FFloatInterval RollRange; // 0x08(0x08)
};

// ScriptStruct TslGame.*314c46bc72
// Size: 0x60 (Inherited: 0x08)
struct F*314c46bc72 : FTableRowBase {
	struct UAnimSequence* PlayerPose; // 0x08(0x08)
	struct FTransform SurvivalPageTransform; // 0x10(0x30)
	struct FString SurvivalPageScene; // 0x40(0x10)
	struct UClass* PoseAsset; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct TslGame.*2bd5f91110
// Size: 0x20 (Inherited: 0x00)
struct F*2bd5f91110 {
	struct TArray<struct ATslArenaPlayerStart*> PlayerStart; // 0x00(0x10)
	struct ATslArenaPlayerStart* *3a7993c557; // 0x10(0x08)
	struct ATslArenaPlayerStart* *5d5824962e; // 0x18(0x08)
};

// ScriptStruct TslGame.*b8c64b30a7
// Size: 0x20 (Inherited: 0x00)
struct F*b8c64b30a7 {
	struct TArray<struct FLinearColor> Vectors; // 0x00(0x10)
	struct TArray<struct UTexture*> Textures; // 0x10(0x10)
};

// ScriptStruct TslGame.*de7b1204dd
// Size: 0x18 (Inherited: 0x00)
struct F*de7b1204dd {
	struct FName Name; // 0x00(0x08)
	enum class EMaterialParameterType Type; // 0x08(0x01)
	bool *fbdf446949; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 *ae25d691e8; // 0x0c(0x04)
	enum class EParameterLUTChannel *00c9ff767b; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*78784dbcca
// Size: 0x70 (Inherited: 0x08)
struct F*78784dbcca : FTableRowBase {
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

// ScriptStruct TslGame.*50c2edc007
// Size: 0x14 (Inherited: 0x00)
struct F*50c2edc007 {
	bool *96b6240661; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct UPrimitiveComponent* *961539faea; // 0x04(0x08)
	uint16 *073d876b1d; // 0x0c(0x02)
	uint16 InstanceIndex; // 0x0e(0x02)
	bool *f987ad8ebb; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGame.*207eedf488
// Size: 0x18 (Inherited: 0x00)
struct F*207eedf488 {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ATslCharacter* Instigator; // 0x10(0x08)
};

// ScriptStruct TslGame.*d39afc155b
// Size: 0x10 (Inherited: 0x00)
struct F*d39afc155b {
	struct TArray<struct F*7e6c6419ab> TeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*7e6c6419ab
// Size: 0x38 (Inherited: 0x00)
struct F*7e6c6419ab {
	int32 TeamId; // 0x00(0x04)
	int32 Chances; // 0x04(0x04)
	struct FString TeamName; // 0x08(0x10)
	struct TArray<struct F*64ccb3e637> PlayersInfo; // 0x18(0x10)
	struct TArray<bool> RoundHistory; // 0x28(0x10)
};

// ScriptStruct TslGame.*64ccb3e637
// Size: 0x30 (Inherited: 0x14)
struct F*64ccb3e637 : F*440130a490 {
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
	enum class EOutGamePlatformProvider PlatformProvider; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*0ee999d4f8
// Size: 0x10 (Inherited: 0x00)
struct F*0ee999d4f8 {
	struct TArray<struct F*b957badeac> StaticTeamsInfo; // 0x00(0x10)
};

// ScriptStruct TslGame.*b957badeac
// Size: 0x28 (Inherited: 0x00)
struct F*b957badeac {
	int32 TeamId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString TeamName; // 0x08(0x10)
	struct TArray<struct F*eb2382898e> StaticPlayersInfo; // 0x18(0x10)
};

// ScriptStruct TslGame.*eb2382898e
// Size: 0x18 (Inherited: 0x00)
struct F*eb2382898e {
	struct FString Name; // 0x00(0x10)
	int32 MemberIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*23650b6ce6
// Size: 0x3c (Inherited: 0x00)
struct F*23650b6ce6 {
	struct FVector LerpSafetyZonePosition; // 0x00(0x0c)
	float LerpSafetyZoneRadius; // 0x0c(0x04)
	struct FVector LerpBlueZonePosition; // 0x10(0x0c)
	float LerpBlueZoneRadius; // 0x1c(0x04)
	float *0d02d382fc; // 0x20(0x04)
	float BlueZoneBeginRadius; // 0x24(0x04)
	struct FVector BlueZoneBeginPosition; // 0x28(0x0c)
	float ElapsedBlueZoneReleaseDuration; // 0x34(0x04)
	float ElapsedWarningDurationForClient; // 0x38(0x04)
};

// ScriptStruct TslGame.*0625f40f5e
// Size: 0x18 (Inherited: 0x00)
struct F*0625f40f5e {
	int32 CurrentStage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*eca50ff219> BlueZoneStatusDataArray; // 0x08(0x10)
};

// ScriptStruct TslGame.*eca50ff219
// Size: 0x68 (Inherited: 0x00)
struct F*eca50ff219 {
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
	int32 *ec2aede01b; // 0x3c(0x04)
	struct FVector SafetyZoneInitialPosition; // 0x40(0x0c)
	float SafetyZoneInitialRadius; // 0x4c(0x04)
	int32 *f147e49ed9; // 0x50(0x04)
	float *5ef1a81dd1; // 0x54(0x04)
	float *363050f23d; // 0x58(0x04)
	float *658cee3a68; // 0x5c(0x04)
	float *364c92dc8e; // 0x60(0x04)
	bool bIsBlueZoneRelease; // 0x64(0x01)
	bool bIsInBattle; // 0x65(0x01)
	bool bIsWorkingBlueZone; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
};

// ScriptStruct TslGame.*7f097b6f50
// Size: 0x48 (Inherited: 0x00)
struct F*7f097b6f50 {
	int32 *a305fa08d7; // 0x00(0x04)
	int32 *f5ad93e8b8; // 0x04(0x04)
	struct TArray<int32> *10186ef08f; // 0x08(0x10)
	int32 *1466811996; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32> *801c75fcda; // 0x20(0x10)
	int32 *9782594827; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<int32> *cfb6ec0fd4; // 0x38(0x10)
};

// ScriptStruct TslGame.*70dbfb3ddb
// Size: 0x08 (Inherited: 0x00)
struct F*70dbfb3ddb {
	float *9efac1004b; // 0x00(0x04)
	bool *79cc2fb50b; // 0x04(0x01)
	bool *0e00e5d307; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGame.*02ce3e2713
// Size: 0x10 (Inherited: 0x00)
struct F*02ce3e2713 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*4eabe98974
// Size: 0x10 (Inherited: 0x00)
struct F*4eabe98974 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*faf4a3b565
// Size: 0x10 (Inherited: 0x00)
struct F*faf4a3b565 {
	struct TArray<struct F*1cb121d193> *d62ccdcc9c; // 0x00(0x10)
};

// ScriptStruct TslGame.*1cb121d193
// Size: 0x1c (Inherited: 0x00)
struct F*1cb121d193 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*9f47ebde3c
// Size: 0x18 (Inherited: 0x08)
struct F*9f47ebde3c : FTableRowBase {
	struct TArray<struct F*d2a7dcd741> Items; // 0x08(0x10)
};

// ScriptStruct TslGame.*d2a7dcd741
// Size: 0x10 (Inherited: 0x00)
struct F*d2a7dcd741 {
	struct F*8203a30396 ItemClass; // 0x00(0x08)
	int32 Quantity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*9e6c738263
// Size: 0x1c (Inherited: 0x00)
struct F*9e6c738263 {
	struct FVector *9f740570ea; // 0x00(0x0c)
	struct FVector *02d7feb770; // 0x0c(0x0c)
	float Speed; // 0x18(0x04)
};

// ScriptStruct TslGame.*8c32275389
// Size: 0x10 (Inherited: 0x00)
struct F*8c32275389 {
	struct FName *81870e6da9; // 0x00(0x08)
	float *9f65ffbbee; // 0x08(0x04)
	bool *3641f196bc; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*5daf4eea1c
// Size: 0x90 (Inherited: 0x00)
struct F*5daf4eea1c {
	struct F*48263761fa *48263761fa; // 0x00(0x88)
	float *5da978d613; // 0x88(0x04)
	int32 *f8759d22f9; // 0x8c(0x04)
};

// ScriptStruct TslGame.*48263761fa
// Size: 0x88 (Inherited: 0x00)
struct F*48263761fa {
	struct TArray<struct UAnimSequenceBase*> *ad4b070ace; // 0x00(0x10)
	struct FAlphaBlend *d735d492d3; // 0x10(0x38)
	struct FAlphaBlend *ed75150f57; // 0x48(0x38)
	float PlayRate; // 0x80(0x04)
	enum class ECustomAnimSlotType *8037c83bd1; // 0x84(0x01)
	bool *ef795063c6; // 0x85(0x01)
	bool *9277c62134; // 0x86(0x01)
	bool bLooping; // 0x87(0x01)
};

// ScriptStruct TslGame.*9b3460bc81
// Size: 0x20 (Inherited: 0x00)
struct F*9b3460bc81 {
	float *5c45654d1a; // 0x00(0x04)
	int32 *572c45bfa5; // 0x04(0x04)
	int32 *6e38e8c840; // 0x08(0x04)
	int32 *9f09143b8b; // 0x0c(0x04)
	int32 *fd3dcd061f; // 0x10(0x04)
	int32 *c373141c23; // 0x14(0x04)
	int32 *14b14e5649; // 0x18(0x04)
	float *99a4da1d9a; // 0x1c(0x04)
};

// ScriptStruct TslGame.*dfe49cc826
// Size: 0x18 (Inherited: 0x00)
struct F*dfe49cc826 {
	int32 Score; // 0x00(0x04)
	bool bIsVisible; // 0x04(0x01)
	bool *63e844abf0; // 0x05(0x01)
	bool *08781941b2; // 0x06(0x01)
	bool *49d41b0fba; // 0x07(0x01)
	float *805ed918d3; // 0x08(0x04)
	float *3a671b6027; // 0x0c(0x04)
	struct AActor* Target; // 0x10(0x08)
};

// ScriptStruct TslGame.*df512540a2
// Size: 0x40 (Inherited: 0x00)
struct F*df512540a2 {
	struct FVector RelativeLocation; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct UClass* *16f53171af; // 0x10(0x08)
	float *355eff8943; // 0x18(0x04)
	float *2a0bbffeb1; // 0x1c(0x04)
	float *799c6ebd78; // 0x20(0x04)
	float *f9370e51df; // 0x24(0x04)
	float *1aaae339ab; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UCurveFloat* *20b75fda3f; // 0x30(0x08)
	enum class ENpcWalkingSpeedType *8e889c5316; // 0x38(0x01)
	bool *456d2a8107; // 0x39(0x01)
	bool *2e928cc3a6; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float *ad7096cc13; // 0x3c(0x04)
};

// ScriptStruct TslGame.*f3ef9f53b9
// Size: 0x18 (Inherited: 0x00)
struct F*f3ef9f53b9 {
	float *966bd4ee38; // 0x00(0x04)
	int32 *2fd88f2c88; // 0x04(0x04)
	struct TArray<struct F*412fdf2b29> *1acb55ed2c; // 0x08(0x10)
};

// ScriptStruct TslGame.*412fdf2b29
// Size: 0x1c (Inherited: 0x00)
struct F*412fdf2b29 {
	int32 *8c8a8c2057; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
};

// ScriptStruct TslGame.*55c9858ace
// Size: 0x2c (Inherited: 0x00)
struct F*55c9858ace {
	int32 *8c8a8c2057; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	int32 Count; // 0x1c(0x04)
	struct UObject* Instigator; // 0x20(0x08)
	bool *2c8f149794; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct TslGame.*1404ebfe08
// Size: 0x30 (Inherited: 0x00)
struct F*1404ebfe08 {
	struct UClass* Pawn; // 0x00(0x08)
	struct UClass* Controller; // 0x08(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x10(0x08)
	struct TArray<struct F*530cc02ba3> *9b9aeca6bd; // 0x18(0x10)
	bool *db91251c31; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*530cc02ba3
// Size: 0x20 (Inherited: 0x00)
struct F*530cc02ba3 {
	struct TArray<struct UClass*> *f7f0ff88a8; // 0x00(0x10)
	struct TArray<struct FName> *bcc8e328c5; // 0x10(0x10)
};

// ScriptStruct TslGame.*c9e3671fe2
// Size: 0x40 (Inherited: 0x00)
struct F*c9e3671fe2 {
	struct TArray<enum class EOneOnOneResultType> Scores; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	enum class EOutGamePlatformProvider TargetPlatform; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 TeamId; // 0x24(0x04)
	int32 *04286eec10; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString AccountId; // 0x30(0x10)
};

// ScriptStruct TslGame.*036c5463bd
// Size: 0x170 (Inherited: 0x00)
struct F*036c5463bd {
	float *add769709f; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<enum class EOneOnOneRoomState, int32> *aace1814d5; // 0x08(0x50)
	bool *84082d006b; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 *d3ab17902b; // 0x5c(0x04)
	int32 *801c9ab0e6; // 0x60(0x04)
	float *89dfde69e3; // 0x64(0x04)
	enum class EOneOnOneInvenRecoverType *4ee91249e8; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FName> *7b956de001; // 0x70(0x10)
	struct TArray<struct FName> *545a1d70c2; // 0x80(0x10)
	struct TMap<enum class EAccessorySlot, struct FName> *5a5083b63e; // 0x90(0x50)
	struct TArray<struct FName> *b69feda7a8; // 0xe0(0x10)
	struct TArray<struct FName> *6a0cfe9433; // 0xf0(0x10)
	struct TArray<struct FName> *9e19ae4dab; // 0x100(0x10)
	struct TArray<struct FName> *7f317cd890; // 0x110(0x10)
	struct TMap<struct FName, int32> *d9d7caf6fd; // 0x120(0x50)
};

// ScriptStruct TslGame.*e45107fdd0
// Size: 0x03 (Inherited: 0x00)
struct F*e45107fdd0 {
	enum class EOneOnOneTicketState *cad7def02a; // 0x00(0x01)
	enum class EOneOnOneStageType *6ec2cae10d; // 0x01(0x01)
	enum class EOneOnOneSideType *21f9cc7568; // 0x02(0x01)
};

// ScriptStruct TslGame.*89ff896e5e
// Size: 0x70 (Inherited: 0x08)
struct F*89ff896e5e : FTableRowBase {
	struct FText *d10b803d8d; // 0x08(0x18)
	struct TMap<enum class EOneOnOneMessageType, struct FText> *57891de147; // 0x20(0x50)
};

// ScriptStruct TslGame.*48d54e8cc0
// Size: 0x30 (Inherited: 0x00)
struct F*48d54e8cc0 {
	struct FName *9dd87a470a; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	int32 *dff0d0d132; // 0x20(0x04)
	int32 *c1ce00c4ae; // 0x24(0x04)
	int32 *583052d5af; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*b1d1476c98
// Size: 0x10 (Inherited: 0x00)
struct F*b1d1476c98 {
	struct UParticleSystem* Template; // 0x00(0x08)
	float *8efec74ff9; // 0x08(0x04)
	float *a4c97cd66b; // 0x0c(0x04)
};

// ScriptStruct TslGame.*9d956cc564
// Size: 0x14 (Inherited: 0x00)
struct F*9d956cc564 {
	float PillarGruntStartHealth; // 0x00(0x04)
	float PillarBossStartHealth; // 0x04(0x04)
	float PatrolAlarmDuration; // 0x08(0x04)
	float *7544a42c1f; // 0x0c(0x04)
	float *857d6b8ca0; // 0x10(0x04)
};

// ScriptStruct TslGame.*55ec0ab8e6
// Size: 0x03 (Inherited: 0x00)
struct F*55ec0ab8e6 {
	enum class *53b2d99d74 X; // 0x00(0x01)
	enum class *53b2d99d74 Y; // 0x01(0x01)
	enum class *53b2d99d74 Z; // 0x02(0x01)
};

// ScriptStruct TslGame.*e39b01bcdc
// Size: 0x40 (Inherited: 0x00)
struct F*e39b01bcdc {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	enum class *22c10d2b19 ForwardAxis; // 0x18(0x01)
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

// ScriptStruct TslGame.*a0a6a62a7e
// Size: 0x08 (Inherited: 0x00)
struct F*a0a6a62a7e {
	struct UClass* *97e5c1c845; // 0x00(0x08)
};

// ScriptStruct TslGame.*ad79b0aea6
// Size: 0xb0 (Inherited: 0x00)
struct F*ad79b0aea6 {
	struct UClass* *97e5c1c845; // 0x00(0x08)
	bool *091a5b9329; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *a440241e7e; // 0x10(0x08)
	struct UClass* *310c36d8f0; // 0x18(0x08)
	struct UClass* Ring; // 0x20(0x08)
	struct FName *ac6ae3d102; // 0x28(0x08)
	enum class EProjectileExplosionStartType *fbd2b40951; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ExplosionDelay; // 0x34(0x04)
	bool *61ce0aa993; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *7b706d67fe; // 0x3c(0x04)
	float FireDelay; // 0x40(0x04)
	float *5e1ca29933; // 0x44(0x04)
	struct F*c1a6d7942c *cab9ab4d34; // 0x48(0x18)
	struct F*c1a6d7942c *fb7692518f; // 0x60(0x18)
	struct F*c1a6d7942c *7b6592bfb4; // 0x78(0x18)
	struct UCurveFloat* *366f87b1cc; // 0x90(0x08)
	struct UCurveFloat* *f186bd97db; // 0x98(0x08)
	float *10fa4cc49f; // 0xa0(0x04)
	float *b29d585f30; // 0xa4(0x04)
	bool *a6e5db738c; // 0xa8(0x01)
	bool *0da585a855; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
};

// ScriptStruct TslGame.*c1a6d7942c
// Size: 0x18 (Inherited: 0x00)
struct F*c1a6d7942c {
	struct UAnimMontage* PinOff; // 0x00(0x08)
	struct UAnimMontage* Cooking; // 0x08(0x08)
	struct UAnimMontage* Release; // 0x10(0x08)
};

// ScriptStruct TslGame.*0703d48b98
// Size: 0xe8 (Inherited: 0x00)
struct F*0703d48b98 {
	float *bad35018ae; // 0x00(0x04)
	float *e0005febb8; // 0x04(0x04)
	int32 *8028fe0026; // 0x08(0x04)
	float *5db5f9e27f; // 0x0c(0x04)
	float *bc05489058; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* *859e1536ed; // 0x18(0x08)
	struct UCurveFloat* *3c4d04f9f6; // 0x20(0x08)
	float *7837706c83; // 0x28(0x04)
	float *a2782d0250; // 0x2c(0x04)
	struct UClass* *498af98d1d; // 0x30(0x08)
	int32 *2a47578454; // 0x38(0x04)
	float *b6d29e8079; // 0x3c(0x04)
	float *88ac3eaf63; // 0x40(0x04)
	float *8cf1846b3d; // 0x44(0x04)
	char *a7e03abf9f : 1; // 0x48(0x01)
	char *36674a050a : 1; // 0x48(0x01)
	char *7b9788efda : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<enum class EDamageTypeCategory> *6953b1bfbc; // 0x50(0x10)
	struct TArray<enum class EDamageTypeCategory> *82bce6fd0d; // 0x60(0x10)
	bool *1b84a7d174; // 0x70(0x01)
	bool *64b9d80963; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct TArray<enum class EPhysicalSurface> *2044776786; // 0x78(0x10)
	struct TArray<struct UClass*> *c901c2e71a; // 0x88(0x10)
	bool *5013daa84a; // 0x98(0x01)
	bool *383ba8cbe3; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float *77f0db87ee; // 0x9c(0x04)
	float *866cee36da; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UTexture* DamageCauserIcon; // 0xa8(0x08)
	float DamageIconRatio; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FText DamageCauserItemName; // 0xb8(0x18)
	enum class EWeaponClass DamageCauserClass; // 0xd0(0x01)
	bool *3fc4e13fb5; // 0xd1(0x01)
	bool *1e918e73a2; // 0xd2(0x01)
	bool *51faaf254c; // 0xd3(0x01)
	float *deed6fdc5e; // 0xd4(0x04)
	struct UCurveFloat* *ec8ffc5b3a; // 0xd8(0x08)
	struct UClass* *bc317a6f22; // 0xe0(0x08)
};

// ScriptStruct TslGame.*f632657bc6
// Size: 0x08 (Inherited: 0x00)
struct F*f632657bc6 {
	float *6c1543d027; // 0x00(0x04)
	float *d34ca5845c; // 0x04(0x04)
};

// ScriptStruct TslGame.*204a0667ba
// Size: 0x18 (Inherited: 0x00)
struct F*204a0667ba {
	struct FVector2D *73e08919b9; // 0x00(0x08)
	float *3359760185; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *651072bd44; // 0x10(0x08)
};

// ScriptStruct TslGame.*e793dcc28b
// Size: 0xa8 (Inherited: 0x00)
struct F*e793dcc28b {
	struct TMap<enum class EWeaponClass, struct FVector2D> *3a41484290; // 0x00(0x50)
	bool *b43ef871c6; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<int32, struct FVector2D> *84e2f3eeea; // 0x58(0x50)
};

// ScriptStruct TslGame.*0bb7458f74
// Size: 0xf0 (Inherited: 0x00)
struct F*0bb7458f74 {
	struct FText *1a832497cc; // 0x00(0x18)
	struct FText *bc8689150b; // 0x18(0x18)
	struct FText *c5994aee13; // 0x30(0x18)
	struct FText *cee14477d3; // 0x48(0x18)
	struct FText *2af7fb1e6e; // 0x60(0x18)
	struct FText *8f9d95bac1; // 0x78(0x18)
	struct FText *505b990d41; // 0x90(0x18)
	struct FText *a46e84dcd2; // 0xa8(0x18)
	struct FText *80d625f056; // 0xc0(0x18)
	struct FText *cf6cc9078c; // 0xd8(0x18)
};

// ScriptStruct TslGame.*d932e04e53
// Size: 0x10 (Inherited: 0x00)
struct F*d932e04e53 {
	bool bUseConstReduction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *29bc40136a; // 0x04(0x04)
	bool bUseScalarReduction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *8ff05321e0; // 0x0c(0x04)
};

// ScriptStruct TslGame.*c2fb6b1152
// Size: 0x18 (Inherited: 0x00)
struct F*c2fb6b1152 {
	struct UAnimMontage* *aa2bd11193; // 0x00(0x08)
	struct UAnimMontage* *6234908eda; // 0x08(0x08)
	float *268b7eea96; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*0b356b0090
// Size: 0x28 (Inherited: 0x00)
struct F*0b356b0090 {
	char pad_0[0x1]; // 0x00(0x01)
	enum class EVehicleEngineState ServerState; // 0x01(0x01)
	char pad_2[0xa]; // 0x02(0x0a)
	bool *ed09f0a323; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *e5169a6941; // 0x10(0x04)
	float *e7c3fea977; // 0x14(0x04)
	float *20891db30f; // 0x18(0x04)
	float StartTime; // 0x1c(0x04)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*51997f61f0
// Size: 0x18 (Inherited: 0x00)
struct F*51997f61f0 {
	float *44970d1629; // 0x00(0x04)
	float *7e9da87317; // 0x04(0x04)
	struct UCurveFloat* *de479a3096; // 0x08(0x08)
	bool *314176ec99; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*265a4748f6
// Size: 0x10 (Inherited: 0x00)
struct F*265a4748f6 {
	float *dc2ff1fba4; // 0x00(0x04)
	float *0f0a2e6c63; // 0x04(0x04)
	float *7a3f1535ff; // 0x08(0x04)
	float *5a054fa7a5; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f9bd3294cf
// Size: 0x50 (Inherited: 0x00)
struct F*f9bd3294cf {
	struct TMap<struct UClass*, struct F*f1453a10ba> *c43fbdff7e; // 0x00(0x50)
};

// ScriptStruct TslGame.*f1453a10ba
// Size: 0x10 (Inherited: 0x00)
struct F*f1453a10ba {
	struct TArray<struct ATslParticle*> *1e940b83cc; // 0x00(0x10)
};

// ScriptStruct TslGame.*2abb056f84
// Size: 0x18 (Inherited: 0x00)
struct F*2abb056f84 {
	int32 *ea71c2e469; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*ebd8454d75> *86ed86b164; // 0x08(0x10)
};

// ScriptStruct TslGame.*da595e0fed
// Size: 0x80 (Inherited: 0x00)
struct F*da595e0fed {
	bool *88370dbc2a; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InWaterAlpha; // 0x04(0x04)
	float PropulsionAlpha; // 0x08(0x04)
	float *07b3a96b31; // 0x0c(0x04)
	struct FVector *2d8fbc2421; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FName *af8594c86b; // 0x20(0x08)
	float *859b0dce47; // 0x28(0x04)
	struct FVector *3b273a08fe; // 0x2c(0x0c)
	float PropulsionForceScale; // 0x38(0x04)
	float *303b6c6a24; // 0x3c(0x04)
	struct FVector *be32454f2e; // 0x40(0x0c)
	float *eb896ea4ac; // 0x4c(0x04)
	float *cadd5c5c7e; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
	struct FVector4 *e2dc2c5644; // 0x60(0x10)
	bool *7c5ddb7e3c; // 0x70(0x01)
	bool IsInWaterGearLock; // 0x71(0x01)
	bool *f6461a4a17; // 0x72(0x01)
	char pad_73[0xd]; // 0x73(0x0d)
};

// ScriptStruct TslGame.*2e2590eb5d
// Size: 0x40 (Inherited: 0x00)
struct F*2e2590eb5d {
	bool *a7d51e64c3; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FVector4 *6027cad45b; // 0x10(0x10)
	struct FVector2D *d1cef57e7c; // 0x20(0x08)
	struct FVector2D *c8070de44b; // 0x28(0x08)
	struct FVector2D *92fb03f27a; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*f227ce4b4e
// Size: 0x28 (Inherited: 0x00)
struct F*f227ce4b4e {
	bool bUseVelocityTransmission; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *6f74cca28d; // 0x04(0x04)
	bool *c4f17f6c1d; // 0x08(0x01)
	bool *7c2aef45ba; // 0x09(0x01)
	bool *2344a5a7c3; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float *f7a4c0580b; // 0x0c(0x04)
	struct TArray<struct F*46e0e39785> *d51cbd82cb; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*46e0e39785
// Size: 0x08 (Inherited: 0x00)
struct F*46e0e39785 {
	float *71be92a9c6; // 0x00(0x04)
	float *072c6ccd4d; // 0x04(0x04)
};

// ScriptStruct TslGame.*714db688e2
// Size: 0x06 (Inherited: 0x00)
struct F*714db688e2 {
	char pad_0[0x6]; // 0x00(0x06)
};

// ScriptStruct TslGame.*7e6fa106d6
// Size: 0x58 (Inherited: 0x00)
struct F*7e6fa106d6 {
	struct UPrimitiveComponent* *11a02b501d; // 0x00(0x08)
	bool *416974a2b2; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector *12879393ca; // 0x0c(0x0c)
	struct FRotator *15cc0c3c92; // 0x18(0x0c)
	struct FRepMovement RepMovement; // 0x24(0x34)
};

// ScriptStruct TslGame.*342e89ddd9
// Size: 0x40 (Inherited: 0x00)
struct F*342e89ddd9 {
	struct FVector2D *2ff34a7ee6; // 0x00(0x08)
	struct FVector2D *6c3144578e; // 0x08(0x08)
	struct FVector2D *e001cd20a1; // 0x10(0x08)
	struct FVector2D *8590776be8; // 0x18(0x08)
	struct FVector2D *417a01f047; // 0x20(0x08)
	struct FVector2D *b904231e5d; // 0x28(0x08)
	struct FVector *d93feed954; // 0x30(0x0c)
	float *10ef23bd3a; // 0x3c(0x04)
};

// ScriptStruct TslGame.*7264b47ffe
// Size: 0x94 (Inherited: 0x00)
struct F*7264b47ffe {
	float *e11fbb87d5; // 0x00(0x04)
	float *0ac4731bfb; // 0x04(0x04)
	float *1e96150c32; // 0x08(0x04)
	float *df9b6e1201; // 0x0c(0x04)
	struct FVector2D *976b0ce260; // 0x10(0x08)
	struct FVector2D *74a066cee5; // 0x18(0x08)
	struct FVector2D *41d04f57e9; // 0x20(0x08)
	struct FVector2D *128cf27d0b; // 0x28(0x08)
	struct FVector2D *216754d5ff; // 0x30(0x08)
	struct FVector2D *e9d09ff646; // 0x38(0x08)
	struct FVector2D *44c523b490; // 0x40(0x08)
	struct FVector2D *bac9f5ff3c; // 0x48(0x08)
	struct FVector2D *8071ac8a23; // 0x50(0x08)
	struct FVector2D *f5597df7ec; // 0x58(0x08)
	struct FVector2D *be4bfad387; // 0x60(0x08)
	struct FVector2D *791b20ab5b; // 0x68(0x08)
	struct FVector2D *1e76b17835; // 0x70(0x08)
	struct FVector2D *af24eae60b; // 0x78(0x08)
	float *792d02e1cb; // 0x80(0x04)
	float *858f6c2032; // 0x84(0x04)
	float *ef7637e74d; // 0x88(0x04)
	float *4ff42d1fb1; // 0x8c(0x04)
	float *a1bd5e47c3; // 0x90(0x04)
};

// ScriptStruct TslGame.*d4f4966afc
// Size: 0x0c (Inherited: 0x00)
struct F*d4f4966afc {
	float Timeout; // 0x00(0x04)
	float Chance; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct TslGame.*6e09a38a03
// Size: 0x10 (Inherited: 0x00)
struct F*6e09a38a03 {
	float *84b9332c6b; // 0x00(0x04)
	float *4d33c4c317; // 0x04(0x04)
	float *6610b624ce; // 0x08(0x04)
	float *54aad4322f; // 0x0c(0x04)
};

// ScriptStruct TslGame.*47f4f83559
// Size: 0x60 (Inherited: 0x00)
struct F*47f4f83559 {
	struct UAkAudioEvent* *332b124484; // 0x00(0x08)
	struct UAkAudioEvent* *bfed0df142; // 0x08(0x08)
	struct UAkAudioEvent* *9397facfee; // 0x10(0x08)
	struct UAkAudioEvent* *7f8b6113bd; // 0x18(0x08)
	struct UAkAudioEvent* *e6c78a21e1; // 0x20(0x08)
	struct UAkAudioEvent* *045edf08e6; // 0x28(0x08)
	struct UAkAudioEvent* *42f530ad2e; // 0x30(0x08)
	struct UAkAudioEvent* *f360cf7f43; // 0x38(0x08)
	struct UAkAudioEvent* *3d08684f6e; // 0x40(0x08)
	struct UAkAudioEvent* *44d0e1f104; // 0x48(0x08)
	struct UAkAudioEvent* *90fe2b5b61; // 0x50(0x08)
	struct UAkAudioEvent* *6786c1f666; // 0x58(0x08)
};

// ScriptStruct TslGame.*bf567a3d34
// Size: 0x44 (Inherited: 0x00)
struct F*bf567a3d34 {
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
	float *8f65a3f78c; // 0x30(0x04)
	float *d7363e0372; // 0x34(0x04)
	float *8529505fd7; // 0x38(0x04)
	float *0f3845822f; // 0x3c(0x04)
	float *1f35ff8e6b; // 0x40(0x04)
};

// ScriptStruct TslGame.*385c5a6efd
// Size: 0x18 (Inherited: 0x00)
struct F*385c5a6efd {
	int32 MaterialIndex; // 0x00(0x04)
	float delayTime; // 0x04(0x04)
	float *a0701b3ed1; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*fca1aea642
// Size: 0x10 (Inherited: 0x00)
struct F*fca1aea642 {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*e2b578f1c9
// Size: 0x70 (Inherited: 0x60)
struct F*e2b578f1c9 : F*2a10c5b6cd {
	struct TArray<struct UObject*> *f6da45bd5e; // 0x60(0x10)
};

// ScriptStruct TslGame.*2a10c5b6cd
// Size: 0x60 (Inherited: 0x00)
struct F*2a10c5b6cd {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*2a626a23dc
// Size: 0x80 (Inherited: 0x60)
struct F*2a626a23dc : F*2a10c5b6cd {
	struct UObject* *2cd7a58d3c; // 0x60(0x20)
};

// ScriptStruct TslGame.*405d7a10bd
// Size: 0x10 (Inherited: 0x00)
struct F*405d7a10bd {
	struct UClass* *46140a2018; // 0x00(0x08)
	bool *47133cfc63; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*f86ac1aa1f
// Size: 0x18 (Inherited: 0x00)
struct F*f86ac1aa1f {
	bool bLoadableEquipSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*b9b817fc72> LoadableEquipSlotInfos; // 0x08(0x10)
};

// ScriptStruct TslGame.*b9b817fc72
// Size: 0x08 (Inherited: 0x00)
struct F*b9b817fc72 {
	float ApplySpaceRate; // 0x00(0x04)
	enum class EEquipSlotID LoadableEquipSlotID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*7af91930fa
// Size: 0x30 (Inherited: 0x00)
struct F*7af91930fa {
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

// ScriptStruct TslGame.*0d75e4f6cd
// Size: 0x48 (Inherited: 0x30)
struct F*0d75e4f6cd : F*7af91930fa {
	struct UClass* ItemPackageClass; // 0x30(0x08)
	struct TArray<struct F*9791d124e9> PackageSpawnProbArray; // 0x38(0x10)
};

// ScriptStruct TslGame.*9791d124e9
// Size: 0x18 (Inherited: 0x00)
struct F*9791d124e9 {
	float ProbabilityPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
};

// ScriptStruct TslGame.*11f4cd3dd8
// Size: 0x38 (Inherited: 0x08)
struct F*11f4cd3dd8 : FTableRowBase {
	struct FName SubCategoryFilter; // 0x08(0x08)
	struct UClass* Vehicle; // 0x10(0x20)
	float SubCategoryFilterWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*000fc51926
// Size: 0x20 (Inherited: 0x08)
struct F*000fc51926 : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	struct FName SubCategoryFilter; // 0x10(0x08)
	float CategoryFilterWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e93dc8a43f
// Size: 0x28 (Inherited: 0x08)
struct F*e93dc8a43f : FTableRowBase {
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

// ScriptStruct TslGame.*bdada2134e
// Size: 0x28 (Inherited: 0x08)
struct F*bdada2134e : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	struct FName SubCategoryFilter; // 0x10(0x08)
	struct UClass* Vehicle; // 0x18(0x08)
	int32 Weight; // 0x20(0x04)
	bool bSnapToFloor; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGame.*fd42d7bfc0
// Size: 0x58 (Inherited: 0x30)
struct F*fd42d7bfc0 : F*7af91930fa {
	struct TArray<struct F*c82b8ff4c0> WeightsPerCategory; // 0x30(0x10)
	struct FFloatRange FuelPercentRange; // 0x40(0x10)
	bool bSnapToFloor; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.*7e83caafcc
// Size: 0x88 (Inherited: 0x08)
struct F*7e83caafcc : FTableRowBase {
	struct FString Description; // 0x08(0x10)
	struct FString VehicleSpawnSubtitleKey; // 0x18(0x10)
	struct UDataTable* VehicleSpotGroupDataTable; // 0x28(0x20)
	struct UDataTable* VehicleSpawnDataTable; // 0x48(0x20)
	struct UDataTable* VehicleVariationDataTable; // 0x68(0x20)
};

// ScriptStruct TslGame.*6014ae6c35
// Size: 0x10 (Inherited: 0x08)
struct F*6014ae6c35 : FTableRowBase {
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

// ScriptStruct TslGame.*49439b491f
// Size: 0x48 (Inherited: 0x00)
struct F*49439b491f {
	struct FString MapName; // 0x00(0x10)
	struct FString BenchmarkPath; // 0x10(0x10)
	struct FString LevelSequenceName; // 0x20(0x10)
	struct FString CameraName; // 0x30(0x10)
	float PlayRate; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*517d3b3584
// Size: 0x20 (Inherited: 0x00)
struct F*517d3b3584 {
	struct FName FunctionName; // 0x00(0x08)
	struct FString CommandName; // 0x08(0x10)
	float delayTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*2d114742d3
// Size: 0x38 (Inherited: 0x00)
struct F*2d114742d3 {
	struct FName *9dd87a470a; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector2D *6799c6eb76; // 0x20(0x08)
	struct FName *bfcc62504c; // 0x28(0x08)
	enum class EThingSpotGroupType *6d364094d9; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*79d51d0a4b
// Size: 0x30 (Inherited: 0x00)
struct F*79d51d0a4b {
	struct FStringAssetReference *4d210ed02b; // 0x00(0x10)
	struct FStringAssetReference *84c29437aa; // 0x10(0x10)
	struct FStringAssetReference *2a4c374c68; // 0x20(0x10)
};

// ScriptStruct TslGame.*3d7889da46
// Size: 0x38 (Inherited: 0x00)
struct F*3d7889da46 {
	struct F*e778ffd93a TargetData; // 0x00(0x28)
	struct TArray<struct F*84ca2d3f37> TargetGameplayEffectSpecs; // 0x28(0x10)
};

// ScriptStruct TslGame.*f126816be8
// Size: 0x18 (Inherited: 0x00)
struct F*f126816be8 {
	struct UClass* TargetType; // 0x00(0x08)
	struct TArray<struct UClass*> TargetGameplayEffectClasses; // 0x08(0x10)
};

// ScriptStruct TslGame.*960a4c68ad
// Size: 0x18 (Inherited: 0x00)
struct F*960a4c68ad {
	struct FName *319e95d17a; // 0x00(0x08)
	int32 *037bbcd120; // 0x08(0x04)
	int32 *10eda83417; // 0x0c(0x04)
	int32 *01ff153c08; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*799fadab93
// Size: 0x18 (Inherited: 0x00)
struct F*799fadab93 {
	struct TArray<struct F*5887ab5737> *5887ab5737; // 0x00(0x10)
	float *d4ca2df26a; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*5887ab5737
// Size: 0x08 (Inherited: 0x00)
struct F*5887ab5737 {
	int32 Percent; // 0x00(0x04)
	int32 *b7a37a97d2; // 0x04(0x04)
};

// ScriptStruct TslGame.*d0d285e692
// Size: 0x08 (Inherited: 0x00)
struct F*d0d285e692 {
	float *2ebaa1d33c; // 0x00(0x04)
	float *d4ca2df26a; // 0x04(0x04)
};

// ScriptStruct TslGame.*4e68ad8be1
// Size: 0x08 (Inherited: 0x00)
struct F*4e68ad8be1 {
	float *da50e3b1dc; // 0x00(0x04)
	float *d4ca2df26a; // 0x04(0x04)
};

// ScriptStruct TslGame.*0dae6d1446
// Size: 0x18 (Inherited: 0x00)
struct F*0dae6d1446 {
	struct FVector *86543b663e; // 0x00(0x0c)
	struct FVector *a1073b3628; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*920ec4901a
// Size: 0x0c (Inherited: 0x00)
struct F*920ec4901a {
	float *5bde22a878; // 0x00(0x04)
	float *ed6cc3ba17; // 0x04(0x04)
	float *3b561c2524; // 0x08(0x04)
};

// ScriptStruct TslGame.*5218816928
// Size: 0x10 (Inherited: 0x00)
struct F*5218816928 {
	float *5bde22a878; // 0x00(0x04)
	float *ed6cc3ba17; // 0x04(0x04)
	int32 *02f836fc49; // 0x08(0x04)
	float *3b561c2524; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1d6c0bb793
// Size: 0x14 (Inherited: 0x00)
struct F*1d6c0bb793 {
	float *6cdb779151; // 0x00(0x04)
	float *07c164b075; // 0x04(0x04)
	float *9560e26eeb; // 0x08(0x04)
	int32 *60ea68c9d8; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct TslGame.*54b84f7328
// Size: 0x38 (Inherited: 0x00)
struct F*54b84f7328 {
	char pad_0[0x30]; // 0x00(0x30)
	struct ATslNewBotAIController* *6bd76a7cae; // 0x30(0x08)
};

// ScriptStruct TslGame.*57a9783ca4
// Size: 0x20 (Inherited: 0x08)
struct F*57a9783ca4 : FTableRowBase {
	int32 Weight; // 0x08(0x04)
	enum class EGender *d96661c03b; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct F*4dc3e392c9> *6f465d6510; // 0x10(0x10)
};

// ScriptStruct TslGame.*4dc3e392c9
// Size: 0x10 (Inherited: 0x00)
struct F*4dc3e392c9 {
	enum class EEquipSlotID SlotName; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AvatarItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*03fe458643
// Size: 0xa0 (Inherited: 0x00)
struct F*03fe458643 {
	struct ATslNewBotCharacter* *a39fae3a37; // 0x00(0x08)
	struct ATslNpcCharacter* *76c20e2396; // 0x08(0x08)
	char pad_10[0x90]; // 0x10(0x90)
};

// ScriptStruct TslGame.*6a16a21755
// Size: 0x10 (Inherited: 0x00)
struct F*6a16a21755 {
	float ProbabilityFirstHit; // 0x00(0x04)
	float DurationTime; // 0x04(0x04)
	float DurationDamageMax; // 0x08(0x04)
	float DurationEmptyShot; // 0x0c(0x04)
};

// ScriptStruct TslGame.*26f3abe2b1
// Size: 0x28 (Inherited: 0x00)
struct F*26f3abe2b1 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UCurveFloat* *eb93b2f792; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct TslGame.*5b546279c2
// Size: 0x1c (Inherited: 0x00)
struct F*5b546279c2 {
	enum class EAIMapName MapName; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Center; // 0x04(0x0c)
	struct FVector *a514002167; // 0x10(0x0c)
};

// ScriptStruct TslGame.*6ebcb1f4b5
// Size: 0x48 (Inherited: 0x00)
struct F*6ebcb1f4b5 {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct TslGame.HouseGroup
// Size: 0x48 (Inherited: 0x00)
struct FHouseGroup {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct TslGame.*e49d550a3c
// Size: 0x70 (Inherited: 0x00)
struct F*e49d550a3c {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct TslGame.*ea9b032417
// Size: 0x0c (Inherited: 0x00)
struct F*ea9b032417 {
	char pad_0[0x8]; // 0x00(0x08)
	float *6d6fd3c44f; // 0x08(0x04)
};

// ScriptStruct TslGame.*a60204d051
// Size: 0x60 (Inherited: 0x00)
struct F*a60204d051 {
	struct UDataTable* *d557d3f40d; // 0x00(0x20)
	struct UDataTable* *0dfb588fd9; // 0x20(0x20)
	float *f7e45b2d2a; // 0x40(0x04)
	float *f768747725; // 0x44(0x04)
	float *5ab0aa42cf; // 0x48(0x04)
	float *710c8558b5; // 0x4c(0x04)
	int32 *1f4d72916b; // 0x50(0x04)
	int32 *135d1fc27d; // 0x54(0x04)
	int32 *d0ceadc20f; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*ae8f1031be
// Size: 0x10 (Inherited: 0x00)
struct F*ae8f1031be {
	float *94af5333ea; // 0x00(0x04)
	float *168a227c34; // 0x04(0x04)
	int32 *cf9053b8ce; // 0x08(0x04)
	float *c744121da9; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7fa5bfeea8
// Size: 0x20 (Inherited: 0x08)
struct F*7fa5bfeea8 : FTableRowBase {
	int32 PhaseIndex; // 0x08(0x04)
	int32 Ratio; // 0x0c(0x04)
	struct TArray<struct F*e8db05fb08> Items; // 0x10(0x10)
};

// ScriptStruct TslGame.*e8db05fb08
// Size: 0x18 (Inherited: 0x00)
struct F*e8db05fb08 {
	enum class EUltAutoEquipItemType *fb89bc0044; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Item; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*b2f769d642
// Size: 0x08 (Inherited: 0x00)
struct F*b2f769d642 {
	struct U*4d779bb1b5* Origin; // 0x00(0x08)
};

// ScriptStruct TslGame.*0a7d2099f6
// Size: 0x10 (Inherited: 0x00)
struct F*0a7d2099f6 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*502bdd388c
// Size: 0xc0 (Inherited: 0x00)
struct F*502bdd388c {
	struct AUltAIController* AIController; // 0x00(0x08)
	char pad_8[0xb8]; // 0x08(0xb8)
};

// ScriptStruct TslGame.*24e06f9033
// Size: 0x18 (Inherited: 0x00)
struct F*24e06f9033 {
	struct ATslPillarCharacter* *0017db131c; // 0x00(0x08)
	struct FGuid *352439680b; // 0x08(0x10)
};

// ScriptStruct TslGame.*a1f8a83b45
// Size: 0x10 (Inherited: 0x00)
struct F*a1f8a83b45 {
	struct TArray<struct F*9f824392c9> *e9271e8c38; // 0x00(0x10)
};

// ScriptStruct TslGame.*9f824392c9
// Size: 0xb0 (Inherited: 0x00)
struct F*9f824392c9 {
	bool *f112642a27; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* *2102582f12; // 0x08(0x08)
	struct FTransform *398d16eaa1; // 0x10(0x30)
	struct TArray<struct ATslStaticContainer*> *abf9f7dc39; // 0x40(0x10)
	struct TArray<struct AActor*> *17d57bf8a2; // 0x50(0x10)
	struct TArray<struct ATslPatrolPath*> Paths; // 0x60(0x10)
	struct TArray<struct ATslPillarCharacter*> *3acb2fa93e; // 0x70(0x10)
	struct TArray<struct ATslParticleEnvironment*> *69286b06a5; // 0x80(0x10)
	struct TArray<struct F*1e8fd5ae7d> *4da8897513; // 0x90(0x10)
	struct FGuid *352439680b; // 0xa0(0x10)
};

// ScriptStruct TslGame.*1e8fd5ae7d
// Size: 0x50 (Inherited: 0x00)
struct F*1e8fd5ae7d {
	struct UClass* ParticleEnvironment; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform ParticleTransform; // 0x10(0x30)
	float ActivateDistances; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct TslGame.*0003a5a748
// Size: 0x20 (Inherited: 0x00)
struct F*0003a5a748 {
	struct FStringAssetReference *b3d6b7d1a5; // 0x00(0x10)
	struct TArray<struct F*4a92c74e99> *826a17bf91; // 0x10(0x10)
};

// ScriptStruct TslGame.*4a92c74e99
// Size: 0x40 (Inherited: 0x00)
struct F*4a92c74e99 {
	struct UPrefabAsset* PrefabAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform PrefabTransform; // 0x10(0x30)
};

// ScriptStruct TslGame.*f87bcba2dd
// Size: 0x18 (Inherited: 0x08)
struct F*f87bcba2dd : FTableRowBase {
	struct UPrefabAsset* ArtPrefabAsset; // 0x08(0x08)
	struct UPrefabAsset* AiPrefabAsset; // 0x10(0x08)
};

// ScriptStruct TslGame.*84f39e464a
// Size: 0x10 (Inherited: 0x00)
struct F*84f39e464a {
	struct TArray<struct ATslPatrolPoint*> *77bcd49ee9; // 0x00(0x10)
};

// ScriptStruct TslGame.*986e6a3b67
// Size: 0x10 (Inherited: 0x00)
struct F*986e6a3b67 {
	struct UClass* *a2b526cc7f; // 0x00(0x08)
	struct FName *37a308a56c; // 0x08(0x08)
};

// ScriptStruct TslGame.*ce565032e3
// Size: 0x1c (Inherited: 0x00)
struct F*ce565032e3 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*ee4c7d39e7
// Size: 0x10 (Inherited: 0x00)
struct F*ee4c7d39e7 {
	int32 DropCount; // 0x00(0x04)
	float DropPercent; // 0x04(0x04)
	struct UClass* OverrideCarePackageItemSpawnerClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*1f98805da5
// Size: 0x18 (Inherited: 0x00)
struct F*1f98805da5 {
	struct UClass* *491b787610; // 0x00(0x08)
	struct UClass* *4a22de3a25; // 0x08(0x08)
	float *ed98071c6f; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*929081bc54
// Size: 0x28 (Inherited: 0x00)
struct F*929081bc54 {
	struct FName *426bb4b929; // 0x00(0x08)
	struct UAkAudioEvent* *dfea851a2f; // 0x08(0x08)
	struct UAkAudioEvent* *049b7b780c; // 0x10(0x08)
	bool *ad526538a1; // 0x18(0x01)
	bool *de6e8d0ed6; // 0x19(0x01)
	bool *e362e6db90; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float *031acde812; // 0x1c(0x04)
	float *d7adefb897; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*471c2963ae
// Size: 0x10 (Inherited: 0x00)
struct F*471c2963ae {
	struct TArray<struct F*f96f663ba5> *e041072bd0; // 0x00(0x10)
};

// ScriptStruct TslGame.*f96f663ba5
// Size: 0x18 (Inherited: 0x00)
struct F*f96f663ba5 {
	struct UClass* *57fef69556; // 0x00(0x08)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float Falloff; // 0x10(0x04)
	bool *0f287c298a; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*5c8e258678
// Size: 0x20 (Inherited: 0x00)
struct F*5c8e258678 {
	struct UBlendSpaceBase* CurrentLocomotionBlendspace; // 0x00(0x08)
	struct UBlendSpaceBase* LocomotionFirst; // 0x08(0x08)
	struct UBlendSpaceBase* LocomotionSecond; // 0x10(0x08)
	float LocomotionAlpha; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a3bf1cbef6
// Size: 0x58 (Inherited: 0x00)
struct F*a3bf1cbef6 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, struct AActor*> *3b9d3ceb54; // 0x08(0x50)
};

// ScriptStruct TslGame.*d209095393
// Size: 0x18 (Inherited: 0x08)
struct F*d209095393 : FTableRowBase {
	float *aa4aaf9f19; // 0x08(0x04)
	float *3fa0cf2cb1; // 0x0c(0x04)
	float *3aa0092836; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*69a53ad40a
// Size: 0x18 (Inherited: 0x00)
struct F*69a53ad40a {
	enum class EAntiCheatKickType KickType; // 0x00(0x01)
	enum class EKickProcess KickProcess; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString KeyString; // 0x08(0x10)
};

// ScriptStruct TslGame.*16a3144534
// Size: 0x18 (Inherited: 0x00)
struct F*16a3144534 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTexture2D* IconTexture; // 0x08(0x08)
	float MaxTime; // 0x10(0x04)
	float FinishTime; // 0x14(0x04)
};

// ScriptStruct TslGame.*726d94d74f
// Size: 0x10 (Inherited: 0x00)
struct F*726d94d74f {
	struct UTexture2D* IdleTexture; // 0x00(0x08)
	struct UTexture2D* DamageTexture; // 0x08(0x08)
};

// ScriptStruct TslGame.*626b1478ab
// Size: 0x20 (Inherited: 0x00)
struct F*626b1478ab {
	struct FString *0297d0573a; // 0x00(0x10)
	struct FString *9284384950; // 0x10(0x10)
};

// ScriptStruct TslGame.*54d794d82f
// Size: 0xb8 (Inherited: 0x00)
struct F*54d794d82f {
	struct FTslLobbyCustomizingData *4eb1cf2bf5; // 0x00(0x58)
	struct UObject* *6175960bba; // 0x58(0x08)
	struct UClass* *d84595af9a; // 0x60(0x20)
	struct TArray<struct UClass*> *7bded758ed; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	struct AActor* *662fa476e0; // 0xa0(0x08)
	struct FString *cf8e44ac60; // 0xa8(0x10)
};

// ScriptStruct TslGame.*cf03a34f41
// Size: 0x70 (Inherited: 0x00)
struct F*cf03a34f41 {
	struct UClass* *eb935de0c2; // 0x00(0x20)
	struct FName *849fe355a8; // 0x20(0x08)
	struct TArray<struct FString> *8712228afd; // 0x28(0x10)
	struct TArray<struct UClass*> *01b2ebf062; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EViewModeCategory *3b07869fa4; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString *666b88fb88; // 0x60(0x10)
};

// ScriptStruct TslGame.*5622888784
// Size: 0x20 (Inherited: 0x00)
struct F*5622888784 {
	struct FString WidgetName; // 0x00(0x10)
	struct FMulticastDelegate *6a37168193; // 0x10(0x10)
};

// ScriptStruct TslGame.*6a9b76ba17
// Size: 0x08 (Inherited: 0x00)
struct F*6a9b76ba17 {
	int32 TeamId; // 0x00(0x04)
	int32 MemberIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*5c97fcf254
// Size: 0x18 (Inherited: 0x00)
struct F*5c97fcf254 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*b0bcdc6bf4
// Size: 0x18 (Inherited: 0x00)
struct F*b0bcdc6bf4 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*1363596d45
// Size: 0x10 (Inherited: 0x00)
struct F*1363596d45 {
	struct TArray<struct AActor*> *7650652fcc; // 0x00(0x10)
};

// ScriptStruct TslGame.*64885604cb
// Size: 0x90 (Inherited: 0x00)
struct F*64885604cb {
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

// ScriptStruct TslGame.*397cf90a6d
// Size: 0x10 (Inherited: 0x00)
struct F*397cf90a6d {
	struct F*c671e1319e *3db0005370; // 0x00(0x03)
	char pad_3[0x5]; // 0x03(0x05)
	struct ATslTrainingPlayerState* *4ed276664f; // 0x08(0x08)
};

// ScriptStruct TslGame.*c671e1319e
// Size: 0x03 (Inherited: 0x00)
struct F*c671e1319e {
	enum class EPrivateWaitingRoomPhase *f3d65f66a8; // 0x00(0x01)
	enum class EPrivateTrainingRoomPhase *19c80bd7bc; // 0x01(0x01)
	enum class ETrainingPracticeType PracticeType; // 0x02(0x01)
};

// ScriptStruct TslGame.*a830d7bb0c
// Size: 0x08 (Inherited: 0x00)
struct F*a830d7bb0c {
	float *7fffc20485; // 0x00(0x04)
	float *7ba3a310ea; // 0x04(0x04)
};

// ScriptStruct TslGame.*f934f14f52
// Size: 0x10 (Inherited: 0x00)
struct F*f934f14f52 {
	int32 *6b0a46741a; // 0x00(0x04)
	int32 *f07c4c553e; // 0x04(0x04)
	int32 *f5bfecc608; // 0x08(0x04)
	int32 *94b5c3c08d; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f41b96a3c6
// Size: 0x60 (Inherited: 0x00)
struct F*f41b96a3c6 {
	struct TMap<int32, int32> *ddb1a023f3; // 0x00(0x50)
	struct TArray<int32> *e2618d2554; // 0x50(0x10)
};

// ScriptStruct TslGame.*f32757a314
// Size: 0x78 (Inherited: 0x00)
struct F*f32757a314 {
	struct FName ItemID; // 0x00(0x08)
	struct F*b5f630b2a1 EquipPosition; // 0x08(0x08)
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

// ScriptStruct TslGame.*eafbcaaccb
// Size: 0x30 (Inherited: 0x00)
struct F*eafbcaaccb {
	struct FName ID; // 0x00(0x08)
	struct UTexture* Icon; // 0x08(0x20)
	int32 ItemNum; // 0x28(0x04)
	int32 DefensivePower; // 0x2c(0x04)
};

// ScriptStruct TslGame.*740bf55ffe
// Size: 0x38 (Inherited: 0x00)
struct F*740bf55ffe {
	struct FName ID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FStringAssetReference Icon; // 0x20(0x10)
	bool bOwned; // 0x30(0x01)
	bool bFull; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 Price; // 0x34(0x04)
};

// ScriptStruct TslGame.*5b6b58e2c9
// Size: 0x50 (Inherited: 0x00)
struct F*5b6b58e2c9 {
	struct FLinearColor Normal; // 0x00(0x10)
	struct FLinearColor Hover; // 0x10(0x10)
	struct FLinearColor Disabled; // 0x20(0x10)
	struct FLinearColor Selected; // 0x30(0x10)
	struct FLinearColor LackCoin; // 0x40(0x10)
};

// ScriptStruct TslGame.*eab7bdb0da
// Size: 0x50 (Inherited: 0x00)
struct F*eab7bdb0da {
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

// ScriptStruct TslGame.*1ecca99528
// Size: 0x50 (Inherited: 0x00)
struct F*1ecca99528 {
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

// ScriptStruct TslGame.*24b5488a6c
// Size: 0x38 (Inherited: 0x00)
struct F*24b5488a6c {
	int32 *8a96d40a7f; // 0x00(0x04)
	enum class EBombUIPlayerStatusType *6ff7d9ca46; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FText PlayerName; // 0x08(0x18)
	int32 Kill; // 0x20(0x04)
	int32 *c6a87f8e1f; // 0x24(0x04)
	int32 Death; // 0x28(0x04)
	int32 *1b5aab66ec; // 0x2c(0x04)
	bool *20d6d12941; // 0x30(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct TslGame.*74d7603a40
// Size: 0x60 (Inherited: 0x00)
struct F*74d7603a40 {
	bool *7347f6652e; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*c190087cab Condition; // 0x08(0x20)
	bool *31e306b6ce; // 0x28(0x01)
	bool *4a1d5b2498; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32 *cacecad8a4; // 0x2c(0x04)
	struct F*532c55d04a Result; // 0x30(0x30)
};

// ScriptStruct TslGame.*532c55d04a
// Size: 0x30 (Inherited: 0x00)
struct F*532c55d04a {
	int32 *bbf4e0b297; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Message; // 0x08(0x18)
	enum class EBombUITeamStatusType *9d38423286; // 0x20(0x01)
	bool *6caa14fd3e; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32 *68001ffa48; // 0x24(0x04)
	int32 *4329fcd8b2; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*c190087cab
// Size: 0x20 (Inherited: 0x00)
struct F*c190087cab {
	enum class EBombRoundResultConditionType Type; // 0x00(0x01)
	enum class EBombUITeamStatusType *5419839d45; // 0x01(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FText Message; // 0x08(0x18)
};

// ScriptStruct TslGame.*bc7adf91ff
// Size: 0x10 (Inherited: 0x00)
struct F*bc7adf91ff {
	struct TArray<enum class EBombUIPlayerStatusType> *d1fa249f59; // 0x00(0x10)
};

// ScriptStruct TslGame.*d4d87d8db5
// Size: 0x30 (Inherited: 0x00)
struct F*d4d87d8db5 {
	struct UTexture2D* *cc0531ca7e; // 0x00(0x08)
	struct FLinearColor *00c3041861; // 0x08(0x10)
	struct UTexture2D* *597f1e8908; // 0x18(0x08)
	struct FLinearColor *256b32302d; // 0x20(0x10)
};

// ScriptStruct TslGame.*53cee72d81
// Size: 0x10 (Inherited: 0x00)
struct F*53cee72d81 {
	struct TArray<struct UObject*> Objects; // 0x00(0x10)
};

// ScriptStruct TslGame.*967de725f2
// Size: 0x20 (Inherited: 0x00)
struct F*967de725f2 {
	int32 CircleNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *5c8ab4584b; // 0x08(0x08)
	struct FName *400bda285c; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*d093c648bb
// Size: 0x10 (Inherited: 0x00)
struct F*d093c648bb {
	struct FStringAssetReference DataTable; // 0x00(0x10)
};

// ScriptStruct TslGame.*cbee78c962
// Size: 0x40 (Inherited: 0x00)
struct F*cbee78c962 {
	struct TArray<struct F*11bc3507e8> Bots; // 0x00(0x10)
	struct FVector StartLocation; // 0x10(0x0c)
	struct FRotator *86386793c9; // 0x1c(0x0c)
	struct FRotator *66251def36; // 0x28(0x0c)
	int32 *a0c0e4483f; // 0x34(0x04)
	bool *30387e7e83; // 0x38(0x01)
	bool *60d762504b; // 0x39(0x01)
	bool *25d5a82fae; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float Timeout; // 0x3c(0x04)
};

// ScriptStruct TslGame.*11bc3507e8
// Size: 0x30 (Inherited: 0x00)
struct F*11bc3507e8 {
	struct FVector SpawnLocation; // 0x00(0x0c)
	struct FRotator *006f8ad86b; // 0x0c(0x0c)
	uint32 ID; // 0x18(0x04)
	uint32 VehicleId; // 0x1c(0x04)
	struct TArray<struct U*1eba5452ae*> Actions; // 0x20(0x10)
};

// ScriptStruct TslGame.*cd31951a93
// Size: 0x08 (Inherited: 0x00)
struct F*cd31951a93 {
	uint32 *1369a9733c; // 0x00(0x04)
	enum class EFollowTargetType TargetType; // 0x04(0x04)
};

// ScriptStruct TslGame.*4ecfde6ee3
// Size: 0x18 (Inherited: 0x08)
struct F*4ecfde6ee3 : FTableRowBase {
	float *e06e3a8077; // 0x08(0x04)
	float *bd672cc3f7; // 0x0c(0x04)
	float *0d58f90418; // 0x10(0x04)
	float *c19a3d457c; // 0x14(0x04)
};

// ScriptStruct TslGame.*9571419cba
// Size: 0x18 (Inherited: 0x00)
struct F*9571419cba {
	struct TArray<struct F*621cda4a75> *1bc13b22a3; // 0x00(0x10)
	int8 *0fbbbd9595; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*621cda4a75
// Size: 0x18 (Inherited: 0x00)
struct F*621cda4a75 {
	struct TArray<struct FVector> *21c0a08330; // 0x00(0x10)
	int32 *1836ab0d1c; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*43e1d548b8
// Size: 0x08 (Inherited: 0x00)
struct F*43e1d548b8 {
	float Gauge; // 0x00(0x04)
	float *272aa68c7c; // 0x04(0x04)
};

// ScriptStruct TslGame.*0792fdad85
// Size: 0x18 (Inherited: 0x00)
struct F*0792fdad85 {
	struct FString *f48322fb40; // 0x00(0x10)
	float *e71022eab9; // 0x10(0x04)
	float *4f879082e0; // 0x14(0x04)
};

// ScriptStruct TslGame.*9e820b5c4e
// Size: 0x18 (Inherited: 0x00)
struct F*9e820b5c4e {
	struct TArray<int32> *69292cba74; // 0x00(0x10)
	struct UMaterialInstance* Material; // 0x10(0x08)
};

// ScriptStruct TslGame.*32db1edfd5
// Size: 0x88 (Inherited: 0x00)
struct F*32db1edfd5 {
	enum class *1275243d25 *9762270251; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *230ba5a111; // 0x08(0x10)
	struct FString *0a144d2e77; // 0x18(0x10)
	struct FString *7a4525ff40; // 0x28(0x10)
	struct FString *449d54728d; // 0x38(0x10)
	struct FString *0e707dc50d; // 0x48(0x10)
	struct FString *1f3223c53f; // 0x58(0x10)
	struct FName *0f0957321e; // 0x68(0x08)
	struct FName *e03838cb3c; // 0x70(0x08)
	struct FName *521794baca; // 0x78(0x08)
	struct FName *e67da48a2e; // 0x80(0x08)
};

// ScriptStruct TslGame.*b911195c52
// Size: 0x38 (Inherited: 0x08)
struct F*b911195c52 : FTableRowBase {
	float EndGameTime; // 0x08(0x04)
	float GeneratorProgressGoal; // 0x0c(0x04)
	struct TArray<float> Survivor_GeneratorProgressInteractionRate; // 0x10(0x10)
	float EscapeProgressGoal; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct F*51e9246695> SurvivorStartingItemArray; // 0x28(0x10)
};

// ScriptStruct TslGame.*51e9246695
// Size: 0x10 (Inherited: 0x00)
struct F*51e9246695 {
	struct FName ItemName; // 0x00(0x08)
	int32 ItemNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*65691603a5
// Size: 0x20 (Inherited: 0x08)
struct F*65691603a5 : FTableRowBase {
	int32 *5edb1127fc; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName ItemName; // 0x10(0x08)
	int32 *8cb0625e4a; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*4f3b5e8770
// Size: 0x30 (Inherited: 0x00)
struct F*4f3b5e8770 {
	struct TArray<struct UClass*> *52e14aab9a; // 0x00(0x10)
	struct TArray<struct F*47e436ad9d> *7b5e25a058; // 0x10(0x10)
	struct UClass* *498af98d1d; // 0x20(0x08)
	bool *9a758a4a3c; // 0x28(0x01)
	bool *4dae01b376; // 0x29(0x01)
	bool *1a712838d2; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.*47e436ad9d
// Size: 0x28 (Inherited: 0x00)
struct F*47e436ad9d {
	struct UClass* *fa55044e54; // 0x00(0x08)
	bool *6843c74203; // 0x08(0x01)
	bool *0335189960; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *f05aae2088; // 0x0c(0x04)
	float *4e5eb1f79e; // 0x10(0x04)
	float *a1bda642a6; // 0x14(0x04)
	float *c5cd8bbde3; // 0x18(0x04)
	float *b81309a974; // 0x1c(0x04)
	enum class *d6dc0510f4 *376e1319b7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*d20ba9c356
// Size: 0x28 (Inherited: 0x00)
struct F*d20ba9c356 {
	struct FVector *3e2f301b6e; // 0x00(0x0c)
	struct FVector *eafbb93bde; // 0x0c(0x0c)
	struct FVector *771bec1721; // 0x18(0x0c)
	struct FColor Color; // 0x24(0x04)
};

// ScriptStruct TslGame.*03ea609bcc
// Size: 0x02 (Inherited: 0x00)
struct F*03ea609bcc {
	enum class EAITaskState *b7522dd8cc; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGame.*2e20d1b959
// Size: 0x18 (Inherited: 0x00)
struct F*2e20d1b959 {
	int32 *97a46c5234; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*5a468e598c> *1e95c6fe15; // 0x08(0x10)
};

// ScriptStruct TslGame.*5a468e598c
// Size: 0x28 (Inherited: 0x20)
struct F*5a468e598c : F*0c45455209 {
	struct ATslLobbyWeapon* TslWeapon; // 0x20(0x08)
};

// ScriptStruct TslGame.*0c45455209
// Size: 0x20 (Inherited: 0x00)
struct F*0c45455209 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString ItemID; // 0x08(0x10)
	struct UItem* Item; // 0x18(0x08)
};

// ScriptStruct TslGame.*aa8cc95255
// Size: 0x10 (Inherited: 0x00)
struct F*aa8cc95255 {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *f011ab0536; // 0x04(0x04)
	struct UClass* *8aacb40079; // 0x08(0x08)
};

// ScriptStruct TslGame.*562cf61a6d
// Size: 0x08 (Inherited: 0x00)
struct F*562cf61a6d {
	bool AttackMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *1448317a4a; // 0x04(0x04)
};

// ScriptStruct TslGame.*410945866b
// Size: 0x14 (Inherited: 0x00)
struct F*410945866b {
	struct AActor* Target; // 0x00(0x08)
	float *dad55b424c; // 0x08(0x04)
	bool *439f2e10e8; // 0x0c(0x01)
	char pad_D[0x7]; // 0x0d(0x07)
};

// ScriptStruct TslGame.*894cf0d139
// Size: 0x14 (Inherited: 0x00)
struct F*894cf0d139 {
	struct FVector Pos; // 0x00(0x0c)
	int32 Reuslt; // 0x0c(0x04)
	float *20e87c08e6; // 0x10(0x04)
};

// ScriptStruct TslGame.*61e38e4a24
// Size: 0x18 (Inherited: 0x00)
struct F*61e38e4a24 {
	float Radius; // 0x00(0x04)
	float Angle; // 0x04(0x04)
	struct FVector Offset; // 0x08(0x0c)
	bool Random; // 0x14(0x01)
	bool IsCheckHeadshot; // 0x15(0x01)
	bool IsShowDebugFan; // 0x16(0x01)
	enum class *98a0cc087a PickerTargetType; // 0x17(0x01)
};

// ScriptStruct TslGame.*ec8c34df4a
// Size: 0x28 (Inherited: 0x00)
struct F*ec8c34df4a {
	int32 *fb173e830d; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName AttackId; // 0x08(0x08)
	float *e3055f7df7; // 0x10(0x04)
	float delayTime; // 0x14(0x04)
	int32 Trigger; // 0x18(0x04)
	char pad_1C[0xc]; // 0x1c(0x0c)
};

// ScriptStruct TslGame.*1cb6789282
// Size: 0x18 (Inherited: 0x00)
struct F*1cb6789282 {
	float Speed; // 0x00(0x04)
	int32 *fb173e830d; // 0x04(0x04)
	float *2010b40cf1; // 0x08(0x04)
	struct FVector2D *6b91c6d576; // 0x0c(0x08)
	char *9b79270566 : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*52c1d32cde
// Size: 0x20 (Inherited: 0x00)
struct F*52c1d32cde {
	float *0dbc01e4e5; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*6f67531033> *7f2fc5529b; // 0x08(0x10)
	float *75f183663e; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*6f67531033
// Size: 0x10 (Inherited: 0x00)
struct F*6f67531033 {
	struct FName *c7a5e2d545; // 0x00(0x08)
	float *8f8a481138; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*948cc24dd8
// Size: 0x988 (Inherited: 0x08)
struct F*948cc24dd8 : FSlateWidgetStyle {
	struct F*66dc9af89d *ded43ab04c; // 0x08(0x870)
	struct FSlateBrush *15cfce5ed4; // 0x878(0x90)
	struct FSlateColor *5c74aa1388; // 0x908(0x28)
	struct FSlateColor TextColor; // 0x930(0x28)
	struct FSlateSound *cd7322d8d5; // 0x958(0x18)
	struct FSlateSound *7f5c8cc52b; // 0x970(0x18)
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

// ScriptStruct TslGame.*367aaebd73
// Size: 0x1c (Inherited: 0x00)
struct F*367aaebd73 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.AutoCompleteVehiclePaths
// Size: 0x20 (Inherited: 0x00)
struct FAutoCompleteVehiclePaths {
	struct FString Kind; // 0x00(0x10)
	struct FString path; // 0x10(0x10)
};

// ScriptStruct TslGame.*a94366be0f
// Size: 0x18 (Inherited: 0x00)
struct F*a94366be0f {
	enum class EBodyCarryState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ATslCharacter* Target; // 0x08(0x08)
	struct ATslCharacter* Parent; // 0x10(0x08)
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

// ScriptStruct TslGame.*eb46499dee
// Size: 0x18 (Inherited: 0x00)
struct F*eb46499dee {
	int32 TeleportType; // 0x00(0x04)
	int32 PracticeType; // 0x04(0x04)
	struct FString *6d424446f9; // 0x08(0x10)
};

// ScriptStruct TslGame.*3b8f2508e5
// Size: 0xe0 (Inherited: 0x00)
struct F*3b8f2508e5 {
	struct FCustomDamageEvent Event; // 0x00(0xd8)
	float *5895c50714; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct TslGame.CustomDamageEvent
// Size: 0xd8 (Inherited: 0x08)
struct FCustomDamageEvent : FTableRowBase {
	bool *f112642a27; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FGuid EventID; // 0x0c(0x10)
	bool bEnabled; // 0x1c(0x01)
	bool *75445b3cac; // 0x1d(0x01)
	bool *c53ff38eba; // 0x1e(0x01)
	bool *98b89817d5; // 0x1f(0x01)
	enum class *e4d6cadeed *70ae0684af; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *6b521df6f2; // 0x24(0x04)
	float *f34f771655; // 0x28(0x04)
	bool *25b5093d30; // 0x2c(0x01)
	enum class ECustomDamageEventReactionType *72bb0e604b; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct UClass* *85b207ff6b; // 0x30(0x20)
	bool *5c04762822; // 0x50(0x01)
	bool *4a62faa1b9; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct UClass* *4238be7658; // 0x58(0x20)
	bool *54a002ef78; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FName *b88b3f16ab; // 0x80(0x08)
	struct FName *f7ffab0915; // 0x88(0x08)
	struct FName *a9352b4d74; // 0x90(0x08)
	bool *effa07fe9c; // 0x98(0x01)
	bool *adec84d50c; // 0x99(0x01)
	bool *30b29735a8; // 0x9a(0x01)
	bool *d4498c3c53; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FName *a637981bbd; // 0xa0(0x08)
	struct FName *df923376c7; // 0xa8(0x08)
	int32 *5cf78f94d0; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FName BoneName; // 0xb8(0x08)
	struct FName *3d4cf1e337; // 0xc0(0x08)
	struct FName *d19dc31833; // 0xc8(0x08)
	enum class ECollisionEnabled *6653bca458; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct TslGame.*00543e7768
// Size: 0x50 (Inherited: 0x00)
struct F*00543e7768 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*0c4c9db607
// Size: 0x04 (Inherited: 0x00)
struct F*0c4c9db607 {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct TslGame.*b13211768f
// Size: 0x10 (Inherited: 0x00)
struct F*b13211768f {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*eb4bfd0ed5
// Size: 0x5b0 (Inherited: 0x00)
struct F*eb4bfd0ed5 {
	char pad_0[0x5b0]; // 0x00(0x5b0)
};

// ScriptStruct TslGame.*5ffd50020a
// Size: 0x20 (Inherited: 0x00)
struct F*5ffd50020a {
	struct UPrimitiveComponent* *5846d73a5b; // 0x00(0x08)
	struct F*29eb06219c Sphere; // 0x08(0x10)
	float *3577b7c009; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*29eb06219c
// Size: 0x10 (Inherited: 0x00)
struct F*29eb06219c {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*939b38351c
// Size: 0x2c (Inherited: 0x00)
struct F*939b38351c {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*8f3f47be01
// Size: 0x28 (Inherited: 0x00)
struct F*8f3f47be01 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*db5ffd1ee3
// Size: 0x3c (Inherited: 0x00)
struct F*db5ffd1ee3 {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct TslGame.*e9f24216e3
// Size: 0x1c (Inherited: 0x00)
struct F*e9f24216e3 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*85353815bc
// Size: 0x18 (Inherited: 0x00)
struct F*85353815bc {
	float *b9dc5e8a67; // 0x00(0x04)
	struct FVector2D *60056591c2; // 0x04(0x08)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*b3e2d8d75e
// Size: 0x28 (Inherited: 0x08)
struct F*b3e2d8d75e : FTableRowBase {
	struct FString Category; // 0x08(0x10)
	struct TArray<struct FString> *ffe57b0558; // 0x18(0x10)
};

// ScriptStruct TslGame.*ebaa3ed839
// Size: 0x28 (Inherited: 0x08)
struct F*ebaa3ed839 : FTableRowBase {
	struct FString *c42acebf83; // 0x08(0x10)
	struct FString *ec95088afc; // 0x18(0x10)
};

// ScriptStruct TslGame.*40b577b12a
// Size: 0x50 (Inherited: 0x30)
struct F*40b577b12a : F*51506716c3 {
	struct FName TabName; // 0x30(0x08)
	struct FName *c8ce5f0937; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct F*1e21ad6934 TargetHud; // 0x48(0x02)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.*51506716c3
// Size: 0x30 (Inherited: 0x08)
struct F*51506716c3 : FTableRowBase {
	int32 *f9256717b9; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayNameText; // 0x10(0x18)
	struct F*61366b388d *0e0624d8ea; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct TslGame.*61366b388d
// Size: 0x02 (Inherited: 0x00)
struct F*61366b388d {
	bool bKeyboardMouse; // 0x00(0x01)
	bool bGamepad; // 0x01(0x01)
};

// ScriptStruct TslGame.*1e21ad6934
// Size: 0x02 (Inherited: 0x00)
struct F*1e21ad6934 {
	bool bVisibleInLobby; // 0x00(0x01)
	bool bVisibleInGame; // 0x01(0x01)
};

// ScriptStruct TslGame.*1f7111a711
// Size: 0x40 (Inherited: 0x30)
struct F*1f7111a711 : F*51506716c3 {
	struct FName TabName; // 0x30(0x08)
	struct FName *c8ce5f0937; // 0x38(0x08)
};

// ScriptStruct TslGame.*65becfba67
// Size: 0x38 (Inherited: 0x30)
struct F*65becfba67 : F*51506716c3 {
	struct FName TabName; // 0x30(0x08)
};

// ScriptStruct TslGame.*25ca23c002
// Size: 0x1b0 (Inherited: 0x30)
struct F*25ca23c002 : F*51506716c3 {
	enum class EOptionTab TabName; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName *c8ce5f0937; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct FName ItemName; // 0x48(0x08)
	struct FText DescriptionText; // 0x50(0x18)
	struct UClass* ItemWidgetClass; // 0x68(0x08)
	struct F*4a02c360c2 *b0de33ead2; // 0x70(0xd0)
	struct UClass* *7b8a9e02ed; // 0x140(0x08)
	bool *ad9285e69f; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TArray<struct F*f88c10be1f> *3394150b29; // 0x150(0x10)
	struct F*3f8ed3898a KeyBindingDesc; // 0x160(0x38)
	struct FString AdditionalInitParameter; // 0x198(0x10)
	struct F*1e21ad6934 TargetHud; // 0x1a8(0x02)
	bool bUseIndentation; // 0x1aa(0x01)
	char pad_1AB[0x5]; // 0x1ab(0x05)
};

// ScriptStruct TslGame.*3f8ed3898a
// Size: 0x38 (Inherited: 0x00)
struct F*3f8ed3898a {
	enum class ETslGameOptionKeyBindingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName InputName; // 0x08(0x08)
	float InputAxisScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FKey> ForbiddenKeys; // 0x18(0x10)
	struct TArray<struct F*a3ef8ec627> DuplicateProhibitionData; // 0x28(0x10)
};

// ScriptStruct TslGame.*a3ef8ec627
// Size: 0x18 (Inherited: 0x00)
struct F*a3ef8ec627 {
	struct FName DuplicateProhibitedTabName; // 0x00(0x08)
	struct FName DuplicateProhibitedCategoryName; // 0x08(0x08)
	struct FName DuplicateProhibitedItemName; // 0x10(0x08)
};

// ScriptStruct TslGame.*f88c10be1f
// Size: 0x100 (Inherited: 0x00)
struct F*f88c10be1f {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
	struct F*4a02c360c2 *fa0bf7d982; // 0x30(0xd0)
};

// ScriptStruct TslGame.*4a02c360c2
// Size: 0xd0 (Inherited: 0x00)
struct F*4a02c360c2 {
	enum class ETslGameOptionSupplementaryType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTexture2D* TextureData; // 0x18(0x20)
	struct UMaterialInterface* *097a3a211d; // 0x38(0x20)
	struct TMap<struct FName, float> *e0792734b2; // 0x58(0x50)
	struct FText *11afda931b; // 0xa8(0x18)
	struct FString ExternalLink; // 0xc0(0x10)
};

// ScriptStruct TslGame.*5b5a480328
// Size: 0x30 (Inherited: 0x00)
struct F*5b5a480328 {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
};

// ScriptStruct TslGame.*8b524108d0
// Size: 0x14 (Inherited: 0x00)
struct F*8b524108d0 {
	float Timestamp; // 0x00(0x04)
	float *decc3abe3c; // 0x04(0x04)
	float *7537b89ff7; // 0x08(0x04)
	float *fb754c85d6; // 0x0c(0x04)
	float *d0b57bde0f; // 0x10(0x04)
};

// ScriptStruct TslGame.*0d6393862f
// Size: 0x78 (Inherited: 0x00)
struct F*0d6393862f {
	struct FName root; // 0x00(0x08)
	struct FName Strap; // 0x08(0x08)
	struct FName BackpackRing; // 0x10(0x08)
	struct FVector DefaultStrapLocation; // 0x18(0x0c)
	struct FRotator DefaultStrapRotation; // 0x24(0x0c)
	struct FVector DefaultSeatLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FAlphaBlend Blend; // 0x40(0x38)
};

// ScriptStruct TslGame.*292aa76f9c
// Size: 0x68 (Inherited: 0x00)
struct F*292aa76f9c {
	enum class EFBRClass ClassType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *991477f231; // 0x04(0x04)
	struct F*57c523fbcf *e18794c083; // 0x08(0x30)
	struct TArray<struct F*57c523fbcf> *d9973cad2f; // 0x38(0x10)
	struct TArray<struct F*d91ec342d7> *21c1cbd310; // 0x48(0x10)
	struct TArray<struct F*3007ffc32b> *3e8082ce15; // 0x58(0x10)
};

// ScriptStruct TslGame.*3007ffc32b
// Size: 0x40 (Inherited: 0x00)
struct F*3007ffc32b {
	struct FName WeaponTag; // 0x00(0x08)
	struct F*ef6a4066ac Anchor; // 0x08(0x28)
	bool bShowToSpectator; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UClass* WidgetClass; // 0x38(0x08)
};

// ScriptStruct TslGame.*d91ec342d7
// Size: 0x28 (Inherited: 0x00)
struct F*d91ec342d7 {
	struct UClass* IconWidgetClass; // 0x00(0x08)
	enum class EEquipSlotID *514ecb6147; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 *9dac4a7a16; // 0x0c(0x04)
	struct FName ItemID; // 0x10(0x08)
	int32 *ba91277a44; // 0x18(0x04)
	enum class *d9226517d5 *80a2f00ada; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName *3a13acd45b; // 0x20(0x08)
};

// ScriptStruct TslGame.*57c523fbcf
// Size: 0x30 (Inherited: 0x00)
struct F*57c523fbcf {
	struct FName *1f656f1871; // 0x00(0x08)
	struct F*d91ec342d7 IconSetting; // 0x08(0x28)
};

// ScriptStruct TslGame.*f423a33422
// Size: 0x10 (Inherited: 0x00)
struct F*f423a33422 {
	struct FName SocketName; // 0x00(0x08)
	int32 *b72b18b026; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*dcf44f6426
// Size: 0x0c (Inherited: 0x00)
struct F*dcf44f6426 {
	float *5d5b9e5631; // 0x00(0x04)
	float *404f4d97f3; // 0x04(0x04)
	float *7c1a759fc7; // 0x08(0x04)
};

// ScriptStruct TslGame.*6d20012a52
// Size: 0x2c (Inherited: 0x00)
struct F*6d20012a52 {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*4ab6c80aca
// Size: 0x38 (Inherited: 0x00)
struct F*4ab6c80aca {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*f4bb801450
// Size: 0x50 (Inherited: 0x00)
struct F*f4bb801450 {
	struct F*0db6f7eb46 *b921ec090b; // 0x00(0x08)
	struct F*0db6f7eb46 *95ad9a224c; // 0x08(0x08)
	struct F*d8777bfcee *a6311f9d21; // 0x10(0x10)
	struct F*d8777bfcee *58aafdc52b; // 0x20(0x10)
	struct UCurveFloat* *68bc0f5a33; // 0x30(0x08)
	float *b0a4885831; // 0x38(0x04)
	float *e3d7c44817; // 0x3c(0x04)
	float *9c88a3483a; // 0x40(0x04)
	float *4d7f09503c; // 0x44(0x04)
	float *6390b2344c; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*7974e6e4e5
// Size: 0x2c (Inherited: 0x00)
struct F*7974e6e4e5 {
	struct FVector *4706153bd9; // 0x00(0x0c)
	float GravityScale; // 0x0c(0x04)
	bool *8be7ffcd45; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *f88d5d5c0c; // 0x14(0x04)
	float *5626219e41; // 0x18(0x04)
	struct F*d8777bfcee *1f9c296265; // 0x1c(0x10)
};

// ScriptStruct TslGame.*7e4ae05050
// Size: 0xb0 (Inherited: 0x00)
struct F*7e4ae05050 {
	float *82bc5290d7; // 0x00(0x04)
	struct F*d8777bfcee *34d5a48a54; // 0x04(0x10)
	struct FVector *b8f3fa3d15; // 0x14(0x0c)
	struct F*d8777bfcee *10f3e7c58c; // 0x20(0x10)
	struct FVector *47aeda94d9; // 0x30(0x0c)
	struct F*d8777bfcee *ba69808aaf; // 0x3c(0x10)
	struct FVector *83418b2010; // 0x4c(0x0c)
	float *a2bc34dcb1; // 0x58(0x04)
	float *9786decd8c; // 0x5c(0x04)
	struct FVector *dcd587ae7d; // 0x60(0x0c)
	struct F*d8777bfcee *649ba75357; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UCurveFloat* *8368f064fa; // 0x80(0x08)
	struct UCurveFloat* *666bec40d3; // 0x88(0x08)
	struct FVector *28be7a3613; // 0x90(0x0c)
	struct F*d8777bfcee *517288e367; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct TslGame.*3678c8264a
// Size: 0x38 (Inherited: 0x00)
struct F*3678c8264a {
	float *d63e8a97b7; // 0x00(0x04)
	float *0b75abbf1d; // 0x04(0x04)
	float *03169b8ba7; // 0x08(0x04)
	struct FVector *db77554ff4; // 0x0c(0x0c)
	struct F*d8777bfcee *0043a28869; // 0x18(0x10)
	struct U*1ba2d2b086* *84cf0adcbf; // 0x28(0x08)
	struct U*1ba2d2b086* *28975a464e; // 0x30(0x08)
};

// ScriptStruct TslGame.*217f1b75bb
// Size: 0x90 (Inherited: 0x00)
struct F*217f1b75bb {
	float *a060317776; // 0x00(0x04)
	float *a327ea2175; // 0x04(0x04)
	float *d63e8a97b7; // 0x08(0x04)
	float *0b75abbf1d; // 0x0c(0x04)
	struct F*d8777bfcee *eedcaf1474; // 0x10(0x10)
	struct F*d8777bfcee *b89714a3ac; // 0x20(0x10)
	struct F*d8777bfcee *07424c71c6; // 0x30(0x10)
	struct F*d8777bfcee *69785e9802; // 0x40(0x10)
	struct F*d8777bfcee *c9b5ff9ffa; // 0x50(0x10)
	struct F*d8777bfcee *c0d2271296; // 0x60(0x10)
	struct F*d8777bfcee *4c06f29b55; // 0x70(0x10)
	struct F*d8777bfcee *8268326d0e; // 0x80(0x10)
};

// ScriptStruct TslGame.*bc7d9a74dd
// Size: 0x0c (Inherited: 0x00)
struct F*bc7d9a74dd {
	float *6bf1429e36; // 0x00(0x04)
	float *34467b8b6b; // 0x04(0x04)
	float *865431953e; // 0x08(0x04)
};

// ScriptStruct TslGame.*e4ad8d0510
// Size: 0x38 (Inherited: 0x00)
struct F*e4ad8d0510 {
	struct F*d8777bfcee *ec031e1e38; // 0x00(0x10)
	struct F*d8777bfcee *bd531a2886; // 0x10(0x10)
	struct UCurveFloat* *66395e467b; // 0x20(0x08)
	struct U*1ba2d2b086* *144bc21cc6; // 0x28(0x08)
	float *0d8c2e6c90; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*e9a2853eeb
// Size: 0xb0 (Inherited: 0x00)
struct F*e9a2853eeb {
	float *03169b8ba7; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct U*1ba2d2b086* *fd7aefb1e4; // 0x08(0x08)
	struct F*d8777bfcee *6a6aab6cec; // 0x10(0x10)
	struct FVector *db77554ff4; // 0x20(0x0c)
	struct FVector *24dc04f663; // 0x2c(0x0c)
	struct F*d8777bfcee *c98641c772; // 0x38(0x10)
	struct FVector *e443368155; // 0x48(0x0c)
	struct F*d8777bfcee *1aab24f882; // 0x54(0x10)
	struct F*d8777bfcee *eec993f205; // 0x64(0x10)
	struct F*d8777bfcee *c7a94d0106; // 0x74(0x10)
	struct F*d8777bfcee *eaecd89299; // 0x84(0x10)
	float *85bef480dc; // 0x94(0x04)
	float *0e815565b9; // 0x98(0x04)
	float *a232cc5649; // 0x9c(0x04)
	struct F*0db6f7eb46 *910d4bc2de; // 0xa0(0x08)
	struct F*0db6f7eb46 *72d75e05bd; // 0xa8(0x08)
};

// ScriptStruct TslGame.*26be336f12
// Size: 0x24 (Inherited: 0x00)
struct F*26be336f12 {
	struct F*0db6f7eb46 *e9d97ad725; // 0x00(0x08)
	struct F*0db6f7eb46 *46518b1122; // 0x08(0x08)
	struct F*0db6f7eb46 *480ef2d94c; // 0x10(0x08)
	struct F*0db6f7eb46 *2fd684b94b; // 0x18(0x08)
	bool *f438a97597; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*77774bd7f5
// Size: 0x10 (Inherited: 0x00)
struct F*77774bd7f5 {
	float Throttle; // 0x00(0x04)
	struct FVector *2af2e01ead; // 0x04(0x0c)
};

// ScriptStruct TslGame.*8b2b3b73a9
// Size: 0x14 (Inherited: 0x00)
struct F*8b2b3b73a9 {
	float *f5ba707deb; // 0x00(0x04)
	float *c34bcf7291; // 0x04(0x04)
	struct FVector *25d01d96e5; // 0x08(0x0c)
};

// ScriptStruct TslGame.*b231deee55
// Size: 0x20 (Inherited: 0x00)
struct F*b231deee55 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UParticleSystem* ParticleSystem_Console; // 0x08(0x08)
	struct UParticleSystem* ParticleSystem_KoreanAndChinese; // 0x10(0x08)
	float MinRadius; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*24ad67693a
// Size: 0x30 (Inherited: 0x00)
struct F*24ad67693a {
	struct UDecalComponent* *cb3b73ffd2; // 0x00(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x08(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct TslGame.*6030e0d031
// Size: 0xc8 (Inherited: 0xb0)
struct F*6030e0d031 : F*9e4daeff05 {
	struct TArray<struct F*66e92248ea> Array; // 0xb0(0x10)
	struct ATslFuelPuddleContainer* Owner; // 0xc0(0x08)
};

// ScriptStruct TslGame.*66e92248ea
// Size: 0x48 (Inherited: 0x0c)
struct F*66e92248ea : F*6837b5545b {
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float *270a0f6863; // 0x1c(0x04)
	float *c373981b4c; // 0x20(0x04)
	bool *5959c32d36; // 0x24(0x01)
	bool *78d0585fb2; // 0x25(0x01)
	bool *9d44c9275f; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	int32 *df9faa7114; // 0x28(0x04)
	float *6e8418dc26; // 0x2c(0x04)
	struct FVector *070389dfa5; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct U*e40c529ffb* *211b3766b7; // 0x40(0x08)
};

// ScriptStruct TslGame.*6125975bcd
// Size: 0x18 (Inherited: 0x00)
struct F*6125975bcd {
	struct FString MapName; // 0x00(0x10)
	struct UClass* RestrictedAreasActorClass; // 0x10(0x08)
};

// ScriptStruct TslGame.*72b7efe834
// Size: 0x28 (Inherited: 0x08)
struct F*72b7efe834 : FTableRowBase {
	struct FString MasterItemID; // 0x08(0x10)
	struct TArray<struct F*fec6f75394> AttachDroppedItems; // 0x18(0x10)
};

// ScriptStruct TslGame.*fec6f75394
// Size: 0x10 (Inherited: 0x00)
struct F*fec6f75394 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*552443e35b
// Size: 0x20 (Inherited: 0x08)
struct F*552443e35b : FTableRowBase {
	int32 RandNumber; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*fec6f75394> DroppedItems; // 0x10(0x10)
};

// ScriptStruct TslGame.*a60ead4be7
// Size: 0x14 (Inherited: 0x00)
struct F*a60ead4be7 {
	int32 *6b210d6e90; // 0x00(0x04)
	int32 *04988295ab; // 0x04(0x04)
	enum class EOutGamePlatformProvider Platform; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct ATslRacingPlayerState* PlayerState; // 0x0c(0x08)
};

// ScriptStruct TslGame.*b58f2ccb3b
// Size: 0x10 (Inherited: 0x00)
struct F*b58f2ccb3b {
	enum class ERespawnType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* Class; // 0x08(0x08)
};

// ScriptStruct TslGame.*c916d2e6e2
// Size: 0x10 (Inherited: 0x00)
struct F*c916d2e6e2 {
	struct ATslZombieDefensePlayerController* Killer; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*eb27518c1f
// Size: 0x10 (Inherited: 0x00)
struct F*eb27518c1f {
	struct UClass* Controller; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
};

// ScriptStruct TslGame.*2c0aa50b78
// Size: 0x08 (Inherited: 0x00)
struct F*2c0aa50b78 {
	enum class *6ce1c965c4 Rule; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*3eb09abc94
// Size: 0x10 (Inherited: 0x00)
struct F*3eb09abc94 {
	struct TArray<struct UItem*> *0a7ce06103; // 0x00(0x10)
};

// ScriptStruct TslGame.*75d0fa070a
// Size: 0x10 (Inherited: 0x00)
struct F*75d0fa070a {
	int32 *8261f45ef8; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslZombiePlayerStartAndRespawn* *6afe359e78; // 0x08(0x08)
};

// ScriptStruct TslGame.*fdebe21cd5
// Size: 0x18 (Inherited: 0x00)
struct F*fdebe21cd5 {
	enum class EAutoRecoveryType AutoType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *5fbe3c498d; // 0x04(0x04)
	float *1f666f3d0b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *61069af4dc; // 0x10(0x08)
};

// ScriptStruct TslGame.*55569de44c
// Size: 0x20 (Inherited: 0x08)
struct F*55569de44c : FTableRowBase {
	int32 *43c3e5bb27; // 0x08(0x04)
	float *fd434ce242; // 0x0c(0x04)
	struct TArray<struct F*31f908f1ca> *1db1087aa2; // 0x10(0x10)
};

// ScriptStruct TslGame.*0fe30156ff
// Size: 0x40 (Inherited: 0x00)
struct F*0fe30156ff {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*7282c17de4
// Size: 0x10 (Inherited: 0x00)
struct F*7282c17de4 {
	struct FName SocketName; // 0x00(0x08)
	struct FName *f9ec0a744e; // 0x08(0x08)
};

// ScriptStruct TslGame.*6c8768d9ee
// Size: 0x10 (Inherited: 0x00)
struct F*6c8768d9ee {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	bool *a3d97d3d0f; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*6a0abbcb69
// Size: 0x10 (Inherited: 0x08)
struct F*6a0abbcb69 : FTableRowBase {
	int32 RemainHelathPercent; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6bcc6f5751
// Size: 0x10 (Inherited: 0x00)
struct F*6bcc6f5751 {
	struct TArray<struct ATslRacingCheckPoint*> CheckPoints; // 0x00(0x10)
};

// ScriptStruct TslGame.*b3e041b675
// Size: 0x10 (Inherited: 0x00)
struct F*b3e041b675 {
	struct FName ActionName; // 0x00(0x08)
	enum class *8d42d05dff KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*51c553ccd2
// Size: 0x38 (Inherited: 0x00)
struct F*51c553ccd2 {
	struct TArray<int32> Kills; // 0x00(0x10)
	int32 Death; // 0x10(0x04)
	int32 *c6a87f8e1f; // 0x14(0x04)
	int32 *fd1334bbef; // 0x18(0x04)
	int32 *212d4fd58e; // 0x1c(0x04)
	int32 *f3fea8ad6a; // 0x20(0x04)
	int32 *5c10c187a4; // 0x24(0x04)
	float *15cbee27ac; // 0x28(0x04)
	char pad_2C[0xc]; // 0x2c(0x0c)
};

// ScriptStruct TslGame.*e1f71ca730
// Size: 0x08 (Inherited: 0x00)
struct F*e1f71ca730 {
	int32 *23aaa59575; // 0x00(0x04)
	enum class ETslBombMatchWinType *41c2bd6873; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*1038549443
// Size: 0x20 (Inherited: 0x00)
struct F*1038549443 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*746b6bb0c5
// Size: 0x10 (Inherited: 0x00)
struct F*746b6bb0c5 {
	struct FName *5318a51f0f; // 0x00(0x08)
	struct FName *421d7acc68; // 0x08(0x08)
};

// ScriptStruct TslGame.*1372015cc4
// Size: 0x48 (Inherited: 0x00)
struct F*1372015cc4 {
	struct FString Category; // 0x00(0x10)
	struct FString Command; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FLinearColor Color; // 0x30(0x10)
	enum class *e16607b81e Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 DefaultParameter; // 0x44(0x04)
};

// ScriptStruct TslGame.*298defb39f
// Size: 0x90 (Inherited: 0x00)
struct F*298defb39f {
	struct UParticleSystem* *11fa385a21; // 0x00(0x08)
	struct FName *879300beaa; // 0x08(0x08)
	struct FName *a624ad2237; // 0x10(0x08)
	struct FName *c51b74946a; // 0x18(0x08)
	struct TMap<int32, struct FVector> *f932ad99a9; // 0x20(0x50)
	float *1fbe41738e; // 0x70(0x04)
	float *f11194a1ff; // 0x74(0x04)
	float *9a0f35dfe1; // 0x78(0x04)
	float *6fca244f90; // 0x7c(0x04)
	float *b479e02ebc; // 0x80(0x04)
	float *af9db9f22c; // 0x84(0x04)
	float *cf7a8f79a2; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.*72453e8ca4
// Size: 0x18 (Inherited: 0x00)
struct F*72453e8ca4 {
	struct FFloatInterval HealthPercentRange; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct TslGame.*d407be9399
// Size: 0x14 (Inherited: 0x00)
struct F*d407be9399 {
	float *cd32e26915; // 0x00(0x04)
	float *077f77b03d; // 0x04(0x04)
	float *2337eb4720; // 0x08(0x04)
	char pad_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct TslGame.*4295a8d081
// Size: 0x08 (Inherited: 0x00)
struct F*4295a8d081 {
	float DragCoefficient; // 0x00(0x04)
	float SectionArea; // 0x04(0x04)
};

// ScriptStruct TslGame.*66082bb869
// Size: 0x08 (Inherited: 0x00)
struct F*66082bb869 {
	bool *4cd98d219e; // 0x00(0x01)
	enum class *55f65ca13c *cc7281a5a0; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *4aabedd7c4; // 0x04(0x04)
};

// ScriptStruct TslGame.*37f58946f4
// Size: 0x18 (Inherited: 0x00)
struct F*37f58946f4 {
	struct UChildActorComponent* ChildActorComponent; // 0x00(0x08)
	struct FVector *727d7fdee1; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*2b1d875e35
// Size: 0xb8 (Inherited: 0x00)
struct F*2b1d875e35 {
	char pad_0[0xa0]; // 0x00(0xa0)
	struct AController* *1419c6df01; // 0xa0(0x08)
	struct AActor* *9e15385c7d; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct TslGame.*4b0a54bc40
// Size: 0x28 (Inherited: 0x00)
struct F*4b0a54bc40 {
	struct FName *1f656f1871; // 0x00(0x08)
	struct TArray<struct F*b0c768ad93> *722c2d9f36; // 0x08(0x10)
	struct TArray<enum class EWeaponAttachmentSlotID> *84a944c54c; // 0x18(0x10)
};

// ScriptStruct TslGame.*d1e1611651
// Size: 0x20 (Inherited: 0x00)
struct F*d1e1611651 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*e8c3d3497a
// Size: 0x18 (Inherited: 0x00)
struct F*e8c3d3497a {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*f7171253d7
// Size: 0x03 (Inherited: 0x00)
struct F*f7171253d7 {
	bool *849e685e05; // 0x00(0x01)
	bool *3742181f48; // 0x01(0x01)
	bool *7658bd0e9d; // 0x02(0x01)
};

// ScriptStruct TslGame.*1a5f7420f1
// Size: 0x20 (Inherited: 0x00)
struct F*1a5f7420f1 {
	struct FString WeatherId; // 0x00(0x10)
	int32 Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName WeatherLevel; // 0x18(0x08)
};

// ScriptStruct TslGame.*fcf76ab119
// Size: 0x50 (Inherited: 0x00)
struct F*fcf76ab119 {
	int32 *904026245f; // 0x00(0x04)
	float *0fc8dddf18; // 0x04(0x04)
	struct TArray<struct FVector> *a56412f43f; // 0x08(0x10)
	int32 *295f98caf3; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> *6185c0fff3; // 0x20(0x10)
	struct TArray<bool> *12e2b5760f; // 0x30(0x10)
	struct TArray<struct UClass*> *e0c9cd56a5; // 0x40(0x10)
};

// ScriptStruct TslGame.*384b5c0312
// Size: 0x30 (Inherited: 0x00)
struct F*384b5c0312 {
	struct ATslLivingThingVolume* *b36aa4f471; // 0x00(0x08)
	int32 *904026245f; // 0x08(0x04)
	float *0fc8dddf18; // 0x0c(0x04)
	int32 *5986aafad3; // 0x10(0x04)
	float SpawnRate; // 0x14(0x04)
	int32 RandomSeed; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct F*2176dc0058> *704f2c0dc8; // 0x20(0x10)
};

// ScriptStruct TslGame.*2176dc0058
// Size: 0x18 (Inherited: 0x00)
struct F*2176dc0058 {
	int32 *b6b662529e; // 0x00(0x04)
	float *6ffeda057a; // 0x04(0x04)
	struct TArray<struct F*da876a82bd> *69aa86e46b; // 0x08(0x10)
};

// ScriptStruct TslGame.*da876a82bd
// Size: 0x18 (Inherited: 0x00)
struct F*da876a82bd {
	float ServerTimeSeconds; // 0x00(0x04)
	bool EventID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<bool> Params; // 0x08(0x10)
};

// ScriptStruct TslGame.*4ffa58e896
// Size: 0x08 (Inherited: 0x00)
struct F*4ffa58e896 {
	enum class ELivingThingThreatLevel ThreatLevel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LastServerTimeSeconds; // 0x04(0x04)
};

// ScriptStruct TslGame.*b04496e91f
// Size: 0x40 (Inherited: 0x00)
struct F*b04496e91f {
	int32 NetGUID; // 0x00(0x04)
	float SpawnTimeSeconds; // 0x04(0x04)
	float DestroyTimeSeconds; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator SpawnRotation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UClass* ActorClass; // 0x28(0x08)
	struct TArray<struct F*da876a82bd> EventArray; // 0x30(0x10)
};

// ScriptStruct TslGame.*475325398b
// Size: 0x30 (Inherited: 0x00)
struct F*475325398b {
	struct TArray<struct F*b992310ea9> TextureParams; // 0x00(0x10)
	struct TArray<struct F*1b87169afa> ScalarParams; // 0x10(0x10)
	struct TArray<struct F*859d75381e> VectorParams; // 0x20(0x10)
};

// ScriptStruct TslGame.*859d75381e
// Size: 0x18 (Inherited: 0x00)
struct F*859d75381e {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct TslGame.*1b87169afa
// Size: 0x10 (Inherited: 0x00)
struct F*1b87169afa {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b992310ea9
// Size: 0x10 (Inherited: 0x00)
struct F*b992310ea9 {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Value; // 0x08(0x08)
};

// ScriptStruct TslGame.*7a8cde217f
// Size: 0x10 (Inherited: 0x00)
struct F*7a8cde217f {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
};

// ScriptStruct TslGame.*2d457a9438
// Size: 0x18 (Inherited: 0x00)
struct F*2d457a9438 {
	struct FName AnimName; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	float ServerTimeSeconds; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*71e0d245ca
// Size: 0x0c (Inherited: 0x00)
struct F*71e0d245ca {
	float *3c8cee8742; // 0x00(0x04)
	int32 *b6b662529e; // 0x04(0x04)
	float *32f8c12a35; // 0x08(0x04)
};

// ScriptStruct TslGame.*c2ad332d18
// Size: 0x38 (Inherited: 0x00)
struct F*c2ad332d18 {
	float *3c8cee8742; // 0x00(0x04)
	int32 *b6b662529e; // 0x04(0x04)
	float *0fc8dddf18; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator *006f8ad86b; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FStringAssetReference ActorClass; // 0x28(0x10)
};

// ScriptStruct TslGame.*b41e16da42
// Size: 0x30 (Inherited: 0x00)
struct F*b41e16da42 {
	float *3c8cee8742; // 0x00(0x04)
	float *9e87795b3d; // 0x04(0x04)
	int32 EventID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<bool> *2bd9e89a30; // 0x10(0x10)
	struct TArray<int32> NetGUIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*79edacfda3
// Size: 0x38 (Inherited: 0x08)
struct F*79edacfda3 : FTableRowBase {
	float CellSize; // 0x08(0x04)
	struct FBoxSphereBounds VolumeBounds; // 0x0c(0x1c)
	struct TArray<struct F*745235ceb0> Scanlines; // 0x28(0x10)
};

// ScriptStruct TslGame.*745235ceb0
// Size: 0x30 (Inherited: 0x00)
struct F*745235ceb0 {
	int32 *c3a491c3d3; // 0x00(0x04)
	int32 *0f34111ac4; // 0x04(0x04)
	int32 *28cdc0369a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int16> *b23d41531f; // 0x10(0x10)
	struct TArray<float> LocationZ; // 0x20(0x10)
};

// ScriptStruct TslGame.*054056bcea
// Size: 0x10 (Inherited: 0x00)
struct F*054056bcea {
	struct UClass* Class; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	bool *a846825076; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*50b4e50075
// Size: 0x18 (Inherited: 0x08)
struct F*50b4e50075 : FTableRowBase {
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

// ScriptStruct TslGame.*d7379f5ca4
// Size: 0x10 (Inherited: 0x00)
struct F*d7379f5ca4 {
	struct TArray<struct U*1b7950d6f1*> LODs; // 0x00(0x10)
};

// ScriptStruct TslGame.*cc5652bd20
// Size: 0x1b8 (Inherited: 0x08)
struct F*cc5652bd20 : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush *2a42df83de; // 0x98(0x90)
	struct FSlateBrush *4d6dbcd619; // 0x128(0x90)
};

// ScriptStruct TslGame.*f2c3a9752c
// Size: 0x38 (Inherited: 0x08)
struct F*f2c3a9752c : FSlateWidgetStyle {
	struct FSlateSound *c795355977; // 0x08(0x18)
	struct FSlateSound *46938899c3; // 0x20(0x18)
};

// ScriptStruct TslGame.*4eabf9280f
// Size: 0x218 (Inherited: 0x08)
struct F*4eabf9280f : FSlateWidgetStyle {
	struct FSlateBrush *78159bf806; // 0x08(0x90)
	struct FSlateBrush *f8c55b8763; // 0x98(0x90)
	struct FSlateBrush *d47573fd4c; // 0x128(0x90)
	struct FSlateSound *c15e82f941; // 0x1b8(0x18)
	struct FSlateSound *df56fad95e; // 0x1d0(0x18)
	struct FSlateSound *410060836b; // 0x1e8(0x18)
	struct FSlateSound *b63b00884e; // 0x200(0x18)
};

// ScriptStruct TslGame.*a58909c59d
// Size: 0x50 (Inherited: 0x00)
struct F*a58909c59d {
	struct FName MonsterName; // 0x00(0x08)
	struct FString NormalKill; // 0x08(0x10)
	struct FString DBNOKill; // 0x18(0x10)
	struct FString MonsterL10Name; // 0x28(0x10)
	struct UClass* DamageType; // 0x38(0x08)
	struct UTexture* DamageCauserIcon; // 0x40(0x08)
	float IconRatio; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*e069570150
// Size: 0x30 (Inherited: 0x20)
struct F*e069570150 : F*77d5c4e4b5 {
	struct FVector *a82ff825d7; // 0x20(0x0c)
	float Scale; // 0x2c(0x04)
};

// ScriptStruct TslGame.*77d5c4e4b5
// Size: 0x20 (Inherited: 0x00)
struct F*77d5c4e4b5 {
	struct FString String; // 0x00(0x10)
	float Duration; // 0x10(0x04)
	struct FColor Color; // 0x14(0x04)
	int32 *61c2731351; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*55a87836ed
// Size: 0x28 (Inherited: 0x00)
struct F*55a87836ed {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *1fb18ae05c; // 0x1c(0x04)
	float Width; // 0x20(0x04)
	int32 *61c2731351; // 0x24(0x04)
};

// ScriptStruct TslGame.*bbd1c8c9ad
// Size: 0x24 (Inherited: 0x00)
struct F*bbd1c8c9ad {
	struct FVector Start; // 0x00(0x0c)
	struct FVector2D Size; // 0x0c(0x08)
	struct FColor Color; // 0x14(0x04)
	float *1fb18ae05c; // 0x18(0x04)
	float Width; // 0x1c(0x04)
	int32 *61c2731351; // 0x20(0x04)
};

// ScriptStruct TslGame.*a998bbed36
// Size: 0x30 (Inherited: 0x00)
struct F*a998bbed36 {
	struct FVector Origin; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float HalfHeight; // 0x1c(0x04)
	struct FColor Color; // 0x20(0x04)
	float *1fb18ae05c; // 0x24(0x04)
	float Width; // 0x28(0x04)
	int32 *61c2731351; // 0x2c(0x04)
};

// ScriptStruct TslGame.*a960420ab3
// Size: 0x20 (Inherited: 0x00)
struct F*a960420ab3 {
	struct FVector Origin; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
	float *1fb18ae05c; // 0x14(0x04)
	float Width; // 0x18(0x04)
	int32 *61c2731351; // 0x1c(0x04)
};

// ScriptStruct TslGame.*97f465b29d
// Size: 0x2c (Inherited: 0x28)
struct F*97f465b29d : F*508c2091ba {
	float ArrowSize; // 0x28(0x04)
};

// ScriptStruct TslGame.*508c2091ba
// Size: 0x28 (Inherited: 0x00)
struct F*508c2091ba {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *1fb18ae05c; // 0x1c(0x04)
	float Width; // 0x20(0x04)
	int32 *61c2731351; // 0x24(0x04)
};

// ScriptStruct TslGame.*b12eae67fa
// Size: 0x118 (Inherited: 0x00)
struct F*b12eae67fa {
	float *8b9f16088b; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *af11ad488b; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, struct F*99b7f8bb3e> *3d949b36c1; // 0x58(0x50)
	struct TMap<enum class EWeaponClass, struct F*87a4a57e18> *852ec71c06; // 0xa8(0x50)
	float *8ca821c38a; // 0xf8(0x04)
	float *953383fe14; // 0xfc(0x04)
	float *52334bd65d; // 0x100(0x04)
	float *3fff959bab; // 0x104(0x04)
	float *503038065e; // 0x108(0x04)
	float *befa61d523; // 0x10c(0x04)
	float *0d6e76c189; // 0x110(0x04)
	enum class EDamageReason *7c177e982d; // 0x114(0x01)
	bool *c77c294df0; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
};

// ScriptStruct TslGame.*87a4a57e18
// Size: 0x10 (Inherited: 0x00)
struct F*87a4a57e18 {
	float *75036766d0; // 0x00(0x04)
	float *42675fced3; // 0x04(0x04)
	float *efdd250e9b; // 0x08(0x04)
	bool *2f6028eec9; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*99b7f8bb3e
// Size: 0x10 (Inherited: 0x00)
struct F*99b7f8bb3e {
	float *efdd250e9b; // 0x00(0x04)
	float *14348a4e4e; // 0x04(0x04)
	float *3bcd9a671a; // 0x08(0x04)
	float *f807477f83; // 0x0c(0x04)
};

// ScriptStruct TslGame.*df8da48b38
// Size: 0x20 (Inherited: 0x00)
struct F*df8da48b38 {
	struct ATslPlayerState* PlayerState; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct TslGame.*e5339ad161
// Size: 0x50 (Inherited: 0x00)
struct F*e5339ad161 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*ffbb1e52b4
// Size: 0x20 (Inherited: 0x08)
struct F*ffbb1e52b4 : FTableRowBase {
	int32 StatudID; // 0x08(0x04)
	float ZombieATK; // 0x0c(0x04)
	float ZombieHP; // 0x10(0x04)
	float ZombieSPD; // 0x14(0x04)
	float ZombieJumpHeight; // 0x18(0x04)
	int32 OfferedCoinNum; // 0x1c(0x04)
};

// ScriptStruct TslGame.*ae6f34788e
// Size: 0x48 (Inherited: 0x08)
struct F*ae6f34788e : FTableRowBase {
	int32 *d13bab5f97; // 0x08(0x04)
	bool *2fecd56658; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *239bc03017; // 0x10(0x04)
	float *6df3cb7bf9; // 0x14(0x04)
	bool *3a4a6b5e1a; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 *e03b32338e; // 0x1c(0x04)
	bool *8035288959; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *37f12dd21e; // 0x24(0x04)
	float *15b88ecd83; // 0x28(0x04)
	bool *1147def904; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *09765764b3; // 0x30(0x04)
	float *078993c1f5; // 0x34(0x04)
	float *707c81d075; // 0x38(0x04)
	float *6aae3ce0e1; // 0x3c(0x04)
	float *d1a1aeb6a0; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*6e80f81072
// Size: 0x48 (Inherited: 0x08)
struct F*6e80f81072 : FTableRowBase {
	int32 StatusID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* Pawn; // 0x10(0x08)
	float ATKMultiplier; // 0x18(0x04)
	float HP; // 0x1c(0x04)
	float SPDMultiplier; // 0x20(0x04)
	float JumpHeightMultiplier; // 0x24(0x04)
	struct TArray<struct F*e3a7093e6c> ExclusiveDropItems; // 0x28(0x10)
	enum class EZombieAttackType AttackType; // 0x38(0x01)
	enum class *ffefe2a799 TargetingType; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float AggressiveDistance; // 0x3c(0x04)
	float SearchRadius; // 0x40(0x04)
	enum class EOPUIMonsterType MonsterType; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct TslGame.*e3a7093e6c
// Size: 0x18 (Inherited: 0x00)
struct F*e3a7093e6c {
	struct FName DropItemID; // 0x00(0x08)
	int32 DropItemCount; // 0x08(0x04)
	int32 DropItemRate; // 0x0c(0x04)
	float DropProbability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*56837392da
// Size: 0x58 (Inherited: 0x08)
struct F*56837392da : FTableRowBase {
	int32 ZDBalanceID; // 0x08(0x04)
	int32 StageNum; // 0x0c(0x04)
	float StageLimitTime; // 0x10(0x04)
	float StageCraftTime; // 0x14(0x04)
	struct TArray<struct F*63ec00b02c> WaveList; // 0x18(0x10)
	float ZombieATK; // 0x28(0x04)
	float ZombieHP; // 0x2c(0x04)
	float ZombieSPD; // 0x30(0x04)
	float ZombieJumpHeight; // 0x34(0x04)
	struct TArray<struct F*e3a7093e6c> DropItems; // 0x38(0x10)
	int32 OfferedCoinNum; // 0x48(0x04)
	int32 HeadShotKillReward; // 0x4c(0x04)
	int32 MeleeKillReward; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*63ec00b02c
// Size: 0x20 (Inherited: 0x00)
struct F*63ec00b02c {
	int32 WavePerLimitCount; // 0x00(0x04)
	int32 WavePerMaxCount; // 0x04(0x04)
	float WaveInterval; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*433b09908e> ZombieList; // 0x10(0x10)
};

// ScriptStruct TslGame.*433b09908e
// Size: 0x08 (Inherited: 0x00)
struct F*433b09908e {
	int32 ZombieStatusID; // 0x00(0x04)
	int32 Weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*4111fb30a4
// Size: 0x10 (Inherited: 0x00)
struct F*4111fb30a4 {
	struct UClass* *ba52ddc2af; // 0x00(0x08)
	int32 Number; // 0x08(0x04)
	int32 *5edb1127fc; // 0x0c(0x04)
};

// ScriptStruct TslGame.*4166d910e9
// Size: 0x10 (Inherited: 0x00)
struct F*4166d910e9 {
	struct UClass* *ba52ddc2af; // 0x00(0x08)
	int32 Number; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*0bd744a368
// Size: 0x10 (Inherited: 0x00)
struct F*0bd744a368 {
	struct UClass* *ba52ddc2af; // 0x00(0x08)
	int32 Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*3f94b4aef1
// Size: 0x20 (Inherited: 0x08)
struct F*3f94b4aef1 : FTableRowBase {
	enum class EPhysicalSurface *57f97bdf3c; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*a86e9a31d7 *1b608bdb5f; // 0x10(0x10)
};

// ScriptStruct TslGame.*a86e9a31d7
// Size: 0x10 (Inherited: 0x00)
struct F*a86e9a31d7 {
	float Damage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* *498af98d1d; // 0x08(0x08)
};

// ScriptStruct TslGame.*b0b2c4a857
// Size: 0x20 (Inherited: 0x00)
struct F*b0b2c4a857 {
	enum class *43fe99eba5 Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FStringClassReference *4b87b474ab; // 0x08(0x10)
	bool *b7af1ca573; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*c27df8e27f
// Size: 0x28 (Inherited: 0x08)
struct F*c27df8e27f : FTableRowBase {
	enum class *43fe99eba5 Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FStringClassReference *4b87b474ab; // 0x10(0x10)
	float *675c29da44; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*d55a6e06e7
// Size: 0x08 (Inherited: 0x00)
struct F*d55a6e06e7 {
	float *bcaeba674a; // 0x00(0x04)
	float *d05b31e1b5; // 0x04(0x04)
};

// ScriptStruct TslGame.*cb3718ae74
// Size: 0xb0 (Inherited: 0x00)
struct F*cb3718ae74 {
	float *8b9f16088b; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *af11ad488b; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, float> *6cba6db9a9; // 0x58(0x50)
	float *4e0dcb56c3; // 0xa8(0x04)
	enum class EEquipSlotID *79c8ab577f; // 0xac(0x01)
	enum class EDamageReason *7c177e982d; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
};

// ScriptStruct TslGame.*4d9bdfc0ed
// Size: 0x38 (Inherited: 0x00)
struct F*4d9bdfc0ed {
	struct ATslCharacter* *d57edd920a; // 0x00(0x08)
	struct ATslCharacter* *528a7d547a; // 0x08(0x08)
	struct ATslPostProcessEffect* Effect; // 0x10(0x08)
	struct ATslPlayerController* PlayerController; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct TslGame.*1865a40e93
// Size: 0x20 (Inherited: 0x00)
struct F*1865a40e93 {
	struct UClass* MonsterTemplate; // 0x00(0x08)
	int32 SpawnMaxCount; // 0x08(0x04)
	int32 CurTotalSpawnCount; // 0x0c(0x04)
	int32 CurSameSpawnCount; // 0x10(0x04)
	int32 *337b65faee; // 0x14(0x04)
	int32 *5edb1127fc; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.OverPowerUserPlayData
// Size: 0x10 (Inherited: 0x08)
struct FOverPowerUserPlayData : FBaseUserPlayData {
	int32 OpCoins; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e95d11631f
// Size: 0x10 (Inherited: 0x00)
struct F*e95d11631f {
	struct UClass* *9ee4a2f7eb; // 0x00(0x08)
	float *e93d9ec9bb; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.LogRacingModeCheckPointPlayData
// Size: 0x20 (Inherited: 0x00)
struct FLogRacingModeCheckPointPlayData {
	int32 *b546f4cc33; // 0x00(0x04)
	float *2c11714e16; // 0x04(0x04)
	int32 *663730229f; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString *6c63f350ec; // 0x10(0x10)
};

// ScriptStruct TslGame.*bde5341d12
// Size: 0x0c (Inherited: 0x00)
struct F*bde5341d12 {
	int32 *06e953086e; // 0x00(0x04)
	int32 Labs; // 0x04(0x04)
	float *f457abbc2d; // 0x08(0x04)
};

// ScriptStruct TslGame.*0715982ddf
// Size: 0xb0 (Inherited: 0x00)
struct F*0715982ddf {
	struct TArray<struct F*5f5dd844ea> ESportsTeamInfos; // 0x00(0x10)
	char pad_10[0xa0]; // 0x10(0xa0)
};

// ScriptStruct TslGame.*5f5dd844ea
// Size: 0x40 (Inherited: 0x00)
struct F*5f5dd844ea {
	struct FString TeamName; // 0x00(0x10)
	struct FString TeamFullName; // 0x10(0x10)
	struct FString TeamLogoUrl; // 0x20(0x10)
	struct TArray<struct F*61727b1178> Rosters; // 0x30(0x10)
};

// ScriptStruct TslGame.*61727b1178
// Size: 0x40 (Inherited: 0x00)
struct F*61727b1178 {
	struct FString Name; // 0x00(0x10)
	struct FString FullName; // 0x10(0x10)
	struct FString Nickname; // 0x20(0x10)
	struct FString PhotoUrl; // 0x30(0x10)
};

// ScriptStruct TslGame.*d5ca65833c
// Size: 0x50 (Inherited: 0x00)
struct F*d5ca65833c {
	struct TMap<struct FName, struct F*da3ef81717> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*da3ef81717
// Size: 0x50 (Inherited: 0x00)
struct F*da3ef81717 {
	struct TMap<struct FName, struct FString> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*c780137815
// Size: 0x10 (Inherited: 0x00)
struct F*c780137815 {
	struct TArray<struct F*65289e4d5a> Hierarchy; // 0x00(0x10)
};

// ScriptStruct TslGame.*65289e4d5a
// Size: 0x48 (Inherited: 0x00)
struct F*65289e4d5a {
	struct F*65becfba67 TabDesc_DataTableRow; // 0x00(0x38)
	struct TArray<struct F*6163bb1132> SubTabs; // 0x38(0x10)
};

// ScriptStruct TslGame.*6163bb1132
// Size: 0x50 (Inherited: 0x00)
struct F*6163bb1132 {
	struct F*1f7111a711 SubTabDesc_DataTableRow; // 0x00(0x40)
	struct TArray<struct F*7de3aec344> Categories; // 0x40(0x10)
};

// ScriptStruct TslGame.*7de3aec344
// Size: 0x60 (Inherited: 0x00)
struct F*7de3aec344 {
	struct F*40b577b12a CategoryDesc_DataTableRow; // 0x00(0x50)
	struct TArray<struct F*25ca23c002> Items_DataTable; // 0x50(0x10)
};

// ScriptStruct TslGame.*0985a448a7
// Size: 0x18 (Inherited: 0x00)
struct F*0985a448a7 {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*50080e721b
// Size: 0x24 (Inherited: 0x00)
struct F*50080e721b {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct TslGame.*b5b2216745
// Size: 0x68 (Inherited: 0x00)
struct F*b5b2216745 {
	float *94a19663e3; // 0x00(0x04)
	float *649e89dda3; // 0x04(0x04)
	float *dec265235c; // 0x08(0x04)
	float *4957a9d4ff; // 0x0c(0x04)
	float *b0a56a105a; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UParticleSystem* *fefda1000b; // 0x18(0x08)
	struct UClass* *2178a315da; // 0x20(0x08)
	struct UClass* *b73cdbfd62; // 0x28(0x08)
	struct UAkAudioEvent* *a97e1f0dd5; // 0x30(0x08)
	struct UAkAudioEvent* *dbb7e146ad; // 0x38(0x08)
	struct UAkAudioEvent* *b3ff3d5cab; // 0x40(0x08)
	struct UAkAudioEvent* *85a260d33e; // 0x48(0x08)
	struct UAkAudioEvent* *d44e7dce16; // 0x50(0x08)
	float *5f18998fd6; // 0x58(0x04)
	float *089118f667; // 0x5c(0x04)
	float *2d3ca5b213; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.*093df3e14f
// Size: 0xe8 (Inherited: 0x00)
struct F*093df3e14f {
	bool *019340cf27; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *8028fe0026; // 0x04(0x04)
	float *5db5f9e27f; // 0x08(0x04)
	float *bc05489058; // 0x0c(0x04)
	struct UCurveFloat* *859e1536ed; // 0x10(0x08)
	struct UClass* *498af98d1d; // 0x18(0x08)
	struct UClass* *8cbaaca995; // 0x20(0x08)
	struct UClass* *f9f0eeb658; // 0x28(0x08)
	struct UClass* *ec6c7439c3; // 0x30(0x08)
	struct UClass* *aef6ff0106; // 0x38(0x08)
	int32 *9b45bdf092; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UClass* *b9af66861f; // 0x48(0x08)
	float *96c137968e; // 0x50(0x04)
	float *84c39aa1d5; // 0x54(0x04)
	struct UTexture* DamageCauserIcon; // 0x58(0x08)
	float DamageIconRatio; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText DamageCauserItemName; // 0x68(0x18)
	enum class EWeaponClass DamageCauserClass; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *57626fd40c; // 0x84(0x04)
	char *7b9788efda : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float RotationSpeed; // 0x8c(0x04)
	struct F*53deceecda *53deceecda; // 0x90(0x40)
	bool *67be93997c; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float PenetrationDepth; // 0xd4(0x04)
	float *f5da93357d; // 0xd8(0x04)
	float *46f8eae139; // 0xdc(0x04)
	bool *1e918e73a2; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// ScriptStruct TslGame.PubgIdTierData
// Size: 0x20 (Inherited: 0x00)
struct FPubgIdTierData {
	struct FString ID; // 0x00(0x10)
	struct FString ImagePath; // 0x10(0x10)
};

// ScriptStruct TslGame.*2b956d1bde
// Size: 0x30 (Inherited: 0x00)
struct F*2b956d1bde {
	enum class ETslPubgIdAssetType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
	struct F*9c84e0ea54 TimerHandle; // 0x20(0x08)
	int32 RefCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*babf4d2b36
// Size: 0x10 (Inherited: 0x00)
struct F*babf4d2b36 {
	struct UAkAudioEvent* *201d67d859; // 0x00(0x08)
	float *26263fb57b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*01dbd0332b
// Size: 0x18 (Inherited: 0x08)
struct F*01dbd0332b : FTableRowBase {
	enum class ERadioMessageAlarmSoundCategory *54644eabd3; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* *858c4a2248; // 0x10(0x08)
};

// ScriptStruct TslGame.*b33a2d6c72
// Size: 0x28 (Inherited: 0x08)
struct F*b33a2d6c72 : FTableRowBase {
	enum class ERadioMessageCategory Category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString StringKey; // 0x10(0x10)
	enum class ERadioMessageAlarmSoundCategory *54644eabd3; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*e083bbc188
// Size: 0x18 (Inherited: 0x00)
struct F*e083bbc188 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString StringKey; // 0x08(0x10)
};

// ScriptStruct TslGame.*ea0b6abf54
// Size: 0x30 (Inherited: 0x00)
struct F*ea0b6abf54 {
	struct FName *1fb57dd639; // 0x00(0x08)
	struct UCurveFloat* *3bf762738d; // 0x08(0x08)
	bool *067c548dd7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float StartTime; // 0x14(0x04)
	float *360fd517f8; // 0x18(0x04)
	char pad_1C[0x8]; // 0x1c(0x08)
	float *f77e3ea756; // 0x24(0x04)
	float *7534fe22c1; // 0x28(0x04)
	float *f6a4ce0d1a; // 0x2c(0x04)
};

// ScriptStruct TslGame.DoorBreakingState
// Size: 0x01 (Inherited: 0x00)
struct FDoorBreakingState {
	char *23d965faeb : 1; // 0x00(0x01)
	char *75a8a202a4 : 1; // 0x00(0x01)
	char *1bfa7fe812 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct TslGame.*8b01671639
// Size: 0x18 (Inherited: 0x00)
struct F*8b01671639 {
	struct FStringClassReference *2f4ddee70e; // 0x00(0x10)
	struct UClass* ItemClass; // 0x10(0x08)
};

// ScriptStruct TslGame.*40f3cfb492
// Size: 0x18 (Inherited: 0x00)
struct F*40f3cfb492 {
	enum class ESandboxPowerType *4f079fe533; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*961eb98ce3> *7085a55dac; // 0x08(0x10)
};

// ScriptStruct TslGame.*961eb98ce3
// Size: 0x20 (Inherited: 0x00)
struct F*961eb98ce3 {
	struct UParticleSystem* PS; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FRotator RelativeRotation; // 0x10(0x0c)
	bool *1a43984fad; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*20b4031bfd
// Size: 0x10 (Inherited: 0x00)
struct F*20b4031bfd {
	struct USceneComponent* *f5f5a2cec7; // 0x00(0x08)
	struct AActor* ChildActor; // 0x08(0x08)
};

// ScriptStruct TslGame.*d9cf46f51f
// Size: 0xa0 (Inherited: 0x00)
struct F*d9cf46f51f {
	struct FName Name; // 0x00(0x08)
	float *11519f8210; // 0x08(0x04)
	float *70341c8656; // 0x0c(0x04)
	struct FVector *c54e685b92; // 0x10(0x0c)
	struct FRotator *107045fcfc; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *cfb9ecc301; // 0x30(0x30)
	struct FTransform *a6c0350c43; // 0x60(0x30)
	float *3b002e130d; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct TslGame.*f9110821e8
// Size: 0x1c (Inherited: 0x00)
struct F*f9110821e8 {
	struct FVector2D RealTime; // 0x00(0x08)
	struct FVector2D TimeDilation; // 0x08(0x08)
	struct FVector2D Area; // 0x10(0x08)
	float *a11de7b3b1; // 0x18(0x04)
};

// ScriptStruct TslGame.*7898a0a830
// Size: 0x0c (Inherited: 0x00)
struct F*7898a0a830 {
	struct FVector2D RealTime; // 0x00(0x08)
	float TimeDilation; // 0x08(0x04)
};

// ScriptStruct TslGame.*4697a23080
// Size: 0x58 (Inherited: 0x50)
struct F*4697a23080 : F*83ad5ff7d4 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*95ec72ad55
// Size: 0x18 (Inherited: 0x00)
struct F*95ec72ad55 {
	struct TArray<struct FName> *3c00c7e70b; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*303ba27a65
// Size: 0x340 (Inherited: 0x00)
struct F*303ba27a65 {
	struct F*d632a80c24 *21d4b63fce; // 0x00(0x130)
	struct F*d632a80c24 *d03e07860d; // 0x130(0x130)
	struct FName *14269481c9; // 0x260(0x08)
	struct FName *6cbf9b57e0; // 0x268(0x08)
	float *1993f964f4; // 0x270(0x04)
	float *10c0cf43a3; // 0x274(0x04)
	float *1c20fbcfb1; // 0x278(0x04)
	bool *af96552819; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct UClass* *65cc3cfeb7; // 0x280(0x20)
	struct UClass* *dbc6e9cf0b; // 0x2a0(0x20)
	struct UClass* *9fc1117a38; // 0x2c0(0x20)
	struct UClass* *1d45687d5f; // 0x2e0(0x20)
	struct UClass* *77cfb250e2; // 0x300(0x20)
	struct UClass* *c2cf27e895; // 0x320(0x20)
};

// ScriptStruct TslGame.*eed0e853bc
// Size: 0x28 (Inherited: 0x00)
struct F*eed0e853bc {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*5b2ad9b600
// Size: 0x20 (Inherited: 0x00)
struct F*5b2ad9b600 {
	float StartDelay; // 0x00(0x04)
	float *382addfeef; // 0x04(0x04)
	struct TArray<struct F*518d3ad71b> *3c0e2d0e66; // 0x08(0x10)
	int32 *75d3a8159d; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*518d3ad71b
// Size: 0x08 (Inherited: 0x00)
struct F*518d3ad71b {
	int32 *8c8a8c2057; // 0x00(0x04)
	int32 *2fd88f2c88; // 0x04(0x04)
};

// ScriptStruct TslGame.*70918b7282
// Size: 0x80 (Inherited: 0x08)
struct F*70918b7282 : FTableRowBase {
	int32 SprayDecalID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SprayDecalLocalizedName; // 0x10(0x18)
	struct UTexture2D* IconTexture; // 0x28(0x20)
	struct UTexture2D* SprayDecalTexture; // 0x48(0x20)
	int32 SpraySize; // 0x68(0x04)
	struct FLinearColor SprayColor; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*0d6d966e83
// Size: 0x08 (Inherited: 0x00)
struct F*0d6d966e83 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*7f9a824e74
// Size: 0x10 (Inherited: 0x00)
struct F*7f9a824e74 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*d5ae304a74
// Size: 0x10 (Inherited: 0x00)
struct F*d5ae304a74 {
	struct TArray<int32> *03a493b9cd; // 0x00(0x10)
};

// ScriptStruct TslGame.*e942f92309
// Size: 0x20 (Inherited: 0x00)
struct F*e942f92309 {
	struct TArray<struct F*24f58dccf6> *82e98891dd; // 0x00(0x10)
	struct FString *9e16fcd0c1; // 0x10(0x10)
};

// ScriptStruct TslGame.*24f58dccf6
// Size: 0x70 (Inherited: 0x00)
struct F*24f58dccf6 {
	struct FString *9e16fcd0c1; // 0x00(0x10)
	struct FName *e863abaea5; // 0x10(0x08)
	int32 *cb34e3e75a; // 0x18(0x04)
	struct FVector_NetQuantize ImpactPoint; // 0x1c(0x0c)
	struct FVector_NetQuantize Location; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0x0c)
	struct UPrimitiveComponent* Component; // 0x40(0x08)
	struct AActor* Actor; // 0x48(0x08)
	float *17d3e7f122; // 0x50(0x04)
	char pad_54[0x1c]; // 0x54(0x1c)
};

// ScriptStruct TslGame.*ea4c9b785b
// Size: 0x18 (Inherited: 0x00)
struct F*ea4c9b785b {
	struct TArray<struct FColor> *6eccc08bd8; // 0x00(0x10)
	struct FVector2D TextureSize; // 0x10(0x08)
};

// ScriptStruct TslGame.*d581fdff98
// Size: 0x10 (Inherited: 0x00)
struct F*d581fdff98 {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FVector2D Size; // 0x08(0x08)
};

// ScriptStruct TslGame.*a368ed93f0
// Size: 0x58 (Inherited: 0x08)
struct F*a368ed93f0 : FTableRowBase {
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

// ScriptStruct TslGame.*776f798a1b
// Size: 0x270 (Inherited: 0x00)
struct F*776f798a1b {
	bool bUseSelfCasting; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*d632a80c24 SelfWithCastConfig; // 0x08(0x130)
	bool bUseTeammateCasting; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct F*d632a80c24 TeammateWithCastConfig; // 0x140(0x130)
};

// ScriptStruct TslGame.*2696357bc5
// Size: 0x98 (Inherited: 0x08)
struct F*2696357bc5 : FTableRowBase {
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
	struct F*38779141e0 GuideMessageData; // 0x48(0x50)
};

// ScriptStruct TslGame.*38779141e0
// Size: 0x50 (Inherited: 0x00)
struct F*38779141e0 {
	struct FText Title; // 0x00(0x18)
	struct FText PCDescription; // 0x18(0x18)
	struct FText ConsoleDescription; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct TslGame.*573c014847
// Size: 0x01 (Inherited: 0x00)
struct F*573c014847 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*7daaf6e221
// Size: 0x80 (Inherited: 0x00)
struct F*7daaf6e221 {
	struct FText *48db8506b2; // 0x00(0x18)
	struct FText *3a040dd8ce; // 0x18(0x18)
	struct FSlateColor *03d0aff3a0; // 0x30(0x28)
	struct FSlateColor *d5ca3808e1; // 0x58(0x28)
};

// ScriptStruct TslGame.*5b7614b571
// Size: 0x50 (Inherited: 0x00)
struct F*5b7614b571 {
	struct FText *48db8506b2; // 0x00(0x18)
	struct FText *3a040dd8ce; // 0x18(0x18)
	struct FLinearColor *080eb946f9; // 0x30(0x10)
	struct FLinearColor *c2a6e766b4; // 0x40(0x10)
};

// ScriptStruct TslGame.*534b5ef413
// Size: 0x01 (Inherited: 0x00)
struct F*534b5ef413 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*2029859b0a
// Size: 0x168 (Inherited: 0x00)
struct F*2029859b0a {
	bool *f840aa807c; // 0x00(0x01)
	enum class ETslTrainingDashboardPracticeUIType PracticeType; // 0x01(0x01)
	enum class ETslTrainingDashboardRangeUIType *6cee6684a2; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct F*8d96bfb9bb *9734e07c62; // 0x08(0x50)
	struct F*8d96bfb9bb *cfbe51ffaf; // 0x58(0x50)
	struct F*8d96bfb9bb *a14cfd3f3e; // 0xa8(0x50)
	struct F*8d96bfb9bb *58e31f6149; // 0xf8(0x50)
	struct F*9dadb71b3d *f8d45393c7; // 0x148(0x20)
};

// ScriptStruct TslGame.*9dadb71b3d
// Size: 0x20 (Inherited: 0x00)
struct F*9dadb71b3d {
	int32 *a9b3ab73d4; // 0x00(0x04)
	int32 *b2bf002486; // 0x04(0x04)
	float *12fb1fca99; // 0x08(0x04)
	int32 *2004b93e46; // 0x0c(0x04)
	struct TArray<int32> *1902166a83; // 0x10(0x10)
};

// ScriptStruct TslGame.*8d96bfb9bb
// Size: 0x50 (Inherited: 0x00)
struct F*8d96bfb9bb {
	int32 Score; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	struct F*a6c3ae8570 *2b09b385a8; // 0x08(0x38)
	struct F*58223f8b90 *51cacd4922; // 0x40(0x10)
};

// ScriptStruct TslGame.*58223f8b90
// Size: 0x10 (Inherited: 0x00)
struct F*58223f8b90 {
	struct FString *bc79b01251; // 0x00(0x10)
};

// ScriptStruct TslGame.*a6c3ae8570
// Size: 0x38 (Inherited: 0x00)
struct F*a6c3ae8570 {
	float Accuracy; // 0x00(0x04)
	int32 HeadShot; // 0x04(0x04)
	struct FText WeaponName; // 0x08(0x18)
	float *540df85185; // 0x20(0x04)
	float *7191014bdf; // 0x24(0x04)
	float *c5809c6f5a; // 0x28(0x04)
	float *ba0c4205da; // 0x2c(0x04)
	float *9296968d8e; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*86d859c725
// Size: 0x28 (Inherited: 0x00)
struct F*86d859c725 {
	struct FLinearColor *dd02016814; // 0x00(0x10)
	enum class ETslTrainingDashboardRangeUIType *6cee6684a2; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<int32> Scores; // 0x18(0x10)
};

// ScriptStruct TslGame.*bca0099d9c
// Size: 0x24 (Inherited: 0x00)
struct F*bca0099d9c {
	struct FLinearColor *2fc9032fdf; // 0x00(0x10)
	float *89dd847f25; // 0x10(0x04)
	float *75bd85888b; // 0x14(0x04)
	float *faa0e8e83a; // 0x18(0x04)
	float *8e276a25c9; // 0x1c(0x04)
	float *ad1633ac4b; // 0x20(0x04)
};

// ScriptStruct TslGame.*fbe691f4fd
// Size: 0x70 (Inherited: 0x00)
struct F*fbe691f4fd {
	struct FSlateColor *5a64032a46; // 0x00(0x28)
	struct FSlateColor *61de86b4e7; // 0x28(0x28)
	struct FLinearColor *9313ab3113; // 0x50(0x10)
	struct FLinearColor *f961773d22; // 0x60(0x10)
};

// ScriptStruct TslGame.*2dc188b576
// Size: 0xc48 (Inherited: 0x00)
struct F*2dc188b576 {
	struct UAnimMontage* *123e52e6e0; // 0x00(0x08)
	struct F*94738f547e *48cb11eb0c; // 0x08(0xc40)
};

// ScriptStruct TslGame.*f92c5ce301
// Size: 0x68 (Inherited: 0x08)
struct F*f92c5ce301 : FTableRowBase {
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

// ScriptStruct TslGame.*24b15de534
// Size: 0x10 (Inherited: 0x00)
struct F*24b15de534 {
	bool *a7b6db651c; // 0x00(0x01)
	bool *c082c51fa7; // 0x01(0x01)
	bool *51db8efad2; // 0x02(0x01)
	bool *0cb0513944; // 0x03(0x01)
	bool *86bb836b6f; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 *a67b8df2af; // 0x08(0x04)
	int32 *1a9feaa395; // 0x0c(0x04)
};

// ScriptStruct TslGame.*d9c7eff2e2
// Size: 0x24 (Inherited: 0x00)
struct F*d9c7eff2e2 {
	struct FLinearColor BrushColor; // 0x00(0x10)
	struct FMargin Padding; // 0x10(0x10)
	float *726a378d01; // 0x20(0x04)
};

// ScriptStruct TslGame.*8fa9485b02
// Size: 0x20 (Inherited: 0x00)
struct F*8fa9485b02 {
	float StartRange; // 0x00(0x04)
	float EndRange; // 0x04(0x04)
	struct FText ResultText; // 0x08(0x18)
};

// ScriptStruct TslGame.*170e1e642f
// Size: 0x20 (Inherited: 0x08)
struct F*170e1e642f : FTableRowBase {
	enum class EConditionOfDeath ConditionOfDeathCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* ConditionOfDeathIcon; // 0x10(0x08)
	float IconRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*1e851ff36a
// Size: 0x20 (Inherited: 0x08)
struct F*1e851ff36a : FTableRowBase {
	enum class EDamageTypeCategory DamageTypeCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* CauseOfDeathIcon; // 0x10(0x08)
	float IconRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*af2851d8ba
// Size: 0x18 (Inherited: 0x08)
struct F*af2851d8ba : FTableRowBase {
	enum class EUIAkEvent *68246eabfc; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* AkEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*8d6796e1bf
// Size: 0x70 (Inherited: 0x08)
struct F*8d6796e1bf : FTableRowBase {
	int32 *49dd66e77c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> *4931d19ba0; // 0x10(0x10)
	struct TMap<struct FString, struct F*5b516ae285> *8d6796e1bf; // 0x20(0x50)
};

// ScriptStruct TslGame.*5b516ae285
// Size: 0x10 (Inherited: 0x00)
struct F*5b516ae285 {
	struct TArray<struct FName> *5b516ae285; // 0x00(0x10)
};

// ScriptStruct TslGame.*a64187f5c8
// Size: 0x58 (Inherited: 0x08)
struct F*a64187f5c8 : FTableRowBase {
	struct TArray<struct FName> *13de736cc9; // 0x08(0x10)
	struct FText PopupText; // 0x18(0x18)
	struct FString *22d73ca668; // 0x30(0x10)
	bool *d79de34804; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<enum class EGamepadPresets> *90b348f9b8; // 0x48(0x10)
};

// ScriptStruct TslGame.*2b8bf1f75f
// Size: 0x20 (Inherited: 0x00)
struct F*2b8bf1f75f {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*ad72ed7c98
// Size: 0x10 (Inherited: 0x00)
struct F*ad72ed7c98 {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct TslGame.*e4fde768f0
// Size: 0x30 (Inherited: 0x00)
struct F*e4fde768f0 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*527031d946
// Size: 0x20 (Inherited: 0x08)
struct F*527031d946 : FTableRowBase {
	struct FName ActionName; // 0x08(0x08)
	struct TArray<struct FKey> *af0ec5c333; // 0x10(0x10)
};

// ScriptStruct TslGame.*819a12d381
// Size: 0x10 (Inherited: 0x00)
struct F*819a12d381 {
	float *56501b9cbe; // 0x00(0x04)
	float *102730151d; // 0x04(0x04)
	float *c822100f29; // 0x08(0x04)
	float *d51a4699b1; // 0x0c(0x04)
};

// ScriptStruct TslGame.*171250f805
// Size: 0x18 (Inherited: 0x00)
struct F*171250f805 {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*6739ea540f> *a16f840222; // 0x08(0x10)
};

// ScriptStruct TslGame.*6739ea540f
// Size: 0x30 (Inherited: 0x00)
struct F*6739ea540f {
	struct TArray<struct F*38d6acbdf6> *7ad343e47a; // 0x00(0x10)
	struct FText DescriptionText; // 0x10(0x18)
	bool *f3543a64eb; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*38d6acbdf6
// Size: 0x40 (Inherited: 0x00)
struct F*38d6acbdf6 {
	bool *273148d9d0; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FKey Key; // 0x08(0x18)
	bool *0825dda01b; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FName ActionName; // 0x28(0x08)
	enum class EGamepadKeyIconDisplayType *b159113adc; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float HoldDuration; // 0x34(0x04)
	bool *728779d6da; // 0x38(0x01)
	enum class EKeyIconCombinationDisplayType *8d06b91a66; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct TslGame.*f4e5946144
// Size: 0x30 (Inherited: 0x00)
struct F*f4e5946144 {
	enum class ETslTrainingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *10c4b5368d; // 0x08(0x18)
	struct UTexture2D* *f3cc2ba1c4; // 0x20(0x08)
	struct UTexture2D* BackGroundTexture; // 0x28(0x08)
};

// ScriptStruct TslGame.*504e8fc18a
// Size: 0x70 (Inherited: 0x08)
struct F*504e8fc18a : FTableRowBase {
	struct FString CategoryId; // 0x08(0x10)
	int32 ColumnNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText ActionDesc; // 0x20(0x18)
	struct TArray<struct FName> MappedActions; // 0x38(0x10)
	struct TArray<struct F*83728ea3b3> MappedAxies; // 0x48(0x10)
	bool bDummy; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FTslInputKey> DummyInputKeys; // 0x60(0x10)
};

// ScriptStruct TslGame.*8824862daf
// Size: 0x40 (Inherited: 0x00)
struct F*8824862daf {
	struct UTexture2D* *8815035c67; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct TArray<struct F*5513099212> *d682a3685e; // 0x20(0x10)
	struct TArray<struct FText> *46bceee149; // 0x30(0x10)
};

// ScriptStruct TslGame.*5513099212
// Size: 0x38 (Inherited: 0x00)
struct F*5513099212 {
	int32 Number; // 0x00(0x04)
	struct FLinearColor *6da5acc613; // 0x04(0x10)
	bool bEnabled; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FText *443daa971a; // 0x18(0x18)
	struct ATslPlayerState* PlayerState; // 0x30(0x08)
};

// ScriptStruct TslGame.*1e7cef2f44
// Size: 0x60 (Inherited: 0x00)
struct F*1e7cef2f44 {
	struct FText VehicleName; // 0x00(0x18)
	struct FText *782cedf985; // 0x18(0x18)
	struct UTexture2D* *34d59e7f18; // 0x30(0x08)
	struct UTexture2D* *0ad97c8770; // 0x38(0x08)
	struct UTexture2D* *5eaf0332fd; // 0x40(0x08)
	float Speed; // 0x48(0x04)
	float *588d915074; // 0x4c(0x04)
	int32 *0bb6b4d27f; // 0x50(0x04)
	int32 *c867d1741a; // 0x54(0x04)
	int32 *691657ee9b; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*cf895ace8d
// Size: 0x28 (Inherited: 0x00)
struct F*cf895ace8d {
	enum class ERadioMessagePresets preset; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*b3e041b675> *6153e78092; // 0x08(0x10)
	struct TArray<struct FName> *02c4ec16b1; // 0x18(0x10)
};

// ScriptStruct TslGame.*657bef00a7
// Size: 0x18 (Inherited: 0x00)
struct F*657bef00a7 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x08(0x08)
	struct U*6b11b3bf02* *6b11b3bf02; // 0x10(0x08)
};

// ScriptStruct TslGame.*ab1f2489c3
// Size: 0x68 (Inherited: 0x00)
struct F*ab1f2489c3 {
	struct FText Title; // 0x00(0x18)
	struct FText Subtitle; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TArray<bool> Stats; // 0x48(0x10)
	struct FStringAssetReference Image; // 0x58(0x10)
};

// ScriptStruct TslGame.*131c177577
// Size: 0x10 (Inherited: 0x00)
struct F*131c177577 {
	struct TArray<struct FName> ItemIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*ece46e80a4
// Size: 0x30 (Inherited: 0x00)
struct F*ece46e80a4 {
	struct TArray<struct FName> WeaponItemIDs; // 0x00(0x10)
	struct TArray<struct FName> SkillItemIDs; // 0x10(0x10)
	struct TArray<struct FName> ArmorItemIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*260db7f68b
// Size: 0x30 (Inherited: 0x00)
struct F*260db7f68b {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
	struct FLinearColor *2e792ba1e9; // 0x20(0x10)
};

// ScriptStruct TslGame.*ddda646a29
// Size: 0x168 (Inherited: 0x00)
struct F*ddda646a29 {
	struct F*2029859b0a *c796a68b9c; // 0x00(0x168)
};

// ScriptStruct TslGame.*17c848d24c
// Size: 0x38 (Inherited: 0x00)
struct F*17c848d24c {
	struct FText *b6b3b0ac67; // 0x00(0x18)
	struct FText *a10dd28787; // 0x18(0x18)
	float *7eab0954d5; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*a0c012f268
// Size: 0x10 (Inherited: 0x00)
struct F*a0c012f268 {
	struct TArray<struct F*fc23f80ebe> TrainingResults; // 0x00(0x10)
};

// ScriptStruct TslGame.*fc23f80ebe
// Size: 0x28 (Inherited: 0x00)
struct F*fc23f80ebe {
	enum class ETrainingScoreType TrainingScoreType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ScoreTitleText; // 0x08(0x18)
	struct UTexture2D* ScoreImageTexture; // 0x20(0x08)
};

// ScriptStruct TslGame.*9f67e80f46
// Size: 0x10 (Inherited: 0x00)
struct F*9f67e80f46 {
	int32 SubWidgetCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* SubWidgetClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*bc4fdabfc0
// Size: 0x18 (Inherited: 0x00)
struct F*bc4fdabfc0 {
	int32 ItemSlotID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> ItemIDs; // 0x08(0x10)
};

// ScriptStruct TslGame.*f7b0180537
// Size: 0x28 (Inherited: 0x00)
struct F*f7b0180537 {
	struct UTexture2D* MapMarkerTexture; // 0x00(0x08)
	enum class EMarkerType MarkerIndex; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText MarkerName; // 0x10(0x18)
};

// ScriptStruct TslGame.*8f5ba24e5b
// Size: 0x28 (Inherited: 0x00)
struct F*8f5ba24e5b {
	int32 *21e94b8d29; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	bool *24e90dcf9c; // 0x10(0x01)
	bool *db3b76268b; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<int32> *2f222772a9; // 0x18(0x10)
};

// ScriptStruct TslGame.*cfd2a9a5e2
// Size: 0x108 (Inherited: 0x00)
struct F*cfd2a9a5e2 {
	struct F*959656208f OutsideBorder_Binder; // 0x00(0x30)
	struct F*d3069d51ff CircleImage_Binder; // 0x30(0x28)
	struct F*f4f57b85a2 DistanceTextBlock_Binder; // 0x58(0x20)
	struct F*f4f57b85a2 CaptureObjectNameTextBlock_Binder; // 0x78(0x20)
	bool bShowDistance; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct F*3b5a72332c NeutralColorSet; // 0x9c(0x30)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct F*3b5a72332c> TeamColorSets; // 0xd0(0x10)
	struct FLinearColor CenterColorWhenNotCaptured; // 0xe0(0x10)
	struct ATslGameState* TslGameState; // 0xf0(0x08)
	struct ATslPlayerController* TslPlayerController; // 0xf8(0x08)
	struct ACaptureAreaActor* *aa212f31ed; // 0x100(0x08)
};

// ScriptStruct TslGame.*3b5a72332c
// Size: 0x30 (Inherited: 0x00)
struct F*3b5a72332c {
	struct FLinearColor GaugeColor; // 0x00(0x10)
	struct FLinearColor TrackColor; // 0x10(0x10)
	struct FLinearColor CenterColorWhenCaptured; // 0x20(0x10)
};

// ScriptStruct TslGame.*eb20958e0d
// Size: 0x60 (Inherited: 0x00)
struct F*eb20958e0d {
	struct TArray<struct FString> *becc67281d; // 0x00(0x10)
	struct TMap<struct FString, struct UWidget*> *539778222d; // 0x10(0x50)
};

// ScriptStruct TslGame.*1b608bdb5f
// Size: 0x90 (Inherited: 0x00)
struct F*1b608bdb5f {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct TslGame.*d57a63e329
// Size: 0xb0 (Inherited: 0x00)
struct F*d57a63e329 {
	struct F*ea981e25a6 VectorCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*656889afb5
// Size: 0xb0 (Inherited: 0x00)
struct F*656889afb5 {
	struct F*51f63f4b27 FloatCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*d27df2422b
// Size: 0x10 (Inherited: 0x00)
struct F*d27df2422b {
	struct FFloatInterval DamageRange; // 0x00(0x08)
	struct U*1ba2d2b086* ColorCurve; // 0x08(0x08)
};

// ScriptStruct TslGame.*3fe320f9cc
// Size: 0x20 (Inherited: 0x00)
struct F*3fe320f9cc {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*9832b87b9e
// Size: 0x10 (Inherited: 0x00)
struct F*9832b87b9e {
	struct FVector2D *ef81cee7be; // 0x00(0x08)
	struct FVector2D *0b404824b3; // 0x08(0x08)
};

// ScriptStruct TslGame.*2141a5e8f0
// Size: 0x10 (Inherited: 0x00)
struct F*2141a5e8f0 {
	struct TArray<struct U*0bbde1b617*> *c614f8bd5a; // 0x00(0x10)
};

// ScriptStruct TslGame.*58651995b1
// Size: 0x20 (Inherited: 0x00)
struct F*58651995b1 {
	struct UTslPlatoonCarePackageDropIndicatorWidget* *19b956e38d; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
	int32 *cbd2116114; // 0x0c(0x04)
	struct FVector *6e395d314c; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*7f6fb185b2
// Size: 0x20 (Inherited: 0x00)
struct F*7f6fb185b2 {
	struct UWidget* *19b956e38d; // 0x00(0x08)
	bool *a3d97d3d0f; // 0x08(0x01)
	bool *67625f9a50; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FVector SpawnPosition; // 0x0c(0x0c)
	float *74a53d8f2b; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*881f9bce80
// Size: 0x18 (Inherited: 0x00)
struct F*881f9bce80 {
	struct U*1873c61c8c* *2fb774bf07; // 0x00(0x08)
	struct F*f3c2381e25 *f3c2381e25; // 0x08(0x10)
};

// ScriptStruct TslGame.*40bd305d86
// Size: 0x08 (Inherited: 0x00)
struct F*40bd305d86 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*6a4353ad92
// Size: 0x20 (Inherited: 0x00)
struct F*6a4353ad92 {
	struct UMaterialInterface* ZoneMaterial; // 0x00(0x08)
	int32 ZoneMaxImageNum; // 0x08(0x04)
	struct FVector2D ZoneBorderThickness; // 0x0c(0x08)
	struct FVector2D ZonePositionOffset; // 0x14(0x08)
	float ZoneImageWarningAlpha; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a90384a4d3
// Size: 0x20 (Inherited: 0x00)
struct F*a90384a4d3 {
	struct FVector2D *e2f3a9f57a; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct UMaterialInstanceDynamic* *96e4e55303; // 0x18(0x08)
};

// ScriptStruct TslGame.*82c3b1e6ce
// Size: 0x20 (Inherited: 0x00)
struct F*82c3b1e6ce {
	char pad_0[0x10]; // 0x00(0x10)
	struct UImage* *80dc235fc6; // 0x10(0x08)
	float *584883c9b6; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*58d8ab1096
// Size: 0x20 (Inherited: 0x00)
struct F*58d8ab1096 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*c28537c7d6* *6ea23bb08a; // 0x18(0x08)
};

// ScriptStruct TslGame.*e5ba60d938
// Size: 0x18 (Inherited: 0x00)
struct F*e5ba60d938 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UImage* VehicleIcon; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*ace371c907
// Size: 0x10 (Inherited: 0x00)
struct F*ace371c907 {
	struct ATslHelicopterPawn* Helicopter; // 0x00(0x08)
	struct UImage* *ae24876b71; // 0x08(0x08)
};

// ScriptStruct TslGame.*3e3b1c6944
// Size: 0x10 (Inherited: 0x00)
struct F*3e3b1c6944 {
	struct AGuardedLootPackage* LootCache; // 0x00(0x08)
	struct UImage* *55be833f53; // 0x08(0x08)
};

// ScriptStruct TslGame.*4f516a6547
// Size: 0x10 (Inherited: 0x00)
struct F*4f516a6547 {
	struct ATslWheeledVehicle* KillTruck; // 0x00(0x08)
	struct UImage* *d899d576ed; // 0x08(0x08)
};

// ScriptStruct TslGame.*b940bf5afb
// Size: 0x10 (Inherited: 0x00)
struct F*b940bf5afb {
	struct ATslWheeledVehicle* LootTruck; // 0x00(0x08)
	struct UImage* *fed72ca25d; // 0x08(0x08)
};

// ScriptStruct TslGame.*7a3a5b065c
// Size: 0x30 (Inherited: 0x00)
struct F*7a3a5b065c {
	struct AActor* *6a315abb10; // 0x00(0x08)
	struct UImage* *c3b482980d; // 0x08(0x08)
	struct UImage* *521e261fb3; // 0x10(0x08)
	struct UImage* *b228fcb913; // 0x18(0x08)
	struct UImage* *d4fab7d75e; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct TslGame.*b1e4cc352d
// Size: 0xa0 (Inherited: 0x00)
struct F*b1e4cc352d {
	struct U*f72f9d9e52* Icon; // 0x00(0x08)
	struct U*c0deccf123* *85a8cab737; // 0x08(0x08)
	struct FLinearColor *00c3041861; // 0x10(0x10)
	bool bShowMemberNumber; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 MemberNumber; // 0x24(0x04)
	enum class ECharacterIconType *cda3c4dcca; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Rotation; // 0x2c(0x04)
	int32 *340504fbcb; // 0x30(0x04)
	bool *e0145b5798; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FText PlayerName; // 0x38(0x18)
	struct FLinearColor *8154c97db7; // 0x50(0x10)
	bool *fd0ceb1ad8; // 0x60(0x01)
	bool *4a8fa95726; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32 *78be050d5a; // 0x64(0x04)
	struct FVector2D Position; // 0x68(0x08)
	bool *635388df27; // 0x70(0x01)
	bool bHasTeamMember; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct TArray<struct F*3fe320f9cc> *d9c26f765e; // 0x78(0x10)
	bool *da514d20f6; // 0x88(0x01)
	bool bShowDirection; // 0x89(0x01)
	bool bShowStatus; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	float *875e689f4f; // 0x8c(0x04)
	bool *4b05308608; // 0x90(0x01)
	bool *151ae3dc14; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float *3c9f1e77da; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct TslGame.*a5f9a02224
// Size: 0x18 (Inherited: 0x00)
struct F*a5f9a02224 {
	enum class ETslTrainingType *e56ca36683; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *08f469eae1; // 0x08(0x08)
	struct FVector2D Size; // 0x10(0x08)
};

// ScriptStruct TslGame.*441705a3fd
// Size: 0x28 (Inherited: 0x00)
struct F*441705a3fd {
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

// ScriptStruct TslGame.*84ed83f5d6
// Size: 0x70 (Inherited: 0x00)
struct F*84ed83f5d6 {
	struct F*8e32972a91 HorizontalBox; // 0x00(0x28)
	struct F*c69f8ed24a *a6ff7a9200; // 0x28(0x28)
	struct F*f4f57b85a2 *5f51825ebe; // 0x50(0x20)
};

// ScriptStruct TslGame.*ece4c2ea5c
// Size: 0x20 (Inherited: 0x00)
struct F*ece4c2ea5c {
	struct FString *ca29fb3595; // 0x00(0x10)
	int32 Kill; // 0x10(0x04)
	int32 *c6a87f8e1f; // 0x14(0x04)
	float Damage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*1cd58d9368
// Size: 0x48 (Inherited: 0x08)
struct F*1cd58d9368 : FTableRowBase {
	struct FString SubtitleKey; // 0x08(0x10)
	struct FString BlueZoneSubtitleKey; // 0x18(0x10)
	struct FString ItemSpawnSubtitleKey; // 0x28(0x10)
	struct FString VehicleSpawnSubtitleKey; // 0x38(0x10)
};

// ScriptStruct TslGame.*2646ee553d
// Size: 0xb0 (Inherited: 0x00)
struct F*2646ee553d {
	struct F*ea981e25a6 VectorCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*b70a556471
// Size: 0xb0 (Inherited: 0x00)
struct F*b70a556471 {
	struct F*51f63f4b27 FloatCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGame.*ca53f0c1f2
// Size: 0xa0 (Inherited: 0x00)
struct F*ca53f0c1f2 {
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

// ScriptStruct TslGame.*71ad4e36f0
// Size: 0x10 (Inherited: 0x00)
struct F*71ad4e36f0 {
	struct TArray<struct F*f180d61fe9> *a2937c02c3; // 0x00(0x10)
};

// ScriptStruct TslGame.*f180d61fe9
// Size: 0x0c (Inherited: 0x00)
struct F*f180d61fe9 {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	bool Disabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.*2eed80ef64
// Size: 0x10 (Inherited: 0x00)
struct F*2eed80ef64 {
	struct U*65a1ac83ab* Widget; // 0x00(0x08)
	struct FVector2D LastPosition; // 0x08(0x08)
};

// ScriptStruct TslGame.*8752a1713e
// Size: 0x28 (Inherited: 0x00)
struct F*8752a1713e {
	struct FText DirectionText; // 0x00(0x18)
	struct FLinearColor TextColor; // 0x18(0x10)
};

// ScriptStruct TslGame.*bad73a1324
// Size: 0x40 (Inherited: 0x08)
struct F*bad73a1324 : FTableRowBase {
	enum class EGuideKeyType KeyType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*6739ea540f Info; // 0x10(0x30)
};

// ScriptStruct TslGame.*7bf9acfea7
// Size: 0x18 (Inherited: 0x00)
struct F*7bf9acfea7 {
	struct ATslCharacter* *47f1287d73; // 0x00(0x08)
	float *908e602e36; // 0x08(0x04)
	float *adc9cdb9d4; // 0x0c(0x04)
	float *a3fa862189; // 0x10(0x04)
	bool bIsGroggy; // 0x14(0x01)
	bool *3ad19ca0bb; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*d2ae25e73f
// Size: 0x50 (Inherited: 0x00)
struct F*d2ae25e73f {
	struct TMap<enum class EFiremode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGame.*c12dc1f4ff
// Size: 0x50 (Inherited: 0x00)
struct F*c12dc1f4ff {
	struct TMap<enum class ETraumaBagHealMode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGame.*dff9c597f5
// Size: 0x18 (Inherited: 0x00)
struct F*dff9c597f5 {
	struct FName ItemID; // 0x00(0x08)
	int32 *cde2c1f49c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct U*e869f65809* *12066d5b89; // 0x10(0x08)
};

// ScriptStruct TslGame.*26a9704865
// Size: 0x50 (Inherited: 0x00)
struct F*26a9704865 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*0ffa8a44ff
// Size: 0x10 (Inherited: 0x00)
struct F*0ffa8a44ff {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*2c6a4957d2
// Size: 0x18 (Inherited: 0x00)
struct F*2c6a4957d2 {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct U*f04b1d14fe*> Cache; // 0x08(0x10)
};

// ScriptStruct TslGame.*9617c4222a
// Size: 0x18 (Inherited: 0x00)
struct F*9617c4222a {
	enum class ECastableItemType *fb89bc0044; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName ItemID; // 0x08(0x08)
	struct UTexture2D* *0c24ae5dca; // 0x10(0x08)
};

