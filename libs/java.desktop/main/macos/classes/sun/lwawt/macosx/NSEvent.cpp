#include <sun/lwawt/macosx/NSEvent.h>

#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <sun/lwawt/macosx/CocoaConstants.h>
#include <jcpp.h>

#undef BUTTON1
#undef BUTTON1_DOWN_MASK
#undef BUTTON2
#undef BUTTON3
#undef BUTTON3_DOWN_MASK
#undef CTRL_DOWN_MASK
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_WHEEL
#undef SCROLL_PHASE_BEGAN
#undef SCROLL_PHASE_CONTINUED
#undef SCROLL_PHASE_ENDED
#undef SCROLL_PHASE_MOMENTUM_BEGAN
#undef SCROLL_PHASE_UNSUPPORTED

using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CocoaConstants = ::sun::lwawt::macosx::CocoaConstants;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _NSEvent_FieldInfo_[] = {
	{"SCROLL_PHASE_UNSUPPORTED", "I", nullptr, $STATIC | $FINAL, $constField(NSEvent, SCROLL_PHASE_UNSUPPORTED)},
	{"SCROLL_PHASE_BEGAN", "I", nullptr, $STATIC | $FINAL, $constField(NSEvent, SCROLL_PHASE_BEGAN)},
	{"SCROLL_PHASE_CONTINUED", "I", nullptr, $STATIC | $FINAL, $constField(NSEvent, SCROLL_PHASE_CONTINUED)},
	{"SCROLL_PHASE_MOMENTUM_BEGAN", "I", nullptr, $STATIC | $FINAL, $constField(NSEvent, SCROLL_PHASE_MOMENTUM_BEGAN)},
	{"SCROLL_PHASE_ENDED", "I", nullptr, $STATIC | $FINAL, $constField(NSEvent, SCROLL_PHASE_ENDED)},
	{"type", "I", nullptr, $PRIVATE, $field(NSEvent, type)},
	{"modifierFlags", "I", nullptr, $PRIVATE, $field(NSEvent, modifierFlags)},
	{"clickCount", "I", nullptr, $PRIVATE, $field(NSEvent, clickCount)},
	{"buttonNumber", "I", nullptr, $PRIVATE, $field(NSEvent, buttonNumber)},
	{"x", "I", nullptr, $PRIVATE, $field(NSEvent, x)},
	{"y", "I", nullptr, $PRIVATE, $field(NSEvent, y)},
	{"scrollDeltaY", "D", nullptr, $PRIVATE, $field(NSEvent, scrollDeltaY)},
	{"scrollDeltaX", "D", nullptr, $PRIVATE, $field(NSEvent, scrollDeltaX)},
	{"scrollPhase", "I", nullptr, $PRIVATE, $field(NSEvent, scrollPhase)},
	{"absX", "I", nullptr, $PRIVATE, $field(NSEvent, absX)},
	{"absY", "I", nullptr, $PRIVATE, $field(NSEvent, absY)},
	{"keyCode", "S", nullptr, $PRIVATE, $field(NSEvent, keyCode)},
	{"characters", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NSEvent, characters)},
	{"charactersIgnoringModifiers", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NSEvent, charactersIgnoringModifiers)},
	{}
};

$MethodInfo _NSEvent_MethodInfo_[] = {
	{"<init>", "(IISLjava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(NSEvent, init$, void, int32_t, int32_t, int16_t, $String*, $String*)},
	{"<init>", "(IIIIIIIIDDI)V", nullptr, 0, $method(NSEvent, init$, void, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, double, double, int32_t)},
	{"getAbsX", "()I", nullptr, 0, $method(NSEvent, getAbsX, int32_t)},
	{"getAbsY", "()I", nullptr, 0, $method(NSEvent, getAbsY, int32_t)},
	{"getButtonNumber", "()I", nullptr, 0, $method(NSEvent, getButtonNumber, int32_t)},
	{"getCharacters", "()Ljava/lang/String;", nullptr, 0, $method(NSEvent, getCharacters, $String*)},
	{"getCharactersIgnoringModifiers", "()Ljava/lang/String;", nullptr, 0, $method(NSEvent, getCharactersIgnoringModifiers, $String*)},
	{"getClickCount", "()I", nullptr, 0, $method(NSEvent, getClickCount, int32_t)},
	{"getKeyCode", "()S", nullptr, 0, $method(NSEvent, getKeyCode, int16_t)},
	{"getModifierFlags", "()I", nullptr, 0, $method(NSEvent, getModifierFlags, int32_t)},
	{"getScrollDeltaX", "()D", nullptr, 0, $method(NSEvent, getScrollDeltaX, double)},
	{"getScrollDeltaY", "()D", nullptr, 0, $method(NSEvent, getScrollDeltaY, double)},
	{"getScrollPhase", "()I", nullptr, 0, $method(NSEvent, getScrollPhase, int32_t)},
	{"getType", "()I", nullptr, 0, $method(NSEvent, getType, int32_t)},
	{"getX", "()I", nullptr, 0, $method(NSEvent, getX, int32_t)},
	{"getY", "()I", nullptr, 0, $method(NSEvent, getY, int32_t)},
	{"isPopupTrigger", "(I)Z", nullptr, $STATIC, $staticMethod(NSEvent, isPopupTrigger, bool, int32_t)},
	{"npToJavaEventType", "(I)I", nullptr, $STATIC, $staticMethod(NSEvent, npToJavaEventType, int32_t, int32_t)},
	{"nsKeyModifiersToJavaKeyInfo", "([I[I)V", nullptr, $STATIC | $NATIVE, $staticMethod(NSEvent, nsKeyModifiersToJavaKeyInfo, void, $ints*, $ints*)},
	{"nsToJavaButton", "(I)I", nullptr, $STATIC, $staticMethod(NSEvent, nsToJavaButton, int32_t, int32_t)},
	{"nsToJavaChar", "(CIZ)C", nullptr, $STATIC | $NATIVE, $staticMethod(NSEvent, nsToJavaChar, char16_t, char16_t, int32_t, bool)},
	{"nsToJavaEventType", "(I)I", nullptr, $STATIC, $staticMethod(NSEvent, nsToJavaEventType, int32_t, int32_t)},
	{"nsToJavaKeyInfo", "([I[I)Z", nullptr, $STATIC | $NATIVE, $staticMethod(NSEvent, nsToJavaKeyInfo, bool, $ints*, $ints*)},
	{"nsToJavaModifiers", "(I)I", nullptr, $STATIC | $NATIVE, $staticMethod(NSEvent, nsToJavaModifiers, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NSEvent, toString, $String*)},
	{}
};

#define _METHOD_INDEX_nsKeyModifiersToJavaKeyInfo 18
#define _METHOD_INDEX_nsToJavaChar 20
#define _METHOD_INDEX_nsToJavaKeyInfo 22
#define _METHOD_INDEX_nsToJavaModifiers 23

$ClassInfo _NSEvent_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.NSEvent",
	"java.lang.Object",
	nullptr,
	_NSEvent_FieldInfo_,
	_NSEvent_MethodInfo_
};

$Object* allocate$NSEvent($Class* clazz) {
	return $of($alloc(NSEvent));
}

void NSEvent::init$(int32_t type, int32_t modifierFlags, int16_t keyCode, $String* characters, $String* charactersIgnoringModifiers) {
	this->type = type;
	this->modifierFlags = modifierFlags;
	this->keyCode = keyCode;
	$set(this, characters, characters);
	$set(this, charactersIgnoringModifiers, charactersIgnoringModifiers);
}

void NSEvent::init$(int32_t type, int32_t modifierFlags, int32_t clickCount, int32_t buttonNumber, int32_t x, int32_t y, int32_t absX, int32_t absY, double scrollDeltaY, double scrollDeltaX, int32_t scrollPhase) {
	this->type = type;
	this->modifierFlags = modifierFlags;
	this->clickCount = clickCount;
	this->buttonNumber = buttonNumber;
	this->x = x;
	this->y = y;
	this->absX = absX;
	this->absY = absY;
	this->scrollDeltaY = scrollDeltaY;
	this->scrollDeltaX = scrollDeltaX;
	this->scrollPhase = scrollPhase;
}

int32_t NSEvent::getType() {
	return this->type;
}

int32_t NSEvent::getModifierFlags() {
	return this->modifierFlags;
}

int32_t NSEvent::getClickCount() {
	return this->clickCount;
}

int32_t NSEvent::getButtonNumber() {
	return this->buttonNumber;
}

int32_t NSEvent::getX() {
	return this->x;
}

int32_t NSEvent::getY() {
	return this->y;
}

double NSEvent::getScrollDeltaY() {
	return this->scrollDeltaY;
}

double NSEvent::getScrollDeltaX() {
	return this->scrollDeltaX;
}

int32_t NSEvent::getScrollPhase() {
	return this->scrollPhase;
}

int32_t NSEvent::getAbsX() {
	return this->absX;
}

int32_t NSEvent::getAbsY() {
	return this->absY;
}

int16_t NSEvent::getKeyCode() {
	return this->keyCode;
}

$String* NSEvent::getCharactersIgnoringModifiers() {
	return this->charactersIgnoringModifiers;
}

$String* NSEvent::getCharacters() {
	return this->characters;
}

$String* NSEvent::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$19, $$str({"NSEvent["_s, $$str(getType()), " ,"_s}));
	$var($String, var$18, $$concat(var$19, $$str(getModifierFlags())));
	$var($String, var$17, $$concat(var$18, " ,"_s));
	$var($String, var$16, $$concat(var$17, $$str(getClickCount())));
	$var($String, var$15, $$concat(var$16, " ,"_s));
	$var($String, var$14, $$concat(var$15, $$str(getButtonNumber())));
	$var($String, var$13, $$concat(var$14, " ,"_s));
	$var($String, var$12, $$concat(var$13, $$str(getX())));
	$var($String, var$11, $$concat(var$12, " ,"_s));
	$var($String, var$10, $$concat(var$11, $$str(getY())));
	$var($String, var$9, $$concat(var$10, " ,"_s));
	$var($String, var$8, $$concat(var$9, $$str(getAbsX())));
	$var($String, var$7, $$concat(var$8, " ,"_s));
	$var($String, var$6, $$concat(var$7, $$str(getAbsY())));
	$var($String, var$5, $$concat(var$6, " ,"_s));
	$var($String, var$4, $$concat(var$5, $$str(getKeyCode())));
	$var($String, var$3, $$concat(var$4, " ,"_s));
	$var($String, var$2, $$concat(var$3, $(getCharacters())));
	$var($String, var$1, $$concat(var$2, " ,"_s));
	$var($String, var$0, $$concat(var$1, $(getCharactersIgnoringModifiers())));
	return $concat(var$0, "]"_s);
}

int32_t NSEvent::nsToJavaButton(int32_t buttonNumber) {
	int32_t jbuttonNumber = buttonNumber + 1;
	switch (buttonNumber) {
	case $CocoaConstants::kCGMouseButtonLeft:
		{
			jbuttonNumber = $MouseEvent::BUTTON1;
			break;
		}
	case $CocoaConstants::kCGMouseButtonRight:
		{
			jbuttonNumber = $MouseEvent::BUTTON3;
			break;
		}
	case $CocoaConstants::kCGMouseButtonCenter:
		{
			jbuttonNumber = $MouseEvent::BUTTON2;
			break;
		}
	}
	return jbuttonNumber;
}

int32_t NSEvent::npToJavaEventType(int32_t npEventType) {
	int32_t jeventType = 0;
	switch (npEventType) {
	case $CocoaConstants::NPCocoaEventMouseDown:
		{
			jeventType = $MouseEvent::MOUSE_PRESSED;
			break;
		}
	case $CocoaConstants::NPCocoaEventMouseUp:
		{
			jeventType = $MouseEvent::MOUSE_RELEASED;
			break;
		}
	case $CocoaConstants::NPCocoaEventMouseMoved:
		{
			jeventType = $MouseEvent::MOUSE_MOVED;
			break;
		}
	case $CocoaConstants::NPCocoaEventMouseEntered:
		{
			jeventType = $MouseEvent::MOUSE_ENTERED;
			break;
		}
	case $CocoaConstants::NPCocoaEventMouseExited:
		{
			jeventType = $MouseEvent::MOUSE_EXITED;
			break;
		}
	case $CocoaConstants::NPCocoaEventMouseDragged:
		{
			jeventType = $MouseEvent::MOUSE_DRAGGED;
			break;
		}
	case $CocoaConstants::NPCocoaEventKeyDown:
		{
			jeventType = $KeyEvent::KEY_PRESSED;
			break;
		}
	case $CocoaConstants::NPCocoaEventKeyUp:
		{
			jeventType = $KeyEvent::KEY_RELEASED;
			break;
		}
	}
	return jeventType;
}

int32_t NSEvent::nsToJavaEventType(int32_t nsEventType) {
	int32_t jeventType = 0;
	switch (nsEventType) {
	case $CocoaConstants::NSLeftMouseDown:
		{}
	case $CocoaConstants::NSRightMouseDown:
		{}
	case $CocoaConstants::NSOtherMouseDown:
		{
			jeventType = $MouseEvent::MOUSE_PRESSED;
			break;
		}
	case $CocoaConstants::NSLeftMouseUp:
		{}
	case $CocoaConstants::NSRightMouseUp:
		{}
	case $CocoaConstants::NSOtherMouseUp:
		{
			jeventType = $MouseEvent::MOUSE_RELEASED;
			break;
		}
	case $CocoaConstants::NSMouseMoved:
		{
			jeventType = $MouseEvent::MOUSE_MOVED;
			break;
		}
	case $CocoaConstants::NSLeftMouseDragged:
		{}
	case $CocoaConstants::NSRightMouseDragged:
		{}
	case $CocoaConstants::NSOtherMouseDragged:
		{
			jeventType = $MouseEvent::MOUSE_DRAGGED;
			break;
		}
	case $CocoaConstants::NSMouseEntered:
		{
			jeventType = $MouseEvent::MOUSE_ENTERED;
			break;
		}
	case $CocoaConstants::NSMouseExited:
		{
			jeventType = $MouseEvent::MOUSE_EXITED;
			break;
		}
	case $CocoaConstants::NSScrollWheel:
		{
			jeventType = $MouseEvent::MOUSE_WHEEL;
			break;
		}
	case $CocoaConstants::NSKeyDown:
		{
			jeventType = $KeyEvent::KEY_PRESSED;
			break;
		}
	case $CocoaConstants::NSKeyUp:
		{
			jeventType = $KeyEvent::KEY_RELEASED;
			break;
		}
	}
	return jeventType;
}

int32_t NSEvent::nsToJavaModifiers(int32_t modifierFlags) {
	$init(NSEvent);
	int32_t $ret = 0;
	$prepareNativeStatic(NSEvent, nsToJavaModifiers, int32_t, int32_t modifierFlags);
	$ret = $invokeNativeStatic(modifierFlags);
	$finishNativeStatic();
	return $ret;
}

bool NSEvent::nsToJavaKeyInfo($ints* in, $ints* out) {
	$init(NSEvent);
	bool $ret = false;
	$prepareNativeStatic(NSEvent, nsToJavaKeyInfo, bool, $ints* in, $ints* out);
	$ret = $invokeNativeStatic(in, out);
	$finishNativeStatic();
	return $ret;
}

void NSEvent::nsKeyModifiersToJavaKeyInfo($ints* in, $ints* out) {
	$init(NSEvent);
	$prepareNativeStatic(NSEvent, nsKeyModifiersToJavaKeyInfo, void, $ints* in, $ints* out);
	$invokeNativeStatic(in, out);
	$finishNativeStatic();
}

char16_t NSEvent::nsToJavaChar(char16_t nsChar, int32_t modifierFlags, bool spaceKeyTyped) {
	$init(NSEvent);
	char16_t $ret = 0;
	$prepareNativeStatic(NSEvent, nsToJavaChar, char16_t, char16_t nsChar, int32_t modifierFlags, bool spaceKeyTyped);
	$ret = $invokeNativeStatic(nsChar, modifierFlags, spaceKeyTyped);
	$finishNativeStatic();
	return $ret;
}

bool NSEvent::isPopupTrigger(int32_t jmodifiers) {
	bool isRightButtonDown = (((int32_t)(jmodifiers & (uint32_t)$InputEvent::BUTTON3_DOWN_MASK)) != 0);
	bool isLeftButtonDown = (((int32_t)(jmodifiers & (uint32_t)$InputEvent::BUTTON1_DOWN_MASK)) != 0);
	bool isControlDown = (((int32_t)(jmodifiers & (uint32_t)$InputEvent::CTRL_DOWN_MASK)) != 0);
	return isRightButtonDown || (isControlDown && isLeftButtonDown);
}

NSEvent::NSEvent() {
}

$Class* NSEvent::load$($String* name, bool initialize) {
	$loadClass(NSEvent, name, initialize, &_NSEvent_ClassInfo_, allocate$NSEvent);
	return class$;
}

$Class* NSEvent::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun