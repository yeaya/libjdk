#include <bug8041642$1.h>
#include <bug8041642.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8041642 = ::bug8041642;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void bug8041642$1::init$() {
}

void bug8041642$1::run() {
	$init($bug8041642);
	$assignStatic($bug8041642::frame, $new($JFrame));
	$bug8041642::frame->setUndecorated(true);
	$nc($bug8041642::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$bug8041642::setup($bug8041642::frame);
}

bug8041642$1::bug8041642$1() {
}

$Class* bug8041642$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8041642$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8041642$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8041642",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8041642$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8041642$1",
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
		"bug8041642"
	};
	$loadClass(bug8041642$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8041642$1);
	});
	return class$;
}

$Class* bug8041642$1::class$ = nullptr;