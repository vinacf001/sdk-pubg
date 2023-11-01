// Class UdpMessaging.UdpMessagingSettings
// Size: 0xa0 (Inherited: 0x28)
struct UUdpMessagingSettings : UObject {
	bool EnableTransport; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString UnicastEndpoint[0x10]; // 0x30(0x10)
	struct FString MulticastEndpoint[0x10]; // 0x40(0x10)
	bool MulticastTimeToLive; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FString> StaticEndpoints[0x10]; // 0x58(0x10)
	bool EnableTunnel; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString TunnelUnicastEndpoint[0x10]; // 0x70(0x10)
	struct FString TunnelMulticastEndpoint[0x10]; // 0x80(0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints[0x10]; // 0x90(0x10)
};

