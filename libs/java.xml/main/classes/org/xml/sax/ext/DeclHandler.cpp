#include <org/xml/sax/ext/DeclHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$Class* DeclHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclHandler, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclHandler, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
		{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclHandler, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclHandler, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.xml.sax.ext.DeclHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DeclHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeclHandler);
	});
	return class$;
}

$Class* DeclHandler::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org