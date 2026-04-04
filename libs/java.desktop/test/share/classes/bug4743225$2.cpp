#include <bug4743225$2.h>
#include <bug4743225.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $bug4743225 = ::bug4743225;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4743225$2::init$() {
}

void bug4743225$2::run() {
	$$new($bug4743225)->setVisible(true);
}

bug4743225$2::bug4743225$2() {
}

$Class* bug4743225$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4743225$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4743225$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4743225",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4743225$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4743225$2",
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
		"bug4743225"
	};
	$loadClass(bug4743225$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4743225$2);
	});
	return class$;
}

$Class* bug4743225$2::class$ = nullptr;