#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;

namespace sun {
	namespace awt {
		namespace X11 {

void XErrorHandler::init$() {
}

XErrorHandler::XErrorHandler() {
}

$Class* XErrorHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XErrorHandler, init$, void)},
		{"handleError", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XErrorHandler, handleError, int32_t, int64_t, $XErrorEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XErrorHandler$VerifyChangePropertyHandler", "sun.awt.X11.XErrorHandler", "VerifyChangePropertyHandler", $PUBLIC | $STATIC},
		{"sun.awt.X11.XErrorHandler$IgnoreBadWindowHandler", "sun.awt.X11.XErrorHandler", "IgnoreBadWindowHandler", $PUBLIC | $STATIC},
		{"sun.awt.X11.XErrorHandler$XBaseErrorHandler", "sun.awt.X11.XErrorHandler", "XBaseErrorHandler", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.X11.XErrorHandler",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.X11.XErrorHandler$VerifyChangePropertyHandler,sun.awt.X11.XErrorHandler$IgnoreBadWindowHandler,sun.awt.X11.XErrorHandler$XBaseErrorHandler"
	};
	$loadClass(XErrorHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XErrorHandler);
	});
	return class$;
}

$Class* XErrorHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun