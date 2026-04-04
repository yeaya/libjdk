#include <bug4368790$1.h>
#include <bug4368790.h>
#include <jcpp.h>

using $bug4368790 = ::bug4368790;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4368790$1::init$() {
}

void bug4368790$1::run() {
	$bug4368790::createGui();
}

bug4368790$1::bug4368790$1() {
}

$Class* bug4368790$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4368790$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4368790$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4368790",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4368790$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4368790$1",
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
		"bug4368790"
	};
	$loadClass(bug4368790$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4368790$1);
	});
	return class$;
}

$Class* bug4368790$1::class$ = nullptr;