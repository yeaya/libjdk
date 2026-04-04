#include <bug4252173.h>
#include <bug4252173$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug4252173$1 = ::bug4252173$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug4252173::init$() {
}

void bug4252173::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug4252173$1));
}

bug4252173::bug4252173() {
}

$Class* bug4252173::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4252173, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4252173, main, void, $StringArray*), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4252173$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4252173",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4252173$1"
	};
	$loadClass(bug4252173, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4252173);
	});
	return class$;
}

$Class* bug4252173::class$ = nullptr;