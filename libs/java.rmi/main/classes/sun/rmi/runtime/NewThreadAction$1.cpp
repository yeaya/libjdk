#include <sun/rmi/runtime/NewThreadAction$1.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;

namespace sun {
	namespace rmi {
		namespace runtime {

void NewThreadAction$1::init$() {
}

$Object* NewThreadAction$1::run() {
	$useLocalObjectStack();
	$var($ThreadGroup, group, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadGroup, parent, nullptr);
	while (($assign(parent, $nc(group)->getParent())) != nullptr) {
		$assign(group, parent);
	}
	return group;
}

NewThreadAction$1::NewThreadAction$1() {
}

$Class* NewThreadAction$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NewThreadAction$1, init$, void)},
		{"run", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $virtualMethod(NewThreadAction$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.runtime.NewThreadAction",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.NewThreadAction$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.NewThreadAction$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ThreadGroup;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.runtime.NewThreadAction"
	};
	$loadClass(NewThreadAction$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NewThreadAction$1);
	});
	return class$;
}

$Class* NewThreadAction$1::class$ = nullptr;

		} // runtime
	} // rmi
} // sun