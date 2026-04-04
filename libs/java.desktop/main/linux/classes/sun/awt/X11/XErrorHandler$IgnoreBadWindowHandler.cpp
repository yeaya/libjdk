#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XConstants = ::sun::awt::X11::XConstants;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;

namespace sun {
	namespace awt {
		namespace X11 {

XErrorHandler$IgnoreBadWindowHandler* XErrorHandler$IgnoreBadWindowHandler::theInstance = nullptr;

void XErrorHandler$IgnoreBadWindowHandler::init$() {
	$XErrorHandler$XBaseErrorHandler::init$();
}

int32_t XErrorHandler$IgnoreBadWindowHandler::handleError(int64_t display, $XErrorEvent* err) {
	if ($nc(err)->get_error_code() == $XConstants::BadWindow) {
		return 0;
	}
	return $XErrorHandler$XBaseErrorHandler::handleError(display, err);
}

XErrorHandler$IgnoreBadWindowHandler* XErrorHandler$IgnoreBadWindowHandler::getInstance() {
	$init(XErrorHandler$IgnoreBadWindowHandler);
	return XErrorHandler$IgnoreBadWindowHandler::theInstance;
}

void XErrorHandler$IgnoreBadWindowHandler::clinit$($Class* clazz) {
	$assignStatic(XErrorHandler$IgnoreBadWindowHandler::theInstance, $new(XErrorHandler$IgnoreBadWindowHandler));
}

XErrorHandler$IgnoreBadWindowHandler::XErrorHandler$IgnoreBadWindowHandler() {
}

$Class* XErrorHandler$IgnoreBadWindowHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theInstance", "Lsun/awt/X11/XErrorHandler$IgnoreBadWindowHandler;", nullptr, $PRIVATE | $STATIC, $staticField(XErrorHandler$IgnoreBadWindowHandler, theInstance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XErrorHandler$IgnoreBadWindowHandler, init$, void)},
		{"getInstance", "()Lsun/awt/X11/XErrorHandler$IgnoreBadWindowHandler;", nullptr, $PUBLIC | $STATIC, $staticMethod(XErrorHandler$IgnoreBadWindowHandler, getInstance, XErrorHandler$IgnoreBadWindowHandler*)},
		{"handleError", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC, $virtualMethod(XErrorHandler$IgnoreBadWindowHandler, handleError, int32_t, int64_t, $XErrorEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XErrorHandler$IgnoreBadWindowHandler", "sun.awt.X11.XErrorHandler", "IgnoreBadWindowHandler", $PUBLIC | $STATIC},
		{"sun.awt.X11.XErrorHandler$XBaseErrorHandler", "sun.awt.X11.XErrorHandler", "XBaseErrorHandler", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XErrorHandler$IgnoreBadWindowHandler",
		"sun.awt.X11.XErrorHandler$XBaseErrorHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XErrorHandler"
	};
	$loadClass(XErrorHandler$IgnoreBadWindowHandler, name, initialize, &classInfo$$, XErrorHandler$IgnoreBadWindowHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XErrorHandler$IgnoreBadWindowHandler);
	});
	return class$;
}

$Class* XErrorHandler$IgnoreBadWindowHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun