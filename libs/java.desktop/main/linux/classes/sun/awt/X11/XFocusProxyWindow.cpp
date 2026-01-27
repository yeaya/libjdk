#include <sun/awt/X11/XFocusProxyWindow.h>

#include <java/awt/Rectangle.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

#undef BOUNDS
#undef EVENT_MASK
#undef PARENT_WINDOW

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEvent = ::sun::awt::X11::XEvent;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XFocusProxyWindow_FieldInfo_[] = {
	{"owner", "Lsun/awt/X11/XWindowPeer;", nullptr, 0, $field(XFocusProxyWindow, owner)},
	{}
};

$MethodInfo _XFocusProxyWindow_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, $PUBLIC, $method(XFocusProxyWindow, init$, void, $XWindowPeer*)},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XFocusProxyWindow, dispatchEvent, void, $XEvent*)},
	{"getOwner", "()Lsun/awt/X11/XWindowPeer;", nullptr, $PUBLIC, $virtualMethod(XFocusProxyWindow, getOwner, $XWindowPeer*)},
	{"getWMClass", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XFocusProxyWindow, getWMClass, $StringArray*)},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XFocusProxyWindow, getWMName, $String*)},
	{"handleFocusEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XFocusProxyWindow, handleFocusEvent, void, $XEvent*)},
	{"handleKeyPress", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XFocusProxyWindow, handleKeyPress, void, $XEvent*)},
	{"handleKeyRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XFocusProxyWindow, handleKeyRelease, void, $XEvent*)},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC, $virtualMethod(XFocusProxyWindow, postInit, void, $XCreateWindowParams*)},
	{}
};

$ClassInfo _XFocusProxyWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XFocusProxyWindow",
	"sun.awt.X11.XBaseWindow",
	nullptr,
	_XFocusProxyWindow_FieldInfo_,
	_XFocusProxyWindow_MethodInfo_
};

$Object* allocate$XFocusProxyWindow($Class* clazz) {
	return $of($alloc(XFocusProxyWindow));
}

void XFocusProxyWindow::init$($XWindowPeer* owner) {
	$useLocalCurrentObjectStackCache();
	$init($XBaseWindow);
	$XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XBaseWindow::BOUNDS),
		$of($$new($Rectangle, -1, -1, 1, 1)),
		$of($XBaseWindow::PARENT_WINDOW),
		$($of($Long::valueOf($nc(owner)->getWindow()))),
		$of($XBaseWindow::EVENT_MASK),
		$($of($Long::valueOf(($XConstants::FocusChangeMask | $XConstants::KeyPressMask) | $XConstants::KeyReleaseMask)))
	})));
	$set(this, owner, owner);
}

void XFocusProxyWindow::postInit($XCreateWindowParams* params) {
	$XBaseWindow::postInit(params);
	setWMClass($(getWMClass()));
	xSetVisible(true);
}

$String* XFocusProxyWindow::getWMName() {
	return "FocusProxy"_s;
}

$StringArray* XFocusProxyWindow::getWMClass() {
	return $new($StringArray, {
		"Focus-Proxy-Window"_s,
		"FocusProxy"_s
	});
}

$XWindowPeer* XFocusProxyWindow::getOwner() {
	return this->owner;
}

void XFocusProxyWindow::dispatchEvent($XEvent* ev) {
	int32_t type = $nc(ev)->get_type();
	switch (type) {
	case $XConstants::FocusIn:
		{}
	case $XConstants::FocusOut:
		{
			handleFocusEvent(ev);
			break;
		}
	}
	$XBaseWindow::dispatchEvent(ev);
}

void XFocusProxyWindow::handleFocusEvent($XEvent* xev) {
	$nc(this->owner)->handleFocusEvent(xev);
}

void XFocusProxyWindow::handleKeyPress($XEvent* xev) {
	$nc(this->owner)->handleKeyPress(xev);
}

void XFocusProxyWindow::handleKeyRelease($XEvent* xev) {
	$nc(this->owner)->handleKeyRelease(xev);
}

XFocusProxyWindow::XFocusProxyWindow() {
}

$Class* XFocusProxyWindow::load$($String* name, bool initialize) {
	$loadClass(XFocusProxyWindow, name, initialize, &_XFocusProxyWindow_ClassInfo_, allocate$XFocusProxyWindow);
	return class$;
}

$Class* XFocusProxyWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun