#include <com/sun/org/apache/xerces/internal/jaxp/validation/DraconianErrorHandler.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef ERROR_HANDLER_INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

DraconianErrorHandler* DraconianErrorHandler::ERROR_HANDLER_INSTANCE = nullptr;

void DraconianErrorHandler::init$() {
}

DraconianErrorHandler* DraconianErrorHandler::getInstance() {
	$init(DraconianErrorHandler);
	return DraconianErrorHandler::ERROR_HANDLER_INSTANCE;
}

void DraconianErrorHandler::warning($SAXParseException* e) {
}

void DraconianErrorHandler::error($SAXParseException* e) {
	$throw(e);
}

void DraconianErrorHandler::fatalError($SAXParseException* e) {
	$throw(e);
}

void DraconianErrorHandler::clinit$($Class* clazz) {
	$assignStatic(DraconianErrorHandler::ERROR_HANDLER_INSTANCE, $new(DraconianErrorHandler));
}

DraconianErrorHandler::DraconianErrorHandler() {
}

$Class* DraconianErrorHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ERROR_HANDLER_INSTANCE", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/DraconianErrorHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DraconianErrorHandler, ERROR_HANDLER_INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DraconianErrorHandler, init$, void)},
		{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DraconianErrorHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DraconianErrorHandler, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"getInstance", "()Lcom/sun/org/apache/xerces/internal/jaxp/validation/DraconianErrorHandler;", nullptr, $PUBLIC | $STATIC, $staticMethod(DraconianErrorHandler, getInstance, DraconianErrorHandler*)},
		{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DraconianErrorHandler, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.validation.DraconianErrorHandler",
		"java.lang.Object",
		"org.xml.sax.ErrorHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DraconianErrorHandler, name, initialize, &classInfo$$, DraconianErrorHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DraconianErrorHandler);
	});
	return class$;
}

$Class* DraconianErrorHandler::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com