#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/DOMError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMError = ::org::w3c::dom::DOMError;

namespace org {
	namespace w3c {
		namespace dom {

$Class* DOMErrorHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handleError", "(Lorg/w3c/dom/DOMError;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMErrorHandler, handleError, bool, $DOMError*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.DOMErrorHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMErrorHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMErrorHandler);
	});
	return class$;
}

$Class* DOMErrorHandler::class$ = nullptr;

		} // dom
	} // w3c
} // org