// Class HTML5Networking.WebSocketConnection
// Size: 0x65858 (Inherited: 0x65848)
struct UWebSocketConnection : UNetConnection {
	struct TArray<struct UChildConnection*> Children; // 0x48(0x10)
	struct UNetDriver* Driver; // 0x58(0x08)
	struct UClass* *2620c0f95a; // 0x60(0x08)
	struct UPackageMap* PackageMap; // 0x68(0x08)
	struct TArray<struct UChannel*> *db17e81f9a; // 0x70(0x10)
	struct TArray<struct AActor*> *4c97345279; // 0x80(0x10)
	struct AActor* ViewTarget; // 0x90(0x08)
	struct AActor* *52a10bb853; // 0x98(0x08)
	int32 *31a15aa452; // 0xa0(0x04)
	char *2b1c0c33d1 : 1; // 0xa4(0x01)
	char pad_658A4_1 : 1; // 0x658a4(0x01)
	char *ae08848d84 : 1; // 0xa4(0x01)
	struct TArray<struct UChannel*> *c0c274a36f; // 0x130(0x10)
	struct FUniqueNetIdRepl PlayerId; // 0x168(0x18)
	double *5be392aec6; // 0x1e8(0x08)
	struct TArray<struct UChannel*> *923a8e82b0; // 0x65728(0x10)
};

// Class HTML5Networking.WebSocketNetDriver
// Size: 0x4d0 (Inherited: 0x4c0)
struct UWebSocketNetDriver : UNetDriver {
	int32 WebSocketPort; // 0x4c0(0x04)
	char pad_4C4[0xc]; // 0x4c4(0x0c)
};

