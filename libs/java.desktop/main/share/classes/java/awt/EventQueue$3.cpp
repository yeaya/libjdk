#include <java/awt/EventQueue$3.h>
#include <java/awt/EventQueue.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void EventQueue$3::init$() {
}

$Object* EventQueue$3::run() {
	$init($EventQueue);
	$EventQueue::fxAppThreadIsDispatchThread = "true"_s->equals($($System::getProperty("javafx.embed.singleThread"_s)));
	return nullptr;
}

EventQueue$3::EventQueue$3() {
}

$Class* EventQueue$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EventQueue$3, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(EventQueue$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.EventQueue",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventQueue$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventQueue$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.EventQueue"
	};
	$loadClass(EventQueue$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$3);
	});
	return class$;
}

$Class* EventQueue$3::class$ = nullptr;

	} // awt
} // java