#include <java/awt/Component$DummyRequestFocusController.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Component$DummyRequestFocusController::init$() {
}

bool Component$DummyRequestFocusController::acceptRequestFocus($Component* from, $Component* to, bool temporary, bool focusedWindowChangeAllowed, $FocusEvent$Cause* cause) {
	return true;
}

Component$DummyRequestFocusController::Component$DummyRequestFocusController() {
}

$Class* Component$DummyRequestFocusController::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Component$DummyRequestFocusController, init$, void)},
		{"acceptRequestFocus", "(Ljava/awt/Component;Ljava/awt/Component;ZZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC, $virtualMethod(Component$DummyRequestFocusController, acceptRequestFocus, bool, $Component*, $Component*, bool, bool, $FocusEvent$Cause*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Component$DummyRequestFocusController", "java.awt.Component", "DummyRequestFocusController", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Component$DummyRequestFocusController",
		"java.lang.Object",
		"sun.awt.RequestFocusController",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Component"
	};
	$loadClass(Component$DummyRequestFocusController, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Component$DummyRequestFocusController);
	});
	return class$;
}

$Class* Component$DummyRequestFocusController::class$ = nullptr;

	} // awt
} // java