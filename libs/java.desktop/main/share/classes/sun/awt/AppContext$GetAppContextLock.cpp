#include <sun/awt/AppContext$GetAppContextLock.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

void AppContext$GetAppContextLock::init$() {
}

AppContext$GetAppContextLock::AppContext$GetAppContextLock() {
}

$Class* AppContext$GetAppContextLock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AppContext$GetAppContextLock, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AppContext$GetAppContextLock", "sun.awt.AppContext", "GetAppContextLock", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.AppContext$GetAppContextLock",
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
		"sun.awt.AppContext"
	};
	$loadClass(AppContext$GetAppContextLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppContext$GetAppContextLock);
	});
	return class$;
}

$Class* AppContext$GetAppContextLock::class$ = nullptr;

	} // awt
} // sun