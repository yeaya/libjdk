#include <com/sun/org/apache/xerces/internal/parsers/NonValidatingConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/parsers/BasicParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
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
#undef DTD_SCANNER
#undef DTD_SCANNER_PROPERTY
#undef DTD_VALIDATOR
#undef DTD_VALIDATOR_PROPERTY
#undef DYNAMIC_VALIDATION_FEATURE
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef FALSE
#undef JAXP_PROPERTY_PREFIX
#undef LOAD_DTD_GRAMMAR_FEATURE
#undef LOAD_EXTERNAL_DTD
#undef LOAD_EXTERNAL_DTD_FEATURE
#undef LOCALE
#undef LOCALE_PROPERTY
#undef NAMESPACES
#undef NAMESPACE_BINDER
#undef NAMESPACE_BINDER_PROPERTY
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
#undef SCHEMA_ELEMENT_DEFAULT
#undef SCHEMA_NORMALIZED_VALUE
#undef SCHEMA_SOURCE
#undef SCHEMA_VALIDATOR
#undef SCHEMA_VALIDATOR_PROPERTY
#undef SECURITY_MANAGER
#undef TRUE
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT
#undef VALIDATE_CONTENT_MODELS_FEATURE
#undef VALIDATE_DATATYPES_FEATURE
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
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XMLNS_DOMAIN
#undef XML_DOMAIN
#undef XML_SECURITY_PROPERTY_MANAGER

using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLDTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl;
using $XMLDocumentFragmentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl;
using $XMLDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLNSDocumentScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl;
using $XMLScanner = ::com::sun::org::apache::xerces::internal::impl::XMLScanner;
using $XMLDTDValidatorFilter = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter;
using $DTDDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $BasicParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $PropertyState = ::com::sun::org::apache::xerces::internal::util::PropertyState;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
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
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
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

$FieldInfo _NonValidatingConfiguration_FieldInfo_[] = {
	{"WARN_ON_DUPLICATE_ATTDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, WARN_ON_DUPLICATE_ATTDEF)},
	{"WARN_ON_DUPLICATE_ENTITYDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, WARN_ON_DUPLICATE_ENTITYDEF)},
	{"WARN_ON_UNDECLARED_ELEMDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, WARN_ON_UNDECLARED_ELEMDEF)},
	{"ALLOW_JAVA_ENCODINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, ALLOW_JAVA_ENCODINGS)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, CONTINUE_AFTER_FATAL_ERROR)},
	{"LOAD_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, LOAD_EXTERNAL_DTD)},
	{"NOTIFY_BUILTIN_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, NOTIFY_BUILTIN_REFS)},
	{"NOTIFY_CHAR_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, NOTIFY_CHAR_REFS)},
	{"NORMALIZE_DATA", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, NORMALIZE_DATA)},
	{"SCHEMA_ELEMENT_DEFAULT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, SCHEMA_ELEMENT_DEFAULT)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, ERROR_REPORTER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, ENTITY_MANAGER)},
	{"DOCUMENT_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, DOCUMENT_SCANNER)},
	{"DTD_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, DTD_SCANNER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, XMLGRAMMAR_POOL)},
	{"DTD_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, DTD_VALIDATOR)},
	{"NAMESPACE_BINDER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, NAMESPACE_BINDER)},
	{"DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, DATATYPE_VALIDATOR_FACTORY)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, VALIDATION_MANAGER)},
	{"SCHEMA_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, SCHEMA_VALIDATOR)},
	{"LOCALE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, LOCALE)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, XML_SECURITY_PROPERTY_MANAGER)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NonValidatingConfiguration, SECURITY_MANAGER)},
	{"PRINT_EXCEPTION_STACK_TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NonValidatingConfiguration, PRINT_EXCEPTION_STACK_TRACE)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fGrammarPool)},
	{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fDatatypeValidatorFactory)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fErrorReporter)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fEntityManager)},
	{"fScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner;", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fScanner)},
	{"fInputSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fInputSource)},
	{"fDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fDTDScanner)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fValidationManager)},
	{"fNamespaceScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl;", nullptr, $PRIVATE, $field(NonValidatingConfiguration, fNamespaceScanner)},
	{"fNonNSScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl;", nullptr, $PRIVATE, $field(NonValidatingConfiguration, fNonNSScanner)},
	{"fConfigUpdated", "Z", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fConfigUpdated)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fLocator)},
	{"fParseInProgress", "Z", nullptr, $PROTECTED, $field(NonValidatingConfiguration, fParseInProgress)},
	{}
};

$MethodInfo _NonValidatingConfiguration_MethodInfo_[] = {
	{"*addRecognizedFeatures", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*addRecognizedProperties", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC},
	{"*getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC},
	{"*getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC},
	{"*getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC},
	{"*getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $FINAL},
	{"*getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NonValidatingConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(NonValidatingConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(NonValidatingConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(NonValidatingConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"checkFeature", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, checkFeature, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"cleanup", "()V", nullptr, $PUBLIC, $virtualMethod(NonValidatingConfiguration, cleanup, void)},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, configurePipeline, void)},
	{"createDTDScanner", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, createDTDScanner, $XMLDTDScanner*)},
	{"createDatatypeValidatorFactory", "()Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, createDatatypeValidatorFactory, $DTDDVFactory*)},
	{"createDocumentScanner", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner;", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, createDocumentScanner, $XMLDocumentScanner*)},
	{"createEntityManager", "()Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, createEntityManager, $XMLEntityManager*)},
	{"createErrorReporter", "()Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, createErrorReporter, $XMLErrorReporter*)},
	{"createValidationManager", "()Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, createValidationManager, $ValidationManager*)},
	{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC, $virtualMethod(NonValidatingConfiguration, getFeatureState, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC, $virtualMethod(NonValidatingConfiguration, getPropertyState, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"parse", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(NonValidatingConfiguration, parse, bool, bool), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(NonValidatingConfiguration, parse, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(NonValidatingConfiguration, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC},
	{"*setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC},
	{"*setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC},
	{"*setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC},
	{"*setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(NonValidatingConfiguration, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(NonValidatingConfiguration, setInputSource, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException,java.io.IOException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(NonValidatingConfiguration, setLocale, void, $Locale*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(NonValidatingConfiguration, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NonValidatingConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.NonValidatingConfiguration",
	"com.sun.org.apache.xerces.internal.parsers.BasicParserConfiguration",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration",
	_NonValidatingConfiguration_FieldInfo_,
	_NonValidatingConfiguration_MethodInfo_
};

$Object* allocate$NonValidatingConfiguration($Class* clazz) {
	return $of($alloc(NonValidatingConfiguration));
}

void NonValidatingConfiguration::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	this->$BasicParserConfiguration::setDocumentHandler(documentHandler);
}

$XMLDocumentHandler* NonValidatingConfiguration::getDocumentHandler() {
	 return this->$BasicParserConfiguration::getDocumentHandler();
}

void NonValidatingConfiguration::setDTDHandler($XMLDTDHandler* dtdHandler) {
	this->$BasicParserConfiguration::setDTDHandler(dtdHandler);
}

$XMLDTDHandler* NonValidatingConfiguration::getDTDHandler() {
	 return this->$BasicParserConfiguration::getDTDHandler();
}

void NonValidatingConfiguration::setDTDContentModelHandler($XMLDTDContentModelHandler* handler) {
	this->$BasicParserConfiguration::setDTDContentModelHandler(handler);
}

$XMLDTDContentModelHandler* NonValidatingConfiguration::getDTDContentModelHandler() {
	 return this->$BasicParserConfiguration::getDTDContentModelHandler();
}

void NonValidatingConfiguration::setEntityResolver($XMLEntityResolver* resolver) {
	this->$BasicParserConfiguration::setEntityResolver(resolver);
}

$XMLEntityResolver* NonValidatingConfiguration::getEntityResolver() {
	 return this->$BasicParserConfiguration::getEntityResolver();
}

void NonValidatingConfiguration::setErrorHandler($XMLErrorHandler* errorHandler) {
	this->$BasicParserConfiguration::setErrorHandler(errorHandler);
}

$XMLErrorHandler* NonValidatingConfiguration::getErrorHandler() {
	 return this->$BasicParserConfiguration::getErrorHandler();
}

$Locale* NonValidatingConfiguration::getLocale() {
	 return this->$BasicParserConfiguration::getLocale();
}

void NonValidatingConfiguration::addRecognizedFeatures($StringArray* featureIds) {
	this->$BasicParserConfiguration::addRecognizedFeatures(featureIds);
}

void NonValidatingConfiguration::addRecognizedProperties($StringArray* propertyIds) {
	this->$BasicParserConfiguration::addRecognizedProperties(propertyIds);
}

bool NonValidatingConfiguration::getFeature($String* featureId) {
	 return this->$BasicParserConfiguration::getFeature(featureId);
}

bool NonValidatingConfiguration::getFeature($String* featureId, bool defaultValue) {
	 return this->$BasicParserConfiguration::getFeature(featureId, defaultValue);
}

$Object* NonValidatingConfiguration::getProperty($String* propertyId) {
	 return this->$BasicParserConfiguration::getProperty(propertyId);
}

$Object* NonValidatingConfiguration::getProperty($String* propertyId, Object$* defaultValue) {
	 return this->$BasicParserConfiguration::getProperty(propertyId, defaultValue);
}

int32_t NonValidatingConfiguration::hashCode() {
	 return this->$BasicParserConfiguration::hashCode();
}

bool NonValidatingConfiguration::equals(Object$* arg0) {
	 return this->$BasicParserConfiguration::equals(arg0);
}

$Object* NonValidatingConfiguration::clone() {
	 return this->$BasicParserConfiguration::clone();
}

$String* NonValidatingConfiguration::toString() {
	 return this->$BasicParserConfiguration::toString();
}

void NonValidatingConfiguration::finalize() {
	this->$BasicParserConfiguration::finalize();
}

$String* NonValidatingConfiguration::WARN_ON_DUPLICATE_ATTDEF = nullptr;
$String* NonValidatingConfiguration::WARN_ON_DUPLICATE_ENTITYDEF = nullptr;
$String* NonValidatingConfiguration::WARN_ON_UNDECLARED_ELEMDEF = nullptr;
$String* NonValidatingConfiguration::ALLOW_JAVA_ENCODINGS = nullptr;
$String* NonValidatingConfiguration::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* NonValidatingConfiguration::LOAD_EXTERNAL_DTD = nullptr;
$String* NonValidatingConfiguration::NOTIFY_BUILTIN_REFS = nullptr;
$String* NonValidatingConfiguration::NOTIFY_CHAR_REFS = nullptr;
$String* NonValidatingConfiguration::NORMALIZE_DATA = nullptr;
$String* NonValidatingConfiguration::SCHEMA_ELEMENT_DEFAULT = nullptr;
$String* NonValidatingConfiguration::ERROR_REPORTER = nullptr;
$String* NonValidatingConfiguration::ENTITY_MANAGER = nullptr;
$String* NonValidatingConfiguration::DOCUMENT_SCANNER = nullptr;
$String* NonValidatingConfiguration::DTD_SCANNER = nullptr;
$String* NonValidatingConfiguration::XMLGRAMMAR_POOL = nullptr;
$String* NonValidatingConfiguration::DTD_VALIDATOR = nullptr;
$String* NonValidatingConfiguration::NAMESPACE_BINDER = nullptr;
$String* NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* NonValidatingConfiguration::VALIDATION_MANAGER = nullptr;
$String* NonValidatingConfiguration::SCHEMA_VALIDATOR = nullptr;
$String* NonValidatingConfiguration::LOCALE = nullptr;
$String* NonValidatingConfiguration::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* NonValidatingConfiguration::SECURITY_MANAGER = nullptr;

void NonValidatingConfiguration::init$() {
	NonValidatingConfiguration::init$(nullptr, nullptr, nullptr);
}

void NonValidatingConfiguration::init$($SymbolTable* symbolTable) {
	NonValidatingConfiguration::init$(symbolTable, nullptr, nullptr);
}

void NonValidatingConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	NonValidatingConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void NonValidatingConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$BasicParserConfiguration::init$(symbolTable, parentSettings);
	this->fConfigUpdated = false;
	this->fParseInProgress = false;
	$init($ParserConfigurationSettings);
	$init($BasicParserConfiguration);
	$init($XMLConstants);
	$init($JdkConstants);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		$ParserConfigurationSettings::PARSER_SETTINGS,
		$BasicParserConfiguration::NAMESPACES,
		NonValidatingConfiguration::CONTINUE_AFTER_FATAL_ERROR,
		$XMLConstants::USE_CATALOG,
		$JdkConstants::OVERRIDE_PARSER
	}));
	addRecognizedFeatures(recognizedFeatures);
	$init($Boolean);
	$nc(this->fFeatures)->put(NonValidatingConfiguration::CONTINUE_AFTER_FATAL_ERROR, $Boolean::FALSE);
	$nc(this->fFeatures)->put($ParserConfigurationSettings::PARSER_SETTINGS, $Boolean::TRUE);
	$nc(this->fFeatures)->put($BasicParserConfiguration::NAMESPACES, $Boolean::TRUE);
	$init($JdkXmlUtils);
	$nc(this->fFeatures)->put($XMLConstants::USE_CATALOG, $($Boolean::valueOf($JdkXmlUtils::USE_CATALOG_DEFAULT)));
	$nc(this->fFeatures)->put($JdkConstants::OVERRIDE_PARSER, $($Boolean::valueOf($JdkConstants::OVERRIDE_PARSER_DEFAULT)));
	$var($StringArray, recognizedProperties, $new($StringArray, {
		NonValidatingConfiguration::ERROR_REPORTER,
		NonValidatingConfiguration::ENTITY_MANAGER,
		NonValidatingConfiguration::DOCUMENT_SCANNER,
		NonValidatingConfiguration::DTD_SCANNER,
		NonValidatingConfiguration::DTD_VALIDATOR,
		NonValidatingConfiguration::NAMESPACE_BINDER,
		NonValidatingConfiguration::XMLGRAMMAR_POOL,
		NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY,
		NonValidatingConfiguration::VALIDATION_MANAGER,
		NonValidatingConfiguration::LOCALE,
		NonValidatingConfiguration::SECURITY_MANAGER,
		NonValidatingConfiguration::XML_SECURITY_PROPERTY_MANAGER,
		$JdkXmlUtils::CATALOG_DEFER,
		$JdkXmlUtils::CATALOG_FILES,
		$JdkXmlUtils::CATALOG_PREFER,
		$JdkXmlUtils::CATALOG_RESOLVE,
		$JdkConstants::CDATA_CHUNK_SIZE
	}));
	addRecognizedProperties(recognizedProperties);
	$set(this, fGrammarPool, grammarPool);
	if (this->fGrammarPool != nullptr) {
		$nc(this->fProperties)->put(NonValidatingConfiguration::XMLGRAMMAR_POOL, this->fGrammarPool);
	}
	$set(this, fEntityManager, createEntityManager());
	$nc(this->fProperties)->put(NonValidatingConfiguration::ENTITY_MANAGER, this->fEntityManager);
	addComponent(this->fEntityManager);
	$set(this, fErrorReporter, createErrorReporter());
	$nc(this->fErrorReporter)->setDocumentLocator($($nc(this->fEntityManager)->getEntityScanner()));
	$nc(this->fProperties)->put(NonValidatingConfiguration::ERROR_REPORTER, this->fErrorReporter);
	addComponent(this->fErrorReporter);
	$set(this, fDTDScanner, createDTDScanner());
	if (this->fDTDScanner != nullptr) {
		$nc(this->fProperties)->put(NonValidatingConfiguration::DTD_SCANNER, this->fDTDScanner);
		if ($instanceOf($XMLComponent, this->fDTDScanner)) {
			addComponent($cast($XMLComponent, this->fDTDScanner));
		}
	}
	$set(this, fDatatypeValidatorFactory, createDatatypeValidatorFactory());
	if (this->fDatatypeValidatorFactory != nullptr) {
		$nc(this->fProperties)->put(NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY, this->fDatatypeValidatorFactory);
	}
	$set(this, fValidationManager, createValidationManager());
	if (this->fValidationManager != nullptr) {
		$nc(this->fProperties)->put(NonValidatingConfiguration::VALIDATION_MANAGER, this->fValidationManager);
	}
	$init($XMLMessageFormatter);
	if ($nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN) == nullptr) {
		$var($XMLMessageFormatter, xmft, $new($XMLMessageFormatter));
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XML_DOMAIN, xmft);
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XMLNS_DOMAIN, xmft);
	}
	this->fConfigUpdated = false;
	try {
		setLocale($($Locale::getDefault()));
	} catch ($XNIException& e) {
	}
	setProperty(NonValidatingConfiguration::XML_SECURITY_PROPERTY_MANAGER, $$new($XMLSecurityPropertyManager));
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

void NonValidatingConfiguration::setFeature($String* featureId, bool state) {
	this->fConfigUpdated = true;
	$BasicParserConfiguration::setFeature(featureId, state);
}

$PropertyState* NonValidatingConfiguration::getPropertyState($String* propertyId) {
	if ($nc(NonValidatingConfiguration::LOCALE)->equals(propertyId)) {
		return $PropertyState::is($(getLocale()));
	}
	return $BasicParserConfiguration::getPropertyState(propertyId);
}

void NonValidatingConfiguration::setProperty($String* propertyId, Object$* value) {
	this->fConfigUpdated = true;
	if ($nc(NonValidatingConfiguration::LOCALE)->equals(propertyId)) {
		setLocale($cast($Locale, value));
	}
	$BasicParserConfiguration::setProperty(propertyId, value);
}

void NonValidatingConfiguration::setLocale($Locale* locale) {
	$BasicParserConfiguration::setLocale(locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

$FeatureState* NonValidatingConfiguration::getFeatureState($String* featureId) {
	$init($ParserConfigurationSettings);
	if ($nc(featureId)->equals($ParserConfigurationSettings::PARSER_SETTINGS)) {
		return $FeatureState::is(this->fConfigUpdated);
	}
	return $BasicParserConfiguration::getFeatureState(featureId);
}

void NonValidatingConfiguration::setInputSource($XMLInputSource* inputSource) {
	$set(this, fInputSource, inputSource);
}

bool NonValidatingConfiguration::parse(bool complete) {
	if (this->fInputSource != nullptr) {
		try {
			reset();
			$nc(this->fScanner)->setInputSource(this->fInputSource);
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
		return $nc(this->fScanner)->scanDocument(complete);
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

void NonValidatingConfiguration::cleanup() {
	$nc(this->fEntityManager)->closeReaders();
}

void NonValidatingConfiguration::parse($XMLInputSource* source) {
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

void NonValidatingConfiguration::reset() {
	if (this->fValidationManager != nullptr) {
		$nc(this->fValidationManager)->reset();
	}
	configurePipeline();
	$BasicParserConfiguration::reset();
}

void NonValidatingConfiguration::configurePipeline() {
	$init($BasicParserConfiguration);
	$init($Boolean);
	if ($equals($nc(this->fFeatures)->get($BasicParserConfiguration::NAMESPACES), $Boolean::TRUE)) {
		if (this->fNamespaceScanner == nullptr) {
			$set(this, fNamespaceScanner, $new($XMLNSDocumentScannerImpl));
			addComponent(static_cast<$XMLComponent*>(this->fNamespaceScanner));
		}
		$nc(this->fProperties)->put(NonValidatingConfiguration::DOCUMENT_SCANNER, this->fNamespaceScanner);
		$nc(this->fNamespaceScanner)->setDTDValidator(nullptr);
		$set(this, fScanner, this->fNamespaceScanner);
	} else {
		if (this->fNonNSScanner == nullptr) {
			$set(this, fNonNSScanner, $new($XMLDocumentScannerImpl));
			addComponent(static_cast<$XMLComponent*>(this->fNonNSScanner));
		}
		$nc(this->fProperties)->put(NonValidatingConfiguration::DOCUMENT_SCANNER, this->fNonNSScanner);
		$set(this, fScanner, this->fNonNSScanner);
	}
	$nc(this->fScanner)->setDocumentHandler(this->fDocumentHandler);
	$set(this, fLastComponent, this->fScanner);
	if (this->fDTDScanner != nullptr) {
		$nc(this->fDTDScanner)->setDTDHandler(this->fDTDHandler);
		$nc(this->fDTDScanner)->setDTDContentModelHandler(this->fDTDContentModelHandler);
	}
}

$FeatureState* NonValidatingConfiguration::checkFeature($String* featureId) {
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
	}
	return $BasicParserConfiguration::checkFeature(featureId);
}

$PropertyState* NonValidatingConfiguration::checkProperty($String* propertyId) {
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
	return $BasicParserConfiguration::checkProperty(propertyId);
}

$XMLEntityManager* NonValidatingConfiguration::createEntityManager() {
	return $new($XMLEntityManager);
}

$XMLErrorReporter* NonValidatingConfiguration::createErrorReporter() {
	return $new($XMLErrorReporter);
}

$XMLDocumentScanner* NonValidatingConfiguration::createDocumentScanner() {
	return nullptr;
}

$XMLDTDScanner* NonValidatingConfiguration::createDTDScanner() {
	return $new($XMLDTDScannerImpl);
}

$DTDDVFactory* NonValidatingConfiguration::createDatatypeValidatorFactory() {
	return $DTDDVFactory::getInstance();
}

$ValidationManager* NonValidatingConfiguration::createValidationManager() {
	return $new($ValidationManager);
}

NonValidatingConfiguration::NonValidatingConfiguration() {
}

void clinit$NonValidatingConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(NonValidatingConfiguration::WARN_ON_DUPLICATE_ATTDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE}));
	$assignStatic(NonValidatingConfiguration::WARN_ON_DUPLICATE_ENTITYDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ENTITYDEF_FEATURE}));
	$assignStatic(NonValidatingConfiguration::WARN_ON_UNDECLARED_ELEMDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_UNDECLARED_ELEMDEF_FEATURE}));
	$assignStatic(NonValidatingConfiguration::ALLOW_JAVA_ENCODINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}));
	$assignStatic(NonValidatingConfiguration::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(NonValidatingConfiguration::LOAD_EXTERNAL_DTD, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::LOAD_EXTERNAL_DTD_FEATURE}));
	$assignStatic(NonValidatingConfiguration::NOTIFY_BUILTIN_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_BUILTIN_REFS_FEATURE}));
	$assignStatic(NonValidatingConfiguration::NOTIFY_CHAR_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_CHAR_REFS_FEATURE}));
	$assignStatic(NonValidatingConfiguration::NORMALIZE_DATA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_NORMALIZED_VALUE}));
	$assignStatic(NonValidatingConfiguration::SCHEMA_ELEMENT_DEFAULT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_ELEMENT_DEFAULT}));
	$assignStatic(NonValidatingConfiguration::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::DOCUMENT_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DOCUMENT_SCANNER_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::DTD_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_SCANNER_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::DTD_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::NAMESPACE_BINDER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_BINDER_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::DATATYPE_VALIDATOR_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::SCHEMA_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_VALIDATOR_PROPERTY}));
	$assignStatic(NonValidatingConfiguration::LOCALE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::LOCALE_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(NonValidatingConfiguration::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(NonValidatingConfiguration::SECURITY_MANAGER, $Constants::SECURITY_MANAGER);
}

$Class* NonValidatingConfiguration::load$($String* name, bool initialize) {
	$loadClass(NonValidatingConfiguration, name, initialize, &_NonValidatingConfiguration_ClassInfo_, clinit$NonValidatingConfiguration, allocate$NonValidatingConfiguration);
	return class$;
}

$Class* NonValidatingConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com