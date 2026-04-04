#include <java/beans/ThreadGroupContext$1.h>
#include <java/beans/ThreadGroupContext.h>
#include <java/beans/WeakIdentityMap.h>
#include <jcpp.h>

using $ThreadGroupContext = ::java::beans::ThreadGroupContext;
using $WeakIdentityMap = ::java::beans::WeakIdentityMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void ThreadGroupContext$1::init$() {
	$WeakIdentityMap::init$();
}

$Object* ThreadGroupContext$1::create(Object$* key) {
	return $new($ThreadGroupContext);
}

ThreadGroupContext$1::ThreadGroupContext$1() {
}

$Class* ThreadGroupContext$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ThreadGroupContext$1, init$, void)},
		{"create", "(Ljava/lang/Object;)Ljava/beans/ThreadGroupContext;", nullptr, $PROTECTED, $virtualMethod(ThreadGroupContext$1, create, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.ThreadGroupContext",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.ThreadGroupContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.ThreadGroupContext$1",
		"java.beans.WeakIdentityMap",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/beans/WeakIdentityMap<Ljava/beans/ThreadGroupContext;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.ThreadGroupContext"
	};
	$loadClass(ThreadGroupContext$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadGroupContext$1);
	});
	return class$;
}

$Class* ThreadGroupContext$1::class$ = nullptr;

	} // beans
} // java