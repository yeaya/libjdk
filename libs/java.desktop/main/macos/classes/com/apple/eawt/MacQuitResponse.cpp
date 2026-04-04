#include <com/apple/eawt/MacQuitResponse.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

void MacQuitResponse::init$($_AppEventHandler* appEventHandler) {
	$set(this, appEventHandler, appEventHandler);
}

void MacQuitResponse::performQuit() {
	if ($nc(this->appEventHandler)->currentQuitResponse != this) {
		return;
	}
	this->appEventHandler->performQuit();
}

void MacQuitResponse::cancelQuit() {
	if ($nc(this->appEventHandler)->currentQuitResponse != this) {
		return;
	}
	this->appEventHandler->cancelQuit();
}

MacQuitResponse::MacQuitResponse() {
}

$Class* MacQuitResponse::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"appEventHandler", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL, $field(MacQuitResponse, appEventHandler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(MacQuitResponse, init$, void, $_AppEventHandler*)},
		{"cancelQuit", "()V", nullptr, $PUBLIC, $virtualMethod(MacQuitResponse, cancelQuit, void)},
		{"performQuit", "()V", nullptr, $PUBLIC, $virtualMethod(MacQuitResponse, performQuit, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.eawt.MacQuitResponse",
		"java.lang.Object",
		"java.awt.desktop.QuitResponse",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MacQuitResponse, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacQuitResponse);
	});
	return class$;
}

$Class* MacQuitResponse::class$ = nullptr;

		} // eawt
	} // apple
} // com