#include <bug8075609$2.h>
#include <bug8075609.h>
#include <java/awt/Component.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $bug8075609 = ::bug8075609;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug8075609$2::init$() {
}

void bug8075609$2::run() {
	$init($bug8075609);
	if (!$nc($bug8075609::textField)->hasFocus()) {
		$nc($System::out)->println("Radio Button Group Go To Next Component through Tab Key failed"_s);
		$throwNew($RuntimeException, "Focus is not on textField as Expected"_s);
	}
}

bug8075609$2::bug8075609$2() {
}

$Class* bug8075609$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8075609$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8075609$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8075609",
		"runTest1",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8075609$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8075609$2",
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
		"bug8075609"
	};
	$loadClass(bug8075609$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8075609$2);
	});
	return class$;
}

$Class* bug8075609$2::class$ = nullptr;