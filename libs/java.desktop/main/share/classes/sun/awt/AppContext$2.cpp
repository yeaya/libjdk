#include <sun/awt/AppContext$2.h>
#include <java/lang/ThreadGroup.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

void AppContext$2::init$() {
}

$Object* AppContext$2::run() {
	$useLocalObjectStack();
	$var($ThreadGroup, currentThreadGroup, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadGroup, parentThreadGroup, $nc(currentThreadGroup)->getParent());
	while (parentThreadGroup != nullptr) {
		$assign(currentThreadGroup, parentThreadGroup);
		$assign(parentThreadGroup, currentThreadGroup->getParent());
	}
	$init($AppContext);
	$assignStatic($AppContext::mainAppContext, $SunToolkit::createNewAppContext(currentThreadGroup));
	return nullptr;
}

AppContext$2::AppContext$2() {
}

$Class* AppContext$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AppContext$2, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AppContext$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.AppContext",
		"initMainAppContext",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.AppContext$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AppContext"
	};
	$loadClass(AppContext$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$2);
	});
	return class$;
}

$Class* AppContext$2::class$ = nullptr;

	} // awt
} // sun