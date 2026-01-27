#include <org/w3c/dom/DOMErrorHandler.h>

#include <org/w3c/dom/DOMError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMError = ::org::w3c::dom::DOMError;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DOMErrorHandler_MethodInfo_[] = {
	{"handleError", "(Lorg/w3c/dom/DOMError;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMErrorHandler, handleError, bool, $DOMError*)},
	{}
};

$ClassInfo _DOMErrorHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DOMErrorHandler",
	nullptr,
	nullptr,
	nullptr,
	_DOMErrorHandler_MethodInfo_
};

$Object* allocate$DOMErrorHandler($Class* clazz) {
	return $of($alloc(DOMErrorHandler));
}

$Class* DOMErrorHandler::load$($String* name, bool initialize) {
	$loadClass(DOMErrorHandler, name, initialize, &_DOMErrorHandler_ClassInfo_, allocate$DOMErrorHandler);
	return class$;
}

$Class* DOMErrorHandler::class$ = nullptr;

		} // dom
	} // w3c
} // org