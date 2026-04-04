#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <java/lang/NumberFormatException.h>
#include <javax/xml/XMLConstants.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef CATALOG_FEATURES
#undef DEFAULT
#undef FSP
#undef JAXPDOTPROPERTIES
#undef ORACLE_JAXP_PROPERTY_PREFIX
#undef PROPERTY_USE_CATALOG
#undef SYSTEMPROPERTY
#undef USE_CATALOG
#undef XML_FEATURE_MANAGER

using $JdkProperty$StateArray = $Array<::jdk::xml::internal::JdkProperty$State>;
using $JdkXmlFeatures$XmlFeatureArray = $Array<::jdk::xml::internal::JdkXmlFeatures$XmlFeature>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $XMLConstants = ::javax::xml::XMLConstants;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace jdk {
	namespace xml {
		namespace internal {

$String* JdkXmlFeatures::ORACLE_JAXP_PROPERTY_PREFIX = nullptr;
$String* JdkXmlFeatures::XML_FEATURE_MANAGER = nullptr;
$String* JdkXmlFeatures::CATALOG_FEATURES = nullptr;
$String* JdkXmlFeatures::PROPERTY_USE_CATALOG = nullptr;

void JdkXmlFeatures::init$(bool secureProcessing) {
	$useLocalObjectStack();
	$set(this, featureValues, $new($booleans, $($JdkXmlFeatures$XmlFeature::values())->length));
	$set(this, states, $new($JdkProperty$StateArray, $($JdkXmlFeatures$XmlFeature::values())->length));
	this->secureProcessing = secureProcessing;
	{
		$var($JdkXmlFeatures$XmlFeatureArray, arr$, $JdkXmlFeatures$XmlFeature::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$JdkXmlFeatures$XmlFeature* f = arr$->get(i$);
			if (secureProcessing && $nc(f)->enforced()) {
				int32_t var$0 = f->ordinal();
				this->featureValues->set(var$0, f->enforcedValue());
				this->states->set(f->ordinal(), $JdkProperty$State::FSP);
			} else {
				int32_t var$1 = $nc(f)->ordinal();
				this->featureValues->set(var$1, f->defaultValue());
				this->states->set(f->ordinal(), $JdkProperty$State::DEFAULT);
			}
		}
	}
	readSystemProperties();
}

void JdkXmlFeatures::update() {
	readSystemProperties();
}

bool JdkXmlFeatures::setFeature($String* propertyName, $JdkProperty$State* state, Object$* value) {
	$JdkProperty$State* pState = state;
	$JdkXmlFeatures$XmlFeature* f = findByName(propertyName);
	if (f != nullptr) {
		$init($JdkProperty$State);
		if (state == $JdkProperty$State::APIPROPERTY) {
			pState = f->getState(propertyName);
		}
		if (pState != nullptr) {
			setFeature(f->ordinal(), pState, value);
			return true;
		}
	}
	return false;
}

void JdkXmlFeatures::setFeature($JdkXmlFeatures$XmlFeature* feature, $JdkProperty$State* state, bool value) {
	setFeature($nc(feature)->ordinal(), state, value);
}

bool JdkXmlFeatures::getFeature($JdkXmlFeatures$XmlFeature* feature) {
	return this->featureValues->get($nc(feature)->ordinal());
}

bool JdkXmlFeatures::getFeature(int32_t index) {
	return this->featureValues->get(index);
}

void JdkXmlFeatures::setFeature(int32_t index, $JdkProperty$State* state, Object$* value) {
	bool temp = false;
	if ($Boolean::class$->isAssignableFrom($nc($of(value))->getClass())) {
		temp = $cast($Boolean, value)->booleanValue();
	} else {
		temp = $Boolean::parseBoolean($cast($String, value));
	}
	setFeature(index, state, temp);
}

void JdkXmlFeatures::setFeature(int32_t index, $JdkProperty$State* state, bool value) {
	if ($nc(state)->compareTo(this->states->get(index)) >= 0) {
		this->featureValues->set(index, value);
		this->states->set(index, state);
	}
}

$JdkXmlFeatures$XmlFeature* JdkXmlFeatures::findByName($String* propertyName) {
	$var($JdkXmlFeatures$XmlFeatureArray, arr$, $JdkXmlFeatures$XmlFeature::values());
	for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
		$JdkXmlFeatures$XmlFeature* feature = arr$->get(i$);
		if ($nc(feature)->equalsPropertyName(propertyName)) {
			return feature;
		}
	}
	return nullptr;
}

int32_t JdkXmlFeatures::getIndex($String* propertyName) {
	$var($JdkXmlFeatures$XmlFeatureArray, arr$, $JdkXmlFeatures$XmlFeature::values());
	for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
		$JdkXmlFeatures$XmlFeature* feature = arr$->get(i$);
		if ($nc(feature)->equalsPropertyName(propertyName)) {
			return feature->ordinal();
		}
	}
	return -1;
}

void JdkXmlFeatures::readSystemProperties() {
	$useLocalObjectStack();
	$var($JdkXmlFeatures$XmlFeatureArray, arr$, $JdkXmlFeatures$XmlFeature::values());
	for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
		$JdkXmlFeatures$XmlFeature* feature = arr$->get(i$);
		if (!getSystemProperty(feature, $($nc(feature)->systemProperty()))) {
			$var($String, oldName, feature->systemPropertyOld());
			if (oldName != nullptr) {
				getSystemProperty(feature, oldName);
			}
		}
	}
}

bool JdkXmlFeatures::getSystemProperty($JdkXmlFeatures$XmlFeature* feature, $String* sysPropertyName) {
	$useLocalObjectStack();
	try {
		$var($String, value, $SecuritySupport::getSystemProperty(sysPropertyName));
		if (value != nullptr && !value->isEmpty()) {
			$init($JdkProperty$State);
			setFeature(feature, $JdkProperty$State::SYSTEMPROPERTY, $Boolean::parseBoolean(value));
			return true;
		}
		$assign(value, $SecuritySupport::readJAXPProperty(sysPropertyName));
		if (value != nullptr && !value->isEmpty()) {
			$init($JdkProperty$State);
			setFeature(feature, $JdkProperty$State::JAXPDOTPROPERTIES, $Boolean::parseBoolean(value));
			return true;
		}
	} catch ($NumberFormatException& e) {
		$throwNew($NumberFormatException, $$str({"Invalid setting for system property: "_s, $($nc(feature)->systemProperty())}));
	}
	return false;
}

JdkXmlFeatures::JdkXmlFeatures() {
}

void JdkXmlFeatures::clinit$($Class* clazz) {
	$assignStatic(JdkXmlFeatures::ORACLE_JAXP_PROPERTY_PREFIX, "http://www.oracle.com/xml/jaxp/properties/"_s);
	$assignStatic(JdkXmlFeatures::XML_FEATURE_MANAGER, $str({JdkXmlFeatures::ORACLE_JAXP_PROPERTY_PREFIX, "XmlFeatureManager"_s}));
	$assignStatic(JdkXmlFeatures::CATALOG_FEATURES, "javax.xml.catalog.catalogFeatures"_s);
	$init($XMLConstants);
	$assignStatic(JdkXmlFeatures::PROPERTY_USE_CATALOG, $XMLConstants::USE_CATALOG);
}

$Class* JdkXmlFeatures::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ORACLE_JAXP_PROPERTY_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlFeatures, ORACLE_JAXP_PROPERTY_PREFIX)},
		{"XML_FEATURE_MANAGER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlFeatures, XML_FEATURE_MANAGER)},
		{"CATALOG_FEATURES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlFeatures, CATALOG_FEATURES)},
		{"PROPERTY_USE_CATALOG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlFeatures, PROPERTY_USE_CATALOG)},
		{"featureValues", "[Z", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures, featureValues)},
		{"states", "[Ljdk/xml/internal/JdkProperty$State;", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures, states)},
		{"secureProcessing", "Z", nullptr, 0, $field(JdkXmlFeatures, secureProcessing)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(JdkXmlFeatures, init$, void, bool)},
		{"findByName", "(Ljava/lang/String;)Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;", nullptr, $PUBLIC, $virtualMethod(JdkXmlFeatures, findByName, $JdkXmlFeatures$XmlFeature*, $String*)},
		{"getFeature", "(Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;)Z", nullptr, $PUBLIC, $virtualMethod(JdkXmlFeatures, getFeature, bool, $JdkXmlFeatures$XmlFeature*)},
		{"getFeature", "(I)Z", nullptr, $PUBLIC, $virtualMethod(JdkXmlFeatures, getFeature, bool, int32_t)},
		{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(JdkXmlFeatures, getIndex, int32_t, $String*)},
		{"getSystemProperty", "(Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(JdkXmlFeatures, getSystemProperty, bool, $JdkXmlFeatures$XmlFeature*, $String*)},
		{"readSystemProperties", "()V", nullptr, $PRIVATE, $method(JdkXmlFeatures, readSystemProperties, void)},
		{"setFeature", "(Ljava/lang/String;Ljdk/xml/internal/JdkProperty$State;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JdkXmlFeatures, setFeature, bool, $String*, $JdkProperty$State*, Object$*)},
		{"setFeature", "(Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;Ljdk/xml/internal/JdkProperty$State;Z)V", nullptr, $PUBLIC, $virtualMethod(JdkXmlFeatures, setFeature, void, $JdkXmlFeatures$XmlFeature*, $JdkProperty$State*, bool)},
		{"setFeature", "(ILjdk/xml/internal/JdkProperty$State;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JdkXmlFeatures, setFeature, void, int32_t, $JdkProperty$State*, Object$*)},
		{"setFeature", "(ILjdk/xml/internal/JdkProperty$State;Z)V", nullptr, $PUBLIC, $virtualMethod(JdkXmlFeatures, setFeature, void, int32_t, $JdkProperty$State*, bool)},
		{"update", "()V", nullptr, $PUBLIC, $virtualMethod(JdkXmlFeatures, update, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.xml.internal.JdkXmlFeatures$XmlFeature", "jdk.xml.internal.JdkXmlFeatures", "XmlFeature", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.xml.internal.JdkXmlFeatures",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.xml.internal.JdkXmlFeatures$XmlFeature"
	};
	$loadClass(JdkXmlFeatures, name, initialize, &classInfo$$, JdkXmlFeatures::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JdkXmlFeatures);
	});
	return class$;
}

$Class* JdkXmlFeatures::class$ = nullptr;

		} // internal
	} // xml
} // jdk