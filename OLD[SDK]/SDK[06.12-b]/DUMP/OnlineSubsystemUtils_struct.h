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

// ScriptStruct OnlineSubsystemUtils.*67a462540d
// Size: 0x108 (Inherited: 0x00)
struct F*67a462540d {
	char pad_0[0x108]; // 0x00(0x108)
};

// ScriptStruct OnlineSubsystemUtils.*9959510fcc
// Size: 0x30 (Inherited: 0x00)
struct F*9959510fcc {
	int32 TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUniqueNetIdRepl *eb2ffaac00; // 0x08(0x18)
	struct TArray<struct F*611088b2a0> *3a6d4d0207; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.*611088b2a0
// Size: 0x30 (Inherited: 0x00)
struct F*611088b2a0 {
	struct FUniqueNetIdRepl UniqueId; // 0x00(0x18)
	struct FString *43526989eb; // 0x18(0x10)
	float *8e4a3b1f8d; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct OnlineSubsystemUtils.*080d29fcef
// Size: 0x40 (Inherited: 0x00)
struct F*080d29fcef {
	struct FString ID; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct TArray<bool> *b896166dde; // 0x30(0x10)
};

