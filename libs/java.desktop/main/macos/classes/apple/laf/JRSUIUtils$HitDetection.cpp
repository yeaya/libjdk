#include <apple/laf/JRSUIUtils$HitDetection.h>
#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIUtils$HitDetection::init$() {
}

$JRSUIConstants$Hit* JRSUIUtils$HitDetection::getHitForPoint($JRSUIControl* control, int32_t x, int32_t y, int32_t w, int32_t h, int32_t hitX, int32_t hitY) {
	return $nc(control)->getHitForPoint(x, y, w, h, hitX, hitY);
}

JRSUIUtils$HitDetection::JRSUIUtils$HitDetection() {
}

$Class* JRSUIUtils$HitDetection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRSUIUtils$HitDetection, init$, void)},
		{"getHitForPoint", "(Lapple/laf/JRSUIControl;IIIIII)Lapple/laf/JRSUIConstants$Hit;", nullptr, $PUBLIC | $STATIC, $staticMethod(JRSUIUtils$HitDetection, getHitForPoint, $JRSUIConstants$Hit*, $JRSUIControl*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIUtils$HitDetection", "apple.laf.JRSUIUtils", "HitDetection", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIUtils$HitDetection",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"apple.laf.JRSUIUtils"
	};
	$loadClass(JRSUIUtils$HitDetection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIUtils$HitDetection);
	});
	return class$;
}

$Class* JRSUIUtils$HitDetection::class$ = nullptr;

	} // laf
} // apple