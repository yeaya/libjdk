#include <javax/xml/XMLConstants.h>

#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_SCHEMA
#undef ACCESS_EXTERNAL_STYLESHEET
#undef DEFAULT_NS_PREFIX
#undef FEATURE_SECURE_PROCESSING
#undef NULL_NS_URI
#undef RELAXNG_NS_URI
#undef USE_CATALOG
#undef W3C_XML_SCHEMA_INSTANCE_NS_URI
#undef W3C_XML_SCHEMA_NS_URI
#undef W3C_XPATH_DATATYPE_NS_URI
#undef XMLNS_ATTRIBUTE
#undef XMLNS_ATTRIBUTE_NS_URI
#undef XML_DTD_NS_URI
#undef XML_NS_PREFIX
#undef XML_NS_URI

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {

$FieldInfo _XMLConstants_FieldInfo_[] = {
	{"NULL_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, NULL_NS_URI)},
	{"DEFAULT_NS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, DEFAULT_NS_PREFIX)},
	{"XML_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, XML_NS_URI)},
	{"XML_NS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, XML_NS_PREFIX)},
	{"XMLNS_ATTRIBUTE_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, XMLNS_ATTRIBUTE_NS_URI)},
	{"XMLNS_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, XMLNS_ATTRIBUTE)},
	{"W3C_XML_SCHEMA_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, W3C_XML_SCHEMA_NS_URI)},
	{"W3C_XML_SCHEMA_INSTANCE_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, W3C_XML_SCHEMA_INSTANCE_NS_URI)},
	{"W3C_XPATH_DATATYPE_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, W3C_XPATH_DATATYPE_NS_URI)},
	{"XML_DTD_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, XML_DTD_NS_URI)},
	{"RELAXNG_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, RELAXNG_NS_URI)},
	{"FEATURE_SECURE_PROCESSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, FEATURE_SECURE_PROCESSING)},
	{"ACCESS_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, ACCESS_EXTERNAL_DTD)},
	{"ACCESS_EXTERNAL_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, ACCESS_EXTERNAL_SCHEMA)},
	{"ACCESS_EXTERNAL_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, ACCESS_EXTERNAL_STYLESHEET)},
	{"USE_CATALOG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLConstants, USE_CATALOG)},
	{}
};

$MethodInfo _XMLConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(XMLConstants, init$, void)},
	{}
};

$ClassInfo _XMLConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.XMLConstants",
	"java.lang.Object",
	nullptr,
	_XMLConstants_FieldInfo_,
	_XMLConstants_MethodInfo_
};

$Object* allocate$XMLConstants($Class* clazz) {
	return $of($alloc(XMLConstants));
}

$String* XMLConstants::NULL_NS_URI = nullptr;
$String* XMLConstants::DEFAULT_NS_PREFIX = nullptr;
$String* XMLConstants::XML_NS_URI = nullptr;
$String* XMLConstants::XML_NS_PREFIX = nullptr;
$String* XMLConstants::XMLNS_ATTRIBUTE_NS_URI = nullptr;
$String* XMLConstants::XMLNS_ATTRIBUTE = nullptr;
$String* XMLConstants::W3C_XML_SCHEMA_NS_URI = nullptr;
$String* XMLConstants::W3C_XML_SCHEMA_INSTANCE_NS_URI = nullptr;
$String* XMLConstants::W3C_XPATH_DATATYPE_NS_URI = nullptr;
$String* XMLConstants::XML_DTD_NS_URI = nullptr;
$String* XMLConstants::RELAXNG_NS_URI = nullptr;
$String* XMLConstants::FEATURE_SECURE_PROCESSING = nullptr;
$String* XMLConstants::ACCESS_EXTERNAL_DTD = nullptr;
$String* XMLConstants::ACCESS_EXTERNAL_SCHEMA = nullptr;
$String* XMLConstants::ACCESS_EXTERNAL_STYLESHEET = nullptr;
$String* XMLConstants::USE_CATALOG = nullptr;

void XMLConstants::init$() {
}

XMLConstants::XMLConstants() {
}

void clinit$XMLConstants($Class* class$) {
	$assignStatic(XMLConstants::NULL_NS_URI, ""_s);
	$assignStatic(XMLConstants::DEFAULT_NS_PREFIX, ""_s);
	$assignStatic(XMLConstants::XML_NS_URI, "http://www.w3.org/XML/1998/namespace"_s);
	$assignStatic(XMLConstants::XML_NS_PREFIX, "xml"_s);
	$assignStatic(XMLConstants::XMLNS_ATTRIBUTE_NS_URI, "http://www.w3.org/2000/xmlns/"_s);
	$assignStatic(XMLConstants::XMLNS_ATTRIBUTE, "xmlns"_s);
	$assignStatic(XMLConstants::W3C_XML_SCHEMA_NS_URI, "http://www.w3.org/2001/XMLSchema"_s);
	$assignStatic(XMLConstants::W3C_XML_SCHEMA_INSTANCE_NS_URI, "http://www.w3.org/2001/XMLSchema-instance"_s);
	$assignStatic(XMLConstants::W3C_XPATH_DATATYPE_NS_URI, "http://www.w3.org/2003/11/xpath-datatypes"_s);
	$assignStatic(XMLConstants::XML_DTD_NS_URI, "http://www.w3.org/TR/REC-xml"_s);
	$assignStatic(XMLConstants::RELAXNG_NS_URI, "http://relaxng.org/ns/structure/1.0"_s);
	$assignStatic(XMLConstants::FEATURE_SECURE_PROCESSING, "http://javax.xml.XMLConstants/feature/secure-processing"_s);
	$assignStatic(XMLConstants::ACCESS_EXTERNAL_DTD, "http://javax.xml.XMLConstants/property/accessExternalDTD"_s);
	$assignStatic(XMLConstants::ACCESS_EXTERNAL_SCHEMA, "http://javax.xml.XMLConstants/property/accessExternalSchema"_s);
	$assignStatic(XMLConstants::ACCESS_EXTERNAL_STYLESHEET, "http://javax.xml.XMLConstants/property/accessExternalStylesheet"_s);
	$assignStatic(XMLConstants::USE_CATALOG, "http://javax.xml.XMLConstants/feature/useCatalog"_s);
}

$Class* XMLConstants::load$($String* name, bool initialize) {
	$loadClass(XMLConstants, name, initialize, &_XMLConstants_ClassInfo_, clinit$XMLConstants, allocate$XMLConstants);
	return class$;
}

$Class* XMLConstants::class$ = nullptr;

	} // xml
} // javax