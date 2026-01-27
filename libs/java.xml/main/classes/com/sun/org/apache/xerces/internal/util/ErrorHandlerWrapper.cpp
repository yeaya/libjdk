#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>

#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper$1.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ErrorHandlerWrapper$1 = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper$1;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _ErrorHandlerWrapper_FieldInfo_[] = {
	{"fErrorHandler", "Lorg/xml/sax/ErrorHandler;", nullptr, $PROTECTED, $field(ErrorHandlerWrapper, fErrorHandler)},
	{}
};

$MethodInfo _ErrorHandlerWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorHandlerWrapper, init$, void)},
	{"<init>", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $method(ErrorHandlerWrapper, init$, void, $ErrorHandler*)},
	{"createSAXParseException", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)Lorg/xml/sax/SAXParseException;", nullptr, $PROTECTED | $STATIC, $staticMethod(ErrorHandlerWrapper, createSAXParseException, $SAXParseException*, $XMLParseException*)},
	{"createXMLParseException", "(Lorg/xml/sax/SAXParseException;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;", nullptr, $PROTECTED | $STATIC, $staticMethod(ErrorHandlerWrapper, createXMLParseException, $XMLParseException*, $SAXParseException*)},
	{"createXNIException", "(Lorg/xml/sax/SAXException;)Lcom/sun/org/apache/xerces/internal/xni/XNIException;", nullptr, $PROTECTED | $STATIC, $staticMethod(ErrorHandlerWrapper, createXNIException, $XNIException*, $SAXException*)},
	{"error", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper, error, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"fatalError", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper, fatalError, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper, getErrorHandler, $ErrorHandler*)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper, setErrorHandler, void, $ErrorHandler*)},
	{"warning", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $virtualMethod(ErrorHandlerWrapper, warning, void, $String*, $String*, $XMLParseException*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _ErrorHandlerWrapper_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ErrorHandlerWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler",
	_ErrorHandlerWrapper_FieldInfo_,
	_ErrorHandlerWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_ErrorHandlerWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper$1"
};

$Object* allocate$ErrorHandlerWrapper($Class* clazz) {
	return $of($alloc(ErrorHandlerWrapper));
}

void ErrorHandlerWrapper::init$() {
}

void ErrorHandlerWrapper::init$($ErrorHandler* errorHandler) {
	setErrorHandler(errorHandler);
}

void ErrorHandlerWrapper::setErrorHandler($ErrorHandler* errorHandler) {
	$set(this, fErrorHandler, errorHandler);
}

$ErrorHandler* ErrorHandlerWrapper::getErrorHandler() {
	return this->fErrorHandler;
}

void ErrorHandlerWrapper::warning($String* domain, $String* key, $XMLParseException* exception) {
	$useLocalCurrentObjectStackCache();
	if (this->fErrorHandler != nullptr) {
		$var($SAXParseException, saxException, createSAXParseException(exception));
		try {
			$nc(this->fErrorHandler)->warning(saxException);
		} catch ($SAXParseException& e) {
			$throw($(createXMLParseException(e)));
		} catch ($SAXException& e) {
			$throw($(createXNIException(e)));
		}
	}
}

void ErrorHandlerWrapper::error($String* domain, $String* key, $XMLParseException* exception) {
	$useLocalCurrentObjectStackCache();
	if (this->fErrorHandler != nullptr) {
		$var($SAXParseException, saxException, createSAXParseException(exception));
		try {
			$nc(this->fErrorHandler)->error(saxException);
		} catch ($SAXParseException& e) {
			$throw($(createXMLParseException(e)));
		} catch ($SAXException& e) {
			$throw($(createXNIException(e)));
		}
	}
}

void ErrorHandlerWrapper::fatalError($String* domain, $String* key, $XMLParseException* exception) {
	$useLocalCurrentObjectStackCache();
	if (this->fErrorHandler != nullptr) {
		$var($SAXParseException, saxException, createSAXParseException(exception));
		try {
			$nc(this->fErrorHandler)->fatalError(saxException);
		} catch ($SAXParseException& e) {
			$throw($(createXMLParseException(e)));
		} catch ($SAXException& e) {
			$throw($(createXNIException(e)));
		}
	}
}

$SAXParseException* ErrorHandlerWrapper::createSAXParseException($XMLParseException* exception) {
	$init(ErrorHandlerWrapper);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(exception)->getMessage());
	$var($String, var$1, exception->getPublicId());
	$var($String, var$2, exception->getExpandedSystemId());
	int32_t var$3 = exception->getLineNumber();
	int32_t var$4 = exception->getColumnNumber();
	return $new($SAXParseException, var$0, var$1, var$2, var$3, var$4, $(exception->getException()));
}

$XMLParseException* ErrorHandlerWrapper::createXMLParseException($SAXParseException* exception) {
	$init(ErrorHandlerWrapper);
	$useLocalCurrentObjectStackCache();
	$var($String, fPublicId, $nc(exception)->getPublicId());
	$var($String, fExpandedSystemId, exception->getSystemId());
	int32_t fLineNumber = exception->getLineNumber();
	int32_t fColumnNumber = exception->getColumnNumber();
	$var($XMLLocator, location, $new($ErrorHandlerWrapper$1, fPublicId, fExpandedSystemId, fColumnNumber, fLineNumber));
	return $new($XMLParseException, location, $(exception->getMessage()), exception);
}

$XNIException* ErrorHandlerWrapper::createXNIException($SAXException* exception) {
	$init(ErrorHandlerWrapper);
	return $new($XNIException, $($nc(exception)->getMessage()), exception);
}

ErrorHandlerWrapper::ErrorHandlerWrapper() {
}

$Class* ErrorHandlerWrapper::load$($String* name, bool initialize) {
	$loadClass(ErrorHandlerWrapper, name, initialize, &_ErrorHandlerWrapper_ClassInfo_, allocate$ErrorHandlerWrapper);
	return class$;
}

$Class* ErrorHandlerWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com