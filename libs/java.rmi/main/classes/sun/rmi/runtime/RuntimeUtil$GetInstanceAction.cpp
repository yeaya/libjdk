#include <sun/rmi/runtime/RuntimeUtil$GetInstanceAction.h>
#include <sun/rmi/runtime/RuntimeUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeUtil = ::sun::rmi::runtime::RuntimeUtil;

namespace sun {
	namespace rmi {
		namespace runtime {

void RuntimeUtil$GetInstanceAction::init$() {
}

$Object* RuntimeUtil$GetInstanceAction::run() {
	return $RuntimeUtil::getInstance();
}

RuntimeUtil$GetInstanceAction::RuntimeUtil$GetInstanceAction() {
}

$Class* RuntimeUtil$GetInstanceAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RuntimeUtil$GetInstanceAction, init$, void)},
		{"run", "()Lsun/rmi/runtime/RuntimeUtil;", nullptr, $PUBLIC, $virtualMethod(RuntimeUtil$GetInstanceAction, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.RuntimeUtil$GetInstanceAction", "sun.rmi.runtime.RuntimeUtil", "GetInstanceAction", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.rmi.runtime.RuntimeUtil$GetInstanceAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/rmi/runtime/RuntimeUtil;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.runtime.RuntimeUtil"
	};
	$loadClass(RuntimeUtil$GetInstanceAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RuntimeUtil$GetInstanceAction);
	});
	return class$;
}

$Class* RuntimeUtil$GetInstanceAction::class$ = nullptr;

		} // runtime
	} // rmi
} // sun