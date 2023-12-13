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

// Enum CoherentUIGTPlugin.*1252a7d211
enum class *1252a7d211 : uint8 {
	*69aa9dd852,
	*6b5a51d0ec,
	*a04acf52b0,
	*7032e24aa5,
	*1252a7d211_MAX,
};

// Enum CoherentUIGTPlugin.*62cd96befc
enum class *62cd96befc : uint8 {
	*7c4600eb34,
	*32959930c1,
	*d0fa630a57,
	*62cd96befc_MAX,
};

// Enum CoherentUIGTPlugin.*483439e28d
enum class *483439e28d : uint8 {
	*afb1de4864,
	*ad4e9c3efc,
	*f2c2541579,
	*6af7673a98,
	*483439e28d_MAX,
};

// Enum CoherentUIGTPlugin.*f2bf644311
enum class *f2bf644311 : uint8 {
	*aa22b39b44,
	*8e8fbb1658,
	*17f45fcf9d,
	*90c51c6224,
	*f2bf644311_MAX,
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

// ScriptStruct CoherentUIGTPlugin.*59bcecaef7
// Size: 0x10 (Inherited: 0x00)
struct F*59bcecaef7 {
	struct UAudioComponent* Component; // 0x00(0x08)
	struct U*3e9397310b* Stream; // 0x08(0x08)
};

// ScriptStruct CoherentUIGTPlugin.*9650c1d3a2
// Size: 0x18 (Inherited: 0x00)
struct F*9650c1d3a2 {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bWaitForManualStop; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CoherentUIGTPlugin.*342d90ee95
// Size: 0x14 (Inherited: 0x00)
struct F*342d90ee95 {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
	bool IsTransparent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ClickThroughAlphaThreshold; // 0x0c(0x04)
	float AnimationFrameDefer; // 0x10(0x04)
};

