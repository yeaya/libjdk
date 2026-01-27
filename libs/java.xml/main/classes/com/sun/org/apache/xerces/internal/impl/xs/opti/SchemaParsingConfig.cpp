#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaParsingConfig.h>

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
#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/parsers/BasicParserConfiguration.h>
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
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/IOException.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <javax/xml/XMLConstants.h>
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
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#undef GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE
#undef JAXP_PROPERTY_PREFIX
#undef LOAD_DTD_GRAMMAR_FEATURE
#undef LOAD_EXTERNAL_DTD
#undef LOAD_EXTERNAL_DTD_FEATURE
#undef LOCALE
#undef LOCALE_PROPERTY
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
#undef SCHEMA_DOMAIN
#undef SCHEMA_ELEMENT_DEFAULT
#undef SCHEMA_NORMALIZED_VALUE
#undef SCHEMA_SOURCE
#undef SCHEMA_VALIDATOR
#undef SCHEMA_VALIDATOR_PROPERTY
#undef TRUE
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT
#undef VALIDATE_CONTENT_MODELS_FEATURE
#undef VALIDATE_DATATYPES_FEATURE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef WARN_ON_DUPLICATE_ATTDEF
#undef WARN_ON_DUPLICATE_ATTDEF_FEATURE
#undef WARN_ON_UNDECLARED_ELEMDEF
#undef WARN_ON_UNDECLARED_ELEMDEF_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XML11_DATATYPE_VALIDATOR_FACTORY
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XMLNS_DOMAIN
#undef XML_DOMAIN
#undef XML_VERSION_1_0
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
using $DTDDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $BasicParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration;
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
using $XMLDTDContentModelSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource;
using $XMLDTDScanner = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
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
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _SchemaParsingConfig_FieldInfo_[] = {
	{"XML11_DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, XML11_DATATYPE_VALIDATOR_FACTORY)},
	{"WARN_ON_DUPLICATE_ATTDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, WARN_ON_DUPLICATE_ATTDEF)},
	{"WARN_ON_UNDECLARED_ELEMDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, WARN_ON_UNDECLARED_ELEMDEF)},
	{"ALLOW_JAVA_ENCODINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, ALLOW_JAVA_ENCODINGS)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, CONTINUE_AFTER_FATAL_ERROR)},
	{"LOAD_EXTERNAL_DTD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, LOAD_EXTERNAL_DTD)},
	{"NOTIFY_BUILTIN_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, NOTIFY_BUILTIN_REFS)},
	{"NOTIFY_CHAR_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, NOTIFY_CHAR_REFS)},
	{"NORMALIZE_DATA", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, NORMALIZE_DATA)},
	{"SCHEMA_ELEMENT_DEFAULT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, SCHEMA_ELEMENT_DEFAULT)},
	{"GENERATE_SYNTHETIC_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, GENERATE_SYNTHETIC_ANNOTATIONS)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, ERROR_REPORTER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, ENTITY_MANAGER)},
	{"DOCUMENT_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, DOCUMENT_SCANNER)},
	{"DTD_SCANNER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, DTD_SCANNER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, XMLGRAMMAR_POOL)},
	{"DTD_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, DTD_VALIDATOR)},
	{"NAMESPACE_BINDER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, NAMESPACE_BINDER)},
	{"DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, DATATYPE_VALIDATOR_FACTORY)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, VALIDATION_MANAGER)},
	{"SCHEMA_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, SCHEMA_VALIDATOR)},
	{"LOCALE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SchemaParsingConfig, LOCALE)},
	{"PRINT_EXCEPTION_STACK_TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaParsingConfig, PRINT_EXCEPTION_STACK_TRACE)},
	{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED | $FINAL, $field(SchemaParsingConfig, fDatatypeValidatorFactory)},
	{"fNamespaceScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLNSDocumentScannerImpl;", nullptr, $PROTECTED | $FINAL, $field(SchemaParsingConfig, fNamespaceScanner)},
	{"fDTDScanner", "Lcom/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl;", nullptr, $PROTECTED | $FINAL, $field(SchemaParsingConfig, fDTDScanner)},
	{"fXML11DatatypeFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(SchemaParsingConfig, fXML11DatatypeFactory)},
	{"fXML11NSDocScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11NSDocumentScannerImpl;", nullptr, $PROTECTED, $field(SchemaParsingConfig, fXML11NSDocScanner)},
	{"fXML11DTDScanner", "Lcom/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl;", nullptr, $PROTECTED, $field(SchemaParsingConfig, fXML11DTDScanner)},
	{"fCurrentDVFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(SchemaParsingConfig, fCurrentDVFactory)},
	{"fCurrentScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner;", nullptr, $PROTECTED, $field(SchemaParsingConfig, fCurrentScanner)},
	{"fCurrentDTDScanner", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner;", nullptr, $PROTECTED, $field(SchemaParsingConfig, fCurrentDTDScanner)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(SchemaParsingConfig, fGrammarPool)},
	{"fVersionDetector", "Lcom/sun/org/apache/xerces/internal/impl/XMLVersionDetector;", nullptr, $PROTECTED | $FINAL, $field(SchemaParsingConfig, fVersionDetector)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED | $FINAL, $field(SchemaParsingConfig, fErrorReporter)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PROTECTED | $FINAL, $field(SchemaParsingConfig, fEntityManager)},
	{"fInputSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PROTECTED, $field(SchemaParsingConfig, fInputSource)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED | $FINAL, $field(SchemaParsingConfig, fValidationManager)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(SchemaParsingConfig, fLocator)},
	{"fParseInProgress", "Z", nullptr, $PROTECTED, $field(SchemaParsingConfig, fParseInProgress)},
	{"fConfigUpdated", "Z", nullptr, $PROTECTED, $field(SchemaParsingConfig, fConfigUpdated)},
	{"f11Initialized", "Z", nullptr, $PRIVATE, $field(SchemaParsingConfig, f11Initialized)},
	{}
};

$MethodInfo _SchemaParsingConfig_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaParsingConfig, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(SchemaParsingConfig, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(SchemaParsingConfig, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(SchemaParsingConfig, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"addRecognizedParamsAndSetDefaults", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;)V", nullptr, $PRIVATE, $method(SchemaParsingConfig, addRecognizedParamsAndSetDefaults, void, $XMLComponent*)},
	{"checkFeature", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PROTECTED, $virtualMethod(SchemaParsingConfig, checkFeature, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(SchemaParsingConfig, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"cleanup", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, cleanup, void)},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(SchemaParsingConfig, configurePipeline, void)},
	{"configureXML11Pipeline", "()V", nullptr, $PROTECTED, $virtualMethod(SchemaParsingConfig, configureXML11Pipeline, void)},
	{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, getFeatureState, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, getPropertyState, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"initXML11Components", "()V", nullptr, $PRIVATE, $method(SchemaParsingConfig, initXML11Components, void)},
	{"parse", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, parse, bool, bool), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, parse, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resetNodePool", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, resetNodePool, void)},
	{"resetXML10", "()V", nullptr, $PROTECTED | $FINAL, $method(SchemaParsingConfig, resetXML10, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resetXML11", "()V", nullptr, $PROTECTED | $FINAL, $method(SchemaParsingConfig, resetXML11, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC},
	{"*setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC},
	{"*setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC},
	{"*setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC},
	{"*setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, setInputSource, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException,java.io.IOException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, setLocale, void, $Locale*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SchemaParsingConfig, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SchemaParsingConfig_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaParsingConfig",
	"com.sun.org.apache.xerces.internal.parsers.BasicParserConfiguration",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration",
	_SchemaParsingConfig_FieldInfo_,
	_SchemaParsingConfig_MethodInfo_
};

$Object* allocate$SchemaParsingConfig($Class* clazz) {
	return $of($alloc(SchemaParsingConfig));
}

void SchemaParsingConfig::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	this->$BasicParserConfiguration::setDocumentHandler(documentHandler);
}

$XMLDocumentHandler* SchemaParsingConfig::getDocumentHandler() {
	 return this->$BasicParserConfiguration::getDocumentHandler();
}

void SchemaParsingConfig::setDTDHandler($XMLDTDHandler* dtdHandler) {
	this->$BasicParserConfiguration::setDTDHandler(dtdHandler);
}

$XMLDTDHandler* SchemaParsingConfig::getDTDHandler() {
	 return this->$BasicParserConfiguration::getDTDHandler();
}

void SchemaParsingConfig::setDTDContentModelHandler($XMLDTDContentModelHandler* handler) {
	this->$BasicParserConfiguration::setDTDContentModelHandler(handler);
}

$XMLDTDContentModelHandler* SchemaParsingConfig::getDTDContentModelHandler() {
	 return this->$BasicParserConfiguration::getDTDContentModelHandler();
}

void SchemaParsingConfig::setEntityResolver($XMLEntityResolver* resolver) {
	this->$BasicParserConfiguration::setEntityResolver(resolver);
}

$XMLEntityResolver* SchemaParsingConfig::getEntityResolver() {
	 return this->$BasicParserConfiguration::getEntityResolver();
}

void SchemaParsingConfig::setErrorHandler($XMLErrorHandler* errorHandler) {
	this->$BasicParserConfiguration::setErrorHandler(errorHandler);
}

$XMLErrorHandler* SchemaParsingConfig::getErrorHandler() {
	 return this->$BasicParserConfiguration::getErrorHandler();
}

$Locale* SchemaParsingConfig::getLocale() {
	 return this->$BasicParserConfiguration::getLocale();
}

void SchemaParsingConfig::addRecognizedFeatures($StringArray* featureIds) {
	this->$BasicParserConfiguration::addRecognizedFeatures(featureIds);
}

void SchemaParsingConfig::addRecognizedProperties($StringArray* propertyIds) {
	this->$BasicParserConfiguration::addRecognizedProperties(propertyIds);
}

bool SchemaParsingConfig::getFeature($String* featureId) {
	 return this->$BasicParserConfiguration::getFeature(featureId);
}

bool SchemaParsingConfig::getFeature($String* featureId, bool defaultValue) {
	 return this->$BasicParserConfiguration::getFeature(featureId, defaultValue);
}

$Object* SchemaParsingConfig::getProperty($String* propertyId) {
	 return this->$BasicParserConfiguration::getProperty(propertyId);
}

$Object* SchemaParsingConfig::getProperty($String* propertyId, Object$* defaultValue) {
	 return this->$BasicParserConfiguration::getProperty(propertyId, defaultValue);
}

int32_t SchemaParsingConfig::hashCode() {
	 return this->$BasicParserConfiguration::hashCode();
}

bool SchemaParsingConfig::equals(Object$* arg0) {
	 return this->$BasicParserConfiguration::equals(arg0);
}

$Object* SchemaParsingConfig::clone() {
	 return this->$BasicParserConfiguration::clone();
}

$String* SchemaParsingConfig::toString() {
	 return this->$BasicParserConfiguration::toString();
}

void SchemaParsingConfig::finalize() {
	this->$BasicParserConfiguration::finalize();
}

$String* SchemaParsingConfig::XML11_DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* SchemaParsingConfig::WARN_ON_DUPLICATE_ATTDEF = nullptr;
$String* SchemaParsingConfig::WARN_ON_UNDECLARED_ELEMDEF = nullptr;
$String* SchemaParsingConfig::ALLOW_JAVA_ENCODINGS = nullptr;
$String* SchemaParsingConfig::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* SchemaParsingConfig::LOAD_EXTERNAL_DTD = nullptr;
$String* SchemaParsingConfig::NOTIFY_BUILTIN_REFS = nullptr;
$String* SchemaParsingConfig::NOTIFY_CHAR_REFS = nullptr;
$String* SchemaParsingConfig::NORMALIZE_DATA = nullptr;
$String* SchemaParsingConfig::SCHEMA_ELEMENT_DEFAULT = nullptr;
$String* SchemaParsingConfig::GENERATE_SYNTHETIC_ANNOTATIONS = nullptr;
$String* SchemaParsingConfig::ERROR_REPORTER = nullptr;
$String* SchemaParsingConfig::ENTITY_MANAGER = nullptr;
$String* SchemaParsingConfig::DOCUMENT_SCANNER = nullptr;
$String* SchemaParsingConfig::DTD_SCANNER = nullptr;
$String* SchemaParsingConfig::XMLGRAMMAR_POOL = nullptr;
$String* SchemaParsingConfig::DTD_VALIDATOR = nullptr;
$String* SchemaParsingConfig::NAMESPACE_BINDER = nullptr;
$String* SchemaParsingConfig::DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* SchemaParsingConfig::VALIDATION_MANAGER = nullptr;
$String* SchemaParsingConfig::SCHEMA_VALIDATOR = nullptr;
$String* SchemaParsingConfig::LOCALE = nullptr;

void SchemaParsingConfig::init$() {
	SchemaParsingConfig::init$(nullptr, nullptr, nullptr);
}

void SchemaParsingConfig::init$($SymbolTable* symbolTable) {
	SchemaParsingConfig::init$(symbolTable, nullptr, nullptr);
}

void SchemaParsingConfig::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	SchemaParsingConfig::init$(symbolTable, grammarPool, nullptr);
}

void SchemaParsingConfig::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$BasicParserConfiguration::init$(symbolTable, parentSettings);
	$set(this, fXML11DatatypeFactory, nullptr);
	$set(this, fXML11NSDocScanner, nullptr);
	$set(this, fXML11DTDScanner, nullptr);
	this->fParseInProgress = false;
	this->fConfigUpdated = false;
	this->f11Initialized = false;
	$init($ParserConfigurationSettings);
	$init($XMLConstants);
	$init($JdkConstants);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		$ParserConfigurationSettings::PARSER_SETTINGS,
		SchemaParsingConfig::WARN_ON_DUPLICATE_ATTDEF,
		SchemaParsingConfig::WARN_ON_UNDECLARED_ELEMDEF,
		SchemaParsingConfig::ALLOW_JAVA_ENCODINGS,
		SchemaParsingConfig::CONTINUE_AFTER_FATAL_ERROR,
		SchemaParsingConfig::LOAD_EXTERNAL_DTD,
		SchemaParsingConfig::NOTIFY_BUILTIN_REFS,
		SchemaParsingConfig::NOTIFY_CHAR_REFS,
		SchemaParsingConfig::GENERATE_SYNTHETIC_ANNOTATIONS,
		$XMLConstants::USE_CATALOG,
		$JdkConstants::OVERRIDE_PARSER
	}));
	addRecognizedFeatures(recognizedFeatures);
	$init($Boolean);
	$nc(this->fFeatures)->put($ParserConfigurationSettings::PARSER_SETTINGS, $Boolean::TRUE);
	$nc(this->fFeatures)->put(SchemaParsingConfig::WARN_ON_DUPLICATE_ATTDEF, $Boolean::FALSE);
	$nc(this->fFeatures)->put(SchemaParsingConfig::WARN_ON_UNDECLARED_ELEMDEF, $Boolean::FALSE);
	$nc(this->fFeatures)->put(SchemaParsingConfig::ALLOW_JAVA_ENCODINGS, $Boolean::FALSE);
	$nc(this->fFeatures)->put(SchemaParsingConfig::CONTINUE_AFTER_FATAL_ERROR, $Boolean::FALSE);
	$nc(this->fFeatures)->put(SchemaParsingConfig::LOAD_EXTERNAL_DTD, $Boolean::TRUE);
	$nc(this->fFeatures)->put(SchemaParsingConfig::NOTIFY_BUILTIN_REFS, $Boolean::FALSE);
	$nc(this->fFeatures)->put(SchemaParsingConfig::NOTIFY_CHAR_REFS, $Boolean::FALSE);
	$nc(this->fFeatures)->put(SchemaParsingConfig::GENERATE_SYNTHETIC_ANNOTATIONS, $Boolean::FALSE);
	$init($JdkXmlUtils);
	$nc(this->fFeatures)->put($XMLConstants::USE_CATALOG, $($Boolean::valueOf($JdkXmlUtils::USE_CATALOG_DEFAULT)));
	$nc(this->fFeatures)->put($JdkConstants::OVERRIDE_PARSER, $($Boolean::valueOf($JdkConstants::OVERRIDE_PARSER_DEFAULT)));
	$var($StringArray, recognizedProperties, $new($StringArray, {
		SchemaParsingConfig::ERROR_REPORTER,
		SchemaParsingConfig::ENTITY_MANAGER,
		SchemaParsingConfig::DOCUMENT_SCANNER,
		SchemaParsingConfig::DTD_SCANNER,
		SchemaParsingConfig::DTD_VALIDATOR,
		SchemaParsingConfig::NAMESPACE_BINDER,
		SchemaParsingConfig::XMLGRAMMAR_POOL,
		SchemaParsingConfig::DATATYPE_VALIDATOR_FACTORY,
		SchemaParsingConfig::VALIDATION_MANAGER,
		SchemaParsingConfig::GENERATE_SYNTHETIC_ANNOTATIONS,
		SchemaParsingConfig::LOCALE,
		$JdkXmlUtils::CATALOG_DEFER,
		$JdkXmlUtils::CATALOG_FILES,
		$JdkXmlUtils::CATALOG_PREFER,
		$JdkXmlUtils::CATALOG_RESOLVE,
		$JdkConstants::CDATA_CHUNK_SIZE
	}));
	addRecognizedProperties(recognizedProperties);
	$set(this, fGrammarPool, grammarPool);
	if (this->fGrammarPool != nullptr) {
		setProperty(SchemaParsingConfig::XMLGRAMMAR_POOL, this->fGrammarPool);
	}
	$set(this, fEntityManager, $new($XMLEntityManager));
	$nc(this->fProperties)->put(SchemaParsingConfig::ENTITY_MANAGER, this->fEntityManager);
	addComponent(this->fEntityManager);
	$set(this, fErrorReporter, $new($XMLErrorReporter));
	$nc(this->fErrorReporter)->setDocumentLocator($($nc(this->fEntityManager)->getEntityScanner()));
	$nc(this->fProperties)->put(SchemaParsingConfig::ERROR_REPORTER, this->fErrorReporter);
	addComponent(this->fErrorReporter);
	$set(this, fNamespaceScanner, $new($XMLNSDocumentScannerImpl));
	$nc(this->fProperties)->put(SchemaParsingConfig::DOCUMENT_SCANNER, this->fNamespaceScanner);
	addRecognizedParamsAndSetDefaults(this->fNamespaceScanner);
	$set(this, fDTDScanner, $new($XMLDTDScannerImpl));
	$nc(this->fProperties)->put(SchemaParsingConfig::DTD_SCANNER, this->fDTDScanner);
	addRecognizedParamsAndSetDefaults(this->fDTDScanner);
	$set(this, fDatatypeValidatorFactory, $DTDDVFactory::getInstance());
	$nc(this->fProperties)->put(SchemaParsingConfig::DATATYPE_VALIDATOR_FACTORY, this->fDatatypeValidatorFactory);
	$set(this, fValidationManager, $new($ValidationManager));
	$nc(this->fProperties)->put(SchemaParsingConfig::VALIDATION_MANAGER, this->fValidationManager);
	$nc(this->fProperties)->put($JdkConstants::CDATA_CHUNK_SIZE, $($Integer::valueOf($JdkConstants::CDATA_CHUNK_SIZE_DEFAULT)));
	$set(this, fVersionDetector, $new($XMLVersionDetector));
	$init($XMLMessageFormatter);
	if ($nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN) == nullptr) {
		$var($XMLMessageFormatter, xmft, $new($XMLMessageFormatter));
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XML_DOMAIN, xmft);
		$nc(this->fErrorReporter)->putMessageFormatter($XMLMessageFormatter::XMLNS_DOMAIN, xmft);
	}
	$init($XSMessageFormatter);
	if ($nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN) == nullptr) {
		$var($XSMessageFormatter, xmft, $new($XSMessageFormatter));
		$nc(this->fErrorReporter)->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, xmft);
	}
	try {
		setLocale($($Locale::getDefault()));
	} catch ($XNIException& e) {
	}
}

$FeatureState* SchemaParsingConfig::getFeatureState($String* featureId) {
	$init($ParserConfigurationSettings);
	if ($nc(featureId)->equals($ParserConfigurationSettings::PARSER_SETTINGS)) {
		return $FeatureState::is(this->fConfigUpdated);
	}
	return $BasicParserConfiguration::getFeatureState(featureId);
}

void SchemaParsingConfig::setFeature($String* featureId, bool state) {
	this->fConfigUpdated = true;
	$nc(this->fNamespaceScanner)->setFeature(featureId, state);
	$nc(this->fDTDScanner)->setFeature(featureId, state);
	if (this->f11Initialized) {
		try {
			$nc(this->fXML11DTDScanner)->setFeature(featureId, state);
		} catch ($Exception& e) {
		}
		try {
			$nc(this->fXML11NSDocScanner)->setFeature(featureId, state);
		} catch ($Exception& e) {
		}
	}
	$BasicParserConfiguration::setFeature(featureId, state);
}

$PropertyState* SchemaParsingConfig::getPropertyState($String* propertyId) {
	if ($nc(SchemaParsingConfig::LOCALE)->equals(propertyId)) {
		return $PropertyState::is($(getLocale()));
	}
	return $BasicParserConfiguration::getPropertyState(propertyId);
}

void SchemaParsingConfig::setProperty($String* propertyId, Object$* value) {
	this->fConfigUpdated = true;
	if ($nc(SchemaParsingConfig::LOCALE)->equals(propertyId)) {
		setLocale($cast($Locale, value));
	}
	$nc(this->fNamespaceScanner)->setProperty(propertyId, value);
	$nc(this->fDTDScanner)->setProperty(propertyId, value);
	if (this->f11Initialized) {
		try {
			$nc(this->fXML11DTDScanner)->setProperty(propertyId, value);
		} catch ($Exception& e) {
		}
		try {
			$nc(this->fXML11NSDocScanner)->setProperty(propertyId, value);
		} catch ($Exception& e) {
		}
	}
	$BasicParserConfiguration::setProperty(propertyId, value);
}

void SchemaParsingConfig::setLocale($Locale* locale) {
	$BasicParserConfiguration::setLocale(locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

void SchemaParsingConfig::setInputSource($XMLInputSource* inputSource) {
	$set(this, fInputSource, inputSource);
}

bool SchemaParsingConfig::parse(bool complete) {
	if (this->fInputSource != nullptr) {
		try {
			$nc(this->fValidationManager)->reset();
			$nc(this->fVersionDetector)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(static_cast<$BasicParserConfiguration*>(this))));
			reset();
			int16_t version = $nc(this->fVersionDetector)->determineDocVersion(this->fInputSource);
			if (version == $Constants::XML_VERSION_1_0) {
				configurePipeline();
				resetXML10();
			} else if (version == $Constants::XML_VERSION_1_1) {
				initXML11Components();
				configureXML11Pipeline();
				resetXML11();
			} else {
				return false;
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

void SchemaParsingConfig::cleanup() {
	$nc(this->fEntityManager)->closeReaders();
}

void SchemaParsingConfig::parse($XMLInputSource* source) {
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

void SchemaParsingConfig::reset() {
	$BasicParserConfiguration::reset();
}

void SchemaParsingConfig::configurePipeline() {
	if (this->fCurrentDVFactory != this->fDatatypeValidatorFactory) {
		$set(this, fCurrentDVFactory, this->fDatatypeValidatorFactory);
		setProperty(SchemaParsingConfig::DATATYPE_VALIDATOR_FACTORY, this->fCurrentDVFactory);
	}
	if (!$equals(this->fCurrentScanner, this->fNamespaceScanner)) {
		$set(this, fCurrentScanner, this->fNamespaceScanner);
		setProperty(SchemaParsingConfig::DOCUMENT_SCANNER, this->fCurrentScanner);
	}
	$nc(this->fNamespaceScanner)->setDocumentHandler(this->fDocumentHandler);
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->setDocumentSource(this->fNamespaceScanner);
	}
	$set(this, fLastComponent, this->fNamespaceScanner);
	if (!$equals(this->fCurrentDTDScanner, this->fDTDScanner)) {
		$set(this, fCurrentDTDScanner, this->fDTDScanner);
		setProperty(SchemaParsingConfig::DTD_SCANNER, this->fCurrentDTDScanner);
	}
	$nc(this->fDTDScanner)->setDTDHandler(this->fDTDHandler);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->setDTDSource(this->fDTDScanner);
	}
	$nc(this->fDTDScanner)->setDTDContentModelHandler(this->fDTDContentModelHandler);
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->setDTDContentModelSource(this->fDTDScanner);
	}
}

void SchemaParsingConfig::configureXML11Pipeline() {
	if (this->fCurrentDVFactory != this->fXML11DatatypeFactory) {
		$set(this, fCurrentDVFactory, this->fXML11DatatypeFactory);
		setProperty(SchemaParsingConfig::DATATYPE_VALIDATOR_FACTORY, this->fCurrentDVFactory);
	}
	if (!$equals(this->fCurrentScanner, this->fXML11NSDocScanner)) {
		$set(this, fCurrentScanner, this->fXML11NSDocScanner);
		setProperty(SchemaParsingConfig::DOCUMENT_SCANNER, this->fCurrentScanner);
	}
	$nc(this->fXML11NSDocScanner)->setDocumentHandler(this->fDocumentHandler);
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->setDocumentSource(this->fXML11NSDocScanner);
	}
	$set(this, fLastComponent, this->fXML11NSDocScanner);
	if (!$equals(this->fCurrentDTDScanner, this->fXML11DTDScanner)) {
		$set(this, fCurrentDTDScanner, this->fXML11DTDScanner);
		setProperty(SchemaParsingConfig::DTD_SCANNER, this->fCurrentDTDScanner);
	}
	$nc(this->fXML11DTDScanner)->setDTDHandler(this->fDTDHandler);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->setDTDSource(this->fXML11DTDScanner);
	}
	$nc(this->fXML11DTDScanner)->setDTDContentModelHandler(this->fDTDContentModelHandler);
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->setDTDContentModelSource(this->fXML11DTDScanner);
	}
}

$FeatureState* SchemaParsingConfig::checkFeature($String* featureId) {
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

$PropertyState* SchemaParsingConfig::checkProperty($String* propertyId) {
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

void SchemaParsingConfig::addRecognizedParamsAndSetDefaults($XMLComponent* component) {
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

void SchemaParsingConfig::resetXML10() {
	$nc(this->fNamespaceScanner)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(static_cast<$BasicParserConfiguration*>(this))));
	$nc(this->fDTDScanner)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(static_cast<$BasicParserConfiguration*>(this))));
}

void SchemaParsingConfig::resetXML11() {
	$nc(this->fXML11NSDocScanner)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(static_cast<$BasicParserConfiguration*>(this))));
	$nc(this->fXML11DTDScanner)->reset(static_cast<$XMLComponentManager*>(static_cast<$ParserConfigurationSettings*>(static_cast<$BasicParserConfiguration*>(this))));
}

void SchemaParsingConfig::resetNodePool() {
}

void SchemaParsingConfig::initXML11Components() {
	if (!this->f11Initialized) {
		$set(this, fXML11DatatypeFactory, $DTDDVFactory::getInstance(SchemaParsingConfig::XML11_DATATYPE_VALIDATOR_FACTORY));
		$set(this, fXML11DTDScanner, $new($XML11DTDScannerImpl));
		addRecognizedParamsAndSetDefaults(this->fXML11DTDScanner);
		$set(this, fXML11NSDocScanner, $new($XML11NSDocumentScannerImpl));
		addRecognizedParamsAndSetDefaults(this->fXML11NSDocScanner);
		this->f11Initialized = true;
	}
}

SchemaParsingConfig::SchemaParsingConfig() {
}

void clinit$SchemaParsingConfig($Class* class$) {
	$assignStatic(SchemaParsingConfig::XML11_DATATYPE_VALIDATOR_FACTORY, "com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11DTDDVFactoryImpl"_s);
	$init($Constants);
	$assignStatic(SchemaParsingConfig::WARN_ON_DUPLICATE_ATTDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE}));
	$assignStatic(SchemaParsingConfig::WARN_ON_UNDECLARED_ELEMDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_UNDECLARED_ELEMDEF_FEATURE}));
	$assignStatic(SchemaParsingConfig::ALLOW_JAVA_ENCODINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}));
	$assignStatic(SchemaParsingConfig::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(SchemaParsingConfig::LOAD_EXTERNAL_DTD, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::LOAD_EXTERNAL_DTD_FEATURE}));
	$assignStatic(SchemaParsingConfig::NOTIFY_BUILTIN_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_BUILTIN_REFS_FEATURE}));
	$assignStatic(SchemaParsingConfig::NOTIFY_CHAR_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_CHAR_REFS_FEATURE}));
	$assignStatic(SchemaParsingConfig::NORMALIZE_DATA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_NORMALIZED_VALUE}));
	$assignStatic(SchemaParsingConfig::SCHEMA_ELEMENT_DEFAULT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_ELEMENT_DEFAULT}));
	$assignStatic(SchemaParsingConfig::GENERATE_SYNTHETIC_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE}));
	$assignStatic(SchemaParsingConfig::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(SchemaParsingConfig::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(SchemaParsingConfig::DOCUMENT_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DOCUMENT_SCANNER_PROPERTY}));
	$assignStatic(SchemaParsingConfig::DTD_SCANNER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_SCANNER_PROPERTY}));
	$assignStatic(SchemaParsingConfig::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(SchemaParsingConfig::DTD_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
	$assignStatic(SchemaParsingConfig::NAMESPACE_BINDER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_BINDER_PROPERTY}));
	$assignStatic(SchemaParsingConfig::DATATYPE_VALIDATOR_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY}));
	$assignStatic(SchemaParsingConfig::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(SchemaParsingConfig::SCHEMA_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_VALIDATOR_PROPERTY}));
	$assignStatic(SchemaParsingConfig::LOCALE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::LOCALE_PROPERTY}));
}

$Class* SchemaParsingConfig::load$($String* name, bool initialize) {
	$loadClass(SchemaParsingConfig, name, initialize, &_SchemaParsingConfig_ClassInfo_, clinit$SchemaParsingConfig, allocate$SchemaParsingConfig);
	return class$;
}

$Class* SchemaParsingConfig::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com