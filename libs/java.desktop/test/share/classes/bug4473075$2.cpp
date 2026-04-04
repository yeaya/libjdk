#include <bug4473075$2.h>
#include <bug4473075.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4473075 = ::bug4473075;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4473075$2::init$() {
}

void bug4473075$2::run() {
	$init($bug4473075);
	$nc($bug4473075::frame)->dispose();
}

bug4473075$2::bug4473075$2() {
}

$Class* bug4473075$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4473075$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4473075$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4473075",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4473075$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4473075$2",
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
		"bug4473075"
	};
	$loadClass(bug4473075$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4473075$2);
	});
	return class$;
}

$Class* bug4473075$2::class$ = nullptr;