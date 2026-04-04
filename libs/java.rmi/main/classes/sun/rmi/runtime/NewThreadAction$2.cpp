#include <sun/rmi/runtime/NewThreadAction$2.h>
#include <java/lang/ThreadGroup.h>
#include <sun/rmi/runtime/NewThreadAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $NewThreadAction = ::sun::rmi::runtime::NewThreadAction;

namespace sun {
	namespace rmi {
		namespace runtime {

void NewThreadAction$2::init$() {
}

$Object* NewThreadAction$2::run() {
	$init($NewThreadAction);
	return $new($ThreadGroup, $NewThreadAction::systemThreadGroup, "RMI Runtime"_s);
}

NewThreadAction$2::NewThreadAction$2() {
}

$Class* NewThreadAction$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NewThreadAction$2, init$, void)},
		{"run", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $virtualMethod(NewThreadAction$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.runtime.NewThreadAction",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.NewThreadAction$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.NewThreadAction$2",
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
	$loadClass(NewThreadAction$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NewThreadAction$2);
	});
	return class$;
}

$Class* NewThreadAction$2::class$ = nullptr;

		} // runtime
	} // rmi
} // sun