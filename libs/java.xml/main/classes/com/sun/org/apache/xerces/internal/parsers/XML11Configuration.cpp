#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11DocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLVersionDetector.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11DTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11DTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11NSDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLNSDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/IOException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jcpp.h>

#undef ALLOW_JAVA_ENCODINGS
#undef ALLOW_JAVA_ENCODINGS_FEATURE
#undef CATALOG_DEFER
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef CDATA_CHUNK_SIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef CONTINUE_AFTER_FATAL_ERROR
#undef CONTINUE_AFTER_FATAL_ERROR_FEATURE
#undef DATATYPE_VALIDATOR_FACTORY
#undef DATATYPE_VALIDATOR_FACTORY_PROPERTY
#undef DEFAULT_ATTRIBUTE_VALUES_FEATURE
#undef DOCUMENT_SCANNER
#undef DOCUMENT_SCANNER_PROPERTY
#undef DTD_PROCESSOR
#undef DTD_PROCESSOR_PROPERTY
#undef DTD_SCANNER
#undef DTD_SCANNER_PROPERTY
#undef DTD_VALIDATOR
#undef DTD_VALIDATOR_PROPERTY
#undef DYNAMIC_VALIDATION_FEATURE
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef EXTERNAL_GENERAL_ENTITIES
#undef EXTERNAL_GENERAL_ENTITIES_FEATURE
#undef EXTERNAL_PARAMETER_ENTITIES
#undef EXTERNAL_PARAMETER_ENTITIES_FEATURE
#undef FALSE
#undef FEATURE_SECURE_PROCESSING
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#undef GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE
#undef HONOUR_ALL_SCHEMALOCATIONS
#undef HONOUR_ALL_SCHEMALOCATIONS_FEATURE
#undef IDC_CHECKING_FEATURE
#undef IDENTITY_CONSTRAINT_CHECKING
#undef ID_IDREF_CHECKING
#undef ID_IDREF_CHECKING_FEATURE
#undef IGNORE_XSI_TYPE
#undef IGNORE_XSI_TYPE_FEATURE
#undef JAXP_PROPERTY_PREFIX
#undef JAXP_SCHEMA_LANGUAGE
#undef JAXP_SCHEMA_SOURCE
#undef LOAD_DTD_GRAMMAR_FEATURE
#undef LOAD_EXTERNAL_DTD
#undef LOAD_EXTERNAL_DTD_FEATURE
#undef LOCALE
#undef LOCALE_PROPERTY
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef NAMESPACE_BINDER
#undef NAMESPACE_BINDER_PROPERTY
#undef NAMESPACE_GROWTH
#undef NAMESPACE_GROWTH_FEATURE
#undef NORMALIZE_DATA
#undef NOTIFY_BUILTIN_REFS
#undef NOTIFY_BUILTIN_REFS_FEATURE
#undef NOTIFY_CHAR_REFS
#undef NOTIFY_CHAR_REFS_FEATURE
#undef NOT_SUPPORTED
#undef OVERRIDE_PARSER
#undef OVERRIDE_PARSER_DEFAULT
#undef PARSER_SETTINGS
#undef PRINT_EXCEPTION_STACK_TRACE
#undef RECOGNIZED
#undef RESET_SYMBOL_TABLE
#undef RESET_SYMBOL_TABLE_DEFAULT
#undef ROOT_ELEMENT_DECL
#undef ROOT_ELEMENT_DECLARATION_PROPERTY
#undef ROOT_TYPE_DEF
#undef ROOT_TYPE_DEFINITION_PROPERTY
#undef SAX_FEATURE_PREFIX
#undef SAX_PROPERTY_PREFIX
#undef SCHEMA_AUGMENT_PSVI
#undef SCHEMA_DOMAIN
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
#undef SCHEMA_VALIDATOR
#undef SCHEMA_VALIDATOR_PROPERTY
#undef SECURITY_MANAGER
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TOLERATE_DUPLICATES
#undef TOLERATE_DUPLICATES_FEATURE
#undef TRUE
#undef UNPARSED_ENTITY_CHECKING
#undef UNPARSED_ENTITY_CHECKING_FEATURE
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT
#undef USE_GRAMMAR_POOL_ONLY
#undef USE_GRAMMAR_POOL_ONLY_FEATURE
#undef VALIDATE_ANNOTATIONS
#undef VALIDATE_ANNOTATIONS_FEATURE
#undef VALIDATE_CONTENT_MODELS_FEATURE
#undef VALIDATE_DATATYPES_FEATURE
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef WARN_ON_DUPLICATE_ATTDEF
#undef WARN_ON_DUPLICATE_ATTDEF_FEATURE
#undef WARN_ON_DUPLICATE_ENTITYDEF
#undef WARN_ON_DUPLICATE_ENTITYDEF_FEATURE
#undef WARN_ON_UNDECLARED_ELEMDEF
#undef WARN_ON_UNDECLARED_ELEMDEF_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XML11_DATATYPE_VALIDATOR_FACTORY
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XMLNS_DOMAIN
#undef XMLSCHEMA_FULL_CHECKING
#undef XMLSCHEMA_VALIDATION
#undef XML_DOMAIN
#undef XML_SECURITY_PROPERTY_MANAGER
#undef XML_STRING
#undef XML_STRING_PROPERTY
#undef XML_VERSION_1_1

using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $RevalidationHandler = ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler;
using $XML11DTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11DTDScannerImpl;
using $XML11DocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11DocumentScannerImpl;
using $XML11NSDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11NSDocumentScannerImpl;
using $XMLDTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLEntityHandler = ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLNSDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl;
using $XMLScanner = ::com::sun::org::apache::xerces::internal::impl::XMLScanner;
using $XMLVersionDetector = ::com::sun::org::apache::xerces::internal::impl::XMLVersionDetector;
using $XML11DTDProcessor = ::com::sun::org::apache::xerces::internal::impl::dtd::XML11DTDProcessor;
using $XML11DTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XML11DTDValidator;
using $XML11NSDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XML11NSDTDValidator;
using $XMLDTDLoader = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader;
using $XMLDTDProcessor = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor;
using $XMLDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator;
using $XMLDTDValidatorFilter = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter;
using $XMLNSDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLNSDTDValidator;
using $DTDDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $PropertyState = ::com::sun::org::apache::xerces::internal::util::PropertyState;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDTDContentModelFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelFilter;
using $XMLDTDContentModelSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource;
using $XMLDTDFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter;
using $XMLDTDScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $XMLDocumentFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter;
using $XMLDocumentScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentScanner;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _XML11Configuration_FieldInfo_[] = {
	{"XML11_DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, XML11_DATATYPE_VALIDATOR_FACTORY)},
	{"WARN_ON_DUPLICATE_ATTDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, WARN_ON_DUPLICATE_ATTDEF)},
	{"WARN_ON_DUPLICATE_ENTITYDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, WARN_ON_DUPLICATE_ENTITYDEF)},
	{"WARN_ON_UNDECLARED_ELEMDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, WARN_ON_UNDECLARED_ELEMDEF)},
	{"ALLOW_JAVA_ENCODINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, ALLOW_JAVA_ENCODINGS)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, CONTINUE_AFTER_FATAL_ERROR)},
	{"LOAD_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, LOAD_EXTERNAL_DTD)},
	{"NOTIFY_BUILTIN_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, NOTIFY_BUILTIN_REFS)},
	{"NOTIFY_CHAR_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, NOTIFY_CHAR_REFS)},
	{"NORMALIZE_DATA", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, NORMALIZE_DATA)},
	{"SCHEMA_ELEMENT_DEFAULT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, SCHEMA_ELEMENT_DEFAULT)},
	{"SCHEMA_AUGMENT_PSVI", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, SCHEMA_AUGMENT_PSVI)},
	{"XMLSCHEMA_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, XMLSCHEMA_VALIDATION)},
	{"XMLSCHEMA_FULL_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, XMLSCHEMA_FULL_CHECKING)},
	{"GENERATE_SYNTHETIC_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, GENERATE_SYNTHETIC_ANNOTATIONS)},
	{"VALIDATE_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, VALIDATE_ANNOTATIONS)},
	{"HONOUR_ALL_SCHEMALOCATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, HONOUR_ALL_SCHEMALOCATIONS)},
	{"NAMESPACE_GROWTH", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, NAMESPACE_GROWTH)},
	{"TOLERATE_DUPLICATES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, TOLERATE_DUPLICATES)},
	{"USE_GRAMMAR_POOL_ONLY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, USE_GRAMMAR_POOL_ONLY)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, VALIDATION)},
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, NAMESPACES)},
	{"EXTERNAL_GENERAL_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, EXTERNAL_GENERAL_ENTITIES)},
	{"EXTERNAL_PARAMETER_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, EXTERNAL_PARAMETER_ENTITIES)},
	{"IGNORE_XSI_TYPE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, IGNORE_XSI_TYPE)},
	{"ID_IDREF_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, ID_IDREF_CHECKING)},
	{"UNPARSED_ENTITY_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, UNPARSED_ENTITY_CHECKING)},
	{"IDENTITY_CONSTRAINT_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, IDENTITY_CONSTRAINT_CHECKING)},
	{"XML_STRING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, XML_STRING)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, SYMBOL_TABLE)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, ERROR_HANDLER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, ENTITY_RESOLVER)},
	{"SCHEMA_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, SCHEMA_VALIDATOR)},
	{"SCHEMA_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, SCHEMA_LOCATION)},
	{"SCHEMA_NONS_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, SCHEMA_NONS_LOCATION)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, ERROR_REPORTER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, ENTITY_MANAGER)},
	{"DOCUMENT_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, DOCUMENT_SCANNER)},
	{"DTD_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, DTD_SCANNER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, XMLGRAMMAR_POOL)},
	{"DTD_PROCESSOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, DTD_PROCESSOR)},
	{"DTD_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, DTD_VALIDATOR)},
	{"NAMESPACE_BINDER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, NAMESPACE_BINDER)},
	{"DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, DATATYPE_VALIDATOR_FACTORY)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, VALIDATION_MANAGER)},
	{"JAXP_SCHEMA_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, JAXP_SCHEMA_LANGUAGE)},
	{"JAXP_SCHEMA_SOURCE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, JAXP_SCHEMA_SOURCE)},
	{"ROOT_TYPE_DEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, ROOT_TYPE_DEF)},
	{"ROOT_ELEMENT_DECL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, ROOT_ELEMENT_DECL)},
	{"LOCALE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, LOCALE)},
	{"SCHEMA_DV_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11Configuration, SCHEMA_DV_FACTORY)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XML11Configuration, XML_SECURITY_PROPERTY_MANAGER)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XML11Configuration, SECURITY_MANAGER)},
	{"PRINT_EXCEPTION_STACK_TRACE", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XML11Configuration, PRINT_EXCEPTION_STACK_TRACE)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XML11Configuration, fSymbolTable)},
	{"fInputSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PROTECTED, $field(XML11Configuration, fInputSource)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(XML11Configuration, fValidationManager)},
	{"fVersionDetector", "Lcom/sun/org/apache/xerces/internal/impl/XMLVersionDetector;", nullptr, $PROTECTED, $field(XML11Configuration, fVersionDetector)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(XML11Configuration, fLocator)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(XML11Configuration, fLocale)},
	{"fComponents", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(XML11Configuration, fComponents)},
	{"fXML11Components", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(XML11Configuration, fXML11Components)},
	{"fCommonComponents", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(XML11Configuration, fCommonComponents)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PROTECTED, $field(XML11Configuration, fDocumentHandler)},
	{"fDTDHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PROTECTED, $field(XML11Configuration, fDTDHandler)},
	{"fDTDContentModelHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PROTECTED, $field(XML11Configuration, fDTDContentModelHandler)},
	{"fLastComponent", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PROTECTED, $field(XML11Configuration, fLastComponent)},
	{"fParseInProgress", "Z", nullptr, $PROTECTED, $field(XML11Configuration, fParseInProgress)},
	{"fConfigUpdated", "Z", nullptr, $PROTECTED, $field(XML11Configuration, fConfigUpdated)},
	{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XML11Configuration, fDatatypeValidatorFactory)},
	{"fNamespaceScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11Configuration, fNamespaceScanner)},
	{"fNonNSScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11Configuration, fNonNSScanner)},
	{"fDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PROTECTED, $field(XML11Configuration, fDTDValidator)},
	{"fNonNSDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PROTECTED, $field(XML11Configuration, fNonNSDTDValidator)},
	{"fDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(XML11Configuration, fDTDScanner)},
	{"fDTDProcessor", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor;", nullptr, $PROTECTED, $field(XML11Configuration, fDTDProcessor)},
	{"fXML11DatatypeFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XML11Configuration, fXML11DatatypeFactory)},
	{"fXML11NSDocScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11Configuration, fXML11NSDocScanner)},
	{"fXML11DocScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11DocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11Configuration, fXML11DocScanner)},
	{"fXML11NSDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XML11NSDTDValidator;", nullptr, $PROTECTED, $field(XML11Configuration, fXML11NSDTDValidator)},
	{"fXML11DTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XML11DTDValidator;", nullptr, $PROTECTED, $field(XML11Configuration, fXML11DTDValidator)},
	{"fXML11DTDScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl;", nullptr, $PROTECTED, $field(XML11Configuration, fXML11DTDScanner)},
	{"fXML11DTDProcessor", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XML11DTDProcessor;", nullptr, $PROTECTED, $field(XML11Configuration, fXML11DTDProcessor)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(XML11Configuration, fGrammarPool)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XML11Configuration, fErrorReporter)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(XML11Configuration, fEntityManager)},
	{"fSchemaValidator", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $PROTECTED, $field(XML11Configuration, fSchemaValidator)},
	{"fCurrentScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner;", nullptr, $PROTECTED, $field(XML11Configuration, fCurrentScanner)},
	{"fCurrentDVFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XML11Configuration, fCurrentDVFactory)},
	{"fCurrentDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(XML11Configuration, fCurrentDTDScanner)},
	{"f11Initialized", "Z", nullptr, $PRIVATE, $field(XML11Configuration, f11Initialized)},
	{"fSymbolTableProvided", "Z", nullptr, $PRIVATE, $field(XML11Configuration, fSymbolTableProvided)},
	{"fSymbolTableJustInitialized", "Z", nullptr, $PRIVATE, $field(XML11Configuration, fSymbolTableJustInitialized)},
	{}
};

$MethodInfo _XML11Configuration_MethodInfo_[] = {
	{"*addRecognizedFeatures", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*addRecognizedProperties", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $FINAL},
	{"*getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11Configuration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XML11Configuration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XML11Configuration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(XML11Configuration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"addCommonComponent", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, addCommonComponent, void, $XMLComponent*)},
	{"addComponent", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, addComponent, void, $XMLComponent*)},
	{"addRecognizedParamsAndSetDefaults", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, addRecognizedParamsAndSetDefaults, void, $XMLComponent*)},
	{"addXML11Component", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, addXML11Component, void, $XMLComponent*)},
	{"checkFeature", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, checkFeature, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"cleanup", "()V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, cleanup, void)},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, configurePipeline, void)},
	{"configureXML11Pipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, configureXML11Pipeline, void)},
	{"getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, getDTDContentModelHandler, $XMLDTDContentModelHandler*)},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, getDTDHandler, $XMLDTDHandler*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, getDocumentHandler, $XMLDocumentHandler*)},
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, getEntityResolver, $XMLEntityResolver*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, getErrorHandler, $XMLErrorHandler*)},
	{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, getFeatureState, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getFeatureState0", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, 0, $virtualMethod(XML11Configuration, getFeatureState0, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, getLocale, $Locale*)},
	{"getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, getPropertyState, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"initXML11Components", "()V", nullptr, $PRIVATE, $method(XML11Configuration, initXML11Components, void)},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, parse, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"parse", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, parse, bool, bool), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resetCommon", "()V", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, resetCommon, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resetSymbolTable", "()V", nullptr, $PRIVATE, $method(XML11Configuration, resetSymbolTable, void)},
	{"resetXML11", "()V", nullptr, $PROTECTED, $virtualMethod(XML11Configuration, resetXML11, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, setDTDContentModelHandler, void, $XMLDTDContentModelHandler*)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, setDTDHandler, void, $XMLDTDHandler*)},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, setEntityResolver, void, $XMLEntityResolver*)},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, setErrorHandler, void, $XMLErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, setInputSource, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException,java.io.IOException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, setLocale, void, $Locale*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XML11Configuration, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XML11Configuration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.XML11Configuration",
	"com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration,com.sun.org.apache.xerces.internal.parsers.XML11Configurable",
	_XML11Configuration_FieldInfo_,
	_XML11Configuration_MethodInfo_
};

$Object* allocate$XML11Configuration($Class* clazz) {
	return $of($alloc(XML11Configuration));
}

void XML11Configuration::addRecognizedFeatures($StringArray* featureIds) {
	this->$ParserConfigurationSettings::addRecognizedFeatures(featureIds);
}

void XML11Configuration::addRecognizedProperties($StringArray* propertyIds) {
	this->$ParserConfigurationSettings::addRecognizedProperties(propertyIds);
}

bool XML11Configuration::getFeature($String* featureId) {
	 return this->$ParserConfigurationSettings::getFeature(featureId);
}

bool XML11Configuration::getFeature($String* featureId, bool defaultValue) {
	 return this->$ParserConfigurationSettings::getFeature(featureId, defaultValue);
}

$Object* XML11Configuration::getProperty($String* propertyId) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId);
}

$Object* XML11Configuration::getProperty($String* propertyId, Object$* defaultValue) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId, defaultValue);
}

int32_t XML11Configuration::hashCode() {
	 return this->$ParserConfigurationSettings::hashCode();
}

bool XML11Configuration::equals(Object$* arg0) {
	 return this->$ParserConfigurationSettings::equals(arg0);
}

$Object* XML11Configuration::clone() {
	 return this->$ParserConfigurationSettings::clone();
}

$String* XML11Configuration::toString() {
	 return this->$ParserConfigurationSettings::toString();
}

void XML11Configuration::finalize() {
	this->$ParserConfigurationSettings::finalize();
}

$String* XML11Configuration::XML11_DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* XML11Configuration::WARN_ON_DUPLICATE_ATTDEF = nullptr;
$String* XML11Configuration::WARN_ON_DUPLICATE_ENTITYDEF = nullptr;
$String* XML11Configuration::WARN_ON_UNDECLARED_ELEMDEF = nullptr;
$String* XML11Configuration::ALLOW_JAVA_ENCODINGS = nullptr;
$String* XML11Configuration::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* XML11Configuration::LOAD_EXTERNAL_DTD = nullptr;
$String* XML11Configuration::NOTIFY_BUILTIN_REFS = nullptr;
$String* XML11Configuration::NOTIFY_CHAR_REFS = nullptr;
$String* XML11Configuration::NORMALIZE_DATA = nullptr;
$String* XML11Configuration::SCHEMA_ELEMENT_DEFAULT = nullptr;
$String* XML11Configuration::SCHEMA_AUGMENT_PSVI = nullptr;
$String* XML11Configuration::XMLSCHEMA_VALIDATION = nullptr;
$String* XML11Configuration::XMLSCHEMA_FULL_CHECKING = nullptr;
$String* XML11Configuration::GENERATE_SYNTHETIC_ANNOTATIONS = nullptr;
$String* XML11Configuration::VALIDATE_ANNOTATIONS = nullptr;
$String* XML11Configuration::HONOUR_ALL_SCHEMALOCATIONS = nullptr;
$String* XML11Configuration::NAMESPACE_GROWTH = nullptr;
$String* XML11Configuration::TOLERATE_DUPLICATES = nullptr;
$String* XML11Configuration::USE_GRAMMAR_POOL_ONLY = nullptr;
$String* XML11Configuration::VALIDATION = nullptr;
$String* XML11Configuration::NAMESPACES = nullptr;
$String* XML11Configuration::EXTERNAL_GENERAL_ENTITIES = nullptr;
$String* XML11Configuration::EXTERNAL_PARAMETER_ENTITIES = nullptr;
$String* XML11Configuration::IGNORE_XSI_TYPE = nullptr;
$String* XML11Configuration::ID_IDREF_CHECKING = nullptr;
$String* XML11Configuration::UNPARSED_ENTITY_CHECKING = nullptr;
$String* XML11Configuration::IDENTITY_CONSTRAINT_CHECKING = nullptr;
$String* XML11Configuration::XML_STRING = nullptr;
$String* XML11Configuration::SYMBOL_TABLE = nullptr;
$String* XML11Configuration::ERROR_HANDLER = nullptr;
$String* XML11Configuration::ENTITY_RESOLVER = nullptr;
$String* XML11Configuration::SCHEMA_VALIDATOR = nullptr;
$String* XML11Configuration::SCHEMA_LOCATION = nullptr;
$String* XML11Configuration::SCHEMA_NONS_LOCATION = nullptr;
$String* XML11Configuration::ERROR_REPORTER = nullptr;
$String* XML11Configuration::ENTITY_MANAGER = nullptr;
$String* XML11Configuration::DOCUMENT_SCANNER = nullptr;
$String* XML11Configuration::DTD_SCANNER = nullptr;
$String* XML11Configuration::XMLGRAMMAR_POOL = nullptr;
$String* XML11Configuration::DTD_PROCESSOR = nullptr;
$String* XML11Configuration::DTD_VALIDATOR = nullptr;
$String* XML11Configuration::NAMESPACE_BINDER = nullptr;
$String* XML11Configuration::DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* XML11Configuration::VALIDATION_MANAGER = nullptr;
$String* XML11Configuration::JAXP_SCHEMA_LANGUAGE = nullptr;
$String* XML11Configuration::JAXP_SCHEMA_SOURCE = nullptr;
$String* XML11Configuration::ROOT_TYPE_DEF = nullptr;
$String* XML11Configuration::ROOT_ELEMENT_DECL = nullptr;
$String* XML11Configuration::LOCALE = nullptr;
$String* XML11Configuration::SCHEMA_DV_FACTORY = nullptr;
$String* XML11Configuration::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* XML11Configuration::SECURITY_MANAGER = nullptr;

void XML11Configuration::init$() {
	XML11Configuration::init$(nullptr, nullptr, nullptr);
}

void XML11Configuration::init$($SymbolTable* symbolTable) {
	XML11Configuration::init$(symbolTable, nullptr, nullptr);
}

void XML11Configuration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	XML11Configuration::init$(symbolTable, grammarPool, nullptr);
}

void XML11Configuration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$ParserConfigurationSettings::init$(parentSettings);
	$set(this, fXML11Components, nullptr);
	$set(this, fCommonComponents, nullptr);
	this->fParseInProgress = false;
	this->fConfigUpdated = false;
	$set(this, fXML11DatatypeFactory, nullptr);
	$set(this, fXML11NSDocScanner, nullptr);
	$set(this, fXML11DocScanner, nullptr);
	$set(this, fXML11NSDTDValidator, nullptr);
	$set(this, fXML11DTDValidator, nullptr);
	$set(this, fXML11DTDScanner, nullptr);
	$set(this, fXML11DTDProcessor, nullptr);
	this->f11Initialized = false;
	this->fSymbolTableProvided = false;
	this->fSymbolTableJustInitialized = true;
	$set(this, fComponents, $new($ArrayList));
	$set(this, fXML11Components, $new($ArrayList));
	$set(this, fCommonComponents, $new($ArrayList));
	$init($ParserConfigurationSettings);
	$init($XMLConstants);
	$init($JdkConstants);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		XML11Configuration::CONTINUE_AFTER_FATAL_ERROR,
		XML11Configuration::LOAD_EXTERNAL_DTD,
		XML11Configuration::VALIDATION,
		XML11Configuration::NAMESPACES,
		XML11Configuration::NORMALIZE_DATA,
		XML11Configuration::SCHEMA_ELEMENT_DEFAULT,
		XML11Configuration::SCHEMA_AUGMENT_PSVI,
		XML11Configuration::GENERATE_SYNTHETIC_ANNOTATIONS,
		XML11Configuration::VALIDATE_ANNOTATIONS,
		XML11Configuration::HONOUR_ALL_SCHEMALOCATIONS,
		XML11Configuration::IGNORE_XSI_TYPE,
		XML11Configuration::ID_IDREF_CHECKING,
		XML11Configuration::IDENTITY_CONSTRAINT_CHECKING,
		XML11Configuration::UNPARSED_ENTITY_CHECKING,
		XML11Configuration::NAMESPACE_GROWTH,
		XML11Configuration::TOLERATE_DUPLICATES,
		XML11Configuration::USE_GRAMMAR_POOL_ONLY,
		XML11Configuration::XMLSCHEMA_VALIDATION,
		XML11Configuration::XMLSCHEMA_FULL_CHECKING,
		XML11Configuration::EXTERNAL_GENERAL_ENTITIES,
		XML11Configuration::EXTERNAL_PARAMETER_ENTITIES,
		$ParserConfigurationSettings::PARSER_SETTINGS,
		$XMLConstants::FEATURE_SECURE_PROCESSING,
		$XMLConstants::USE_CATALOG,
		$JdkConstants::RESET_SYMBOL_TABLE,
		$JdkConstants::OVERRIDE_PARSER
	}));
	addRecognizedFeatures(recognizedFeatures);
	$init($Boolean);
	$nc(this->fFeatures)->put(XML11Configuration::VALIDATION, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11Configuration::NAMESPACES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::EXTERNAL_GENERAL_ENTITIES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::EXTERNAL_PARAMETER_ENTITIES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::CONTINUE_AFTER_FATAL_ERROR, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11Configuration::LOAD_EXTERNAL_DTD, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::SCHEMA_ELEMENT_DEFAULT, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::NORMALIZE_DATA, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::SCHEMA_AUGMENT_PSVI, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::GENERATE_SYNTHETIC_ANNOTATIONS, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11Configuration::VALIDATE_ANNOTATIONS, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11Configuration::HONOUR_ALL_SCHEMALOCATIONS, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11Configuration::IGNORE_XSI_TYPE, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11Configuration::ID_IDREF_CHECKING, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::IDENTITY_CONSTRAINT_CHECKING, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::UNPARSED_ENTITY_CHECKING, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11Configuration::NAMESPACE_GROWTH, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11Configuration::TOLERATE_DUPLICATES, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11Configuration::USE_GRAMMAR_POOL_ONLY, $Boolean::FALSE);
	$nc(this->fFeatures)->put($ParserConfigurationSettings::PARSER_SETTINGS, $Boolean::TRUE);
	$nc(this->fFeatures)->put($XMLConstants::FEATURE_SECURE_PROCESSING, $Boolean::TRUE);
	$init($JdkXmlUtils);
	$nc(this->fFeatures)->put($XMLConstants::USE_CATALOG, $($Boolean::valueOf($JdkXmlUtils::USE_CATALOG_DEFAULT)));
	$nc(this->fFeatures)->put($JdkConstants::RESET_SYMBOL_TABLE, $($Boolean::valueOf($JdkConstants::RESET_SYMBOL_TABLE_DEFAULT)));
	$nc(this->fFeatures)->put($JdkConstants::OVERRIDE_PARSER, $($Boolean::valueOf($JdkConstants::OVERRIDE_PARSER_DEFAULT)));
	$var($StringArray, recognizedProperties, $new($StringArray, {
		XML11Configuration::SYMBOL_TABLE,
		XML11Configuration::ERROR_HANDLER,
		XML11Configuration::ENTITY_RESOLVER,
		XML11Configuration::ERROR_REPORTER,
		XML11Configuration::ENTITY_MANAGER,
		XML11Configuration::DOCUMENT_SCANNER,
		XML11Configuration::DTD_SCANNER,
		XML11Configuration::DTD_PROCESSOR,
		XML11Configuration::DTD_VALIDATOR,
		XML11Configuration::DATATYPE_VALIDATOR_FACTORY,
		XML11Configuration::VALIDATION_MANAGER,
		XML11Configuration::SCHEMA_VALIDATOR,
		XML11Configuration::XML_STRING,
		XML11Configuration::XMLGRAMMAR_POOL,
		XML11Configuration::JAXP_SCHEMA_SOURCE,
		XML11Configuration::JAXP_SCHEMA_LANGUAGE,
		XML11Configuration::SCHEMA_LOCATION,
		XML11Configuration::SCHEMA_NONS_LOCATION,
		XML11Configuration::ROOT_TYPE_DEF,
		XML11Configuration::ROOT_ELEMENT_DECL,
		XML11Configuration::LOCALE,
		XML11Configuration::SCHEMA_DV_FACTORY,
		XML11Configuration::SECURITY_MANAGER,
		XML11Configuration::XML_SECURITY_PROPERTY_MANAGER,
		$JdkXmlUtils::CATALOG_DEFER,
		$JdkXmlUtils::CATALOG_FILES,
		$JdkXmlUtils::CATALOG_PREFER,
		$JdkXmlUtils::CATALOG_RESOLVE,
		$JdkConstants::CDATA_CHUNK_SIZE
	}));
	addRecognizedProperties(recognizedProperties);
	this->fSymbolTableProvided = symbolTable != nullptr;
	if (!this->fSymbolTableProvided) {
		$set(this, fSymbolTable, $new($SymbolTable));
	} else {
		$set(this, fSymbolTable, symbolTable);
	}
	$nc(this->fProperties)->put(XML11Configuration::SYMBOL_TABLE, this->fSymbolTable);
	$set(this, fGrammarPool, grammarPool);
	if (this->fGrammarPool != nullptr) {
		$nc(this->fProperties)->put(XML11Configuration::XMLGRAMMAR_POOL, this->fGrammarPool);
	}
	$set(this, fEntityManager, $new($XMLEntityManager));
	$nc(this->fProperties)->put(XML11Configuration::ENTITY_MANAGER, this->fEntityManager);
	addCommonComponent(this->fEntityManager);
	$set(this, fErrorReporter, $new($XMLErrorReporter));
	$nc(this->fErrorReporter)->setDocumentLocator($($nc(this->fEntityManager)->getEntityScanner()));
	$nc(this->fProperties)->put(XML11Configuration::ERROR_REPORTER, this->fErrorReporter);
	addCommonComponent(this->fErrorReporter);
	$set(this, fNamespaceScanner, $new($XMLNSDocumentScannerImpl));
	$nc(this->fProperties)->put(XML11Configuration::DOCUMENT_SCANNER, this->fNamespaceScanner);
	addComponent(static_cast<$XMLComponent*>(this->fNamespaceScanner));
	$set(this, fDTDScanner, $new($XMLDTDScannerImpl));
	$nc(this->fProperties)->put(XML11Configuration::DTD_SCANNER, this->fDTDScanner);
	addComponent($cast($XMLComponent, this->fDTDScanner));
	$set(this, fDTDProcessor, $new($XMLDTDProcessor));
	$nc(this->fProperties)->put(XML11Configuration::DTD_PROCESSOR, this->fDTDProcessor);
	addComponent(static_cast<$XMLComponent*>(this->fDTDProcessor));
	$set(this, fDTDValidator, $new($XMLNSDTDValidator));
	$nc(this->fProperties)->put(XML11Configuration::DTD_VALIDATOR, this->fDTDValidator);
	addComponent(this->fDTDValidator);
	$set(this, fDatatypeValidatorFactory, $DTDDVFactory::getInstance());
	$nc(this->fProperties)->put(XML11Configuration::DATATYPE_VALIDATOR_FACTORY, this->fDatatypeValidatorFactory);
	$set(this, fValidationManager, $new($ValidationManager));
	$nc(this->fProperties)->put(XML11Configuration::VALIDATION_MANAGER, this->fValidationManager);
	$set(this, fVersionDetector, $new($XMLVersionDetector));
	$init($XMLMessageFormatter);
	if ($nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN) == nullptr) {
		$var($XMLMessageFormatter, xmft, $new($XMLMessageFormatter));
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XML_DOMAIN, xmft);
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XMLNS_DOMAIN, xmft);
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
				$nc(this->fProperties)->put($($nc(f)->getPropertyName()), nullptr);
			}
		}
	}
	setProperty($JdkConstants::CDATA_CHUNK_SIZE, $($Integer::valueOf($JdkConstants::CDATA_CHUNK_SIZE_DEFAULT)));
	this->fConfigUpdated = false;
}

void XML11Configuration::setInputSource($XMLInputSource* inputSource) {
	$set(this, fInputSource, inputSource);
}

void XML11Configuration::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

void XML11Configuration::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
	if (this->fLastComponent != nullptr) {
		$nc(this->fLastComponent)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fLastComponent);
		}
	}
}

$XMLDocumentHandler* XML11Configuration::getDocumentHandler() {
	return this->fDocumentHandler;
}

void XML11Configuration::setDTDHandler($XMLDTDHandler* dtdHandler) {
	$set(this, fDTDHandler, dtdHandler);
}

$XMLDTDHandler* XML11Configuration::getDTDHandler() {
	return this->fDTDHandler;
}

void XML11Configuration::setDTDContentModelHandler($XMLDTDContentModelHandler* handler) {
	$set(this, fDTDContentModelHandler, handler);
}

$XMLDTDContentModelHandler* XML11Configuration::getDTDContentModelHandler() {
	return this->fDTDContentModelHandler;
}

void XML11Configuration::setEntityResolver($XMLEntityResolver* resolver) {
	$nc(this->fProperties)->put(XML11Configuration::ENTITY_RESOLVER, resolver);
}

$XMLEntityResolver* XML11Configuration::getEntityResolver() {
	return $cast($XMLEntityResolver, $nc(this->fProperties)->get(XML11Configuration::ENTITY_RESOLVER));
}

void XML11Configuration::setErrorHandler($XMLErrorHandler* errorHandler) {
	$nc(this->fProperties)->put(XML11Configuration::ERROR_HANDLER, errorHandler);
}

$XMLErrorHandler* XML11Configuration::getErrorHandler() {
	return $cast($XMLErrorHandler, $nc(this->fProperties)->get(XML11Configuration::ERROR_HANDLER));
}

void XML11Configuration::cleanup() {
	$nc(this->fEntityManager)->closeReaders();
}

void XML11Configuration::parse($XMLInputSource* source) {
	if (this->fParseInProgress) {
		$throwNew($XNIException, "FWK005 parse may not be called while parsing."_s);
	}
	this->fParseInProgress = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				setInputSource(source);
				parse(true);
			} catch ($XNIException& ex) {
				$throw(ex);
			} catch ($IOException& ex) {
				$throw(ex);
			} catch ($RuntimeException& ex) {
				$throw(ex);
			} catch ($Exception& ex) {
				$throwNew($XNIException, $cast($Exception, ex));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->fParseInProgress = false;
			this->cleanup();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XML11Configuration::parse(bool complete) {
	if (this->fInputSource != nullptr) {
		try {
			$nc(this->fValidationManager)->reset();
			$nc(this->fVersionDetector)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
			this->fConfigUpdated = true;
			resetSymbolTable();
			resetCommon();
			int16_t version = $nc(this->fVersionDetector)->determineDocVersion(this->fInputSource);
			if (version == $Constants::XML_VERSION_1_1) {
				initXML11Components();
				configureXML11Pipeline();
				resetXML11();
			} else {
				configurePipeline();
				reset();
			}
			this->fConfigUpdated = false;
			$nc(this->fVersionDetector)->startDocumentParsing($cast($XMLEntityHandler, this->fCurrentScanner), version);
			$set(this, fInputSource, nullptr);
		} catch ($IOException& ex) {
			$throw(ex);
		} catch ($RuntimeException& ex) {
			$throw(ex);
		} catch ($Exception& ex) {
			$throwNew($XNIException, $cast($Exception, ex));
		}
	}
	try {
		return $nc(this->fCurrentScanner)->scanDocument(complete);
	} catch ($IOException& ex) {
		$throw(ex);
	} catch ($RuntimeException& ex) {
		$throw(ex);
	} catch ($Exception& ex) {
		$throwNew($XNIException, $cast($Exception, ex));
	}
	$shouldNotReachHere();
}

$FeatureState* XML11Configuration::getFeatureState($String* featureId) {
	$init($ParserConfigurationSettings);
	if ($nc(featureId)->equals($ParserConfigurationSettings::PARSER_SETTINGS)) {
		return $FeatureState::is(this->fConfigUpdated);
	}
	return $ParserConfigurationSettings::getFeatureState(featureId);
}

void XML11Configuration::setFeature($String* featureId, bool state) {
	$useLocalCurrentObjectStackCache();
	this->fConfigUpdated = true;
	{
		$var($Iterator, i$, $nc(this->fComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->setFeature(featureId, state);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->fCommonComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->setFeature(featureId, state);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->fXML11Components)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				try {
					$nc(c)->setFeature(featureId, state);
				} catch ($Exception& e) {
				}
			}
		}
	}
	$ParserConfigurationSettings::setFeature(featureId, state);
}

$PropertyState* XML11Configuration::getPropertyState($String* propertyId) {
	if ($nc(XML11Configuration::LOCALE)->equals(propertyId)) {
		return $PropertyState::is($(getLocale()));
	}
	return $ParserConfigurationSettings::getPropertyState(propertyId);
}

void XML11Configuration::setProperty($String* propertyId, Object$* value) {
	$useLocalCurrentObjectStackCache();
	this->fConfigUpdated = true;
	if ($nc(XML11Configuration::LOCALE)->equals(propertyId)) {
		setLocale($cast($Locale, value));
	}
	{
		$var($Iterator, i$, $nc(this->fComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->setProperty(propertyId, value);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->fCommonComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->setProperty(propertyId, value);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->fXML11Components)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				try {
					$nc(c)->setProperty(propertyId, value);
				} catch ($Exception& e) {
				}
			}
		}
	}
	$ParserConfigurationSettings::setProperty(propertyId, value);
}

$Locale* XML11Configuration::getLocale() {
	return this->fLocale;
}

void XML11Configuration::reset() {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->fComponents)->size();
	for (int32_t i = 0; i < count; ++i) {
		$var($XMLComponent, c, $cast($XMLComponent, $nc(this->fComponents)->get(i)));
		$nc(c)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
	}
}

void XML11Configuration::resetCommon() {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->fCommonComponents)->size();
	for (int32_t i = 0; i < count; ++i) {
		$var($XMLComponent, c, $cast($XMLComponent, $nc(this->fCommonComponents)->get(i)));
		$nc(c)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
	}
}

void XML11Configuration::resetXML11() {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->fXML11Components)->size();
	for (int32_t i = 0; i < count; ++i) {
		$var($XMLComponent, c, $cast($XMLComponent, $nc(this->fXML11Components)->get(i)));
		$nc(c)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
	}
}

void XML11Configuration::configureXML11Pipeline() {
	if (this->fCurrentDVFactory != this->fXML11DatatypeFactory) {
		$set(this, fCurrentDVFactory, this->fXML11DatatypeFactory);
		setProperty(XML11Configuration::DATATYPE_VALIDATOR_FACTORY, this->fCurrentDVFactory);
	}
	if (!$equals(this->fCurrentDTDScanner, this->fXML11DTDScanner)) {
		$set(this, fCurrentDTDScanner, this->fXML11DTDScanner);
		setProperty(XML11Configuration::DTD_SCANNER, this->fCurrentDTDScanner);
		setProperty(XML11Configuration::DTD_PROCESSOR, this->fXML11DTDProcessor);
	}
	$nc(this->fXML11DTDScanner)->setDTDHandler(this->fXML11DTDProcessor);
	$nc(this->fXML11DTDProcessor)->setDTDSource(this->fXML11DTDScanner);
	$nc(this->fXML11DTDProcessor)->setDTDHandler(this->fDTDHandler);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->setDTDSource(this->fXML11DTDProcessor);
	}
	$nc(this->fXML11DTDScanner)->setDTDContentModelHandler(this->fXML11DTDProcessor);
	$nc(this->fXML11DTDProcessor)->setDTDContentModelSource(this->fXML11DTDScanner);
	$nc(this->fXML11DTDProcessor)->setDTDContentModelHandler(this->fDTDContentModelHandler);
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->setDTDContentModelSource(this->fXML11DTDProcessor);
	}
	$init($Boolean);
	if ($equals($nc(this->fFeatures)->get(XML11Configuration::NAMESPACES), $Boolean::TRUE)) {
		if (!$equals(this->fCurrentScanner, this->fXML11NSDocScanner)) {
			$set(this, fCurrentScanner, this->fXML11NSDocScanner);
			setProperty(XML11Configuration::DOCUMENT_SCANNER, this->fXML11NSDocScanner);
			setProperty(XML11Configuration::DTD_VALIDATOR, this->fXML11NSDTDValidator);
		}
		$nc(this->fXML11NSDocScanner)->setDTDValidator(this->fXML11NSDTDValidator);
		$nc(this->fXML11NSDocScanner)->setDocumentHandler(static_cast<$XMLDocumentHandler*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(static_cast<$XMLDTDValidator*>(static_cast<$XML11DTDValidator*>(this->fXML11NSDTDValidator))))));
		$nc(this->fXML11NSDTDValidator)->setDocumentSource(this->fXML11NSDocScanner);
		$nc(this->fXML11NSDTDValidator)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(static_cast<$XMLDTDValidator*>(static_cast<$XML11DTDValidator*>(this->fXML11NSDTDValidator))))));
		}
		$set(this, fLastComponent, static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(static_cast<$XMLDTDValidator*>(static_cast<$XML11DTDValidator*>(this->fXML11NSDTDValidator))))));
	} else {
		if (this->fXML11DocScanner == nullptr) {
			$set(this, fXML11DocScanner, $new($XML11DocumentScannerImpl));
			addXML11Component(this->fXML11DocScanner);
			$set(this, fXML11DTDValidator, $new($XML11DTDValidator));
			addXML11Component(this->fXML11DTDValidator);
		}
		if (!$equals(this->fCurrentScanner, this->fXML11DocScanner)) {
			$set(this, fCurrentScanner, this->fXML11DocScanner);
			setProperty(XML11Configuration::DOCUMENT_SCANNER, this->fXML11DocScanner);
			setProperty(XML11Configuration::DTD_VALIDATOR, this->fXML11DTDValidator);
		}
		$nc(this->fXML11DocScanner)->setDocumentHandler(static_cast<$XMLDocumentHandler*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(static_cast<$XMLDTDValidator*>(this->fXML11DTDValidator)))));
		$nc(this->fXML11DTDValidator)->setDocumentSource(this->fXML11DocScanner);
		$nc(this->fXML11DTDValidator)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(static_cast<$XMLDTDValidator*>(this->fXML11DTDValidator)))));
		}
		$set(this, fLastComponent, static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(static_cast<$XMLDTDValidator*>(this->fXML11DTDValidator)))));
	}
	if ($equals($nc(this->fFeatures)->get(XML11Configuration::XMLSCHEMA_VALIDATION), $Boolean::TRUE)) {
		if (this->fSchemaValidator == nullptr) {
			$set(this, fSchemaValidator, $new($XMLSchemaValidator));
			setProperty(XML11Configuration::SCHEMA_VALIDATOR, this->fSchemaValidator);
			addCommonComponent(this->fSchemaValidator);
			$nc(this->fSchemaValidator)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
			$init($XSMessageFormatter);
			if ($nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN) == nullptr) {
				$var($XSMessageFormatter, xmft, $new($XSMessageFormatter));
				$nc(this->fErrorReporter)->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, xmft);
			}
		}
		$nc(this->fLastComponent)->setDocumentHandler(this->fSchemaValidator);
		$nc(this->fSchemaValidator)->setDocumentSource(this->fLastComponent);
		$nc(this->fSchemaValidator)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fSchemaValidator);
		}
		$set(this, fLastComponent, this->fSchemaValidator);
	}
}

void XML11Configuration::configurePipeline() {
	if (this->fCurrentDVFactory != this->fDatatypeValidatorFactory) {
		$set(this, fCurrentDVFactory, this->fDatatypeValidatorFactory);
		setProperty(XML11Configuration::DATATYPE_VALIDATOR_FACTORY, this->fCurrentDVFactory);
	}
	if (this->fCurrentDTDScanner != this->fDTDScanner) {
		$set(this, fCurrentDTDScanner, this->fDTDScanner);
		setProperty(XML11Configuration::DTD_SCANNER, this->fCurrentDTDScanner);
		setProperty(XML11Configuration::DTD_PROCESSOR, this->fDTDProcessor);
	}
	$nc(this->fDTDScanner)->setDTDHandler(this->fDTDProcessor);
	$nc(this->fDTDProcessor)->setDTDSource(this->fDTDScanner);
	$nc(this->fDTDProcessor)->setDTDHandler(this->fDTDHandler);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->setDTDSource(this->fDTDProcessor);
	}
	$nc(this->fDTDScanner)->setDTDContentModelHandler(this->fDTDProcessor);
	$nc(this->fDTDProcessor)->setDTDContentModelSource(this->fDTDScanner);
	$nc(this->fDTDProcessor)->setDTDContentModelHandler(this->fDTDContentModelHandler);
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->setDTDContentModelSource(this->fDTDProcessor);
	}
	$init($Boolean);
	if ($equals($nc(this->fFeatures)->get(XML11Configuration::NAMESPACES), $Boolean::TRUE)) {
		if (!$equals(this->fCurrentScanner, this->fNamespaceScanner)) {
			$set(this, fCurrentScanner, this->fNamespaceScanner);
			setProperty(XML11Configuration::DOCUMENT_SCANNER, this->fNamespaceScanner);
			setProperty(XML11Configuration::DTD_VALIDATOR, this->fDTDValidator);
		}
		$nc(this->fNamespaceScanner)->setDTDValidator(this->fDTDValidator);
		$nc(this->fNamespaceScanner)->setDocumentHandler(static_cast<$XMLDocumentHandler*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fDTDValidator))));
		$nc(this->fDTDValidator)->setDocumentSource(this->fNamespaceScanner);
		$nc(this->fDTDValidator)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fDTDValidator))));
		}
		$set(this, fLastComponent, static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fDTDValidator))));
	} else {
		if (this->fNonNSScanner == nullptr) {
			$set(this, fNonNSScanner, $new($XMLDocumentScannerImpl));
			$set(this, fNonNSDTDValidator, $new($XMLDTDValidator));
			addComponent(static_cast<$XMLComponent*>(this->fNonNSScanner));
			addComponent(static_cast<$XMLComponent*>(this->fNonNSDTDValidator));
		}
		if (!$equals(this->fCurrentScanner, this->fNonNSScanner)) {
			$set(this, fCurrentScanner, this->fNonNSScanner);
			setProperty(XML11Configuration::DOCUMENT_SCANNER, this->fNonNSScanner);
			setProperty(XML11Configuration::DTD_VALIDATOR, this->fNonNSDTDValidator);
		}
		$nc(this->fNonNSScanner)->setDocumentHandler(static_cast<$XMLDocumentHandler*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fNonNSDTDValidator))));
		$nc(this->fNonNSDTDValidator)->setDocumentSource(this->fNonNSScanner);
		$nc(this->fNonNSDTDValidator)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fNonNSDTDValidator))));
		}
		$set(this, fLastComponent, static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fNonNSDTDValidator))));
	}
	if ($equals($nc(this->fFeatures)->get(XML11Configuration::XMLSCHEMA_VALIDATION), $Boolean::TRUE)) {
		if (this->fSchemaValidator == nullptr) {
			$set(this, fSchemaValidator, $new($XMLSchemaValidator));
			setProperty(XML11Configuration::SCHEMA_VALIDATOR, this->fSchemaValidator);
			addCommonComponent(this->fSchemaValidator);
			$nc(this->fSchemaValidator)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
			$init($XSMessageFormatter);
			if ($nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN) == nullptr) {
				$var($XSMessageFormatter, xmft, $new($XSMessageFormatter));
				$nc(this->fErrorReporter)->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, xmft);
			}
		}
		$nc(this->fLastComponent)->setDocumentHandler(this->fSchemaValidator);
		$nc(this->fSchemaValidator)->setDocumentSource(this->fLastComponent);
		$nc(this->fSchemaValidator)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fSchemaValidator);
		}
		$set(this, fLastComponent, this->fSchemaValidator);
	}
}

$FeatureState* XML11Configuration::checkFeature($String* featureId) {
	$init($Constants);
	if ($nc(featureId)->startsWith($Constants::XERCES_FEATURE_PREFIX)) {
		int32_t var$0 = featureId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_FEATURE_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::DYNAMIC_VALIDATION_FEATURE)->length();
		if (var$1 && featureId->endsWith($Constants::DYNAMIC_VALIDATION_FEATURE)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$2 = suffixLength == $nc($Constants::DEFAULT_ATTRIBUTE_VALUES_FEATURE)->length();
		if (var$2 && featureId->endsWith($Constants::DEFAULT_ATTRIBUTE_VALUES_FEATURE)) {
			$init($FeatureState);
			return $FeatureState::NOT_SUPPORTED;
		}
		bool var$3 = suffixLength == $nc($Constants::VALIDATE_CONTENT_MODELS_FEATURE)->length();
		if (var$3 && featureId->endsWith($Constants::VALIDATE_CONTENT_MODELS_FEATURE)) {
			$init($FeatureState);
			return $FeatureState::NOT_SUPPORTED;
		}
		bool var$4 = suffixLength == $nc($Constants::LOAD_DTD_GRAMMAR_FEATURE)->length();
		if (var$4 && featureId->endsWith($Constants::LOAD_DTD_GRAMMAR_FEATURE)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$5 = suffixLength == $nc($Constants::LOAD_EXTERNAL_DTD_FEATURE)->length();
		if (var$5 && featureId->endsWith($Constants::LOAD_EXTERNAL_DTD_FEATURE)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$6 = suffixLength == $nc($Constants::VALIDATE_DATATYPES_FEATURE)->length();
		if (var$6 && featureId->endsWith($Constants::VALIDATE_DATATYPES_FEATURE)) {
			$init($FeatureState);
			return $FeatureState::NOT_SUPPORTED;
		}
		bool var$7 = suffixLength == $nc($Constants::SCHEMA_VALIDATION_FEATURE)->length();
		if (var$7 && featureId->endsWith($Constants::SCHEMA_VALIDATION_FEATURE)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$8 = suffixLength == $nc($Constants::SCHEMA_FULL_CHECKING)->length();
		if (var$8 && featureId->endsWith($Constants::SCHEMA_FULL_CHECKING)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$9 = suffixLength == $nc($Constants::SCHEMA_NORMALIZED_VALUE)->length();
		if (var$9 && featureId->endsWith($Constants::SCHEMA_NORMALIZED_VALUE)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$10 = suffixLength == $nc($Constants::SCHEMA_ELEMENT_DEFAULT)->length();
		if (var$10 && featureId->endsWith($Constants::SCHEMA_ELEMENT_DEFAULT)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$11 = suffixLength == $nc($Constants::PARSER_SETTINGS)->length();
		if (var$11 && featureId->endsWith($Constants::PARSER_SETTINGS)) {
			$init($FeatureState);
			return $FeatureState::NOT_SUPPORTED;
		}
	}
	return $ParserConfigurationSettings::checkFeature(featureId);
}

$PropertyState* XML11Configuration::checkProperty($String* propertyId) {
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::DTD_SCANNER_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::DTD_SCANNER_PROPERTY)) {
			$init($PropertyState);
			return $PropertyState::RECOGNIZED;
		}
		bool var$2 = suffixLength == $nc($Constants::SCHEMA_LOCATION)->length();
		if (var$2 && propertyId->endsWith($Constants::SCHEMA_LOCATION)) {
			$init($PropertyState);
			return $PropertyState::RECOGNIZED;
		}
		bool var$3 = suffixLength == $nc($Constants::SCHEMA_NONS_LOCATION)->length();
		if (var$3 && propertyId->endsWith($Constants::SCHEMA_NONS_LOCATION)) {
			$init($PropertyState);
			return $PropertyState::RECOGNIZED;
		}
	}
	if ($nc(propertyId)->startsWith($Constants::JAXP_PROPERTY_PREFIX)) {
		int32_t var$4 = propertyId->length();
		int32_t suffixLength = var$4 - $nc($Constants::JAXP_PROPERTY_PREFIX)->length();
		bool var$5 = suffixLength == $nc($Constants::SCHEMA_SOURCE)->length();
		if (var$5 && propertyId->endsWith($Constants::SCHEMA_SOURCE)) {
			$init($PropertyState);
			return $PropertyState::RECOGNIZED;
		}
	}
	if ($nc(propertyId)->startsWith($Constants::SAX_PROPERTY_PREFIX)) {
		int32_t var$6 = propertyId->length();
		int32_t suffixLength = var$6 - $nc($Constants::SAX_PROPERTY_PREFIX)->length();
		bool var$7 = suffixLength == $nc($Constants::XML_STRING_PROPERTY)->length();
		if (var$7 && propertyId->endsWith($Constants::XML_STRING_PROPERTY)) {
			$init($PropertyState);
			return $PropertyState::NOT_SUPPORTED;
		}
	}
	return $ParserConfigurationSettings::checkProperty(propertyId);
}

void XML11Configuration::addComponent($XMLComponent* component) {
	if ($nc(this->fComponents)->contains(component)) {
		return;
	}
	$nc(this->fComponents)->add(component);
	addRecognizedParamsAndSetDefaults(component);
}

void XML11Configuration::addCommonComponent($XMLComponent* component) {
	if ($nc(this->fCommonComponents)->contains(component)) {
		return;
	}
	$nc(this->fCommonComponents)->add(component);
	addRecognizedParamsAndSetDefaults(component);
}

void XML11Configuration::addXML11Component($XMLComponent* component) {
	if ($nc(this->fXML11Components)->contains(component)) {
		return;
	}
	$nc(this->fXML11Components)->add(component);
	addRecognizedParamsAndSetDefaults(component);
}

void XML11Configuration::addRecognizedParamsAndSetDefaults($XMLComponent* component) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, recognizedFeatures, $nc(component)->getRecognizedFeatures());
	addRecognizedFeatures(recognizedFeatures);
	$var($StringArray, recognizedProperties, component->getRecognizedProperties());
	addRecognizedProperties(recognizedProperties);
	if (recognizedFeatures != nullptr) {
		for (int32_t i = 0; i < recognizedFeatures->length; ++i) {
			$var($String, featureId, recognizedFeatures->get(i));
			$var($Boolean, state, component->getFeatureDefault(featureId));
			if (state != nullptr) {
				if (!$nc(this->fFeatures)->containsKey(featureId)) {
					$nc(this->fFeatures)->put(featureId, state);
					this->fConfigUpdated = true;
				}
			}
		}
	}
	if (recognizedProperties != nullptr) {
		for (int32_t i = 0; i < recognizedProperties->length; ++i) {
			$var($String, propertyId, recognizedProperties->get(i));
			$var($Object, value, component->getPropertyDefault(propertyId));
			if (value != nullptr) {
				if (!$nc(this->fProperties)->containsKey(propertyId)) {
					$nc(this->fProperties)->put(propertyId, value);
					this->fConfigUpdated = true;
				}
			}
		}
	}
}

void XML11Configuration::initXML11Components() {
	if (!this->f11Initialized) {
		$set(this, fXML11DatatypeFactory, $DTDDVFactory::getInstance(XML11Configuration::XML11_DATATYPE_VALIDATOR_FACTORY));
		$set(this, fXML11DTDScanner, $new($XML11DTDScannerImpl));
		addXML11Component(this->fXML11DTDScanner);
		$set(this, fXML11DTDProcessor, $new($XML11DTDProcessor));
		addXML11Component(this->fXML11DTDProcessor);
		$set(this, fXML11NSDocScanner, $new($XML11NSDocumentScannerImpl));
		addXML11Component(this->fXML11NSDocScanner);
		$set(this, fXML11NSDTDValidator, $new($XML11NSDTDValidator));
		addXML11Component(this->fXML11NSDTDValidator);
		this->f11Initialized = true;
	}
}

void XML11Configuration::resetSymbolTable() {
	$init($JdkConstants);
	if ($nc(($cast($Boolean, $($nc(this->fFeatures)->get($JdkConstants::RESET_SYMBOL_TABLE)))))->booleanValue() && !this->fSymbolTableProvided) {
		if (this->fSymbolTableJustInitialized) {
			this->fSymbolTableJustInitialized = false;
		} else {
			$set(this, fSymbolTable, $new($SymbolTable));
			$nc(this->fProperties)->put(XML11Configuration::SYMBOL_TABLE, this->fSymbolTable);
		}
	}
}

$FeatureState* XML11Configuration::getFeatureState0($String* featureId) {
	return $ParserConfigurationSettings::getFeatureState(featureId);
}

XML11Configuration::XML11Configuration() {
}

void clinit$XML11Configuration($Class* class$) {
	$assignStatic(XML11Configuration::XML11_DATATYPE_VALIDATOR_FACTORY, "com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11DTDDVFactoryImpl"_s);
	$init($Constants);
	$assignStatic(XML11Configuration::WARN_ON_DUPLICATE_ATTDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE}));
	$assignStatic(XML11Configuration::WARN_ON_DUPLICATE_ENTITYDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ENTITYDEF_FEATURE}));
	$assignStatic(XML11Configuration::WARN_ON_UNDECLARED_ELEMDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_UNDECLARED_ELEMDEF_FEATURE}));
	$assignStatic(XML11Configuration::ALLOW_JAVA_ENCODINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}));
	$assignStatic(XML11Configuration::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(XML11Configuration::LOAD_EXTERNAL_DTD, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::LOAD_EXTERNAL_DTD_FEATURE}));
	$assignStatic(XML11Configuration::NOTIFY_BUILTIN_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_BUILTIN_REFS_FEATURE}));
	$assignStatic(XML11Configuration::NOTIFY_CHAR_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_CHAR_REFS_FEATURE}));
	$assignStatic(XML11Configuration::NORMALIZE_DATA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_NORMALIZED_VALUE}));
	$assignStatic(XML11Configuration::SCHEMA_ELEMENT_DEFAULT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_ELEMENT_DEFAULT}));
	$assignStatic(XML11Configuration::SCHEMA_AUGMENT_PSVI, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_AUGMENT_PSVI}));
	$assignStatic(XML11Configuration::XMLSCHEMA_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(XML11Configuration::XMLSCHEMA_FULL_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_FULL_CHECKING}));
	$assignStatic(XML11Configuration::GENERATE_SYNTHETIC_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE}));
	$assignStatic(XML11Configuration::VALIDATE_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::VALIDATE_ANNOTATIONS_FEATURE}));
	$assignStatic(XML11Configuration::HONOUR_ALL_SCHEMALOCATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::HONOUR_ALL_SCHEMALOCATIONS_FEATURE}));
	$assignStatic(XML11Configuration::NAMESPACE_GROWTH, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NAMESPACE_GROWTH_FEATURE}));
	$assignStatic(XML11Configuration::TOLERATE_DUPLICATES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::TOLERATE_DUPLICATES_FEATURE}));
	$assignStatic(XML11Configuration::USE_GRAMMAR_POOL_ONLY, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::USE_GRAMMAR_POOL_ONLY_FEATURE}));
	$assignStatic(XML11Configuration::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XML11Configuration::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(XML11Configuration::EXTERNAL_GENERAL_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_GENERAL_ENTITIES_FEATURE}));
	$assignStatic(XML11Configuration::EXTERNAL_PARAMETER_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_PARAMETER_ENTITIES_FEATURE}));
	$assignStatic(XML11Configuration::IGNORE_XSI_TYPE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::IGNORE_XSI_TYPE_FEATURE}));
	$assignStatic(XML11Configuration::ID_IDREF_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ID_IDREF_CHECKING_FEATURE}));
	$assignStatic(XML11Configuration::UNPARSED_ENTITY_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::UNPARSED_ENTITY_CHECKING_FEATURE}));
	$assignStatic(XML11Configuration::IDENTITY_CONSTRAINT_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::IDC_CHECKING_FEATURE}));
	$assignStatic(XML11Configuration::XML_STRING, $str({$Constants::SAX_PROPERTY_PREFIX, $Constants::XML_STRING_PROPERTY}));
	$assignStatic(XML11Configuration::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XML11Configuration::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XML11Configuration::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XML11Configuration::SCHEMA_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_VALIDATOR_PROPERTY}));
	$assignStatic(XML11Configuration::SCHEMA_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_LOCATION}));
	$assignStatic(XML11Configuration::SCHEMA_NONS_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_NONS_LOCATION}));
	$assignStatic(XML11Configuration::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XML11Configuration::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XML11Configuration::DOCUMENT_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DOCUMENT_SCANNER_PROPERTY}));
	$assignStatic(XML11Configuration::DTD_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_SCANNER_PROPERTY}));
	$assignStatic(XML11Configuration::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XML11Configuration::DTD_PROCESSOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_PROCESSOR_PROPERTY}));
	$assignStatic(XML11Configuration::DTD_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
	$assignStatic(XML11Configuration::NAMESPACE_BINDER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_BINDER_PROPERTY}));
	$assignStatic(XML11Configuration::DATATYPE_VALIDATOR_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY}));
	$assignStatic(XML11Configuration::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(XML11Configuration::JAXP_SCHEMA_LANGUAGE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}));
	$assignStatic(XML11Configuration::JAXP_SCHEMA_SOURCE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}));
	$assignStatic(XML11Configuration::ROOT_TYPE_DEF, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ROOT_TYPE_DEFINITION_PROPERTY}));
	$assignStatic(XML11Configuration::ROOT_ELEMENT_DECL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ROOT_ELEMENT_DECLARATION_PROPERTY}));
	$assignStatic(XML11Configuration::LOCALE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::LOCALE_PROPERTY}));
	$assignStatic(XML11Configuration::SCHEMA_DV_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_DV_FACTORY_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(XML11Configuration::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(XML11Configuration::SECURITY_MANAGER, $Constants::SECURITY_MANAGER);
}

$Class* XML11Configuration::load$($String* name, bool initialize) {
	$loadClass(XML11Configuration, name, initialize, &_XML11Configuration_ClassInfo_, clinit$XML11Configuration, allocate$XML11Configuration);
	return class$;
}

$Class* XML11Configuration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com