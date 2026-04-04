#include <java/awt/EventQueue$1AWTInvocationLock.h>
#include <java/awt/EventQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void EventQueue$1AWTInvocationLock::init$() {
}

EventQueue$1AWTInvocationLock::EventQueue$1AWTInvocationLock() {
}

$Class* EventQueue$1AWTInvocationLock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EventQueue$1AWTInvocationLock, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.EventQueue",
		"invokeAndWait",
		"(Ljava/lang/Object;Ljava/lang/Runnable;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventQueue$1AWTInvocationLock", nullptr, "AWTInvocationLock", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventQueue$1AWTInvocationLock",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.EventQueue"
	};
	$loadClass(EventQueue$1AWTInvocationLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$1AWTInvocationLock);
	});
	return class$;
}

$Class* EventQueue$1AWTInvocationLock::class$ = nullptr;

	} // awt
} // java