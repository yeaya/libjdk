#include <bug8057791$3.h>
#include <bug8057791.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8057791 = ::bug8057791;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8057791$3::init$() {
}

void bug8057791$3::run() {
	$init($bug8057791);
	$nc($bug8057791::frame)->dispose();
}

bug8057791$3::bug8057791$3() {
}

$Class* bug8057791$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8057791$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8057791$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8057791",
		"cleanUp",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8057791$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8057791$3",
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
		"bug8057791"
	};
	$loadClass(bug8057791$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8057791$3);
	});
	return class$;
}

$Class* bug8057791$3::class$ = nullptr;