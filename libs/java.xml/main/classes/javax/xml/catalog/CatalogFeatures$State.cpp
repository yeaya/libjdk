#include <javax/xml/catalog/CatalogFeatures$State.h>

#include <java/lang/Enum.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef CATALOGATTRIBUTE
#undef DEFAULT
#undef JAXPDOTPROPERTIES
#undef SYSTEMPROPERTY

using $CatalogFeatures$StateArray = $Array<::javax::xml::catalog::CatalogFeatures$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _CatalogFeatures$State_FieldInfo_[] = {
	{"DEFAULT", "Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CatalogFeatures$State, DEFAULT)},
	{"JAXPDOTPROPERTIES", "Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CatalogFeatures$State, JAXPDOTPROPERTIES)},
	{"SYSTEMPROPERTY", "Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CatalogFeatures$State, SYSTEMPROPERTY)},
	{"APIPROPERTY", "Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CatalogFeatures$State, APIPROPERTY)},
	{"CATALOGATTRIBUTE", "Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CatalogFeatures$State, CATALOGATTRIBUTE)},
	{"$VALUES", "[Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CatalogFeatures$State, $VALUES)},
	{"literal", "Ljava/lang/String;", nullptr, $FINAL, $field(CatalogFeatures$State, literal$)},
	{}
};

$MethodInfo _CatalogFeatures$State_MethodInfo_[] = {
	{"$values", "()[Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CatalogFeatures$State, $values, $CatalogFeatures$StateArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(CatalogFeatures$State, init$, void, $String*, int32_t, $String*)},
	{"literal", "()Ljava/lang/String;", nullptr, 0, $method(CatalogFeatures$State, literal, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(CatalogFeatures$State, valueOf, CatalogFeatures$State*, $String*)},
	{"values", "()[Ljavax/xml/catalog/CatalogFeatures$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(CatalogFeatures$State, values, $CatalogFeatures$StateArray*)},
	{}
};

$InnerClassInfo _CatalogFeatures$State_InnerClassesInfo_[] = {
	{"javax.xml.catalog.CatalogFeatures$State", "javax.xml.catalog.CatalogFeatures", "State", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CatalogFeatures$State_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.xml.catalog.CatalogFeatures$State",
	"java.lang.Enum",
	nullptr,
	_CatalogFeatures$State_FieldInfo_,
	_CatalogFeatures$State_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/xml/catalog/CatalogFeatures$State;>;",
	nullptr,
	_CatalogFeatures$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.CatalogFeatures"
};

$Object* allocate$CatalogFeatures$State($Class* clazz) {
	return $of($alloc(CatalogFeatures$State));
}

CatalogFeatures$State* CatalogFeatures$State::DEFAULT = nullptr;
CatalogFeatures$State* CatalogFeatures$State::JAXPDOTPROPERTIES = nullptr;
CatalogFeatures$State* CatalogFeatures$State::SYSTEMPROPERTY = nullptr;
CatalogFeatures$State* CatalogFeatures$State::APIPROPERTY = nullptr;
CatalogFeatures$State* CatalogFeatures$State::CATALOGATTRIBUTE = nullptr;
$CatalogFeatures$StateArray* CatalogFeatures$State::$VALUES = nullptr;

$CatalogFeatures$StateArray* CatalogFeatures$State::$values() {
	$init(CatalogFeatures$State);
	return $new($CatalogFeatures$StateArray, {
		CatalogFeatures$State::DEFAULT,
		CatalogFeatures$State::JAXPDOTPROPERTIES,
		CatalogFeatures$State::SYSTEMPROPERTY,
		CatalogFeatures$State::APIPROPERTY,
		CatalogFeatures$State::CATALOGATTRIBUTE
	});
}

$CatalogFeatures$StateArray* CatalogFeatures$State::values() {
	$init(CatalogFeatures$State);
	return $cast($CatalogFeatures$StateArray, CatalogFeatures$State::$VALUES->clone());
}

CatalogFeatures$State* CatalogFeatures$State::valueOf($String* name) {
	$init(CatalogFeatures$State);
	return $cast(CatalogFeatures$State, $Enum::valueOf(CatalogFeatures$State::class$, name));
}

void CatalogFeatures$State::init$($String* $enum$name, int32_t $enum$ordinal, $String* literal) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, literal$, literal);
}

$String* CatalogFeatures$State::literal() {
	return this->literal$;
}

void clinit$CatalogFeatures$State($Class* class$) {
	$assignStatic(CatalogFeatures$State::DEFAULT, $new(CatalogFeatures$State, "DEFAULT"_s, 0, "default"_s));
	$assignStatic(CatalogFeatures$State::JAXPDOTPROPERTIES, $new(CatalogFeatures$State, "JAXPDOTPROPERTIES"_s, 1, "jaxp.properties"_s));
	$assignStatic(CatalogFeatures$State::SYSTEMPROPERTY, $new(CatalogFeatures$State, "SYSTEMPROPERTY"_s, 2, "system property"_s));
	$assignStatic(CatalogFeatures$State::APIPROPERTY, $new(CatalogFeatures$State, "APIPROPERTY"_s, 3, "property"_s));
	$assignStatic(CatalogFeatures$State::CATALOGATTRIBUTE, $new(CatalogFeatures$State, "CATALOGATTRIBUTE"_s, 4, "catalog attribute"_s));
	$assignStatic(CatalogFeatures$State::$VALUES, CatalogFeatures$State::$values());
}

CatalogFeatures$State::CatalogFeatures$State() {
}

$Class* CatalogFeatures$State::load$($String* name, bool initialize) {
	$loadClass(CatalogFeatures$State, name, initialize, &_CatalogFeatures$State_ClassInfo_, clinit$CatalogFeatures$State, allocate$CatalogFeatures$State);
	return class$;
}

$Class* CatalogFeatures$State::class$ = nullptr;

		} // catalog
	} // xml
} // javax