#include <com/sun/org/apache/xerces/internal/jaxp/SchemaValidatorConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <jcpp.h>

#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef PARSER_SETTINGS
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_DOMAIN
#undef SCHEMA_VALIDATION
#undef SCHEMA_VALIDATION_FEATURE
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

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $XSGrammarPoolContainer = ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $PropertyState = ::com::sun::org::apache::xerces::internal::util::PropertyState;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _SchemaValidatorConfiguration_FieldInfo_[] = {
	{"SCHEMA_VALIDATION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaValidatorConfiguration, SCHEMA_VALIDATION)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaValidatorConfiguration, VALIDATION)},
	{"USE_GRAMMAR_POOL_ONLY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaValidatorConfiguration, USE_GRAMMAR_POOL_ONLY)},
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaValidatorConfiguration, PARSER_SETTINGS)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaValidatorConfiguration, ERROR_REPORTER)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaValidatorConfiguration, VALIDATION_MANAGER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaValidatorConfiguration, XMLGRAMMAR_POOL)},
	{"fParentComponentManager", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;", nullptr, $PRIVATE | $FINAL, $field(SchemaValidatorConfiguration, fParentComponentManager)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PRIVATE | $FINAL, $field(SchemaValidatorConfiguration, fGrammarPool)},
	{"fUseGrammarPoolOnly", "Z", nullptr, $PRIVATE | $FINAL, $field(SchemaValidatorConfiguration, fUseGrammarPoolOnly)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PRIVATE | $FINAL, $field(SchemaValidatorConfiguration, fValidationManager)},
	{}
};

$MethodInfo _SchemaValidatorConfiguration_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;Lcom/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer;Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;)V", nullptr, $PUBLIC, $method(SchemaValidatorConfiguration, init$, void, $XMLComponentManager*, $XSGrammarPoolContainer*, $ValidationManager*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(SchemaValidatorConfiguration, getFeature, bool, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getFeature", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC, $virtualMethod(SchemaValidatorConfiguration, getFeature, bool, $String*, bool)},
	{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC, $virtualMethod(SchemaValidatorConfiguration, getFeatureState, $FeatureState*, $String*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaValidatorConfiguration, getProperty, $Object*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaValidatorConfiguration, getProperty, $Object*, $String*, Object$*)},
	{"getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC, $virtualMethod(SchemaValidatorConfiguration, getPropertyState, $PropertyState*, $String*)},
	{}
};

$ClassInfo _SchemaValidatorConfiguration_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.SchemaValidatorConfiguration",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponentManager",
	_SchemaValidatorConfiguration_FieldInfo_,
	_SchemaValidatorConfiguration_MethodInfo_
};

$Object* allocate$SchemaValidatorConfiguration($Class* clazz) {
	return $of($alloc(SchemaValidatorConfiguration));
}

$String* SchemaValidatorConfiguration::SCHEMA_VALIDATION = nullptr;
$String* SchemaValidatorConfiguration::VALIDATION = nullptr;
$String* SchemaValidatorConfiguration::USE_GRAMMAR_POOL_ONLY = nullptr;
$String* SchemaValidatorConfiguration::PARSER_SETTINGS = nullptr;
$String* SchemaValidatorConfiguration::ERROR_REPORTER = nullptr;
$String* SchemaValidatorConfiguration::VALIDATION_MANAGER = nullptr;
$String* SchemaValidatorConfiguration::XMLGRAMMAR_POOL = nullptr;

void SchemaValidatorConfiguration::init$($XMLComponentManager* parentManager, $XSGrammarPoolContainer* grammarContainer, $ValidationManager* validationManager) {
	$useLocalCurrentObjectStackCache();
	$set(this, fParentComponentManager, parentManager);
	$set(this, fGrammarPool, $nc(grammarContainer)->getGrammarPool());
	this->fUseGrammarPoolOnly = grammarContainer->isFullyComposed();
	$set(this, fValidationManager, validationManager);
	try {
		$var($XMLErrorReporter, errorReporter, $cast($XMLErrorReporter, $nc(this->fParentComponentManager)->getProperty(SchemaValidatorConfiguration::ERROR_REPORTER)));
		if (errorReporter != nullptr) {
			$init($XSMessageFormatter);
			errorReporter->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, $$new($XSMessageFormatter));
		}
	} catch ($XMLConfigurationException& exc) {
	}
}

bool SchemaValidatorConfiguration::getFeature($String* featureId) {
	$var($FeatureState, state, getFeatureState(featureId));
	if ($nc(state)->isExceptional()) {
		$throwNew($XMLConfigurationException, state->status, featureId);
	}
	return $nc(state)->state;
}

$FeatureState* SchemaValidatorConfiguration::getFeatureState($String* featureId) {
	if ($nc(SchemaValidatorConfiguration::PARSER_SETTINGS)->equals(featureId)) {
		return $nc(this->fParentComponentManager)->getFeatureState(featureId);
	} else {
		bool var$1 = $nc(SchemaValidatorConfiguration::VALIDATION)->equals(featureId);
		if (var$1 || $nc(SchemaValidatorConfiguration::SCHEMA_VALIDATION)->equals(featureId)) {
			return $FeatureState::is(true);
		} else if ($nc(SchemaValidatorConfiguration::USE_GRAMMAR_POOL_ONLY)->equals(featureId)) {
			return $FeatureState::is(this->fUseGrammarPoolOnly);
		}
	}
	return $nc(this->fParentComponentManager)->getFeatureState(featureId);
}

$PropertyState* SchemaValidatorConfiguration::getPropertyState($String* propertyId) {
	if ($nc(SchemaValidatorConfiguration::XMLGRAMMAR_POOL)->equals(propertyId)) {
		return $PropertyState::is(this->fGrammarPool);
	} else if ($nc(SchemaValidatorConfiguration::VALIDATION_MANAGER)->equals(propertyId)) {
		return $PropertyState::is(this->fValidationManager);
	}
	return $nc(this->fParentComponentManager)->getPropertyState(propertyId);
}

$Object* SchemaValidatorConfiguration::getProperty($String* propertyId) {
	$var($PropertyState, state, getPropertyState(propertyId));
	if ($nc(state)->isExceptional()) {
		$throwNew($XMLConfigurationException, state->status, propertyId);
	}
	return $of($nc(state)->state);
}

bool SchemaValidatorConfiguration::getFeature($String* featureId, bool defaultValue) {
	$var($FeatureState, state, getFeatureState(featureId));
	if ($nc(state)->isExceptional()) {
		return defaultValue;
	}
	return $nc(state)->state;
}

$Object* SchemaValidatorConfiguration::getProperty($String* propertyId, Object$* defaultValue) {
	$var($PropertyState, state, getPropertyState(propertyId));
	if ($nc(state)->isExceptional()) {
		return $of(defaultValue);
	}
	return $of($nc(state)->state);
}

SchemaValidatorConfiguration::SchemaValidatorConfiguration() {
}

void clinit$SchemaValidatorConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(SchemaValidatorConfiguration::SCHEMA_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(SchemaValidatorConfiguration::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(SchemaValidatorConfiguration::USE_GRAMMAR_POOL_ONLY, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::USE_GRAMMAR_POOL_ONLY_FEATURE}));
	$assignStatic(SchemaValidatorConfiguration::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
	$assignStatic(SchemaValidatorConfiguration::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(SchemaValidatorConfiguration::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(SchemaValidatorConfiguration::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
}

$Class* SchemaValidatorConfiguration::load$($String* name, bool initialize) {
	$loadClass(SchemaValidatorConfiguration, name, initialize, &_SchemaValidatorConfiguration_ClassInfo_, clinit$SchemaValidatorConfiguration, allocate$SchemaValidatorConfiguration);
	return class$;
}

$Class* SchemaValidatorConfiguration::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com