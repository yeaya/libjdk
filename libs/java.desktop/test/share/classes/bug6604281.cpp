#include <bug6604281.h>
#include <bug6604281$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6604281$1 = ::bug6604281$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6604281::init$() {
}

void bug6604281::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6604281$1));
}

void bug6604281::fail($String* s) {
	$throwNew($RuntimeException, $$str({"Test failed: "_s, s}));
}

bug6604281::bug6604281() {
}

$Class* bug6604281::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6604281, init$, void)},
		{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6604281, fail, void, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6604281, main, void, $StringArray*), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6604281$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6604281",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6604281$1"
	};
	$loadClass(bug6604281, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6604281);
	});
	return class$;
}

$Class* bug6604281::class$ = nullptr;