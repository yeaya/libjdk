#include <bug4247996$1.h>
#include <bug4247996.h>
#include <jcpp.h>

using $bug4247996 = ::bug4247996;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4247996$1::init$() {
}

void bug4247996$1::run() {
	$bug4247996::createAndShowGUI();
}

bug4247996$1::bug4247996$1() {
}

$Class* bug4247996$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4247996$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4247996$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4247996",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4247996$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4247996$1",
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
		"bug4247996"
	};
	$loadClass(bug4247996$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4247996$1);
	});
	return class$;
}

$Class* bug4247996$1::class$ = nullptr;