#include <java/awt/Container$WakingRunnable.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Container$WakingRunnable::init$() {
}

void Container$WakingRunnable::run() {
}

Container$WakingRunnable::Container$WakingRunnable() {
}

$Class* Container$WakingRunnable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Container$WakingRunnable, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Container$WakingRunnable, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Container$WakingRunnable", "java.awt.Container", "WakingRunnable", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.Container$WakingRunnable",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Container"
	};
	$loadClass(Container$WakingRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Container$WakingRunnable);
	});
	return class$;
}

$Class* Container$WakingRunnable::class$ = nullptr;

	} // awt
} // java