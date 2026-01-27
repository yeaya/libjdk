#include <com/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State.h>

#include <com/sun/org/apache/xalan/internal/utils/FeaturePropertyBase.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef DEFAULT
#undef FSP
#undef JAXPDOTPROPERTIES
#undef SYSTEMPROPERTY

using $FeaturePropertyBase$StateArray = $Array<::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

$FieldInfo _FeaturePropertyBase$State_FieldInfo_[] = {
	{"DEFAULT", "Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FeaturePropertyBase$State, DEFAULT)},
	{"FSP", "Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FeaturePropertyBase$State, FSP)},
	{"JAXPDOTPROPERTIES", "Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FeaturePropertyBase$State, JAXPDOTPROPERTIES)},
	{"SYSTEMPROPERTY", "Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FeaturePropertyBase$State, SYSTEMPROPERTY)},
	{"APIPROPERTY", "Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FeaturePropertyBase$State, APIPROPERTY)},
	{"$VALUES", "[Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FeaturePropertyBase$State, $VALUES)},
	{}
};

$MethodInfo _FeaturePropertyBase$State_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FeaturePropertyBase$State, $values, $FeaturePropertyBase$StateArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(FeaturePropertyBase$State, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(FeaturePropertyBase$State, valueOf, FeaturePropertyBase$State*, $String*)},
	{"values", "()[Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(FeaturePropertyBase$State, values, $FeaturePropertyBase$StateArray*)},
	{}
};

$InnerClassInfo _FeaturePropertyBase$State_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase$State", "com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FeaturePropertyBase$State_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase$State",
	"java.lang.Enum",
	nullptr,
	_FeaturePropertyBase$State_FieldInfo_,
	_FeaturePropertyBase$State_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/org/apache/xalan/internal/utils/FeaturePropertyBase$State;>;",
	nullptr,
	_FeaturePropertyBase$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase"
};

$Object* allocate$FeaturePropertyBase$State($Class* clazz) {
	return $of($alloc(FeaturePropertyBase$State));
}

FeaturePropertyBase$State* FeaturePropertyBase$State::DEFAULT = nullptr;
FeaturePropertyBase$State* FeaturePropertyBase$State::FSP = nullptr;
FeaturePropertyBase$State* FeaturePropertyBase$State::JAXPDOTPROPERTIES = nullptr;
FeaturePropertyBase$State* FeaturePropertyBase$State::SYSTEMPROPERTY = nullptr;
FeaturePropertyBase$State* FeaturePropertyBase$State::APIPROPERTY = nullptr;
$FeaturePropertyBase$StateArray* FeaturePropertyBase$State::$VALUES = nullptr;

$FeaturePropertyBase$StateArray* FeaturePropertyBase$State::$values() {
	$init(FeaturePropertyBase$State);
	return $new($FeaturePropertyBase$StateArray, {
		FeaturePropertyBase$State::DEFAULT,
		FeaturePropertyBase$State::FSP,
		FeaturePropertyBase$State::JAXPDOTPROPERTIES,
		FeaturePropertyBase$State::SYSTEMPROPERTY,
		FeaturePropertyBase$State::APIPROPERTY
	});
}

$FeaturePropertyBase$StateArray* FeaturePropertyBase$State::values() {
	$init(FeaturePropertyBase$State);
	return $cast($FeaturePropertyBase$StateArray, FeaturePropertyBase$State::$VALUES->clone());
}

FeaturePropertyBase$State* FeaturePropertyBase$State::valueOf($String* name) {
	$init(FeaturePropertyBase$State);
	return $cast(FeaturePropertyBase$State, $Enum::valueOf(FeaturePropertyBase$State::class$, name));
}

void FeaturePropertyBase$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FeaturePropertyBase$State($Class* class$) {
	$assignStatic(FeaturePropertyBase$State::DEFAULT, $new(FeaturePropertyBase$State, "DEFAULT"_s, 0));
	$assignStatic(FeaturePropertyBase$State::FSP, $new(FeaturePropertyBase$State, "FSP"_s, 1));
	$assignStatic(FeaturePropertyBase$State::JAXPDOTPROPERTIES, $new(FeaturePropertyBase$State, "JAXPDOTPROPERTIES"_s, 2));
	$assignStatic(FeaturePropertyBase$State::SYSTEMPROPERTY, $new(FeaturePropertyBase$State, "SYSTEMPROPERTY"_s, 3));
	$assignStatic(FeaturePropertyBase$State::APIPROPERTY, $new(FeaturePropertyBase$State, "APIPROPERTY"_s, 4));
	$assignStatic(FeaturePropertyBase$State::$VALUES, FeaturePropertyBase$State::$values());
}

FeaturePropertyBase$State::FeaturePropertyBase$State() {
}

$Class* FeaturePropertyBase$State::load$($String* name, bool initialize) {
	$loadClass(FeaturePropertyBase$State, name, initialize, &_FeaturePropertyBase$State_ClassInfo_, clinit$FeaturePropertyBase$State, allocate$FeaturePropertyBase$State);
	return class$;
}

$Class* FeaturePropertyBase$State::class$ = nullptr;

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com