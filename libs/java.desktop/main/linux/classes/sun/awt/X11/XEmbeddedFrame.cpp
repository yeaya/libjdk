#include <sun/awt/X11/XEmbeddedFrame.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FORWARD

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XEmbeddedFramePeer = ::sun::awt::X11::XEmbeddedFramePeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$PlatformLogger* XEmbeddedFrame::log = nullptr;

void XEmbeddedFrame::init$() {
	$EmbeddedFrame::init$();
}

void XEmbeddedFrame::init$(int64_t handle) {
	XEmbeddedFrame::init$(handle, false);
}

void XEmbeddedFrame::init$(int64_t handle, bool supportsXEmbed, bool isTrayIconWindow) {
	$EmbeddedFrame::init$(handle, supportsXEmbed);
	if (isTrayIconWindow) {
		$XTrayIconPeer::suppressWarningString(this);
	}
	this->handle = handle;
	if (handle != 0) {
		addNotify();
		if (!isTrayIconWindow) {
			show();
		}
	}
}

void XEmbeddedFrame::addNotify() {
	$useLocalObjectStack();
	if (!isDisplayable()) {
		$var($XToolkit, toolkit, $cast($XToolkit, $Toolkit::getDefaultToolkit()));
		setPeer($$cast($XComponentPeer, $nc(toolkit)->createEmbeddedFrame(this)));
	}
	$EmbeddedFrame::addNotify();
}

void XEmbeddedFrame::init$(int64_t handle, bool supportsXEmbed) {
	XEmbeddedFrame::init$(handle, supportsXEmbed, false);
}

bool XEmbeddedFrame::traverseIn(bool direction) {
	$useLocalObjectStack();
	$var($XEmbeddedFramePeer, peer, $cast($XEmbeddedFramePeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(this)));
	if (peer != nullptr) {
		bool var$0 = peer->supportsXEmbed();
		if (var$0 && peer->isXEmbedActive()) {
			$nc(XEmbeddedFrame::log)->fine("The method shouldn\'t be called when XEmbed is active!"_s);
		} else {
			return $EmbeddedFrame::traverseIn(direction);
		}
	}
	return false;
}

bool XEmbeddedFrame::traverseOut(bool direction) {
	$useLocalObjectStack();
	$var($XEmbeddedFramePeer, xefp, $cast($XEmbeddedFramePeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(this)));
	if (direction == $EmbeddedFrame::FORWARD) {
		$nc(xefp)->traverseOutForward();
	} else {
		$nc(xefp)->traverseOutBackward();
	}
	return true;
}

void XEmbeddedFrame::synthesizeWindowActivation(bool doActivate) {
	$useLocalObjectStack();
	$var($XEmbeddedFramePeer, peer, $cast($XEmbeddedFramePeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(this)));
	if (peer != nullptr) {
		bool var$0 = peer->supportsXEmbed();
		if (var$0 && peer->isXEmbedActive()) {
			$nc(XEmbeddedFrame::log)->fine("The method shouldn\'t be called when XEmbed is active!"_s);
		} else {
			peer->synthesizeFocusInOut(doActivate);
		}
	}
}

void XEmbeddedFrame::registerAccelerator($AWTKeyStroke* stroke) {
	$useLocalObjectStack();
	$var($XEmbeddedFramePeer, xefp, $cast($XEmbeddedFramePeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(this)));
	if (xefp != nullptr) {
		xefp->registerAccelerator(stroke);
	}
}

void XEmbeddedFrame::unregisterAccelerator($AWTKeyStroke* stroke) {
	$useLocalObjectStack();
	$var($XEmbeddedFramePeer, xefp, $cast($XEmbeddedFramePeer, $$nc($AWTAccessor::getComponentAccessor())->getPeer(this)));
	if (xefp != nullptr) {
		xefp->unregisterAccelerator(stroke);
	}
}

void XEmbeddedFrame::clinit$($Class* clazz) {
	$assignStatic(XEmbeddedFrame::log, $PlatformLogger::getLogger($(XEmbeddedFrame::class$->getName())));
}

XEmbeddedFrame::XEmbeddedFrame() {
}

$Class* XEmbeddedFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XEmbeddedFrame, log)},
		{"handle", "J", nullptr, 0, $field(XEmbeddedFrame, handle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XEmbeddedFrame, init$, void)},
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(XEmbeddedFrame, init$, void, int64_t)},
		{"<init>", "(JZZ)V", nullptr, $PUBLIC, $method(XEmbeddedFrame, init$, void, int64_t, bool, bool)},
		{"<init>", "(JZ)V", nullptr, $PUBLIC, $method(XEmbeddedFrame, init$, void, int64_t, bool)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFrame, addNotify, void)},
		{"registerAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFrame, registerAccelerator, void, $AWTKeyStroke*)},
		{"synthesizeWindowActivation", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFrame, synthesizeWindowActivation, void, bool)},
		{"traverseIn", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFrame, traverseIn, bool, bool)},
		{"traverseOut", "(Z)Z", nullptr, $PROTECTED, $virtualMethod(XEmbeddedFrame, traverseOut, bool, bool)},
		{"unregisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC, $virtualMethod(XEmbeddedFrame, unregisterAccelerator, void, $AWTKeyStroke*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XEmbeddedFrame",
		"sun.awt.EmbeddedFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XEmbeddedFrame, name, initialize, &classInfo$$, XEmbeddedFrame::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(XEmbeddedFrame));
	});
	return class$;
}

$Class* XEmbeddedFrame::class$ = nullptr;

		} // X11
	} // awt
} // sun