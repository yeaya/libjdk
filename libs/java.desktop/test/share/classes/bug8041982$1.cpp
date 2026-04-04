#include <bug8041982$1.h>
#include <bug8041982.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $bug8041982 = ::bug8041982;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8041982$1::init$() {
}

void bug8041982$1::run() {
	$$new($bug8041982)->setVisible(true);
}

bug8041982$1::bug8041982$1() {
}

$Class* bug8041982$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8041982$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8041982$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8041982",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8041982$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8041982$1",
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
		"bug8041982"
	};
	$loadClass(bug8041982$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8041982$1);
	});
	return class$;
}

$Class* bug8041982$1::class$ = nullptr;