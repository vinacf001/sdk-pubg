// Class TcpMessaging.TcpMessagingSettings
// Size: 0x58 (Inherited: 0x28)
struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ListenEndpoint; // 0x30(0x10)
	struct TArray<struct FString> ConnectToEndpoints; // 0x40(0x10)
	int32 ConnectionRetryDelay; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

