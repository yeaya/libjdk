#include <com/sun/org/apache/xerces/internal/parsers/DTDConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLNamespaceBinder.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>
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
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef JAXP_PROPERTY_PREFIX
#undef JAXP_SCHEMA_LANGUAGE
#undef JAXP_SCHEMA_SOURCE
#undef LOAD_DTD_GRAMMAR_FEATURE
#undef LOAD_EXTERNAL_DTD
#undef LOAD_EXTERNAL_DTD_FEATURE
#undef LOCALE
#undef LOCALE_PROPERTY
#undef NAMESPACES
#undef NAMESPACE_BINDER
#undef NAMESPACE_BINDER_PROPERTY
#undef NOTIFY_BUILTIN_REFS
#undef NOTIFY_BUILTIN_REFS_FEATURE
#undef NOTIFY_CHAR_REFS
#undef NOTIFY_CHAR_REFS_FEATURE
#undef NOT_SUPPORTED
#undef OVERRIDE_PARSER
#undef OVERRIDE_PARSER_DEFAULT
#undef PRINT_EXCEPTION_STACK_TRACE
#undef RECOGNIZED
#undef SCHEMA_LANGUAGE
#undef SCHEMA_SOURCE
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
using $XMLNamespaceBinder = ::com::sun::org::apache::xerces::internal::impl::XMLNamespaceBinder;
using $XMLDTDProcessor = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor;
using $XMLDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator;
using $XMLDTDValidatorFilter = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidatorFilter;
using $DTDDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $BasicParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
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

$FieldInfo _DTDConfiguration_FieldInfo_[] = {
	{"WARN_ON_DUPLICATE_ATTDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, WARN_ON_DUPLICATE_ATTDEF)},
	{"WARN_ON_DUPLICATE_ENTITYDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, WARN_ON_DUPLICATE_ENTITYDEF)},
	{"WARN_ON_UNDECLARED_ELEMDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, WARN_ON_UNDECLARED_ELEMDEF)},
	{"ALLOW_JAVA_ENCODINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, ALLOW_JAVA_ENCODINGS)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, CONTINUE_AFTER_FATAL_ERROR)},
	{"LOAD_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, LOAD_EXTERNAL_DTD)},
	{"NOTIFY_BUILTIN_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, NOTIFY_BUILTIN_REFS)},
	{"NOTIFY_CHAR_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, NOTIFY_CHAR_REFS)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, ERROR_REPORTER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, ENTITY_MANAGER)},
	{"DOCUMENT_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, DOCUMENT_SCANNER)},
	{"DTD_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, DTD_SCANNER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, XMLGRAMMAR_POOL)},
	{"DTD_PROCESSOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, DTD_PROCESSOR)},
	{"DTD_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, DTD_VALIDATOR)},
	{"NAMESPACE_BINDER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, NAMESPACE_BINDER)},
	{"DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, DATATYPE_VALIDATOR_FACTORY)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, VALIDATION_MANAGER)},
	{"JAXP_SCHEMA_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, JAXP_SCHEMA_LANGUAGE)},
	{"JAXP_SCHEMA_SOURCE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, JAXP_SCHEMA_SOURCE)},
	{"LOCALE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, LOCALE)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDConfiguration, XML_SECURITY_PROPERTY_MANAGER)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DTDConfiguration, SECURITY_MANAGER)},
	{"PRINT_EXCEPTION_STACK_TRACE", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DTDConfiguration, PRINT_EXCEPTION_STACK_TRACE)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(DTDConfiguration, fGrammarPool)},
	{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(DTDConfiguration, fDatatypeValidatorFactory)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(DTDConfiguration, fErrorReporter)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $field(DTDConfiguration, fEntityManager)},
	{"fScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner;", nullptr, $PROTECTED, $field(DTDConfiguration, fScanner)},
	{"fInputSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PROTECTED, $field(DTDConfiguration, fInputSource)},
	{"fDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(DTDConfiguration, fDTDScanner)},
	{"fDTDProcessor", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor;", nullptr, $PROTECTED, $field(DTDConfiguration, fDTDProcessor)},
	{"fDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PROTECTED, $field(DTDConfiguration, fDTDValidator)},
	{"fNamespaceBinder", "Lcom/sun/org/apache/xerces/internal/impl/XMLNamespaceBinder;", nullptr, $PROTECTED, $field(DTDConfiguration, fNamespaceBinder)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(DTDConfiguration, fValidationManager)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(DTDConfiguration, fLocator)},
	{"fParseInProgress", "Z", nullptr, $PROTECTED, $field(DTDConfiguration, fParseInProgress)},
	{}
};

$MethodInfo _DTDConfiguration_MethodInfo_[] = {
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
	{"*getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC},
	{"*getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTDConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(DTDConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(DTDConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(DTDConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"checkFeature", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, checkFeature, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"cleanup", "()V", nullptr, $PUBLIC, $virtualMethod(DTDConfiguration, cleanup, void)},
	{"configureDTDPipeline", "()V", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, configureDTDPipeline, void)},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, configurePipeline, void)},
	{"createDTDProcessor", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, createDTDProcessor, $XMLDTDProcessor*)},
	{"createDTDScanner", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, createDTDScanner, $XMLDTDScanner*)},
	{"createDTDValidator", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, createDTDValidator, $XMLDTDValidator*)},
	{"createDatatypeValidatorFactory", "()Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, createDatatypeValidatorFactory, $DTDDVFactory*)},
	{"createDocumentScanner", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, createDocumentScanner, $XMLDocumentScanner*)},
	{"createEntityManager", "()Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, createEntityManager, $XMLEntityManager*)},
	{"createErrorReporter", "()Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, createErrorReporter, $XMLErrorReporter*)},
	{"createNamespaceBinder", "()Lcom/sun/org/apache/xerces/internal/impl/XMLNamespaceBinder;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, createNamespaceBinder, $XMLNamespaceBinder*)},
	{"createValidationManager", "()Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, createValidationManager, $ValidationManager*)},
	{"getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC, $virtualMethod(DTDConfiguration, getPropertyState, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"parse", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(DTDConfiguration, parse, bool, bool), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(DTDConfiguration, parse, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(DTDConfiguration, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC},
	{"*setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC},
	{"*setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC},
	{"*setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC},
	{"*setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC},
	{"*setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(DTDConfiguration, setInputSource, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException,java.io.IOException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(DTDConfiguration, setLocale, void, $Locale*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DTDConfiguration, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DTDConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.DTDConfiguration",
	"com.sun.org.apache.xerces.internal.parsers.BasicParserConfiguration",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration",
	_DTDConfiguration_FieldInfo_,
	_DTDConfiguration_MethodInfo_
};

$Object* allocate$DTDConfiguration($Class* clazz) {
	return $of($alloc(DTDConfiguration));
}

void DTDConfiguration::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	this->$BasicParserConfiguration::setDocumentHandler(documentHandler);
}

$XMLDocumentHandler* DTDConfiguration::getDocumentHandler() {
	 return this->$BasicParserConfiguration::getDocumentHandler();
}

void DTDConfiguration::setDTDHandler($XMLDTDHandler* dtdHandler) {
	this->$BasicParserConfiguration::setDTDHandler(dtdHandler);
}

$XMLDTDHandler* DTDConfiguration::getDTDHandler() {
	 return this->$BasicParserConfiguration::getDTDHandler();
}

void DTDConfiguration::setDTDContentModelHandler($XMLDTDContentModelHandler* handler) {
	this->$BasicParserConfiguration::setDTDContentModelHandler(handler);
}

$XMLDTDContentModelHandler* DTDConfiguration::getDTDContentModelHandler() {
	 return this->$BasicParserConfiguration::getDTDContentModelHandler();
}

void DTDConfiguration::setEntityResolver($XMLEntityResolver* resolver) {
	this->$BasicParserConfiguration::setEntityResolver(resolver);
}

$XMLEntityResolver* DTDConfiguration::getEntityResolver() {
	 return this->$BasicParserConfiguration::getEntityResolver();
}

void DTDConfiguration::setErrorHandler($XMLErrorHandler* errorHandler) {
	this->$BasicParserConfiguration::setErrorHandler(errorHandler);
}

$XMLErrorHandler* DTDConfiguration::getErrorHandler() {
	 return this->$BasicParserConfiguration::getErrorHandler();
}

void DTDConfiguration::setFeature($String* featureId, bool state) {
	this->$BasicParserConfiguration::setFeature(featureId, state);
}

$Locale* DTDConfiguration::getLocale() {
	 return this->$BasicParserConfiguration::getLocale();
}

void DTDConfiguration::addRecognizedFeatures($StringArray* featureIds) {
	this->$BasicParserConfiguration::addRecognizedFeatures(featureIds);
}

void DTDConfiguration::addRecognizedProperties($StringArray* propertyIds) {
	this->$BasicParserConfiguration::addRecognizedProperties(propertyIds);
}

bool DTDConfiguration::getFeature($String* featureId) {
	 return this->$BasicParserConfiguration::getFeature(featureId);
}

bool DTDConfiguration::getFeature($String* featureId, bool defaultValue) {
	 return this->$BasicParserConfiguration::getFeature(featureId, defaultValue);
}

$FeatureState* DTDConfiguration::getFeatureState($String* featureId) {
	 return this->$BasicParserConfiguration::getFeatureState(featureId);
}

$Object* DTDConfiguration::getProperty($String* propertyId) {
	 return this->$BasicParserConfiguration::getProperty(propertyId);
}

$Object* DTDConfiguration::getProperty($String* propertyId, Object$* defaultValue) {
	 return this->$BasicParserConfiguration::getProperty(propertyId, defaultValue);
}

int32_t DTDConfiguration::hashCode() {
	 return this->$BasicParserConfiguration::hashCode();
}

bool DTDConfiguration::equals(Object$* arg0) {
	 return this->$BasicParserConfiguration::equals(arg0);
}

$Object* DTDConfiguration::clone() {
	 return this->$BasicParserConfiguration::clone();
}

$String* DTDConfiguration::toString() {
	 return this->$BasicParserConfiguration::toString();
}

void DTDConfiguration::finalize() {
	this->$BasicParserConfiguration::finalize();
}

$String* DTDConfiguration::WARN_ON_DUPLICATE_ATTDEF = nullptr;
$String* DTDConfiguration::WARN_ON_DUPLICATE_ENTITYDEF = nullptr;
$String* DTDConfiguration::WARN_ON_UNDECLARED_ELEMDEF = nullptr;
$String* DTDConfiguration::ALLOW_JAVA_ENCODINGS = nullptr;
$String* DTDConfiguration::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* DTDConfiguration::LOAD_EXTERNAL_DTD = nullptr;
$String* DTDConfiguration::NOTIFY_BUILTIN_REFS = nullptr;
$String* DTDConfiguration::NOTIFY_CHAR_REFS = nullptr;
$String* DTDConfiguration::ERROR_REPORTER = nullptr;
$String* DTDConfiguration::ENTITY_MANAGER = nullptr;
$String* DTDConfiguration::DOCUMENT_SCANNER = nullptr;
$String* DTDConfiguration::DTD_SCANNER = nullptr;
$String* DTDConfiguration::XMLGRAMMAR_POOL = nullptr;
$String* DTDConfiguration::DTD_PROCESSOR = nullptr;
$String* DTDConfiguration::DTD_VALIDATOR = nullptr;
$String* DTDConfiguration::NAMESPACE_BINDER = nullptr;
$String* DTDConfiguration::DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* DTDConfiguration::VALIDATION_MANAGER = nullptr;
$String* DTDConfiguration::JAXP_SCHEMA_LANGUAGE = nullptr;
$String* DTDConfiguration::JAXP_SCHEMA_SOURCE = nullptr;
$String* DTDConfiguration::LOCALE = nullptr;
$String* DTDConfiguration::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* DTDConfiguration::SECURITY_MANAGER = nullptr;

void DTDConfiguration::init$() {
	DTDConfiguration::init$(nullptr, nullptr, nullptr);
}

void DTDConfiguration::init$($SymbolTable* symbolTable) {
	DTDConfiguration::init$(symbolTable, nullptr, nullptr);
}

void DTDConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	DTDConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void DTDConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$BasicParserConfiguration::init$(symbolTable, parentSettings);
	this->fParseInProgress = false;
	$init($XMLConstants);
	$init($JdkConstants);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		DTDConfiguration::CONTINUE_AFTER_FATAL_ERROR,
		DTDConfiguration::LOAD_EXTERNAL_DTD,
		$XMLConstants::USE_CATALOG,
		$JdkConstants::OVERRIDE_PARSER
	}));
	addRecognizedFeatures(recognizedFeatures);
	setFeature(DTDConfiguration::CONTINUE_AFTER_FATAL_ERROR, false);
	setFeature(DTDConfiguration::LOAD_EXTERNAL_DTD, true);
	$init($JdkXmlUtils);
	$nc(this->fFeatures)->put($XMLConstants::USE_CATALOG, $($Boolean::valueOf($JdkXmlUtils::USE_CATALOG_DEFAULT)));
	$nc(this->fFeatures)->put($JdkConstants::OVERRIDE_PARSER, $($Boolean::valueOf($JdkConstants::OVERRIDE_PARSER_DEFAULT)));
	$var($StringArray, recognizedProperties, $new($StringArray, {
		DTDConfiguration::ERROR_REPORTER,
		DTDConfiguration::ENTITY_MANAGER,
		DTDConfiguration::DOCUMENT_SCANNER,
		DTDConfiguration::DTD_SCANNER,
		DTDConfiguration::DTD_PROCESSOR,
		DTDConfiguration::DTD_VALIDATOR,
		DTDConfiguration::NAMESPACE_BINDER,
		DTDConfiguration::XMLGRAMMAR_POOL,
		DTDConfiguration::DATATYPE_VALIDATOR_FACTORY,
		DTDConfiguration::VALIDATION_MANAGER,
		DTDConfiguration::JAXP_SCHEMA_SOURCE,
		DTDConfiguration::JAXP_SCHEMA_LANGUAGE,
		DTDConfiguration::LOCALE,
		DTDConfiguration::SECURITY_MANAGER,
		DTDConfiguration::XML_SECURITY_PROPERTY_MANAGER,
		$JdkXmlUtils::CATALOG_DEFER,
		$JdkXmlUtils::CATALOG_FILES,
		$JdkXmlUtils::CATALOG_PREFER,
		$JdkXmlUtils::CATALOG_RESOLVE,
		$JdkConstants::CDATA_CHUNK_SIZE
	}));
	addRecognizedProperties(recognizedProperties);
	$set(this, fGrammarPool, grammarPool);
	if (this->fGrammarPool != nullptr) {
		setProperty(DTDConfiguration::XMLGRAMMAR_POOL, this->fGrammarPool);
	}
	$set(this, fEntityManager, createEntityManager());
	setProperty(DTDConfiguration::ENTITY_MANAGER, this->fEntityManager);
	addComponent(this->fEntityManager);
	$set(this, fErrorReporter, createErrorReporter());
	$nc(this->fErrorReporter)->setDocumentLocator($($nc(this->fEntityManager)->getEntityScanner()));
	setProperty(DTDConfiguration::ERROR_REPORTER, this->fErrorReporter);
	addComponent(this->fErrorReporter);
	$set(this, fScanner, createDocumentScanner());
	setProperty(DTDConfiguration::DOCUMENT_SCANNER, this->fScanner);
	if ($instanceOf($XMLComponent, this->fScanner)) {
		addComponent($cast($XMLComponent, this->fScanner));
	}
	$set(this, fDTDScanner, createDTDScanner());
	if (this->fDTDScanner != nullptr) {
		setProperty(DTDConfiguration::DTD_SCANNER, this->fDTDScanner);
		if ($instanceOf($XMLComponent, this->fDTDScanner)) {
			addComponent($cast($XMLComponent, this->fDTDScanner));
		}
	}
	$set(this, fDTDProcessor, createDTDProcessor());
	if (this->fDTDProcessor != nullptr) {
		setProperty(DTDConfiguration::DTD_PROCESSOR, this->fDTDProcessor);
		if ($instanceOf($XMLComponent, this->fDTDProcessor)) {
			addComponent(static_cast<$XMLComponent*>(this->fDTDProcessor));
		}
	}
	$set(this, fDTDValidator, createDTDValidator());
	if (this->fDTDValidator != nullptr) {
		setProperty(DTDConfiguration::DTD_VALIDATOR, this->fDTDValidator);
		addComponent(this->fDTDValidator);
	}
	$set(this, fNamespaceBinder, createNamespaceBinder());
	if (this->fNamespaceBinder != nullptr) {
		setProperty(DTDConfiguration::NAMESPACE_BINDER, this->fNamespaceBinder);
		addComponent(this->fNamespaceBinder);
	}
	$set(this, fDatatypeValidatorFactory, createDatatypeValidatorFactory());
	if (this->fDatatypeValidatorFactory != nullptr) {
		setProperty(DTDConfiguration::DATATYPE_VALIDATOR_FACTORY, this->fDatatypeValidatorFactory);
	}
	$set(this, fValidationManager, createValidationManager());
	if (this->fValidationManager != nullptr) {
		setProperty(DTDConfiguration::VALIDATION_MANAGER, this->fValidationManager);
	}
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
	setProperty(DTDConfiguration::XML_SECURITY_PROPERTY_MANAGER, $$new($XMLSecurityPropertyManager));
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

$PropertyState* DTDConfiguration::getPropertyState($String* propertyId) {
	if ($nc(DTDConfiguration::LOCALE)->equals(propertyId)) {
		return $PropertyState::is($(getLocale()));
	}
	return $BasicParserConfiguration::getPropertyState(propertyId);
}

void DTDConfiguration::setProperty($String* propertyId, Object$* value) {
	if ($nc(DTDConfiguration::LOCALE)->equals(propertyId)) {
		setLocale($cast($Locale, value));
	}
	$BasicParserConfiguration::setProperty(propertyId, value);
}

void DTDConfiguration::setLocale($Locale* locale) {
	$BasicParserConfiguration::setLocale(locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

void DTDConfiguration::setInputSource($XMLInputSource* inputSource) {
	$set(this, fInputSource, inputSource);
}

bool DTDConfiguration::parse(bool complete) {
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

void DTDConfiguration::cleanup() {
	$nc(this->fEntityManager)->closeReaders();
}

void DTDConfiguration::parse($XMLInputSource* source) {
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

void DTDConfiguration::reset() {
	if (this->fValidationManager != nullptr) {
		$nc(this->fValidationManager)->reset();
	}
	configurePipeline();
	$BasicParserConfiguration::reset();
}

void DTDConfiguration::configurePipeline() {
	if (this->fDTDValidator != nullptr) {
		$nc(this->fScanner)->setDocumentHandler(static_cast<$XMLDocumentHandler*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fDTDValidator))));
		$init($BasicParserConfiguration);
		$init($Boolean);
		if ($equals($nc(this->fFeatures)->get($BasicParserConfiguration::NAMESPACES), $Boolean::TRUE)) {
			$nc(this->fDTDValidator)->setDocumentHandler(this->fNamespaceBinder);
			$nc(this->fDTDValidator)->setDocumentSource(this->fScanner);
			$nc(this->fNamespaceBinder)->setDocumentHandler(this->fDocumentHandler);
			$nc(this->fNamespaceBinder)->setDocumentSource(static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fDTDValidator))));
			$set(this, fLastComponent, this->fNamespaceBinder);
		} else {
			$nc(this->fDTDValidator)->setDocumentHandler(this->fDocumentHandler);
			$nc(this->fDTDValidator)->setDocumentSource(this->fScanner);
			$set(this, fLastComponent, static_cast<$XMLDocumentSource*>(static_cast<$XMLDocumentFilter*>(static_cast<$XMLDTDValidatorFilter*>(this->fDTDValidator))));
		}
	} else {
		$init($BasicParserConfiguration);
		$init($Boolean);
		if ($equals($nc(this->fFeatures)->get($BasicParserConfiguration::NAMESPACES), $Boolean::TRUE)) {
			$nc(this->fScanner)->setDocumentHandler(this->fNamespaceBinder);
			$nc(this->fNamespaceBinder)->setDocumentHandler(this->fDocumentHandler);
			$nc(this->fNamespaceBinder)->setDocumentSource(this->fScanner);
			$set(this, fLastComponent, this->fNamespaceBinder);
		} else {
			$nc(this->fScanner)->setDocumentHandler(this->fDocumentHandler);
			$set(this, fLastComponent, this->fScanner);
		}
	}
	configureDTDPipeline();
}

void DTDConfiguration::configureDTDPipeline() {
	if (this->fDTDScanner != nullptr) {
		$nc(this->fProperties)->put(DTDConfiguration::DTD_SCANNER, this->fDTDScanner);
		if (this->fDTDProcessor != nullptr) {
			$nc(this->fProperties)->put(DTDConfiguration::DTD_PROCESSOR, this->fDTDProcessor);
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
		} else {
			$nc(this->fDTDScanner)->setDTDHandler(this->fDTDHandler);
			if (this->fDTDHandler != nullptr) {
				$nc(this->fDTDHandler)->setDTDSource(this->fDTDScanner);
			}
			$nc(this->fDTDScanner)->setDTDContentModelHandler(this->fDTDContentModelHandler);
			if (this->fDTDContentModelHandler != nullptr) {
				$nc(this->fDTDContentModelHandler)->setDTDContentModelSource(this->fDTDScanner);
			}
		}
	}
}

$FeatureState* DTDConfiguration::checkFeature($String* featureId) {
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

$PropertyState* DTDConfiguration::checkProperty($String* propertyId) {
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
	return $BasicParserConfiguration::checkProperty(propertyId);
}

$XMLEntityManager* DTDConfiguration::createEntityManager() {
	return $new($XMLEntityManager);
}

$XMLErrorReporter* DTDConfiguration::createErrorReporter() {
	return $new($XMLErrorReporter);
}

$XMLDocumentScanner* DTDConfiguration::createDocumentScanner() {
	return $new($XMLDocumentScannerImpl);
}

$XMLDTDScanner* DTDConfiguration::createDTDScanner() {
	return $new($XMLDTDScannerImpl);
}

$XMLDTDProcessor* DTDConfiguration::createDTDProcessor() {
	return $new($XMLDTDProcessor);
}

$XMLDTDValidator* DTDConfiguration::createDTDValidator() {
	return $new($XMLDTDValidator);
}

$XMLNamespaceBinder* DTDConfiguration::createNamespaceBinder() {
	return $new($XMLNamespaceBinder);
}

$DTDDVFactory* DTDConfiguration::createDatatypeValidatorFactory() {
	return $DTDDVFactory::getInstance();
}

$ValidationManager* DTDConfiguration::createValidationManager() {
	return $new($ValidationManager);
}

DTDConfiguration::DTDConfiguration() {
}

void clinit$DTDConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(DTDConfiguration::WARN_ON_DUPLICATE_ATTDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE}));
	$assignStatic(DTDConfiguration::WARN_ON_DUPLICATE_ENTITYDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ENTITYDEF_FEATURE}));
	$assignStatic(DTDConfiguration::WARN_ON_UNDECLARED_ELEMDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_UNDECLARED_ELEMDEF_FEATURE}));
	$assignStatic(DTDConfiguration::ALLOW_JAVA_ENCODINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}));
	$assignStatic(DTDConfiguration::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(DTDConfiguration::LOAD_EXTERNAL_DTD, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::LOAD_EXTERNAL_DTD_FEATURE}));
	$assignStatic(DTDConfiguration::NOTIFY_BUILTIN_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_BUILTIN_REFS_FEATURE}));
	$assignStatic(DTDConfiguration::NOTIFY_CHAR_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_CHAR_REFS_FEATURE}));
	$assignStatic(DTDConfiguration::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(DTDConfiguration::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(DTDConfiguration::DOCUMENT_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DOCUMENT_SCANNER_PROPERTY}));
	$assignStatic(DTDConfiguration::DTD_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_SCANNER_PROPERTY}));
	$assignStatic(DTDConfiguration::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(DTDConfiguration::DTD_PROCESSOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_PROCESSOR_PROPERTY}));
	$assignStatic(DTDConfiguration::DTD_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
	$assignStatic(DTDConfiguration::NAMESPACE_BINDER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_BINDER_PROPERTY}));
	$assignStatic(DTDConfiguration::DATATYPE_VALIDATOR_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY}));
	$assignStatic(DTDConfiguration::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(DTDConfiguration::JAXP_SCHEMA_LANGUAGE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}));
	$assignStatic(DTDConfiguration::JAXP_SCHEMA_SOURCE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}));
	$assignStatic(DTDConfiguration::LOCALE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::LOCALE_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(DTDConfiguration::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(DTDConfiguration::SECURITY_MANAGER, $Constants::SECURITY_MANAGER);
}

$Class* DTDConfiguration::load$($String* name, bool initialize) {
	$loadClass(DTDConfiguration, name, initialize, &_DTDConfiguration_ClassInfo_, clinit$DTDConfiguration, allocate$DTDConfiguration);
	return class$;
}

$Class* DTDConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com