#include <java/awt/EventQueue$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void EventQueue$1::init$() {
}

void EventQueue$1::run() {
}

EventQueue$1::EventQueue$1() {
}

$Class* EventQueue$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EventQueue$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(EventQueue$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.EventQueue",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.EventQueue$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.EventQueue$1",
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
		"java.awt.EventQueue"
	};
	$loadClass(EventQueue$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$1);
	});
	return class$;
}

$Class* EventQueue$1::class$ = nullptr;

	} // awt
} // java