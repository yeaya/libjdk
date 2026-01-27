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

$FieldInfo _CWrapper$NSWindow_FieldInfo_[] = {
	{"NSWindowAbove", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSWindowAbove)},
	{"NSWindowBelow", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSWindowBelow)},
	{"NSWindowOut", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSWindowOut)},
	{"MAX_WINDOW_LEVELS", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, MAX_WINDOW_LEVELS)},
	{"NSNormalWindowLevel", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSNormalWindowLevel)},
	{"NSFloatingWindowLevel", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSFloatingWindowLevel)},
	{"NSPopUpMenuWindowLevel", "I", nullptr, $STATIC | $FINAL, $constField(CWrapper$NSWindow, NSPopUpMenuWindowLevel)},
	{}
};

$MethodInfo _CWrapper$NSWindow_MethodInfo_[] = {
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

#define _METHOD_INDEX_addChildWindow 1
#define _METHOD_INDEX_canBecomeMainWindow 2
#define _METHOD_INDEX_close 3
#define _METHOD_INDEX_deminiaturize 4
#define _METHOD_INDEX_isKeyWindow 5
#define _METHOD_INDEX_isZoomed 6
#define _METHOD_INDEX_makeFirstResponder 7
#define _METHOD_INDEX_makeKeyAndOrderFront 8
#define _METHOD_INDEX_makeKeyWindow 9
#define _METHOD_INDEX_makeMainWindow 10
#define _METHOD_INDEX_miniaturize 11
#define _METHOD_INDEX_orderFront 12
#define _METHOD_INDEX_orderFrontRegardless 13
#define _METHOD_INDEX_orderOut 14
#define _METHOD_INDEX_orderWindow 15
#define _METHOD_INDEX_removeChildWindow 16
#define _METHOD_INDEX_setAlphaValue 17
#define _METHOD_INDEX_setBackgroundColor 18
#define _METHOD_INDEX_setLevel 19
#define _METHOD_INDEX_setOpaque 20
#define _METHOD_INDEX_zoom 21

$InnerClassInfo _CWrapper$NSWindow_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CWrapper$NSWindow", "sun.lwawt.macosx.CWrapper", "NSWindow", $STATIC | $FINAL},
	{}
};

$ClassInfo _CWrapper$NSWindow_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CWrapper$NSWindow",
	"java.lang.Object",
	nullptr,
	_CWrapper$NSWindow_FieldInfo_,
	_CWrapper$NSWindow_MethodInfo_,
	nullptr,
	nullptr,
	_CWrapper$NSWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CWrapper"
};

$Object* allocate$CWrapper$NSWindow($Class* clazz) {
	return $of($alloc(CWrapper$NSWindow));
}

void CWrapper$NSWindow::init$() {
}

void CWrapper$NSWindow::setLevel(int64_t window, int32_t level) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, setLevel, void, int64_t window, int32_t level);
	$invokeNativeStatic(window, level);
	$finishNativeStatic();
}

void CWrapper$NSWindow::makeKeyAndOrderFront(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, makeKeyAndOrderFront, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::makeKeyWindow(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, makeKeyWindow, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::makeMainWindow(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, makeMainWindow, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

bool CWrapper$NSWindow::canBecomeMainWindow(int64_t window) {
	$init(CWrapper$NSWindow);
	bool $ret = false;
	$prepareNativeStatic(CWrapper$NSWindow, canBecomeMainWindow, bool, int64_t window);
	$ret = $invokeNativeStatic(window);
	$finishNativeStatic();
	return $ret;
}

bool CWrapper$NSWindow::isKeyWindow(int64_t window) {
	$init(CWrapper$NSWindow);
	bool $ret = false;
	$prepareNativeStatic(CWrapper$NSWindow, isKeyWindow, bool, int64_t window);
	$ret = $invokeNativeStatic(window);
	$finishNativeStatic();
	return $ret;
}

void CWrapper$NSWindow::orderFront(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, orderFront, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::orderFrontRegardless(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, orderFrontRegardless, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::orderWindow(int64_t window, int32_t ordered, int64_t relativeTo) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, orderWindow, void, int64_t window, int32_t ordered, int64_t relativeTo);
	$invokeNativeStatic(window, ordered, relativeTo);
	$finishNativeStatic();
}

void CWrapper$NSWindow::orderOut(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, orderOut, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::close(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, close, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::addChildWindow(int64_t parent, int64_t child, int32_t ordered) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, addChildWindow, void, int64_t parent, int64_t child, int32_t ordered);
	$invokeNativeStatic(parent, child, ordered);
	$finishNativeStatic();
}

void CWrapper$NSWindow::removeChildWindow(int64_t parent, int64_t child) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, removeChildWindow, void, int64_t parent, int64_t child);
	$invokeNativeStatic(parent, child);
	$finishNativeStatic();
}

void CWrapper$NSWindow::setAlphaValue(int64_t window, float alpha) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, setAlphaValue, void, int64_t window, float alpha);
	$invokeNativeStatic(window, alpha);
	$finishNativeStatic();
}

void CWrapper$NSWindow::setOpaque(int64_t window, bool opaque) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, setOpaque, void, int64_t window, bool opaque);
	$invokeNativeStatic(window, opaque);
	$finishNativeStatic();
}

void CWrapper$NSWindow::setBackgroundColor(int64_t window, int32_t color) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, setBackgroundColor, void, int64_t window, int32_t color);
	$invokeNativeStatic(window, color);
	$finishNativeStatic();
}

void CWrapper$NSWindow::miniaturize(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, miniaturize, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::deminiaturize(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, deminiaturize, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

bool CWrapper$NSWindow::isZoomed(int64_t window) {
	$init(CWrapper$NSWindow);
	bool $ret = false;
	$prepareNativeStatic(CWrapper$NSWindow, isZoomed, bool, int64_t window);
	$ret = $invokeNativeStatic(window);
	$finishNativeStatic();
	return $ret;
}

void CWrapper$NSWindow::zoom(int64_t window) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, zoom, void, int64_t window);
	$invokeNativeStatic(window);
	$finishNativeStatic();
}

void CWrapper$NSWindow::makeFirstResponder(int64_t window, int64_t responder) {
	$init(CWrapper$NSWindow);
	$prepareNativeStatic(CWrapper$NSWindow, makeFirstResponder, void, int64_t window, int64_t responder);
	$invokeNativeStatic(window, responder);
	$finishNativeStatic();
}

CWrapper$NSWindow::CWrapper$NSWindow() {
}

$Class* CWrapper$NSWindow::load$($String* name, bool initialize) {
	$loadClass(CWrapper$NSWindow, name, initialize, &_CWrapper$NSWindow_ClassInfo_, allocate$CWrapper$NSWindow);
	return class$;
}

$Class* CWrapper$NSWindow::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun