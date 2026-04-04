#include <java/awt/KeyboardFocusManager$4.h>
#include <java/awt/KeyboardFocusManager.h>
#include <jcpp.h>

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void KeyboardFocusManager$4::init$() {
}

void KeyboardFocusManager$4::run() {
	$KeyboardFocusManager::processCurrentLightweightRequests();
}

KeyboardFocusManager$4::KeyboardFocusManager$4() {
}

$Class* KeyboardFocusManager$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeyboardFocusManager$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.KeyboardFocusManager",
		"retargetFocusGained",
		"(Ljava/awt/event/FocusEvent;)Ljava/awt/event/FocusEvent;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.KeyboardFocusManager$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.KeyboardFocusManager$4",
		"java.lang.Object",
		"java.lang.Runnable",
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
	$loadClass(KeyboardFocusManager$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardFocusManager$4);
	});
	return class$;
}

$Class* KeyboardFocusManager$4::class$ = nullptr;

	} // awt
} // java