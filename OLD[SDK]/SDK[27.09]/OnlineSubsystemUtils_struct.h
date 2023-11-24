// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8 {
	Invalid,
	Closed,
	Pending,
	Open,
	EBeaconConnectionState_MAX,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8 {
	NoResult,
	RequestPending,
	GeneralError,
	PartyLimitReached,
	IncorrectPlayerCount,
	RequestTimedOut,
	ReservationDuplicate,
	ReservationNotFound,
	ReservationAccepted,
	ReservationDenied,
	ReservationDenied_Banned,
	ReservationRequestCanceled,
	ReservationInvalid,
	BadSessionId,
	EPartyReservationResult_MAX,
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8 {
	NonePending,
	ExistingSessionReservation,
	ReservationUpdate,
	EmptyServerReservation,
	Reconnect,
	Abandon,
	EClientRequestType_MAX,
};

// ScriptStruct OnlineSubsystemUtils.*7792accc1d
// Size: 0x108 (Inherited: 0x00)
struct F*7792accc1d {
	char pad_0[0x108]; // 0x00(0x108)
};

// ScriptStruct OnlineSubsystemUtils.*57e1530851
// Size: 0x30 (Inherited: 0x00)
struct F*57e1530851 {
	int32 TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUniqueNetIdRepl *3796d8f226; // 0x08(0x18)
	struct TArray<struct F*d5512b3ef4> *e9291e4bb5; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.*d5512b3ef4
// Size: 0x30 (Inherited: 0x00)
struct F*d5512b3ef4 {
	struct FUniqueNetIdRepl UniqueId; // 0x00(0x18)
	struct FString *ac7e9ae70e; // 0x18(0x10)
	float *f5ba707deb; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct OnlineSubsystemUtils.*9aff348f10
// Size: 0x40 (Inherited: 0x00)
struct F*9aff348f10 {
	struct FString ID; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct TArray<bool> *dfc8d4584a; // 0x30(0x10)
};

