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

// ScriptStruct OnlineSubsystemUtils.*e0db277394
// Size: 0x108 (Inherited: 0x00)
struct F*e0db277394 {
	char pad_0[0x108]; // 0x00(0x108)
};

// ScriptStruct OnlineSubsystemUtils.*32c040d354
// Size: 0x30 (Inherited: 0x00)
struct F*32c040d354 {
	int32 TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUniqueNetIdRepl *db57c951b3; // 0x08(0x18)
	struct TArray<struct F*50667a4f6e> *ef2d83d3fa; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.*50667a4f6e
// Size: 0x30 (Inherited: 0x00)
struct F*50667a4f6e {
	struct FUniqueNetIdRepl UniqueId; // 0x00(0x18)
	struct FString *c8f65c14c1; // 0x18(0x10)
	float *d85dd6fe3d; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct OnlineSubsystemUtils.*aa26e6f46d
// Size: 0x40 (Inherited: 0x00)
struct F*aa26e6f46d {
	struct FString ID; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct TArray<bool> *ed21f7a0ea; // 0x30(0x10)
};

