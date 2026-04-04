#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef DEFAULT
#undef FSP
#undef JAXPDOTPROPERTIES
#undef SYSTEMPROPERTY

using $XMLSecurityPropertyManager$StateArray = $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

XMLSecurityPropertyManager$State* XMLSecurityPropertyManager$State::DEFAULT = nullptr;
XMLSecurityPropertyManager$State* XMLSecurityPropertyManager$State::FSP = nullptr;
XMLSecurityPropertyManager$State* XMLSecurityPropertyManager$State::JAXPDOTPROPERTIES = nullptr;
XMLSecurityPropertyManager$State* XMLSecurityPropertyManager$State::SYSTEMPROPERTY = nullptr;
XMLSecurityPropertyManager$State* XMLSecurityPropertyManager$State::APIPROPERTY = nullptr;
$XMLSecurityPropertyManager$StateArray* XMLSecurityPropertyManager$State::$VALUES = nullptr;

$XMLSecurityPropertyManager$StateArray* XMLSecurityPropertyManager$State::$values() {
	$init(XMLSecurityPropertyManager$State);
	return $new($XMLSecurityPropertyManager$StateArray, {
		XMLSecurityPropertyManager$State::DEFAULT,
		XMLSecurityPropertyManager$State::FSP,
		XMLSecurityPropertyManager$State::JAXPDOTPROPERTIES,
		XMLSecurityPropertyManager$State::SYSTEMPROPERTY,
		XMLSecurityPropertyManager$State::APIPROPERTY
	});
}

$XMLSecurityPropertyManager$StateArray* XMLSecurityPropertyManager$State::values() {
	$init(XMLSecurityPropertyManager$State);
	return $cast($XMLSecurityPropertyManager$StateArray, XMLSecurityPropertyManager$State::$VALUES->clone());
}

XMLSecurityPropertyManager$State* XMLSecurityPropertyManager$State::valueOf($String* name) {
	$init(XMLSecurityPropertyManager$State);
	return $cast(XMLSecurityPropertyManager$State, $Enum::valueOf(XMLSecurityPropertyManager$State::class$, name));
}

void XMLSecurityPropertyManager$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void XMLSecurityPropertyManager$State::clinit$($Class* clazz) {
	$assignStatic(XMLSecurityPropertyManager$State::DEFAULT, $new(XMLSecurityPropertyManager$State, "DEFAULT"_s, 0));
	$assignStatic(XMLSecurityPropertyManager$State::FSP, $new(XMLSecurityPropertyManager$State, "FSP"_s, 1));
	$assignStatic(XMLSecurityPropertyManager$State::JAXPDOTPROPERTIES, $new(XMLSecurityPropertyManager$State, "JAXPDOTPROPERTIES"_s, 2));
	$assignStatic(XMLSecurityPropertyManager$State::SYSTEMPROPERTY, $new(XMLSecurityPropertyManager$State, "SYSTEMPROPERTY"_s, 3));
	$assignStatic(XMLSecurityPropertyManager$State::APIPROPERTY, $new(XMLSecurityPropertyManager$State, "APIPROPERTY"_s, 4));
	$assignStatic(XMLSecurityPropertyManager$State::$VALUES, XMLSecurityPropertyManager$State::$values());
}

XMLSecurityPropertyManager$State::XMLSecurityPropertyManager$State() {
}

$Class* XMLSecurityPropertyManager$State::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityPropertyManager$State, DEFAULT)},
		{"FSP", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityPropertyManager$State, FSP)},
		{"JAXPDOTPROPERTIES", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityPropertyManager$State, JAXPDOTPROPERTIES)},
		{"SYSTEMPROPERTY", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityPropertyManager$State, SYSTEMPROPERTY)},
		{"APIPROPERTY", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityPropertyManager$State, APIPROPERTY)},
		{"$VALUES", "[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(XMLSecurityPropertyManager$State, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XMLSecurityPropertyManager$State, $values, $XMLSecurityPropertyManager$StateArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(XMLSecurityPropertyManager$State, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLSecurityPropertyManager$State, valueOf, XMLSecurityPropertyManager$State*, $String*)},
		{"values", "()[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLSecurityPropertyManager$State, values, $XMLSecurityPropertyManager$StateArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager$State", "com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager$State",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager"
	};
	$loadClass(XMLSecurityPropertyManager$State, name, initialize, &classInfo$$, XMLSecurityPropertyManager$State::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(XMLSecurityPropertyManager$State));
	});
	return class$;
}

$Class* XMLSecurityPropertyManager$State::class$ = nullptr;

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com