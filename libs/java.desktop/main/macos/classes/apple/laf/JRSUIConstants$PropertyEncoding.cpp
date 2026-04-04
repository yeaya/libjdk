#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIConstants$PropertyEncoding::init$(int64_t mask, int8_t shift) {
	this->mask = mask;
	this->shift = shift;
}

JRSUIConstants$PropertyEncoding::JRSUIConstants$PropertyEncoding() {
}

$Class* JRSUIConstants$PropertyEncoding::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mask", "J", nullptr, $FINAL, $field(JRSUIConstants$PropertyEncoding, mask)},
		{"shift", "B", nullptr, $FINAL, $field(JRSUIConstants$PropertyEncoding, shift)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JB)V", nullptr, 0, $method(JRSUIConstants$PropertyEncoding, init$, void, int64_t, int8_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$PropertyEncoding", "apple.laf.JRSUIConstants", "PropertyEncoding", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"apple.laf.JRSUIConstants$PropertyEncoding",
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
	$loadClass(JRSUIConstants$PropertyEncoding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$PropertyEncoding);
	});
	return class$;
}

$Class* JRSUIConstants$PropertyEncoding::class$ = nullptr;

	} // laf
} // apple