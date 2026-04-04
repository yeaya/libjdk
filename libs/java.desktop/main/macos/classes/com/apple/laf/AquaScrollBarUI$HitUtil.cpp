#include <com/apple/laf/AquaScrollBarUI$HitUtil.h>
#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants$ScrollBarHit.h>
#include <com/apple/laf/AquaScrollBarUI.h>
#include <jcpp.h>

#undef ARROW_MAX
#undef ARROW_MAX_INSIDE
#undef ARROW_MIN
#undef ARROW_MIN_INSIDE
#undef TRACK_MAX
#undef TRACK_MIN

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $JRSUIConstants$ScrollBarHit = ::apple::laf::JRSUIConstants$ScrollBarHit;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaScrollBarUI$HitUtil::init$() {
}

bool AquaScrollBarUI$HitUtil::isIncrement($JRSUIConstants$Hit* hit) {
	$init($JRSUIConstants$ScrollBarHit);
	return ($equals(hit, $JRSUIConstants$ScrollBarHit::ARROW_MAX)) || ($equals(hit, $JRSUIConstants$ScrollBarHit::ARROW_MAX_INSIDE));
}

bool AquaScrollBarUI$HitUtil::isDecrement($JRSUIConstants$Hit* hit) {
	$init($JRSUIConstants$ScrollBarHit);
	return ($equals(hit, $JRSUIConstants$ScrollBarHit::ARROW_MIN)) || ($equals(hit, $JRSUIConstants$ScrollBarHit::ARROW_MIN_INSIDE));
}

bool AquaScrollBarUI$HitUtil::isArrow($JRSUIConstants$Hit* hit) {
	bool var$0 = isIncrement(hit);
	return var$0 || isDecrement(hit);
}

bool AquaScrollBarUI$HitUtil::isTrack($JRSUIConstants$Hit* hit) {
	$init($JRSUIConstants$ScrollBarHit);
	return ($equals(hit, $JRSUIConstants$ScrollBarHit::TRACK_MAX)) || ($equals(hit, $JRSUIConstants$ScrollBarHit::TRACK_MIN));
}

AquaScrollBarUI$HitUtil::AquaScrollBarUI$HitUtil() {
}

$Class* AquaScrollBarUI$HitUtil::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaScrollBarUI$HitUtil, init$, void)},
		{"isArrow", "(Lapple/laf/JRSUIConstants$Hit;)Z", nullptr, $STATIC, $staticMethod(AquaScrollBarUI$HitUtil, isArrow, bool, $JRSUIConstants$Hit*)},
		{"isDecrement", "(Lapple/laf/JRSUIConstants$Hit;)Z", nullptr, $STATIC, $staticMethod(AquaScrollBarUI$HitUtil, isDecrement, bool, $JRSUIConstants$Hit*)},
		{"isIncrement", "(Lapple/laf/JRSUIConstants$Hit;)Z", nullptr, $STATIC, $staticMethod(AquaScrollBarUI$HitUtil, isIncrement, bool, $JRSUIConstants$Hit*)},
		{"isTrack", "(Lapple/laf/JRSUIConstants$Hit;)Z", nullptr, $STATIC, $staticMethod(AquaScrollBarUI$HitUtil, isTrack, bool, $JRSUIConstants$Hit*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaScrollBarUI$HitUtil", "com.apple.laf.AquaScrollBarUI", "HitUtil", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaScrollBarUI$HitUtil",
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
		"com.apple.laf.AquaScrollBarUI"
	};
	$loadClass(AquaScrollBarUI$HitUtil, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaScrollBarUI$HitUtil);
	});
	return class$;
}

$Class* AquaScrollBarUI$HitUtil::class$ = nullptr;

		} // laf
	} // apple
} // com