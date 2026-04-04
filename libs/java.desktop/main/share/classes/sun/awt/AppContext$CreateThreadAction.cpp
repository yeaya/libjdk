#include <sun/awt/AppContext$CreateThreadAction.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef NORM_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

void AppContext$CreateThreadAction::init$($AppContext* ac, $Runnable* r) {
	$set(this, appContext, ac);
	$set(this, runnable, r);
}

$Object* AppContext$CreateThreadAction::run() {
	$useLocalObjectStack();
	$var($Thread, t, $new($Thread, $($nc(this->appContext)->getThreadGroup()), this->runnable, "AppContext Disposer"_s, 0, false));
	t->setContextClassLoader($(this->appContext->getContextClassLoader()));
	t->setPriority($Thread::NORM_PRIORITY + 1);
	t->setDaemon(true);
	return t;
}

AppContext$CreateThreadAction::AppContext$CreateThreadAction() {
}

$Class* AppContext$CreateThreadAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE | $FINAL, $field(AppContext$CreateThreadAction, appContext)},
		{"runnable", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(AppContext$CreateThreadAction, runnable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AppContext;Ljava/lang/Runnable;)V", nullptr, 0, $method(AppContext$CreateThreadAction, init$, void, $AppContext*, $Runnable*)},
		{"run", "()Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(AppContext$CreateThreadAction, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$CreateThreadAction", "sun.awt.AppContext", "CreateThreadAction", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.AppContext$CreateThreadAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Thread;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AppContext"
	};
	$loadClass(AppContext$CreateThreadAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$CreateThreadAction);
	});
	return class$;
}

$Class* AppContext$CreateThreadAction::class$ = nullptr;

	} // awt
} // sun