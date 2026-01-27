#include <com/sun/org/apache/xerces/internal/impl/Constants.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants$ArrayEnumeration.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

#undef ADD_NAMESPACE_DECL_AS_ATTRIBUTE
#undef ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE
#undef ALLOW_JAVA_ENCODINGS_FEATURE
#undef ANONYMOUS_TYPE_NAMESPACE
#undef ATTRIBUTE_DECLARED
#undef ATTRIBUTE_PSVI
#undef BALANCE_SYNTAX_TREES
#undef BUFFER_SIZE_PROPERTY
#undef CHANGE_IGNORABLE_CHARACTERS_INTO_IGNORABLE_WHITESPACES
#undef CHAR_REF_PROBABLE_WS
#undef CONTINUE_AFTER_FATAL_ERROR_FEATURE
#undef CREATE_CDATA_NODES_FEATURE
#undef CREATE_ENTITY_REF_NODES_FEATURE
#undef CURRENT_ELEMENT_NODE_PROPERTY
#undef DATATYPE_VALIDATOR_FACTORY_PROPERTY
#undef DECLARATION_HANDLER_PROPERTY
#undef DEFAULT_ATTRIBUTE_VALUES_FEATURE
#undef DEFER_NODE_EXPANSION_FEATURE
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#undef DOCUMENT_CLASS_NAME_PROPERTY
#undef DOCUMENT_SCANNER_PROPERTY
#undef DOCUMENT_XML_VERSION_PROPERTY
#undef DOM_ANCESTOR_CHECCK
#undef DOM_CANONICAL_FORM
#undef DOM_CDATA_SECTIONS
#undef DOM_CERTIFIED
#undef DOM_CHARSET_OVERRIDES_XML_ENCODING
#undef DOM_CHECK_CHAR_NORMALIZATION
#undef DOM_COMMENTS
#undef DOM_DATATYPE_NORMALIZATION
#undef DOM_DISALLOW_DOCTYPE
#undef DOM_DISCARD_DEFAULT_CONTENT
#undef DOM_ELEMENT_CONTENT_WHITESPACE
#undef DOM_ENTITIES
#undef DOM_ERROR_HANDLER
#undef DOM_FORMAT_PRETTY_PRINT
#undef DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS
#undef DOM_INFOSET
#undef DOM_NAMESPACES
#undef DOM_NAMESPACE_DECLARATIONS
#undef DOM_NODE_PROPERTY
#undef DOM_NORMALIZE_CHARACTERS
#undef DOM_PSVI
#undef DOM_RESOURCE_RESOLVER
#undef DOM_SCHEMA_LOCATION
#undef DOM_SCHEMA_TYPE
#undef DOM_SPLIT_CDATA
#undef DOM_SUPPORTED_MEDIATYPES_ONLY
#undef DOM_UNKNOWNCHARS
#undef DOM_VALIDATE
#undef DOM_VALIDATE_IF_SCHEMA
#undef DOM_WELLFORMED
#undef DOM_XMLDECL
#undef DTD_PROCESSOR_PROPERTY
#undef DTD_SCANNER_PROPERTY
#undef DTD_VALIDATOR_PROPERTY
#undef DYNAMIC_VALIDATION_FEATURE
#undef ELEMENT_PSVI
#undef ENTITY_MANAGER_PROPERTY
#undef ENTITY_RESOLVER_PROPERTY
#undef ENTITY_SKIPPED
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER_PROPERTY
#undef ESCAPE_CHARACTERS
#undef EXTERNAL_GENERAL_ENTITIES_FEATURE
#undef EXTERNAL_PARAMETER_ENTITIES_FEATURE
#undef FEATURE_SECURE_PROCESSING
#undef GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE
#undef HONOUR_ALL_SCHEMALOCATIONS_FEATURE
#undef IDC_CHECKING_FEATURE
#undef ID_ATTRIBUTE
#undef ID_IDREF_CHECKING_FEATURE
#undef IGNORE_EXTERNAL_DTD
#undef IGNORE_SCHEMA_LOCATION_HINTS
#undef IGNORE_XSI_TYPE_FEATURE
#undef INCLUDE_COMMENTS_FEATURE
#undef INCLUDE_IGNORABLE_WHITESPACE
#undef IS_STANDALONE_FEATURE
#undef JAXPAPI_PROPERTY_PREFIX
#undef JAXP_PROPERTY_PREFIX
#undef LAST_ENTITY
#undef LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE
#undef LEXICAL_HANDLER_PROPERTY
#undef LOAD_AS_INFOSET
#undef LOAD_DTD_GRAMMAR_FEATURE
#undef LOAD_EXTERNAL_DTD_FEATURE
#undef LOCALE_PROPERTY
#undef NAMESPACES_FEATURE
#undef NAMESPACE_BINDER_PROPERTY
#undef NAMESPACE_CONTEXT_PROPERTY
#undef NAMESPACE_GROWTH_FEATURE
#undef NAMESPACE_PREFIXES_FEATURE
#undef NOTIFY_BUILTIN_REFS_FEATURE
#undef NOTIFY_CHAR_REFS_FEATURE
#undef NS_DTD
#undef NS_XMLSCHEMA
#undef PARSER_SETTINGS
#undef READER_IN_DEFINED_STATE
#undef RESOLVE_DTD_URIS_FEATURE
#undef REUSE_INSTANCE
#undef ROOT_ELEMENT_DECLARATION_PROPERTY
#undef ROOT_TYPE_DEFINITION_PROPERTY
#undef SAX_FEATURE_PREFIX
#undef SAX_PROPERTY_PREFIX
#undef SCHEMA_1_1_SUPPORT
#undef SCHEMA_AUGMENT_PSVI
#undef SCHEMA_DV_FACTORY_PROPERTY
#undef SCHEMA_ELEMENT_DEFAULT
#undef SCHEMA_FULL_CHECKING
#undef SCHEMA_LANGUAGE
#undef SCHEMA_LOCATION
#undef SCHEMA_NONS_LOCATION
#undef SCHEMA_NORMALIZED_VALUE
#undef SCHEMA_SOURCE
#undef SCHEMA_VALIDATION_FEATURE
#undef SCHEMA_VALIDATOR_PROPERTY
#undef SCHEMA_VERSION_1_0
#undef SCHEMA_VERSION_1_0_EXTENDED
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef STANDARD_URI_CONFORMANT_FEATURE
#undef STAX_ENTITY_RESOLVER_PROPERTY
#undef STAX_PROPERTIES
#undef STAX_REPORT_CDATA_EVENT
#undef STRING_INTERNING_FEATURE
#undef SUN_DOM_ANCESTOR_CHECCK
#undef SUN_DOM_PROPERTY_PREFIX
#undef SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE
#undef SUN_SCHEMA_FEATURE_PREFIX
#undef SYMBOL_TABLE_PROPERTY
#undef TOLERATE_DUPLICATES_FEATURE
#undef TYPEINFO
#undef UNICODE_NORMALIZATION_CHECKING_FEATURE
#undef UNPARSED_ENTITY_CHECKING_FEATURE
#undef USE_ATTRIBUTES2_FEATURE
#undef USE_ENTITY_RESOLVER2_FEATURE
#undef USE_GRAMMAR_POOL_ONLY_FEATURE
#undef USE_LOCATOR2_FEATURE
#undef VALIDATE_ANNOTATIONS_FEATURE
#undef VALIDATE_CONTENT_MODELS_FEATURE
#undef VALIDATE_DATATYPES_FEATURE
#undef VALIDATION_FEATURE
#undef VALIDATION_MANAGER_PROPERTY
#undef VALIDATOR_PROPERTY
#undef W3C_XML_SCHEMA10_NS_URI
#undef WARN_ON_DUPLICATE_ATTDEF_FEATURE
#undef WARN_ON_DUPLICATE_ENTITYDEF_FEATURE
#undef WARN_ON_UNDECLARED_ELEMDEF_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XINCLUDE_AWARE
#undef XINCLUDE_FEATURE
#undef XINCLUDE_FIXUP_BASE_URIS_FEATURE
#undef XINCLUDE_FIXUP_LANGUAGE_FEATURE
#undef XINCLUDE_HANDLER_PROPERTY
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XMLNS_URIS_FEATURE
#undef XML_11_FEATURE
#undef XML_STRING_PROPERTY
#undef XML_VERSION_1_0
#undef XML_VERSION_1_1
#undef XML_VERSION_ERROR
#undef XPOINTER_HANDLER_PROPERTY
#undef XPOINTER_SCHEMA_PROPERTY
#undef ZEPHYR_PROPERTY_PREFIX

using $Constants$ArrayEnumeration = ::com::sun::org::apache::xerces::internal::impl::Constants$ArrayEnumeration;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _Constants_FieldInfo_[] = {
	{"NS_XMLSCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NS_XMLSCHEMA)},
	{"NS_DTD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NS_DTD)},
	{"W3C_XML_SCHEMA10_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, W3C_XML_SCHEMA10_NS_URI)},
	{"SUN_SCHEMA_FEATURE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SUN_SCHEMA_FEATURE_PREFIX)},
	{"SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE)},
	{"ZEPHYR_PROPERTY_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ZEPHYR_PROPERTY_PREFIX)},
	{"STAX_PROPERTIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STAX_PROPERTIES)},
	{"STAX_ENTITY_RESOLVER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STAX_ENTITY_RESOLVER_PROPERTY)},
	{"STAX_REPORT_CDATA_EVENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STAX_REPORT_CDATA_EVENT)},
	{"READER_IN_DEFINED_STATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, READER_IN_DEFINED_STATE)},
	{"ADD_NAMESPACE_DECL_AS_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ADD_NAMESPACE_DECL_AS_ATTRIBUTE)},
	{"ESCAPE_CHARACTERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ESCAPE_CHARACTERS)},
	{"REUSE_INSTANCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, REUSE_INSTANCE)},
	{"SUN_DOM_PROPERTY_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SUN_DOM_PROPERTY_PREFIX)},
	{"SUN_DOM_ANCESTOR_CHECCK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SUN_DOM_ANCESTOR_CHECCK)},
	{"IGNORE_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, IGNORE_EXTERNAL_DTD)},
	{"SAX_FEATURE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SAX_FEATURE_PREFIX)},
	{"NAMESPACES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMESPACES_FEATURE)},
	{"NAMESPACE_PREFIXES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMESPACE_PREFIXES_FEATURE)},
	{"STRING_INTERNING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STRING_INTERNING_FEATURE)},
	{"VALIDATION_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, VALIDATION_FEATURE)},
	{"EXTERNAL_GENERAL_ENTITIES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, EXTERNAL_GENERAL_ENTITIES_FEATURE)},
	{"EXTERNAL_PARAMETER_ENTITIES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, EXTERNAL_PARAMETER_ENTITIES_FEATURE)},
	{"LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE)},
	{"IS_STANDALONE_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, IS_STANDALONE_FEATURE)},
	{"RESOLVE_DTD_URIS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, RESOLVE_DTD_URIS_FEATURE)},
	{"USE_ATTRIBUTES2_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, USE_ATTRIBUTES2_FEATURE)},
	{"USE_LOCATOR2_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, USE_LOCATOR2_FEATURE)},
	{"USE_ENTITY_RESOLVER2_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, USE_ENTITY_RESOLVER2_FEATURE)},
	{"UNICODE_NORMALIZATION_CHECKING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, UNICODE_NORMALIZATION_CHECKING_FEATURE)},
	{"XMLNS_URIS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XMLNS_URIS_FEATURE)},
	{"XML_11_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XML_11_FEATURE)},
	{"ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE)},
	{"SAX_PROPERTY_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SAX_PROPERTY_PREFIX)},
	{"DECLARATION_HANDLER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DECLARATION_HANDLER_PROPERTY)},
	{"LEXICAL_HANDLER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LEXICAL_HANDLER_PROPERTY)},
	{"DOM_NODE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_NODE_PROPERTY)},
	{"XML_STRING_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XML_STRING_PROPERTY)},
	{"FEATURE_SECURE_PROCESSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, FEATURE_SECURE_PROCESSING)},
	{"DOCUMENT_XML_VERSION_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOCUMENT_XML_VERSION_PROPERTY)},
	{"JAXP_PROPERTY_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, JAXP_PROPERTY_PREFIX)},
	{"SCHEMA_SOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_SOURCE)},
	{"SCHEMA_LANGUAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_LANGUAGE)},
	{"JAXPAPI_PROPERTY_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, JAXPAPI_PROPERTY_PREFIX)},
	{"INCLUDE_COMMENTS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, INCLUDE_COMMENTS_FEATURE)},
	{"CREATE_CDATA_NODES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CREATE_CDATA_NODES_FEATURE)},
	{"LOAD_AS_INFOSET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LOAD_AS_INFOSET)},
	{"DOM_CANONICAL_FORM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_CANONICAL_FORM)},
	{"DOM_CDATA_SECTIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_CDATA_SECTIONS)},
	{"DOM_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_COMMENTS)},
	{"DOM_CHARSET_OVERRIDES_XML_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_CHARSET_OVERRIDES_XML_ENCODING)},
	{"DOM_DATATYPE_NORMALIZATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_DATATYPE_NORMALIZATION)},
	{"DOM_ENTITIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_ENTITIES)},
	{"DOM_INFOSET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_INFOSET)},
	{"DOM_NAMESPACES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_NAMESPACES)},
	{"DOM_NAMESPACE_DECLARATIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_NAMESPACE_DECLARATIONS)},
	{"DOM_SUPPORTED_MEDIATYPES_ONLY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_SUPPORTED_MEDIATYPES_ONLY)},
	{"DOM_VALIDATE_IF_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_VALIDATE_IF_SCHEMA)},
	{"DOM_VALIDATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_VALIDATE)},
	{"DOM_ELEMENT_CONTENT_WHITESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_ELEMENT_CONTENT_WHITESPACE)},
	{"DOM_DISCARD_DEFAULT_CONTENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_DISCARD_DEFAULT_CONTENT)},
	{"DOM_NORMALIZE_CHARACTERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_NORMALIZE_CHARACTERS)},
	{"DOM_CHECK_CHAR_NORMALIZATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_CHECK_CHAR_NORMALIZATION)},
	{"DOM_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_WELLFORMED)},
	{"DOM_SPLIT_CDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_SPLIT_CDATA)},
	{"DOM_FORMAT_PRETTY_PRINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_FORMAT_PRETTY_PRINT)},
	{"DOM_XMLDECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_XMLDECL)},
	{"DOM_UNKNOWNCHARS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_UNKNOWNCHARS)},
	{"DOM_CERTIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_CERTIFIED)},
	{"DOM_DISALLOW_DOCTYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_DISALLOW_DOCTYPE)},
	{"DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)},
	{"DOM_RESOURCE_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_RESOURCE_RESOLVER)},
	{"DOM_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_ERROR_HANDLER)},
	{"DOM_SCHEMA_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_SCHEMA_TYPE)},
	{"DOM_SCHEMA_LOCATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_SCHEMA_LOCATION)},
	{"DOM_ANCESTOR_CHECCK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_ANCESTOR_CHECCK)},
	{"DOM_PSVI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOM_PSVI)},
	{"XERCES_FEATURE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XERCES_FEATURE_PREFIX)},
	{"SCHEMA_VALIDATION_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_VALIDATION_FEATURE)},
	{"SCHEMA_NORMALIZED_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_NORMALIZED_VALUE)},
	{"SCHEMA_ELEMENT_DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_ELEMENT_DEFAULT)},
	{"SCHEMA_FULL_CHECKING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_FULL_CHECKING)},
	{"SCHEMA_AUGMENT_PSVI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_AUGMENT_PSVI)},
	{"DYNAMIC_VALIDATION_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DYNAMIC_VALIDATION_FEATURE)},
	{"WARN_ON_DUPLICATE_ATTDEF_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, WARN_ON_DUPLICATE_ATTDEF_FEATURE)},
	{"WARN_ON_UNDECLARED_ELEMDEF_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, WARN_ON_UNDECLARED_ELEMDEF_FEATURE)},
	{"WARN_ON_DUPLICATE_ENTITYDEF_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, WARN_ON_DUPLICATE_ENTITYDEF_FEATURE)},
	{"ALLOW_JAVA_ENCODINGS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ALLOW_JAVA_ENCODINGS_FEATURE)},
	{"DISALLOW_DOCTYPE_DECL_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DISALLOW_DOCTYPE_DECL_FEATURE)},
	{"CONTINUE_AFTER_FATAL_ERROR_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CONTINUE_AFTER_FATAL_ERROR_FEATURE)},
	{"LOAD_DTD_GRAMMAR_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LOAD_DTD_GRAMMAR_FEATURE)},
	{"LOAD_EXTERNAL_DTD_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LOAD_EXTERNAL_DTD_FEATURE)},
	{"DEFER_NODE_EXPANSION_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DEFER_NODE_EXPANSION_FEATURE)},
	{"CREATE_ENTITY_REF_NODES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CREATE_ENTITY_REF_NODES_FEATURE)},
	{"INCLUDE_IGNORABLE_WHITESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, INCLUDE_IGNORABLE_WHITESPACE)},
	{"DEFAULT_ATTRIBUTE_VALUES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DEFAULT_ATTRIBUTE_VALUES_FEATURE)},
	{"VALIDATE_CONTENT_MODELS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, VALIDATE_CONTENT_MODELS_FEATURE)},
	{"VALIDATE_DATATYPES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, VALIDATE_DATATYPES_FEATURE)},
	{"BALANCE_SYNTAX_TREES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, BALANCE_SYNTAX_TREES)},
	{"NOTIFY_CHAR_REFS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NOTIFY_CHAR_REFS_FEATURE)},
	{"NOTIFY_BUILTIN_REFS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NOTIFY_BUILTIN_REFS_FEATURE)},
	{"STANDARD_URI_CONFORMANT_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, STANDARD_URI_CONFORMANT_FEATURE)},
	{"GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE)},
	{"VALIDATE_ANNOTATIONS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, VALIDATE_ANNOTATIONS_FEATURE)},
	{"HONOUR_ALL_SCHEMALOCATIONS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, HONOUR_ALL_SCHEMALOCATIONS_FEATURE)},
	{"NAMESPACE_GROWTH_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMESPACE_GROWTH_FEATURE)},
	{"TOLERATE_DUPLICATES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TOLERATE_DUPLICATES_FEATURE)},
	{"XINCLUDE_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XINCLUDE_FEATURE)},
	{"XINCLUDE_FIXUP_BASE_URIS_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XINCLUDE_FIXUP_BASE_URIS_FEATURE)},
	{"XINCLUDE_FIXUP_LANGUAGE_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XINCLUDE_FIXUP_LANGUAGE_FEATURE)},
	{"IGNORE_XSI_TYPE_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, IGNORE_XSI_TYPE_FEATURE)},
	{"ID_IDREF_CHECKING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ID_IDREF_CHECKING_FEATURE)},
	{"IDC_CHECKING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, IDC_CHECKING_FEATURE)},
	{"UNPARSED_ENTITY_CHECKING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, UNPARSED_ENTITY_CHECKING_FEATURE)},
	{"USE_GRAMMAR_POOL_ONLY_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, USE_GRAMMAR_POOL_ONLY_FEATURE)},
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, PARSER_SETTINGS)},
	{"XINCLUDE_AWARE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XINCLUDE_AWARE)},
	{"IGNORE_SCHEMA_LOCATION_HINTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, IGNORE_SCHEMA_LOCATION_HINTS)},
	{"CHANGE_IGNORABLE_CHARACTERS_INTO_IGNORABLE_WHITESPACES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CHANGE_IGNORABLE_CHARACTERS_INTO_IGNORABLE_WHITESPACES)},
	{"XERCES_PROPERTY_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XERCES_PROPERTY_PREFIX)},
	{"CURRENT_ELEMENT_NODE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CURRENT_ELEMENT_NODE_PROPERTY)},
	{"DOCUMENT_CLASS_NAME_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOCUMENT_CLASS_NAME_PROPERTY)},
	{"SYMBOL_TABLE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SYMBOL_TABLE_PROPERTY)},
	{"ERROR_REPORTER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ERROR_REPORTER_PROPERTY)},
	{"ERROR_HANDLER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ERROR_HANDLER_PROPERTY)},
	{"XINCLUDE_HANDLER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XINCLUDE_HANDLER_PROPERTY)},
	{"XPOINTER_HANDLER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XPOINTER_HANDLER_PROPERTY)},
	{"ENTITY_MANAGER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ENTITY_MANAGER_PROPERTY)},
	{"BUFFER_SIZE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, BUFFER_SIZE_PROPERTY)},
	{"SECURITY_MANAGER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SECURITY_MANAGER_PROPERTY)},
	{"LOCALE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LOCALE_PROPERTY)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SECURITY_MANAGER)},
	{"ENTITY_RESOLVER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ENTITY_RESOLVER_PROPERTY)},
	{"XMLGRAMMAR_POOL_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XMLGRAMMAR_POOL_PROPERTY)},
	{"DATATYPE_VALIDATOR_FACTORY_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DATATYPE_VALIDATOR_FACTORY_PROPERTY)},
	{"DOCUMENT_SCANNER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DOCUMENT_SCANNER_PROPERTY)},
	{"DTD_SCANNER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DTD_SCANNER_PROPERTY)},
	{"DTD_PROCESSOR_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DTD_PROCESSOR_PROPERTY)},
	{"VALIDATOR_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, VALIDATOR_PROPERTY)},
	{"DTD_VALIDATOR_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, DTD_VALIDATOR_PROPERTY)},
	{"SCHEMA_VALIDATOR_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_VALIDATOR_PROPERTY)},
	{"SCHEMA_LOCATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_LOCATION)},
	{"SCHEMA_NONS_LOCATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_NONS_LOCATION)},
	{"NAMESPACE_BINDER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMESPACE_BINDER_PROPERTY)},
	{"NAMESPACE_CONTEXT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMESPACE_CONTEXT_PROPERTY)},
	{"VALIDATION_MANAGER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, VALIDATION_MANAGER_PROPERTY)},
	{"ROOT_TYPE_DEFINITION_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ROOT_TYPE_DEFINITION_PROPERTY)},
	{"ROOT_ELEMENT_DECLARATION_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ROOT_ELEMENT_DECLARATION_PROPERTY)},
	{"XPOINTER_SCHEMA_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XPOINTER_SCHEMA_PROPERTY)},
	{"SCHEMA_DV_FACTORY_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SCHEMA_DV_FACTORY_PROPERTY)},
	{"ELEMENT_PSVI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ELEMENT_PSVI)},
	{"ATTRIBUTE_PSVI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ATTRIBUTE_PSVI)},
	{"ATTRIBUTE_DECLARED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ATTRIBUTE_DECLARED)},
	{"TYPEINFO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, TYPEINFO)},
	{"ID_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ID_ATTRIBUTE)},
	{"ENTITY_SKIPPED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ENTITY_SKIPPED)},
	{"CHAR_REF_PROBABLE_WS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, CHAR_REF_PROBABLE_WS)},
	{"LAST_ENTITY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, LAST_ENTITY)},
	{"XML_VERSION_ERROR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, XML_VERSION_ERROR)},
	{"XML_VERSION_1_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, XML_VERSION_1_0)},
	{"XML_VERSION_1_1", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, XML_VERSION_1_1)},
	{"ANONYMOUS_TYPE_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ANONYMOUS_TYPE_NAMESPACE)},
	{"SCHEMA_1_1_SUPPORT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, SCHEMA_1_1_SUPPORT)},
	{"SCHEMA_VERSION_1_0", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, SCHEMA_VERSION_1_0)},
	{"SCHEMA_VERSION_1_0_EXTENDED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, SCHEMA_VERSION_1_0_EXTENDED)},
	{"fgSAXFeatures", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Constants, fgSAXFeatures)},
	{"fgSAXProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Constants, fgSAXProperties)},
	{"fgXercesFeatures", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Constants, fgXercesFeatures)},
	{"fgXercesProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Constants, fgXercesProperties)},
	{"fgEmptyEnumeration", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Constants, fgEmptyEnumeration)},
	{}
};

$MethodInfo _Constants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Constants, init$, void)},
	{"getSAXFeatures", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC | $STATIC, $staticMethod(Constants, getSAXFeatures, $Enumeration*)},
	{"getSAXProperties", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC | $STATIC, $staticMethod(Constants, getSAXProperties, $Enumeration*)},
	{"getXercesFeatures", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC | $STATIC, $staticMethod(Constants, getXercesFeatures, $Enumeration*)},
	{"getXercesProperties", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC | $STATIC, $staticMethod(Constants, getXercesProperties, $Enumeration*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Constants, main, void, $StringArray*)},
	{"print", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Constants, print, void, $String*, $String*, $ObjectArray*)},
	{}
};

$InnerClassInfo _Constants_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.Constants$ArrayEnumeration", "com.sun.org.apache.xerces.internal.impl.Constants", "ArrayEnumeration", $STATIC},
	{}
};

$ClassInfo _Constants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.Constants",
	"java.lang.Object",
	nullptr,
	_Constants_FieldInfo_,
	_Constants_MethodInfo_,
	nullptr,
	nullptr,
	_Constants_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.Constants$ArrayEnumeration"
};

$Object* allocate$Constants($Class* clazz) {
	return $of($alloc(Constants));
}

$String* Constants::NS_XMLSCHEMA = nullptr;
$String* Constants::NS_DTD = nullptr;
$String* Constants::W3C_XML_SCHEMA10_NS_URI = nullptr;
$String* Constants::SUN_SCHEMA_FEATURE_PREFIX = nullptr;
$String* Constants::SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE = nullptr;
$String* Constants::ZEPHYR_PROPERTY_PREFIX = nullptr;
$String* Constants::STAX_PROPERTIES = nullptr;
$String* Constants::STAX_ENTITY_RESOLVER_PROPERTY = nullptr;
$String* Constants::STAX_REPORT_CDATA_EVENT = nullptr;
$String* Constants::READER_IN_DEFINED_STATE = nullptr;
$String* Constants::ADD_NAMESPACE_DECL_AS_ATTRIBUTE = nullptr;
$String* Constants::ESCAPE_CHARACTERS = nullptr;
$String* Constants::REUSE_INSTANCE = nullptr;
$String* Constants::SUN_DOM_PROPERTY_PREFIX = nullptr;
$String* Constants::SUN_DOM_ANCESTOR_CHECCK = nullptr;
$String* Constants::IGNORE_EXTERNAL_DTD = nullptr;
$String* Constants::SAX_FEATURE_PREFIX = nullptr;
$String* Constants::NAMESPACES_FEATURE = nullptr;
$String* Constants::NAMESPACE_PREFIXES_FEATURE = nullptr;
$String* Constants::STRING_INTERNING_FEATURE = nullptr;
$String* Constants::VALIDATION_FEATURE = nullptr;
$String* Constants::EXTERNAL_GENERAL_ENTITIES_FEATURE = nullptr;
$String* Constants::EXTERNAL_PARAMETER_ENTITIES_FEATURE = nullptr;
$String* Constants::LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE = nullptr;
$String* Constants::IS_STANDALONE_FEATURE = nullptr;
$String* Constants::RESOLVE_DTD_URIS_FEATURE = nullptr;
$String* Constants::USE_ATTRIBUTES2_FEATURE = nullptr;
$String* Constants::USE_LOCATOR2_FEATURE = nullptr;
$String* Constants::USE_ENTITY_RESOLVER2_FEATURE = nullptr;
$String* Constants::UNICODE_NORMALIZATION_CHECKING_FEATURE = nullptr;
$String* Constants::XMLNS_URIS_FEATURE = nullptr;
$String* Constants::XML_11_FEATURE = nullptr;
$String* Constants::ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE = nullptr;
$String* Constants::SAX_PROPERTY_PREFIX = nullptr;
$String* Constants::DECLARATION_HANDLER_PROPERTY = nullptr;
$String* Constants::LEXICAL_HANDLER_PROPERTY = nullptr;
$String* Constants::DOM_NODE_PROPERTY = nullptr;
$String* Constants::XML_STRING_PROPERTY = nullptr;
$String* Constants::FEATURE_SECURE_PROCESSING = nullptr;
$String* Constants::DOCUMENT_XML_VERSION_PROPERTY = nullptr;
$String* Constants::JAXP_PROPERTY_PREFIX = nullptr;
$String* Constants::SCHEMA_SOURCE = nullptr;
$String* Constants::SCHEMA_LANGUAGE = nullptr;
$String* Constants::JAXPAPI_PROPERTY_PREFIX = nullptr;
$String* Constants::INCLUDE_COMMENTS_FEATURE = nullptr;
$String* Constants::CREATE_CDATA_NODES_FEATURE = nullptr;
$String* Constants::LOAD_AS_INFOSET = nullptr;
$String* Constants::DOM_CANONICAL_FORM = nullptr;
$String* Constants::DOM_CDATA_SECTIONS = nullptr;
$String* Constants::DOM_COMMENTS = nullptr;
$String* Constants::DOM_CHARSET_OVERRIDES_XML_ENCODING = nullptr;
$String* Constants::DOM_DATATYPE_NORMALIZATION = nullptr;
$String* Constants::DOM_ENTITIES = nullptr;
$String* Constants::DOM_INFOSET = nullptr;
$String* Constants::DOM_NAMESPACES = nullptr;
$String* Constants::DOM_NAMESPACE_DECLARATIONS = nullptr;
$String* Constants::DOM_SUPPORTED_MEDIATYPES_ONLY = nullptr;
$String* Constants::DOM_VALIDATE_IF_SCHEMA = nullptr;
$String* Constants::DOM_VALIDATE = nullptr;
$String* Constants::DOM_ELEMENT_CONTENT_WHITESPACE = nullptr;
$String* Constants::DOM_DISCARD_DEFAULT_CONTENT = nullptr;
$String* Constants::DOM_NORMALIZE_CHARACTERS = nullptr;
$String* Constants::DOM_CHECK_CHAR_NORMALIZATION = nullptr;
$String* Constants::DOM_WELLFORMED = nullptr;
$String* Constants::DOM_SPLIT_CDATA = nullptr;
$String* Constants::DOM_FORMAT_PRETTY_PRINT = nullptr;
$String* Constants::DOM_XMLDECL = nullptr;
$String* Constants::DOM_UNKNOWNCHARS = nullptr;
$String* Constants::DOM_CERTIFIED = nullptr;
$String* Constants::DOM_DISALLOW_DOCTYPE = nullptr;
$String* Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS = nullptr;
$String* Constants::DOM_RESOURCE_RESOLVER = nullptr;
$String* Constants::DOM_ERROR_HANDLER = nullptr;
$String* Constants::DOM_SCHEMA_TYPE = nullptr;
$String* Constants::DOM_SCHEMA_LOCATION = nullptr;
$String* Constants::DOM_ANCESTOR_CHECCK = nullptr;
$String* Constants::DOM_PSVI = nullptr;
$String* Constants::XERCES_FEATURE_PREFIX = nullptr;
$String* Constants::SCHEMA_VALIDATION_FEATURE = nullptr;
$String* Constants::SCHEMA_NORMALIZED_VALUE = nullptr;
$String* Constants::SCHEMA_ELEMENT_DEFAULT = nullptr;
$String* Constants::SCHEMA_FULL_CHECKING = nullptr;
$String* Constants::SCHEMA_AUGMENT_PSVI = nullptr;
$String* Constants::DYNAMIC_VALIDATION_FEATURE = nullptr;
$String* Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE = nullptr;
$String* Constants::WARN_ON_UNDECLARED_ELEMDEF_FEATURE = nullptr;
$String* Constants::WARN_ON_DUPLICATE_ENTITYDEF_FEATURE = nullptr;
$String* Constants::ALLOW_JAVA_ENCODINGS_FEATURE = nullptr;
$String* Constants::DISALLOW_DOCTYPE_DECL_FEATURE = nullptr;
$String* Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE = nullptr;
$String* Constants::LOAD_DTD_GRAMMAR_FEATURE = nullptr;
$String* Constants::LOAD_EXTERNAL_DTD_FEATURE = nullptr;
$String* Constants::DEFER_NODE_EXPANSION_FEATURE = nullptr;
$String* Constants::CREATE_ENTITY_REF_NODES_FEATURE = nullptr;
$String* Constants::INCLUDE_IGNORABLE_WHITESPACE = nullptr;
$String* Constants::DEFAULT_ATTRIBUTE_VALUES_FEATURE = nullptr;
$String* Constants::VALIDATE_CONTENT_MODELS_FEATURE = nullptr;
$String* Constants::VALIDATE_DATATYPES_FEATURE = nullptr;
$String* Constants::BALANCE_SYNTAX_TREES = nullptr;
$String* Constants::NOTIFY_CHAR_REFS_FEATURE = nullptr;
$String* Constants::NOTIFY_BUILTIN_REFS_FEATURE = nullptr;
$String* Constants::STANDARD_URI_CONFORMANT_FEATURE = nullptr;
$String* Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE = nullptr;
$String* Constants::VALIDATE_ANNOTATIONS_FEATURE = nullptr;
$String* Constants::HONOUR_ALL_SCHEMALOCATIONS_FEATURE = nullptr;
$String* Constants::NAMESPACE_GROWTH_FEATURE = nullptr;
$String* Constants::TOLERATE_DUPLICATES_FEATURE = nullptr;
$String* Constants::XINCLUDE_FEATURE = nullptr;
$String* Constants::XINCLUDE_FIXUP_BASE_URIS_FEATURE = nullptr;
$String* Constants::XINCLUDE_FIXUP_LANGUAGE_FEATURE = nullptr;
$String* Constants::IGNORE_XSI_TYPE_FEATURE = nullptr;
$String* Constants::ID_IDREF_CHECKING_FEATURE = nullptr;
$String* Constants::IDC_CHECKING_FEATURE = nullptr;
$String* Constants::UNPARSED_ENTITY_CHECKING_FEATURE = nullptr;
$String* Constants::USE_GRAMMAR_POOL_ONLY_FEATURE = nullptr;
$String* Constants::PARSER_SETTINGS = nullptr;
$String* Constants::XINCLUDE_AWARE = nullptr;
$String* Constants::IGNORE_SCHEMA_LOCATION_HINTS = nullptr;
$String* Constants::CHANGE_IGNORABLE_CHARACTERS_INTO_IGNORABLE_WHITESPACES = nullptr;
$String* Constants::XERCES_PROPERTY_PREFIX = nullptr;
$String* Constants::CURRENT_ELEMENT_NODE_PROPERTY = nullptr;
$String* Constants::DOCUMENT_CLASS_NAME_PROPERTY = nullptr;
$String* Constants::SYMBOL_TABLE_PROPERTY = nullptr;
$String* Constants::ERROR_REPORTER_PROPERTY = nullptr;
$String* Constants::ERROR_HANDLER_PROPERTY = nullptr;
$String* Constants::XINCLUDE_HANDLER_PROPERTY = nullptr;
$String* Constants::XPOINTER_HANDLER_PROPERTY = nullptr;
$String* Constants::ENTITY_MANAGER_PROPERTY = nullptr;
$String* Constants::BUFFER_SIZE_PROPERTY = nullptr;
$String* Constants::SECURITY_MANAGER_PROPERTY = nullptr;
$String* Constants::LOCALE_PROPERTY = nullptr;
$String* Constants::SECURITY_MANAGER = nullptr;
$String* Constants::ENTITY_RESOLVER_PROPERTY = nullptr;
$String* Constants::XMLGRAMMAR_POOL_PROPERTY = nullptr;
$String* Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY = nullptr;
$String* Constants::DOCUMENT_SCANNER_PROPERTY = nullptr;
$String* Constants::DTD_SCANNER_PROPERTY = nullptr;
$String* Constants::DTD_PROCESSOR_PROPERTY = nullptr;
$String* Constants::VALIDATOR_PROPERTY = nullptr;
$String* Constants::DTD_VALIDATOR_PROPERTY = nullptr;
$String* Constants::SCHEMA_VALIDATOR_PROPERTY = nullptr;
$String* Constants::SCHEMA_LOCATION = nullptr;
$String* Constants::SCHEMA_NONS_LOCATION = nullptr;
$String* Constants::NAMESPACE_BINDER_PROPERTY = nullptr;
$String* Constants::NAMESPACE_CONTEXT_PROPERTY = nullptr;
$String* Constants::VALIDATION_MANAGER_PROPERTY = nullptr;
$String* Constants::ROOT_TYPE_DEFINITION_PROPERTY = nullptr;
$String* Constants::ROOT_ELEMENT_DECLARATION_PROPERTY = nullptr;
$String* Constants::XPOINTER_SCHEMA_PROPERTY = nullptr;
$String* Constants::SCHEMA_DV_FACTORY_PROPERTY = nullptr;
$String* Constants::ELEMENT_PSVI = nullptr;
$String* Constants::ATTRIBUTE_PSVI = nullptr;
$String* Constants::ATTRIBUTE_DECLARED = nullptr;
$String* Constants::TYPEINFO = nullptr;
$String* Constants::ID_ATTRIBUTE = nullptr;
$String* Constants::ENTITY_SKIPPED = nullptr;
$String* Constants::CHAR_REF_PROBABLE_WS = nullptr;
$String* Constants::LAST_ENTITY = nullptr;
$String* Constants::ANONYMOUS_TYPE_NAMESPACE = nullptr;
$StringArray* Constants::fgSAXFeatures = nullptr;
$StringArray* Constants::fgSAXProperties = nullptr;
$StringArray* Constants::fgXercesFeatures = nullptr;
$StringArray* Constants::fgXercesProperties = nullptr;
$Enumeration* Constants::fgEmptyEnumeration = nullptr;

void Constants::init$() {
}

$Enumeration* Constants::getSAXFeatures() {
	$init(Constants);
	return $nc(Constants::fgSAXFeatures)->length > 0 ? static_cast<$Enumeration*>($new($Constants$ArrayEnumeration, Constants::fgSAXFeatures)) : Constants::fgEmptyEnumeration;
}

$Enumeration* Constants::getSAXProperties() {
	$init(Constants);
	return $nc(Constants::fgSAXProperties)->length > 0 ? static_cast<$Enumeration*>($new($Constants$ArrayEnumeration, Constants::fgSAXProperties)) : Constants::fgEmptyEnumeration;
}

$Enumeration* Constants::getXercesFeatures() {
	$init(Constants);
	return $nc(Constants::fgXercesFeatures)->length > 0 ? static_cast<$Enumeration*>($new($Constants$ArrayEnumeration, Constants::fgXercesFeatures)) : Constants::fgEmptyEnumeration;
}

$Enumeration* Constants::getXercesProperties() {
	$init(Constants);
	return $nc(Constants::fgXercesProperties)->length > 0 ? static_cast<$Enumeration*>($new($Constants$ArrayEnumeration, Constants::fgXercesProperties)) : Constants::fgEmptyEnumeration;
}

void Constants::main($StringArray* argv) {
	$init(Constants);
	print("SAX features:"_s, Constants::SAX_FEATURE_PREFIX, Constants::fgSAXFeatures);
	print("SAX properties:"_s, Constants::SAX_PROPERTY_PREFIX, Constants::fgSAXProperties);
	print("Xerces features:"_s, Constants::XERCES_FEATURE_PREFIX, Constants::fgXercesFeatures);
	print("Xerces properties:"_s, Constants::XERCES_PROPERTY_PREFIX, Constants::fgXercesProperties);
}

void Constants::print($String* header, $String* prefix, $ObjectArray* array) {
	$init(Constants);
	$nc($System::out)->print(header);
	if ($nc(array)->length > 0) {
		$nc($System::out)->println();
		for (int32_t i = 0; i < array->length; ++i) {
			$nc($System::out)->print("  "_s);
			$nc($System::out)->print(prefix);
			$nc($System::out)->println(array->get(i));
		}
	} else {
		$nc($System::out)->println(" none."_s);
	}
}

void clinit$Constants($Class* class$) {
	$assignStatic(Constants::SUN_SCHEMA_FEATURE_PREFIX, "http://java.sun.com/xml/schema/features/"_s);
	$assignStatic(Constants::SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE, "report-ignored-element-content-whitespace"_s);
	$assignStatic(Constants::ZEPHYR_PROPERTY_PREFIX, "http://java.sun.com/xml/stream/properties/"_s);
	$assignStatic(Constants::STAX_PROPERTIES, "stax-properties"_s);
	$assignStatic(Constants::STAX_ENTITY_RESOLVER_PROPERTY, "internal/stax-entity-resolver"_s);
	$assignStatic(Constants::STAX_REPORT_CDATA_EVENT, "report-cdata-event"_s);
	$assignStatic(Constants::READER_IN_DEFINED_STATE, $str({Constants::ZEPHYR_PROPERTY_PREFIX, "reader-in-defined-state"_s}));
	$assignStatic(Constants::ADD_NAMESPACE_DECL_AS_ATTRIBUTE, "add-namespacedecl-as-attrbiute"_s);
	$assignStatic(Constants::ESCAPE_CHARACTERS, "escapeCharacters"_s);
	$assignStatic(Constants::REUSE_INSTANCE, "reuse-instance"_s);
	$assignStatic(Constants::SUN_DOM_PROPERTY_PREFIX, "http://java.sun.com/xml/dom/properties/"_s);
	$assignStatic(Constants::SUN_DOM_ANCESTOR_CHECCK, "ancestor-check"_s);
	$assignStatic(Constants::IGNORE_EXTERNAL_DTD, "ignore-external-dtd"_s);
	$assignStatic(Constants::SAX_FEATURE_PREFIX, "http://xml.org/sax/features/"_s);
	$assignStatic(Constants::NAMESPACES_FEATURE, "namespaces"_s);
	$assignStatic(Constants::NAMESPACE_PREFIXES_FEATURE, "namespace-prefixes"_s);
	$assignStatic(Constants::STRING_INTERNING_FEATURE, "string-interning"_s);
	$assignStatic(Constants::VALIDATION_FEATURE, "validation"_s);
	$assignStatic(Constants::EXTERNAL_GENERAL_ENTITIES_FEATURE, "external-general-entities"_s);
	$assignStatic(Constants::EXTERNAL_PARAMETER_ENTITIES_FEATURE, "external-parameter-entities"_s);
	$assignStatic(Constants::LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE, "lexical-handler/parameter-entities"_s);
	$assignStatic(Constants::IS_STANDALONE_FEATURE, "is-standalone"_s);
	$assignStatic(Constants::RESOLVE_DTD_URIS_FEATURE, "resolve-dtd-uris"_s);
	$assignStatic(Constants::USE_ATTRIBUTES2_FEATURE, "use-attributes2"_s);
	$assignStatic(Constants::USE_LOCATOR2_FEATURE, "use-locator2"_s);
	$assignStatic(Constants::USE_ENTITY_RESOLVER2_FEATURE, "use-entity-resolver2"_s);
	$assignStatic(Constants::UNICODE_NORMALIZATION_CHECKING_FEATURE, "unicode-normalization-checking"_s);
	$assignStatic(Constants::XMLNS_URIS_FEATURE, "xmlns-uris"_s);
	$assignStatic(Constants::XML_11_FEATURE, "xml-1.1"_s);
	$assignStatic(Constants::ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE, "allow-dtd-events-after-endDTD"_s);
	$assignStatic(Constants::SAX_PROPERTY_PREFIX, "http://xml.org/sax/properties/"_s);
	$assignStatic(Constants::DECLARATION_HANDLER_PROPERTY, "declaration-handler"_s);
	$assignStatic(Constants::LEXICAL_HANDLER_PROPERTY, "lexical-handler"_s);
	$assignStatic(Constants::DOM_NODE_PROPERTY, "dom-node"_s);
	$assignStatic(Constants::XML_STRING_PROPERTY, "xml-string"_s);
	$assignStatic(Constants::FEATURE_SECURE_PROCESSING, "http://javax.xml.XMLConstants/feature/secure-processing"_s);
	$assignStatic(Constants::DOCUMENT_XML_VERSION_PROPERTY, "document-xml-version"_s);
	$assignStatic(Constants::JAXP_PROPERTY_PREFIX, "http://java.sun.com/xml/jaxp/properties/"_s);
	$assignStatic(Constants::SCHEMA_SOURCE, "schemaSource"_s);
	$assignStatic(Constants::SCHEMA_LANGUAGE, "schemaLanguage"_s);
	$assignStatic(Constants::JAXPAPI_PROPERTY_PREFIX, "http://javax.xml.XMLConstants/property/"_s);
	$assignStatic(Constants::INCLUDE_COMMENTS_FEATURE, "include-comments"_s);
	$assignStatic(Constants::CREATE_CDATA_NODES_FEATURE, "create-cdata-nodes"_s);
	$assignStatic(Constants::LOAD_AS_INFOSET, "load-as-infoset"_s);
	$assignStatic(Constants::DOM_CANONICAL_FORM, "canonical-form"_s);
	$assignStatic(Constants::DOM_CDATA_SECTIONS, "cdata-sections"_s);
	$assignStatic(Constants::DOM_COMMENTS, "comments"_s);
	$assignStatic(Constants::DOM_CHARSET_OVERRIDES_XML_ENCODING, "charset-overrides-xml-encoding"_s);
	$assignStatic(Constants::DOM_DATATYPE_NORMALIZATION, "datatype-normalization"_s);
	$assignStatic(Constants::DOM_ENTITIES, "entities"_s);
	$assignStatic(Constants::DOM_INFOSET, "infoset"_s);
	$assignStatic(Constants::DOM_NAMESPACES, "namespaces"_s);
	$assignStatic(Constants::DOM_NAMESPACE_DECLARATIONS, "namespace-declarations"_s);
	$assignStatic(Constants::DOM_SUPPORTED_MEDIATYPES_ONLY, "supported-media-types-only"_s);
	$assignStatic(Constants::DOM_VALIDATE_IF_SCHEMA, "validate-if-schema"_s);
	$assignStatic(Constants::DOM_VALIDATE, "validate"_s);
	$assignStatic(Constants::DOM_ELEMENT_CONTENT_WHITESPACE, "element-content-whitespace"_s);
	$assignStatic(Constants::DOM_DISCARD_DEFAULT_CONTENT, "discard-default-content"_s);
	$assignStatic(Constants::DOM_NORMALIZE_CHARACTERS, "normalize-characters"_s);
	$assignStatic(Constants::DOM_CHECK_CHAR_NORMALIZATION, "check-character-normalization"_s);
	$assignStatic(Constants::DOM_WELLFORMED, "well-formed"_s);
	$assignStatic(Constants::DOM_SPLIT_CDATA, "split-cdata-sections"_s);
	$assignStatic(Constants::DOM_FORMAT_PRETTY_PRINT, "format-pretty-print"_s);
	$assignStatic(Constants::DOM_XMLDECL, "xml-declaration"_s);
	$assignStatic(Constants::DOM_UNKNOWNCHARS, "unknown-characters"_s);
	$assignStatic(Constants::DOM_CERTIFIED, "certified"_s);
	$assignStatic(Constants::DOM_DISALLOW_DOCTYPE, "disallow-doctype"_s);
	$assignStatic(Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS, "ignore-unknown-character-denormalizations"_s);
	$assignStatic(Constants::DOM_RESOURCE_RESOLVER, "resource-resolver"_s);
	$assignStatic(Constants::DOM_ERROR_HANDLER, "error-handler"_s);
	$assignStatic(Constants::DOM_SCHEMA_TYPE, "schema-type"_s);
	$assignStatic(Constants::DOM_SCHEMA_LOCATION, "schema-location"_s);
	$assignStatic(Constants::DOM_ANCESTOR_CHECCK, "ancestor-check"_s);
	$assignStatic(Constants::DOM_PSVI, "psvi"_s);
	$assignStatic(Constants::XERCES_FEATURE_PREFIX, "http://apache.org/xml/features/"_s);
	$assignStatic(Constants::SCHEMA_VALIDATION_FEATURE, "validation/schema"_s);
	$assignStatic(Constants::SCHEMA_NORMALIZED_VALUE, "validation/schema/normalized-value"_s);
	$assignStatic(Constants::SCHEMA_ELEMENT_DEFAULT, "validation/schema/element-default"_s);
	$assignStatic(Constants::SCHEMA_FULL_CHECKING, "validation/schema-full-checking"_s);
	$assignStatic(Constants::SCHEMA_AUGMENT_PSVI, "validation/schema/augment-psvi"_s);
	$assignStatic(Constants::DYNAMIC_VALIDATION_FEATURE, "validation/dynamic"_s);
	$assignStatic(Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE, "validation/warn-on-duplicate-attdef"_s);
	$assignStatic(Constants::WARN_ON_UNDECLARED_ELEMDEF_FEATURE, "validation/warn-on-undeclared-elemdef"_s);
	$assignStatic(Constants::WARN_ON_DUPLICATE_ENTITYDEF_FEATURE, "warn-on-duplicate-entitydef"_s);
	$assignStatic(Constants::ALLOW_JAVA_ENCODINGS_FEATURE, "allow-java-encodings"_s);
	$assignStatic(Constants::DISALLOW_DOCTYPE_DECL_FEATURE, "disallow-doctype-decl"_s);
	$assignStatic(Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE, "continue-after-fatal-error"_s);
	$assignStatic(Constants::LOAD_DTD_GRAMMAR_FEATURE, "nonvalidating/load-dtd-grammar"_s);
	$assignStatic(Constants::LOAD_EXTERNAL_DTD_FEATURE, "nonvalidating/load-external-dtd"_s);
	$assignStatic(Constants::DEFER_NODE_EXPANSION_FEATURE, "dom/defer-node-expansion"_s);
	$assignStatic(Constants::CREATE_ENTITY_REF_NODES_FEATURE, "dom/create-entity-ref-nodes"_s);
	$assignStatic(Constants::INCLUDE_IGNORABLE_WHITESPACE, "dom/include-ignorable-whitespace"_s);
	$assignStatic(Constants::DEFAULT_ATTRIBUTE_VALUES_FEATURE, "validation/default-attribute-values"_s);
	$assignStatic(Constants::VALIDATE_CONTENT_MODELS_FEATURE, "validation/validate-content-models"_s);
	$assignStatic(Constants::VALIDATE_DATATYPES_FEATURE, "validation/validate-datatypes"_s);
	$assignStatic(Constants::BALANCE_SYNTAX_TREES, "validation/balance-syntax-trees"_s);
	$assignStatic(Constants::NOTIFY_CHAR_REFS_FEATURE, "scanner/notify-char-refs"_s);
	$assignStatic(Constants::NOTIFY_BUILTIN_REFS_FEATURE, "scanner/notify-builtin-refs"_s);
	$assignStatic(Constants::STANDARD_URI_CONFORMANT_FEATURE, "standard-uri-conformant"_s);
	$assignStatic(Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE, "generate-synthetic-annotations"_s);
	$assignStatic(Constants::VALIDATE_ANNOTATIONS_FEATURE, "validate-annotations"_s);
	$assignStatic(Constants::HONOUR_ALL_SCHEMALOCATIONS_FEATURE, "honour-all-schemaLocations"_s);
	$assignStatic(Constants::NAMESPACE_GROWTH_FEATURE, "namespace-growth"_s);
	$assignStatic(Constants::TOLERATE_DUPLICATES_FEATURE, "internal/tolerate-duplicates"_s);
	$assignStatic(Constants::XINCLUDE_FEATURE, "xinclude"_s);
	$assignStatic(Constants::XINCLUDE_FIXUP_BASE_URIS_FEATURE, "xinclude/fixup-base-uris"_s);
	$assignStatic(Constants::XINCLUDE_FIXUP_LANGUAGE_FEATURE, "xinclude/fixup-language"_s);
	$assignStatic(Constants::IGNORE_XSI_TYPE_FEATURE, "validation/schema/ignore-xsi-type-until-elemdecl"_s);
	$assignStatic(Constants::ID_IDREF_CHECKING_FEATURE, "validation/id-idref-checking"_s);
	$assignStatic(Constants::IDC_CHECKING_FEATURE, "validation/identity-constraint-checking"_s);
	$assignStatic(Constants::UNPARSED_ENTITY_CHECKING_FEATURE, "validation/unparsed-entity-checking"_s);
	$assignStatic(Constants::USE_GRAMMAR_POOL_ONLY_FEATURE, "internal/validation/schema/use-grammar-pool-only"_s);
	$assignStatic(Constants::PARSER_SETTINGS, "internal/parser-settings"_s);
	$assignStatic(Constants::XINCLUDE_AWARE, "xinclude-aware"_s);
	$assignStatic(Constants::IGNORE_SCHEMA_LOCATION_HINTS, "validation/schema/ignore-schema-location-hints"_s);
	$assignStatic(Constants::CHANGE_IGNORABLE_CHARACTERS_INTO_IGNORABLE_WHITESPACES, "validation/change-ignorable-characters-into-ignorable-whitespaces"_s);
	$assignStatic(Constants::XERCES_PROPERTY_PREFIX, "http://apache.org/xml/properties/"_s);
	$assignStatic(Constants::CURRENT_ELEMENT_NODE_PROPERTY, "dom/current-element-node"_s);
	$assignStatic(Constants::DOCUMENT_CLASS_NAME_PROPERTY, "dom/document-class-name"_s);
	$assignStatic(Constants::SYMBOL_TABLE_PROPERTY, "internal/symbol-table"_s);
	$assignStatic(Constants::ERROR_REPORTER_PROPERTY, "internal/error-reporter"_s);
	$assignStatic(Constants::ERROR_HANDLER_PROPERTY, "internal/error-handler"_s);
	$assignStatic(Constants::XINCLUDE_HANDLER_PROPERTY, "internal/xinclude-handler"_s);
	$assignStatic(Constants::XPOINTER_HANDLER_PROPERTY, "internal/xpointer-handler"_s);
	$assignStatic(Constants::ENTITY_MANAGER_PROPERTY, "internal/entity-manager"_s);
	$assignStatic(Constants::BUFFER_SIZE_PROPERTY, "input-buffer-size"_s);
	$assignStatic(Constants::SECURITY_MANAGER_PROPERTY, "security-manager"_s);
	$assignStatic(Constants::LOCALE_PROPERTY, "locale"_s);
	$assignStatic(Constants::SECURITY_MANAGER, $str({Constants::XERCES_PROPERTY_PREFIX, Constants::SECURITY_MANAGER_PROPERTY}));
	$assignStatic(Constants::ENTITY_RESOLVER_PROPERTY, "internal/entity-resolver"_s);
	$assignStatic(Constants::XMLGRAMMAR_POOL_PROPERTY, "internal/grammar-pool"_s);
	$assignStatic(Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY, "internal/datatype-validator-factory"_s);
	$assignStatic(Constants::DOCUMENT_SCANNER_PROPERTY, "internal/document-scanner"_s);
	$assignStatic(Constants::DTD_SCANNER_PROPERTY, "internal/dtd-scanner"_s);
	$assignStatic(Constants::DTD_PROCESSOR_PROPERTY, "internal/dtd-processor"_s);
	$assignStatic(Constants::VALIDATOR_PROPERTY, "internal/validator"_s);
	$assignStatic(Constants::DTD_VALIDATOR_PROPERTY, "internal/validator/dtd"_s);
	$assignStatic(Constants::SCHEMA_VALIDATOR_PROPERTY, "internal/validator/schema"_s);
	$assignStatic(Constants::SCHEMA_LOCATION, "schema/external-schemaLocation"_s);
	$assignStatic(Constants::SCHEMA_NONS_LOCATION, "schema/external-noNamespaceSchemaLocation"_s);
	$assignStatic(Constants::NAMESPACE_BINDER_PROPERTY, "internal/namespace-binder"_s);
	$assignStatic(Constants::NAMESPACE_CONTEXT_PROPERTY, "internal/namespace-context"_s);
	$assignStatic(Constants::VALIDATION_MANAGER_PROPERTY, "internal/validation-manager"_s);
	$assignStatic(Constants::ROOT_TYPE_DEFINITION_PROPERTY, "validation/schema/root-type-definition"_s);
	$assignStatic(Constants::ROOT_ELEMENT_DECLARATION_PROPERTY, "validation/schema/root-element-declaration"_s);
	$assignStatic(Constants::XPOINTER_SCHEMA_PROPERTY, "xpointer-schema"_s);
	$assignStatic(Constants::SCHEMA_DV_FACTORY_PROPERTY, "internal/validation/schema/dv-factory"_s);
	$assignStatic(Constants::ELEMENT_PSVI, "ELEMENT_PSVI"_s);
	$assignStatic(Constants::ATTRIBUTE_PSVI, "ATTRIBUTE_PSVI"_s);
	$assignStatic(Constants::ATTRIBUTE_DECLARED, "ATTRIBUTE_DECLARED"_s);
	$assignStatic(Constants::TYPEINFO, "org.w3c.dom.TypeInfo"_s);
	$assignStatic(Constants::ID_ATTRIBUTE, "ID_ATTRIBUTE"_s);
	$assignStatic(Constants::ENTITY_SKIPPED, "ENTITY_SKIPPED"_s);
	$assignStatic(Constants::CHAR_REF_PROBABLE_WS, "CHAR_REF_PROBABLE_WS"_s);
	$assignStatic(Constants::LAST_ENTITY, "LAST_ENTITY"_s);
	$assignStatic(Constants::ANONYMOUS_TYPE_NAMESPACE, "http://apache.org/xml/xmlschema/1.0/anonymousTypes"_s);
	$assignStatic(Constants::NS_XMLSCHEMA, "http://www.w3.org/2001/XMLSchema"_s->intern());
	$assignStatic(Constants::NS_DTD, "http://www.w3.org/TR/REC-xml"_s->intern());
	$assignStatic(Constants::W3C_XML_SCHEMA10_NS_URI, "http://www.w3.org/XML/XMLSchema/v1.0"_s->intern());
	$assignStatic(Constants::fgSAXFeatures, $new($StringArray, {
		Constants::NAMESPACES_FEATURE,
		Constants::NAMESPACE_PREFIXES_FEATURE,
		Constants::STRING_INTERNING_FEATURE,
		Constants::VALIDATION_FEATURE,
		Constants::EXTERNAL_GENERAL_ENTITIES_FEATURE,
		Constants::EXTERNAL_PARAMETER_ENTITIES_FEATURE
	}));
	$assignStatic(Constants::fgSAXProperties, $new($StringArray, {
		Constants::DECLARATION_HANDLER_PROPERTY,
		Constants::LEXICAL_HANDLER_PROPERTY,
		Constants::DOM_NODE_PROPERTY,
		Constants::XML_STRING_PROPERTY
	}));
	$assignStatic(Constants::fgXercesFeatures, $new($StringArray, {
		Constants::SCHEMA_VALIDATION_FEATURE,
		Constants::SCHEMA_FULL_CHECKING,
		Constants::DYNAMIC_VALIDATION_FEATURE,
		Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE,
		Constants::WARN_ON_UNDECLARED_ELEMDEF_FEATURE,
		Constants::ALLOW_JAVA_ENCODINGS_FEATURE,
		Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE,
		Constants::LOAD_DTD_GRAMMAR_FEATURE,
		Constants::LOAD_EXTERNAL_DTD_FEATURE,
		Constants::CREATE_ENTITY_REF_NODES_FEATURE,
		Constants::XINCLUDE_AWARE,
		Constants::INCLUDE_IGNORABLE_WHITESPACE,
		Constants::DEFAULT_ATTRIBUTE_VALUES_FEATURE,
		Constants::VALIDATE_CONTENT_MODELS_FEATURE,
		Constants::VALIDATE_DATATYPES_FEATURE,
		Constants::BALANCE_SYNTAX_TREES,
		Constants::NOTIFY_CHAR_REFS_FEATURE,
		Constants::NOTIFY_BUILTIN_REFS_FEATURE,
		Constants::DISALLOW_DOCTYPE_DECL_FEATURE,
		Constants::STANDARD_URI_CONFORMANT_FEATURE,
		Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE,
		Constants::VALIDATE_ANNOTATIONS_FEATURE,
		Constants::HONOUR_ALL_SCHEMALOCATIONS_FEATURE,
		Constants::XINCLUDE_FEATURE,
		Constants::XINCLUDE_FIXUP_BASE_URIS_FEATURE,
		Constants::XINCLUDE_FIXUP_LANGUAGE_FEATURE,
		Constants::IGNORE_XSI_TYPE_FEATURE,
		Constants::ID_IDREF_CHECKING_FEATURE,
		Constants::IDC_CHECKING_FEATURE,
		Constants::UNPARSED_ENTITY_CHECKING_FEATURE,
		Constants::NAMESPACE_GROWTH_FEATURE,
		Constants::TOLERATE_DUPLICATES_FEATURE
	}));
	$assignStatic(Constants::fgXercesProperties, $new($StringArray, {
		Constants::CURRENT_ELEMENT_NODE_PROPERTY,
		Constants::DOCUMENT_CLASS_NAME_PROPERTY,
		Constants::SYMBOL_TABLE_PROPERTY,
		Constants::ERROR_HANDLER_PROPERTY,
		Constants::ERROR_REPORTER_PROPERTY,
		Constants::ENTITY_MANAGER_PROPERTY,
		Constants::ENTITY_RESOLVER_PROPERTY,
		Constants::XMLGRAMMAR_POOL_PROPERTY,
		Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY,
		Constants::DOCUMENT_SCANNER_PROPERTY,
		Constants::DTD_SCANNER_PROPERTY,
		Constants::VALIDATOR_PROPERTY,
		Constants::SCHEMA_LOCATION,
		Constants::SCHEMA_NONS_LOCATION,
		Constants::VALIDATION_MANAGER_PROPERTY,
		Constants::BUFFER_SIZE_PROPERTY,
		Constants::SECURITY_MANAGER_PROPERTY,
		Constants::ROOT_TYPE_DEFINITION_PROPERTY,
		Constants::ROOT_ELEMENT_DECLARATION_PROPERTY,
		Constants::LOCALE_PROPERTY,
		Constants::SCHEMA_DV_FACTORY_PROPERTY
	}));
	$assignStatic(Constants::fgEmptyEnumeration, $new($Constants$ArrayEnumeration, $$new($ObjectArray, 0)));
}

Constants::Constants() {
}

$Class* Constants::load$($String* name, bool initialize) {
	$loadClass(Constants, name, initialize, &_Constants_ClassInfo_, clinit$Constants, allocate$Constants);
	return class$;
}

$Class* Constants::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com