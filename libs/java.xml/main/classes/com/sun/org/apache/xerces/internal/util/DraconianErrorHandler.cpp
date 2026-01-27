#include <com/sun/org/apache/xerces/internal/util/DraconianErrorHandler.h>

#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _DraconianErrorHandler_FieldInfo_[] = {
	{"theInstance", "Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DraconianErrorHandler, theInstance)},
	{}
};

$MethodInfo _DraconianErrorHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DraconianErrorHandler, init$, void)},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DraconianErrorHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DraconianErrorHandler, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DraconianErrorHandler, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _DraconianErrorHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.DraconianErrorHandler",
	"java.lang.Object",
	"org.xml.sax.ErrorHandler",
	_DraconianErrorHandler_FieldInfo_,
	_DraconianErrorHandler_MethodInfo_
};

$Object* allocate$DraconianErrorHandler($Class* clazz) {
	return $of($alloc(DraconianErrorHandler));
}

$ErrorHandler* DraconianErrorHandler::theInstance = nullptr;

void DraconianErrorHandler::init$() {
}

void DraconianErrorHandler::error($SAXParseException* e) {
	$throw(e);
}

void DraconianErrorHandler::fatalError($SAXParseException* e) {
	$throw(e);
}

void DraconianErrorHandler::warning($SAXParseException* e) {
}

void clinit$DraconianErrorHandler($Class* class$) {
	$assignStatic(DraconianErrorHandler::theInstance, $new(DraconianErrorHandler));
}

DraconianErrorHandler::DraconianErrorHandler() {
}

$Class* DraconianErrorHandler::load$($String* name, bool initialize) {
	$loadClass(DraconianErrorHandler, name, initialize, &_DraconianErrorHandler_ClassInfo_, clinit$DraconianErrorHandler, allocate$DraconianErrorHandler);
	return class$;
}

$Class* DraconianErrorHandler::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com