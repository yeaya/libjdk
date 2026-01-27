#include <com/sun/org/apache/xerces/internal/parsers/StandardParserConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLNamespaceBinder.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/parsers/BasicParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/DTDConfiguration.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <java/util/Map.h>
#include <jcpp.h>

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
#undef NAMESPACE_GROWTH
#undef NAMESPACE_GROWTH_FEATURE
#undef NORMALIZE_DATA
#undef RECOGNIZED
#undef ROOT_ELEMENT_DECL
#undef ROOT_ELEMENT_DECLARATION_PROPERTY
#undef ROOT_TYPE_DEF
#undef ROOT_TYPE_DEFINITION_PROPERTY
#undef SCHEMA_AUGMENT_PSVI
#undef SCHEMA_DOMAIN
#undef SCHEMA_DV_FACTORY
#undef SCHEMA_DV_FACTORY_PROPERTY
#undef SCHEMA_ELEMENT_DEFAULT
#undef SCHEMA_FULL_CHECKING
#undef SCHEMA_LOCATION
#undef SCHEMA_NONS_LOCATION
#undef SCHEMA_NORMALIZED_VALUE
#undef SCHEMA_SOURCE
#undef SCHEMA_VALIDATION_FEATURE
#undef SCHEMA_VALIDATOR
#undef SCHEMA_VALIDATOR_PROPERTY
#undef TOLERATE_DUPLICATES
#undef TOLERATE_DUPLICATES_FEATURE
#undef UNPARSED_ENTITY_CHECKING
#undef UNPARSED_ENTITY_CHECKING_FEATURE
#undef VALIDATE_ANNOTATIONS
#undef VALIDATE_ANNOTATIONS_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLSCHEMA_FULL_CHECKING
#undef XMLSCHEMA_VALIDATION

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $RevalidationHandler = ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLNamespaceBinder = ::com::sun::org::apache::xerces::internal::impl::XMLNamespaceBinder;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $DTDConfiguration = ::com::sun::org::apache::xerces::internal::parsers::DTDConfiguration;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $PropertyState = ::com::sun::org::apache::xerces::internal::util::PropertyState;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDocumentFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _StandardParserConfiguration_FieldInfo_[] = {
	{"NORMALIZE_DATA", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, NORMALIZE_DATA)},
	{"SCHEMA_ELEMENT_DEFAULT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, SCHEMA_ELEMENT_DEFAULT)},
	{"SCHEMA_AUGMENT_PSVI", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, SCHEMA_AUGMENT_PSVI)},
	{"XMLSCHEMA_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, XMLSCHEMA_VALIDATION)},
	{"XMLSCHEMA_FULL_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, XMLSCHEMA_FULL_CHECKING)},
	{"GENERATE_SYNTHETIC_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, GENERATE_SYNTHETIC_ANNOTATIONS)},
	{"VALIDATE_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, VALIDATE_ANNOTATIONS)},
	{"HONOUR_ALL_SCHEMALOCATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, HONOUR_ALL_SCHEMALOCATIONS)},
	{"IGNORE_XSI_TYPE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, IGNORE_XSI_TYPE)},
	{"ID_IDREF_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, ID_IDREF_CHECKING)},
	{"UNPARSED_ENTITY_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, UNPARSED_ENTITY_CHECKING)},
	{"IDENTITY_CONSTRAINT_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, IDENTITY_CONSTRAINT_CHECKING)},
	{"NAMESPACE_GROWTH", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, NAMESPACE_GROWTH)},
	{"TOLERATE_DUPLICATES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, TOLERATE_DUPLICATES)},
	{"SCHEMA_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, SCHEMA_VALIDATOR)},
	{"SCHEMA_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, SCHEMA_LOCATION)},
	{"SCHEMA_NONS_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, SCHEMA_NONS_LOCATION)},
	{"SCHEMA_DV_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, SCHEMA_DV_FACTORY)},
	{"ROOT_TYPE_DEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, ROOT_TYPE_DEF)},
	{"ROOT_ELEMENT_DECL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(StandardParserConfiguration, ROOT_ELEMENT_DECL)},
	{"fSchemaValidator", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $PROTECTED, $field(StandardParserConfiguration, fSchemaValidator)},
	{}
};

$MethodInfo _StandardParserConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StandardParserConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(StandardParserConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(StandardParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(StandardParserConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"checkFeature", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PROTECTED, $virtualMethod(StandardParserConfiguration, checkFeature, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(StandardParserConfiguration, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"configurePipeline", "()V", nullptr, $PROTECTED, $virtualMethod(StandardParserConfiguration, configurePipeline, void)},
	{}
};

$ClassInfo _StandardParserConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.StandardParserConfiguration",
	"com.sun.org.apache.xerces.internal.parsers.DTDConfiguration",
	nullptr,
	_StandardParserConfiguration_FieldInfo_,
	_StandardParserConfiguration_MethodInfo_
};

$Object* allocate$StandardParserConfiguration($Class* clazz) {
	return $of($alloc(StandardParserConfiguration));
}

$String* StandardParserConfiguration::NORMALIZE_DATA = nullptr;
$String* StandardParserConfiguration::SCHEMA_ELEMENT_DEFAULT = nullptr;
$String* StandardParserConfiguration::SCHEMA_AUGMENT_PSVI = nullptr;
$String* StandardParserConfiguration::XMLSCHEMA_VALIDATION = nullptr;
$String* StandardParserConfiguration::XMLSCHEMA_FULL_CHECKING = nullptr;
$String* StandardParserConfiguration::GENERATE_SYNTHETIC_ANNOTATIONS = nullptr;
$String* StandardParserConfiguration::VALIDATE_ANNOTATIONS = nullptr;
$String* StandardParserConfiguration::HONOUR_ALL_SCHEMALOCATIONS = nullptr;
$String* StandardParserConfiguration::IGNORE_XSI_TYPE = nullptr;
$String* StandardParserConfiguration::ID_IDREF_CHECKING = nullptr;
$String* StandardParserConfiguration::UNPARSED_ENTITY_CHECKING = nullptr;
$String* StandardParserConfiguration::IDENTITY_CONSTRAINT_CHECKING = nullptr;
$String* StandardParserConfiguration::NAMESPACE_GROWTH = nullptr;
$String* StandardParserConfiguration::TOLERATE_DUPLICATES = nullptr;
$String* StandardParserConfiguration::SCHEMA_VALIDATOR = nullptr;
$String* StandardParserConfiguration::SCHEMA_LOCATION = nullptr;
$String* StandardParserConfiguration::SCHEMA_NONS_LOCATION = nullptr;
$String* StandardParserConfiguration::SCHEMA_DV_FACTORY = nullptr;
$String* StandardParserConfiguration::ROOT_TYPE_DEF = nullptr;
$String* StandardParserConfiguration::ROOT_ELEMENT_DECL = nullptr;

void StandardParserConfiguration::init$() {
	StandardParserConfiguration::init$(nullptr, nullptr, nullptr);
}

void StandardParserConfiguration::init$($SymbolTable* symbolTable) {
	StandardParserConfiguration::init$(symbolTable, nullptr, nullptr);
}

void StandardParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	StandardParserConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void StandardParserConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$useLocalCurrentObjectStackCache();
	$DTDConfiguration::init$(symbolTable, grammarPool, parentSettings);
	$var($StringArray, recognizedFeatures, $new($StringArray, {
		StandardParserConfiguration::NORMALIZE_DATA,
		StandardParserConfiguration::SCHEMA_ELEMENT_DEFAULT,
		StandardParserConfiguration::SCHEMA_AUGMENT_PSVI,
		StandardParserConfiguration::GENERATE_SYNTHETIC_ANNOTATIONS,
		StandardParserConfiguration::VALIDATE_ANNOTATIONS,
		StandardParserConfiguration::HONOUR_ALL_SCHEMALOCATIONS,
		StandardParserConfiguration::NAMESPACE_GROWTH,
		StandardParserConfiguration::TOLERATE_DUPLICATES,
		StandardParserConfiguration::XMLSCHEMA_VALIDATION,
		StandardParserConfiguration::XMLSCHEMA_FULL_CHECKING,
		StandardParserConfiguration::IGNORE_XSI_TYPE,
		StandardParserConfiguration::ID_IDREF_CHECKING,
		StandardParserConfiguration::IDENTITY_CONSTRAINT_CHECKING,
		StandardParserConfiguration::UNPARSED_ENTITY_CHECKING
	}));
	addRecognizedFeatures(recognizedFeatures);
	setFeature(StandardParserConfiguration::SCHEMA_ELEMENT_DEFAULT, true);
	setFeature(StandardParserConfiguration::NORMALIZE_DATA, true);
	setFeature(StandardParserConfiguration::SCHEMA_AUGMENT_PSVI, true);
	setFeature(StandardParserConfiguration::GENERATE_SYNTHETIC_ANNOTATIONS, false);
	setFeature(StandardParserConfiguration::VALIDATE_ANNOTATIONS, false);
	setFeature(StandardParserConfiguration::HONOUR_ALL_SCHEMALOCATIONS, false);
	setFeature(StandardParserConfiguration::IGNORE_XSI_TYPE, false);
	setFeature(StandardParserConfiguration::ID_IDREF_CHECKING, true);
	setFeature(StandardParserConfiguration::IDENTITY_CONSTRAINT_CHECKING, true);
	setFeature(StandardParserConfiguration::UNPARSED_ENTITY_CHECKING, true);
	setFeature(StandardParserConfiguration::NAMESPACE_GROWTH, false);
	setFeature(StandardParserConfiguration::TOLERATE_DUPLICATES, false);
	$var($StringArray, recognizedProperties, $new($StringArray, {
		StandardParserConfiguration::SCHEMA_LOCATION,
		StandardParserConfiguration::SCHEMA_NONS_LOCATION,
		StandardParserConfiguration::ROOT_TYPE_DEF,
		StandardParserConfiguration::ROOT_ELEMENT_DECL,
		StandardParserConfiguration::SCHEMA_DV_FACTORY
	}));
	addRecognizedProperties(recognizedProperties);
}

void StandardParserConfiguration::configurePipeline() {
	$DTDConfiguration::configurePipeline();
	if (getFeature(StandardParserConfiguration::XMLSCHEMA_VALIDATION)) {
		if (this->fSchemaValidator == nullptr) {
			$set(this, fSchemaValidator, $new($XMLSchemaValidator));
			$nc(this->fProperties)->put(StandardParserConfiguration::SCHEMA_VALIDATOR, this->fSchemaValidator);
			addComponent(this->fSchemaValidator);
			$init($XSMessageFormatter);
			if ($nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN) == nullptr) {
				$var($XSMessageFormatter, xmft, $new($XSMessageFormatter));
				$nc(this->fErrorReporter)->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, xmft);
			}
		}
		$set(this, fLastComponent, this->fSchemaValidator);
		$nc(this->fNamespaceBinder)->setDocumentHandler(this->fSchemaValidator);
		$nc(this->fSchemaValidator)->setDocumentHandler(this->fDocumentHandler);
		$nc(this->fSchemaValidator)->setDocumentSource(this->fNamespaceBinder);
	}
}

$FeatureState* StandardParserConfiguration::checkFeature($String* featureId) {
	$init($Constants);
	if ($nc(featureId)->startsWith($Constants::XERCES_FEATURE_PREFIX)) {
		int32_t var$0 = featureId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_FEATURE_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::SCHEMA_VALIDATION_FEATURE)->length();
		if (var$1 && featureId->endsWith($Constants::SCHEMA_VALIDATION_FEATURE)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$2 = suffixLength == $nc($Constants::SCHEMA_FULL_CHECKING)->length();
		if (var$2 && featureId->endsWith($Constants::SCHEMA_FULL_CHECKING)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$3 = suffixLength == $nc($Constants::SCHEMA_NORMALIZED_VALUE)->length();
		if (var$3 && featureId->endsWith($Constants::SCHEMA_NORMALIZED_VALUE)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
		bool var$4 = suffixLength == $nc($Constants::SCHEMA_ELEMENT_DEFAULT)->length();
		if (var$4 && featureId->endsWith($Constants::SCHEMA_ELEMENT_DEFAULT)) {
			$init($FeatureState);
			return $FeatureState::RECOGNIZED;
		}
	}
	return $DTDConfiguration::checkFeature(featureId);
}

$PropertyState* StandardParserConfiguration::checkProperty($String* propertyId) {
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::SCHEMA_LOCATION)->length();
		if (var$1 && propertyId->endsWith($Constants::SCHEMA_LOCATION)) {
			$init($PropertyState);
			return $PropertyState::RECOGNIZED;
		}
		bool var$2 = suffixLength == $nc($Constants::SCHEMA_NONS_LOCATION)->length();
		if (var$2 && propertyId->endsWith($Constants::SCHEMA_NONS_LOCATION)) {
			$init($PropertyState);
			return $PropertyState::RECOGNIZED;
		}
	}
	if ($nc(propertyId)->startsWith($Constants::JAXP_PROPERTY_PREFIX)) {
		int32_t var$3 = propertyId->length();
		int32_t suffixLength = var$3 - $nc($Constants::JAXP_PROPERTY_PREFIX)->length();
		bool var$4 = suffixLength == $nc($Constants::SCHEMA_SOURCE)->length();
		if (var$4 && propertyId->endsWith($Constants::SCHEMA_SOURCE)) {
			$init($PropertyState);
			return $PropertyState::RECOGNIZED;
		}
	}
	return $DTDConfiguration::checkProperty(propertyId);
}

StandardParserConfiguration::StandardParserConfiguration() {
}

void clinit$StandardParserConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(StandardParserConfiguration::NORMALIZE_DATA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_NORMALIZED_VALUE}));
	$assignStatic(StandardParserConfiguration::SCHEMA_ELEMENT_DEFAULT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_ELEMENT_DEFAULT}));
	$assignStatic(StandardParserConfiguration::SCHEMA_AUGMENT_PSVI, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_AUGMENT_PSVI}));
	$assignStatic(StandardParserConfiguration::XMLSCHEMA_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(StandardParserConfiguration::XMLSCHEMA_FULL_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_FULL_CHECKING}));
	$assignStatic(StandardParserConfiguration::GENERATE_SYNTHETIC_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE}));
	$assignStatic(StandardParserConfiguration::VALIDATE_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::VALIDATE_ANNOTATIONS_FEATURE}));
	$assignStatic(StandardParserConfiguration::HONOUR_ALL_SCHEMALOCATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::HONOUR_ALL_SCHEMALOCATIONS_FEATURE}));
	$assignStatic(StandardParserConfiguration::IGNORE_XSI_TYPE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::IGNORE_XSI_TYPE_FEATURE}));
	$assignStatic(StandardParserConfiguration::ID_IDREF_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ID_IDREF_CHECKING_FEATURE}));
	$assignStatic(StandardParserConfiguration::UNPARSED_ENTITY_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::UNPARSED_ENTITY_CHECKING_FEATURE}));
	$assignStatic(StandardParserConfiguration::IDENTITY_CONSTRAINT_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::IDC_CHECKING_FEATURE}));
	$assignStatic(StandardParserConfiguration::NAMESPACE_GROWTH, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NAMESPACE_GROWTH_FEATURE}));
	$assignStatic(StandardParserConfiguration::TOLERATE_DUPLICATES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::TOLERATE_DUPLICATES_FEATURE}));
	$assignStatic(StandardParserConfiguration::SCHEMA_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_VALIDATOR_PROPERTY}));
	$assignStatic(StandardParserConfiguration::SCHEMA_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_LOCATION}));
	$assignStatic(StandardParserConfiguration::SCHEMA_NONS_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_NONS_LOCATION}));
	$assignStatic(StandardParserConfiguration::SCHEMA_DV_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_DV_FACTORY_PROPERTY}));
	$assignStatic(StandardParserConfiguration::ROOT_TYPE_DEF, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ROOT_TYPE_DEFINITION_PROPERTY}));
	$assignStatic(StandardParserConfiguration::ROOT_ELEMENT_DECL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ROOT_ELEMENT_DECLARATION_PROPERTY}));
}

$Class* StandardParserConfiguration::load$($String* name, bool initialize) {
	$loadClass(StandardParserConfiguration, name, initialize, &_StandardParserConfiguration_ClassInfo_, clinit$StandardParserConfiguration, allocate$StandardParserConfiguration);
	return class$;
}

$Class* StandardParserConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com