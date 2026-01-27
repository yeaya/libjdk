#include <sun/awt/windows/WLightweightFramePeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Rectangle.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WFramePeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/SwingAccessor$JLightweightFrameAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

#undef COMPONENT_HIDDEN
#undef COMPONENT_MOVED
#undef COMPONENT_RESIZED
#undef COMPONENT_SHOWN
#undef MOUSE_PRESSED

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $MenuBar = ::java::awt::MenuBar;
using $Rectangle = ::java::awt::Rectangle;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $WFramePeer = ::sun::awt::windows::WFramePeer;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JLightweightFrameAccessor = ::sun::swing::SwingAccessor$JLightweightFrameAccessor;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WLightweightFramePeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/LightweightFrame;)V", nullptr, $PUBLIC, $method(WLightweightFramePeer, init$, void, $LightweightFrame*)},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, addDropTarget, void, $DropTarget*)},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WLightweightFramePeer, emulateActivation, void, bool)},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WLightweightFramePeer, getBoundsPrivate, $Rectangle*)},
	{"getExtendedState", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WLightweightFramePeer, getExtendedState, int32_t)},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, getGraphics, $Graphics*)},
	{"getLwTarget", "()Lsun/awt/LightweightFrame;", nullptr, $PRIVATE, $method(WLightweightFramePeer, getLwTarget, $LightweightFrame*)},
	{"getState", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WLightweightFramePeer, getState, int32_t)},
	{"grab", "()V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, grab, void)},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, handleEvent, void, $AWTEvent*)},
	{"hide", "()V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, hide, void)},
	{"isLightweightFramePeer", "()Z", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, isLightweightFramePeer, bool)},
	{"overrideNativeHandle", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(WLightweightFramePeer, overrideNativeHandle, void, int64_t)},
	{"overrideWindowHandle", "(J)V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, overrideWindowHandle, void, int64_t)},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, removeDropTarget, void, $DropTarget*)},
	{"reshape", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, reshape, void, int32_t, int32_t, int32_t, int32_t)},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WLightweightFramePeer, setBoundsPrivate, void, int32_t, int32_t, int32_t, int32_t)},
	{"setExtendedState", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WLightweightFramePeer, setExtendedState, void, int32_t)},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WLightweightFramePeer, setMenuBar, void, $MenuBar*)},
	{"setState", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WLightweightFramePeer, setState, void, int32_t)},
	{"show", "()V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, show, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrab", "()V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, ungrab, void)},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC, $virtualMethod(WLightweightFramePeer, updateCursorImmediately, void)},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WLightweightFramePeer, updateGraphicsData, bool, $GraphicsConfiguration*)},
	{}
};

#define _METHOD_INDEX_overrideNativeHandle 16

$ClassInfo _WLightweightFramePeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.windows.WLightweightFramePeer",
	"sun.awt.windows.WFramePeer",
	"sun.awt.OverrideNativeWindowHandle",
	nullptr,
	_WLightweightFramePeer_MethodInfo_
};

$Object* allocate$WLightweightFramePeer($Class* clazz) {
	return $of($alloc(WLightweightFramePeer));
}

$String* WLightweightFramePeer::toString() {
	 return this->$WFramePeer::toString();
}

int32_t WLightweightFramePeer::hashCode() {
	 return this->$WFramePeer::hashCode();
}

bool WLightweightFramePeer::equals(Object$* arg0) {
	 return this->$WFramePeer::equals(arg0);
}

$Object* WLightweightFramePeer::clone() {
	 return this->$WFramePeer::clone();
}

void WLightweightFramePeer::finalize() {
	this->$WFramePeer::finalize();
}

void WLightweightFramePeer::init$($LightweightFrame* target) {
	$WFramePeer::init$(target);
}

$LightweightFrame* WLightweightFramePeer::getLwTarget() {
	return $cast($LightweightFrame, this->target);
}

$Graphics* WLightweightFramePeer::getGraphics() {
	return $nc($(getLwTarget()))->getGraphics();
}

void WLightweightFramePeer::overrideNativeHandle(int64_t hwnd) {
	$prepareNative(WLightweightFramePeer, overrideNativeHandle, void, int64_t hwnd);
	$invokeNative(hwnd);
	$finishNative();
}

void WLightweightFramePeer::overrideWindowHandle(int64_t handle) {
	overrideNativeHandle(handle);
}

void WLightweightFramePeer::show() {
	$useLocalCurrentObjectStackCache();
	$WFramePeer::show();
	postEvent($$new($ComponentEvent, $cast($Component, $(getTarget())), $ComponentEvent::COMPONENT_SHOWN));
}

void WLightweightFramePeer::hide() {
	$useLocalCurrentObjectStackCache();
	$WFramePeer::hide();
	postEvent($$new($ComponentEvent, $cast($Component, $(getTarget())), $ComponentEvent::COMPONENT_HIDDEN));
}

void WLightweightFramePeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$WFramePeer::reshape(x, y, width, height);
	postEvent($$new($ComponentEvent, $cast($Component, $(getTarget())), $ComponentEvent::COMPONENT_MOVED));
	postEvent($$new($ComponentEvent, $cast($Component, $(getTarget())), $ComponentEvent::COMPONENT_RESIZED));
}

void WLightweightFramePeer::handleEvent($AWTEvent* e) {
	if ($nc(e)->getID() == $MouseEvent::MOUSE_PRESSED) {
		emulateActivation(true);
	}
	$WFramePeer::handleEvent(e);
}

void WLightweightFramePeer::grab() {
	$nc($(getLwTarget()))->grabFocus();
}

void WLightweightFramePeer::ungrab() {
	$nc($(getLwTarget()))->ungrabFocus();
}

void WLightweightFramePeer::updateCursorImmediately() {
	$useLocalCurrentObjectStackCache();
	$nc($($SwingAccessor::getJLightweightFrameAccessor()))->updateCursor($cast($JLightweightFrame, $(getLwTarget())));
}

bool WLightweightFramePeer::isLightweightFramePeer() {
	return true;
}

void WLightweightFramePeer::addDropTarget($DropTarget* dt) {
	$nc($(getLwTarget()))->addDropTarget(dt);
}

void WLightweightFramePeer::removeDropTarget($DropTarget* dt) {
	$nc($(getLwTarget()))->removeDropTarget(dt);
}

void WLightweightFramePeer::emulateActivation(bool activate) {
	$WFramePeer::emulateActivation(activate);
}

$Rectangle* WLightweightFramePeer::getBoundsPrivate() {
	return $WFramePeer::getBoundsPrivate();
}

void WLightweightFramePeer::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	$WFramePeer::setBoundsPrivate(x, y, width, height);
}

void WLightweightFramePeer::setMenuBar($MenuBar* mb) {
	$WFramePeer::setMenuBar(mb);
}

bool WLightweightFramePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	return $WFramePeer::updateGraphicsData(gc);
}

int32_t WLightweightFramePeer::getExtendedState() {
	return $WFramePeer::getExtendedState();
}

void WLightweightFramePeer::setExtendedState(int32_t state) {
	$WFramePeer::setExtendedState(state);
}

int32_t WLightweightFramePeer::getState() {
	return $WFramePeer::getState();
}

void WLightweightFramePeer::setState(int32_t state) {
	$WFramePeer::setState(state);
}

WLightweightFramePeer::WLightweightFramePeer() {
}

$Class* WLightweightFramePeer::load$($String* name, bool initialize) {
	$loadClass(WLightweightFramePeer, name, initialize, &_WLightweightFramePeer_ClassInfo_, allocate$WLightweightFramePeer);
	return class$;
}

$Class* WLightweightFramePeer::class$ = nullptr;

		} // windows
	} // awt
} // sun