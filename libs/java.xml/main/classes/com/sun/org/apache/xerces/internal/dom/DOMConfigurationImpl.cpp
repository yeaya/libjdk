#include <com/sun/org/apache/xerces/internal/dom/DOMConfigurationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMStringListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMStringList.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <jcpp.h>

#undef BALANCE_SYNTAX_TREES
#undef CATALOG_DEFER
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef CDATA
#undef CDATA_CHUNK_SIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef COMMENTS
#undef DATATYPE_VALIDATOR_FACTORY_PROPERTY
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#undef DOM_CANONICAL_FORM
#undef DOM_CDATA_SECTIONS
#undef DOM_CHECK_CHAR_NORMALIZATION
#undef DOM_COMMENTS
#undef DOM_DATATYPE_NORMALIZATION
#undef DOM_DOMAIN
#undef DOM_ELEMENT_CONTENT_WHITESPACE
#undef DOM_ENTITIES
#undef DOM_ERROR_HANDLER
#undef DOM_INFOSET
#undef DOM_NAMESPACES
#undef DOM_NAMESPACE_DECLARATIONS
#undef DOM_NORMALIZE_CHARACTERS
#undef DOM_PSVI
#undef DOM_RESOURCE_RESOLVER
#undef DOM_SCHEMA_LOCATION
#undef DOM_SCHEMA_TYPE
#undef DOM_SPLIT_CDATA
#undef DOM_VALIDATE
#undef DOM_VALIDATE_IF_SCHEMA
#undef DOM_WELLFORMED
#undef DTD_VALIDATOR_FACTORY_PROPERTY
#undef DTD_VALIDATOR_PROPERTY
#undef DTNORMALIZATION
#undef DYNAMIC_VALIDATION
#undef DYNAMIC_VALIDATION_FEATURE
#undef ENTITIES
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef FALSE
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#undef GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE
#undef GRAMMAR_POOL
#undef HONOUR_ALL_SCHEMALOCATIONS
#undef HONOUR_ALL_SCHEMALOCATIONS_FEATURE
#undef INFOSET_FALSE_PARAMS
#undef INFOSET_MASK
#undef INFOSET_TRUE_PARAMS
#undef JAXP_PROPERTY_PREFIX
#undef JAXP_SCHEMA_LANGUAGE
#undef JAXP_SCHEMA_SOURCE
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef NAMESPACE_GROWTH
#undef NAMESPACE_GROWTH_FEATURE
#undef NORMALIZE_DATA
#undef NOT_FOUND_ERR
#undef NOT_SUPPORTED
#undef NOT_SUPPORTED_ERR
#undef NSDECL
#undef NS_DTD
#undef NS_XMLSCHEMA
#undef OVERRIDE_PARSER
#undef OVERRIDE_PARSER_DEFAULT
#undef PARSER_SETTINGS
#undef PSVI
#undef SAX_FEATURE_PREFIX
#undef SAX_PROPERTY_PREFIX
#undef SCHEMA
#undef SCHEMA_AUGMENT_PSVI
#undef SCHEMA_DV_FACTORY
#undef SCHEMA_DV_FACTORY_PROPERTY
#undef SCHEMA_ELEMENT_DEFAULT
#undef SCHEMA_FULL_CHECKING
#undef SCHEMA_LANGUAGE
#undef SCHEMA_LOCATION
#undef SCHEMA_NONS_LOCATION
#undef SCHEMA_NORMALIZED_VALUE
#undef SCHEMA_SOURCE
#undef SCHEMA_VALIDATION_FEATURE
#undef SECURITY_MANAGER
#undef SEND_PSVI
#undef SPLITCDATA
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TOLERATE_DUPLICATES
#undef TOLERATE_DUPLICATES_FEATURE
#undef TRUE
#undef TYPE_MISMATCH_ERR
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT
#undef USE_GRAMMAR_POOL_ONLY
#undef USE_GRAMMAR_POOL_ONLY_FEATURE
#undef VALIDATE
#undef VALIDATE_ANNOTATIONS
#undef VALIDATE_ANNOTATIONS_FEATURE
#undef VALIDATION_FEATURE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef WARN_ON_DUPLICATE_ATTDEF
#undef WARN_ON_DUPLICATE_ATTDEF_FEATURE
#undef WELLFORMED
#undef XERCES_FEATURE_PREFIX
#undef XERCES_NAMESPACES
#undef XERCES_PROPERTY_PREFIX
#undef XERCES_VALIDATION
#undef XML11_DATATYPE_VALIDATOR_FACTORY
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XMLNS_DOMAIN
#undef XML_DOMAIN
#undef XML_SECURITY_PROPERTY_MANAGER
#undef XML_STRING
#undef XML_STRING_PROPERTY

using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DOMStringListImpl = ::com::sun::org::apache::xerces::internal::dom::DOMStringListImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $DTDDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $DOMEntityResolverWrapper = ::com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper;
using $DOMErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::DOMErrorHandlerWrapper;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $PropertyState = ::com::sun::org::apache::xerces::internal::util::PropertyState;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $StringTokenizer = ::java::util::StringTokenizer;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMStringList = ::org::w3c::dom::DOMStringList;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DOMConfigurationImpl_FieldInfo_[] = {
	{"XML11_DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, XML11_DATATYPE_VALIDATOR_FACTORY)},
	{"XERCES_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, XERCES_VALIDATION)},
	{"XERCES_NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, XERCES_NAMESPACES)},
	{"SCHEMA", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, SCHEMA)},
	{"SCHEMA_FULL_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, SCHEMA_FULL_CHECKING)},
	{"DYNAMIC_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, DYNAMIC_VALIDATION)},
	{"NORMALIZE_DATA", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, NORMALIZE_DATA)},
	{"SCHEMA_ELEMENT_DEFAULT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, SCHEMA_ELEMENT_DEFAULT)},
	{"SEND_PSVI", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, SEND_PSVI)},
	{"GENERATE_SYNTHETIC_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, GENERATE_SYNTHETIC_ANNOTATIONS)},
	{"VALIDATE_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, VALIDATE_ANNOTATIONS)},
	{"HONOUR_ALL_SCHEMALOCATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, HONOUR_ALL_SCHEMALOCATIONS)},
	{"USE_GRAMMAR_POOL_ONLY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, USE_GRAMMAR_POOL_ONLY)},
	{"DISALLOW_DOCTYPE_DECL_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, DISALLOW_DOCTYPE_DECL_FEATURE)},
	{"BALANCE_SYNTAX_TREES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, BALANCE_SYNTAX_TREES)},
	{"WARN_ON_DUPLICATE_ATTDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, WARN_ON_DUPLICATE_ATTDEF)},
	{"NAMESPACE_GROWTH", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, NAMESPACE_GROWTH)},
	{"TOLERATE_DUPLICATES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, TOLERATE_DUPLICATES)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, ENTITY_MANAGER)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, ERROR_REPORTER)},
	{"XML_STRING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, XML_STRING)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, SYMBOL_TABLE)},
	{"GRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, GRAMMAR_POOL)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, ERROR_HANDLER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, ENTITY_RESOLVER)},
	{"JAXP_SCHEMA_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, JAXP_SCHEMA_LANGUAGE)},
	{"JAXP_SCHEMA_SOURCE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, JAXP_SCHEMA_SOURCE)},
	{"DTD_VALIDATOR_PROPERTY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, DTD_VALIDATOR_PROPERTY)},
	{"DTD_VALIDATOR_FACTORY_PROPERTY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, DTD_VALIDATOR_FACTORY_PROPERTY)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, VALIDATION_MANAGER)},
	{"SCHEMA_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, SCHEMA_LOCATION)},
	{"SCHEMA_NONS_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, SCHEMA_NONS_LOCATION)},
	{"SCHEMA_DV_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, SCHEMA_DV_FACTORY)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, SECURITY_MANAGER)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMConfigurationImpl, XML_SECURITY_PROPERTY_MANAGER)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, 0, $field(DOMConfigurationImpl, fDocumentHandler)},
	{"features", "S", nullptr, $PROTECTED, $field(DOMConfigurationImpl, features)},
	{"NAMESPACES", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, NAMESPACES)},
	{"DTNORMALIZATION", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, DTNORMALIZATION)},
	{"ENTITIES", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, ENTITIES)},
	{"CDATA", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, CDATA)},
	{"SPLITCDATA", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, SPLITCDATA)},
	{"COMMENTS", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, COMMENTS)},
	{"VALIDATE", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, VALIDATE)},
	{"PSVI", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, PSVI)},
	{"WELLFORMED", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, WELLFORMED)},
	{"NSDECL", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, NSDECL)},
	{"INFOSET_TRUE_PARAMS", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, INFOSET_TRUE_PARAMS)},
	{"INFOSET_FALSE_PARAMS", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, INFOSET_FALSE_PARAMS)},
	{"INFOSET_MASK", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMConfigurationImpl, INFOSET_MASK)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(DOMConfigurationImpl, fSymbolTable)},
	{"fComponents", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(DOMConfigurationImpl, fComponents)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(DOMConfigurationImpl, fValidationManager)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(DOMConfigurationImpl, fLocale)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(DOMConfigurationImpl, fErrorReporter)},
	{"fErrorHandlerWrapper", "Lcom/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper;", nullptr, $PROTECTED | $FINAL, $field(DOMConfigurationImpl, fErrorHandlerWrapper)},
	{"fCurrentDVFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(DOMConfigurationImpl, fCurrentDVFactory)},
	{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(DOMConfigurationImpl, fDatatypeValidatorFactory)},
	{"fXML11DatatypeFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(DOMConfigurationImpl, fXML11DatatypeFactory)},
	{"fSchemaLocation", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMConfigurationImpl, fSchemaLocation)},
	{"fRecognizedParameters", "Lorg/w3c/dom/DOMStringList;", nullptr, $PRIVATE, $field(DOMConfigurationImpl, fRecognizedParameters)},
	{}
};

$MethodInfo _DOMConfigurationImpl_MethodInfo_[] = {
	{"*addRecognizedFeatures", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*addRecognizedProperties", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFeature", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $FINAL},
	{"*getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(DOMConfigurationImpl, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PROTECTED, $method(DOMConfigurationImpl, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PROTECTED, $method(DOMConfigurationImpl, init$, void, $SymbolTable*, $XMLComponentManager*)},
	{"addComponent", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(DOMConfigurationImpl, addComponent, void, $XMLComponent*)},
	{"canSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, canSetParameter, bool, $String*, Object$*)},
	{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(DOMConfigurationImpl, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"createValidationManager", "()Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $virtualMethod(DOMConfigurationImpl, createValidationManager, $ValidationManager*)},
	{"getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, getDTDContentModelHandler, $XMLDTDContentModelHandler*)},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, getDTDHandler, $XMLDTDHandler*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, getDocumentHandler, $XMLDocumentHandler*)},
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, getEntityResolver, $XMLEntityResolver*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, getErrorHandler, $XMLErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, getFeature, bool, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, getLocale, $Locale*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, getParameter, $Object*, $String*), "org.w3c.dom.DOMException"},
	{"getParameterNames", "()Lorg/w3c/dom/DOMStringList;", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, getParameterNames, $DOMStringList*)},
	{"newFeatureNotFoundError", "(Ljava/lang/String;)Lorg/w3c/dom/DOMException;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMConfigurationImpl, newFeatureNotFoundError, $DOMException*, $String*)},
	{"newFeatureNotSupportedError", "(Ljava/lang/String;)Lorg/w3c/dom/DOMException;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMConfigurationImpl, newFeatureNotSupportedError, $DOMException*, $String*)},
	{"newTypeMismatchError", "(Ljava/lang/String;)Lorg/w3c/dom/DOMException;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMConfigurationImpl, newTypeMismatchError, $DOMException*, $String*)},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, parse, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(DOMConfigurationImpl, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, setDTDContentModelHandler, void, $XMLDTDContentModelHandler*)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, setDTDHandler, void, $XMLDTDHandler*)},
	{"setDTDValidatorFactory", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $FINAL, $method(DOMConfigurationImpl, setDTDValidatorFactory, void, $String*)},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, setEntityResolver, void, $XMLEntityResolver*)},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, setErrorHandler, void, $XMLErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, setLocale, void, $Locale*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, setParameter, void, $String*, Object$*), "org.w3c.dom.DOMException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DOMConfigurationImpl, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMConfigurationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMConfigurationImpl",
	"com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration,org.w3c.dom.DOMConfiguration",
	_DOMConfigurationImpl_FieldInfo_,
	_DOMConfigurationImpl_MethodInfo_
};

$Object* allocate$DOMConfigurationImpl($Class* clazz) {
	return $of($alloc(DOMConfigurationImpl));
}

void DOMConfigurationImpl::addRecognizedFeatures($StringArray* featureIds) {
	this->$ParserConfigurationSettings::addRecognizedFeatures(featureIds);
}

void DOMConfigurationImpl::addRecognizedProperties($StringArray* propertyIds) {
	this->$ParserConfigurationSettings::addRecognizedProperties(propertyIds);
}

bool DOMConfigurationImpl::getFeature($String* featureId, bool defaultValue) {
	 return this->$ParserConfigurationSettings::getFeature(featureId, defaultValue);
}

$FeatureState* DOMConfigurationImpl::getFeatureState($String* featureId) {
	 return this->$ParserConfigurationSettings::getFeatureState(featureId);
}

$Object* DOMConfigurationImpl::getProperty($String* propertyId) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId);
}

$Object* DOMConfigurationImpl::getProperty($String* propertyId, Object$* defaultValue) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId, defaultValue);
}

$PropertyState* DOMConfigurationImpl::getPropertyState($String* propertyId) {
	 return this->$ParserConfigurationSettings::getPropertyState(propertyId);
}

int32_t DOMConfigurationImpl::hashCode() {
	 return this->$ParserConfigurationSettings::hashCode();
}

bool DOMConfigurationImpl::equals(Object$* arg0) {
	 return this->$ParserConfigurationSettings::equals(arg0);
}

$Object* DOMConfigurationImpl::clone() {
	 return this->$ParserConfigurationSettings::clone();
}

$String* DOMConfigurationImpl::toString() {
	 return this->$ParserConfigurationSettings::toString();
}

void DOMConfigurationImpl::finalize() {
	this->$ParserConfigurationSettings::finalize();
}

$String* DOMConfigurationImpl::XML11_DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* DOMConfigurationImpl::XERCES_VALIDATION = nullptr;
$String* DOMConfigurationImpl::XERCES_NAMESPACES = nullptr;
$String* DOMConfigurationImpl::SCHEMA = nullptr;
$String* DOMConfigurationImpl::SCHEMA_FULL_CHECKING = nullptr;
$String* DOMConfigurationImpl::DYNAMIC_VALIDATION = nullptr;
$String* DOMConfigurationImpl::NORMALIZE_DATA = nullptr;
$String* DOMConfigurationImpl::SCHEMA_ELEMENT_DEFAULT = nullptr;
$String* DOMConfigurationImpl::SEND_PSVI = nullptr;
$String* DOMConfigurationImpl::GENERATE_SYNTHETIC_ANNOTATIONS = nullptr;
$String* DOMConfigurationImpl::VALIDATE_ANNOTATIONS = nullptr;
$String* DOMConfigurationImpl::HONOUR_ALL_SCHEMALOCATIONS = nullptr;
$String* DOMConfigurationImpl::USE_GRAMMAR_POOL_ONLY = nullptr;
$String* DOMConfigurationImpl::DISALLOW_DOCTYPE_DECL_FEATURE = nullptr;
$String* DOMConfigurationImpl::BALANCE_SYNTAX_TREES = nullptr;
$String* DOMConfigurationImpl::WARN_ON_DUPLICATE_ATTDEF = nullptr;
$String* DOMConfigurationImpl::NAMESPACE_GROWTH = nullptr;
$String* DOMConfigurationImpl::TOLERATE_DUPLICATES = nullptr;
$String* DOMConfigurationImpl::ENTITY_MANAGER = nullptr;
$String* DOMConfigurationImpl::ERROR_REPORTER = nullptr;
$String* DOMConfigurationImpl::XML_STRING = nullptr;
$String* DOMConfigurationImpl::SYMBOL_TABLE = nullptr;
$String* DOMConfigurationImpl::GRAMMAR_POOL = nullptr;
$String* DOMConfigurationImpl::ERROR_HANDLER = nullptr;
$String* DOMConfigurationImpl::ENTITY_RESOLVER = nullptr;
$String* DOMConfigurationImpl::JAXP_SCHEMA_LANGUAGE = nullptr;
$String* DOMConfigurationImpl::JAXP_SCHEMA_SOURCE = nullptr;
$String* DOMConfigurationImpl::DTD_VALIDATOR_PROPERTY = nullptr;
$String* DOMConfigurationImpl::DTD_VALIDATOR_FACTORY_PROPERTY = nullptr;
$String* DOMConfigurationImpl::VALIDATION_MANAGER = nullptr;
$String* DOMConfigurationImpl::SCHEMA_LOCATION = nullptr;
$String* DOMConfigurationImpl::SCHEMA_NONS_LOCATION = nullptr;
$String* DOMConfigurationImpl::SCHEMA_DV_FACTORY = nullptr;
$String* DOMConfigurationImpl::SECURITY_MANAGER = nullptr;
$String* DOMConfigurationImpl::XML_SECURITY_PROPERTY_MANAGER = nullptr;

void DOMConfigurationImpl::init$() {
	DOMConfigurationImpl::init$(nullptr, nullptr);
}

void DOMConfigurationImpl::init$($SymbolTable* symbolTable) {
	DOMConfigurationImpl::init$(symbolTable, nullptr);
}

void DOMConfigurationImpl::init$($SymbolTable* symbolTable$renamed, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$var($SymbolTable, symbolTable, symbolTable$renamed);
	$ParserConfigurationSettings::init$(parentSettings);
	this->features = (int16_t)0;
	$set(this, fErrorHandlerWrapper, $new($DOMErrorHandlerWrapper));
	$set(this, fSchemaLocation, nullptr);
	$set(this, fFeatures, $new($HashMap));
	$set(this, fProperties, $new($HashMap));
	$init($ParserConfigurationSettings);
	$init($XMLConstants);
	$init($JdkConstants);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		DOMConfigurationImpl::XERCES_VALIDATION,
		DOMConfigurationImpl::XERCES_NAMESPACES,
		DOMConfigurationImpl::SCHEMA,
		DOMConfigurationImpl::SCHEMA_FULL_CHECKING,
		DOMConfigurationImpl::DYNAMIC_VALIDATION,
		DOMConfigurationImpl::NORMALIZE_DATA,
		DOMConfigurationImpl::SCHEMA_ELEMENT_DEFAULT,
		DOMConfigurationImpl::SEND_PSVI,
		DOMConfigurationImpl::GENERATE_SYNTHETIC_ANNOTATIONS,
		DOMConfigurationImpl::VALIDATE_ANNOTATIONS,
		DOMConfigurationImpl::HONOUR_ALL_SCHEMALOCATIONS,
		DOMConfigurationImpl::USE_GRAMMAR_POOL_ONLY,
		DOMConfigurationImpl::DISALLOW_DOCTYPE_DECL_FEATURE,
		DOMConfigurationImpl::BALANCE_SYNTAX_TREES,
		DOMConfigurationImpl::WARN_ON_DUPLICATE_ATTDEF,
		$ParserConfigurationSettings::PARSER_SETTINGS,
		DOMConfigurationImpl::NAMESPACE_GROWTH,
		DOMConfigurationImpl::TOLERATE_DUPLICATES,
		$XMLConstants::USE_CATALOG,
		$JdkConstants::OVERRIDE_PARSER
	}));
	addRecognizedFeatures(recognizedFeatures);
	setFeature(DOMConfigurationImpl::XERCES_VALIDATION, false);
	setFeature(DOMConfigurationImpl::SCHEMA, false);
	setFeature(DOMConfigurationImpl::SCHEMA_FULL_CHECKING, false);
	setFeature(DOMConfigurationImpl::DYNAMIC_VALIDATION, false);
	setFeature(DOMConfigurationImpl::NORMALIZE_DATA, false);
	setFeature(DOMConfigurationImpl::SCHEMA_ELEMENT_DEFAULT, false);
	setFeature(DOMConfigurationImpl::XERCES_NAMESPACES, true);
	setFeature(DOMConfigurationImpl::SEND_PSVI, true);
	setFeature(DOMConfigurationImpl::GENERATE_SYNTHETIC_ANNOTATIONS, false);
	setFeature(DOMConfigurationImpl::VALIDATE_ANNOTATIONS, false);
	setFeature(DOMConfigurationImpl::HONOUR_ALL_SCHEMALOCATIONS, false);
	setFeature(DOMConfigurationImpl::USE_GRAMMAR_POOL_ONLY, false);
	setFeature(DOMConfigurationImpl::DISALLOW_DOCTYPE_DECL_FEATURE, false);
	setFeature(DOMConfigurationImpl::BALANCE_SYNTAX_TREES, false);
	setFeature(DOMConfigurationImpl::WARN_ON_DUPLICATE_ATTDEF, false);
	setFeature($ParserConfigurationSettings::PARSER_SETTINGS, true);
	setFeature(DOMConfigurationImpl::NAMESPACE_GROWTH, false);
	setFeature(DOMConfigurationImpl::TOLERATE_DUPLICATES, false);
	$init($JdkXmlUtils);
	setFeature($XMLConstants::USE_CATALOG, $JdkXmlUtils::USE_CATALOG_DEFAULT);
	setFeature($JdkConstants::OVERRIDE_PARSER, $JdkConstants::OVERRIDE_PARSER_DEFAULT);
	$var($StringArray, recognizedProperties, $new($StringArray, {
		DOMConfigurationImpl::XML_STRING,
		DOMConfigurationImpl::SYMBOL_TABLE,
		DOMConfigurationImpl::ERROR_HANDLER,
		DOMConfigurationImpl::ENTITY_RESOLVER,
		DOMConfigurationImpl::ERROR_REPORTER,
		DOMConfigurationImpl::ENTITY_MANAGER,
		DOMConfigurationImpl::VALIDATION_MANAGER,
		DOMConfigurationImpl::GRAMMAR_POOL,
		DOMConfigurationImpl::JAXP_SCHEMA_SOURCE,
		DOMConfigurationImpl::JAXP_SCHEMA_LANGUAGE,
		DOMConfigurationImpl::SCHEMA_LOCATION,
		DOMConfigurationImpl::SCHEMA_NONS_LOCATION,
		DOMConfigurationImpl::DTD_VALIDATOR_PROPERTY,
		DOMConfigurationImpl::DTD_VALIDATOR_FACTORY_PROPERTY,
		DOMConfigurationImpl::SCHEMA_DV_FACTORY,
		DOMConfigurationImpl::SECURITY_MANAGER,
		DOMConfigurationImpl::XML_SECURITY_PROPERTY_MANAGER,
		$JdkXmlUtils::CATALOG_DEFER,
		$JdkXmlUtils::CATALOG_FILES,
		$JdkXmlUtils::CATALOG_PREFER,
		$JdkXmlUtils::CATALOG_RESOLVE,
		$JdkConstants::CDATA_CHUNK_SIZE
	}));
	addRecognizedProperties(recognizedProperties);
	this->features |= DOMConfigurationImpl::NAMESPACES;
	this->features |= DOMConfigurationImpl::ENTITIES;
	this->features |= DOMConfigurationImpl::COMMENTS;
	this->features |= DOMConfigurationImpl::CDATA;
	this->features |= DOMConfigurationImpl::SPLITCDATA;
	this->features |= DOMConfigurationImpl::WELLFORMED;
	this->features |= DOMConfigurationImpl::NSDECL;
	if (symbolTable == nullptr) {
		$assign(symbolTable, $new($SymbolTable));
	}
	$set(this, fSymbolTable, symbolTable);
	$set(this, fComponents, $new($ArrayList));
	setProperty(DOMConfigurationImpl::SYMBOL_TABLE, this->fSymbolTable);
	$set(this, fErrorReporter, $new($XMLErrorReporter));
	setProperty(DOMConfigurationImpl::ERROR_REPORTER, this->fErrorReporter);
	addComponent(this->fErrorReporter);
	$set(this, fDatatypeValidatorFactory, $DTDDVFactory::getInstance());
	$set(this, fXML11DatatypeFactory, $DTDDVFactory::getInstance(DOMConfigurationImpl::XML11_DATATYPE_VALIDATOR_FACTORY));
	$set(this, fCurrentDVFactory, this->fDatatypeValidatorFactory);
	setProperty(DOMConfigurationImpl::DTD_VALIDATOR_FACTORY_PROPERTY, this->fCurrentDVFactory);
	$var($XMLEntityManager, manager, $new($XMLEntityManager));
	setProperty(DOMConfigurationImpl::ENTITY_MANAGER, manager);
	addComponent(manager);
	$set(this, fValidationManager, createValidationManager());
	setProperty(DOMConfigurationImpl::VALIDATION_MANAGER, this->fValidationManager);
	setProperty(DOMConfigurationImpl::SECURITY_MANAGER, $$new($XMLSecurityManager, true));
	setProperty($JdkConstants::XML_SECURITY_PROPERTY_MANAGER, $$new($XMLSecurityPropertyManager));
	$init($XMLMessageFormatter);
	if ($nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN) == nullptr) {
		$var($XMLMessageFormatter, xmft, $new($XMLMessageFormatter));
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XML_DOMAIN, xmft);
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XMLNS_DOMAIN, xmft);
	}
	if ($nc(this->fErrorReporter)->getMessageFormatter("http://www.w3.org/TR/xml-schema-1"_s) == nullptr) {
		$var($MessageFormatter, xmft, nullptr);
		try {
			$assign(xmft, $new($XSMessageFormatter));
		} catch ($Exception& exception) {
		}
		if (xmft != nullptr) {
			$nc(this->fErrorReporter)->putMessageFormatter("http://www.w3.org/TR/xml-schema-1"_s, xmft);
		}
	}
	try {
		setLocale($($Locale::getDefault()));
	} catch ($XNIException& e) {
	}
	{
		$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$CatalogFeatures$Feature* f = arr$->get(i$);
			{
				setProperty($($nc(f)->getPropertyName()), nullptr);
			}
		}
	}
	setProperty($JdkConstants::CDATA_CHUNK_SIZE, $($Integer::valueOf($JdkConstants::CDATA_CHUNK_SIZE_DEFAULT)));
}

void DOMConfigurationImpl::parse($XMLInputSource* inputSource) {
}

void DOMConfigurationImpl::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
}

$XMLDocumentHandler* DOMConfigurationImpl::getDocumentHandler() {
	return this->fDocumentHandler;
}

void DOMConfigurationImpl::setDTDHandler($XMLDTDHandler* dtdHandler) {
}

$XMLDTDHandler* DOMConfigurationImpl::getDTDHandler() {
	return nullptr;
}

void DOMConfigurationImpl::setDTDContentModelHandler($XMLDTDContentModelHandler* handler) {
}

$XMLDTDContentModelHandler* DOMConfigurationImpl::getDTDContentModelHandler() {
	return nullptr;
}

void DOMConfigurationImpl::setEntityResolver($XMLEntityResolver* resolver) {
	$nc(this->fProperties)->put(DOMConfigurationImpl::ENTITY_RESOLVER, resolver);
}

$XMLEntityResolver* DOMConfigurationImpl::getEntityResolver() {
	return $cast($XMLEntityResolver, $nc(this->fProperties)->get(DOMConfigurationImpl::ENTITY_RESOLVER));
}

void DOMConfigurationImpl::setErrorHandler($XMLErrorHandler* errorHandler) {
	if (errorHandler != nullptr) {
		$nc(this->fProperties)->put(DOMConfigurationImpl::ERROR_HANDLER, errorHandler);
	}
}

$XMLErrorHandler* DOMConfigurationImpl::getErrorHandler() {
	return $cast($XMLErrorHandler, $nc(this->fProperties)->get(DOMConfigurationImpl::ERROR_HANDLER));
}

bool DOMConfigurationImpl::getFeature($String* featureId) {
	$init($ParserConfigurationSettings);
	if ($nc(featureId)->equals($ParserConfigurationSettings::PARSER_SETTINGS)) {
		return true;
	}
	return $ParserConfigurationSettings::getFeature(featureId);
}

void DOMConfigurationImpl::setFeature($String* featureId, bool state) {
	$ParserConfigurationSettings::setFeature(featureId, state);
}

void DOMConfigurationImpl::setProperty($String* propertyId, Object$* value) {
	$ParserConfigurationSettings::setProperty(propertyId, value);
}

void DOMConfigurationImpl::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

$Locale* DOMConfigurationImpl::getLocale() {
	return this->fLocale;
}

void DOMConfigurationImpl::setParameter($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	bool found = true;
	if ($instanceOf($Boolean, value)) {
		bool state = $nc(($cast($Boolean, value)))->booleanValue();
		$init($Constants);
		if ($nc(name)->equalsIgnoreCase($Constants::DOM_COMMENTS)) {
			this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::COMMENTS : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::COMMENTS));
		} else {
			if (name->equalsIgnoreCase($Constants::DOM_DATATYPE_NORMALIZATION)) {
				setFeature(DOMConfigurationImpl::NORMALIZE_DATA, state);
				this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::DTNORMALIZATION : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::DTNORMALIZATION));
				if (state) {
					this->features = (int16_t)(this->features | DOMConfigurationImpl::VALIDATE);
				}
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_NAMESPACES)) {
					this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::NAMESPACES : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::NAMESPACES));
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_CDATA_SECTIONS)) {
						this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::CDATA : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::CDATA));
					} else {
						if (name->equalsIgnoreCase($Constants::DOM_ENTITIES)) {
							this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::ENTITIES : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::ENTITIES));
						} else {
							if (name->equalsIgnoreCase($Constants::DOM_SPLIT_CDATA)) {
								this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::SPLITCDATA : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::SPLITCDATA));
							} else {
								if (name->equalsIgnoreCase($Constants::DOM_VALIDATE)) {
									this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::VALIDATE : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::VALIDATE));
								} else {
									if (name->equalsIgnoreCase($Constants::DOM_WELLFORMED)) {
										this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::WELLFORMED : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::WELLFORMED));
									} else {
										if (name->equalsIgnoreCase($Constants::DOM_NAMESPACE_DECLARATIONS)) {
											this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::NSDECL : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::NSDECL));
										} else {
											if (name->equalsIgnoreCase($Constants::DOM_INFOSET)) {
												if (state) {
													this->features = (int16_t)(this->features | DOMConfigurationImpl::INFOSET_TRUE_PARAMS);
													this->features = (int16_t)((int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::INFOSET_FALSE_PARAMS));
													setFeature(DOMConfigurationImpl::NORMALIZE_DATA, false);
												}
											} else {
												bool var$5 = name->equalsIgnoreCase($Constants::DOM_NORMALIZE_CHARACTERS);
												bool var$4 = var$5 || name->equalsIgnoreCase($Constants::DOM_CANONICAL_FORM);
												bool var$3 = var$4 || name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA);
												if (var$3 || name->equalsIgnoreCase($Constants::DOM_CHECK_CHAR_NORMALIZATION)) {
													if (state) {
														$throw($(newFeatureNotSupportedError(name)));
													}
												} else {
													if (name->equalsIgnoreCase($Constants::DOM_ELEMENT_CONTENT_WHITESPACE)) {
														if (!state) {
															$throw($(newFeatureNotSupportedError(name)));
														}
													} else if (name->equalsIgnoreCase(DOMConfigurationImpl::SEND_PSVI)) {
														if (!state) {
															$throw($(newFeatureNotSupportedError(name)));
														}
													} else {
														if (name->equalsIgnoreCase($Constants::DOM_PSVI)) {
															this->features = (int16_t)(state ? this->features | DOMConfigurationImpl::PSVI : (int32_t)(this->features & (uint32_t)~DOMConfigurationImpl::PSVI));
														} else {
															found = false;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!found || !($instanceOf($Boolean, value))) {
		found = true;
		$init($Constants);
		if ($nc(name)->equalsIgnoreCase($Constants::DOM_ERROR_HANDLER)) {
			if ($instanceOf($DOMErrorHandler, value) || value == nullptr) {
				$nc(this->fErrorHandlerWrapper)->setErrorHandler($cast($DOMErrorHandler, value));
				setErrorHandler(this->fErrorHandlerWrapper);
			} else {
				$throw($(newTypeMismatchError(name)));
			}
		} else {
			if (name->equalsIgnoreCase($Constants::DOM_RESOURCE_RESOLVER)) {
				if ($instanceOf($LSResourceResolver, value) || value == nullptr) {
					try {
						setEntityResolver($$new($DOMEntityResolverWrapper, $cast($LSResourceResolver, value)));
					} catch ($XMLConfigurationException& e) {
					}
				} else {
					$throw($(newTypeMismatchError(name)));
				}
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_LOCATION)) {
					if ($instanceOf($String, value) || value == nullptr) {
						try {
							if (value == nullptr) {
								$set(this, fSchemaLocation, nullptr);
								setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}), nullptr);
							} else {
								$set(this, fSchemaLocation, $cast($String, value));
								$var($StringTokenizer, t, $new($StringTokenizer, this->fSchemaLocation, " \n\t\r"_s));
								if (t->hasMoreTokens()) {
									$var($List, locations, $new($ArrayList));
									locations->add($(t->nextToken()));
									while (t->hasMoreTokens()) {
										locations->add($(t->nextToken()));
									}
									setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}), $(locations->toArray($$new($StringArray, locations->size()))));
								} else {
									setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}), $$new($StringArray, {$cast($String, value)}));
								}
							}
						} catch ($XMLConfigurationException& e) {
						}
					} else {
						$throw($(newTypeMismatchError(name)));
					}
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_TYPE)) {
						if ($instanceOf($String, value) || value == nullptr) {
							try {
								if (value == nullptr) {
									setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), nullptr);
								} else {
									if ($nc($of(value))->equals($Constants::NS_XMLSCHEMA)) {
										setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), $Constants::NS_XMLSCHEMA);
									} else {
										if ($of(value)->equals($Constants::NS_DTD)) {
											setProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), $Constants::NS_DTD);
										}
									}
								}
							} catch ($XMLConfigurationException& e) {
							}
						} else {
							$throw($(newTypeMismatchError(name)));
						}
					} else if (name->equalsIgnoreCase(DOMConfigurationImpl::ENTITY_RESOLVER)) {
						if ($instanceOf($XMLEntityResolver, value) || value == nullptr) {
							try {
								setEntityResolver($cast($XMLEntityResolver, value));
							} catch ($XMLConfigurationException& e) {
							}
						} else {
							$throw($(newTypeMismatchError(name)));
						}
					} else if (name->equalsIgnoreCase(DOMConfigurationImpl::SYMBOL_TABLE)) {
						if ($instanceOf($SymbolTable, value)) {
							setProperty(DOMConfigurationImpl::SYMBOL_TABLE, value);
						} else {
							$throw($(newTypeMismatchError(name)));
						}
					} else if (name->equalsIgnoreCase(DOMConfigurationImpl::GRAMMAR_POOL)) {
						if ($instanceOf($XMLGrammarPool, value) || value == nullptr) {
							setProperty(DOMConfigurationImpl::GRAMMAR_POOL, value);
						} else {
							$throw($(newTypeMismatchError(name)));
						}
					} else {
						$throw($(newFeatureNotFoundError(name)));
					}
				}
			}
		}
	}
}

$Object* DOMConfigurationImpl::getParameter($String* name) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if ($nc(name)->equalsIgnoreCase($Constants::DOM_COMMENTS)) {
		$init($Boolean);
		return $of((((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::COMMENTS)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
	} else {
		if (name->equalsIgnoreCase($Constants::DOM_NAMESPACES)) {
			$init($Boolean);
			return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::NAMESPACES)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
		} else {
			if (name->equalsIgnoreCase($Constants::DOM_DATATYPE_NORMALIZATION)) {
				$init($Boolean);
				return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::DTNORMALIZATION)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_CDATA_SECTIONS)) {
					$init($Boolean);
					return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::CDATA)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_ENTITIES)) {
						$init($Boolean);
						return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::ENTITIES)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
					} else {
						if (name->equalsIgnoreCase($Constants::DOM_SPLIT_CDATA)) {
							$init($Boolean);
							return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::SPLITCDATA)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
						} else {
							if (name->equalsIgnoreCase($Constants::DOM_VALIDATE)) {
								$init($Boolean);
								return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::VALIDATE)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
							} else {
								if (name->equalsIgnoreCase($Constants::DOM_WELLFORMED)) {
									$init($Boolean);
									return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::WELLFORMED)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
								} else {
									if (name->equalsIgnoreCase($Constants::DOM_NAMESPACE_DECLARATIONS)) {
										$init($Boolean);
										return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::NSDECL)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
									} else {
										if (name->equalsIgnoreCase($Constants::DOM_INFOSET)) {
											$init($Boolean);
											return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::INFOSET_MASK)) == DOMConfigurationImpl::INFOSET_TRUE_PARAMS ? $Boolean::TRUE : $Boolean::FALSE);
										} else {
											bool var$5 = name->equalsIgnoreCase($Constants::DOM_NORMALIZE_CHARACTERS);
											bool var$4 = var$5 || name->equalsIgnoreCase($Constants::DOM_CANONICAL_FORM);
											bool var$3 = var$4 || name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA);
											if (var$3 || name->equalsIgnoreCase($Constants::DOM_CHECK_CHAR_NORMALIZATION)) {
												$init($Boolean);
												return $of($Boolean::FALSE);
											} else if (name->equalsIgnoreCase(DOMConfigurationImpl::SEND_PSVI)) {
												$init($Boolean);
												return $of($Boolean::TRUE);
											} else {
												if (name->equalsIgnoreCase($Constants::DOM_PSVI)) {
													$init($Boolean);
													return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMConfigurationImpl::PSVI)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
												} else {
													if (name->equalsIgnoreCase($Constants::DOM_ELEMENT_CONTENT_WHITESPACE)) {
														$init($Boolean);
														return $of($Boolean::TRUE);
													} else {
														if (name->equalsIgnoreCase($Constants::DOM_ERROR_HANDLER)) {
															return $of($nc(this->fErrorHandlerWrapper)->getErrorHandler());
														} else {
															if (name->equalsIgnoreCase($Constants::DOM_RESOURCE_RESOLVER)) {
																$var($XMLEntityResolver, entityResolver, getEntityResolver());
																if (entityResolver != nullptr && $instanceOf($DOMEntityResolverWrapper, entityResolver)) {
																	return $of($nc(($cast($DOMEntityResolverWrapper, entityResolver)))->getEntityResolver());
																}
																return $of(nullptr);
															} else {
																if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_TYPE)) {
																	return $of(getProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE})));
																} else {
																	if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_LOCATION)) {
																		return $of(this->fSchemaLocation);
																	} else if (name->equalsIgnoreCase(DOMConfigurationImpl::ENTITY_RESOLVER)) {
																		return $of(getEntityResolver());
																	} else if (name->equalsIgnoreCase(DOMConfigurationImpl::SYMBOL_TABLE)) {
																		return $of(getProperty(DOMConfigurationImpl::SYMBOL_TABLE));
																	} else if (name->equalsIgnoreCase(DOMConfigurationImpl::GRAMMAR_POOL)) {
																		return $of(getProperty(DOMConfigurationImpl::GRAMMAR_POOL));
																	} else if (name->equalsIgnoreCase(DOMConfigurationImpl::SECURITY_MANAGER)) {
																		return $of(getProperty(DOMConfigurationImpl::SECURITY_MANAGER));
																	} else {
																		$throw($(newFeatureNotFoundError(name)));
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool DOMConfigurationImpl::canSetParameter($String* name, Object$* value) {
	if (value == nullptr) {
		return true;
	}
	if ($instanceOf($Boolean, value)) {
		$init($Constants);
		bool var$8 = $nc(name)->equalsIgnoreCase($Constants::DOM_COMMENTS);
		bool var$7 = var$8 || $nc(name)->equalsIgnoreCase($Constants::DOM_DATATYPE_NORMALIZATION);
		bool var$6 = var$7 || $nc(name)->equalsIgnoreCase($Constants::DOM_CDATA_SECTIONS);
		bool var$5 = var$6 || $nc(name)->equalsIgnoreCase($Constants::DOM_ENTITIES);
		bool var$4 = var$5 || $nc(name)->equalsIgnoreCase($Constants::DOM_SPLIT_CDATA);
		bool var$3 = var$4 || $nc(name)->equalsIgnoreCase($Constants::DOM_NAMESPACES);
		bool var$2 = var$3 || $nc(name)->equalsIgnoreCase($Constants::DOM_VALIDATE);
		bool var$1 = var$2 || $nc(name)->equalsIgnoreCase($Constants::DOM_WELLFORMED);
		bool var$0 = var$1 || $nc(name)->equalsIgnoreCase($Constants::DOM_INFOSET);
		if (var$0 || $nc(name)->equalsIgnoreCase($Constants::DOM_NAMESPACE_DECLARATIONS)) {
			return true;
		} else {
			bool var$14 = name->equalsIgnoreCase($Constants::DOM_NORMALIZE_CHARACTERS);
			bool var$13 = var$14 || name->equalsIgnoreCase($Constants::DOM_CANONICAL_FORM);
			bool var$12 = var$13 || name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA);
			if (var$12 || name->equalsIgnoreCase($Constants::DOM_CHECK_CHAR_NORMALIZATION)) {
				$init($Boolean);
				return ($nc($of(value))->equals($Boolean::TRUE)) ? false : true;
			} else {
				bool var$16 = name->equalsIgnoreCase($Constants::DOM_ELEMENT_CONTENT_WHITESPACE);
				if (var$16 || name->equalsIgnoreCase(DOMConfigurationImpl::SEND_PSVI)) {
					$init($Boolean);
					return ($nc($of(value))->equals($Boolean::TRUE)) ? true : false;
				} else {
					return false;
				}
			}
		}
	} else {
		$init($Constants);
		if ($nc(name)->equalsIgnoreCase($Constants::DOM_ERROR_HANDLER)) {
			return ($instanceOf($DOMErrorHandler, value)) ? true : false;
		} else {
			if (name->equalsIgnoreCase($Constants::DOM_RESOURCE_RESOLVER)) {
				return ($instanceOf($LSResourceResolver, value)) ? true : false;
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_LOCATION)) {
					return ($instanceOf($String, value)) ? true : false;
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_SCHEMA_TYPE)) {
						bool var$17 = ($instanceOf($String, value));
						if (var$17) {
							bool var$18 = $nc($of(value))->equals($Constants::NS_XMLSCHEMA);
							var$17 = (var$18 || $nc($of(value))->equals($Constants::NS_DTD));
						}
						return (var$17) ? true : false;
					} else if (name->equalsIgnoreCase(DOMConfigurationImpl::ENTITY_RESOLVER)) {
						return ($instanceOf($XMLEntityResolver, value)) ? true : false;
					} else if (name->equalsIgnoreCase(DOMConfigurationImpl::SYMBOL_TABLE)) {
						return ($instanceOf($SymbolTable, value)) ? true : false;
					} else if (name->equalsIgnoreCase(DOMConfigurationImpl::GRAMMAR_POOL)) {
						return ($instanceOf($XMLGrammarPool, value)) ? true : false;
					} else {
						return false;
					}
				}
			}
		}
	}
}

$DOMStringList* DOMConfigurationImpl::getParameterNames() {
	if (this->fRecognizedParameters == nullptr) {
		$var($List, parameters, $new($ArrayList));
		$init($Constants);
		parameters->add($Constants::DOM_COMMENTS);
		parameters->add($Constants::DOM_DATATYPE_NORMALIZATION);
		parameters->add($Constants::DOM_CDATA_SECTIONS);
		parameters->add($Constants::DOM_ENTITIES);
		parameters->add($Constants::DOM_SPLIT_CDATA);
		parameters->add($Constants::DOM_NAMESPACES);
		parameters->add($Constants::DOM_VALIDATE);
		parameters->add($Constants::DOM_INFOSET);
		parameters->add($Constants::DOM_NORMALIZE_CHARACTERS);
		parameters->add($Constants::DOM_CANONICAL_FORM);
		parameters->add($Constants::DOM_VALIDATE_IF_SCHEMA);
		parameters->add($Constants::DOM_CHECK_CHAR_NORMALIZATION);
		parameters->add($Constants::DOM_WELLFORMED);
		parameters->add($Constants::DOM_NAMESPACE_DECLARATIONS);
		parameters->add($Constants::DOM_ELEMENT_CONTENT_WHITESPACE);
		parameters->add($Constants::DOM_ERROR_HANDLER);
		parameters->add($Constants::DOM_SCHEMA_TYPE);
		parameters->add($Constants::DOM_SCHEMA_LOCATION);
		parameters->add($Constants::DOM_RESOURCE_RESOLVER);
		parameters->add(DOMConfigurationImpl::ENTITY_RESOLVER);
		parameters->add(DOMConfigurationImpl::GRAMMAR_POOL);
		parameters->add(DOMConfigurationImpl::SECURITY_MANAGER);
		parameters->add(DOMConfigurationImpl::SYMBOL_TABLE);
		parameters->add(DOMConfigurationImpl::SEND_PSVI);
		$set(this, fRecognizedParameters, $new($DOMStringListImpl, parameters));
	}
	return this->fRecognizedParameters;
}

void DOMConfigurationImpl::reset() {
	$useLocalCurrentObjectStackCache();
	if (this->fValidationManager != nullptr) {
		$nc(this->fValidationManager)->reset();
	}
	int32_t count = $nc(this->fComponents)->size();
	for (int32_t i = 0; i < count; ++i) {
		$var($XMLComponent, c, $cast($XMLComponent, $nc(this->fComponents)->get(i)));
		$nc(c)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
	}
}

$PropertyState* DOMConfigurationImpl::checkProperty($String* propertyId) {
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::SAX_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::SAX_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::XML_STRING_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::XML_STRING_PROPERTY)) {
			$init($PropertyState);
			return $PropertyState::NOT_SUPPORTED;
		}
	}
	return $ParserConfigurationSettings::checkProperty(propertyId);
}

void DOMConfigurationImpl::addComponent($XMLComponent* component) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fComponents)->contains(component)) {
		return;
	}
	$nc(this->fComponents)->add(component);
	$var($StringArray, recognizedFeatures, $nc(component)->getRecognizedFeatures());
	addRecognizedFeatures(recognizedFeatures);
	$var($StringArray, recognizedProperties, component->getRecognizedProperties());
	addRecognizedProperties(recognizedProperties);
}

$ValidationManager* DOMConfigurationImpl::createValidationManager() {
	return $new($ValidationManager);
}

void DOMConfigurationImpl::setDTDValidatorFactory($String* version) {
	if ("1.1"_s->equals(version)) {
		if (this->fCurrentDVFactory != this->fXML11DatatypeFactory) {
			$set(this, fCurrentDVFactory, this->fXML11DatatypeFactory);
			setProperty(DOMConfigurationImpl::DTD_VALIDATOR_FACTORY_PROPERTY, this->fCurrentDVFactory);
		}
	} else if (this->fCurrentDVFactory != this->fDatatypeValidatorFactory) {
		$set(this, fCurrentDVFactory, this->fDatatypeValidatorFactory);
		setProperty(DOMConfigurationImpl::DTD_VALIDATOR_FACTORY_PROPERTY, this->fCurrentDVFactory);
	}
}

$DOMException* DOMConfigurationImpl::newFeatureNotSupportedError($String* name) {
	$init(DOMConfigurationImpl);
	$useLocalCurrentObjectStackCache();
	$init($DOMMessageFormatter);
	$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
	return $new($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
}

$DOMException* DOMConfigurationImpl::newFeatureNotFoundError($String* name) {
	$init(DOMConfigurationImpl);
	$useLocalCurrentObjectStackCache();
	$init($DOMMessageFormatter);
	$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_FOUND"_s, $$new($ObjectArray, {$of(name)})));
	return $new($DOMException, $DOMException::NOT_FOUND_ERR, msg);
}

$DOMException* DOMConfigurationImpl::newTypeMismatchError($String* name) {
	$init(DOMConfigurationImpl);
	$useLocalCurrentObjectStackCache();
	$init($DOMMessageFormatter);
	$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "TYPE_MISMATCH_ERR"_s, $$new($ObjectArray, {$of(name)})));
	return $new($DOMException, $DOMException::TYPE_MISMATCH_ERR, msg);
}

DOMConfigurationImpl::DOMConfigurationImpl() {
}

void clinit$DOMConfigurationImpl($Class* class$) {
	$assignStatic(DOMConfigurationImpl::XML11_DATATYPE_VALIDATOR_FACTORY, "com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11DTDDVFactoryImpl"_s);
	$init($Constants);
	$assignStatic(DOMConfigurationImpl::XERCES_VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(DOMConfigurationImpl::XERCES_NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(DOMConfigurationImpl::SCHEMA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(DOMConfigurationImpl::SCHEMA_FULL_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_FULL_CHECKING}));
	$assignStatic(DOMConfigurationImpl::DYNAMIC_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DYNAMIC_VALIDATION_FEATURE}));
	$assignStatic(DOMConfigurationImpl::NORMALIZE_DATA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_NORMALIZED_VALUE}));
	$assignStatic(DOMConfigurationImpl::SCHEMA_ELEMENT_DEFAULT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_ELEMENT_DEFAULT}));
	$assignStatic(DOMConfigurationImpl::SEND_PSVI, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_AUGMENT_PSVI}));
	$assignStatic(DOMConfigurationImpl::GENERATE_SYNTHETIC_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE}));
	$assignStatic(DOMConfigurationImpl::VALIDATE_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::VALIDATE_ANNOTATIONS_FEATURE}));
	$assignStatic(DOMConfigurationImpl::HONOUR_ALL_SCHEMALOCATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::HONOUR_ALL_SCHEMALOCATIONS_FEATURE}));
	$assignStatic(DOMConfigurationImpl::USE_GRAMMAR_POOL_ONLY, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::USE_GRAMMAR_POOL_ONLY_FEATURE}));
	$assignStatic(DOMConfigurationImpl::DISALLOW_DOCTYPE_DECL_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DISALLOW_DOCTYPE_DECL_FEATURE}));
	$assignStatic(DOMConfigurationImpl::BALANCE_SYNTAX_TREES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::BALANCE_SYNTAX_TREES}));
	$assignStatic(DOMConfigurationImpl::WARN_ON_DUPLICATE_ATTDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE}));
	$assignStatic(DOMConfigurationImpl::NAMESPACE_GROWTH, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NAMESPACE_GROWTH_FEATURE}));
	$assignStatic(DOMConfigurationImpl::TOLERATE_DUPLICATES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::TOLERATE_DUPLICATES_FEATURE}));
	$assignStatic(DOMConfigurationImpl::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::XML_STRING, $str({$Constants::SAX_PROPERTY_PREFIX, $Constants::XML_STRING_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::GRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::JAXP_SCHEMA_LANGUAGE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}));
	$assignStatic(DOMConfigurationImpl::JAXP_SCHEMA_SOURCE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}));
	$assignStatic(DOMConfigurationImpl::DTD_VALIDATOR_PROPERTY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::DTD_VALIDATOR_FACTORY_PROPERTY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::SCHEMA_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_LOCATION}));
	$assignStatic(DOMConfigurationImpl::SCHEMA_NONS_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_NONS_LOCATION}));
	$assignStatic(DOMConfigurationImpl::SCHEMA_DV_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_DV_FACTORY_PROPERTY}));
	$assignStatic(DOMConfigurationImpl::SECURITY_MANAGER, $Constants::SECURITY_MANAGER);
	$init($JdkConstants);
	$assignStatic(DOMConfigurationImpl::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
}

$Class* DOMConfigurationImpl::load$($String* name, bool initialize) {
	$loadClass(DOMConfigurationImpl, name, initialize, &_DOMConfigurationImpl_ClassInfo_, clinit$DOMConfigurationImpl, allocate$DOMConfigurationImpl);
	return class$;
}

$Class* DOMConfigurationImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com