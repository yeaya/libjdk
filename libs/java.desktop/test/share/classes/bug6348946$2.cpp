#include <bug6348946$2.h>
#include <bug6348946.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug6348946 = ::bug6348946;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6348946$2::init$() {
}

void bug6348946$2::run() {
	$init($bug6348946);
	$nc($bug6348946::frame)->dispose();
}

bug6348946$2::bug6348946$2() {
}

$Class* bug6348946$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6348946$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6348946$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6348946",
		"stopEDT",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6348946$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6348946$2",
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
		"bug6348946"
	};
	$loadClass(bug6348946$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6348946$2);
	});
	return class$;
}

$Class* bug6348946$2::class$ = nullptr;