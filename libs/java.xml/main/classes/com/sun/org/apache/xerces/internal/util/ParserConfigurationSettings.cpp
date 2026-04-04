#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef NOT_RECOGNIZED
#undef PARSER_SETTINGS
#undef RECOGNIZED
#undef XERCES_FEATURE_PREFIX

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $FeatureState = ::com::sun::org::apache::xerces::internal::util::FeatureState;
using $PropertyState = ::com::sun::org::apache::xerces::internal::util::PropertyState;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$String* ParserConfigurationSettings::PARSER_SETTINGS = nullptr;

void ParserConfigurationSettings::init$() {
	ParserConfigurationSettings::init$(nullptr);
}

void ParserConfigurationSettings::init$($XMLComponentManager* parent) {
	$set(this, fRecognizedFeatures, $new($ArrayList));
	$set(this, fRecognizedProperties, $new($ArrayList));
	$set(this, fFeatures, $new($HashMap));
	$set(this, fProperties, $new($HashMap));
	$set(this, fParentSettings, parent);
}

void ParserConfigurationSettings::addRecognizedFeatures($StringArray* featureIds) {
	$useLocalObjectStack();
	int32_t featureIdsCount = featureIds != nullptr ? featureIds->length : 0;
	for (int32_t i = 0; i < featureIdsCount; ++i) {
		$var($String, featureId, $nc(featureIds)->get(i));
		if (!$nc(this->fRecognizedFeatures)->contains(featureId)) {
			this->fRecognizedFeatures->add(featureId);
		}
	}
}

void ParserConfigurationSettings::setFeature($String* featureId, bool state) {
	$useLocalObjectStack();
	$var($FeatureState, checkState, checkFeature(featureId));
	if ($nc(checkState)->isExceptional()) {
		$throwNew($XMLConfigurationException, checkState->status, featureId);
	}
	$nc(this->fFeatures)->put(featureId, $($Boolean::valueOf(state)));
}

void ParserConfigurationSettings::addRecognizedProperties($StringArray* propertyIds) {
	$nc(this->fRecognizedProperties)->addAll($($Arrays::asList(propertyIds)));
}

void ParserConfigurationSettings::setProperty($String* propertyId, Object$* value) {
	$var($PropertyState, checkState, checkProperty(propertyId));
	if ($nc(checkState)->isExceptional()) {
		$throwNew($XMLConfigurationException, checkState->status, propertyId);
	}
	$nc(this->fProperties)->put(propertyId, value);
}

bool ParserConfigurationSettings::getFeature($String* featureId) {
	$var($FeatureState, state, getFeatureState(featureId));
	if ($nc(state)->isExceptional()) {
		$throwNew($XMLConfigurationException, state->status, featureId);
	}
	return state->state;
}

bool ParserConfigurationSettings::getFeature($String* featureId, bool defaultValue) {
	$var($FeatureState, state, getFeatureState(featureId));
	if ($nc(state)->isExceptional()) {
		return defaultValue;
	}
	return state->state;
}

$FeatureState* ParserConfigurationSettings::getFeatureState($String* featureId) {
	$useLocalObjectStack();
	$var($Boolean, state, $cast($Boolean, $nc(this->fFeatures)->get(featureId)));
	if (state == nullptr) {
		$var($FeatureState, checkState, checkFeature(featureId));
		if ($nc(checkState)->isExceptional()) {
			return checkState;
		}
		return $FeatureState::is(false);
	}
	return $FeatureState::is($nc(state)->booleanValue());
}

$Object* ParserConfigurationSettings::getProperty($String* propertyId) {
	$var($PropertyState, state, getPropertyState(propertyId));
	if ($nc(state)->isExceptional()) {
		$throwNew($XMLConfigurationException, state->status, propertyId);
	}
	return state->state;
}

$Object* ParserConfigurationSettings::getProperty($String* propertyId, Object$* defaultValue) {
	$var($PropertyState, state, getPropertyState(propertyId));
	if ($nc(state)->isExceptional()) {
		return $of(defaultValue);
	}
	return state->state;
}

$PropertyState* ParserConfigurationSettings::getPropertyState($String* propertyId) {
	$useLocalObjectStack();
	$var($Object, propertyValue, $nc(this->fProperties)->get(propertyId));
	if (propertyValue == nullptr) {
		$var($PropertyState, state, checkProperty(propertyId));
		if ($nc(state)->isExceptional()) {
			return state;
		}
	}
	return $PropertyState::is(propertyValue);
}

$FeatureState* ParserConfigurationSettings::checkFeature($String* featureId) {
	if (!$nc(this->fRecognizedFeatures)->contains(featureId)) {
		if (this->fParentSettings != nullptr) {
			return this->fParentSettings->getFeatureState(featureId);
		} else {
			$init($FeatureState);
			return $FeatureState::NOT_RECOGNIZED;
		}
	}
	$init($FeatureState);
	return $FeatureState::RECOGNIZED;
}

$PropertyState* ParserConfigurationSettings::checkProperty($String* propertyId) {
	if (!$nc(this->fRecognizedProperties)->contains(propertyId)) {
		if (this->fParentSettings != nullptr) {
			$var($PropertyState, state, this->fParentSettings->getPropertyState(propertyId));
			if ($nc(state)->isExceptional()) {
				return state;
			}
		} else {
			$init($PropertyState);
			return $PropertyState::NOT_RECOGNIZED;
		}
	}
	$init($PropertyState);
	return $PropertyState::RECOGNIZED;
}

ParserConfigurationSettings::ParserConfigurationSettings() {
}

void ParserConfigurationSettings::clinit$($Class* clazz) {
	$init($Constants);
	$assignStatic(ParserConfigurationSettings::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
}

$Class* ParserConfigurationSettings::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(ParserConfigurationSettings, PARSER_SETTINGS)},
		{"fRecognizedProperties", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PROTECTED, $field(ParserConfigurationSettings, fRecognizedProperties)},
		{"fProperties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED, $field(ParserConfigurationSettings, fProperties)},
		{"fRecognizedFeatures", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PROTECTED, $field(ParserConfigurationSettings, fRecognizedFeatures)},
		{"fFeatures", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;", $PROTECTED, $field(ParserConfigurationSettings, fFeatures)},
		{"fParentSettings", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;", nullptr, $PROTECTED, $field(ParserConfigurationSettings, fParentSettings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ParserConfigurationSettings, init$, void)},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(ParserConfigurationSettings, init$, void, $XMLComponentManager*)},
		{"addRecognizedFeatures", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ParserConfigurationSettings, addRecognizedFeatures, void, $StringArray*)},
		{"addRecognizedProperties", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ParserConfigurationSettings, addRecognizedProperties, void, $StringArray*)},
		{"checkFeature", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PROTECTED, $virtualMethod(ParserConfigurationSettings, checkFeature, $FeatureState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
		{"checkProperty", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PROTECTED, $virtualMethod(ParserConfigurationSettings, checkProperty, $PropertyState*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
		{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ParserConfigurationSettings, getFeature, bool, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
		{"getFeature", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ParserConfigurationSettings, getFeature, bool, $String*, bool)},
		{"getFeatureState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/FeatureState;", nullptr, $PUBLIC, $virtualMethod(ParserConfigurationSettings, getFeatureState, $FeatureState*, $String*)},
		{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ParserConfigurationSettings, getProperty, $Object*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
		{"getProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ParserConfigurationSettings, getProperty, $Object*, $String*, Object$*)},
		{"getPropertyState", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/util/PropertyState;", nullptr, $PUBLIC, $virtualMethod(ParserConfigurationSettings, getPropertyState, $PropertyState*, $String*)},
		{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ParserConfigurationSettings, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
		{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ParserConfigurationSettings, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.ParserConfigurationSettings",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.xni.parser.XMLComponentManager",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ParserConfigurationSettings, name, initialize, &classInfo$$, ParserConfigurationSettings::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ParserConfigurationSettings);
	});
	return class$;
}

$Class* ParserConfigurationSettings::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com