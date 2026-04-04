#include <bug4247996$2.h>
#include <bug4247996.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

using $bug4247996 = ::bug4247996;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug4247996$2::init$() {
}

void bug4247996$2::run() {
	$useLocalObjectStack();
	$init($bug4247996);
	if (!$$nc($nc($bug4247996::button)->getSize())->equals($($nc($bug4247996::toogleButton)->getSize()))) {
		$throwNew($RuntimeException, "Button sizes are different!"_s);
	}
}

bug4247996$2::bug4247996$2() {
}

$Class* bug4247996$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4247996$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4247996$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4247996",
		"checkButtonsSize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4247996$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4247996$2",
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
		"bug4247996"
	};
	$loadClass(bug4247996$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4247996$2);
	});
	return class$;
}

$Class* bug4247996$2::class$ = nullptr;