#include <ScrollBarThumbVisibleTest$2.h>
#include <ScrollBarThumbVisibleTest.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

using $ScrollBarThumbVisibleTest = ::ScrollBarThumbVisibleTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ScrollBarThumbVisibleTest$2::init$() {
}

void ScrollBarThumbVisibleTest$2::run() {
	$init($ScrollBarThumbVisibleTest);
	$assignStatic($ScrollBarThumbVisibleTest::point, $nc($ScrollBarThumbVisibleTest::bar)->getLocationOnScreen());
}

ScrollBarThumbVisibleTest$2::ScrollBarThumbVisibleTest$2() {
}

$Class* ScrollBarThumbVisibleTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ScrollBarThumbVisibleTest$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ScrollBarThumbVisibleTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ScrollBarThumbVisibleTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ScrollBarThumbVisibleTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ScrollBarThumbVisibleTest$2",
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
	$loadClass(ScrollBarThumbVisibleTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollBarThumbVisibleTest$2);
	});
	return class$;
}

$Class* ScrollBarThumbVisibleTest$2::class$ = nullptr;