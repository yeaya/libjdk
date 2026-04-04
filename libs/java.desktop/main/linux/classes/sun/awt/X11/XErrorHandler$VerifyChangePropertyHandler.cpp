#include <sun/awt/X11/XErrorHandler$VerifyChangePropertyHandler.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XProtocolConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XProtocolConstants = ::sun::awt::X11::XProtocolConstants;

namespace sun {
	namespace awt {
		namespace X11 {

XErrorHandler$VerifyChangePropertyHandler* XErrorHandler$VerifyChangePropertyHandler::theInstance = nullptr;

void XErrorHandler$VerifyChangePropertyHandler::init$() {
	$XErrorHandler$XBaseErrorHandler::init$();
}

int32_t XErrorHandler$VerifyChangePropertyHandler::handleError(int64_t display, $XErrorEvent* err) {
	if ($nc(err)->get_request_code() == $XProtocolConstants::X_ChangeProperty) {
		return 0;
	}
	return $XErrorHandler$XBaseErrorHandler::handleError(display, err);
}

XErrorHandler$VerifyChangePropertyHandler* XErrorHandler$VerifyChangePropertyHandler::getInstance() {
	$init(XErrorHandler$VerifyChangePropertyHandler);
	return XErrorHandler$VerifyChangePropertyHandler::theInstance;
}

void XErrorHandler$VerifyChangePropertyHandler::clinit$($Class* clazz) {
	$assignStatic(XErrorHandler$VerifyChangePropertyHandler::theInstance, $new(XErrorHandler$VerifyChangePropertyHandler));
}

XErrorHandler$VerifyChangePropertyHandler::XErrorHandler$VerifyChangePropertyHandler() {
}

$Class* XErrorHandler$VerifyChangePropertyHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theInstance", "Lsun/awt/X11/XErrorHandler$VerifyChangePropertyHandler;", nullptr, $PRIVATE | $STATIC, $staticField(XErrorHandler$VerifyChangePropertyHandler, theInstance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XErrorHandler$VerifyChangePropertyHandler, init$, void)},
		{"getInstance", "()Lsun/awt/X11/XErrorHandler$VerifyChangePropertyHandler;", nullptr, $PUBLIC | $STATIC, $staticMethod(XErrorHandler$VerifyChangePropertyHandler, getInstance, XErrorHandler$VerifyChangePropertyHandler*)},
		{"handleError", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC, $virtualMethod(XErrorHandler$VerifyChangePropertyHandler, handleError, int32_t, int64_t, $XErrorEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XErrorHandler$VerifyChangePropertyHandler", "sun.awt.X11.XErrorHandler", "VerifyChangePropertyHandler", $PUBLIC | $STATIC},
		{"sun.awt.X11.XErrorHandler$XBaseErrorHandler", "sun.awt.X11.XErrorHandler", "XBaseErrorHandler", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XErrorHandler$VerifyChangePropertyHandler",
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
	$loadClass(XErrorHandler$VerifyChangePropertyHandler, name, initialize, &classInfo$$, XErrorHandler$VerifyChangePropertyHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XErrorHandler$VerifyChangePropertyHandler);
	});
	return class$;
}

$Class* XErrorHandler$VerifyChangePropertyHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun