#include <sun/awt/AppContext$PostShutdownEventRunnable.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <sun/awt/AWTAutoShutdown.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef EVENT_QUEUE_KEY

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAutoShutdown = ::sun::awt::AWTAutoShutdown;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

void AppContext$PostShutdownEventRunnable::init$($AppContext* ac) {
	$set(this, appContext, ac);
}

void AppContext$PostShutdownEventRunnable::run() {
	$useLocalObjectStack();
	$init($AppContext);
	$var($EventQueue, eq, $cast($EventQueue, $nc(this->appContext)->get($AppContext::EVENT_QUEUE_KEY)));
	if (eq != nullptr) {
		eq->postEvent($($AWTAutoShutdown::getShutdownEvent()));
	}
}

AppContext$PostShutdownEventRunnable::AppContext$PostShutdownEventRunnable() {
}

$Class* AppContext$PostShutdownEventRunnable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE | $FINAL, $field(AppContext$PostShutdownEventRunnable, appContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AppContext;)V", nullptr, 0, $method(AppContext$PostShutdownEventRunnable, init$, void, $AppContext*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AppContext$PostShutdownEventRunnable, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$PostShutdownEventRunnable", "sun.awt.AppContext", "PostShutdownEventRunnable", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.AppContext$PostShutdownEventRunnable",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AppContext"
	};
	$loadClass(AppContext$PostShutdownEventRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$PostShutdownEventRunnable);
	});
	return class$;
}

$Class* AppContext$PostShutdownEventRunnable::class$ = nullptr;

	} // awt
} // sun