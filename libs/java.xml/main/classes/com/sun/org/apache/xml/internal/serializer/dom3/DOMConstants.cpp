#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMConstants.h>

#include <jcpp.h>

#undef DOM3_DEFAULT_FALSE
#undef DOM3_DEFAULT_TRUE
#undef DOM3_EXPLICIT_FALSE
#undef DOM3_EXPLICIT_TRUE
#undef DOM3_REC_URL
#undef DOM_CANONICAL_FORM
#undef DOM_CDATA_SECTIONS
#undef DOM_CHECK_CHAR_NORMALIZATION
#undef DOM_COMMENTS
#undef DOM_DATATYPE_NORMALIZATION
#undef DOM_DISCARD_DEFAULT_CONTENT
#undef DOM_ELEMENT_CONTENT_WHITESPACE
#undef DOM_ENTITIES
#undef DOM_ERROR_HANDLER
#undef DOM_EXCEPTION_FEATURE_NOT_FOUND
#undef DOM_EXCEPTION_FEATURE_NOT_SUPPORTED
#undef DOM_FORMAT_PRETTY_PRINT
#undef DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS
#undef DOM_INFOSET
#undef DOM_LSEXCEPTION_SERIALIZER_ERR
#undef DOM_NAMESPACES
#undef DOM_NAMESPACE_DECLARATIONS
#undef DOM_NORMALIZE_CHARACTERS
#undef DOM_SCHEMA_LOCATION
#undef DOM_SCHEMA_TYPE
#undef DOM_SPLIT_CDATA
#undef DOM_VALIDATE
#undef DOM_VALIDATE_IF_SCHEMA
#undef DOM_WELLFORMED
#undef DOM_XMLDECL
#undef NS_IS_STANDALONE
#undef ORACLE_URL
#undef S_DOM3_PROPERTIES_NS
#undef S_JDK_PROPERTIES_NS
#undef S_XERCES_PROPERTIES_NS
#undef S_XML_VERSION
#undef S_XSL_OUTPUT_ENCODING
#undef S_XSL_OUTPUT_INDENT
#undef S_XSL_OUTPUT_OMIT_XML_DECL
#undef S_XSL_VALUE_ENTITIES
#undef XERCES_URL
#undef XMLNS_PREFIX
#undef XMLNS_URI

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

$FieldInfo _DOMConstants_FieldInfo_[] = {
	{"DOM3_REC_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM3_REC_URL)},
	{"XERCES_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, XERCES_URL)},
	{"ORACLE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, ORACLE_URL)},
	{"S_DOM3_PROPERTIES_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, S_DOM3_PROPERTIES_NS)},
	{"S_XERCES_PROPERTIES_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, S_XERCES_PROPERTIES_NS)},
	{"S_JDK_PROPERTIES_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, S_JDK_PROPERTIES_NS)},
	{"XMLNS_URI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMConstants, XMLNS_URI)},
	{"XMLNS_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMConstants, XMLNS_PREFIX)},
	{"DOM_CANONICAL_FORM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_CANONICAL_FORM)},
	{"DOM_CDATA_SECTIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_CDATA_SECTIONS)},
	{"DOM_CHECK_CHAR_NORMALIZATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_CHECK_CHAR_NORMALIZATION)},
	{"DOM_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_COMMENTS)},
	{"DOM_DATATYPE_NORMALIZATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_DATATYPE_NORMALIZATION)},
	{"DOM_ELEMENT_CONTENT_WHITESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_ELEMENT_CONTENT_WHITESPACE)},
	{"DOM_ENTITIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_ENTITIES)},
	{"DOM_INFOSET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_INFOSET)},
	{"DOM_NAMESPACES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_NAMESPACES)},
	{"DOM_NAMESPACE_DECLARATIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_NAMESPACE_DECLARATIONS)},
	{"DOM_NORMALIZE_CHARACTERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_NORMALIZE_CHARACTERS)},
	{"DOM_SPLIT_CDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_SPLIT_CDATA)},
	{"DOM_VALIDATE_IF_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_VALIDATE_IF_SCHEMA)},
	{"DOM_VALIDATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_VALIDATE)},
	{"DOM_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_WELLFORMED)},
	{"DOM_DISCARD_DEFAULT_CONTENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_DISCARD_DEFAULT_CONTENT)},
	{"DOM_FORMAT_PRETTY_PRINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_FORMAT_PRETTY_PRINT)},
	{"DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)},
	{"DOM_XMLDECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_XMLDECL)},
	{"DOM_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_ERROR_HANDLER)},
	{"DOM_SCHEMA_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_SCHEMA_TYPE)},
	{"DOM_SCHEMA_LOCATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_SCHEMA_LOCATION)},
	{"S_XSL_OUTPUT_INDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, S_XSL_OUTPUT_INDENT)},
	{"S_XSL_OUTPUT_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, S_XSL_OUTPUT_ENCODING)},
	{"S_XSL_OUTPUT_OMIT_XML_DECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, S_XSL_OUTPUT_OMIT_XML_DECL)},
	{"S_XML_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, S_XML_VERSION)},
	{"NS_IS_STANDALONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, NS_IS_STANDALONE)},
	{"S_XSL_VALUE_ENTITIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, S_XSL_VALUE_ENTITIES)},
	{"DOM3_EXPLICIT_TRUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM3_EXPLICIT_TRUE)},
	{"DOM3_DEFAULT_TRUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM3_DEFAULT_TRUE)},
	{"DOM3_EXPLICIT_FALSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM3_EXPLICIT_FALSE)},
	{"DOM3_DEFAULT_FALSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM3_DEFAULT_FALSE)},
	{"DOM_EXCEPTION_FEATURE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_EXCEPTION_FEATURE_NOT_FOUND)},
	{"DOM_EXCEPTION_FEATURE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_EXCEPTION_FEATURE_NOT_SUPPORTED)},
	{"DOM_LSEXCEPTION_SERIALIZER_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMConstants, DOM_LSEXCEPTION_SERIALIZER_ERR)},
	{}
};

$MethodInfo _DOMConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMConstants, init$, void)},
	{}
};

$ClassInfo _DOMConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.dom3.DOMConstants",
	"java.lang.Object",
	nullptr,
	_DOMConstants_FieldInfo_,
	_DOMConstants_MethodInfo_
};

$Object* allocate$DOMConstants($Class* clazz) {
	return $of($alloc(DOMConstants));
}

$String* DOMConstants::DOM3_REC_URL = nullptr;
$String* DOMConstants::XERCES_URL = nullptr;
$String* DOMConstants::ORACLE_URL = nullptr;
$String* DOMConstants::S_DOM3_PROPERTIES_NS = nullptr;
$String* DOMConstants::S_XERCES_PROPERTIES_NS = nullptr;
$String* DOMConstants::S_JDK_PROPERTIES_NS = nullptr;
$String* DOMConstants::XMLNS_URI = nullptr;
$String* DOMConstants::XMLNS_PREFIX = nullptr;
$String* DOMConstants::DOM_CANONICAL_FORM = nullptr;
$String* DOMConstants::DOM_CDATA_SECTIONS = nullptr;
$String* DOMConstants::DOM_CHECK_CHAR_NORMALIZATION = nullptr;
$String* DOMConstants::DOM_COMMENTS = nullptr;
$String* DOMConstants::DOM_DATATYPE_NORMALIZATION = nullptr;
$String* DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE = nullptr;
$String* DOMConstants::DOM_ENTITIES = nullptr;
$String* DOMConstants::DOM_INFOSET = nullptr;
$String* DOMConstants::DOM_NAMESPACES = nullptr;
$String* DOMConstants::DOM_NAMESPACE_DECLARATIONS = nullptr;
$String* DOMConstants::DOM_NORMALIZE_CHARACTERS = nullptr;
$String* DOMConstants::DOM_SPLIT_CDATA = nullptr;
$String* DOMConstants::DOM_VALIDATE_IF_SCHEMA = nullptr;
$String* DOMConstants::DOM_VALIDATE = nullptr;
$String* DOMConstants::DOM_WELLFORMED = nullptr;
$String* DOMConstants::DOM_DISCARD_DEFAULT_CONTENT = nullptr;
$String* DOMConstants::DOM_FORMAT_PRETTY_PRINT = nullptr;
$String* DOMConstants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS = nullptr;
$String* DOMConstants::DOM_XMLDECL = nullptr;
$String* DOMConstants::DOM_ERROR_HANDLER = nullptr;
$String* DOMConstants::DOM_SCHEMA_TYPE = nullptr;
$String* DOMConstants::DOM_SCHEMA_LOCATION = nullptr;
$String* DOMConstants::S_XSL_OUTPUT_INDENT = nullptr;
$String* DOMConstants::S_XSL_OUTPUT_ENCODING = nullptr;
$String* DOMConstants::S_XSL_OUTPUT_OMIT_XML_DECL = nullptr;
$String* DOMConstants::S_XML_VERSION = nullptr;
$String* DOMConstants::NS_IS_STANDALONE = nullptr;
$String* DOMConstants::S_XSL_VALUE_ENTITIES = nullptr;
$String* DOMConstants::DOM3_EXPLICIT_TRUE = nullptr;
$String* DOMConstants::DOM3_DEFAULT_TRUE = nullptr;
$String* DOMConstants::DOM3_EXPLICIT_FALSE = nullptr;
$String* DOMConstants::DOM3_DEFAULT_FALSE = nullptr;
$String* DOMConstants::DOM_EXCEPTION_FEATURE_NOT_FOUND = nullptr;
$String* DOMConstants::DOM_EXCEPTION_FEATURE_NOT_SUPPORTED = nullptr;
$String* DOMConstants::DOM_LSEXCEPTION_SERIALIZER_ERR = nullptr;

void DOMConstants::init$() {
}

DOMConstants::DOMConstants() {
}

void clinit$DOMConstants($Class* class$) {
	$assignStatic(DOMConstants::DOM3_REC_URL, "http://www.w3.org/TR/DOM-Level-3-LS"_s);
	$assignStatic(DOMConstants::XERCES_URL, "http://xml.apache.org/xerces-2j"_s);
	$assignStatic(DOMConstants::ORACLE_URL, "http://www.oracle.com/xml"_s);
	$assignStatic(DOMConstants::S_DOM3_PROPERTIES_NS, $str({"{"_s, DOMConstants::DOM3_REC_URL, "}"_s}));
	$assignStatic(DOMConstants::S_XERCES_PROPERTIES_NS, $str({"{"_s, DOMConstants::XERCES_URL, "}"_s}));
	$assignStatic(DOMConstants::S_JDK_PROPERTIES_NS, $str({"{"_s, DOMConstants::ORACLE_URL, "}"_s}));
	$assignStatic(DOMConstants::XMLNS_URI, "http://www.w3.org/2000/xmlns/"_s);
	$assignStatic(DOMConstants::XMLNS_PREFIX, "xmlns"_s);
	$assignStatic(DOMConstants::DOM_CANONICAL_FORM, "canonical-form"_s);
	$assignStatic(DOMConstants::DOM_CDATA_SECTIONS, "cdata-sections"_s);
	$assignStatic(DOMConstants::DOM_CHECK_CHAR_NORMALIZATION, "check-character-normalization"_s);
	$assignStatic(DOMConstants::DOM_COMMENTS, "comments"_s);
	$assignStatic(DOMConstants::DOM_DATATYPE_NORMALIZATION, "datatype-normalization"_s);
	$assignStatic(DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE, "element-content-whitespace"_s);
	$assignStatic(DOMConstants::DOM_ENTITIES, "entities"_s);
	$assignStatic(DOMConstants::DOM_INFOSET, "infoset"_s);
	$assignStatic(DOMConstants::DOM_NAMESPACES, "namespaces"_s);
	$assignStatic(DOMConstants::DOM_NAMESPACE_DECLARATIONS, "namespace-declarations"_s);
	$assignStatic(DOMConstants::DOM_NORMALIZE_CHARACTERS, "normalize-characters"_s);
	$assignStatic(DOMConstants::DOM_SPLIT_CDATA, "split-cdata-sections"_s);
	$assignStatic(DOMConstants::DOM_VALIDATE_IF_SCHEMA, "validate-if-schema"_s);
	$assignStatic(DOMConstants::DOM_VALIDATE, "validate"_s);
	$assignStatic(DOMConstants::DOM_WELLFORMED, "well-formed"_s);
	$assignStatic(DOMConstants::DOM_DISCARD_DEFAULT_CONTENT, "discard-default-content"_s);
	$assignStatic(DOMConstants::DOM_FORMAT_PRETTY_PRINT, "format-pretty-print"_s);
	$assignStatic(DOMConstants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS, "ignore-unknown-character-denormalizations"_s);
	$assignStatic(DOMConstants::DOM_XMLDECL, "xml-declaration"_s);
	$assignStatic(DOMConstants::DOM_ERROR_HANDLER, "error-handler"_s);
	$assignStatic(DOMConstants::DOM_SCHEMA_TYPE, "schema-type"_s);
	$assignStatic(DOMConstants::DOM_SCHEMA_LOCATION, "schema-location"_s);
	$assignStatic(DOMConstants::S_XSL_OUTPUT_INDENT, "indent"_s);
	$assignStatic(DOMConstants::S_XSL_OUTPUT_ENCODING, "encoding"_s);
	$assignStatic(DOMConstants::S_XSL_OUTPUT_OMIT_XML_DECL, "omit-xml-declaration"_s);
	$assignStatic(DOMConstants::S_XML_VERSION, "xml-version"_s);
	$assignStatic(DOMConstants::NS_IS_STANDALONE, $str({DOMConstants::S_JDK_PROPERTIES_NS, "isStandalone"_s}));
	$assignStatic(DOMConstants::S_XSL_VALUE_ENTITIES, "com/sun/org/apache/xml/internal/serializer/XMLEntities"_s);
	$assignStatic(DOMConstants::DOM3_EXPLICIT_TRUE, "explicit:yes"_s);
	$assignStatic(DOMConstants::DOM3_DEFAULT_TRUE, "default:yes"_s);
	$assignStatic(DOMConstants::DOM3_EXPLICIT_FALSE, "explicit:no"_s);
	$assignStatic(DOMConstants::DOM3_DEFAULT_FALSE, "default:no"_s);
	$assignStatic(DOMConstants::DOM_EXCEPTION_FEATURE_NOT_FOUND, "FEATURE_NOT_FOUND"_s);
	$assignStatic(DOMConstants::DOM_EXCEPTION_FEATURE_NOT_SUPPORTED, "FEATURE_NOT_SUPPORTED"_s);
	$assignStatic(DOMConstants::DOM_LSEXCEPTION_SERIALIZER_ERR, "SERIALIZER_ERROR"_s);
}

$Class* DOMConstants::load$($String* name, bool initialize) {
	$loadClass(DOMConstants, name, initialize, &_DOMConstants_ClassInfo_, clinit$DOMConstants, allocate$DOMConstants);
	return class$;
}

$Class* DOMConstants::class$ = nullptr;

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com