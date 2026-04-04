#include <sun/awt/AppContext$6.h>
#include <java/security/AccessController.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <sun/awt/AppContext$6$1.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $AppContext = ::sun::awt::AppContext;
using $AppContext$6$1 = ::sun::awt::AppContext$6$1;

namespace sun {
	namespace awt {

void AppContext$6::init$() {
}

bool AppContext$6::hasRootThreadGroup($AppContext* ecx) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	return $$sure($Boolean, $AccessController::doPrivileged($$new($AppContext$6$1, this, ecx)))->booleanValue();
}

$Object* AppContext$6::getAppletContext() {
	$init($AppContext);
	if ($nc($AppContext::numAppContexts)->get() == 0) {
		return nullptr;
	}
	$var($AppContext, ecx, nullptr);
	if ($AppContext::numAppContexts->get() > 0) {
		$assign(ecx, ecx != nullptr ? ecx : $AppContext::getAppContext());
	}
	bool isMainAppContext = ecx == nullptr || $AppContext::mainAppContext == ecx || $AppContext::mainAppContext == nullptr && hasRootThreadGroup(ecx);
	return isMainAppContext ? ($Object*)nullptr : $of(ecx);
}

AppContext$6::AppContext$6() {
}

$Class* AppContext$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AppContext$6, init$, void)},
		{"getAppletContext", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AppContext$6, getAppletContext, $Object*)},
		{"hasRootThreadGroup", "(Lsun/awt/AppContext;)Z", nullptr, $PRIVATE, $method(AppContext$6, hasRootThreadGroup, bool, $AppContext*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.AppContext",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$6", nullptr, nullptr, 0},
		{"sun.awt.AppContext$6$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.AppContext$6",
		"java.lang.Object",
		"jdk.internal.access.JavaAWTAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AppContext"
	};
	$loadClass(AppContext$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$6);
	});
	return class$;
}

$Class* AppContext$6::class$ = nullptr;

	} // awt
} // sun