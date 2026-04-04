#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace org {
	namespace xml {
		namespace sax {

$Class* ErrorHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorHandler, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorHandler, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.xml.sax.ErrorHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorHandler);
	});
	return class$;
}

$Class* ErrorHandler::class$ = nullptr;

		} // sax
	} // xml
} // org