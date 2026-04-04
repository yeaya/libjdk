#include <bug6924059$1.h>
#include <bug6924059$1$1.h>
#include <bug6924059.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <jcpp.h>

using $bug6924059 = ::bug6924059;
using $bug6924059$1$1 = ::bug6924059$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JScrollBar = ::javax::swing::JScrollBar;

void bug6924059$1::init$() {
}

void bug6924059$1::run() {
	$useLocalObjectStack();
	$$new($JScrollBar)->setUI($$new($bug6924059$1$1, this));
	$init($bug6924059);
	if (!$bug6924059::isMethodCalled) {
		$throwNew($RuntimeException, "The configureScrollBarColors was not called"_s);
	}
}

bug6924059$1::bug6924059$1() {
}

$Class* bug6924059$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6924059$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6924059$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6924059",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6924059$1", nullptr, nullptr, 0},
		{"bug6924059$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6924059$1",
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
		"bug6924059"
	};
	$loadClass(bug6924059$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6924059$1);
	});
	return class$;
}

$Class* bug6924059$1::class$ = nullptr;