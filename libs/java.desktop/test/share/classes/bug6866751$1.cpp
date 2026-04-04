#include <bug6866751$1.h>
#include <bug6866751.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6866751 = ::bug6866751;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void bug6866751$1::init$() {
}

void bug6866751$1::run() {
	$init($bug6866751);
	$assignStatic($bug6866751::frame, $new($JFrame));
	$bug6866751::frame->setUndecorated(true);
	$nc($bug6866751::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$bug6866751::setup($bug6866751::frame);
}

bug6866751$1::bug6866751$1() {
}

$Class* bug6866751$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6866751$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6866751$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6866751",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6866751$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6866751$1",
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
		"bug6866751"
	};
	$loadClass(bug6866751$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6866751$1);
	});
	return class$;
}

$Class* bug6866751$1::class$ = nullptr;