#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$DraconianErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef ERROR_HANDLER_INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

JAXPValidatorComponent$DraconianErrorHandler* JAXPValidatorComponent$DraconianErrorHandler::ERROR_HANDLER_INSTANCE = nullptr;

void JAXPValidatorComponent$DraconianErrorHandler::init$() {
}

JAXPValidatorComponent$DraconianErrorHandler* JAXPValidatorComponent$DraconianErrorHandler::getInstance() {
	$init(JAXPValidatorComponent$DraconianErrorHandler);
	return JAXPValidatorComponent$DraconianErrorHandler::ERROR_HANDLER_INSTANCE;
}

void JAXPValidatorComponent$DraconianErrorHandler::warning($SAXParseException* e) {
}

void JAXPValidatorComponent$DraconianErrorHandler::error($SAXParseException* e) {
	$throw(e);
}

void JAXPValidatorComponent$DraconianErrorHandler::fatalError($SAXParseException* e) {
	$throw(e);
}

void JAXPValidatorComponent$DraconianErrorHandler::clinit$($Class* clazz) {
	$assignStatic(JAXPValidatorComponent$DraconianErrorHandler::ERROR_HANDLER_INSTANCE, $new(JAXPValidatorComponent$DraconianErrorHandler));
}

JAXPValidatorComponent$DraconianErrorHandler::JAXPValidatorComponent$DraconianErrorHandler() {
}

$Class* JAXPValidatorComponent$DraconianErrorHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ERROR_HANDLER_INSTANCE", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$DraconianErrorHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JAXPValidatorComponent$DraconianErrorHandler, ERROR_HANDLER_INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JAXPValidatorComponent$DraconianErrorHandler, init$, void)},
		{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$DraconianErrorHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$DraconianErrorHandler, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"getInstance", "()Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$DraconianErrorHandler;", nullptr, $PUBLIC | $STATIC, $staticMethod(JAXPValidatorComponent$DraconianErrorHandler, getInstance, JAXPValidatorComponent$DraconianErrorHandler*)},
		{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$DraconianErrorHandler, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$DraconianErrorHandler", "com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent", "DraconianErrorHandler", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$DraconianErrorHandler",
		"java.lang.Object",
		"org.xml.sax.ErrorHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent"
	};
	$loadClass(JAXPValidatorComponent$DraconianErrorHandler, name, initialize, &classInfo$$, JAXPValidatorComponent$DraconianErrorHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JAXPValidatorComponent$DraconianErrorHandler);
	});
	return class$;
}

$Class* JAXPValidatorComponent$DraconianErrorHandler::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com