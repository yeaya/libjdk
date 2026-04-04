#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$Class* LexicalHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"comment", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LexicalHandler, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
		{"endCDATA", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LexicalHandler, endCDATA, void), "org.xml.sax.SAXException"},
		{"endDTD", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LexicalHandler, endDTD, void), "org.xml.sax.SAXException"},
		{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LexicalHandler, endEntity, void, $String*), "org.xml.sax.SAXException"},
		{"startCDATA", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LexicalHandler, startCDATA, void), "org.xml.sax.SAXException"},
		{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LexicalHandler, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LexicalHandler, startEntity, void, $String*), "org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.xml.sax.ext.LexicalHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LexicalHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LexicalHandler);
	});
	return class$;
}

$Class* LexicalHandler::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org