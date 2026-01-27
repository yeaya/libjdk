#include <jdk/xml/internal/JdkProperty$State.h>

#include <java/lang/Enum.h>
#include <jdk/xml/internal/JdkProperty.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef DEFAULT
#undef FSP
#undef JAXPDOTPROPERTIES
#undef LEGACY_APIPROPERTY
#undef LEGACY_SYSTEMPROPERTY
#undef SYSTEMPROPERTY

using $JdkProperty$StateArray = $Array<::jdk::xml::internal::JdkProperty$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace xml {
		namespace internal {

$FieldInfo _JdkProperty$State_FieldInfo_[] = {
	{"DEFAULT", "Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$State, DEFAULT)},
	{"FSP", "Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$State, FSP)},
	{"JAXPDOTPROPERTIES", "Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$State, JAXPDOTPROPERTIES)},
	{"LEGACY_SYSTEMPROPERTY", "Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$State, LEGACY_SYSTEMPROPERTY)},
	{"SYSTEMPROPERTY", "Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$State, SYSTEMPROPERTY)},
	{"LEGACY_APIPROPERTY", "Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$State, LEGACY_APIPROPERTY)},
	{"APIPROPERTY", "Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JdkProperty$State, APIPROPERTY)},
	{"$VALUES", "[Ljdk/xml/internal/JdkProperty$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JdkProperty$State, $VALUES)},
	{"literal", "Ljava/lang/String;", nullptr, $FINAL, $field(JdkProperty$State, literal$)},
	{}
};

$MethodInfo _JdkProperty$State_MethodInfo_[] = {
	{"$values", "()[Ljdk/xml/internal/JdkProperty$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JdkProperty$State, $values, $JdkProperty$StateArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(JdkProperty$State, init$, void, $String*, int32_t, $String*)},
	{"literal", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(JdkProperty$State, literal, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkProperty$State, valueOf, JdkProperty$State*, $String*)},
	{"values", "()[Ljdk/xml/internal/JdkProperty$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkProperty$State, values, $JdkProperty$StateArray*)},
	{}
};

$InnerClassInfo _JdkProperty$State_InnerClassesInfo_[] = {
	{"jdk.xml.internal.JdkProperty$State", "jdk.xml.internal.JdkProperty", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JdkProperty$State_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.xml.internal.JdkProperty$State",
	"java.lang.Enum",
	nullptr,
	_JdkProperty$State_FieldInfo_,
	_JdkProperty$State_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/xml/internal/JdkProperty$State;>;",
	nullptr,
	_JdkProperty$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.xml.internal.JdkProperty"
};

$Object* allocate$JdkProperty$State($Class* clazz) {
	return $of($alloc(JdkProperty$State));
}

JdkProperty$State* JdkProperty$State::DEFAULT = nullptr;
JdkProperty$State* JdkProperty$State::FSP = nullptr;
JdkProperty$State* JdkProperty$State::JAXPDOTPROPERTIES = nullptr;
JdkProperty$State* JdkProperty$State::LEGACY_SYSTEMPROPERTY = nullptr;
JdkProperty$State* JdkProperty$State::SYSTEMPROPERTY = nullptr;
JdkProperty$State* JdkProperty$State::LEGACY_APIPROPERTY = nullptr;
JdkProperty$State* JdkProperty$State::APIPROPERTY = nullptr;
$JdkProperty$StateArray* JdkProperty$State::$VALUES = nullptr;

$JdkProperty$StateArray* JdkProperty$State::$values() {
	$init(JdkProperty$State);
	return $new($JdkProperty$StateArray, {
		JdkProperty$State::DEFAULT,
		JdkProperty$State::FSP,
		JdkProperty$State::JAXPDOTPROPERTIES,
		JdkProperty$State::LEGACY_SYSTEMPROPERTY,
		JdkProperty$State::SYSTEMPROPERTY,
		JdkProperty$State::LEGACY_APIPROPERTY,
		JdkProperty$State::APIPROPERTY
	});
}

$JdkProperty$StateArray* JdkProperty$State::values() {
	$init(JdkProperty$State);
	return $cast($JdkProperty$StateArray, JdkProperty$State::$VALUES->clone());
}

JdkProperty$State* JdkProperty$State::valueOf($String* name) {
	$init(JdkProperty$State);
	return $cast(JdkProperty$State, $Enum::valueOf(JdkProperty$State::class$, name));
}

void JdkProperty$State::init$($String* $enum$name, int32_t $enum$ordinal, $String* literal) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, literal$, literal);
}

$String* JdkProperty$State::literal() {
	return this->literal$;
}

void clinit$JdkProperty$State($Class* class$) {
	$assignStatic(JdkProperty$State::DEFAULT, $new(JdkProperty$State, "DEFAULT"_s, 0, "default"_s));
	$assignStatic(JdkProperty$State::FSP, $new(JdkProperty$State, "FSP"_s, 1, "FEATURE_SECURE_PROCESSING"_s));
	$assignStatic(JdkProperty$State::JAXPDOTPROPERTIES, $new(JdkProperty$State, "JAXPDOTPROPERTIES"_s, 2, "jaxp.properties"_s));
	$assignStatic(JdkProperty$State::LEGACY_SYSTEMPROPERTY, $new(JdkProperty$State, "LEGACY_SYSTEMPROPERTY"_s, 3, "legacy system property"_s));
	$assignStatic(JdkProperty$State::SYSTEMPROPERTY, $new(JdkProperty$State, "SYSTEMPROPERTY"_s, 4, "system property"_s));
	$assignStatic(JdkProperty$State::LEGACY_APIPROPERTY, $new(JdkProperty$State, "LEGACY_APIPROPERTY"_s, 5, "legacy property"_s));
	$assignStatic(JdkProperty$State::APIPROPERTY, $new(JdkProperty$State, "APIPROPERTY"_s, 6, "property"_s));
	$assignStatic(JdkProperty$State::$VALUES, JdkProperty$State::$values());
}

JdkProperty$State::JdkProperty$State() {
}

$Class* JdkProperty$State::load$($String* name, bool initialize) {
	$loadClass(JdkProperty$State, name, initialize, &_JdkProperty$State_ClassInfo_, clinit$JdkProperty$State, allocate$JdkProperty$State);
	return class$;
}

$Class* JdkProperty$State::class$ = nullptr;

		} // internal
	} // xml
} // jdk