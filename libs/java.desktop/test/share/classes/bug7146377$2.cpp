#include <bug7146377$2.h>
#include <bug7146377.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $bug7146377 = ::bug7146377;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7146377$2::init$() {
}

void bug7146377$2::run() {
	$init($bug7146377);
	$assignStatic($bug7146377::point, $nc($bug7146377::label)->getLocationOnScreen());
}

bug7146377$2::bug7146377$2() {
}

$Class* bug7146377$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7146377$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7146377$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7146377",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7146377$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7146377$2",
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
		"bug7146377"
	};
	$loadClass(bug7146377$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7146377$2);
	});
	return class$;
}

$Class* bug7146377$2::class$ = nullptr;