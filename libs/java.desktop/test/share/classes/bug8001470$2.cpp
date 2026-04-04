#include <bug8001470$2.h>
#include <bug8001470.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8001470 = ::bug8001470;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8001470$2::init$() {
}

void bug8001470$2::run() {
	$init($bug8001470);
	$nc($bug8001470::frame)->dispose();
}

bug8001470$2::bug8001470$2() {
}

$Class* bug8001470$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8001470$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8001470$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8001470",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8001470$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8001470$2",
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
		"bug8001470"
	};
	$loadClass(bug8001470$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8001470$2);
	});
	return class$;
}

$Class* bug8001470$2::class$ = nullptr;