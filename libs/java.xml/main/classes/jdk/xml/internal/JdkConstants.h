#ifndef _jdk_xml_internal_JdkConstants_h_
#define _jdk_xml_internal_JdkConstants_h_
//$ class jdk.xml.internal.JdkConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACCESS_EXTERNAL_ALL")
#undef ACCESS_EXTERNAL_ALL
#pragma push_macro("CDATA_CHUNK_SIZE")
#undef CDATA_CHUNK_SIZE
#pragma push_macro("CDATA_CHUNK_SIZE_DEFAULT")
#undef CDATA_CHUNK_SIZE_DEFAULT
#pragma push_macro("ELEMENT_ATTRIBUTE_LIMIT")
#undef ELEMENT_ATTRIBUTE_LIMIT
#pragma push_macro("ENTITY_EXPANSION_LIMIT")
#undef ENTITY_EXPANSION_LIMIT
#pragma push_macro("EXTERNAL_ACCESS_DEFAULT")
#undef EXTERNAL_ACCESS_DEFAULT
#pragma push_macro("EXTERNAL_ACCESS_DEFAULT_FSP")
#undef EXTERNAL_ACCESS_DEFAULT_FSP
#pragma push_macro("FEATURE_FALSE")
#undef FEATURE_FALSE
#pragma push_macro("FEATURE_TRUE")
#undef FEATURE_TRUE
#pragma push_macro("FQ_IS_STANDALONE")
#undef FQ_IS_STANDALONE
#pragma push_macro("JDK_DEBUG_LIMIT")
#undef JDK_DEBUG_LIMIT
#pragma push_macro("JDK_ELEMENT_ATTRIBUTE_LIMIT")
#undef JDK_ELEMENT_ATTRIBUTE_LIMIT
#pragma push_macro("JDK_ENTITY_COUNT_INFO")
#undef JDK_ENTITY_COUNT_INFO
#pragma push_macro("JDK_ENTITY_EXPANSION_LIMIT")
#undef JDK_ENTITY_EXPANSION_LIMIT
#pragma push_macro("JDK_ENTITY_REPLACEMENT_LIMIT")
#undef JDK_ENTITY_REPLACEMENT_LIMIT
#pragma push_macro("JDK_EXTENSION_CLASSLOADER")
#undef JDK_EXTENSION_CLASSLOADER
#pragma push_macro("JDK_EXT_CLASSLOADER")
#undef JDK_EXT_CLASSLOADER
#pragma push_macro("JDK_GENERAL_ENTITY_SIZE_LIMIT")
#undef JDK_GENERAL_ENTITY_SIZE_LIMIT
#pragma push_macro("JDK_IS_STANDALONE")
#undef JDK_IS_STANDALONE
#pragma push_macro("JDK_MAX_ELEMENT_DEPTH")
#undef JDK_MAX_ELEMENT_DEPTH
#pragma push_macro("JDK_MAX_OCCUR_LIMIT")
#undef JDK_MAX_OCCUR_LIMIT
#pragma push_macro("JDK_PARAMETER_ENTITY_SIZE_LIMIT")
#undef JDK_PARAMETER_ENTITY_SIZE_LIMIT
#pragma push_macro("JDK_TOTAL_ENTITY_SIZE_LIMIT")
#undef JDK_TOTAL_ENTITY_SIZE_LIMIT
#pragma push_macro("JDK_XML_NAME_LIMIT")
#undef JDK_XML_NAME_LIMIT
#pragma push_macro("JDK_YES")
#undef JDK_YES
#pragma push_macro("MAX_OCCUR_LIMIT")
#undef MAX_OCCUR_LIMIT
#pragma push_macro("ORACLE_ENABLE_EXTENSION_FUNCTION")
#undef ORACLE_ENABLE_EXTENSION_FUNCTION
#pragma push_macro("ORACLE_FEATURE_SERVICE_MECHANISM")
#undef ORACLE_FEATURE_SERVICE_MECHANISM
#pragma push_macro("ORACLE_IS_STANDALONE")
#undef ORACLE_IS_STANDALONE
#pragma push_macro("ORACLE_JAXP_PROPERTY_PREFIX")
#undef ORACLE_JAXP_PROPERTY_PREFIX
#pragma push_macro("OVERRIDE_PARSER")
#undef OVERRIDE_PARSER
#pragma push_macro("OVERRIDE_PARSER_DEFAULT")
#undef OVERRIDE_PARSER_DEFAULT
#pragma push_macro("RESET_SYMBOL_TABLE")
#undef RESET_SYMBOL_TABLE
#pragma push_macro("RESET_SYMBOL_TABLE_DEFAULT")
#undef RESET_SYMBOL_TABLE_DEFAULT
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("SP_ACCESS_EXTERNAL_DTD")
#undef SP_ACCESS_EXTERNAL_DTD
#pragma push_macro("SP_ACCESS_EXTERNAL_SCHEMA")
#undef SP_ACCESS_EXTERNAL_SCHEMA
#pragma push_macro("SP_ACCESS_EXTERNAL_STYLESHEET")
#undef SP_ACCESS_EXTERNAL_STYLESHEET
#pragma push_macro("SP_ELEMENT_ATTRIBUTE_LIMIT")
#undef SP_ELEMENT_ATTRIBUTE_LIMIT
#pragma push_macro("SP_ENABLE_EXTENSION_FUNCTION")
#undef SP_ENABLE_EXTENSION_FUNCTION
#pragma push_macro("SP_ENABLE_EXTENSION_FUNCTION_SPEC")
#undef SP_ENABLE_EXTENSION_FUNCTION_SPEC
#pragma push_macro("SP_ENTITY_EXPANSION_LIMIT")
#undef SP_ENTITY_EXPANSION_LIMIT
#pragma push_macro("SP_ENTITY_REPLACEMENT_LIMIT")
#undef SP_ENTITY_REPLACEMENT_LIMIT
#pragma push_macro("SP_GENERAL_ENTITY_SIZE_LIMIT")
#undef SP_GENERAL_ENTITY_SIZE_LIMIT
#pragma push_macro("SP_IS_STANDALONE")
#undef SP_IS_STANDALONE
#pragma push_macro("SP_MAX_ELEMENT_DEPTH")
#undef SP_MAX_ELEMENT_DEPTH
#pragma push_macro("SP_MAX_OCCUR_LIMIT")
#undef SP_MAX_OCCUR_LIMIT
#pragma push_macro("SP_PARAMETER_ENTITY_SIZE_LIMIT")
#undef SP_PARAMETER_ENTITY_SIZE_LIMIT
#pragma push_macro("SP_TOTAL_ENTITY_SIZE_LIMIT")
#undef SP_TOTAL_ENTITY_SIZE_LIMIT
#pragma push_macro("SP_XML_NAME_LIMIT")
#undef SP_XML_NAME_LIMIT
#pragma push_macro("SP_XSLTC_IS_STANDALONE")
#undef SP_XSLTC_IS_STANDALONE
#pragma push_macro("S_IS_STANDALONE")
#undef S_IS_STANDALONE
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

namespace jdk {
	namespace xml {
		namespace internal {

class JdkConstants : public ::java::lang::Object {
	$class(JdkConstants, 0, ::java::lang::Object)
public:
	JdkConstants();
	void init$();
	static $String* SECURITY_MANAGER;
	static $String* ORACLE_JAXP_PROPERTY_PREFIX;
	static $String* JDK_ENTITY_EXPANSION_LIMIT;
	static $String* JDK_ELEMENT_ATTRIBUTE_LIMIT;
	static $String* JDK_MAX_OCCUR_LIMIT;
	static $String* JDK_TOTAL_ENTITY_SIZE_LIMIT;
	static $String* JDK_GENERAL_ENTITY_SIZE_LIMIT;
	static $String* JDK_ENTITY_REPLACEMENT_LIMIT;
	static $String* JDK_PARAMETER_ENTITY_SIZE_LIMIT;
	static $String* JDK_XML_NAME_LIMIT;
	static $String* JDK_MAX_ELEMENT_DEPTH;
	static $String* JDK_ENTITY_COUNT_INFO;
	static $String* JDK_DEBUG_LIMIT;
	static $String* SP_ENTITY_EXPANSION_LIMIT;
	static $String* SP_ELEMENT_ATTRIBUTE_LIMIT;
	static $String* SP_MAX_OCCUR_LIMIT;
	static $String* SP_TOTAL_ENTITY_SIZE_LIMIT;
	static $String* SP_GENERAL_ENTITY_SIZE_LIMIT;
	static $String* SP_ENTITY_REPLACEMENT_LIMIT;
	static $String* SP_PARAMETER_ENTITY_SIZE_LIMIT;
	static $String* SP_XML_NAME_LIMIT;
	static $String* SP_MAX_ELEMENT_DEPTH;
	static $String* JDK_EXTENSION_CLASSLOADER;
	static $String* JDK_EXT_CLASSLOADER;
	static $String* ENTITY_EXPANSION_LIMIT;
	static $String* ELEMENT_ATTRIBUTE_LIMIT;
	static $String* MAX_OCCUR_LIMIT;
	static $String* JDK_YES;
	static $String* ORACLE_FEATURE_SERVICE_MECHANISM;
	static $String* SP_ACCESS_EXTERNAL_STYLESHEET;
	static $String* SP_ACCESS_EXTERNAL_DTD;
	static $String* SP_ACCESS_EXTERNAL_SCHEMA;
	static $String* ACCESS_EXTERNAL_ALL;
	static $String* EXTERNAL_ACCESS_DEFAULT_FSP;
	static $String* EXTERNAL_ACCESS_DEFAULT;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $String* FEATURE_TRUE;
	static $String* FEATURE_FALSE;
	static $String* S_IS_STANDALONE;
	static $String* FQ_IS_STANDALONE;
	static $String* SP_IS_STANDALONE;
	static $String* ORACLE_IS_STANDALONE;
	static $String* JDK_IS_STANDALONE;
	static $String* SP_XSLTC_IS_STANDALONE;
	static $String* ORACLE_ENABLE_EXTENSION_FUNCTION;
	static $String* SP_ENABLE_EXTENSION_FUNCTION;
	static $String* SP_ENABLE_EXTENSION_FUNCTION_SPEC;
	static $String* RESET_SYMBOL_TABLE;
	static bool RESET_SYMBOL_TABLE_DEFAULT;
	static $String* OVERRIDE_PARSER;
	static bool OVERRIDE_PARSER_DEFAULT;
	static $String* CDATA_CHUNK_SIZE;
	static int32_t CDATA_CHUNK_SIZE_DEFAULT;
};

		} // internal
	} // xml
} // jdk

#pragma pop_macro("ACCESS_EXTERNAL_ALL")
#pragma pop_macro("CDATA_CHUNK_SIZE")
#pragma pop_macro("CDATA_CHUNK_SIZE_DEFAULT")
#pragma pop_macro("ELEMENT_ATTRIBUTE_LIMIT")
#pragma pop_macro("ENTITY_EXPANSION_LIMIT")
#pragma pop_macro("EXTERNAL_ACCESS_DEFAULT")
#pragma pop_macro("EXTERNAL_ACCESS_DEFAULT_FSP")
#pragma pop_macro("FEATURE_FALSE")
#pragma pop_macro("FEATURE_TRUE")
#pragma pop_macro("FQ_IS_STANDALONE")
#pragma pop_macro("JDK_DEBUG_LIMIT")
#pragma pop_macro("JDK_ELEMENT_ATTRIBUTE_LIMIT")
#pragma pop_macro("JDK_ENTITY_COUNT_INFO")
#pragma pop_macro("JDK_ENTITY_EXPANSION_LIMIT")
#pragma pop_macro("JDK_ENTITY_REPLACEMENT_LIMIT")
#pragma pop_macro("JDK_EXTENSION_CLASSLOADER")
#pragma pop_macro("JDK_EXT_CLASSLOADER")
#pragma pop_macro("JDK_GENERAL_ENTITY_SIZE_LIMIT")
#pragma pop_macro("JDK_IS_STANDALONE")
#pragma pop_macro("JDK_MAX_ELEMENT_DEPTH")
#pragma pop_macro("JDK_MAX_OCCUR_LIMIT")
#pragma pop_macro("JDK_PARAMETER_ENTITY_SIZE_LIMIT")
#pragma pop_macro("JDK_TOTAL_ENTITY_SIZE_LIMIT")
#pragma pop_macro("JDK_XML_NAME_LIMIT")
#pragma pop_macro("JDK_YES")
#pragma pop_macro("MAX_OCCUR_LIMIT")
#pragma pop_macro("ORACLE_ENABLE_EXTENSION_FUNCTION")
#pragma pop_macro("ORACLE_FEATURE_SERVICE_MECHANISM")
#pragma pop_macro("ORACLE_IS_STANDALONE")
#pragma pop_macro("ORACLE_JAXP_PROPERTY_PREFIX")
#pragma pop_macro("OVERRIDE_PARSER")
#pragma pop_macro("OVERRIDE_PARSER_DEFAULT")
#pragma pop_macro("RESET_SYMBOL_TABLE")
#pragma pop_macro("RESET_SYMBOL_TABLE_DEFAULT")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("SP_ACCESS_EXTERNAL_DTD")
#pragma pop_macro("SP_ACCESS_EXTERNAL_SCHEMA")
#pragma pop_macro("SP_ACCESS_EXTERNAL_STYLESHEET")
#pragma pop_macro("SP_ELEMENT_ATTRIBUTE_LIMIT")
#pragma pop_macro("SP_ENABLE_EXTENSION_FUNCTION")
#pragma pop_macro("SP_ENABLE_EXTENSION_FUNCTION_SPEC")
#pragma pop_macro("SP_ENTITY_EXPANSION_LIMIT")
#pragma pop_macro("SP_ENTITY_REPLACEMENT_LIMIT")
#pragma pop_macro("SP_GENERAL_ENTITY_SIZE_LIMIT")
#pragma pop_macro("SP_IS_STANDALONE")
#pragma pop_macro("SP_MAX_ELEMENT_DEPTH")
#pragma pop_macro("SP_MAX_OCCUR_LIMIT")
#pragma pop_macro("SP_PARAMETER_ENTITY_SIZE_LIMIT")
#pragma pop_macro("SP_TOTAL_ENTITY_SIZE_LIMIT")
#pragma pop_macro("SP_XML_NAME_LIMIT")
#pragma pop_macro("SP_XSLTC_IS_STANDALONE")
#pragma pop_macro("S_IS_STANDALONE")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _jdk_xml_internal_JdkConstants_h_