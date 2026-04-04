#include <bug6848475$4.h>
#include <bug6848475.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug6848475 = ::bug6848475;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6848475$4::init$() {
}

void bug6848475$4::run() {
	$var($Rectangle, newThumbRect, $bug6848475::getThumbRectField());
	if ($nc(newThumbRect)->x != $bug6848475::thumbRectX) {
		$throwNew($RuntimeException, "Test failed: the thumb was moved"_s);
	}
	$nc($bug6848475::frame)->dispose();
}

bug6848475$4::bug6848475$4() {
}

$Class* bug6848475$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6848475$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6848475$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6848475",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6848475$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6848475$4",
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
		"bug6848475"
	};
	$loadClass(bug6848475$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6848475$4);
	});
	return class$;
}

$Class* bug6848475$4::class$ = nullptr;