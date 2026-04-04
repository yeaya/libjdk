#include <sun/awt/AppContext$3.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/Map.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

void AppContext$3::init$() {
}

$Object* AppContext$3::run() {
	$useLocalObjectStack();
	$var($ThreadGroup, currentThreadGroup, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadGroup, threadGroup, currentThreadGroup);
	$init($AppContext);
	$synchronized($AppContext::getAppContextLock) {
		if ($nc($AppContext::numAppContexts)->get() == 0) {
			bool var$0 = $System::getProperty("javaplugin.version"_s) == nullptr;
			if (var$0 && $System::getProperty("javawebstart.version"_s) == nullptr) {
				$AppContext::initMainAppContext();
			} else {
				bool var$1 = $System::getProperty("javafx.version"_s) != nullptr;
				if (var$1 && $nc(threadGroup)->getParent() != nullptr) {
					$SunToolkit::createNewAppContext();
				}
			}
		}
	}
	$var($AppContext, context, $cast($AppContext, $nc($AppContext::threadGroup2appContext)->get(threadGroup)));
	while (context == nullptr) {
		$assign(threadGroup, $nc(threadGroup)->getParent());
		if (threadGroup == nullptr) {
			$var($SecurityManager, securityManager, $System::getSecurityManager());
			if (securityManager != nullptr) {
				$var($ThreadGroup, smThreadGroup, securityManager->getThreadGroup());
				if (smThreadGroup != nullptr) {
					return $cast($AppContext, $AppContext::threadGroup2appContext->get(smThreadGroup));
				}
			}
			return nullptr;
		}
		$assign(context, $cast($AppContext, $AppContext::threadGroup2appContext->get(threadGroup)));
	}
	{
		$var($ThreadGroup, tg, currentThreadGroup);
		for (; tg != threadGroup; $assign(tg, $nc(tg)->getParent())) {
			$AppContext::threadGroup2appContext->put(tg, context);
		}
	}
	$nc($AppContext::threadAppContext)->set(context);
	return context;
}

AppContext$3::AppContext$3() {
}

$Class* AppContext$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AppContext$3, init$, void)},
		{"run", "()Lsun/awt/AppContext;", nullptr, $PUBLIC, $virtualMethod(AppContext$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.AppContext",
		"getAppContext",
		"()Lsun/awt/AppContext;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.AppContext$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/awt/AppContext;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AppContext"
	};
	$loadClass(AppContext$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$3);
	});
	return class$;
}

$Class* AppContext$3::class$ = nullptr;

	} // awt
} // sun