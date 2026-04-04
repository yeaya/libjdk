#include <bug8079640$3.h>
#include <bug8079640.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8079640 = ::bug8079640;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug8079640$3::init$() {
}

void bug8079640$3::run() {
	$init($bug8079640);
	double var$0 = $$nc($nc($bug8079640::comp2)->getLocation())->getY();
	if (var$0 > $nc($bug8079640::frame)->getHeight()) {
		$throwNew($RuntimeException, "GroupLayout fails: comp2 is out of the window"_s);
	}
}

bug8079640$3::bug8079640$3() {
}

$Class* bug8079640$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8079640$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8079640$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8079640",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8079640$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8079640$3",
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
		"bug8079640"
	};
	$loadClass(bug8079640$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8079640$3);
	});
	return class$;
}

$Class* bug8079640$3::class$ = nullptr;