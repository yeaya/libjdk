#include <bug7189299$2.h>
#include <bug7189299.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug7189299 = ::bug7189299;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7189299$2::init$() {
}

void bug7189299$2::run() {
	$var($Throwable, var$0, nullptr);
	try {
		$bug7189299::verifySingleDefaultButtonModelListener();
		$bug7189299::doTest();
		$bug7189299::verifySingleDefaultButtonModelListener();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init($bug7189299);
		$nc($bug7189299::frame)->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bug7189299$2::bug7189299$2() {
}

$Class* bug7189299$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7189299$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7189299$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7189299",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7189299$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7189299$2",
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
		"bug7189299"
	};
	$loadClass(bug7189299$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7189299$2);
	});
	return class$;
}

$Class* bug7189299$2::class$ = nullptr;