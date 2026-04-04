#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef HIT
#undef NONE
#undef UNKNOWN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

JRSUIConstants$Hit* JRSUIConstants$Hit::UNKNOWN = nullptr;
JRSUIConstants$Hit* JRSUIConstants$Hit::NONE = nullptr;
JRSUIConstants$Hit* JRSUIConstants$Hit::HIT = nullptr;

void JRSUIConstants$Hit::init$(int32_t hit) {
	this->hit = hit;
}

bool JRSUIConstants$Hit::isHit() {
	return this->hit > 0;
}

$String* JRSUIConstants$Hit::getConstantName(JRSUIConstants$Hit* hit) {
	if (hit == JRSUIConstants$Hit::UNKNOWN) {
		return "UNKNOWN"_s;
	} else if (hit == JRSUIConstants$Hit::NONE) {
		return "NONE"_s;
	} else if (hit == JRSUIConstants$Hit::HIT) {
		return "HIT"_s;
	}
	return $of(this)->getClass()->getSimpleName();
}

$String* JRSUIConstants$Hit::toString() {
	return getConstantName(this);
}

void JRSUIConstants$Hit::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$Hit::UNKNOWN, $new(JRSUIConstants$Hit, JRSUIConstants$Hit::_unknown));
	$assignStatic(JRSUIConstants$Hit::NONE, $new(JRSUIConstants$Hit, JRSUIConstants$Hit::_none));
	$assignStatic(JRSUIConstants$Hit::HIT, $new(JRSUIConstants$Hit, JRSUIConstants$Hit::_hit));
}

JRSUIConstants$Hit::JRSUIConstants$Hit() {
}

$Class* JRSUIConstants$Hit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_unknown", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Hit, _unknown)},
		{"UNKNOWN", "Lapple/laf/JRSUIConstants$Hit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Hit, UNKNOWN)},
		{"_none", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Hit, _none)},
		{"NONE", "Lapple/laf/JRSUIConstants$Hit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Hit, NONE)},
		{"_hit", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Hit, _hit)},
		{"HIT", "Lapple/laf/JRSUIConstants$Hit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Hit, HIT)},
		{"hit", "I", nullptr, $FINAL, $field(JRSUIConstants$Hit, hit)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(JRSUIConstants$Hit, init$, void, int32_t)},
		{"getConstantName", "(Lapple/laf/JRSUIConstants$Hit;)Ljava/lang/String;", nullptr, $PRIVATE, $method(JRSUIConstants$Hit, getConstantName, $String*, JRSUIConstants$Hit*)},
		{"isHit", "()Z", nullptr, $PUBLIC, $virtualMethod(JRSUIConstants$Hit, isHit, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JRSUIConstants$Hit, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$Hit", "apple.laf.JRSUIConstants", "Hit", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$Hit",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"apple.laf.JRSUIConstants"
	};
	$loadClass(JRSUIConstants$Hit, name, initialize, &classInfo$$, JRSUIConstants$Hit::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$Hit);
	});
	return class$;
}

$Class* JRSUIConstants$Hit::class$ = nullptr;

	} // laf
} // apple