#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <jcpp.h>

#undef XML_DTD
#undef XML_SCHEMA

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

$String* XMLGrammarDescription::XML_SCHEMA = nullptr;
$String* XMLGrammarDescription::XML_DTD = nullptr;

void XMLGrammarDescription::clinit$($Class* clazz) {
	$assignStatic(XMLGrammarDescription::XML_SCHEMA, "http://www.w3.org/2001/XMLSchema"_s);
	$assignStatic(XMLGrammarDescription::XML_DTD, "http://www.w3.org/TR/REC-xml"_s);
}

$Class* XMLGrammarDescription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XML_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLGrammarDescription, XML_SCHEMA)},
		{"XML_DTD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLGrammarDescription, XML_DTD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getGrammarType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarDescription, getGrammarType, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarDescription",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLGrammarDescription, name, initialize, &classInfo$$, XMLGrammarDescription::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XMLGrammarDescription);
	});
	return class$;
}

$Class* XMLGrammarDescription::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com