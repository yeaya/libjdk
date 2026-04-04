#include <bug7068740$2.h>
#include <bug7068740.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $bug7068740 = ::bug7068740;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7068740$2::init$() {
}

void bug7068740$2::run() {
	$var($bug7068740, test, $new($bug7068740));
	test->setVisible(true);
}

bug7068740$2::bug7068740$2() {
}

$Class* bug7068740$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7068740$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7068740$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7068740",
		"setUp",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7068740$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7068740$2",
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
		"bug7068740"
	};
	$loadClass(bug7068740$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7068740$2);
	});
	return class$;
}

$Class* bug7068740$2::class$ = nullptr;