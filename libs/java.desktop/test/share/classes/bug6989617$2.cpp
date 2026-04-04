#include <bug6989617$2.h>
#include <bug6989617$MyPanel.h>
#include <bug6989617.h>
#include <java/awt/Component.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $bug6989617 = ::bug6989617;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6989617$2::init$() {
}

void bug6989617$2::run() {
	$init($bug6989617);
	$nc($bug6989617::panel)->resetPaintRectangle();
	$nc($bug6989617::button)->repaint();
}

bug6989617$2::bug6989617$2() {
}

$Class* bug6989617$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6989617$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6989617$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6989617",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6989617$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6989617$2",
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
	$loadClass(bug6989617$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6989617$2);
	});
	return class$;
}

$Class* bug6989617$2::class$ = nullptr;