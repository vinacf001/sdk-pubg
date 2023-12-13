// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8 {
	LeftMouseButton,
	RightMouseButton,
	MiddleMouseButton,
	ThumbMouseButton,
	ThumbMouseButton2,
	BackSpace,
	Tab,
	Enter,
	Pause,
	CapsLock,
	Escape,
	SpaceBar,
	PageUp,
	PageDown,
	End,
	Home,
	Left,
	Up,
	Right,
	Down,
	Insert,
	Delete,
	Zero,
	One,
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z,
	NumPadZero,
	NumPadOne,
	NumPadTwo,
	NumPadThree,
	NumPadFour,
	NumPadFive,
	NumPadSix,
	NumPadSeven,
	NumPadEight,
	NumPadNine,
	Multiply,
	Add,
	Subtract,
	Decimal,
	Divide,
	F1,
	F2,
	F3,
	F4,
	F5,
	F6,
	F7,
	F8,
	F9,
	F10,
	F11,
	F12,
	NumLock,
	ScrollLock,
	LeftShift,
	RightShift,
	LeftControl,
	RightControl,
	LeftAlt,
	RightAlt,
	LeftCommand,
	RightCommand,
	Semicolon,
	Equals,
	Comma,
	Underscore,
	Period,
	Slash,
	Tilde,
	LeftBracket,
	Backslash,
	RightBracket,
	Quote,
	Unknown,
	ECoherentUIGTKeys_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8 {
	None,
	Keyboard,
	Joystick,
	KeyboardAndJoystick,
	ECoherentUIGTInputPropagationBehaviour_MAX,
};

// Enum CoherentUIGTPlugin.*c4a3e8a7fa
enum class *c4a3e8a7fa : uint8 {
	*ca40fba85d,
	*95fe566dd2,
	*87802f4749,
	*d4f619b096,
	*c4a3e8a7fa_MAX,
};

// Enum CoherentUIGTPlugin.*5a8b3d9a90
enum class *5a8b3d9a90 : uint8 {
	*60994a097b,
	*d06a0fc42d,
	*4accc41e25,
	*5a8b3d9a90_MAX,
};

// Enum CoherentUIGTPlugin.*4202f875c0
enum class *4202f875c0 : uint8 {
	*416bfaccdd,
	*a471ed01a9,
	*442b8b6afe,
	*62dd4b9a75,
	*4202f875c0_MAX,
};

// Enum CoherentUIGTPlugin.*3e7081afa0
enum class *3e7081afa0 : uint8 {
	*6d0b09b996,
	*6112005f9e,
	*5a97efd357,
	*b8873af4c4,
	*3e7081afa0_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8 {
	Trace,
	Debug,
	Info,
	Warning,
	AssertFailure,
	Error,
	ECoherentUIGTSettingsSeverity_MAX,
};

// ScriptStruct CoherentUIGTPlugin.*9f91969897
// Size: 0x10 (Inherited: 0x00)
struct F*9f91969897 {
	struct UAudioComponent* Component; // 0x00(0x08)
	struct U*1c122710fb* Stream; // 0x08(0x08)
};

// ScriptStruct CoherentUIGTPlugin.*bf8e3c5799
// Size: 0x18 (Inherited: 0x00)
struct F*bf8e3c5799 {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bWaitForManualStop; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CoherentUIGTPlugin.*7f56380717
// Size: 0x14 (Inherited: 0x00)
struct F*7f56380717 {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
	bool IsTransparent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ClickThroughAlphaThreshold; // 0x0c(0x04)
	float AnimationFrameDefer; // 0x10(0x04)
};

