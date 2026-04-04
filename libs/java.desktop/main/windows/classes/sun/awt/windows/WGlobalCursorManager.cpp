#include <sun/awt/windows/WGlobalCursorManager.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <sun/awt/GlobalCursorManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlobalCursorManager = ::sun::awt::GlobalCursorManager;

namespace sun {
	namespace awt {
		namespace windows {

WGlobalCursorManager* WGlobalCursorManager::manager = nullptr;

void WGlobalCursorManager::init$() {
	$GlobalCursorManager::init$();
}

$GlobalCursorManager* WGlobalCursorManager::getCursorManager() {
	$init(WGlobalCursorManager);
	if (WGlobalCursorManager::manager == nullptr) {
		$assignStatic(WGlobalCursorManager::manager, $new(WGlobalCursorManager));
	}
	return WGlobalCursorManager::manager;
}

void WGlobalCursorManager::nativeUpdateCursor($Component* heavy) {
	$init(WGlobalCursorManager);
	$$nc(WGlobalCursorManager::getCursorManager())->updateCursorLater(heavy);
}

void WGlobalCursorManager::setCursor($Component* comp, $Cursor* cursor, bool u) {
	$prepareNative(setCursor, void, $Component* comp, $Cursor* cursor, bool u);
	$invokeNative(comp, cursor, u);
	$finishNative();
}

void WGlobalCursorManager::getCursorPos($Point* p) {
	$prepareNative(getCursorPos, void, $Point* p);
	$invokeNative(p);
	$finishNative();
}

$Component* WGlobalCursorManager::findHeavyweightUnderCursor(bool useCache) {
	$prepareNative(findHeavyweightUnderCursor, $Component*, bool useCache);
	$var($Component, $ret, $invokeNativeObject(useCache));
	$finishNative();
	return $ret;
}

$Point* WGlobalCursorManager::getLocationOnScreen($Component* com) {
	$prepareNative(getLocationOnScreen, $Point*, $Component* com);
	$var($Point, $ret, $invokeNativeObject(com));
	$finishNative();
	return $ret;
}

WGlobalCursorManager::WGlobalCursorManager() {
}

$Class* WGlobalCursorManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"manager", "Lsun/awt/windows/WGlobalCursorManager;", nullptr, $PRIVATE | $STATIC, $staticField(WGlobalCursorManager, manager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WGlobalCursorManager, init$, void)},
		{"findHeavyweightUnderCursor", "(Z)Ljava/awt/Component;", nullptr, $PROTECTED | $NATIVE, $virtualMethod(WGlobalCursorManager, findHeavyweightUnderCursor, $Component*, bool)},
		{"getCursorManager", "()Lsun/awt/GlobalCursorManager;", nullptr, $PUBLIC | $STATIC, $staticMethod(WGlobalCursorManager, getCursorManager, $GlobalCursorManager*)},
		{"getCursorPos", "(Ljava/awt/Point;)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(WGlobalCursorManager, getCursorPos, void, $Point*)},
		{"getLocationOnScreen", "(Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PROTECTED | $NATIVE, $virtualMethod(WGlobalCursorManager, getLocationOnScreen, $Point*, $Component*)},
		{"nativeUpdateCursor", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WGlobalCursorManager, nativeUpdateCursor, void, $Component*)},
		{"setCursor", "(Ljava/awt/Component;Ljava/awt/Cursor;Z)V", nullptr, $PROTECTED | $NATIVE, $virtualMethod(WGlobalCursorManager, setCursor, void, $Component*, $Cursor*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WGlobalCursorManager",
		"sun.awt.GlobalCursorManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WGlobalCursorManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WGlobalCursorManager);
	});
	return class$;
}

$Class* WGlobalCursorManager::class$ = nullptr;

		} // windows
	} // awt
} // sun