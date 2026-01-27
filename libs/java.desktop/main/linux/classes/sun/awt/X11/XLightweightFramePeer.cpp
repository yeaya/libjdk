#include <sun/awt/X11/XLightweightFramePeer.h>

#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/X11/PropMwmHints.h>
#include <sun/awt/X11/ToplevelStateListener.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/SwingAccessor$JLightweightFrameAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $PropMwmHints = ::sun::awt::X11::PropMwmHints;
using $ToplevelStateListener = ::sun::awt::X11::ToplevelStateListener;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XEvent = ::sun::awt::X11::XEvent;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JLightweightFrameAccessor = ::sun::swing::SwingAccessor$JLightweightFrameAccessor;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XLightweightFramePeer_FieldInfo_[] = {
	{"overriddenWindowHandle", "J", nullptr, $PRIVATE | $VOLATILE, $field(XLightweightFramePeer, overriddenWindowHandle)},
	{}
};

$MethodInfo _XLightweightFramePeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/LightweightFrame;)V", nullptr, 0, $method(XLightweightFramePeer, init$, void, $LightweightFrame*)},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC, $virtualMethod(XLightweightFramePeer, addDropTarget, void, $DropTarget*)},
	{"addDropTarget", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, addDropTarget, void)},
	{"addToplevelStateListener", "(Lsun/awt/X11/ToplevelStateListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, addToplevelStateListener, void, $ToplevelStateListener*)},
	{"checkIfOnNewScreen", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, checkIfOnNewScreen, void, $Rectangle*)},
	{"displayChanged", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, displayChanged, void)},
	{"dispose", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, dispose, void)},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, emulateActivation, void, bool)},
	{"getAbsoluteX", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getAbsoluteX, int32_t)},
	{"getAbsoluteY", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getAbsoluteY, int32_t)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getBounds, $Rectangle*)},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getBoundsPrivate, $Rectangle*)},
	{"getContentWindow", "()J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getContentWindow, int64_t)},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(XLightweightFramePeer, getGraphics, $Graphics*)},
	{"getHeight", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getHeight, int32_t)},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getInsets, $Insets*)},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getLocation, $Point*)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getLocationOnScreen, $Point*)},
	{"getLwTarget", "()Lsun/awt/LightweightFrame;", nullptr, $PRIVATE, $method(XLightweightFramePeer, getLwTarget, $LightweightFrame*)},
	{"getMWMHints", "()Lsun/awt/X11/PropMwmHints;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getMWMHints, $PropMwmHints*)},
	{"getNETWMState", "()Lsun/awt/X11/XAtomList;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getNETWMState, $XAtomList*)},
	{"getOverriddenWindowHandle", "()J", nullptr, $PUBLIC, $virtualMethod(XLightweightFramePeer, getOverriddenWindowHandle, int64_t)},
	{"getOwnerPeer", "()Lsun/awt/X11/XWindowPeer;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getOwnerPeer, $XWindowPeer*)},
	{"getShell", "()J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getShell, int64_t)},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getSize, $Dimension*)},
	{"getState", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getState, int32_t)},
	{"getTargetMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getTargetMinimumSize, $Dimension*)},
	{"getWidth", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getWidth, int32_t)},
	{"getX", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getX, int32_t)},
	{"getY", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, getY, int32_t)},
	{"handleButtonPressRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleButtonPressRelease, void, $XEvent*)},
	{"handleClientMessage", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleClientMessage, void, $XEvent*)},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleConfigureNotifyEvent, void, $XEvent*)},
	{"handleDeiconify", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleDeiconify, void)},
	{"handleFocusEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleFocusEvent, void, $XEvent*)},
	{"handleIconify", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleIconify, void)},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleMapNotifyEvent, void, $XEvent*)},
	{"handleMotionNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleMotionNotify, void, $XEvent*)},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handlePropertyNotify, void, $XEvent*)},
	{"handleReparentNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleReparentNotifyEvent, void, $XEvent*)},
	{"handleStateChange", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleStateChange, void, int32_t, int32_t)},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleUnmapNotifyEvent, void, $XEvent*)},
	{"handleVisibilityEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleVisibilityEvent, void, $XEvent*)},
	{"handleWindowFocusIn", "(J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleWindowFocusIn, void, int64_t)},
	{"handleWindowFocusInSync", "(J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleWindowFocusInSync, void, int64_t)},
	{"handleWindowFocusIn_Dispatch", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleWindowFocusIn_Dispatch, void)},
	{"handleWindowFocusOut", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleWindowFocusOut, void, $Window*, int64_t)},
	{"handleWindowFocusOutSync", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleWindowFocusOutSync, void, $Window*, int64_t)},
	{"handleXCrossingEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, handleXCrossingEvent, void, $XEvent*)},
	{"isGrabbed", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, isGrabbed, bool)},
	{"overrideWindowHandle", "(J)V", nullptr, $PUBLIC, $virtualMethod(XLightweightFramePeer, overrideWindowHandle, void, int64_t)},
	{"paletteChanged", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, paletteChanged, void)},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, print, void, $Graphics*)},
	{"recursivelySetIcon", "(Ljava/util/List;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, recursivelySetIcon, void, $List*)},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC, $virtualMethod(XLightweightFramePeer, removeDropTarget, void, $DropTarget*)},
	{"removeDropTarget", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, removeDropTarget, void)},
	{"removeToplevelStateListener", "(Lsun/awt/X11/ToplevelStateListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, removeToplevelStateListener, void, $ToplevelStateListener*)},
	{"repositionSecurityWarning", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, repositionSecurityWarning, void)},
	{"requestWindowFocus", "(JZ)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, requestWindowFocus, bool, int64_t, bool)},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, requestWindowFocus, bool)},
	{"requestWindowFocus", "(Lsun/awt/X11/XWindowPeer;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, requestWindowFocus, bool, $XWindowPeer*)},
	{"requestXFocus", "(JZ)V", nullptr, $PROTECTED, $virtualMethod(XLightweightFramePeer, requestXFocus, void, int64_t, bool)},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setBounds, void, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setBoundsPrivate, void, int32_t, int32_t, int32_t, int32_t)},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setFullScreenExclusiveModeState, void, bool)},
	{"setGrab", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XLightweightFramePeer, setGrab, void, bool)},
	{"setMWMHints", "(Lsun/awt/X11/PropMwmHints;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setMWMHints, void, $PropMwmHints*)},
	{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setMaximizedBounds, void, $Rectangle*)},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setMenuBar, void, $MenuBar*)},
	{"setModalBlocked", "(Ljava/awt/Dialog;ZLjava/util/Vector;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setModalBlocked, void, $Dialog*, bool, $Vector*)},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setModalBlocked, void, $Dialog*, bool)},
	{"setNETWMState", "(Lsun/awt/X11/XAtomList;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setNETWMState, void, $XAtomList*)},
	{"setOpacity", "(F)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setOpacity, void, float)},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setOpaque, void, bool)},
	{"setResizable", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setResizable, void, bool)},
	{"setState", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setState, void, int32_t)},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setTitle, void, $String*)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, setVisible, void, bool)},
	{"toBack", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, toBack, void)},
	{"toFront", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, toFront, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, updateAlwaysOnTopState, void)},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC, $virtualMethod(XLightweightFramePeer, updateCursorImmediately, void)},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, updateFocusableWindowState, void)},
	{"updateIconImages", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, updateIconImages, void)},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, updateMinimumSize, void)},
	{"updateSecurityWarningVisibility", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, updateSecurityWarningVisibility, void)},
	{"updateWindow", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XLightweightFramePeer, updateWindow, void)},
	{"xSetVisible", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XLightweightFramePeer, xSetVisible, void, bool)},
	{}
};

$ClassInfo _XLightweightFramePeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XLightweightFramePeer",
	"sun.awt.X11.XFramePeer",
	"sun.awt.OverrideNativeWindowHandle",
	_XLightweightFramePeer_FieldInfo_,
	_XLightweightFramePeer_MethodInfo_
};

$Object* allocate$XLightweightFramePeer($Class* clazz) {
	return $of($alloc(XLightweightFramePeer));
}

$String* XLightweightFramePeer::toString() {
	 return this->$XFramePeer::toString();
}

int32_t XLightweightFramePeer::hashCode() {
	 return this->$XFramePeer::hashCode();
}

bool XLightweightFramePeer::equals(Object$* arg0) {
	 return this->$XFramePeer::equals(arg0);
}

$Object* XLightweightFramePeer::clone() {
	 return this->$XFramePeer::clone();
}

void XLightweightFramePeer::finalize() {
	this->$XFramePeer::finalize();
}

void XLightweightFramePeer::init$($LightweightFrame* target) {
	$XFramePeer::init$(static_cast<$Frame*>(target));
	this->overriddenWindowHandle = 0;
}

$LightweightFrame* XLightweightFramePeer::getLwTarget() {
	return $cast($LightweightFrame, this->target);
}

$Graphics* XLightweightFramePeer::getGraphics() {
	return $nc($(getLwTarget()))->getGraphics();
}

void XLightweightFramePeer::xSetVisible(bool visible) {
	this->visible = visible;
}

void XLightweightFramePeer::requestXFocus(int64_t time, bool timeProvided) {
}

void XLightweightFramePeer::setGrab(bool grab) {
	$useLocalCurrentObjectStackCache();
	if (grab) {
		$nc($(getLwTarget()))->grabFocus();
	} else {
		$nc($(getLwTarget()))->ungrabFocus();
	}
}

void XLightweightFramePeer::updateCursorImmediately() {
	$useLocalCurrentObjectStackCache();
	$nc($($SwingAccessor::getJLightweightFrameAccessor()))->updateCursor($cast($JLightweightFrame, $(getLwTarget())));
}

void XLightweightFramePeer::addDropTarget($DropTarget* dt) {
	$nc($(getLwTarget()))->addDropTarget(dt);
}

void XLightweightFramePeer::removeDropTarget($DropTarget* dt) {
	$nc($(getLwTarget()))->removeDropTarget(dt);
}

void XLightweightFramePeer::overrideWindowHandle(int64_t handle) {
	this->overriddenWindowHandle = handle;
}

int64_t XLightweightFramePeer::getOverriddenWindowHandle() {
	return this->overriddenWindowHandle;
}

void XLightweightFramePeer::emulateActivation(bool doActivate) {
	$XFramePeer::emulateActivation(doActivate);
}

$Rectangle* XLightweightFramePeer::getBoundsPrivate() {
	return $XFramePeer::getBoundsPrivate();
}

void XLightweightFramePeer::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XFramePeer::setBoundsPrivate(x, y, width, height);
}

void XLightweightFramePeer::print($Graphics* g) {
	$XFramePeer::print(g);
}

void XLightweightFramePeer::dispose() {
	$XFramePeer::dispose();
}

void XLightweightFramePeer::setVisible(bool vis) {
	$XFramePeer::setVisible(vis);
}

void XLightweightFramePeer::handleStateChange(int32_t oldState, int32_t newState) {
	$XFramePeer::handleStateChange(oldState, newState);
}

void XLightweightFramePeer::handlePropertyNotify($XEvent* xev) {
	$XFramePeer::handlePropertyNotify(xev);
}

void XLightweightFramePeer::setState(int32_t newState) {
	$XFramePeer::setState(newState);
}

int32_t XLightweightFramePeer::getState() {
	return $XFramePeer::getState();
}

void XLightweightFramePeer::setMaximizedBounds($Rectangle* b) {
	$XFramePeer::setMaximizedBounds(b);
}

void XLightweightFramePeer::setMenuBar($MenuBar* mb) {
	$XFramePeer::setMenuBar(mb);
}

void XLightweightFramePeer::handleWindowFocusOut($Window* oppositeWindow, int64_t serial) {
	$XFramePeer::handleWindowFocusOut(oppositeWindow, serial);
}

void XLightweightFramePeer::handleWindowFocusIn(int64_t serial) {
	$XFramePeer::handleWindowFocusIn(serial);
}

bool XLightweightFramePeer::requestWindowFocus(int64_t time, bool timeProvided) {
	return $XFramePeer::requestWindowFocus(time, timeProvided);
}

void XLightweightFramePeer::handleClientMessage($XEvent* xev) {
	$XFramePeer::handleClientMessage(xev);
}

$Point* XLightweightFramePeer::getLocationOnScreen() {
	return $XFramePeer::getLocationOnScreen();
}

int32_t XLightweightFramePeer::getHeight() {
	return $XFramePeer::getHeight();
}

int32_t XLightweightFramePeer::getWidth() {
	return $XFramePeer::getWidth();
}

int32_t XLightweightFramePeer::getAbsoluteY() {
	return $XFramePeer::getAbsoluteY();
}

int32_t XLightweightFramePeer::getAbsoluteX() {
	return $XFramePeer::getAbsoluteX();
}

$Point* XLightweightFramePeer::getLocation() {
	return $XFramePeer::getLocation();
}

int32_t XLightweightFramePeer::getY() {
	return $XFramePeer::getY();
}

int32_t XLightweightFramePeer::getX() {
	return $XFramePeer::getX();
}

$Dimension* XLightweightFramePeer::getSize() {
	return $XFramePeer::getSize();
}

$Rectangle* XLightweightFramePeer::getBounds() {
	return $XFramePeer::getBounds();
}

void XLightweightFramePeer::setResizable(bool resizable) {
	$XFramePeer::setResizable(resizable);
}

void XLightweightFramePeer::handleConfigureNotifyEvent($XEvent* xev) {
	$XFramePeer::handleConfigureNotifyEvent(xev);
}

void XLightweightFramePeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	$XFramePeer::setBounds(x, y, width, height, op);
}

$Insets* XLightweightFramePeer::getInsets() {
	return $XFramePeer::getInsets();
}

void XLightweightFramePeer::handleReparentNotifyEvent($XEvent* xev) {
	$XFramePeer::handleReparentNotifyEvent(xev);
}

void XLightweightFramePeer::handleFocusEvent($XEvent* xev) {
	$XFramePeer::handleFocusEvent(xev);
}

void XLightweightFramePeer::handleDeiconify() {
	$XFramePeer::handleDeiconify();
}

void XLightweightFramePeer::handleIconify() {
	$XFramePeer::handleIconify();
}

void XLightweightFramePeer::setTitle($String* title) {
	$XFramePeer::setTitle(title);
}

void XLightweightFramePeer::updateMinimumSize() {
	$XFramePeer::updateMinimumSize();
}

int64_t XLightweightFramePeer::getContentWindow() {
	return $XFramePeer::getContentWindow();
}

int64_t XLightweightFramePeer::getShell() {
	return $XFramePeer::getShell();
}

void XLightweightFramePeer::updateWindow() {
	$XFramePeer::updateWindow();
}

void XLightweightFramePeer::setOpaque(bool isOpaque) {
	$XFramePeer::setOpaque(isOpaque);
}

void XLightweightFramePeer::setOpacity(float opacity) {
	$XFramePeer::setOpacity(opacity);
}

void XLightweightFramePeer::handleButtonPressRelease($XEvent* xev) {
	$XFramePeer::handleButtonPressRelease(xev);
}

void XLightweightFramePeer::handleMotionNotify($XEvent* xev) {
	$XFramePeer::handleMotionNotify(xev);
}

void XLightweightFramePeer::handleXCrossingEvent($XEvent* xev) {
	$XFramePeer::handleXCrossingEvent(xev);
}

bool XLightweightFramePeer::isGrabbed() {
	return $XFramePeer::isGrabbed();
}

void XLightweightFramePeer::setMWMHints($PropMwmHints* hints) {
	$XFramePeer::setMWMHints(hints);
}

$PropMwmHints* XLightweightFramePeer::getMWMHints() {
	return $XFramePeer::getMWMHints();
}

void XLightweightFramePeer::setNETWMState($XAtomList* state) {
	$XFramePeer::setNETWMState(state);
}

$XAtomList* XLightweightFramePeer::getNETWMState() {
	return $XFramePeer::getNETWMState();
}

void XLightweightFramePeer::updateFocusableWindowState() {
	$XFramePeer::updateFocusableWindowState();
}

void XLightweightFramePeer::removeDropTarget() {
	$XFramePeer::removeDropTarget();
}

void XLightweightFramePeer::addDropTarget() {
	$XFramePeer::addDropTarget();
}

bool XLightweightFramePeer::requestWindowFocus() {
	return $XFramePeer::requestWindowFocus();
}

bool XLightweightFramePeer::requestWindowFocus($XWindowPeer* actualFocusedWindow) {
	return $XFramePeer::requestWindowFocus(actualFocusedWindow);
}

void XLightweightFramePeer::setModalBlocked($Dialog* d, bool blocked, $Vector* javaToplevels) {
	$XFramePeer::setModalBlocked(d, blocked, javaToplevels);
}

void XLightweightFramePeer::setModalBlocked($Dialog* d, bool blocked) {
	$XFramePeer::setModalBlocked(d, blocked);
}

void XLightweightFramePeer::removeToplevelStateListener($ToplevelStateListener* l) {
	$XFramePeer::removeToplevelStateListener(l);
}

void XLightweightFramePeer::addToplevelStateListener($ToplevelStateListener* l) {
	$XFramePeer::addToplevelStateListener(l);
}

void XLightweightFramePeer::handleUnmapNotifyEvent($XEvent* xev) {
	$XFramePeer::handleUnmapNotifyEvent(xev);
}

void XLightweightFramePeer::handleMapNotifyEvent($XEvent* xev) {
	$XFramePeer::handleMapNotifyEvent(xev);
}

void XLightweightFramePeer::handleVisibilityEvent($XEvent* xev) {
	$XFramePeer::handleVisibilityEvent(xev);
}

void XLightweightFramePeer::updateSecurityWarningVisibility() {
	$XFramePeer::updateSecurityWarningVisibility();
}

void XLightweightFramePeer::setFullScreenExclusiveModeState(bool state) {
	$XFramePeer::setFullScreenExclusiveModeState(state);
}

void XLightweightFramePeer::repositionSecurityWarning() {
	$XFramePeer::repositionSecurityWarning();
}

void XLightweightFramePeer::updateAlwaysOnTopState() {
	$XFramePeer::updateAlwaysOnTopState();
}

void XLightweightFramePeer::toBack() {
	$XFramePeer::toBack();
}

void XLightweightFramePeer::toFront() {
	$XFramePeer::toFront();
}

void XLightweightFramePeer::paletteChanged() {
	$XFramePeer::paletteChanged();
}

void XLightweightFramePeer::displayChanged() {
	$XFramePeer::displayChanged();
}

void XLightweightFramePeer::checkIfOnNewScreen($Rectangle* newBounds) {
	$XFramePeer::checkIfOnNewScreen(newBounds);
}

void XLightweightFramePeer::handleWindowFocusOutSync($Window* oppositeWindow, int64_t serial) {
	$XFramePeer::handleWindowFocusOutSync(oppositeWindow, serial);
}

void XLightweightFramePeer::handleWindowFocusInSync(int64_t serial) {
	$XFramePeer::handleWindowFocusInSync(serial);
}

void XLightweightFramePeer::handleWindowFocusIn_Dispatch() {
	$XFramePeer::handleWindowFocusIn_Dispatch();
}

$XWindowPeer* XLightweightFramePeer::getOwnerPeer() {
	return $XFramePeer::getOwnerPeer();
}

$Dimension* XLightweightFramePeer::getTargetMinimumSize() {
	return $XFramePeer::getTargetMinimumSize();
}

void XLightweightFramePeer::recursivelySetIcon($List* icons) {
	$XFramePeer::recursivelySetIcon(icons);
}

void XLightweightFramePeer::updateIconImages() {
	$XFramePeer::updateIconImages();
}

XLightweightFramePeer::XLightweightFramePeer() {
}

$Class* XLightweightFramePeer::load$($String* name, bool initialize) {
	$loadClass(XLightweightFramePeer, name, initialize, &_XLightweightFramePeer_ClassInfo_, allocate$XLightweightFramePeer);
	return class$;
}

$Class* XLightweightFramePeer::class$ = nullptr;

		} // X11
	} // awt
} // sun