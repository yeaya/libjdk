#include <org/xml/sax/DTDHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {

$Class* DTDHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTDHandler, notationDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTDHandler, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.xml.sax.DTDHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DTDHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTDHandler);
	});
	return class$;
}

$Class* DTDHandler::class$ = nullptr;

		} // sax
	} // xml
} // org