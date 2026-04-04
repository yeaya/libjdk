#include <java/awt/DefaultKeyboardFocusManager$1.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void DefaultKeyboardFocusManager$1::init$() {
}

void DefaultKeyboardFocusManager$1::consumeNextKeyTyped($DefaultKeyboardFocusManager* dkfm, $KeyEvent* e) {
	$nc(dkfm)->consumeNextKeyTyped(e);
}

DefaultKeyboardFocusManager$1::DefaultKeyboardFocusManager$1() {
}

$Class* DefaultKeyboardFocusManager$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultKeyboardFocusManager$1, init$, void)},
		{"consumeNextKeyTyped", "(Ljava/awt/DefaultKeyboardFocusManager;Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultKeyboardFocusManager$1, consumeNextKeyTyped, void, $DefaultKeyboardFocusManager*, $KeyEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.DefaultKeyboardFocusManager",
		"initStatic",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.DefaultKeyboardFocusManager$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor", "sun.awt.AWTAccessor", "DefaultKeyboardFocusManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.DefaultKeyboardFocusManager$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.DefaultKeyboardFocusManager"
	};
	$loadClass(DefaultKeyboardFocusManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultKeyboardFocusManager$1);
	});
	return class$;
}

$Class* DefaultKeyboardFocusManager$1::class$ = nullptr;

	} // awt
} // java