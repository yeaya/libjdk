#include <javax/xml/catalog/CatalogFeatures$Feature.h>

#include <java/lang/Enum.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <jcpp.h>

#undef DEFER
#undef FILES
#undef PREFER
#undef RESOLVE

using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _CatalogFeatures$Feature_FieldInfo_[] = {
	{"FILES", "Ljavax/xml/catalog/CatalogFeatures$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CatalogFeatures$Feature, FILES)},
	{"PREFER", "Ljavax/xml/catalog/CatalogFeatures$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CatalogFeatures$Feature, PREFER)},
	{"DEFER", "Ljavax/xml/catalog/CatalogFeatures$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CatalogFeatures$Feature, DEFER)},
	{"RESOLVE", "Ljavax/xml/catalog/CatalogFeatures$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CatalogFeatures$Feature, RESOLVE)},
	{"$VALUES", "[Ljavax/xml/catalog/CatalogFeatures$Feature;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CatalogFeatures$Feature, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CatalogFeatures$Feature, name$)},
	{"defaultValue", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CatalogFeatures$Feature, defaultValue$)},
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CatalogFeatures$Feature, value)},
	{"hasSystem", "Z", nullptr, $PRIVATE | $FINAL, $field(CatalogFeatures$Feature, hasSystem)},
	{}
};

$MethodInfo _CatalogFeatures$Feature_MethodInfo_[] = {
	{"$values", "()[Ljavax/xml/catalog/CatalogFeatures$Feature;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CatalogFeatures$Feature, $values, $CatalogFeatures$FeatureArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Z)V", "(Ljava/lang/String;Ljava/lang/String;Z)V", $PRIVATE, $method(CatalogFeatures$Feature, init$, void, $String*, int32_t, $String*, $String*, bool)},
	{"defaultValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(CatalogFeatures$Feature, defaultValue, $String*)},
	{"equalsPropertyName", "(Ljava/lang/String;)Z", nullptr, 0, $method(CatalogFeatures$Feature, equalsPropertyName, bool, $String*)},
	{"getPropertyName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(CatalogFeatures$Feature, getPropertyName, $String*)},
	{"getValue", "()Ljava/lang/String;", nullptr, 0, $method(CatalogFeatures$Feature, getValue, $String*)},
	{"hasSystemProperty", "()Z", nullptr, 0, $method(CatalogFeatures$Feature, hasSystemProperty, bool)},
	{"valueOf", "(Ljava/lang/String;)Ljavax/xml/catalog/CatalogFeatures$Feature;", nullptr, $PUBLIC | $STATIC, $staticMethod(CatalogFeatures$Feature, valueOf, CatalogFeatures$Feature*, $String*)},
	{"values", "()[Ljavax/xml/catalog/CatalogFeatures$Feature;", nullptr, $PUBLIC | $STATIC, $staticMethod(CatalogFeatures$Feature, values, $CatalogFeatures$FeatureArray*)},
	{}
};

$InnerClassInfo _CatalogFeatures$Feature_InnerClassesInfo_[] = {
	{"javax.xml.catalog.CatalogFeatures$Feature", "javax.xml.catalog.CatalogFeatures", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CatalogFeatures$Feature_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.xml.catalog.CatalogFeatures$Feature",
	"java.lang.Enum",
	nullptr,
	_CatalogFeatures$Feature_FieldInfo_,
	_CatalogFeatures$Feature_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/xml/catalog/CatalogFeatures$Feature;>;",
	nullptr,
	_CatalogFeatures$Feature_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.CatalogFeatures"
};

$Object* allocate$CatalogFeatures$Feature($Class* clazz) {
	return $of($alloc(CatalogFeatures$Feature));
}

CatalogFeatures$Feature* CatalogFeatures$Feature::FILES = nullptr;
CatalogFeatures$Feature* CatalogFeatures$Feature::PREFER = nullptr;
CatalogFeatures$Feature* CatalogFeatures$Feature::DEFER = nullptr;
CatalogFeatures$Feature* CatalogFeatures$Feature::RESOLVE = nullptr;
$CatalogFeatures$FeatureArray* CatalogFeatures$Feature::$VALUES = nullptr;

$CatalogFeatures$FeatureArray* CatalogFeatures$Feature::$values() {
	$init(CatalogFeatures$Feature);
	return $new($CatalogFeatures$FeatureArray, {
		CatalogFeatures$Feature::FILES,
		CatalogFeatures$Feature::PREFER,
		CatalogFeatures$Feature::DEFER,
		CatalogFeatures$Feature::RESOLVE
	});
}

$CatalogFeatures$FeatureArray* CatalogFeatures$Feature::values() {
	$init(CatalogFeatures$Feature);
	return $cast($CatalogFeatures$FeatureArray, CatalogFeatures$Feature::$VALUES->clone());
}

CatalogFeatures$Feature* CatalogFeatures$Feature::valueOf($String* name) {
	$init(CatalogFeatures$Feature);
	return $cast(CatalogFeatures$Feature, $Enum::valueOf(CatalogFeatures$Feature::class$, name));
}

void CatalogFeatures$Feature::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $String* value, bool hasSystem) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, defaultValue$, value);
	this->hasSystem = hasSystem;
}

bool CatalogFeatures$Feature::equalsPropertyName($String* propertyName) {
	return $nc(this->name$)->equals(propertyName);
}

$String* CatalogFeatures$Feature::getPropertyName() {
	return this->name$;
}

$String* CatalogFeatures$Feature::defaultValue() {
	return this->defaultValue$;
}

$String* CatalogFeatures$Feature::getValue() {
	return this->value;
}

bool CatalogFeatures$Feature::hasSystemProperty() {
	return this->hasSystem;
}

void clinit$CatalogFeatures$Feature($Class* class$) {
	$assignStatic(CatalogFeatures$Feature::FILES, $new(CatalogFeatures$Feature, "FILES"_s, 0, "javax.xml.catalog.files"_s, nullptr, true));
	$assignStatic(CatalogFeatures$Feature::PREFER, $new(CatalogFeatures$Feature, "PREFER"_s, 1, "javax.xml.catalog.prefer"_s, "public"_s, false));
	$assignStatic(CatalogFeatures$Feature::DEFER, $new(CatalogFeatures$Feature, "DEFER"_s, 2, "javax.xml.catalog.defer"_s, "true"_s, true));
	$assignStatic(CatalogFeatures$Feature::RESOLVE, $new(CatalogFeatures$Feature, "RESOLVE"_s, 3, "javax.xml.catalog.resolve"_s, "strict"_s, true));
	$assignStatic(CatalogFeatures$Feature::$VALUES, CatalogFeatures$Feature::$values());
}

CatalogFeatures$Feature::CatalogFeatures$Feature() {
}

$Class* CatalogFeatures$Feature::load$($String* name, bool initialize) {
	$loadClass(CatalogFeatures$Feature, name, initialize, &_CatalogFeatures$Feature_ClassInfo_, clinit$CatalogFeatures$Feature, allocate$CatalogFeatures$Feature);
	return class$;
}

$Class* CatalogFeatures$Feature::class$ = nullptr;

		} // catalog
	} // xml
} // javax