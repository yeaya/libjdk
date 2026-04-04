#include <bug8075314$1.h>
#include <bug8075314.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8075314 = ::bug8075314;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void bug8075314$1::init$() {
}

void bug8075314$1::run() {
	$init($bug8075314);
	$assignStatic($bug8075314::frame, $new($JFrame));
	$bug8075314::frame->setUndecorated(true);
	$nc($bug8075314::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$bug8075314::setup($bug8075314::frame);
}

bug8075314$1::bug8075314$1() {
}

$Class* bug8075314$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8075314$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8075314$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8075314",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8075314$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8075314$1",
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
		"bug8075314"
	};
	$loadClass(bug8075314$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8075314$1);
	});
	return class$;
}

$Class* bug8075314$1::class$ = nullptr;