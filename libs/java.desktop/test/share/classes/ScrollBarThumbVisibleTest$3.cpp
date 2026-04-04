#include <ScrollBarThumbVisibleTest$3.h>
#include <ScrollBarThumbVisibleTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ScrollBarThumbVisibleTest = ::ScrollBarThumbVisibleTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ScrollBarThumbVisibleTest$3::init$() {
}

void ScrollBarThumbVisibleTest$3::run() {
	$init($ScrollBarThumbVisibleTest);
	if ($ScrollBarThumbVisibleTest::frame != nullptr) {
		$ScrollBarThumbVisibleTest::frame->dispose();
	}
}

ScrollBarThumbVisibleTest$3::ScrollBarThumbVisibleTest$3() {
}

$Class* ScrollBarThumbVisibleTest$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ScrollBarThumbVisibleTest$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ScrollBarThumbVisibleTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ScrollBarThumbVisibleTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ScrollBarThumbVisibleTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ScrollBarThumbVisibleTest$3",
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
	$loadClass(ScrollBarThumbVisibleTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollBarThumbVisibleTest$3);
	});
	return class$;
}

$Class* ScrollBarThumbVisibleTest$3::class$ = nullptr;