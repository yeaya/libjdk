#include <apple/laf/JRSUIUtils$ScrollBar.h>
#include <apple/laf/JRSUIConstants$ScrollBarPart.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIConstants$ScrollBarPart = ::apple::laf::JRSUIConstants$ScrollBarPart;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

void JRSUIUtils$ScrollBar::init$() {
}

bool JRSUIUtils$ScrollBar::shouldUseScrollToClick() {
	$init(JRSUIUtils$ScrollBar);
	$prepareNativeStatic(shouldUseScrollToClick, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool JRSUIUtils$ScrollBar::useScrollToClick() {
	return shouldUseScrollToClick();
}

void JRSUIUtils$ScrollBar::getPartBounds($doubles* rect, $JRSUIControl* control, int32_t x, int32_t y, int32_t w, int32_t h, $JRSUIConstants$ScrollBarPart* part) {
	$nc(control)->getPartBounds(rect, x, y, w, h, $nc(part)->ordinal);
}

double JRSUIUtils$ScrollBar::getNativeOffsetChange($JRSUIControl* control, int32_t x, int32_t y, int32_t w, int32_t h, int32_t offset, int32_t visibleAmount, int32_t extent) {
	return $nc(control)->getScrollBarOffsetChange(x, y, w, h, offset, visibleAmount, extent);
}

JRSUIUtils$ScrollBar::JRSUIUtils$ScrollBar() {
}

$Class* JRSUIUtils$ScrollBar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JRSUIUtils$ScrollBar, init$, void)},
		{"getNativeOffsetChange", "(Lapple/laf/JRSUIControl;IIIIIII)D", nullptr, $PUBLIC | $STATIC, $staticMethod(JRSUIUtils$ScrollBar, getNativeOffsetChange, double, $JRSUIControl*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"getPartBounds", "([DLapple/laf/JRSUIControl;IIIILapple/laf/JRSUIConstants$ScrollBarPart;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JRSUIUtils$ScrollBar, getPartBounds, void, $doubles*, $JRSUIControl*, int32_t, int32_t, int32_t, int32_t, $JRSUIConstants$ScrollBarPart*)},
		{"shouldUseScrollToClick", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(JRSUIUtils$ScrollBar, shouldUseScrollToClick, bool)},
		{"useScrollToClick", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(JRSUIUtils$ScrollBar, useScrollToClick, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.laf.JRSUIUtils$ScrollBar", "apple.laf.JRSUIUtils", "ScrollBar", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIUtils$ScrollBar",
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
	$loadClass(JRSUIUtils$ScrollBar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIUtils$ScrollBar);
	});
	return class$;
}

$Class* JRSUIUtils$ScrollBar::class$ = nullptr;

	} // laf
} // apple