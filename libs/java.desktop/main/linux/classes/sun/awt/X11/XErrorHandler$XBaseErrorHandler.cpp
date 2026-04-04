#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;

namespace sun {
	namespace awt {
		namespace X11 {

void XErrorHandler$XBaseErrorHandler::init$() {
	$XErrorHandler::init$();
}

int32_t XErrorHandler$XBaseErrorHandler::handleError(int64_t display, $XErrorEvent* err) {
	return $XErrorHandlerUtil::SAVED_XERROR_HANDLER(display, err);
}

XErrorHandler$XBaseErrorHandler::XErrorHandler$XBaseErrorHandler() {
}

$Class* XErrorHandler$XBaseErrorHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XErrorHandler$XBaseErrorHandler, init$, void)},
		{"handleError", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC, $virtualMethod(XErrorHandler$XBaseErrorHandler, handleError, int32_t, int64_t, $XErrorEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XErrorHandler$XBaseErrorHandler", "sun.awt.X11.XErrorHandler", "XBaseErrorHandler", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XErrorHandler$XBaseErrorHandler",
		"sun.awt.X11.XErrorHandler",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XErrorHandler"
	};
	$loadClass(XErrorHandler$XBaseErrorHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XErrorHandler$XBaseErrorHandler);
	});
	return class$;
}

$Class* XErrorHandler$XBaseErrorHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun