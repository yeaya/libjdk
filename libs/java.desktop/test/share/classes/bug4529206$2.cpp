#include <bug4529206$2.h>
#include <bug4529206.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4529206 = ::bug4529206;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4529206$2::init$() {
}

void bug4529206$2::run() {
	$init($bug4529206);
	$assignStatic($bug4529206::frame, $new($bug4529206));
}

bug4529206$2::bug4529206$2() {
}

$Class* bug4529206$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4529206$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4529206$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4529206",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4529206$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4529206$2",
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
		"bug4529206"
	};
	$loadClass(bug4529206$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4529206$2);
	});
	return class$;
}

$Class* bug4529206$2::class$ = nullptr;