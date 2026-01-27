#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>

#include <java/lang/Enum.h>
#include <jdk/xml/internal/JdkProperty$ImplPropMap.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef ENABLEEXTFUNC
#undef ENABLE_EXTENSION_FUNCTION
#undef JDK_OVERRIDE_PARSER
#undef OVERRIDEPARSER
#undef RESETSYMBOLTABLE
#undef RESET_SYMBOL_TABLE_FEATURE
#undef USE_CATALOG

using $JdkXmlFeatures$XmlFeatureArray = $Array<::jdk::xml::internal::JdkXmlFeatures$XmlFeature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkProperty$ImplPropMap = ::jdk::xml::internal::JdkProperty$ImplPropMap;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;

namespace jdk {
	namespace xml {
		namespace internal {

$FieldInfo _JdkXmlFeatures$XmlFeature_FieldInfo_[] = {
	{"ENABLE_EXTENSION_FUNCTION", "Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkXmlFeatures$XmlFeature, ENABLE_EXTENSION_FUNCTION)},
	{"USE_CATALOG", "Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkXmlFeatures$XmlFeature, USE_CATALOG)},
	{"RESET_SYMBOL_TABLE_FEATURE", "Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkXmlFeatures$XmlFeature, RESET_SYMBOL_TABLE_FEATURE)},
	{"JDK_OVERRIDE_PARSER", "Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkXmlFeatures$XmlFeature, JDK_OVERRIDE_PARSER)},
	{"$VALUES", "[Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JdkXmlFeatures$XmlFeature, $VALUES)},
	{"implMap", "Ljdk/xml/internal/JdkProperty$ImplPropMap;", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, implMap)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, name$)},
	{"nameSP", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, nameSP)},
	{"differ", "Z", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, differ)},
	{"nameOld", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, nameOld)},
	{"nameOldSP", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, nameOldSP)},
	{"valueDefault", "Z", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, valueDefault)},
	{"valueEnforced", "Z", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, valueEnforced)},
	{"hasSystem", "Z", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, hasSystem)},
	{"enforced", "Z", nullptr, $PRIVATE | $FINAL, $field(JdkXmlFeatures$XmlFeature, enforced$)},
	{}
};

$MethodInfo _JdkXmlFeatures$XmlFeature_MethodInfo_[] = {
	{"$values", "()[Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JdkXmlFeatures$XmlFeature, $values, $JdkXmlFeatures$XmlFeatureArray*)},
	{"<init>", "(Ljava/lang/String;ILjdk/xml/internal/JdkProperty$ImplPropMap;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;ZZZZ)V", "(Ljdk/xml/internal/JdkProperty$ImplPropMap;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;ZZZZ)V", $PRIVATE, $method(JdkXmlFeatures$XmlFeature, init$, void, $String*, int32_t, $JdkProperty$ImplPropMap*, $String*, $String*, bool, $String*, $String*, bool, bool, bool, bool)},
	{"apiProperty", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(JdkXmlFeatures$XmlFeature, apiProperty, $String*)},
	{"defaultValue", "()Z", nullptr, $PUBLIC, $method(JdkXmlFeatures$XmlFeature, defaultValue, bool)},
	{"enforced", "()Z", nullptr, 0, $method(JdkXmlFeatures$XmlFeature, enforced, bool)},
	{"enforcedValue", "()Z", nullptr, $PUBLIC, $method(JdkXmlFeatures$XmlFeature, enforcedValue, bool)},
	{"equalsPropertyName", "(Ljava/lang/String;)Z", nullptr, 0, $method(JdkXmlFeatures$XmlFeature, equalsPropertyName, bool, $String*)},
	{"getState", "(Ljava/lang/String;)Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC, $method(JdkXmlFeatures$XmlFeature, getState, $JdkProperty$State*, $String*)},
	{"hasSystemProperty", "()Z", nullptr, 0, $method(JdkXmlFeatures$XmlFeature, hasSystemProperty, bool)},
	{"systemProperty", "()Ljava/lang/String;", nullptr, 0, $method(JdkXmlFeatures$XmlFeature, systemProperty, $String*)},
	{"systemPropertyOld", "()Ljava/lang/String;", nullptr, 0, $method(JdkXmlFeatures$XmlFeature, systemPropertyOld, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlFeatures$XmlFeature, valueOf, JdkXmlFeatures$XmlFeature*, $String*)},
	{"values", "()[Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlFeatures$XmlFeature, values, $JdkXmlFeatures$XmlFeatureArray*)},
	{}
};

$InnerClassInfo _JdkXmlFeatures$XmlFeature_InnerClassesInfo_[] = {
	{"jdk.xml.internal.JdkXmlFeatures$XmlFeature", "jdk.xml.internal.JdkXmlFeatures", "XmlFeature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JdkXmlFeatures$XmlFeature_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.xml.internal.JdkXmlFeatures$XmlFeature",
	"java.lang.Enum",
	nullptr,
	_JdkXmlFeatures$XmlFeature_FieldInfo_,
	_JdkXmlFeatures$XmlFeature_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/xml/internal/JdkXmlFeatures$XmlFeature;>;",
	nullptr,
	_JdkXmlFeatures$XmlFeature_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.xml.internal.JdkXmlFeatures"
};

$Object* allocate$JdkXmlFeatures$XmlFeature($Class* clazz) {
	return $of($alloc(JdkXmlFeatures$XmlFeature));
}

JdkXmlFeatures$XmlFeature* JdkXmlFeatures$XmlFeature::ENABLE_EXTENSION_FUNCTION = nullptr;
JdkXmlFeatures$XmlFeature* JdkXmlFeatures$XmlFeature::USE_CATALOG = nullptr;
JdkXmlFeatures$XmlFeature* JdkXmlFeatures$XmlFeature::RESET_SYMBOL_TABLE_FEATURE = nullptr;
JdkXmlFeatures$XmlFeature* JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER = nullptr;
$JdkXmlFeatures$XmlFeatureArray* JdkXmlFeatures$XmlFeature::$VALUES = nullptr;

$JdkXmlFeatures$XmlFeatureArray* JdkXmlFeatures$XmlFeature::$values() {
	$init(JdkXmlFeatures$XmlFeature);
	return $new($JdkXmlFeatures$XmlFeatureArray, {
		JdkXmlFeatures$XmlFeature::ENABLE_EXTENSION_FUNCTION,
		JdkXmlFeatures$XmlFeature::USE_CATALOG,
		JdkXmlFeatures$XmlFeature::RESET_SYMBOL_TABLE_FEATURE,
		JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER
	});
}

$JdkXmlFeatures$XmlFeatureArray* JdkXmlFeatures$XmlFeature::values() {
	$init(JdkXmlFeatures$XmlFeature);
	return $cast($JdkXmlFeatures$XmlFeatureArray, JdkXmlFeatures$XmlFeature::$VALUES->clone());
}

JdkXmlFeatures$XmlFeature* JdkXmlFeatures$XmlFeature::valueOf($String* name) {
	$init(JdkXmlFeatures$XmlFeature);
	return $cast(JdkXmlFeatures$XmlFeature, $Enum::valueOf(JdkXmlFeatures$XmlFeature::class$, name));
}

void JdkXmlFeatures$XmlFeature::init$($String* $enum$name, int32_t $enum$ordinal, $JdkProperty$ImplPropMap* implMap, $String* name, $String* nameSP, bool differ, $String* nameOld, $String* nameOldSP, bool value, bool valueEnforced, bool hasSystem, bool enforced) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, implMap, implMap);
	if (implMap != nullptr) {
		$set(this, name$, implMap->qName());
		$set(this, nameSP, implMap->systemProperty());
		$set(this, nameOld, implMap->qNameOld());
		$set(this, nameOldSP, implMap->systemPropertyOld());
	} else {
		$set(this, name$, name);
		$set(this, nameSP, nameSP);
		$set(this, nameOld, nameOld);
		$set(this, nameOldSP, nameOldSP);
	}
	this->differ = differ;
	this->valueDefault = value;
	this->valueEnforced = valueEnforced;
	this->hasSystem = hasSystem;
	this->enforced$ = enforced;
}

bool JdkXmlFeatures$XmlFeature::equalsPropertyName($String* propertyName) {
	if (this->implMap != nullptr) {
		return this->implMap->is(propertyName);
	}
	bool var$0 = $nc(this->name$)->equals(propertyName);
	return var$0 || (this->nameOld != nullptr && $nc(this->nameOld)->equals(propertyName));
}

$String* JdkXmlFeatures$XmlFeature::apiProperty() {
	return this->name$;
}

$String* JdkXmlFeatures$XmlFeature::systemProperty() {
	return this->nameSP;
}

$String* JdkXmlFeatures$XmlFeature::systemPropertyOld() {
	return this->nameOldSP;
}

bool JdkXmlFeatures$XmlFeature::defaultValue() {
	return this->valueDefault;
}

bool JdkXmlFeatures$XmlFeature::enforcedValue() {
	return this->valueEnforced;
}

bool JdkXmlFeatures$XmlFeature::hasSystemProperty() {
	return this->hasSystem;
}

bool JdkXmlFeatures$XmlFeature::enforced() {
	return this->enforced$;
}

$JdkProperty$State* JdkXmlFeatures$XmlFeature::getState($String* name) {
	if (this->implMap != nullptr) {
		return this->implMap->getState(name);
	} else if ($nc(this->name$)->equals(name)) {
		$init($JdkProperty$State);
		return $JdkProperty$State::APIPROPERTY;
	}
	return nullptr;
}

void clinit$JdkXmlFeatures$XmlFeature($Class* class$) {
	$init($JdkProperty$ImplPropMap);
	$assignStatic(JdkXmlFeatures$XmlFeature::ENABLE_EXTENSION_FUNCTION, $new(JdkXmlFeatures$XmlFeature, "ENABLE_EXTENSION_FUNCTION"_s, 0, $JdkProperty$ImplPropMap::ENABLEEXTFUNC, nullptr, nullptr, true, nullptr, nullptr, true, false, true, true));
	$assignStatic(JdkXmlFeatures$XmlFeature::USE_CATALOG, $new(JdkXmlFeatures$XmlFeature, "USE_CATALOG"_s, 1, nullptr, "http://javax.xml.XMLConstants/feature/useCatalog"_s, "javax.xml.useCatalog"_s, false, nullptr, nullptr, true, false, true, false));
	$assignStatic(JdkXmlFeatures$XmlFeature::RESET_SYMBOL_TABLE_FEATURE, $new(JdkXmlFeatures$XmlFeature, "RESET_SYMBOL_TABLE_FEATURE"_s, 2, $JdkProperty$ImplPropMap::RESETSYMBOLTABLE, nullptr, nullptr, false, nullptr, nullptr, false, false, true, false));
	$assignStatic(JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER, $new(JdkXmlFeatures$XmlFeature, "JDK_OVERRIDE_PARSER"_s, 3, $JdkProperty$ImplPropMap::OVERRIDEPARSER, nullptr, nullptr, false, nullptr, nullptr, false, false, true, false));
	$assignStatic(JdkXmlFeatures$XmlFeature::$VALUES, JdkXmlFeatures$XmlFeature::$values());
}

JdkXmlFeatures$XmlFeature::JdkXmlFeatures$XmlFeature() {
}

$Class* JdkXmlFeatures$XmlFeature::load$($String* name, bool initialize) {
	$loadClass(JdkXmlFeatures$XmlFeature, name, initialize, &_JdkXmlFeatures$XmlFeature_ClassInfo_, clinit$JdkXmlFeatures$XmlFeature, allocate$JdkXmlFeatures$XmlFeature);
	return class$;
}

$Class* JdkXmlFeatures$XmlFeature::class$ = nullptr;

		} // internal
	} // xml
} // jdk