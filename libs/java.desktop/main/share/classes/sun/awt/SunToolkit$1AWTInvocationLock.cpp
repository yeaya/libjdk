#include <sun/awt/SunToolkit$1AWTInvocationLock.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

void SunToolkit$1AWTInvocationLock::init$() {
}

SunToolkit$1AWTInvocationLock::SunToolkit$1AWTInvocationLock() {
}

$Class* SunToolkit$1AWTInvocationLock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SunToolkit$1AWTInvocationLock, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.SunToolkit",
		"executeOnEDTAndWait",
		"(Ljava/lang/Object;Ljava/lang/Runnable;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunToolkit$1AWTInvocationLock", nullptr, "AWTInvocationLock", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.SunToolkit$1AWTInvocationLock",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.SunToolkit"
	};
	$loadClass(SunToolkit$1AWTInvocationLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunToolkit$1AWTInvocationLock);
	});
	return class$;
}

$Class* SunToolkit$1AWTInvocationLock::class$ = nullptr;

	} // awt
} // sun