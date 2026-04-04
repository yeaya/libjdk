#include <apple/laf/JRSUIConstants$ScrollBarHit.h>
#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef ARROW_MAX
#undef ARROW_MAX_INSIDE
#undef ARROW_MIN
#undef ARROW_MIN_INSIDE
#undef THUMB
#undef TRACK_MAX
#undef TRACK_MIN

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::THUMB = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::TRACK_MIN = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::TRACK_MAX = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::ARROW_MIN = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::ARROW_MAX = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::ARROW_MAX_INSIDE = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::ARROW_MIN_INSIDE = nullptr;

void JRSUIConstants$ScrollBarHit::init$(int32_t hit) {
	$JRSUIConstants$Hit::init$(hit);
}

void JRSUIConstants$ScrollBarHit::clinit$($Class* clazz) {
	$assignStatic(JRSUIConstants$ScrollBarHit::THUMB, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_thumb));
	$assignStatic(JRSUIConstants$ScrollBarHit::TRACK_MIN, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_trackMin));
	$assignStatic(JRSUIConstants$ScrollBarHit::TRACK_MAX, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_trackMax));
	$assignStatic(JRSUIConstants$ScrollBarHit::ARROW_MIN, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_arrowMin));
	$assignStatic(JRSUIConstants$ScrollBarHit::ARROW_MAX, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_arrowMax));
	$assignStatic(JRSUIConstants$ScrollBarHit::ARROW_MAX_INSIDE, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_arrowMaxInside));
	$assignStatic(JRSUIConstants$ScrollBarHit::ARROW_MIN_INSIDE, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_arrowMinInside));
}

JRSUIConstants$ScrollBarHit::JRSUIConstants$ScrollBarHit() {
}

$Class* JRSUIConstants$ScrollBarHit::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_thumb", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _thumb)},
		{"THUMB", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, THUMB)},
		{"_trackMin", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _trackMin)},
		{"TRACK_MIN", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, TRACK_MIN)},
		{"_trackMax", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _trackMax)},
		{"TRACK_MAX", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, TRACK_MAX)},
		{"_arrowMin", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _arrowMin)},
		{"ARROW_MIN", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, ARROW_MIN)},
		{"_arrowMax", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _arrowMax)},
		{"ARROW_MAX", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, ARROW_MAX)},
		{"_arrowMaxInside", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _arrowMaxInside)},
		{"ARROW_MAX_INSIDE", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, ARROW_MAX_INSIDE)},
		{"_arrowMinInside", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _arrowMinInside)},
		{"ARROW_MIN_INSIDE", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, ARROW_MIN_INSIDE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(JRSUIConstants$ScrollBarHit, init$, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIConstants$ScrollBarHit", "apple.laf.JRSUIConstants", "ScrollBarHit", $PUBLIC | $STATIC},
		{"apple.laf.JRSUIConstants$Hit", "apple.laf.JRSUIConstants", "Hit", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIConstants$ScrollBarHit",
		"apple.laf.JRSUIConstants$Hit",
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
	$loadClass(JRSUIConstants$ScrollBarHit, name, initialize, &classInfo$$, JRSUIConstants$ScrollBarHit::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIConstants$ScrollBarHit);
	});
	return class$;
}

$Class* JRSUIConstants$ScrollBarHit::class$ = nullptr;

	} // laf
} // apple