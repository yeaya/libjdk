#include <bug4816114$2.h>
#include <bug4816114.h>
#include <javax/swing/JSplitPane.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $bug4816114 = ::bug4816114;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;

void bug4816114$2::init$() {
}

void bug4816114$2::run() {
	$init($bug4816114);
	$nc($nc($bug4816114::test)->splitPane)->setOrientation($JSplitPane::VERTICAL_SPLIT);
}

bug4816114$2::bug4816114$2() {
}

$Class* bug4816114$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4816114$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4816114$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4816114",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4816114$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4816114$2",
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
		"bug4816114"
	};
	$loadClass(bug4816114$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4816114$2);
	});
	return class$;
}

$Class* bug4816114$2::class$ = nullptr;