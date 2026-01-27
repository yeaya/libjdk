#include <jdk/xml/internal/ErrorHandlerProxy.h>

#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace jdk {
	namespace xml {
		namespace internal {

$MethodInfo _ErrorHandlerProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorHandlerProxy, init$, void)},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerProxy, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerProxy, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerProxy, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ErrorHandlerProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.xml.internal.ErrorHandlerProxy",
	"java.lang.Object",
	"org.xml.sax.ErrorHandler",
	nullptr,
	_ErrorHandlerProxy_MethodInfo_
};

$Object* allocate$ErrorHandlerProxy($Class* clazz) {
	return $of($alloc(ErrorHandlerProxy));
}

void ErrorHandlerProxy::init$() {
}

void ErrorHandlerProxy::warning($SAXParseException* exception) {
	$throw(exception);
}

void ErrorHandlerProxy::error($SAXParseException* exception) {
	$throw(exception);
}

void ErrorHandlerProxy::fatalError($SAXParseException* exception) {
	$throw(exception);
}

ErrorHandlerProxy::ErrorHandlerProxy() {
}

$Class* ErrorHandlerProxy::load$($String* name, bool initialize) {
	$loadClass(ErrorHandlerProxy, name, initialize, &_ErrorHandlerProxy_ClassInfo_, allocate$ErrorHandlerProxy);
	return class$;
}

$Class* ErrorHandlerProxy::class$ = nullptr;

		} // internal
	} // xml
} // jdk