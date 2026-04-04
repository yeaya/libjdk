#include <ScrollBarThumbVisibleTest$1.h>
#include <ScrollBarThumbVisibleTest.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $ScrollBarThumbVisibleTest = ::ScrollBarThumbVisibleTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

void ScrollBarThumbVisibleTest$1::init$() {
}

void ScrollBarThumbVisibleTest$1::run() {
	$init($ScrollBarThumbVisibleTest);
	$assignStatic($ScrollBarThumbVisibleTest::frame, $new($JFrame));
	$ScrollBarThumbVisibleTest::frame->setUndecorated(true);
	$nc($ScrollBarThumbVisibleTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$ScrollBarThumbVisibleTest::setup($ScrollBarThumbVisibleTest::frame);
}

ScrollBarThumbVisibleTest$1::ScrollBarThumbVisibleTest$1() {
}

$Class* ScrollBarThumbVisibleTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ScrollBarThumbVisibleTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ScrollBarThumbVisibleTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ScrollBarThumbVisibleTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ScrollBarThumbVisibleTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ScrollBarThumbVisibleTest$1",
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
		"ScrollBarThumbVisibleTest"
	};
	$loadClass(ScrollBarThumbVisibleTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollBarThumbVisibleTest$1);
	});
	return class$;
}

$Class* ScrollBarThumbVisibleTest$1::class$ = nullptr;