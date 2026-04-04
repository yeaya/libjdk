#include <sun/awt/X11/XDropTargetContextPeer$XDropTargetProtocolListenerImpl.h>
#include <java/awt/Component.h>
#include <java/lang/AssertionError.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XDropTargetContextPeer.h>
#include <sun/awt/X11/XDropTargetProtocolListener.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>
#include <jcpp.h>

#undef DISPATCH_SYNC

using $Component = ::java::awt::Component;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XDropTargetContextPeer = ::sun::awt::X11::XDropTargetContextPeer;
using $XDropTargetProtocolListener = ::sun::awt::X11::XDropTargetProtocolListener;
using $XWindow = ::sun::awt::X11::XWindow;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;

namespace sun {
	namespace awt {
		namespace X11 {

bool XDropTargetContextPeer$XDropTargetProtocolListenerImpl::$assertionsDisabled = false;
$XDropTargetProtocolListener* XDropTargetContextPeer$XDropTargetProtocolListenerImpl::theInstance = nullptr;

void XDropTargetContextPeer$XDropTargetProtocolListenerImpl::init$() {
}

$XDropTargetProtocolListener* XDropTargetContextPeer$XDropTargetProtocolListenerImpl::getInstance() {
	$init(XDropTargetContextPeer$XDropTargetProtocolListenerImpl);
	return XDropTargetContextPeer$XDropTargetProtocolListenerImpl::theInstance;
}

void XDropTargetContextPeer$XDropTargetProtocolListenerImpl::handleDropTargetNotification($XWindow* xwindow, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, int32_t eventID) {
	$useLocalObjectStack();
	$var($Object, target, $nc(xwindow)->getTarget());
	if (!XDropTargetContextPeer$XDropTargetProtocolListenerImpl::$assertionsDisabled && !$instanceOf($Component, target)) {
		$throwNew($AssertionError);
	}
	$var($Component, component, $cast($Component, target));
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(target));
	if (!XDropTargetContextPeer$XDropTargetProtocolListenerImpl::$assertionsDisabled && !(appContext != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($XDropTargetContextPeer, peer, $XDropTargetContextPeer::getPeer(appContext));
	$XDropTargetContextPeer::access$000(peer, component, x, y, dropAction, actions, formats, nativeCtxt, eventID, !$SunDropTargetContextPeer::DISPATCH_SYNC);
}

void XDropTargetContextPeer$XDropTargetProtocolListenerImpl::clinit$($Class* clazz) {
	$load($XDropTargetContextPeer);
	XDropTargetContextPeer$XDropTargetProtocolListenerImpl::$assertionsDisabled = !$XDropTargetContextPeer::class$->desiredAssertionStatus();
	$assignStatic(XDropTargetContextPeer$XDropTargetProtocolListenerImpl::theInstance, $new(XDropTargetContextPeer$XDropTargetProtocolListenerImpl));
}

XDropTargetContextPeer$XDropTargetProtocolListenerImpl::XDropTargetContextPeer$XDropTargetProtocolListenerImpl() {
}

$Class* XDropTargetContextPeer$XDropTargetProtocolListenerImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, $assertionsDisabled)},
		{"theInstance", "Lsun/awt/X11/XDropTargetProtocolListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, theInstance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, init$, void)},
		{"getInstance", "()Lsun/awt/X11/XDropTargetProtocolListener;", nullptr, $STATIC, $staticMethod(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, getInstance, $XDropTargetProtocolListener*)},
		{"handleDropTargetNotification", "(Lsun/awt/X11/XWindow;IIII[JJI)V", nullptr, $PUBLIC, $virtualMethod(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, handleDropTargetNotification, void, $XWindow*, int32_t, int32_t, int32_t, int32_t, $longs*, int64_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XDropTargetContextPeer$XDropTargetProtocolListenerImpl", "sun.awt.X11.XDropTargetContextPeer", "XDropTargetProtocolListenerImpl", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.X11.XDropTargetContextPeer$XDropTargetProtocolListenerImpl",
		"java.lang.Object",
		"sun.awt.X11.XDropTargetProtocolListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XDropTargetContextPeer"
	};
	$loadClass(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, name, initialize, &classInfo$$, XDropTargetContextPeer$XDropTargetProtocolListenerImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XDropTargetContextPeer$XDropTargetProtocolListenerImpl);
	});
	return class$;
}

$Class* XDropTargetContextPeer$XDropTargetProtocolListenerImpl::class$ = nullptr;

		} // X11
	} // awt
} // sun