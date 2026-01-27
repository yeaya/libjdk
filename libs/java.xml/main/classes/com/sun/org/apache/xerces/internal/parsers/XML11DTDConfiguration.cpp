#include <com/sun/org/apache/xerces/internal/parsers/XML11DTDConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
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
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <jcpp.h>

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
#undef JAXP_PROPERTY_PREFIX
#undef JAXP_SCHEMA_LANGUAGE
#undef JAXP_SCHEMA_SOURCE
#undef LOAD_DTD_GRAMMAR_FEATURE
#undef LOAD_EXTERNAL_DTD
#undef LOAD_EXTERNAL_DTD_FEATURE
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef NAMESPACE_BINDER
#undef NAMESPACE_BINDER_PROPERTY
#undef NOT_SUPPORTED
#undef PARSER_SETTINGS
#undef PRINT_EXCEPTION_STACK_TRACE
#undef RECOGNIZED
#undef SAX_FEATURE_PREFIX
#undef SAX_PROPERTY_PREFIX
#undef SCHEMA_LANGUAGE
#undef SCHEMA_SOURCE
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TRUE
#undef VALIDATE_CONTENT_MODELS_FEATURE
#undef VALIDATE_DATATYPES_FEATURE
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XML11_DATATYPE_VALIDATOR_FACTORY
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XMLNS_DOMAIN
#undef XML_DOMAIN
#undef XML_STRING
#undef XML_STRING_PROPERTY
#undef XML_VERSION_1_1

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
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
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _XML11DTDConfiguration_FieldInfo_[] = {
	{"XML11_DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, XML11_DATATYPE_VALIDATOR_FACTORY)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, VALIDATION)},
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, NAMESPACES)},
	{"EXTERNAL_GENERAL_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, EXTERNAL_GENERAL_ENTITIES)},
	{"EXTERNAL_PARAMETER_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, EXTERNAL_PARAMETER_ENTITIES)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, CONTINUE_AFTER_FATAL_ERROR)},
	{"LOAD_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, LOAD_EXTERNAL_DTD)},
	{"XML_STRING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, XML_STRING)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, SYMBOL_TABLE)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, ERROR_HANDLER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, ENTITY_RESOLVER)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, ERROR_REPORTER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, ENTITY_MANAGER)},
	{"DOCUMENT_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, DOCUMENT_SCANNER)},
	{"DTD_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, DTD_SCANNER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, XMLGRAMMAR_POOL)},
	{"DTD_PROCESSOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, DTD_PROCESSOR)},
	{"DTD_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, DTD_VALIDATOR)},
	{"NAMESPACE_BINDER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, NAMESPACE_BINDER)},
	{"DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, DATATYPE_VALIDATOR_FACTORY)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, VALIDATION_MANAGER)},
	{"JAXP_SCHEMA_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, JAXP_SCHEMA_LANGUAGE)},
	{"JAXP_SCHEMA_SOURCE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11DTDConfiguration, JAXP_SCHEMA_SOURCE)},
	{"PRINT_EXCEPTION_STACK_TRACE", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XML11DTDConfiguration, PRINT_EXCEPTION_STACK_TRACE)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fSymbolTable)},
	{"fInputSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fInputSource)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fValidationManager)},
	{"fVersionDetector", "Lcom/sun/org/apache/xerces/internal/impl/XMLVersionDetector;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fVersionDetector)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fLocator)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fLocale)},
	{"fComponents", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(XML11DTDConfiguration, fComponents)},
	{"fXML11Components", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(XML11DTDConfiguration, fXML11Components)},
	{"fCommonComponents", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(XML11DTDConfiguration, fCommonComponents)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fDocumentHandler)},
	{"fDTDHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fDTDHandler)},
	{"fDTDContentModelHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fDTDContentModelHandler)},
	{"fLastComponent", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fLastComponent)},
	{"fParseInProgress", "Z", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fParseInProgress)},
	{"fConfigUpdated", "Z", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fConfigUpdated)},
	{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fDatatypeValidatorFactory)},
	{"fNamespaceScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fNamespaceScanner)},
	{"fNonNSScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fNonNSScanner)},
	{"fDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fDTDValidator)},
	{"fNonNSDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fNonNSDTDValidator)},
	{"fDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fDTDScanner)},
	{"fDTDProcessor", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fDTDProcessor)},
	{"fXML11DatatypeFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fXML11DatatypeFactory)},
	{"fXML11NSDocScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fXML11NSDocScanner)},
	{"fXML11DocScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11DocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fXML11DocScanner)},
	{"fXML11NSDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XML11NSDTDValidator;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fXML11NSDTDValidator)},
	{"fXML11DTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XML11DTDValidator;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fXML11DTDValidator)},
	{"fXML11DTDScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fXML11DTDScanner)},
	{"fXML11DTDProcessor", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XML11DTDProcessor;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fXML11DTDProcessor)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fGrammarPool)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fErrorReporter)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fEntityManager)},
	{"fCurrentScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fCurrentScanner)},
	{"fCurrentDVFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fCurrentDVFactory)},
	{"fCurrentDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(XML11DTDConfiguration, fCurrentDTDScanner)},
	{"f11Initialized", "Z", nullptr, $PRIVATE, $field(XML11DTDConfiguration, f11Initialized)},
	{}
};

$MethodInfo _XML11DTDConfiguration_MethodInfo_[] = {
	{"*addRecognizedFeatures", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*addRecognizedProperties", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $FINAL},
	{"*getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11DTDConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XML11DTDConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XML11DTDConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(XML11DTDConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"addCommonComponent", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, addCommonComponent, void, $XMLComponent*)},
	{"addComponent", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, addComponent, void, $XMLComponent*)},
	{"addRecognizedParamsAndSetDefaults", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, addRecognizedParamsAndSetDefaults, void, $XMLComponent*)},
	{"addXML11Component", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, addXML11Component, void, $XMLComponent*)},
	{"checkFeature", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, checkFeature, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"cleanup", "()V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, cleanup, void)},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, configurePipeline, void)},
	{"configureXML11Pipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, configureXML11Pipeline, void)},
	{"getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, getDTDContentModelHandler, $XMLDTDContentModelHandler*)},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, getDTDHandler, $XMLDTDHandler*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, getDocumentHandler, $XMLDocumentHandler*)},
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, getEntityResolver, $XMLEntityResolver*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, getErrorHandler, $XMLErrorHandler*)},
	{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, getFeatureState, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, getLocale, $Locale*)},
	{"initXML11Components", "()V", nullptr, $PRIVATE, $method(XML11DTDConfiguration, initXML11Components, void)},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, parse, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"parse", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, parse, bool, bool), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resetCommon", "()V", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, resetCommon, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resetXML11", "()V", nullptr, $PROTECTED, $virtualMethod(XML11DTDConfiguration, resetXML11, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, setDTDContentModelHandler, void, $XMLDTDContentModelHandler*)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, setDTDHandler, void, $XMLDTDHandler*)},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, setEntityResolver, void, $XMLEntityResolver*)},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, setErrorHandler, void, $XMLErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, setInputSource, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException,java.io.IOException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, setLocale, void, $Locale*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XML11DTDConfiguration, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XML11DTDConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.XML11DTDConfiguration",
	"com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration,com.sun.org.apache.xerces.internal.parsers.XML11Configurable",
	_XML11DTDConfiguration_FieldInfo_,
	_XML11DTDConfiguration_MethodInfo_
};

$Object* allocate$XML11DTDConfiguration($Class* clazz) {
	return $of($alloc(XML11DTDConfiguration));
}

void XML11DTDConfiguration::addRecognizedFeatures($StringArray* featureIds) {
	this->$ParserConfigurationSettings::addRecognizedFeatures(featureIds);
}

void XML11DTDConfiguration::addRecognizedProperties($StringArray* propertyIds) {
	this->$ParserConfigurationSettings::addRecognizedProperties(propertyIds);
}

bool XML11DTDConfiguration::getFeature($String* featureId) {
	 return this->$ParserConfigurationSettings::getFeature(featureId);
}

bool XML11DTDConfiguration::getFeature($String* featureId, bool defaultValue) {
	 return this->$ParserConfigurationSettings::getFeature(featureId, defaultValue);
}

$Object* XML11DTDConfiguration::getProperty($String* propertyId) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId);
}

$Object* XML11DTDConfiguration::getProperty($String* propertyId, Object$* defaultValue) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId, defaultValue);
}

$PropertyState* XML11DTDConfiguration::getPropertyState($String* propertyId) {
	 return this->$ParserConfigurationSettings::getPropertyState(propertyId);
}

int32_t XML11DTDConfiguration::hashCode() {
	 return this->$ParserConfigurationSettings::hashCode();
}

bool XML11DTDConfiguration::equals(Object$* arg0) {
	 return this->$ParserConfigurationSettings::equals(arg0);
}

$Object* XML11DTDConfiguration::clone() {
	 return this->$ParserConfigurationSettings::clone();
}

$String* XML11DTDConfiguration::toString() {
	 return this->$ParserConfigurationSettings::toString();
}

void XML11DTDConfiguration::finalize() {
	this->$ParserConfigurationSettings::finalize();
}

$String* XML11DTDConfiguration::XML11_DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* XML11DTDConfiguration::VALIDATION = nullptr;
$String* XML11DTDConfiguration::NAMESPACES = nullptr;
$String* XML11DTDConfiguration::EXTERNAL_GENERAL_ENTITIES = nullptr;
$String* XML11DTDConfiguration::EXTERNAL_PARAMETER_ENTITIES = nullptr;
$String* XML11DTDConfiguration::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* XML11DTDConfiguration::LOAD_EXTERNAL_DTD = nullptr;
$String* XML11DTDConfiguration::XML_STRING = nullptr;
$String* XML11DTDConfiguration::SYMBOL_TABLE = nullptr;
$String* XML11DTDConfiguration::ERROR_HANDLER = nullptr;
$String* XML11DTDConfiguration::ENTITY_RESOLVER = nullptr;
$String* XML11DTDConfiguration::ERROR_REPORTER = nullptr;
$String* XML11DTDConfiguration::ENTITY_MANAGER = nullptr;
$String* XML11DTDConfiguration::DOCUMENT_SCANNER = nullptr;
$String* XML11DTDConfiguration::DTD_SCANNER = nullptr;
$String* XML11DTDConfiguration::XMLGRAMMAR_POOL = nullptr;
$String* XML11DTDConfiguration::DTD_PROCESSOR = nullptr;
$String* XML11DTDConfiguration::DTD_VALIDATOR = nullptr;
$String* XML11DTDConfiguration::NAMESPACE_BINDER = nullptr;
$String* XML11DTDConfiguration::DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* XML11DTDConfiguration::VALIDATION_MANAGER = nullptr;
$String* XML11DTDConfiguration::JAXP_SCHEMA_LANGUAGE = nullptr;
$String* XML11DTDConfiguration::JAXP_SCHEMA_SOURCE = nullptr;

void XML11DTDConfiguration::init$() {
	XML11DTDConfiguration::init$(nullptr, nullptr, nullptr);
}

void XML11DTDConfiguration::init$($SymbolTable* symbolTable) {
	XML11DTDConfiguration::init$(symbolTable, nullptr, nullptr);
}

void XML11DTDConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	XML11DTDConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void XML11DTDConfiguration::init$($SymbolTable* symbolTable$renamed, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$var($SymbolTable, symbolTable, symbolTable$renamed);
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
	$set(this, fComponents, $new($ArrayList));
	$set(this, fXML11Components, $new($ArrayList));
	$set(this, fCommonComponents, $new($ArrayList));
	$set(this, fFeatures, $new($HashMap));
	$set(this, fProperties, $new($HashMap));
	$init($ParserConfigurationSettings);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		XML11DTDConfiguration::CONTINUE_AFTER_FATAL_ERROR,
		XML11DTDConfiguration::LOAD_EXTERNAL_DTD,
		XML11DTDConfiguration::VALIDATION,
		XML11DTDConfiguration::NAMESPACES,
		XML11DTDConfiguration::EXTERNAL_GENERAL_ENTITIES,
		XML11DTDConfiguration::EXTERNAL_PARAMETER_ENTITIES,
		$ParserConfigurationSettings::PARSER_SETTINGS
	}));
	addRecognizedFeatures(recognizedFeatures);
	$init($Boolean);
	$nc(this->fFeatures)->put(XML11DTDConfiguration::VALIDATION, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11DTDConfiguration::NAMESPACES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11DTDConfiguration::EXTERNAL_GENERAL_ENTITIES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11DTDConfiguration::EXTERNAL_PARAMETER_ENTITIES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11DTDConfiguration::CONTINUE_AFTER_FATAL_ERROR, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11DTDConfiguration::LOAD_EXTERNAL_DTD, $Boolean::TRUE);
	$nc(this->fFeatures)->put($ParserConfigurationSettings::PARSER_SETTINGS, $Boolean::TRUE);
	$var($StringArray, recognizedProperties, $new($StringArray, {
		XML11DTDConfiguration::SYMBOL_TABLE,
		XML11DTDConfiguration::ERROR_HANDLER,
		XML11DTDConfiguration::ENTITY_RESOLVER,
		XML11DTDConfiguration::ERROR_REPORTER,
		XML11DTDConfiguration::ENTITY_MANAGER,
		XML11DTDConfiguration::DOCUMENT_SCANNER,
		XML11DTDConfiguration::DTD_SCANNER,
		XML11DTDConfiguration::DTD_PROCESSOR,
		XML11DTDConfiguration::DTD_VALIDATOR,
		XML11DTDConfiguration::DATATYPE_VALIDATOR_FACTORY,
		XML11DTDConfiguration::VALIDATION_MANAGER,
		XML11DTDConfiguration::XML_STRING,
		XML11DTDConfiguration::XMLGRAMMAR_POOL,
		XML11DTDConfiguration::JAXP_SCHEMA_SOURCE,
		XML11DTDConfiguration::JAXP_SCHEMA_LANGUAGE
	}));
	addRecognizedProperties(recognizedProperties);
	if (symbolTable == nullptr) {
		$assign(symbolTable, $new($SymbolTable));
	}
	$set(this, fSymbolTable, symbolTable);
	$nc(this->fProperties)->put(XML11DTDConfiguration::SYMBOL_TABLE, this->fSymbolTable);
	$set(this, fGrammarPool, grammarPool);
	if (this->fGrammarPool != nullptr) {
		$nc(this->fProperties)->put(XML11DTDConfiguration::XMLGRAMMAR_POOL, this->fGrammarPool);
	}
	$set(this, fEntityManager, $new($XMLEntityManager));
	$nc(this->fProperties)->put(XML11DTDConfiguration::ENTITY_MANAGER, this->fEntityManager);
	addCommonComponent(this->fEntityManager);
	$set(this, fErrorReporter, $new($XMLErrorReporter));
	$nc(this->fErrorReporter)->setDocumentLocator($($nc(this->fEntityManager)->getEntityScanner()));
	$nc(this->fProperties)->put(XML11DTDConfiguration::ERROR_REPORTER, this->fErrorReporter);
	addCommonComponent(this->fErrorReporter);
	$set(this, fNamespaceScanner, $new($XMLNSDocumentScannerImpl));
	$nc(this->fProperties)->put(XML11DTDConfiguration::DOCUMENT_SCANNER, this->fNamespaceScanner);
	addComponent(static_cast<$XMLComponent*>(this->fNamespaceScanner));
	$set(this, fDTDScanner, $new($XMLDTDScannerImpl));
	$nc(this->fProperties)->put(XML11DTDConfiguration::DTD_SCANNER, this->fDTDScanner);
	addComponent($cast($XMLComponent, this->fDTDScanner));
	$set(this, fDTDProcessor, $new($XMLDTDProcessor));
	$nc(this->fProperties)->put(XML11DTDConfiguration::DTD_PROCESSOR, this->fDTDProcessor);
	addComponent(static_cast<$XMLComponent*>(this->fDTDProcessor));
	$set(this, fDTDValidator, $new($XMLNSDTDValidator));
	$nc(this->fProperties)->put(XML11DTDConfiguration::DTD_VALIDATOR, this->fDTDValidator);
	addComponent(this->fDTDValidator);
	$set(this, fDatatypeValidatorFactory, $DTDDVFactory::getInstance());
	$nc(this->fProperties)->put(XML11DTDConfiguration::DATATYPE_VALIDATOR_FACTORY, this->fDatatypeValidatorFactory);
	$set(this, fValidationManager, $new($ValidationManager));
	$nc(this->fProperties)->put(XML11DTDConfiguration::VALIDATION_MANAGER, this->fValidationManager);
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
	this->fConfigUpdated = false;
}

void XML11DTDConfiguration::setInputSource($XMLInputSource* inputSource) {
	$set(this, fInputSource, inputSource);
}

void XML11DTDConfiguration::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

void XML11DTDConfiguration::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
	if (this->fLastComponent != nullptr) {
		$nc(this->fLastComponent)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fLastComponent);
		}
	}
}

$XMLDocumentHandler* XML11DTDConfiguration::getDocumentHandler() {
	return this->fDocumentHandler;
}

void XML11DTDConfiguration::setDTDHandler($XMLDTDHandler* dtdHandler) {
	$set(this, fDTDHandler, dtdHandler);
}

$XMLDTDHandler* XML11DTDConfiguration::getDTDHandler() {
	return this->fDTDHandler;
}

void XML11DTDConfiguration::setDTDContentModelHandler($XMLDTDContentModelHandler* handler) {
	$set(this, fDTDContentModelHandler, handler);
}

$XMLDTDContentModelHandler* XML11DTDConfiguration::getDTDContentModelHandler() {
	return this->fDTDContentModelHandler;
}

void XML11DTDConfiguration::setEntityResolver($XMLEntityResolver* resolver) {
	$nc(this->fProperties)->put(XML11DTDConfiguration::ENTITY_RESOLVER, resolver);
}

$XMLEntityResolver* XML11DTDConfiguration::getEntityResolver() {
	return $cast($XMLEntityResolver, $nc(this->fProperties)->get(XML11DTDConfiguration::ENTITY_RESOLVER));
}

void XML11DTDConfiguration::setErrorHandler($XMLErrorHandler* errorHandler) {
	$nc(this->fProperties)->put(XML11DTDConfiguration::ERROR_HANDLER, errorHandler);
}

$XMLErrorHandler* XML11DTDConfiguration::getErrorHandler() {
	return $cast($XMLErrorHandler, $nc(this->fProperties)->get(XML11DTDConfiguration::ERROR_HANDLER));
}

void XML11DTDConfiguration::cleanup() {
	$nc(this->fEntityManager)->closeReaders();
}

void XML11DTDConfiguration::parse($XMLInputSource* source) {
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

bool XML11DTDConfiguration::parse(bool complete) {
	if (this->fInputSource != nullptr) {
		try {
			$nc(this->fValidationManager)->reset();
			$nc(this->fVersionDetector)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
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
		} catch ($XNIException& ex) {
			$throw(ex);
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
	} catch ($XNIException& ex) {
		$throw(ex);
	} catch ($IOException& ex) {
		$throw(ex);
	} catch ($RuntimeException& ex) {
		$throw(ex);
	} catch ($Exception& ex) {
		$throwNew($XNIException, $cast($Exception, ex));
	}
	$shouldNotReachHere();
}

$FeatureState* XML11DTDConfiguration::getFeatureState($String* featureId) {
	$init($ParserConfigurationSettings);
	if ($nc(featureId)->equals($ParserConfigurationSettings::PARSER_SETTINGS)) {
		return $FeatureState::is(this->fConfigUpdated);
	}
	return $ParserConfigurationSettings::getFeatureState(featureId);
}

void XML11DTDConfiguration::setFeature($String* featureId, bool state) {
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

void XML11DTDConfiguration::setProperty($String* propertyId, Object$* value) {
	$useLocalCurrentObjectStackCache();
	this->fConfigUpdated = true;
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

$Locale* XML11DTDConfiguration::getLocale() {
	return this->fLocale;
}

void XML11DTDConfiguration::reset() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->fComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
			}
		}
	}
}

void XML11DTDConfiguration::resetCommon() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->fCommonComponents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
			}
		}
	}
}

void XML11DTDConfiguration::resetXML11() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->fXML11Components)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLComponent, c, $cast($XMLComponent, i$->next()));
			{
				$nc(c)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(this)));
			}
		}
	}
}

void XML11DTDConfiguration::configureXML11Pipeline() {
	if (this->fCurrentDVFactory != this->fXML11DatatypeFactory) {
		$set(this, fCurrentDVFactory, this->fXML11DatatypeFactory);
		setProperty(XML11DTDConfiguration::DATATYPE_VALIDATOR_FACTORY, this->fCurrentDVFactory);
	}
	if (!$equals(this->fCurrentDTDScanner, this->fXML11DTDScanner)) {
		$set(this, fCurrentDTDScanner, this->fXML11DTDScanner);
		setProperty(XML11DTDConfiguration::DTD_SCANNER, this->fCurrentDTDScanner);
		setProperty(XML11DTDConfiguration::DTD_PROCESSOR, this->fXML11DTDProcessor);
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
	if ($equals($nc(this->fFeatures)->get(XML11DTDConfiguration::NAMESPACES), $Boolean::TRUE)) {
		if (!$equals(this->fCurrentScanner, this->fXML11NSDocScanner)) {
			$set(this, fCurrentScanner, this->fXML11NSDocScanner);
			setProperty(XML11DTDConfiguration::DOCUMENT_SCANNER, this->fXML11NSDocScanner);
			setProperty(XML11DTDConfiguration::DTD_VALIDATOR, this->fXML11NSDTDValidator);
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
			setProperty(XML11DTDConfiguration::DOCUMENT_SCANNER, this->fXML11DocScanner);
			setProperty(XML11DTDConfiguration::DTD_VALIDATOR, this->fXML11DTDValidator);
		}
		$nc(this->fXML11DocScanner)->setDocumentHandler(static_cast<$XMLDocumentHandler*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(static_cast<$XMLDTDValidator*>(this->fXML11DTDValidator)))));
		$nc(this->fXML11DTDValidator)->setDocumentSource(this->fXML11DocScanner);
		$nc(this->fXML11DTDValidator)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(static_cast<$XMLDTDValidator*>(this->fXML11DTDValidator)))));
		}
		$set(this, fLastComponent, static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(static_cast<$XMLDTDValidator*>(this->fXML11DTDValidator)))));
	}
}

void XML11DTDConfiguration::configurePipeline() {
	if (this->fCurrentDVFactory != this->fDatatypeValidatorFactory) {
		$set(this, fCurrentDVFactory, this->fDatatypeValidatorFactory);
		setProperty(XML11DTDConfiguration::DATATYPE_VALIDATOR_FACTORY, this->fCurrentDVFactory);
	}
	if (this->fCurrentDTDScanner != this->fDTDScanner) {
		$set(this, fCurrentDTDScanner, this->fDTDScanner);
		setProperty(XML11DTDConfiguration::DTD_SCANNER, this->fCurrentDTDScanner);
		setProperty(XML11DTDConfiguration::DTD_PROCESSOR, this->fDTDProcessor);
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
	if ($equals($nc(this->fFeatures)->get(XML11DTDConfiguration::NAMESPACES), $Boolean::TRUE)) {
		if (!$equals(this->fCurrentScanner, this->fNamespaceScanner)) {
			$set(this, fCurrentScanner, this->fNamespaceScanner);
			setProperty(XML11DTDConfiguration::DOCUMENT_SCANNER, this->fNamespaceScanner);
			setProperty(XML11DTDConfiguration::DTD_VALIDATOR, this->fDTDValidator);
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
			setProperty(XML11DTDConfiguration::DOCUMENT_SCANNER, this->fNonNSScanner);
			setProperty(XML11DTDConfiguration::DTD_VALIDATOR, this->fNonNSDTDValidator);
		}
		$nc(this->fNonNSScanner)->setDocumentHandler(static_cast<$XMLDocumentHandler*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fNonNSDTDValidator))));
		$nc(this->fNonNSDTDValidator)->setDocumentSource(this->fNonNSScanner);
		$nc(this->fNonNSDTDValidator)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fNonNSDTDValidator))));
		}
		$set(this, fLastComponent, static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fNonNSDTDValidator))));
	}
}

$FeatureState* XML11DTDConfiguration::checkFeature($String* featureId) {
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
		bool var$7 = suffixLength == $nc($Constants::PARSER_SETTINGS)->length();
		if (var$7 && featureId->endsWith($Constants::PARSER_SETTINGS)) {
			$init($FeatureState);
			return $FeatureState::NOT_SUPPORTED;
		}
	}
	return $ParserConfigurationSettings::checkFeature(featureId);
}

$PropertyState* XML11DTDConfiguration::checkProperty($String* propertyId) {
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::DTD_SCANNER_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::DTD_SCANNER_PROPERTY)) {
			$init($PropertyState);
			return $PropertyState::RECOGNIZED;
		}
	}
	if ($nc(propertyId)->startsWith($Constants::SAX_PROPERTY_PREFIX)) {
		int32_t var$2 = propertyId->length();
		int32_t suffixLength = var$2 - $nc($Constants::SAX_PROPERTY_PREFIX)->length();
		bool var$3 = suffixLength == $nc($Constants::XML_STRING_PROPERTY)->length();
		if (var$3 && propertyId->endsWith($Constants::XML_STRING_PROPERTY)) {
			$init($PropertyState);
			return $PropertyState::NOT_SUPPORTED;
		}
	}
	return $ParserConfigurationSettings::checkProperty(propertyId);
}

void XML11DTDConfiguration::addComponent($XMLComponent* component) {
	if ($nc(this->fComponents)->contains(component)) {
		return;
	}
	$nc(this->fComponents)->add(component);
	addRecognizedParamsAndSetDefaults(component);
}

void XML11DTDConfiguration::addCommonComponent($XMLComponent* component) {
	if ($nc(this->fCommonComponents)->contains(component)) {
		return;
	}
	$nc(this->fCommonComponents)->add(component);
	addRecognizedParamsAndSetDefaults(component);
}

void XML11DTDConfiguration::addXML11Component($XMLComponent* component) {
	if ($nc(this->fXML11Components)->contains(component)) {
		return;
	}
	$nc(this->fXML11Components)->add(component);
	addRecognizedParamsAndSetDefaults(component);
}

void XML11DTDConfiguration::addRecognizedParamsAndSetDefaults($XMLComponent* component) {
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

void XML11DTDConfiguration::initXML11Components() {
	if (!this->f11Initialized) {
		$set(this, fXML11DatatypeFactory, $DTDDVFactory::getInstance(XML11DTDConfiguration::XML11_DATATYPE_VALIDATOR_FACTORY));
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

XML11DTDConfiguration::XML11DTDConfiguration() {
}

void clinit$XML11DTDConfiguration($Class* class$) {
	$assignStatic(XML11DTDConfiguration::XML11_DATATYPE_VALIDATOR_FACTORY, "com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11DTDDVFactoryImpl"_s);
	$init($Constants);
	$assignStatic(XML11DTDConfiguration::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XML11DTDConfiguration::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(XML11DTDConfiguration::EXTERNAL_GENERAL_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_GENERAL_ENTITIES_FEATURE}));
	$assignStatic(XML11DTDConfiguration::EXTERNAL_PARAMETER_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_PARAMETER_ENTITIES_FEATURE}));
	$assignStatic(XML11DTDConfiguration::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(XML11DTDConfiguration::LOAD_EXTERNAL_DTD, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::LOAD_EXTERNAL_DTD_FEATURE}));
	$assignStatic(XML11DTDConfiguration::XML_STRING, $str({$Constants::SAX_PROPERTY_PREFIX, $Constants::XML_STRING_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::DOCUMENT_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DOCUMENT_SCANNER_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::DTD_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_SCANNER_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::DTD_PROCESSOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_PROCESSOR_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::DTD_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::NAMESPACE_BINDER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_BINDER_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::DATATYPE_VALIDATOR_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(XML11DTDConfiguration::JAXP_SCHEMA_LANGUAGE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}));
	$assignStatic(XML11DTDConfiguration::JAXP_SCHEMA_SOURCE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}));
}

$Class* XML11DTDConfiguration::load$($String* name, bool initialize) {
	$loadClass(XML11DTDConfiguration, name, initialize, &_XML11DTDConfiguration_ClassInfo_, clinit$XML11DTDConfiguration, allocate$XML11DTDConfiguration);
	return class$;
}

$Class* XML11DTDConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com