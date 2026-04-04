#include <bug6872503$1.h>
#include <bug6872503.h>
#include <jcpp.h>

using $bug6872503 = ::bug6872503;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6872503$1::init$() {
}

void bug6872503$1::run() {
	$bug6872503::createGui();
}

bug6872503$1::bug6872503$1() {
}

$Class* bug6872503$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6872503$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6872503$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6872503",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6872503$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6872503$1",
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
		"bug6872503"
	};
	$loadClass(bug6872503$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6872503$1);
	});
	return class$;
}

$Class* bug6872503$1::class$ = nullptr;