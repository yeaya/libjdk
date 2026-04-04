#include <bug6989617$5.h>
#include <bug6989617$MyPanel.h>
#include <bug6989617.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $bug6989617 = ::bug6989617;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6989617$5::init$() {
}

void bug6989617$5::run() {
	$init($bug6989617);
	if ($nc($bug6989617::panel)->getPaintRectangle() != nullptr) {
		$throwNew($RuntimeException, "paint rectangle is not null"_s);
	}
	$nc($System::out)->println("Test passed..."_s);
}

bug6989617$5::bug6989617$5() {
}

$Class* bug6989617$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6989617$5, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6989617$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6989617",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6989617$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6989617$5",
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
	$loadClass(bug6989617$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6989617$5);
	});
	return class$;
}

$Class* bug6989617$5::class$ = nullptr;