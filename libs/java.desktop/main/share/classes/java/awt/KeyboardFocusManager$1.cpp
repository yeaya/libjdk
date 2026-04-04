#include <java/awt/KeyboardFocusManager$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

void KeyboardFocusManager$1::init$() {
}

int32_t KeyboardFocusManager$1::shouldNativelyFocusHeavyweight($Component* heavyweight, $Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	return $KeyboardFocusManager::shouldNativelyFocusHeavyweight(heavyweight, descendant, temporary, focusedWindowChangeAllowed, time, cause);
}

bool KeyboardFocusManager$1::processSynchronousLightweightTransfer($Component* heavyweight, $Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time) {
	return $KeyboardFocusManager::processSynchronousLightweightTransfer(heavyweight, descendant, temporary, focusedWindowChangeAllowed, time);
}

void KeyboardFocusManager$1::removeLastFocusRequest($Component* heavyweight) {
	$KeyboardFocusManager::removeLastFocusRequest(heavyweight);
}

$Component* KeyboardFocusManager$1::getMostRecentFocusOwner($Window* window) {
	return $KeyboardFocusManager::getMostRecentFocusOwner(window);
}

void KeyboardFocusManager$1::setMostRecentFocusOwner($Window* window, $Component* component) {
	$KeyboardFocusManager::setMostRecentFocusOwner(window, component);
}

$KeyboardFocusManager* KeyboardFocusManager$1::getCurrentKeyboardFocusManager($AppContext* ctx) {
	return $KeyboardFocusManager::getCurrentKeyboardFocusManager(ctx);
}

$Container* KeyboardFocusManager$1::getCurrentFocusCycleRoot() {
	$init($KeyboardFocusManager);
	return $KeyboardFocusManager::currentFocusCycleRoot;
}

KeyboardFocusManager$1::KeyboardFocusManager$1() {
}

$Class* KeyboardFocusManager$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeyboardFocusManager$1, init$, void)},
		{"getCurrentFocusCycleRoot", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$1, getCurrentFocusCycleRoot, $Container*)},
		{"getCurrentKeyboardFocusManager", "(Lsun/awt/AppContext;)Ljava/awt/KeyboardFocusManager;", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$1, getCurrentKeyboardFocusManager, $KeyboardFocusManager*, $AppContext*)},
		{"getMostRecentFocusOwner", "(Ljava/awt/Window;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$1, getMostRecentFocusOwner, $Component*, $Window*)},
		{"processSynchronousLightweightTransfer", "(Ljava/awt/Component;Ljava/awt/Component;ZZJ)Z", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$1, processSynchronousLightweightTransfer, bool, $Component*, $Component*, bool, bool, int64_t)},
		{"removeLastFocusRequest", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$1, removeLastFocusRequest, void, $Component*)},
		{"setMostRecentFocusOwner", "(Ljava/awt/Window;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$1, setMostRecentFocusOwner, void, $Window*, $Component*)},
		{"shouldNativelyFocusHeavyweight", "(Ljava/awt/Component;Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)I", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$1, shouldNativelyFocusHeavyweight, int32_t, $Component*, $Component*, bool, bool, int64_t, $FocusEvent$Cause*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.KeyboardFocusManager",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.KeyboardFocusManager$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$KeyboardFocusManagerAccessor", "sun.awt.AWTAccessor", "KeyboardFocusManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.KeyboardFocusManager$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$KeyboardFocusManagerAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.KeyboardFocusManager"
	};
	$loadClass(KeyboardFocusManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardFocusManager$1);
	});
	return class$;
}

$Class* KeyboardFocusManager$1::class$ = nullptr;

	} // awt
} // java