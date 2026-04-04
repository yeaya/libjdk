#include <sun/lwawt/macosx/CCursorManager.h>
#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <java/awt/geom/Point2D.h>
#include <sun/lwawt/LWCursorManager.h>
#include <sun/lwawt/macosx/CCustomCursor.h>
#include <jcpp.h>

#undef CUSTOM_CURSOR
#undef DEFAULT_CURSOR
#undef NAMED_CURSOR

using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;
using $CCustomCursor = ::sun::lwawt::macosx::CCustomCursor;

namespace sun {
	namespace lwawt {
		namespace macosx {

CCursorManager* CCursorManager::theInstance = nullptr;

$Point2D* CCursorManager::nativeGetCursorPosition() {
	$init(CCursorManager);
	$prepareNativeStatic(nativeGetCursorPosition, $Point2D*);
	$var($Point2D, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void CCursorManager::nativeSetBuiltInCursor(int32_t type, $String* name) {
	$init(CCursorManager);
	$prepareNativeStatic(nativeSetBuiltInCursor, void, int32_t type, $String* name);
	$invokeNativeStatic(type, name);
	$finishNativeStatic();
}

void CCursorManager::nativeSetCustomCursor(int64_t imgPtr, double x, double y) {
	$init(CCursorManager);
	$prepareNativeStatic(nativeSetCustomCursor, void, int64_t imgPtr, double x, double y);
	$invokeNativeStatic(imgPtr, x, y);
	$finishNativeStatic();
}

void CCursorManager::nativeSetAllowsCursorSetInBackground(bool allows) {
	$init(CCursorManager);
	$prepareNativeStatic(nativeSetAllowsCursorSetInBackground, void, bool allows);
	$invokeNativeStatic(allows);
	$finishNativeStatic();
}

CCursorManager* CCursorManager::getInstance() {
	$init(CCursorManager);
	return CCursorManager::theInstance;
}

void CCursorManager::init$() {
	$LWCursorManager::init$();
}

$Point* CCursorManager::getCursorPosition() {
	$var($Point2D, nativePosition, nativeGetCursorPosition());
	int32_t var$0 = $cast(int32_t, $nc(nativePosition)->getX());
	return $new($Point, var$0, $cast(int32_t, nativePosition->getY()));
}

void CCursorManager::setCursor($Cursor* cursor) {
	$useLocalObjectStack();
	if (cursor == this->currentCursor) {
		return;
	}
	$set(this, currentCursor, cursor);
	if (cursor == nullptr) {
		nativeSetBuiltInCursor($Cursor::DEFAULT_CURSOR, nullptr);
		return;
	}
	if ($instanceOf($CCustomCursor, cursor)) {
		$var($CCustomCursor, customCursor, $cast($CCustomCursor, cursor));
		int64_t imagePtr = customCursor->getImageData();
		if (imagePtr != 0) {
			$var($Point, hotSpot, customCursor->getHotSpot());
			nativeSetCustomCursor(imagePtr, (double)$nc(hotSpot)->x, (double)$nc(hotSpot)->y);
		}
		return;
	}
	int32_t type = $nc(cursor)->getType();
	if (type != $Cursor::CUSTOM_CURSOR) {
		nativeSetBuiltInCursor(type, nullptr);
		return;
	}
	$var($String, name, cursor->getName());
	if (name != nullptr) {
		nativeSetBuiltInCursor(CCursorManager::NAMED_CURSOR, name);
		return;
	}
	$throwNew($RuntimeException, "Unimplemented"_s);
}

void CCursorManager::clinit$($Class* clazz) {
	$assignStatic(CCursorManager::theInstance, $new(CCursorManager));
}

CCursorManager::CCursorManager() {
}

$Class* CCursorManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NAMED_CURSOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CCursorManager, NAMED_CURSOR)},
		{"theInstance", "Lsun/lwawt/macosx/CCursorManager;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CCursorManager, theInstance)},
		{"currentCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE | $VOLATILE, $field(CCursorManager, currentCursor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CCursorManager, init$, void)},
		{"getCursorPosition", "()Ljava/awt/Point;", nullptr, $PROTECTED, $virtualMethod(CCursorManager, getCursorPosition, $Point*)},
		{"getInstance", "()Lsun/lwawt/macosx/CCursorManager;", nullptr, $PUBLIC | $STATIC, $staticMethod(CCursorManager, getInstance, CCursorManager*)},
		{"nativeGetCursorPosition", "()Ljava/awt/geom/Point2D;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CCursorManager, nativeGetCursorPosition, $Point2D*)},
		{"nativeSetAllowsCursorSetInBackground", "(Z)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(CCursorManager, nativeSetAllowsCursorSetInBackground, void, bool)},
		{"nativeSetBuiltInCursor", "(ILjava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CCursorManager, nativeSetBuiltInCursor, void, int32_t, $String*)},
		{"nativeSetCustomCursor", "(JDD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CCursorManager, nativeSetCustomCursor, void, int64_t, double, double)},
		{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PROTECTED, $virtualMethod(CCursorManager, setCursor, void, $Cursor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.macosx.CCursorManager",
		"sun.lwawt.LWCursorManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CCursorManager, name, initialize, &classInfo$$, CCursorManager::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CCursorManager);
	});
	return class$;
}

$Class* CCursorManager::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun