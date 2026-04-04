#include <bug8013566$1.h>
#include <bug8013566.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8013566 = ::bug8013566;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void bug8013566$1::init$() {
}

void bug8013566$1::run() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame));
	$var($Throwable, var$0, nullptr);
	try {
		frame->setUndecorated(true);
		frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
		$bug8013566::test(frame);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		frame->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bug8013566$1::bug8013566$1() {
}

$Class* bug8013566$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8013566$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8013566$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8013566",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8013566$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8013566$1",
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
		"bug8013566"
	};
	$loadClass(bug8013566$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8013566$1);
	});
	return class$;
}

$Class* bug8013566$1::class$ = nullptr;