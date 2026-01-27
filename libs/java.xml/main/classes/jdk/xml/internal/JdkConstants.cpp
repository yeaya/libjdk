#include <jdk/xml/internal/JdkConstants.h>

#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_ALL
#undef CDATA_CHUNK_SIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef ELEMENT_ATTRIBUTE_LIMIT
#undef ENTITY_EXPANSION_LIMIT
#undef EXTERNAL_ACCESS_DEFAULT
#undef EXTERNAL_ACCESS_DEFAULT_FSP
#undef FEATURE_FALSE
#undef FEATURE_TRUE
#undef FQ_IS_STANDALONE
#undef JDK_DEBUG_LIMIT
#undef JDK_ELEMENT_ATTRIBUTE_LIMIT
#undef JDK_ENTITY_COUNT_INFO
#undef JDK_ENTITY_EXPANSION_LIMIT
#undef JDK_ENTITY_REPLACEMENT_LIMIT
#undef JDK_EXTENSION_CLASSLOADER
#undef JDK_EXT_CLASSLOADER
#undef JDK_GENERAL_ENTITY_SIZE_LIMIT
#undef JDK_IS_STANDALONE
#undef JDK_MAX_ELEMENT_DEPTH
#undef JDK_MAX_OCCUR_LIMIT
#undef JDK_PARAMETER_ENTITY_SIZE_LIMIT
#undef JDK_TOTAL_ENTITY_SIZE_LIMIT
#undef JDK_XML_NAME_LIMIT
#undef JDK_YES
#undef MAX_OCCUR_LIMIT
#undef ORACLE_ENABLE_EXTENSION_FUNCTION
#undef ORACLE_FEATURE_SERVICE_MECHANISM
#undef ORACLE_IS_STANDALONE
#undef ORACLE_JAXP_PROPERTY_PREFIX
#undef OVERRIDE_PARSER
#undef OVERRIDE_PARSER_DEFAULT
#undef RESET_SYMBOL_TABLE
#undef RESET_SYMBOL_TABLE_DEFAULT
#undef SECURITY_MANAGER
#undef SP_ACCESS_EXTERNAL_DTD
#undef SP_ACCESS_EXTERNAL_SCHEMA
#undef SP_ACCESS_EXTERNAL_STYLESHEET
#undef SP_ELEMENT_ATTRIBUTE_LIMIT
#undef SP_ENABLE_EXTENSION_FUNCTION
#undef SP_ENABLE_EXTENSION_FUNCTION_SPEC
#undef SP_ENTITY_EXPANSION_LIMIT
#undef SP_ENTITY_REPLACEMENT_LIMIT
#undef SP_GENERAL_ENTITY_SIZE_LIMIT
#undef SP_IS_STANDALONE
#undef SP_MAX_ELEMENT_DEPTH
#undef SP_MAX_OCCUR_LIMIT
#undef SP_PARAMETER_ENTITY_SIZE_LIMIT
#undef SP_TOTAL_ENTITY_SIZE_LIMIT
#undef SP_XML_NAME_LIMIT
#undef SP_XSLTC_IS_STANDALONE
#undef S_IS_STANDALONE
#undef XML_SECURITY_PROPERTY_MANAGER

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace jdk {
	namespace xml {
		namespace internal {

$NamedAttribute JdkConstants_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_ORACLE_JAXP_PROPERTY_PREFIX[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$0},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$1[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_ENTITY_EXPANSION_LIMIT[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$1},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$2[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_ELEMENT_ATTRIBUTE_LIMIT[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$2},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$3[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_MAX_OCCUR_LIMIT[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$3},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$4[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_TOTAL_ENTITY_SIZE_LIMIT[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$4},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$5[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_GENERAL_ENTITY_SIZE_LIMIT[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$5},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$6[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_ENTITY_REPLACEMENT_LIMIT[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$6},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$7[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_PARAMETER_ENTITY_SIZE_LIMIT[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$7},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$8[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_XML_NAME_LIMIT[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$8},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$9[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_MAX_ELEMENT_DEPTH[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$9},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$10[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_ENTITY_COUNT_INFO[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$10},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$11[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_ORACLE_FEATURE_SERVICE_MECHANISM[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$11},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$12[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_FQ_IS_STANDALONE[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$12},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$13[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_ORACLE_IS_STANDALONE[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$13},
	{}
};

$NamedAttribute JdkConstants_Attribute_var$14[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _JdkConstants_FieldAnnotations_JDK_IS_STANDALONE[] = {
	{"Ljava/lang/Deprecated;", JdkConstants_Attribute_var$14},
	{}
};

$FieldInfo _JdkConstants_FieldInfo_[] = {
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SECURITY_MANAGER)},
	{"ORACLE_JAXP_PROPERTY_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, ORACLE_JAXP_PROPERTY_PREFIX), _JdkConstants_FieldAnnotations_ORACLE_JAXP_PROPERTY_PREFIX},
	{"JDK_ENTITY_EXPANSION_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_ENTITY_EXPANSION_LIMIT), _JdkConstants_FieldAnnotations_JDK_ENTITY_EXPANSION_LIMIT},
	{"JDK_ELEMENT_ATTRIBUTE_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_ELEMENT_ATTRIBUTE_LIMIT), _JdkConstants_FieldAnnotations_JDK_ELEMENT_ATTRIBUTE_LIMIT},
	{"JDK_MAX_OCCUR_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_MAX_OCCUR_LIMIT), _JdkConstants_FieldAnnotations_JDK_MAX_OCCUR_LIMIT},
	{"JDK_TOTAL_ENTITY_SIZE_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_TOTAL_ENTITY_SIZE_LIMIT), _JdkConstants_FieldAnnotations_JDK_TOTAL_ENTITY_SIZE_LIMIT},
	{"JDK_GENERAL_ENTITY_SIZE_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_GENERAL_ENTITY_SIZE_LIMIT), _JdkConstants_FieldAnnotations_JDK_GENERAL_ENTITY_SIZE_LIMIT},
	{"JDK_ENTITY_REPLACEMENT_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_ENTITY_REPLACEMENT_LIMIT), _JdkConstants_FieldAnnotations_JDK_ENTITY_REPLACEMENT_LIMIT},
	{"JDK_PARAMETER_ENTITY_SIZE_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_PARAMETER_ENTITY_SIZE_LIMIT), _JdkConstants_FieldAnnotations_JDK_PARAMETER_ENTITY_SIZE_LIMIT},
	{"JDK_XML_NAME_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_XML_NAME_LIMIT), _JdkConstants_FieldAnnotations_JDK_XML_NAME_LIMIT},
	{"JDK_MAX_ELEMENT_DEPTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_MAX_ELEMENT_DEPTH), _JdkConstants_FieldAnnotations_JDK_MAX_ELEMENT_DEPTH},
	{"JDK_ENTITY_COUNT_INFO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_ENTITY_COUNT_INFO), _JdkConstants_FieldAnnotations_JDK_ENTITY_COUNT_INFO},
	{"JDK_DEBUG_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, JDK_DEBUG_LIMIT)},
	{"SP_ENTITY_EXPANSION_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_ENTITY_EXPANSION_LIMIT)},
	{"SP_ELEMENT_ATTRIBUTE_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_ELEMENT_ATTRIBUTE_LIMIT)},
	{"SP_MAX_OCCUR_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_MAX_OCCUR_LIMIT)},
	{"SP_TOTAL_ENTITY_SIZE_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_TOTAL_ENTITY_SIZE_LIMIT)},
	{"SP_GENERAL_ENTITY_SIZE_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_GENERAL_ENTITY_SIZE_LIMIT)},
	{"SP_ENTITY_REPLACEMENT_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_ENTITY_REPLACEMENT_LIMIT)},
	{"SP_PARAMETER_ENTITY_SIZE_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_PARAMETER_ENTITY_SIZE_LIMIT)},
	{"SP_XML_NAME_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_XML_NAME_LIMIT)},
	{"SP_MAX_ELEMENT_DEPTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_MAX_ELEMENT_DEPTH)},
	{"JDK_EXTENSION_CLASSLOADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, JDK_EXTENSION_CLASSLOADER)},
	{"JDK_EXT_CLASSLOADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, JDK_EXT_CLASSLOADER)},
	{"ENTITY_EXPANSION_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, ENTITY_EXPANSION_LIMIT)},
	{"ELEMENT_ATTRIBUTE_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, ELEMENT_ATTRIBUTE_LIMIT)},
	{"MAX_OCCUR_LIMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, MAX_OCCUR_LIMIT)},
	{"JDK_YES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, JDK_YES)},
	{"ORACLE_FEATURE_SERVICE_MECHANISM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, ORACLE_FEATURE_SERVICE_MECHANISM), _JdkConstants_FieldAnnotations_ORACLE_FEATURE_SERVICE_MECHANISM},
	{"SP_ACCESS_EXTERNAL_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_ACCESS_EXTERNAL_STYLESHEET)},
	{"SP_ACCESS_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_ACCESS_EXTERNAL_DTD)},
	{"SP_ACCESS_EXTERNAL_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_ACCESS_EXTERNAL_SCHEMA)},
	{"ACCESS_EXTERNAL_ALL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, ACCESS_EXTERNAL_ALL)},
	{"EXTERNAL_ACCESS_DEFAULT_FSP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, EXTERNAL_ACCESS_DEFAULT_FSP)},
	{"EXTERNAL_ACCESS_DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, EXTERNAL_ACCESS_DEFAULT)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, XML_SECURITY_PROPERTY_MANAGER)},
	{"FEATURE_TRUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, FEATURE_TRUE)},
	{"FEATURE_FALSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, FEATURE_FALSE)},
	{"S_IS_STANDALONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, S_IS_STANDALONE)},
	{"FQ_IS_STANDALONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, FQ_IS_STANDALONE), _JdkConstants_FieldAnnotations_FQ_IS_STANDALONE},
	{"SP_IS_STANDALONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_IS_STANDALONE)},
	{"ORACLE_IS_STANDALONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, ORACLE_IS_STANDALONE), _JdkConstants_FieldAnnotations_ORACLE_IS_STANDALONE},
	{"JDK_IS_STANDALONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(JdkConstants, JDK_IS_STANDALONE), _JdkConstants_FieldAnnotations_JDK_IS_STANDALONE},
	{"SP_XSLTC_IS_STANDALONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_XSLTC_IS_STANDALONE)},
	{"ORACLE_ENABLE_EXTENSION_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, ORACLE_ENABLE_EXTENSION_FUNCTION)},
	{"SP_ENABLE_EXTENSION_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_ENABLE_EXTENSION_FUNCTION)},
	{"SP_ENABLE_EXTENSION_FUNCTION_SPEC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, SP_ENABLE_EXTENSION_FUNCTION_SPEC)},
	{"RESET_SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, RESET_SYMBOL_TABLE)},
	{"RESET_SYMBOL_TABLE_DEFAULT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, RESET_SYMBOL_TABLE_DEFAULT)},
	{"OVERRIDE_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, OVERRIDE_PARSER)},
	{"OVERRIDE_PARSER_DEFAULT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, OVERRIDE_PARSER_DEFAULT)},
	{"CDATA_CHUNK_SIZE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, CDATA_CHUNK_SIZE)},
	{"CDATA_CHUNK_SIZE_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkConstants, CDATA_CHUNK_SIZE_DEFAULT)},
	{}
};

$MethodInfo _JdkConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JdkConstants, init$, void)},
	{}
};

$ClassInfo _JdkConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.xml.internal.JdkConstants",
	"java.lang.Object",
	nullptr,
	_JdkConstants_FieldInfo_,
	_JdkConstants_MethodInfo_
};

$Object* allocate$JdkConstants($Class* clazz) {
	return $of($alloc(JdkConstants));
}

$String* JdkConstants::SECURITY_MANAGER = nullptr;
$String* JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX = nullptr;
$String* JdkConstants::JDK_ENTITY_EXPANSION_LIMIT = nullptr;
$String* JdkConstants::JDK_ELEMENT_ATTRIBUTE_LIMIT = nullptr;
$String* JdkConstants::JDK_MAX_OCCUR_LIMIT = nullptr;
$String* JdkConstants::JDK_TOTAL_ENTITY_SIZE_LIMIT = nullptr;
$String* JdkConstants::JDK_GENERAL_ENTITY_SIZE_LIMIT = nullptr;
$String* JdkConstants::JDK_ENTITY_REPLACEMENT_LIMIT = nullptr;
$String* JdkConstants::JDK_PARAMETER_ENTITY_SIZE_LIMIT = nullptr;
$String* JdkConstants::JDK_XML_NAME_LIMIT = nullptr;
$String* JdkConstants::JDK_MAX_ELEMENT_DEPTH = nullptr;
$String* JdkConstants::JDK_ENTITY_COUNT_INFO = nullptr;
$String* JdkConstants::JDK_DEBUG_LIMIT = nullptr;
$String* JdkConstants::SP_ENTITY_EXPANSION_LIMIT = nullptr;
$String* JdkConstants::SP_ELEMENT_ATTRIBUTE_LIMIT = nullptr;
$String* JdkConstants::SP_MAX_OCCUR_LIMIT = nullptr;
$String* JdkConstants::SP_TOTAL_ENTITY_SIZE_LIMIT = nullptr;
$String* JdkConstants::SP_GENERAL_ENTITY_SIZE_LIMIT = nullptr;
$String* JdkConstants::SP_ENTITY_REPLACEMENT_LIMIT = nullptr;
$String* JdkConstants::SP_PARAMETER_ENTITY_SIZE_LIMIT = nullptr;
$String* JdkConstants::SP_XML_NAME_LIMIT = nullptr;
$String* JdkConstants::SP_MAX_ELEMENT_DEPTH = nullptr;
$String* JdkConstants::JDK_EXTENSION_CLASSLOADER = nullptr;
$String* JdkConstants::JDK_EXT_CLASSLOADER = nullptr;
$String* JdkConstants::ENTITY_EXPANSION_LIMIT = nullptr;
$String* JdkConstants::ELEMENT_ATTRIBUTE_LIMIT = nullptr;
$String* JdkConstants::MAX_OCCUR_LIMIT = nullptr;
$String* JdkConstants::JDK_YES = nullptr;
$String* JdkConstants::ORACLE_FEATURE_SERVICE_MECHANISM = nullptr;
$String* JdkConstants::SP_ACCESS_EXTERNAL_STYLESHEET = nullptr;
$String* JdkConstants::SP_ACCESS_EXTERNAL_DTD = nullptr;
$String* JdkConstants::SP_ACCESS_EXTERNAL_SCHEMA = nullptr;
$String* JdkConstants::ACCESS_EXTERNAL_ALL = nullptr;
$String* JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP = nullptr;
$String* JdkConstants::EXTERNAL_ACCESS_DEFAULT = nullptr;
$String* JdkConstants::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* JdkConstants::FEATURE_TRUE = nullptr;
$String* JdkConstants::FEATURE_FALSE = nullptr;
$String* JdkConstants::S_IS_STANDALONE = nullptr;
$String* JdkConstants::FQ_IS_STANDALONE = nullptr;
$String* JdkConstants::SP_IS_STANDALONE = nullptr;
$String* JdkConstants::ORACLE_IS_STANDALONE = nullptr;
$String* JdkConstants::JDK_IS_STANDALONE = nullptr;
$String* JdkConstants::SP_XSLTC_IS_STANDALONE = nullptr;
$String* JdkConstants::ORACLE_ENABLE_EXTENSION_FUNCTION = nullptr;
$String* JdkConstants::SP_ENABLE_EXTENSION_FUNCTION = nullptr;
$String* JdkConstants::SP_ENABLE_EXTENSION_FUNCTION_SPEC = nullptr;
$String* JdkConstants::RESET_SYMBOL_TABLE = nullptr;
bool JdkConstants::RESET_SYMBOL_TABLE_DEFAULT = false;
$String* JdkConstants::OVERRIDE_PARSER = nullptr;
bool JdkConstants::OVERRIDE_PARSER_DEFAULT = false;
$String* JdkConstants::CDATA_CHUNK_SIZE = nullptr;
int32_t JdkConstants::CDATA_CHUNK_SIZE_DEFAULT = 0;

void JdkConstants::init$() {
}

void clinit$JdkConstants($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JdkConstants::SECURITY_MANAGER, "http://apache.org/xml/properties/security-manager"_s);
	$assignStatic(JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "http://www.oracle.com/xml/jaxp/properties/"_s);
	$assignStatic(JdkConstants::JDK_ENTITY_EXPANSION_LIMIT, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "entityExpansionLimit"_s}));
	$assignStatic(JdkConstants::JDK_ELEMENT_ATTRIBUTE_LIMIT, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "elementAttributeLimit"_s}));
	$assignStatic(JdkConstants::JDK_MAX_OCCUR_LIMIT, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "maxOccurLimit"_s}));
	$assignStatic(JdkConstants::JDK_TOTAL_ENTITY_SIZE_LIMIT, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "totalEntitySizeLimit"_s}));
	$assignStatic(JdkConstants::JDK_GENERAL_ENTITY_SIZE_LIMIT, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "maxGeneralEntitySizeLimit"_s}));
	$assignStatic(JdkConstants::JDK_ENTITY_REPLACEMENT_LIMIT, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "entityReplacementLimit"_s}));
	$assignStatic(JdkConstants::JDK_PARAMETER_ENTITY_SIZE_LIMIT, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "maxParameterEntitySizeLimit"_s}));
	$assignStatic(JdkConstants::JDK_XML_NAME_LIMIT, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "maxXMLNameLimit"_s}));
	$assignStatic(JdkConstants::JDK_MAX_ELEMENT_DEPTH, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "maxElementDepth"_s}));
	$assignStatic(JdkConstants::JDK_ENTITY_COUNT_INFO, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "getEntityCountInfo"_s}));
	$assignStatic(JdkConstants::JDK_DEBUG_LIMIT, "jdk.xml.getEntityCountInfo"_s);
	$assignStatic(JdkConstants::SP_ENTITY_EXPANSION_LIMIT, "jdk.xml.entityExpansionLimit"_s);
	$assignStatic(JdkConstants::SP_ELEMENT_ATTRIBUTE_LIMIT, "jdk.xml.elementAttributeLimit"_s);
	$assignStatic(JdkConstants::SP_MAX_OCCUR_LIMIT, "jdk.xml.maxOccurLimit"_s);
	$assignStatic(JdkConstants::SP_TOTAL_ENTITY_SIZE_LIMIT, "jdk.xml.totalEntitySizeLimit"_s);
	$assignStatic(JdkConstants::SP_GENERAL_ENTITY_SIZE_LIMIT, "jdk.xml.maxGeneralEntitySizeLimit"_s);
	$assignStatic(JdkConstants::SP_ENTITY_REPLACEMENT_LIMIT, "jdk.xml.entityReplacementLimit"_s);
	$assignStatic(JdkConstants::SP_PARAMETER_ENTITY_SIZE_LIMIT, "jdk.xml.maxParameterEntitySizeLimit"_s);
	$assignStatic(JdkConstants::SP_XML_NAME_LIMIT, "jdk.xml.maxXMLNameLimit"_s);
	$assignStatic(JdkConstants::SP_MAX_ELEMENT_DEPTH, "jdk.xml.maxElementDepth"_s);
	$assignStatic(JdkConstants::JDK_EXTENSION_CLASSLOADER, "jdk.xml.transform.extensionClassLoader"_s);
	$assignStatic(JdkConstants::JDK_EXT_CLASSLOADER, "jdk.xml.extensionClassLoader"_s);
	$assignStatic(JdkConstants::ENTITY_EXPANSION_LIMIT, "entityExpansionLimit"_s);
	$assignStatic(JdkConstants::ELEMENT_ATTRIBUTE_LIMIT, "elementAttributeLimit"_s);
	$assignStatic(JdkConstants::MAX_OCCUR_LIMIT, "maxOccurLimit"_s);
	$assignStatic(JdkConstants::JDK_YES, "yes"_s);
	$assignStatic(JdkConstants::ORACLE_FEATURE_SERVICE_MECHANISM, "http://www.oracle.com/feature/use-service-mechanism"_s);
	$assignStatic(JdkConstants::SP_ACCESS_EXTERNAL_STYLESHEET, "javax.xml.accessExternalStylesheet"_s);
	$assignStatic(JdkConstants::SP_ACCESS_EXTERNAL_DTD, "javax.xml.accessExternalDTD"_s);
	$assignStatic(JdkConstants::SP_ACCESS_EXTERNAL_SCHEMA, "javax.xml.accessExternalSchema"_s);
	$assignStatic(JdkConstants::ACCESS_EXTERNAL_ALL, "all"_s);
	$assignStatic(JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP, ""_s);
	$assignStatic(JdkConstants::EXTERNAL_ACCESS_DEFAULT, JdkConstants::ACCESS_EXTERNAL_ALL);
	$assignStatic(JdkConstants::XML_SECURITY_PROPERTY_MANAGER, "jdk.xml.xmlSecurityPropertyManager"_s);
	$assignStatic(JdkConstants::FEATURE_TRUE, "true"_s);
	$assignStatic(JdkConstants::FEATURE_FALSE, "false"_s);
	$assignStatic(JdkConstants::S_IS_STANDALONE, "isStandalone"_s);
	$assignStatic(JdkConstants::FQ_IS_STANDALONE, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, JdkConstants::S_IS_STANDALONE}));
	$assignStatic(JdkConstants::SP_IS_STANDALONE, "jdk.xml.isStandalone"_s);
	$assignStatic(JdkConstants::ORACLE_IS_STANDALONE, "http://www.oracle.com/xml/is-standalone"_s);
	$assignStatic(JdkConstants::JDK_IS_STANDALONE, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "xsltcIsStandalone"_s}));
	$assignStatic(JdkConstants::SP_XSLTC_IS_STANDALONE, "jdk.xml.xsltcIsStandalone"_s);
	$assignStatic(JdkConstants::ORACLE_ENABLE_EXTENSION_FUNCTION, $str({JdkConstants::ORACLE_JAXP_PROPERTY_PREFIX, "enableExtensionFunctions"_s}));
	$assignStatic(JdkConstants::SP_ENABLE_EXTENSION_FUNCTION, "javax.xml.enableExtensionFunctions"_s);
	$assignStatic(JdkConstants::SP_ENABLE_EXTENSION_FUNCTION_SPEC, "jdk.xml.enableExtensionFunctions"_s);
	$assignStatic(JdkConstants::RESET_SYMBOL_TABLE, "jdk.xml.resetSymbolTable"_s);
	$assignStatic(JdkConstants::OVERRIDE_PARSER, "jdk.xml.overrideDefaultParser"_s);
	$assignStatic(JdkConstants::CDATA_CHUNK_SIZE, "jdk.xml.cdataChunkSize"_s);
	$load($Boolean);
	JdkConstants::RESET_SYMBOL_TABLE_DEFAULT = $nc(($cast($Boolean, $($SecuritySupport::getJAXPSystemProperty($Boolean::class$, JdkConstants::RESET_SYMBOL_TABLE, "false"_s)))))->booleanValue();
	JdkConstants::OVERRIDE_PARSER_DEFAULT = $nc(($cast($Boolean, $($SecuritySupport::getJAXPSystemProperty($Boolean::class$, JdkConstants::OVERRIDE_PARSER, "false"_s)))))->booleanValue();
	$load($Integer);
	JdkConstants::CDATA_CHUNK_SIZE_DEFAULT = $nc(($cast($Integer, $($SecuritySupport::getJAXPSystemProperty($Integer::class$, JdkConstants::CDATA_CHUNK_SIZE, "0"_s)))))->intValue();
}

JdkConstants::JdkConstants() {
}

$Class* JdkConstants::load$($String* name, bool initialize) {
	$loadClass(JdkConstants, name, initialize, &_JdkConstants_ClassInfo_, clinit$JdkConstants, allocate$JdkConstants);
	return class$;
}

$Class* JdkConstants::class$ = nullptr;

		} // internal
	} // xml
} // jdk