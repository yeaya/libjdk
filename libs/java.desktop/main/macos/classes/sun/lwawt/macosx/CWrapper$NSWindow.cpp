#include <sun/lwawt/macosx/CWrapper$NSWindow.h>
#include <sun/lwawt/macosx/CWrapper.h>
#include <jcpp.h>

#undef MAX_WINDOW_LEVELS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CWrapper$NSWindow::init$() {
}

void CWrapper$NSWindow::setLevel(int64_t window, int32_t level) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(setLevel, void, int64_t window, int32_t level);
	$invokeNativeStatic(window, level);
	$finishNativeStatic();
}

void CWrapper$NSWindow::makeKeyAndOrderFront(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(makeKeyAndOrderFront, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::makeKeyWindow(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(makeKeyWindow, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::makeMainWindow(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(makeMainWindow, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

bool CWrapper$NSWindow::canBecomeMainWindow(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(canBecomeMainWindow, bool, int64_t window);
	bool $ret = $invokeNativeStatic(window);
	$finishNativeStatic();
	return $ret;
}

bool CWrapper$NSWindow::isKeyWindow(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(isKeyWindow, bool, int64_t window);
	bool $ret = $invokeNativeStatic(window);
	$finishNativeStatic();
	return $ret;
}

void CWrapper$NSWindow::orderFront(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(orderFront, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::orderFrontRegardless(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(orderFrontRegardless, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::orderWindow(int64_t window, int32_t ordered, int64_t relativeTo) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(orderWindow, void, int64_t window, int32_t ordered, int64_t relativeTo);
	$invokeNativeStatic(window, ordered, relativeTo);
	$finishNativeStatic();
}

void CWrapper$NSWindow::orderOut(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(orderOut, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::close(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(close, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::addChildWindow(int64_t parent, int64_t child, int32_t ordered) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(addChildWindow, void, int64_t parent, int64_t child, int32_t ordered);
	$invokeNativeStatic(parent, child, ordered);
	$finishNativeStatic();
}

void CWrapper$NSWindow::removeChildWindow(int64_t parent, int64_t child) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(removeChildWindow, void, int64_t parent, int64_t child);
	$invokeNativeStatic(parent, child);
	$finishNativeStatic();
}

void CWrapper$NSWindow::setAlphaValue(int64_t window, float alpha) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(setAlphaValue, void, int64_t window, float alpha);
	$invokeNativeStatic(window, alpha);
	$finishNativeStatic();
}

void CWrapper$NSWindow::setOpaque(int64_t window, bool opaque) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(setOpaque, void, int64_t window, bool opaque);
	$invokeNativeStatic(window, opaque);
	$finishNativeStatic();
}

void CWrapper$NSWindow::setBackgroundColor(int64_t window, int32_t color) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(setBackgroundColor, void, int64_t window, int32_t color);
	$invokeNativeStatic(window, color);
	$finishNativeStatic();
}

void CWrapper$NSWindow::miniaturize(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(miniaturize, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::deminiaturize(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(deminiaturize, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

bool CWrapper$NSWindow::isZoomed(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(isZoomed, bool, int64_t window);
	bool $ret = $invokeNativeStatic(window);
	$finishNativeStatic();
	return $ret;
}

void CWrapper$NSWindow::zoom(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(zoom, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::makeFirstResponder(int64_t window, int64_t responder) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(makeFirstResponder, void, int64_t window, int64_t responder);
	$invokeNativeStatic(window, responder);
	$finishNativeStatic();
}

CWrapper$NSWindow::CWrapper$NSWindow() {
}

$Class* CWrapper$NSWindow::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NSWindowAbove", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSWindowAbove)},
		{"NSWindowBelow", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSWindowBelow)},
		{"NSWindowOut", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSWindowOut)},
		{"MAX_WINDOW_LEVELS", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, MAX_WINDOW_LEVELS)},
		{"NSNormalWindowLevel", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSNormalWindowLevel)},
		{"NSFloatingWindowLevel", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSFloatingWindowLevel)},
		{"NSPopUpMenuWindowLevel", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSPopUpMenuWindowLevel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CWrapper$NSWindow, init$, void)},
		{"addChildWindow", "(JJI)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, addChildWindow, void, int64_t, int64_t, int32_t)},
		{"canBecomeMainWindow", "(J)Z", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, canBecomeMainWindow, bool, int64_t)},
		{"close", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, close, void, int64_t)},
		{"deminiaturize", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, deminiaturize, void, int64_t)},
		{"isKeyWindow", "(J)Z", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, isKeyWindow, bool, int64_t)},
		{"isZoomed", "(J)Z", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, isZoomed, bool, int64_t)},
		{"makeFirstResponder", "(JJ)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, makeFirstResponder, void, int64_t, int64_t)},
		{"makeKeyAndOrderFront", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, makeKeyAndOrderFront, void, int64_t)},
		{"makeKeyWindow", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, makeKeyWindow, void, int64_t)},
		{"makeMainWindow", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, makeMainWindow, void, int64_t)},
		{"miniaturize", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, miniaturize, void, int64_t)},
		{"orderFront", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, orderFront, void, int64_t)},
		{"orderFrontRegardless", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, orderFrontRegardless, void, int64_t)},
		{"orderOut", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, orderOut, void, int64_t)},
		{"orderWindow", "(JIJ)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, orderWindow, void, int64_t, int32_t, int64_t)},
		{"removeChildWindow", "(JJ)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, removeChildWindow, void, int64_t, int64_t)},
		{"setAlphaValue", "(JF)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, setAlphaValue, void, int64_t, float)},
		{"setBackgroundColor", "(JI)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, setBackgroundColor, void, int64_t, int32_t)},
		{"setLevel", "(JI)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, setLevel, void, int64_t, int32_t)},
		{"setOpaque", "(JZ)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, setOpaque, void, int64_t, bool)},
		{"zoom", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(CWrapper$NSWindow, zoom, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CWrapper$NSWindow", "sun.lwawt.macosx.CWrapper", "NSWindow", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.macosx.CWrapper$NSWindow",
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
		"sun.lwawt.macosx.CWrapper"
	};
	$loadClass(CWrapper$NSWindow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CWrapper$NSWindow);
	});
	return class$;
}

$Class* CWrapper$NSWindow::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun