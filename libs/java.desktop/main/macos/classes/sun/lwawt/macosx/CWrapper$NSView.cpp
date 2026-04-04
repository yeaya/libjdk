#include <sun/lwawt/macosx/CWrapper$NSView.h>
#include <sun/lwawt/macosx/CWrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CWrapper$NSView::init$() {
}

void CWrapper$NSView::addSubview(int64_t view, int64_t subview) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(addSubview, void, int64_t view, int64_t subview);
	$invokeNativeStatic(view, subview);
	$finishNativeStatic();
}

void CWrapper$NSView::removeFromSuperview(int64_t view) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(removeFromSuperview, void, int64_t view);
	$invokeNativeStatic(view);
	$finishNativeStatic();
}

void CWrapper$NSView::setFrame(int64_t view, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(setFrame, void, int64_t view, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNativeStatic(view, x, y, w, h);
	$finishNativeStatic();
}

int64_t CWrapper$NSView::window(int64_t view) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(window, int64_t, int64_t view);
	int64_t $ret = $invokeNativeStatic(view);
	$finishNativeStatic();
	return $ret;
}

void CWrapper$NSView::setHidden(int64_t view, bool hidden) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(setHidden, void, int64_t view, bool hidden);
	$invokeNativeStatic(view, hidden);
	$finishNativeStatic();
}

void CWrapper$NSView::setToolTip(int64_t view, $String* msg) {
	$init(CWrapper$NSView);
	$prepareNativeStatic(setToolTip, void, int64_t view, $String* msg);
	$invokeNativeStatic(view, msg);
	$finishNativeStatic();
}

CWrapper$NSView::CWrapper$NSView() {
}

$Class* CWrapper$NSView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CWrapper$NSView, init$, void)},
		{"addSubview", "(JJ)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSView, addSubview, void, int64_t, int64_t)},
		{"removeFromSuperview", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSView, removeFromSuperview, void, int64_t)},
		{"setFrame", "(JIIII)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSView, setFrame, void, int64_t, int32_t, int32_t, int32_t, int32_t)},
		{"setHidden", "(JZ)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSView, setHidden, void, int64_t, bool)},
		{"setToolTip", "(JLjava/lang/String;)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSView, setToolTip, void, int64_t, $String*)},
		{"window", "(J)J", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSView, window, int64_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CWrapper$NSView", "sun.lwawt.macosx.CWrapper", "NSView", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.macosx.CWrapper$NSView",
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
		"sun.lwawt.macosx.CWrapper"
	};
	$loadClass(CWrapper$NSView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CWrapper$NSView);
	});
	return class$;
}

$Class* CWrapper$NSView::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun