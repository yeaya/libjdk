#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerProxy.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

void ErrorHandlerProxy::init$() {
}

void ErrorHandlerProxy::error($SAXParseException* e) {
	$useLocalObjectStack();
	$var($XMLErrorHandler, eh, getErrorHandler());
	if ($instanceOf($ErrorHandlerWrapper, eh)) {
		$nc($cast($ErrorHandlerWrapper, eh)->fErrorHandler)->error(e);
	} else {
		$nc(eh)->error(""_s, ""_s, $($ErrorHandlerWrapper::createXMLParseException(e)));
	}
}

void ErrorHandlerProxy::fatalError($SAXParseException* e) {
	$useLocalObjectStack();
	$var($XMLErrorHandler, eh, getErrorHandler());
	if ($instanceOf($ErrorHandlerWrapper, eh)) {
		$nc($cast($ErrorHandlerWrapper, eh)->fErrorHandler)->fatalError(e);
	} else {
		$nc(eh)->fatalError(""_s, ""_s, $($ErrorHandlerWrapper::createXMLParseException(e)));
	}
}

void ErrorHandlerProxy::warning($SAXParseException* e) {
	$useLocalObjectStack();
	$var($XMLErrorHandler, eh, getErrorHandler());
	if ($instanceOf($ErrorHandlerWrapper, eh)) {
		$nc($cast($ErrorHandlerWrapper, eh)->fErrorHandler)->warning(e);
	} else {
		$nc(eh)->warning(""_s, ""_s, $($ErrorHandlerWrapper::createXMLParseException(e)));
	}
}

ErrorHandlerProxy::ErrorHandlerProxy() {
}

$Class* ErrorHandlerProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorHandlerProxy, init$, void)},
		{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerProxy, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerProxy, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ErrorHandlerProxy, getErrorHandler, $XMLErrorHandler*)},
		{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerProxy, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.util.ErrorHandlerProxy",
		"java.lang.Object",
		"org.xml.sax.ErrorHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorHandlerProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorHandlerProxy);
	});
	return class$;
}

$Class* ErrorHandlerProxy::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com