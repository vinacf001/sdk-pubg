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

// Enum CoherentUIGTPlugin.*b269295ee5
enum class *b269295ee5 : uint8 {
	*765c4def57,
	*0763901b11,
	*1f56513a35,
	*63ba1e7872,
	*b269295ee5_MAX,
};

// Enum CoherentUIGTPlugin.*d43d997acd
enum class *d43d997acd : uint8 {
	*10a05cd227,
	*3ce750a068,
	*810f6069ba,
	*d43d997acd_MAX,
};

// Enum CoherentUIGTPlugin.*fcbfab83c2
enum class *fcbfab83c2 : uint8 {
	*4a49c2e473,
	*ada64190fe,
	*905199855b,
	*f8fb3fd786,
	*fcbfab83c2_MAX,
};

// Enum CoherentUIGTPlugin.*21391c8a76
enum class *21391c8a76 : uint8 {
	*3192a4fe50,
	*c16ed86af4,
	*4ba16db3d7,
	*ac3e7f20a0,
	*21391c8a76_MAX,
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

// ScriptStruct CoherentUIGTPlugin.*94ff8513c9
// Size: 0x10 (Inherited: 0x00)
struct F*94ff8513c9 {
	struct UAudioComponent* Component; // 0x00(0x08)
	struct U*4a2c8ddd5c* Stream; // 0x08(0x08)
};

// ScriptStruct CoherentUIGTPlugin.*2dc54ac3f2
// Size: 0x18 (Inherited: 0x00)
struct F*2dc54ac3f2 {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bWaitForManualStop; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CoherentUIGTPlugin.*533b3d89b8
// Size: 0x14 (Inherited: 0x00)
struct F*533b3d89b8 {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
	bool IsTransparent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ClickThroughAlphaThreshold; // 0x0c(0x04)
	float AnimationFrameDefer; // 0x10(0x04)
};

