// Class HTML5Networking.WebSocketConnection
// Size: 0x65860 (Inherited: 0x65850)
struct UWebSocketConnection : UNetConnection {
	struct TArray<struct UChildConnection*> Children; // 0x50(0x10)
	struct UNetDriver* Driver; // 0x60(0x08)
	struct UClass* *7cc253e76a; // 0x68(0x08)
	struct UPackageMap* PackageMap; // 0x70(0x08)
	struct TArray<struct UChannel*> *e44c91181f; // 0x78(0x10)
	struct TArray<struct AActor*> *274863db2e; // 0x88(0x10)
	struct AActor* ViewTarget; // 0x98(0x08)
	struct AActor* *5e3a3b3f66; // 0xa0(0x08)
	int32 *260ba92558; // 0xa8(0x04)
	char *f5fadd2d69 : 1; // 0xac(0x01)
	char pad_658AC_1 : 1; // 0x658ac(0x01)
	char *1194f7a57c : 1; // 0xac(0x01)
	struct TArray<struct UChannel*> *8a96153c21; // 0x138(0x10)
	struct FUniqueNetIdRepl PlayerId; // 0x170(0x18)
	double *a564cf33c7; // 0x1f0(0x08)
	struct TArray<struct UChannel*> *c638db3738; // 0x65730(0x10)
};

// Class HTML5Networking.WebSocketNetDriver
// Size: 0x4d8 (Inherited: 0x4c8)
struct UWebSocketNetDriver : UNetDriver {
	int32 WebSocketPort; // 0x4c8(0x04)
	char pad_4CC[0xc]; // 0x4cc(0x0c)
};

