#include <java/awt/Component$AWTTreeLock.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Component$AWTTreeLock::init$() {
}

Component$AWTTreeLock::Component$AWTTreeLock() {
}

$Class* Component$AWTTreeLock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Component$AWTTreeLock, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Component$AWTTreeLock", "java.awt.Component", "AWTTreeLock", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Component$AWTTreeLock",
		"java.lang.Object",
		nullptr,
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
	$loadClass(Component$AWTTreeLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Component$AWTTreeLock);
	});
	return class$;
}

$Class* Component$AWTTreeLock::class$ = nullptr;

	} // awt
} // java