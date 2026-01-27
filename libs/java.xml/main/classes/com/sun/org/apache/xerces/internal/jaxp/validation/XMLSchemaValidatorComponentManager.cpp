#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/DraconianErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>
#include <com/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <java/lang/SecurityManager.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_SCHEMA
#undef APIPROPERTY
#undef CDATA_CHUNK_SIZE
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef EXTERNAL_ACCESS_DEFAULT_FSP
#undef FALSE
#undef FEATURE_SECURE_PROCESSING
#undef FSP
#undef IDC_CHECKING_FEATURE
#undef IDENTITY_CONSTRAINT_CHECKING
#undef ID_IDREF_CHECKING
#undef ID_IDREF_CHECKING_FEATURE
#undef IGNORE_XSI_TYPE
#undef IGNORE_XSI_TYPE_FEATURE
#undef LOCALE
#undef LOCALE_PROPERTY
#undef NAMESPACE_CONTEXT
#undef NAMESPACE_CONTEXT_PROPERTY
#undef NORMALIZE_DATA
#undef NOT_ALLOWED
#undef NOT_SUPPORTED
#undef OVERRIDE_PARSER
#undef PARSER_SETTINGS
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_AUGMENT_PSVI
#undef SCHEMA_DOMAIN
#undef SCHEMA_ELEMENT_DEFAULT
#undef SCHEMA_NORMALIZED_VALUE
#undef SCHEMA_VALIDATION
#undef SCHEMA_VALIDATION_FEATURE
#undef SCHEMA_VALIDATOR
#undef SCHEMA_VALIDATOR_PROPERTY
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TRUE
#undef UNPARSED_ENTITY_CHECKING
#undef UNPARSED_ENTITY_CHECKING_FEATURE
#undef USE_CATALOG
#undef USE_GRAMMAR_POOL_ONLY
#undef USE_GRAMMAR_POOL_ONLY_FEATURE
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XML_SECURITY_PROPERTY_MANAGER

using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $DraconianErrorHandler = ::com::sun::org::apache::xerces::internal::jaxp::validation::DraconianErrorHandler;
using $XSGrammarPoolContainer = ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer;
using $DOMEntityResolverWrapper = ::com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper;
using $ErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $PropertyState = ::com::sun::org::apache::xerces::internal::util::PropertyState;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $XMLSecurityPropertyManager$State = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _XMLSchemaValidatorComponentManager_FieldInfo_[] = {
	{"SCHEMA_VALIDATION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, SCHEMA_VALIDATION)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, VALIDATION)},
	{"USE_GRAMMAR_POOL_ONLY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, USE_GRAMMAR_POOL_ONLY)},
	{"IGNORE_XSI_TYPE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, IGNORE_XSI_TYPE)},
	{"ID_IDREF_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, ID_IDREF_CHECKING)},
	{"UNPARSED_ENTITY_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, UNPARSED_ENTITY_CHECKING)},
	{"IDENTITY_CONSTRAINT_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, IDENTITY_CONSTRAINT_CHECKING)},
	{"DISALLOW_DOCTYPE_DECL_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, DISALLOW_DOCTYPE_DECL_FEATURE)},
	{"NORMALIZE_DATA", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, NORMALIZE_DATA)},
	{"SCHEMA_ELEMENT_DEFAULT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, SCHEMA_ELEMENT_DEFAULT)},
	{"SCHEMA_AUGMENT_PSVI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, SCHEMA_AUGMENT_PSVI)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, ENTITY_MANAGER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, ENTITY_RESOLVER)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, ERROR_HANDLER)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, ERROR_REPORTER)},
	{"NAMESPACE_CONTEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, NAMESPACE_CONTEXT)},
	{"SCHEMA_VALIDATOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, SCHEMA_VALIDATOR)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, SECURITY_MANAGER)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, XML_SECURITY_PROPERTY_MANAGER)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, SYMBOL_TABLE)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, VALIDATION_MANAGER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, XMLGRAMMAR_POOL)},
	{"LOCALE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidatorComponentManager, LOCALE)},
	{"_isSecureMode", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, _isSecureMode)},
	{"fConfigUpdated", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fConfigUpdated)},
	{"fUseGrammarPoolOnly", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fUseGrammarPoolOnly)},
	{"fComponents", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(XMLSchemaValidatorComponentManager, fComponents)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fEntityManager)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fErrorReporter)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fNamespaceContext)},
	{"fSchemaValidator", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fSchemaValidator)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fValidationManager)},
	{"fInitFeatures", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE | $FINAL, $field(XMLSchemaValidatorComponentManager, fInitFeatures)},
	{"fInitProperties", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(XMLSchemaValidatorComponentManager, fInitProperties)},
	{"fInitSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fInitSecurityManager)},
	{"fSecurityPropertyMgr", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidatorComponentManager, fSecurityPropertyMgr)},
	{"fErrorHandler", "Lorg/xml/sax/ErrorHandler;", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fErrorHandler)},
	{"fResourceResolver", "Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fResourceResolver)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(XMLSchemaValidatorComponentManager, fLocale)},
	{}
};

$MethodInfo _XMLSchemaValidatorComponentManager_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer;)V", nullptr, $PUBLIC, $method(XMLSchemaValidatorComponentManager, init$, void, $XSGrammarPoolContainer*)},
	{"addRecognizedParamsAndSetDefaults", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;Lcom/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer;)V", nullptr, $PUBLIC, $method(XMLSchemaValidatorComponentManager, addRecognizedParamsAndSetDefaults, void, $XMLComponent*, $XSGrammarPoolContainer*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, 0, $method(XMLSchemaValidatorComponentManager, getErrorHandler, $ErrorHandler*)},
	{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidatorComponentManager, getFeatureState, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getLocale", "()Ljava/util/Locale;", nullptr, 0, $method(XMLSchemaValidatorComponentManager, getLocale, $Locale*)},
	{"getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidatorComponentManager, getPropertyState, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, 0, $method(XMLSchemaValidatorComponentManager, getResourceResolver, $LSResourceResolver*)},
	{"reset", "()V", nullptr, $PUBLIC, $method(XMLSchemaValidatorComponentManager, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"restoreInitialState", "()V", nullptr, 0, $method(XMLSchemaValidatorComponentManager, restoreInitialState, void)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, 0, $method(XMLSchemaValidatorComponentManager, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidatorComponentManager, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setFeatureDefaults", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;[Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer;)V", nullptr, $PRIVATE, $method(XMLSchemaValidatorComponentManager, setFeatureDefaults, void, $XMLComponent*, $StringArray*, $XSGrammarPoolContainer*)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, 0, $method(XMLSchemaValidatorComponentManager, setLocale, void, $Locale*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidatorComponentManager, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setPropertyDefaults", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponent;[Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLSchemaValidatorComponentManager, setPropertyDefaults, void, $XMLComponent*, $StringArray*)},
	{"setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, 0, $method(XMLSchemaValidatorComponentManager, setResourceResolver, void, $LSResourceResolver*)},
	{}
};

$ClassInfo _XMLSchemaValidatorComponentManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaValidatorComponentManager",
	"com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings",
	nullptr,
	_XMLSchemaValidatorComponentManager_FieldInfo_,
	_XMLSchemaValidatorComponentManager_MethodInfo_
};

$Object* allocate$XMLSchemaValidatorComponentManager($Class* clazz) {
	return $of($alloc(XMLSchemaValidatorComponentManager));
}

$String* XMLSchemaValidatorComponentManager::SCHEMA_VALIDATION = nullptr;
$String* XMLSchemaValidatorComponentManager::VALIDATION = nullptr;
$String* XMLSchemaValidatorComponentManager::USE_GRAMMAR_POOL_ONLY = nullptr;
$String* XMLSchemaValidatorComponentManager::IGNORE_XSI_TYPE = nullptr;
$String* XMLSchemaValidatorComponentManager::ID_IDREF_CHECKING = nullptr;
$String* XMLSchemaValidatorComponentManager::UNPARSED_ENTITY_CHECKING = nullptr;
$String* XMLSchemaValidatorComponentManager::IDENTITY_CONSTRAINT_CHECKING = nullptr;
$String* XMLSchemaValidatorComponentManager::DISALLOW_DOCTYPE_DECL_FEATURE = nullptr;
$String* XMLSchemaValidatorComponentManager::NORMALIZE_DATA = nullptr;
$String* XMLSchemaValidatorComponentManager::SCHEMA_ELEMENT_DEFAULT = nullptr;
$String* XMLSchemaValidatorComponentManager::SCHEMA_AUGMENT_PSVI = nullptr;
$String* XMLSchemaValidatorComponentManager::ENTITY_MANAGER = nullptr;
$String* XMLSchemaValidatorComponentManager::ENTITY_RESOLVER = nullptr;
$String* XMLSchemaValidatorComponentManager::ERROR_HANDLER = nullptr;
$String* XMLSchemaValidatorComponentManager::ERROR_REPORTER = nullptr;
$String* XMLSchemaValidatorComponentManager::NAMESPACE_CONTEXT = nullptr;
$String* XMLSchemaValidatorComponentManager::SCHEMA_VALIDATOR = nullptr;
$String* XMLSchemaValidatorComponentManager::SECURITY_MANAGER = nullptr;
$String* XMLSchemaValidatorComponentManager::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* XMLSchemaValidatorComponentManager::SYMBOL_TABLE = nullptr;
$String* XMLSchemaValidatorComponentManager::VALIDATION_MANAGER = nullptr;
$String* XMLSchemaValidatorComponentManager::XMLGRAMMAR_POOL = nullptr;
$String* XMLSchemaValidatorComponentManager::LOCALE = nullptr;

void XMLSchemaValidatorComponentManager::init$($XSGrammarPoolContainer* grammarContainer) {
	$useLocalCurrentObjectStackCache();
	$ParserConfigurationSettings::init$();
	this->_isSecureMode = false;
	this->fConfigUpdated = true;
	$set(this, fComponents, $new($HashMap));
	$set(this, fInitFeatures, $new($HashMap));
	$set(this, fInitProperties, $new($HashMap));
	$set(this, fErrorHandler, nullptr);
	$set(this, fResourceResolver, nullptr);
	$set(this, fLocale, nullptr);
	$set(this, fEntityManager, $new($XMLEntityManager));
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::ENTITY_MANAGER, this->fEntityManager);
	$set(this, fErrorReporter, $new($XMLErrorReporter));
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::ERROR_REPORTER, this->fErrorReporter);
	$set(this, fNamespaceContext, $new($NamespaceSupport));
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::NAMESPACE_CONTEXT, this->fNamespaceContext);
	$set(this, fSchemaValidator, $new($XMLSchemaValidator));
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::SCHEMA_VALIDATOR, this->fSchemaValidator);
	$set(this, fValidationManager, $new($ValidationManager));
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::VALIDATION_MANAGER, this->fValidationManager);
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::ENTITY_RESOLVER, nullptr);
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::ERROR_HANDLER, nullptr);
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::SYMBOL_TABLE, $$new($SymbolTable));
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::XMLGRAMMAR_POOL, $($nc(grammarContainer)->getGrammarPool()));
	this->fUseGrammarPoolOnly = $nc(grammarContainer)->isFullyComposed();
	$init($XSMessageFormatter);
	$nc(this->fErrorReporter)->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, $$new($XSMessageFormatter));
	$init($XMLConstants);
	$init($JdkConstants);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		XMLSchemaValidatorComponentManager::DISALLOW_DOCTYPE_DECL_FEATURE,
		XMLSchemaValidatorComponentManager::NORMALIZE_DATA,
		XMLSchemaValidatorComponentManager::SCHEMA_ELEMENT_DEFAULT,
		XMLSchemaValidatorComponentManager::SCHEMA_AUGMENT_PSVI,
		$XMLConstants::USE_CATALOG,
		$JdkConstants::OVERRIDE_PARSER
	}));
	addRecognizedFeatures(recognizedFeatures);
	$init($Boolean);
	$nc(this->fFeatures)->put(XMLSchemaValidatorComponentManager::DISALLOW_DOCTYPE_DECL_FEATURE, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XMLSchemaValidatorComponentManager::NORMALIZE_DATA, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XMLSchemaValidatorComponentManager::SCHEMA_ELEMENT_DEFAULT, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XMLSchemaValidatorComponentManager::SCHEMA_AUGMENT_PSVI, $Boolean::TRUE);
	$nc(this->fFeatures)->put($XMLConstants::USE_CATALOG, $(grammarContainer->getFeature($XMLConstants::USE_CATALOG)));
	$nc(this->fFeatures)->put($JdkConstants::OVERRIDE_PARSER, $(grammarContainer->getFeature($JdkConstants::OVERRIDE_PARSER)));
	addRecognizedParamsAndSetDefaults(this->fEntityManager, grammarContainer);
	addRecognizedParamsAndSetDefaults(this->fErrorReporter, grammarContainer);
	addRecognizedParamsAndSetDefaults(this->fSchemaValidator, grammarContainer);
	$nc(this->fFeatures)->put(XMLSchemaValidatorComponentManager::IGNORE_XSI_TYPE, $Boolean::FALSE);
	$nc(this->fFeatures)->put(XMLSchemaValidatorComponentManager::ID_IDREF_CHECKING, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XMLSchemaValidatorComponentManager::IDENTITY_CONSTRAINT_CHECKING, $Boolean::TRUE);
	$nc(this->fFeatures)->put(XMLSchemaValidatorComponentManager::UNPARSED_ENTITY_CHECKING, $Boolean::TRUE);
	bool secureProcessing = $nc($(grammarContainer->getFeature($XMLConstants::FEATURE_SECURE_PROCESSING)))->booleanValue();
	if ($System::getSecurityManager() != nullptr) {
		this->_isSecureMode = true;
		secureProcessing = true;
	}
	$set(this, fInitSecurityManager, $cast($XMLSecurityManager, grammarContainer->getProperty(XMLSchemaValidatorComponentManager::SECURITY_MANAGER)));
	if (this->fInitSecurityManager != nullptr) {
		$nc(this->fInitSecurityManager)->setSecureProcessing(secureProcessing);
	} else {
		$set(this, fInitSecurityManager, $new($XMLSecurityManager, secureProcessing));
	}
	setProperty(XMLSchemaValidatorComponentManager::SECURITY_MANAGER, this->fInitSecurityManager);
	$set(this, fSecurityPropertyMgr, $cast($XMLSecurityPropertyManager, grammarContainer->getProperty($JdkConstants::XML_SECURITY_PROPERTY_MANAGER)));
	setProperty(XMLSchemaValidatorComponentManager::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
	{
		$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$CatalogFeatures$Feature* f = arr$->get(i$);
			{
				$var($String, var$0, $nc(f)->getPropertyName());
				setProperty(var$0, $(grammarContainer->getProperty($(f->getPropertyName()))));
			}
		}
	}
	setProperty($JdkConstants::CDATA_CHUNK_SIZE, $(grammarContainer->getProperty($JdkConstants::CDATA_CHUNK_SIZE)));
}

$FeatureState* XMLSchemaValidatorComponentManager::getFeatureState($String* featureId) {
	$init($ParserConfigurationSettings);
	if ($nc($ParserConfigurationSettings::PARSER_SETTINGS)->equals(featureId)) {
		return $FeatureState::is(this->fConfigUpdated);
	} else {
		bool var$1 = $nc(XMLSchemaValidatorComponentManager::VALIDATION)->equals(featureId);
		if (var$1 || $nc(XMLSchemaValidatorComponentManager::SCHEMA_VALIDATION)->equals(featureId)) {
			return $FeatureState::is(true);
		} else if ($nc(XMLSchemaValidatorComponentManager::USE_GRAMMAR_POOL_ONLY)->equals(featureId)) {
			return $FeatureState::is(this->fUseGrammarPoolOnly);
		} else {
			$init($XMLConstants);
			if ($nc($XMLConstants::FEATURE_SECURE_PROCESSING)->equals(featureId)) {
				return $FeatureState::is($nc(this->fInitSecurityManager)->isSecureProcessing());
			} else if ($nc(XMLSchemaValidatorComponentManager::SCHEMA_ELEMENT_DEFAULT)->equals(featureId)) {
				return $FeatureState::is(true);
			}
		}
	}
	return $ParserConfigurationSettings::getFeatureState(featureId);
}

void XMLSchemaValidatorComponentManager::setFeature($String* featureId, bool value) {
	$init($ParserConfigurationSettings);
	if ($nc($ParserConfigurationSettings::PARSER_SETTINGS)->equals(featureId)) {
		$init($Status);
		$throwNew($XMLConfigurationException, $Status::NOT_SUPPORTED, featureId);
	} else {
		bool var$2 = value == false;
		if (var$2) {
			bool var$3 = $nc(XMLSchemaValidatorComponentManager::VALIDATION)->equals(featureId);
			var$2 = (var$3 || $nc(XMLSchemaValidatorComponentManager::SCHEMA_VALIDATION)->equals(featureId));
		}
		if (var$2) {
			$init($Status);
			$throwNew($XMLConfigurationException, $Status::NOT_SUPPORTED, featureId);
		} else if ($nc(XMLSchemaValidatorComponentManager::USE_GRAMMAR_POOL_ONLY)->equals(featureId) && value != this->fUseGrammarPoolOnly) {
			$init($Status);
			$throwNew($XMLConfigurationException, $Status::NOT_SUPPORTED, featureId);
		}
	}
	$init($XMLConstants);
	if ($nc($XMLConstants::FEATURE_SECURE_PROCESSING)->equals(featureId)) {
		if (this->_isSecureMode && !value) {
			$init($Status);
			$throwNew($XMLConfigurationException, $Status::NOT_ALLOWED, $XMLConstants::FEATURE_SECURE_PROCESSING);
		}
		$nc(this->fInitSecurityManager)->setSecureProcessing(value);
		setProperty(XMLSchemaValidatorComponentManager::SECURITY_MANAGER, this->fInitSecurityManager);
		if (value) {
			$init($XMLSecurityPropertyManager$Property);
			$init($XMLSecurityPropertyManager$State);
			$init($JdkConstants);
			$nc(this->fSecurityPropertyMgr)->setValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD, $XMLSecurityPropertyManager$State::FSP, $JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP);
			$nc(this->fSecurityPropertyMgr)->setValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_SCHEMA, $XMLSecurityPropertyManager$State::FSP, $JdkConstants::EXTERNAL_ACCESS_DEFAULT_FSP);
			setProperty(XMLSchemaValidatorComponentManager::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
		}
		return;
	}
	this->fConfigUpdated = true;
	$nc(this->fEntityManager)->setFeature(featureId, value);
	$nc(this->fErrorReporter)->setFeature(featureId, value);
	$nc(this->fSchemaValidator)->setFeature(featureId, value);
	if (!$nc(this->fInitFeatures)->containsKey(featureId)) {
		bool current = $ParserConfigurationSettings::getFeature(featureId);
		$init($Boolean);
		$nc(this->fInitFeatures)->put(featureId, current ? $Boolean::TRUE : $Boolean::FALSE);
	}
	$ParserConfigurationSettings::setFeature(featureId, value);
}

$PropertyState* XMLSchemaValidatorComponentManager::getPropertyState($String* propertyId) {
	$useLocalCurrentObjectStackCache();
	if ($nc(XMLSchemaValidatorComponentManager::LOCALE)->equals(propertyId)) {
		return $PropertyState::is($(getLocale()));
	}
	$var($Object, component, $nc(this->fComponents)->get(propertyId));
	if (component != nullptr) {
		return $PropertyState::is(component);
	} else if ($nc(this->fComponents)->containsKey(propertyId)) {
		return $PropertyState::is(nullptr);
	}
	return $ParserConfigurationSettings::getPropertyState(propertyId);
}

void XMLSchemaValidatorComponentManager::setProperty($String* propertyId, Object$* value) {
	bool var$5 = $nc(XMLSchemaValidatorComponentManager::ENTITY_MANAGER)->equals(propertyId);
	bool var$4 = var$5 || $nc(XMLSchemaValidatorComponentManager::ERROR_REPORTER)->equals(propertyId);
	bool var$3 = var$4 || $nc(XMLSchemaValidatorComponentManager::NAMESPACE_CONTEXT)->equals(propertyId);
	bool var$2 = var$3 || $nc(XMLSchemaValidatorComponentManager::SCHEMA_VALIDATOR)->equals(propertyId);
	bool var$1 = var$2 || $nc(XMLSchemaValidatorComponentManager::SYMBOL_TABLE)->equals(propertyId);
	bool var$0 = var$1 || $nc(XMLSchemaValidatorComponentManager::VALIDATION_MANAGER)->equals(propertyId);
	if (var$0 || $nc(XMLSchemaValidatorComponentManager::XMLGRAMMAR_POOL)->equals(propertyId)) {
		$init($Status);
		$throwNew($XMLConfigurationException, $Status::NOT_SUPPORTED, propertyId);
	}
	this->fConfigUpdated = true;
	$nc(this->fEntityManager)->setProperty(propertyId, value);
	$nc(this->fErrorReporter)->setProperty(propertyId, value);
	$nc(this->fSchemaValidator)->setProperty(propertyId, value);
	bool var$7 = $nc(XMLSchemaValidatorComponentManager::ENTITY_RESOLVER)->equals(propertyId);
	bool var$6 = var$7 || $nc(XMLSchemaValidatorComponentManager::ERROR_HANDLER)->equals(propertyId);
	if (var$6 || $nc(XMLSchemaValidatorComponentManager::SECURITY_MANAGER)->equals(propertyId)) {
		$nc(this->fComponents)->put(propertyId, value);
		return;
	} else if ($nc(XMLSchemaValidatorComponentManager::LOCALE)->equals(propertyId)) {
		setLocale($cast($Locale, value));
		$nc(this->fComponents)->put(propertyId, value);
		return;
	}
	$init($JdkProperty$State);
	if (this->fInitSecurityManager == nullptr || !$nc(this->fInitSecurityManager)->setLimit(propertyId, $JdkProperty$State::APIPROPERTY, value)) {
		$init($XMLSecurityPropertyManager$State);
		if (this->fSecurityPropertyMgr == nullptr || !$nc(this->fSecurityPropertyMgr)->setValue(propertyId, $XMLSecurityPropertyManager$State::APIPROPERTY, value)) {
			if (!$nc(this->fInitProperties)->containsKey(propertyId)) {
				$nc(this->fInitProperties)->put(propertyId, $($ParserConfigurationSettings::getProperty(propertyId)));
			}
			$ParserConfigurationSettings::setProperty(propertyId, value);
		}
	}
}

void XMLSchemaValidatorComponentManager::addRecognizedParamsAndSetDefaults($XMLComponent* component, $XSGrammarPoolContainer* grammarContainer) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, recognizedFeatures, $nc(component)->getRecognizedFeatures());
	addRecognizedFeatures(recognizedFeatures);
	$var($StringArray, recognizedProperties, component->getRecognizedProperties());
	addRecognizedProperties(recognizedProperties);
	setFeatureDefaults(component, recognizedFeatures, grammarContainer);
	setPropertyDefaults(component, recognizedProperties);
}

void XMLSchemaValidatorComponentManager::reset() {
	$nc(this->fNamespaceContext)->reset();
	$nc(this->fValidationManager)->reset();
	$nc(this->fEntityManager)->reset(static_cast<$XMLComponentManager*>(this));
	$nc(this->fErrorReporter)->reset(this);
	$nc(this->fSchemaValidator)->reset(this);
	this->fConfigUpdated = false;
}

void XMLSchemaValidatorComponentManager::setErrorHandler($ErrorHandler* errorHandler) {
	$useLocalCurrentObjectStackCache();
	$set(this, fErrorHandler, errorHandler);
	setProperty(XMLSchemaValidatorComponentManager::ERROR_HANDLER, (errorHandler != nullptr) ? $of($$new($ErrorHandlerWrapper, errorHandler)) : $of($$new($ErrorHandlerWrapper, $($DraconianErrorHandler::getInstance()))));
}

$ErrorHandler* XMLSchemaValidatorComponentManager::getErrorHandler() {
	return this->fErrorHandler;
}

void XMLSchemaValidatorComponentManager::setResourceResolver($LSResourceResolver* resourceResolver) {
	$set(this, fResourceResolver, resourceResolver);
	setProperty(XMLSchemaValidatorComponentManager::ENTITY_RESOLVER, $$new($DOMEntityResolverWrapper, resourceResolver));
}

$LSResourceResolver* XMLSchemaValidatorComponentManager::getResourceResolver() {
	return this->fResourceResolver;
}

void XMLSchemaValidatorComponentManager::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

$Locale* XMLSchemaValidatorComponentManager::getLocale() {
	return this->fLocale;
}

void XMLSchemaValidatorComponentManager::restoreInitialState() {
	$useLocalCurrentObjectStackCache();
	this->fConfigUpdated = true;
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::ENTITY_RESOLVER, nullptr);
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::ERROR_HANDLER, nullptr);
	setLocale(nullptr);
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::LOCALE, nullptr);
	$nc(this->fInitSecurityManager)->setSecureProcessing(true);
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::SECURITY_MANAGER, this->fInitSecurityManager);
	setLocale(nullptr);
	$nc(this->fComponents)->put(XMLSchemaValidatorComponentManager::LOCALE, nullptr);
	if (!$nc(this->fInitFeatures)->isEmpty()) {
		{
			$var($Iterator, i$, $nc($($nc(this->fInitFeatures)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, name, $cast($String, $nc(entry)->getKey()));
					bool value = $nc(($cast($Boolean, $(entry->getValue()))))->booleanValue();
					$ParserConfigurationSettings::setFeature(name, value);
				}
			}
		}
		$nc(this->fInitFeatures)->clear();
	}
	if (!$nc(this->fInitProperties)->isEmpty()) {
		{
			$var($Iterator, i$, $nc($($nc(this->fInitProperties)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, name, $cast($String, $nc(entry)->getKey()));
					$var($Object, value, entry->getValue());
					$ParserConfigurationSettings::setProperty(name, value);
				}
			}
		}
		$nc(this->fInitProperties)->clear();
	}
}

void XMLSchemaValidatorComponentManager::setFeatureDefaults($XMLComponent* component, $StringArray* recognizedFeatures, $XSGrammarPoolContainer* grammarContainer) {
	$useLocalCurrentObjectStackCache();
	if (recognizedFeatures != nullptr) {
		for (int32_t i = 0; i < recognizedFeatures->length; ++i) {
			$var($String, featureId, recognizedFeatures->get(i));
			$var($Boolean, state, $nc(grammarContainer)->getFeature(featureId));
			if (state == nullptr) {
				$assign(state, $nc(component)->getFeatureDefault(featureId));
			}
			if (state != nullptr) {
				if (!$nc(this->fFeatures)->containsKey(featureId)) {
					$nc(this->fFeatures)->put(featureId, state);
					this->fConfigUpdated = true;
				}
			}
		}
	}
}

void XMLSchemaValidatorComponentManager::setPropertyDefaults($XMLComponent* component, $StringArray* recognizedProperties) {
	$useLocalCurrentObjectStackCache();
	if (recognizedProperties != nullptr) {
		for (int32_t i = 0; i < recognizedProperties->length; ++i) {
			$var($String, propertyId, recognizedProperties->get(i));
			$var($Object, value, $nc(component)->getPropertyDefault(propertyId));
			if (value != nullptr) {
				if (!$nc(this->fProperties)->containsKey(propertyId)) {
					$nc(this->fProperties)->put(propertyId, value);
					this->fConfigUpdated = true;
				}
			}
		}
	}
}

XMLSchemaValidatorComponentManager::XMLSchemaValidatorComponentManager() {
}

void clinit$XMLSchemaValidatorComponentManager($Class* class$) {
	$init($Constants);
	$assignStatic(XMLSchemaValidatorComponentManager::SCHEMA_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(XMLSchemaValidatorComponentManager::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XMLSchemaValidatorComponentManager::USE_GRAMMAR_POOL_ONLY, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::USE_GRAMMAR_POOL_ONLY_FEATURE}));
	$assignStatic(XMLSchemaValidatorComponentManager::IGNORE_XSI_TYPE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::IGNORE_XSI_TYPE_FEATURE}));
	$assignStatic(XMLSchemaValidatorComponentManager::ID_IDREF_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ID_IDREF_CHECKING_FEATURE}));
	$assignStatic(XMLSchemaValidatorComponentManager::UNPARSED_ENTITY_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::UNPARSED_ENTITY_CHECKING_FEATURE}));
	$assignStatic(XMLSchemaValidatorComponentManager::IDENTITY_CONSTRAINT_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::IDC_CHECKING_FEATURE}));
	$assignStatic(XMLSchemaValidatorComponentManager::DISALLOW_DOCTYPE_DECL_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DISALLOW_DOCTYPE_DECL_FEATURE}));
	$assignStatic(XMLSchemaValidatorComponentManager::NORMALIZE_DATA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_NORMALIZED_VALUE}));
	$assignStatic(XMLSchemaValidatorComponentManager::SCHEMA_ELEMENT_DEFAULT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_ELEMENT_DEFAULT}));
	$assignStatic(XMLSchemaValidatorComponentManager::SCHEMA_AUGMENT_PSVI, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_AUGMENT_PSVI}));
	$assignStatic(XMLSchemaValidatorComponentManager::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XMLSchemaValidatorComponentManager::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XMLSchemaValidatorComponentManager::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XMLSchemaValidatorComponentManager::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLSchemaValidatorComponentManager::NAMESPACE_CONTEXT, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY}));
	$assignStatic(XMLSchemaValidatorComponentManager::SCHEMA_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_VALIDATOR_PROPERTY}));
	$assignStatic(XMLSchemaValidatorComponentManager::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(XMLSchemaValidatorComponentManager::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(XMLSchemaValidatorComponentManager::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLSchemaValidatorComponentManager::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(XMLSchemaValidatorComponentManager::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XMLSchemaValidatorComponentManager::LOCALE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::LOCALE_PROPERTY}));
}

$Class* XMLSchemaValidatorComponentManager::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidatorComponentManager, name, initialize, &_XMLSchemaValidatorComponentManager_ClassInfo_, clinit$XMLSchemaValidatorComponentManager, allocate$XMLSchemaValidatorComponentManager);
	return class$;
}

$Class* XMLSchemaValidatorComponentManager::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com