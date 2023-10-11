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

// Enum CoherentUIGTPlugin.*f85a0f29f2
enum class *f85a0f29f2 : uint8 {
	*f020e367f7,
	*e22e65c36f,
	*eae3fc0d60,
	*9804066639,
	*f85a0f29f2_MAX,
};

// Enum CoherentUIGTPlugin.*1151cd0fba
enum class *1151cd0fba : uint8 {
	*9736428ef0,
	*937b50d2f5,
	*1f3c5dd799,
	*1151cd0fba_MAX,
};

// Enum CoherentUIGTPlugin.*e667af27cf
enum class *e667af27cf : uint8 {
	*453f6b0f83,
	*96fdb947ed,
	*3c0e22f0b5,
	*ffe6c7b4ad,
	*e667af27cf_MAX,
};

// Enum CoherentUIGTPlugin.*55ff64bc4c
enum class *55ff64bc4c : uint8 {
	*278b66d5e0,
	*7db0c7d89b,
	*0340cf9400,
	*7fb4771390,
	*55ff64bc4c_MAX,
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

// ScriptStruct CoherentUIGTPlugin.*6c47452db8
// Size: 0x10 (Inherited: 0x00)
struct F*6c47452db8 {
	struct UAudioComponent* Component; // 0x00(0x08)
	struct U*8c9c6f4e51* Stream; // 0x08(0x08)
};

// ScriptStruct CoherentUIGTPlugin.*fe78125f4b
// Size: 0x18 (Inherited: 0x00)
struct F*fe78125f4b {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bWaitForManualStop; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CoherentUIGTPlugin.*d6e266a96d
// Size: 0x14 (Inherited: 0x00)
struct F*d6e266a96d {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
	bool IsTransparent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ClickThroughAlphaThreshold; // 0x0c(0x04)
	float AnimationFrameDefer; // 0x10(0x04)
};

