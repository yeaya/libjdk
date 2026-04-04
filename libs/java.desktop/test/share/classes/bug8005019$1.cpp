#include <bug8005019$1.h>
#include <bug8005019.h>
#include <jcpp.h>

using $bug8005019 = ::bug8005019;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8005019$1::init$() {
}

void bug8005019$1::run() {
	$bug8005019::testSelectionWithFilterTable();
}

bug8005019$1::bug8005019$1() {
}

$Class* bug8005019$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8005019$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8005019$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8005019",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8005019$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8005019$1",
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
		"bug8005019"
	};
	$loadClass(bug8005019$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8005019$1);
	});
	return class$;
}

$Class* bug8005019$1::class$ = nullptr;