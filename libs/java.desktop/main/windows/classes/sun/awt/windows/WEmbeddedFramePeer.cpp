#include <sun/awt/windows/WEmbeddedFramePeer.h>

#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Rectangle.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WFramePeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <jcpp.h>

#undef NO_EMBEDDED_CHECK
#undef SET_BOUNDS

using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $MenuBar = ::java::awt::MenuBar;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WFramePeer = ::sun::awt::windows::WFramePeer;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WEmbeddedFramePeer_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/EmbeddedFrame;)V", nullptr, $PUBLIC, $method(WEmbeddedFramePeer, init$, void, $EmbeddedFrame*)},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE, $virtualMethod(WEmbeddedFramePeer, create, void, $WComponentPeer*)},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WEmbeddedFramePeer, emulateActivation, void, bool)},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WEmbeddedFramePeer, getBoundsPrivate, $Rectangle*)},
	{"getExtendedState", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WEmbeddedFramePeer, getExtendedState, int32_t)},
	{"getState", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WEmbeddedFramePeer, getState, int32_t)},
	{"isAccelCapable", "()Z", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFramePeer, isAccelCapable, bool)},
	{"modalDisable", "(Ljava/awt/Dialog;J)V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFramePeer, modalDisable, void, $Dialog*, int64_t)},
	{"modalEnable", "(Ljava/awt/Dialog;)V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFramePeer, modalEnable, void, $Dialog*)},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFramePeer, print, void, $Graphics*)},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WEmbeddedFramePeer, reshape, void, int32_t, int32_t, int32_t, int32_t)},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFramePeer, setBoundsPrivate, void, int32_t, int32_t, int32_t, int32_t)},
	{"setExtendedState", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WEmbeddedFramePeer, setExtendedState, void, int32_t)},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WEmbeddedFramePeer, setMenuBar, void, $MenuBar*)},
	{"setState", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WEmbeddedFramePeer, setState, void, int32_t)},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(WEmbeddedFramePeer, updateGraphicsData, bool, $GraphicsConfiguration*)},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC, $virtualMethod(WEmbeddedFramePeer, updateMinimumSize, void)},
	{}
};

#define _METHOD_INDEX_create 1
#define _METHOD_INDEX_getBoundsPrivate 3

$ClassInfo _WEmbeddedFramePeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.windows.WEmbeddedFramePeer",
	"sun.awt.windows.WFramePeer",
	nullptr,
	nullptr,
	_WEmbeddedFramePeer_MethodInfo_
};

$Object* allocate$WEmbeddedFramePeer($Class* clazz) {
	return $of($alloc(WEmbeddedFramePeer));
}

void WEmbeddedFramePeer::init$($EmbeddedFrame* target) {
	$WFramePeer::init$(target);
}

void WEmbeddedFramePeer::create($WComponentPeer* parent) {
	$prepareNative(WEmbeddedFramePeer, create, void, $WComponentPeer* parent);
	$invokeNative(parent);
	$finishNative();
}

void WEmbeddedFramePeer::print($Graphics* g) {
}

void WEmbeddedFramePeer::updateMinimumSize() {
}

void WEmbeddedFramePeer::modalDisable($Dialog* blocker, int64_t blockerHWnd) {
	$WFramePeer::modalDisable(blocker, blockerHWnd);
	$nc(($cast($EmbeddedFrame, this->target)))->notifyModalBlocked(blocker, true);
}

void WEmbeddedFramePeer::modalEnable($Dialog* blocker) {
	$WFramePeer::modalEnable(blocker);
	$nc(($cast($EmbeddedFrame, this->target)))->notifyModalBlocked(blocker, false);
}

void WEmbeddedFramePeer::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	setBounds(x, y, width, height, $ComponentPeer::SET_BOUNDS | $ComponentPeer::NO_EMBEDDED_CHECK);
}

$Rectangle* WEmbeddedFramePeer::getBoundsPrivate() {
	$var($Rectangle, $ret, nullptr);
	$prepareNative(WEmbeddedFramePeer, getBoundsPrivate, $Rectangle*);
	$assign($ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

bool WEmbeddedFramePeer::isAccelCapable() {
	return !$Win32GraphicsEnvironment::isDWMCompositionEnabled();
}

void WEmbeddedFramePeer::emulateActivation(bool activate) {
	$WFramePeer::emulateActivation(activate);
}

void WEmbeddedFramePeer::setMenuBar($MenuBar* mb) {
	$WFramePeer::setMenuBar(mb);
}

void WEmbeddedFramePeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$WFramePeer::reshape(x, y, width, height);
}

bool WEmbeddedFramePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	return $WFramePeer::updateGraphicsData(gc);
}

int32_t WEmbeddedFramePeer::getExtendedState() {
	return $WFramePeer::getExtendedState();
}

void WEmbeddedFramePeer::setExtendedState(int32_t state) {
	$WFramePeer::setExtendedState(state);
}

int32_t WEmbeddedFramePeer::getState() {
	return $WFramePeer::getState();
}

void WEmbeddedFramePeer::setState(int32_t state) {
	$WFramePeer::setState(state);
}

WEmbeddedFramePeer::WEmbeddedFramePeer() {
}

$Class* WEmbeddedFramePeer::load$($String* name, bool initialize) {
	$loadClass(WEmbeddedFramePeer, name, initialize, &_WEmbeddedFramePeer_ClassInfo_, allocate$WEmbeddedFramePeer);
	return class$;
}

$Class* WEmbeddedFramePeer::class$ = nullptr;

		} // windows
	} // awt
} // sun