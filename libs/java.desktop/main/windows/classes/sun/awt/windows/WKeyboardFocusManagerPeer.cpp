#include <sun/awt/windows/WKeyboardFocusManagerPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WKeyboardFocusManagerPeer_FieldInfo_[] = {
	{"inst", "Lsun/awt/windows/WKeyboardFocusManagerPeer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WKeyboardFocusManagerPeer, inst)},
	{}
};

$MethodInfo _WKeyboardFocusManagerPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(WKeyboardFocusManagerPeer, init$, void)},
	{"deliverFocus", "(Ljava/awt/Component;Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WKeyboardFocusManagerPeer, deliverFocus, bool, $Component*, $Component*, bool, bool, int64_t, $FocusEvent$Cause*)},
	{"getCurrentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(WKeyboardFocusManagerPeer, getCurrentFocusOwner, $Component*)},
	{"getCurrentFocusedWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC, $virtualMethod(WKeyboardFocusManagerPeer, getCurrentFocusedWindow, $Window*)},
	{"getInstance", "()Lsun/awt/windows/WKeyboardFocusManagerPeer;", nullptr, $PUBLIC | $STATIC, $staticMethod(WKeyboardFocusManagerPeer, getInstance, WKeyboardFocusManagerPeer*)},
	{"getNativeFocusOwner", "()Ljava/awt/Component;", nullptr, $STATIC | $NATIVE, $staticMethod(WKeyboardFocusManagerPeer, getNativeFocusOwner, $Component*)},
	{"getNativeFocusedWindow", "()Ljava/awt/Window;", nullptr, $STATIC | $NATIVE, $staticMethod(WKeyboardFocusManagerPeer, getNativeFocusedWindow, $Window*)},
	{"setCurrentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(WKeyboardFocusManagerPeer, setCurrentFocusOwner, void, $Component*)},
	{"setCurrentFocusedWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $virtualMethod(WKeyboardFocusManagerPeer, setCurrentFocusedWindow, void, $Window*)},
	{"setNativeFocusOwner", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $STATIC | $NATIVE, $staticMethod(WKeyboardFocusManagerPeer, setNativeFocusOwner, void, $ComponentPeer*)},
	{}
};

#define _METHOD_INDEX_getNativeFocusOwner 5
#define _METHOD_INDEX_getNativeFocusedWindow 6
#define _METHOD_INDEX_setNativeFocusOwner 9

$ClassInfo _WKeyboardFocusManagerPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WKeyboardFocusManagerPeer",
	"sun.awt.KeyboardFocusManagerPeerImpl",
	nullptr,
	_WKeyboardFocusManagerPeer_FieldInfo_,
	_WKeyboardFocusManagerPeer_MethodInfo_
};

$Object* allocate$WKeyboardFocusManagerPeer($Class* clazz) {
	return $of($alloc(WKeyboardFocusManagerPeer));
}

WKeyboardFocusManagerPeer* WKeyboardFocusManagerPeer::inst = nullptr;

void WKeyboardFocusManagerPeer::setNativeFocusOwner($ComponentPeer* peer) {
	$init(WKeyboardFocusManagerPeer);
	$prepareNativeStatic(WKeyboardFocusManagerPeer, setNativeFocusOwner, void, $ComponentPeer* peer);
	$invokeNativeStatic(peer);
	$finishNativeStatic();
}

$Component* WKeyboardFocusManagerPeer::getNativeFocusOwner() {
	$init(WKeyboardFocusManagerPeer);
	$var($Component, $ret, nullptr);
	$prepareNativeStatic(WKeyboardFocusManagerPeer, getNativeFocusOwner, $Component*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$Window* WKeyboardFocusManagerPeer::getNativeFocusedWindow() {
	$init(WKeyboardFocusManagerPeer);
	$var($Window, $ret, nullptr);
	$prepareNativeStatic(WKeyboardFocusManagerPeer, getNativeFocusedWindow, $Window*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

WKeyboardFocusManagerPeer* WKeyboardFocusManagerPeer::getInstance() {
	$init(WKeyboardFocusManagerPeer);
	return WKeyboardFocusManagerPeer::inst;
}

void WKeyboardFocusManagerPeer::init$() {
	$KeyboardFocusManagerPeerImpl::init$();
}

void WKeyboardFocusManagerPeer::setCurrentFocusOwner($Component* comp) {
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	setNativeFocusOwner(comp != nullptr ? $($nc(acc)->getPeer(comp)) : ($ComponentPeer*)nullptr);
}

$Component* WKeyboardFocusManagerPeer::getCurrentFocusOwner() {
	return getNativeFocusOwner();
}

void WKeyboardFocusManagerPeer::setCurrentFocusedWindow($Window* win) {
	$throwNew($RuntimeException, "not implemented"_s);
}

$Window* WKeyboardFocusManagerPeer::getCurrentFocusedWindow() {
	return getNativeFocusedWindow();
}

bool WKeyboardFocusManagerPeer::deliverFocus($Component* lightweightChild, $Component* target, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	$init(WKeyboardFocusManagerPeer);
	return $KeyboardFocusManagerPeerImpl::deliverFocus(lightweightChild, target, temporary, focusedWindowChangeAllowed, time, cause, $(getNativeFocusOwner()));
}

void clinit$WKeyboardFocusManagerPeer($Class* class$) {
	$assignStatic(WKeyboardFocusManagerPeer::inst, $new(WKeyboardFocusManagerPeer));
}

WKeyboardFocusManagerPeer::WKeyboardFocusManagerPeer() {
}

$Class* WKeyboardFocusManagerPeer::load$($String* name, bool initialize) {
	$loadClass(WKeyboardFocusManagerPeer, name, initialize, &_WKeyboardFocusManagerPeer_ClassInfo_, clinit$WKeyboardFocusManagerPeer, allocate$WKeyboardFocusManagerPeer);
	return class$;
}

$Class* WKeyboardFocusManagerPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun