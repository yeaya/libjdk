#include <com/sun/org/apache/xml/internal/security/parser/XMLParser.h>
#include <java/io/InputStream.h>
#include <org/w3c/dom/Document.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace parser {

$Class* XMLParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"parse", "(Ljava/io/InputStream;Z)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLParser, parse, $Document*, $InputStream*, bool), "com.sun.org.apache.xml.internal.security.parser.XMLParserException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.parser.XMLParser",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLParser);
	});
	return class$;
}

$Class* XMLParser::class$ = nullptr;

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com