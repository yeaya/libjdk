#include <com/sun/security/sasl/util/PolicyUtils.h>
#include <java/util/Map.h>
#include <javax/security/sasl/Sasl.h>
#include <jcpp.h>

#undef FORWARD_SECRECY
#undef NOACTIVE
#undef NOANONYMOUS
#undef NODICTIONARY
#undef NOPLAINTEXT
#undef PASS_CREDENTIALS
#undef POLICY_FORWARD_SECRECY
#undef POLICY_NOACTIVE
#undef POLICY_NOANONYMOUS
#undef POLICY_NODICTIONARY
#undef POLICY_NOPLAINTEXT
#undef POLICY_PASS_CREDENTIALS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Sasl = ::javax::security::sasl::Sasl;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace util {

void PolicyUtils::init$() {
}

bool PolicyUtils::checkPolicy(int32_t flags, $Map* props) {
	$useLocalObjectStack();
	if (props == nullptr) {
		return true;
	}
	$init($Sasl);
	if ("true"_s->equalsIgnoreCase($$cast($String, $nc(props)->get($Sasl::POLICY_NOPLAINTEXT))) && (flags & PolicyUtils::NOPLAINTEXT) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($$cast($String, props->get($Sasl::POLICY_NOACTIVE))) && (flags & PolicyUtils::NOACTIVE) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($$cast($String, props->get($Sasl::POLICY_NODICTIONARY))) && (flags & PolicyUtils::NODICTIONARY) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($$cast($String, props->get($Sasl::POLICY_NOANONYMOUS))) && (flags & PolicyUtils::NOANONYMOUS) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($$cast($String, props->get($Sasl::POLICY_FORWARD_SECRECY))) && (flags & PolicyUtils::FORWARD_SECRECY) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($$cast($String, props->get($Sasl::POLICY_PASS_CREDENTIALS))) && (flags & PolicyUtils::PASS_CREDENTIALS) == 0) {
		return false;
	}
	return true;
}

$StringArray* PolicyUtils::filterMechs($StringArray* mechs, $ints* policies, $Map* props) {
	$useLocalObjectStack();
	if (props == nullptr) {
		return $cast($StringArray, $nc(mechs)->clone());
	}
	$var($booleans, passed, $new($booleans, $nc(mechs)->length));
	int32_t count = 0;
	for (int32_t i = 0; i < mechs->length; ++i) {
		if (passed->set(i, checkPolicy($nc(policies)->get(i), props))) {
			++count;
		}
	}
	$var($StringArray, answer, $new($StringArray, count));
	for (int32_t i = 0, j = 0; i < mechs->length; ++i) {
		if (passed->get(i)) {
			answer->set(j++, mechs->get(i));
		}
	}
	return answer;
}

PolicyUtils::PolicyUtils() {
}

$Class* PolicyUtils::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NOPLAINTEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, NOPLAINTEXT)},
		{"NOACTIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, NOACTIVE)},
		{"NODICTIONARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, NODICTIONARY)},
		{"FORWARD_SECRECY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, FORWARD_SECRECY)},
		{"NOANONYMOUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, NOANONYMOUS)},
		{"PASS_CREDENTIALS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, PASS_CREDENTIALS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PolicyUtils, init$, void)},
		{"checkPolicy", "(ILjava/util/Map;)Z", "(ILjava/util/Map<Ljava/lang/String;*>;)Z", $PUBLIC | $STATIC, $staticMethod(PolicyUtils, checkPolicy, bool, int32_t, $Map*)},
		{"filterMechs", "([Ljava/lang/String;[ILjava/util/Map;)[Ljava/lang/String;", "([Ljava/lang/String;[ILjava/util/Map<Ljava/lang/String;*>;)[Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(PolicyUtils, filterMechs, $StringArray*, $StringArray*, $ints*, $Map*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.security.sasl.util.PolicyUtils",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PolicyUtils, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyUtils);
	});
	return class$;
}

$Class* PolicyUtils::class$ = nullptr;

				} // util
			} // sasl
		} // security
	} // sun
} // com