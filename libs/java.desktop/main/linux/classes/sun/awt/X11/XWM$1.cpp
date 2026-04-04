#include <sun/awt/X11/XWM$1.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XProtocolConstants.h>
#include <sun/awt/X11/XWM.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XConstants = ::sun::awt::X11::XConstants;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XProtocolConstants = ::sun::awt::X11::XProtocolConstants;
using $XWM = ::sun::awt::X11::XWM;

namespace sun {
	namespace awt {
		namespace X11 {

void XWM$1::init$() {
	$XErrorHandler$XBaseErrorHandler::init$();
}

int32_t XWM$1::handleError(int64_t display, $XErrorEvent* err) {
	bool var$0 = $nc(err)->get_request_code() == $XProtocolConstants::X_ChangeWindowAttributes;
	if (var$0 && (err->get_error_code() == $XConstants::BadAccess)) {
		$init($XWM);
		$XWM::winmgr_running = true;
		return 0;
	}
	return $XErrorHandler$XBaseErrorHandler::handleError(display, err);
}

XWM$1::XWM$1() {
}

$Class* XWM$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XWM$1, init$, void)},
		{"handleError", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC, $virtualMethod(XWM$1, handleError, int32_t, int64_t, $XErrorEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XWM",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XWM$1", nullptr, nullptr, 0},
		{"sun.awt.X11.XErrorHandler$XBaseErrorHandler", "sun.awt.X11.XErrorHandler", "XBaseErrorHandler", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XWM$1",
		"sun.awt.X11.XErrorHandler$XBaseErrorHandler",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XWM"
	};
	$loadClass(XWM$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XWM$1);
	});
	return class$;
}

$Class* XWM$1::class$ = nullptr;

		} // X11
	} // awt
} // sun