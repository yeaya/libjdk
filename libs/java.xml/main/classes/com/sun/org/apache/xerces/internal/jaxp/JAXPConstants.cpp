#include <com/sun/org/apache/xerces/internal/jaxp/JAXPConstants.h>

#include <jcpp.h>

#undef JAXP_SCHEMA_LANGUAGE
#undef JAXP_SCHEMA_SOURCE
#undef W3C_XML_SCHEMA

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _JAXPConstants_FieldInfo_[] = {
	{"JAXP_SCHEMA_LANGUAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JAXPConstants, JAXP_SCHEMA_LANGUAGE)},
	{"W3C_XML_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JAXPConstants, W3C_XML_SCHEMA)},
	{"JAXP_SCHEMA_SOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JAXPConstants, JAXP_SCHEMA_SOURCE)},
	{}
};

$ClassInfo _JAXPConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPConstants",
	nullptr,
	nullptr,
	_JAXPConstants_FieldInfo_
};

$Object* allocate$JAXPConstants($Class* clazz) {
	return $of($alloc(JAXPConstants));
}

$String* JAXPConstants::JAXP_SCHEMA_LANGUAGE = nullptr;
$String* JAXPConstants::W3C_XML_SCHEMA = nullptr;
$String* JAXPConstants::JAXP_SCHEMA_SOURCE = nullptr;

void clinit$JAXPConstants($Class* class$) {
	$assignStatic(JAXPConstants::JAXP_SCHEMA_LANGUAGE, "http://java.sun.com/xml/jaxp/properties/schemaLanguage"_s);
	$assignStatic(JAXPConstants::W3C_XML_SCHEMA, "http://www.w3.org/2001/XMLSchema"_s);
	$assignStatic(JAXPConstants::JAXP_SCHEMA_SOURCE, "http://java.sun.com/xml/jaxp/properties/schemaSource"_s);
}

$Class* JAXPConstants::load$($String* name, bool initialize) {
	$loadClass(JAXPConstants, name, initialize, &_JAXPConstants_ClassInfo_, clinit$JAXPConstants, allocate$JAXPConstants);
	return class$;
}

$Class* JAXPConstants::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com