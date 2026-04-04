#include <bug6989617$3.h>
#include <bug6989617$MyPanel.h>
#include <bug6989617.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $bug6989617 = ::bug6989617;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6989617$3::init$() {
}

void bug6989617$3::run() {
	$useLocalObjectStack();
	$init($bug6989617);
	$var($Rectangle, pr, $nc($bug6989617::panel)->getPaintRectangle());
	if (!$$nc($nc(pr)->getSize())->equals($($nc($bug6989617::button)->getSize()))) {
		$throwNew($RuntimeException, "wrong size of the dirty area"_s);
	}
	if (!$$nc(pr->getLocation())->equals($($nc($bug6989617::button)->getLocation()))) {
		$throwNew($RuntimeException, "wrong location of the dirty area"_s);
	}
}

bug6989617$3::bug6989617$3() {
}

$Class* bug6989617$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6989617$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6989617$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6989617",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6989617$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6989617$3",
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
		"bug6989617"
	};
	$loadClass(bug6989617$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6989617$3);
	});
	return class$;
}

$Class* bug6989617$3::class$ = nullptr;