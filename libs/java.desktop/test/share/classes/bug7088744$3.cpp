#include <bug7088744$3.h>
#include <bug7088744.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $bug7088744 = ::bug7088744;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7088744$3::init$() {
}

void bug7088744$3::run() {
	$init($bug7088744);
	$var($Point, pt, $nc($bug7088744::label)->getLocationOnScreen());
	$nc($bug7088744::point)->x = $nc(pt)->x + $nc($bug7088744::label)->getWidth() / 2;
	$nc($bug7088744::point)->y = pt->y + $nc($bug7088744::label)->getHeight() / 2;
}

bug7088744$3::bug7088744$3() {
}

$Class* bug7088744$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7088744$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7088744$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7088744",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7088744$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7088744$3",
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
		"bug7088744"
	};
	$loadClass(bug7088744$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7088744$3);
	});
	return class$;
}

$Class* bug7088744$3::class$ = nullptr;