#include <bug4865918$1.h>
#include <bug4865918.h>
#include <jcpp.h>

using $bug4865918 = ::bug4865918;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4865918$1::init$() {
}

void bug4865918$1::run() {
	$bug4865918::createAndShowGUI();
}

bug4865918$1::bug4865918$1() {
}

$Class* bug4865918$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4865918$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4865918$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4865918",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4865918$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4865918$1",
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
		"bug4865918"
	};
	$loadClass(bug4865918$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4865918$1);
	});
	return class$;
}

$Class* bug4865918$1::class$ = nullptr;