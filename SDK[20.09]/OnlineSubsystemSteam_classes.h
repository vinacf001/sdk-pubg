// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x65870 (Inherited: 0x65868)
struct USteamNetConnection : UIpConnection {
	bool *0793ba2cbd; // 0x65868(0x01)
	char pad_65869[0x7]; // 0x65869(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x508 (Inherited: 0x4f0)
struct USteamNetDriver : UIpNetDriver {
	char LogPortUnreach : 1; // 0x4c0(0x01)
	char AllowPlayerPortUnreach : 1; // 0x4c0(0x01)
	uint32 MaxPortCountToTry; // 0x4c4(0x04)
	uint32 ServerDesiredSocketReceiveBufferBytes; // 0x4e0(0x04)
	uint32 ServerDesiredSocketSendBufferBytes; // 0x4e4(0x04)
	uint32 ClientDesiredSocketReceiveBufferBytes; // 0x4e8(0x04)
	uint32 ClientDesiredSocketSendBufferBytes; // 0x4ec(0x04)
	char pad_504_2 : 6; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
};

