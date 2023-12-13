// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x65878 (Inherited: 0x65870)
struct USteamNetConnection : UIpConnection {
	bool *4365781f93; // 0x65870(0x01)
	char pad_65871[0x7]; // 0x65871(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x510 (Inherited: 0x4f8)
struct USteamNetDriver : UIpNetDriver {
	char LogPortUnreach : 1; // 0x4c8(0x01)
	char AllowPlayerPortUnreach : 1; // 0x4c8(0x01)
	uint32 MaxPortCountToTry; // 0x4cc(0x04)
	uint32 ServerDesiredSocketReceiveBufferBytes; // 0x4e8(0x04)
	uint32 ServerDesiredSocketSendBufferBytes; // 0x4ec(0x04)
	uint32 ClientDesiredSocketReceiveBufferBytes; // 0x4f0(0x04)
	uint32 ClientDesiredSocketSendBufferBytes; // 0x4f4(0x04)
	char pad_50C_2 : 6; // 0x50c(0x01)
	char pad_50D[0x3]; // 0x50d(0x03)
};

