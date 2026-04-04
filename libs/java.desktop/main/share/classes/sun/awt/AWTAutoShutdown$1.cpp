#include <sun/awt/AWTAutoShutdown$1.h>
#include <java/awt/AWTEvent.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

void AWTAutoShutdown$1::init$(Object$* source, int32_t id) {
	$AWTEvent::init$(source, id);
}

AWTAutoShutdown$1::AWTAutoShutdown$1() {
}

$Class* AWTAutoShutdown$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;I)V", nullptr, 0, $method(AWTAutoShutdown$1, init$, void, Object$*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.AWTAutoShutdown",
		"getShutdownEvent",
		"()Ljava/awt/AWTEvent;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAutoShutdown$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.AWTAutoShutdown$1",
		"java.awt.AWTEvent",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AWTAutoShutdown"
	};
	$loadClass(AWTAutoShutdown$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAutoShutdown$1);
	});
	return class$;
}

$Class* AWTAutoShutdown$1::class$ = nullptr;

	} // awt
} // sun