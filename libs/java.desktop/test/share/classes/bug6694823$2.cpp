#include <bug6694823$2.h>
#include <bug6694823.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Permission = ::java::security::Permission;

void bug6694823$2::init$() {
	$SecurityManager::init$();
}

void bug6694823$2::checkPermission($Permission* perm) {
	if ($$nc($nc(perm)->getName())->equals("setWindowAlwaysOnTop"_s)) {
		$throwNew($SecurityException);
	}
}

bug6694823$2::bug6694823$2() {
}

$Class* bug6694823$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6694823$2, init$, void)},
		{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(bug6694823$2, checkPermission, void, $Permission*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6694823",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6694823$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6694823$2",
		"java.lang.SecurityManager",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6694823"
	};
	$loadClass(bug6694823$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6694823$2);
	});
	return class$;
}

$Class* bug6694823$2::class$ = nullptr;