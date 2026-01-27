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

$FieldInfo _XMLGrammarDescription_FieldInfo_[] = {
	{"XML_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLGrammarDescription, XML_SCHEMA)},
	{"XML_DTD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLGrammarDescription, XML_DTD)},
	{}
};

$MethodInfo _XMLGrammarDescription_MethodInfo_[] = {
	{"getGrammarType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarDescription, getGrammarType, $String*)},
	{}
};

$ClassInfo _XMLGrammarDescription_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarDescription",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier",
	_XMLGrammarDescription_FieldInfo_,
	_XMLGrammarDescription_MethodInfo_
};

$Object* allocate$XMLGrammarDescription($Class* clazz) {
	return $of($alloc(XMLGrammarDescription));
}

$String* XMLGrammarDescription::XML_SCHEMA = nullptr;
$String* XMLGrammarDescription::XML_DTD = nullptr;

void clinit$XMLGrammarDescription($Class* class$) {
	$assignStatic(XMLGrammarDescription::XML_SCHEMA, "http://www.w3.org/2001/XMLSchema"_s);
	$assignStatic(XMLGrammarDescription::XML_DTD, "http://www.w3.org/TR/REC-xml"_s);
}

$Class* XMLGrammarDescription::load$($String* name, bool initialize) {
	$loadClass(XMLGrammarDescription, name, initialize, &_XMLGrammarDescription_ClassInfo_, clinit$XMLGrammarDescription, allocate$XMLGrammarDescription);
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