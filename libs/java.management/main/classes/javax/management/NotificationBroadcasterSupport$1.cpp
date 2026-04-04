#include <javax/management/NotificationBroadcasterSupport$1.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace javax {
	namespace management {

void NotificationBroadcasterSupport$1::init$() {
}

void NotificationBroadcasterSupport$1::execute($Runnable* r) {
	$nc(r)->run();
}

NotificationBroadcasterSupport$1::NotificationBroadcasterSupport$1() {
}

$Class* NotificationBroadcasterSupport$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NotificationBroadcasterSupport$1, init$, void)},
		{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport$1, execute, void, $Runnable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.NotificationBroadcasterSupport",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.NotificationBroadcasterSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.NotificationBroadcasterSupport$1",
		"java.lang.Object",
		"java.util.concurrent.Executor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.NotificationBroadcasterSupport"
	};
	$loadClass(NotificationBroadcasterSupport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationBroadcasterSupport$1);
	});
	return class$;
}

$Class* NotificationBroadcasterSupport$1::class$ = nullptr;

	} // management
} // javax