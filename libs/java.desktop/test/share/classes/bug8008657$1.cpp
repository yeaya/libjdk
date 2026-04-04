#include <bug8008657$1.h>
#include <bug8008657.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8008657 = ::bug8008657;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8008657$1::init$() {
}

void bug8008657$1::run() {
	$init($bug8008657);
	$nc($bug8008657::frame)->dispose();
}

bug8008657$1::bug8008657$1() {
}

$Class* bug8008657$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8008657$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8008657$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8008657",
		"cleanUp",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8008657$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8008657$1",
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
		"bug8008657"
	};
	$loadClass(bug8008657$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8008657$1);
	});
	return class$;
}

$Class* bug8008657$1::class$ = nullptr;