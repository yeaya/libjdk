#include <com/sun/org/apache/xml/internal/serializer/ExtendedLexicalHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$Class* ExtendedLexicalHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExtendedLexicalHandler, comment, void, $String*), "org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.serializer.ExtendedLexicalHandler",
		nullptr,
		"org.xml.sax.ext.LexicalHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(ExtendedLexicalHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedLexicalHandler);
	});
	return class$;
}

$Class* ExtendedLexicalHandler::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com