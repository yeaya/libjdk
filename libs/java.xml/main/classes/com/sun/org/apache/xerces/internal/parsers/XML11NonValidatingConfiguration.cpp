#include <com/sun/org/apache/xerces/internal/parsers/XML11NonValidatingConfiguration.h>

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
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
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
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
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
#undef LOAD_DTD_GRAMMAR_FEATURE
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
using $XMLDTDValidatorFilter = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter;
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
using $XMLDTDScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner;
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

$FieldInfo _XML11NonValidatingConfiguration_FieldInfo_[] = {
	{"XML11_DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, XML11_DATATYPE_VALIDATOR_FACTORY)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, VALIDATION)},
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, NAMESPACES)},
	{"EXTERNAL_GENERAL_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, EXTERNAL_GENERAL_ENTITIES)},
	{"EXTERNAL_PARAMETER_ENTITIES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, EXTERNAL_PARAMETER_ENTITIES)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, CONTINUE_AFTER_FATAL_ERROR)},
	{"XML_STRING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, XML_STRING)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, SYMBOL_TABLE)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, ERROR_HANDLER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, ENTITY_RESOLVER)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, ERROR_REPORTER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, ENTITY_MANAGER)},
	{"DOCUMENT_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, DOCUMENT_SCANNER)},
	{"DTD_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, DTD_SCANNER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, XMLGRAMMAR_POOL)},
	{"DTD_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, DTD_VALIDATOR)},
	{"NAMESPACE_BINDER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, NAMESPACE_BINDER)},
	{"DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, DATATYPE_VALIDATOR_FACTORY)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XML11NonValidatingConfiguration, VALIDATION_MANAGER)},
	{"PRINT_EXCEPTION_STACK_TRACE", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XML11NonValidatingConfiguration, PRINT_EXCEPTION_STACK_TRACE)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fSymbolTable)},
	{"fInputSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fInputSource)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fValidationManager)},
	{"fVersionDetector", "Lcom/sun/org/apache/xerces/internal/impl/XMLVersionDetector;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fVersionDetector)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fLocator)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fLocale)},
	{"fComponents", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(XML11NonValidatingConfiguration, fComponents)},
	{"fXML11Components", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(XML11NonValidatingConfiguration, fXML11Components)},
	{"fCommonComponents", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;>;", $PROTECTED, $field(XML11NonValidatingConfiguration, fCommonComponents)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fDocumentHandler)},
	{"fDTDHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fDTDHandler)},
	{"fDTDContentModelHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fDTDContentModelHandler)},
	{"fLastComponent", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fLastComponent)},
	{"fParseInProgress", "Z", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fParseInProgress)},
	{"fConfigUpdated", "Z", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fConfigUpdated)},
	{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fDatatypeValidatorFactory)},
	{"fNamespaceScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fNamespaceScanner)},
	{"fNonNSScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fNonNSScanner)},
	{"fDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fDTDScanner)},
	{"fXML11DatatypeFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fXML11DatatypeFactory)},
	{"fXML11NSDocScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fXML11NSDocScanner)},
	{"fXML11DocScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11DocumentScannerImpl;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fXML11DocScanner)},
	{"fXML11DTDScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fXML11DTDScanner)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fGrammarPool)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fErrorReporter)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fEntityManager)},
	{"fCurrentScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fCurrentScanner)},
	{"fCurrentDVFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fCurrentDVFactory)},
	{"fCurrentDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(XML11NonValidatingConfiguration, fCurrentDTDScanner)},
	{"f11Initialized", "Z", nullptr, $PRIVATE, $field(XML11NonValidatingConfiguration, f11Initialized)},
	{}
};

$MethodInfo _XML11NonValidatingConfiguration_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11NonValidatingConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XML11NonValidatingConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XML11NonValidatingConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(XML11NonValidatingConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"addCommonComponent", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, addCommonComponent, void, $XMLComponent*)},
	{"addComponent", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, addComponent, void, $XMLComponent*)},
	{"addRecognizedParamsAndSetDefaults", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, addRecognizedParamsAndSetDefaults, void, $XMLComponent*)},
	{"addXML11Component", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, addXML11Component, void, $XMLComponent*)},
	{"checkFeature", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, checkFeature, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"cleanup", "()V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, cleanup, void)},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, configurePipeline, void)},
	{"configureXML11Pipeline", "()V", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, configureXML11Pipeline, void)},
	{"getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, getDTDContentModelHandler, $XMLDTDContentModelHandler*)},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, getDTDHandler, $XMLDTDHandler*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, getDocumentHandler, $XMLDocumentHandler*)},
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, getEntityResolver, $XMLEntityResolver*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, getErrorHandler, $XMLErrorHandler*)},
	{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, getFeatureState, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, getLocale, $Locale*)},
	{"initXML11Components", "()V", nullptr, $PRIVATE, $method(XML11NonValidatingConfiguration, initXML11Components, void)},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, parse, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"parse", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, parse, bool, bool), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resetCommon", "()V", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, resetCommon, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resetXML11", "()V", nullptr, $PROTECTED, $virtualMethod(XML11NonValidatingConfiguration, resetXML11, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, setDTDContentModelHandler, void, $XMLDTDContentModelHandler*)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, setDTDHandler, void, $XMLDTDHandler*)},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, setEntityResolver, void, $XMLEntityResolver*)},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, setErrorHandler, void, $XMLErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, setInputSource, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException,java.io.IOException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, setLocale, void, $Locale*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XML11NonValidatingConfiguration, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XML11NonValidatingConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.XML11NonValidatingConfiguration",
	"com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration,com.sun.org.apache.xerces.internal.parsers.XML11Configurable",
	_XML11NonValidatingConfiguration_FieldInfo_,
	_XML11NonValidatingConfiguration_MethodInfo_
};

$Object* allocate$XML11NonValidatingConfiguration($Class* clazz) {
	return $of($alloc(XML11NonValidatingConfiguration));
}

void XML11NonValidatingConfiguration::addRecognizedFeatures($StringArray* featureIds) {
	this->$ParserConfigurationSettings::addRecognizedFeatures(featureIds);
}

void XML11NonValidatingConfiguration::addRecognizedProperties($StringArray* propertyIds) {
	this->$ParserConfigurationSettings::addRecognizedProperties(propertyIds);
}

bool XML11NonValidatingConfiguration::getFeature($String* featureId) {
	 return this->$ParserConfigurationSettings::getFeature(featureId);
}

bool XML11NonValidatingConfiguration::getFeature($String* featureId, bool defaultValue) {
	 return this->$ParserConfigurationSettings::getFeature(featureId, defaultValue);
}

$Object* XML11NonValidatingConfiguration::getProperty($String* propertyId) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId);
}

$Object* XML11NonValidatingConfiguration::getProperty($String* propertyId, Object$* defaultValue) {
	 return this->$ParserConfigurationSettings::getProperty(propertyId, defaultValue);
}

$PropertyState* XML11NonValidatingConfiguration::getPropertyState($String* propertyId) {
	 return this->$ParserConfigurationSettings::getPropertyState(propertyId);
}

int32_t XML11NonValidatingConfiguration::hashCode() {
	 return this->$ParserConfigurationSettings::hashCode();
}

bool XML11NonValidatingConfiguration::equals(Object$* arg0) {
	 return this->$ParserConfigurationSettings::equals(arg0);
}

$Object* XML11NonValidatingConfiguration::clone() {
	 return this->$ParserConfigurationSettings::clone();
}

$String* XML11NonValidatingConfiguration::toString() {
	 return this->$ParserConfigurationSettings::toString();
}

void XML11NonValidatingConfiguration::finalize() {
	this->$ParserConfigurationSettings::finalize();
}

$String* XML11NonValidatingConfiguration::XML11_DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* XML11NonValidatingConfiguration::VALIDATION = nullptr;
$String* XML11NonValidatingConfiguration::NAMESPACES = nullptr;
$String* XML11NonValidatingConfiguration::EXTERNAL_GENERAL_ENTITIES = nullptr;
$String* XML11NonValidatingConfiguration::EXTERNAL_PARAMETER_ENTITIES = nullptr;
$String* XML11NonValidatingConfiguration::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* XML11NonValidatingConfiguration::XML_STRING = nullptr;
$String* XML11NonValidatingConfiguration::SYMBOL_TABLE = nullptr;
$String* XML11NonValidatingConfiguration::ERROR_HANDLER = nullptr;
$String* XML11NonValidatingConfiguration::ENTITY_RESOLVER = nullptr;
$String* XML11NonValidatingConfiguration::ERROR_REPORTER = nullptr;
$String* XML11NonValidatingConfiguration::ENTITY_MANAGER = nullptr;
$String* XML11NonValidatingConfiguration::DOCUMENT_SCANNER = nullptr;
$String* XML11NonValidatingConfiguration::DTD_SCANNER = nullptr;
$String* XML11NonValidatingConfiguration::XMLGRAMMAR_POOL = nullptr;
$String* XML11NonValidatingConfiguration::DTD_VALIDATOR = nullptr;
$String* XML11NonValidatingConfiguration::NAMESPACE_BINDER = nullptr;
$String* XML11NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* XML11NonValidatingConfiguration::VALIDATION_MANAGER = nullptr;

void XML11NonValidatingConfiguration::init$() {
	XML11NonValidatingConfiguration::init$(nullptr, nullptr, nullptr);
}

void XML11NonValidatingConfiguration::init$($SymbolTable* symbolTable) {
	XML11NonValidatingConfiguration::init$(symbolTable, nullptr, nullptr);
}

void XML11NonValidatingConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	XML11NonValidatingConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void XML11NonValidatingConfiguration::init$($SymbolTable* symbolTable$renamed, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
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
	$set(this, fXML11DTDScanner, nullptr);
	this->f11Initialized = false;
	$set(this, fComponents, $new($ArrayList));
	$set(this, fXML11Components, $new($ArrayList));
	$set(this, fCommonComponents, $new($ArrayList));
	$set(this, fFeatures, $new($HashMap));
	$set(this, fProperties, $new($HashMap));
	$init($ParserConfigurationSettings);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		XML11NonValidatingConfiguration::CONTINUE_AFTER_FATAL_ERROR,
		XML11NonValidatingConfiguration::VALIDATION,
		XML11NonValidatingConfiguration::NAMESPACES,
		XML11NonValidatingConfiguration::EXTERNAL_GENERAL_ENTITIES,
		XML11NonValidatingConfiguration::EXTERNAL_PARAMETER_ENTITIES,
		$ParserConfigurationSettings::PARSER_SETTINGS
	}));
	addRecognizedFeatures(recognizedFeatures);
	$init($Boolean);
	$nc(this->fFeatures)->put(XML11NonValidatingConfiguration::VALIDATION, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XML11NonValidatingConfiguration::NAMESPACES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11NonValidatingConfiguration::EXTERNAL_GENERAL_ENTITIES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11NonValidatingConfiguration::EXTERNAL_PARAMETER_ENTITIES, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XML11NonValidatingConfiguration::CONTINUE_AFTER_FATAL_ERROR, $Boolean::FALSE);
	$nc(this->fFeatures)->put($ParserConfigurationSettings::PARSER_SETTINGS, $Boolean::TRUE);
	$var($StringArray, recognizedProperties, $new($StringArray, {
		XML11NonValidatingConfiguration::XML_STRING,
		XML11NonValidatingConfiguration::SYMBOL_TABLE,
		XML11NonValidatingConfiguration::ERROR_HANDLER,
		XML11NonValidatingConfiguration::ENTITY_RESOLVER,
		XML11NonValidatingConfiguration::ERROR_REPORTER,
		XML11NonValidatingConfiguration::ENTITY_MANAGER,
		XML11NonValidatingConfiguration::DOCUMENT_SCANNER,
		XML11NonValidatingConfiguration::DTD_SCANNER,
		XML11NonValidatingConfiguration::DTD_VALIDATOR,
		XML11NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY,
		XML11NonValidatingConfiguration::VALIDATION_MANAGER,
		XML11NonValidatingConfiguration::XML_STRING,
		XML11NonValidatingConfiguration::XMLGRAMMAR_POOL
	}));
	addRecognizedProperties(recognizedProperties);
	if (symbolTable == nullptr) {
		$assign(symbolTable, $new($SymbolTable));
	}
	$set(this, fSymbolTable, symbolTable);
	$nc(this->fProperties)->put(XML11NonValidatingConfiguration::SYMBOL_TABLE, this->fSymbolTable);
	$set(this, fGrammarPool, grammarPool);
	if (this->fGrammarPool != nullptr) {
		$nc(this->fProperties)->put(XML11NonValidatingConfiguration::XMLGRAMMAR_POOL, this->fGrammarPool);
	}
	$set(this, fEntityManager, $new($XMLEntityManager));
	$nc(this->fProperties)->put(XML11NonValidatingConfiguration::ENTITY_MANAGER, this->fEntityManager);
	addCommonComponent(this->fEntityManager);
	$set(this, fErrorReporter, $new($XMLErrorReporter));
	$nc(this->fErrorReporter)->setDocumentLocator($($nc(this->fEntityManager)->getEntityScanner()));
	$nc(this->fProperties)->put(XML11NonValidatingConfiguration::ERROR_REPORTER, this->fErrorReporter);
	addCommonComponent(this->fErrorReporter);
	$set(this, fNamespaceScanner, $new($XMLNSDocumentScannerImpl));
	$nc(this->fProperties)->put(XML11NonValidatingConfiguration::DOCUMENT_SCANNER, this->fNamespaceScanner);
	addComponent(static_cast<$XMLComponent*>(this->fNamespaceScanner));
	$set(this, fDTDScanner, $new($XMLDTDScannerImpl));
	$nc(this->fProperties)->put(XML11NonValidatingConfiguration::DTD_SCANNER, this->fDTDScanner);
	addComponent($cast($XMLComponent, this->fDTDScanner));
	$set(this, fDatatypeValidatorFactory, $DTDDVFactory::getInstance());
	$nc(this->fProperties)->put(XML11NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY, this->fDatatypeValidatorFactory);
	$set(this, fValidationManager, $new($ValidationManager));
	$nc(this->fProperties)->put(XML11NonValidatingConfiguration::VALIDATION_MANAGER, this->fValidationManager);
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

void XML11NonValidatingConfiguration::setInputSource($XMLInputSource* inputSource) {
	$set(this, fInputSource, inputSource);
}

void XML11NonValidatingConfiguration::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

void XML11NonValidatingConfiguration::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
	if (this->fLastComponent != nullptr) {
		$nc(this->fLastComponent)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fLastComponent);
		}
	}
}

$XMLDocumentHandler* XML11NonValidatingConfiguration::getDocumentHandler() {
	return this->fDocumentHandler;
}

void XML11NonValidatingConfiguration::setDTDHandler($XMLDTDHandler* dtdHandler) {
	$set(this, fDTDHandler, dtdHandler);
}

$XMLDTDHandler* XML11NonValidatingConfiguration::getDTDHandler() {
	return this->fDTDHandler;
}

void XML11NonValidatingConfiguration::setDTDContentModelHandler($XMLDTDContentModelHandler* handler) {
	$set(this, fDTDContentModelHandler, handler);
}

$XMLDTDContentModelHandler* XML11NonValidatingConfiguration::getDTDContentModelHandler() {
	return this->fDTDContentModelHandler;
}

void XML11NonValidatingConfiguration::setEntityResolver($XMLEntityResolver* resolver) {
	$nc(this->fProperties)->put(XML11NonValidatingConfiguration::ENTITY_RESOLVER, resolver);
}

$XMLEntityResolver* XML11NonValidatingConfiguration::getEntityResolver() {
	return $cast($XMLEntityResolver, $nc(this->fProperties)->get(XML11NonValidatingConfiguration::ENTITY_RESOLVER));
}

void XML11NonValidatingConfiguration::setErrorHandler($XMLErrorHandler* errorHandler) {
	$nc(this->fProperties)->put(XML11NonValidatingConfiguration::ERROR_HANDLER, errorHandler);
}

$XMLErrorHandler* XML11NonValidatingConfiguration::getErrorHandler() {
	return $cast($XMLErrorHandler, $nc(this->fProperties)->get(XML11NonValidatingConfiguration::ERROR_HANDLER));
}

void XML11NonValidatingConfiguration::cleanup() {
	$nc(this->fEntityManager)->closeReaders();
}

void XML11NonValidatingConfiguration::parse($XMLInputSource* source) {
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

bool XML11NonValidatingConfiguration::parse(bool complete) {
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

$FeatureState* XML11NonValidatingConfiguration::getFeatureState($String* featureId) {
	$init($ParserConfigurationSettings);
	if ($nc(featureId)->equals($ParserConfigurationSettings::PARSER_SETTINGS)) {
		return $FeatureState::is(this->fConfigUpdated);
	}
	return $ParserConfigurationSettings::getFeatureState(featureId);
}

void XML11NonValidatingConfiguration::setFeature($String* featureId, bool state) {
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

void XML11NonValidatingConfiguration::setProperty($String* propertyId, Object$* value) {
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

$Locale* XML11NonValidatingConfiguration::getLocale() {
	return this->fLocale;
}

void XML11NonValidatingConfiguration::reset() {
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

void XML11NonValidatingConfiguration::resetCommon() {
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

void XML11NonValidatingConfiguration::resetXML11() {
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

void XML11NonValidatingConfiguration::configureXML11Pipeline() {
	if (this->fCurrentDVFactory != this->fXML11DatatypeFactory) {
		$set(this, fCurrentDVFactory, this->fXML11DatatypeFactory);
		setProperty(XML11NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY, this->fCurrentDVFactory);
	}
	if (!$equals(this->fCurrentDTDScanner, this->fXML11DTDScanner)) {
		$set(this, fCurrentDTDScanner, this->fXML11DTDScanner);
		setProperty(XML11NonValidatingConfiguration::DTD_SCANNER, this->fCurrentDTDScanner);
	}
	$nc(this->fXML11DTDScanner)->setDTDHandler(this->fDTDHandler);
	$nc(this->fXML11DTDScanner)->setDTDContentModelHandler(this->fDTDContentModelHandler);
	$init($Boolean);
	if ($equals($nc(this->fFeatures)->get(XML11NonValidatingConfiguration::NAMESPACES), $Boolean::TRUE)) {
		if (!$equals(this->fCurrentScanner, this->fXML11NSDocScanner)) {
			$set(this, fCurrentScanner, this->fXML11NSDocScanner);
			setProperty(XML11NonValidatingConfiguration::DOCUMENT_SCANNER, this->fXML11NSDocScanner);
		}
		$nc(this->fXML11NSDocScanner)->setDTDValidator(nullptr);
		$nc(this->fXML11NSDocScanner)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fXML11NSDocScanner);
		}
		$set(this, fLastComponent, this->fXML11NSDocScanner);
	} else {
		if (this->fXML11DocScanner == nullptr) {
			$set(this, fXML11DocScanner, $new($XML11DocumentScannerImpl));
			addXML11Component(this->fXML11DocScanner);
		}
		if (!$equals(this->fCurrentScanner, this->fXML11DocScanner)) {
			$set(this, fCurrentScanner, this->fXML11DocScanner);
			setProperty(XML11NonValidatingConfiguration::DOCUMENT_SCANNER, this->fXML11DocScanner);
		}
		$nc(this->fXML11DocScanner)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fXML11DocScanner);
		}
		$set(this, fLastComponent, this->fXML11DocScanner);
	}
}

void XML11NonValidatingConfiguration::configurePipeline() {
	if (this->fCurrentDVFactory != this->fDatatypeValidatorFactory) {
		$set(this, fCurrentDVFactory, this->fDatatypeValidatorFactory);
		setProperty(XML11NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY, this->fCurrentDVFactory);
	}
	if (this->fCurrentDTDScanner != this->fDTDScanner) {
		$set(this, fCurrentDTDScanner, this->fDTDScanner);
		setProperty(XML11NonValidatingConfiguration::DTD_SCANNER, this->fCurrentDTDScanner);
	}
	$nc(this->fDTDScanner)->setDTDHandler(this->fDTDHandler);
	$nc(this->fDTDScanner)->setDTDContentModelHandler(this->fDTDContentModelHandler);
	$init($Boolean);
	if ($equals($nc(this->fFeatures)->get(XML11NonValidatingConfiguration::NAMESPACES), $Boolean::TRUE)) {
		if (!$equals(this->fCurrentScanner, this->fNamespaceScanner)) {
			$set(this, fCurrentScanner, this->fNamespaceScanner);
			setProperty(XML11NonValidatingConfiguration::DOCUMENT_SCANNER, this->fNamespaceScanner);
		}
		$nc(this->fNamespaceScanner)->setDTDValidator(nullptr);
		$nc(this->fNamespaceScanner)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fNamespaceScanner);
		}
		$set(this, fLastComponent, this->fNamespaceScanner);
	} else {
		if (this->fNonNSScanner == nullptr) {
			$set(this, fNonNSScanner, $new($XMLDocumentScannerImpl));
			addComponent(static_cast<$XMLComponent*>(this->fNonNSScanner));
		}
		if (!$equals(this->fCurrentScanner, this->fNonNSScanner)) {
			$set(this, fCurrentScanner, this->fNonNSScanner);
			setProperty(XML11NonValidatingConfiguration::DOCUMENT_SCANNER, this->fNonNSScanner);
		}
		$nc(this->fNonNSScanner)->setDocumentHandler(this->fDocumentHandler);
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->setDocumentSource(this->fNonNSScanner);
		}
		$set(this, fLastComponent, this->fNonNSScanner);
	}
}

$FeatureState* XML11NonValidatingConfiguration::checkFeature($String* featureId) {
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

$PropertyState* XML11NonValidatingConfiguration::checkProperty($String* propertyId) {
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
	if ($nc(propertyId)->startsWith($Constants::JAXP_PROPERTY_PREFIX)) {
		int32_t var$2 = propertyId->length();
		int32_t suffixLength = var$2 - $nc($Constants::JAXP_PROPERTY_PREFIX)->length();
		bool var$3 = suffixLength == $nc($Constants::SCHEMA_SOURCE)->length();
		if (var$3 && propertyId->endsWith($Constants::SCHEMA_SOURCE)) {
			$init($PropertyState);
			return $PropertyState::RECOGNIZED;
		}
	}
	if ($nc(propertyId)->startsWith($Constants::SAX_PROPERTY_PREFIX)) {
		int32_t var$4 = propertyId->length();
		int32_t suffixLength = var$4 - $nc($Constants::SAX_PROPERTY_PREFIX)->length();
		bool var$5 = suffixLength == $nc($Constants::XML_STRING_PROPERTY)->length();
		if (var$5 && propertyId->endsWith($Constants::XML_STRING_PROPERTY)) {
			$init($PropertyState);
			return $PropertyState::NOT_SUPPORTED;
		}
	}
	return $ParserConfigurationSettings::checkProperty(propertyId);
}

void XML11NonValidatingConfiguration::addComponent($XMLComponent* component) {
	if ($nc(this->fComponents)->contains(component)) {
		return;
	}
	$nc(this->fComponents)->add(component);
	addRecognizedParamsAndSetDefaults(component);
}

void XML11NonValidatingConfiguration::addCommonComponent($XMLComponent* component) {
	if ($nc(this->fCommonComponents)->contains(component)) {
		return;
	}
	$nc(this->fCommonComponents)->add(component);
	addRecognizedParamsAndSetDefaults(component);
}

void XML11NonValidatingConfiguration::addXML11Component($XMLComponent* component) {
	if ($nc(this->fXML11Components)->contains(component)) {
		return;
	}
	$nc(this->fXML11Components)->add(component);
	addRecognizedParamsAndSetDefaults(component);
}

void XML11NonValidatingConfiguration::addRecognizedParamsAndSetDefaults($XMLComponent* component) {
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

void XML11NonValidatingConfiguration::initXML11Components() {
	if (!this->f11Initialized) {
		$set(this, fXML11DatatypeFactory, $DTDDVFactory::getInstance(XML11NonValidatingConfiguration::XML11_DATATYPE_VALIDATOR_FACTORY));
		$set(this, fXML11DTDScanner, $new($XML11DTDScannerImpl));
		addXML11Component(this->fXML11DTDScanner);
		$set(this, fXML11NSDocScanner, $new($XML11NSDocumentScannerImpl));
		addXML11Component(this->fXML11NSDocScanner);
		this->f11Initialized = true;
	}
}

XML11NonValidatingConfiguration::XML11NonValidatingConfiguration() {
}

void clinit$XML11NonValidatingConfiguration($Class* class$) {
	$assignStatic(XML11NonValidatingConfiguration::XML11_DATATYPE_VALIDATOR_FACTORY, "com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11DTDDVFactoryImpl"_s);
	$init($Constants);
	$assignStatic(XML11NonValidatingConfiguration::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XML11NonValidatingConfiguration::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(XML11NonValidatingConfiguration::EXTERNAL_GENERAL_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_GENERAL_ENTITIES_FEATURE}));
	$assignStatic(XML11NonValidatingConfiguration::EXTERNAL_PARAMETER_ENTITIES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::EXTERNAL_PARAMETER_ENTITIES_FEATURE}));
	$assignStatic(XML11NonValidatingConfiguration::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(XML11NonValidatingConfiguration::XML_STRING, $str({$Constants::SAX_PROPERTY_PREFIX, $Constants::XML_STRING_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::DOCUMENT_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DOCUMENT_SCANNER_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::DTD_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_SCANNER_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::DTD_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::NAMESPACE_BINDER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_BINDER_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY}));
	$assignStatic(XML11NonValidatingConfiguration::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
}

$Class* XML11NonValidatingConfiguration::load$($String* name, bool initialize) {
	$loadClass(XML11NonValidatingConfiguration, name, initialize, &_XML11NonValidatingConfiguration_ClassInfo_, clinit$XML11NonValidatingConfiguration, allocate$XML11NonValidatingConfiguration);
	return class$;
}

$Class* XML11NonValidatingConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com