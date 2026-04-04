#include <bug6510999$1.h>
#include <bug6510999.h>
#include <jcpp.h>

using $bug6510999 = ::bug6510999;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6510999$1::init$() {
}

void bug6510999$1::run() {
	$bug6510999::createGui();
}

bug6510999$1::bug6510999$1() {
}

$Class* bug6510999$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6510999$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6510999$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6510999",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6510999$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6510999$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6510999"
	};
	$loadClass(bug6510999$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6510999$1);
	});
	return class$;
}

$Class* bug6510999$1::class$ = nullptr;